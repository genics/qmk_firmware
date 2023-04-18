/* Copyright 2020 K-Pax <07genics@gmail.com>
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

#include "kpmini.h"


#ifdef RGB_MATRIX_ENABLE

led_config_t g_led_config = {
	{
        //Key matrix (0 -> 81)
		{0, 1, 2, 3},
		{4, 5, 6, 7},
		{8, 9, 10, 11},
		{12, 13,14,15},
		{16, 17,18 },
        // Underglow (82 -> 102)
        // {81, 82, 83, 84, 85, 86, 87},
        // {88, NO_LED,NO_LED,NO_LED,NO_LED,NO_LED,89},
        // {90, NO_LED,NO_LED,NO_LED,NO_LED,NO_LED,91},
        // {92, NO_LED,NO_LED,NO_LED,NO_LED,NO_LED,93},
        // {94, 95, 96, 97, 98, 99, 100},
	}, {
        //Key matrix (0 -> 81)
        {28, 10}, {84, 10}, {140, 10}, {196, 10},
        {28, 23}, {84, 23}, {140, 23}, {196, 23},
        {28, 35}, {84, 35}, {140, 35}, {196, 35},
        {28, 48}, {84, 48}, {140, 48}, {196, 48},
        {28, 61}, {84, 61}, {168, 61},
        // Underglow (82 -> 102)
        {15, 30},{130, 5},{217, 22},{140, 62},
	}, {
        //Key matrix (0 -> 81)
		4, 4, 4, 4,
        4, 4, 4, 4,
        4, 4, 4, 4,
        4, 4, 4, 4,
        4, 4, 4,
        // Underglow (82 -> 102)
        2, 2, 2, 2,
	}
};

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
        default: break;
    }
    return true;
}
#endif



