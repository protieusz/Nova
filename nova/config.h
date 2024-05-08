// Copyright 2024 ProtieusKeebs
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET // Activates the double-tap behavior
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 200U // Timeout window in ms in which the double tap can occur.

#ifdef COMBO_ENABLE
#    define COMBO_COUNT 2
#    define COMBO_TERM 200
#endif

/* Encoder */
//#define ENCODERS_PAD_A { GP11 }
//#define ENCODERS_PAD_B { GP12 }
//#define ENCODER_RESOLUTION 4

/* Matrix*/
//#define MATRIX_COL_PINS { GP25, GP24, GP23, GP22, GP21, GP26, GP27, GP20, GP19, GP18, GP17, GP16, GP13 }
//#define MATRIX_ROW_PINS { GP28, GP10, GP14, GP15 }

/* COL2ROW, ROW2COL */
//#define DIODE_DIRECTION COL2ROW


/* Set 0 if debouncing isn't needed */
//#define DEBOUNCE 5


/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap (Very Important for Scroll Lock!!!) */
#undef LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#undef LOCKING_RESYNC_ENABLE


/* RGB LED */
//#define WS2812_PIO_USE_PIO1
#define WS2812_DI_PIN GP17

#ifdef RGBLIGHT_ENABLE
    #define RGBLIGHT_LED_COUNT 38
    #define RGBLIGHT_LIMIT_VAL 80
    #define RGBLIGHT_HUE_STEP 10
    #define RGBLIGHT_SAT_STEP 17
    #define RGBLIGHT_VAL_STEP 17

    #define RGBLIGHT_EFFECT_BREATHING
    #define RGBLIGHT_EFFECT_RAINBOW_MOOD
    #define RGBLIGHT_EFFECT_RAINBOW_SWIRL
    #define RGBLIGHT_EFFECT_SNAKE
    #define RGBLIGHT_EFFECT_KNIGHT
    #define RGBLIGHT_EFFECT_CHRISTMAS
    #define RGBLIGHT_EFFECT_STATIC_GRADIENT
    #define RGBLIGHT_EFFECT_TWINKLE
    #define RGBLIGHT_EFFECT_ALTERNATING
#endif


/* Trackball */

#ifdef POINTING_DEVICE_ENABLE
#    define SPI_DRIVER SPID1
#    define SPI_SCK_PIN GP14
#    define SPI_MISO_PIN GP12
#    define SPI_MOSI_PIN GP15

#endif

#ifndef PMW33XX_CS_PIN
#    define PMW33XX_CS_PIN GP13
#endif
#define POINTING_DEVICE_INVERT_X
#define POINTING_DEVICE_INVERT_Y
#define POINTING_DEVICE_ROTATION_180
