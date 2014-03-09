/* ----------------------------------------------------------------------------
* ergoDOX layout : bmwang
* -------------------------------------------------------------------------- */
#include <stdint.h>
#include <stddef.h>
#include <avr/pgmspace.h>
#include "../../../lib/data-types/misc.h"
#include "../../../lib/usb/usage-page/keyboard--short-names.h"
#include "../../../lib/key-functions/public.h"
#include "../matrix.h"
#include "../layout.h"
#include "../../../main.h"

// FUNCTIONS ------------------------------------------------------------------

// Custom push/pops that turn on/off the LEDs
void kbfun_layer_push_1_led(void) {
	_kb_led_3_on();
	kbfun_layer_push_1();
}

void kbfun_layer_pop_1_led(void) {
	_kb_led_3_off();
	kbfun_layer_pop_1();
}

void kbfun_layer_push_2_led(void) {
	_kb_led_2_on();
	kbfun_layer_push_2();
}

void kbfun_layer_pop_2_led(void) {
	_kb_led_2_off();
	kbfun_layer_pop_2();
}

// Custom kprrel for lighting up a LED
void kbfun_press_release_led(void) {
	if (main_arg_was_pressed) {
		_kb_led_1_off();
	} else {
		_kb_led_1_on();
	}
	kbfun_press_release();
}

// Pop whatever is on the layer stack
void kbfun_layer_pop_all(void) {
  kbfun_layer_pop_1_led();
  kbfun_layer_pop_2_led();
}

// DEFINITIONS ----------------------------------------------------------------
#define  kprrel   &kbfun_press_release_led
#define  ktog     &kbfun_toggle
#define  ktrans   &kbfun_transparent
#define  lpush1   &kbfun_layer_push_1_led
#define  lpush2   &kbfun_layer_push_2_led
#define  lpop     &kbfun_layer_pop_all
#define  lpop1    &kbfun_layer_pop_1_led
#define  lpop2    &kbfun_layer_pop_2_led
#define  dbtldr   &kbfun_jump_to_bootloader
#define  sshprre  &kbfun_shift_press_release
#define  s2kcap   &kbfun_2_keys_capslock_press_release
#define  slpunum  &kbfun_layer_push_numpad
#define  slponum  &kbfun_layer_pop_numpad
// ----------------------------------------------------------------------------

// LAYOUT ---------------------------------------------------------------------
const uint8_t PROGMEM _kb_layout[KB_LAYERS][KB_ROWS][KB_COLUMNS] = {
// LAYER 0
KB_MATRIX_LAYER(
	// unused
	0,


	// left hand

	_grave,  _1,         _2,     _3,      _4,    _5, _bracketL,
	_tab,    _quote,     _comma, _period, _P,    _Y, _bracketL,
	_ctrlL,  _A,         _O,     _E,      _U,    _I,
	_shiftL, _semicolon, _Q,     _J,      _K,    _X, 1,
	_dash,   _home,      _end,   _guiL,   _altL,
	_del,    _pageU,
	0,       0,          _pageD,
	_space,  _bs,        _esc,


	// right hand

	_bracketR, _6,     _7,      _8,         _9,    _0,    _equal,
	_bracketR, _F,     _G,      _C,         _R,    _L,    _slash,
	_D,        _H,     _T,      _N,         _S,    _dash,
	1,         _B,     _M,      _W,         _V,    _Z,    _shiftR,
	_shiftR,   _comma, _period, _semicolon, _backslash,
	_altR,     _ctrlR,
	_guiR,     0,      0,
	_shiftR,   _enter, _space
),
// LAYER 1
KB_MATRIX_LAYER(
	// unused
	0,


	// left hand

	_print,    _F1,      _F2,     _F3,     _F4,     _F5, 1,
	0,         0,        _arrowU, 0,       0,       0,   2,
	_capsLock, _arrowL,  _arrowD, _arrowR, 0,       0,
	0,         0,        0,       _arrowD, _arrowU, 0,   0,
	_volumeD,  _volumeU, 0,       0,       0,
	0,         0,
	0,         0,    0,
	0,         0,    0,


	// right hand

	0, _F6,     _F7, _F8,    _F9, _F10,    _F11,
	0, 0,       0,   0,   0,      _arrowR, _F12,
	0, _arrowL, 0,   0,   0,      0,
	0, 0,       0,   0,   0,      0,       0,
	0, 0,       0,   0,   0,
	0, 0,
	0, 0,       0,
	0, 0,       0
),
// LAYER 2
KB_MATRIX_LAYER(
	// unused
	0,


	// left hand

	_grave,    _1,     _2,   _3,    _4,    _5, _bracketL,
	_tab,      _Q,     _W,   _E,    _R,    _T, _bracketL,
	_ctrlL,    _A,     _S,   _D,    _F,    _G,
	_shiftL,   _Z,     _X,   _C,    _V,    _B, 1,
	_dash,     _home,  _end, _guiL, _altL,
	_del,      _pageU,
	0,         0,      _pageD,
	_space,    _bs,    _esc,


	// right hand

	_bracketR, _6,     _7,      _8,     _9,         _0,     _dash,
	_bracketR, _Y,     _U,      _I,     _O,         _P,     _backslash,
	_H,        _J,     _K,      _L,     _semicolon, _quote,
	1,         _N,     _M,      _comma, _period,    _slash, _shiftR,
	_shiftR,   _comma, _period, _dash,  _equal,
	_altR,     _ctrlR,
	_guiR,     0,      0,
	_shiftR,   _enter, _space
),
};
// ----------------------------------------------------------------------------

