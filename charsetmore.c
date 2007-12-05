/* This file was generated automatically by cptoqe */

/*
 * More Charsets and Tables for QEmacs
 *
 * Copyright (c) 2002 Fabrice Bellard.
 * Copyright (c) 2007 Charlie Gordon.
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
/*-- file: cp/8859_2.cp, id: 8859_2, name: 8859-2, ISO name: ISO 8859-2 (Central European) --*/

static const char * const aliases_8859_2[] = {
    "ISO-8859-2", "iso-ir-101", "latin2", "l2", "iso-latin2", "iso8859-2", NULL
};

static const unsigned short table_8859_2[95] = {
    0x0104, 0x02d8, 0x0141, 0x00a4, 0x013d, 0x015a, 0x00a7, 0x00a8, 
    0x0160, 0x015e, 0x0164, 0x0179, 0x00ad, 0x017d, 0x017b, 0x00b0, 
    0x0105, 0x02db, 0x0142, 0x00b4, 0x013e, 0x015b, 0x02c7, 0x00b8, 
    0x0161, 0x015f, 0x0165, 0x017a, 0x02dd, 0x017e, 0x017c, 0x0154, 
    0x00c1, 0x00c2, 0x0102, 0x00c4, 0x0139, 0x0106, 0x00c7, 0x010c, 
    0x00c9, 0x0118, 0x00cb, 0x011a, 0x00cd, 0x00ce, 0x010e, 0x0110, 
    0x0143, 0x0147, 0x00d3, 0x00d4, 0x0150, 0x00d6, 0x00d7, 0x0158, 
    0x016e, 0x00da, 0x0170, 0x00dc, 0x00dd, 0x0162, 0x00df, 0x0155, 
    0x00e1, 0x00e2, 0x0103, 0x00e4, 0x013a, 0x0107, 0x00e7, 0x010d, 
    0x00e9, 0x0119, 0x00eb, 0x011b, 0x00ed, 0x00ee, 0x010f, 0x0111, 
    0x0144, 0x0148, 0x00f3, 0x00f4, 0x0151, 0x00f6, 0x00f7, 0x0159, 
    0x016f, 0x00fa, 0x0171, 0x00fc, 0x00fd, 0x0163, 0x02d9, 
};

QECharset charset_8859_2 = {
    "8859-2",
    aliases_8859_2,
    decode_8bit_init,
    NULL,
    encode_8bit,
    table_alloc: 1,
    eol_char: 10,
    min_char: 161,
    max_char: 255,
    private_table: table_8859_2,
};

/*-- file: cp/cp1125.cp, id: cp1125, name: cp1125, ISO name: CP 1125 (Ukrainian) --*/

static const char * const aliases_cp1125[] = {
    "x-cp866-u", "ruscii", "1125", NULL
};

static const unsigned short table_cp1125[128] = {
    0x0410, 0x0411, 0x0412, 0x0413, 0x0414, 0x0415, 0x0416, 0x0417, 
    0x0418, 0x0419, 0x041a, 0x041b, 0x041c, 0x041d, 0x041e, 0x041f, 
    0x0420, 0x0421, 0x0422, 0x0423, 0x0424, 0x0425, 0x0426, 0x0427, 
    0x0428, 0x0429, 0x042a, 0x042b, 0x042c, 0x042d, 0x042e, 0x042f, 
    0x0430, 0x0431, 0x0432, 0x0433, 0x0434, 0x0435, 0x0436, 0x0437, 
    0x0438, 0x0439, 0x043a, 0x043b, 0x043c, 0x043d, 0x043e, 0x043f, 
    0x2591, 0x2592, 0x2593, 0x2502, 0x2524, 0x2561, 0x2562, 0x2556, 
    0x2555, 0x2563, 0x2551, 0x2557, 0x255d, 0x255c, 0x255b, 0x2510, 
    0x2514, 0x2534, 0x252c, 0x251c, 0x2500, 0x253c, 0x255e, 0x255f, 
    0x255a, 0x2554, 0x2569, 0x2566, 0x2560, 0x2550, 0x256c, 0x2567, 
    0x2568, 0x2564, 0x2565, 0x2559, 0x2558, 0x2552, 0x2553, 0x256b, 
    0x256a, 0x2518, 0x250c, 0x2588, 0x2584, 0x258c, 0x2590, 0x2580, 
    0x0440, 0x0441, 0x0442, 0x0443, 0x0444, 0x0445, 0x0446, 0x0447, 
    0x0448, 0x0449, 0x044a, 0x044b, 0x044c, 0x044d, 0x044e, 0x044f, 
    0x0401, 0x0451, 0x0490, 0x0491, 0x0404, 0x0454, 0x0406, 0x0456, 
    0x0407, 0x0457, 0x00b7, 0x221a, 0x2116, 0x00a4, 0x25a0, 0x00a0, 
};

QECharset charset_cp1125 = {
    "cp1125",
    aliases_cp1125,
    decode_8bit_init,
    NULL,
    encode_8bit,
    table_alloc: 1,
    eol_char: 10,
    min_char: 128,
    max_char: 255,
    private_table: table_cp1125,
};

/*-- file: cp/cp737.cp, id: cp737, name: cp737, ISO name: CP 737 (Greek) --*/

static const char * const aliases_cp737[] = {
    "737", NULL
};

static const unsigned short table_cp737[128] = {
    0x0391, 0x0392, 0x0393, 0x0394, 0x0395, 0x0396, 0x0397, 0x0398, 
    0x0399, 0x039a, 0x039b, 0x039c, 0x039d, 0x039e, 0x039f, 0x03a0, 
    0x03a1, 0x03a3, 0x03a4, 0x03a5, 0x03a6, 0x03a7, 0x03a8, 0x03a9, 
    0x03b1, 0x03b2, 0x03b3, 0x03b4, 0x03b5, 0x03b6, 0x03b7, 0x03b8, 
    0x03b9, 0x03ba, 0x03bb, 0x03bc, 0x03bd, 0x03be, 0x03bf, 0x03c0, 
    0x03c1, 0x03c3, 0x03c2, 0x03c4, 0x03c5, 0x03c6, 0x03c7, 0x03c8, 
    0x2591, 0x2592, 0x2593, 0x2502, 0x2524, 0x2561, 0x2562, 0x2556, 
    0x2555, 0x2563, 0x2551, 0x2557, 0x255d, 0x255c, 0x255b, 0x2510, 
    0x2514, 0x2534, 0x252c, 0x251c, 0x2500, 0x253c, 0x255e, 0x255f, 
    0x255a, 0x2554, 0x2569, 0x2566, 0x2560, 0x2550, 0x256c, 0x2567, 
    0x2568, 0x2564, 0x2565, 0x2559, 0x2558, 0x2552, 0x2553, 0x256b, 
    0x256a, 0x2518, 0x250c, 0x2588, 0x2584, 0x258c, 0x2590, 0x2580, 
    0x03c9, 0x03ac, 0x03ad, 0x03ae, 0x03ca, 0x03af, 0x03cc, 0x03cd, 
    0x03cb, 0x03ce, 0x0386, 0x0388, 0x0389, 0x038a, 0x038c, 0x038e, 
    0x038f, 0x00b1, 0x2265, 0x2264, 0x03aa, 0x03ab, 0x00f7, 0x2248, 
    0x00b0, 0x2219, 0x00b7, 0x221a, 0x207f, 0x00b2, 0x25a0, 0x00a0, 
};

QECharset charset_cp737 = {
    "cp737",
    aliases_cp737,
    decode_8bit_init,
    NULL,
    encode_8bit,
    table_alloc: 1,
    eol_char: 10,
    min_char: 128,
    max_char: 255,
    private_table: table_cp737,
};

/*-- file: cp/koi8_r.cp, id: koi8_r, name: koi8-r, ISO name: KOI8-R --*/

static const char * const aliases_koi8_r[] = {
    NULL
};

