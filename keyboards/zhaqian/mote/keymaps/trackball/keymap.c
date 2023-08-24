// Copyright 2023 zzeneg (@zzeneg)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

enum layer_number {
    // clang-format off
    _QWERTY = 0,
    _GAME = 1,
    _NAV = 2,
    _NUMBER = 3,
    _SYMBOL = 4,
    _FUNC = 5,
    _SYS = 6
    // clang-format on
};

#define XXXX KC_TRNS
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
      FUNC_ESC, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,              KC_6,   KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC,
  // ├───────────────────────────────────────────────────┤            ├───────────────────────────────────────────────────┤
      KC_TAB,   KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,              KC_Y,   KC_U,    KC_I,    KC_O,    KC_P,    KC_DEL,
  // ├───────────────────────────────────────────────────┤            ├───────────────────────────────────────────────────┤
      KC_LSFT,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,              KC_H,   KC_J,    KC_K,    KC_L,    KC_SCLN, KC_RSFT,
  // ├───────────────────────────────────────────────────┤            ├───────────────────────────────────────────────────┤
      KC_LCTL,  KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,              KC_N,   KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RCTL,
  // ╰───────────────────────────────────────────────────┤            ├───────────────────────────────────────────────────╯
                KC_MUTE, KC_LALT, KC_SPC, NUM_TAB, LGUI_QUOT,          KC_RSFT,RALT_DEL,FUNC_ENT,NAV_BSPC,KC_MUTE,
  //       ╰─────────────────────────────────────────────╯            ╰──────────────────────────────────────────╯
                         KC_UP, KC_DOWN, KC_LEFT,KC_RIGHT,             KC_UP, KC_DOWN, KC_LEFT,KC_RIGHT
    ),

    [_GAME] = LAYOUT(
  // ╭───────────────────────────────────────────────────╮            ╭───────────────────────────────────────────────────╮
      XXXX,  XXXX,  XXXX,   XXXX,   XXXX,   XXXX,                       XXXX,   XXXX,   XXXX,   XXXX,   XXXX,   XXXX,
  // ├───────────────────────────────────────────────────┤            ├───────────────────────────────────────────────────┤
      XXXX,  XXXX,  XXXX,   XXXX,   XXXX,   XXXX,                       XXXX,   XXXX,   XXXX,   XXXX,   XXXX,   XXXX,
  // ├───────────────────────────────────────────────────┤            ├───────────────────────────────────────────────────┤
      XXXX,  XXXX,  XXXX,   XXXX,   XXXX,   XXXX,                       XXXX,   XXXX,   XXXX,   XXXX,   XXXX,   XXXX,
  // ├───────────────────────────────────────────────────┤            ├───────────────────────────────────────────────────┤
      XXXX,  XXXX,  XXXX,   XXXX,   XXXX,   XXXX,                       XXXX,   XXXX,   XXXX,   XXXX,   XXXX,   XXXX,
  // ╰───────────────────────────────────────────────────┤            ├───────────────────────────────────────────────────╯
             XXXX,  XXXX,   XXXX,   XXXX,   XXXX,                       XXXX,   XXXX,   XXXX,   XXXX,   XXXX,
  //       ╰─────────────────────────────────────────────╯            ╰──────────────────────────────────────────╯
                     XXXX,  XXXX,   XXXX,   XXXX,                       XXXX,  XXXX,   XXXX,   XXXX
    ),

    [_NAV] = LAYOUT(
  // ╭───────────────────────────────────────────────────╮            ╭───────────────────────────────────────────────────╮
      XXXX,  XXXX,  XXXX,   XXXX,   XXXX,   XXXX,                       XXXX,   XXXX,   XXXX,   XXXX,   XXXX,   XXXX,
  // ├───────────────────────────────────────────────────┤            ├───────────────────────────────────────────────────┤
      XXXX,  XXXX,  XXXX,   KC_MS_U,   XXXX,   XXXX,                    XXXX,   XXXX,   KC_UP,   XXXX,   XXXX,   XXXX,
  // ├───────────────────────────────────────────────────┤            ├───────────────────────────────────────────────────┤
      XXXX,  XXXX,  KC_MS_L,   KC_MS_D,   KC_MS_R,   XXXX,              KC_PGUP,   KC_LEFT,   KC_DOWN,   KC_RIGHT,   XXXX,   XXXX,
  // ├───────────────────────────────────────────────────┤            ├───────────────────────────────────────────────────┤
      XXXX,  XXXX,  XXXX,   XXXX,   KC_BTN1,   KC_BTN2,                 KC_PGDN,   XXXX,   XXXX,   XXXX,   XXXX,   XXXX,
  // ╰───────────────────────────────────────────────────┤            ├───────────────────────────────────────────────────╯
             KC_MUTE,  XXXX,   XXXX,   XXXX,   XXXX,                       XXXX,   XXXX,   XXXX,   XXXX,   KC_MUTE,
  //       ╰─────────────────────────────────────────────╯            ╰──────────────────────────────────────────╯
                     XXXX,  XXXX,   XXXX,   XXXX,                       XXXX,  XXXX,   XXXX,   XXXX
    ),

    [_NUMBER] = LAYOUT(
  // ╭───────────────────────────────────────────────────╮            ╭───────────────────────────────────────────────────╮
      XXXX,  XXXX,  XXXX,   XXXX,   XXXX,   XXXX,                       XXXX,   XXXX,   XXXX,   XXXX,   XXXX,   XXXX,
  // ├───────────────────────────────────────────────────┤            ├───────────────────────────────────────────────────┤
      XXXX,  XXXX,  KC_1,   KC_2,   KC_3,   XXXX,                       XXXX,   XXXX,   XXXX,   XXXX,   XXXX,   XXXX,
  // ├───────────────────────────────────────────────────┤            ├───────────────────────────────────────────────────┤
      XXXX,  XXXX,  KC_4,   KC_5,   KC_6,   XXXX,                       XXXX,   XXXX,   XXXX,   XXXX,   XXXX,   XXXX,
  // ├───────────────────────────────────────────────────┤            ├───────────────────────────────────────────────────┤
      XXXX,  XXXX,  KC_7,   KC_8,   KC_9,   KC_0,                       XXXX,   XXXX,   XXXX,   XXXX,   XXXX,   XXXX,
  // ╰───────────────────────────────────────────────────┤            ├───────────────────────────────────────────────────╯
             XXXX,  XXXX,   XXXX,   XXXX,   XXXX,                       XXXX,   XXXX,   XXXX,   XXXX,   XXXX,
  //       ╰─────────────────────────────────────────────╯            ╰──────────────────────────────────────────╯
                     XXXX,  XXXX,   XXXX,   XXXX,                       XXXX,  XXXX,   XXXX,   XXXX
    ),

    [_SYMBOL] = LAYOUT(
  // ╭───────────────────────────────────────────────────╮            ╭───────────────────────────────────────────────────╮
      KC_GRV,  XXXX,  XXXX,   XXXX,   XXXX,   XXXX,                     XXXX,   XXXX,   XXXX,   XXXX,   XXXX,   XXXX,
  // ├───────────────────────────────────────────────────┤            ├───────────────────────────────────────────────────┤
      XXXX,  XXXX,  XXXX,   XXXX,   XXXX,   XXXX,                       XXXX,   XXXX,   XXXX,   KC_MINS,  KC_EQL,   XXXX,
  // ├───────────────────────────────────────────────────┤            ├───────────────────────────────────────────────────┤
      XXXX,  XXXX,  XXXX,   XXXX,   XXXX,   XXXX,                       XXXX,   XXXX,   XXXX,   KC_LBRC,   KC_RBRC,   XXXX,
  // ├───────────────────────────────────────────────────┤            ├───────────────────────────────────────────────────┤
      XXXX,  XXXX,  XXXX,   XXXX,   XXXX,   XXXX,                       XXXX,   XXXX,   XXXX,   XXXX,   KC_QUOT,   XXXX,
  // ╰───────────────────────────────────────────────────┤            ├───────────────────────────────────────────────────╯
             XXXX,  XXXX,   XXXX,   XXXX,   XXXX,                       XXXX,   XXXX,   XXXX,   XXXX,   XXXX,
  //       ╰─────────────────────────────────────────────╯            ╰──────────────────────────────────────────╯
                     XXXX,  XXXX,   XXXX,   XXXX,                       XXXX,  XXXX,   XXXX,   XXXX
    ),

    [_FUNC] = LAYOUT(
  // ╭───────────────────────────────────────────────────╮            ╭───────────────────────────────────────────────────╮
      KC_F12,  KC_F1,  KC_F2,   KC_F3,   KC_F4,   KC_F5,                KC_F6,  KC_F7,   KC_F8,   KC_F9,   KC_F10,   KC_F11,
  // ├───────────────────────────────────────────────────┤            ├───────────────────────────────────────────────────┤
      XXXX,  XXXX,  XXXX,   KC_MS_U,   XXXX,   XXXX,                    XXXX,   XXXX,   KC_UP,    KC_MINS,  KC_EQL,   XXXX,
  // ├───────────────────────────────────────────────────┤            ├───────────────────────────────────────────────────┤
      XXXX,  XXXX,  KC_MS_L,   KC_MS_D,   KC_MS_R,   XXXX,              KC_PGUP,   KC_LEFT,   KC_DOWN,   KC_RIGHT,   KC_LBRC,   KC_RBRC,
  // ├───────────────────────────────────────────────────┤            ├───────────────────────────────────────────────────┤
      XXXX,  XXXX,  XXXX,   XXXX,   KC_BTN1,   KC_BTN2,                 KC_PGDN,   XXXX,   XXXX,   XXXX,   KC_QUOT,   XXXX,
  // ╰───────────────────────────────────────────────────┤            ├───────────────────────────────────────────────────╯
            QK_BOOT, MO(_SYMBOL),  MO(_SYS), XXXX, XXXX,                XXXX,   FUNC_ENT,   NAV_BSPC,   MO(_SYS), QK_BOOT,
  //       ╰─────────────────────────────────────────────╯            ╰──────────────────────────────────────────╯
                        KC_UP, KC_DOWN, KC_LEFT,KC_RIGHT,               KC_UP, KC_DOWN, KC_LEFT,KC_RIGHT
    ),

    [_SYS] = LAYOUT(
  // ╭───────────────────────────────────────────────────╮            ╭───────────────────────────────────────────────────╮
      QK_RBT,  XXXX,  XXXX,   XXXX,   XXXX,   XXXX,                     DB_TOGG, MU_TOGG, CK_UP, CK_DOWN, CK_TOGG, AU_TOGG,
  // ├───────────────────────────────────────────────────┤            ├───────────────────────────────────────────────────┤
      RGB_TOG,  RGB_MOD, RGB_RMOD,   RGB_VAI,  RGB_VAD, XXXX,           XXXX, HF_ON,  HF_OFF,   HF_RST, HF_FDBK,  HF_TOGG,
  // ├───────────────────────────────────────────────────┤            ├───────────────────────────────────────────────────┤
      BL_TOGG,  BL_UP,  BL_DOWN,   XXXX,   XXXX,   XXXX,                HF_NEXT,  HF_PREV,  HF_CONT, HF_CONU, HF_COND, HF_BUZZ,
  // ├───────────────────────────────────────────────────┤            ├───────────────────────────────────────────────────┤
      EE_CLR,  XXXX,  XXXX,   XXXX,   XXXX,   QK_BOOT,                  QK_BOOT,   XXXX,   XXXX,   XXXX,   XXXX,   EE_CLR,
  // ╰───────────────────────────────────────────────────┤            ├───────────────────────────────────────────────────╯
             QK_BOOT,  XXXX,   XXXX,   XXXX,   XXXX,                    XXXX,   XXXX,   XXXX,   XXXX,   QK_BOOT,
  //       ╰─────────────────────────────────────────────╯            ╰──────────────────────────────────────────╯
                     XXXX,  XXXX,   XXXX,   XXXX,                       XXXX,  XXXX,   XXXX,   XXXX
    )
    // clang-format on
};