// PRESS ----------------------------------------------------------------------
const void_funptr_t PROGMEM _kb_layout_press[KB_LAYERS][KB_ROWS][KB_COLUMNS] = {
// LAYER 0
KB_MATRIX_LAYER(
	// unused
	NULL,


	// left hand

	kprrel,  kprrel, kprrel, kprrel, kprrel, kprrel, sshprre,
	kprrel,  kprrel, kprrel, kprrel, kprrel, kprrel, kprrel,
	kprrel,  kprrel, kprrel, kprrel, kprrel, kprrel,
	kprrel,  kprrel, kprrel, kprrel, kprrel, kprrel, lpush1,
	sshprre, kprrel, kprrel, kprrel, kprrel,
	kprrel,  kprrel,
	NULL,    NULL,   kprrel,
	kprrel,  kprrel, kprrel,


	// right hand

	sshprre, kprrel,  kprrel,  kprrel,  kprrel, kprrel, kprrel,
	kprrel,  kprrel,  kprrel,  kprrel,  kprrel, kprrel, kprrel,
	kprrel,  kprrel,  kprrel,  kprrel,  kprrel, kprrel,
	lpush1,  kprrel,  kprrel,  kprrel,  kprrel, kprrel, kprrel,
	kprrel,  sshprre, sshprre, sshprre, kprrel,
	kprrel,  kprrel,
	kprrel,  NULL,    NULL,
	kprrel,  kprrel,  kprrel
),
// LAYER 1
KB_MATRIX_LAYER(
	// unused
	NULL,


	// left hand

	kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, lpush1,
	NULL,   NULL,   kprrel, NULL,   NULL,   NULL,   lpush2,
	kprrel, kprrel, kprrel, kprrel, NULL,   NULL,
	NULL,   NULL,   NULL,   kprrel, kprrel, NULL,   NULL,
	kprrel, kprrel, NULL,   NULL,   NULL,
	NULL,   NULL,
	NULL,   NULL,   NULL,
	NULL,   NULL,   NULL,


	// right hand

	NULL, kprrel, kprrel, kprrel, kprrel, kprrel, kprrel,
	lpop, NULL,   NULL,   NULL,   NULL,   kprrel, kprrel,
	NULL, kprrel, NULL,   NULL,   NULL,   NULL,
	NULL, NULL,   NULL,   NULL,   NULL,   NULL,   NULL,
	NULL, NULL,   NULL,   NULL,   dbtldr,
	NULL, NULL,
	NULL, NULL,   NULL,
	NULL, NULL,   NULL
),
// LAYER 2
KB_MATRIX_LAYER(
	// unused
	NULL,


	// left hand

	kprrel,  kprrel, kprrel, kprrel, kprrel, kprrel, sshprre,
	kprrel,  kprrel, kprrel, kprrel, kprrel, kprrel, kprrel,
	kprrel,  kprrel, kprrel, kprrel, kprrel, kprrel,
	kprrel,  kprrel, kprrel, kprrel, kprrel, kprrel, lpush1,
	sshprre, kprrel, kprrel, kprrel, kprrel,
	kprrel,  kprrel,
	NULL,    NULL,   kprrel,
	kprrel,  kprrel, kprrel,


	// right hand

	sshprre, kprrel,  kprrel,  kprrel, kprrel, kprrel, kprrel,
	kprrel,  kprrel,  kprrel,  kprrel, kprrel, kprrel, kprrel,
	kprrel,  kprrel,  kprrel,  kprrel, kprrel, kprrel,
	lpush1,  kprrel,  kprrel,  kprrel, kprrel, kprrel, kprrel,
	sshprre, sshprre, sshprre, kprrel, kprrel,
	kprrel,  kprrel,
	kprrel,  NULL,    NULL,
	kprrel,  kprrel,  kprrel
),
};
// ----------------------------------------------------------------------------