static const unsigned short table_koi8_r[128] = {
    0x2500, 0x2502, 0x250c, 0x2510, 0x2514, 0x2518, 0x251c, 0x2524, 
    0x252c, 0x2534, 0x253c, 0x2580, 0x2584, 0x2588, 0x258c, 0x2590, 
    0x2591, 0x2592, 0x2593, 0x2320, 0x25a0, 0x2022, 0x221a, 0x2248, 
    0x2264, 0x2265, 0x00a0, 0x2321, 0x00b0, 0x00b2, 0x00b7, 0x00f7, 
    0x2550, 0x2551, 0x2552, 0x0451, 0x2553, 0x2554, 0x2555, 0x2556, 
    0x2557, 0x2558, 0x2559, 0x255a, 0x255b, 0x255c, 0x255d, 0x255e, 
    0x255f, 0x2560, 0x2561, 0x0401, 0x2562, 0x2563, 0x2564, 0x2565, 
    0x2566, 0x2567, 0x2568, 0x2569, 0x256a, 0x256b, 0x256c, 0x00a9, 
    0x044e, 0x0430, 0x0431, 0x0446, 0x0434, 0x0435, 0x0444, 0x0433, 
    0x0445, 0x0438, 0x0439, 0x043a, 0x043b, 0x043c, 0x043d, 0x043e, 
    0x043f, 0x044f, 0x0440, 0x0441, 0x0442, 0x0443, 0x0436, 0x0432, 
    0x044c, 0x044b, 0x0437, 0x0448, 0x044d, 0x0449, 0x0447, 0x044a, 
    0x042e, 0x0410, 0x0411, 0x0426, 0x0414, 0x0415, 0x0424, 0x0413, 
    0x0425, 0x0418, 0x0419, 0x041a, 0x041b, 0x041c, 0x041d, 0x041e, 
    0x041f, 0x042f, 0x0420, 0x0421, 0x0422, 0x0423, 0x0416, 0x0412, 
    0x042c, 0x042b, 0x0417, 0x0428, 0x042d, 0x0429, 0x0427, 0x042a, 
};

QECharset charset_koi8_r = {
    "koi8-r",
    aliases_koi8_r,
    decode_8bit_init,
    NULL,
    encode_8bit,
    table_alloc: 1,
    eol_char: 10,
    min_char: 128,
    max_char: 255,
    private_table: table_koi8_r,
};

/*-- file: cp/8859_4.cp, id: 8859_4, name: 8859-4, ISO name: ISO 8859-4 (Scandinavia, Baltic) --*/

static const char * const aliases_8859_4[] = {
    "ISO-8859-4", "iso-ir-110", "latin4", "l4", "iso-latin4", NULL
};

static const unsigned short table_8859_4[95] = {
    0x0104, 0x0138, 0x0156, 0x00a4, 0x0128, 0x013b, 0x00a7, 0x00a8, 
    0x0160, 0x0112, 0x0122, 0x0166, 0x00ad, 0x017d, 0x00af, 0x00b0, 
    0x0105, 0x02db, 0x0157, 0x00b4, 0x0129, 0x013c, 0x02c7, 0x00b8, 
    0x0161, 0x0113, 0x0123, 0x0167, 0x014a, 0x017e, 0x014b, 0x0100, 
    0x00c1, 0x00c2, 0x00c3, 0x00c4, 0x00c5, 0x00c6, 0x012e, 0x010c, 
    0x00c9, 0x0118, 0x00cb, 0x0116, 0x00cd, 0x00ce, 0x012a, 0x0110, 
    0x0145, 0x014c, 0x0136, 0x00d4, 0x00d5, 0x00d6, 0x00d7, 0x00d8, 
    0x0172, 0x00da, 0x00db, 0x00dc, 0x0168, 0x016a, 0x00df, 0x0101, 
    0x00e1, 0x00e2, 0x00e3, 0x00e4, 0x00e5, 0x00e6, 0x012f, 0x010d, 
    0x00e9, 0x0119, 0x00eb, 0x0117, 0x00ed, 0x00ee, 0x012b, 0x0111, 
    0x0146, 0x014d, 0x0137, 0x00f4, 0x00f5, 0x00f6, 0x00f7, 0x00f8, 
    0x0173, 0x00fa, 0x00fb, 0x00fc, 0x0169, 0x016b, 0x02d9, 
};

QECharset charset_8859_4 = {
    "8859-4",
    aliases_8859_4,
    decode_8bit_init,
    NULL,
    encode_8bit,
    table_alloc: 1,
    eol_char: 10,
    min_char: 161,
    max_char: 255,
    private_table: table_8859_4,
};

/*-- file: cp/cp1250.cp, id: cp1250, name: cp1250, ISO name: Window$ 1250 (Central European) --*/

static const char * const aliases_cp1250[] = {
    "windows-1250", "1250", NULL
};

static const unsigned short table_cp1250[128] = {
    0x20ac, 0x0000, 0x201a, 0x0000, 0x201e, 0x2026, 0x2020, 0x2021, 
    0x0000, 0x2030, 0x0160, 0x2039, 0x015a, 0x0164, 0x017d, 0x0179, 
    0x0000, 0x2018, 0x2019, 0x201c, 0x201d, 0x2022, 0x2013, 0x2014, 
    0x0000, 0x2122, 0x0161, 0x203a, 0x015b, 0x0165, 0x017e, 0x017a, 
    0x00a0, 0x02c7, 0x02d8, 0x0141, 0x00a4, 0x0104, 0x00a6, 0x00a7, 
    0x00a8, 0x00a9, 0x015e, 0x00ab, 0x00ac, 0x00ad, 0x00ae, 0x017b, 
    0x00b0, 0x00b1, 0x02db, 0x0142, 0x00b4, 0x00b5, 0x00b6, 0x00b7, 
    0x00b8, 0x0105, 0x015f, 0x00bb, 0x013d, 0x02dd, 0x013e, 0x017c, 
    0x0154, 0x00c1, 0x00c2, 0x0102, 0x00c4, 0x0139, 0x0106, 0x00c7, 
    0x010c, 0x00c9, 0x0118, 0x00cb, 0x011a, 0x00cd, 0x00ce, 0x010e, 
    0x0110, 0x0143, 0x0147, 0x00d3, 0x00d4, 0x0150, 0x00d6, 0x00d7, 
    0x0158, 0x016e, 0x00da, 0x0170, 0x00dc, 0x00dd, 0x0162, 0x00df, 
    0x0155, 0x00e1, 0x00e2, 0x0103, 0x00e4, 0x013a, 0x0107, 0x00e7, 
    0x010d, 0x00e9, 0x0119, 0x00eb, 0x011b, 0x00ed, 0x00ee, 0x010f, 
    0x0111, 0x0144, 0x0148, 0x00f3, 0x00f4, 0x0151, 0x00f6, 0x00f7, 
    0x0159, 0x016f, 0x00fa, 0x0171, 0x00fc, 0x00fd, 0x0163, 0x02d9, 
};

QECharset charset_cp1250 = {
    "cp1250",
    aliases_cp1250,
    decode_8bit_init,
    NULL,
    encode_8bit,
    table_alloc: 1,
    eol_char: 10,
    min_char: 128,
    max_char: 255,
    private_table: table_cp1250,
};

/*-- file: cp/cp850.cp, id: cp850, name: cp850, ISO name: CP 850 (Western European) --*/

static const char * const aliases_cp850[] = {
    "850", NULL
};

static const unsigned short table_cp850[128] = {
    0x00c7, 0x00fc, 0x00e9, 0x00e2, 0x00e4, 0x00e0, 0x00e5, 0x00e7, 
    0x00ea, 0x00eb, 0x00e8, 0x00ef, 0x00ee, 0x00ec, 0x00c4, 0x00c5, 
    0x00c9, 0x00e6, 0x00c6, 0x00f4, 0x00f6, 0x00f2, 0x00fb, 0x00f9, 
    0x00ff, 0x00d6, 0x00dc, 0x00f8, 0x00a3, 0x00d8, 0x00d7, 0x0192, 
    0x00e1, 0x00ed, 0x00f3, 0x00fa, 0x00f1, 0x00d1, 0x00aa, 0x00ba, 
    0x00bf, 0x00ae, 0x00ac, 0x00bd, 0x00bc, 0x00a1, 0x00ab, 0x00bb, 
    0x2591, 0x2592, 0x2593, 0x2502, 0x2524, 0x00c1, 0x00c2, 0x00c0, 
    0x00a9, 0x2563, 0x2551, 0x2557, 0x255d, 0x00a2, 0x00a5, 0x2510, 
    0x2514, 0x2534, 0x252c, 0x251c, 0x2500, 0x253c, 0x00e3, 0x00c3, 
    0x255a, 0x2554, 0x2569, 0x2566, 0x2560, 0x2550, 0x256c, 0x00a4, 
    0x00f0, 0x00d0, 0x00ca, 0x00cb, 0x00c8, 0x0131, 0x00cd, 0x00ce, 
    0x00cf, 0x2518, 0x250c, 0x2588, 0x2584, 0x00a6, 0x00cc, 0x2580, 
    0x00d3, 0x00df, 0x00d4, 0x00d2, 0x00f5, 0x00d5, 0x00b5, 0x00fe, 
    0x00de, 0x00da, 0x00db, 0x00d9, 0x00fd, 0x00dd, 0x00af, 0x00b4, 
    0x00ad, 0x00b1, 0x2017, 0x00be, 0x00b6, 0x00a7, 0x00f7, 0x00b8, 
    0x00b0, 0x00a8, 0x00b7, 0x00b9, 0x00b3, 0x00b2, 0x25a0, 0x00a0, 
};

