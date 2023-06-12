// Copyright 2023 zzeneg (@zzeneg)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

enum layer_number {
    // clang-format off
    _QWERTY = 0,
    _GAME,
    _NAV,
    _NUMBER,
    _SYMBOL,
    _FUNC,
    _SYS
    // clang-format on
};

// Left-hand home row mods
#define HOME_A LGUI_T(KC_A)
#define HOME_S LALT_T(KC_S)
#define HOME_D LCTL_T(KC_D)
#define HOME_F LSFT_T(KC_F)

// Right-hand home row mods
#define HOME_J RSFT_T(KC_J)
#define HOME_K RCTL_T(KC_K)
#define HOME_L LALT_T(KC_L)
#define HOME_SCLN RGUI_T(KC_SCLN)

// bottom mods
#define SYM_SPC LT(_SYMBOL, KC_SPC)
#define NUM_TAB LT(_NUMBER, KC_TAB)
#define FUNC_ESC LT(_FUNC, KC_ESC)
#define FUNC_ENT LT(_FUNC, KC_ENT)
#define NAV_BSPC LT(_NAV, KC_BSPC)
#define RALT_DEL LALT_T(KC_DEL)

// game layer mods
#define LALT_Q LALT_T(KC_Q)
#define LSFT_MINS LSFT_T(KC_MINS)
#define LCTL_ESC LCTL_T(KC_ESC)
#define LGUI_QUOT LGUI_T(KC_QUOT)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* QWERTY
     *  .-----------------------------------------.                    .-------------------------------------------.
     * |  ESC   |  1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  | BACK  |
     * .------+------+------+------+------+------ |                    |------+------+------+------+------+--------.
     * |  TAB   |  Q  |   W  |   E  |   R  |   T  |                    |   Y  |   U  |   I  |   O  |   P  |  DEL  |
     * .------+------+------+------+------+------ |                    |------+------+------+------+------+--------.
     * |  SHIFT |  A  |   S  |   D  |   F  |   G  |                    |   H  |   J  |   K  |   L  |   ;  |  '    |
     * .------+------+------+------+------+------ |                    |------+------+------+------+------+--------.
     * |  CTRL  |  Z  |   X  |   C  |   V  |   B  |--------.  .--------|   N  |   M  |   ,  |   .  |   /  |  \    |
     * '-----------------------------------------/        /    \       \-------------------------------------------'
     *                         | Esc  | Tab  |  / Space  /      \ Enter \  | Bsps | Del  |
     *                         |_FUNC | _NUM | /_SYMBOL /        \ _FUNC \ | _NAV | RAlt |
     *                         `-------------''-------'          '-------''-------------'
     */
    // clang-format off
    [_QWERTY] = LAYOUT(
  // ╭───────────────────────────────────────────────────╮            ╭───────────────────────────────────────────────────╮
      KC_ESC,   KC_1,    KC_2,    KC_3,    KC_4,    KC_5,               KC_6,   KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC,
  // ├───────────────────────────────────────────────────┤            ├───────────────────────────────────────────────────┤
      KC_TAB,   KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,               KC_Y,   KC_U,    KC_I,    KC_O,    KC_P,    KC_DEL,
  // ├───────────────────────────────────────────────────┤            ├───────────────────────────────────────────────────┤
      KC_LSFT,  HOME_A,  HOME_S,  HOME_D,  HOME_F,  KC_G,               KC_H,   HOME_J,  HOME_K,  HOME_L,  HOME_SCLN, KC_QUOT,
  // ├───────────────────────────────────────────────────┤            ├───────────────────────────────────────────────────┤
      KC_LCTL,  KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,               KC_N,   KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_BSLS,
  // ╰───────────────────────────────────────────────────┤            ├───────────────────────────────────────────────────╯
              KC_A,    KC_LALT,    KC_ENT, MO(1), CW_TOGG,          KC_A,   MO(2),   KC_SPC,    KC_A,   KC_A
  //       ╰─────────────────────────────────────────────╯            ╰──────────────────────────────────────────╯
    ),

    [_GAME] = LAYOUT(
  // ╭───────────────────────────────────────────────────╮            ╭───────────────────────────────────────────────────╮
      KC_Q,   KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                 KC_6,   KC_7,    KC_8,    KC_9,    KC_0,    KC_5,
  // ├───────────────────────────────────────────────────┤            ├───────────────────────────────────────────────────┤
      KC_Q,   KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                 KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,   KC_P,
  // ├───────────────────────────────────────────────────┤            ├───────────────────────────────────────────────────┤
      KC_A,   KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                 KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN,  KC_P,
  // ├───────────────────────────────────────────────────┤            ├───────────────────────────────────────────────────┤
      KC_Z,   KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                 KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH,  KC_P,
  // ╰───────────────────────────────────────────────────┤            ├───────────────────────────────────────────────────╯
              KC_A,    KC_A,    KC_A,     MO(2), CW_TOGG,               KC_SPC,  MO(1),   KC_A,    KC_A,   KC_A
  //       ╰─────────────────────────────────────────────╯            ╰──────────────────────────────────────────╯
    ),

    [_NAV] = LAYOUT(
  // ╭───────────────────────────────────────────────────╮            ╭───────────────────────────────────────────────────╮
      KC_Q,   KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                 KC_6,   KC_7,    KC_8,    KC_9,    KC_0,    KC_5,
  // ├───────────────────────────────────────────────────┤            ├───────────────────────────────────────────────────┤
      KC_Q,   KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                 KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,   KC_P,
  // ├───────────────────────────────────────────────────┤            ├───────────────────────────────────────────────────┤
      KC_A,   KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                 KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN,  KC_P,
  // ├───────────────────────────────────────────────────┤            ├───────────────────────────────────────────────────┤
      KC_Z,   KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                 KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH,  KC_P,
  // ╰───────────────────────────────────────────────────┤            ├───────────────────────────────────────────────────╯
              KC_A,    KC_A,    KC_A,     MO(2), CW_TOGG,               KC_SPC,  MO(1),   KC_A,    KC_A,   KC_A
  //       ╰─────────────────────────────────────────────╯            ╰──────────────────────────────────────────╯
    ),

    [_NUMBER] = LAYOUT(
  // ╭───────────────────────────────────────────────────╮            ╭───────────────────────────────────────────────────╮
      KC_Q,   KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                 KC_6,   KC_7,    KC_8,    KC_9,    KC_0,    KC_5,
  // ├───────────────────────────────────────────────────┤            ├───────────────────────────────────────────────────┤
      KC_Q,   KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                 KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,   KC_P,
  // ├───────────────────────────────────────────────────┤            ├───────────────────────────────────────────────────┤
      KC_A,   KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                 KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN,  KC_P,
  // ├───────────────────────────────────────────────────┤            ├───────────────────────────────────────────────────┤
      KC_Z,   KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                 KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH,  KC_P,
  // ╰───────────────────────────────────────────────────┤            ├───────────────────────────────────────────────────╯
              KC_A,    KC_A,    KC_A,     MO(2), CW_TOGG,               KC_SPC,  MO(1),   KC_A,    KC_A,   KC_A
  //       ╰─────────────────────────────────────────────╯            ╰──────────────────────────────────────────╯
    ),

    [_SYMBOL] = LAYOUT(
  // ╭───────────────────────────────────────────────────╮            ╭───────────────────────────────────────────────────╮
      KC_Q,   KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                 KC_6,   KC_7,    KC_8,    KC_9,    KC_0,    KC_5,
  // ├───────────────────────────────────────────────────┤            ├───────────────────────────────────────────────────┤
      KC_Q,   KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                 KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,   KC_P,
  // ├───────────────────────────────────────────────────┤            ├───────────────────────────────────────────────────┤
      KC_A,   KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                 KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN,  KC_P,
  // ├───────────────────────────────────────────────────┤            ├───────────────────────────────────────────────────┤
      KC_Z,   KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                 KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH,  KC_P,
  // ╰───────────────────────────────────────────────────┤            ├───────────────────────────────────────────────────╯
              KC_A,    KC_A,    KC_A,     MO(2), CW_TOGG,               KC_SPC,  MO(1),   KC_A,    KC_A,   KC_A
  //       ╰─────────────────────────────────────────────╯            ╰──────────────────────────────────────────╯
    ),

    [_FUNC] = LAYOUT(
  // ╭───────────────────────────────────────────────────╮            ╭───────────────────────────────────────────────────╮
      KC_Q,   KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                 KC_6,   KC_7,    KC_8,    KC_9,    KC_0,    KC_5,
  // ├───────────────────────────────────────────────────┤            ├───────────────────────────────────────────────────┤
      KC_Q,   KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                 KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,   KC_P,
  // ├───────────────────────────────────────────────────┤            ├───────────────────────────────────────────────────┤
      KC_A,   KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                 KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN,  KC_P,
  // ├───────────────────────────────────────────────────┤            ├───────────────────────────────────────────────────┤
      KC_Z,   KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                 KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH,  KC_P,
  // ╰───────────────────────────────────────────────────┤            ├───────────────────────────────────────────────────╯
              KC_A,    KC_A,    KC_A,     MO(2), CW_TOGG,               KC_SPC,  MO(1),   KC_A,    KC_A,   KC_A
  //       ╰─────────────────────────────────────────────╯            ╰──────────────────────────────────────────╯
    ),

    [_SYS] = LAYOUT(
  // ╭───────────────────────────────────────────────────╮            ╭───────────────────────────────────────────────────╮
      KC_Q,   KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                 KC_6,   KC_7,    KC_8,    KC_9,    KC_0,    KC_5,
  // ├───────────────────────────────────────────────────┤            ├───────────────────────────────────────────────────┤
      KC_Q,   KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                 KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,   KC_P,
  // ├───────────────────────────────────────────────────┤            ├───────────────────────────────────────────────────┤
      KC_A,   KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                 KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN,  KC_P,
  // ├───────────────────────────────────────────────────┤            ├───────────────────────────────────────────────────┤
      KC_Z,   KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                 KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH,  KC_P,
  // ╰───────────────────────────────────────────────────┤            ├───────────────────────────────────────────────────╯
              KC_A,    KC_A,    KC_A,     MO(2), CW_TOGG,               KC_SPC,  MO(1),   KC_A,    KC_A,   KC_A
  //       ╰─────────────────────────────────────────────╯            ╰──────────────────────────────────────────╯
    )
    // clang-format on
};

// #if defined(ENCODER_MAP_ENABLE)
// const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
//     [0] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
//     [1] = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS) },
//     [2] = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS) },
//     [3] = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS) },
// 	[4] = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS) },
// 	[5] = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS) },
//     [6] = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS) },
// };
// #endif

#ifdef ENCODER_MAP_ENABLE
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    // clang-format off
    [_QWERTY] = { ENCODER_CCW_CW(KC_LEFT, KC_RGHT), ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [_GAME]   = { ENCODER_CCW_CW(KC_LEFT, KC_RGHT), ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [_NAV]    = { ENCODER_CCW_CW(KC_LEFT, KC_RGHT), ENCODER_CCW_CW(KC_MPRV, KC_MNXT) },
    [_NUMBER] = { ENCODER_CCW_CW(KC_LEFT, KC_RGHT), ENCODER_CCW_CW(KC_MPRV, KC_MNXT) },
    [_SYMBOL] = { ENCODER_CCW_CW(KC_LEFT, KC_RGHT), ENCODER_CCW_CW(KC_MPRV, KC_MNXT) },
    [_FUNC]   = { ENCODER_CCW_CW(KC_LEFT, KC_RGHT), ENCODER_CCW_CW(KC_MPRV, KC_MNXT) },
    [_SYS]    = { ENCODER_CCW_CW(BL_DOWN, BL_UP),   ENCODER_CCW_CW(KC_MPRV, KC_MNXT) }
    // clang-format on
};
#endif // ENCODER_MAP_ENABLE

