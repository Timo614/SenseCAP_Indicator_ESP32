/*******************************************************************************
 * Size: 25 px
 * Bpp: 8
 * Opts: --bpp 8 --size 25 --font D:\Indicator_LoRaWAN\LoRaWANspj\assets\fonts\Montserrat-Medium.ttf -o D:\Indicator_LoRaWAN\LoRaWANspj\assets\fonts\ui_font_SensorDataFont.c --format lvgl -r 0x20-0x39 --no-compress --no-prefilter
 ******************************************************************************/

#include "../ui.h"

#ifndef UI_FONT_SENSORDATAFONT
#define UI_FONT_SENSORDATAFONT 1
#endif

#if UI_FONT_SENSORDATAFONT

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */

    /* U+0021 "!" */
    0x7, 0xff, 0xff, 0xc3, 0x0, 0xfe, 0xff, 0xb9,
    0x0, 0xf5, 0xff, 0xaf, 0x0, 0xec, 0xff, 0xa5,
    0x0, 0xe2, 0xff, 0x9b, 0x0, 0xd9, 0xff, 0x91,
    0x0, 0xd0, 0xff, 0x87, 0x0, 0xc7, 0xff, 0x7d,
    0x0, 0xbd, 0xff, 0x73, 0x0, 0xb4, 0xff, 0x69,
    0x0, 0xab, 0xff, 0x60, 0x0, 0xa2, 0xff, 0x56,
    0x0, 0x52, 0x88, 0x29, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x1a, 0x4a, 0x9, 0x15, 0xee, 0xff, 0xb6,
    0x3b, 0xff, 0xff, 0xeb, 0x4, 0xb1, 0xf3, 0x6f,

    /* U+0022 "\"" */
    0x69, 0xff, 0xa8, 0x0, 0x0, 0xe5, 0xff, 0x30,
    0x64, 0xff, 0xa2, 0x0, 0x0, 0xe0, 0xff, 0x2a,
    0x5f, 0xff, 0x9c, 0x0, 0x0, 0xda, 0xff, 0x24,
    0x5a, 0xff, 0x96, 0x0, 0x0, 0xd5, 0xff, 0x1e,
    0x55, 0xff, 0x8f, 0x0, 0x0, 0xcf, 0xff, 0x17,
    0x50, 0xff, 0x89, 0x0, 0x0, 0xc9, 0xff, 0x11,
    0x4b, 0xff, 0x83, 0x0, 0x0, 0xc4, 0xff, 0xb,
    0x4, 0x10, 0x8, 0x0, 0x0, 0xc, 0x10, 0x0,

    /* U+0023 "#" */
    0x0, 0x0, 0x0, 0x0, 0x0, 0x51, 0xff, 0x76,
    0x0, 0x0, 0x0, 0x0, 0xd9, 0xee, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x74, 0xff,
    0x52, 0x0, 0x0, 0x0, 0x2, 0xf9, 0xcb, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x97,
    0xff, 0x2e, 0x0, 0x0, 0x0, 0x1f, 0xff, 0xa8,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0xba, 0xff, 0xa, 0x0, 0x0, 0x0, 0x42, 0xff,
    0x85, 0x0, 0x0, 0x0, 0x0, 0x88, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xe8, 0x0, 0x7b, 0xe8,
    0xe8, 0xe8, 0xff, 0xf9, 0xe8, 0xe8, 0xe8, 0xe8,
    0xf5, 0xff, 0xed, 0xe8, 0xe8, 0xd2, 0x0, 0x0,
    0x0, 0x0, 0x1a, 0xff, 0xad, 0x0, 0x0, 0x0,
    0x0, 0x9e, 0xff, 0x26, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x39, 0xff, 0x8e, 0x0, 0x0,
    0x0, 0x0, 0xbc, 0xff, 0x9, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x58, 0xff, 0x6f, 0x0,
    0x0, 0x0, 0x0, 0xdb, 0xeb, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x77, 0xff, 0x50,
    0x0, 0x0, 0x0, 0x1, 0xf7, 0xce, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x96, 0xff,
    0x31, 0x0, 0x0, 0x0, 0x17, 0xff, 0xb0, 0x0,
    0x0, 0x0, 0x0, 0x4d, 0xec, 0xec, 0xec, 0xf9,
    0xff, 0xee, 0xec, 0xec, 0xec, 0xef, 0xff, 0xf8,
    0xec, 0xec, 0xec, 0x16, 0x54, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0x18, 0x0, 0x0, 0x0,
    0x0, 0xee, 0xd9, 0x0, 0x0, 0x0, 0x0, 0x6e,
    0xff, 0x59, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0xa, 0xff, 0xbc, 0x0, 0x0, 0x0, 0x0,
    0x8a, 0xff, 0x3c, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x26, 0xff, 0x9f, 0x0, 0x0, 0x0,
    0x0, 0xa6, 0xff, 0x1f, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x42, 0xff, 0x82, 0x0, 0x0,
    0x0, 0x0, 0xc2, 0xfd, 0x5, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x5e, 0xff, 0x66, 0x0,
    0x0, 0x0, 0x0, 0xde, 0xe6, 0x0, 0x0, 0x0,
    0x0, 0x0,

    /* U+0024 "$" */
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x74, 0x5a,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0xe8, 0xb4, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0xe8, 0xb4, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0xe8, 0xb4, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x5, 0x62, 0xb7, 0xe9, 0xff, 0xff,
    0xf0, 0xca, 0x87, 0x26, 0x0, 0x0, 0x0, 0x1b,
    0xcf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xfd, 0x7b, 0x0, 0x2, 0xcb, 0xff, 0xff,
    0xaf, 0x5c, 0xed, 0xc9, 0x54, 0x83, 0xd8, 0xff,
    0x65, 0x0, 0x4a, 0xff, 0xff, 0x76, 0x0, 0x0,
    0xe8, 0xb4, 0x0, 0x0, 0x0, 0x56, 0xb, 0x0,
    0x7f, 0xff, 0xf9, 0x6, 0x0, 0x0, 0xe8, 0xb4,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x7b, 0xff,
    0xfb, 0xa, 0x0, 0x0, 0xe8, 0xb4, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x4a, 0xff, 0xff, 0xa2,
    0xb, 0x0, 0xe8, 0xb4, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x1, 0xc4, 0xff, 0xff, 0xe9, 0x91,
    0xf1, 0xb4, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0xe, 0xab, 0xff, 0xff, 0xff, 0xff, 0xfa,
    0xbe, 0x72, 0x19, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x31, 0x8e, 0xd9, 0xff, 0xff, 0xff, 0xff,
    0xfa, 0x8e, 0x5, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0xe8, 0xd7, 0xb2, 0xfa, 0xff, 0xff,
    0xa8, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0xe8, 0xb4, 0x0, 0x21, 0xc3, 0xff, 0xff, 0x37,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xe8, 0xb4,
    0x0, 0x0, 0x1b, 0xff, 0xff, 0x6c, 0x3, 0x2,
    0x0, 0x0, 0x0, 0x0, 0xe8, 0xb4, 0x0, 0x0,
    0xb, 0xfd, 0xff, 0x74, 0x5d, 0xbc, 0x23, 0x0,
    0x0, 0x0, 0xe8, 0xb4, 0x0, 0x0, 0x76, 0xff,
    0xff, 0x3e, 0xcb, 0xff, 0xfb, 0xaf, 0x67, 0x46,
    0xed, 0xc4, 0x59, 0xad, 0xff, 0xff, 0xc1, 0x0,
    0x2e, 0xcf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xc9, 0x15, 0x0, 0x0, 0x1,
    0x4b, 0x9d, 0xd9, 0xf3, 0xff, 0xff, 0xef, 0xb9,
    0x60, 0x4, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0xe8, 0xb6, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0xe8, 0xb4, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xe8, 0xb4,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0,

    /* U+0025 "%" */
    0x0, 0x0, 0x2b, 0xb4, 0xf3, 0xf3, 0xb4, 0x2a,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x2, 0xc6,
    0xf8, 0x2a, 0x0, 0x0, 0x0, 0x0, 0x24, 0xf0,
    0xf0, 0x97, 0x96, 0xef, 0xef, 0x23, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x73, 0xff, 0x79, 0x0, 0x0,
    0x0, 0x0, 0x0, 0xab, 0xfc, 0x2f, 0x0, 0x0,
    0x2c, 0xfb, 0xa5, 0x0, 0x0, 0x0, 0x0, 0x26,
    0xf6, 0xcb, 0x3, 0x0, 0x0, 0x0, 0x0, 0x1,
    0xf3, 0xb7, 0x0, 0x0, 0x0, 0x0, 0xb6, 0xed,
    0x0, 0x0, 0x0, 0x2, 0xc4, 0xf9, 0x2b, 0x0,
    0x0, 0x0, 0x0, 0x0, 0xf, 0xff, 0x94, 0x0,
    0x0, 0x0, 0x0, 0x95, 0xff, 0x6, 0x0, 0x0,
    0x71, 0xff, 0x7b, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x5, 0xfd, 0xa6, 0x0, 0x0, 0x0, 0x0,
    0xa6, 0xf9, 0x0, 0x0, 0x24, 0xf6, 0xcd, 0x4,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xca,
    0xea, 0xa, 0x0, 0x0, 0xa, 0xe9, 0xc4, 0x0,
    0x1, 0xc2, 0xfa, 0x2e, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x53, 0xff, 0xbd, 0x3f,
    0x3e, 0xba, 0xff, 0x50, 0x0, 0x6f, 0xff, 0x7e,
    0x0, 0x0, 0x13, 0x18, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x72, 0xf8, 0xff, 0xff, 0xf8, 0x72,
    0x0, 0x23, 0xf5, 0xcf, 0x5, 0x2d, 0xc9, 0xff,
    0xff, 0xd9, 0x41, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x12, 0x48, 0x48, 0x12, 0x0, 0x1, 0xc1, 0xfa,
    0x30, 0x17, 0xeb, 0xec, 0x77, 0x6e, 0xde, 0xf8,
    0x30, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x6d, 0xff, 0x81, 0x0, 0x8b, 0xff,
    0x37, 0x0, 0x0, 0x1e, 0xf8, 0xb6, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x22, 0xf4,
    0xd1, 0x5, 0x0, 0xd3, 0xd0, 0x0, 0x0, 0x0,
    0x0, 0xab, 0xf9, 0x7, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x1, 0xbf, 0xfb, 0x31, 0x0, 0x0,
    0xf1, 0xac, 0x0, 0x0, 0x0, 0x0, 0x85, 0xff,
    0x20, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x6b,
    0xff, 0x83, 0x0, 0x0, 0x0, 0xef, 0xad, 0x0,
    0x0, 0x0, 0x0, 0x87, 0xff, 0x1e, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x20, 0xf3, 0xd3, 0x6, 0x0,
    0x0, 0x0, 0xcc, 0xd0, 0x0, 0x0, 0x0, 0x0,
    0xac, 0xf6, 0x4, 0x0, 0x0, 0x0, 0x0, 0x1,
    0xbd, 0xfc, 0x34, 0x0, 0x0, 0x0, 0x0, 0x7d,
    0xff, 0x36, 0x0, 0x0, 0x1e, 0xf8, 0xa9, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x69, 0xff, 0x86, 0x0,
    0x0, 0x0, 0x0, 0x0, 0xd, 0xda, 0xeb, 0x76,
    0x6e, 0xde, 0xef, 0x23, 0x0, 0x0, 0x0, 0x0,
    0x1f, 0xf3, 0xd5, 0x7, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x1a, 0xa6, 0xf0, 0xf5, 0xb8, 0x2c,
    0x0, 0x0,

    /* U+0026 "&" */
    0x0, 0x0, 0x0, 0x7, 0x7a, 0xd2, 0xf7, 0xee,
    0xc8, 0x5f, 0x2, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x7, 0xc6, 0xff, 0xff, 0xe6, 0xe5,
    0xff, 0xff, 0x9f, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x6d, 0xff, 0xf3, 0x3d, 0x0, 0x0,
    0x48, 0xf9, 0xff, 0x27, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0xac, 0xff, 0x96, 0x0, 0x0, 0x0,
    0x0, 0xbc, 0xff, 0x50, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0xa8, 0xff, 0x99, 0x0, 0x0, 0x0,
    0x4, 0xdd, 0xff, 0x33, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x66, 0xff, 0xf1, 0x1e, 0x0, 0x4,
    0x9a, 0xff, 0xcd, 0x2, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x7, 0xd5, 0xff, 0xd0, 0x41, 0xcb,
    0xff, 0xe8, 0x2a, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x26, 0xeb, 0xff, 0xff, 0xff,
    0xbe, 0x1c, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x2, 0x75, 0xf4, 0xff, 0xff, 0xe2,
    0xe, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x11, 0xbd, 0xff, 0xf1, 0x80, 0xec, 0xff,
    0xc7, 0xe, 0x0, 0x0, 0x7, 0x6c, 0x1b, 0x0,
    0x4, 0xc8, 0xff, 0xce, 0x1e, 0x0, 0x2f, 0xec,
    0xff, 0xc8, 0xf, 0x0, 0x40, 0xff, 0xd1, 0x0,
    0x68, 0xff, 0xed, 0x14, 0x0, 0x0, 0x0, 0x2e,
    0xeb, 0xff, 0xc9, 0xf, 0x94, 0xff, 0x89, 0x0,
    0xba, 0xff, 0x93, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x2e, 0xeb, 0xff, 0xcb, 0xf3, 0xff, 0x30, 0x0,
    0xd6, 0xff, 0x86, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x2e, 0xeb, 0xff, 0xff, 0xb0, 0x0, 0x0,
    0xb0, 0xff, 0xe0, 0x12, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x5, 0xac, 0xff, 0xff, 0xd0, 0x12, 0x0,
    0x3e, 0xfe, 0xff, 0xe1, 0x6f, 0x33, 0x1e, 0x31,
    0x6f, 0xdb, 0xff, 0xf5, 0xea, 0xff, 0xce, 0x12,
    0x0, 0x62, 0xf7, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xda, 0x31, 0x2c, 0xec, 0xff, 0x8e,
    0x0, 0x0, 0x1f, 0x8a, 0xd0, 0xf0, 0xf9, 0xe4,
    0xb2, 0x5f, 0x4, 0x0, 0x0, 0x32, 0xc6, 0xd,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0x0,

    /* U+0027 "'" */
    0x69, 0xff, 0xa8, 0x64, 0xff, 0xa2, 0x5f, 0xff,
    0x9c, 0x5a, 0xff, 0x96, 0x55, 0xff, 0x8f, 0x50,
    0xff, 0x89, 0x4b, 0xff, 0x83, 0x4, 0x10, 0x8,

    /* U+0028 "(" */
    0x0, 0x0, 0x6, 0xe1, 0xff, 0x63, 0x0, 0x0,
    0x69, 0xff, 0xe4, 0x6, 0x0, 0x2, 0xe2, 0xff,
    0x72, 0x0, 0x0, 0x3e, 0xff, 0xfe, 0x18, 0x0,
    0x0, 0x91, 0xff, 0xc7, 0x0, 0x0, 0x0, 0xdd,
    0xff, 0x79, 0x0, 0x0, 0xf, 0xff, 0xff, 0x46,
    0x0, 0x0, 0x3d, 0xff, 0xff, 0x1a, 0x0, 0x0,
    0x68, 0xff, 0xef, 0x0, 0x0, 0x0, 0x7c, 0xff,
    0xd9, 0x0, 0x0, 0x0, 0x8b, 0xff, 0xcc, 0x0,
    0x0, 0x0, 0x99, 0xff, 0xbe, 0x0, 0x0, 0x0,
    0x99, 0xff, 0xbe, 0x0, 0x0, 0x0, 0x8b, 0xff,
    0xcc, 0x0, 0x0, 0x0, 0x7c, 0xff, 0xd9, 0x0,
    0x0, 0x0, 0x68, 0xff, 0xef, 0x0, 0x0, 0x0,
    0x3d, 0xff, 0xff, 0x1a, 0x0, 0x0, 0xf, 0xff,
    0xff, 0x46, 0x0, 0x0, 0x0, 0xdc, 0xff, 0x79,
    0x0, 0x0, 0x0, 0x8f, 0xff, 0xc7, 0x0, 0x0,
    0x0, 0x3c, 0xff, 0xfe, 0x18, 0x0, 0x0, 0x1,
    0xdf, 0xff, 0x72, 0x0, 0x0, 0x0, 0x67, 0xff,
    0xe4, 0x6, 0x0, 0x0, 0x6, 0xe1, 0xff, 0x63,

    /* U+0029 ")" */
    0xb, 0xec, 0xff, 0x55, 0x0, 0x0, 0x0, 0x0,
    0x7f, 0xff, 0xd4, 0x2, 0x0, 0x0, 0x0, 0x12,
    0xf4, 0xff, 0x55, 0x0, 0x0, 0x0, 0x0, 0xac,
    0xff, 0xae, 0x0, 0x0, 0x0, 0x0, 0x5c, 0xff,
    0xf6, 0xb, 0x0, 0x0, 0x0, 0x10, 0xfd, 0xff,
    0x4e, 0x0, 0x0, 0x0, 0x0, 0xd9, 0xff, 0x7f,
    0x0, 0x0, 0x0, 0x0, 0xac, 0xff, 0xae, 0x0,
    0x0, 0x0, 0x0, 0x80, 0xff, 0xdb, 0x0, 0x0,
    0x0, 0x0, 0x6b, 0xff, 0xef, 0x0, 0x0, 0x0,
    0x0, 0x5d, 0xff, 0xfc, 0x0, 0x0, 0x0, 0x0,
    0x4f, 0xff, 0xff, 0xc, 0x0, 0x0, 0x0, 0x4f,
    0xff, 0xff, 0xc, 0x0, 0x0, 0x0, 0x5d, 0xff,
    0xfc, 0x0, 0x0, 0x0, 0x0, 0x6b, 0xff, 0xee,
    0x0, 0x0, 0x0, 0x0, 0x80, 0xff, 0xda, 0x0,
    0x0, 0x0, 0x0, 0xac, 0xff, 0xae, 0x0, 0x0,
    0x0, 0x0, 0xd9, 0xff, 0x7f, 0x0, 0x0, 0x0,
    0x10, 0xfd, 0xff, 0x4d, 0x0, 0x0, 0x0, 0x5c,
    0xff, 0xf5, 0xa, 0x0, 0x0, 0x0, 0xac, 0xff,
    0xad, 0x0, 0x0, 0x0, 0x12, 0xf4, 0xff, 0x54,
    0x0, 0x0, 0x0, 0x7f, 0xff, 0xd4, 0x2, 0x0,
    0x0, 0xb, 0xec, 0xff, 0x55, 0x0, 0x0, 0x0,

    /* U+002A "*" */
    0x0, 0x0, 0x0, 0x0, 0xbf, 0xbe, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x1d, 0x0, 0x0, 0xbd, 0xbc,
    0x0, 0x0, 0x1d, 0x0, 0x32, 0xfa, 0x8e, 0xd,
    0xbb, 0xba, 0xd, 0x8f, 0xfa, 0x31, 0x26, 0xbc,
    0xff, 0xe5, 0xe0, 0xe0, 0xe5, 0xff, 0xbd, 0x26,
    0x0, 0x0, 0x51, 0xe4, 0xff, 0xff, 0xe5, 0x52,
    0x0, 0x0, 0x0, 0xf, 0x8f, 0xfb, 0xff, 0xff,
    0xfb, 0x90, 0x10, 0x0, 0x3e, 0xea, 0xff, 0xaf,
    0xcd, 0xcd, 0xaf, 0xff, 0xea, 0x3e, 0x19, 0xd4,
    0x4b, 0x0, 0xbb, 0xba, 0x0, 0x4c, 0xd4, 0x18,
    0x0, 0x1, 0x0, 0x0, 0xbe, 0xbd, 0x0, 0x0,
    0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x92, 0x92,
    0x0, 0x0, 0x0, 0x0,

    /* U+002B "+" */
    0x0, 0x0, 0x0, 0x0, 0x0, 0x5d, 0x78, 0x27,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0xc8, 0xff, 0x54, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0xc8, 0xff, 0x54,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0xc8, 0xff, 0x54, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0xc8, 0xff, 0x54,
    0x0, 0x0, 0x0, 0x0, 0x54, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0,
    0x54, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xe0, 0x5, 0x10, 0x10, 0x10,
    0x10, 0xcb, 0xff, 0x5e, 0x10, 0x10, 0x10, 0xe,
    0x0, 0x0, 0x0, 0x0, 0x0, 0xc8, 0xff, 0x54,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0xc8, 0xff, 0x54, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0xc8, 0xff, 0x54,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0xc8, 0xff, 0x54, 0x0, 0x0, 0x0, 0x0,

    /* U+002C "," */
    0x0, 0x36, 0x21, 0x0, 0x7b, 0xff, 0xf9, 0x34,
    0xc2, 0xff, 0xff, 0x76, 0x73, 0xff, 0xff, 0x55,
    0x0, 0xdb, 0xf9, 0xe, 0x15, 0xff, 0xb5, 0x0,
    0x51, 0xff, 0x63, 0x0, 0x8e, 0xfc, 0x14, 0x0,

    /* U+002D "-" */
    0x19, 0x2c, 0x2c, 0x2c, 0x2c, 0x2c, 0x2c, 0x6,
    0x94, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x28,
    0x94, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x28,

    /* U+002E "." */
    0x10, 0x7e, 0x61, 0x0, 0xa8, 0xff, 0xff, 0x53,
    0xc8, 0xff, 0xff, 0x70, 0x4a, 0xeb, 0xcd, 0x15,

    /* U+002F "/" */
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x45, 0x80, 0x51, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0xcb, 0xff, 0x61, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x21, 0xff, 0xfa,
    0x10, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x77, 0xff, 0xb5, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0xcd, 0xff, 0x5f, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x23, 0xff, 0xf9,
    0xf, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x7a, 0xff, 0xb2, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0xd0, 0xff, 0x5c, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x26, 0xff, 0xf8,
    0xd, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x7c, 0xff, 0xb0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0xd2, 0xff, 0x59, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x29, 0xff, 0xf6,
    0xc, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x7f, 0xff, 0xad, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0xd5, 0xff, 0x57, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x2b, 0xff, 0xf5,
    0xb, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x81, 0xff, 0xaa, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0xd7, 0xff, 0x54, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x2e, 0xff, 0xf4,
    0x9, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x84, 0xff, 0xa8, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0xd9, 0xff, 0x52, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x30, 0xff, 0xf2,
    0x8, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x87, 0xff, 0xa5, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0xdc, 0xff, 0x4f, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x33, 0xff, 0xf1,
    0x7, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x89, 0xff, 0xa3, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0,

    /* U+0030 "0" */
    0x0, 0x0, 0x0, 0x3, 0x5e, 0xbd, 0xee, 0xfa,
    0xe3, 0xa4, 0x36, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0xe, 0xbf, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xfe, 0x7a, 0x0, 0x0, 0x0, 0x0, 0x5,
    0xcb, 0xff, 0xff, 0xc3, 0x6f, 0x5b, 0x82, 0xe3,
    0xff, 0xff, 0x7c, 0x0, 0x0, 0x0, 0x75, 0xff,
    0xff, 0x79, 0x0, 0x0, 0x0, 0x0, 0xe, 0xc2,
    0xff, 0xf9, 0x26, 0x0, 0x6, 0xf0, 0xff, 0xb1,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x17, 0xf1,
    0xff, 0xa3, 0x0, 0x49, 0xff, 0xff, 0x3b, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x92, 0xff,
    0xef, 0x4, 0x8e, 0xff, 0xf2, 0x1, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x49, 0xff, 0xff,
    0x3a, 0xaa, 0xff, 0xcb, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x20, 0xff, 0xff, 0x55,
    0xc1, 0xff, 0xba, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0xf, 0xff, 0xff, 0x6c, 0xc1,
    0xff, 0xba, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0xf, 0xff, 0xff, 0x6c, 0xaa, 0xff,
    0xcb, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x20, 0xff, 0xff, 0x55, 0x8f, 0xff, 0xf2,
    0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x49, 0xff, 0xff, 0x3a, 0x4b, 0xff, 0xff, 0x3a,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x91,
    0xff, 0xf0, 0x5, 0x7, 0xf2, 0xff, 0xaf, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x15, 0xf0, 0xff,
    0xa5, 0x0, 0x0, 0x7a, 0xff, 0xff, 0x75, 0x0,
    0x0, 0x0, 0x0, 0xd, 0xc0, 0xff, 0xfa, 0x2a,
    0x0, 0x0, 0x6, 0xce, 0xff, 0xff, 0xc1, 0x6d,
    0x5b, 0x80, 0xe2, 0xff, 0xff, 0x80, 0x0, 0x0,
    0x0, 0x0, 0x10, 0xc2, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0x7f, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x3, 0x61, 0xbe, 0xef, 0xfb, 0xe4,
    0xa6, 0x39, 0x0, 0x0, 0x0, 0x0,

    /* U+0031 "1" */
    0xcc, 0xff, 0xff, 0xff, 0xff, 0xff, 0xa0, 0xcc,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xa0, 0x36, 0x44,
    0x44, 0x44, 0xe2, 0xff, 0xa0, 0x0, 0x0, 0x0,
    0x0, 0xd8, 0xff, 0xa0, 0x0, 0x0, 0x0, 0x0,
    0xd8, 0xff, 0xa0, 0x0, 0x0, 0x0, 0x0, 0xd8,
    0xff, 0xa0, 0x0, 0x0, 0x0, 0x0, 0xd8, 0xff,
    0xa0, 0x0, 0x0, 0x0, 0x0, 0xd8, 0xff, 0xa0,
    0x0, 0x0, 0x0, 0x0, 0xd8, 0xff, 0xa0, 0x0,
    0x0, 0x0, 0x0, 0xd8, 0xff, 0xa0, 0x0, 0x0,
    0x0, 0x0, 0xd8, 0xff, 0xa0, 0x0, 0x0, 0x0,
    0x0, 0xd8, 0xff, 0xa0, 0x0, 0x0, 0x0, 0x0,
    0xd8, 0xff, 0xa0, 0x0, 0x0, 0x0, 0x0, 0xd8,
    0xff, 0xa0, 0x0, 0x0, 0x0, 0x0, 0xd8, 0xff,
    0xa0, 0x0, 0x0, 0x0, 0x0, 0xd8, 0xff, 0xa0,
    0x0, 0x0, 0x0, 0x0, 0xd8, 0xff, 0xa0, 0x0,
    0x0, 0x0, 0x0, 0xd8, 0xff, 0xa0,

    /* U+0032 "2" */
    0x0, 0x0, 0xd, 0x69, 0xb7, 0xe1, 0xf8, 0xf2,
    0xd1, 0x8c, 0x1e, 0x0, 0x0, 0x0, 0x0, 0x55,
    0xe8, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xf3, 0x4f, 0x0, 0x0, 0x56, 0xfe, 0xff, 0xf5,
    0xa5, 0x6c, 0x5a, 0x72, 0xb6, 0xff, 0xff, 0xf7,
    0x22, 0x0, 0xf, 0xbc, 0xc2, 0x1c, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x67, 0xff, 0xff, 0x88, 0x0,
    0x0, 0x5, 0x9, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0xe6, 0xff, 0xb5, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0xca, 0xff, 0xb0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x8, 0xf1, 0xff,
    0x85, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x74, 0xff, 0xfe, 0x2c, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x3f, 0xf8, 0xff, 0x9c, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x39, 0xf1, 0xff,
    0xc8, 0x9, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x3e, 0xf3, 0xff, 0xcd, 0x11, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x43,
    0xf5, 0xff, 0xc8, 0x10, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x48, 0xf7, 0xff, 0xc5,
    0xe, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x4e, 0xf9, 0xff, 0xc1, 0xc, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x54, 0xfa,
    0xff, 0xbc, 0xa, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x5a, 0xfc, 0xff, 0xe4, 0x50,
    0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x24,
    0x10, 0xfd, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0x80, 0x14, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0x80,

    /* U+0033 "3" */
    0x14, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0x78, 0x0, 0x14, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0x72, 0x0, 0x5, 0x44, 0x44, 0x44,
    0x44, 0x44, 0x44, 0x44, 0x4d, 0xed, 0xff, 0xd4,
    0xc, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0xa6, 0xff, 0xf0, 0x25, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x76,
    0xff, 0xfd, 0x4b, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x47, 0xfd, 0xff, 0x7d,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x24, 0xee, 0xff, 0xaf, 0x1, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x3, 0xd4,
    0xff, 0xfe, 0x77, 0x2f, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0xc, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xcb, 0x2f, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x5, 0x78, 0x7a, 0x8d, 0xc3, 0xff,
    0xff, 0xf3, 0x2c, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x42, 0xf5, 0xff,
    0xbd, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x88, 0xff, 0xfd, 0xf,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x5a, 0xff, 0xff, 0x25, 0x0, 0xb,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x7e, 0xff, 0xff, 0xc, 0x28, 0xe8, 0x5c, 0x3,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x2c, 0xed, 0xff,
    0xc6, 0x0, 0xaa, 0xff, 0xff, 0xe1, 0x97, 0x6a,
    0x59, 0x70, 0xa7, 0xfc, 0xff, 0xfc, 0x44, 0x0,
    0x20, 0xc0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xf3, 0x5e, 0x0, 0x0, 0x0, 0x0,
    0x39, 0x8f, 0xcc, 0xeb, 0xfb, 0xea, 0xcc, 0x82,
    0x1e, 0x0, 0x0, 0x0,

    /* U+0034 "4" */
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x7c, 0xff, 0xfa, 0x39, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x47, 0xfd, 0xff, 0x6c, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x20, 0xed, 0xff, 0xa5, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x8, 0xce, 0xff, 0xd3, 0xa, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x9f, 0xff, 0xf1, 0x25, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x68, 0xff, 0xff, 0x50, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x37, 0xf9, 0xff, 0x88, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x15, 0xe3, 0xff, 0xbd, 0x3, 0x0,
    0x0, 0x33, 0xcc, 0xcc, 0x13, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x3, 0xbe, 0xff, 0xe3, 0x15, 0x0,
    0x0, 0x0, 0x40, 0xff, 0xff, 0x18, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x8b, 0xff, 0xf9, 0x38, 0x0,
    0x0, 0x0, 0x0, 0x40, 0xff, 0xff, 0x18, 0x0,
    0x0, 0x0, 0x0, 0x54, 0xff, 0xff, 0x6b, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x40, 0xff, 0xff, 0x18,
    0x0, 0x0, 0x0, 0x7, 0xf2, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0x6c, 0xc, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0x6c, 0x3, 0x40, 0x40,
    0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x7f,
    0xff, 0xff, 0x52, 0x40, 0x40, 0x1b, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x54, 0xff, 0xff, 0x18, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x54, 0xff, 0xff, 0x18, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x54, 0xff, 0xff, 0x18, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x54, 0xff, 0xff, 0x18, 0x0,
    0x0, 0x0,

    /* U+0035 "5" */
    0x0, 0x0, 0x6d, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0x80, 0x0, 0x0, 0x0,
    0x88, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0x80, 0x0, 0x0, 0x0, 0xa2, 0xff,
    0xc3, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44,
    0x22, 0x0, 0x0, 0x0, 0xbc, 0xff, 0x96, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0xd6, 0xff, 0x7b, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0xf1, 0xff, 0x60, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0xb, 0xff, 0xff,
    0x7c, 0x48, 0x43, 0x36, 0x15, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x25, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xdf, 0x81, 0xc, 0x0, 0x0,
    0x0, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xdc, 0x1c, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x9, 0x1f, 0x52, 0xb9,
    0xff, 0xff, 0xc0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xa0, 0xff,
    0xff, 0x30, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x28, 0xff, 0xff, 0x65,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0xe, 0xff, 0xff, 0x6e, 0x0, 0x16,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x3c, 0xff, 0xff, 0x51, 0x5, 0xda, 0x98, 0x16,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x13, 0xcc, 0xff,
    0xf4, 0xe, 0x60, 0xff, 0xff, 0xf5, 0xaf, 0x74,
    0x5b, 0x69, 0x92, 0xf1, 0xff, 0xff, 0x7d, 0x0,
    0x7, 0x8f, 0xf9, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xfe, 0x90, 0x1, 0x0, 0x0, 0x0,
    0x1a, 0x79, 0xba, 0xe4, 0xf8, 0xf1, 0xd8, 0x98,
    0x38, 0x0, 0x0, 0x0,

    /* U+0036 "6" */
    0x0, 0x0, 0x0, 0x0, 0x1e, 0x84, 0xca, 0xef,
    0xfc, 0xef, 0xc8, 0x84, 0x1e, 0x0, 0x0, 0x0,
    0x0, 0x7a, 0xf9, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0x9d, 0x0, 0x0, 0x0, 0x94, 0xff,
    0xff, 0xeb, 0x8d, 0x57, 0x46, 0x5a, 0x81, 0xdc,
    0x24, 0x0, 0x0, 0x55, 0xff, 0xff, 0xad, 0xd,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x2, 0xde, 0xff, 0xc8, 0x4, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x43, 0xff,
    0xff, 0x44, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x85, 0xff, 0xf1, 0x2,
    0x0, 0x0, 0x3, 0x17, 0xc, 0x0, 0x0, 0x0,
    0x0, 0x0, 0xaf, 0xff, 0xc7, 0x0, 0x4f, 0xbd,
    0xfb, 0xff, 0xff, 0xe5, 0x8f, 0x16, 0x0, 0x0,
    0xc4, 0xff, 0xb7, 0x95, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xeb, 0x34, 0x0, 0xc7, 0xff,
    0xf7, 0xff, 0xe2, 0x5f, 0x17, 0x9, 0x2b, 0x88,
    0xf7, 0xff, 0xe4, 0xb, 0xb9, 0xff, 0xff, 0xe7,
    0x1a, 0x0, 0x0, 0x0, 0x0, 0x0, 0x4a, 0xff,
    0xff, 0x69, 0x9e, 0xff, 0xff, 0x79, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0xcf, 0xff, 0xa4,
    0x6a, 0xff, 0xff, 0x54, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0xb2, 0xff, 0xb6, 0x1e, 0xfd,
    0xff, 0x7f, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0xd7, 0xff, 0x99, 0x0, 0xac, 0xff, 0xec,
    0x25, 0x0, 0x0, 0x0, 0x0, 0x0, 0x5e, 0xff,
    0xff, 0x4b, 0x0, 0x1a, 0xeb, 0xff, 0xf0, 0x7c,
    0x35, 0x24, 0x44, 0x9f, 0xfe, 0xff, 0xc0, 0x1,
    0x0, 0x0, 0x2a, 0xde, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xc1, 0x12, 0x0, 0x0, 0x0,
    0x0, 0x8, 0x6d, 0xbe, 0xea, 0xfa, 0xe6, 0xb7,
    0x5a, 0x1, 0x0, 0x0,

    /* U+0037 "7" */
    0x40, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xf4, 0x40, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xf0, 0x40, 0xff, 0xff, 0x61,
    0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x4c, 0xf8,
    0xff, 0xa1, 0x40, 0xff, 0xff, 0x28, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x63, 0xff, 0xff, 0x32,
    0x40, 0xff, 0xff, 0x28, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0xd3, 0xff, 0xc2, 0x0, 0x1f, 0x7c,
    0x7c, 0x13, 0x0, 0x0, 0x0, 0x0, 0x0, 0x45,
    0xff, 0xff, 0x52, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0xb6, 0xff, 0xdf,
    0x3, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x28, 0xfe, 0xff, 0x73, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x98, 0xff, 0xf4, 0x10, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x13, 0xf6, 0xff,
    0x94, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x7a, 0xff, 0xfe, 0x26, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x5, 0xe5, 0xff, 0xb5, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x5b, 0xff,
    0xff, 0x45, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0xcc, 0xff, 0xd5, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x3d, 0xff, 0xff, 0x66, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xae,
    0xff, 0xed, 0x9, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x22, 0xfd, 0xff, 0x87,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x90, 0xff, 0xfb, 0x1c, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0,

    /* U+0038 "8" */
    0x0, 0x0, 0x2, 0x58, 0xab, 0xe0, 0xf5, 0xf6,
    0xe2, 0xb0, 0x61, 0x4, 0x0, 0x0, 0x0, 0x16,
    0xca, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xd6, 0x1e, 0x0, 0x0, 0xbc, 0xff, 0xff,
    0xb0, 0x51, 0x2e, 0x2d, 0x4d, 0xa7, 0xfe, 0xff,
    0xcf, 0x2, 0x22, 0xff, 0xff, 0x8c, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x71, 0xff, 0xff, 0x39,
    0x3e, 0xff, 0xff, 0x3e, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x1c, 0xff, 0xff, 0x56, 0x1a, 0xfd,
    0xff, 0x7d, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x56, 0xff, 0xff, 0x2e, 0x0, 0x9b, 0xff, 0xfd,
    0x88, 0x2a, 0x9, 0x8, 0x26, 0x7e, 0xf4, 0xff,
    0xac, 0x0, 0x0, 0x4, 0x87, 0xfb, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xfe, 0x92, 0x8, 0x0,
    0x0, 0x1a, 0xb1, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xbc, 0x23, 0x0, 0x10, 0xd8,
    0xff, 0xf5, 0x8e, 0x31, 0x11, 0xf, 0x2f, 0x86,
    0xf2, 0xff, 0xe2, 0x1a, 0x7e, 0xff, 0xfc, 0x3c,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x2e, 0xf7,
    0xff, 0x93, 0xc8, 0xff, 0xba, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0xa4, 0xff, 0xde,
    0xdf, 0xff, 0x9e, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x87, 0xff, 0xf7, 0xc5, 0xff,
    0xc8, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0xb2, 0xff, 0xdc, 0x7d, 0xff, 0xff, 0x59,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x49, 0xfe,
    0xff, 0x93, 0x12, 0xe1, 0xff, 0xfe, 0xae, 0x4e,
    0x2d, 0x2b, 0x4c, 0xa6, 0xfd, 0xff, 0xea, 0x1c,
    0x0, 0x25, 0xd3, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xdb, 0x31, 0x0, 0x0, 0x0,
    0x3, 0x5d, 0xad, 0xdf, 0xf5, 0xf6, 0xe1, 0xb2,
    0x65, 0x7, 0x0, 0x0,

    /* U+0039 "9" */
    0x0, 0x0, 0x0, 0x29, 0x92, 0xd9, 0xf5, 0xf1,
    0xd5, 0x92, 0x28, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x6d, 0xf9, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xfb, 0x76, 0x0, 0x0, 0x0, 0x0, 0x52,
    0xfe, 0xff, 0xd9, 0x60, 0x31, 0x2d, 0x59, 0xc4,
    0xff, 0xff, 0x6d, 0x0, 0x0, 0x1, 0xd9, 0xff,
    0xc6, 0x7, 0x0, 0x0, 0x0, 0x0, 0x1, 0x9f,
    0xff, 0xf6, 0x1e, 0x0, 0x27, 0xff, 0xff, 0x48,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x12, 0xf9,
    0xff, 0x85, 0x0, 0x43, 0xff, 0xff, 0x25, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xe1, 0xff,
    0xd4, 0x0, 0x30, 0xff, 0xff, 0x46, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x11, 0xfa, 0xff, 0xfd,
    0xb, 0x7, 0xeb, 0xff, 0xc2, 0x6, 0x0, 0x0,
    0x0, 0x0, 0x1, 0x9e, 0xff, 0xff, 0xff, 0x23,
    0x0, 0x77, 0xff, 0xff, 0xd7, 0x5f, 0x30, 0x26,
    0x53, 0xc1, 0xff, 0xef, 0xff, 0xff, 0x32, 0x0,
    0x1, 0x98, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xd3, 0x62, 0xff, 0xff, 0x2f, 0x0, 0x0,
    0x0, 0x43, 0xa8, 0xe1, 0xf9, 0xec, 0xc3, 0x6e,
    0x6, 0x5e, 0xff, 0xff, 0x1a, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x8c, 0xff, 0xf0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0xda,
    0xff, 0xaf, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x63, 0xff, 0xff,
    0x4e, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x55, 0xf6, 0xff, 0xc4, 0x0,
    0x0, 0x0, 0x0, 0xb2, 0xa9, 0x65, 0x4b, 0x4b,
    0x6f, 0xc1, 0xff, 0xff, 0xe6, 0x1f, 0x0, 0x0,
    0x0, 0x32, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xc7, 0x21, 0x0, 0x0, 0x0, 0x0,
    0x4, 0x5b, 0xb0, 0xe3, 0xf9, 0xf9, 0xdf, 0xa8,
    0x4e, 0x1, 0x0, 0x0, 0x0, 0x0
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 108, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 0, .adv_w = 107, .box_w = 4, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 72, .adv_w = 156, .box_w = 8, .box_h = 8, .ofs_x = 1, .ofs_y = 10},
    {.bitmap_index = 136, .adv_w = 281, .box_w = 17, .box_h = 18, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 442, .adv_w = 248, .box_w = 14, .box_h = 25, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 792, .adv_w = 337, .box_w = 21, .box_h = 18, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1170, .adv_w = 274, .box_w = 16, .box_h = 19, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1474, .adv_w = 84, .box_w = 3, .box_h = 8, .ofs_x = 1, .ofs_y = 10},
    {.bitmap_index = 1498, .adv_w = 135, .box_w = 6, .box_h = 24, .ofs_x = 2, .ofs_y = -5},
    {.bitmap_index = 1642, .adv_w = 135, .box_w = 7, .box_h = 24, .ofs_x = 0, .ofs_y = -5},
    {.bitmap_index = 1810, .adv_w = 160, .box_w = 10, .box_h = 10, .ofs_x = 0, .ofs_y = 9},
    {.bitmap_index = 1910, .adv_w = 233, .box_w = 12, .box_h = 12, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 2054, .adv_w = 91, .box_w = 4, .box_h = 8, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 2086, .adv_w = 153, .box_w = 8, .box_h = 3, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 2110, .adv_w = 91, .box_w = 4, .box_h = 4, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2126, .adv_w = 141, .box_w = 11, .box_h = 25, .ofs_x = -1, .ofs_y = -3},
    {.bitmap_index = 2401, .adv_w = 267, .box_w = 15, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2671, .adv_w = 148, .box_w = 7, .box_h = 18, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2797, .adv_w = 230, .box_w = 14, .box_h = 18, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3049, .adv_w = 229, .box_w = 14, .box_h = 18, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3301, .adv_w = 268, .box_w = 17, .box_h = 18, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3607, .adv_w = 230, .box_w = 14, .box_h = 18, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3859, .adv_w = 247, .box_w = 14, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 4111, .adv_w = 239, .box_w = 14, .box_h = 18, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 4363, .adv_w = 258, .box_w = 14, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 4615, .adv_w = 247, .box_w = 15, .box_h = 18, .ofs_x = 0, .ofs_y = 0}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/



