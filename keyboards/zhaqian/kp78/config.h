/* Copyright 2022 ZhaQian
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "config_common.h"

#define MATRIX_ROWS 6
#define MATRIX_COLS 14

#define MATRIX_ROW_PINS { A15, B3, B4, B5, B6, B7 }
#define MATRIX_COL_PINS { A0, A1, A2, B14, B13, B12, B11, B10, B1, B0, A7, A6, A5, A4 }

#define DIODE_DIRECTION COL2ROW

#define DEBOUNCE 5

#define LOCKING_SUPPORT_ENABLE
#define LOCKING_RESYNC_ENABLE

#define FORCE_NKRO

#ifdef ENCODER_ENABLE
#define ENCODERS_PAD_A { B8 }
#define ENCODERS_PAD_B { B9 }
#define ENCODER_RESOLUTION 4
#endif

#ifdef RGB_MATRIX_ENABLE
#define RGB_MATRIX_LED_COUNT 102
#define RGB_MATRIX_MAXIMUM_BRIGHTNESS 200
#define RGB_DISABLE_WHEN_USB_SUSPENDED

#define RGB_MATRIX_ANIMATION
#define RGB_MATRIX_FRAMEBUFFER_EFFECTS
#define RGB_MATRIX_KEYPRESSES

#ifdef RGB_MATRIX_CUSTOM_KB
#define RGB_MATRIX_CUSTOM_ANIMATION
#endif
#endif

#ifdef RGB_MATRIX_ENABLE
#define RGB_DI_PIN A10
#define WS2812_PWM_DRIVER PWMD1
#define WS2812_PWM_CHANNEL 3
#define WS2812_DMA_STREAM STM32_DMA1_STREAM5
#endif

#ifdef UNDERGLOW_RGB_MATRIX_ENABLE
#define UG_RGB_MATRIX_ANIMATIONS
#endif

#ifdef DYNAMIC_RGB_INDICATORS_ENABLE
#define ENABLE_RGB_INDICATORS_ANIMATIONS
#endif

#ifdef VIA_ENABLE
#define DYNAMIC_KEYMAP_LAYER_COUNT 3
#endif

#ifdef OPENRGB_ENABLE
#define OPENRGB_DIRECT_MODE_USE_UNIVERSAL_BRIGHTNESS
#endif