#if defined(ENCODER_MAP_ENABLE)
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

// 定义摇杆轴
// joystick_config_t joystick_axes[JOYSTICK_AXIS_COUNT] = {
//     JOYSTICK_AXIS_IN(GP27, 0, 512, 1023),
//     JOYSTICK_AXIS_IN(GP26, 0, 512, 1023)
// };

// 设置触控板切层后激活滚动模式
static bool scrolling_mode = false;

layer_state_t layer_state_set_user(layer_state_t state) {
    switch (get_highest_layer(state)) {
        case _FUNC:  // If we're on the _RAISE layer enable scrolling mode
            scrolling_mode = true;
            pointing_device_set_cpi(400);
            break;
        default:
            if (scrolling_mode) {  // check if we were scrolling before and set disable if so
                scrolling_mode = false;
                pointing_device_set_cpi(200);
            }
            break;
    }
    return state;
}

report_mouse_t pointing_device_task_user(report_mouse_t mouse_report) {
    if (scrolling_mode) {
        mouse_report.h = mouse_report.x;
        mouse_report.v = mouse_report.y;
        mouse_report.x = 0;
        mouse_report.y = 0;
    }
    return mouse_report;
}

// 触控板自动切层
// void pointing_device_init_user(void) {
//     set_auto_mouse_layer(1); // only required if AUTO_MOUSE_DEFAULT_LAYER is not set to index of <mouse_layer>
//     set_auto_mouse_enable(true);         // always required before the auto mouse feature will work
// }


