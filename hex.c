/*
 * Hexadecimal modes for QEmacs.
 *
 * Copyright (c) 2000, 2001 Fabrice Bellard.
 * Copyright (c) 2002-2008 Charlie Gordon.
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

#include "qe.h"

/* CG: should get rid of this forward reference */
#if defined(__GNUC__) && (__GNUC__ >= 4)
static ModeDef hex_mode;
#else
extern ModeDef hex_mode;
#endif

static int to_disp(int c)
{
#if 1
    /* Allow characters in range 160-255 to show as graphics */
    if ((c & 127) < ' ' || c == 127)
        c = '.';
#else
    if (c < ' ' || c >= 127)
        c = '.';
#endif
    return c;
}

static int hex_backward_offset(EditState *s, int offset)
{
    return align(offset, s->disp_width);
}

static int hex_display(EditState *s, DisplayState *ds, int offset)
{
    int j, len, ateof;
    int offset1, offset2;
    unsigned char b;

    display_bol(ds);

    ds->style = QE_STYLE_COMMENT;
    display_printf(ds, -1, -1, "%08x ", offset);

    ateof = 0;
    len = s->b->total_size - offset;
    if (len > s->disp_width)
        len = s->disp_width;

    if (s->mode == &hex_mode) {

        ds->style = QE_STYLE_FUNCTION;

        for (j = 0; j < s->disp_width; j++) {
            display_char(ds, -1, -1, ' ');
            offset1 = offset + j;
            offset2 = offset1 + 1;
            if (j < len) {
                eb_read(s->b, offset1, &b, 1);
                display_printhex(ds, offset1, offset2, b, 2);
            } else {
                if (!ateof) {
                    ateof = 1;
                } else {
                    offset1 = offset2 = -1;
                }
                ds->cur_hex_mode = s->hex_mode;
                display_printf(ds, offset1, offset2, "  ");
                ds->cur_hex_mode = 0;
            }
            if ((j & 7) == 7)
                display_char(ds, -1, -1, ' ');
        }
        display_char(ds, -1, -1, ' ');
    }
    ds->style = 0;

    display_char(ds, -1, -1, ' ');

    ateof = 0;
    for (j = 0; j < s->disp_width; j++) {
        offset1 = offset + j;
        offset2 = offset1 + 1;
        if (j < len) {
            eb_read(s->b, offset1, &b, 1);
        } else {
            b = ' ';
            if (!ateof) {
                ateof = 1;
            } else {
                offset1 = offset2 = -1;
            }
        }
        display_char(ds, offset1, offset2, to_disp(b));
    }
    display_eol(ds, -1, -1);

    if (len >= s->disp_width)
        return offset + len;
    else
        return -1;
}

static void do_set_width(EditState *s, int w)
{
    if (w >= 1) {
        s->disp_width = w;
        s->offset_top = s->mode->text_backward_offset(s, s->offset_top);
    }
}

static void do_incr_width(EditState *s, int incr)
{
    int w;
    w = s->disp_width + incr;
    if (w >= 1)
        do_set_width(s, w);
}

static void do_toggle_hex(EditState *s)
{
    s->hex_mode = !s->hex_mode;
}

/* specific hex commands */
static CmdDef hex_commands[] = {
    CMD1( KEY_CTRL_LEFT, KEY_NONE,
          "decrease-width", do_incr_width, -1)
    CMD1( KEY_CTRL_RIGHT, KEY_NONE,
          "increase-width", do_incr_width, 1)
    CMD2( KEY_NONE, KEY_NONE,
          "set-width", do_set_width, ESi,
          "ui{Width: }")
    CMD3( KEY_META('g'), KEY_NONE,
          "goto-byte", do_goto, ESsi, 'b',
          "us{Goto byte: }"
          "v")
    CMD0( KEY_NONE, KEY_NONE,
          "toggle-hex", do_toggle_hex)
    CMD_DEF_END,
};

static int ascii_mode_init(EditState *s, ModeSavedData *saved_data)
{
    QEFont *font;
    QEStyleDef style;
    int num_width;
    int ret;

    ret = text_mode_init(s, saved_data);
    if (ret)
        return ret;

    /* get typical number width */
    get_style(s, &style, s->default_style);
    font = select_font(s->screen, style.font_style, style.font_size);
    num_width = glyph_width(s->screen, font, '0');
    release_font(s->screen, font);

    s->disp_width = (s->screen->width / num_width) - 10;
    /* align on 16 byte boundary */
    s->disp_width &= ~15;
    if (s->disp_width < 16)
        s->disp_width = 16;
    s->insert = 0;
    s->hex_mode = 0;
    s->wrap = WRAP_TRUNCATE;
    return 0;
}

static int hex_mode_init(EditState *s, ModeSavedData *saved_data)
{
    int ret;

    ret = text_mode_init(s, saved_data);
    if (ret)
        return ret;

    s->disp_width = 16;
    s->hex_mode = 1;
    s->unihex_mode = 0;
    s->hex_nibble = 0;
    s->insert = 0;
    s->wrap = WRAP_TRUNCATE;
    return 0;
}

static int detect_binary(const unsigned char *buf, int size)
{
    int i, c;

    for (i = 0; i < size; i++) {
        c = buf[i];
        if (c < 32 &&
            (c != '\r' && c != '\n' && c != '\t' &&
             c != '\033' && c != '\b' && c != '\f'))
            return 1;
    }
    return 0;
}

