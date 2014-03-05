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
// FUNCTIONS ------------------------------------------------------------------
void kbfun_layer_pop_all(void) {
  kbfun_layer_pop_1();
  kbfun_layer_pop_2();
  kbfun_layer_pop_3();
  kbfun_layer_pop_4();
  kbfun_layer_pop_5();
  kbfun_layer_pop_6();
  kbfun_layer_pop_7();
  kbfun_layer_pop_8();
  kbfun_layer_pop_9();
  kbfun_layer_pop_10();
}

// DEFINITIONS ----------------------------------------------------------------
#define  kprrel   &kbfun_press_release
#define  ktog     &kbfun_toggle
#define  ktrans   &kbfun_transparent
#define  lpush1   &kbfun_layer_push_1
#define  lpush2   &kbfun_layer_push_2
#define  lpush3   &kbfun_layer_push_3
#define  lpush4   &kbfun_layer_push_4
#define  lpush5   &kbfun_layer_push_5
#define  lpush6   &kbfun_layer_push_6
#define  lpush7   &kbfun_layer_push_7
#define  lpush8   &kbfun_layer_push_8
#define  lpush9   &kbfun_layer_push_9
#define  lpush10  &kbfun_layer_push_10
#define  lpop     &kbfun_layer_pop_all
#define  lpop1    &kbfun_layer_pop_1
#define  lpop2    &kbfun_layer_pop_2
#define  lpop3    &kbfun_layer_pop_3
#define  lpop4    &kbfun_layer_pop_4
#define  lpop5    &kbfun_layer_pop_5
#define  lpop6    &kbfun_layer_pop_6
#define  lpop7    &kbfun_layer_pop_7
#define  lpop8    &kbfun_layer_pop_8
#define  lpop9    &kbfun_layer_pop_9
#define  lpop10   &kbfun_layer_pop_10
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
	KEY_GraveAccent_Tilde,    KEY_1_Exclamation,    KEY_2_At,    KEY_3_Pound,    KEY_4_Dollar,    KEY_5_Percent,    KEY_LeftBracket_LeftBrace,
	KEY_Tab,    KEY_SingleQuote_DoubleQuote,    KEY_Comma_LessThan,    KEY_Period_GreaterThan,    KEY_p_P,    KEY_y_Y,    KEY_LeftBracket_LeftBrace,
	KEY_LeftControl,    KEY_a_A,    KEY_o_O,    KEY_e_E,    KEY_u_U,    KEY_i_I,
	KEY_LeftShift,    KEY_Semicolon_Colon,    KEY_q_Q,    KEY_j_J,    KEY_k_K,    KEY_x_X,    1,
	0x2D,    KEY_Home,    KEY_End,    KEY_LeftGUI,    KEY_LeftAlt,
	KEY_DeleteForward,    KEY_PageUp,
	0,    0,    KEY_PageDown,
	KEY_Spacebar,    KEY_DeleteBackspace,    KEY_Escape,
	// right hand
	KEY_RightBracket_RightBrace,    KEY_6_Caret,    KEY_7_Ampersand,    KEY_8_Asterisk,    KEY_9_LeftParenthesis,    KEY_0_RightParenthesis,    KEY_Equal_Plus,
	KEY_RightBracket_RightBrace,    KEY_f_F,    KEY_g_G,    KEY_c_C,    KEY_r_R,    KEY_l_L,    KEY_Slash_Question,
	KEY_d_D,    KEY_h_H,    KEY_t_T,    KEY_n_N,    KEY_s_S,    KEY_Dash_Underscore,
	1,    KEY_b_B,    KEY_m_M,    KEY_w_W,    KEY_v_V,    KEY_z_Z,    KEY_RightShift,
	KEY_RightShift,    0x36,    0x37,    0x33,    KEY_Backslash_Pipe,
	KEY_RightAlt,    KEY_RightControl,
	KEY_RightGUI,    0,    0,
	KEY_RightShift,    KEY_ReturnEnter,    KEY_Spacebar
),
// LAYER 1
KB_MATRIX_LAYER(
	// unused
	0,
	// left hand
	KEY_PrintScreen,    KEY_F1,    KEY_F2,    KEY_F3,    KEY_F4,    KEY_F5,    1,
	0,    0,    KEY_UpArrow,    0,    0,    0,    2,
	KEY_CapsLock,    KEY_LeftArrow,    KEY_DownArrow,    KEY_RightArrow,    0,    0,
	0,    0,    0,    KEY_DownArrow,    KEY_UpArrow,    0,    0,
	KEY_VolumeDown,    KEY_VolumeUp,    0,    0,    0,
	0,    0,
	0,    0,    0,
	0,    0,    0,
	// right hand
	0,    KEY_F6,    KEY_F7,    KEY_F8,    KEY_F9,    KEY_F10,    KEY_F11,
	0,    0,    0,    0,    0,    KEY_RightArrow,    KEY_F12,
	0,    KEY_LeftArrow,    0,    0,    0,    0,
	0,    0,    0,    0,    0,    0,    0,
	0,    0,    0,    0,    0,
	0,    0,
	0,    0,    0,
	0,    0,    0
),
// LAYER 2
KB_MATRIX_LAYER(
	// unused
	0,
	// left hand
	KEY_GraveAccent_Tilde,    KEY_1_Exclamation,    KEY_2_At,    KEY_3_Pound,    KEY_4_Dollar,    KEY_5_Percent,    0x2F,
	KEY_Tab,    KEY_q_Q,    KEY_w_W,    KEY_e_E,    KEY_r_R,    KEY_t_T,    KEY_LeftBracket_LeftBrace,
	KEY_LeftControl,    KEY_a_A,    KEY_s_S,    KEY_d_D,    KEY_f_F,    KEY_g_G,
	KEY_LeftShift,    KEY_z_Z,    KEY_x_X,    KEY_c_C,    KEY_v_V,    KEY_b_B,    1,
	0x2D,    KEY_Home,    KEY_End,    KEY_LeftGUI,    KEY_LeftAlt,
	KEY_DeleteForward,    KEY_PageUp,
	0,    0,    KEY_PageDown,
	KEY_Spacebar,    KEY_DeleteBackspace,    KEY_Escape,
	// right hand
	0x30,    KEY_6_Caret,    KEY_7_Ampersand,    KEY_8_Asterisk,    KEY_9_LeftParenthesis,    KEY_0_RightParenthesis,    KEY_Dash_Underscore,
	KEY_RightBracket_RightBrace,    KEY_y_Y,    KEY_u_U,    KEY_i_I,    KEY_o_O,    KEY_p_P,    KEY_Backslash_Pipe,
	KEY_h_H,    KEY_j_J,    KEY_k_K,    KEY_l_L,    KEY_Semicolon_Colon,    KEY_SingleQuote_DoubleQuote,
	1,    KEY_n_N,    KEY_m_M,    KEY_Comma_LessThan,    KEY_Period_GreaterThan,    KEY_Slash_Question,    KEY_LeftShift,
	0x33,    0x36,    0x37,    KEY_Dash_Underscore,    KEY_Equal_Plus,
	KEY_RightAlt,    KEY_LeftControl,
	KEY_LeftAlt,    0,    0,
	KEY_LeftShift,    KEY_ReturnEnter,    KEY_Spacebar
),
// LAYER 3
KB_MATRIX_LAYER(
	// unused
	0,
	// left hand
	0,    0,    0,    0,    0,    0,    0,
	0,    0,    0,    0,    0,    0,    0,
	0,    0,    0,    0,    0,    0,
	0,    0,    0,    0,    0,    0,    0,
	0,    0,    0,    0,    0,
	0,    0,
	0,    0,    0,
	0,    0,    0,
	// right hand
	0,    0,    0,    0,    0,    0,    0,
	0,    0,    0,    0,    0,    0,    0,
	0,    0,    0,    0,    0,    0,
	0,    0,    0,    0,    0,    0,    0,
	0,    0,    0,    0,    0,
	0,    0,
	0,    0,    0,
	0,    0,    0
),
// LAYER 4
KB_MATRIX_LAYER(
	// unused
	0,
	// left hand
	0,    0,    0,    0,    0,    0,    0,
	0,    0,    0,    0,    0,    0,    0,
	0,    0,    0,    0,    0,    0,
	0,    0,    0,    0,    0,    0,    0,
	0,    0,    0,    0,    0,
	0,    0,
	0,    0,    0,
	0,    0,    0,
	// right hand
	0,    0,    0,    0,    0,    0,    0,
	0,    0,    0,    0,    0,    0,    0,
	0,    0,    0,    0,    0,    0,
	0,    0,    0,    0,    0,    0,    0,
	0,    0,    0,    0,    0,
	0,    0,
	0,    0,    0,
	0,    0,    0
),
// LAYER 5
KB_MATRIX_LAYER(
	// unused
	0,
	// left hand
	0,    0,    0,    0,    0,    0,    0,
	0,    0,    0,    0,    0,    0,    0,
	0,    0,    0,    0,    0,    0,
	0,    0,    0,    0,    0,    0,    0,
	0,    0,    0,    0,    0,
	0,    0,
	0,    0,    0,
	0,    0,    0,
	// right hand
	0,    0,    0,    0,    0,    0,    0,
	0,    0,    0,    0,    0,    0,    0,
	0,    0,    0,    0,    0,    0,
	0,    0,    0,    0,    0,    0,    0,
	0,    0,    0,    0,    0,
	0,    0,
	0,    0,    0,
	0,    0,    0
),
// LAYER 6
KB_MATRIX_LAYER(
	// unused
	0,
	// left hand
	0,    0,    0,    0,    0,    0,    0,
	0,    0,    0,    0,    0,    0,    0,
	0,    0,    0,    0,    0,    0,
	0,    0,    0,    0,    0,    0,    0,
	0,    0,    0,    0,    0,
	0,    0,
	0,    0,    0,
	0,    0,    0,
	// right hand
	0,    0,    0,    0,    0,    0,    0,
	0,    0,    0,    0,    0,    0,    0,
	0,    0,    0,    0,    0,    0,
	0,    0,    0,    0,    0,    0,    0,
	0,    0,    0,    0,    0,
	0,    0,
	0,    0,    0,
	0,    0,    0
),
// LAYER 7
KB_MATRIX_LAYER(
	// unused
	0,
	// left hand
	0,    0,    0,    0,    0,    0,    0,
	0,    0,    0,    0,    0,    0,    0,
	0,    0,    0,    0,    0,    0,
	0,    0,    0,    0,    0,    0,    0,
	0,    0,    0,    0,    0,
	0,    0,
	0,    0,    0,
	0,    0,    0,
	// right hand
	0,    0,    0,    0,    0,    0,    0,
	0,    0,    0,    0,    0,    0,    0,
	0,    0,    0,    0,    0,    0,
	0,    0,    0,    0,    0,    0,    0,
	0,    0,    0,    0,    0,
	0,    0,
	0,    0,    0,
	0,    0,    0
),
// LAYER 8
KB_MATRIX_LAYER(
	// unused
	0,
	// left hand
	0,    0,    0,    0,    0,    0,    0,
	0,    0,    0,    0,    0,    0,    0,
	0,    0,    0,    0,    0,    0,
	0,    0,    0,    0,    0,    0,    0,
	0,    0,    0,    0,    0,
	0,    0,
	0,    0,    0,
	0,    0,    0,
	// right hand
	0,    0,    0,    0,    0,    0,    0,
	0,    0,    0,    0,    0,    0,    0,
	0,    0,    0,    0,    0,    0,
	0,    0,    0,    0,    0,    0,    0,
	0,    0,    0,    0,    0,
	0,    0,
	0,    0,    0,
	0,    0,    0
),
// LAYER 9
KB_MATRIX_LAYER(
	// unused
	0,
	// left hand
	0,    0,    0,    0,    0,    0,    0,
	0,    0,    0,    0,    0,    0,    0,
	0,    0,    0,    0,    0,    0,
	0,    0,    0,    0,    0,    0,    0,
	0,    0,    0,    0,    0,
	0,    0,
	0,    0,    0,
	0,    0,    0,
	// right hand
	0,    0,    0,    0,    0,    0,    0,
	0,    0,    0,    0,    0,    0,    0,
	0,    0,    0,    0,    0,    0,
	0,    0,    0,    0,    0,    0,    0,
	0,    0,    0,    0,    0,
	0,    0,
	0,    0,    0,
	0,    0,    0
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
	kprrel,    kprrel,    kprrel,    kprrel,    kprrel,    kprrel,    sshprre,
	kprrel,    kprrel,    kprrel,    kprrel,    kprrel,    kprrel,    kprrel,
	kprrel,    kprrel,    kprrel,    kprrel,    kprrel,    kprrel,
	kprrel,    kprrel,    kprrel,    kprrel,    kprrel,    kprrel,    lpush1,
	sshprre,    kprrel,    kprrel,    kprrel,    kprrel,
	kprrel,    kprrel,
	NULL,    NULL,    kprrel,
	kprrel,    kprrel,    kprrel,
	// right hand
	sshprre,    kprrel,    kprrel,    kprrel,    kprrel,    kprrel,    kprrel,
	kprrel,    kprrel,    kprrel,    kprrel,    kprrel,    kprrel,    kprrel,
	kprrel,    kprrel,    kprrel,    kprrel,    kprrel,    kprrel,
	lpush1,    kprrel,    kprrel,    kprrel,    kprrel,    kprrel,    kprrel,
	kprrel,    sshprre,    sshprre,    sshprre,    kprrel,
	kprrel,    kprrel,
	kprrel,    NULL,    NULL,
	kprrel,    kprrel,    kprrel
),
// LAYER 1
KB_MATRIX_LAYER(
	// unused
	NULL,
	// left hand
	kprrel,    kprrel,    kprrel,    kprrel,    kprrel,    kprrel,    lpush1,
	NULL,    NULL,    kprrel,    NULL,    NULL,    NULL,    lpush2,
	kprrel,    kprrel,    kprrel,    kprrel,    NULL,    NULL,
	NULL,    NULL,    NULL,    kprrel,    kprrel,    NULL,    NULL,
	kprrel,    kprrel,    NULL,    NULL,    NULL,
	NULL,    NULL,
	NULL,    NULL,    NULL,
	NULL,    NULL,    NULL,
	// right hand
	NULL,    kprrel,    kprrel,    kprrel,    kprrel,    kprrel,    kprrel,
	lpop,    NULL,    NULL,    NULL,    NULL,    kprrel,    kprrel,
	NULL,    kprrel,    NULL,    NULL,    NULL,    NULL,
	NULL,    NULL,    NULL,    NULL,    NULL,    NULL,    NULL,
	NULL,    NULL,    NULL,    NULL,    dbtldr,
	NULL,    NULL,
	NULL,    NULL,    NULL,
	NULL,    NULL,    NULL
),
// LAYER 2
KB_MATRIX_LAYER(
	// unused
	NULL,
	// left hand
	kprrel,    kprrel,    kprrel,    kprrel,    kprrel,    kprrel,    sshprre,
	kprrel,    kprrel,    kprrel,    kprrel,    kprrel,    kprrel,    kprrel,
	kprrel,    kprrel,    kprrel,    kprrel,    kprrel,    kprrel,
	kprrel,    kprrel,    kprrel,    kprrel,    kprrel,    kprrel,    lpush1,
	sshprre,    kprrel,    kprrel,    kprrel,    kprrel,
	kprrel,    kprrel,
	NULL,    NULL,    kprrel,
	kprrel,    kprrel,    kprrel,
	// right hand
	sshprre,    kprrel,    kprrel,    kprrel,    kprrel,    kprrel,    kprrel,
	kprrel,    kprrel,    kprrel,    kprrel,    kprrel,    kprrel,    kprrel,
	kprrel,    kprrel,    kprrel,    kprrel,    kprrel,    kprrel,
	lpush1,    kprrel,    kprrel,    kprrel,    kprrel,    kprrel,    kprrel,
	sshprre,    sshprre,    sshprre,    kprrel,    kprrel,
	kprrel,    kprrel,
	kprrel,    NULL,    NULL,
	kprrel,    kprrel,    kprrel
),
// LAYER 3
KB_MATRIX_LAYER(
	// unused
	NULL,
	// left hand
	NULL,    NULL,    NULL,    NULL,    NULL,    NULL,    NULL,
	NULL,    NULL,    NULL,    NULL,    NULL,    NULL,    NULL,
	NULL,    NULL,    NULL,    NULL,    NULL,    NULL,
	NULL,    NULL,    NULL,    NULL,    NULL,    NULL,    NULL,
	NULL,    NULL,    NULL,    NULL,    NULL,
	NULL,    NULL,
	NULL,    NULL,    NULL,
	NULL,    NULL,    NULL,
	// right hand
	NULL,    NULL,    NULL,    NULL,    NULL,    NULL,    NULL,
	NULL,    NULL,    NULL,    NULL,    NULL,    NULL,    NULL,
	NULL,    NULL,    NULL,    NULL,    NULL,    NULL,
	NULL,    NULL,    NULL,    NULL,    NULL,    NULL,    NULL,
	NULL,    NULL,    NULL,    NULL,    NULL,
	NULL,    NULL,
	NULL,    NULL,    NULL,
	NULL,    NULL,    NULL
),
// LAYER 4
KB_MATRIX_LAYER(
	// unused
	NULL,
	// left hand
	NULL,    NULL,    NULL,    NULL,    NULL,    NULL,    NULL,
	NULL,    NULL,    NULL,    NULL,    NULL,    NULL,    NULL,
	NULL,    NULL,    NULL,    NULL,    NULL,    NULL,
	NULL,    NULL,    NULL,    NULL,    NULL,    NULL,    NULL,
	NULL,    NULL,    NULL,    NULL,    NULL,
	NULL,    NULL,
	NULL,    NULL,    NULL,
	NULL,    NULL,    NULL,
	// right hand
	NULL,    NULL,    NULL,    NULL,    NULL,    NULL,    NULL,
	NULL,    NULL,    NULL,    NULL,    NULL,    NULL,    NULL,
	NULL,    NULL,    NULL,    NULL,    NULL,    NULL,
	NULL,    NULL,    NULL,    NULL,    NULL,    NULL,    NULL,
	NULL,    NULL,    NULL,    NULL,    NULL,
	NULL,    NULL,
	NULL,    NULL,    NULL,
	NULL,    NULL,    NULL
),
// LAYER 5
KB_MATRIX_LAYER(
	// unused
	NULL,
	// left hand
	NULL,    NULL,    NULL,    NULL,    NULL,    NULL,    NULL,
	NULL,    NULL,    NULL,    NULL,    NULL,    NULL,    NULL,
	NULL,    NULL,    NULL,    NULL,    NULL,    NULL,
	NULL,    NULL,    NULL,    NULL,    NULL,    NULL,    NULL,
	NULL,    NULL,    NULL,    NULL,    NULL,
	NULL,    NULL,
	NULL,    NULL,    NULL,
	NULL,    NULL,    NULL,
	// right hand
	NULL,    NULL,    NULL,    NULL,    NULL,    NULL,    NULL,
	NULL,    NULL,    NULL,    NULL,    NULL,    NULL,    NULL,
	NULL,    NULL,    NULL,    NULL,    NULL,    NULL,
	NULL,    NULL,    NULL,    NULL,    NULL,    NULL,    NULL,
	NULL,    NULL,    NULL,    NULL,    NULL,
	NULL,    NULL,
	NULL,    NULL,    NULL,
	NULL,    NULL,    NULL
),
// LAYER 6
KB_MATRIX_LAYER(
	// unused
	NULL,
	// left hand
	NULL,    NULL,    NULL,    NULL,    NULL,    NULL,    NULL,
	NULL,    NULL,    NULL,    NULL,    NULL,    NULL,    NULL,
	NULL,    NULL,    NULL,    NULL,    NULL,    NULL,
	NULL,    NULL,    NULL,    NULL,    NULL,    NULL,    NULL,
	NULL,    NULL,    NULL,    NULL,    NULL,
	NULL,    NULL,
	NULL,    NULL,    NULL,
	NULL,    NULL,    NULL,
	// right hand
	NULL,    NULL,    NULL,    NULL,    NULL,    NULL,    NULL,
	NULL,    NULL,    NULL,    NULL,    NULL,    NULL,    NULL,
	NULL,    NULL,    NULL,    NULL,    NULL,    NULL,
	NULL,    NULL,    NULL,    NULL,    NULL,    NULL,    NULL,
	NULL,    NULL,    NULL,    NULL,    NULL,
	NULL,    NULL,
	NULL,    NULL,    NULL,
	NULL,    NULL,    NULL
),
// LAYER 7
KB_MATRIX_LAYER(
	// unused
	NULL,
	// left hand
	NULL,    NULL,    NULL,    NULL,    NULL,    NULL,    NULL,
	NULL,    NULL,    NULL,    NULL,    NULL,    NULL,    NULL,
	NULL,    NULL,    NULL,    NULL,    NULL,    NULL,
	NULL,    NULL,    NULL,    NULL,    NULL,    NULL,    NULL,
	NULL,    NULL,    NULL,    NULL,    NULL,
	NULL,    NULL,
	NULL,    NULL,    NULL,
	NULL,    NULL,    NULL,
	// right hand
	NULL,    NULL,    NULL,    NULL,    NULL,    NULL,    NULL,
	NULL,    NULL,    NULL,    NULL,    NULL,    NULL,    NULL,
	NULL,    NULL,    NULL,    NULL,    NULL,    NULL,
	NULL,    NULL,    NULL,    NULL,    NULL,    NULL,    NULL,
	NULL,    NULL,    NULL,    NULL,    NULL,
	NULL,    NULL,
	NULL,    NULL,    NULL,
	NULL,    NULL,    NULL
),
// LAYER 8
KB_MATRIX_LAYER(
	// unused
	NULL,
	// left hand
	NULL,    NULL,    NULL,    NULL,    NULL,    NULL,    NULL,
	NULL,    NULL,    NULL,    NULL,    NULL,    NULL,    NULL,
	NULL,    NULL,    NULL,    NULL,    NULL,    NULL,
	NULL,    NULL,    NULL,    NULL,    NULL,    NULL,    NULL,
	NULL,    NULL,    NULL,    NULL,    NULL,
	NULL,    NULL,
	NULL,    NULL,    NULL,
	NULL,    NULL,    NULL,
	// right hand
	NULL,    NULL,    NULL,    NULL,    NULL,    NULL,    NULL,
	NULL,    NULL,    NULL,    NULL,    NULL,    NULL,    NULL,
	NULL,    NULL,    NULL,    NULL,    NULL,    NULL,
	NULL,    NULL,    NULL,    NULL,    NULL,    NULL,    NULL,
	NULL,    NULL,    NULL,    NULL,    NULL,
	NULL,    NULL,
	NULL,    NULL,    NULL,
	NULL,    NULL,    NULL
),
// LAYER 9
KB_MATRIX_LAYER(
	// unused
	NULL,
	// left hand
	NULL,    NULL,    NULL,    NULL,    NULL,    NULL,    NULL,
	NULL,    NULL,    NULL,    NULL,    NULL,    NULL,    NULL,
	NULL,    NULL,    NULL,    NULL,    NULL,    NULL,
	NULL,    NULL,    NULL,    NULL,    NULL,    NULL,    NULL,
	NULL,    NULL,    NULL,    NULL,    NULL,
	NULL,    NULL,
	NULL,    NULL,    NULL,
	NULL,    NULL,    NULL,
	// right hand
	NULL,    NULL,    NULL,    NULL,    NULL,    NULL,    NULL,
	NULL,    NULL,    NULL,    NULL,    NULL,    NULL,    NULL,
	NULL,    NULL,    NULL,    NULL,    NULL,    NULL,
	NULL,    NULL,    NULL,    NULL,    NULL,    NULL,    NULL,
	NULL,    NULL,    NULL,    NULL,    NULL,
	NULL,    NULL,
	NULL,    NULL,    NULL,
	NULL,    NULL,    NULL
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
	kprrel,    kprrel,    kprrel,    kprrel,    kprrel,    kprrel,    sshprre,
	kprrel,    kprrel,    kprrel,    kprrel,    kprrel,    kprrel,    kprrel,
	kprrel,    kprrel,    kprrel,    kprrel,    kprrel,    kprrel,
	kprrel,    kprrel,    kprrel,    kprrel,    kprrel,    kprrel,    lpop1,
	sshprre,    kprrel,    kprrel,    kprrel,    kprrel,
	kprrel,    kprrel,
	NULL,    NULL,    kprrel,
	kprrel,    kprrel,    kprrel,
	// right hand
	sshprre,    kprrel,    kprrel,    kprrel,    kprrel,    kprrel,    kprrel,
	kprrel,    kprrel,    kprrel,    kprrel,    kprrel,    kprrel,    kprrel,
	kprrel,    kprrel,    kprrel,    kprrel,    kprrel,    kprrel,
	lpop1,    kprrel,    kprrel,    kprrel,    kprrel,    kprrel,    kprrel,
	kprrel,    sshprre,    sshprre,    sshprre,    kprrel,
	kprrel,    kprrel,
	kprrel,    NULL,    NULL,
	kprrel,    kprrel,    kprrel
),
// LAYER 1
KB_MATRIX_LAYER(
	// unused
	NULL,
	// left hand
	kprrel,    kprrel,    kprrel,    kprrel,    kprrel,    kprrel,    NULL,
	NULL,    NULL,    kprrel,    NULL,    NULL,    NULL,    NULL,
	kprrel,    kprrel,    kprrel,    kprrel,    NULL,    NULL,
	NULL,    NULL,    NULL,    kprrel,    kprrel,    NULL,    NULL,
	kprrel,    kprrel,    NULL,    NULL,    NULL,
	NULL,    NULL,
	NULL,    NULL,    NULL,
	NULL,    NULL,    NULL,
	// right hand
	NULL,    kprrel,    kprrel,    kprrel,    kprrel,    kprrel,    kprrel,
	NULL,    NULL,    NULL,    NULL,    NULL,    kprrel,    kprrel,
	NULL,    kprrel,    NULL,    NULL,    NULL,    NULL,
	NULL,    NULL,    NULL,    NULL,    NULL,    NULL,    NULL,
	NULL,    NULL,    NULL,    NULL,    NULL,
	NULL,    NULL,
	NULL,    NULL,    NULL,
	NULL,    NULL,    NULL
),
// LAYER 2
KB_MATRIX_LAYER(
	// unused
	NULL,
	// left hand
	kprrel,    kprrel,    kprrel,    kprrel,    kprrel,    kprrel,    sshprre,
	kprrel,    kprrel,    kprrel,    kprrel,    kprrel,    kprrel,    kprrel,
	kprrel,    kprrel,    kprrel,    kprrel,    kprrel,    kprrel,
	kprrel,    kprrel,    kprrel,    kprrel,    kprrel,    kprrel,    lpop1,
	sshprre,    kprrel,    kprrel,    kprrel,    kprrel,
	kprrel,    kprrel,
	NULL,    NULL,    kprrel,
	kprrel,    kprrel,    kprrel,
	// right hand
	sshprre,    kprrel,    kprrel,    kprrel,    kprrel,    kprrel,    kprrel,
	kprrel,    kprrel,    kprrel,    kprrel,    kprrel,    kprrel,    kprrel,
	kprrel,    kprrel,    kprrel,    kprrel,    kprrel,    kprrel,
	lpop1,    kprrel,    kprrel,    kprrel,    kprrel,    kprrel,    kprrel,
	sshprre,    sshprre,    sshprre,    kprrel,    kprrel,
	kprrel,    kprrel,
	kprrel,    NULL,    NULL,
	kprrel,    kprrel,    kprrel
),
// LAYER 3
KB_MATRIX_LAYER(
	// unused
	NULL,
	// left hand
	NULL,    NULL,    NULL,    NULL,    NULL,    NULL,    NULL,
	NULL,    NULL,    NULL,    NULL,    NULL,    NULL,    NULL,
	NULL,    NULL,    NULL,    NULL,    NULL,    NULL,
	NULL,    NULL,    NULL,    NULL,    NULL,    NULL,    NULL,
	NULL,    NULL,    NULL,    NULL,    NULL,
	NULL,    NULL,
	NULL,    NULL,    NULL,
	NULL,    NULL,    NULL,
	// right hand
	NULL,    NULL,    NULL,    NULL,    NULL,    NULL,    NULL,
	NULL,    NULL,    NULL,    NULL,    NULL,    NULL,    NULL,
	NULL,    NULL,    NULL,    NULL,    NULL,    NULL,
	NULL,    NULL,    NULL,    NULL,    NULL,    NULL,    NULL,
	NULL,    NULL,    NULL,    NULL,    NULL,
	NULL,    NULL,
	NULL,    NULL,    NULL,
	NULL,    NULL,    NULL
),
// LAYER 4
KB_MATRIX_LAYER(
	// unused
	NULL,
	// left hand
	NULL,    NULL,    NULL,    NULL,    NULL,    NULL,    NULL,
	NULL,    NULL,    NULL,    NULL,    NULL,    NULL,    NULL,
	NULL,    NULL,    NULL,    NULL,    NULL,    NULL,
	NULL,    NULL,    NULL,    NULL,    NULL,    NULL,    NULL,
	NULL,    NULL,    NULL,    NULL,    NULL,
	NULL,    NULL,
	NULL,    NULL,    NULL,
	NULL,    NULL,    NULL,
	// right hand
	NULL,    NULL,    NULL,    NULL,    NULL,    NULL,    NULL,
	NULL,    NULL,    NULL,    NULL,    NULL,    NULL,    NULL,
	NULL,    NULL,    NULL,    NULL,    NULL,    NULL,
	NULL,    NULL,    NULL,    NULL,    NULL,    NULL,    NULL,
	NULL,    NULL,    NULL,    NULL,    NULL,
	NULL,    NULL,
	NULL,    NULL,    NULL,
	NULL,    NULL,    NULL
),
// LAYER 5
KB_MATRIX_LAYER(
	// unused
	NULL,
	// left hand
	NULL,    NULL,    NULL,    NULL,    NULL,    NULL,    NULL,
	NULL,    NULL,    NULL,    NULL,    NULL,    NULL,    NULL,
	NULL,    NULL,    NULL,    NULL,    NULL,    NULL,
	NULL,    NULL,    NULL,    NULL,    NULL,    NULL,    NULL,
	NULL,    NULL,    NULL,    NULL,    NULL,
	NULL,    NULL,
	NULL,    NULL,    NULL,
	NULL,    NULL,    NULL,
	// right hand
	NULL,    NULL,    NULL,    NULL,    NULL,    NULL,    NULL,
	NULL,    NULL,    NULL,    NULL,    NULL,    NULL,    NULL,
	NULL,    NULL,    NULL,    NULL,    NULL,    NULL,
	NULL,    NULL,    NULL,    NULL,    NULL,    NULL,    NULL,
	NULL,    NULL,    NULL,    NULL,    NULL,
	NULL,    NULL,
	NULL,    NULL,    NULL,
	NULL,    NULL,    NULL
),
// LAYER 6
KB_MATRIX_LAYER(
	// unused
	NULL,
	// left hand
	NULL,    NULL,    NULL,    NULL,    NULL,    NULL,    NULL,
	NULL,    NULL,    NULL,    NULL,    NULL,    NULL,    NULL,
	NULL,    NULL,    NULL,    NULL,    NULL,    NULL,
	NULL,    NULL,    NULL,    NULL,    NULL,    NULL,    NULL,
	NULL,    NULL,    NULL,    NULL,    NULL,
	NULL,    NULL,
	NULL,    NULL,    NULL,
	NULL,    NULL,    NULL,
	// right hand
	NULL,    NULL,    NULL,    NULL,    NULL,    NULL,    NULL,
	NULL,    NULL,    NULL,    NULL,    NULL,    NULL,    NULL,
	NULL,    NULL,    NULL,    NULL,    NULL,    NULL,
	NULL,    NULL,    NULL,    NULL,    NULL,    NULL,    NULL,
	NULL,    NULL,    NULL,    NULL,    NULL,
	NULL,    NULL,
	NULL,    NULL,    NULL,
	NULL,    NULL,    NULL
),
// LAYER 7
KB_MATRIX_LAYER(
	// unused
	NULL,
	// left hand
	NULL,    NULL,    NULL,    NULL,    NULL,    NULL,    NULL,
	NULL,    NULL,    NULL,    NULL,    NULL,    NULL,    NULL,
	NULL,    NULL,    NULL,    NULL,    NULL,    NULL,
	NULL,    NULL,    NULL,    NULL,    NULL,    NULL,    NULL,
	NULL,    NULL,    NULL,    NULL,    NULL,
	NULL,    NULL,
	NULL,    NULL,    NULL,
	NULL,    NULL,    NULL,
	// right hand
	NULL,    NULL,    NULL,    NULL,    NULL,    NULL,    NULL,
	NULL,    NULL,    NULL,    NULL,    NULL,    NULL,    NULL,
	NULL,    NULL,    NULL,    NULL,    NULL,    NULL,
	NULL,    NULL,    NULL,    NULL,    NULL,    NULL,    NULL,
	NULL,    NULL,    NULL,    NULL,    NULL,
	NULL,    NULL,
	NULL,    NULL,    NULL,
	NULL,    NULL,    NULL
),
// LAYER 8
KB_MATRIX_LAYER(
	// unused
	NULL,
	// left hand
	NULL,    NULL,    NULL,    NULL,    NULL,    NULL,    NULL,
	NULL,    NULL,    NULL,    NULL,    NULL,    NULL,    NULL,
	NULL,    NULL,    NULL,    NULL,    NULL,    NULL,
	NULL,    NULL,    NULL,    NULL,    NULL,    NULL,    NULL,
	NULL,    NULL,    NULL,    NULL,    NULL,
	NULL,    NULL,
	NULL,    NULL,    NULL,
	NULL,    NULL,    NULL,
	// right hand
	NULL,    NULL,    NULL,    NULL,    NULL,    NULL,    NULL,
	NULL,    NULL,    NULL,    NULL,    NULL,    NULL,    NULL,
	NULL,    NULL,    NULL,    NULL,    NULL,    NULL,
	NULL,    NULL,    NULL,    NULL,    NULL,    NULL,    NULL,
	NULL,    NULL,    NULL,    NULL,    NULL,
	NULL,    NULL,
	NULL,    NULL,    NULL,
	NULL,    NULL,    NULL
),
// LAYER 9
KB_MATRIX_LAYER(
	// unused
	NULL,
	// left hand
	NULL,    NULL,    NULL,    NULL,    NULL,    NULL,    NULL,
	NULL,    NULL,    NULL,    NULL,    NULL,    NULL,    NULL,
	NULL,    NULL,    NULL,    NULL,    NULL,    NULL,
	NULL,    NULL,    NULL,    NULL,    NULL,    NULL,    NULL,
	NULL,    NULL,    NULL,    NULL,    NULL,
	NULL,    NULL,
	NULL,    NULL,    NULL,
	NULL,    NULL,    NULL,
	// right hand
	NULL,    NULL,    NULL,    NULL,    NULL,    NULL,    NULL,
	NULL,    NULL,    NULL,    NULL,    NULL,    NULL,    NULL,
	NULL,    NULL,    NULL,    NULL,    NULL,    NULL,
	NULL,    NULL,    NULL,    NULL,    NULL,    NULL,    NULL,
	NULL,    NULL,    NULL,    NULL,    NULL,
	NULL,    NULL,
	NULL,    NULL,    NULL,
	NULL,    NULL,    NULL
),
};
// ----------------------------------------------------------------------------
