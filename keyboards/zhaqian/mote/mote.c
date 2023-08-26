// Copyright 2023 zzeneg (@zzeneg)
// SPDX-License-Identifier: GPL-2.0-or-later

#include "mote.h"
#include "display.h"
#include "user_song_list.h"


#ifdef CONSOLE_ENABLE
#    include "print.h"
#endif // CONSOLE_ENABLE


static bool display_enabled;

/* public function to be used in keymaps */
bool is_display_enabled(void) {
    return display_enabled;
}

/* default encoder keys */
bool encoder_update_kb(uint8_t index, bool clockwise) {
    if (!encoder_update_user(index, clockwise)) {
        return false;
    }
    if (index == 0) {
        if (clockwise) {
            tap_code_delay(KC_VOLU, 10);
        } else {
            tap_code_delay(KC_VOLD, 10);
        }
    } else if (index == 1) {
        if (clockwise) {
            tap_code_delay(KC_VOLU, 10);
        } else {
            tap_code_delay(KC_VOLD, 10);
        }
    }
    return true;
}

/* Caps Lock processing */
bool led_update_kb(led_t led_state) {
    bool res = led_update_user(led_state);
    if (res && display_enabled) {
        display_process_caps(led_state.caps_lock);
    }

    return res;
}

void housekeeping_task_kb(void) {
    if (display_enabled) {
        display_housekeeping_task();
    }

    housekeeping_task_user();
}

void keyboard_post_init_kb(void) {
    display_enabled = false;

    if (is_keyboard_left()) {
        display_enabled = display_init_kb();
    }

    keyboard_post_init_user();
}


#ifdef RGB_MATRIX_ENABLE

bool rgb_matrix_indicators_kb(void) {
    if (!rgb_matrix_indicators_user()) {
        return false;
    }

    HSV hsv = {0, 255, rgb_matrix_get_val()};
    RGB rgb = hsv_to_rgb(hsv);
    switch(biton32(layer_state)) {
        case 1: rgb_matrix_set_color(1, rgb.r, rgb.g, rgb.b); break;
        case 2: rgb_matrix_set_color(2, rgb.r, rgb.g, rgb.b); break;
        case 3: rgb_matrix_set_color(3, rgb.r, rgb.g, rgb.b); break;
        case 4: rgb_matrix_set_color(4, rgb.r, rgb.g, rgb.b); break;
        case 5: rgb_matrix_set_color(5, rgb.r, rgb.g, rgb.b); break;
        case 6: rgb_matrix_set_color(6, rgb.r, rgb.g, rgb.b); break;
        case 7: rgb_matrix_set_color(7, rgb.r, rgb.g, rgb.b); break;
        default: break;
    }
    return true;
}
#endif

// Forward declare RP2040 SDK declaration.
void gpio_init(uint gpio);

void keyboard_pre_init_kb(void) {
    // Ensures that GP26 through GP29 are initialized as digital inputs (as
    // opposed to analog inputs).  These GPIOs are shared with A0 through A3,
    // respectively.  On RP2040-B2 and later, the digital inputs are disabled by
    // default (see RP2040-E6).
    gpio_init(GP26);
    gpio_init(GP27);
    gpio_init(GP28);
    gpio_init(GP29);

    keyboard_pre_init_user();
}
