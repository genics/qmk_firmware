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



#ifdef RGB_MATRIX_ENABLE
#define WS2812_DI_PIN GP28
#define WS2812_PWM_DRIVER PWMD6
#define WS2812_PWM_CHANNEL RP2040_PWM_CHANNEL_A
// #define WS2812_DMA_STREAM STM32_DMA1_STREAM5
#endif


#ifdef AUDIO_ENABLE
#define AUDIO_PIN GP2
#define AUDIO_PWM_DRIVER PWMD1
#define AUDIO_PWM_CHANNEL RP2040_PWM_CHANNEL_A
#define AUDIO_CLICKY
#define AUDIO_CLICKY_FREQ_DEFAULT 440.0f
#define AUDIO_CLICKY_FREQ_MIN 65.0f
#define AUDIO_CLICKY_FREQ_MAX 1500.0f
#define AUDIO_CLICKY_FREQ_FACTOR 10.0f
#define AUDIO_CLICKY_FREQ_RANDOMNESS 0.0f
#define AUDIO_CLICKY_DELAY_DURATION 1
#define AUDIO_INIT_DELAY 2
#define STARTUP_SONG SONG(ODE_TO_JOY)
#define GOODBYE_SONG SONG(CAMPANELLA)
#define MUSIC_ON_SONG SONG(ZELDA_PUZZLE)
#endif




#define SERIAL_USART_FULL_DUPLEX
#define SERIAL_USART_PIN_SWAP
#define SERIAL_USART_TX_PIN GP0
#define SERIAL_USART_RX_PIN GP1
// #define SOFT_SERIAL_PIN GP1
#define SERIAL_PIO_USE_PIO1


// #define I2C_DRIVER I2CD1
// #define I2C1_SDA_PIN GP10
// #define I2C1_SCL_PIN GP11

// #define SPI_DRIVER SPID1
// #define SPI_SCK_PIN GP10
// #define SPI_MOSI_PIN GP11
// #define SPI_MISO_PIN GP12

// #define POINTING_DEVICE_CS_PIN GP9

// #define LCD_DC_PIN GP12
// #define LCD_CS_PIN GP9
// #define LCD_RST_PIN GP13


#ifdef RGB_MATRIX_ENABLE
#    define RGB_MATRIX_LED_COUNT RGBLED_NUM
#endif


// 双击重启
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_LED GP17
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 1000U


// 定义左右手，需要生成左右固件，分别烧录。
// #define EE_HANDS
// #define SPLIT_USB_DETECT

#define SOLENOID_PIN GP25

