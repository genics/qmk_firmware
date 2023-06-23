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
     *  .-----------------------------------------.                          .-------------------------------------------.
     * |  ESC   |  1  |   2  |   3  |   4  |   5  |                          |   6  |   7  |   8  |   9  |   0  | BACK  |
     * .------+------+------+------+------+------ |                          |------+------+------+------+------+--------.
     * |  TAB   |  Q  |   W  |   E  |   R  |   T  |                          |   Y  |   U  |   I  |   O  |   P  |  DEL  |
     * .------+------+------+------+------+------ |                          |------+------+------+------+------+--------.
     * |  SHIFT |  A  |   S  |   D  |   F  |   G  |                          |   H  |   J  |   K  |   L  |   ;  |  '    |
     * .------+------+------+------+------+------ |                          |------+------+------+------+------+--------.
     * |  CTRL  |  Z  |   X  |   C  |   V  |   B  |--------.        .--------|   N  |   M  |   ,  |   .  |   /  |  \    |
     * '-----------------------------------------/        /          \       \-------------------------------------------'
     *               | Esc  | Tab  | Esc  | Tab  | Esc              | Tab   |  / Space  /      \ Enter \  | Bsps | Del  |
     *                         |_FUNC | _NUM | /_SYMBOL /              \ _FUNC \ | _NAV | RAlt |
     *                         `-------------''-------'              '-------''-------------'
     */
    // clang-format off
     [_QWERTY] = LAYOUT(
  // ╭───────────────────────────────────────────────────╮            ╭───────────────────────────────────────────────────╮
      FUNC_ESC, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,               KC_6,   KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC,
  // ├───────────────────────────────────────────────────┤            ├───────────────────────────────────────────────────┤
      KC_TAB,   KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,               KC_Y,   KC_U,    KC_I,    KC_O,    KC_P,    KC_DEL,
  // ├───────────────────────────────────────────────────┤            ├───────────────────────────────────────────────────┤
      KC_LSFT,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,               KC_H,   KC_J,    KC_K,    KC_L,    KC_SCLN, KC_P,
  // ├───────────────────────────────────────────────────┤            ├───────────────────────────────────────────────────┤
      KC_LCTL,  KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,               KC_N,   KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_P,
  // ╰───────────────────────────────────────────────────┤            ├───────────────────────────────────────────────────╯
                KC_MUTE, KC_LALT, SYM_SPC, FUNC_ESC,LGUI_QUOT,          KC_RSFT,RALT_DEL,FUNC_ENT,NAV_BSPC,QK_BOOT
  //       ╰─────────────────────────────────────────────╯            ╰──────────────────────────────────────────╯
    ),

    [_GAME] = LAYOUT(
   // ╭───────────────────────────────────────────────────╮            ╭───────────────────────────────────────────────────╮
      KC_ESC,   KC_1,    KC_2,    KC_3,    KC_4,    KC_5,               RGB_TOG,  RGB_MOD, RGB_RMOD,   RGB_VAI,  RGB_VAD, AU_TOGG,
  // ├───────────────────────────────────────────────────┤            ├───────────────────────────────────────────────────┤
      KC_TAB,   KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,               KC_PGUP,   KC_U,    KC_UP,    KC_O,    KC_P,    KC_DEL,
  // ├───────────────────────────────────────────────────┤            ├───────────────────────────────────────────────────┤
      KC_LSFT,  HF_DWLU,  HF_DWLD,  HOME_D,  HOME_F,  KC_G,             KC_PGDN,   KC_LEFT,  KC_DOWN,  KC_RIGHT,  HOME_SCLN, KC_QUOT,
  // ├───────────────────────────────────────────────────┤            ├───────────────────────────────────────────────────┤
      HF_BUZZ,  HF_NEXT,  HF_PREV,  HF_CONT, HF_CONU, HF_COND,          KC_N,   KC_M,    KC_COMM, KC_DOT,  KC_SLSH, EE_CLR,
  // ╰───────────────────────────────────────────────────┤            ├───────────────────────────────────────────────────╯
            HF_ON,   HF_OFF,   HF_TOGG, HF_RST, HF_FDBK,                HF_FDBK,   FUNC_ENT,   NAV_BSPC,   RALT_DEL, QK_BOOT
  //       ╰─────────────────────────────────────────────╯            ╰──────────────────────────────────────────╯
    ),


    [_NAV] = LAYOUT(
  // ╭───────────────────────────────────────────────────╮            ╭───────────────────────────────────────────────────╮
      KC_ESC,   KC_1,    KC_2,    KC_3,    KC_4,    KC_5,               RGB_TOG,  RGB_MOD, RGB_RMOD,   RGB_VAI,  RGB_VAD, KC_HOME,
  // ├───────────────────────────────────────────────────┤            ├───────────────────────────────────────────────────┤
      KC_TAB,   KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,               KC_PGUP,   KC_U,    KC_UP,    KC_O,    KC_P,    KC_DEL,
  // ├───────────────────────────────────────────────────┤            ├───────────────────────────────────────────────────┤
      KC_LSFT,  HF_DWLU,  HF_DWLD,  HOME_D,  HOME_F,  KC_G,             KC_PGDN,   KC_LEFT,  KC_DOWN,  KC_RIGHT,  HOME_SCLN, KC_QUOT,
  // ├───────────────────────────────────────────────────┤            ├───────────────────────────────────────────────────┤
      HF_BUZZ,  HF_NEXT,  HF_PREV,  HF_CONT, HF_CONU, HF_COND,          KC_N,   KC_M,    KC_COMM, KC_DOT,  KC_SLSH, EE_CLR,
  // ╰───────────────────────────────────────────────────┤            ├───────────────────────────────────────────────────╯
            HF_ON,   HF_OFF,   HF_TOGG, HF_RST, HF_FDBK,                HF_FDBK,   FUNC_ENT,   NAV_BSPC,   RALT_DEL, QK_BOOT
  //       ╰─────────────────────────────────────────────╯            ╰──────────────────────────────────────────╯
    ),

    [_NUMBER] = LAYOUT(
   // ╭───────────────────────────────────────────────────╮            ╭───────────────────────────────────────────────────╮
      KC_ESC,   KC_1,    KC_2,    KC_3,    KC_4,    KC_5,               RGB_TOG,  RGB_MOD, RGB_RMOD,   RGB_VAI,  RGB_VAD, AU_TOGG,
  // ├───────────────────────────────────────────────────┤            ├───────────────────────────────────────────────────┤
      KC_TAB,   KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,               KC_PGUP,   KC_U,    KC_UP,    KC_O,    KC_P,    KC_DEL,
  // ├───────────────────────────────────────────────────┤            ├───────────────────────────────────────────────────┤
      KC_LSFT,  HF_DWLU,  HF_DWLD,  HOME_D,  HOME_F,  KC_G,             KC_PGDN,   KC_LEFT,  KC_DOWN,  KC_RIGHT,  HOME_SCLN, KC_QUOT,
  // ├───────────────────────────────────────────────────┤            ├───────────────────────────────────────────────────┤
      HF_BUZZ,  HF_NEXT,  HF_PREV,  HF_CONT, HF_CONU, HF_COND,          KC_N,   KC_M,    KC_COMM, KC_DOT,  KC_SLSH, EE_CLR,
  // ╰───────────────────────────────────────────────────┤            ├───────────────────────────────────────────────────╯
            HF_ON,   HF_OFF,   HF_TOGG, HF_RST, HF_FDBK,                HF_FDBK,   FUNC_ENT,   NAV_BSPC,   RALT_DEL, QK_BOOT
  //       ╰─────────────────────────────────────────────╯            ╰──────────────────────────────────────────╯
    ),


    [_SYMBOL] = LAYOUT(
  // ╭───────────────────────────────────────────────────╮            ╭───────────────────────────────────────────────────╮
      KC_GRV,   KC_1,    KC_2,    KC_3,    KC_4,    KC_5,               RGB_TOG,  RGB_MOD, RGB_RMOD,   RGB_VAI,  RGB_VAD, AU_TOGG,
  // ├───────────────────────────────────────────────────┤            ├───────────────────────────────────────────────────┤
      KC_TAB,   KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,               KC_PGUP,   KC_U,    KC_UP,    KC_O,    KC_P,    KC_DEL,
  // ├───────────────────────────────────────────────────┤            ├───────────────────────────────────────────────────┤
      KC_LSFT,  HF_DWLU,  HF_DWLD,  HOME_D,  HOME_F,  KC_G,             KC_PGDN,   KC_LEFT,  KC_DOWN,  KC_RIGHT,  HOME_SCLN, KC_QUOT,
  // ├───────────────────────────────────────────────────┤            ├───────────────────────────────────────────────────┤
      HF_BUZZ,  HF_NEXT,  HF_PREV,  HF_CONT, HF_CONU, HF_COND,          KC_N,   KC_M,    KC_COMM, KC_DOT,  KC_SLSH, EE_CLR,
  // ╰───────────────────────────────────────────────────┤            ├───────────────────────────────────────────────────╯
            HF_ON,   HF_OFF,   HF_TOGG, HF_RST, HF_FDBK,                HF_FDBK,   FUNC_ENT,   NAV_BSPC,   RALT_DEL, QK_BOOT
  //       ╰─────────────────────────────────────────────╯            ╰──────────────────────────────────────────╯
    ),


    [_FUNC] = LAYOUT(
  // ╭───────────────────────────────────────────────────╮            ╭───────────────────────────────────────────────────╮
      KC_F12,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,               KC_F6,  KC_F7, KC_F8,   KC_F9,  KC_F10, KC_F11,
  // ├───────────────────────────────────────────────────┤            ├───────────────────────────────────────────────────┤
      KC_CAPS,   KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,              KC_PSCR,   KC_SCRL,    KC_UP,    KC_NUM,    KC_P,    KC_DEL,
  // ├───────────────────────────────────────────────────┤            ├───────────────────────────────────────────────────┤
      KC_LSFT,  HF_DWLU,  HF_DWLD,  HOME_D,  HOME_F,  KC_G,             KC_PGDN,   KC_LEFT,  KC_DOWN,  KC_RIGHT,  HOME_SCLN, KC_QUOT,
  // ├───────────────────────────────────────────────────┤            ├───────────────────────────────────────────────────┤
      HF_BUZZ,  HF_NEXT,  HF_PREV,  HF_CONT, HF_CONU, HF_COND,          KC_N,   KC_M,    KC_COMM, KC_DOT,  KC_SLSH, EE_CLR,
  // ╰───────────────────────────────────────────────────┤            ├───────────────────────────────────────────────────╯
            HF_ON,   MO(_SYS),  HF_TOGG,KC_MPLY, KC_MNXT,                HF_FDBK,   FUNC_ENT,   NAV_BSPC,   RALT_DEL, QK_BOOT
  //       ╰─────────────────────────────────────────────╯            ╰──────────────────────────────────────────╯
    ),

    [_SYS] = LAYOUT(
  // ╭───────────────────────────────────────────────────╮            ╭───────────────────────────────────────────────────╮
      XXXXXXX, XXXXXXX, HF_BUZZ, XXXXXXX, XXXXXXX, XXXXXXX,               RGB_TOG,  RGB_MOD, RGB_RMOD,   RGB_VAI,  RGB_VAD, AU_TOGG,
  // ├───────────────────────────────────────────────────┤            ├───────────────────────────────────────────────────┤
      XXXXXXX, XXXXXXX, HF_DWLU, XXXXXXX, XXXXXXX,   BL_UP,               KC_PGUP,   XXXXXXX,    KC_UP,    XXXXXXX,    XXXXXXX,    XXXXXXX,
  // ├───────────────────────────────────────────────────┤            ├───────────────────────────────────────────────────┤
      XXXXXXX, XXXXXXX, HF_DWLD, XXXXXXX, XXXXXXX,  BL_DOWN,             KC_PGDN,   KC_LEFT,  KC_DOWN,  KC_RIGHT,  HOME_SCLN, KC_QUOT,
  // ├───────────────────────────────────────────────────┤            ├───────────────────────────────────────────────────┤
      XXXXXXX,  HF_NEXT,  HF_TOGG,  HF_CONT, HF_CONU, BL_TOGG,          XXXXXXX,   XXXXXXX,    XXXXXXX, XXXXXXX,  XXXXXXX, EE_CLR,
  // ╰───────────────────────────────────────────────────┤            ├───────────────────────────────────────────────────╯
            HF_ON,   HF_OFF,   HF_TOGG, HF_RST, HF_FDBK,                HF_FDBK,   FUNC_ENT,   NAV_BSPC,   RALT_DEL, QK_BOOT
  //       ╰─────────────────────────────────────────────╯            ╰──────────────────────────────────────────╯
    )
    // clang-format on
};
