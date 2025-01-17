/* Copyright 2023 splitkb.com <support@splitkb.com>
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

// Not yet available in `keymap.json` format
#ifdef RGB_MATRIX_ENABLE
#    define RGB_DISABLE_WHEN_USB_SUSPENDED
#    define RGB_MATRIX_KEYPRESSES
#    define ENABLE_RGB_MATRIX_SOLID_REACTIVE_SIMPLE
#    define ENABLE_RGB_MATRIX_SOLID_SPLASH
#    define ENABLE_RGB_MATRIX_RAINBOW_BEACON 
#    define ENABLE_RGB_MATRIX_CYCLE_LEFT_RIGHT
#endif
#define OLED_TIMEOUT 60000
#define ENCODER_RESOLUTION 2
#define SPLIT_LAYER_STATE_ENABLE
#define SPLIT_WPM_ENABLE
#define SPLIT_MODS_ENABLE
#define SPLIT_OLED_ENABLE
#define SPLIT_ST7565_ENABLE
#define SPLIT_TRANSPORT_MIRROR
#define SPLIT_ACTIVITY_ENABLE
#define SPLIT_TRANSACTION_IDS_USER RPC_ID_SLAVE_COUNTER
#define COMBO_VARIABLE_LEN
#define COMBO_TERM 50
#define CAPS_WORD_INVERT_ON_SHIFT
//#define TAPPING_TOGGLE 2