QECharset charset_cp850 = {
    "cp850",
    aliases_cp850,
    decode_8bit_init,
    NULL,
    encode_8bit,
    table_alloc: 1,
    eol_char: 10,
    min_char: 128,
    max_char: 255,
    private_table: table_cp850,
};

/*-- file: cp/koi8_u.cp, id: koi8_u, name: koi8-u, ISO name: KOI8-U --*/

static const char * const aliases_koi8_u[] = {
    NULL
};

static const unsigned short table_koi8_u[128] = {
    0x2500, 0x2502, 0x250c, 0x2510, 0x2514, 0x2518, 0x251c, 0x2524, 
    0x252c, 0x2534, 0x253c, 0x2580, 0x2584, 0x2588, 0x258c, 0x2590, 
    0x2591, 0x2592, 0x2593, 0x2320, 0x25a0, 0x2219, 0x221a, 0x2248, 
    0x2264, 0x2265, 0x00a0, 0x2321, 0x00b0, 0x00b2, 0x00b7, 0x00f7, 
    0x2550, 0x2551, 0x2552, 0x0451, 0x0454, 0x2554, 0x0456, 0x0457, 
    0x2557, 0x2558, 0x2559, 0x255a, 0x255b, 0x0491, 0x255d, 0x255e, 
    0x255f, 0x2560, 0x2561, 0x0401, 0x0404, 0x2563, 0x0406, 0x0407, 
    0x2566, 0x2567, 0x2568, 0x2569, 0x256a, 0x0490, 0x256c, 0x00a9, 
    0x044e, 0x0430, 0x0431, 0x0446, 0x0434, 0x0435, 0x0444, 0x0433, 
    0x0445, 0x0438, 0x0439, 0x043a, 0x043b, 0x043c, 0x043d, 0x043e, 
    0x043f, 0x044f, 0x0440, 0x0441, 0x0442, 0x0443, 0x0436, 0x0432, 
    0x044c, 0x044b, 0x0437, 0x0448, 0x044d, 0x0449, 0x0447, 0x044a, 
    0x042e, 0x0410, 0x0411, 0x0426, 0x0414, 0x0415, 0x0424, 0x0413, 
    0x0425, 0x0418, 0x0419, 0x041a, 0x041b, 0x041c, 0x041d, 0x041e, 
    0x041f, 0x042f, 0x0420, 0x0421, 0x0422, 0x0423, 0x0416, 0x0412, 
    0x042c, 0x042b, 0x0417, 0x0428, 0x042d, 0x0429, 0x0427, 0x042a, 
};

QECharset charset_koi8_u = {
    "koi8-u",
    aliases_koi8_u,
    decode_8bit_init,
    NULL,
    encode_8bit,
    table_alloc: 1,
    eol_char: 10,
    min_char: 128,
    max_char: 255,
    private_table: table_koi8_u,
};

/*-- file: cp/viscii.cp, id: viscii, name: viscii, ISO name: VISCII --*/

static const char * const aliases_viscii[] = {
    "VISCII", "VISCII-1", "VISCII 1.1", "VISCII-1.1", "VISCII1.1-1", NULL
};

static const unsigned short table_viscii[254] = {
    0x1eb2, 0x0003, 0x0004, 0x1eb4, 0x1eaa, 0x0007, 0x0008, 0x0009, 
    0x000a, 0x000b, 0x000c, 0x000d, 0x000e, 0x000f, 0x0010, 0x0011, 
    0x0012, 0x0013, 0x1ef6, 0x0015, 0x0016, 0x0017, 0x0018, 0x1ef8, 
    0x001a, 0x001b, 0x001c, 0x001d, 0x1ef4, 0x001f, 0x0020, 0x0021, 
    0x0022, 0x0023, 0x0024, 0x0025, 0x0026, 0x0027, 0x0028, 0x0029, 
    0x002a, 0x002b, 0x002c, 0x002d, 0x002e, 0x002f, 0x0030, 0x0031, 
    0x0032, 0x0033, 0x0034, 0x0035, 0x0036, 0x0037, 0x0038, 0x0039, 
    0x003a, 0x003b, 0x003c, 0x003d, 0x003e, 0x003f, 0x0040, 0x0041, 
    0x0042, 0x0043, 0x0044, 0x0045, 0x0046, 0x0047, 0x0048, 0x0049, 
    0x004a, 0x004b, 0x004c, 0x004d, 0x004e, 0x004f, 0x0050, 0x0051, 
    0x0052, 0x0053, 0x0054, 0x0055, 0x0056, 0x0057, 0x0058, 0x0059, 
    0x005a, 0x005b, 0x005c, 0x005d, 0x005e, 0x005f, 0x0060, 0x0061, 
    0x0062, 0x0063, 0x0064, 0x0065, 0x0066, 0x0067, 0x0068, 0x0069, 
    0x006a, 0x006b, 0x006c, 0x006d, 0x006e, 0x006f, 0x0070, 0x0071, 
    0x0072, 0x0073, 0x0074, 0x0075, 0x0076, 0x0077, 0x0078, 0x0079, 
    0x007a, 0x007b, 0x007c, 0x007d, 0x007e, 0x007f, 0x1ea0, 0x1eae, 
    0x1eb0, 0x1eb6, 0x1ea4, 0x1ea6, 0x1ea8, 0x1eac, 0x1ebc, 0x1eb8, 
    0x1ebe, 0x1ec0, 0x1ec2, 0x1ec4, 0x1ec6, 0x1ed0, 0x1ed2, 0x1ed4, 
    0x1ed6, 0x1ed8, 0x1ee2, 0x1eda, 0x1edc, 0x1ede, 0x1eca, 0x1ece, 
    0x1ecc, 0x1ec8, 0x1ee6, 0x0168, 0x1ee4, 0x1ef2, 0x00d5, 0x1eaf, 
    0x1eb1, 0x1eb7, 0x1ea5, 0x1ea7, 0x1ea9, 0x1ead, 0x1ebd, 0x1eb9, 
    0x1ebf, 0x1ec1, 0x1ec3, 0x1ec5, 0x1ec7, 0x1ed1, 0x1ed3, 0x1ed5, 
    0x1ed7, 0x1ee0, 0x01a0, 0x1ed9, 0x1edd, 0x1edf, 0x1ecb, 0x1ef0, 
    0x1ee8, 0x1eea, 0x1eec, 0x01a1, 0x1edb, 0x01af, 0x00c0, 0x00c1, 
    0x00c2, 0x00c3, 0x1ea2, 0x0102, 0x1eb3, 0x1eb5, 0x00c8, 0x00c9, 
    0x00ca, 0x1eba, 0x00cc, 0x00cd, 0x0128, 0x1ef3, 0x0110, 0x1ee9, 
    0x00d2, 0x00d3, 0x00d4, 0x1ea1, 0x1ef7, 0x1eeb, 0x1eed, 0x00d9, 
    0x00da, 0x1ef9, 0x1ef5, 0x00dd, 0x1ee1, 0x01b0, 0x00e0, 0x00e1, 
    0x00e2, 0x00e3, 0x1ea3, 0x0103, 0x1eef, 0x1eab, 0x00e8, 0x00e9, 
    0x00ea, 0x1ebb, 0x00ec, 0x00ed, 0x0129, 0x1ec9, 0x0111, 0x1ef1, 
    0x00f2, 0x00f3, 0x00f4, 0x00f5, 0x1ecf, 0x1ecd, 0x1ee5, 0x00f9, 
    0x00fa, 0x0169, 0x1ee7, 0x00fd, 0x1ee3, 0x1eee, 
};

