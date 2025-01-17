#pragma once

#ifndef RSPLIT_H
#define RSPLIT_H

#include "quantum.h"

#define KEYMAP( \
	L00, L01, L02, L03, L04, L05, 	 R00, R01, R02, R03, R04, R05, R06, R07, \
	L10, L11, L12, L13, L14, L15, 	 R10, R11, R12, R13, R14, R15, R16, R17, \
	L20, L21, L22, L23, L24, L25, 	      R21, R22, R23, R24, R25, R26, R27, \
	L30, L31, L32, L33, L34,      	      R31, R32, R33, R34, R35, R36, R37, \
	L40, L41, L42, L43,  	           		        R43, R44, R45, R46, R47 \
) { \
	{ L00,   L01,   L02,   L03,   L04,   L05,   KC_NO,   KC_NO }, \
	{ L10,   L11,   L12,   L13,   L14,   L15,   KC_NO,   KC_NO }, \
	{ L20,   L21,   L22,   L23,   L24,   L25,   KC_NO,   KC_NO }, \
	{ L30,   L31,   L32,   L33,   L34,   KC_NO,   KC_NO,   KC_NO }, \
	{ L40,   L41,   L42,   L43,   KC_NO, KC_NO,   KC_NO,   KC_NO }, \
\
	{ R00,   R01,   R02,   R03,   R04,   R05,   R06,   R07 }, \
	{ R10,   R11,   R12,   R13,   R14,   R15,   R16,   R17 }, \
	{ KC_NO, R21,   R22,   R23,   R24,   R25,   R26,   R27 }, \
	{ KC_NO, R31,   R32,   R33,   R34,   R35,   R36,   R37 }, \
	{ KC_NO, KC_NO, KC_NO, R43,   R44,   R45,   R46,   R47 }, \
}
#endif