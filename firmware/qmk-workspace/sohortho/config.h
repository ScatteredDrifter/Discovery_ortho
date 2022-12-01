// Copyright 22 ScatteredDrifter / evelynsta

#pragma once

#include "config_common.h"

/* --- USB Device properties --- */
#define VENDOR_ID 0xFAB0
#define PRODUCT_ID 0xFAB2
#define DEVICE_VER 0x0001
#define MANUFACTURER ScatteredDrifter
#define PRODUCT SO[H]Ortho!

/* --- Matrix definition --- */
#define MATRIX_ROWS 4 
#define MATRIX_COLS 14

/* --- Matrix assignment --- */ 
#define MATRIX_COL_PINS \
    { GP24, GP25, GP2, GP3, GP4, GP7, GP23, GP13, GP17, GP16, GP18, GP19, GP20, GP21 } 
#define MATRIX_ROW_PINS \
    { GP22, GP0, GP1, GP5 } 
/* --- Encoder assignment --- */
#define ENCODER_RESOLUTION 4
#define ENCODERS_PAD_A {GP14 }
#define ENCODERS_PAD_B {GP15 }

/*#define ENCODER_DIRECTION_FLIP*/

/* --- additional settings --- */
#define DEBUG_MATRIX_SCAN_RATE
#define LAYER_STATE_16BIT
// reducing chattering, set to 0 if not necessary 
#define DEBOUNCE 5 
#define DIODE_DIRECTION COL2ROW


//#define QMK_WAITING_TEST_BUSY_PIN GP8
//#define QMK_WAITING_TEST_YIELD_PIN GP9

/* --- RP2040 specific settings */
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
//#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_LED GP25
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 500U

#define RGB_DI_PIN GP6