QECharset charset_viscii = {
    "viscii",
    aliases_viscii,
    decode_8bit_init,
    NULL,
    encode_8bit,
    table_alloc: 1,
    eol_char: 10,
    min_char: 2,
    max_char: 255,
    private_table: table_viscii,
};

/*-- file: cp/8859_13.cp, id: 8859_13, name: 8859-13, ISO name: ISO 8859-13 (Baltic) --*/

static const char * const aliases_8859_13[] = {
    "ISO-8859-13", "iso-ir-179", "latin7", "l7", "iso-latin7", NULL
};

static const unsigned short table_8859_13[95] = {
    0x201d, 0x00a2, 0x00a3, 0x00a4, 0x201e, 0x00a6, 0x00a7, 0x00d8, 
    0x00a9, 0x0156, 0x00ab, 0x00ac, 0x00ad, 0x00ae, 0x00c6, 0x00b0, 
    0x00b1, 0x00b2, 0x00b3, 0x201c, 0x00b5, 0x00b6, 0x00b7, 0x00f8, 
    0x00b9, 0x0157, 0x00bb, 0x00bc, 0x00bd, 0x00be, 0x00e6, 0x0104, 
    0x012e, 0x0100, 0x0106, 0x00c4, 0x00c5, 0x0118, 0x0112, 0x010c, 
    0x00c9, 0x0179, 0x0116, 0x0122, 0x0136, 0x012a, 0x013b, 0x0160, 
    0x0143, 0x0145, 0x00d3, 0x014c, 0x00d5, 0x00d6, 0x00d7, 0x0172, 
    0x0141, 0x015a, 0x016a, 0x00dc, 0x017b, 0x017d, 0x00df, 0x0105, 
    0x012f, 0x0101, 0x0107, 0x00e4, 0x00e5, 0x0119, 0x0113, 0x010d, 
    0x00e9, 0x017a, 0x0117, 0x0123, 0x0137, 0x012b, 0x013c, 0x0161, 
    0x0144, 0x0146, 0x00f3, 0x014d, 0x00f5, 0x00f6, 0x00f7, 0x0173, 
    0x0142, 0x015b, 0x016b, 0x00fc, 0x017c, 0x017e, 0x2019, 
};

QECharset charset_8859_13 = {
    "8859-13",
    aliases_8859_13,
    decode_8bit_init,
    NULL,
    encode_8bit,
    table_alloc: 1,
    eol_char: 10,
    min_char: 161,
    max_char: 255,
    private_table: table_8859_13,
};

/*-- file: cp/8859_5.cp, id: 8859_5, name: 8859-5, ISO name: ISO 8859-5 (Cyrillic) --*/

static const char * const aliases_8859_5[] = {
    "ISO-8859-5", NULL
};

static const unsigned short table_8859_5[95] = {
    0x0401, 0x0402, 0x0403, 0x0404, 0x0405, 0x0406, 0x0407, 0x0408, 
    0x0409, 0x040a, 0x040b, 0x040c, 0x00ad, 0x040e, 0x040f, 0x0410, 
    0x0411, 0x0412, 0x0413, 0x0414, 0x0415, 0x0416, 0x0417, 0x0418, 
    0x0419, 0x041a, 0x041b, 0x041c, 0x041d, 0x041e, 0x041f, 0x0420, 
    0x0421, 0x0422, 0x0423, 0x0424, 0x0425, 0x0426, 0x0427, 0x0428, 
    0x0429, 0x042a, 0x042b, 0x042c, 0x042d, 0x042e, 0x042f, 0x0430, 
    0x0431, 0x0432, 0x0433, 0x0434, 0x0435, 0x0436, 0x0437, 0x0438, 
    0x0439, 0x043a, 0x043b, 0x043c, 0x043d, 0x043e, 0x043f, 0x0440, 
    0x0441, 0x0442, 0x0443, 0x0444, 0x0445, 0x0446, 0x0447, 0x0448, 
    0x0449, 0x044a, 0x044b, 0x044c, 0x044d, 0x044e, 0x044f, 0x2116, 
    0x0451, 0x0452, 0x0453, 0x0454, 0x0455, 0x0456, 0x0457, 0x0458, 
    0x0459, 0x045a, 0x045b, 0x045c, 0x00a7, 0x045e, 0x045f, 
};

QECharset charset_8859_5 = {
    "8859-5",
    aliases_8859_5,
    decode_8bit_init,
    NULL,
    encode_8bit,
    table_alloc: 1,
    eol_char: 10,
    min_char: 161,
    max_char: 255,
    private_table: table_8859_5,
};

/*-- file: cp/cp1251.cp, id: cp1251, name: cp1251, ISO name: Window$ 1251 (Cyrillic) --*/

static const char * const aliases_cp1251[] = {
    "windows-1251", "1251", NULL
};

static const unsigned short table_cp1251[128] = {
    0x0402, 0x0403, 0x201a, 0x0453, 0x201e, 0x2026, 0x2020, 0x2021, 
    0x20ac, 0x2030, 0x0409, 0x2039, 0x040a, 0x040c, 0x040b, 0x040f, 
    0x0452, 0x2018, 0x2019, 0x201c, 0x201d, 0x2022, 0x2013, 0x2014, 
    0x0098, 0x2122, 0x0459, 0x203a, 0x045a, 0x045c, 0x045b, 0x045f, 
    0x00a0, 0x040e, 0x045e, 0x0408, 0x00a4, 0x0490, 0x00a6, 0x00a7, 
    0x0401, 0x00a9, 0x0404, 0x00ab, 0x00ac, 0x00ad, 0x00ae, 0x0407, 
    0x00b0, 0x00b1, 0x0406, 0x0456, 0x0491, 0x00b5, 0x00b6, 0x00b7, 
    0x0451, 0x2116, 0x0454, 0x00bb, 0x0458, 0x0405, 0x0455, 0x0457, 
    0x0410, 0x0411, 0x0412, 0x0413, 0x0414, 0x0415, 0x0416, 0x0417, 
    0x0418, 0x0419, 0x041a, 0x041b, 0x041c, 0x041d, 0x041e, 0x041f, 
    0x0420, 0x0421, 0x0422, 0x0423, 0x0424, 0x0425, 0x0426, 0x0427, 
    0x0428, 0x0429, 0x042a, 0x042b, 0x042c, 0x042d, 0x042e, 0x042f, 
    0x0430, 0x0431, 0x0432, 0x0433, 0x0434, 0x0435, 0x0436, 0x0437, 
    0x0438, 0x0439, 0x043a, 0x043b, 0x043c, 0x043d, 0x043e, 0x043f, 
    0x0440, 0x0441, 0x0442, 0x0443, 0x0444, 0x0445, 0x0446, 0x0447, 
    0x0448, 0x0449, 0x044a, 0x044b, 0x044c, 0x044d, 0x044e, 0x044f, 
};

QECharset charset_cp1251 = {
    "cp1251",
    aliases_cp1251,
    decode_8bit_init,
    NULL,
    encode_8bit,
    table_alloc: 1,
    eol_char: 10,
    min_char: 128,
    max_char: 255,
    private_table: table_cp1251,
};

/*-- file: cp/cp852.cp, id: cp852, name: cp852, ISO name: CP 852 (Central European) --*/

static const char * const aliases_cp852[] = {
    "852", NULL
};

