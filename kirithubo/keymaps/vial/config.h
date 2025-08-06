// Copyright 2024 butasan (@kumasan555)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT

/* key matrix size */
//#define MATRIX_ROWS 4
//#define MATRIX_COLS 10

#define VIAL_KEYBOARD_UID {0x7E, 0x54, 0xBB, 0xD6, 0x93, 0x8C, 0x44, 0xDC}
#define VIAL_UNLOCK_COMBO_ROWS {0,0}
#define VIAL_UNLOCK_COMBO_COLS {0,1}


#define RGB_MATRIX_LED_COUNT 36
#define RGB_MATRIX_DEFAULT_MODE RGB_MATRIX_MULTISPLASH


#define ENCODER_RESOLUTION 4

