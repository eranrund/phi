#include "hyperion_can.h"
#include "hyperion_ui.h"


static hyperion_ui_t ui;

static font_t fonts[3];
static coord_t font_heights[3];

void (*hyperion_ui_renderers[])(hyperion_ui_t *) = {
	hyperion_ui_render_boot,
	hyperion_ui_render_texts,
	hyperion_ui_render_split_pot,
	hyperion_ui_render_logo,
	hyperion_ui_render_callback,
};

static THD_WORKING_AREA(hyperion_ui_thread_wa, 1024);
static THD_FUNCTION(hyperion_ui_thread, arg)
{
	hyperion_ui_dispmode_t last_mode = 0;

	(void) arg;

	chRegSetThreadName("ui");

	while (!chThdShouldTerminateX())
	{
		chMtxLock(&(ui.lock));
		if (ui.dispmode != last_mode)
		{
			last_mode = ui.dispmode;
			gdispGClear(ui.g, Black);
		}
		hyperion_ui_renderers[ui.dispmode](&ui);
		chMtxUnlock(&(ui.lock));

		gdispGFlush(ui.g);

		chThdSleepMilliseconds(10);
	}
}

void hyperion_ui_init_obj(hyperion_ui_t * ui, GDisplay * g)
{
	chDbgCheck((ui != NULL) && (g != NULL));

	memset(ui, 0, sizeof(*ui));
	ui->g = g;
	ui->w = gdispGGetWidth(ui->g);
	ui->h = gdispGGetHeight(ui->g);

	chMtxObjectInit(&(ui->lock));
}

void hyperion_ui_init(void)
{
	int i;

	hyperion_ui_init_obj(&ui, gdispGetDisplay(0));

	fonts[0] = gdispOpenFont("DejaVuSans10");
	font_heights[0] = gdispGetFontMetric(fonts[0], fontHeight);

	fonts[1] = gdispOpenFont("DejaVuSans12");
	font_heights[1] = gdispGetFontMetric(fonts[1], fontHeight);

	fonts[2] = gdispOpenFont("DejaVuSans20");
	font_heights[2] = gdispGetFontMetric(fonts[2], fontHeight);

	ui.dispmode = HYPERION_UI_DISPMODE_LOGO;

	chThdCreateStatic(hyperion_ui_thread_wa, sizeof(hyperion_ui_thread_wa), NORMALPRIO-10, hyperion_ui_thread, NULL);
}

hyperion_ui_t * hyperion_ui_lock(void)
{
	chMtxLock(&(ui.lock));
	return &ui;
}
void hyperion_ui_unlock(hyperion_ui_t * ui)
{
	chDbgCheck(ui);
	chMtxUnlock(&(ui->lock));
}

void hyperion_ui_text(hyperion_ui_t * ui, coord_t x, coord_t y, coord_t w, uint8_t font_idx, uint8_t justify, const char * text)
{
	gdispGFillStringBox(ui->g, x, y, w, font_heights[font_idx], text, fonts[font_idx], White, Black, justify);
}


