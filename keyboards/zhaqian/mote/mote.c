// Copyright 2023 zzeneg (@zzeneg)
// SPDX-License-Identifier: GPL-2.0-or-later

#include "mote.h"
#include "display.h"

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
            tap_code_delay(KC_RIGHT, 10);
        } else {
            tap_code_delay(KC_LEFT, 10);
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
// led_config_t g_led_config = {
// 	{
// 		{0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13},
// 		{14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, NO_LED, 26},
// 		{27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, NO_LED, 39},
// 		{40, 41, 42, NO_LED, 43, NO_LED, 44, NO_LED, 45, 46, 47, 48, NO_LED, 49},
// 	}, {
// 		{8, 17}, {23, 17}, {39, 17}, {54, 17}, {70, 17}, {85, 17}, {100, 17}, {116, 17}, {131, 17}, {147, 17}, {162, 17}, {178, 17}, {193, 17}, {216, 17},
// 		{10, 30}, {27, 30}, {42, 30}, {58, 30}, {73, 30}, {89, 30}, {104, 30}, {120, 30}, {135, 30}, {151, 30}, {166, 30}, {187, 30}, {216, 30},
// 		{14, 44}, {35, 44}, {50, 44}, {66, 44}, {81, 44}, {97, 44}, {112, 44}, {127, 44}, {143, 44}, {158, 44}, {176, 44}, {197, 47}, {216, 44},
// 		{10, 57}, {27, 57}, {44, 57}, {75, 57}, {114, 57}, {141, 57}, {160, 57}, {182, 61}, {197, 61}, {212, 61},
//         {204, 64}, {175, 64}, {156, 64}, {131, 64}, {98, 64}, {58, 64}, {39, 64}, {13, 64},
//         {10, 3}, {35, 3}, {63, 3}, {95, 3}, {127, 3}, {154, 3}, {172, 3}, {210, 3},
// 	}, {
// 		4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
// 		4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
// 		4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
// 		4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
//         2, 2, 2, 2, 2, 2, 2, 2,
//         2, 2, 2, 2, 2, 2, 2, 2,
// 	}
// };

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