static const unsigned short table_cp852[128] = {
    0x00c7, 0x00fc, 0x00e9, 0x00e2, 0x00e4, 0x016f, 0x0107, 0x00e7, 
    0x0142, 0x00eb, 0x0150, 0x0151, 0x00ee, 0x0179, 0x00c4, 0x0106, 
    0x00c9, 0x0139, 0x013a, 0x00f4, 0x00f6, 0x013d, 0x013e, 0x015a, 
    0x015b, 0x00d6, 0x00dc, 0x0164, 0x0165, 0x0141, 0x00d7, 0x010d, 
    0x00e1, 0x00ed, 0x00f3, 0x00fa, 0x0104, 0x0105, 0x017d, 0x017e, 
    0x0118, 0x0119, 0x00ac, 0x017a, 0x010c, 0x015f, 0x00ab, 0x00bb, 
    0x2591, 0x2592, 0x2593, 0x2502, 0x2524, 0x00c1, 0x00c2, 0x011a, 
    0x015e, 0x2563, 0x2551, 0x2557, 0x255d, 0x017b, 0x017c, 0x2510, 
    0x2514, 0x2534, 0x252c, 0x251c, 0x2500, 0x253c, 0x0102, 0x0103, 
    0x255a, 0x2554, 0x2569, 0x2566, 0x2560, 0x2550, 0x256c, 0x00a4, 
    0x0111, 0x0110, 0x010e, 0x00cb, 0x010f, 0x0147, 0x00cd, 0x00ce, 
    0x011b, 0x2518, 0x250c, 0x2588, 0x2584, 0x0162, 0x016e, 0x2580, 
    0x00d3, 0x00df, 0x00d4, 0x0143, 0x0144, 0x0148, 0x0160, 0x0161, 
    0x0154, 0x00da, 0x0155, 0x0170, 0x00fd, 0x00dd, 0x0163, 0x00b4, 
    0x00ad, 0x02dd, 0x02db, 0x02c7, 0x02d8, 0x00a7, 0x00f7, 0x00b8, 
    0x00b0, 0x00a8, 0x02d9, 0x0171, 0x0158, 0x0159, 0x25a0, 0x00a0, 
};

QECharset charset_cp852 = {
    "cp852",
    aliases_cp852,
    decode_8bit_init,
    NULL,
    encode_8bit,
    table_alloc: 1,
    eol_char: 10,
    min_char: 128,
    max_char: 255,
    private_table: table_cp852,
};

/*-- file: cp/mac_lat2.cp, id: mac_lat2, name: mac-lat2, ISO name: Mac latin 2 --*/

static const char * const aliases_mac_lat2[] = {
    "x-mac-ce", "mac-ce", "maclatin2", "10029", NULL
};

static const unsigned short table_mac_lat2[128] = {
    0x00c4, 0x0100, 0x0101, 0x00c9, 0x0104, 0x00d6, 0x00dc, 0x00e1, 
    0x0105, 0x010c, 0x00e4, 0x010d, 0x0106, 0x0107, 0x00e9, 0x0179, 
    0x017a, 0x010e, 0x00ed, 0x010f, 0x0112, 0x0113, 0x0116, 0x00f3, 
    0x0117, 0x00f4, 0x00f6, 0x00f5, 0x00fa, 0x011a, 0x011b, 0x00fc, 
    0x2020, 0x00b0, 0x0118, 0x00a3, 0x00a7, 0x2022, 0x00b6, 0x00df, 
    0x00ae, 0x00a9, 0x2122, 0x0119, 0x00a8, 0x2260, 0x0123, 0x012e, 
    0x012f, 0x012a, 0x2264, 0x2265, 0x012b, 0x0136, 0x2202, 0x2211, 
    0x0142, 0x013b, 0x013c, 0x013d, 0x013e, 0x0139, 0x013a, 0x0145, 
    0x0146, 0x0143, 0x00ac, 0x221a, 0x0144, 0x0147, 0x2206, 0x00ab, 
    0x00bb, 0x2026, 0x00a0, 0x0148, 0x0150, 0x00d5, 0x0151, 0x014c, 
    0x2013, 0x2014, 0x201c, 0x201d, 0x2018, 0x2019, 0x00f7, 0x25ca, 
    0x014d, 0x0154, 0x0155, 0x0158, 0x2039, 0x203a, 0x0159, 0x0156, 
    0x0157, 0x0160, 0x201a, 0x201e, 0x0161, 0x015a, 0x015b, 0x00c1, 
    0x0164, 0x0165, 0x00cd, 0x017d, 0x017e, 0x016a, 0x00d3, 0x00d4, 
    0x016b, 0x016e, 0x00da, 0x016f, 0x0170, 0x0171, 0x0172, 0x0173, 
    0x00dd, 0x00fd, 0x0137, 0x017b, 0x0141, 0x017c, 0x0122, 0x02c7, 
};

QECharset charset_mac_lat2 = {
    "mac-lat2",
    aliases_mac_lat2,
    decode_8bit_init,
    NULL,
    encode_8bit,
    table_alloc: 1,
    eol_char: 10,
    min_char: 128,
    max_char: 255,
    private_table: table_mac_lat2,
};

/*-- file: cp/8859_15.cp, id: 8859_15, name: 8859-15, ISO name: ISO 8859-15 (Western European) --*/

static const char * const aliases_8859_15[] = {
    "ISO-8859-15", "latin9", "l9", "latin0", "l0", NULL
};

static const unsigned short table_8859_15[27] = {
    0x20ac, 0x00a5, 0x0160, 0x00a7, 0x0161, 0x00a9, 0x00aa, 0x00ab, 
    0x00ac, 0x00ad, 0x00ae, 0x00af, 0x00b0, 0x00b1, 0x00b2, 0x00b3, 
    0x017d, 0x00b5, 0x00b6, 0x00b7, 0x017e, 0x00b9, 0x00ba, 0x00bb, 
    0x0152, 0x0153, 0x0178, 
};

QECharset charset_8859_15 = {
    "8859-15",
    aliases_8859_15,
    decode_8bit_init,
    NULL,
    encode_8bit,
    table_alloc: 1,
    eol_char: 10,
    min_char: 164,
    max_char: 190,
    private_table: table_8859_15,
};

/*-- file: cp/8859_7.cp, id: 8859_7, name: 8859-7, ISO name: ISO 8859-7 (Greek) --*/

static const char * const aliases_8859_7[] = {
    "ISO-8859-7", "iso-ir-126", "elot-928", NULL
};

static const unsigned short table_8859_7[94] = {
    0x2018, 0x2019, 0x00a3, 0x00a4, 0x00a5, 0x00a6, 0x00a7, 0x00a8, 
    0x00a9, 0x00aa, 0x00ab, 0x00ac, 0x00ad, 0x00ae, 0x2015, 0x00b0, 
    0x00b1, 0x00b2, 0x00b3, 0x0384, 0x0385, 0x0386, 0x00b7, 0x0388, 
    0x0389, 0x038a, 0x00bb, 0x038c, 0x00bd, 0x038e, 0x038f, 0x0390, 
    0x0391, 0x0392, 0x0393, 0x0394, 0x0395, 0x0396, 0x0397, 0x0398, 
    0x0399, 0x039a, 0x039b, 0x039c, 0x039d, 0x039e, 0x039f, 0x03a0, 
    0x03a1, 0x00d2, 0x03a3, 0x03a4, 0x03a5, 0x03a6, 0x03a7, 0x03a8, 
    0x03a9, 0x03aa, 0x03ab, 0x03ac, 0x03ad, 0x03ae, 0x03af, 0x03b0, 
    0x03b1, 0x03b2, 0x03b3, 0x03b4, 0x03b5, 0x03b6, 0x03b7, 0x03b8, 
    0x03b9, 0x03ba, 0x03bb, 0x03bc, 0x03bd, 0x03be, 0x03bf, 0x03c0, 
    0x03c1, 0x03c2, 0x03c3, 0x03c4, 0x03c5, 0x03c6, 0x03c7, 0x03c8, 
    0x03c9, 0x03ca, 0x03cb, 0x03cc, 0x03cd, 0x03ce, 
};

QECharset charset_8859_7 = {
    "8859-7",
    aliases_8859_7,
    decode_8bit_init,
    NULL,
    encode_8bit,
    table_alloc: 1,
    eol_char: 10,
    min_char: 161,
    max_char: 254,
    private_table: table_8859_7,
};

/*-- file: cp/cp1257.cp, id: cp1257, name: cp1257, ISO name: Window$ 1257 (Baltic) --*/

static const char * const aliases_cp1257[] = {
    "windows-1257", "1257", NULL
};

