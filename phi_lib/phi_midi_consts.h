#ifndef _PHI_MIDI_CONSTS_H_
#define _PHI_MIDI_CONSTS_H_


// MIDI Status bytes
#define MIDI_NOTE_OFF			0x80
#define MIDI_NOTE_ON			0x90
#define MIDI_POLY_PRESSURE		0xa0
#define MIDI_CONTROL_CHANGE		0xb0
#define MIDI_PROGRAM_CHANGE		0xc0
#define MIDI_CHANNEL_PRESSURE	0xd0
#define MIDI_PITCH_BEND			0xe0
#define MIDI_SYSEX_START		0xf0
#define MIDI_MTC				0xf1
#define MIDI_SONG_POSITION		0xf2
#define MIDI_SONG_SELECT		0xf3
#define MIDI_TUNE_REQUEST		0xf6
#define MIDI_SYSEX_END			0xf7
#define MIDI_RESET				0xff //	0xff never used as reset in a MIDIMessage
#define MIDI_META_EVENT			0xff //	0xff is for non MIDI messages


// MIDI Real Time Messages
#define MIDI_TIMING_CLOCK		0xf8
#define MIDI_MEASURE_END		0xf9 // proposed measure end byte
#define MIDI_START				0xfa
#define MIDI_CONTINUE			0xfb
#define MIDI_STOP				0xfc
#define MIDI_ACTIVE_SENSE		0xfe


// Controller Numbers
#define MIDI_C_LSB				0x20 // add this to a non-switch controller to access the LSB.
#define MIDI_C_GM_BANK			0x00 // general midi bank select
#define MIDI_C_MODULATION		0x01 // modulation
#define MIDI_C_BREATH			0x02 // breath controller
#define MIDI_C_FOOT				0x04 // foot controller
#define MIDI_C_PORTA_TIME		0x05 // portamento time
#define MIDI_C_DATA_ENTRY		0x06 // data entry value
#define MIDI_C_MAIN_VOLUME		0x07 // main volume control
#define MIDI_C_BALANCE			0x08 // balance control
#define MIDI_C_PAN				0x0a // panpot stereo control
#define MIDI_C_EXPRESSION		0x0b // expression control
#define MIDI_C_GENERAL_1		0x10 // general purpose controller 1
#define MIDI_C_GENERAL_2		0x11 // general purpose controller 2
#define MIDI_C_GENERAL_3		0x12 // general purpose controller 3
#define MIDI_C_GENERAL_4		0x13 // general purpose controller 4
#define MIDI_C_DAMPER			0x40 // hold pedal (sustain)
#define MIDI_C_PORTA			0x41 // portamento switch
#define MIDI_C_SOSTENUTO		0x42 // sostenuto switch
#define MIDI_C_SOFT_PEDAL		0x43 // soft pedal
#define MIDI_C_HOLD_2			0x45 // hold pedal 2
#define MIDI_C_TIMBRE			0x4a // timbre
#define MIDI_C_GENERAL_5		0x50 // general purpose controller 5
#define MIDI_C_GENERAL_6		0x51 // general purpose controller 6
#define MIDI_C_GENERAL_7		0x52 // general purpose controller 7
#define MIDI_C_GENERAL_8		0x53 // general purpose controller 8
#define MIDI_C_EFFECT_DEPTH		0x5b // external effects depth
#define MIDI_C_TREMELO_DEPTH	0x5c // tremelo depth
#define MIDI_C_CHORUS_DEPTH		0x5d // chorus depth
#define MIDI_C_CELESTE_DEPTH	0x5e // celeste (detune) depth
#define MIDI_C_PHASER_DEPTH		0x5f // phaser effect depth
#define MIDI_C_DATA_INC			0x60 // increment data value
#define MIDI_C_DATA_DEC			0x61 // decrement data value
#define MIDI_C_NONRPN_LSB		0x62 // non registered parameter LSB
#define MIDI_C_NONRPN_MSB		0x63 // non registered parameter MSB
#define MIDI_C_RPN_LSB			0x64 // registered parameter LSB
#define MIDI_C_RPN_MSB			0x65 // registered parameter MSB
#define MIDI_C_RESET			0x79 // reset all controllers
#define MIDI_C_LOCAL			0x7a // local control on/off
#define MIDI_C_ALL_NOTES_OFF	0x7b // all notes off
#define MIDI_C_OMNI_OFF			0x7c // omni off all notes off
#define MIDI_C_OMNI_ON			0x7d // omni on all notes off
#define MIDI_C_MONO				0x7e // mono on all notes off
#define MIDI_C_POLY				0x7f // poly on all notes off


#endif /* _PHI_MIDI_CONSTS_H_ */
