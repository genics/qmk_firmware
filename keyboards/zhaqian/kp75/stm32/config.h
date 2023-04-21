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

#pragma once

#define FORCE_NKRO

#ifdef ENCODER_ENABLE
#define ENCODERS_PAD_A { A9 }
#define ENCODERS_PAD_B { A8 }
#define ENCODER_RESOLUTION 4
#endif

#ifdef RGB_MATRIX_ENABLE
#define RGB_DI_PIN A10
#define WS2812_PWM_DRIVER PWMD1
#define WS2812_PWM_CHANNEL 3
#define WS2812_DMA_STREAM STM32_DMA1_STREAM5
#define WS2812_DMA_CHANNEL 5
#define RGB_MATRIX_LED_COUNT 106
#define RGB_MATRIX_MAXIMUM_BRIGHTNESS 200
#define RGB_DISABLE_WHEN_USB_SUSPENDED
#define RGB_MATRIX_ANIMATION
#define RGB_MATRIX_FRAMEBUFFER_EFFECTS
#define RGB_MATRIX_KEYPRESSES
#ifdef RGB_MATRIX_CUSTOM_KB
#define RGB_MATRIX_CUSTOM_ANIMATION
#endif
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