void hyperion_ui_render_boot(hyperion_ui_t * ui)
{
	coord_t         y = 0;
	char            buf[HYPERION_UI_MAX_LINE_TEXT_LEN];
	systime_t       ping = chVTGetSystemTimeX();
	uint32_t        up_secs = ST2S(ping);
	msg_t           ret;

	hyperion_ui_text(ui, 0, 0, ui->w, hyperion_ui_get_biggest_possible_font_idx(ui, "hyperion"), justifyCenter, "hyperion");
	y += font_heights[2] + 2;

	chsnprintf(buf, sizeof(buf) - 1, "HwSw %04x", HYPERION_HW_SW_VER);
	hyperion_ui_text(ui, 0, y, ui->w, 0, justifyLeft, buf);
	y += font_heights[0] + 2;

	chsnprintf(buf, sizeof(buf) - 1, "NodeId %d", hyperion_can.node_id);
	hyperion_ui_text(ui, 0, y, ui->w, 0, justifyLeft, buf);
	y += font_heights[0] + 2;

	if (hyperion_can.node_id != PHI_CAN_AUTO_ID)
	{
		ping = chVTGetSystemTimeX();
		ret = phi_can_xfer(
			&hyperion_can,
			PHI_CAN_PRIO_LOWEST,
			PHI_CAN_MSG_ID_ECHO,
			PHI_CAN_AUTO_ID_ALLOCATOR_NODE,
			(const uint8_t *) &ping,
			sizeof(ping),
			(uint8_t *) &ping,
			sizeof(ping),
			NULL,
			PHI_CAN_DEFAULT_TIMEOUT);
		switch (ret)
		{
		case MSG_RESET:
			strcpy(buf, "P: RST");
			break;

		case MSG_TIMEOUT:
			strcpy(buf, "P: Timeout");

			break;

		case MSG_OK:
			chsnprintf(buf, sizeof(buf) - 1, "P: %2.2fms", ((float)ST2US(chVTGetSystemTimeX() - ping)) / 1000.0f);
			break;

		default:
			chDbgAssert(FALSE, "WTF");
			break;
		}
	}
	else
	{
		strcpy(buf, "P: NoNodeId");
	}
	hyperion_ui_text(ui, 0, y, ui->w, 0, justifyLeft, buf);
	y += font_heights[0] + 2;

	chsnprintf(buf, sizeof(buf) - 1, "CanOk %d", hyperion_can.stat_process_rx);
	hyperion_ui_text(ui, 0, y, ui->w, 0, justifyLeft, buf);
	y += font_heights[0] + 2;

	hyperion_ui_text(ui, 0, y, ui->w, 0, justifyLeft, ui->state.boot.misc_text);
	y += font_heights[0] + 2;

	chsnprintf(buf, sizeof(buf) - 1, "UP %02d:%02d", up_secs / 60, up_secs % 60);
	hyperion_ui_text(ui, 0, gdispGGetHeight(ui->g) - font_heights[1] - 3, ui->w, 1, justifyLeft, buf);
}

void hyperion_ui_render_texts(hyperion_ui_t * ui)
{
	int i;
	coord_t y = 0;

	uint8_t flags;
	int     font_idx;
	int     justify;

	// Texts from the top
	for (i = 0; i < HYPERION_UI_DISPMODE_TEXTS_LINES; ++i)
	{
		flags = ui->state.text.flags[i];
		if (flags & HYPERION_UI_DISPMODE_TEXT_FLAGS_BOTTOM)
		{
			continue;
		}

		font_idx = (flags & 3);
		justify = (flags >> 2) & 3;

		if (font_idx == 0)
		{
			font_idx = hyperion_ui_get_biggest_possible_font_idx(ui, ui->state.text.lines[i]);
		}
		else
		{
			font_idx--;
		}

		ui->state.text.lines[i][HYPERION_UI_MAX_LINE_TEXT_LEN - 1] = 0;
		hyperion_ui_text(ui, 0, y, ui->w, font_idx, justify, ui->state.text.lines[i]);
		y += font_heights[font_idx] + 2;
	}

	// Texts from the bottom
	y = gdispGGetHeight(ui->g) - font_heights[1] - 3;
	for (i = HYPERION_UI_DISPMODE_TEXTS_LINES - 1; i >= 0; --i)
	{
		flags = ui->state.text.flags[i];
		if (!(flags & HYPERION_UI_DISPMODE_TEXT_FLAGS_BOTTOM))
		{
			continue;
		}

		font_idx = (flags & 3);
		justify = (flags >> 2) & 3;

		if (font_idx == 0)
		{
			font_idx = hyperion_ui_get_biggest_possible_font_idx(ui, ui->state.text.lines[i]);
		}
		else
		{
			font_idx--;
		}

		ui->state.text.lines[i][HYPERION_UI_MAX_LINE_TEXT_LEN - 1] = 0;
		hyperion_ui_text(ui, 0, y, ui->w, font_idx, justify, ui->state.text.lines[i]);
		y -= font_heights[font_idx] + 2;
	}
}