/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 26, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    }
};

/*-----------------
 *    KERNING
 *----------------*/


/*Map glyph_ids to kern left classes*/
static const uint8_t kern_left_class_mapping[] =
{
    0, 0, 1, 2, 0, 3, 4, 5,
    2, 6, 0, 7, 8, 9, 8, 9,
    10, 11, 0, 12, 13, 14, 15, 16,
    17, 18, 11
};

/*Map glyph_ids to kern right classes*/
static const uint8_t kern_right_class_mapping[] =
{
    0, 0, 1, 2, 0, 3, 4, 5,
    2, 0, 6, 7, 8, 9, 8, 9,
    10, 11, 12, 13, 14, 15, 16, 11,
    17, 18, 19
};

/*Kern values between classes*/
static const int8_t kern_class_values[] =
{
    0, 1, 0, 0, 0, 0, 0, 0,
    1, 0, 0, 4, 0, 0, 0, 0,
    3, 0, 0, 1, 18, 0, 11, -9,
    0, 0, 0, -22, -24, 3, 19, 9,
    7, -16, 3, 20, 1, 17, 0, -12,
    0, 0, 0, 0, -8, 7, 8, 0,
    0, -4, 0, -3, 4, 0, -4, 0,
    -4, 0, -11, 0, -48, 0, -8, 0,
    8, 12, 0, 0, -8, 4, 4, 13,
    8, -7, 8, 0, -5, -20, 0, -16,
    -3, 0, 0, 0, 1, 16, 0, -12,
    -3, -1, 1, 0, -7, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    13, 0, 4, 0, 0, -8, 0, 0,
    0, 0, 3, 8, 4, 12, -4, 0,
    8, -4, -13, -55, 3, 11, 8, 1,
    -5, 0, 14, 0, 13, 0, 0, 0,
    -15, 0, 0, 0, 1, -3, 0, 3,
    -7, -5, -8, 3, 0, -4, 0, 0,
    1, -22, 0, -25, 0, 0, 0, -3,
    0, 40, -5, -5, 4, 4, -4, 0,
    -5, 4, 0, 0, 24, 0, 0, -15,
    13, 0, -27, -39, -27, -8, 12, 0,
    0, -27, 0, 5, -9, 0, 0, 3,
    0, 0, 0, 0, 3, 3, -5, -8,
    0, -1, -1, -4, 0, 0, -3, 0,
    0, 0, 0, 0, 4, -3, 0, 0,
    -3, 4, 4, -1, 0, 0, 0, -8,
    0, -1, 0, 0, 0, -4, 0, -4,
    0, 0, 0, 0, 0, 0, 0, 0,
    -2, -2, 0, -4, -5, 0, 0, 0,
    -12, -3, -12, 8, 0, -8, 4, 8,
    11, 0, -10, -1, -5, 0, -1, -19,
    4, -3, 0, 0, 0, -4, 0, 0,
    -4, 0, 0, 0, 0, 0, -2, -2,
    0, -2, -5, 0, 0, 0, -3, 0,
    -8, 4, 0, -5, 2, 4, 4, 0,
    0, 0, 0, 0, 0, -3, 0, 0,
    0, 12, -3, 1, -13, 0, 11, -20,
    -21, -17, -8, 4, 0, -3, -26, -7,
    0, -7, 0, 0, 1, 0, -4, 0,
    0, 3, 0, 4, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0
};


