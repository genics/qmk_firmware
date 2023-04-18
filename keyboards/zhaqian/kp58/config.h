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
#include "analog.h"


#define MATRIX_ROWS 6
#define MATRIX_COLS 15

#define MATRIX_ROW_PINS { A15, B3, B4, B5, B7, B8 }
#define MATRIX_COL_PINS { A2, A1, A0, B12, B13, B14, A3, A4, A5, A6, A7, B0, B1, B6, B15 }

#define DIODE_DIRECTION COL2ROW

#define DEBOUNCE 5

#define LOCKING_SUPPORT_ENABLE
#define LOCKING_RESYNC_ENABLE

#define FORCE_NKRO

#ifdef ENCODER_ENABLE
#define ENCODERS_PAD_A { A9 }
#define ENCODERS_PAD_B { A8 }
#define ENCODER_RESOLUTION 4
#endif

#ifdef RGB_MATRIX_ENABLE
#define RGB_MATRIX_LED_COUNT 106
#define RGB_MATRIX_MAXIMUM_BRIGHTNESS 100
#define RGB_DISABLE_WHEN_USB_SUSPENDED

// #define RGB_MATRIX_ANIMATION
// #define RGB_MATRIX_FRAMEBUFFER_EFFECTS
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

#ifdef AUDIO_ENABLE
#define AUDIO_PIN B9
#define AUDIO_PWM_DRIVER PWMD4
#define AUDIO_PWM_CHANNEL 4
#define AUDIO_CLICKY
#define AUDIO_CLICKY_FREQ_DEFAULT 440.0f
#define AUDIO_CLICKY_FREQ_MIN 65.0f
#define AUDIO_CLICKY_FREQ_MAX 1500.0f
#define AUDIO_CLICKY_FREQ_FACTOR 10.0f
#define AUDIO_CLICKY_FREQ_RANDOMNESS 0.0f
#define AUDIO_CLICKY_DELAY_DURATION 1
// #define AUDIO_STATE_TIMER GPTD8
#define AUDIO_INIT_DELAY 2
#define STARTUP_SONG SONG(ODE_TO_JOY)
#define GOODBYE_SONG SONG(CAMPANELLA)
#define MUSIC_ON_SONG SONG(ZELDA_PUZZLE)
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

// 定义i2c oled支持
// #define OLED_DISPLAY_ADDRESS 0x3C
// #define OLED_RESET -1

#define I2C_DRIVER I2CD2
#define I2C1_SCL_PIN B10
#define I2C1_SDA_PIN B11
#define I2C1_OPMODE OPMODE_I2C
#define I2C1_CLOCK_SPEED 	100000
#define I2C1_DUTY_CYCLE 	STD_DUTY_CYCLE
#define OLED_BRIGHTNESS 255
#define OLED_TIMEOUT 0
#define OLED_SCROLL_TIMEOUT 20000


// 分离键盘的通讯协议设置
#define SERIAL_USART_FULL_DUPLEX   // Enable full duplex operation mode.
#define SERIAL_USART_TX_PIN B6     // USART TX pin
#define SERIAL_USART_RX_PIN B7     // USART RX pin

// 设置摇杆模拟鼠标
#define ANALOG_JOYSTICK_X_AXIS_PIN B1
#define ANALOG_JOYSTICK_Y_AXIS_PIN B0
// #define ANALOG_JOYSTICK_AXIS_MIN 0
// #define ANALOG_JOYSTICK_AXIS_MAX 1023
// #define ANALOG_JOYSTICK_SPEED_REGULATOR 20
// #define ANALOG_JOYSTICK_READ_INTERVAL 10
// #define ANALOG_JOYSTICK_SPEED_MAX 2

// // Min 0, max 32
#define JOYSTICK_BUTTON_COUNT 0
// // Min 0, max 6: X, Y, Z, Rx, Ry, Rz
#define JOYSTICK_AXIS_COUNT 2
// // Min 8, max 16
// #define JOYSTICK_AXIS_RESOLUTION 12