void hyperion_ui_render_split_pot_helper(hyperion_ui_t * ui, struct hyperion_ui_dispmode_state_split_pot_s * pot, coord_t y)
{
	int top_font = (pot->flags & (3 << 5)) >> 5;
	const int bot_font = 0;

	char    buf[HYPERION_UI_MAX_LINE_TEXT_LEN];

	// TODO might not be needed
	gdispGFillArea(ui->g, 0, y, ui->w,  (ui->h / 2), Black);

	if (top_font == 0)
	{
		top_font = hyperion_ui_get_biggest_possible_font_idx(ui, pot->text_top);
	}
	else
	{
		top_font--;
	}
	hyperion_ui_text(ui, 0, y, ui->w, top_font, justifyCenter, pot->text_top);

	if (pot->flags & HYPERION_UI_DISPMODE_POT_FLAGS_ROUND)
	{
		gdispGDrawCircle(ui->g, ui->w / 2, y + (ui->h / 4), (ui->w / 2) - 20, White);

		if (pot->flags & HYPERION_UI_DISPMODE_POT_FLAGS_FILL)
		{
			if (pot->flags & HYPERION_UI_DISPMODE_POT_FLAGS_CENTERED)
			{
				if (pot->val > 50)
				{
					int m = 225 - phi_lib_map(pot->val, 0, 99, 10, 270);
					gdispGDrawThickArc(ui->g, ui->w / 2, y + (ui->h / 4), 7, 10, m, 90, White);
				}
				else
				{
					int m = (90 + phi_lib_map(50 - pot->val, 0, 99, 10, 270));
					gdispGDrawThickArc(ui->g, ui->w / 2, y + (ui->h / 4), 7, 10, 90, m, White);
				}

			}
			else
			{
				int m = 225 - phi_lib_map(pot->val, 0, 99, 5, 270);
				gdispGDrawThickArc(ui->g, ui->w / 2, y + (ui->h / 4), 7, 10, m, 225, White);
			}
		}
		else
		{
			coord_t center_x = ui->w / 2;
			coord_t center_y = y + (ui->h / 4);
			int deg = 135 + phi_lib_map(pot->val, 0, 99, 0, 270);

			fixed cos_m = ffcos(deg);
			fixed sin_m = ffsin(deg);

			int x1 = center_x + NONFIXED(FIXEDMUL(FIXED(5), cos_m));
			int y1 = center_y + NONFIXED(FIXEDMUL(FIXED(5), sin_m));

			int x2 = center_x + NONFIXED(FIXEDMUL(FIXED(10), cos_m));
			int y2 = center_y + NONFIXED(FIXEDMUL(FIXED(10), sin_m));

			gdispGDrawLine(ui->g, x1, y1, x2, y2, White);

		}

		y = y + (ui->h / 4) + ((ui->w / 2) - 20) + 2;
	}
	else
	{
		y += font_heights[top_font] + 4;

		gdispGFillArea(ui->g, 5, y, ui->w - 10, 8, Black);
		gdispGDrawBox(ui->g, 5, y, ui->w - 10, 8, White);
		if (pot->flags & HYPERION_UI_DISPMODE_POT_FLAGS_CENTERED)
		{
			coord_t c = ui->w / 2;
			uint8_t val = pot->val;

			gdispGDrawLine(ui->g, ui->w / 2, y, ui->w / 2, y + 7, White);

			if (val < 50)
			{
				coord_t from = phi_lib_map(49 - val, 0, 49, 0, c - 5);
				if (pot->flags & HYPERION_UI_DISPMODE_POT_FLAGS_FILL) {
					gdispGFillArea(ui->g, c - from, y + 3, from, 2, White);
				} else {
					gdispGDrawLine(ui->g, c - from, y + 2, c-from, y + 5, White);
				}
			}
			else
			{
				coord_t to = phi_lib_map(val - 50, 0, 49, 0, c - 5);
				if (pot->flags & HYPERION_UI_DISPMODE_POT_FLAGS_FILL) {
					gdispGFillArea(ui->g, c, y + 3, to, 2, White);
				} else {
					gdispGDrawLine(ui->g, c + to, y + 2, c + to, y + 5, White);
				}
			}
		}
		else
		{
			coord_t to = phi_lib_map(pot->val, 0, 99, 0, ui->w - 10);

			if (pot->flags & HYPERION_UI_DISPMODE_POT_FLAGS_FILL) {
				gdispGFillArea(ui->g, 5, y + 3, to, 2, White);
			} else {
				gdispGDrawLine(ui->g, 5 + to, y + 2, 5 + to, y + 5, White);
			}
		}
		y += 13;
	}

	// Bottom text
	if (pot->flags & HYPERION_UI_DISPMODE_POT_FLAGS_RENDER_VAL)
	{
		chsnprintf(buf, sizeof(buf) - 1, "%02d", pot->val);
		hyperion_ui_text(ui, 0, y, ui->w, bot_font, (pot->flags & HYPERION_UI_DISPMODE_POT_FLAGS_MERGE_BOTTOM) ? justifyRight : justifyCenter, buf);
		y += (pot->flags & HYPERION_UI_DISPMODE_POT_FLAGS_MERGE_BOTTOM) ? 0 : font_heights[bot_font] + 2;
	}

	hyperion_ui_text(
		ui,
		0,
		y,
		(pot->flags & HYPERION_UI_DISPMODE_POT_FLAGS_MERGE_BOTTOM) ? gdispGetStringWidth(pot->text_bottom, fonts[bot_font]) + 2 : ui->w,
		bot_font,
		(pot->flags & HYPERION_UI_DISPMODE_POT_FLAGS_MERGE_BOTTOM) ? justifyLeft : justifyCenter,
		pot->text_bottom);

	return;

	hyperion_ui_text(ui, 0, y, ui->w, top_font, justifyCenter, pot->text_top);
	y += font_heights[top_font] + 4;

	gdispGFillArea(ui->g, 5, y, ui->w - 10, 8, Black);
	gdispGDrawBox(ui->g, 5, y, ui->w - 10, 8, White);
	if (pot->flags & HYPERION_UI_DISPMODE_POT_FLAGS_CENTERED)
	{
		coord_t c = ui->w / 2;
		uint8_t val = pot->val;

		gdispGDrawLine(ui->g, ui->w / 2, y, ui->w / 2, y + 7, White);

		if (val < 50)
		{
			coord_t from = phi_lib_map(49 - val, 0, 49, 0, c - 5);
			gdispGFillArea(ui->g, c - from, y + 3, from, 2, White);
		}
		else
		{
			coord_t to = phi_lib_map(val - 50, 0, 49, 0, c - 5);
			gdispGFillArea(ui->g, c, y + 3, to, 2, White);
		}
	}
	else
	{
		gdispGFillArea(ui->g, 5, y + 3, phi_lib_map(pot->val, 0, 99, 0, ui->w - 10), 2, White);
	}
	y += 13;

	if (pot->flags & HYPERION_UI_DISPMODE_POT_FLAGS_RENDER_VAL)
	{
		chsnprintf(buf, sizeof(buf) - 1, "%02d", pot->val);
		hyperion_ui_text(ui, 0, y, ui->w, bot_font, (pot->flags & HYPERION_UI_DISPMODE_POT_FLAGS_MERGE_BOTTOM) ? justifyRight : justifyCenter, buf);
		y += (pot->flags & HYPERION_UI_DISPMODE_POT_FLAGS_MERGE_BOTTOM) ? 0 : font_heights[bot_font] + 2;
	}

	hyperion_ui_text(
		ui,
		0,
		y,
		(pot->flags & HYPERION_UI_DISPMODE_POT_FLAGS_MERGE_BOTTOM) ? gdispGetStringWidth(pot->text_bottom, fonts[bot_font]) : ui->w,
		bot_font,
		(pot->flags & HYPERION_UI_DISPMODE_POT_FLAGS_MERGE_BOTTOM) ? justifyLeft : justifyCenter,
		pot->text_bottom);
}

