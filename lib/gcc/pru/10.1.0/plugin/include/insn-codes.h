/* Generated automatically by the program `gencodes'
   from the machine description file `md'.  */

#ifndef GCC_INSN_CODES_H
#define GCC_INSN_CODES_H

enum insn_code {
  CODE_FOR_nothing = 0,
  CODE_FOR_prumovsi = 1,
  CODE_FOR_prumovsq = 2,
  CODE_FOR_prumovusq = 3,
  CODE_FOR_prumovsa = 4,
  CODE_FOR_prumovusa = 5,
  CODE_FOR_prumovsf = 6,
  CODE_FOR_prumovsd = 7,
  CODE_FOR_prumovqi = 8,
  CODE_FOR_prumovqq = 9,
  CODE_FOR_prumovuqq = 10,
  CODE_FOR_prumovhi = 11,
  CODE_FOR_prumovhq = 12,
  CODE_FOR_prumovuhq = 13,
  CODE_FOR_prumovha = 14,
  CODE_FOR_prumovuha = 15,
  CODE_FOR_movdi = 16,
  CODE_FOR_movdf = 17,
  CODE_FOR_movdd = 18,
  CODE_FOR_movdq = 19,
  CODE_FOR_movudq = 20,
  CODE_FOR_extendqiqi2 = 32,
  CODE_FOR_extendhiqi2 = 33,
  CODE_FOR_extendsiqi2 = 34,
  CODE_FOR_extendqihi2 = 35,
  CODE_FOR_extendhihi2 = 36,
  CODE_FOR_extendsihi2 = 37,
  CODE_FOR_extendqisi2 = 38,
  CODE_FOR_extendhisi2 = 39,
  CODE_FOR_extendsisi2 = 40,
  CODE_FOR_extzvqi = 41,
  CODE_FOR_extzvhi = 42,
  CODE_FOR_extzvsi = 43,
  CODE_FOR_adddi3 = 44,
  CODE_FOR_subdi3 = 45,
  CODE_FOR_ashrqi3_single = 46,
  CODE_FOR_ashrhi3_single = 47,
  CODE_FOR_ashrsi3_single = 48,
  CODE_FOR_add_implqiqiqi__z_z1_z2 = 49,
  CODE_FOR_add_implqiqiqi__z_z1_noz2 = 50,
  CODE_FOR_add_implqiqiqi__noz_z1_z2 = 51,
  CODE_FOR_add_implqiqiqi__z_noz1_z2 = 52,
  CODE_FOR_add_implqihiqi__z_z1_z2 = 53,
  CODE_FOR_add_implqihiqi__z_z1_noz2 = 54,
  CODE_FOR_add_implqisiqi__z_z1_z2 = 55,
  CODE_FOR_add_implqisiqi__z_z1_noz2 = 56,
  CODE_FOR_add_implhiqiqi__z_z1_z2 = 57,
  CODE_FOR_add_implhihiqi__z_z1_z2 = 58,
  CODE_FOR_add_implhihiqi__z_noz1_z2 = 59,
  CODE_FOR_add_implhisiqi__z_z1_z2 = 60,
  CODE_FOR_add_implsiqiqi__z_z1_z2 = 61,
  CODE_FOR_add_implsihiqi__z_z1_z2 = 62,
  CODE_FOR_add_implsisiqi__z_z1_z2 = 63,
  CODE_FOR_add_implsisiqi__z_noz1_z2 = 64,
  CODE_FOR_add_implqiqihi__z_z1_z2 = 65,
  CODE_FOR_add_implqiqihi__z_noz1_z2 = 66,
  CODE_FOR_add_implqihihi__z_z1_z2 = 67,
  CODE_FOR_add_implqisihi__z_z1_z2 = 68,
  CODE_FOR_add_implhiqihi__z_z1_z2 = 69,
  CODE_FOR_add_implhiqihi__z_z1_noz2 = 70,
  CODE_FOR_add_implhihihi__z_z1_z2 = 71,
  CODE_FOR_add_implhihihi__z_z1_noz2 = 72,
  CODE_FOR_add_implhihihi__noz_z1_z2 = 73,
  CODE_FOR_add_implhihihi__z_noz1_z2 = 74,
  CODE_FOR_add_implhisihi__z_z1_z2 = 75,
  CODE_FOR_add_implhisihi__z_z1_noz2 = 76,
  CODE_FOR_add_implsiqihi__z_z1_z2 = 77,
  CODE_FOR_add_implsihihi__z_z1_z2 = 78,
  CODE_FOR_add_implsisihi__z_z1_z2 = 79,
  CODE_FOR_add_implsisihi__z_noz1_z2 = 80,
  CODE_FOR_add_implqiqisi__z_z1_z2 = 81,
  CODE_FOR_add_implqiqisi__z_noz1_z2 = 82,
  CODE_FOR_add_implqihisi__z_z1_z2 = 83,
  CODE_FOR_add_implqisisi__z_z1_z2 = 84,
  CODE_FOR_add_implhiqisi__z_z1_z2 = 85,
  CODE_FOR_add_implhihisi__z_z1_z2 = 86,
  CODE_FOR_add_implhihisi__z_noz1_z2 = 87,
  CODE_FOR_add_implhisisi__z_z1_z2 = 88,
  CODE_FOR_add_implsiqisi__z_z1_z2 = 89,
  CODE_FOR_add_implsiqisi__z_z1_noz2 = 90,
  CODE_FOR_add_implsihisi__z_z1_z2 = 91,
  CODE_FOR_add_implsihisi__z_z1_noz2 = 92,
  CODE_FOR_add_implsisisi__z_z1_z2 = 93,
  CODE_FOR_add_implsisisi__z_z1_noz2 = 94,
  CODE_FOR_add_implsisisi__noz_z1_z2 = 95,
  CODE_FOR_add_implsisisi__z_noz1_z2 = 96,
  CODE_FOR_sub_implqiqiqi__z_z1_z2 = 97,
  CODE_FOR_sub_implqiqiqi__z_z1_noz2 = 98,
  CODE_FOR_sub_implqiqiqi__noz_z1_z2 = 99,
  CODE_FOR_sub_implqiqiqi__z_noz1_z2 = 100,
  CODE_FOR_sub_implqihiqi__z_z1_z2 = 101,
  CODE_FOR_sub_implqihiqi__z_z1_noz2 = 102,
  CODE_FOR_sub_implqisiqi__z_z1_z2 = 103,
  CODE_FOR_sub_implqisiqi__z_z1_noz2 = 104,
  CODE_FOR_sub_implhiqiqi__z_z1_z2 = 105,
  CODE_FOR_sub_implhihiqi__z_z1_z2 = 106,
  CODE_FOR_sub_implhihiqi__z_noz1_z2 = 107,
  CODE_FOR_sub_implhisiqi__z_z1_z2 = 108,
  CODE_FOR_sub_implsiqiqi__z_z1_z2 = 109,
  CODE_FOR_sub_implsihiqi__z_z1_z2 = 110,
  CODE_FOR_sub_implsisiqi__z_z1_z2 = 111,
  CODE_FOR_sub_implsisiqi__z_noz1_z2 = 112,
  CODE_FOR_sub_implqiqihi__z_z1_z2 = 113,
  CODE_FOR_sub_implqiqihi__z_noz1_z2 = 114,
  CODE_FOR_sub_implqihihi__z_z1_z2 = 115,
  CODE_FOR_sub_implqisihi__z_z1_z2 = 116,
  CODE_FOR_sub_implhiqihi__z_z1_z2 = 117,
  CODE_FOR_sub_implhiqihi__z_z1_noz2 = 118,
  CODE_FOR_sub_implhihihi__z_z1_z2 = 119,
  CODE_FOR_sub_implhihihi__z_z1_noz2 = 120,
  CODE_FOR_sub_implhihihi__noz_z1_z2 = 121,
  CODE_FOR_sub_implhihihi__z_noz1_z2 = 122,
  CODE_FOR_sub_implhisihi__z_z1_z2 = 123,
  CODE_FOR_sub_implhisihi__z_z1_noz2 = 124,
  CODE_FOR_sub_implsiqihi__z_z1_z2 = 125,
  CODE_FOR_sub_implsihihi__z_z1_z2 = 126,
  CODE_FOR_sub_implsisihi__z_z1_z2 = 127,
  CODE_FOR_sub_implsisihi__z_noz1_z2 = 128,
  CODE_FOR_sub_implqiqisi__z_z1_z2 = 129,
  CODE_FOR_sub_implqiqisi__z_noz1_z2 = 130,
  CODE_FOR_sub_implqihisi__z_z1_z2 = 131,
  CODE_FOR_sub_implqisisi__z_z1_z2 = 132,
  CODE_FOR_sub_implhiqisi__z_z1_z2 = 133,
  CODE_FOR_sub_implhihisi__z_z1_z2 = 134,
  CODE_FOR_sub_implhihisi__z_noz1_z2 = 135,
  CODE_FOR_sub_implhisisi__z_z1_z2 = 136,
  CODE_FOR_sub_implsiqisi__z_z1_z2 = 137,
  CODE_FOR_sub_implsiqisi__z_z1_noz2 = 138,
  CODE_FOR_sub_implsihisi__z_z1_z2 = 139,
  CODE_FOR_sub_implsihisi__z_z1_noz2 = 140,
  CODE_FOR_sub_implsisisi__z_z1_z2 = 141,
  CODE_FOR_sub_implsisisi__z_z1_noz2 = 142,
  CODE_FOR_sub_implsisisi__noz_z1_z2 = 143,
  CODE_FOR_sub_implsisisi__z_noz1_z2 = 144,
  CODE_FOR_neg_implqiqi__z = 145,
  CODE_FOR_neg_implqiqi__noz = 146,
  CODE_FOR_neg_implqihi__z = 147,
  CODE_FOR_neg_implqisi__z = 148,
  CODE_FOR_neg_implhiqi__z = 149,
  CODE_FOR_neg_implhihi__z = 150,
  CODE_FOR_neg_implhihi__noz = 151,
  CODE_FOR_neg_implhisi__z = 152,
  CODE_FOR_neg_implsiqi__z = 153,
  CODE_FOR_neg_implsihi__z = 154,
  CODE_FOR_neg_implsisi__z = 155,
  CODE_FOR_neg_implsisi__noz = 156,
  CODE_FOR_one_cmpl_implqiqi__z = 157,
  CODE_FOR_one_cmpl_implqiqi__noz = 158,
  CODE_FOR_one_cmpl_implqihi__z = 159,
  CODE_FOR_one_cmpl_implqisi__z = 160,
  CODE_FOR_one_cmpl_implhiqi__z = 161,
  CODE_FOR_one_cmpl_implhihi__z = 162,
  CODE_FOR_one_cmpl_implhihi__noz = 163,
  CODE_FOR_one_cmpl_implhisi__z = 164,
  CODE_FOR_one_cmpl_implsiqi__z = 165,
  CODE_FOR_one_cmpl_implsihi__z = 166,
  CODE_FOR_one_cmpl_implsisi__z = 167,
  CODE_FOR_one_cmpl_implsisi__noz = 168,
  CODE_FOR_clearbit_qiqi__z = 169,
  CODE_FOR_clearbit_qiqi__noz = 170,
  CODE_FOR_clearbit_qihi__z = 171,
  CODE_FOR_clearbit_qisi__z = 172,
  CODE_FOR_clearbit_hiqi__z = 173,
  CODE_FOR_clearbit_hihi__z = 174,
  CODE_FOR_clearbit_hihi__noz = 175,
  CODE_FOR_clearbit_hisi__z = 176,
  CODE_FOR_clearbit_siqi__z = 177,
  CODE_FOR_clearbit_sihi__z = 178,
  CODE_FOR_clearbit_sisi__z = 179,
  CODE_FOR_clearbit_sisi__noz = 180,
  CODE_FOR_setbit_qiqi__z = 181,
  CODE_FOR_setbit_qiqi__noz = 182,
  CODE_FOR_setbit_qihi__z = 183,
  CODE_FOR_setbit_qisi__z = 184,
  CODE_FOR_setbit_hiqi__z = 185,
  CODE_FOR_setbit_hihi__z = 186,
  CODE_FOR_setbit_hihi__noz = 187,
  CODE_FOR_setbit_hisi__z = 188,
  CODE_FOR_setbit_siqi__z = 189,
  CODE_FOR_setbit_sihi__z = 190,
  CODE_FOR_setbit_sisi__z = 191,
  CODE_FOR_setbit_sisi__noz = 192,
  CODE_FOR_and_implqiqiqi__z_z1_z2 = 193,
  CODE_FOR_and_implqiqiqi__z_z1_noz2 = 194,
  CODE_FOR_and_implqiqiqi__noz_z1_z2 = 195,
  CODE_FOR_and_implqiqiqi__z_noz1_z2 = 196,
  CODE_FOR_ior_implqiqiqi__z_z1_z2 = 197,
  CODE_FOR_ior_implqiqiqi__z_z1_noz2 = 198,
  CODE_FOR_ior_implqiqiqi__noz_z1_z2 = 199,
  CODE_FOR_ior_implqiqiqi__z_noz1_z2 = 200,
  CODE_FOR_xor_implqiqiqi__z_z1_z2 = 201,
  CODE_FOR_xor_implqiqiqi__z_z1_noz2 = 202,
  CODE_FOR_xor_implqiqiqi__noz_z1_z2 = 203,
  CODE_FOR_xor_implqiqiqi__z_noz1_z2 = 204,
  CODE_FOR_umin_implqiqiqi__z_z1_z2 = 205,
  CODE_FOR_umin_implqiqiqi__z_z1_noz2 = 206,
  CODE_FOR_umin_implqiqiqi__noz_z1_z2 = 207,
  CODE_FOR_umin_implqiqiqi__z_noz1_z2 = 208,
  CODE_FOR_umax_implqiqiqi__z_z1_z2 = 209,
  CODE_FOR_umax_implqiqiqi__z_z1_noz2 = 210,
  CODE_FOR_umax_implqiqiqi__noz_z1_z2 = 211,
  CODE_FOR_umax_implqiqiqi__z_noz1_z2 = 212,
  CODE_FOR_and_implqihiqi__z_z1_z2 = 213,
  CODE_FOR_and_implqihiqi__z_z1_noz2 = 214,
  CODE_FOR_ior_implqihiqi__z_z1_z2 = 215,
  CODE_FOR_ior_implqihiqi__z_z1_noz2 = 216,
  CODE_FOR_xor_implqihiqi__z_z1_z2 = 217,
  CODE_FOR_xor_implqihiqi__z_z1_noz2 = 218,
  CODE_FOR_umin_implqihiqi__z_z1_z2 = 219,
  CODE_FOR_umin_implqihiqi__z_z1_noz2 = 220,
  CODE_FOR_umax_implqihiqi__z_z1_z2 = 221,
  CODE_FOR_umax_implqihiqi__z_z1_noz2 = 222,
  CODE_FOR_and_implqisiqi__z_z1_z2 = 223,
  CODE_FOR_and_implqisiqi__z_z1_noz2 = 224,
  CODE_FOR_ior_implqisiqi__z_z1_z2 = 225,
  CODE_FOR_ior_implqisiqi__z_z1_noz2 = 226,
  CODE_FOR_xor_implqisiqi__z_z1_z2 = 227,
  CODE_FOR_xor_implqisiqi__z_z1_noz2 = 228,
  CODE_FOR_umin_implqisiqi__z_z1_z2 = 229,
  CODE_FOR_umin_implqisiqi__z_z1_noz2 = 230,
  CODE_FOR_umax_implqisiqi__z_z1_z2 = 231,
  CODE_FOR_umax_implqisiqi__z_z1_noz2 = 232,
  CODE_FOR_and_implhiqiqi__z_z1_z2 = 233,
  CODE_FOR_ior_implhiqiqi__z_z1_z2 = 234,
  CODE_FOR_xor_implhiqiqi__z_z1_z2 = 235,
  CODE_FOR_umin_implhiqiqi__z_z1_z2 = 236,
  CODE_FOR_umax_implhiqiqi__z_z1_z2 = 237,
  CODE_FOR_and_implhihiqi__z_z1_z2 = 238,
  CODE_FOR_and_implhihiqi__z_noz1_z2 = 239,
  CODE_FOR_ior_implhihiqi__z_z1_z2 = 240,
  CODE_FOR_ior_implhihiqi__z_noz1_z2 = 241,
  CODE_FOR_xor_implhihiqi__z_z1_z2 = 242,
  CODE_FOR_xor_implhihiqi__z_noz1_z2 = 243,
  CODE_FOR_umin_implhihiqi__z_z1_z2 = 244,
  CODE_FOR_umin_implhihiqi__z_noz1_z2 = 245,
  CODE_FOR_umax_implhihiqi__z_z1_z2 = 246,
  CODE_FOR_umax_implhihiqi__z_noz1_z2 = 247,
  CODE_FOR_and_implhisiqi__z_z1_z2 = 248,
  CODE_FOR_ior_implhisiqi__z_z1_z2 = 249,
  CODE_FOR_xor_implhisiqi__z_z1_z2 = 250,
  CODE_FOR_umin_implhisiqi__z_z1_z2 = 251,
  CODE_FOR_umax_implhisiqi__z_z1_z2 = 252,
  CODE_FOR_and_implsiqiqi__z_z1_z2 = 253,
  CODE_FOR_ior_implsiqiqi__z_z1_z2 = 254,
  CODE_FOR_xor_implsiqiqi__z_z1_z2 = 255,
  CODE_FOR_umin_implsiqiqi__z_z1_z2 = 256,
  CODE_FOR_umax_implsiqiqi__z_z1_z2 = 257,
  CODE_FOR_and_implsihiqi__z_z1_z2 = 258,
  CODE_FOR_ior_implsihiqi__z_z1_z2 = 259,
  CODE_FOR_xor_implsihiqi__z_z1_z2 = 260,
  CODE_FOR_umin_implsihiqi__z_z1_z2 = 261,
  CODE_FOR_umax_implsihiqi__z_z1_z2 = 262,
  CODE_FOR_and_implsisiqi__z_z1_z2 = 263,
  CODE_FOR_and_implsisiqi__z_noz1_z2 = 264,
  CODE_FOR_ior_implsisiqi__z_z1_z2 = 265,
  CODE_FOR_ior_implsisiqi__z_noz1_z2 = 266,
  CODE_FOR_xor_implsisiqi__z_z1_z2 = 267,
  CODE_FOR_xor_implsisiqi__z_noz1_z2 = 268,
  CODE_FOR_umin_implsisiqi__z_z1_z2 = 269,
  CODE_FOR_umin_implsisiqi__z_noz1_z2 = 270,
  CODE_FOR_umax_implsisiqi__z_z1_z2 = 271,
  CODE_FOR_umax_implsisiqi__z_noz1_z2 = 272,
  CODE_FOR_and_implqiqihi__z_z1_z2 = 273,
  CODE_FOR_and_implqiqihi__z_noz1_z2 = 274,
  CODE_FOR_ior_implqiqihi__z_z1_z2 = 275,
  CODE_FOR_ior_implqiqihi__z_noz1_z2 = 276,
  CODE_FOR_xor_implqiqihi__z_z1_z2 = 277,
  CODE_FOR_xor_implqiqihi__z_noz1_z2 = 278,
  CODE_FOR_umin_implqiqihi__z_z1_z2 = 279,
  CODE_FOR_umin_implqiqihi__z_noz1_z2 = 280,
  CODE_FOR_umax_implqiqihi__z_z1_z2 = 281,
  CODE_FOR_umax_implqiqihi__z_noz1_z2 = 282,
  CODE_FOR_and_implqihihi__z_z1_z2 = 283,
  CODE_FOR_ior_implqihihi__z_z1_z2 = 284,
  CODE_FOR_xor_implqihihi__z_z1_z2 = 285,
  CODE_FOR_umin_implqihihi__z_z1_z2 = 286,
  CODE_FOR_umax_implqihihi__z_z1_z2 = 287,
  CODE_FOR_and_implqisihi__z_z1_z2 = 288,
  CODE_FOR_ior_implqisihi__z_z1_z2 = 289,
  CODE_FOR_xor_implqisihi__z_z1_z2 = 290,
  CODE_FOR_umin_implqisihi__z_z1_z2 = 291,
  CODE_FOR_umax_implqisihi__z_z1_z2 = 292,
  CODE_FOR_and_implhiqihi__z_z1_z2 = 293,
  CODE_FOR_and_implhiqihi__z_z1_noz2 = 294,
  CODE_FOR_ior_implhiqihi__z_z1_z2 = 295,
  CODE_FOR_ior_implhiqihi__z_z1_noz2 = 296,
  CODE_FOR_xor_implhiqihi__z_z1_z2 = 297,
  CODE_FOR_xor_implhiqihi__z_z1_noz2 = 298,
  CODE_FOR_umin_implhiqihi__z_z1_z2 = 299,
  CODE_FOR_umin_implhiqihi__z_z1_noz2 = 300,
  CODE_FOR_umax_implhiqihi__z_z1_z2 = 301,
  CODE_FOR_umax_implhiqihi__z_z1_noz2 = 302,
  CODE_FOR_and_implhihihi__z_z1_z2 = 303,
  CODE_FOR_and_implhihihi__z_z1_noz2 = 304,
  CODE_FOR_and_implhihihi__noz_z1_z2 = 305,
  CODE_FOR_and_implhihihi__z_noz1_z2 = 306,
  CODE_FOR_ior_implhihihi__z_z1_z2 = 307,
  CODE_FOR_ior_implhihihi__z_z1_noz2 = 308,
  CODE_FOR_ior_implhihihi__noz_z1_z2 = 309,
  CODE_FOR_ior_implhihihi__z_noz1_z2 = 310,
  CODE_FOR_xor_implhihihi__z_z1_z2 = 311,
  CODE_FOR_xor_implhihihi__z_z1_noz2 = 312,
  CODE_FOR_xor_implhihihi__noz_z1_z2 = 313,
  CODE_FOR_xor_implhihihi__z_noz1_z2 = 314,
  CODE_FOR_umin_implhihihi__z_z1_z2 = 315,
  CODE_FOR_umin_implhihihi__z_z1_noz2 = 316,
  CODE_FOR_umin_implhihihi__noz_z1_z2 = 317,
  CODE_FOR_umin_implhihihi__z_noz1_z2 = 318,
  CODE_FOR_umax_implhihihi__z_z1_z2 = 319,
  CODE_FOR_umax_implhihihi__z_z1_noz2 = 320,
  CODE_FOR_umax_implhihihi__noz_z1_z2 = 321,
  CODE_FOR_umax_implhihihi__z_noz1_z2 = 322,
  CODE_FOR_and_implhisihi__z_z1_z2 = 323,
  CODE_FOR_and_implhisihi__z_z1_noz2 = 324,
  CODE_FOR_ior_implhisihi__z_z1_z2 = 325,
  CODE_FOR_ior_implhisihi__z_z1_noz2 = 326,
  CODE_FOR_xor_implhisihi__z_z1_z2 = 327,
  CODE_FOR_xor_implhisihi__z_z1_noz2 = 328,
  CODE_FOR_umin_implhisihi__z_z1_z2 = 329,
  CODE_FOR_umin_implhisihi__z_z1_noz2 = 330,
  CODE_FOR_umax_implhisihi__z_z1_z2 = 331,
  CODE_FOR_umax_implhisihi__z_z1_noz2 = 332,
  CODE_FOR_and_implsiqihi__z_z1_z2 = 333,
  CODE_FOR_ior_implsiqihi__z_z1_z2 = 334,
  CODE_FOR_xor_implsiqihi__z_z1_z2 = 335,
  CODE_FOR_umin_implsiqihi__z_z1_z2 = 336,
  CODE_FOR_umax_implsiqihi__z_z1_z2 = 337,
  CODE_FOR_and_implsihihi__z_z1_z2 = 338,
  CODE_FOR_ior_implsihihi__z_z1_z2 = 339,
  CODE_FOR_xor_implsihihi__z_z1_z2 = 340,
  CODE_FOR_umin_implsihihi__z_z1_z2 = 341,
  CODE_FOR_umax_implsihihi__z_z1_z2 = 342,
  CODE_FOR_and_implsisihi__z_z1_z2 = 343,
  CODE_FOR_and_implsisihi__z_noz1_z2 = 344,
  CODE_FOR_ior_implsisihi__z_z1_z2 = 345,
  CODE_FOR_ior_implsisihi__z_noz1_z2 = 346,
  CODE_FOR_xor_implsisihi__z_z1_z2 = 347,
  CODE_FOR_xor_implsisihi__z_noz1_z2 = 348,
  CODE_FOR_umin_implsisihi__z_z1_z2 = 349,
  CODE_FOR_umin_implsisihi__z_noz1_z2 = 350,
  CODE_FOR_umax_implsisihi__z_z1_z2 = 351,
  CODE_FOR_umax_implsisihi__z_noz1_z2 = 352,
  CODE_FOR_and_implqiqisi__z_z1_z2 = 353,
  CODE_FOR_and_implqiqisi__z_noz1_z2 = 354,
  CODE_FOR_ior_implqiqisi__z_z1_z2 = 355,
  CODE_FOR_ior_implqiqisi__z_noz1_z2 = 356,
  CODE_FOR_xor_implqiqisi__z_z1_z2 = 357,
  CODE_FOR_xor_implqiqisi__z_noz1_z2 = 358,
  CODE_FOR_umin_implqiqisi__z_z1_z2 = 359,
  CODE_FOR_umin_implqiqisi__z_noz1_z2 = 360,
  CODE_FOR_umax_implqiqisi__z_z1_z2 = 361,
  CODE_FOR_umax_implqiqisi__z_noz1_z2 = 362,
  CODE_FOR_and_implqihisi__z_z1_z2 = 363,
  CODE_FOR_ior_implqihisi__z_z1_z2 = 364,
  CODE_FOR_xor_implqihisi__z_z1_z2 = 365,
  CODE_FOR_umin_implqihisi__z_z1_z2 = 366,
  CODE_FOR_umax_implqihisi__z_z1_z2 = 367,
  CODE_FOR_and_implqisisi__z_z1_z2 = 368,
  CODE_FOR_ior_implqisisi__z_z1_z2 = 369,
  CODE_FOR_xor_implqisisi__z_z1_z2 = 370,
  CODE_FOR_umin_implqisisi__z_z1_z2 = 371,
  CODE_FOR_umax_implqisisi__z_z1_z2 = 372,
  CODE_FOR_and_implhiqisi__z_z1_z2 = 373,
  CODE_FOR_ior_implhiqisi__z_z1_z2 = 374,
  CODE_FOR_xor_implhiqisi__z_z1_z2 = 375,
  CODE_FOR_umin_implhiqisi__z_z1_z2 = 376,
  CODE_FOR_umax_implhiqisi__z_z1_z2 = 377,
  CODE_FOR_and_implhihisi__z_z1_z2 = 378,
  CODE_FOR_and_implhihisi__z_noz1_z2 = 379,
  CODE_FOR_ior_implhihisi__z_z1_z2 = 380,
  CODE_FOR_ior_implhihisi__z_noz1_z2 = 381,
  CODE_FOR_xor_implhihisi__z_z1_z2 = 382,
  CODE_FOR_xor_implhihisi__z_noz1_z2 = 383,
  CODE_FOR_umin_implhihisi__z_z1_z2 = 384,
  CODE_FOR_umin_implhihisi__z_noz1_z2 = 385,
  CODE_FOR_umax_implhihisi__z_z1_z2 = 386,
  CODE_FOR_umax_implhihisi__z_noz1_z2 = 387,
  CODE_FOR_and_implhisisi__z_z1_z2 = 388,
  CODE_FOR_ior_implhisisi__z_z1_z2 = 389,
  CODE_FOR_xor_implhisisi__z_z1_z2 = 390,
  CODE_FOR_umin_implhisisi__z_z1_z2 = 391,
  CODE_FOR_umax_implhisisi__z_z1_z2 = 392,
  CODE_FOR_and_implsiqisi__z_z1_z2 = 393,
  CODE_FOR_and_implsiqisi__z_z1_noz2 = 394,
  CODE_FOR_ior_implsiqisi__z_z1_z2 = 395,
  CODE_FOR_ior_implsiqisi__z_z1_noz2 = 396,
  CODE_FOR_xor_implsiqisi__z_z1_z2 = 397,
  CODE_FOR_xor_implsiqisi__z_z1_noz2 = 398,
  CODE_FOR_umin_implsiqisi__z_z1_z2 = 399,
  CODE_FOR_umin_implsiqisi__z_z1_noz2 = 400,
  CODE_FOR_umax_implsiqisi__z_z1_z2 = 401,
  CODE_FOR_umax_implsiqisi__z_z1_noz2 = 402,
  CODE_FOR_and_implsihisi__z_z1_z2 = 403,
  CODE_FOR_and_implsihisi__z_z1_noz2 = 404,
  CODE_FOR_ior_implsihisi__z_z1_z2 = 405,
  CODE_FOR_ior_implsihisi__z_z1_noz2 = 406,
  CODE_FOR_xor_implsihisi__z_z1_z2 = 407,
  CODE_FOR_xor_implsihisi__z_z1_noz2 = 408,
  CODE_FOR_umin_implsihisi__z_z1_z2 = 409,
  CODE_FOR_umin_implsihisi__z_z1_noz2 = 410,
  CODE_FOR_umax_implsihisi__z_z1_z2 = 411,
  CODE_FOR_umax_implsihisi__z_z1_noz2 = 412,
  CODE_FOR_and_implsisisi__z_z1_z2 = 413,
  CODE_FOR_and_implsisisi__z_z1_noz2 = 414,
  CODE_FOR_and_implsisisi__noz_z1_z2 = 415,
  CODE_FOR_and_implsisisi__z_noz1_z2 = 416,
  CODE_FOR_ior_implsisisi__z_z1_z2 = 417,
  CODE_FOR_ior_implsisisi__z_z1_noz2 = 418,
  CODE_FOR_ior_implsisisi__noz_z1_z2 = 419,
  CODE_FOR_ior_implsisisi__z_noz1_z2 = 420,
  CODE_FOR_xor_implsisisi__z_z1_z2 = 421,
  CODE_FOR_xor_implsisisi__z_z1_noz2 = 422,
  CODE_FOR_xor_implsisisi__noz_z1_z2 = 423,
  CODE_FOR_xor_implsisisi__z_noz1_z2 = 424,
  CODE_FOR_umin_implsisisi__z_z1_z2 = 425,
  CODE_FOR_umin_implsisisi__z_z1_noz2 = 426,
  CODE_FOR_umin_implsisisi__noz_z1_z2 = 427,
  CODE_FOR_umin_implsisisi__z_noz1_z2 = 428,
  CODE_FOR_umax_implsisisi__z_z1_z2 = 429,
  CODE_FOR_umax_implsisisi__z_z1_noz2 = 430,
  CODE_FOR_umax_implsisisi__noz_z1_z2 = 431,
  CODE_FOR_umax_implsisisi__z_noz1_z2 = 432,
  CODE_FOR_ashl_implqiqiqi__z_z1_z2 = 433,
  CODE_FOR_ashl_implqiqiqi__z_z1_noz2 = 434,
  CODE_FOR_ashl_implqiqiqi__noz_z1_z2 = 435,
  CODE_FOR_ashl_implqiqiqi__z_noz1_z2 = 436,
  CODE_FOR_lshr_implqiqiqi__z_z1_z2 = 437,
  CODE_FOR_lshr_implqiqiqi__z_z1_noz2 = 438,
  CODE_FOR_lshr_implqiqiqi__noz_z1_z2 = 439,
  CODE_FOR_lshr_implqiqiqi__z_noz1_z2 = 440,
  CODE_FOR_ashl_implqihiqi__z_z1_z2 = 441,
  CODE_FOR_ashl_implqihiqi__z_z1_noz2 = 442,
  CODE_FOR_lshr_implqihiqi__z_z1_z2 = 443,
  CODE_FOR_lshr_implqihiqi__z_z1_noz2 = 444,
  CODE_FOR_ashl_implqisiqi__z_z1_z2 = 445,
  CODE_FOR_ashl_implqisiqi__z_z1_noz2 = 446,
  CODE_FOR_lshr_implqisiqi__z_z1_z2 = 447,
  CODE_FOR_lshr_implqisiqi__z_z1_noz2 = 448,
  CODE_FOR_ashl_implhiqiqi__z_z1_z2 = 449,
  CODE_FOR_lshr_implhiqiqi__z_z1_z2 = 450,
  CODE_FOR_ashl_implhihiqi__z_z1_z2 = 451,
  CODE_FOR_ashl_implhihiqi__z_noz1_z2 = 452,
  CODE_FOR_lshr_implhihiqi__z_z1_z2 = 453,
  CODE_FOR_lshr_implhihiqi__z_noz1_z2 = 454,
  CODE_FOR_ashl_implhisiqi__z_z1_z2 = 455,
  CODE_FOR_lshr_implhisiqi__z_z1_z2 = 456,
  CODE_FOR_ashl_implsiqiqi__z_z1_z2 = 457,
  CODE_FOR_lshr_implsiqiqi__z_z1_z2 = 458,
  CODE_FOR_ashl_implsihiqi__z_z1_z2 = 459,
  CODE_FOR_lshr_implsihiqi__z_z1_z2 = 460,
  CODE_FOR_ashl_implsisiqi__z_z1_z2 = 461,
  CODE_FOR_ashl_implsisiqi__z_noz1_z2 = 462,
  CODE_FOR_lshr_implsisiqi__z_z1_z2 = 463,
  CODE_FOR_lshr_implsisiqi__z_noz1_z2 = 464,
  CODE_FOR_ashl_implqiqihi__z_z1_z2 = 465,
  CODE_FOR_ashl_implqiqihi__z_noz1_z2 = 466,
  CODE_FOR_lshr_implqiqihi__z_z1_z2 = 467,
  CODE_FOR_lshr_implqiqihi__z_noz1_z2 = 468,
  CODE_FOR_ashl_implqihihi__z_z1_z2 = 469,
  CODE_FOR_lshr_implqihihi__z_z1_z2 = 470,
  CODE_FOR_ashl_implqisihi__z_z1_z2 = 471,
  CODE_FOR_lshr_implqisihi__z_z1_z2 = 472,
  CODE_FOR_ashl_implhiqihi__z_z1_z2 = 473,
  CODE_FOR_ashl_implhiqihi__z_z1_noz2 = 474,
  CODE_FOR_lshr_implhiqihi__z_z1_z2 = 475,
  CODE_FOR_lshr_implhiqihi__z_z1_noz2 = 476,
  CODE_FOR_ashl_implhihihi__z_z1_z2 = 477,
  CODE_FOR_ashl_implhihihi__z_z1_noz2 = 478,
  CODE_FOR_ashl_implhihihi__noz_z1_z2 = 479,
  CODE_FOR_ashl_implhihihi__z_noz1_z2 = 480,
  CODE_FOR_lshr_implhihihi__z_z1_z2 = 481,
  CODE_FOR_lshr_implhihihi__z_z1_noz2 = 482,
  CODE_FOR_lshr_implhihihi__noz_z1_z2 = 483,
  CODE_FOR_lshr_implhihihi__z_noz1_z2 = 484,
  CODE_FOR_ashl_implhisihi__z_z1_z2 = 485,
  CODE_FOR_ashl_implhisihi__z_z1_noz2 = 486,
  CODE_FOR_lshr_implhisihi__z_z1_z2 = 487,
  CODE_FOR_lshr_implhisihi__z_z1_noz2 = 488,
  CODE_FOR_ashl_implsiqihi__z_z1_z2 = 489,
  CODE_FOR_lshr_implsiqihi__z_z1_z2 = 490,
  CODE_FOR_ashl_implsihihi__z_z1_z2 = 491,
  CODE_FOR_lshr_implsihihi__z_z1_z2 = 492,
  CODE_FOR_ashl_implsisihi__z_z1_z2 = 493,
  CODE_FOR_ashl_implsisihi__z_noz1_z2 = 494,
  CODE_FOR_lshr_implsisihi__z_z1_z2 = 495,
  CODE_FOR_lshr_implsisihi__z_noz1_z2 = 496,
  CODE_FOR_ashl_implqiqisi__z_z1_z2 = 497,
  CODE_FOR_ashl_implqiqisi__z_noz1_z2 = 498,
  CODE_FOR_lshr_implqiqisi__z_z1_z2 = 499,
  CODE_FOR_lshr_implqiqisi__z_noz1_z2 = 500,
  CODE_FOR_ashl_implqihisi__z_z1_z2 = 501,
  CODE_FOR_lshr_implqihisi__z_z1_z2 = 502,
  CODE_FOR_ashl_implqisisi__z_z1_z2 = 503,
  CODE_FOR_lshr_implqisisi__z_z1_z2 = 504,
  CODE_FOR_ashl_implhiqisi__z_z1_z2 = 505,
  CODE_FOR_lshr_implhiqisi__z_z1_z2 = 506,
  CODE_FOR_ashl_implhihisi__z_z1_z2 = 507,
  CODE_FOR_ashl_implhihisi__z_noz1_z2 = 508,
  CODE_FOR_lshr_implhihisi__z_z1_z2 = 509,
  CODE_FOR_lshr_implhihisi__z_noz1_z2 = 510,
  CODE_FOR_ashl_implhisisi__z_z1_z2 = 511,
  CODE_FOR_lshr_implhisisi__z_z1_z2 = 512,
  CODE_FOR_ashl_implsiqisi__z_z1_z2 = 513,
  CODE_FOR_ashl_implsiqisi__z_z1_noz2 = 514,
  CODE_FOR_lshr_implsiqisi__z_z1_z2 = 515,
  CODE_FOR_lshr_implsiqisi__z_z1_noz2 = 516,
  CODE_FOR_ashl_implsihisi__z_z1_z2 = 517,
  CODE_FOR_ashl_implsihisi__z_z1_noz2 = 518,
  CODE_FOR_lshr_implsihisi__z_z1_z2 = 519,
  CODE_FOR_lshr_implsihisi__z_z1_noz2 = 520,
  CODE_FOR_ashl_implsisisi__z_z1_z2 = 521,
  CODE_FOR_ashl_implsisisi__z_z1_noz2 = 522,
  CODE_FOR_ashl_implsisisi__noz_z1_z2 = 523,
  CODE_FOR_ashl_implsisisi__z_noz1_z2 = 524,
  CODE_FOR_lshr_implsisisi__z_z1_z2 = 525,
  CODE_FOR_lshr_implsisisi__z_z1_noz2 = 526,
  CODE_FOR_lshr_implsisisi__noz_z1_z2 = 527,
  CODE_FOR_lshr_implsisisi__z_noz1_z2 = 528,
  CODE_FOR_anddi3 = 529,
  CODE_FOR_iordi3 = 530,
  CODE_FOR_xordi3 = 531,
  CODE_FOR_one_cmpldi2 = 532,
  CODE_FOR_mulsi3 = 533,
  CODE_FOR_return = 534,
  CODE_FOR_simple_return = 535,
  CODE_FOR_blockage = 536,
  CODE_FOR_indirect_jump = 537,
  CODE_FOR_jump = 538,
  CODE_FOR_cbranchqi4_unsigned = 544,
  CODE_FOR_cbranchhi4_unsigned = 545,
  CODE_FOR_cbranchsi4_unsigned = 546,
  CODE_FOR_cbranchqi4_signed = 547,
  CODE_FOR_cbranchhi4_signed = 548,
  CODE_FOR_cbranchsi4_signed = 549,
  CODE_FOR_cbranch_qbbx_eqqiqiqi4 = 550,
  CODE_FOR_cbranch_qbbx_neqiqiqi4 = 551,
  CODE_FOR_cbranch_qbbx_eqhiqiqi4 = 552,
  CODE_FOR_cbranch_qbbx_nehiqiqi4 = 553,
  CODE_FOR_cbranch_qbbx_eqsiqiqi4 = 554,
  CODE_FOR_cbranch_qbbx_nesiqiqi4 = 555,
  CODE_FOR_cbranch_qbbx_eqqiqihi4 = 556,
  CODE_FOR_cbranch_qbbx_neqiqihi4 = 557,
  CODE_FOR_cbranch_qbbx_eqhiqihi4 = 558,
  CODE_FOR_cbranch_qbbx_nehiqihi4 = 559,
  CODE_FOR_cbranch_qbbx_eqsiqihi4 = 560,
  CODE_FOR_cbranch_qbbx_nesiqihi4 = 561,
  CODE_FOR_cbranch_qbbx_eqqiqisi4 = 562,
  CODE_FOR_cbranch_qbbx_neqiqisi4 = 563,
  CODE_FOR_cbranch_qbbx_eqhiqisi4 = 564,
  CODE_FOR_cbranch_qbbx_nehiqisi4 = 565,
  CODE_FOR_cbranch_qbbx_eqsiqisi4 = 566,
  CODE_FOR_cbranch_qbbx_nesiqisi4 = 567,
  CODE_FOR_cbranch_qbbx_eqqihiqi4 = 568,
  CODE_FOR_cbranch_qbbx_neqihiqi4 = 569,
  CODE_FOR_cbranch_qbbx_eqhihiqi4 = 570,
  CODE_FOR_cbranch_qbbx_nehihiqi4 = 571,
  CODE_FOR_cbranch_qbbx_eqsihiqi4 = 572,
  CODE_FOR_cbranch_qbbx_nesihiqi4 = 573,
  CODE_FOR_cbranch_qbbx_eqqihihi4 = 574,
  CODE_FOR_cbranch_qbbx_neqihihi4 = 575,
  CODE_FOR_cbranch_qbbx_eqhihihi4 = 576,
  CODE_FOR_cbranch_qbbx_nehihihi4 = 577,
  CODE_FOR_cbranch_qbbx_eqsihihi4 = 578,
  CODE_FOR_cbranch_qbbx_nesihihi4 = 579,
  CODE_FOR_cbranch_qbbx_eqqihisi4 = 580,
  CODE_FOR_cbranch_qbbx_neqihisi4 = 581,
  CODE_FOR_cbranch_qbbx_eqhihisi4 = 582,
  CODE_FOR_cbranch_qbbx_nehihisi4 = 583,
  CODE_FOR_cbranch_qbbx_eqsihisi4 = 584,
  CODE_FOR_cbranch_qbbx_nesihisi4 = 585,
  CODE_FOR_cbranch_qbbx_eqqisiqi4 = 586,
  CODE_FOR_cbranch_qbbx_neqisiqi4 = 587,
  CODE_FOR_cbranch_qbbx_eqhisiqi4 = 588,
  CODE_FOR_cbranch_qbbx_nehisiqi4 = 589,
  CODE_FOR_cbranch_qbbx_eqsisiqi4 = 590,
  CODE_FOR_cbranch_qbbx_nesisiqi4 = 591,
  CODE_FOR_cbranch_qbbx_eqqisihi4 = 592,
  CODE_FOR_cbranch_qbbx_neqisihi4 = 593,
  CODE_FOR_cbranch_qbbx_eqhisihi4 = 594,
  CODE_FOR_cbranch_qbbx_nehisihi4 = 595,
  CODE_FOR_cbranch_qbbx_eqsisihi4 = 596,
  CODE_FOR_cbranch_qbbx_nesisihi4 = 597,
  CODE_FOR_cbranch_qbbx_eqqisisi4 = 598,
  CODE_FOR_cbranch_qbbx_neqisisi4 = 599,
  CODE_FOR_cbranch_qbbx_eqhisisi4 = 600,
  CODE_FOR_cbranch_qbbx_nehisisi4 = 601,
  CODE_FOR_cbranch_qbbx_eqsisisi4 = 602,
  CODE_FOR_cbranch_qbbx_nesisisi4 = 603,
  CODE_FOR_doloop_begin_internalhi = 604,
  CODE_FOR_doloop_begin_internalsi = 605,
  CODE_FOR_doloop_end_internalhi = 606,
  CODE_FOR_doloop_end_internalsi = 607,
  CODE_FOR_pruloophi = 608,
  CODE_FOR_pruloopsi = 609,
  CODE_FOR_pruloop_end = 610,
  CODE_FOR_delay_cycles_start = 611,
  CODE_FOR_delay_cycles_end = 612,
  CODE_FOR_delay_cycles_2x_plus1_hi = 613,
  CODE_FOR_delay_cycles_2x_plus2_si = 614,
  CODE_FOR_delay_cycles_1 = 615,
  CODE_FOR_nop = 616,
  CODE_FOR_nop_loop_guard = 617,
  CODE_FOR_movqi = 618,
  CODE_FOR_movqq = 619,
  CODE_FOR_movuqq = 620,
  CODE_FOR_movhi = 621,
  CODE_FOR_movhq = 622,
  CODE_FOR_movuhq = 623,
  CODE_FOR_movha = 624,
  CODE_FOR_movuha = 625,
  CODE_FOR_movsi = 626,
  CODE_FOR_movsq = 627,
  CODE_FOR_movusq = 628,
  CODE_FOR_movsa = 629,
  CODE_FOR_movusa = 630,
  CODE_FOR_movsf = 631,
  CODE_FOR_movsd = 632,
  CODE_FOR_load_multiple = 633,
  CODE_FOR_store_multiple = 634,
  CODE_FOR_zero_extendqiqi2 = 635,
  CODE_FOR_zero_extendhiqi2 = 636,
  CODE_FOR_zero_extendsiqi2 = 637,
  CODE_FOR_zero_extendqihi2 = 638,
  CODE_FOR_zero_extendhihi2 = 639,
  CODE_FOR_zero_extendsihi2 = 640,
  CODE_FOR_zero_extendqisi2 = 641,
  CODE_FOR_zero_extendhisi2 = 642,
  CODE_FOR_zero_extendsisi2 = 643,
  CODE_FOR_addqi3 = 644,
  CODE_FOR_addhi3 = 645,
  CODE_FOR_addsi3 = 646,
  CODE_FOR_subqi3 = 647,
  CODE_FOR_subhi3 = 648,
  CODE_FOR_subsi3 = 649,
  CODE_FOR_negqi2 = 650,
  CODE_FOR_neghi2 = 651,
  CODE_FOR_negsi2 = 652,
  CODE_FOR_one_cmplqi2 = 653,
  CODE_FOR_one_cmplhi2 = 654,
  CODE_FOR_one_cmplsi2 = 655,
  CODE_FOR_andqi3 = 656,
  CODE_FOR_iorqi3 = 657,
  CODE_FOR_xorqi3 = 658,
  CODE_FOR_uminqi3 = 659,
  CODE_FOR_umaxqi3 = 660,
  CODE_FOR_andhi3 = 661,
  CODE_FOR_iorhi3 = 662,
  CODE_FOR_xorhi3 = 663,
  CODE_FOR_uminhi3 = 664,
  CODE_FOR_umaxhi3 = 665,
  CODE_FOR_andsi3 = 666,
  CODE_FOR_iorsi3 = 667,
  CODE_FOR_xorsi3 = 668,
  CODE_FOR_uminsi3 = 669,
  CODE_FOR_umaxsi3 = 670,
  CODE_FOR_ashlqi3 = 671,
  CODE_FOR_lshrqi3 = 672,
  CODE_FOR_ashlhi3 = 673,
  CODE_FOR_lshrhi3 = 674,
  CODE_FOR_ashlsi3 = 675,
  CODE_FOR_lshrsi3 = 676,
  CODE_FOR_ashrqi3 = 677,
  CODE_FOR_ashrhi3 = 678,
  CODE_FOR_ashrsi3 = 679,
  CODE_FOR_prologue = 680,
  CODE_FOR_epilogue = 681,
  CODE_FOR_sibcall_epilogue = 682,
  CODE_FOR_call = 683,
  CODE_FOR_call_value = 684,
  CODE_FOR_sibcall = 685,
  CODE_FOR_sibcall_value = 686,
  CODE_FOR_cbranchqi4 = 687,
  CODE_FOR_cbranchhi4 = 688,
  CODE_FOR_cbranchsi4 = 689,
  CODE_FOR_cbranchsf4 = 690,
  CODE_FOR_cbranchdf4 = 691,
  CODE_FOR_doloop_begin = 692,
  CODE_FOR_doloop_end = 693
};

const unsigned int NUM_INSN_CODES = 694;
#endif /* GCC_INSN_CODES_H */