/*Collect the kern class' data in one place*/
static const lv_font_fmt_txt_kern_classes_t kern_classes =
{
    .class_pair_values   = kern_class_values,
    .left_class_mapping  = kern_left_class_mapping,
    .right_class_mapping = kern_right_class_mapping,
    .left_class_cnt      = 18,
    .right_class_cnt     = 19,
};

/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

#if LV_VERSION_CHECK(8, 0, 0)
/*Store all the custom data of the font*/
static  lv_font_fmt_txt_glyph_cache_t cache;
static const lv_font_fmt_txt_dsc_t font_dsc = {
#else
static lv_font_fmt_txt_dsc_t font_dsc = {
#endif
    .glyph_bitmap = glyph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = &kern_classes,
    .kern_scale = 16,
    .cmap_num = 1,
    .bpp = 8,
    .kern_classes = 1,
    .bitmap_format = 0,
#if LV_VERSION_CHECK(8, 0, 0)
    .cache = &cache
#endif
};


/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LV_VERSION_CHECK(8, 0, 0)
const lv_font_t ui_font_SensorDataFont = {
#else
lv_font_t ui_font_SensorDataFont = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 27,          /*The maximum line height required by the font*/
    .base_line = 5,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -2,
    .underline_thickness = 1,
#endif
    .dsc = &font_dsc           /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};



#endif /*#if UI_FONT_SENSORDATAFONT*/

