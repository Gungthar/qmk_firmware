/* Copyright 2018 REPLACE_WITH_YOUR_NAME
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
#ifndef LKQ60_H
#define LKQ60_H

#include "quantum.h"

/* This a shortcut to help you visually see your layout.
 *
 * The first section contains all of the arguments representing the physical
 * layout of the board and position of the keys.
 *
 * The second converts the arguments into a two-dimensional array which
 * represents the switch matrix.
 */
#define LAYOUT( \
    KC_ESC,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,  KC_F6,     KC_F7,  KC_F8,  KC_F9,   KC_F10,  KC_F11,   KC_F12,  KC_BSPC,  \
    KC_GRV,  KC_1,     KC_2,    KC_3,    KC_4,    KC_5,   KC_6,      KC_7,   KC_8,   KC_9,    KC_0,    KC_MINS,  KC_EQL,  KC_ENTER, \
    KC_TAB,  KC_Q,     KC_W,    KC_E,    KC_R,    KC_T,   KC_Y,      KC_U,   KC_I,   KC_O,    KC_P,    KC_LBRC,  KC_RBRC, KC_BSLS,  \
    KC_CAPS, KC_A,     KC_S,    KC_D,    KC_F,    KC_G,   KC_H,      KC_J,   KC_K,   KC_L,    KC_SCLN, KC_QUOT,  KC_NUHS, KC_DEL,   \
    KC_LSFT, KC_NUBS,  KC_Z,    KC_X,    KC_C,    KC_V,   KC_B,      KC_N,   KC_M,   KC_COMM, KC_DOT,  KC_SLSH,  KC_UP,   KC_RSFT,  \
    KC_LCTRL, KC_LALT, KC_DEL,  KC_APP,  KC_SPC,  KC_ENT, KC_TAB,    KC_SPC, KC_TAB, KC_BSPC, KC_RGUI, KC_LEFT,  KC_DOWN, KC_RIGHT  \
) \
{ \
    { KC_ESC,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,  KC_F6,     KC_F7,  KC_F8,  KC_F9,   KC_F10,  KC_F11,   KC_F12,  KC_BSPC }, \
    { KC_GRV,  KC_1,     KC_2,    KC_3,    KC_4,    KC_5,   KC_6,      KC_7,   KC_8,   KC_9,    KC_0,    KC_MINS,  KC_EQL,  KC_ENTER },\
    {KC_TAB,  KC_Q,     KC_W,    KC_E,    KC_R,    KC_T,   KC_Y,      KC_U,   KC_I,   KC_O,    KC_P,    KC_LBRC,  KC_RBRC, KC_BSLS  }, \
    {KC_CAPS, KC_A,     KC_S,    KC_D,    KC_F,    KC_G,   KC_H,      KC_J,   KC_K,   KC_L,    KC_SCLN, KC_QUOT,  KC_NUHS, KC_DEL },  \
    {KC_LSFT, KC_NUBS,  KC_Z,    KC_X,    KC_C,    KC_V,   KC_B,      KC_N,   KC_M,   KC_COMM, KC_DOT,  KC_SLSH,  KC_UP,   KC_RSFT },  \
    {KC_LCTRL, KC_LALT, KC_DEL,  KC_APP,  KC_SPC,  KC_ENT, KC_TAB,    KC_SPC, KC_TAB, KC_BSPC, KC_RGUI, KC_LEFT,  KC_DOWN, KC_RIGHT },  \

}


#endif