static const unsigned short table_cp1257[128] = {
    0x20ac, 0x0000, 0x201a, 0x0000, 0x201e, 0x2026, 0x2020, 0x2021, 
    0x0000, 0x2030, 0x0000, 0x2039, 0x0000, 0x00a8, 0x02c7, 0x00b8, 
    0x0000, 0x2018, 0x2019, 0x201c, 0x201d, 0x2022, 0x2013, 0x2014, 
    0x0000, 0x2122, 0x0000, 0x203a, 0x0000, 0x00af, 0x02db, 0x0000, 
    0x00a0, 0x0000, 0x00a2, 0x00a3, 0x00a4, 0x0000, 0x00a6, 0x00a7, 
    0x00d8, 0x00a9, 0x0156, 0x00ab, 0x00ac, 0x00ad, 0x00ae, 0x00c6, 
    0x00b0, 0x00b1, 0x00b2, 0x00b3, 0x00b4, 0x00b5, 0x00b6, 0x00b7, 
    0x00f8, 0x00b9, 0x0157, 0x00bb, 0x00bc, 0x00bd, 0x00be, 0x00e6, 
    0x0104, 0x012e, 0x0100, 0x0106, 0x00c4, 0x00c5, 0x0118, 0x0112, 
    0x010c, 0x00c9, 0x0179, 0x0116, 0x0122, 0x0136, 0x012a, 0x013b, 
    0x0160, 0x0143, 0x0145, 0x00d3, 0x014c, 0x00d5, 0x00d6, 0x00d7, 
    0x0172, 0x0141, 0x015a, 0x016a, 0x00dc, 0x017b, 0x017d, 0x00df, 
    0x0105, 0x012f, 0x0101, 0x0107, 0x00e4, 0x00e5, 0x0119, 0x0113, 
    0x010d, 0x00e9, 0x017a, 0x0117, 0x0123, 0x0137, 0x012b, 0x013c, 
    0x0161, 0x0144, 0x0146, 0x00f3, 0x014d, 0x00f5, 0x00f6, 0x00f7, 
    0x0173, 0x0142, 0x015b, 0x016b, 0x00fc, 0x017c, 0x017e, 0x02d9, 
};

QECharset charset_cp1257 = {
    "cp1257",
    aliases_cp1257,
    decode_8bit_init,
    NULL,
    encode_8bit,
    table_alloc: 1,
    eol_char: 10,
    min_char: 128,
    max_char: 255,
    private_table: table_cp1257,
};

/*-- file: cp/cp866.cp, id: cp866, name: cp866, ISO name: CP 866 (Cyrillic) --*/

static const char * const aliases_cp866[] = {
    "866", NULL
};

static const unsigned short table_cp866[128] = {
    0x0410, 0x0411, 0x0412, 0x0413, 0x0414, 0x0415, 0x0416, 0x0417, 
    0x0418, 0x0419, 0x041a, 0x041b, 0x041c, 0x041d, 0x041e, 0x041f, 
    0x0420, 0x0421, 0x0422, 0x0423, 0x0424, 0x0425, 0x0426, 0x0427, 
    0x0428, 0x0429, 0x042a, 0x042b, 0x042c, 0x042d, 0x042e, 0x042f, 
    0x0430, 0x0431, 0x0432, 0x0433, 0x0434, 0x0435, 0x0436, 0x0437, 
    0x0438, 0x0439, 0x043a, 0x043b, 0x043c, 0x043d, 0x043e, 0x043f, 
    0x2591, 0x2592, 0x2593, 0x2502, 0x2524, 0x2561, 0x2562, 0x2556, 
    0x2555, 0x2563, 0x2551, 0x2557, 0x255d, 0x255c, 0x255b, 0x2510, 
    0x2514, 0x2534, 0x252c, 0x251c, 0x2500, 0x253c, 0x255e, 0x255f, 
    0x255a, 0x2554, 0x2569, 0x2566, 0x2560, 0x2550, 0x256c, 0x2567, 
    0x2568, 0x2564, 0x2565, 0x2559, 0x2558, 0x2552, 0x2553, 0x256b, 
    0x256a, 0x2518, 0x250c, 0x2588, 0x2584, 0x258c, 0x2590, 0x2580, 
    0x0440, 0x0441, 0x0442, 0x0443, 0x0444, 0x0445, 0x0446, 0x0447, 
    0x0448, 0x0449, 0x044a, 0x044b, 0x044c, 0x044d, 0x044e, 0x044f, 
    0x0401, 0x0451, 0x0404, 0x0454, 0x0407, 0x0457, 0x040e, 0x045e, 
    0x00b0, 0x2219, 0x00b7, 0x221a, 0x2116, 0x00a4, 0x25a0, 0x00a0, 
};

QECharset charset_cp866 = {
    "cp866",
    aliases_cp866,
    decode_8bit_init,
    NULL,
    encode_8bit,
    table_alloc: 1,
    eol_char: 10,
    min_char: 128,
    max_char: 255,
    private_table: table_cp866,
};

/*-- file: cp/macroman.cp, id: macroman, name: macroman, ISO name: MacRoman 2000 --*/

static const char * const aliases_macroman[] = {
    "x-mac", "mac", NULL
};

static const unsigned short table_macroman[128] = {
    0x00c4, 0x00c5, 0x00c7, 0x00c9, 0x00d1, 0x00d6, 0x00dc, 0x00e1, 
    0x00e0, 0x00e2, 0x00e4, 0x00e3, 0x00e5, 0x00e7, 0x00e9, 0x00e8, 
    0x00ea, 0x00eb, 0x00ed, 0x00ec, 0x00ee, 0x00ef, 0x00f1, 0x00f3, 
    0x00f2, 0x00f4, 0x00f6, 0x00f5, 0x00fa, 0x00f9, 0x00fb, 0x00fc, 
    0x2020, 0x00b0, 0x00a2, 0x00a3, 0x00a7, 0x2022, 0x00b6, 0x00df, 
    0x00ae, 0x00a9, 0x2122, 0x00b4, 0x00a8, 0x2260, 0x00c6, 0x00d8, 
    0x221e, 0x00b1, 0x2264, 0x2265, 0x00a5, 0x00b5, 0x2202, 0x2211, 
    0x220f, 0x03c0, 0x222b, 0x00aa, 0x00ba, 0x03a9, 0x00e6, 0x00f8, 
    0x00bf, 0x00a1, 0x00ac, 0x221a, 0x0192, 0x2248, 0x0394, 0x00ab, 
    0x00bb, 0x2026, 0x00a0, 0x00c0, 0x00c3, 0x00d5, 0x0152, 0x0153, 
    0x2013, 0x2014, 0x201c, 0x201d, 0x2018, 0x2019, 0x00f7, 0x25ca, 
    0x00ff, 0x0178, 0x2044, 0x20ac, 0x2039, 0x203a, 0xfb01, 0xfb02, 
    0x2021, 0x00b7, 0x201a, 0x201e, 0x2030, 0x00c2, 0x00ca, 0x00c1, 
    0x00cb, 0x00c8, 0x00cd, 0x00ce, 0x00cf, 0x00cc, 0x00d3, 0x00d4, 
    0xf8ff, 0x00d2, 0x00da, 0x00db, 0x00d9, 0x0131, 0x02c6, 0x02dc, 
    0x00af, 0x02d8, 0x02d9, 0x02da, 0x00b8, 0x02dd, 0x02db, 0x02c7, 
};

QECharset charset_macroman = {
    "macroman",
    aliases_macroman,
    decode_8bit_init,
    NULL,
    encode_8bit,
    table_alloc: 1,
    eol_char: 10,
    min_char: 128,
    max_char: 255,
    private_table: table_macroman,
};

/*-- file: cp/8859_16.cp, id: 8859_16, name: 8859-16, ISO name: ISO 8859-16 (Romainian) --*/

static const char * const aliases_8859_16[] = {
    "ISO-8859-16", "latin10", "l10", NULL
};

