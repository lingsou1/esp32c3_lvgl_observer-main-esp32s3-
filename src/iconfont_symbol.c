/*******************************************************************************
 * Size: 14 px
 * Bpp: 4
 * Opts:
 ******************************************************************************/

#include "lvgl.h"

#ifndef ICONFONT_SYMBOL
#define ICONFONT_SYMBOL 1
#endif

#if ICONFONT_SYMBOL

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0030 "0" */
    0x0, 0x8e, 0xfb, 0x20, 0x8, 0xd3, 0x19, 0xd0,
    0xf, 0x40, 0x0, 0xe5, 0x2f, 0x0, 0x0, 0x99,
    0x4e, 0x0, 0x0, 0x8a, 0x4e, 0x0, 0x0, 0x8a,
    0x2f, 0x0, 0x0, 0x99, 0xf, 0x40, 0x0, 0xd5,
    0x8, 0xd2, 0x18, 0xe0, 0x0, 0x8e, 0xfc, 0x20,

    /* U+0031 "1" */
    0x0, 0x5e, 0x20, 0x0, 0xbc, 0xf2, 0x0, 0x6,
    0xf, 0x20, 0x0, 0x0, 0xf2, 0x0, 0x0, 0xf,
    0x20, 0x0, 0x0, 0xf2, 0x0, 0x0, 0xf, 0x20,
    0x0, 0x0, 0xf2, 0x0, 0x0, 0xf, 0x20, 0x2,
    0xff, 0xff, 0xf5,

    /* U+0032 "2" */
    0x3, 0xbf, 0xfb, 0x20, 0xd, 0x61, 0x18, 0xe0,
    0x0, 0x0, 0x0, 0xf2, 0x0, 0x0, 0x3, 0xf0,
    0x0, 0x0, 0xb, 0x90, 0x0, 0x0, 0x8d, 0x0,
    0x0, 0x7, 0xe1, 0x0, 0x0, 0x5e, 0x20, 0x0,
    0x4, 0xe3, 0x0, 0x0, 0xd, 0xff, 0xff, 0xf9,

    /* U+0033 "3" */
    0x3, 0xbe, 0xfc, 0x30, 0xc, 0x62, 0x7, 0xe0,
    0x0, 0x0, 0x0, 0xf2, 0x0, 0x0, 0x7, 0xd0,
    0x0, 0x2e, 0xfe, 0x20, 0x0, 0x1, 0x28, 0xe0,
    0x0, 0x0, 0x0, 0xd5, 0x0, 0x0, 0x0, 0xd4,
    0x1e, 0x61, 0x6, 0xe1, 0x4, 0xbf, 0xfb, 0x30,

    /* U+0034 "4" */
    0x0, 0x0, 0xd, 0x60, 0x0, 0x0, 0x8f, 0x60,
    0x0, 0x3, 0xec, 0x60, 0x0, 0xd, 0x4b, 0x60,
    0x0, 0x89, 0xb, 0x60, 0x3, 0xd0, 0xb, 0x60,
    0xd, 0x30, 0xb, 0x60, 0x4f, 0xff, 0xff, 0xfe,
    0x0, 0x0, 0xb, 0x60, 0x0, 0x0, 0xb, 0x60,

    /* U+0035 "5" */
    0xaf, 0xff, 0xff, 0x5a, 0x80, 0x0, 0x0, 0xa8,
    0x0, 0x0, 0xa, 0xab, 0xed, 0x40, 0xad, 0x30,
    0x5f, 0x33, 0x10, 0x0, 0x99, 0x0, 0x0, 0x7,
    0xb1, 0x0, 0x0, 0x99, 0xc9, 0x20, 0x5f, 0x22,
    0xae, 0xfc, 0x30,

    /* U+0036 "6" */
    0x0, 0x4d, 0xfe, 0x91, 0x4, 0xe5, 0x12, 0x76,
    0xc, 0x60, 0x0, 0x0, 0x1f, 0x3c, 0xfc, 0x40,
    0x3f, 0xc4, 0x5, 0xf2, 0x3f, 0x70, 0x0, 0x99,
    0x2f, 0x40, 0x0, 0x7b, 0xe, 0x70, 0x0, 0x98,
    0x6, 0xe4, 0x5, 0xf2, 0x0, 0x6d, 0xfc, 0x30,

    /* U+0037 "7" */
    0x1f, 0xff, 0xff, 0xf7, 0x0, 0x0, 0x1, 0xf3,
    0x0, 0x0, 0x8, 0xa0, 0x0, 0x0, 0x1f, 0x20,
    0x0, 0x0, 0x9a, 0x0, 0x0, 0x1, 0xf2, 0x0,
    0x0, 0x9, 0x90, 0x0, 0x0, 0x2f, 0x10, 0x0,
    0x0, 0xa9, 0x0, 0x0, 0x2, 0xf1, 0x0, 0x0,

    /* U+0038 "8" */
    0x1, 0xae, 0xfc, 0x40, 0xd, 0xa1, 0x5, 0xf3,
    0x1f, 0x10, 0x0, 0xa7, 0xe, 0x30, 0x0, 0xc5,
    0x3, 0xb6, 0x4a, 0x70, 0x7, 0xb4, 0x38, 0xc1,
    0x3e, 0x0, 0x0, 0x89, 0x5d, 0x0, 0x0, 0x6b,
    0x1e, 0x71, 0x3, 0xd6, 0x2, 0xbe, 0xfd, 0x60,

    /* U+0039 "9" */
    0x1, 0xae, 0xea, 0x10, 0xd, 0x91, 0x19, 0xc0,
    0x3e, 0x0, 0x0, 0xe4, 0x3e, 0x0, 0x0, 0xe8,
    0xd, 0x80, 0x19, 0xea, 0x2, 0xbe, 0xe7, 0x99,
    0x0, 0x0, 0x0, 0xb7, 0x0, 0x0, 0x1, 0xf3,
    0x2d, 0x40, 0x1b, 0xb0, 0x5, 0xcf, 0xe9, 0x0,

    /* U+E6EE "" */
    0x1, 0x20, 0x0, 0x13, 0x0, 0x2c, 0x97, 0x4,
    0xc8, 0xb4, 0x65, 0xb, 0xc, 0x0, 0x9, 0x1c,
    0xb6, 0x1a, 0x0, 0x0, 0x0, 0x0, 0x1a, 0x0,
    0x0, 0x0, 0x0, 0x1a, 0x0, 0x0, 0x0, 0x0,
    0xb, 0x0, 0x3, 0x0, 0x0, 0xa, 0x50, 0x59,
    0x0, 0x0, 0x0, 0x8b, 0x70,

    /* U+E73B "" */
    0x0, 0x77, 0x0, 0x0, 0x50, 0x9, 0x22, 0x90,
    0x7, 0x30, 0x9, 0x0, 0x90, 0x47, 0x0, 0xa,
    0x0, 0xa1, 0x90, 0x0, 0x3, 0xaa, 0x39, 0x10,
    0x0, 0x0, 0x0, 0x74, 0x7a, 0x90, 0x0, 0x3,
    0x84, 0x60, 0x27, 0x0, 0xa, 0x6, 0x30, 0x9,
    0x0, 0x92, 0x2, 0x80, 0x55, 0x1, 0x40, 0x0,
    0x49, 0x60
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 134, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 40, .adv_w = 147, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 75, .adv_w = 136, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 115, .adv_w = 130, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 155, .adv_w = 138, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 195, .adv_w = 141, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 230, .adv_w = 136, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 270, .adv_w = 134, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 310, .adv_w = 134, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 350, .adv_w = 133, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 390, .adv_w = 224, .box_w = 10, .box_h = 9, .ofs_x = 2, .ofs_y = 1},
    {.bitmap_index = 435, .adv_w = 224, .box_w = 10, .box_h = 10, .ofs_x = 2, .ofs_y = 0}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/

static const uint16_t unicode_list_1[] = {
    0x0, 0x4d
};

/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 48, .range_length = 10, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 59118, .range_length = 78, .glyph_id_start = 11,
        .unicode_list = unicode_list_1, .glyph_id_ofs_list = NULL, .list_length = 2, .type = LV_FONT_FMT_TXT_CMAP_SPARSE_TINY
    }
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
    .kern_dsc = NULL,
    .kern_scale = 0,
    .cmap_num = 2,
    .bpp = 4,
    .kern_classes = 0,
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
const lv_font_t iconfont_symbol = {
#else
lv_font_t iconfont_symbol = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 12,          /*The maximum line height required by the font*/
    .base_line = 0,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = 0,
    .underline_thickness = 0,
#endif
    .dsc = &font_dsc           /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};



#endif /*#if ICONFONT_SYMBOL*/
