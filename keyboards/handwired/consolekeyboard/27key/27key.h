/* Copyright 2021 Gareth Edwards
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

#include "quantum.h"

#define LAYOUT( \
    K000, K001, K002,      K004, K005, K006,       K008, K009, K010,   \
    K100, K101, K102,      K104, K105, K106,       K108, K109, K110,   \
    K200, K201, K202,      K204, K205, K206,       K208, K209, K210    \
    ) { \
    { K000,   K001,   K002,   KC_NO, K004,   K005,   K006,   KC_NO, K008,   K009,   K010   }, \
    { K100,   K101,   K102,   KC_NO, K104,   K105,   K106,   KC_NO, K108,   K109,   K110   }, \
    { K200,   K201,   K202,   KC_NO, K204,   K205,   K206,   KC_NO, K208,   K209,   K210   }, \
}