static const unsigned short table_8859_16[94] = {
    0x0104, 0x0105, 0x0141, 0x20ac, 0x201e, 0x0160, 0x00a7, 0x0161, 
    0x00a9, 0x0218, 0x00ab, 0x0179, 0x00ad, 0x017a, 0x017b, 0x00b0, 
    0x00b1, 0x010c, 0x0142, 0x017d, 0x201d, 0x00b6, 0x00b7, 0x017e, 
    0x010d, 0x0219, 0x00bb, 0x0152, 0x0153, 0x0178, 0x017c, 0x00c0, 
    0x00c1, 0x00c2, 0x0102, 0x00c4, 0x0106, 0x00c6, 0x00c7, 0x00c8, 
    0x00c9, 0x00ca, 0x00cb, 0x00cc, 0x00cd, 0x00ce, 0x00cf, 0x0110, 
    0x0143, 0x00d2, 0x00d3, 0x00d4, 0x0150, 0x00d6, 0x015a, 0x0170, 
    0x00d9, 0x00da, 0x00db, 0x00dc, 0x0118, 0x021a, 0x00df, 0x00e0, 
    0x00e1, 0x00e2, 0x0103, 0x00e4, 0x0107, 0x00e6, 0x00e7, 0x00e8, 
    0x00e9, 0x00ea, 0x00eb, 0x00ec, 0x00ed, 0x00ee, 0x00ef, 0x0111, 
    0x0144, 0x00f2, 0x00f3, 0x00f4, 0x0151, 0x00f6, 0x015b, 0x0171, 
    0x00f9, 0x00fa, 0x00fb, 0x00fc, 0x0119, 0x021b, 
};

QECharset charset_8859_16 = {
    "8859-16",
    aliases_8859_16,
    decode_8bit_init,
    NULL,
    encode_8bit,
    table_alloc: 1,
    eol_char: 10,
    min_char: 161,
    max_char: 254,
    private_table: table_8859_16,
};

/*-- file: cp/8859_9.cp, id: 8859_9, name: 8859-9, ISO name: ISO 8859-9 (Turkish) --*/

static const char * const aliases_8859_9[] = {
    "ISO-8859-9", NULL
};

static const unsigned short table_8859_9[47] = {
    0x011e, 0x00d1, 0x00d2, 0x00d3, 0x00d4, 0x00d5, 0x00d6, 0x00d7, 
    0x00d8, 0x00d9, 0x00da, 0x00db, 0x00dc, 0x0130, 0x015e, 0x00df, 
    0x00e0, 0x00e1, 0x00e2, 0x00e3, 0x00e4, 0x00e5, 0x00e6, 0x00e7, 
    0x00e8, 0x00e9, 0x00ea, 0x00eb, 0x00ec, 0x00ed, 0x00ee, 0x00ef, 
    0x011f, 0x00f1, 0x00f2, 0x00f3, 0x00f4, 0x00f5, 0x00f6, 0x00f7, 
    0x00f8, 0x00f9, 0x00fa, 0x00fb, 0x00fc, 0x0131, 0x015f, 
};

QECharset charset_8859_9 = {
    "8859-9",
    aliases_8859_9,
    decode_8bit_init,
    NULL,
    encode_8bit,
    table_alloc: 1,
    eol_char: 10,
    min_char: 208,
    max_char: 254,
    private_table: table_8859_9,
};

/*-- file: cp/cp437.cp, id: cp437, name: cp437, ISO name: CP 437 (US) --*/

static const char * const aliases_cp437[] = {
    "437", NULL
};

static const unsigned short table_cp437[128] = {
    0x00c7, 0x00fc, 0x00e9, 0x00e2, 0x00e4, 0x00e0, 0x00e5, 0x00e7, 
    0x00ea, 0x00eb, 0x00e8, 0x00ef, 0x00ee, 0x00ec, 0x00c4, 0x00c5, 
    0x00c9, 0x00e6, 0x00c6, 0x00f4, 0x00f6, 0x00f2, 0x00fb, 0x00f9, 
    0x00ff, 0x00d6, 0x00dc, 0x00a2, 0x00a3, 0x00a5, 0x20a7, 0x0192, 
    0x00e1, 0x00ed, 0x00f3, 0x00fa, 0x00f1, 0x00d1, 0x00aa, 0x00ba, 
    0x00bf, 0x2310, 0x00ac, 0x00bd, 0x00bc, 0x00a1, 0x00ab, 0x00bb, 
    0x2591, 0x2592, 0x2593, 0x2502, 0x2524, 0x2561, 0x2562, 0x2556, 
    0x2555, 0x2563, 0x2551, 0x2557, 0x255d, 0x255c, 0x255b, 0x2510, 
    0x2514, 0x2534, 0x252c, 0x251c, 0x2500, 0x253c, 0x255e, 0x255f, 
    0x255a, 0x2554, 0x2569, 0x2566, 0x2560, 0x2550, 0x256c, 0x2567, 
    0x2568, 0x2564, 0x2565, 0x2559, 0x2558, 0x2552, 0x2553, 0x256b, 
    0x256a, 0x2518, 0x250c, 0x2588, 0x2584, 0x258c, 0x2590, 0x2580, 
    0x03b1, 0x00df, 0x0393, 0x03c0, 0x03a3, 0x03c3, 0x00b5, 0x03c4, 
    0x03a6, 0x0398, 0x03a9, 0x03b4, 0x221e, 0x03c6, 0x03b5, 0x2229, 
    0x2261, 0x00b1, 0x2265, 0x2264, 0x2320, 0x2321, 0x00f7, 0x2248, 
    0x00b0, 0x2219, 0x00b7, 0x221a, 0x207f, 0x00b2, 0x25a0, 0x00a0, 
};

QECharset charset_cp437 = {
    "cp437",
    aliases_cp437,
    decode_8bit_init,
    NULL,
    encode_8bit,
    table_alloc: 1,
    eol_char: 10,
    min_char: 128,
    max_char: 255,
    private_table: table_cp437,
};

/*-- file: cp/kamen.cp, id: kamen, name: kamen, ISO name: Kamenicky Brothers --*/

static const char * const aliases_kamen[] = {
    "x-kam-cs", "kam", "867", "869", NULL
};

static const unsigned short table_kamen[255] = {
    0x263a, 0x263b, 0x2665, 0x2666, 0x2663, 0x2660, 0x2022, 0x25d8, 
    0x25cb, 0x25d9, 0x2642, 0x2640, 0x266a, 0x266b, 0x263c, 0x25b6, 
    0x25c0, 0x2195, 0x203c, 0x00b6, 0x00a7, 0x25ac, 0x21a8, 0x2191, 
    0x2193, 0x2192, 0x2190, 0x221f, 0x2194, 0x25b2, 0x25bc, 0x0020, 
    0x0021, 0x0022, 0x0023, 0x0024, 0x0025, 0x0026, 0x0027, 0x0028, 
    0x0029, 0x002a, 0x002b, 0x002c, 0x002d, 0x002e, 0x002f, 0x0030, 
    0x0031, 0x0032, 0x0033, 0x0034, 0x0035, 0x0036, 0x0037, 0x0038, 
    0x0039, 0x003a, 0x003b, 0x003c, 0x003d, 0x003e, 0x003f, 0x0040, 
    0x0041, 0x0042, 0x0043, 0x0044, 0x0045, 0x0046, 0x0047, 0x0048, 
    0x0049, 0x004a, 0x004b, 0x004c, 0x004d, 0x004e, 0x004f, 0x0050, 
    0x0051, 0x0052, 0x0053, 0x0054, 0x0055, 0x0056, 0x0057, 0x0058, 
    0x0059, 0x005a, 0x005b, 0x005c, 0x005d, 0x005e, 0x005f, 0x0060, 
    0x0061, 0x0062, 0x0063, 0x0064, 0x0065, 0x0066, 0x0067, 0x0068, 
    0x0069, 0x006a, 0x006b, 0x006c, 0x006d, 0x006e, 0x006f, 0x0070, 
    0x0071, 0x0072, 0x0073, 0x0074, 0x0075, 0x0076, 0x0077, 0x0078, 
    0x0079, 0x007a, 0x007b, 0x007c, 0x007d, 0x007e, 0x2302, 0x010c, 
    0x00fc, 0x00e9, 0x010f, 0x00e4, 0x010e, 0x0164, 0x010d, 0x011b, 
    0x011a, 0x0139, 0x00cd, 0x013e, 0x013a, 0x00c4, 0x00c1, 0x00c9, 
    0x017e, 0x017d, 0x00f4, 0x00f6, 0x00d3, 0x016f, 0x00da, 0x00fd, 
    0x00d6, 0x00dc, 0x0160, 0x013d, 0x00dd, 0x0158, 0x0165, 0x00e1, 
    0x00ed, 0x00f3, 0x00fa, 0x0148, 0x0147, 0x016e, 0x00d4, 0x0161, 
    0x0159, 0x0155, 0x0154, 0x00bc, 0x00a7, 0x00bb, 0x00ab, 0x2591, 
    0x2592, 0x2593, 0x2502, 0x2524, 0x2561, 0x2562, 0x2556, 0x2555, 
    0x2563, 0x2551, 0x2557, 0x255d, 0x255c, 0x255b, 0x2510, 0x2514, 
    0x2534, 0x252c, 0x251c, 0x2500, 0x253c, 0x255e, 0x255f, 0x255a, 
    0x2554, 0x2569, 0x2566, 0x2560, 0x2550, 0x256c, 0x2567, 0x2568, 
    0x2564, 0x2565, 0x2559, 0x2558, 0x2552, 0x2553, 0x256b, 0x256a, 
    0x2518, 0x250c, 0x2588, 0x2584, 0x258c, 0x2590, 0x2580, 0x03b1, 
    0x03b2, 0x0194, 0x03c0, 0x03a3, 0x03c3, 0x03bc, 0x03c4, 0x03a6, 
    0x0398, 0x03a9, 0x03b4, 0x221e, 0x03c6, 0x2208, 0x2229, 0x224d, 
    0x00b1, 0x2265, 0x2264, 0x2320, 0x2321, 0x00f7, 0x2248, 0x00b0, 
    0x2219, 0x00b7, 0x221a, 0x207f, 0x00b2, 0x25a0, 0x00a0, 
};

