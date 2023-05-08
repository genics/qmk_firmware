/* Copyright 2023 ZhaQian
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

#pragma once

#define LOCKING_SUPPORT_ENABLE
#define LOCKING_RESYNC_ENABLE

#define FORCE_NKRO

#ifdef ENCODER_ENABLE
#define ENCODER_RESOLUTION 4
#endif

#ifdef RGB_MATRIX_ENABLE
#define RGB_MATRIX_LED_COUNT 106
#define RGB_MATRIX_MAXIMUM_BRIGHTNESS 200
#define RGB_DISABLE_WHEN_USB_SUSPENDED

#define RGB_MATRIX_ANIMATION
#define RGB_MATRIX_FRAMEBUFFER_EFFECTS
#define RGB_MATRIX_KEYPRESSES
// 定义分离rgb
#define RGBLIGHT_SPLIT
#define RGBLED_SPLIT { 29, 29 }

#ifdef RGB_MATRIX_CUSTOM_KB
#define RGB_MATRIX_CUSTOM_ANIMATION
#endif
#endif



#ifdef UNDERGLOW_RGB_MATRIX_ENABLE
#define UG_RGB_MATRIX_ANIMATIONS
#endif

#ifdef DYNAMIC_RGB_INDICATORS_ENABLE
#define ENABLE_RGB_INDICATORS_ANIMATIONS
#endif

#ifdef VIA_ENABLE
#define DYNAMIC_KEYMAP_LAYER_COUNT 6
#endif

#ifdef OPENRGB_ENABLE
#define OPENRGB_DIRECT_MODE_USE_UNIVERSAL_BRIGHTNESS
#endif

#ifdef DYNAMIC_TAP_DANCE_ENABLE
#define DYNAMIC_TAP_DANCE_ENTRIES 10
#endif

#ifdef DYNAMIC_COMBOS_ENABLE
#define DYNAMIC_COMBOS_ENTRIES 10
#endif

#ifdef AUTO_SWITCH_LAYERS_ENABLE
#define ASL_NO_UPDATE_FN_KEYCODE
#endif

// 定义分离键盘
#define SERIAL_USART_FULL_DUPLEX   // Enable full duplex operation mode.
#define SERIAL_USART_TX_PIN B6     // USART TX pin
#define SERIAL_USART_RX_PIN B7     // USART RX pin
// #define SPLIT_TRANSPORT = custom
// #define SOFT_SERIAL_PIN B6
// #define EE_HANDS
// #define SPLIT_USB_DETECT




