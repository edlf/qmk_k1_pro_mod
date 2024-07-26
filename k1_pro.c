/* Copyright 2023 @ Keychron (https://www.keychron.com)
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
#include "quantum.h"
#include "rgb_matrix.h"

#ifdef DIP_SWITCH_ENABLE

bool dip_switch_update_kb(uint8_t index, bool active) {
    // Mac/win switch
    if (index == 0) {
        if (active) {
            rgblight_disable();
        } else {
            rgblight_enable();
        }
    }

    dip_switch_update_user(index, active);

    return true;
}

#endif // DIP_SWITCH_ENABLE

void keyboard_post_init_kb(void) {
    dip_switch_read(true);
    keyboard_post_init_user();
}

void matrix_scan_kb(void) {
    matrix_scan_user();
}

void suspend_wakeup_init_kb(void) {
    // code will run on keyboard wakeup
    clear_keyboard();
    send_keyboard_report();
}
