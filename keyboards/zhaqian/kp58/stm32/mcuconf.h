/* Copyright 2020 QMK
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

#include_next <mcuconf.h>
// 打开rgb通道
#undef STM32_PWM_USE_TIM1
#define STM32_PWM_USE_TIM1 TRUE
// #undef STM32_GPT_USE_TIM6
// #define STM32_GPT_USE_TIM6                  TRUE
// #undef STM32_GPT_USE_TIM7
// #define STM32_GPT_USE_TIM7                  TRUE
// #undef STM32_GPT_USE_TIM8
// #define STM32_GPT_USE_TIM8                  TRUE
// 打开audio通道
#undef STM32_PWM_USE_TIM4
#define STM32_PWM_USE_TIM4 TRUE


// 打开分离键盘通讯
#undef STM32_SERIAL_USE_USART1
#define STM32_SERIAL_USE_USART1 TRUE