// RELEASE --------------------------------------------------------------------
const void_funptr_t PROGMEM _kb_layout_release[KB_LAYERS][KB_ROWS][KB_COLUMNS] = {
// LAYER 0
KB_MATRIX_LAYER(
	// unused
	NULL,


	// left hand

	kprrel,  kprrel, kprrel, kprrel, kprrel, kprrel, sshprre,
	kprrel,  kprrel, kprrel, kprrel, kprrel, kprrel, kprrel,
	kprrel,  kprrel, kprrel, kprrel, kprrel, kprrel,
	kprrel,  kprrel, kprrel, kprrel, kprrel, kprrel, lpop1,
	sshprre, kprrel, kprrel, kprrel, kprrel,
	kprrel,  kprrel,
	NULL,    NULL,   kprrel,
	kprrel,  kprrel, kprrel,


	// right hand

	sshprre, kprrel,  kprrel,  kprrel,  kprrel, kprrel, kprrel,
	kprrel,  kprrel,  kprrel,  kprrel,  kprrel, kprrel, kprrel,
	kprrel,  kprrel,  kprrel,  kprrel,  kprrel, kprrel,
	lpop1,   kprrel,  kprrel,  kprrel,  kprrel, kprrel, kprrel,
	kprrel,  sshprre, sshprre, sshprre, kprrel,
	kprrel,  kprrel,
	kprrel,  NULL,    NULL,
	kprrel,  kprrel,  kprrel
),
// LAYER 1
KB_MATRIX_LAYER(
	// unused
	NULL,


	// left hand

	kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, NULL,
	NULL,   NULL,   kprrel, NULL,   NULL,   NULL,   NULL,
	kprrel, kprrel, kprrel, kprrel, NULL,   NULL,
	NULL,   NULL,   NULL,   kprrel, kprrel, NULL,   NULL,
	kprrel, kprrel, NULL,   NULL,   NULL,
	NULL,   NULL,
	NULL,   NULL,   NULL,
	NULL,   NULL,   NULL,


	// right hand

	NULL, kprrel, kprrel, kprrel, kprrel, kprrel, kprrel,
	NULL, NULL,   NULL,   NULL,   NULL,   kprrel, kprrel,
	NULL, kprrel, NULL,   NULL,   NULL,   NULL,
	NULL, NULL,   NULL,   NULL,   NULL,   NULL,   NULL,
	NULL, NULL,   NULL,   NULL,   NULL,
	NULL, NULL,
	NULL, NULL,   NULL,
	NULL, NULL,   NULL
),
// LAYER 2
KB_MATRIX_LAYER(
	// unused
	NULL,


	// left hand

	kprrel,  kprrel, kprrel, kprrel, kprrel, kprrel, sshprre,
	kprrel,  kprrel, kprrel, kprrel, kprrel, kprrel, kprrel,
	kprrel,  kprrel, kprrel, kprrel, kprrel, kprrel,
	kprrel,  kprrel, kprrel, kprrel, kprrel, kprrel, lpop1,
	sshprre, kprrel, kprrel, kprrel, kprrel,
	kprrel,  kprrel,
	NULL,    NULL,   kprrel,
	kprrel,  kprrel, kprrel,


	// right hand

	sshprre, kprrel,  kprrel,  kprrel, kprrel, kprrel, kprrel,
	kprrel,  kprrel,  kprrel,  kprrel, kprrel, kprrel, kprrel,
	kprrel,  kprrel,  kprrel,  kprrel, kprrel, kprrel,
	lpop1,   kprrel,  kprrel,  kprrel, kprrel, kprrel, kprrel,
	sshprre, sshprre, sshprre, kprrel, kprrel,
	kprrel,  kprrel,
	kprrel,  NULL,    NULL,
	kprrel,  kprrel,  kprrel
),
};
// ----------------------------------------------------------------------------
