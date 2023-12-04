/*
This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#define USE_SERIAL

#define MASTER_LEFT
#define SPLIT_USB_DETECT
#define SPLIT_USB_TIMEOUT 2500

#define PERMISSIVE_HOLD
#define TAPPING_TERM 500

#define VIAL_KEYBOARD_UID {0x8A, 0x86, 0x65, 0x9D, 0x13, 0xE1, 0xCB, 0x81}

/* Vial unlock */

#define VIAL_UNLOCK_COMBO_ROWS { 0, 0 }
#define VIAL_UNLOCK_COMBO_COLS { 0, 1 }

/* Vial features */

#define DYNAMIC_KEYMAP_LAYER_COUNT 4
#define DYNAMIC_MACRO_SIZE 0
#define VIAL_KEY_OVERRIDE_ENTRIES 0
#define VIAL_TAP_DANCE_ENTRIES 0
#define VIAL_COMBO_ENTRIES 0