static int hex_mode_probe(ModeProbeData *p)
{
    if (detect_binary(p->buf, p->buf_size))
        return 50;
    else
        return 10;
}

static void hex_move_bol(EditState *s)
{
    s->offset = align(s->offset, s->disp_width);
}

static void hex_move_eol(EditState *s)
{
    s->offset = align(s->offset, s->disp_width) + s->disp_width - 1;
    if (s->offset > s->b->total_size)
        s->offset = s->b->total_size;
}

static void hex_move_left_right(EditState *s, int dir)
{
    s->offset += dir;
    if (s->offset < 0)
        s->offset = 0;
    else
    if (s->offset > s->b->total_size)
        s->offset = s->b->total_size;
}

static void hex_move_up_down(EditState *s, int dir)
{
    s->offset += dir * s->disp_width;
    if (s->offset < 0)
        s->offset = 0;
    else
    if (s->offset > s->b->total_size)
        s->offset = s->b->total_size;
}

void hex_write_char(EditState *s, int key)
{
    unsigned int cur_ch, ch;
    int hsize, shift, cur_len, len, h;
    char buf[10];

    if (s->hex_mode) {
        if (s->unihex_mode)
            hsize = 4;
        else
            hsize = 2;
        h = to_hex(key);
        if (h < 0)
            return;
        if (s->insert && s->hex_nibble == 0) {
            ch = h << ((hsize - 1) * 4);
            if (s->unihex_mode) {
                len = unicode_to_charset(buf, ch, s->b->charset);
            } else {
                len = 1;
                buf[0] = ch;
            }
            eb_insert(s->b, s->offset, buf, len);
        } else {
            if (s->unihex_mode) {
                cur_ch = eb_nextc(s->b, s->offset, &cur_len);
                cur_len -= s->offset;
            } else {
                eb_read(s->b, s->offset, buf, 1);
                cur_ch = buf[0];
                cur_len = 1;
            }

            shift = (hsize - s->hex_nibble - 1) * 4;
            ch = (cur_ch & ~(0xf << shift)) | (h << shift);

            if (s->unihex_mode) {
                len = unicode_to_charset(buf, ch, s->b->charset);
            } else {
                len = 1;
                buf[0] = ch;
            }
#if 1
            eb_replace(s->b, s->offset, cur_len, buf, len);
#else
            if (cur_len == len) {
                eb_write(s->b, s->offset, buf, len);
            } else {
                eb_delete(s->b, s->offset, cur_len);
                eb_insert(s->b, s->offset, buf, len);
            }
#endif
        }
        if (++s->hex_nibble == hsize) {
            s->hex_nibble = 0;
            if (s->offset < s->b->total_size)
                s->offset += len;
        }
    } else {
        text_write_char(s, key);
    }
}

static int hex_mode_line(EditState *s, char *buf, int buf_size)
{
    int percent, pos;

    pos = basic_mode_line(s, buf, buf_size, '-');
    pos += snprintf(buf + pos, buf_size - pos, "0x%x--0x%x",
                    s->offset, s->b->total_size);
    percent = 0;
    if (s->b->total_size > 0)
        percent = (s->offset * 100) / s->b->total_size;
    pos += snprintf(buf + pos, buf_size - pos, "--%d%%", percent);
    return pos;
}

static ModeDef ascii_mode = {
    "ascii",
    .instance_size = 0,
    .mode_probe = NULL,
    .mode_init = ascii_mode_init,
    .mode_close = text_mode_close,
    .text_display = hex_display,
    .text_backward_offset = hex_backward_offset,

    .move_up_down = hex_move_up_down,
    .move_left_right = hex_move_left_right,
    .move_bol = hex_move_bol,
    .move_eol = hex_move_eol,
    .scroll_up_down = text_scroll_up_down,
    .write_char = text_write_char,
    .mouse_goto = text_mouse_goto,
    .get_mode_line = hex_mode_line,
};

static ModeDef hex_mode = {
    "hex",
    .instance_size = 0,
    .mode_probe = hex_mode_probe,
    .mode_init = hex_mode_init,
    .mode_close = text_mode_close,
    .text_display = hex_display,
    .text_backward_offset = hex_backward_offset,

    .move_up_down = hex_move_up_down,
    .move_left_right = hex_move_left_right,
    .move_bol = hex_move_bol,
    .move_eol = hex_move_eol,
    .scroll_up_down = text_scroll_up_down,
    .write_char = hex_write_char,
    .mouse_goto = text_mouse_goto,
    .get_mode_line = hex_mode_line,
};

static int hex_init(void)
{
    /* first register mode(s) */
    qe_register_mode(&ascii_mode);
    qe_register_mode(&hex_mode);

    /* commands and default keys */
    qe_register_cmd_table(hex_commands, &hex_mode);
    qe_register_cmd_table(hex_commands, &ascii_mode);

    /* additional mode specific keys */
    qe_register_binding(KEY_TAB, "toggle-hex", &hex_mode);
    qe_register_binding(KEY_SHIFT_TAB, "toggle-hex", &hex_mode);

    return 0;
}

qe_module_init(hex_init);