void hyperion_ui_render_split_pot(hyperion_ui_t * ui)
{
	hyperion_ui_render_split_pot_helper(ui, &(ui->state.split_pot.pots[0]), 0);

	if (ui->state.split_pot.flags & HYPERION_UI_DISPMODE_POT_FLAGS_DIVIDER_LINE) {
		gdispGDrawLine(ui->g, 0, ui->h / 2, ui->w, ui->h / 2, White);
	}

	hyperion_ui_render_split_pot_helper(ui, &(ui->state.split_pot.pots[1]), ui->h / 2 + 2);
}

uint8_t hyperion_ui_get_biggest_possible_font_idx(hyperion_ui_t * ui, const char * s)
{
	// Our fonts are from large to small
	if (gdispGetStringWidth(s, fonts[2]) < ui->w) return 2;
	if (gdispGetStringWidth(s, fonts[1]) < ui->w) return 1;
	return 0;
}

const uint8_t phi_logo[][8] = {
    {0, 0, 31, 255, 255, 248, 0, 0},
    {0, 0, 31, 255, 255, 248, 0, 0},
    {0, 0, 31, 255, 255, 248, 0, 0},
    {0, 0, 31, 255, 255, 248, 0, 0},
    {0, 0, 0, 31, 240, 0, 0, 0},
    {0, 0, 0, 15, 240, 0, 0, 0},
    {0, 0, 0, 15, 240, 0, 0, 0},
    {0, 0, 0, 15, 240, 0, 0, 0},
    {0, 0, 0, 15, 240, 0, 0, 0},
    {0, 0, 0, 15, 240, 0, 0, 0},
    {0, 0, 0, 63, 248, 0, 0, 0},
    {0, 0, 3, 255, 255, 192, 0, 0},
    {0, 0, 31, 255, 255, 248, 0, 0},
    {0, 0, 127, 255, 255, 254, 0, 0},
    {0, 0, 255, 143, 241, 255, 0, 0},
    {0, 3, 252, 15, 240, 127, 192, 0},
    {0, 7, 248, 15, 240, 31, 224, 0},
    {0, 15, 240, 15, 240, 31, 240, 0},
    {0, 31, 240, 15, 240, 15, 248, 0},
    {0, 31, 224, 15, 240, 15, 248, 0},
    {0, 63, 224, 15, 240, 7, 248, 0},
    {0, 63, 224, 15, 240, 7, 252, 0},
    {0, 127, 224, 15, 240, 7, 252, 0},
    {0, 63, 192, 15, 240, 7, 252, 0},
    {0, 63, 224, 15, 240, 7, 252, 0},
    {0, 63, 224, 15, 240, 7, 252, 0},
    {0, 63, 224, 15, 240, 7, 252, 0},
    {0, 63, 224, 15, 240, 7, 248, 0},
    {0, 31, 224, 15, 240, 15, 248, 0},
    {0, 31, 240, 15, 240, 15, 240, 0},
    {0, 7, 248, 15, 240, 31, 224, 0},
    {0, 3, 252, 15, 240, 63, 192, 0},
    {0, 1, 254, 15, 240, 255, 128, 0},
    {0, 0, 255, 207, 247, 254, 0, 0},
    {0, 0, 63, 255, 255, 248, 0, 0},
    {0, 0, 7, 255, 255, 224, 0, 0},
    {0, 0, 0, 255, 254, 0, 0, 0},
    {0, 0, 0, 15, 240, 0, 0, 0},
    {0, 0, 0, 15, 240, 0, 0, 0},
    {0, 0, 0, 15, 240, 0, 0, 0},
    {0, 0, 0, 15, 240, 0, 0, 0},
    {0, 0, 0, 15, 240, 0, 0, 0},
    {0, 0, 0, 15, 240, 0, 0, 0},
    {0, 0, 5, 127, 254, 96, 0, 0},
	{0, 0, 31, 255, 255, 248, 0, 0},
	{0, 0, 31, 255, 255, 248, 0, 0},
	{0, 0, 31, 255, 255, 248, 0, 0},
	{0, 0, 31, 255, 255, 248, 0, 0},
};
void hyperion_ui_render_logo(hyperion_ui_t * ui)
{
	char buf[HYPERION_UI_MAX_LINE_TEXT_LEN];

	chsnprintf(buf, sizeof(buf) - 1, "Hyperion %04x", HYPERION_HW_SW_VER);
	hyperion_ui_text(ui, 0, 0, ui->w, 1, justifyCenter, buf);

	for (uint32_t row = 0; row < PHI_ARRLEN(phi_logo); ++row)
    {
		for (int byte = 0; byte < 8; ++byte)
	    {
			for (int bit = 0; bit < 8; ++bit)
			{
				if (phi_logo[row][byte] & (1 << (7-bit)))
				{
					gdispGDrawPixel(ui->g, 32 + (byte * 8) + bit, 16 + row, White);
				}
			}
	    }
    }
}

void hyperion_ui_render_callback(hyperion_ui_t * ui)
{
	ui->state.callback.func(ui, ui->state.callback.ctx);
}