// oled设置
#ifdef OLED_ENABLE

static void render_logo(void) {
    static const char PROGMEM raw_logo[] = {
        0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 12, 12,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 12, 12,  0,  0,  0,  0,  0,  0,  0,  6,  6,  6,  6,  6,134,230,126, 30,  6,  0,  0,  0,  0,  0,128,192, 96, 56, 28,  6,  2,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
        0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,248,252,  6,  3,  3,  3,  3,  7,254,252,  6,  3,  3,  3,  3,  6,252,248,  0,  0,  0,  0,  0,  0,255,255,  0,  0,  0,  0,  0,  0,248,252,  6,  3,  3,  3,  3,  3,  3,  6,252,248,  0,  0,  0,  0,  0,  0,255,255,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 28, 31, 27, 24, 48,224,192,  0,  0,240,252, 62, 27, 25, 24, 24, 24, 24, 48,224,192,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
        0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,127,127,  0,  0,  0,  0,  0,  0,127,127,  0,  0,  0,  0,  0,  0,127,127,  0,  0,  0,  0,  0,  0,127,127,  0,  0,  0,  0,  0,  0,127,127,  0,  0,  0,  0,  0,  0,  0,  0,127,127,  0,  0,  0,  0,  0,  0,127,127,  0,  0,  0,  0,  0, 12, 24, 48, 96, 96, 96, 96, 96, 96, 48, 31, 15,  0,  0, 15, 31, 48, 96, 96, 96, 96, 96, 96, 48, 31, 15,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
    };
    oled_write_raw_P(raw_logo, sizeof(raw_logo));
}

