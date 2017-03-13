#include "phi_lib/phi_can.h"

#include "cenx4_ui.h"
#include "cenx4_can_bl.h"


static const CANConfig cancfg_500k = {
	.mcr =
		CAN_MCR_TXFP | // Transmit FIFO priority -  Priority driven by the request order (chronologically)
		CAN_MCR_ABOM, //  Automatic bus-off management
	.btr =
		CAN_BTR_SJW(0) |
		CAN_BTR_TS1(12) | CAN_BTR_TS2(1) | CAN_BTR_BRP(2), // 750k @ 36MHz
};


static const phi_can_msg_handler_t can_handlers[] = {
	// Bultin stuff
	PHI_CAN_BUILTIN_MSG_HANDLERS,

	// Bootloader
	CENX4_CAN_BL_MSG_HANDLERS,

	// UI
	// {PHI_CAN_MSG_ID_BERRY_SET_DISPMODE, cenx4_can_handle_set_dispmode, NULL},
	// {PHI_CAN_MSG_ID_BERRY_SET_DISPMODE_STATE, cenx4_can_handle_set_dispmode_state, NULL},
};

static const phi_can_config_t can1_cfg = {
	.drv = &CAND1,
	.drv_cfg = &cancfg_500k,
	.handlers = can_handlers,
	.n_handlers = sizeof(can_handlers) / sizeof(can_handlers[0]),
	.dev_id = CENX4_DEV_ID,
	.hw_sw_ver = CENX4_HW_SW_VER,
};



phi_can_t cenx4_can;


void cenx4_can_init(void)
{
   // phi_can_init(&cenx4_can, &can1_cfg, PHI_CAN_AUTO_ID);
	phi_can_init(&cenx4_can, &can1_cfg, PHI_CAN_AUTO_ID_ALLOCATOR_NODE);

   palSetPadMode(GPIOB, 8, PAL_MODE_ALTERNATE(9));
   palSetPadMode(GPIOB, 9, PAL_MODE_ALTERNATE(9) | PAL_STM32_OSPEED_HIGHEST);

#if 0
   {
	   int tries = 0;
	   msg_t ret;
	   cenx4_ui_t * ui;

	   for (;;)
	   {
		   ++tries;
		   ui = cenx4_ui_lock(0);
		   chsnprintf(ui->state.boot.misc_text[0], sizeof(ui->state.boot.misc_text[0])-1, "AutoId #%d", tries);
		   cenx4_ui_unlock(ui);

		   ret = phi_can_auto_get_id(&cenx4_can);
		   if (ret == MSG_OK)
		   {
			   break;
		   }
	   }

	   ui->state.boot.misc_text[0][0] = 0;
   }
#endif
}