QECharset charset_kamen = {
    "kamen",
    aliases_kamen,
    decode_8bit_init,
    NULL,
    encode_8bit,
    table_alloc: 1,
    eol_char: 10,
    min_char: 1,
    max_char: 255,
    private_table: table_kamen,
};

/*-- file: cp/tcvn5712.cp, id: tcvn5712, name: tcvn5712, ISO name: TCVN-5712 (Vietnamese) --*/

static const char * const aliases_tcvn5712[] = {
    "TCVN-5712", "TCVN", "TCVN-0", "TCVN-1", NULL
};

static const unsigned short table_tcvn5712[255] = {
    0x00da, 0x1ee4, 0x0003, 0x1eea, 0x1eec, 0x1eee, 0x0007, 0x0008, 
    0x0009, 0x000a, 0x000b, 0x000c, 0x000d, 0x000e, 0x000f, 0x0010, 
    0x1ee8, 0x1ef0, 0x1ef2, 0x1ef6, 0x1ef8, 0x00dd, 0x1ef4, 0x0018, 
    0x0019, 0x001a, 0x001b, 0x001c, 0x001d, 0x001e, 0x001f, 0x0020, 
    0x0021, 0x0022, 0x0023, 0x0024, 0x0025, 0x0026, 0x0027, 0x0028, 
    0x0029, 0x002a, 0x002b, 0x002c, 0x002d, 0x002e, 0x002f, 0x0030, 
    0x0031, 0x0032, 0x0033, 0x0034, 0x0035, 0x0036, 0x0037, 0x0038, 
    0x0039, 0x003a, 0x003b, 0x003c, 0x003d, 0x003e, 0x003f, 0x0040, 
    0x0041, 0x0042, 0x0043, 0x0044, 0x0045, 0x0046, 0x0047, 0x0048, 
    0x0049, 0x004a, 0x004b, 0x004c, 0x004d, 0x004e, 0x004f, 0x0050, 
    0x0051, 0x0052, 0x0053, 0x0054, 0x0055, 0x0056, 0x0057, 0x0058, 
    0x0059, 0x005a, 0x005b, 0x005c, 0x005d, 0x005e, 0x005f, 0x0060, 
    0x0061, 0x0062, 0x0063, 0x0064, 0x0065, 0x0066, 0x0067, 0x0068, 
    0x0069, 0x006a, 0x006b, 0x006c, 0x006d, 0x006e, 0x006f, 0x0070, 
    0x0071, 0x0072, 0x0073, 0x0074, 0x0075, 0x0076, 0x0077, 0x0078, 
    0x0079, 0x007a, 0x007b, 0x007c, 0x007d, 0x007e, 0x007f, 0x00c0, 
    0x1ea2, 0x00c3, 0x00c1, 0x1ea0, 0x1eb6, 0x1eac, 0x00c8, 0x1eba, 
    0x1ebc, 0x00c9, 0x1eb8, 0x1ec6, 0x00cc, 0x1ec8, 0x0128, 0x00cd, 
    0x1eca, 0x00d2, 0x1ece, 0x00d5, 0x00d3, 0x1ecc, 0x1ed8, 0x1edc, 
    0x1ede, 0x1ee0, 0x1eda, 0x1ee2, 0x00d9, 0x1ee6, 0x0168, 0x00a0, 
    0x0102, 0x00c2, 0x00ca, 0x00d4, 0x01a0, 0x01af, 0x0110, 0x0103, 
    0x00e2, 0x00ea, 0x00f4, 0x01a1, 0x01b0, 0x0111, 0x1eb0, 0x0300, 
    0x0309, 0x0303, 0x0301, 0x0323, 0x00e0, 0x1ea3, 0x00e3, 0x00e1, 
    0x1ea1, 0x1eb2, 0x1eb1, 0x1eb3, 0x1eb5, 0x1eaf, 0x1eb4, 0x1eae, 
    0x1ea6, 0x1ea8, 0x1eaa, 0x1ea4, 0x1ec0, 0x1eb7, 0x1ea7, 0x1ea9, 
    0x1eab, 0x1ea5, 0x1ead, 0x00e8, 0x1ec2, 0x1ebb, 0x1ebd, 0x00e9, 
    0x1eb9, 0x1ec1, 0x1ec3, 0x1ec5, 0x1ebf, 0x1ec7, 0x00ec, 0x1ec9, 
    0x1ec4, 0x1ebe, 0x1ed2, 0x0129, 0x00ed, 0x1ecb, 0x00f2, 0x1ed4, 
    0x1ecf, 0x00f5, 0x00f3, 0x1ecd, 0x1ed3, 0x1ed5, 0x1ed7, 0x1ed1, 
    0x1ed9, 0x1edd, 0x1edf, 0x1ee1, 0x1edb, 0x1ee3, 0x00f9, 0x1ed6, 
    0x1ee7, 0x0169, 0x00fa, 0x1ee5, 0x1eeb, 0x1eed, 0x1eef, 0x1ee9, 
    0x1ef1, 0x1ef3, 0x1ef7, 0x1ef9, 0x00fd, 0x1ef5, 0x1ed0, 
};

QECharset charset_tcvn5712 = {
    "tcvn5712",
    aliases_tcvn5712,
    decode_8bit_init,
    NULL,
    encode_8bit,
    table_alloc: 1,
    eol_char: 10,
    min_char: 1,
    max_char: 255,
    private_table: table_tcvn5712,
};

int charset_more_init(void)
{
    qe_register_charset(&charset_8859_2);
    qe_register_charset(&charset_cp1125);
    qe_register_charset(&charset_cp737);
    qe_register_charset(&charset_koi8_r);
    qe_register_charset(&charset_8859_4);
    qe_register_charset(&charset_cp1250);
    qe_register_charset(&charset_cp850);
    qe_register_charset(&charset_koi8_u);
    qe_register_charset(&charset_viscii);
    qe_register_charset(&charset_8859_13);
    qe_register_charset(&charset_8859_5);
    qe_register_charset(&charset_cp1251);
    qe_register_charset(&charset_cp852);
    qe_register_charset(&charset_mac_lat2);
    qe_register_charset(&charset_8859_15);
    qe_register_charset(&charset_8859_7);
    qe_register_charset(&charset_cp1257);
    qe_register_charset(&charset_cp866);
    qe_register_charset(&charset_macroman);
    qe_register_charset(&charset_8859_16);
    qe_register_charset(&charset_8859_9);
    qe_register_charset(&charset_cp437);
    qe_register_charset(&charset_kamen);
    qe_register_charset(&charset_tcvn5712);

    return 0;
}

qe_module_init(charset_more_init);