oled_rotation_t oled_init_kb(oled_rotation_t rotation) {
    if (!is_keyboard_master()) {
        return OLED_ROTATION_180;  // flips the display 180 degrees if offhand
    }

    return rotation;
}

bool render_status(void) {
    // Host Keyboard Layer Status
    oled_write_P(PSTR("Layer: "), false);

    switch (get_highest_layer(layer_state)) {
        case 0:
            oled_write_P(PSTR("BASE\n"), false);
            break;
        case 1:
            oled_write_P(PSTR("LOWER\n"), false);
            break;
        case 2:
            oled_write_P(PSTR("RAISE\n"), false);
            break;
        case 3:
            oled_write_P(PSTR("ADJUST\n"), false);
            break;
        default:
            // Or use the write_ln shortcut over adding '\n' to the end of your string
            oled_write_ln_P(PSTR("Undefined"), false);
    }

    // Host Keyboard LED Status
    led_t led_state = host_keyboard_led_state();
    oled_write_P(led_state.num_lock ? PSTR("NUM ") : PSTR("    "), false);
    oled_write_P(led_state.caps_lock ? PSTR("CAP ") : PSTR("    "), false);
    oled_write_P(led_state.scroll_lock ? PSTR("SCR ") : PSTR("    "), false);

    return false;
}

bool oled_task_kb(void) {
    if (!oled_task_user()) {
        return false;
    }
    if (is_keyboard_master()) {
        render_status();  // Renders the current keyboard state (layer, lock, caps, scroll, etc)
    } else {
        render_logo();  // Renders a static logo
        oled_scroll_left();  // Turns on scrolling
    }
    return false;
}

#endif

