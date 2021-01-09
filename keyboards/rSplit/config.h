#pragma once /* everyone else did it even though it works without it */

#ifndef CONFIG_H
#define CONFIG_H

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x6060
#define DEVICE_VER      0x0001
#define MANUFACTURER    rah1236
#define PRODUCT         rSplit 60%
#define DESCRIPTION     tight

/* key matrix size */
#define MATRIX_ROWS 10 /* double value of actual rows */
#define MATRIX_COLS 8 /* if uneven, set value as highest */

/* key matrix pins */
#define MATRIX_ROW_PINS { C6, D7, E6, B4, B5 }
#define MATRIX_COL_PINS { F6, F7, B1, B3, B2, B6, B0, B0 } /* Have to set last 2 columns even though they don't exist */
#define MATRIX_ROW_PINS_RIGHT { B1, F7, F6, F5, F4 }
#define MATRIX_COL_PINS_RIGHT { C6, D7, E6, B4, B5, B6, B2, B3 }

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Using trrs cable between boards */
#define USE_I2C

/* Set 0 if debouncing isn't needed */
#define DEBOUNCING_DELAY 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE

/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE
#define PREVENT_STUCK_MODIFIERS

/* Depreciated apparently */
#define NO_ACTION_MACRO
#define NO_ACTION_FUNCTION

/* Wasn't sure in documentation if this is needed for AVR but included anyways */
#define SPLIT_USB_DETECT
#define SPLIT_USB_TIMEOUT 2000
#define SPLIT_USB_TIMEOUT_POLL 10

/* Eeprom setup for either handedness */
#define EE_HANDS

#endif