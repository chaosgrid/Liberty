#pragma once

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

#ifdef __INTELLISENSE__ /* ffs Visual Studio is so slow */
#define LDATA
#else
#define LDATA __declspec(allocate("l_data")) __declspec(align(1))
#endif // __INTELLISENSE__

/* 0x0680d000 */ LDATA extern char public_680d000;
/* 0x0680d001 */ LDATA extern char public_680d001;
/* 0x0680d002 */ LDATA extern char public_680d002;
/* 0x0680d003 */ LDATA extern char public_680d003;
/* 0x0680d004 */ LDATA extern char public_680d004;
/* 0x0680d005 */ LDATA extern char public_680d005;
/* 0x0680d006 */ LDATA extern char public_680d006;
/* 0x0680d007 */ LDATA extern char public_680d007;
/* 0x0680d008 */ LDATA extern char public_680d008;
/* 0x0680d009 */ LDATA extern char public_680d009;
/* 0x0680d00a */ LDATA extern char public_680d00a;
/* 0x0680d00b */ LDATA extern char public_680d00b;
/* 0x0680d00c */ LDATA extern char public_680d00c;
/* 0x0680d00d */ LDATA extern char public_680d00d;
/* 0x0680d00e */ LDATA extern char public_680d00e;
/* 0x0680d00f */ LDATA extern char public_680d00f;
/* 0x0680d010 */ LDATA extern void const* public_680d010;
/* 0x0680d014 */ LDATA extern void const* public_680d014;
/* 0x0680d018 */ LDATA extern char public_680d018; // 'I'
/* 0x0680d019 */ LDATA extern char public_680d019; // 'L'
/* 0x0680d01a */ LDATA extern char public_680d01a; // 'u'
/* 0x0680d01b */ LDATA extern char public_680d01b; // 'a'
/* 0x0680d01c */ LDATA extern char public_680d01c;
/* 0x0680d01d */ LDATA extern char public_680d01d;
/* 0x0680d01e */ LDATA extern char public_680d01e;
/* 0x0680d01f */ LDATA extern char public_680d01f;
/* 0x0680d020 */ LDATA extern char public_680d020; // 'f'
/* 0x0680d021 */ LDATA extern char public_680d021; // 'u'
/* 0x0680d022 */ LDATA extern char public_680d022; // 'n'
/* 0x0680d023 */ LDATA extern char public_680d023; // 'c'
/* 0x0680d024 */ LDATA extern char public_680d024; // 't'
/* 0x0680d025 */ LDATA extern char public_680d025; // 'i'
/* 0x0680d026 */ LDATA extern char public_680d026; // 'o'
/* 0x0680d027 */ LDATA extern char public_680d027; // 'n'
/* 0x0680d028 */ LDATA extern char public_680d028; // ' '
/* 0x0680d029 */ LDATA extern char public_680d029; // '_'
/* 0x0680d02a */ LDATA extern char public_680d02a; // '_'
/* 0x0680d02b */ LDATA extern char public_680d02b; // 'g'
/* 0x0680d02c */ LDATA extern char public_680d02c; // 'e'
/* 0x0680d02d */ LDATA extern char public_680d02d; // 't'
/* 0x0680d02e */ LDATA extern char public_680d02e; // '_'
/* 0x0680d02f */ LDATA extern char public_680d02f; // 't'
/* 0x0680d030 */ LDATA extern char public_680d030; // 'a'
/* 0x0680d031 */ LDATA extern char public_680d031; // 'b'
/* 0x0680d032 */ LDATA extern char public_680d032; // 'l'
/* 0x0680d033 */ LDATA extern char public_680d033; // 'e'
/* 0x0680d034 */ LDATA extern char public_680d034; // '_'
/* 0x0680d035 */ LDATA extern char public_680d035; // 'l'
/* 0x0680d036 */ LDATA extern char public_680d036; // 'i'
/* 0x0680d037 */ LDATA extern char public_680d037; // 'n'
/* 0x0680d038 */ LDATA extern char public_680d038; // 'e'
/* 0x0680d039 */ LDATA extern char public_680d039; // ' '
/* 0x0680d03a */ LDATA extern char public_680d03a; // '('
/* 0x0680d03b */ LDATA extern char public_680d03b; // 't'
/* 0x0680d03c */ LDATA extern char public_680d03c; // 'a'
/* 0x0680d03d */ LDATA extern char public_680d03d; // 'b'
/* 0x0680d03e */ LDATA extern char public_680d03e; // 'l'
/* 0x0680d03f */ LDATA extern char public_680d03f; // 'e'
/* 0x0680d040 */ LDATA extern char public_680d040; // ','
/* 0x0680d041 */ LDATA extern char public_680d041; // ' '
/* 0x0680d042 */ LDATA extern char public_680d042; // 'i'
/* 0x0680d043 */ LDATA extern char public_680d043; // ')'
/* 0x0680d044 */ LDATA extern char public_680d044;
/* 0x0680d045 */ LDATA extern char public_680d045; // 'l'
/* 0x0680d046 */ LDATA extern char public_680d046; // 'o'
/* 0x0680d047 */ LDATA extern char public_680d047; // 'c'
/* 0x0680d048 */ LDATA extern char public_680d048; // 'a'
/* 0x0680d049 */ LDATA extern char public_680d049; // 'l'
/* 0x0680d04a */ LDATA extern char public_680d04a; // ' '
/* 0x0680d04b */ LDATA extern char public_680d04b; // 'n'
/* 0x0680d04c */ LDATA extern char public_680d04c; // ','
/* 0x0680d04d */ LDATA extern char public_680d04d; // ' '
/* 0x0680d04e */ LDATA extern char public_680d04e; // 'v'
/* 0x0680d04f */ LDATA extern char public_680d04f; // ' '
/* 0x0680d050 */ LDATA extern char public_680d050; // '='
/* 0x0680d051 */ LDATA extern char public_680d051; // ' '
/* 0x0680d052 */ LDATA extern char public_680d052; // 'n'
/* 0x0680d053 */ LDATA extern char public_680d053; // 'e'
/* 0x0680d054 */ LDATA extern char public_680d054; // 'x'
/* 0x0680d055 */ LDATA extern char public_680d055; // 't'
/* 0x0680d056 */ LDATA extern char public_680d056; // '('
/* 0x0680d057 */ LDATA extern char public_680d057; // 't'
/* 0x0680d058 */ LDATA extern char public_680d058; // 'a'
/* 0x0680d059 */ LDATA extern char public_680d059; // 'b'
/* 0x0680d05a */ LDATA extern char public_680d05a; // 'l'
/* 0x0680d05b */ LDATA extern char public_680d05b; // 'e'
/* 0x0680d05c */ LDATA extern char public_680d05c; // ','
/* 0x0680d05d */ LDATA extern char public_680d05d; // ' '
/* 0x0680d05e */ LDATA extern char public_680d05e; // 'n'
/* 0x0680d05f */ LDATA extern char public_680d05f; // 'i'
/* 0x0680d060 */ LDATA extern char public_680d060; // 'l'
/* 0x0680d061 */ LDATA extern char public_680d061; // ')'
/* 0x0680d062 */ LDATA extern char public_680d062;
/* 0x0680d063 */ LDATA extern char public_680d063; // 'w'
/* 0x0680d064 */ LDATA extern char public_680d064; // 'h'
/* 0x0680d065 */ LDATA extern char public_680d065; // 'i'
/* 0x0680d066 */ LDATA extern char public_680d066; // 'l'
/* 0x0680d067 */ LDATA extern char public_680d067; // 'e'
/* 0x0680d068 */ LDATA extern char public_680d068; // ' '
/* 0x0680d069 */ LDATA extern char public_680d069; // 'n'
/* 0x0680d06a */ LDATA extern char public_680d06a; // ' '
/* 0x0680d06b */ LDATA extern char public_680d06b; // 'd'
/* 0x0680d06c */ LDATA extern char public_680d06c; // 'o'
/* 0x0680d06d */ LDATA extern char public_680d06d;
/* 0x0680d06e */ LDATA extern char public_680d06e;
/* 0x0680d06f */ LDATA extern char public_680d06f; // 'l'
/* 0x0680d070 */ LDATA extern char public_680d070; // 'o'
/* 0x0680d071 */ LDATA extern char public_680d071; // 'c'
/* 0x0680d072 */ LDATA extern char public_680d072; // 'a'
/* 0x0680d073 */ LDATA extern char public_680d073; // 'l'
/* 0x0680d074 */ LDATA extern char public_680d074; // ' '
/* 0x0680d075 */ LDATA extern char public_680d075; // 't'
/* 0x0680d076 */ LDATA extern char public_680d076; // ' '
/* 0x0680d077 */ LDATA extern char public_680d077; // '='
/* 0x0680d078 */ LDATA extern char public_680d078; // ' '
/* 0x0680d079 */ LDATA extern char public_680d079; // 't'
/* 0x0680d07a */ LDATA extern char public_680d07a; // 'y'
/* 0x0680d07b */ LDATA extern char public_680d07b; // 'p'
/* 0x0680d07c */ LDATA extern char public_680d07c; // 'e'
/* 0x0680d07d */ LDATA extern char public_680d07d; // '('
/* 0x0680d07e */ LDATA extern char public_680d07e; // 'v'
/* 0x0680d07f */ LDATA extern char public_680d07f; // ')'
/* 0x0680d080 */ LDATA extern char public_680d080; // ';'
/* 0x0680d081 */ LDATA extern char public_680d081;
/* 0x0680d082 */ LDATA extern char public_680d082;
/* 0x0680d083 */ LDATA extern char public_680d083; // 'i'
/* 0x0680d084 */ LDATA extern char public_680d084; // 'f'
/* 0x0680d085 */ LDATA extern char public_680d085; // ' '
/* 0x0680d086 */ LDATA extern char public_680d086; // '('
/* 0x0680d087 */ LDATA extern char public_680d087; // 't'
/* 0x0680d088 */ LDATA extern char public_680d088; // ' '
/* 0x0680d089 */ LDATA extern char public_680d089; // '='
/* 0x0680d08a */ LDATA extern char public_680d08a; // '='
/* 0x0680d08b */ LDATA extern char public_680d08b; // ' '
/* 0x0680d08c */ LDATA extern char public_680d08c; // '"'
/* 0x0680d08d */ LDATA extern char public_680d08d; // 's'
/* 0x0680d08e */ LDATA extern char public_680d08e; // 't'
/* 0x0680d08f */ LDATA extern char public_680d08f; // 'r'
/* 0x0680d090 */ LDATA extern char public_680d090; // 'i'
/* 0x0680d091 */ LDATA extern char public_680d091; // 'n'
/* 0x0680d092 */ LDATA extern char public_680d092; // 'g'
/* 0x0680d093 */ LDATA extern char public_680d093; // '"'
/* 0x0680d094 */ LDATA extern char public_680d094; // ' '
/* 0x0680d095 */ LDATA extern char public_680d095; // 'o'
/* 0x0680d096 */ LDATA extern char public_680d096; // 'r'
/* 0x0680d097 */ LDATA extern char public_680d097; // ' '
/* 0x0680d098 */ LDATA extern char public_680d098; // 't'
/* 0x0680d099 */ LDATA extern char public_680d099; // ' '
/* 0x0680d09a */ LDATA extern char public_680d09a; // '='
/* 0x0680d09b */ LDATA extern char public_680d09b; // '='
/* 0x0680d09c */ LDATA extern char public_680d09c; // ' '
/* 0x0680d09d */ LDATA extern char public_680d09d; // '"'
/* 0x0680d09e */ LDATA extern char public_680d09e; // 'n'
/* 0x0680d09f */ LDATA extern char public_680d09f; // 'u'
/* 0x0680d0a0 */ LDATA extern char public_680d0a0; // 'm'
/* 0x0680d0a1 */ LDATA extern char public_680d0a1; // 'b'
/* 0x0680d0a2 */ LDATA extern char public_680d0a2; // 'e'
/* 0x0680d0a3 */ LDATA extern char public_680d0a3; // 'r'
/* 0x0680d0a4 */ LDATA extern char public_680d0a4; // '"'
/* 0x0680d0a5 */ LDATA extern char public_680d0a5; // ')'
/* 0x0680d0a6 */ LDATA extern char public_680d0a6; // ' '
/* 0x0680d0a7 */ LDATA extern char public_680d0a7; // 't'
/* 0x0680d0a8 */ LDATA extern char public_680d0a8; // 'h'
/* 0x0680d0a9 */ LDATA extern char public_680d0a9; // 'e'
/* 0x0680d0aa */ LDATA extern char public_680d0aa; // 'n'
/* 0x0680d0ab */ LDATA extern char public_680d0ab;
/* 0x0680d0ac */ LDATA extern char public_680d0ac;
/* 0x0680d0ad */ LDATA extern char public_680d0ad;
/* 0x0680d0ae */ LDATA extern char public_680d0ae; // 'i'
/* 0x0680d0af */ LDATA extern char public_680d0af; // 'f'
/* 0x0680d0b0 */ LDATA extern char public_680d0b0; // ' '
/* 0x0680d0b1 */ LDATA extern char public_680d0b1; // 'i'
/* 0x0680d0b2 */ LDATA extern char public_680d0b2; // ' '
/* 0x0680d0b3 */ LDATA extern char public_680d0b3; // '='
/* 0x0680d0b4 */ LDATA extern char public_680d0b4; // '='
/* 0x0680d0b5 */ LDATA extern char public_680d0b5; // ' '
/* 0x0680d0b6 */ LDATA extern char public_680d0b6; // '0'
/* 0x0680d0b7 */ LDATA extern char public_680d0b7; // ' '
/* 0x0680d0b8 */ LDATA extern char public_680d0b8; // 't'
/* 0x0680d0b9 */ LDATA extern char public_680d0b9; // 'h'
/* 0x0680d0ba */ LDATA extern char public_680d0ba; // 'e'
/* 0x0680d0bb */ LDATA extern char public_680d0bb; // 'n'
/* 0x0680d0bc */ LDATA extern char public_680d0bc;
/* 0x0680d0bd */ LDATA extern char public_680d0bd;
/* 0x0680d0be */ LDATA extern char public_680d0be;
/* 0x0680d0bf */ LDATA extern char public_680d0bf;
/* 0x0680d0c0 */ LDATA extern char public_680d0c0; // 'r'
/* 0x0680d0c1 */ LDATA extern char public_680d0c1; // 'e'
/* 0x0680d0c2 */ LDATA extern char public_680d0c2; // 't'
/* 0x0680d0c3 */ LDATA extern char public_680d0c3; // 'u'
/* 0x0680d0c4 */ LDATA extern char public_680d0c4; // 'r'
/* 0x0680d0c5 */ LDATA extern char public_680d0c5; // 'n'
/* 0x0680d0c6 */ LDATA extern char public_680d0c6; // ' '
/* 0x0680d0c7 */ LDATA extern char public_680d0c7; // 'n'
/* 0x0680d0c8 */ LDATA extern char public_680d0c8; // ','
/* 0x0680d0c9 */ LDATA extern char public_680d0c9; // ' '
/* 0x0680d0ca */ LDATA extern char public_680d0ca; // 'v'
/* 0x0680d0cb */ LDATA extern char public_680d0cb; // ';'
/* 0x0680d0cc */ LDATA extern char public_680d0cc;
/* 0x0680d0cd */ LDATA extern char public_680d0cd;
/* 0x0680d0ce */ LDATA extern char public_680d0ce;
/* 0x0680d0cf */ LDATA extern char public_680d0cf; // 'e'
/* 0x0680d0d0 */ LDATA extern char public_680d0d0; // 'l'
/* 0x0680d0d1 */ LDATA extern char public_680d0d1; // 's'
/* 0x0680d0d2 */ LDATA extern char public_680d0d2; // 'e'
/* 0x0680d0d3 */ LDATA extern char public_680d0d3;
/* 0x0680d0d4 */ LDATA extern char public_680d0d4;
/* 0x0680d0d5 */ LDATA extern char public_680d0d5;
/* 0x0680d0d6 */ LDATA extern char public_680d0d6;
/* 0x0680d0d7 */ LDATA extern char public_680d0d7; // 'i'
/* 0x0680d0d8 */ LDATA extern char public_680d0d8; // ' '
/* 0x0680d0d9 */ LDATA extern char public_680d0d9; // '='
/* 0x0680d0da */ LDATA extern char public_680d0da; // ' '
/* 0x0680d0db */ LDATA extern char public_680d0db; // 'i'
/* 0x0680d0dc */ LDATA extern char public_680d0dc; // ' '
/* 0x0680d0dd */ LDATA extern char public_680d0dd; // '-'
/* 0x0680d0de */ LDATA extern char public_680d0de; // ' '
/* 0x0680d0df */ LDATA extern char public_680d0df; // '1'
/* 0x0680d0e0 */ LDATA extern char public_680d0e0; // ';'
/* 0x0680d0e1 */ LDATA extern char public_680d0e1;
/* 0x0680d0e2 */ LDATA extern char public_680d0e2;
/* 0x0680d0e3 */ LDATA extern char public_680d0e3;
/* 0x0680d0e4 */ LDATA extern char public_680d0e4; // 'e'
/* 0x0680d0e5 */ LDATA extern char public_680d0e5; // 'n'
/* 0x0680d0e6 */ LDATA extern char public_680d0e6; // 'd'
/* 0x0680d0e7 */ LDATA extern char public_680d0e7;
/* 0x0680d0e8 */ LDATA extern char public_680d0e8;
/* 0x0680d0e9 */ LDATA extern char public_680d0e9; // 'e'
/* 0x0680d0ea */ LDATA extern char public_680d0ea; // 'n'
/* 0x0680d0eb */ LDATA extern char public_680d0eb; // 'd'
/* 0x0680d0ec */ LDATA extern char public_680d0ec;
/* 0x0680d0ed */ LDATA extern char public_680d0ed;
/* 0x0680d0ee */ LDATA extern char public_680d0ee; // 'n'
/* 0x0680d0ef */ LDATA extern char public_680d0ef; // ','
/* 0x0680d0f0 */ LDATA extern char public_680d0f0; // ' '
/* 0x0680d0f1 */ LDATA extern char public_680d0f1; // 'v'
/* 0x0680d0f2 */ LDATA extern char public_680d0f2; // ' '
/* 0x0680d0f3 */ LDATA extern char public_680d0f3; // '='
/* 0x0680d0f4 */ LDATA extern char public_680d0f4; // ' '
/* 0x0680d0f5 */ LDATA extern char public_680d0f5; // 'n'
/* 0x0680d0f6 */ LDATA extern char public_680d0f6; // 'e'
/* 0x0680d0f7 */ LDATA extern char public_680d0f7; // 'x'
/* 0x0680d0f8 */ LDATA extern char public_680d0f8; // 't'
/* 0x0680d0f9 */ LDATA extern char public_680d0f9; // '('
/* 0x0680d0fa */ LDATA extern char public_680d0fa; // 't'
/* 0x0680d0fb */ LDATA extern char public_680d0fb; // 'a'
/* 0x0680d0fc */ LDATA extern char public_680d0fc; // 'b'
/* 0x0680d0fd */ LDATA extern char public_680d0fd; // 'l'
/* 0x0680d0fe */ LDATA extern char public_680d0fe; // 'e'
/* 0x0680d0ff */ LDATA extern char public_680d0ff; // ','
/* 0x0680d100 */ LDATA extern char public_680d100; // ' '
/* 0x0680d101 */ LDATA extern char public_680d101; // 'n'
/* 0x0680d102 */ LDATA extern char public_680d102; // ')'
/* 0x0680d103 */ LDATA extern char public_680d103; // ';'
/* 0x0680d104 */ LDATA extern char public_680d104;
/* 0x0680d105 */ LDATA extern char public_680d105; // 'e'
/* 0x0680d106 */ LDATA extern char public_680d106; // 'n'
/* 0x0680d107 */ LDATA extern char public_680d107; // 'd'
/* 0x0680d108 */ LDATA extern char public_680d108;
/* 0x0680d109 */ LDATA extern char public_680d109; // 'r'
/* 0x0680d10a */ LDATA extern char public_680d10a; // 'e'
/* 0x0680d10b */ LDATA extern char public_680d10b; // 't'
/* 0x0680d10c */ LDATA extern char public_680d10c; // 'u'
/* 0x0680d10d */ LDATA extern char public_680d10d; // 'r'
/* 0x0680d10e */ LDATA extern char public_680d10e; // 'n'
/* 0x0680d10f */ LDATA extern char public_680d10f; // ' '
/* 0x0680d110 */ LDATA extern char public_680d110; // 'n'
/* 0x0680d111 */ LDATA extern char public_680d111; // 'i'
/* 0x0680d112 */ LDATA extern char public_680d112; // 'l'
/* 0x0680d113 */ LDATA extern char public_680d113; // ';'
/* 0x0680d114 */ LDATA extern char public_680d114; // 'e'
/* 0x0680d115 */ LDATA extern char public_680d115; // 'n'
/* 0x0680d116 */ LDATA extern char public_680d116; // 'd'
/* 0x0680d117 */ LDATA extern char public_680d117;
/* 0x0680d118 */ LDATA extern char public_680d118; // 'f'
/* 0x0680d119 */ LDATA extern char public_680d119; // 'u'
/* 0x0680d11a */ LDATA extern char public_680d11a; // 'n'
/* 0x0680d11b */ LDATA extern char public_680d11b; // 'c'
/* 0x0680d11c */ LDATA extern char public_680d11c; // 't'
/* 0x0680d11d */ LDATA extern char public_680d11d; // 'i'
/* 0x0680d11e */ LDATA extern char public_680d11e; // 'o'
/* 0x0680d11f */ LDATA extern char public_680d11f; // 'n'
/* 0x0680d120 */ LDATA extern char public_680d120; // ' '
/* 0x0680d121 */ LDATA extern char public_680d121; // '_'
/* 0x0680d122 */ LDATA extern char public_680d122; // '_'
/* 0x0680d123 */ LDATA extern char public_680d123; // 'g'
/* 0x0680d124 */ LDATA extern char public_680d124; // 'e'
/* 0x0680d125 */ LDATA extern char public_680d125; // 't'
/* 0x0680d126 */ LDATA extern char public_680d126; // '_'
/* 0x0680d127 */ LDATA extern char public_680d127; // 'p'
/* 0x0680d128 */ LDATA extern char public_680d128; // 'r'
/* 0x0680d129 */ LDATA extern char public_680d129; // 'o'
/* 0x0680d12a */ LDATA extern char public_680d12a; // 'f'
/* 0x0680d12b */ LDATA extern char public_680d12b; // 'i'
/* 0x0680d12c */ LDATA extern char public_680d12c; // 'l'
/* 0x0680d12d */ LDATA extern char public_680d12d; // 'e'
/* 0x0680d12e */ LDATA extern char public_680d12e; // '_'
/* 0x0680d12f */ LDATA extern char public_680d12f; // 'l'
/* 0x0680d130 */ LDATA extern char public_680d130; // 'i'
/* 0x0680d131 */ LDATA extern char public_680d131; // 'n'
/* 0x0680d132 */ LDATA extern char public_680d132; // 'e'
/* 0x0680d133 */ LDATA extern char public_680d133; // ' '
/* 0x0680d134 */ LDATA extern char public_680d134; // '('
/* 0x0680d135 */ LDATA extern char public_680d135; // 'i'
/* 0x0680d136 */ LDATA extern char public_680d136; // ')'
/* 0x0680d137 */ LDATA extern char public_680d137;
/* 0x0680d138 */ LDATA extern char public_680d138; // 'l'
/* 0x0680d139 */ LDATA extern char public_680d139; // 'o'
/* 0x0680d13a */ LDATA extern char public_680d13a; // 'c'
/* 0x0680d13b */ LDATA extern char public_680d13b; // 'a'
/* 0x0680d13c */ LDATA extern char public_680d13c; // 'l'
/* 0x0680d13d */ LDATA extern char public_680d13d; // ' '
/* 0x0680d13e */ LDATA extern char public_680d13e; // 'n'
/* 0x0680d13f */ LDATA extern char public_680d13f; // ','
/* 0x0680d140 */ LDATA extern char public_680d140; // ' '
/* 0x0680d141 */ LDATA extern char public_680d141; // 'v'
/* 0x0680d142 */ LDATA extern char public_680d142; // ' '
/* 0x0680d143 */ LDATA extern char public_680d143; // '='
/* 0x0680d144 */ LDATA extern char public_680d144; // ' '
/* 0x0680d145 */ LDATA extern char public_680d145; // 'n'
/* 0x0680d146 */ LDATA extern char public_680d146; // 'e'
/* 0x0680d147 */ LDATA extern char public_680d147; // 'x'
/* 0x0680d148 */ LDATA extern char public_680d148; // 't'
/* 0x0680d149 */ LDATA extern char public_680d149; // 'v'
/* 0x0680d14a */ LDATA extern char public_680d14a; // 'a'
/* 0x0680d14b */ LDATA extern char public_680d14b; // 'r'
/* 0x0680d14c */ LDATA extern char public_680d14c; // '('
/* 0x0680d14d */ LDATA extern char public_680d14d; // 'n'
/* 0x0680d14e */ LDATA extern char public_680d14e; // 'i'
/* 0x0680d14f */ LDATA extern char public_680d14f; // 'l'
/* 0x0680d150 */ LDATA extern char public_680d150; // ')'
/* 0x0680d151 */ LDATA extern char public_680d151;
/* 0x0680d152 */ LDATA extern char public_680d152; // 'w'
/* 0x0680d153 */ LDATA extern char public_680d153; // 'h'
/* 0x0680d154 */ LDATA extern char public_680d154; // 'i'
/* 0x0680d155 */ LDATA extern char public_680d155; // 'l'
/* 0x0680d156 */ LDATA extern char public_680d156; // 'e'
/* 0x0680d157 */ LDATA extern char public_680d157; // ' '
/* 0x0680d158 */ LDATA extern char public_680d158; // 'n'
/* 0x0680d159 */ LDATA extern char public_680d159; // ' '
/* 0x0680d15a */ LDATA extern char public_680d15a; // 'd'
/* 0x0680d15b */ LDATA extern char public_680d15b; // 'o'
/* 0x0680d15c */ LDATA extern char public_680d15c;
/* 0x0680d15d */ LDATA extern char public_680d15d;
/* 0x0680d15e */ LDATA extern char public_680d15e; // 'l'
/* 0x0680d15f */ LDATA extern char public_680d15f; // 'o'
/* 0x0680d160 */ LDATA extern char public_680d160; // 'c'
/* 0x0680d161 */ LDATA extern char public_680d161; // 'a'
/* 0x0680d162 */ LDATA extern char public_680d162; // 'l'
/* 0x0680d163 */ LDATA extern char public_680d163; // ' '
/* 0x0680d164 */ LDATA extern char public_680d164; // 't'
/* 0x0680d165 */ LDATA extern char public_680d165; // ' '
/* 0x0680d166 */ LDATA extern char public_680d166; // '='
/* 0x0680d167 */ LDATA extern char public_680d167; // ' '
/* 0x0680d168 */ LDATA extern char public_680d168; // 't'
/* 0x0680d169 */ LDATA extern char public_680d169; // 'y'
/* 0x0680d16a */ LDATA extern char public_680d16a; // 'p'
/* 0x0680d16b */ LDATA extern char public_680d16b; // 'e'
/* 0x0680d16c */ LDATA extern char public_680d16c; // '('
/* 0x0680d16d */ LDATA extern char public_680d16d; // 'v'
/* 0x0680d16e */ LDATA extern char public_680d16e; // ')'
/* 0x0680d16f */ LDATA extern char public_680d16f; // ';'
/* 0x0680d170 */ LDATA extern char public_680d170;
/* 0x0680d171 */ LDATA extern char public_680d171;
/* 0x0680d172 */ LDATA extern char public_680d172; // 'i'
/* 0x0680d173 */ LDATA extern char public_680d173; // 'f'
/* 0x0680d174 */ LDATA extern char public_680d174; // ' '
/* 0x0680d175 */ LDATA extern char public_680d175; // '('
/* 0x0680d176 */ LDATA extern char public_680d176; // 't'
/* 0x0680d177 */ LDATA extern char public_680d177; // ' '
/* 0x0680d178 */ LDATA extern char public_680d178; // '='
/* 0x0680d179 */ LDATA extern char public_680d179; // '='
/* 0x0680d17a */ LDATA extern char public_680d17a; // ' '
/* 0x0680d17b */ LDATA extern char public_680d17b; // '"'
/* 0x0680d17c */ LDATA extern char public_680d17c; // 's'
/* 0x0680d17d */ LDATA extern char public_680d17d; // 't'
/* 0x0680d17e */ LDATA extern char public_680d17e; // 'r'
/* 0x0680d17f */ LDATA extern char public_680d17f; // 'i'
/* 0x0680d180 */ LDATA extern char public_680d180; // 'n'
/* 0x0680d181 */ LDATA extern char public_680d181; // 'g'
/* 0x0680d182 */ LDATA extern char public_680d182; // '"'
/* 0x0680d183 */ LDATA extern char public_680d183; // ' '
/* 0x0680d184 */ LDATA extern char public_680d184; // 'o'
/* 0x0680d185 */ LDATA extern char public_680d185; // 'r'
/* 0x0680d186 */ LDATA extern char public_680d186; // ' '
/* 0x0680d187 */ LDATA extern char public_680d187; // 't'
/* 0x0680d188 */ LDATA extern char public_680d188; // ' '
/* 0x0680d189 */ LDATA extern char public_680d189; // '='
/* 0x0680d18a */ LDATA extern char public_680d18a; // '='
/* 0x0680d18b */ LDATA extern char public_680d18b; // ' '
/* 0x0680d18c */ LDATA extern char public_680d18c; // '"'
/* 0x0680d18d */ LDATA extern char public_680d18d; // 'n'
/* 0x0680d18e */ LDATA extern char public_680d18e; // 'u'
/* 0x0680d18f */ LDATA extern char public_680d18f; // 'm'
/* 0x0680d190 */ LDATA extern char public_680d190; // 'b'
/* 0x0680d191 */ LDATA extern char public_680d191; // 'e'
/* 0x0680d192 */ LDATA extern char public_680d192; // 'r'
/* 0x0680d193 */ LDATA extern char public_680d193; // '"'
/* 0x0680d194 */ LDATA extern char public_680d194; // ')'
/* 0x0680d195 */ LDATA extern char public_680d195; // ' '
/* 0x0680d196 */ LDATA extern char public_680d196; // 't'
/* 0x0680d197 */ LDATA extern char public_680d197; // 'h'
/* 0x0680d198 */ LDATA extern char public_680d198; // 'e'
/* 0x0680d199 */ LDATA extern char public_680d199; // 'n'
/* 0x0680d19a */ LDATA extern char public_680d19a;
/* 0x0680d19b */ LDATA extern char public_680d19b;
/* 0x0680d19c */ LDATA extern char public_680d19c;
/* 0x0680d19d */ LDATA extern char public_680d19d; // 'i'
/* 0x0680d19e */ LDATA extern char public_680d19e; // 'f'
/* 0x0680d19f */ LDATA extern char public_680d19f; // ' '
/* 0x0680d1a0 */ LDATA extern char public_680d1a0; // 'i'
/* 0x0680d1a1 */ LDATA extern char public_680d1a1; // ' '
/* 0x0680d1a2 */ LDATA extern char public_680d1a2; // '='
/* 0x0680d1a3 */ LDATA extern char public_680d1a3; // '='
/* 0x0680d1a4 */ LDATA extern char public_680d1a4; // ' '
/* 0x0680d1a5 */ LDATA extern char public_680d1a5; // '0'
/* 0x0680d1a6 */ LDATA extern char public_680d1a6; // ' '
/* 0x0680d1a7 */ LDATA extern char public_680d1a7; // 't'
/* 0x0680d1a8 */ LDATA extern char public_680d1a8; // 'h'
/* 0x0680d1a9 */ LDATA extern char public_680d1a9; // 'e'
/* 0x0680d1aa */ LDATA extern char public_680d1aa; // 'n'
/* 0x0680d1ab */ LDATA extern char public_680d1ab;
/* 0x0680d1ac */ LDATA extern char public_680d1ac;
/* 0x0680d1ad */ LDATA extern char public_680d1ad;
/* 0x0680d1ae */ LDATA extern char public_680d1ae;
/* 0x0680d1af */ LDATA extern char public_680d1af; // 'r'
/* 0x0680d1b0 */ LDATA extern char public_680d1b0; // 'e'
/* 0x0680d1b1 */ LDATA extern char public_680d1b1; // 't'
/* 0x0680d1b2 */ LDATA extern char public_680d1b2; // 'u'
/* 0x0680d1b3 */ LDATA extern char public_680d1b3; // 'r'
/* 0x0680d1b4 */ LDATA extern char public_680d1b4; // 'n'
/* 0x0680d1b5 */ LDATA extern char public_680d1b5; // ' '
/* 0x0680d1b6 */ LDATA extern char public_680d1b6; // 'n'
/* 0x0680d1b7 */ LDATA extern char public_680d1b7; // ','
/* 0x0680d1b8 */ LDATA extern char public_680d1b8; // ' '
/* 0x0680d1b9 */ LDATA extern char public_680d1b9; // 'v'
/* 0x0680d1ba */ LDATA extern char public_680d1ba; // ';'
/* 0x0680d1bb */ LDATA extern char public_680d1bb;
/* 0x0680d1bc */ LDATA extern char public_680d1bc;
/* 0x0680d1bd */ LDATA extern char public_680d1bd;
/* 0x0680d1be */ LDATA extern char public_680d1be; // 'e'
/* 0x0680d1bf */ LDATA extern char public_680d1bf; // 'l'
/* 0x0680d1c0 */ LDATA extern char public_680d1c0; // 's'
/* 0x0680d1c1 */ LDATA extern char public_680d1c1; // 'e'
/* 0x0680d1c2 */ LDATA extern char public_680d1c2;
/* 0x0680d1c3 */ LDATA extern char public_680d1c3;
/* 0x0680d1c4 */ LDATA extern char public_680d1c4;
/* 0x0680d1c5 */ LDATA extern char public_680d1c5;
/* 0x0680d1c6 */ LDATA extern char public_680d1c6; // 'i'
/* 0x0680d1c7 */ LDATA extern char public_680d1c7; // ' '
/* 0x0680d1c8 */ LDATA extern char public_680d1c8; // '='
/* 0x0680d1c9 */ LDATA extern char public_680d1c9; // ' '
/* 0x0680d1ca */ LDATA extern char public_680d1ca; // 'i'
/* 0x0680d1cb */ LDATA extern char public_680d1cb; // ' '
/* 0x0680d1cc */ LDATA extern char public_680d1cc; // '-'
/* 0x0680d1cd */ LDATA extern char public_680d1cd; // ' '
/* 0x0680d1ce */ LDATA extern char public_680d1ce; // '1'
/* 0x0680d1cf */ LDATA extern char public_680d1cf; // ';'
/* 0x0680d1d0 */ LDATA extern char public_680d1d0;
/* 0x0680d1d1 */ LDATA extern char public_680d1d1;
/* 0x0680d1d2 */ LDATA extern char public_680d1d2;
/* 0x0680d1d3 */ LDATA extern char public_680d1d3; // 'e'
/* 0x0680d1d4 */ LDATA extern char public_680d1d4; // 'n'
/* 0x0680d1d5 */ LDATA extern char public_680d1d5; // 'd'
/* 0x0680d1d6 */ LDATA extern char public_680d1d6;
/* 0x0680d1d7 */ LDATA extern char public_680d1d7;
/* 0x0680d1d8 */ LDATA extern char public_680d1d8; // 'e'
/* 0x0680d1d9 */ LDATA extern char public_680d1d9; // 'n'
/* 0x0680d1da */ LDATA extern char public_680d1da; // 'd'
/* 0x0680d1db */ LDATA extern char public_680d1db;
/* 0x0680d1dc */ LDATA extern char public_680d1dc;
/* 0x0680d1dd */ LDATA extern char public_680d1dd; // 'n'
/* 0x0680d1de */ LDATA extern char public_680d1de; // ','
/* 0x0680d1df */ LDATA extern char public_680d1df; // ' '
/* 0x0680d1e0 */ LDATA extern char public_680d1e0; // 'v'
/* 0x0680d1e1 */ LDATA extern char public_680d1e1; // ' '
/* 0x0680d1e2 */ LDATA extern char public_680d1e2; // '='
/* 0x0680d1e3 */ LDATA extern char public_680d1e3; // ' '
/* 0x0680d1e4 */ LDATA extern char public_680d1e4; // 'n'
/* 0x0680d1e5 */ LDATA extern char public_680d1e5; // 'e'
/* 0x0680d1e6 */ LDATA extern char public_680d1e6; // 'x'
/* 0x0680d1e7 */ LDATA extern char public_680d1e7; // 't'
/* 0x0680d1e8 */ LDATA extern char public_680d1e8; // 'v'
/* 0x0680d1e9 */ LDATA extern char public_680d1e9; // 'a'
/* 0x0680d1ea */ LDATA extern char public_680d1ea; // 'r'
/* 0x0680d1eb */ LDATA extern char public_680d1eb; // '('
/* 0x0680d1ec */ LDATA extern char public_680d1ec; // 'n'
/* 0x0680d1ed */ LDATA extern char public_680d1ed; // ')'
/* 0x0680d1ee */ LDATA extern char public_680d1ee; // ';'
/* 0x0680d1ef */ LDATA extern char public_680d1ef;
/* 0x0680d1f0 */ LDATA extern char public_680d1f0; // 'e'
/* 0x0680d1f1 */ LDATA extern char public_680d1f1; // 'n'
/* 0x0680d1f2 */ LDATA extern char public_680d1f2; // 'd'
/* 0x0680d1f3 */ LDATA extern char public_680d1f3;
/* 0x0680d1f4 */ LDATA extern char public_680d1f4; // 'r'
/* 0x0680d1f5 */ LDATA extern char public_680d1f5; // 'e'
/* 0x0680d1f6 */ LDATA extern char public_680d1f6; // 't'
/* 0x0680d1f7 */ LDATA extern char public_680d1f7; // 'u'
/* 0x0680d1f8 */ LDATA extern char public_680d1f8; // 'r'
/* 0x0680d1f9 */ LDATA extern char public_680d1f9; // 'n'
/* 0x0680d1fa */ LDATA extern char public_680d1fa; // ' '
/* 0x0680d1fb */ LDATA extern char public_680d1fb; // 'n'
/* 0x0680d1fc */ LDATA extern char public_680d1fc; // 'i'
/* 0x0680d1fd */ LDATA extern char public_680d1fd; // 'l'
/* 0x0680d1fe */ LDATA extern char public_680d1fe; // ';'
/* 0x0680d1ff */ LDATA extern char public_680d1ff; // 'e'
/* 0x0680d200 */ LDATA extern char public_680d200; // 'n'
/* 0x0680d201 */ LDATA extern char public_680d201; // 'd'
/* 0x0680d202 */ LDATA extern char public_680d202;
/* 0x0680d203 */ LDATA extern char public_680d203;
/* 0x0680d204 */ LDATA extern char public_680d204; // '%'
/* 0x0680d205 */ LDATA extern char public_680d205; // 's'
/* 0x0680d206 */ LDATA extern char public_680d206; // '('
/* 0x0680d207 */ LDATA extern char public_680d207; // '%'
/* 0x0680d208 */ LDATA extern char public_680d208; // 'd'
/* 0x0680d209 */ LDATA extern char public_680d209; // ')'
/* 0x0680d20a */ LDATA extern char public_680d20a; // ' '
/* 0x0680d20b */ LDATA extern char public_680d20b; // ':'
/* 0x0680d20c */ LDATA extern char public_680d20c; // ' '
/* 0x0680d20d */ LDATA extern char public_680d20d; // 'E'
/* 0x0680d20e */ LDATA extern char public_680d20e; // 'R'
/* 0x0680d20f */ LDATA extern char public_680d20f; // 'R'
/* 0x0680d210 */ LDATA extern char public_680d210; // 'O'
/* 0x0680d211 */ LDATA extern char public_680d211; // 'R'
/* 0x0680d212 */ LDATA extern char public_680d212; // ':'
/* 0x0680d213 */ LDATA extern char public_680d213; // 'G'
/* 0x0680d214 */ LDATA extern char public_680d214; // 'e'
/* 0x0680d215 */ LDATA extern char public_680d215; // 'n'
/* 0x0680d216 */ LDATA extern char public_680d216; // 'e'
/* 0x0680d217 */ LDATA extern char public_680d217; // 'r'
/* 0x0680d218 */ LDATA extern char public_680d218; // 'a'
/* 0x0680d219 */ LDATA extern char public_680d219; // 'l'
/* 0x0680d21a */ LDATA extern char public_680d21a; // ':'
/* 0x0680d21b */ LDATA extern char public_680d21b; // '%'
/* 0x0680d21c */ LDATA extern char public_680d21c; // 's'
/* 0x0680d21d */ LDATA extern char public_680d21d;
/* 0x0680d21e */ LDATA extern char public_680d21e;
/* 0x0680d21f */ LDATA extern char public_680d21f;
/* 0x0680d220 */ LDATA extern char public_680d220; // 'C'
/* 0x0680d221 */ LDATA extern char public_680d221; // ':'
/* 0x0680d222 */ LDATA extern char public_680d222; // '\'
/* 0x0680d223 */ LDATA extern char public_680d223; // 'w'
/* 0x0680d224 */ LDATA extern char public_680d224; // 'o'
/* 0x0680d225 */ LDATA extern char public_680d225; // 'r'
/* 0x0680d226 */ LDATA extern char public_680d226; // 'k'
/* 0x0680d227 */ LDATA extern char public_680d227; // '\'
/* 0x0680d228 */ LDATA extern char public_680d228; // 'b'
/* 0x0680d229 */ LDATA extern char public_680d229; // 'u'
/* 0x0680d22a */ LDATA extern char public_680d22a; // 'i'
/* 0x0680d22b */ LDATA extern char public_680d22b; // 'l'
/* 0x0680d22c */ LDATA extern char public_680d22c; // 'd'
/* 0x0680d22d */ LDATA extern char public_680d22d; // 's'
/* 0x0680d22e */ LDATA extern char public_680d22e; // '\'
/* 0x0680d22f */ LDATA extern char public_680d22f; // 'd'
/* 0x0680d230 */ LDATA extern char public_680d230; // 'a'
/* 0x0680d231 */ LDATA extern char public_680d231; // 'l'
/* 0x0680d232 */ LDATA extern char public_680d232; // 'i'
/* 0x0680d233 */ LDATA extern char public_680d233; // 'b'
/* 0x0680d234 */ LDATA extern char public_680d234; // 's'
/* 0x0680d235 */ LDATA extern char public_680d235; // '\'
/* 0x0680d236 */ LDATA extern char public_680d236; // 'd'
/* 0x0680d237 */ LDATA extern char public_680d237; // 'a'
/* 0x0680d238 */ LDATA extern char public_680d238; // 'l'
/* 0x0680d239 */ LDATA extern char public_680d239; // 'i'
/* 0x0680d23a */ LDATA extern char public_680d23a; // 'b'
/* 0x0680d23b */ LDATA extern char public_680d23b; // 's'
/* 0x0680d23c */ LDATA extern char public_680d23c; // '-'
/* 0x0680d23d */ LDATA extern char public_680d23d; // 'b'
/* 0x0680d23e */ LDATA extern char public_680d23e; // 'u'
/* 0x0680d23f */ LDATA extern char public_680d23f; // 'i'
/* 0x0680d240 */ LDATA extern char public_680d240; // 'l'
/* 0x0680d241 */ LDATA extern char public_680d241; // 'd'
/* 0x0680d242 */ LDATA extern char public_680d242; // '\'
/* 0x0680d243 */ LDATA extern char public_680d243; // 'b'
/* 0x0680d244 */ LDATA extern char public_680d244; // 'u'
/* 0x0680d245 */ LDATA extern char public_680d245; // 'i'
/* 0x0680d246 */ LDATA extern char public_680d246; // 'l'
/* 0x0680d247 */ LDATA extern char public_680d247; // 'd'
/* 0x0680d248 */ LDATA extern char public_680d248; // '\'
/* 0x0680d249 */ LDATA extern char public_680d249; // 'S'
/* 0x0680d24a */ LDATA extern char public_680d24a; // 'r'
/* 0x0680d24b */ LDATA extern char public_680d24b; // 'c'
/* 0x0680d24c */ LDATA extern char public_680d24c; // '\'
/* 0x0680d24d */ LDATA extern char public_680d24d; // 'L'
/* 0x0680d24e */ LDATA extern char public_680d24e; // 'u'
/* 0x0680d24f */ LDATA extern char public_680d24f; // 'a'
/* 0x0680d250 */ LDATA extern char public_680d250; // 'P'
/* 0x0680d251 */ LDATA extern char public_680d251; // 'r'
/* 0x0680d252 */ LDATA extern char public_680d252; // 'o'
/* 0x0680d253 */ LDATA extern char public_680d253; // 'f'
/* 0x0680d254 */ LDATA extern char public_680d254; // 'i'
/* 0x0680d255 */ LDATA extern char public_680d255; // 'l'
/* 0x0680d256 */ LDATA extern char public_680d256; // 'e'
/* 0x0680d257 */ LDATA extern char public_680d257; // '\'
/* 0x0680d258 */ LDATA extern char public_680d258; // 'L'
/* 0x0680d259 */ LDATA extern char public_680d259; // 'u'
/* 0x0680d25a */ LDATA extern char public_680d25a; // 'a'
/* 0x0680d25b */ LDATA extern char public_680d25b; // 'P'
/* 0x0680d25c */ LDATA extern char public_680d25c; // 'r'
/* 0x0680d25d */ LDATA extern char public_680d25d; // 'o'
/* 0x0680d25e */ LDATA extern char public_680d25e; // 'f'
/* 0x0680d25f */ LDATA extern char public_680d25f; // 'i'
/* 0x0680d260 */ LDATA extern char public_680d260; // 'l'
/* 0x0680d261 */ LDATA extern char public_680d261; // 'e'
/* 0x0680d262 */ LDATA extern char public_680d262; // '.'
/* 0x0680d263 */ LDATA extern char public_680d263; // 'c'
/* 0x0680d264 */ LDATA extern char public_680d264; // 'p'
/* 0x0680d265 */ LDATA extern char public_680d265; // 'p'
/* 0x0680d266 */ LDATA extern char public_680d266;
/* 0x0680d267 */ LDATA extern char public_680d267;
/* 0x0680d268 */ LDATA extern char public_680d268; // '_'
/* 0x0680d269 */ LDATA extern char public_680d269; // '_'
/* 0x0680d26a */ LDATA extern char public_680d26a; // 'g'
/* 0x0680d26b */ LDATA extern char public_680d26b; // 'e'
/* 0x0680d26c */ LDATA extern char public_680d26c; // 't'
/* 0x0680d26d */ LDATA extern char public_680d26d; // '_'
/* 0x0680d26e */ LDATA extern char public_680d26e; // 't'
/* 0x0680d26f */ LDATA extern char public_680d26f; // 'a'
/* 0x0680d270 */ LDATA extern char public_680d270; // 'b'
/* 0x0680d271 */ LDATA extern char public_680d271; // 'l'
/* 0x0680d272 */ LDATA extern char public_680d272; // 'e'
/* 0x0680d273 */ LDATA extern char public_680d273; // '_'
/* 0x0680d274 */ LDATA extern char public_680d274; // 'l'
/* 0x0680d275 */ LDATA extern char public_680d275; // 'i'
/* 0x0680d276 */ LDATA extern char public_680d276; // 'n'
/* 0x0680d277 */ LDATA extern char public_680d277; // 'e'
/* 0x0680d278 */ LDATA extern char public_680d278;
/* 0x0680d279 */ LDATA extern char public_680d279;
/* 0x0680d27a */ LDATA extern char public_680d27a;
/* 0x0680d27b */ LDATA extern char public_680d27b;
/* 0x0680d27c */ LDATA extern char public_680d27c; // '_'
/* 0x0680d27d */ LDATA extern char public_680d27d; // '_'
/* 0x0680d27e */ LDATA extern char public_680d27e; // 'g'
/* 0x0680d27f */ LDATA extern char public_680d27f; // 'e'
/* 0x0680d280 */ LDATA extern char public_680d280; // 't'
/* 0x0680d281 */ LDATA extern char public_680d281; // '_'
/* 0x0680d282 */ LDATA extern char public_680d282; // 'p'
/* 0x0680d283 */ LDATA extern char public_680d283; // 'r'
/* 0x0680d284 */ LDATA extern char public_680d284; // 'o'
/* 0x0680d285 */ LDATA extern char public_680d285; // 'f'
/* 0x0680d286 */ LDATA extern char public_680d286; // 'i'
/* 0x0680d287 */ LDATA extern char public_680d287; // 'l'
/* 0x0680d288 */ LDATA extern char public_680d288; // 'e'
/* 0x0680d289 */ LDATA extern char public_680d289; // '_'
/* 0x0680d28a */ LDATA extern char public_680d28a; // 'l'
/* 0x0680d28b */ LDATA extern char public_680d28b; // 'i'
/* 0x0680d28c */ LDATA extern char public_680d28c; // 'n'
/* 0x0680d28d */ LDATA extern char public_680d28d; // 'e'
/* 0x0680d28e */ LDATA extern char public_680d28e;
/* 0x0680d28f */ LDATA extern char public_680d28f;
/* 0x0680d290 */ LDATA extern char public_680d290; // '1'
/* 0x0680d291 */ LDATA extern char public_680d291; // '.'
/* 0x0680d292 */ LDATA extern char public_680d292; // '1'
/* 0x0680d293 */ LDATA extern char public_680d293; // '1'
/* 0x0680d294 */ LDATA extern char public_680d294; // '_'
/* 0x0680d295 */ LDATA extern char public_680d295; // 'I'
/* 0x0680d296 */ LDATA extern char public_680d296; // 'C'
/* 0x0680d297 */ LDATA extern char public_680d297; // 'o'
/* 0x0680d298 */ LDATA extern char public_680d298; // 'm'
/* 0x0680d299 */ LDATA extern char public_680d299; // 'p'
/* 0x0680d29a */ LDATA extern char public_680d29a; // 'o'
/* 0x0680d29b */ LDATA extern char public_680d29b; // 'n'
/* 0x0680d29c */ LDATA extern char public_680d29c; // 'e'
/* 0x0680d29d */ LDATA extern char public_680d29d; // 'n'
/* 0x0680d29e */ LDATA extern char public_680d29e; // 't'
/* 0x0680d29f */ LDATA extern char public_680d29f; // 'F'
/* 0x0680d2a0 */ LDATA extern char public_680d2a0; // 'a'
/* 0x0680d2a1 */ LDATA extern char public_680d2a1; // 'c'
/* 0x0680d2a2 */ LDATA extern char public_680d2a2; // 't'
/* 0x0680d2a3 */ LDATA extern char public_680d2a3; // 'o'
/* 0x0680d2a4 */ LDATA extern char public_680d2a4; // 'r'
/* 0x0680d2a5 */ LDATA extern char public_680d2a5; // 'y'
/* 0x0680d2a6 */ LDATA extern char public_680d2a6;
/* 0x0680d2a7 */ LDATA extern char public_680d2a7;
/* 0x0680d2a8 */ LDATA extern char public_680d2a8; // 'I'
/* 0x0680d2a9 */ LDATA extern char public_680d2a9; // 'A'
/* 0x0680d2aa */ LDATA extern char public_680d2aa; // 'g'
/* 0x0680d2ab */ LDATA extern char public_680d2ab; // 'g'
/* 0x0680d2ac */ LDATA extern char public_680d2ac; // 'r'
/* 0x0680d2ad */ LDATA extern char public_680d2ad; // 'e'
/* 0x0680d2ae */ LDATA extern char public_680d2ae; // 'g'
/* 0x0680d2af */ LDATA extern char public_680d2af; // 'a'
/* 0x0680d2b0 */ LDATA extern char public_680d2b0; // 't'
/* 0x0680d2b1 */ LDATA extern char public_680d2b1; // 'e'
/* 0x0680d2b2 */ LDATA extern char public_680d2b2; // 'C'
/* 0x0680d2b3 */ LDATA extern char public_680d2b3; // 'o'
/* 0x0680d2b4 */ LDATA extern char public_680d2b4; // 'm'
/* 0x0680d2b5 */ LDATA extern char public_680d2b5; // 'p'
/* 0x0680d2b6 */ LDATA extern char public_680d2b6; // 'o'
/* 0x0680d2b7 */ LDATA extern char public_680d2b7; // 'n'
/* 0x0680d2b8 */ LDATA extern char public_680d2b8; // 'e'
/* 0x0680d2b9 */ LDATA extern char public_680d2b9; // 'n'
/* 0x0680d2ba */ LDATA extern char public_680d2ba; // 't'
/* 0x0680d2bb */ LDATA extern char public_680d2bb;
/* 0x0680d2bc */ LDATA extern char public_680d2bc; // 'I'
/* 0x0680d2bd */ LDATA extern char public_680d2bd; // 'P'
/* 0x0680d2be */ LDATA extern char public_680d2be; // 'r'
/* 0x0680d2bf */ LDATA extern char public_680d2bf; // 'o'
/* 0x0680d2c0 */ LDATA extern char public_680d2c0; // 'f'
/* 0x0680d2c1 */ LDATA extern char public_680d2c1; // 'i'
/* 0x0680d2c2 */ LDATA extern char public_680d2c2; // 'l'
/* 0x0680d2c3 */ LDATA extern char public_680d2c3; // 'e'
/* 0x0680d2c4 */ LDATA extern char public_680d2c4; // 'P'
/* 0x0680d2c5 */ LDATA extern char public_680d2c5; // 'a'
/* 0x0680d2c6 */ LDATA extern char public_680d2c6; // 'r'
/* 0x0680d2c7 */ LDATA extern char public_680d2c7; // 's'
/* 0x0680d2c8 */ LDATA extern char public_680d2c8; // 'e'
/* 0x0680d2c9 */ LDATA extern char public_680d2c9; // 'r'
/* 0x0680d2ca */ LDATA extern char public_680d2ca;
/* 0x0680d2cb */ LDATA extern char public_680d2cb;
/* 0x0680d2cc */ LDATA extern char public_680d2cc; // 'I'
/* 0x0680d2cd */ LDATA extern char public_680d2cd; // 'L'
/* 0x0680d2ce */ LDATA extern char public_680d2ce; // 'u'
/* 0x0680d2cf */ LDATA extern char public_680d2cf; // 'a'
/* 0x0680d2d0 */ LDATA extern char public_680d2d0;
/* 0x0680d2d1 */ LDATA extern char public_680d2d1;
/* 0x0680d2d2 */ LDATA extern char public_680d2d2;
/* 0x0680d2d3 */ LDATA extern char public_680d2d3;
/* 0x0680d2d4 */ LDATA extern char public_680d2d4; // '$'
/* 0x0680d2d5 */ LDATA extern char public_680d2d5; // 'L'
/* 0x0680d2d6 */ LDATA extern char public_680d2d6; // 'u'
/* 0x0680d2d7 */ LDATA extern char public_680d2d7; // 'a'
/* 0x0680d2d8 */ LDATA extern char public_680d2d8; // ':'
/* 0x0680d2d9 */ LDATA extern char public_680d2d9; // ' '
/* 0x0680d2da */ LDATA extern char public_680d2da; // 'L'
/* 0x0680d2db */ LDATA extern char public_680d2db; // 'u'
/* 0x0680d2dc */ LDATA extern char public_680d2dc; // 'a'
/* 0x0680d2dd */ LDATA extern char public_680d2dd; // ' '
/* 0x0680d2de */ LDATA extern char public_680d2de; // '3'
/* 0x0680d2df */ LDATA extern char public_680d2df; // '.'
/* 0x0680d2e0 */ LDATA extern char public_680d2e0; // '2'
/* 0x0680d2e1 */ LDATA extern char public_680d2e1; // ' '
/* 0x0680d2e2 */ LDATA extern char public_680d2e2; // 'C'
/* 0x0680d2e3 */ LDATA extern char public_680d2e3; // 'o'
/* 0x0680d2e4 */ LDATA extern char public_680d2e4; // 'p'
/* 0x0680d2e5 */ LDATA extern char public_680d2e5; // 'y'
/* 0x0680d2e6 */ LDATA extern char public_680d2e6; // 'r'
/* 0x0680d2e7 */ LDATA extern char public_680d2e7; // 'i'
/* 0x0680d2e8 */ LDATA extern char public_680d2e8; // 'g'
/* 0x0680d2e9 */ LDATA extern char public_680d2e9; // 'h'
/* 0x0680d2ea */ LDATA extern char public_680d2ea; // 't'
/* 0x0680d2eb */ LDATA extern char public_680d2eb; // ' '
/* 0x0680d2ec */ LDATA extern char public_680d2ec; // '('
/* 0x0680d2ed */ LDATA extern char public_680d2ed; // 'C'
/* 0x0680d2ee */ LDATA extern char public_680d2ee; // ')'
/* 0x0680d2ef */ LDATA extern char public_680d2ef; // ' '
/* 0x0680d2f0 */ LDATA extern char public_680d2f0; // '1'
/* 0x0680d2f1 */ LDATA extern char public_680d2f1; // '9'
/* 0x0680d2f2 */ LDATA extern char public_680d2f2; // '9'
/* 0x0680d2f3 */ LDATA extern char public_680d2f3; // '4'
/* 0x0680d2f4 */ LDATA extern char public_680d2f4; // '-'
/* 0x0680d2f5 */ LDATA extern char public_680d2f5; // '1'
/* 0x0680d2f6 */ LDATA extern char public_680d2f6; // '9'
/* 0x0680d2f7 */ LDATA extern char public_680d2f7; // '9'
/* 0x0680d2f8 */ LDATA extern char public_680d2f8; // '9'
/* 0x0680d2f9 */ LDATA extern char public_680d2f9; // ' '
/* 0x0680d2fa */ LDATA extern char public_680d2fa; // 'T'
/* 0x0680d2fb */ LDATA extern char public_680d2fb; // 'e'
/* 0x0680d2fc */ LDATA extern char public_680d2fc; // 'C'
/* 0x0680d2fd */ LDATA extern char public_680d2fd; // 'G'
/* 0x0680d2fe */ LDATA extern char public_680d2fe; // 'r'
/* 0x0680d2ff */ LDATA extern char public_680d2ff; // 'a'
/* 0x0680d300 */ LDATA extern char public_680d300; // 'f'
/* 0x0680d301 */ LDATA extern char public_680d301; // ','
/* 0x0680d302 */ LDATA extern char public_680d302; // ' '
/* 0x0680d303 */ LDATA extern char public_680d303; // 'P'
/* 0x0680d304 */ LDATA extern char public_680d304; // 'U'
/* 0x0680d305 */ LDATA extern char public_680d305; // 'C'
/* 0x0680d306 */ LDATA extern char public_680d306; // '-'
/* 0x0680d307 */ LDATA extern char public_680d307; // 'R'
/* 0x0680d308 */ LDATA extern char public_680d308; // 'i'
/* 0x0680d309 */ LDATA extern char public_680d309; // 'o'
/* 0x0680d30a */ LDATA extern char public_680d30a; // ' '
/* 0x0680d30b */ LDATA extern char public_680d30b; // '$'
/* 0x0680d30c */ LDATA extern char public_680d30c;
/* 0x0680d30d */ LDATA extern char public_680d30d; // '$'
/* 0x0680d30e */ LDATA extern char public_680d30e; // 'A'
/* 0x0680d30f */ LDATA extern char public_680d30f; // 'u'
/* 0x0680d310 */ LDATA extern char public_680d310; // 't'
/* 0x0680d311 */ LDATA extern char public_680d311; // 'h'
/* 0x0680d312 */ LDATA extern char public_680d312; // 'o'
/* 0x0680d313 */ LDATA extern char public_680d313; // 'r'
/* 0x0680d314 */ LDATA extern char public_680d314; // 's'
/* 0x0680d315 */ LDATA extern char public_680d315; // ':'
/* 0x0680d316 */ LDATA extern char public_680d316; // ' '
/* 0x0680d317 */ LDATA extern char public_680d317; // ' '
/* 0x0680d318 */ LDATA extern char public_680d318; // 'W'
/* 0x0680d319 */ LDATA extern char public_680d319; // '.'
/* 0x0680d31a */ LDATA extern char public_680d31a; // ' '
/* 0x0680d31b */ LDATA extern char public_680d31b; // 'C'
/* 0x0680d31c */ LDATA extern char public_680d31c; // 'e'
/* 0x0680d31d */ LDATA extern char public_680d31d; // 'l'
/* 0x0680d31e */ LDATA extern char public_680d31e; // 'e'
/* 0x0680d31f */ LDATA extern char public_680d31f; // 's'
/* 0x0680d320 */ LDATA extern char public_680d320; // ','
/* 0x0680d321 */ LDATA extern char public_680d321; // ' '
/* 0x0680d322 */ LDATA extern char public_680d322; // 'R'
/* 0x0680d323 */ LDATA extern char public_680d323; // '.'
/* 0x0680d324 */ LDATA extern char public_680d324; // ' '
/* 0x0680d325 */ LDATA extern char public_680d325; // 'I'
/* 0x0680d326 */ LDATA extern char public_680d326; // 'e'
/* 0x0680d327 */ LDATA extern char public_680d327; // 'r'
/* 0x0680d328 */ LDATA extern char public_680d328; // 'u'
/* 0x0680d329 */ LDATA extern char public_680d329; // 's'
/* 0x0680d32a */ LDATA extern char public_680d32a; // 'a'
/* 0x0680d32b */ LDATA extern char public_680d32b; // 'l'
/* 0x0680d32c */ LDATA extern char public_680d32c; // 'i'
/* 0x0680d32d */ LDATA extern char public_680d32d; // 'm'
/* 0x0680d32e */ LDATA extern char public_680d32e; // 's'
/* 0x0680d32f */ LDATA extern char public_680d32f; // 'c'
/* 0x0680d330 */ LDATA extern char public_680d330; // 'h'
/* 0x0680d331 */ LDATA extern char public_680d331; // 'y'
/* 0x0680d332 */ LDATA extern char public_680d332; // ' '
/* 0x0680d333 */ LDATA extern char public_680d333; // '&'
/* 0x0680d334 */ LDATA extern char public_680d334; // ' '
/* 0x0680d335 */ LDATA extern char public_680d335; // 'L'
/* 0x0680d336 */ LDATA extern char public_680d336; // '.'
/* 0x0680d337 */ LDATA extern char public_680d337; // ' '
/* 0x0680d338 */ LDATA extern char public_680d338; // 'H'
/* 0x0680d339 */ LDATA extern char public_680d339; // '.'
/* 0x0680d33a */ LDATA extern char public_680d33a; // ' '
/* 0x0680d33b */ LDATA extern char public_680d33b; // 'd'
/* 0x0680d33c */ LDATA extern char public_680d33c; // 'e'
/* 0x0680d33d */ LDATA extern char public_680d33d; // ' '
/* 0x0680d33e */ LDATA extern char public_680d33e; // 'F'
/* 0x0680d33f */ LDATA extern char public_680d33f; // 'i'
/* 0x0680d340 */ LDATA extern char public_680d340; // 'g'
/* 0x0680d341 */ LDATA extern char public_680d341; // 'u'
/* 0x0680d342 */ LDATA extern char public_680d342; // 'e'
/* 0x0680d343 */ LDATA extern char public_680d343; // 'i'
/* 0x0680d344 */ LDATA extern char public_680d344; // 'r'
/* 0x0680d345 */ LDATA extern char public_680d345; // 'e'
/* 0x0680d346 */ LDATA extern char public_680d346; // 'd'
/* 0x0680d347 */ LDATA extern char public_680d347; // 'o'
/* 0x0680d348 */ LDATA extern char public_680d348; // ' '
/* 0x0680d349 */ LDATA extern char public_680d349; // '$'
/* 0x0680d34a */ LDATA extern char public_680d34a;
/* 0x0680d34b */ LDATA extern char public_680d34b;
/* 0x0680d34c */ LDATA extern char public_680d34c; // 'A'
/* 0x0680d34d */ LDATA extern char public_680d34d; // 'P'
/* 0x0680d34e */ LDATA extern char public_680d34e; // 'I'
/* 0x0680d34f */ LDATA extern char public_680d34f; // ' '
/* 0x0680d350 */ LDATA extern char public_680d350; // 'e'
/* 0x0680d351 */ LDATA extern char public_680d351; // 'r'
/* 0x0680d352 */ LDATA extern char public_680d352; // 'r'
/* 0x0680d353 */ LDATA extern char public_680d353; // 'o'
/* 0x0680d354 */ LDATA extern char public_680d354; // 'r'
/* 0x0680d355 */ LDATA extern char public_680d355; // ' '
/* 0x0680d356 */ LDATA extern char public_680d356; // '-'
/* 0x0680d357 */ LDATA extern char public_680d357; // ' '
/* 0x0680d358 */ LDATA extern char public_680d358; // 'w'
/* 0x0680d359 */ LDATA extern char public_680d359; // 'r'
/* 0x0680d35a */ LDATA extern char public_680d35a; // 'o'
/* 0x0680d35b */ LDATA extern char public_680d35b; // 'n'
/* 0x0680d35c */ LDATA extern char public_680d35c; // 'g'
/* 0x0680d35d */ LDATA extern char public_680d35d; // ' '
/* 0x0680d35e */ LDATA extern char public_680d35e; // 'n'
/* 0x0680d35f */ LDATA extern char public_680d35f; // 'u'
/* 0x0680d360 */ LDATA extern char public_680d360; // 'm'
/* 0x0680d361 */ LDATA extern char public_680d361; // 'b'
/* 0x0680d362 */ LDATA extern char public_680d362; // 'e'
/* 0x0680d363 */ LDATA extern char public_680d363; // 'r'
/* 0x0680d364 */ LDATA extern char public_680d364; // ' '
/* 0x0680d365 */ LDATA extern char public_680d365; // 'o'
/* 0x0680d366 */ LDATA extern char public_680d366; // 'f'
/* 0x0680d367 */ LDATA extern char public_680d367; // ' '
/* 0x0680d368 */ LDATA extern char public_680d368; // 'a'
/* 0x0680d369 */ LDATA extern char public_680d369; // 'r'
/* 0x0680d36a */ LDATA extern char public_680d36a; // 'g'
/* 0x0680d36b */ LDATA extern char public_680d36b; // 'u'
/* 0x0680d36c */ LDATA extern char public_680d36c; // 'm'
/* 0x0680d36d */ LDATA extern char public_680d36d; // 'e'
/* 0x0680d36e */ LDATA extern char public_680d36e; // 'n'
/* 0x0680d36f */ LDATA extern char public_680d36f; // 't'
/* 0x0680d370 */ LDATA extern char public_680d370; // 's'
/* 0x0680d371 */ LDATA extern char public_680d371; // ' '
/* 0x0680d372 */ LDATA extern char public_680d372; // 'i'
/* 0x0680d373 */ LDATA extern char public_680d373; // 'n'
/* 0x0680d374 */ LDATA extern char public_680d374; // ' '
/* 0x0680d375 */ LDATA extern char public_680d375; // 'C'
/* 0x0680d376 */ LDATA extern char public_680d376; // '2'
/* 0x0680d377 */ LDATA extern char public_680d377; // 'l'
/* 0x0680d378 */ LDATA extern char public_680d378; // 'u'
/* 0x0680d379 */ LDATA extern char public_680d379; // 'a'
/* 0x0680d37a */ LDATA extern char public_680d37a; // ' '
/* 0x0680d37b */ LDATA extern char public_680d37b; // 's'
/* 0x0680d37c */ LDATA extern char public_680d37c; // 't'
/* 0x0680d37d */ LDATA extern char public_680d37d; // 'a'
/* 0x0680d37e */ LDATA extern char public_680d37e; // 'c'
/* 0x0680d37f */ LDATA extern char public_680d37f; // 'k'
/* 0x0680d380 */ LDATA extern char public_680d380;
/* 0x0680d381 */ LDATA extern char public_680d381;
/* 0x0680d382 */ LDATA extern char public_680d382;
/* 0x0680d383 */ LDATA extern char public_680d383;
/* 0x0680d384 */ LDATA extern char public_680d384; // '_'
/* 0x0680d385 */ LDATA extern char public_680d385; // 'E'
/* 0x0680d386 */ LDATA extern char public_680d386; // 'R'
/* 0x0680d387 */ LDATA extern char public_680d387; // 'R'
/* 0x0680d388 */ LDATA extern char public_680d388; // 'O'
/* 0x0680d389 */ LDATA extern char public_680d389; // 'R'
/* 0x0680d38a */ LDATA extern char public_680d38a; // 'M'
/* 0x0680d38b */ LDATA extern char public_680d38b; // 'E'
/* 0x0680d38c */ LDATA extern char public_680d38c; // 'S'
/* 0x0680d38d */ LDATA extern char public_680d38d; // 'S'
/* 0x0680d38e */ LDATA extern char public_680d38e; // 'A'
/* 0x0680d38f */ LDATA extern char public_680d38f; // 'G'
/* 0x0680d390 */ LDATA extern char public_680d390; // 'E'
/* 0x0680d391 */ LDATA extern char public_680d391;
/* 0x0680d392 */ LDATA extern char public_680d392;
/* 0x0680d393 */ LDATA extern char public_680d393;
/* 0x0680d394 */ LDATA extern char public_680d394; // 'i'
/* 0x0680d395 */ LDATA extern char public_680d395; // 'n'
/* 0x0680d396 */ LDATA extern char public_680d396; // 'd'
/* 0x0680d397 */ LDATA extern char public_680d397; // 'e'
/* 0x0680d398 */ LDATA extern char public_680d398; // 'x'
/* 0x0680d399 */ LDATA extern char public_680d399; // 'e'
/* 0x0680d39a */ LDATA extern char public_680d39a; // 'd'
/* 0x0680d39b */ LDATA extern char public_680d39b; // ' '
/* 0x0680d39c */ LDATA extern char public_680d39c; // 'e'
/* 0x0680d39d */ LDATA extern char public_680d39d; // 'x'
/* 0x0680d39e */ LDATA extern char public_680d39e; // 'p'
/* 0x0680d39f */ LDATA extern char public_680d39f; // 'r'
/* 0x0680d3a0 */ LDATA extern char public_680d3a0; // 'e'
/* 0x0680d3a1 */ LDATA extern char public_680d3a1; // 's'
/* 0x0680d3a2 */ LDATA extern char public_680d3a2; // 's'
/* 0x0680d3a3 */ LDATA extern char public_680d3a3; // 'i'
/* 0x0680d3a4 */ LDATA extern char public_680d3a4; // 'o'
/* 0x0680d3a5 */ LDATA extern char public_680d3a5; // 'n'
/* 0x0680d3a6 */ LDATA extern char public_680d3a6; // ' '
/* 0x0680d3a7 */ LDATA extern char public_680d3a7; // 'n'
/* 0x0680d3a8 */ LDATA extern char public_680d3a8; // 'o'
/* 0x0680d3a9 */ LDATA extern char public_680d3a9; // 't'
/* 0x0680d3aa */ LDATA extern char public_680d3aa; // ' '
/* 0x0680d3ab */ LDATA extern char public_680d3ab; // 'a'
/* 0x0680d3ac */ LDATA extern char public_680d3ac; // ' '
/* 0x0680d3ad */ LDATA extern char public_680d3ad; // 't'
/* 0x0680d3ae */ LDATA extern char public_680d3ae; // 'a'
/* 0x0680d3af */ LDATA extern char public_680d3af; // 'b'
/* 0x0680d3b0 */ LDATA extern char public_680d3b0; // 'l'
/* 0x0680d3b1 */ LDATA extern char public_680d3b1; // 'e'
/* 0x0680d3b2 */ LDATA extern char public_680d3b2; // ' '
/* 0x0680d3b3 */ LDATA extern char public_680d3b3; // 'i'
/* 0x0680d3b4 */ LDATA extern char public_680d3b4; // 'n'
/* 0x0680d3b5 */ LDATA extern char public_680d3b5; // ' '
/* 0x0680d3b6 */ LDATA extern char public_680d3b6; // 'r'
/* 0x0680d3b7 */ LDATA extern char public_680d3b7; // 'a'
/* 0x0680d3b8 */ LDATA extern char public_680d3b8; // 'w'
/* 0x0680d3b9 */ LDATA extern char public_680d3b9; // 'g'
/* 0x0680d3ba */ LDATA extern char public_680d3ba; // 'e'
/* 0x0680d3bb */ LDATA extern char public_680d3bb; // 't'
/* 0x0680d3bc */ LDATA extern char public_680d3bc; // 't'
/* 0x0680d3bd */ LDATA extern char public_680d3bd; // 'a'
/* 0x0680d3be */ LDATA extern char public_680d3be; // 'b'
/* 0x0680d3bf */ LDATA extern char public_680d3bf; // 'l'
/* 0x0680d3c0 */ LDATA extern char public_680d3c0; // 'e'
/* 0x0680d3c1 */ LDATA extern char public_680d3c1;
/* 0x0680d3c2 */ LDATA extern char public_680d3c2;
/* 0x0680d3c3 */ LDATA extern char public_680d3c3;
/* 0x0680d3c4 */ LDATA extern char public_680d3c4; // 'A'
/* 0x0680d3c5 */ LDATA extern char public_680d3c5; // 'P'
/* 0x0680d3c6 */ LDATA extern char public_680d3c6; // 'I'
/* 0x0680d3c7 */ LDATA extern char public_680d3c7; // ' '
/* 0x0680d3c8 */ LDATA extern char public_680d3c8; // 'e'
/* 0x0680d3c9 */ LDATA extern char public_680d3c9; // 'r'
/* 0x0680d3ca */ LDATA extern char public_680d3ca; // 'r'
/* 0x0680d3cb */ LDATA extern char public_680d3cb; // 'o'
/* 0x0680d3cc */ LDATA extern char public_680d3cc; // 'r'
/* 0x0680d3cd */ LDATA extern char public_680d3cd; // ' '
/* 0x0680d3ce */ LDATA extern char public_680d3ce; // '-'
/* 0x0680d3cf */ LDATA extern char public_680d3cf; // ' '
/* 0x0680d3d0 */ LDATA extern char public_680d3d0; // 'a'
/* 0x0680d3d1 */ LDATA extern char public_680d3d1; // 't'
/* 0x0680d3d2 */ LDATA extern char public_680d3d2; // 't'
/* 0x0680d3d3 */ LDATA extern char public_680d3d3; // 'e'
/* 0x0680d3d4 */ LDATA extern char public_680d3d4; // 'm'
/* 0x0680d3d5 */ LDATA extern char public_680d3d5; // 'p'
/* 0x0680d3d6 */ LDATA extern char public_680d3d6; // 't'
/* 0x0680d3d7 */ LDATA extern char public_680d3d7; // ' '
/* 0x0680d3d8 */ LDATA extern char public_680d3d8; // 't'
/* 0x0680d3d9 */ LDATA extern char public_680d3d9; // 'o'
/* 0x0680d3da */ LDATA extern char public_680d3da; // ' '
/* 0x0680d3db */ LDATA extern char public_680d3db; // 'p'
/* 0x0680d3dc */ LDATA extern char public_680d3dc; // 'u'
/* 0x0680d3dd */ LDATA extern char public_680d3dd; // 's'
/* 0x0680d3de */ LDATA extern char public_680d3de; // 'h'
/* 0x0680d3df */ LDATA extern char public_680d3df; // ' '
/* 0x0680d3e0 */ LDATA extern char public_680d3e0; // 'a'
/* 0x0680d3e1 */ LDATA extern char public_680d3e1; // ' '
/* 0x0680d3e2 */ LDATA extern char public_680d3e2; // 'N'
/* 0x0680d3e3 */ LDATA extern char public_680d3e3; // 'U'
/* 0x0680d3e4 */ LDATA extern char public_680d3e4; // 'L'
/* 0x0680d3e5 */ LDATA extern char public_680d3e5; // 'L'
/* 0x0680d3e6 */ LDATA extern char public_680d3e6; // ' '
/* 0x0680d3e7 */ LDATA extern char public_680d3e7; // 'C'
/* 0x0680d3e8 */ LDATA extern char public_680d3e8; // 'f'
/* 0x0680d3e9 */ LDATA extern char public_680d3e9; // 'u'
/* 0x0680d3ea */ LDATA extern char public_680d3ea; // 'n'
/* 0x0680d3eb */ LDATA extern char public_680d3eb; // 'c'
/* 0x0680d3ec */ LDATA extern char public_680d3ec; // 't'
/* 0x0680d3ed */ LDATA extern char public_680d3ed; // 'i'
/* 0x0680d3ee */ LDATA extern char public_680d3ee; // 'o'
/* 0x0680d3ef */ LDATA extern char public_680d3ef; // 'n'
/* 0x0680d3f0 */ LDATA extern char public_680d3f0;
/* 0x0680d3f1 */ LDATA extern char public_680d3f1;
/* 0x0680d3f2 */ LDATA extern char public_680d3f2;
/* 0x0680d3f3 */ LDATA extern char public_680d3f3;
/* 0x0680d3f4 */ LDATA extern char public_680d3f4; // 'A'
/* 0x0680d3f5 */ LDATA extern char public_680d3f5; // 'P'
/* 0x0680d3f6 */ LDATA extern char public_680d3f6; // 'I'
/* 0x0680d3f7 */ LDATA extern char public_680d3f7; // ' '
/* 0x0680d3f8 */ LDATA extern char public_680d3f8; // 'e'
/* 0x0680d3f9 */ LDATA extern char public_680d3f9; // 'r'
/* 0x0680d3fa */ LDATA extern char public_680d3fa; // 'r'
/* 0x0680d3fb */ LDATA extern char public_680d3fb; // 'o'
/* 0x0680d3fc */ LDATA extern char public_680d3fc; // 'r'
/* 0x0680d3fd */ LDATA extern char public_680d3fd; // ' '
/* 0x0680d3fe */ LDATA extern char public_680d3fe; // '-'
/* 0x0680d3ff */ LDATA extern char public_680d3ff; // ' '
/* 0x0680d400 */ LDATA extern char public_680d400; // 'a'
/* 0x0680d401 */ LDATA extern char public_680d401; // 't'
/* 0x0680d402 */ LDATA extern char public_680d402; // 't'
/* 0x0680d403 */ LDATA extern char public_680d403; // 'e'
/* 0x0680d404 */ LDATA extern char public_680d404; // 'm'
/* 0x0680d405 */ LDATA extern char public_680d405; // 'p'
/* 0x0680d406 */ LDATA extern char public_680d406; // 't'
/* 0x0680d407 */ LDATA extern char public_680d407; // ' '
/* 0x0680d408 */ LDATA extern char public_680d408; // 't'
/* 0x0680d409 */ LDATA extern char public_680d409; // 'o'
/* 0x0680d40a */ LDATA extern char public_680d40a; // ' '
/* 0x0680d40b */ LDATA extern char public_680d40b; // 'p'
/* 0x0680d40c */ LDATA extern char public_680d40c; // 'u'
/* 0x0680d40d */ LDATA extern char public_680d40d; // 's'
/* 0x0680d40e */ LDATA extern char public_680d40e; // 'h'
/* 0x0680d40f */ LDATA extern char public_680d40f; // ' '
/* 0x0680d410 */ LDATA extern char public_680d410; // 'a'
/* 0x0680d411 */ LDATA extern char public_680d411; // ' '
/* 0x0680d412 */ LDATA extern char public_680d412; // 'N'
/* 0x0680d413 */ LDATA extern char public_680d413; // 'O'
/* 0x0680d414 */ LDATA extern char public_680d414; // 'O'
/* 0x0680d415 */ LDATA extern char public_680d415; // 'B'
/* 0x0680d416 */ LDATA extern char public_680d416; // 'J'
/* 0x0680d417 */ LDATA extern char public_680d417; // 'E'
/* 0x0680d418 */ LDATA extern char public_680d418; // 'C'
/* 0x0680d419 */ LDATA extern char public_680d419; // 'T'
/* 0x0680d41a */ LDATA extern char public_680d41a;
/* 0x0680d41b */ LDATA extern char public_680d41b;
/* 0x0680d41c */ LDATA extern char public_680d41c; // 'c'
/* 0x0680d41d */ LDATA extern char public_680d41d; // 'a'
/* 0x0680d41e */ LDATA extern char public_680d41e; // 'n'
/* 0x0680d41f */ LDATA extern char public_680d41f; // 'n'
/* 0x0680d420 */ LDATA extern char public_680d420; // 'o'
/* 0x0680d421 */ LDATA extern char public_680d421; // 't'
/* 0x0680d422 */ LDATA extern char public_680d422; // ' '
/* 0x0680d423 */ LDATA extern char public_680d423; // 'c'
/* 0x0680d424 */ LDATA extern char public_680d424; // 'h'
/* 0x0680d425 */ LDATA extern char public_680d425; // 'a'
/* 0x0680d426 */ LDATA extern char public_680d426; // 'n'
/* 0x0680d427 */ LDATA extern char public_680d427; // 'g'
/* 0x0680d428 */ LDATA extern char public_680d428; // 'e'
/* 0x0680d429 */ LDATA extern char public_680d429; // ' '
/* 0x0680d42a */ LDATA extern char public_680d42a; // 't'
/* 0x0680d42b */ LDATA extern char public_680d42b; // 'h'
/* 0x0680d42c */ LDATA extern char public_680d42c; // 'e'
/* 0x0680d42d */ LDATA extern char public_680d42d; // ' '
/* 0x0680d42e */ LDATA extern char public_680d42e; // 't'
/* 0x0680d42f */ LDATA extern char public_680d42f; // 'a'
/* 0x0680d430 */ LDATA extern char public_680d430; // 'g'
/* 0x0680d431 */ LDATA extern char public_680d431; // ' '
/* 0x0680d432 */ LDATA extern char public_680d432; // 'o'
/* 0x0680d433 */ LDATA extern char public_680d433; // 'f'
/* 0x0680d434 */ LDATA extern char public_680d434; // ' '
/* 0x0680d435 */ LDATA extern char public_680d435; // 'a'
/* 0x0680d436 */ LDATA extern char public_680d436; // ' '
/* 0x0680d437 */ LDATA extern char public_680d437; // '%'
/* 0x0680d438 */ LDATA extern char public_680d438; // '.'
/* 0x0680d439 */ LDATA extern char public_680d439; // '2'
/* 0x0680d43a */ LDATA extern char public_680d43a; // '0'
/* 0x0680d43b */ LDATA extern char public_680d43b; // 's'
/* 0x0680d43c */ LDATA extern char public_680d43c;
/* 0x0680d43d */ LDATA extern char public_680d43d;
/* 0x0680d43e */ LDATA extern char public_680d43e;
/* 0x0680d43f */ LDATA extern char public_680d43f;
/* 0x0680d440 */ LDATA extern char public_680d440; // 'v'
/* 0x0680d441 */ LDATA extern char public_680d441; // 'a'
/* 0x0680d442 */ LDATA extern char public_680d442; // 'r'
/* 0x0680d443 */ LDATA extern char public_680d443; // 'i'
/* 0x0680d444 */ LDATA extern char public_680d444; // 'a'
/* 0x0680d445 */ LDATA extern char public_680d445; // 'b'
/* 0x0680d446 */ LDATA extern char public_680d446; // 'l'
/* 0x0680d447 */ LDATA extern char public_680d447; // 'e'
/* 0x0680d448 */ LDATA extern char public_680d448; // ' '
/* 0x0680d449 */ LDATA extern char public_680d449; // 'n'
/* 0x0680d44a */ LDATA extern char public_680d44a; // 'a'
/* 0x0680d44b */ LDATA extern char public_680d44b; // 'm'
/* 0x0680d44c */ LDATA extern char public_680d44c; // 'e'
/* 0x0680d44d */ LDATA extern char public_680d44d; // ' '
/* 0x0680d44e */ LDATA extern char public_680d44e; // 'e'
/* 0x0680d44f */ LDATA extern char public_680d44f; // 'x'
/* 0x0680d450 */ LDATA extern char public_680d450; // 'p'
/* 0x0680d451 */ LDATA extern char public_680d451; // 'e'
/* 0x0680d452 */ LDATA extern char public_680d452; // 'c'
/* 0x0680d453 */ LDATA extern char public_680d453; // 't'
/* 0x0680d454 */ LDATA extern char public_680d454; // 'e'
/* 0x0680d455 */ LDATA extern char public_680d455; // 'd'
/* 0x0680d456 */ LDATA extern char public_680d456;
/* 0x0680d457 */ LDATA extern char public_680d457;
/* 0x0680d458 */ LDATA extern char public_680d458; // '('
/* 0x0680d459 */ LDATA extern char public_680d459; // 'C'
/* 0x0680d45a */ LDATA extern char public_680d45a; // ')'
/* 0x0680d45b */ LDATA extern char public_680d45b;
/* 0x0680d45c */ LDATA extern char public_680d45c; // 't'
/* 0x0680d45d */ LDATA extern char public_680d45d; // 'a'
/* 0x0680d45e */ LDATA extern char public_680d45e; // 'g'
/* 0x0680d45f */ LDATA extern char public_680d45f; // '-'
/* 0x0680d460 */ LDATA extern char public_680d460; // 'm'
/* 0x0680d461 */ LDATA extern char public_680d461; // 'e'
/* 0x0680d462 */ LDATA extern char public_680d462; // 't'
/* 0x0680d463 */ LDATA extern char public_680d463; // 'h'
/* 0x0680d464 */ LDATA extern char public_680d464; // 'o'
/* 0x0680d465 */ LDATA extern char public_680d465; // 'd'
/* 0x0680d466 */ LDATA extern char public_680d466;
/* 0x0680d467 */ LDATA extern char public_680d467;
/* 0x0680d468 */ LDATA extern char public_680d468; // 'g'
/* 0x0680d469 */ LDATA extern char public_680d469; // 'l'
/* 0x0680d46a */ LDATA extern char public_680d46a; // 'o'
/* 0x0680d46b */ LDATA extern char public_680d46b; // 'b'
/* 0x0680d46c */ LDATA extern char public_680d46c; // 'a'
/* 0x0680d46d */ LDATA extern char public_680d46d; // 'l'
/* 0x0680d46e */ LDATA extern char public_680d46e;
/* 0x0680d46f */ LDATA extern char public_680d46f;
/* 0x0680d470 */ LDATA extern char public_680d470; // 's'
/* 0x0680d471 */ LDATA extern char public_680d471; // 't'
/* 0x0680d472 */ LDATA extern char public_680d472; // 'a'
/* 0x0680d473 */ LDATA extern char public_680d473; // 'c'
/* 0x0680d474 */ LDATA extern char public_680d474; // 'k'
/* 0x0680d475 */ LDATA extern char public_680d475; // ' '
/* 0x0680d476 */ LDATA extern char public_680d476; // 's'
/* 0x0680d477 */ LDATA extern char public_680d477; // 'i'
/* 0x0680d478 */ LDATA extern char public_680d478; // 'z'
/* 0x0680d479 */ LDATA extern char public_680d479; // 'e'
/* 0x0680d47a */ LDATA extern char public_680d47a; // ' '
/* 0x0680d47b */ LDATA extern char public_680d47b; // 'o'
/* 0x0680d47c */ LDATA extern char public_680d47c; // 'v'
/* 0x0680d47d */ LDATA extern char public_680d47d; // 'e'
/* 0x0680d47e */ LDATA extern char public_680d47e; // 'r'
/* 0x0680d47f */ LDATA extern char public_680d47f; // 'f'
/* 0x0680d480 */ LDATA extern char public_680d480; // 'l'
/* 0x0680d481 */ LDATA extern char public_680d481; // 'o'
/* 0x0680d482 */ LDATA extern char public_680d482; // 'w'
/* 0x0680d483 */ LDATA extern char public_680d483;
/* 0x0680d484 */ LDATA extern char public_680d484; // 'L'
/* 0x0680d485 */ LDATA extern char public_680d485; // 'u'
/* 0x0680d486 */ LDATA extern char public_680d486; // 'a'
/* 0x0680d487 */ LDATA extern char public_680d487; // '2'
/* 0x0680d488 */ LDATA extern char public_680d488; // 'C'
/* 0x0680d489 */ LDATA extern char public_680d489; // ' '
/* 0x0680d48a */ LDATA extern char public_680d48a; // '-'
/* 0x0680d48b */ LDATA extern char public_680d48b; // ' '
/* 0x0680d48c */ LDATA extern char public_680d48c; // 'C'
/* 0x0680d48d */ LDATA extern char public_680d48d; // '2'
/* 0x0680d48e */ LDATA extern char public_680d48e; // 'L'
/* 0x0680d48f */ LDATA extern char public_680d48f; // 'u'
/* 0x0680d490 */ LDATA extern char public_680d490; // 'a'
/* 0x0680d491 */ LDATA extern char public_680d491; // ' '
/* 0x0680d492 */ LDATA extern char public_680d492; // 'o'
/* 0x0680d493 */ LDATA extern char public_680d493; // 'v'
/* 0x0680d494 */ LDATA extern char public_680d494; // 'e'
/* 0x0680d495 */ LDATA extern char public_680d495; // 'r'
/* 0x0680d496 */ LDATA extern char public_680d496; // 'f'
/* 0x0680d497 */ LDATA extern char public_680d497; // 'l'
/* 0x0680d498 */ LDATA extern char public_680d498; // 'o'
/* 0x0680d499 */ LDATA extern char public_680d499; // 'w'
/* 0x0680d49a */ LDATA extern char public_680d49a;
/* 0x0680d49b */ LDATA extern char public_680d49b;
/* 0x0680d49c */ LDATA extern char public_680d49c; // '('
/* 0x0680d49d */ LDATA extern char public_680d49d; // 'r'
/* 0x0680d49e */ LDATA extern char public_680d49e; // 'e'
/* 0x0680d49f */ LDATA extern char public_680d49f; // 't'
/* 0x0680d4a0 */ LDATA extern char public_680d4a0; // 'u'
/* 0x0680d4a1 */ LDATA extern char public_680d4a1; // 'r'
/* 0x0680d4a2 */ LDATA extern char public_680d4a2; // 'n'
/* 0x0680d4a3 */ LDATA extern char public_680d4a3; // ')'
/* 0x0680d4a4 */ LDATA extern char public_680d4a4;
/* 0x0680d4a5 */ LDATA extern char public_680d4a5;
/* 0x0680d4a6 */ LDATA extern char public_680d4a6;
/* 0x0680d4a7 */ LDATA extern char public_680d4a7;
/* 0x0680d4a8 */ LDATA extern char public_680d4a8; // 'c'
/* 0x0680d4a9 */ LDATA extern char public_680d4a9; // 'a'
/* 0x0680d4aa */ LDATA extern char public_680d4aa; // 'l'
/* 0x0680d4ab */ LDATA extern char public_680d4ab; // 'l'
/* 0x0680d4ac */ LDATA extern char public_680d4ac; // ' '
/* 0x0680d4ad */ LDATA extern char public_680d4ad; // 'e'
/* 0x0680d4ae */ LDATA extern char public_680d4ae; // 'x'
/* 0x0680d4af */ LDATA extern char public_680d4af; // 'p'
/* 0x0680d4b0 */ LDATA extern char public_680d4b0; // 'r'
/* 0x0680d4b1 */ LDATA extern char public_680d4b1; // 'e'
/* 0x0680d4b2 */ LDATA extern char public_680d4b2; // 's'
/* 0x0680d4b3 */ LDATA extern char public_680d4b3; // 's'
/* 0x0680d4b4 */ LDATA extern char public_680d4b4; // 'i'
/* 0x0680d4b5 */ LDATA extern char public_680d4b5; // 'o'
/* 0x0680d4b6 */ LDATA extern char public_680d4b6; // 'n'
/* 0x0680d4b7 */ LDATA extern char public_680d4b7; // ' '
/* 0x0680d4b8 */ LDATA extern char public_680d4b8; // 'n'
/* 0x0680d4b9 */ LDATA extern char public_680d4b9; // 'o'
/* 0x0680d4ba */ LDATA extern char public_680d4ba; // 't'
/* 0x0680d4bb */ LDATA extern char public_680d4bb; // ' '
/* 0x0680d4bc */ LDATA extern char public_680d4bc; // 'a'
/* 0x0680d4bd */ LDATA extern char public_680d4bd; // ' '
/* 0x0680d4be */ LDATA extern char public_680d4be; // 'f'
/* 0x0680d4bf */ LDATA extern char public_680d4bf; // 'u'
/* 0x0680d4c0 */ LDATA extern char public_680d4c0; // 'n'
/* 0x0680d4c1 */ LDATA extern char public_680d4c1; // 'c'
/* 0x0680d4c2 */ LDATA extern char public_680d4c2; // 't'
/* 0x0680d4c3 */ LDATA extern char public_680d4c3; // 'i'
/* 0x0680d4c4 */ LDATA extern char public_680d4c4; // 'o'
/* 0x0680d4c5 */ LDATA extern char public_680d4c5; // 'n'
/* 0x0680d4c6 */ LDATA extern char public_680d4c6;
/* 0x0680d4c7 */ LDATA extern char public_680d4c7;
/* 0x0680d4c8 */ LDATA extern char public_680d4c8; // 'e'
/* 0x0680d4c9 */ LDATA extern char public_680d4c9; // 'x'
/* 0x0680d4ca */ LDATA extern char public_680d4ca; // 'i'
/* 0x0680d4cb */ LDATA extern char public_680d4cb; // 't'
/* 0x0680d4cc */ LDATA extern char public_680d4cc; // '('
/* 0x0680d4cd */ LDATA extern char public_680d4cd; // '1'
/* 0x0680d4ce */ LDATA extern char public_680d4ce; // ')'
/* 0x0680d4cf */ LDATA extern char public_680d4cf; // '.'
/* 0x0680d4d0 */ LDATA extern char public_680d4d0; // ' '
/* 0x0680d4d1 */ LDATA extern char public_680d4d1; // 'U'
/* 0x0680d4d2 */ LDATA extern char public_680d4d2; // 'n'
/* 0x0680d4d3 */ LDATA extern char public_680d4d3; // 'a'
/* 0x0680d4d4 */ LDATA extern char public_680d4d4; // 'b'
/* 0x0680d4d5 */ LDATA extern char public_680d4d5; // 'l'
/* 0x0680d4d6 */ LDATA extern char public_680d4d6; // 'e'
/* 0x0680d4d7 */ LDATA extern char public_680d4d7; // ' '
/* 0x0680d4d8 */ LDATA extern char public_680d4d8; // 't'
/* 0x0680d4d9 */ LDATA extern char public_680d4d9; // 'o'
/* 0x0680d4da */ LDATA extern char public_680d4da; // ' '
/* 0x0680d4db */ LDATA extern char public_680d4db; // 'r'
/* 0x0680d4dc */ LDATA extern char public_680d4dc; // 'e'
/* 0x0680d4dd */ LDATA extern char public_680d4dd; // 'c'
/* 0x0680d4de */ LDATA extern char public_680d4de; // 'o'
/* 0x0680d4df */ LDATA extern char public_680d4df; // 'v'
/* 0x0680d4e0 */ LDATA extern char public_680d4e0; // 'e'
/* 0x0680d4e1 */ LDATA extern char public_680d4e1; // 'r'
/* 0x0680d4e2 */ LDATA extern char public_680d4e2; // '.'
/* 0x0680d4e3 */ LDATA extern char public_680d4e3;
/* 0x0680d4e4 */ LDATA extern char public_680d4e4;
/* 0x0680d4e5 */ LDATA extern char public_680d4e5;
/* 0x0680d4e6 */ LDATA extern char public_680d4e6;
/* 0x0680d4e7 */ LDATA extern char public_680d4e7;
/* 0x0680d4e8 */ LDATA extern char public_680d4e8; // 'r'
/* 0x0680d4e9 */ LDATA extern char public_680d4e9; // 'b'
/* 0x0680d4ea */ LDATA extern char public_680d4ea;
/* 0x0680d4eb */ LDATA extern char public_680d4eb;
/* 0x0680d4ec */ LDATA extern char public_680d4ec; // 'r'
/* 0x0680d4ed */ LDATA extern char public_680d4ed;
/* 0x0680d4ee */ LDATA extern char public_680d4ee;
/* 0x0680d4ef */ LDATA extern char public_680d4ef;
/* 0x0680d4f0 */ LDATA extern char public_680d4f0; // '?'
/* 0x0680d4f1 */ LDATA extern char public_680d4f1;
/* 0x0680d4f2 */ LDATA extern char public_680d4f2;
/* 0x0680d4f3 */ LDATA extern char public_680d4f3;
/* 0x0680d4f4 */ LDATA extern char public_680d4f4; // 'r'
/* 0x0680d4f5 */ LDATA extern char public_680d4f5; // 'e'
/* 0x0680d4f6 */ LDATA extern char public_680d4f6; // 'f'
/* 0x0680d4f7 */ LDATA extern char public_680d4f7; // 'e'
/* 0x0680d4f8 */ LDATA extern char public_680d4f8; // 'r'
/* 0x0680d4f9 */ LDATA extern char public_680d4f9; // 'e'
/* 0x0680d4fa */ LDATA extern char public_680d4fa; // 'n'
/* 0x0680d4fb */ LDATA extern char public_680d4fb; // 'c'
/* 0x0680d4fc */ LDATA extern char public_680d4fc; // 'e'
/* 0x0680d4fd */ LDATA extern char public_680d4fd; // ' '
/* 0x0680d4fe */ LDATA extern char public_680d4fe; // 't'
/* 0x0680d4ff */ LDATA extern char public_680d4ff; // 'a'
/* 0x0680d500 */ LDATA extern char public_680d500; // 'b'
/* 0x0680d501 */ LDATA extern char public_680d501; // 'l'
/* 0x0680d502 */ LDATA extern char public_680d502; // 'e'
/* 0x0680d503 */ LDATA extern char public_680d503; // ' '
/* 0x0680d504 */ LDATA extern char public_680d504; // 'o'
/* 0x0680d505 */ LDATA extern char public_680d505; // 'v'
/* 0x0680d506 */ LDATA extern char public_680d506; // 'e'
/* 0x0680d507 */ LDATA extern char public_680d507; // 'r'
/* 0x0680d508 */ LDATA extern char public_680d508; // 'f'
/* 0x0680d509 */ LDATA extern char public_680d509; // 'l'
/* 0x0680d50a */ LDATA extern char public_680d50a; // 'o'
/* 0x0680d50b */ LDATA extern char public_680d50b; // 'w'
/* 0x0680d50c */ LDATA extern char public_680d50c;
/* 0x0680d50d */ LDATA extern char public_680d50d;
/* 0x0680d50e */ LDATA extern char public_680d50e;
/* 0x0680d50f */ LDATA extern char public_680d50f;
/* 0x0680d510 */ LDATA extern char public_680d510;
/* 0x0680d511 */ LDATA extern char public_680d511;
/* 0x0680d512 */ LDATA extern char public_680d512;
/* 0x0680d513 */ LDATA extern char public_680d513;
/* 0x0680d514 */ LDATA extern char public_680d514;
/* 0x0680d515 */ LDATA extern char public_680d515;
/* 0x0680d516 */ LDATA extern char public_680d516;
/* 0x0680d517 */ LDATA extern char public_680d517;
/* 0x0680d518 */ LDATA extern char public_680d518; // '%'
/* 0x0680d519 */ LDATA extern char public_680d519; // '.'
/* 0x0680d51a */ LDATA extern char public_680d51a; // '1'
/* 0x0680d51b */ LDATA extern char public_680d51b; // '6'
/* 0x0680d51c */ LDATA extern char public_680d51c; // 'g'
/* 0x0680d51d */ LDATA extern char public_680d51d;
/* 0x0680d51e */ LDATA extern char public_680d51e;
/* 0x0680d51f */ LDATA extern char public_680d51f;
/* 0x0680d520 */ LDATA extern char public_680d520; // 'n'
/* 0x0680d521 */ LDATA extern char public_680d521;
/* 0x0680d522 */ LDATA extern char public_680d522;
/* 0x0680d523 */ LDATA extern char public_680d523;
/* 0x0680d524 */ LDATA extern char public_680d524; // 'i'
/* 0x0680d525 */ LDATA extern char public_680d525; // 'n'
/* 0x0680d526 */ LDATA extern char public_680d526; // 'd'
/* 0x0680d527 */ LDATA extern char public_680d527; // 'e'
/* 0x0680d528 */ LDATA extern char public_680d528; // 'x'
/* 0x0680d529 */ LDATA extern char public_680d529; // 'e'
/* 0x0680d52a */ LDATA extern char public_680d52a; // 'd'
/* 0x0680d52b */ LDATA extern char public_680d52b; // ' '
/* 0x0680d52c */ LDATA extern char public_680d52c; // 'e'
/* 0x0680d52d */ LDATA extern char public_680d52d; // 'x'
/* 0x0680d52e */ LDATA extern char public_680d52e; // 'p'
/* 0x0680d52f */ LDATA extern char public_680d52f; // 'r'
/* 0x0680d530 */ LDATA extern char public_680d530; // 'e'
/* 0x0680d531 */ LDATA extern char public_680d531; // 's'
/* 0x0680d532 */ LDATA extern char public_680d532; // 's'
/* 0x0680d533 */ LDATA extern char public_680d533; // 'i'
/* 0x0680d534 */ LDATA extern char public_680d534; // 'o'
/* 0x0680d535 */ LDATA extern char public_680d535; // 'n'
/* 0x0680d536 */ LDATA extern char public_680d536; // ' '
/* 0x0680d537 */ LDATA extern char public_680d537; // 'n'
/* 0x0680d538 */ LDATA extern char public_680d538; // 'o'
/* 0x0680d539 */ LDATA extern char public_680d539; // 't'
/* 0x0680d53a */ LDATA extern char public_680d53a; // ' '
/* 0x0680d53b */ LDATA extern char public_680d53b; // 'a'
/* 0x0680d53c */ LDATA extern char public_680d53c; // ' '
/* 0x0680d53d */ LDATA extern char public_680d53d; // 't'
/* 0x0680d53e */ LDATA extern char public_680d53e; // 'a'
/* 0x0680d53f */ LDATA extern char public_680d53f; // 'b'
/* 0x0680d540 */ LDATA extern char public_680d540; // 'l'
/* 0x0680d541 */ LDATA extern char public_680d541; // 'e'
/* 0x0680d542 */ LDATA extern char public_680d542;
/* 0x0680d543 */ LDATA extern char public_680d543;
/* 0x0680d544 */ LDATA extern char public_680d544; // 'u'
/* 0x0680d545 */ LDATA extern char public_680d545; // 'n'
/* 0x0680d546 */ LDATA extern char public_680d546; // 'e'
/* 0x0680d547 */ LDATA extern char public_680d547; // 'x'
/* 0x0680d548 */ LDATA extern char public_680d548; // 'p'
/* 0x0680d549 */ LDATA extern char public_680d549; // 'e'
/* 0x0680d54a */ LDATA extern char public_680d54a; // 'c'
/* 0x0680d54b */ LDATA extern char public_680d54b; // 't'
/* 0x0680d54c */ LDATA extern char public_680d54c; // 'e'
/* 0x0680d54d */ LDATA extern char public_680d54d; // 'd'
/* 0x0680d54e */ LDATA extern char public_680d54e; // ' '
/* 0x0680d54f */ LDATA extern char public_680d54f; // 't'
/* 0x0680d550 */ LDATA extern char public_680d550; // 'y'
/* 0x0680d551 */ LDATA extern char public_680d551; // 'p'
/* 0x0680d552 */ LDATA extern char public_680d552; // 'e'
/* 0x0680d553 */ LDATA extern char public_680d553; // ' '
/* 0x0680d554 */ LDATA extern char public_680d554; // 'i'
/* 0x0680d555 */ LDATA extern char public_680d555; // 'n'
/* 0x0680d556 */ LDATA extern char public_680d556; // ' '
/* 0x0680d557 */ LDATA extern char public_680d557; // 'c'
/* 0x0680d558 */ LDATA extern char public_680d558; // 'o'
/* 0x0680d559 */ LDATA extern char public_680d559; // 'm'
/* 0x0680d55a */ LDATA extern char public_680d55a; // 'p'
/* 0x0680d55b */ LDATA extern char public_680d55b; // 'a'
/* 0x0680d55c */ LDATA extern char public_680d55c; // 'r'
/* 0x0680d55d */ LDATA extern char public_680d55d; // 'i'
/* 0x0680d55e */ LDATA extern char public_680d55e; // 's'
/* 0x0680d55f */ LDATA extern char public_680d55f; // 'o'
/* 0x0680d560 */ LDATA extern char public_680d560; // 'n'
/* 0x0680d561 */ LDATA extern char public_680d561;
/* 0x0680d562 */ LDATA extern char public_680d562;
/* 0x0680d563 */ LDATA extern char public_680d563;
/* 0x0680d564 */ LDATA extern char public_680d564; // 'u'
/* 0x0680d565 */ LDATA extern char public_680d565; // 'n'
/* 0x0680d566 */ LDATA extern char public_680d566; // 'e'
/* 0x0680d567 */ LDATA extern char public_680d567; // 'x'
/* 0x0680d568 */ LDATA extern char public_680d568; // 'p'
/* 0x0680d569 */ LDATA extern char public_680d569; // 'e'
/* 0x0680d56a */ LDATA extern char public_680d56a; // 'c'
/* 0x0680d56b */ LDATA extern char public_680d56b; // 't'
/* 0x0680d56c */ LDATA extern char public_680d56c; // 'e'
/* 0x0680d56d */ LDATA extern char public_680d56d; // 'd'
/* 0x0680d56e */ LDATA extern char public_680d56e; // ' '
/* 0x0680d56f */ LDATA extern char public_680d56f; // 't'
/* 0x0680d570 */ LDATA extern char public_680d570; // 'y'
/* 0x0680d571 */ LDATA extern char public_680d571; // 'p'
/* 0x0680d572 */ LDATA extern char public_680d572; // 'e'
/* 0x0680d573 */ LDATA extern char public_680d573; // ' '
/* 0x0680d574 */ LDATA extern char public_680d574; // 'f'
/* 0x0680d575 */ LDATA extern char public_680d575; // 'o'
/* 0x0680d576 */ LDATA extern char public_680d576; // 'r'
/* 0x0680d577 */ LDATA extern char public_680d577; // ' '
/* 0x0680d578 */ LDATA extern char public_680d578; // 'c'
/* 0x0680d579 */ LDATA extern char public_680d579; // 'o'
/* 0x0680d57a */ LDATA extern char public_680d57a; // 'n'
/* 0x0680d57b */ LDATA extern char public_680d57b; // 'c'
/* 0x0680d57c */ LDATA extern char public_680d57c; // 'a'
/* 0x0680d57d */ LDATA extern char public_680d57d; // 't'
/* 0x0680d57e */ LDATA extern char public_680d57e; // 'e'
/* 0x0680d57f */ LDATA extern char public_680d57f; // 'n'
/* 0x0680d580 */ LDATA extern char public_680d580; // 'a'
/* 0x0680d581 */ LDATA extern char public_680d581; // 't'
/* 0x0680d582 */ LDATA extern char public_680d582; // 'i'
/* 0x0680d583 */ LDATA extern char public_680d583; // 'o'
/* 0x0680d584 */ LDATA extern char public_680d584; // 'n'
/* 0x0680d585 */ LDATA extern char public_680d585;
/* 0x0680d586 */ LDATA extern char public_680d586;
/* 0x0680d587 */ LDATA extern char public_680d587;
/* 0x0680d588 */ LDATA extern char public_680d588; // 'u'
/* 0x0680d589 */ LDATA extern char public_680d589; // 'n'
/* 0x0680d58a */ LDATA extern char public_680d58a; // 'd'
/* 0x0680d58b */ LDATA extern char public_680d58b; // 'e'
/* 0x0680d58c */ LDATA extern char public_680d58c; // 'f'
/* 0x0680d58d */ LDATA extern char public_680d58d; // 'i'
/* 0x0680d58e */ LDATA extern char public_680d58e; // 'n'
/* 0x0680d58f */ LDATA extern char public_680d58f; // 'e'
/* 0x0680d590 */ LDATA extern char public_680d590; // 'd'
/* 0x0680d591 */ LDATA extern char public_680d591; // ' '
/* 0x0680d592 */ LDATA extern char public_680d592; // 'o'
/* 0x0680d593 */ LDATA extern char public_680d593; // 'p'
/* 0x0680d594 */ LDATA extern char public_680d594; // 'e'
/* 0x0680d595 */ LDATA extern char public_680d595; // 'r'
/* 0x0680d596 */ LDATA extern char public_680d596; // 'a'
/* 0x0680d597 */ LDATA extern char public_680d597; // 't'
/* 0x0680d598 */ LDATA extern char public_680d598; // 'i'
/* 0x0680d599 */ LDATA extern char public_680d599; // 'o'
/* 0x0680d59a */ LDATA extern char public_680d59a; // 'n'
/* 0x0680d59b */ LDATA extern char public_680d59b;
/* 0x0680d59c */ LDATA extern char public_680d59c; // 'u'
/* 0x0680d59d */ LDATA extern char public_680d59d; // 'n'
/* 0x0680d59e */ LDATA extern char public_680d59e; // 'e'
/* 0x0680d59f */ LDATA extern char public_680d59f; // 'x'
/* 0x0680d5a0 */ LDATA extern char public_680d5a0; // 'p'
/* 0x0680d5a1 */ LDATA extern char public_680d5a1; // 'e'
/* 0x0680d5a2 */ LDATA extern char public_680d5a2; // 'c'
/* 0x0680d5a3 */ LDATA extern char public_680d5a3; // 't'
/* 0x0680d5a4 */ LDATA extern char public_680d5a4; // 'e'
/* 0x0680d5a5 */ LDATA extern char public_680d5a5; // 'd'
/* 0x0680d5a6 */ LDATA extern char public_680d5a6; // ' '
/* 0x0680d5a7 */ LDATA extern char public_680d5a7; // 't'
/* 0x0680d5a8 */ LDATA extern char public_680d5a8; // 'y'
/* 0x0680d5a9 */ LDATA extern char public_680d5a9; // 'p'
/* 0x0680d5aa */ LDATA extern char public_680d5aa; // 'e'
/* 0x0680d5ab */ LDATA extern char public_680d5ab; // ' '
/* 0x0680d5ac */ LDATA extern char public_680d5ac; // 'i'
/* 0x0680d5ad */ LDATA extern char public_680d5ad; // 'n'
/* 0x0680d5ae */ LDATA extern char public_680d5ae; // ' '
/* 0x0680d5af */ LDATA extern char public_680d5af; // 'a'
/* 0x0680d5b0 */ LDATA extern char public_680d5b0; // 'r'
/* 0x0680d5b1 */ LDATA extern char public_680d5b1; // 'i'
/* 0x0680d5b2 */ LDATA extern char public_680d5b2; // 't'
/* 0x0680d5b3 */ LDATA extern char public_680d5b3; // 'h'
/* 0x0680d5b4 */ LDATA extern char public_680d5b4; // 'm'
/* 0x0680d5b5 */ LDATA extern char public_680d5b5; // 'e'
/* 0x0680d5b6 */ LDATA extern char public_680d5b6; // 't'
/* 0x0680d5b7 */ LDATA extern char public_680d5b7; // 'i'
/* 0x0680d5b8 */ LDATA extern char public_680d5b8; // 'c'
/* 0x0680d5b9 */ LDATA extern char public_680d5b9; // ' '
/* 0x0680d5ba */ LDATA extern char public_680d5ba; // 'o'
/* 0x0680d5bb */ LDATA extern char public_680d5bb; // 'p'
/* 0x0680d5bc */ LDATA extern char public_680d5bc; // 'e'
/* 0x0680d5bd */ LDATA extern char public_680d5bd; // 'r'
/* 0x0680d5be */ LDATA extern char public_680d5be; // 'a'
/* 0x0680d5bf */ LDATA extern char public_680d5bf; // 't'
/* 0x0680d5c0 */ LDATA extern char public_680d5c0; // 'i'
/* 0x0680d5c1 */ LDATA extern char public_680d5c1; // 'o'
/* 0x0680d5c2 */ LDATA extern char public_680d5c2; // 'n'
/* 0x0680d5c3 */ LDATA extern char public_680d5c3;
/* 0x0680d5c4 */ LDATA extern void const* public_680d5c4;
/* 0x0680d5c8 */ LDATA extern void const* public_680d5c8;
/* 0x0680d5cc */ LDATA extern void const* public_680d5cc;
/* 0x0680d5d0 */ LDATA extern void const* public_680d5d0;
/* 0x0680d5d4 */ LDATA extern void const* public_680d5d4;
/* 0x0680d5d8 */ LDATA extern void const* public_680d5d8;
/* 0x0680d5dc */ LDATA extern void const* public_680d5dc;
/* 0x0680d5e0 */ LDATA extern void const* public_680d5e0;
/* 0x0680d5e4 */ LDATA extern void const* public_680d5e4;
/* 0x0680d5e8 */ LDATA extern void const* public_680d5e8;
/* 0x0680d5ec */ LDATA extern void const* public_680d5ec;
/* 0x0680d5f0 */ LDATA extern void const* public_680d5f0;
/* 0x0680d5f4 */ LDATA extern void const* public_680d5f4;
/* 0x0680d5f8 */ LDATA extern void const* public_680d5f8;
/* 0x0680d5fc */ LDATA extern void const* public_680d5fc;
/* 0x0680d600 */ LDATA extern void const* public_680d600;
/* 0x0680d604 */ LDATA extern void const* public_680d604;
/* 0x0680d608 */ LDATA extern void const* public_680d608;
/* 0x0680d60c */ LDATA extern char public_680d60c;
/* 0x0680d60d */ LDATA extern char public_680d60d;
/* 0x0680d60e */ LDATA extern char public_680d60e;
/* 0x0680d60f */ LDATA extern char public_680d60f;
/* 0x0680d610 */ LDATA extern char public_680d610;
/* 0x0680d611 */ LDATA extern char public_680d611;
/* 0x0680d612 */ LDATA extern char public_680d612;
/* 0x0680d613 */ LDATA extern char public_680d613;
/* 0x0680d614 */ LDATA extern char public_680d614;
/* 0x0680d615 */ LDATA extern char public_680d615;
/* 0x0680d616 */ LDATA extern char public_680d616;
/* 0x0680d617 */ LDATA extern char public_680d617;
/* 0x0680d618 */ LDATA extern char public_680d618;
/* 0x0680d619 */ LDATA extern char public_680d619;
/* 0x0680d61a */ LDATA extern char public_680d61a;
/* 0x0680d61b */ LDATA extern char public_680d61b;
/* 0x0680d61c */ LDATA extern char public_680d61c;
/* 0x0680d61d */ LDATA extern char public_680d61d;
/* 0x0680d61e */ LDATA extern char public_680d61e;
/* 0x0680d61f */ LDATA extern char public_680d61f;
/* 0x0680d620 */ LDATA extern char public_680d620;
/* 0x0680d621 */ LDATA extern char public_680d621;
/* 0x0680d622 */ LDATA extern char public_680d622;
/* 0x0680d623 */ LDATA extern char public_680d623;
/* 0x0680d624 */ LDATA extern char public_680d624;
/* 0x0680d625 */ LDATA extern char public_680d625;
/* 0x0680d626 */ LDATA extern char public_680d626;
/* 0x0680d627 */ LDATA extern char public_680d627;
/* 0x0680d628 */ LDATA extern char public_680d628;
/* 0x0680d629 */ LDATA extern char public_680d629;
/* 0x0680d62a */ LDATA extern char public_680d62a;
/* 0x0680d62b */ LDATA extern char public_680d62b;
/* 0x0680d62c */ LDATA extern char public_680d62c;
/* 0x0680d62d */ LDATA extern char public_680d62d;
/* 0x0680d62e */ LDATA extern char public_680d62e;
/* 0x0680d62f */ LDATA extern char public_680d62f;
/* 0x0680d630 */ LDATA extern char public_680d630;
/* 0x0680d631 */ LDATA extern char public_680d631;
/* 0x0680d632 */ LDATA extern char public_680d632;
/* 0x0680d633 */ LDATA extern char public_680d633;
/* 0x0680d634 */ LDATA extern char public_680d634;
/* 0x0680d635 */ LDATA extern char public_680d635;
/* 0x0680d636 */ LDATA extern char public_680d636;
/* 0x0680d637 */ LDATA extern char public_680d637;
/* 0x0680d638 */ LDATA extern char public_680d638;
/* 0x0680d639 */ LDATA extern char public_680d639;
/* 0x0680d63a */ LDATA extern char public_680d63a;
/* 0x0680d63b */ LDATA extern char public_680d63b;
/* 0x0680d63c */ LDATA extern char public_680d63c;
/* 0x0680d63d */ LDATA extern char public_680d63d;
/* 0x0680d63e */ LDATA extern char public_680d63e;
/* 0x0680d63f */ LDATA extern char public_680d63f;
/* 0x0680d640 */ LDATA extern char public_680d640;
/* 0x0680d641 */ LDATA extern char public_680d641;
/* 0x0680d642 */ LDATA extern char public_680d642;
/* 0x0680d643 */ LDATA extern char public_680d643;
/* 0x0680d644 */ LDATA extern char public_680d644;
/* 0x0680d645 */ LDATA extern char public_680d645;
/* 0x0680d646 */ LDATA extern char public_680d646;
/* 0x0680d647 */ LDATA extern char public_680d647;
/* 0x0680d648 */ LDATA extern char public_680d648;
/* 0x0680d649 */ LDATA extern char public_680d649;
/* 0x0680d64a */ LDATA extern char public_680d64a;
/* 0x0680d64b */ LDATA extern char public_680d64b;
/* 0x0680d64c */ LDATA extern char public_680d64c;
/* 0x0680d64d */ LDATA extern char public_680d64d;
/* 0x0680d64e */ LDATA extern char public_680d64e;
/* 0x0680d64f */ LDATA extern char public_680d64f;
/* 0x0680d650 */ LDATA extern char public_680d650;
/* 0x0680d651 */ LDATA extern char public_680d651;
/* 0x0680d652 */ LDATA extern char public_680d652;
/* 0x0680d653 */ LDATA extern char public_680d653;
/* 0x0680d654 */ LDATA extern char public_680d654;
/* 0x0680d655 */ LDATA extern char public_680d655;
/* 0x0680d656 */ LDATA extern char public_680d656;
/* 0x0680d657 */ LDATA extern char public_680d657;
/* 0x0680d658 */ LDATA extern char public_680d658;
/* 0x0680d659 */ LDATA extern char public_680d659;
/* 0x0680d65a */ LDATA extern char public_680d65a;
/* 0x0680d65b */ LDATA extern char public_680d65b;
/* 0x0680d65c */ LDATA extern char public_680d65c;
/* 0x0680d65d */ LDATA extern char public_680d65d;
/* 0x0680d65e */ LDATA extern char public_680d65e;
/* 0x0680d65f */ LDATA extern char public_680d65f;
/* 0x0680d660 */ LDATA extern char public_680d660;
/* 0x0680d661 */ LDATA extern char public_680d661;
/* 0x0680d662 */ LDATA extern char public_680d662;
/* 0x0680d663 */ LDATA extern char public_680d663;
/* 0x0680d664 */ LDATA extern char public_680d664;
/* 0x0680d665 */ LDATA extern char public_680d665;
/* 0x0680d666 */ LDATA extern char public_680d666;
/* 0x0680d667 */ LDATA extern char public_680d667;
/* 0x0680d668 */ LDATA extern char public_680d668;
/* 0x0680d669 */ LDATA extern char public_680d669;
/* 0x0680d66a */ LDATA extern char public_680d66a;
/* 0x0680d66b */ LDATA extern char public_680d66b;
/* 0x0680d66c */ LDATA extern char public_680d66c;
/* 0x0680d66d */ LDATA extern char public_680d66d;
/* 0x0680d66e */ LDATA extern char public_680d66e;
/* 0x0680d66f */ LDATA extern char public_680d66f;
/* 0x0680d670 */ LDATA extern char public_680d670;
/* 0x0680d671 */ LDATA extern char public_680d671;
/* 0x0680d672 */ LDATA extern char public_680d672;
/* 0x0680d673 */ LDATA extern char public_680d673;
/* 0x0680d674 */ LDATA extern char public_680d674;
/* 0x0680d675 */ LDATA extern char public_680d675;
/* 0x0680d676 */ LDATA extern char public_680d676;
/* 0x0680d677 */ LDATA extern char public_680d677;
/* 0x0680d678 */ LDATA extern char public_680d678;
/* 0x0680d679 */ LDATA extern char public_680d679;
/* 0x0680d67a */ LDATA extern char public_680d67a;
/* 0x0680d67b */ LDATA extern char public_680d67b;
/* 0x0680d67c */ LDATA extern char public_680d67c;
/* 0x0680d67d */ LDATA extern char public_680d67d;
/* 0x0680d67e */ LDATA extern char public_680d67e;
/* 0x0680d67f */ LDATA extern char public_680d67f;
/* 0x0680d680 */ LDATA extern char public_680d680;
/* 0x0680d681 */ LDATA extern char public_680d681;
/* 0x0680d682 */ LDATA extern char public_680d682;
/* 0x0680d683 */ LDATA extern char public_680d683;
/* 0x0680d684 */ LDATA extern char public_680d684;
/* 0x0680d685 */ LDATA extern char public_680d685;
/* 0x0680d686 */ LDATA extern char public_680d686;
/* 0x0680d687 */ LDATA extern char public_680d687;
/* 0x0680d688 */ LDATA extern char public_680d688;
/* 0x0680d689 */ LDATA extern char public_680d689;
/* 0x0680d68a */ LDATA extern char public_680d68a;
/* 0x0680d68b */ LDATA extern char public_680d68b;
/* 0x0680d68c */ LDATA extern char public_680d68c;
/* 0x0680d68d */ LDATA extern char public_680d68d;
/* 0x0680d68e */ LDATA extern char public_680d68e;
/* 0x0680d68f */ LDATA extern char public_680d68f;
/* 0x0680d690 */ LDATA extern char public_680d690; // 'f'
/* 0x0680d691 */ LDATA extern char public_680d691; // 'u'
/* 0x0680d692 */ LDATA extern char public_680d692; // 'n'
/* 0x0680d693 */ LDATA extern char public_680d693; // 'c'
/* 0x0680d694 */ LDATA extern char public_680d694; // 't'
/* 0x0680d695 */ LDATA extern char public_680d695; // 'i'
/* 0x0680d696 */ LDATA extern char public_680d696; // 'o'
/* 0x0680d697 */ LDATA extern char public_680d697; // 'n'
/* 0x0680d698 */ LDATA extern char public_680d698;
/* 0x0680d699 */ LDATA extern char public_680d699;
/* 0x0680d69a */ LDATA extern char public_680d69a;
/* 0x0680d69b */ LDATA extern char public_680d69b;
/* 0x0680d69c */ LDATA extern char public_680d69c; // 'g'
/* 0x0680d69d */ LDATA extern char public_680d69d; // 'c'
/* 0x0680d69e */ LDATA extern char public_680d69e;
/* 0x0680d69f */ LDATA extern char public_680d69f;
/* 0x0680d6a0 */ LDATA extern char public_680d6a0; // 'c'
/* 0x0680d6a1 */ LDATA extern char public_680d6a1; // 'o'
/* 0x0680d6a2 */ LDATA extern char public_680d6a2; // 'n'
/* 0x0680d6a3 */ LDATA extern char public_680d6a3; // 'c'
/* 0x0680d6a4 */ LDATA extern char public_680d6a4; // 'a'
/* 0x0680d6a5 */ LDATA extern char public_680d6a5; // 't'
/* 0x0680d6a6 */ LDATA extern char public_680d6a6;
/* 0x0680d6a7 */ LDATA extern char public_680d6a7;
/* 0x0680d6a8 */ LDATA extern char public_680d6a8; // 'g'
/* 0x0680d6a9 */ LDATA extern char public_680d6a9; // 'e'
/* 0x0680d6aa */ LDATA extern char public_680d6aa;
/* 0x0680d6ab */ LDATA extern char public_680d6ab;
/* 0x0680d6ac */ LDATA extern char public_680d6ac; // 'g'
/* 0x0680d6ad */ LDATA extern char public_680d6ad; // 't'
/* 0x0680d6ae */ LDATA extern char public_680d6ae;
/* 0x0680d6af */ LDATA extern char public_680d6af;
/* 0x0680d6b0 */ LDATA extern char public_680d6b0; // 'l'
/* 0x0680d6b1 */ LDATA extern char public_680d6b1; // 'e'
/* 0x0680d6b2 */ LDATA extern char public_680d6b2;
/* 0x0680d6b3 */ LDATA extern char public_680d6b3;
/* 0x0680d6b4 */ LDATA extern char public_680d6b4; // 'l'
/* 0x0680d6b5 */ LDATA extern char public_680d6b5; // 't'
/* 0x0680d6b6 */ LDATA extern char public_680d6b6;
/* 0x0680d6b7 */ LDATA extern char public_680d6b7;
/* 0x0680d6b8 */ LDATA extern char public_680d6b8; // 'u'
/* 0x0680d6b9 */ LDATA extern char public_680d6b9; // 'n'
/* 0x0680d6ba */ LDATA extern char public_680d6ba; // 'm'
/* 0x0680d6bb */ LDATA extern char public_680d6bb;
/* 0x0680d6bc */ LDATA extern char public_680d6bc; // 'p'
/* 0x0680d6bd */ LDATA extern char public_680d6bd; // 'o'
/* 0x0680d6be */ LDATA extern char public_680d6be; // 'w'
/* 0x0680d6bf */ LDATA extern char public_680d6bf;
/* 0x0680d6c0 */ LDATA extern char public_680d6c0; // 'd'
/* 0x0680d6c1 */ LDATA extern char public_680d6c1; // 'i'
/* 0x0680d6c2 */ LDATA extern char public_680d6c2; // 'v'
/* 0x0680d6c3 */ LDATA extern char public_680d6c3;
/* 0x0680d6c4 */ LDATA extern char public_680d6c4; // 'm'
/* 0x0680d6c5 */ LDATA extern char public_680d6c5; // 'u'
/* 0x0680d6c6 */ LDATA extern char public_680d6c6; // 'l'
/* 0x0680d6c7 */ LDATA extern char public_680d6c7;
/* 0x0680d6c8 */ LDATA extern char public_680d6c8; // 's'
/* 0x0680d6c9 */ LDATA extern char public_680d6c9; // 'u'
/* 0x0680d6ca */ LDATA extern char public_680d6ca; // 'b'
/* 0x0680d6cb */ LDATA extern char public_680d6cb;
/* 0x0680d6cc */ LDATA extern char public_680d6cc; // 'a'
/* 0x0680d6cd */ LDATA extern char public_680d6cd; // 'd'
/* 0x0680d6ce */ LDATA extern char public_680d6ce; // 'd'
/* 0x0680d6cf */ LDATA extern char public_680d6cf;
/* 0x0680d6d0 */ LDATA extern char public_680d6d0; // 's'
/* 0x0680d6d1 */ LDATA extern char public_680d6d1; // 'e'
/* 0x0680d6d2 */ LDATA extern char public_680d6d2; // 't'
/* 0x0680d6d3 */ LDATA extern char public_680d6d3; // 'g'
/* 0x0680d6d4 */ LDATA extern char public_680d6d4; // 'l'
/* 0x0680d6d5 */ LDATA extern char public_680d6d5; // 'o'
/* 0x0680d6d6 */ LDATA extern char public_680d6d6; // 'b'
/* 0x0680d6d7 */ LDATA extern char public_680d6d7; // 'a'
/* 0x0680d6d8 */ LDATA extern char public_680d6d8; // 'l'
/* 0x0680d6d9 */ LDATA extern char public_680d6d9;
/* 0x0680d6da */ LDATA extern char public_680d6da;
/* 0x0680d6db */ LDATA extern char public_680d6db;
/* 0x0680d6dc */ LDATA extern char public_680d6dc; // 'g'
/* 0x0680d6dd */ LDATA extern char public_680d6dd; // 'e'
/* 0x0680d6de */ LDATA extern char public_680d6de; // 't'
/* 0x0680d6df */ LDATA extern char public_680d6df; // 'g'
/* 0x0680d6e0 */ LDATA extern char public_680d6e0; // 'l'
/* 0x0680d6e1 */ LDATA extern char public_680d6e1; // 'o'
/* 0x0680d6e2 */ LDATA extern char public_680d6e2; // 'b'
/* 0x0680d6e3 */ LDATA extern char public_680d6e3; // 'a'
/* 0x0680d6e4 */ LDATA extern char public_680d6e4; // 'l'
/* 0x0680d6e5 */ LDATA extern char public_680d6e5;
/* 0x0680d6e6 */ LDATA extern char public_680d6e6;
/* 0x0680d6e7 */ LDATA extern char public_680d6e7;
/* 0x0680d6e8 */ LDATA extern char public_680d6e8; // 'i'
/* 0x0680d6e9 */ LDATA extern char public_680d6e9; // 'n'
/* 0x0680d6ea */ LDATA extern char public_680d6ea; // 'd'
/* 0x0680d6eb */ LDATA extern char public_680d6eb; // 'e'
/* 0x0680d6ec */ LDATA extern char public_680d6ec; // 'x'
/* 0x0680d6ed */ LDATA extern char public_680d6ed;
/* 0x0680d6ee */ LDATA extern char public_680d6ee;
/* 0x0680d6ef */ LDATA extern char public_680d6ef;
/* 0x0680d6f0 */ LDATA extern char public_680d6f0; // 's'
/* 0x0680d6f1 */ LDATA extern char public_680d6f1; // 'e'
/* 0x0680d6f2 */ LDATA extern char public_680d6f2; // 't'
/* 0x0680d6f3 */ LDATA extern char public_680d6f3; // 't'
/* 0x0680d6f4 */ LDATA extern char public_680d6f4; // 'a'
/* 0x0680d6f5 */ LDATA extern char public_680d6f5; // 'b'
/* 0x0680d6f6 */ LDATA extern char public_680d6f6; // 'l'
/* 0x0680d6f7 */ LDATA extern char public_680d6f7; // 'e'
/* 0x0680d6f8 */ LDATA extern char public_680d6f8;
/* 0x0680d6f9 */ LDATA extern char public_680d6f9;
/* 0x0680d6fa */ LDATA extern char public_680d6fa;
/* 0x0680d6fb */ LDATA extern char public_680d6fb;
/* 0x0680d6fc */ LDATA extern char public_680d6fc; // 'g'
/* 0x0680d6fd */ LDATA extern char public_680d6fd; // 'e'
/* 0x0680d6fe */ LDATA extern char public_680d6fe; // 't'
/* 0x0680d6ff */ LDATA extern char public_680d6ff; // 't'
/* 0x0680d700 */ LDATA extern char public_680d700; // 'a'
/* 0x0680d701 */ LDATA extern char public_680d701; // 'b'
/* 0x0680d702 */ LDATA extern char public_680d702; // 'l'
/* 0x0680d703 */ LDATA extern char public_680d703; // 'e'
/* 0x0680d704 */ LDATA extern char public_680d704;
/* 0x0680d705 */ LDATA extern char public_680d705;
/* 0x0680d706 */ LDATA extern char public_680d706;
/* 0x0680d707 */ LDATA extern char public_680d707;
/* 0x0680d708 */ LDATA extern char public_680d708; // 'i'
/* 0x0680d709 */ LDATA extern char public_680d709; // 'n'
/* 0x0680d70a */ LDATA extern char public_680d70a; // 't'
/* 0x0680d70b */ LDATA extern char public_680d70b; // 'e'
/* 0x0680d70c */ LDATA extern char public_680d70c; // 'r'
/* 0x0680d70d */ LDATA extern char public_680d70d; // 'n'
/* 0x0680d70e */ LDATA extern char public_680d70e; // 'a'
/* 0x0680d70f */ LDATA extern char public_680d70f; // 'l'
/* 0x0680d710 */ LDATA extern char public_680d710; // ' '
/* 0x0680d711 */ LDATA extern char public_680d711; // 'a'
/* 0x0680d712 */ LDATA extern char public_680d712; // 'r'
/* 0x0680d713 */ LDATA extern char public_680d713; // 'r'
/* 0x0680d714 */ LDATA extern char public_680d714; // 'a'
/* 0x0680d715 */ LDATA extern char public_680d715; // 'y'
/* 0x0680d716 */ LDATA extern char public_680d716; // ' '
/* 0x0680d717 */ LDATA extern char public_680d717; // 'b'
/* 0x0680d718 */ LDATA extern char public_680d718; // 'i'
/* 0x0680d719 */ LDATA extern char public_680d719; // 'g'
/* 0x0680d71a */ LDATA extern char public_680d71a; // 'g'
/* 0x0680d71b */ LDATA extern char public_680d71b; // 'e'
/* 0x0680d71c */ LDATA extern char public_680d71c; // 'r'
/* 0x0680d71d */ LDATA extern char public_680d71d; // ' '
/* 0x0680d71e */ LDATA extern char public_680d71e; // 't'
/* 0x0680d71f */ LDATA extern char public_680d71f; // 'h'
/* 0x0680d720 */ LDATA extern char public_680d720; // 'a'
/* 0x0680d721 */ LDATA extern char public_680d721; // 'n'
/* 0x0680d722 */ LDATA extern char public_680d722; // ' '
/* 0x0680d723 */ LDATA extern char public_680d723; // '`'
/* 0x0680d724 */ LDATA extern char public_680d724; // 'i'
/* 0x0680d725 */ LDATA extern char public_680d725; // 'n'
/* 0x0680d726 */ LDATA extern char public_680d726; // 't'
/* 0x0680d727 */ LDATA extern char public_680d727; // '''
/* 0x0680d728 */ LDATA extern char public_680d728; // ' '
/* 0x0680d729 */ LDATA extern char public_680d729; // 'l'
/* 0x0680d72a */ LDATA extern char public_680d72a; // 'i'
/* 0x0680d72b */ LDATA extern char public_680d72b; // 'm'
/* 0x0680d72c */ LDATA extern char public_680d72c; // 'i'
/* 0x0680d72d */ LDATA extern char public_680d72d; // 't'
/* 0x0680d72e */ LDATA extern char public_680d72e;
/* 0x0680d72f */ LDATA extern char public_680d72f;
/* 0x0680d730 */ LDATA extern char public_680d730; // 't'
/* 0x0680d731 */ LDATA extern char public_680d731; // 'a'
/* 0x0680d732 */ LDATA extern char public_680d732; // 'g'
/* 0x0680d733 */ LDATA extern char public_680d733; // ' '
/* 0x0680d734 */ LDATA extern char public_680d734; // '%'
/* 0x0680d735 */ LDATA extern char public_680d735; // 'd'
/* 0x0680d736 */ LDATA extern char public_680d736; // ' '
/* 0x0680d737 */ LDATA extern char public_680d737; // 'w'
/* 0x0680d738 */ LDATA extern char public_680d738; // 'a'
/* 0x0680d739 */ LDATA extern char public_680d739; // 's'
/* 0x0680d73a */ LDATA extern char public_680d73a; // ' '
/* 0x0680d73b */ LDATA extern char public_680d73b; // 'n'
/* 0x0680d73c */ LDATA extern char public_680d73c; // 'o'
/* 0x0680d73d */ LDATA extern char public_680d73d; // 't'
/* 0x0680d73e */ LDATA extern char public_680d73e; // ' '
/* 0x0680d73f */ LDATA extern char public_680d73f; // 'c'
/* 0x0680d740 */ LDATA extern char public_680d740; // 'r'
/* 0x0680d741 */ LDATA extern char public_680d741; // 'e'
/* 0x0680d742 */ LDATA extern char public_680d742; // 'a'
/* 0x0680d743 */ LDATA extern char public_680d743; // 't'
/* 0x0680d744 */ LDATA extern char public_680d744; // 'e'
/* 0x0680d745 */ LDATA extern char public_680d745; // 'd'
/* 0x0680d746 */ LDATA extern char public_680d746; // ' '
/* 0x0680d747 */ LDATA extern char public_680d747; // 'b'
/* 0x0680d748 */ LDATA extern char public_680d748; // 'y'
/* 0x0680d749 */ LDATA extern char public_680d749; // ' '
/* 0x0680d74a */ LDATA extern char public_680d74a; // '`'
/* 0x0680d74b */ LDATA extern char public_680d74b; // 'n'
/* 0x0680d74c */ LDATA extern char public_680d74c; // 'e'
/* 0x0680d74d */ LDATA extern char public_680d74d; // 'w'
/* 0x0680d74e */ LDATA extern char public_680d74e; // 't'
/* 0x0680d74f */ LDATA extern char public_680d74f; // 'a'
/* 0x0680d750 */ LDATA extern char public_680d750; // 'g'
/* 0x0680d751 */ LDATA extern char public_680d751; // '''
/* 0x0680d752 */ LDATA extern char public_680d752;
/* 0x0680d753 */ LDATA extern char public_680d753;
/* 0x0680d754 */ LDATA extern char public_680d754; // '%'
/* 0x0680d755 */ LDATA extern char public_680d755; // 'd'
/* 0x0680d756 */ LDATA extern char public_680d756; // ' '
/* 0x0680d757 */ LDATA extern char public_680d757; // 'i'
/* 0x0680d758 */ LDATA extern char public_680d758; // 's'
/* 0x0680d759 */ LDATA extern char public_680d759; // ' '
/* 0x0680d75a */ LDATA extern char public_680d75a; // 'n'
/* 0x0680d75b */ LDATA extern char public_680d75b; // 'o'
/* 0x0680d75c */ LDATA extern char public_680d75c; // 't'
/* 0x0680d75d */ LDATA extern char public_680d75d; // ' '
/* 0x0680d75e */ LDATA extern char public_680d75e; // 'a'
/* 0x0680d75f */ LDATA extern char public_680d75f; // ' '
/* 0x0680d760 */ LDATA extern char public_680d760; // 'v'
/* 0x0680d761 */ LDATA extern char public_680d761; // 'a'
/* 0x0680d762 */ LDATA extern char public_680d762; // 'l'
/* 0x0680d763 */ LDATA extern char public_680d763; // 'i'
/* 0x0680d764 */ LDATA extern char public_680d764; // 'd'
/* 0x0680d765 */ LDATA extern char public_680d765; // ' '
/* 0x0680d766 */ LDATA extern char public_680d766; // 't'
/* 0x0680d767 */ LDATA extern char public_680d767; // 'a'
/* 0x0680d768 */ LDATA extern char public_680d768; // 'g'
/* 0x0680d769 */ LDATA extern char public_680d769;
/* 0x0680d76a */ LDATA extern char public_680d76a;
/* 0x0680d76b */ LDATA extern char public_680d76b;
/* 0x0680d76c */ LDATA extern char public_680d76c; // '`'
/* 0x0680d76d */ LDATA extern char public_680d76d; // '%'
/* 0x0680d76e */ LDATA extern char public_680d76e; // '.'
/* 0x0680d76f */ LDATA extern char public_680d76f; // '5'
/* 0x0680d770 */ LDATA extern char public_680d770; // '0'
/* 0x0680d771 */ LDATA extern char public_680d771; // 's'
/* 0x0680d772 */ LDATA extern char public_680d772; // '''
/* 0x0680d773 */ LDATA extern char public_680d773; // ' '
/* 0x0680d774 */ LDATA extern char public_680d774; // 'i'
/* 0x0680d775 */ LDATA extern char public_680d775; // 's'
/* 0x0680d776 */ LDATA extern char public_680d776; // ' '
/* 0x0680d777 */ LDATA extern char public_680d777; // 'n'
/* 0x0680d778 */ LDATA extern char public_680d778; // 'o'
/* 0x0680d779 */ LDATA extern char public_680d779; // 't'
/* 0x0680d77a */ LDATA extern char public_680d77a; // ' '
/* 0x0680d77b */ LDATA extern char public_680d77b; // 'a'
/* 0x0680d77c */ LDATA extern char public_680d77c; // ' '
/* 0x0680d77d */ LDATA extern char public_680d77d; // 'v'
/* 0x0680d77e */ LDATA extern char public_680d77e; // 'a'
/* 0x0680d77f */ LDATA extern char public_680d77f; // 'l'
/* 0x0680d780 */ LDATA extern char public_680d780; // 'i'
/* 0x0680d781 */ LDATA extern char public_680d781; // 'd'
/* 0x0680d782 */ LDATA extern char public_680d782; // ' '
/* 0x0680d783 */ LDATA extern char public_680d783; // 'e'
/* 0x0680d784 */ LDATA extern char public_680d784; // 'v'
/* 0x0680d785 */ LDATA extern char public_680d785; // 'e'
/* 0x0680d786 */ LDATA extern char public_680d786; // 'n'
/* 0x0680d787 */ LDATA extern char public_680d787; // 't'
/* 0x0680d788 */ LDATA extern char public_680d788; // ' '
/* 0x0680d789 */ LDATA extern char public_680d789; // 'n'
/* 0x0680d78a */ LDATA extern char public_680d78a; // 'a'
/* 0x0680d78b */ LDATA extern char public_680d78b; // 'm'
/* 0x0680d78c */ LDATA extern char public_680d78c; // 'e'
/* 0x0680d78d */ LDATA extern char public_680d78d;
/* 0x0680d78e */ LDATA extern char public_680d78e;
/* 0x0680d78f */ LDATA extern char public_680d78f;
/* 0x0680d790 */ LDATA extern char public_680d790; // 'c'
/* 0x0680d791 */ LDATA extern char public_680d791; // 'a'
/* 0x0680d792 */ LDATA extern char public_680d792; // 'n'
/* 0x0680d793 */ LDATA extern char public_680d793; // 'n'
/* 0x0680d794 */ LDATA extern char public_680d794; // 'o'
/* 0x0680d795 */ LDATA extern char public_680d795; // 't'
/* 0x0680d796 */ LDATA extern char public_680d796; // ' '
/* 0x0680d797 */ LDATA extern char public_680d797; // 'c'
/* 0x0680d798 */ LDATA extern char public_680d798; // 'h'
/* 0x0680d799 */ LDATA extern char public_680d799; // 'a'
/* 0x0680d79a */ LDATA extern char public_680d79a; // 'n'
/* 0x0680d79b */ LDATA extern char public_680d79b; // 'g'
/* 0x0680d79c */ LDATA extern char public_680d79c; // 'e'
/* 0x0680d79d */ LDATA extern char public_680d79d; // ' '
/* 0x0680d79e */ LDATA extern char public_680d79e; // 't'
/* 0x0680d79f */ LDATA extern char public_680d79f; // 'a'
/* 0x0680d7a0 */ LDATA extern char public_680d7a0; // 'g'
/* 0x0680d7a1 */ LDATA extern char public_680d7a1; // ' '
/* 0x0680d7a2 */ LDATA extern char public_680d7a2; // 'm'
/* 0x0680d7a3 */ LDATA extern char public_680d7a3; // 'e'
/* 0x0680d7a4 */ LDATA extern char public_680d7a4; // 't'
/* 0x0680d7a5 */ LDATA extern char public_680d7a5; // 'h'
/* 0x0680d7a6 */ LDATA extern char public_680d7a6; // 'o'
/* 0x0680d7a7 */ LDATA extern char public_680d7a7; // 'd'
/* 0x0680d7a8 */ LDATA extern char public_680d7a8; // ' '
/* 0x0680d7a9 */ LDATA extern char public_680d7a9; // '`'
/* 0x0680d7aa */ LDATA extern char public_680d7aa; // '%'
/* 0x0680d7ab */ LDATA extern char public_680d7ab; // '.'
/* 0x0680d7ac */ LDATA extern char public_680d7ac; // '2'
/* 0x0680d7ad */ LDATA extern char public_680d7ad; // '0'
/* 0x0680d7ae */ LDATA extern char public_680d7ae; // 's'
/* 0x0680d7af */ LDATA extern char public_680d7af; // '''
/* 0x0680d7b0 */ LDATA extern char public_680d7b0; // ' '
/* 0x0680d7b1 */ LDATA extern char public_680d7b1; // 'f'
/* 0x0680d7b2 */ LDATA extern char public_680d7b2; // 'o'
/* 0x0680d7b3 */ LDATA extern char public_680d7b3; // 'r'
/* 0x0680d7b4 */ LDATA extern char public_680d7b4; // ' '
/* 0x0680d7b5 */ LDATA extern char public_680d7b5; // 't'
/* 0x0680d7b6 */ LDATA extern char public_680d7b6; // 'y'
/* 0x0680d7b7 */ LDATA extern char public_680d7b7; // 'p'
/* 0x0680d7b8 */ LDATA extern char public_680d7b8; // 'e'
/* 0x0680d7b9 */ LDATA extern char public_680d7b9; // ' '
/* 0x0680d7ba */ LDATA extern char public_680d7ba; // '`'
/* 0x0680d7bb */ LDATA extern char public_680d7bb; // '%'
/* 0x0680d7bc */ LDATA extern char public_680d7bc; // '.'
/* 0x0680d7bd */ LDATA extern char public_680d7bd; // '2'
/* 0x0680d7be */ LDATA extern char public_680d7be; // '0'
/* 0x0680d7bf */ LDATA extern char public_680d7bf; // 's'
/* 0x0680d7c0 */ LDATA extern char public_680d7c0; // '''
/* 0x0680d7c1 */ LDATA extern char public_680d7c1; // '%'
/* 0x0680d7c2 */ LDATA extern char public_680d7c2; // '.'
/* 0x0680d7c3 */ LDATA extern char public_680d7c3; // '2'
/* 0x0680d7c4 */ LDATA extern char public_680d7c4; // '0'
/* 0x0680d7c5 */ LDATA extern char public_680d7c5; // 's'
/* 0x0680d7c6 */ LDATA extern char public_680d7c6;
/* 0x0680d7c7 */ LDATA extern char public_680d7c7;
/* 0x0680d7c8 */ LDATA extern char public_680d7c8; // ' '
/* 0x0680d7c9 */ LDATA extern char public_680d7c9; // 'w'
/* 0x0680d7ca */ LDATA extern char public_680d7ca; // 'i'
/* 0x0680d7cb */ LDATA extern char public_680d7cb; // 't'
/* 0x0680d7cc */ LDATA extern char public_680d7cc; // 'h'
/* 0x0680d7cd */ LDATA extern char public_680d7cd; // ' '
/* 0x0680d7ce */ LDATA extern char public_680d7ce; // 'd'
/* 0x0680d7cf */ LDATA extern char public_680d7cf; // 'e'
/* 0x0680d7d0 */ LDATA extern char public_680d7d0; // 'f'
/* 0x0680d7d1 */ LDATA extern char public_680d7d1; // 'a'
/* 0x0680d7d2 */ LDATA extern char public_680d7d2; // 'u'
/* 0x0680d7d3 */ LDATA extern char public_680d7d3; // 'l'
/* 0x0680d7d4 */ LDATA extern char public_680d7d4; // 't'
/* 0x0680d7d5 */ LDATA extern char public_680d7d5; // ' '
/* 0x0680d7d6 */ LDATA extern char public_680d7d6; // 't'
/* 0x0680d7d7 */ LDATA extern char public_680d7d7; // 'a'
/* 0x0680d7d8 */ LDATA extern char public_680d7d8; // 'g'
/* 0x0680d7d9 */ LDATA extern char public_680d7d9;
/* 0x0680d7da */ LDATA extern char public_680d7da;
/* 0x0680d7db */ LDATA extern char public_680d7db;
/* 0x0680d7dc */ LDATA extern char public_680d7dc; // 'u'
/* 0x0680d7dd */ LDATA extern char public_680d7dd; // 'n'
/* 0x0680d7de */ LDATA extern char public_680d7de; // 'e'
/* 0x0680d7df */ LDATA extern char public_680d7df; // 'x'
/* 0x0680d7e0 */ LDATA extern char public_680d7e0; // 'p'
/* 0x0680d7e1 */ LDATA extern char public_680d7e1; // 'e'
/* 0x0680d7e2 */ LDATA extern char public_680d7e2; // 'c'
/* 0x0680d7e3 */ LDATA extern char public_680d7e3; // 't'
/* 0x0680d7e4 */ LDATA extern char public_680d7e4; // 'e'
/* 0x0680d7e5 */ LDATA extern char public_680d7e5; // 'd'
/* 0x0680d7e6 */ LDATA extern char public_680d7e6; // ' '
/* 0x0680d7e7 */ LDATA extern char public_680d7e7; // 't'
/* 0x0680d7e8 */ LDATA extern char public_680d7e8; // 'y'
/* 0x0680d7e9 */ LDATA extern char public_680d7e9; // 'p'
/* 0x0680d7ea */ LDATA extern char public_680d7ea; // 'e'
/* 0x0680d7eb */ LDATA extern char public_680d7eb; // ' '
/* 0x0680d7ec */ LDATA extern char public_680d7ec; // 't'
/* 0x0680d7ed */ LDATA extern char public_680d7ed; // 'o'
/* 0x0680d7ee */ LDATA extern char public_680d7ee; // ' '
/* 0x0680d7ef */ LDATA extern char public_680d7ef; // 'i'
/* 0x0680d7f0 */ LDATA extern char public_680d7f0; // 'n'
/* 0x0680d7f1 */ LDATA extern char public_680d7f1; // 'd'
/* 0x0680d7f2 */ LDATA extern char public_680d7f2; // 'e'
/* 0x0680d7f3 */ LDATA extern char public_680d7f3; // 'x'
/* 0x0680d7f4 */ LDATA extern char public_680d7f4; // ' '
/* 0x0680d7f5 */ LDATA extern char public_680d7f5; // 't'
/* 0x0680d7f6 */ LDATA extern char public_680d7f6; // 'a'
/* 0x0680d7f7 */ LDATA extern char public_680d7f7; // 'b'
/* 0x0680d7f8 */ LDATA extern char public_680d7f8; // 'l'
/* 0x0680d7f9 */ LDATA extern char public_680d7f9; // 'e'
/* 0x0680d7fa */ LDATA extern char public_680d7fa;
/* 0x0680d7fb */ LDATA extern char public_680d7fb;
/* 0x0680d7fc */ LDATA extern char public_680d7fc; // 'k'
/* 0x0680d7fd */ LDATA extern char public_680d7fd; // 'e'
/* 0x0680d7fe */ LDATA extern char public_680d7fe; // 'y'
/* 0x0680d7ff */ LDATA extern char public_680d7ff; // ' '
/* 0x0680d800 */ LDATA extern char public_680d800; // 'n'
/* 0x0680d801 */ LDATA extern char public_680d801; // 'o'
/* 0x0680d802 */ LDATA extern char public_680d802; // 't'
/* 0x0680d803 */ LDATA extern char public_680d803; // ' '
/* 0x0680d804 */ LDATA extern char public_680d804; // 'f'
/* 0x0680d805 */ LDATA extern char public_680d805; // 'o'
/* 0x0680d806 */ LDATA extern char public_680d806; // 'u'
/* 0x0680d807 */ LDATA extern char public_680d807; // 'n'
/* 0x0680d808 */ LDATA extern char public_680d808; // 'd'
/* 0x0680d809 */ LDATA extern char public_680d809;
/* 0x0680d80a */ LDATA extern char public_680d80a;
/* 0x0680d80b */ LDATA extern char public_680d80b;
/* 0x0680d80c */ LDATA extern char public_680d80c;
/* 0x0680d80d */ LDATA extern char public_680d80d;
/* 0x0680d80e */ LDATA extern char public_680d80e;
/* 0x0680d80f */ LDATA extern char public_680d80f;
/* 0x0680d810 */ LDATA extern char public_680d810;
/* 0x0680d811 */ LDATA extern char public_680d811;
/* 0x0680d812 */ LDATA extern char public_680d812;
/* 0x0680d813 */ LDATA extern char public_680d813;
/* 0x0680d814 */ LDATA extern char public_680d814;
/* 0x0680d815 */ LDATA extern char public_680d815;
/* 0x0680d816 */ LDATA extern char public_680d816;
/* 0x0680d817 */ LDATA extern char public_680d817;
/* 0x0680d818 */ LDATA extern char public_680d818;
/* 0x0680d819 */ LDATA extern char public_680d819;
/* 0x0680d81a */ LDATA extern char public_680d81a;
/* 0x0680d81b */ LDATA extern char public_680d81b;
/* 0x0680d81c */ LDATA extern char public_680d81c;
/* 0x0680d81d */ LDATA extern char public_680d81d;
/* 0x0680d81e */ LDATA extern char public_680d81e;
/* 0x0680d81f */ LDATA extern char public_680d81f;
/* 0x0680d820 */ LDATA extern char public_680d820;
/* 0x0680d821 */ LDATA extern char public_680d821;
/* 0x0680d822 */ LDATA extern char public_680d822;
/* 0x0680d823 */ LDATA extern char public_680d823;
/* 0x0680d824 */ LDATA extern char public_680d824;
/* 0x0680d825 */ LDATA extern char public_680d825;
/* 0x0680d826 */ LDATA extern char public_680d826;
/* 0x0680d827 */ LDATA extern char public_680d827;
/* 0x0680d828 */ LDATA extern char public_680d828;
/* 0x0680d829 */ LDATA extern char public_680d829;
/* 0x0680d82a */ LDATA extern char public_680d82a;
/* 0x0680d82b */ LDATA extern char public_680d82b;
/* 0x0680d82c */ LDATA extern char public_680d82c;
/* 0x0680d82d */ LDATA extern char public_680d82d;
/* 0x0680d82e */ LDATA extern char public_680d82e;
/* 0x0680d82f */ LDATA extern char public_680d82f;
/* 0x0680d830 */ LDATA extern char public_680d830;
/* 0x0680d831 */ LDATA extern char public_680d831;
/* 0x0680d832 */ LDATA extern char public_680d832;
/* 0x0680d833 */ LDATA extern char public_680d833;
/* 0x0680d834 */ LDATA extern char public_680d834;
/* 0x0680d835 */ LDATA extern char public_680d835;
/* 0x0680d836 */ LDATA extern char public_680d836;
/* 0x0680d837 */ LDATA extern char public_680d837;
/* 0x0680d838 */ LDATA extern char public_680d838;
/* 0x0680d839 */ LDATA extern char public_680d839;
/* 0x0680d83a */ LDATA extern char public_680d83a;
/* 0x0680d83b */ LDATA extern char public_680d83b;
/* 0x0680d83c */ LDATA extern char public_680d83c;
/* 0x0680d83d */ LDATA extern char public_680d83d;
/* 0x0680d83e */ LDATA extern char public_680d83e;
/* 0x0680d83f */ LDATA extern char public_680d83f;
/* 0x0680d840 */ LDATA extern char public_680d840; // 'b'
/* 0x0680d841 */ LDATA extern char public_680d841; // 'a'
/* 0x0680d842 */ LDATA extern char public_680d842; // 'd'
/* 0x0680d843 */ LDATA extern char public_680d843; // ' '
/* 0x0680d844 */ LDATA extern char public_680d844; // 'a'
/* 0x0680d845 */ LDATA extern char public_680d845; // 'r'
/* 0x0680d846 */ LDATA extern char public_680d846; // 'g'
/* 0x0680d847 */ LDATA extern char public_680d847; // 'u'
/* 0x0680d848 */ LDATA extern char public_680d848; // 'm'
/* 0x0680d849 */ LDATA extern char public_680d849; // 'e'
/* 0x0680d84a */ LDATA extern char public_680d84a; // 'n'
/* 0x0680d84b */ LDATA extern char public_680d84b; // 't'
/* 0x0680d84c */ LDATA extern char public_680d84c; // ' '
/* 0x0680d84d */ LDATA extern char public_680d84d; // '#'
/* 0x0680d84e */ LDATA extern char public_680d84e; // '%'
/* 0x0680d84f */ LDATA extern char public_680d84f; // 'd'
/* 0x0680d850 */ LDATA extern char public_680d850; // ' '
/* 0x0680d851 */ LDATA extern char public_680d851; // 't'
/* 0x0680d852 */ LDATA extern char public_680d852; // 'o'
/* 0x0680d853 */ LDATA extern char public_680d853; // ' '
/* 0x0680d854 */ LDATA extern char public_680d854; // 'f'
/* 0x0680d855 */ LDATA extern char public_680d855; // 'u'
/* 0x0680d856 */ LDATA extern char public_680d856; // 'n'
/* 0x0680d857 */ LDATA extern char public_680d857; // 'c'
/* 0x0680d858 */ LDATA extern char public_680d858; // 't'
/* 0x0680d859 */ LDATA extern char public_680d859; // 'i'
/* 0x0680d85a */ LDATA extern char public_680d85a; // 'o'
/* 0x0680d85b */ LDATA extern char public_680d85b; // 'n'
/* 0x0680d85c */ LDATA extern char public_680d85c; // ' '
/* 0x0680d85d */ LDATA extern char public_680d85d; // '`'
/* 0x0680d85e */ LDATA extern char public_680d85e; // '%'
/* 0x0680d85f */ LDATA extern char public_680d85f; // '.'
/* 0x0680d860 */ LDATA extern char public_680d860; // '5'
/* 0x0680d861 */ LDATA extern char public_680d861; // '0'
/* 0x0680d862 */ LDATA extern char public_680d862; // 's'
/* 0x0680d863 */ LDATA extern char public_680d863; // '''
/* 0x0680d864 */ LDATA extern char public_680d864; // ' '
/* 0x0680d865 */ LDATA extern char public_680d865; // '('
/* 0x0680d866 */ LDATA extern char public_680d866; // '%'
/* 0x0680d867 */ LDATA extern char public_680d867; // '.'
/* 0x0680d868 */ LDATA extern char public_680d868; // '1'
/* 0x0680d869 */ LDATA extern char public_680d869; // '0'
/* 0x0680d86a */ LDATA extern char public_680d86a; // '0'
/* 0x0680d86b */ LDATA extern char public_680d86b; // 's'
/* 0x0680d86c */ LDATA extern char public_680d86c; // ')'
/* 0x0680d86d */ LDATA extern char public_680d86d;
/* 0x0680d86e */ LDATA extern char public_680d86e;
/* 0x0680d86f */ LDATA extern char public_680d86f;
/* 0x0680d870 */ LDATA extern char public_680d870; // 'b'
/* 0x0680d871 */ LDATA extern char public_680d871; // 'a'
/* 0x0680d872 */ LDATA extern char public_680d872; // 'd'
/* 0x0680d873 */ LDATA extern char public_680d873; // ' '
/* 0x0680d874 */ LDATA extern char public_680d874; // 'a'
/* 0x0680d875 */ LDATA extern char public_680d875; // 'r'
/* 0x0680d876 */ LDATA extern char public_680d876; // 'g'
/* 0x0680d877 */ LDATA extern char public_680d877; // 'u'
/* 0x0680d878 */ LDATA extern char public_680d878; // 'm'
/* 0x0680d879 */ LDATA extern char public_680d879; // 'e'
/* 0x0680d87a */ LDATA extern char public_680d87a; // 'n'
/* 0x0680d87b */ LDATA extern char public_680d87b; // 't'
/* 0x0680d87c */ LDATA extern char public_680d87c; // ' '
/* 0x0680d87d */ LDATA extern char public_680d87d; // '#'
/* 0x0680d87e */ LDATA extern char public_680d87e; // '%'
/* 0x0680d87f */ LDATA extern char public_680d87f; // 'd'
/* 0x0680d880 */ LDATA extern char public_680d880; // ' '
/* 0x0680d881 */ LDATA extern char public_680d881; // 't'
/* 0x0680d882 */ LDATA extern char public_680d882; // 'o'
/* 0x0680d883 */ LDATA extern char public_680d883; // ' '
/* 0x0680d884 */ LDATA extern char public_680d884; // 'f'
/* 0x0680d885 */ LDATA extern char public_680d885; // 'u'
/* 0x0680d886 */ LDATA extern char public_680d886; // 'n'
/* 0x0680d887 */ LDATA extern char public_680d887; // 'c'
/* 0x0680d888 */ LDATA extern char public_680d888; // 't'
/* 0x0680d889 */ LDATA extern char public_680d889; // 'i'
/* 0x0680d88a */ LDATA extern char public_680d88a; // 'o'
/* 0x0680d88b */ LDATA extern char public_680d88b; // 'n'
/* 0x0680d88c */ LDATA extern char public_680d88c; // ' '
/* 0x0680d88d */ LDATA extern char public_680d88d; // '`'
/* 0x0680d88e */ LDATA extern char public_680d88e; // '%'
/* 0x0680d88f */ LDATA extern char public_680d88f; // '.'
/* 0x0680d890 */ LDATA extern char public_680d890; // '5'
/* 0x0680d891 */ LDATA extern char public_680d891; // '0'
/* 0x0680d892 */ LDATA extern char public_680d892; // 's'
/* 0x0680d893 */ LDATA extern char public_680d893; // '''
/* 0x0680d894 */ LDATA extern char public_680d894;
/* 0x0680d895 */ LDATA extern char public_680d895;
/* 0x0680d896 */ LDATA extern char public_680d896;
/* 0x0680d897 */ LDATA extern char public_680d897;
/* 0x0680d898 */ LDATA extern char public_680d898; // 's'
/* 0x0680d899 */ LDATA extern char public_680d899; // 't'
/* 0x0680d89a */ LDATA extern char public_680d89a; // 'r'
/* 0x0680d89b */ LDATA extern char public_680d89b; // 'i'
/* 0x0680d89c */ LDATA extern char public_680d89c; // 'n'
/* 0x0680d89d */ LDATA extern char public_680d89d; // 'g'
/* 0x0680d89e */ LDATA extern char public_680d89e; // ' '
/* 0x0680d89f */ LDATA extern char public_680d89f; // 'e'
/* 0x0680d8a0 */ LDATA extern char public_680d8a0; // 'x'
/* 0x0680d8a1 */ LDATA extern char public_680d8a1; // 'p'
/* 0x0680d8a2 */ LDATA extern char public_680d8a2; // 'e'
/* 0x0680d8a3 */ LDATA extern char public_680d8a3; // 'c'
/* 0x0680d8a4 */ LDATA extern char public_680d8a4; // 't'
/* 0x0680d8a5 */ LDATA extern char public_680d8a5; // 'e'
/* 0x0680d8a6 */ LDATA extern char public_680d8a6; // 'd'
/* 0x0680d8a7 */ LDATA extern char public_680d8a7;
/* 0x0680d8a8 */ LDATA extern char public_680d8a8; // 'n'
/* 0x0680d8a9 */ LDATA extern char public_680d8a9; // 'u'
/* 0x0680d8aa */ LDATA extern char public_680d8aa; // 'm'
/* 0x0680d8ab */ LDATA extern char public_680d8ab; // 'b'
/* 0x0680d8ac */ LDATA extern char public_680d8ac; // 'e'
/* 0x0680d8ad */ LDATA extern char public_680d8ad; // 'r'
/* 0x0680d8ae */ LDATA extern char public_680d8ae; // ' '
/* 0x0680d8af */ LDATA extern char public_680d8af; // 'e'
/* 0x0680d8b0 */ LDATA extern char public_680d8b0; // 'x'
/* 0x0680d8b1 */ LDATA extern char public_680d8b1; // 'p'
/* 0x0680d8b2 */ LDATA extern char public_680d8b2; // 'e'
/* 0x0680d8b3 */ LDATA extern char public_680d8b3; // 'c'
/* 0x0680d8b4 */ LDATA extern char public_680d8b4; // 't'
/* 0x0680d8b5 */ LDATA extern char public_680d8b5; // 'e'
/* 0x0680d8b6 */ LDATA extern char public_680d8b6; // 'd'
/* 0x0680d8b7 */ LDATA extern char public_680d8b7;
/* 0x0680d8b8 */ LDATA extern char public_680d8b8; // 't'
/* 0x0680d8b9 */ LDATA extern char public_680d8b9; // 'a'
/* 0x0680d8ba */ LDATA extern char public_680d8ba; // 'b'
/* 0x0680d8bb */ LDATA extern char public_680d8bb; // 'l'
/* 0x0680d8bc */ LDATA extern char public_680d8bc; // 'e'
/* 0x0680d8bd */ LDATA extern char public_680d8bd; // ' '
/* 0x0680d8be */ LDATA extern char public_680d8be; // 'e'
/* 0x0680d8bf */ LDATA extern char public_680d8bf; // 'x'
/* 0x0680d8c0 */ LDATA extern char public_680d8c0; // 'p'
/* 0x0680d8c1 */ LDATA extern char public_680d8c1; // 'e'
/* 0x0680d8c2 */ LDATA extern char public_680d8c2; // 'c'
/* 0x0680d8c3 */ LDATA extern char public_680d8c3; // 't'
/* 0x0680d8c4 */ LDATA extern char public_680d8c4; // 'e'
/* 0x0680d8c5 */ LDATA extern char public_680d8c5; // 'd'
/* 0x0680d8c6 */ LDATA extern char public_680d8c6;
/* 0x0680d8c7 */ LDATA extern char public_680d8c7;
/* 0x0680d8c8 */ LDATA extern char public_680d8c8; // 'f'
/* 0x0680d8c9 */ LDATA extern char public_680d8c9; // 'u'
/* 0x0680d8ca */ LDATA extern char public_680d8ca; // 'n'
/* 0x0680d8cb */ LDATA extern char public_680d8cb; // 'c'
/* 0x0680d8cc */ LDATA extern char public_680d8cc; // 't'
/* 0x0680d8cd */ LDATA extern char public_680d8cd; // 'i'
/* 0x0680d8ce */ LDATA extern char public_680d8ce; // 'o'
/* 0x0680d8cf */ LDATA extern char public_680d8cf; // 'n'
/* 0x0680d8d0 */ LDATA extern char public_680d8d0; // ' '
/* 0x0680d8d1 */ LDATA extern char public_680d8d1; // 'e'
/* 0x0680d8d2 */ LDATA extern char public_680d8d2; // 'x'
/* 0x0680d8d3 */ LDATA extern char public_680d8d3; // 'p'
/* 0x0680d8d4 */ LDATA extern char public_680d8d4; // 'e'
/* 0x0680d8d5 */ LDATA extern char public_680d8d5; // 'c'
/* 0x0680d8d6 */ LDATA extern char public_680d8d6; // 't'
/* 0x0680d8d7 */ LDATA extern char public_680d8d7; // 'e'
/* 0x0680d8d8 */ LDATA extern char public_680d8d8; // 'd'
/* 0x0680d8d9 */ LDATA extern char public_680d8d9;
/* 0x0680d8da */ LDATA extern char public_680d8da;
/* 0x0680d8db */ LDATA extern char public_680d8db;
/* 0x0680d8dc */ LDATA extern char public_680d8dc; // 'v'
/* 0x0680d8dd */ LDATA extern char public_680d8dd; // 'a'
/* 0x0680d8de */ LDATA extern char public_680d8de; // 'l'
/* 0x0680d8df */ LDATA extern char public_680d8df; // 'u'
/* 0x0680d8e0 */ LDATA extern char public_680d8e0; // 'e'
/* 0x0680d8e1 */ LDATA extern char public_680d8e1; // ' '
/* 0x0680d8e2 */ LDATA extern char public_680d8e2; // 'e'
/* 0x0680d8e3 */ LDATA extern char public_680d8e3; // 'x'
/* 0x0680d8e4 */ LDATA extern char public_680d8e4; // 'p'
/* 0x0680d8e5 */ LDATA extern char public_680d8e5; // 'e'
/* 0x0680d8e6 */ LDATA extern char public_680d8e6; // 'c'
/* 0x0680d8e7 */ LDATA extern char public_680d8e7; // 't'
/* 0x0680d8e8 */ LDATA extern char public_680d8e8; // 'e'
/* 0x0680d8e9 */ LDATA extern char public_680d8e9; // 'd'
/* 0x0680d8ea */ LDATA extern char public_680d8ea;
/* 0x0680d8eb */ LDATA extern char public_680d8eb;
/* 0x0680d8ec */ LDATA extern char public_680d8ec; // '.'
/* 0x0680d8ed */ LDATA extern char public_680d8ed; // '.'
/* 0x0680d8ee */ LDATA extern char public_680d8ee; // '.'
/* 0x0680d8ef */ LDATA extern char public_680d8ef; // '''
/* 0x0680d8f0 */ LDATA extern char public_680d8f0;
/* 0x0680d8f1 */ LDATA extern char public_680d8f1;
/* 0x0680d8f2 */ LDATA extern char public_680d8f2;
/* 0x0680d8f3 */ LDATA extern char public_680d8f3;
/* 0x0680d8f4 */ LDATA extern char public_680d8f4; // 's'
/* 0x0680d8f5 */ LDATA extern char public_680d8f5; // 't'
/* 0x0680d8f6 */ LDATA extern char public_680d8f6; // 'r'
/* 0x0680d8f7 */ LDATA extern char public_680d8f7; // 'i'
/* 0x0680d8f8 */ LDATA extern char public_680d8f8; // 'n'
/* 0x0680d8f9 */ LDATA extern char public_680d8f9; // 'g'
/* 0x0680d8fa */ LDATA extern char public_680d8fa; // ' '
/* 0x0680d8fb */ LDATA extern char public_680d8fb; // '`'
/* 0x0680d8fc */ LDATA extern char public_680d8fc; // '%'
/* 0x0680d8fd */ LDATA extern char public_680d8fd; // '.'
/* 0x0680d8fe */ LDATA extern char public_680d8fe; // '*'
/* 0x0680d8ff */ LDATA extern char public_680d8ff; // 's'
/* 0x0680d900 */ LDATA extern char public_680d900; // '''
/* 0x0680d901 */ LDATA extern char public_680d901;
/* 0x0680d902 */ LDATA extern char public_680d902;
/* 0x0680d903 */ LDATA extern char public_680d903;
/* 0x0680d904 */ LDATA extern char public_680d904; // '('
/* 0x0680d905 */ LDATA extern char public_680d905; // 'C'
/* 0x0680d906 */ LDATA extern char public_680d906; // ' '
/* 0x0680d907 */ LDATA extern char public_680d907; // 'c'
/* 0x0680d908 */ LDATA extern char public_680d908; // 'o'
/* 0x0680d909 */ LDATA extern char public_680d909; // 'd'
/* 0x0680d90a */ LDATA extern char public_680d90a; // 'e'
/* 0x0680d90b */ LDATA extern char public_680d90b; // ')'
/* 0x0680d90c */ LDATA extern char public_680d90c;
/* 0x0680d90d */ LDATA extern char public_680d90d;
/* 0x0680d90e */ LDATA extern char public_680d90e;
/* 0x0680d90f */ LDATA extern char public_680d90f;
/* 0x0680d910 */ LDATA extern char public_680d910; // 'f'
/* 0x0680d911 */ LDATA extern char public_680d911; // 'i'
/* 0x0680d912 */ LDATA extern char public_680d912; // 'l'
/* 0x0680d913 */ LDATA extern char public_680d913; // 'e'
/* 0x0680d914 */ LDATA extern char public_680d914; // ' '
/* 0x0680d915 */ LDATA extern char public_680d915; // '`'
/* 0x0680d916 */ LDATA extern char public_680d916; // '%'
/* 0x0680d917 */ LDATA extern char public_680d917; // '.'
/* 0x0680d918 */ LDATA extern char public_680d918; // '*'
/* 0x0680d919 */ LDATA extern char public_680d919; // 's'
/* 0x0680d91a */ LDATA extern char public_680d91a; // '''
/* 0x0680d91b */ LDATA extern char public_680d91b;
/* 0x0680d91c */ LDATA extern char public_680d91c; // '@'
/* 0x0680d91d */ LDATA extern char public_680d91d; // '%'
/* 0x0680d91e */ LDATA extern char public_680d91e; // '.'
/* 0x0680d91f */ LDATA extern char public_680d91f; // '*'
/* 0x0680d920 */ LDATA extern char public_680d920; // 's'
/* 0x0680d921 */ LDATA extern char public_680d921;
/* 0x0680d922 */ LDATA extern char public_680d922;
/* 0x0680d923 */ LDATA extern char public_680d923;
/* 0x0680d924 */ LDATA extern char public_680d924; // '('
/* 0x0680d925 */ LDATA extern char public_680d925; // 's'
/* 0x0680d926 */ LDATA extern char public_680d926; // 't'
/* 0x0680d927 */ LDATA extern char public_680d927; // 'd'
/* 0x0680d928 */ LDATA extern char public_680d928; // 'i'
/* 0x0680d929 */ LDATA extern char public_680d929; // 'n'
/* 0x0680d92a */ LDATA extern char public_680d92a; // ')'
/* 0x0680d92b */ LDATA extern char public_680d92b;
/* 0x0680d92c */ LDATA extern char public_680d92c;
/* 0x0680d92d */ LDATA extern char public_680d92d;
/* 0x0680d92e */ LDATA extern char public_680d92e;
/* 0x0680d92f */ LDATA extern char public_680d92f;
/* 0x0680d930 */ LDATA extern void const* public_680d930;
/* 0x0680d934 */ LDATA extern void const* public_680d934;
/* 0x0680d938 */ LDATA extern void const* public_680d938;
/* 0x0680d93c */ LDATA extern void const* public_680d93c;
/* 0x0680d940 */ LDATA extern void const* public_680d940;
/* 0x0680d944 */ LDATA extern void const* public_680d944;
/* 0x0680d948 */ LDATA extern void const* public_680d948;
/* 0x0680d94c */ LDATA extern void const* public_680d94c;
/* 0x0680d950 */ LDATA extern void const* public_680d950;
/* 0x0680d954 */ LDATA extern void const* public_680d954;
/* 0x0680d958 */ LDATA extern void const* public_680d958;
/* 0x0680d95c */ LDATA extern void const* public_680d95c;
/* 0x0680d960 */ LDATA extern char public_680d960;
/* 0x0680d961 */ LDATA extern char public_680d961;
/* 0x0680d962 */ LDATA extern char public_680d962;
/* 0x0680d963 */ LDATA extern char public_680d963;
/* 0x0680d964 */ LDATA extern char public_680d964;
/* 0x0680d965 */ LDATA extern char public_680d965;
/* 0x0680d966 */ LDATA extern char public_680d966;
/* 0x0680d967 */ LDATA extern char public_680d967;
/* 0x0680d968 */ LDATA extern char public_680d968;
/* 0x0680d969 */ LDATA extern char public_680d969;
/* 0x0680d96a */ LDATA extern char public_680d96a;
/* 0x0680d96b */ LDATA extern char public_680d96b;
/* 0x0680d96c */ LDATA extern char public_680d96c;
/* 0x0680d96d */ LDATA extern char public_680d96d;
/* 0x0680d96e */ LDATA extern char public_680d96e;
/* 0x0680d96f */ LDATA extern char public_680d96f;
/* 0x0680d970 */ LDATA extern char public_680d970;
/* 0x0680d971 */ LDATA extern char public_680d971;
/* 0x0680d972 */ LDATA extern char public_680d972;
/* 0x0680d973 */ LDATA extern char public_680d973;
/* 0x0680d974 */ LDATA extern char public_680d974;
/* 0x0680d975 */ LDATA extern char public_680d975;
/* 0x0680d976 */ LDATA extern char public_680d976;
/* 0x0680d977 */ LDATA extern char public_680d977;
/* 0x0680d978 */ LDATA extern char public_680d978;
/* 0x0680d979 */ LDATA extern char public_680d979;
/* 0x0680d97a */ LDATA extern char public_680d97a;
/* 0x0680d97b */ LDATA extern char public_680d97b;
/* 0x0680d97c */ LDATA extern char public_680d97c;
/* 0x0680d97d */ LDATA extern char public_680d97d;
/* 0x0680d97e */ LDATA extern char public_680d97e;
/* 0x0680d97f */ LDATA extern char public_680d97f;
/* 0x0680d980 */ LDATA extern char public_680d980;
/* 0x0680d981 */ LDATA extern char public_680d981;
/* 0x0680d982 */ LDATA extern char public_680d982;
/* 0x0680d983 */ LDATA extern char public_680d983;
/* 0x0680d984 */ LDATA extern char public_680d984; // '/'
/* 0x0680d985 */ LDATA extern char public_680d985;
/* 0x0680d986 */ LDATA extern char public_680d986;
/* 0x0680d987 */ LDATA extern char public_680d987;
/* 0x0680d988 */ LDATA extern char public_680d988; // 'a'
/* 0x0680d989 */ LDATA extern char public_680d989;
/* 0x0680d98a */ LDATA extern char public_680d98a;
/* 0x0680d98b */ LDATA extern char public_680d98b;
/* 0x0680d98c */ LDATA extern char public_680d98c;
/* 0x0680d98d */ LDATA extern char public_680d98d;
/* 0x0680d98e */ LDATA extern char public_680d98e;
/* 0x0680d98f */ LDATA extern char public_680d98f;
/* 0x0680d990 */ LDATA extern char public_680d990;
/* 0x0680d991 */ LDATA extern char public_680d991;
/* 0x0680d992 */ LDATA extern char public_680d992;
/* 0x0680d993 */ LDATA extern char public_680d993;
/* 0x0680d994 */ LDATA extern char public_680d994;
/* 0x0680d995 */ LDATA extern char public_680d995;
/* 0x0680d996 */ LDATA extern char public_680d996;
/* 0x0680d997 */ LDATA extern char public_680d997;
/* 0x0680d998 */ LDATA extern char public_680d998; // '='
/* 0x0680d999 */ LDATA extern char public_680d999;
/* 0x0680d99a */ LDATA extern char public_680d99a;
/* 0x0680d99b */ LDATA extern char public_680d99b;
/* 0x0680d99c */ LDATA extern char public_680d99c;
/* 0x0680d99d */ LDATA extern char public_680d99d;
/* 0x0680d99e */ LDATA extern char public_680d99e;
/* 0x0680d99f */ LDATA extern char public_680d99f;
/* 0x0680d9a0 */ LDATA extern char public_680d9a0;
/* 0x0680d9a1 */ LDATA extern char public_680d9a1;
/* 0x0680d9a2 */ LDATA extern char public_680d9a2;
/* 0x0680d9a3 */ LDATA extern char public_680d9a3;
/* 0x0680d9a4 */ LDATA extern char public_680d9a4; // '5'
/* 0x0680d9a5 */ LDATA extern char public_680d9a5; // '2'
/* 0x0680d9a6 */ LDATA extern char public_680d9a6;
/* 0x0680d9a7 */ LDATA extern char public_680d9a7;
/* 0x0680d9a8 */ LDATA extern char public_680d9a8; // 'u'
/* 0x0680d9a9 */ LDATA extern char public_680d9a9; // 'd'
/* 0x0680d9aa */ LDATA extern char public_680d9aa;
/* 0x0680d9ab */ LDATA extern char public_680d9ab;
/* 0x0680d9ac */ LDATA extern char public_680d9ac;
/* 0x0680d9ad */ LDATA extern char public_680d9ad;
/* 0x0680d9ae */ LDATA extern char public_680d9ae;
/* 0x0680d9af */ LDATA extern char public_680d9af;
/* 0x0680d9b0 */ LDATA extern char public_680d9b0;
/* 0x0680d9b1 */ LDATA extern char public_680d9b1;
/* 0x0680d9b2 */ LDATA extern char public_680d9b2;
/* 0x0680d9b3 */ LDATA extern char public_680d9b3;
/* 0x0680d9b4 */ LDATA extern char public_680d9b4; // '3'
/* 0x0680d9b5 */ LDATA extern char public_680d9b5; // '#'
/* 0x0680d9b6 */ LDATA extern char public_680d9b6;
/* 0x0680d9b7 */ LDATA extern char public_680d9b7;
/* 0x0680d9b8 */ LDATA extern char public_680d9b8; // 'a'
/* 0x0680d9b9 */ LDATA extern char public_680d9b9; // 'F'
/* 0x0680d9ba */ LDATA extern char public_680d9ba;
/* 0x0680d9bb */ LDATA extern char public_680d9bb;
/* 0x0680d9bc */ LDATA extern char public_680d9bc;
/* 0x0680d9bd */ LDATA extern char public_680d9bd;
/* 0x0680d9be */ LDATA extern char public_680d9be;
/* 0x0680d9bf */ LDATA extern char public_680d9bf;
/* 0x0680d9c0 */ LDATA extern char public_680d9c0;
/* 0x0680d9c1 */ LDATA extern char public_680d9c1;
/* 0x0680d9c2 */ LDATA extern char public_680d9c2;
/* 0x0680d9c3 */ LDATA extern char public_680d9c3;
/* 0x0680d9c4 */ LDATA extern char public_680d9c4;
/* 0x0680d9c5 */ LDATA extern char public_680d9c5; // '2'
/* 0x0680d9c6 */ LDATA extern char public_680d9c6; // '2'
/* 0x0680d9c7 */ LDATA extern char public_680d9c7;
/* 0x0680d9c8 */ LDATA extern char public_680d9c8;
/* 0x0680d9c9 */ LDATA extern char public_680d9c9; // 'd'
/* 0x0680d9ca */ LDATA extern char public_680d9ca; // 'd'
/* 0x0680d9cb */ LDATA extern char public_680d9cb;
/* 0x0680d9cc */ LDATA extern char public_680d9cc;
/* 0x0680d9cd */ LDATA extern char public_680d9cd;
/* 0x0680d9ce */ LDATA extern char public_680d9ce;
/* 0x0680d9cf */ LDATA extern char public_680d9cf;
/* 0x0680d9d0 */ LDATA extern char public_680d9d0;
/* 0x0680d9d1 */ LDATA extern char public_680d9d1;
/* 0x0680d9d2 */ LDATA extern char public_680d9d2;
/* 0x0680d9d3 */ LDATA extern char public_680d9d3;
/* 0x0680d9d4 */ LDATA extern char public_680d9d4; // 'l'
/* 0x0680d9d5 */ LDATA extern char public_680d9d5; // 'i'
/* 0x0680d9d6 */ LDATA extern char public_680d9d6; // 'n'
/* 0x0680d9d7 */ LDATA extern char public_680d9d7; // 'e'
/* 0x0680d9d8 */ LDATA extern char public_680d9d8;
/* 0x0680d9d9 */ LDATA extern char public_680d9d9;
/* 0x0680d9da */ LDATA extern char public_680d9da;
/* 0x0680d9db */ LDATA extern char public_680d9db;
/* 0x0680d9dc */ LDATA extern char public_680d9dc; // 'm'
/* 0x0680d9dd */ LDATA extern char public_680d9dd; // 'a'
/* 0x0680d9de */ LDATA extern char public_680d9de; // 'r'
/* 0x0680d9df */ LDATA extern char public_680d9df; // 'k'
/* 0x0680d9e0 */ LDATA extern char public_680d9e0;
/* 0x0680d9e1 */ LDATA extern char public_680d9e1;
/* 0x0680d9e2 */ LDATA extern char public_680d9e2;
/* 0x0680d9e3 */ LDATA extern char public_680d9e3;
/* 0x0680d9e4 */ LDATA extern char public_680d9e4; // 'n'
/* 0x0680d9e5 */ LDATA extern char public_680d9e5; // 'i'
/* 0x0680d9e6 */ LDATA extern char public_680d9e6; // 'l'
/* 0x0680d9e7 */ LDATA extern char public_680d9e7;
/* 0x0680d9e8 */ LDATA extern char public_680d9e8; // 't'
/* 0x0680d9e9 */ LDATA extern char public_680d9e9; // 'a'
/* 0x0680d9ea */ LDATA extern char public_680d9ea; // 'b'
/* 0x0680d9eb */ LDATA extern char public_680d9eb; // 'l'
/* 0x0680d9ec */ LDATA extern char public_680d9ec; // 'e'
/* 0x0680d9ed */ LDATA extern char public_680d9ed;
/* 0x0680d9ee */ LDATA extern char public_680d9ee;
/* 0x0680d9ef */ LDATA extern char public_680d9ef;
/* 0x0680d9f0 */ LDATA extern char public_680d9f0; // 's'
/* 0x0680d9f1 */ LDATA extern char public_680d9f1; // 't'
/* 0x0680d9f2 */ LDATA extern char public_680d9f2; // 'r'
/* 0x0680d9f3 */ LDATA extern char public_680d9f3; // 'i'
/* 0x0680d9f4 */ LDATA extern char public_680d9f4; // 'n'
/* 0x0680d9f5 */ LDATA extern char public_680d9f5; // 'g'
/* 0x0680d9f6 */ LDATA extern char public_680d9f6;
/* 0x0680d9f7 */ LDATA extern char public_680d9f7;
/* 0x0680d9f8 */ LDATA extern char public_680d9f8; // 'n'
/* 0x0680d9f9 */ LDATA extern char public_680d9f9; // 'u'
/* 0x0680d9fa */ LDATA extern char public_680d9fa; // 'm'
/* 0x0680d9fb */ LDATA extern char public_680d9fb; // 'b'
/* 0x0680d9fc */ LDATA extern char public_680d9fc; // 'e'
/* 0x0680d9fd */ LDATA extern char public_680d9fd; // 'r'
/* 0x0680d9fe */ LDATA extern char public_680d9fe;
/* 0x0680d9ff */ LDATA extern char public_680d9ff;
/* 0x0680da00 */ LDATA extern char public_680da00; // 'u'
/* 0x0680da01 */ LDATA extern char public_680da01; // 's'
/* 0x0680da02 */ LDATA extern char public_680da02; // 'e'
/* 0x0680da03 */ LDATA extern char public_680da03; // 'r'
/* 0x0680da04 */ LDATA extern char public_680da04; // 'd'
/* 0x0680da05 */ LDATA extern char public_680da05; // 'a'
/* 0x0680da06 */ LDATA extern char public_680da06; // 't'
/* 0x0680da07 */ LDATA extern char public_680da07; // 'a'
/* 0x0680da08 */ LDATA extern char public_680da08;
/* 0x0680da09 */ LDATA extern char public_680da09;
/* 0x0680da0a */ LDATA extern char public_680da0a;
/* 0x0680da0b */ LDATA extern char public_680da0b;
/* 0x0680da0c */ LDATA extern char public_680da0c; // 't'
/* 0x0680da0d */ LDATA extern char public_680da0d; // 'a'
/* 0x0680da0e */ LDATA extern char public_680da0e; // 'b'
/* 0x0680da0f */ LDATA extern char public_680da0f; // 'l'
/* 0x0680da10 */ LDATA extern char public_680da10; // 'e'
/* 0x0680da11 */ LDATA extern char public_680da11; // 'E'
/* 0x0680da12 */ LDATA extern char public_680da12; // 'M'
/* 0x0680da13 */ LDATA extern char public_680da13;
/* 0x0680da14 */ LDATA extern char public_680da14; // 'n'
/* 0x0680da15 */ LDATA extern char public_680da15; // 'o'
/* 0x0680da16 */ LDATA extern char public_680da16; // 't'
/* 0x0680da17 */ LDATA extern char public_680da17; // ' '
/* 0x0680da18 */ LDATA extern char public_680da18; // 'e'
/* 0x0680da19 */ LDATA extern char public_680da19; // 'n'
/* 0x0680da1a */ LDATA extern char public_680da1a; // 'o'
/* 0x0680da1b */ LDATA extern char public_680da1b; // 'u'
/* 0x0680da1c */ LDATA extern char public_680da1c; // 'g'
/* 0x0680da1d */ LDATA extern char public_680da1d; // 'h'
/* 0x0680da1e */ LDATA extern char public_680da1e; // ' '
/* 0x0680da1f */ LDATA extern char public_680da1f; // 'm'
/* 0x0680da20 */ LDATA extern char public_680da20; // 'e'
/* 0x0680da21 */ LDATA extern char public_680da21; // 'm'
/* 0x0680da22 */ LDATA extern char public_680da22; // 'o'
/* 0x0680da23 */ LDATA extern char public_680da23; // 'r'
/* 0x0680da24 */ LDATA extern char public_680da24; // 'y'
/* 0x0680da25 */ LDATA extern char public_680da25;
/* 0x0680da26 */ LDATA extern char public_680da26;
/* 0x0680da27 */ LDATA extern char public_680da27;
/* 0x0680da28 */ LDATA extern char public_680da28;
/* 0x0680da29 */ LDATA extern char public_680da29;
/* 0x0680da2a */ LDATA extern char public_680da2a;
/* 0x0680da2b */ LDATA extern char public_680da2b;
/* 0x0680da2c */ LDATA extern char public_680da2c;
/* 0x0680da2d */ LDATA extern char public_680da2d;
/* 0x0680da2e */ LDATA extern char public_680da2e;
/* 0x0680da2f */ LDATA extern char public_680da2f;
/* 0x0680da30 */ LDATA extern char public_680da30;
/* 0x0680da31 */ LDATA extern char public_680da31;
/* 0x0680da32 */ LDATA extern char public_680da32;
/* 0x0680da33 */ LDATA extern char public_680da33;
/* 0x0680da34 */ LDATA extern char public_680da34;
/* 0x0680da35 */ LDATA extern char public_680da35;
/* 0x0680da36 */ LDATA extern char public_680da36;
/* 0x0680da37 */ LDATA extern char public_680da37;
/* 0x0680da38 */ LDATA extern char public_680da38;
/* 0x0680da39 */ LDATA extern char public_680da39;
/* 0x0680da3a */ LDATA extern char public_680da3a;
/* 0x0680da3b */ LDATA extern char public_680da3b;
/* 0x0680da3c */ LDATA extern char public_680da3c;
/* 0x0680da3d */ LDATA extern char public_680da3d;
/* 0x0680da3e */ LDATA extern char public_680da3e;
/* 0x0680da3f */ LDATA extern char public_680da3f;
/* 0x0680da40 */ LDATA extern char public_680da40;
/* 0x0680da41 */ LDATA extern char public_680da41;
/* 0x0680da42 */ LDATA extern char public_680da42;
/* 0x0680da43 */ LDATA extern char public_680da43;
/* 0x0680da44 */ LDATA extern char public_680da44;
/* 0x0680da45 */ LDATA extern char public_680da45;
/* 0x0680da46 */ LDATA extern char public_680da46;
/* 0x0680da47 */ LDATA extern char public_680da47;
/* 0x0680da48 */ LDATA extern char public_680da48;
/* 0x0680da49 */ LDATA extern char public_680da49;
/* 0x0680da4a */ LDATA extern char public_680da4a;
/* 0x0680da4b */ LDATA extern char public_680da4b;
/* 0x0680da4c */ LDATA extern char public_680da4c;
/* 0x0680da4d */ LDATA extern char public_680da4d;
/* 0x0680da4e */ LDATA extern char public_680da4e;
/* 0x0680da4f */ LDATA extern char public_680da4f;
/* 0x0680da50 */ LDATA extern char public_680da50;
/* 0x0680da51 */ LDATA extern char public_680da51;
/* 0x0680da52 */ LDATA extern char public_680da52;
/* 0x0680da53 */ LDATA extern char public_680da53;
/* 0x0680da54 */ LDATA extern char public_680da54;
/* 0x0680da55 */ LDATA extern char public_680da55;
/* 0x0680da56 */ LDATA extern char public_680da56;
/* 0x0680da57 */ LDATA extern char public_680da57;
/* 0x0680da58 */ LDATA extern char public_680da58;
/* 0x0680da59 */ LDATA extern char public_680da59;
/* 0x0680da5a */ LDATA extern char public_680da5a;
/* 0x0680da5b */ LDATA extern char public_680da5b;
/* 0x0680da5c */ LDATA extern char public_680da5c; // ')'
/* 0x0680da5d */ LDATA extern char public_680da5d;
/* 0x0680da5e */ LDATA extern char public_680da5e;
/* 0x0680da5f */ LDATA extern char public_680da5f;
/* 0x0680da60 */ LDATA extern char public_680da60; // ']'
/* 0x0680da61 */ LDATA extern char public_680da61;
/* 0x0680da62 */ LDATA extern char public_680da62;
/* 0x0680da63 */ LDATA extern char public_680da63;
/* 0x0680da64 */ LDATA extern char public_680da64; // '}'
/* 0x0680da65 */ LDATA extern char public_680da65;
/* 0x0680da66 */ LDATA extern char public_680da66;
/* 0x0680da67 */ LDATA extern char public_680da67;
/* 0x0680da68 */ LDATA extern char public_680da68; // ';'
/* 0x0680da69 */ LDATA extern char public_680da69;
/* 0x0680da6a */ LDATA extern char public_680da6a;
/* 0x0680da6b */ LDATA extern char public_680da6b;
/* 0x0680da6c */ LDATA extern char public_680da6c;
/* 0x0680da6d */ LDATA extern char public_680da6d;
/* 0x0680da6e */ LDATA extern char public_680da6e;
/* 0x0680da6f */ LDATA extern char public_680da6f;
/* 0x0680da70 */ LDATA extern char public_680da70; // ','
/* 0x0680da71 */ LDATA extern char public_680da71;
/* 0x0680da72 */ LDATA extern char public_680da72;
/* 0x0680da73 */ LDATA extern char public_680da73;
/* 0x0680da74 */ LDATA extern char public_680da74;
/* 0x0680da75 */ LDATA extern char public_680da75;
/* 0x0680da76 */ LDATA extern char public_680da76;
/* 0x0680da77 */ LDATA extern char public_680da77;
/* 0x0680da78 */ LDATA extern char public_680da78;
/* 0x0680da79 */ LDATA extern char public_680da79;
/* 0x0680da7a */ LDATA extern char public_680da7a;
/* 0x0680da7b */ LDATA extern char public_680da7b;
/* 0x0680da7c */ LDATA extern char public_680da7c;
/* 0x0680da7d */ LDATA extern char public_680da7d;
/* 0x0680da7e */ LDATA extern char public_680da7e;
/* 0x0680da7f */ LDATA extern char public_680da7f;
/* 0x0680da80 */ LDATA extern char public_680da80; // '>'
/* 0x0680da81 */ LDATA extern char public_680da81;
/* 0x0680da82 */ LDATA extern char public_680da82;
/* 0x0680da83 */ LDATA extern char public_680da83;
/* 0x0680da84 */ LDATA extern char public_680da84; // '<'
/* 0x0680da85 */ LDATA extern char public_680da85;
/* 0x0680da86 */ LDATA extern char public_680da86;
/* 0x0680da87 */ LDATA extern char public_680da87;
/* 0x0680da88 */ LDATA extern char public_680da88;
/* 0x0680da89 */ LDATA extern char public_680da89;
/* 0x0680da8a */ LDATA extern char public_680da8a;
/* 0x0680da8b */ LDATA extern char public_680da8b;
/* 0x0680da8c */ LDATA extern char public_680da8c;
/* 0x0680da8d */ LDATA extern char public_680da8d;
/* 0x0680da8e */ LDATA extern char public_680da8e;
/* 0x0680da8f */ LDATA extern char public_680da8f;
/* 0x0680da90 */ LDATA extern char public_680da90;
/* 0x0680da91 */ LDATA extern char public_680da91;
/* 0x0680da92 */ LDATA extern char public_680da92;
/* 0x0680da93 */ LDATA extern char public_680da93;
/* 0x0680da94 */ LDATA extern char public_680da94; // '+'
/* 0x0680da95 */ LDATA extern char public_680da95;
/* 0x0680da96 */ LDATA extern char public_680da96;
/* 0x0680da97 */ LDATA extern char public_680da97;
/* 0x0680da98 */ LDATA extern char public_680da98; // '-'
/* 0x0680da99 */ LDATA extern char public_680da99;
/* 0x0680da9a */ LDATA extern char public_680da9a;
/* 0x0680da9b */ LDATA extern char public_680da9b;
/* 0x0680da9c */ LDATA extern char public_680da9c; // '*'
/* 0x0680da9d */ LDATA extern char public_680da9d;
/* 0x0680da9e */ LDATA extern char public_680da9e;
/* 0x0680da9f */ LDATA extern char public_680da9f;
/* 0x0680daa0 */ LDATA extern char public_680daa0; // '/'
/* 0x0680daa1 */ LDATA extern char public_680daa1;
/* 0x0680daa2 */ LDATA extern char public_680daa2;
/* 0x0680daa3 */ LDATA extern char public_680daa3;
/* 0x0680daa4 */ LDATA extern char public_680daa4; // '^'
/* 0x0680daa5 */ LDATA extern char public_680daa5;
/* 0x0680daa6 */ LDATA extern char public_680daa6;
/* 0x0680daa7 */ LDATA extern char public_680daa7;
/* 0x0680daa8 */ LDATA extern char public_680daa8;
/* 0x0680daa9 */ LDATA extern char public_680daa9;
/* 0x0680daaa */ LDATA extern char public_680daaa;
/* 0x0680daab */ LDATA extern char public_680daab;
/* 0x0680daac */ LDATA extern char public_680daac;
/* 0x0680daad */ LDATA extern char public_680daad;
/* 0x0680daae */ LDATA extern char public_680daae;
/* 0x0680daaf */ LDATA extern char public_680daaf;
/* 0x0680dab0 */ LDATA extern char public_680dab0;
/* 0x0680dab1 */ LDATA extern char public_680dab1;
/* 0x0680dab2 */ LDATA extern char public_680dab2;
/* 0x0680dab3 */ LDATA extern char public_680dab3;
/* 0x0680dab4 */ LDATA extern char public_680dab4;
/* 0x0680dab5 */ LDATA extern char public_680dab5;
/* 0x0680dab6 */ LDATA extern char public_680dab6;
/* 0x0680dab7 */ LDATA extern char public_680dab7;
/* 0x0680dab8 */ LDATA extern char public_680dab8;
/* 0x0680dab9 */ LDATA extern char public_680dab9;
/* 0x0680daba */ LDATA extern char public_680daba;
/* 0x0680dabb */ LDATA extern char public_680dabb;
/* 0x0680dabc */ LDATA extern char public_680dabc;
/* 0x0680dabd */ LDATA extern char public_680dabd;
/* 0x0680dabe */ LDATA extern char public_680dabe;
/* 0x0680dabf */ LDATA extern char public_680dabf;
/* 0x0680dac0 */ LDATA extern char public_680dac0;
/* 0x0680dac1 */ LDATA extern char public_680dac1;
/* 0x0680dac2 */ LDATA extern char public_680dac2;
/* 0x0680dac3 */ LDATA extern char public_680dac3;
/* 0x0680dac4 */ LDATA extern char public_680dac4;
/* 0x0680dac5 */ LDATA extern char public_680dac5;
/* 0x0680dac6 */ LDATA extern char public_680dac6;
/* 0x0680dac7 */ LDATA extern char public_680dac7;
/* 0x0680dac8 */ LDATA extern char public_680dac8;
/* 0x0680dac9 */ LDATA extern char public_680dac9;
/* 0x0680daca */ LDATA extern char public_680daca;
/* 0x0680dacb */ LDATA extern char public_680dacb;
/* 0x0680dacc */ LDATA extern char public_680dacc;
/* 0x0680dacd */ LDATA extern char public_680dacd;
/* 0x0680dace */ LDATA extern char public_680dace;
/* 0x0680dacf */ LDATA extern char public_680dacf;
/* 0x0680dad0 */ LDATA extern char public_680dad0;
/* 0x0680dad1 */ LDATA extern char public_680dad1;
/* 0x0680dad2 */ LDATA extern char public_680dad2;
/* 0x0680dad3 */ LDATA extern char public_680dad3;
/* 0x0680dad4 */ LDATA extern char public_680dad4;
/* 0x0680dad5 */ LDATA extern char public_680dad5;
/* 0x0680dad6 */ LDATA extern char public_680dad6;
/* 0x0680dad7 */ LDATA extern char public_680dad7;
/* 0x0680dad8 */ LDATA extern char public_680dad8;
/* 0x0680dad9 */ LDATA extern char public_680dad9;
/* 0x0680dada */ LDATA extern char public_680dada;
/* 0x0680dadb */ LDATA extern char public_680dadb;
/* 0x0680dadc */ LDATA extern char public_680dadc;
/* 0x0680dadd */ LDATA extern char public_680dadd;
/* 0x0680dade */ LDATA extern char public_680dade;
/* 0x0680dadf */ LDATA extern char public_680dadf;
/* 0x0680dae0 */ LDATA extern char public_680dae0;
/* 0x0680dae1 */ LDATA extern char public_680dae1;
/* 0x0680dae2 */ LDATA extern char public_680dae2;
/* 0x0680dae3 */ LDATA extern char public_680dae3;
/* 0x0680dae4 */ LDATA extern char public_680dae4; // ','
/* 0x0680dae5 */ LDATA extern char public_680dae5;
/* 0x0680dae6 */ LDATA extern char public_680dae6;
/* 0x0680dae7 */ LDATA extern char public_680dae7;
/* 0x0680dae8 */ LDATA extern char public_680dae8; // '+'
/* 0x0680dae9 */ LDATA extern char public_680dae9;
/* 0x0680daea */ LDATA extern char public_680daea;
/* 0x0680daeb */ LDATA extern char public_680daeb;
/* 0x0680daec */ LDATA extern char public_680daec; // ' '
/* 0x0680daed */ LDATA extern char public_680daed;
/* 0x0680daee */ LDATA extern char public_680daee;
/* 0x0680daef */ LDATA extern char public_680daef;
/* 0x0680daf0 */ LDATA extern char public_680daf0;
/* 0x0680daf1 */ LDATA extern char public_680daf1;
/* 0x0680daf2 */ LDATA extern char public_680daf2;
/* 0x0680daf3 */ LDATA extern char public_680daf3;
/* 0x0680daf4 */ LDATA extern char public_680daf4; // '#'
/* 0x0680daf5 */ LDATA extern char public_680daf5;
/* 0x0680daf6 */ LDATA extern char public_680daf6;
/* 0x0680daf7 */ LDATA extern char public_680daf7;
/* 0x0680daf8 */ LDATA extern char public_680daf8; // '!'
/* 0x0680daf9 */ LDATA extern char public_680daf9;
/* 0x0680dafa */ LDATA extern char public_680dafa;
/* 0x0680dafb */ LDATA extern char public_680dafb;
/* 0x0680dafc */ LDATA extern char public_680dafc; // '"'
/* 0x0680dafd */ LDATA extern char public_680dafd;
/* 0x0680dafe */ LDATA extern char public_680dafe;
/* 0x0680daff */ LDATA extern char public_680daff;
/* 0x0680db00 */ LDATA extern char public_680db00; // '$'
/* 0x0680db01 */ LDATA extern char public_680db01;
/* 0x0680db02 */ LDATA extern char public_680db02;
/* 0x0680db03 */ LDATA extern char public_680db03;
/* 0x0680db04 */ LDATA extern char public_680db04; // '*'
/* 0x0680db05 */ LDATA extern char public_680db05;
/* 0x0680db06 */ LDATA extern char public_680db06;
/* 0x0680db07 */ LDATA extern char public_680db07;
/* 0x0680db08 */ LDATA extern char public_680db08; // '%'
/* 0x0680db09 */ LDATA extern char public_680db09;
/* 0x0680db0a */ LDATA extern char public_680db0a;
/* 0x0680db0b */ LDATA extern char public_680db0b;
/* 0x0680db0c */ LDATA extern char public_680db0c; // '&'
/* 0x0680db0d */ LDATA extern char public_680db0d;
/* 0x0680db0e */ LDATA extern char public_680db0e;
/* 0x0680db0f */ LDATA extern char public_680db0f;
/* 0x0680db10 */ LDATA extern char public_680db10; // '''
/* 0x0680db11 */ LDATA extern char public_680db11;
/* 0x0680db12 */ LDATA extern char public_680db12;
/* 0x0680db13 */ LDATA extern char public_680db13;
/* 0x0680db14 */ LDATA extern char public_680db14; // '('
/* 0x0680db15 */ LDATA extern char public_680db15;
/* 0x0680db16 */ LDATA extern char public_680db16;
/* 0x0680db17 */ LDATA extern char public_680db17;
/* 0x0680db18 */ LDATA extern char public_680db18; // ')'
/* 0x0680db19 */ LDATA extern char public_680db19;
/* 0x0680db1a */ LDATA extern char public_680db1a;
/* 0x0680db1b */ LDATA extern char public_680db1b;
/* 0x0680db1c */ LDATA extern char public_680db1c; // '<'
/* 0x0680db1d */ LDATA extern char public_680db1d; // 'e'
/* 0x0680db1e */ LDATA extern char public_680db1e; // 'o'
/* 0x0680db1f */ LDATA extern char public_680db1f; // 'f'
/* 0x0680db20 */ LDATA extern char public_680db20; // '>'
/* 0x0680db21 */ LDATA extern char public_680db21; // ' '
/* 0x0680db22 */ LDATA extern char public_680db22; // 'e'
/* 0x0680db23 */ LDATA extern char public_680db23; // 'x'
/* 0x0680db24 */ LDATA extern char public_680db24; // 'p'
/* 0x0680db25 */ LDATA extern char public_680db25; // 'e'
/* 0x0680db26 */ LDATA extern char public_680db26; // 'c'
/* 0x0680db27 */ LDATA extern char public_680db27; // 't'
/* 0x0680db28 */ LDATA extern char public_680db28; // 'e'
/* 0x0680db29 */ LDATA extern char public_680db29; // 'd'
/* 0x0680db2a */ LDATA extern char public_680db2a;
/* 0x0680db2b */ LDATA extern char public_680db2b;
/* 0x0680db2c */ LDATA extern char public_680db2c; // 'c'
/* 0x0680db2d */ LDATA extern char public_680db2d; // 'o'
/* 0x0680db2e */ LDATA extern char public_680db2e; // 'd'
/* 0x0680db2f */ LDATA extern char public_680db2f; // 'e'
/* 0x0680db30 */ LDATA extern char public_680db30; // ' '
/* 0x0680db31 */ LDATA extern char public_680db31; // 's'
/* 0x0680db32 */ LDATA extern char public_680db32; // 'i'
/* 0x0680db33 */ LDATA extern char public_680db33; // 'z'
/* 0x0680db34 */ LDATA extern char public_680db34; // 'e'
/* 0x0680db35 */ LDATA extern char public_680db35; // ' '
/* 0x0680db36 */ LDATA extern char public_680db36; // 'o'
/* 0x0680db37 */ LDATA extern char public_680db37; // 'v'
/* 0x0680db38 */ LDATA extern char public_680db38; // 'e'
/* 0x0680db39 */ LDATA extern char public_680db39; // 'r'
/* 0x0680db3a */ LDATA extern char public_680db3a; // 'f'
/* 0x0680db3b */ LDATA extern char public_680db3b; // 'l'
/* 0x0680db3c */ LDATA extern char public_680db3c; // 'o'
/* 0x0680db3d */ LDATA extern char public_680db3d; // 'w'
/* 0x0680db3e */ LDATA extern char public_680db3e;
/* 0x0680db3f */ LDATA extern char public_680db3f;
/* 0x0680db40 */ LDATA extern char public_680db40; // 'f'
/* 0x0680db41 */ LDATA extern char public_680db41; // 'u'
/* 0x0680db42 */ LDATA extern char public_680db42; // 'n'
/* 0x0680db43 */ LDATA extern char public_680db43; // 'c'
/* 0x0680db44 */ LDATA extern char public_680db44; // 't'
/* 0x0680db45 */ LDATA extern char public_680db45; // 'i'
/* 0x0680db46 */ LDATA extern char public_680db46; // 'o'
/* 0x0680db47 */ LDATA extern char public_680db47; // 'n'
/* 0x0680db48 */ LDATA extern char public_680db48; // '/'
/* 0x0680db49 */ LDATA extern char public_680db49; // 'e'
/* 0x0680db4a */ LDATA extern char public_680db4a; // 'x'
/* 0x0680db4b */ LDATA extern char public_680db4b; // 'p'
/* 0x0680db4c */ LDATA extern char public_680db4c; // 'r'
/* 0x0680db4d */ LDATA extern char public_680db4d; // 'e'
/* 0x0680db4e */ LDATA extern char public_680db4e; // 's'
/* 0x0680db4f */ LDATA extern char public_680db4f; // 's'
/* 0x0680db50 */ LDATA extern char public_680db50; // 'i'
/* 0x0680db51 */ LDATA extern char public_680db51; // 'o'
/* 0x0680db52 */ LDATA extern char public_680db52; // 'n'
/* 0x0680db53 */ LDATA extern char public_680db53; // ' '
/* 0x0680db54 */ LDATA extern char public_680db54; // 't'
/* 0x0680db55 */ LDATA extern char public_680db55; // 'o'
/* 0x0680db56 */ LDATA extern char public_680db56; // 'o'
/* 0x0680db57 */ LDATA extern char public_680db57; // ' '
/* 0x0680db58 */ LDATA extern char public_680db58; // 'c'
/* 0x0680db59 */ LDATA extern char public_680db59; // 'o'
/* 0x0680db5a */ LDATA extern char public_680db5a; // 'm'
/* 0x0680db5b */ LDATA extern char public_680db5b; // 'p'
/* 0x0680db5c */ LDATA extern char public_680db5c; // 'l'
/* 0x0680db5d */ LDATA extern char public_680db5d; // 'e'
/* 0x0680db5e */ LDATA extern char public_680db5e; // 'x'
/* 0x0680db5f */ LDATA extern char public_680db5f;
/* 0x0680db60 */ LDATA extern char public_680db60; // 's'
/* 0x0680db61 */ LDATA extern char public_680db61; // 'y'
/* 0x0680db62 */ LDATA extern char public_680db62; // 'n'
/* 0x0680db63 */ LDATA extern char public_680db63; // 't'
/* 0x0680db64 */ LDATA extern char public_680db64; // 'a'
/* 0x0680db65 */ LDATA extern char public_680db65; // 'x'
/* 0x0680db66 */ LDATA extern char public_680db66; // ' '
/* 0x0680db67 */ LDATA extern char public_680db67; // 'e'
/* 0x0680db68 */ LDATA extern char public_680db68; // 'r'
/* 0x0680db69 */ LDATA extern char public_680db69; // 'r'
/* 0x0680db6a */ LDATA extern char public_680db6a; // 'o'
/* 0x0680db6b */ LDATA extern char public_680db6b; // 'r'
/* 0x0680db6c */ LDATA extern char public_680db6c;
/* 0x0680db6d */ LDATA extern char public_680db6d;
/* 0x0680db6e */ LDATA extern char public_680db6e;
/* 0x0680db6f */ LDATA extern char public_680db6f;
/* 0x0680db70 */ LDATA extern char public_680db70; // 'c'
/* 0x0680db71 */ LDATA extern char public_680db71; // 'o'
/* 0x0680db72 */ LDATA extern char public_680db72; // 'd'
/* 0x0680db73 */ LDATA extern char public_680db73; // 'e'
/* 0x0680db74 */ LDATA extern char public_680db74; // ' '
/* 0x0680db75 */ LDATA extern char public_680db75; // 't'
/* 0x0680db76 */ LDATA extern char public_680db76; // 'o'
/* 0x0680db77 */ LDATA extern char public_680db77; // 'o'
/* 0x0680db78 */ LDATA extern char public_680db78; // ' '
/* 0x0680db79 */ LDATA extern char public_680db79; // 'l'
/* 0x0680db7a */ LDATA extern char public_680db7a; // 'o'
/* 0x0680db7b */ LDATA extern char public_680db7b; // 'n'
/* 0x0680db7c */ LDATA extern char public_680db7c; // 'g'
/* 0x0680db7d */ LDATA extern char public_680db7d;
/* 0x0680db7e */ LDATA extern char public_680db7e;
/* 0x0680db7f */ LDATA extern char public_680db7f;
/* 0x0680db80 */ LDATA extern char public_680db80; // 'u'
/* 0x0680db81 */ LDATA extern char public_680db81; // 'n'
/* 0x0680db82 */ LDATA extern char public_680db82; // 'e'
/* 0x0680db83 */ LDATA extern char public_680db83; // 'x'
/* 0x0680db84 */ LDATA extern char public_680db84; // 'p'
/* 0x0680db85 */ LDATA extern char public_680db85; // 'e'
/* 0x0680db86 */ LDATA extern char public_680db86; // 'c'
/* 0x0680db87 */ LDATA extern char public_680db87; // 't'
/* 0x0680db88 */ LDATA extern char public_680db88; // 'e'
/* 0x0680db89 */ LDATA extern char public_680db89; // 'd'
/* 0x0680db8a */ LDATA extern char public_680db8a; // ' '
/* 0x0680db8b */ LDATA extern char public_680db8b; // 't'
/* 0x0680db8c */ LDATA extern char public_680db8c; // 'o'
/* 0x0680db8d */ LDATA extern char public_680db8d; // 'k'
/* 0x0680db8e */ LDATA extern char public_680db8e; // 'e'
/* 0x0680db8f */ LDATA extern char public_680db8f; // 'n'
/* 0x0680db90 */ LDATA extern char public_680db90;
/* 0x0680db91 */ LDATA extern char public_680db91;
/* 0x0680db92 */ LDATA extern char public_680db92;
/* 0x0680db93 */ LDATA extern char public_680db93;
/* 0x0680db94 */ LDATA extern char public_680db94; // '`'
/* 0x0680db95 */ LDATA extern char public_680db95; // '%'
/* 0x0680db96 */ LDATA extern char public_680db96; // 's'
/* 0x0680db97 */ LDATA extern char public_680db97; // '''
/* 0x0680db98 */ LDATA extern char public_680db98; // ' '
/* 0x0680db99 */ LDATA extern char public_680db99; // 'e'
/* 0x0680db9a */ LDATA extern char public_680db9a; // 'x'
/* 0x0680db9b */ LDATA extern char public_680db9b; // 'p'
/* 0x0680db9c */ LDATA extern char public_680db9c; // 'e'
/* 0x0680db9d */ LDATA extern char public_680db9d; // 'c'
/* 0x0680db9e */ LDATA extern char public_680db9e; // 't'
/* 0x0680db9f */ LDATA extern char public_680db9f; // 'e'
/* 0x0680dba0 */ LDATA extern char public_680dba0; // 'd'
/* 0x0680dba1 */ LDATA extern char public_680dba1;
/* 0x0680dba2 */ LDATA extern char public_680dba2;
/* 0x0680dba3 */ LDATA extern char public_680dba3;
/* 0x0680dba4 */ LDATA extern char public_680dba4; // '`'
/* 0x0680dba5 */ LDATA extern char public_680dba5; // '%'
/* 0x0680dba6 */ LDATA extern char public_680dba6; // 's'
/* 0x0680dba7 */ LDATA extern char public_680dba7; // '''
/* 0x0680dba8 */ LDATA extern char public_680dba8; // ' '
/* 0x0680dba9 */ LDATA extern char public_680dba9; // 'e'
/* 0x0680dbaa */ LDATA extern char public_680dbaa; // 'x'
/* 0x0680dbab */ LDATA extern char public_680dbab; // 'p'
/* 0x0680dbac */ LDATA extern char public_680dbac; // 'e'
/* 0x0680dbad */ LDATA extern char public_680dbad; // 'c'
/* 0x0680dbae */ LDATA extern char public_680dbae; // 't'
/* 0x0680dbaf */ LDATA extern char public_680dbaf; // 'e'
/* 0x0680dbb0 */ LDATA extern char public_680dbb0; // 'd'
/* 0x0680dbb1 */ LDATA extern char public_680dbb1; // ' '
/* 0x0680dbb2 */ LDATA extern char public_680dbb2; // '('
/* 0x0680dbb3 */ LDATA extern char public_680dbb3; // 't'
/* 0x0680dbb4 */ LDATA extern char public_680dbb4; // 'o'
/* 0x0680dbb5 */ LDATA extern char public_680dbb5; // ' '
/* 0x0680dbb6 */ LDATA extern char public_680dbb6; // 'c'
/* 0x0680dbb7 */ LDATA extern char public_680dbb7; // 'l'
/* 0x0680dbb8 */ LDATA extern char public_680dbb8; // 'o'
/* 0x0680dbb9 */ LDATA extern char public_680dbb9; // 's'
/* 0x0680dbba */ LDATA extern char public_680dbba; // 'e'
/* 0x0680dbbb */ LDATA extern char public_680dbbb; // ' '
/* 0x0680dbbc */ LDATA extern char public_680dbbc; // '`'
/* 0x0680dbbd */ LDATA extern char public_680dbbd; // '%'
/* 0x0680dbbe */ LDATA extern char public_680dbbe; // 's'
/* 0x0680dbbf */ LDATA extern char public_680dbbf; // '''
/* 0x0680dbc0 */ LDATA extern char public_680dbc0; // ' '
/* 0x0680dbc1 */ LDATA extern char public_680dbc1; // 'a'
/* 0x0680dbc2 */ LDATA extern char public_680dbc2; // 't'
/* 0x0680dbc3 */ LDATA extern char public_680dbc3; // ' '
/* 0x0680dbc4 */ LDATA extern char public_680dbc4; // 'l'
/* 0x0680dbc5 */ LDATA extern char public_680dbc5; // 'i'
/* 0x0680dbc6 */ LDATA extern char public_680dbc6; // 'n'
/* 0x0680dbc7 */ LDATA extern char public_680dbc7; // 'e'
/* 0x0680dbc8 */ LDATA extern char public_680dbc8; // ' '
/* 0x0680dbc9 */ LDATA extern char public_680dbc9; // '%'
/* 0x0680dbca */ LDATA extern char public_680dbca; // 'd'
/* 0x0680dbcb */ LDATA extern char public_680dbcb; // ')'
/* 0x0680dbcc */ LDATA extern char public_680dbcc;
/* 0x0680dbcd */ LDATA extern char public_680dbcd;
/* 0x0680dbce */ LDATA extern char public_680dbce;
/* 0x0680dbcf */ LDATA extern char public_680dbcf;
/* 0x0680dbd0 */ LDATA extern char public_680dbd0; // 'c'
/* 0x0680dbd1 */ LDATA extern char public_680dbd1; // 'a'
/* 0x0680dbd2 */ LDATA extern char public_680dbd2; // 'n'
/* 0x0680dbd3 */ LDATA extern char public_680dbd3; // 'n'
/* 0x0680dbd4 */ LDATA extern char public_680dbd4; // 'o'
/* 0x0680dbd5 */ LDATA extern char public_680dbd5; // 't'
/* 0x0680dbd6 */ LDATA extern char public_680dbd6; // ' '
/* 0x0680dbd7 */ LDATA extern char public_680dbd7; // 'a'
/* 0x0680dbd8 */ LDATA extern char public_680dbd8; // 'c'
/* 0x0680dbd9 */ LDATA extern char public_680dbd9; // 'c'
/* 0x0680dbda */ LDATA extern char public_680dbda; // 'e'
/* 0x0680dbdb */ LDATA extern char public_680dbdb; // 's'
/* 0x0680dbdc */ LDATA extern char public_680dbdc; // 's'
/* 0x0680dbdd */ LDATA extern char public_680dbdd; // ' '
/* 0x0680dbde */ LDATA extern char public_680dbde; // 'a'
/* 0x0680dbdf */ LDATA extern char public_680dbdf; // ' '
/* 0x0680dbe0 */ LDATA extern char public_680dbe0; // 'v'
/* 0x0680dbe1 */ LDATA extern char public_680dbe1; // 'a'
/* 0x0680dbe2 */ LDATA extern char public_680dbe2; // 'r'
/* 0x0680dbe3 */ LDATA extern char public_680dbe3; // 'i'
/* 0x0680dbe4 */ LDATA extern char public_680dbe4; // 'a'
/* 0x0680dbe5 */ LDATA extern char public_680dbe5; // 'b'
/* 0x0680dbe6 */ LDATA extern char public_680dbe6; // 'l'
/* 0x0680dbe7 */ LDATA extern char public_680dbe7; // 'e'
/* 0x0680dbe8 */ LDATA extern char public_680dbe8; // ' '
/* 0x0680dbe9 */ LDATA extern char public_680dbe9; // 'i'
/* 0x0680dbea */ LDATA extern char public_680dbea; // 'n'
/* 0x0680dbeb */ LDATA extern char public_680dbeb; // ' '
/* 0x0680dbec */ LDATA extern char public_680dbec; // 'o'
/* 0x0680dbed */ LDATA extern char public_680dbed; // 'u'
/* 0x0680dbee */ LDATA extern char public_680dbee; // 't'
/* 0x0680dbef */ LDATA extern char public_680dbef; // 'e'
/* 0x0680dbf0 */ LDATA extern char public_680dbf0; // 'r'
/* 0x0680dbf1 */ LDATA extern char public_680dbf1; // ' '
/* 0x0680dbf2 */ LDATA extern char public_680dbf2; // 's'
/* 0x0680dbf3 */ LDATA extern char public_680dbf3; // 'c'
/* 0x0680dbf4 */ LDATA extern char public_680dbf4; // 'o'
/* 0x0680dbf5 */ LDATA extern char public_680dbf5; // 'p'
/* 0x0680dbf6 */ LDATA extern char public_680dbf6; // 'e'
/* 0x0680dbf7 */ LDATA extern char public_680dbf7;
/* 0x0680dbf8 */ LDATA extern char public_680dbf8; // 'c'
/* 0x0680dbf9 */ LDATA extern char public_680dbf9; // 'o'
/* 0x0680dbfa */ LDATA extern char public_680dbfa; // 'n'
/* 0x0680dbfb */ LDATA extern char public_680dbfb; // 's'
/* 0x0680dbfc */ LDATA extern char public_680dbfc; // 't'
/* 0x0680dbfd */ LDATA extern char public_680dbfd; // 'a'
/* 0x0680dbfe */ LDATA extern char public_680dbfe; // 'n'
/* 0x0680dbff */ LDATA extern char public_680dbff; // 't'
/* 0x0680dc00 */ LDATA extern char public_680dc00; // ' '
/* 0x0680dc01 */ LDATA extern char public_680dc01; // 't'
/* 0x0680dc02 */ LDATA extern char public_680dc02; // 'a'
/* 0x0680dc03 */ LDATA extern char public_680dc03; // 'b'
/* 0x0680dc04 */ LDATA extern char public_680dc04; // 'l'
/* 0x0680dc05 */ LDATA extern char public_680dc05; // 'e'
/* 0x0680dc06 */ LDATA extern char public_680dc06; // ' '
/* 0x0680dc07 */ LDATA extern char public_680dc07; // 'o'
/* 0x0680dc08 */ LDATA extern char public_680dc08; // 'v'
/* 0x0680dc09 */ LDATA extern char public_680dc09; // 'e'
/* 0x0680dc0a */ LDATA extern char public_680dc0a; // 'r'
/* 0x0680dc0b */ LDATA extern char public_680dc0b; // 'f'
/* 0x0680dc0c */ LDATA extern char public_680dc0c; // 'l'
/* 0x0680dc0d */ LDATA extern char public_680dc0d; // 'o'
/* 0x0680dc0e */ LDATA extern char public_680dc0e; // 'w'
/* 0x0680dc0f */ LDATA extern char public_680dc0f;
/* 0x0680dc10 */ LDATA extern char public_680dc10; // '`'
/* 0x0680dc11 */ LDATA extern char public_680dc11; // 'N'
/* 0x0680dc12 */ LDATA extern char public_680dc12; // 'A'
/* 0x0680dc13 */ LDATA extern char public_680dc13; // 'M'
/* 0x0680dc14 */ LDATA extern char public_680dc14; // 'E'
/* 0x0680dc15 */ LDATA extern char public_680dc15; // '''
/* 0x0680dc16 */ LDATA extern char public_680dc16; // ' '
/* 0x0680dc17 */ LDATA extern char public_680dc17; // 'e'
/* 0x0680dc18 */ LDATA extern char public_680dc18; // 'x'
/* 0x0680dc19 */ LDATA extern char public_680dc19; // 'p'
/* 0x0680dc1a */ LDATA extern char public_680dc1a; // 'e'
/* 0x0680dc1b */ LDATA extern char public_680dc1b; // 'c'
/* 0x0680dc1c */ LDATA extern char public_680dc1c; // 't'
/* 0x0680dc1d */ LDATA extern char public_680dc1d; // 'e'
/* 0x0680dc1e */ LDATA extern char public_680dc1e; // 'd'
/* 0x0680dc1f */ LDATA extern char public_680dc1f;
/* 0x0680dc20 */ LDATA extern char public_680dc20; // 's'
/* 0x0680dc21 */ LDATA extern char public_680dc21; // 'e'
/* 0x0680dc22 */ LDATA extern char public_680dc22; // 'l'
/* 0x0680dc23 */ LDATA extern char public_680dc23; // 'f'
/* 0x0680dc24 */ LDATA extern char public_680dc24;
/* 0x0680dc25 */ LDATA extern char public_680dc25;
/* 0x0680dc26 */ LDATA extern char public_680dc26;
/* 0x0680dc27 */ LDATA extern char public_680dc27;
/* 0x0680dc28 */ LDATA extern char public_680dc28; // 'l'
/* 0x0680dc29 */ LDATA extern char public_680dc29; // 'o'
/* 0x0680dc2a */ LDATA extern char public_680dc2a; // 'c'
/* 0x0680dc2b */ LDATA extern char public_680dc2b; // 'a'
/* 0x0680dc2c */ LDATA extern char public_680dc2c; // 'l'
/* 0x0680dc2d */ LDATA extern char public_680dc2d; // ' '
/* 0x0680dc2e */ LDATA extern char public_680dc2e; // 'v'
/* 0x0680dc2f */ LDATA extern char public_680dc2f; // 'a'
/* 0x0680dc30 */ LDATA extern char public_680dc30; // 'r'
/* 0x0680dc31 */ LDATA extern char public_680dc31; // 'i'
/* 0x0680dc32 */ LDATA extern char public_680dc32; // 'a'
/* 0x0680dc33 */ LDATA extern char public_680dc33; // 'b'
/* 0x0680dc34 */ LDATA extern char public_680dc34; // 'l'
/* 0x0680dc35 */ LDATA extern char public_680dc35; // 'e'
/* 0x0680dc36 */ LDATA extern char public_680dc36; // 's'
/* 0x0680dc37 */ LDATA extern char public_680dc37;
/* 0x0680dc38 */ LDATA extern char public_680dc38; // 't'
/* 0x0680dc39 */ LDATA extern char public_680dc39; // 'o'
/* 0x0680dc3a */ LDATA extern char public_680dc3a; // 'o'
/* 0x0680dc3b */ LDATA extern char public_680dc3b; // ' '
/* 0x0680dc3c */ LDATA extern char public_680dc3c; // 'm'
/* 0x0680dc3d */ LDATA extern char public_680dc3d; // 'a'
/* 0x0680dc3e */ LDATA extern char public_680dc3e; // 'n'
/* 0x0680dc3f */ LDATA extern char public_680dc3f; // 'y'
/* 0x0680dc40 */ LDATA extern char public_680dc40; // ' '
/* 0x0680dc41 */ LDATA extern char public_680dc41; // '%'
/* 0x0680dc42 */ LDATA extern char public_680dc42; // 's'
/* 0x0680dc43 */ LDATA extern char public_680dc43; // ' '
/* 0x0680dc44 */ LDATA extern char public_680dc44; // '('
/* 0x0680dc45 */ LDATA extern char public_680dc45; // 'l'
/* 0x0680dc46 */ LDATA extern char public_680dc46; // 'i'
/* 0x0680dc47 */ LDATA extern char public_680dc47; // 'm'
/* 0x0680dc48 */ LDATA extern char public_680dc48; // 'i'
/* 0x0680dc49 */ LDATA extern char public_680dc49; // 't'
/* 0x0680dc4a */ LDATA extern char public_680dc4a; // '='
/* 0x0680dc4b */ LDATA extern char public_680dc4b; // '%'
/* 0x0680dc4c */ LDATA extern char public_680dc4c; // 'd'
/* 0x0680dc4d */ LDATA extern char public_680dc4d; // ')'
/* 0x0680dc4e */ LDATA extern char public_680dc4e;
/* 0x0680dc4f */ LDATA extern char public_680dc4f;
/* 0x0680dc50 */ LDATA extern char public_680dc50; // 'i'
/* 0x0680dc51 */ LDATA extern char public_680dc51; // 'l'
/* 0x0680dc52 */ LDATA extern char public_680dc52; // 'l'
/* 0x0680dc53 */ LDATA extern char public_680dc53; // '-'
/* 0x0680dc54 */ LDATA extern char public_680dc54; // 'f'
/* 0x0680dc55 */ LDATA extern char public_680dc55; // 'o'
/* 0x0680dc56 */ LDATA extern char public_680dc56; // 'r'
/* 0x0680dc57 */ LDATA extern char public_680dc57; // 'm'
/* 0x0680dc58 */ LDATA extern char public_680dc58; // 'e'
/* 0x0680dc59 */ LDATA extern char public_680dc59; // 'd'
/* 0x0680dc5a */ LDATA extern char public_680dc5a; // ' '
/* 0x0680dc5b */ LDATA extern char public_680dc5b; // 'e'
/* 0x0680dc5c */ LDATA extern char public_680dc5c; // 'x'
/* 0x0680dc5d */ LDATA extern char public_680dc5d; // 'p'
/* 0x0680dc5e */ LDATA extern char public_680dc5e; // 'r'
/* 0x0680dc5f */ LDATA extern char public_680dc5f; // 'e'
/* 0x0680dc60 */ LDATA extern char public_680dc60; // 's'
/* 0x0680dc61 */ LDATA extern char public_680dc61; // 's'
/* 0x0680dc62 */ LDATA extern char public_680dc62; // 'i'
/* 0x0680dc63 */ LDATA extern char public_680dc63; // 'o'
/* 0x0680dc64 */ LDATA extern char public_680dc64; // 'n'
/* 0x0680dc65 */ LDATA extern char public_680dc65;
/* 0x0680dc66 */ LDATA extern char public_680dc66;
/* 0x0680dc67 */ LDATA extern char public_680dc67;
/* 0x0680dc68 */ LDATA extern char public_680dc68; // 'e'
/* 0x0680dc69 */ LDATA extern char public_680dc69; // 'x'
/* 0x0680dc6a */ LDATA extern char public_680dc6a; // 'p'
/* 0x0680dc6b */ LDATA extern char public_680dc6b; // 'r'
/* 0x0680dc6c */ LDATA extern char public_680dc6c; // 'e'
/* 0x0680dc6d */ LDATA extern char public_680dc6d; // 's'
/* 0x0680dc6e */ LDATA extern char public_680dc6e; // 's'
/* 0x0680dc6f */ LDATA extern char public_680dc6f; // 'i'
/* 0x0680dc70 */ LDATA extern char public_680dc70; // 'o'
/* 0x0680dc71 */ LDATA extern char public_680dc71; // 'n'
/* 0x0680dc72 */ LDATA extern char public_680dc72; // ' '
/* 0x0680dc73 */ LDATA extern char public_680dc73; // 't'
/* 0x0680dc74 */ LDATA extern char public_680dc74; // 'o'
/* 0x0680dc75 */ LDATA extern char public_680dc75; // 'o'
/* 0x0680dc76 */ LDATA extern char public_680dc76; // ' '
/* 0x0680dc77 */ LDATA extern char public_680dc77; // 'c'
/* 0x0680dc78 */ LDATA extern char public_680dc78; // 'o'
/* 0x0680dc79 */ LDATA extern char public_680dc79; // 'm'
/* 0x0680dc7a */ LDATA extern char public_680dc7a; // 'p'
/* 0x0680dc7b */ LDATA extern char public_680dc7b; // 'l'
/* 0x0680dc7c */ LDATA extern char public_680dc7c; // 'e'
/* 0x0680dc7d */ LDATA extern char public_680dc7d; // 'x'
/* 0x0680dc7e */ LDATA extern char public_680dc7e;
/* 0x0680dc7f */ LDATA extern char public_680dc7f;
/* 0x0680dc80 */ LDATA extern char public_680dc80; // '<'
/* 0x0680dc81 */ LDATA extern char public_680dc81; // 'e'
/* 0x0680dc82 */ LDATA extern char public_680dc82; // 'x'
/* 0x0680dc83 */ LDATA extern char public_680dc83; // 'p'
/* 0x0680dc84 */ LDATA extern char public_680dc84; // 'r'
/* 0x0680dc85 */ LDATA extern char public_680dc85; // 'e'
/* 0x0680dc86 */ LDATA extern char public_680dc86; // 's'
/* 0x0680dc87 */ LDATA extern char public_680dc87; // 's'
/* 0x0680dc88 */ LDATA extern char public_680dc88; // 'i'
/* 0x0680dc89 */ LDATA extern char public_680dc89; // 'o'
/* 0x0680dc8a */ LDATA extern char public_680dc8a; // 'n'
/* 0x0680dc8b */ LDATA extern char public_680dc8b; // '>'
/* 0x0680dc8c */ LDATA extern char public_680dc8c; // ' '
/* 0x0680dc8d */ LDATA extern char public_680dc8d; // 'e'
/* 0x0680dc8e */ LDATA extern char public_680dc8e; // 'x'
/* 0x0680dc8f */ LDATA extern char public_680dc8f; // 'p'
/* 0x0680dc90 */ LDATA extern char public_680dc90; // 'e'
/* 0x0680dc91 */ LDATA extern char public_680dc91; // 'c'
/* 0x0680dc92 */ LDATA extern char public_680dc92; // 't'
/* 0x0680dc93 */ LDATA extern char public_680dc93; // 'e'
/* 0x0680dc94 */ LDATA extern char public_680dc94; // 'd'
/* 0x0680dc95 */ LDATA extern char public_680dc95;
/* 0x0680dc96 */ LDATA extern char public_680dc96;
/* 0x0680dc97 */ LDATA extern char public_680dc97;
/* 0x0680dc98 */ LDATA extern char public_680dc98; // 'c'
/* 0x0680dc99 */ LDATA extern char public_680dc99; // 'a'
/* 0x0680dc9a */ LDATA extern char public_680dc9a; // 'n'
/* 0x0680dc9b */ LDATA extern char public_680dc9b; // 'n'
/* 0x0680dc9c */ LDATA extern char public_680dc9c; // 'o'
/* 0x0680dc9d */ LDATA extern char public_680dc9d; // 't'
/* 0x0680dc9e */ LDATA extern char public_680dc9e; // ' '
/* 0x0680dc9f */ LDATA extern char public_680dc9f; // 'a'
/* 0x0680dca0 */ LDATA extern char public_680dca0; // 'c'
/* 0x0680dca1 */ LDATA extern char public_680dca1; // 'c'
/* 0x0680dca2 */ LDATA extern char public_680dca2; // 'e'
/* 0x0680dca3 */ LDATA extern char public_680dca3; // 's'
/* 0x0680dca4 */ LDATA extern char public_680dca4; // 's'
/* 0x0680dca5 */ LDATA extern char public_680dca5; // ' '
/* 0x0680dca6 */ LDATA extern char public_680dca6; // 'a'
/* 0x0680dca7 */ LDATA extern char public_680dca7; // 'n'
/* 0x0680dca8 */ LDATA extern char public_680dca8; // ' '
/* 0x0680dca9 */ LDATA extern char public_680dca9; // 'u'
/* 0x0680dcaa */ LDATA extern char public_680dcaa; // 'p'
/* 0x0680dcab */ LDATA extern char public_680dcab; // 'v'
/* 0x0680dcac */ LDATA extern char public_680dcac; // 'a'
/* 0x0680dcad */ LDATA extern char public_680dcad; // 'l'
/* 0x0680dcae */ LDATA extern char public_680dcae; // 'u'
/* 0x0680dcaf */ LDATA extern char public_680dcaf; // 'e'
/* 0x0680dcb0 */ LDATA extern char public_680dcb0; // ' '
/* 0x0680dcb1 */ LDATA extern char public_680dcb1; // 'i'
/* 0x0680dcb2 */ LDATA extern char public_680dcb2; // 'n'
/* 0x0680dcb3 */ LDATA extern char public_680dcb3; // ' '
/* 0x0680dcb4 */ LDATA extern char public_680dcb4; // 'c'
/* 0x0680dcb5 */ LDATA extern char public_680dcb5; // 'u'
/* 0x0680dcb6 */ LDATA extern char public_680dcb6; // 'r'
/* 0x0680dcb7 */ LDATA extern char public_680dcb7; // 'r'
/* 0x0680dcb8 */ LDATA extern char public_680dcb8; // 'e'
/* 0x0680dcb9 */ LDATA extern char public_680dcb9; // 'n'
/* 0x0680dcba */ LDATA extern char public_680dcba; // 't'
/* 0x0680dcbb */ LDATA extern char public_680dcbb; // ' '
/* 0x0680dcbc */ LDATA extern char public_680dcbc; // 's'
/* 0x0680dcbd */ LDATA extern char public_680dcbd; // 'c'
/* 0x0680dcbe */ LDATA extern char public_680dcbe; // 'o'
/* 0x0680dcbf */ LDATA extern char public_680dcbf; // 'p'
/* 0x0680dcc0 */ LDATA extern char public_680dcc0; // 'e'
/* 0x0680dcc1 */ LDATA extern char public_680dcc1;
/* 0x0680dcc2 */ LDATA extern char public_680dcc2;
/* 0x0680dcc3 */ LDATA extern char public_680dcc3;
/* 0x0680dcc4 */ LDATA extern char public_680dcc4; // 'c'
/* 0x0680dcc5 */ LDATA extern char public_680dcc5; // 'a'
/* 0x0680dcc6 */ LDATA extern char public_680dcc6; // 'n'
/* 0x0680dcc7 */ LDATA extern char public_680dcc7; // 'n'
/* 0x0680dcc8 */ LDATA extern char public_680dcc8; // 'o'
/* 0x0680dcc9 */ LDATA extern char public_680dcc9; // 't'
/* 0x0680dcca */ LDATA extern char public_680dcca; // ' '
/* 0x0680dccb */ LDATA extern char public_680dccb; // 'a'
/* 0x0680dccc */ LDATA extern char public_680dccc; // 'c'
/* 0x0680dccd */ LDATA extern char public_680dccd; // 'c'
/* 0x0680dcce */ LDATA extern char public_680dcce; // 'e'
/* 0x0680dccf */ LDATA extern char public_680dccf; // 's'
/* 0x0680dcd0 */ LDATA extern char public_680dcd0; // 's'
/* 0x0680dcd1 */ LDATA extern char public_680dcd1; // ' '
/* 0x0680dcd2 */ LDATA extern char public_680dcd2; // 'u'
/* 0x0680dcd3 */ LDATA extern char public_680dcd3; // 'p'
/* 0x0680dcd4 */ LDATA extern char public_680dcd4; // 'v'
/* 0x0680dcd5 */ LDATA extern char public_680dcd5; // 'a'
/* 0x0680dcd6 */ LDATA extern char public_680dcd6; // 'l'
/* 0x0680dcd7 */ LDATA extern char public_680dcd7; // 'u'
/* 0x0680dcd8 */ LDATA extern char public_680dcd8; // 'e'
/* 0x0680dcd9 */ LDATA extern char public_680dcd9; // ' '
/* 0x0680dcda */ LDATA extern char public_680dcda; // 'i'
/* 0x0680dcdb */ LDATA extern char public_680dcdb; // 'n'
/* 0x0680dcdc */ LDATA extern char public_680dcdc; // ' '
/* 0x0680dcdd */ LDATA extern char public_680dcdd; // 'm'
/* 0x0680dcde */ LDATA extern char public_680dcde; // 'a'
/* 0x0680dcdf */ LDATA extern char public_680dcdf; // 'i'
/* 0x0680dce0 */ LDATA extern char public_680dce0; // 'n'
/* 0x0680dce1 */ LDATA extern char public_680dce1;
/* 0x0680dce2 */ LDATA extern char public_680dce2;
/* 0x0680dce3 */ LDATA extern char public_680dce3;
/* 0x0680dce4 */ LDATA extern char public_680dce4; // 'u'
/* 0x0680dce5 */ LDATA extern char public_680dce5; // 'p'
/* 0x0680dce6 */ LDATA extern char public_680dce6; // 'v'
/* 0x0680dce7 */ LDATA extern char public_680dce7; // 'a'
/* 0x0680dce8 */ LDATA extern char public_680dce8; // 'l'
/* 0x0680dce9 */ LDATA extern char public_680dce9; // 'u'
/* 0x0680dcea */ LDATA extern char public_680dcea; // 'e'
/* 0x0680dceb */ LDATA extern char public_680dceb; // 's'
/* 0x0680dcec */ LDATA extern char public_680dcec;
/* 0x0680dced */ LDATA extern char public_680dced;
/* 0x0680dcee */ LDATA extern char public_680dcee;
/* 0x0680dcef */ LDATA extern char public_680dcef;
/* 0x0680dcf0 */ LDATA extern char public_680dcf0; // 'f'
/* 0x0680dcf1 */ LDATA extern char public_680dcf1; // 'u'
/* 0x0680dcf2 */ LDATA extern char public_680dcf2; // 'n'
/* 0x0680dcf3 */ LDATA extern char public_680dcf3; // 'c'
/* 0x0680dcf4 */ LDATA extern char public_680dcf4; // 't'
/* 0x0680dcf5 */ LDATA extern char public_680dcf5; // 'i'
/* 0x0680dcf6 */ LDATA extern char public_680dcf6; // 'o'
/* 0x0680dcf7 */ LDATA extern char public_680dcf7; // 'n'
/* 0x0680dcf8 */ LDATA extern char public_680dcf8; // ' '
/* 0x0680dcf9 */ LDATA extern char public_680dcf9; // 'a'
/* 0x0680dcfa */ LDATA extern char public_680dcfa; // 'r'
/* 0x0680dcfb */ LDATA extern char public_680dcfb; // 'g'
/* 0x0680dcfc */ LDATA extern char public_680dcfc; // 'u'
/* 0x0680dcfd */ LDATA extern char public_680dcfd; // 'm'
/* 0x0680dcfe */ LDATA extern char public_680dcfe; // 'e'
/* 0x0680dcff */ LDATA extern char public_680dcff; // 'n'
/* 0x0680dd00 */ LDATA extern char public_680dd00; // 't'
/* 0x0680dd01 */ LDATA extern char public_680dd01; // 's'
/* 0x0680dd02 */ LDATA extern char public_680dd02; // ' '
/* 0x0680dd03 */ LDATA extern char public_680dd03; // 'e'
/* 0x0680dd04 */ LDATA extern char public_680dd04; // 'x'
/* 0x0680dd05 */ LDATA extern char public_680dd05; // 'p'
/* 0x0680dd06 */ LDATA extern char public_680dd06; // 'e'
/* 0x0680dd07 */ LDATA extern char public_680dd07; // 'c'
/* 0x0680dd08 */ LDATA extern char public_680dd08; // 't'
/* 0x0680dd09 */ LDATA extern char public_680dd09; // 'e'
/* 0x0680dd0a */ LDATA extern char public_680dd0a; // 'd'
/* 0x0680dd0b */ LDATA extern char public_680dd0b;
/* 0x0680dd0c */ LDATA extern char public_680dd0c; // 'N'
/* 0x0680dd0d */ LDATA extern char public_680dd0d; // 'A'
/* 0x0680dd0e */ LDATA extern char public_680dd0e; // 'M'
/* 0x0680dd0f */ LDATA extern char public_680dd0f; // 'E'
/* 0x0680dd10 */ LDATA extern char public_680dd10; // ' '
/* 0x0680dd11 */ LDATA extern char public_680dd11; // 'o'
/* 0x0680dd12 */ LDATA extern char public_680dd12; // 'r'
/* 0x0680dd13 */ LDATA extern char public_680dd13; // ' '
/* 0x0680dd14 */ LDATA extern char public_680dd14; // '`'
/* 0x0680dd15 */ LDATA extern char public_680dd15; // '.'
/* 0x0680dd16 */ LDATA extern char public_680dd16; // '.'
/* 0x0680dd17 */ LDATA extern char public_680dd17; // '.'
/* 0x0680dd18 */ LDATA extern char public_680dd18; // '''
/* 0x0680dd19 */ LDATA extern char public_680dd19; // ' '
/* 0x0680dd1a */ LDATA extern char public_680dd1a; // 'e'
/* 0x0680dd1b */ LDATA extern char public_680dd1b; // 'x'
/* 0x0680dd1c */ LDATA extern char public_680dd1c; // 'p'
/* 0x0680dd1d */ LDATA extern char public_680dd1d; // 'e'
/* 0x0680dd1e */ LDATA extern char public_680dd1e; // 'c'
/* 0x0680dd1f */ LDATA extern char public_680dd1f; // 't'
/* 0x0680dd20 */ LDATA extern char public_680dd20; // 'e'
/* 0x0680dd21 */ LDATA extern char public_680dd21; // 'd'
/* 0x0680dd22 */ LDATA extern char public_680dd22;
/* 0x0680dd23 */ LDATA extern char public_680dd23;
/* 0x0680dd24 */ LDATA extern char public_680dd24; // 'a'
/* 0x0680dd25 */ LDATA extern char public_680dd25; // 'r'
/* 0x0680dd26 */ LDATA extern char public_680dd26; // 'g'
/* 0x0680dd27 */ LDATA extern char public_680dd27;
/* 0x0680dd28 */ LDATA extern char public_680dd28; // 'p'
/* 0x0680dd29 */ LDATA extern char public_680dd29; // 'a'
/* 0x0680dd2a */ LDATA extern char public_680dd2a; // 'r'
/* 0x0680dd2b */ LDATA extern char public_680dd2b; // 'a'
/* 0x0680dd2c */ LDATA extern char public_680dd2c; // 'm'
/* 0x0680dd2d */ LDATA extern char public_680dd2d; // 'e'
/* 0x0680dd2e */ LDATA extern char public_680dd2e; // 't'
/* 0x0680dd2f */ LDATA extern char public_680dd2f; // 'e'
/* 0x0680dd30 */ LDATA extern char public_680dd30; // 'r'
/* 0x0680dd31 */ LDATA extern char public_680dd31; // 's'
/* 0x0680dd32 */ LDATA extern char public_680dd32;
/* 0x0680dd33 */ LDATA extern char public_680dd33;
/* 0x0680dd34 */ LDATA extern char public_680dd34; // 'v'
/* 0x0680dd35 */ LDATA extern char public_680dd35; // 'a'
/* 0x0680dd36 */ LDATA extern char public_680dd36; // 'r'
/* 0x0680dd37 */ LDATA extern char public_680dd37; // 'i'
/* 0x0680dd38 */ LDATA extern char public_680dd38; // 'a'
/* 0x0680dd39 */ LDATA extern char public_680dd39; // 'b'
/* 0x0680dd3a */ LDATA extern char public_680dd3a; // 'l'
/* 0x0680dd3b */ LDATA extern char public_680dd3b; // 'e'
/* 0x0680dd3c */ LDATA extern char public_680dd3c; // 's'
/* 0x0680dd3d */ LDATA extern char public_680dd3d; // ' '
/* 0x0680dd3e */ LDATA extern char public_680dd3e; // 'i'
/* 0x0680dd3f */ LDATA extern char public_680dd3f; // 'n'
/* 0x0680dd40 */ LDATA extern char public_680dd40; // ' '
/* 0x0680dd41 */ LDATA extern char public_680dd41; // 'a'
/* 0x0680dd42 */ LDATA extern char public_680dd42; // ' '
/* 0x0680dd43 */ LDATA extern char public_680dd43; // 'm'
/* 0x0680dd44 */ LDATA extern char public_680dd44; // 'u'
/* 0x0680dd45 */ LDATA extern char public_680dd45; // 'l'
/* 0x0680dd46 */ LDATA extern char public_680dd46; // 't'
/* 0x0680dd47 */ LDATA extern char public_680dd47; // 'i'
/* 0x0680dd48 */ LDATA extern char public_680dd48; // 'p'
/* 0x0680dd49 */ LDATA extern char public_680dd49; // 'l'
/* 0x0680dd4a */ LDATA extern char public_680dd4a; // 'e'
/* 0x0680dd4b */ LDATA extern char public_680dd4b; // ' '
/* 0x0680dd4c */ LDATA extern char public_680dd4c; // 'a'
/* 0x0680dd4d */ LDATA extern char public_680dd4d; // 's'
/* 0x0680dd4e */ LDATA extern char public_680dd4e; // 's'
/* 0x0680dd4f */ LDATA extern char public_680dd4f; // 'i'
/* 0x0680dd50 */ LDATA extern char public_680dd50; // 'g'
/* 0x0680dd51 */ LDATA extern char public_680dd51; // 'n'
/* 0x0680dd52 */ LDATA extern char public_680dd52; // 'm'
/* 0x0680dd53 */ LDATA extern char public_680dd53; // 'e'
/* 0x0680dd54 */ LDATA extern char public_680dd54; // 'n'
/* 0x0680dd55 */ LDATA extern char public_680dd55; // 't'
/* 0x0680dd56 */ LDATA extern char public_680dd56;
/* 0x0680dd57 */ LDATA extern char public_680dd57;
/* 0x0680dd58 */ LDATA extern char public_680dd58; // 'i'
/* 0x0680dd59 */ LDATA extern char public_680dd59; // 'n'
/* 0x0680dd5a */ LDATA extern char public_680dd5a; // 'v'
/* 0x0680dd5b */ LDATA extern char public_680dd5b; // 'a'
/* 0x0680dd5c */ LDATA extern char public_680dd5c; // 'l'
/* 0x0680dd5d */ LDATA extern char public_680dd5d; // 'i'
/* 0x0680dd5e */ LDATA extern char public_680dd5e; // 'd'
/* 0x0680dd5f */ LDATA extern char public_680dd5f; // ' '
/* 0x0680dd60 */ LDATA extern char public_680dd60; // 'c'
/* 0x0680dd61 */ LDATA extern char public_680dd61; // 'o'
/* 0x0680dd62 */ LDATA extern char public_680dd62; // 'n'
/* 0x0680dd63 */ LDATA extern char public_680dd63; // 's'
/* 0x0680dd64 */ LDATA extern char public_680dd64; // 't'
/* 0x0680dd65 */ LDATA extern char public_680dd65; // 'r'
/* 0x0680dd66 */ LDATA extern char public_680dd66; // 'u'
/* 0x0680dd67 */ LDATA extern char public_680dd67; // 'c'
/* 0x0680dd68 */ LDATA extern char public_680dd68; // 't'
/* 0x0680dd69 */ LDATA extern char public_680dd69; // 'o'
/* 0x0680dd6a */ LDATA extern char public_680dd6a; // 'r'
/* 0x0680dd6b */ LDATA extern char public_680dd6b; // ' '
/* 0x0680dd6c */ LDATA extern char public_680dd6c; // 's'
/* 0x0680dd6d */ LDATA extern char public_680dd6d; // 'y'
/* 0x0680dd6e */ LDATA extern char public_680dd6e; // 'n'
/* 0x0680dd6f */ LDATA extern char public_680dd6f; // 't'
/* 0x0680dd70 */ LDATA extern char public_680dd70; // 'a'
/* 0x0680dd71 */ LDATA extern char public_680dd71; // 'x'
/* 0x0680dd72 */ LDATA extern char public_680dd72;
/* 0x0680dd73 */ LDATA extern char public_680dd73;
/* 0x0680dd74 */ LDATA extern char public_680dd74; // 'N'
/* 0x0680dd75 */ LDATA extern char public_680dd75; // 'A'
/* 0x0680dd76 */ LDATA extern char public_680dd76; // 'M'
/* 0x0680dd77 */ LDATA extern char public_680dd77; // 'E'
/* 0x0680dd78 */ LDATA extern char public_680dd78; // ' '
/* 0x0680dd79 */ LDATA extern char public_680dd79; // 'o'
/* 0x0680dd7a */ LDATA extern char public_680dd7a; // 'r'
/* 0x0680dd7b */ LDATA extern char public_680dd7b; // ' '
/* 0x0680dd7c */ LDATA extern char public_680dd7c; // '`'
/* 0x0680dd7d */ LDATA extern char public_680dd7d; // '['
/* 0x0680dd7e */ LDATA extern char public_680dd7e; // '''
/* 0x0680dd7f */ LDATA extern char public_680dd7f; // ' '
/* 0x0680dd80 */ LDATA extern char public_680dd80; // 'e'
/* 0x0680dd81 */ LDATA extern char public_680dd81; // 'x'
/* 0x0680dd82 */ LDATA extern char public_680dd82; // 'p'
/* 0x0680dd83 */ LDATA extern char public_680dd83; // 'e'
/* 0x0680dd84 */ LDATA extern char public_680dd84; // 'c'
/* 0x0680dd85 */ LDATA extern char public_680dd85; // 't'
/* 0x0680dd86 */ LDATA extern char public_680dd86; // 'e'
/* 0x0680dd87 */ LDATA extern char public_680dd87; // 'd'
/* 0x0680dd88 */ LDATA extern char public_680dd88;
/* 0x0680dd89 */ LDATA extern char public_680dd89;
/* 0x0680dd8a */ LDATA extern char public_680dd8a;
/* 0x0680dd8b */ LDATA extern char public_680dd8b;
/* 0x0680dd8c */ LDATA extern char public_680dd8c; // 'c'
/* 0x0680dd8d */ LDATA extern char public_680dd8d; // 'a'
/* 0x0680dd8e */ LDATA extern char public_680dd8e; // 'n'
/* 0x0680dd8f */ LDATA extern char public_680dd8f; // 'n'
/* 0x0680dd90 */ LDATA extern char public_680dd90; // 'o'
/* 0x0680dd91 */ LDATA extern char public_680dd91; // 't'
/* 0x0680dd92 */ LDATA extern char public_680dd92; // ' '
/* 0x0680dd93 */ LDATA extern char public_680dd93; // 'c'
/* 0x0680dd94 */ LDATA extern char public_680dd94; // 'o'
/* 0x0680dd95 */ LDATA extern char public_680dd95; // 'n'
/* 0x0680dd96 */ LDATA extern char public_680dd96; // 'v'
/* 0x0680dd97 */ LDATA extern char public_680dd97; // 'e'
/* 0x0680dd98 */ LDATA extern char public_680dd98; // 'r'
/* 0x0680dd99 */ LDATA extern char public_680dd99; // 't'
/* 0x0680dd9a */ LDATA extern char public_680dd9a; // ' '
/* 0x0680dd9b */ LDATA extern char public_680dd9b; // 'n'
/* 0x0680dd9c */ LDATA extern char public_680dd9c; // 'u'
/* 0x0680dd9d */ LDATA extern char public_680dd9d; // 'm'
/* 0x0680dd9e */ LDATA extern char public_680dd9e; // 'b'
/* 0x0680dd9f */ LDATA extern char public_680dd9f; // 'e'
/* 0x0680dda0 */ LDATA extern char public_680dda0; // 'r'
/* 0x0680dda1 */ LDATA extern char public_680dda1; // ' '
/* 0x0680dda2 */ LDATA extern char public_680dda2; // '''
/* 0x0680dda3 */ LDATA extern char public_680dda3; // '%'
/* 0x0680dda4 */ LDATA extern char public_680dda4; // 's'
/* 0x0680dda5 */ LDATA extern char public_680dda5; // '''
/* 0x0680dda6 */ LDATA extern char public_680dda6; // ' '
/* 0x0680dda7 */ LDATA extern char public_680dda7; // 'i'
/* 0x0680dda8 */ LDATA extern char public_680dda8; // 'n'
/* 0x0680dda9 */ LDATA extern char public_680dda9; // ' '
/* 0x0680ddaa */ LDATA extern char public_680ddaa; // '%'
/* 0x0680ddab */ LDATA extern char public_680ddab; // 's'
/* 0x0680ddac */ LDATA extern char public_680ddac;
/* 0x0680ddad */ LDATA extern char public_680ddad;
/* 0x0680ddae */ LDATA extern char public_680ddae;
/* 0x0680ddaf */ LDATA extern char public_680ddaf;
/* 0x0680ddb0 */ LDATA extern char public_680ddb0; // '%'
/* 0x0680ddb1 */ LDATA extern char public_680ddb1; // 's'
/* 0x0680ddb2 */ LDATA extern char public_680ddb2; // ' '
/* 0x0680ddb3 */ LDATA extern char public_680ddb3; // 'i'
/* 0x0680ddb4 */ LDATA extern char public_680ddb4; // 's'
/* 0x0680ddb5 */ LDATA extern char public_680ddb5; // ' '
/* 0x0680ddb6 */ LDATA extern char public_680ddb6; // 'n'
/* 0x0680ddb7 */ LDATA extern char public_680ddb7; // 'o'
/* 0x0680ddb8 */ LDATA extern char public_680ddb8; // 't'
/* 0x0680ddb9 */ LDATA extern char public_680ddb9; // ' '
/* 0x0680ddba */ LDATA extern char public_680ddba; // 'a'
/* 0x0680ddbb */ LDATA extern char public_680ddbb; // ' '
/* 0x0680ddbc */ LDATA extern char public_680ddbc; // 'L'
/* 0x0680ddbd */ LDATA extern char public_680ddbd; // 'u'
/* 0x0680ddbe */ LDATA extern char public_680ddbe; // 'a'
/* 0x0680ddbf */ LDATA extern char public_680ddbf; // ' '
/* 0x0680ddc0 */ LDATA extern char public_680ddc0; // 'b'
/* 0x0680ddc1 */ LDATA extern char public_680ddc1; // 'i'
/* 0x0680ddc2 */ LDATA extern char public_680ddc2; // 'n'
/* 0x0680ddc3 */ LDATA extern char public_680ddc3; // 'a'
/* 0x0680ddc4 */ LDATA extern char public_680ddc4; // 'r'
/* 0x0680ddc5 */ LDATA extern char public_680ddc5; // 'y'
/* 0x0680ddc6 */ LDATA extern char public_680ddc6; // ' '
/* 0x0680ddc7 */ LDATA extern char public_680ddc7; // 'f'
/* 0x0680ddc8 */ LDATA extern char public_680ddc8; // 'i'
/* 0x0680ddc9 */ LDATA extern char public_680ddc9; // 'l'
/* 0x0680ddca */ LDATA extern char public_680ddca; // 'e'
/* 0x0680ddcb */ LDATA extern char public_680ddcb;
/* 0x0680ddcc */ LDATA extern char public_680ddcc; // 'l'
/* 0x0680ddcd */ LDATA extern char public_680ddcd; // 'i'
/* 0x0680ddce */ LDATA extern char public_680ddce; // 'n'
/* 0x0680ddcf */ LDATA extern char public_680ddcf; // 'e'
/* 0x0680ddd0 */ LDATA extern char public_680ddd0; // 'D'
/* 0x0680ddd1 */ LDATA extern char public_680ddd1; // 'e'
/* 0x0680ddd2 */ LDATA extern char public_680ddd2; // 'f'
/* 0x0680ddd3 */ LDATA extern char public_680ddd3; // 'i'
/* 0x0680ddd4 */ LDATA extern char public_680ddd4; // 'n'
/* 0x0680ddd5 */ LDATA extern char public_680ddd5; // 'e'
/* 0x0680ddd6 */ LDATA extern char public_680ddd6; // 'd'
/* 0x0680ddd7 */ LDATA extern char public_680ddd7; // ' '
/* 0x0680ddd8 */ LDATA extern char public_680ddd8; // 't'
/* 0x0680ddd9 */ LDATA extern char public_680ddd9; // 'o'
/* 0x0680ddda */ LDATA extern char public_680ddda; // 'o'
/* 0x0680dddb */ LDATA extern char public_680dddb; // ' '
/* 0x0680dddc */ LDATA extern char public_680dddc; // 'l'
/* 0x0680dddd */ LDATA extern char public_680dddd; // 'a'
/* 0x0680ddde */ LDATA extern char public_680ddde; // 'r'
/* 0x0680dddf */ LDATA extern char public_680dddf; // 'g'
/* 0x0680dde0 */ LDATA extern char public_680dde0; // 'e'
/* 0x0680dde1 */ LDATA extern char public_680dde1; // ' '
/* 0x0680dde2 */ LDATA extern char public_680dde2; // '('
/* 0x0680dde3 */ LDATA extern char public_680dde3; // '%'
/* 0x0680dde4 */ LDATA extern char public_680dde4; // 'l'
/* 0x0680dde5 */ LDATA extern char public_680dde5; // 'd'
/* 0x0680dde6 */ LDATA extern char public_680dde6; // ')'
/* 0x0680dde7 */ LDATA extern char public_680dde7; // ' '
/* 0x0680dde8 */ LDATA extern char public_680dde8; // 'i'
/* 0x0680dde9 */ LDATA extern char public_680dde9; // 'n'
/* 0x0680ddea */ LDATA extern char public_680ddea; // ' '
/* 0x0680ddeb */ LDATA extern char public_680ddeb; // '%'
/* 0x0680ddec */ LDATA extern char public_680ddec; // 's'
/* 0x0680dded */ LDATA extern char public_680dded;
/* 0x0680ddee */ LDATA extern char public_680ddee;
/* 0x0680ddef */ LDATA extern char public_680ddef;
/* 0x0680ddf0 */ LDATA extern char public_680ddf0; // 'u'
/* 0x0680ddf1 */ LDATA extern char public_680ddf1; // 'n'
/* 0x0680ddf2 */ LDATA extern char public_680ddf2; // 'e'
/* 0x0680ddf3 */ LDATA extern char public_680ddf3; // 'x'
/* 0x0680ddf4 */ LDATA extern char public_680ddf4; // 'p'
/* 0x0680ddf5 */ LDATA extern char public_680ddf5; // 'e'
/* 0x0680ddf6 */ LDATA extern char public_680ddf6; // 'c'
/* 0x0680ddf7 */ LDATA extern char public_680ddf7; // 't'
/* 0x0680ddf8 */ LDATA extern char public_680ddf8; // 'e'
/* 0x0680ddf9 */ LDATA extern char public_680ddf9; // 'd'
/* 0x0680ddfa */ LDATA extern char public_680ddfa; // ' '
/* 0x0680ddfb */ LDATA extern char public_680ddfb; // 'e'
/* 0x0680ddfc */ LDATA extern char public_680ddfc; // 'n'
/* 0x0680ddfd */ LDATA extern char public_680ddfd; // 'd'
/* 0x0680ddfe */ LDATA extern char public_680ddfe; // ' '
/* 0x0680ddff */ LDATA extern char public_680ddff; // 'o'
/* 0x0680de00 */ LDATA extern char public_680de00; // 'f'
/* 0x0680de01 */ LDATA extern char public_680de01; // ' '
/* 0x0680de02 */ LDATA extern char public_680de02; // 'f'
/* 0x0680de03 */ LDATA extern char public_680de03; // 'i'
/* 0x0680de04 */ LDATA extern char public_680de04; // 'l'
/* 0x0680de05 */ LDATA extern char public_680de05; // 'e'
/* 0x0680de06 */ LDATA extern char public_680de06; // ' '
/* 0x0680de07 */ LDATA extern char public_680de07; // 'i'
/* 0x0680de08 */ LDATA extern char public_680de08; // 'n'
/* 0x0680de09 */ LDATA extern char public_680de09; // ' '
/* 0x0680de0a */ LDATA extern char public_680de0a; // '%'
/* 0x0680de0b */ LDATA extern char public_680de0b; // 's'
/* 0x0680de0c */ LDATA extern char public_680de0c;
/* 0x0680de0d */ LDATA extern char public_680de0d;
/* 0x0680de0e */ LDATA extern char public_680de0e;
/* 0x0680de0f */ LDATA extern char public_680de0f;
/* 0x0680de10 */ LDATA extern char public_680de10; // 'b'
/* 0x0680de11 */ LDATA extern char public_680de11; // 'a'
/* 0x0680de12 */ LDATA extern char public_680de12; // 'd'
/* 0x0680de13 */ LDATA extern char public_680de13; // ' '
/* 0x0680de14 */ LDATA extern char public_680de14; // 'c'
/* 0x0680de15 */ LDATA extern char public_680de15; // 'o'
/* 0x0680de16 */ LDATA extern char public_680de16; // 'd'
/* 0x0680de17 */ LDATA extern char public_680de17; // 'e'
/* 0x0680de18 */ LDATA extern char public_680de18; // ' '
/* 0x0680de19 */ LDATA extern char public_680de19; // 'i'
/* 0x0680de1a */ LDATA extern char public_680de1a; // 'n'
/* 0x0680de1b */ LDATA extern char public_680de1b; // ' '
/* 0x0680de1c */ LDATA extern char public_680de1c; // '%'
/* 0x0680de1d */ LDATA extern char public_680de1d; // 's'
/* 0x0680de1e */ LDATA extern char public_680de1e;
/* 0x0680de1f */ LDATA extern char public_680de1f;
/* 0x0680de20 */ LDATA extern char public_680de20; // 'c'
/* 0x0680de21 */ LDATA extern char public_680de21; // 'o'
/* 0x0680de22 */ LDATA extern char public_680de22; // 'd'
/* 0x0680de23 */ LDATA extern char public_680de23; // 'e'
/* 0x0680de24 */ LDATA extern char public_680de24; // ' '
/* 0x0680de25 */ LDATA extern char public_680de25; // 't'
/* 0x0680de26 */ LDATA extern char public_680de26; // 'o'
/* 0x0680de27 */ LDATA extern char public_680de27; // 'o'
/* 0x0680de28 */ LDATA extern char public_680de28; // ' '
/* 0x0680de29 */ LDATA extern char public_680de29; // 'l'
/* 0x0680de2a */ LDATA extern char public_680de2a; // 'o'
/* 0x0680de2b */ LDATA extern char public_680de2b; // 'n'
/* 0x0680de2c */ LDATA extern char public_680de2c; // 'g'
/* 0x0680de2d */ LDATA extern char public_680de2d; // ' '
/* 0x0680de2e */ LDATA extern char public_680de2e; // '('
/* 0x0680de2f */ LDATA extern char public_680de2f; // '%'
/* 0x0680de30 */ LDATA extern char public_680de30; // 'l'
/* 0x0680de31 */ LDATA extern char public_680de31; // 'd'
/* 0x0680de32 */ LDATA extern char public_680de32; // ' '
/* 0x0680de33 */ LDATA extern char public_680de33; // 'b'
/* 0x0680de34 */ LDATA extern char public_680de34; // 'y'
/* 0x0680de35 */ LDATA extern char public_680de35; // 't'
/* 0x0680de36 */ LDATA extern char public_680de36; // 'e'
/* 0x0680de37 */ LDATA extern char public_680de37; // 's'
/* 0x0680de38 */ LDATA extern char public_680de38; // ')'
/* 0x0680de39 */ LDATA extern char public_680de39; // ' '
/* 0x0680de3a */ LDATA extern char public_680de3a; // 'i'
/* 0x0680de3b */ LDATA extern char public_680de3b; // 'n'
/* 0x0680de3c */ LDATA extern char public_680de3c; // ' '
/* 0x0680de3d */ LDATA extern char public_680de3d; // '%'
/* 0x0680de3e */ LDATA extern char public_680de3e; // 's'
/* 0x0680de3f */ LDATA extern char public_680de3f;
/* 0x0680de40 */ LDATA extern char public_680de40; // 't'
/* 0x0680de41 */ LDATA extern char public_680de41; // 'o'
/* 0x0680de42 */ LDATA extern char public_680de42; // 'o'
/* 0x0680de43 */ LDATA extern char public_680de43; // ' '
/* 0x0680de44 */ LDATA extern char public_680de44; // 'm'
/* 0x0680de45 */ LDATA extern char public_680de45; // 'a'
/* 0x0680de46 */ LDATA extern char public_680de46; // 'n'
/* 0x0680de47 */ LDATA extern char public_680de47; // 'y'
/* 0x0680de48 */ LDATA extern char public_680de48; // ' '
/* 0x0680de49 */ LDATA extern char public_680de49; // 'l'
/* 0x0680de4a */ LDATA extern char public_680de4a; // 'i'
/* 0x0680de4b */ LDATA extern char public_680de4b; // 'n'
/* 0x0680de4c */ LDATA extern char public_680de4c; // 'e'
/* 0x0680de4d */ LDATA extern char public_680de4d; // 's'
/* 0x0680de4e */ LDATA extern char public_680de4e; // ' '
/* 0x0680de4f */ LDATA extern char public_680de4f; // '('
/* 0x0680de50 */ LDATA extern char public_680de50; // '%'
/* 0x0680de51 */ LDATA extern char public_680de51; // 'l'
/* 0x0680de52 */ LDATA extern char public_680de52; // 'd'
/* 0x0680de53 */ LDATA extern char public_680de53; // ')'
/* 0x0680de54 */ LDATA extern char public_680de54; // ' '
/* 0x0680de55 */ LDATA extern char public_680de55; // 'i'
/* 0x0680de56 */ LDATA extern char public_680de56; // 'n'
/* 0x0680de57 */ LDATA extern char public_680de57; // ' '
/* 0x0680de58 */ LDATA extern char public_680de58; // '%'
/* 0x0680de59 */ LDATA extern char public_680de59; // 's'
/* 0x0680de5a */ LDATA extern char public_680de5a;
/* 0x0680de5b */ LDATA extern char public_680de5b;
/* 0x0680de5c */ LDATA extern char public_680de5c; // 't'
/* 0x0680de5d */ LDATA extern char public_680de5d; // 'o'
/* 0x0680de5e */ LDATA extern char public_680de5e; // 'o'
/* 0x0680de5f */ LDATA extern char public_680de5f; // ' '
/* 0x0680de60 */ LDATA extern char public_680de60; // 'm'
/* 0x0680de61 */ LDATA extern char public_680de61; // 'a'
/* 0x0680de62 */ LDATA extern char public_680de62; // 'n'
/* 0x0680de63 */ LDATA extern char public_680de63; // 'y'
/* 0x0680de64 */ LDATA extern char public_680de64; // ' '
/* 0x0680de65 */ LDATA extern char public_680de65; // 'l'
/* 0x0680de66 */ LDATA extern char public_680de66; // 'o'
/* 0x0680de67 */ LDATA extern char public_680de67; // 'c'
/* 0x0680de68 */ LDATA extern char public_680de68; // 'a'
/* 0x0680de69 */ LDATA extern char public_680de69; // 'l'
/* 0x0680de6a */ LDATA extern char public_680de6a; // 's'
/* 0x0680de6b */ LDATA extern char public_680de6b; // ' '
/* 0x0680de6c */ LDATA extern char public_680de6c; // '('
/* 0x0680de6d */ LDATA extern char public_680de6d; // '%'
/* 0x0680de6e */ LDATA extern char public_680de6e; // 'l'
/* 0x0680de6f */ LDATA extern char public_680de6f; // 'd'
/* 0x0680de70 */ LDATA extern char public_680de70; // ')'
/* 0x0680de71 */ LDATA extern char public_680de71; // ' '
/* 0x0680de72 */ LDATA extern char public_680de72; // 'i'
/* 0x0680de73 */ LDATA extern char public_680de73; // 'n'
/* 0x0680de74 */ LDATA extern char public_680de74; // ' '
/* 0x0680de75 */ LDATA extern char public_680de75; // '%'
/* 0x0680de76 */ LDATA extern char public_680de76; // 's'
/* 0x0680de77 */ LDATA extern char public_680de77;
/* 0x0680de78 */ LDATA extern char public_680de78; // 'l'
/* 0x0680de79 */ LDATA extern char public_680de79; // 'o'
/* 0x0680de7a */ LDATA extern char public_680de7a; // 'a'
/* 0x0680de7b */ LDATA extern char public_680de7b; // 'd'
/* 0x0680de7c */ LDATA extern char public_680de7c;
/* 0x0680de7d */ LDATA extern char public_680de7d;
/* 0x0680de7e */ LDATA extern char public_680de7e;
/* 0x0680de7f */ LDATA extern char public_680de7f;
/* 0x0680de80 */ LDATA extern char public_680de80; // 't'
/* 0x0680de81 */ LDATA extern char public_680de81; // 'o'
/* 0x0680de82 */ LDATA extern char public_680de82; // 'o'
/* 0x0680de83 */ LDATA extern char public_680de83; // ' '
/* 0x0680de84 */ LDATA extern char public_680de84; // 'm'
/* 0x0680de85 */ LDATA extern char public_680de85; // 'a'
/* 0x0680de86 */ LDATA extern char public_680de86; // 'n'
/* 0x0680de87 */ LDATA extern char public_680de87; // 'y'
/* 0x0680de88 */ LDATA extern char public_680de88; // ' '
/* 0x0680de89 */ LDATA extern char public_680de89; // 'c'
/* 0x0680de8a */ LDATA extern char public_680de8a; // 'o'
/* 0x0680de8b */ LDATA extern char public_680de8b; // 'n'
/* 0x0680de8c */ LDATA extern char public_680de8c; // 's'
/* 0x0680de8d */ LDATA extern char public_680de8d; // 't'
/* 0x0680de8e */ LDATA extern char public_680de8e; // 'a'
/* 0x0680de8f */ LDATA extern char public_680de8f; // 'n'
/* 0x0680de90 */ LDATA extern char public_680de90; // 't'
/* 0x0680de91 */ LDATA extern char public_680de91; // 's'
/* 0x0680de92 */ LDATA extern char public_680de92; // ' '
/* 0x0680de93 */ LDATA extern char public_680de93; // '('
/* 0x0680de94 */ LDATA extern char public_680de94; // '%'
/* 0x0680de95 */ LDATA extern char public_680de95; // 'l'
/* 0x0680de96 */ LDATA extern char public_680de96; // 'd'
/* 0x0680de97 */ LDATA extern char public_680de97; // ')'
/* 0x0680de98 */ LDATA extern char public_680de98; // ' '
/* 0x0680de99 */ LDATA extern char public_680de99; // 'i'
/* 0x0680de9a */ LDATA extern char public_680de9a; // 'n'
/* 0x0680de9b */ LDATA extern char public_680de9b; // ' '
/* 0x0680de9c */ LDATA extern char public_680de9c; // '%'
/* 0x0680de9d */ LDATA extern char public_680de9d; // 's'
/* 0x0680de9e */ LDATA extern char public_680de9e;
/* 0x0680de9f */ LDATA extern char public_680de9f;
/* 0x0680dea0 */ LDATA extern char public_680dea0; // 'u'
/* 0x0680dea1 */ LDATA extern char public_680dea1; // 'n'
/* 0x0680dea2 */ LDATA extern char public_680dea2; // 'k'
/* 0x0680dea3 */ LDATA extern char public_680dea3; // 'n'
/* 0x0680dea4 */ LDATA extern char public_680dea4; // 'o'
/* 0x0680dea5 */ LDATA extern char public_680dea5; // 'w'
/* 0x0680dea6 */ LDATA extern char public_680dea6; // 'n'
/* 0x0680dea7 */ LDATA extern char public_680dea7; // ' '
/* 0x0680dea8 */ LDATA extern char public_680dea8; // 'n'
/* 0x0680dea9 */ LDATA extern char public_680dea9; // 'u'
/* 0x0680deaa */ LDATA extern char public_680deaa; // 'm'
/* 0x0680deab */ LDATA extern char public_680deab; // 'b'
/* 0x0680deac */ LDATA extern char public_680deac; // 'e'
/* 0x0680dead */ LDATA extern char public_680dead; // 'r'
/* 0x0680deae */ LDATA extern char public_680deae; // ' '
/* 0x0680deaf */ LDATA extern char public_680deaf; // 'f'
/* 0x0680deb0 */ LDATA extern char public_680deb0; // 'o'
/* 0x0680deb1 */ LDATA extern char public_680deb1; // 'r'
/* 0x0680deb2 */ LDATA extern char public_680deb2; // 'm'
/* 0x0680deb3 */ LDATA extern char public_680deb3; // 'a'
/* 0x0680deb4 */ LDATA extern char public_680deb4; // 't'
/* 0x0680deb5 */ LDATA extern char public_680deb5; // ' '
/* 0x0680deb6 */ LDATA extern char public_680deb6; // 'i'
/* 0x0680deb7 */ LDATA extern char public_680deb7; // 'n'
/* 0x0680deb8 */ LDATA extern char public_680deb8; // ' '
/* 0x0680deb9 */ LDATA extern char public_680deb9; // '%'
/* 0x0680deba */ LDATA extern char public_680deba; // 's'
/* 0x0680debb */ LDATA extern char public_680debb; // ':'
/* 0x0680debc */ LDATA extern char public_680debc; // ' '
/* 0x0680debd */ LDATA extern char public_680debd; // 'r'
/* 0x0680debe */ LDATA extern char public_680debe; // 'e'
/* 0x0680debf */ LDATA extern char public_680debf; // 'a'
/* 0x0680dec0 */ LDATA extern char public_680dec0; // 'd'
/* 0x0680dec1 */ LDATA extern char public_680dec1; // ' '
/* 0x0680dec2 */ LDATA extern char public_680dec2; // '%'
/* 0x0680dec3 */ LDATA extern char public_680dec3; // '.'
/* 0x0680dec4 */ LDATA extern char public_680dec4; // '1'
/* 0x0680dec5 */ LDATA extern char public_680dec5; // '6'
/* 0x0680dec6 */ LDATA extern char public_680dec6; // 'g'
/* 0x0680dec7 */ LDATA extern char public_680dec7; // ';'
/* 0x0680dec8 */ LDATA extern char public_680dec8; // ' '
/* 0x0680dec9 */ LDATA extern char public_680dec9; // 'e'
/* 0x0680deca */ LDATA extern char public_680deca; // 'x'
/* 0x0680decb */ LDATA extern char public_680decb; // 'p'
/* 0x0680decc */ LDATA extern char public_680decc; // 'e'
/* 0x0680decd */ LDATA extern char public_680decd; // 'c'
/* 0x0680dece */ LDATA extern char public_680dece; // 't'
/* 0x0680decf */ LDATA extern char public_680decf; // 'e'
/* 0x0680ded0 */ LDATA extern char public_680ded0; // 'd'
/* 0x0680ded1 */ LDATA extern char public_680ded1; // ' '
/* 0x0680ded2 */ LDATA extern char public_680ded2; // '%'
/* 0x0680ded3 */ LDATA extern char public_680ded3; // '.'
/* 0x0680ded4 */ LDATA extern char public_680ded4; // '1'
/* 0x0680ded5 */ LDATA extern char public_680ded5; // '6'
/* 0x0680ded6 */ LDATA extern char public_680ded6; // 'g'
/* 0x0680ded7 */ LDATA extern char public_680ded7;
/* 0x0680ded8 */ LDATA extern char public_680ded8; // 'u'
/* 0x0680ded9 */ LDATA extern char public_680ded9; // 'n'
/* 0x0680deda */ LDATA extern char public_680deda; // 'k'
/* 0x0680dedb */ LDATA extern char public_680dedb; // 'n'
/* 0x0680dedc */ LDATA extern char public_680dedc; // 'o'
/* 0x0680dedd */ LDATA extern char public_680dedd; // 'w'
/* 0x0680dede */ LDATA extern char public_680dede; // 'n'
/* 0x0680dedf */ LDATA extern char public_680dedf; // ' '
/* 0x0680dee0 */ LDATA extern char public_680dee0; // 'n'
/* 0x0680dee1 */ LDATA extern char public_680dee1; // 'u'
/* 0x0680dee2 */ LDATA extern char public_680dee2; // 'm'
/* 0x0680dee3 */ LDATA extern char public_680dee3; // 'b'
/* 0x0680dee4 */ LDATA extern char public_680dee4; // 'e'
/* 0x0680dee5 */ LDATA extern char public_680dee5; // 'r'
/* 0x0680dee6 */ LDATA extern char public_680dee6; // ' '
/* 0x0680dee7 */ LDATA extern char public_680dee7; // 's'
/* 0x0680dee8 */ LDATA extern char public_680dee8; // 'i'
/* 0x0680dee9 */ LDATA extern char public_680dee9; // 'z'
/* 0x0680deea */ LDATA extern char public_680deea; // 'e'
/* 0x0680deeb */ LDATA extern char public_680deeb; // ' '
/* 0x0680deec */ LDATA extern char public_680deec; // 'i'
/* 0x0680deed */ LDATA extern char public_680deed; // 'n'
/* 0x0680deee */ LDATA extern char public_680deee; // ' '
/* 0x0680deef */ LDATA extern char public_680deef; // '%'
/* 0x0680def0 */ LDATA extern char public_680def0; // 's'
/* 0x0680def1 */ LDATA extern char public_680def1; // ':'
/* 0x0680def2 */ LDATA extern char public_680def2; // ' '
/* 0x0680def3 */ LDATA extern char public_680def3; // 'r'
/* 0x0680def4 */ LDATA extern char public_680def4; // 'e'
/* 0x0680def5 */ LDATA extern char public_680def5; // 'a'
/* 0x0680def6 */ LDATA extern char public_680def6; // 'd'
/* 0x0680def7 */ LDATA extern char public_680def7; // ' '
/* 0x0680def8 */ LDATA extern char public_680def8; // '%'
/* 0x0680def9 */ LDATA extern char public_680def9; // 'd'
/* 0x0680defa */ LDATA extern char public_680defa; // ';'
/* 0x0680defb */ LDATA extern char public_680defb; // ' '
/* 0x0680defc */ LDATA extern char public_680defc; // 'e'
/* 0x0680defd */ LDATA extern char public_680defd; // 'x'
/* 0x0680defe */ LDATA extern char public_680defe; // 'p'
/* 0x0680deff */ LDATA extern char public_680deff; // 'e'
/* 0x0680df00 */ LDATA extern char public_680df00; // 'c'
/* 0x0680df01 */ LDATA extern char public_680df01; // 't'
/* 0x0680df02 */ LDATA extern char public_680df02; // 'e'
/* 0x0680df03 */ LDATA extern char public_680df03; // 'd'
/* 0x0680df04 */ LDATA extern char public_680df04; // ' '
/* 0x0680df05 */ LDATA extern char public_680df05; // '%'
/* 0x0680df06 */ LDATA extern char public_680df06; // 'd'
/* 0x0680df07 */ LDATA extern char public_680df07;
/* 0x0680df08 */ LDATA extern char public_680df08; // '%'
/* 0x0680df09 */ LDATA extern char public_680df09; // 's'
/* 0x0680df0a */ LDATA extern char public_680df0a; // ' '
/* 0x0680df0b */ LDATA extern char public_680df0b; // 't'
/* 0x0680df0c */ LDATA extern char public_680df0c; // 'o'
/* 0x0680df0d */ LDATA extern char public_680df0d; // 'o'
/* 0x0680df0e */ LDATA extern char public_680df0e; // ' '
/* 0x0680df0f */ LDATA extern char public_680df0f; // 'o'
/* 0x0680df10 */ LDATA extern char public_680df10; // 'l'
/* 0x0680df11 */ LDATA extern char public_680df11; // 'd'
/* 0x0680df12 */ LDATA extern char public_680df12; // ':'
/* 0x0680df13 */ LDATA extern char public_680df13; // ' '
/* 0x0680df14 */ LDATA extern char public_680df14; // 'v'
/* 0x0680df15 */ LDATA extern char public_680df15; // 'e'
/* 0x0680df16 */ LDATA extern char public_680df16; // 'r'
/* 0x0680df17 */ LDATA extern char public_680df17; // 's'
/* 0x0680df18 */ LDATA extern char public_680df18; // 'i'
/* 0x0680df19 */ LDATA extern char public_680df19; // 'o'
/* 0x0680df1a */ LDATA extern char public_680df1a; // 'n'
/* 0x0680df1b */ LDATA extern char public_680df1b; // '='
/* 0x0680df1c */ LDATA extern char public_680df1c; // '0'
/* 0x0680df1d */ LDATA extern char public_680df1d; // 'x'
/* 0x0680df1e */ LDATA extern char public_680df1e; // '%'
/* 0x0680df1f */ LDATA extern char public_680df1f; // '0'
/* 0x0680df20 */ LDATA extern char public_680df20; // '2'
/* 0x0680df21 */ LDATA extern char public_680df21; // 'x'
/* 0x0680df22 */ LDATA extern char public_680df22; // ';'
/* 0x0680df23 */ LDATA extern char public_680df23; // ' '
/* 0x0680df24 */ LDATA extern char public_680df24; // 'e'
/* 0x0680df25 */ LDATA extern char public_680df25; // 'x'
/* 0x0680df26 */ LDATA extern char public_680df26; // 'p'
/* 0x0680df27 */ LDATA extern char public_680df27; // 'e'
/* 0x0680df28 */ LDATA extern char public_680df28; // 'c'
/* 0x0680df29 */ LDATA extern char public_680df29; // 't'
/* 0x0680df2a */ LDATA extern char public_680df2a; // 'e'
/* 0x0680df2b */ LDATA extern char public_680df2b; // 'd'
/* 0x0680df2c */ LDATA extern char public_680df2c; // ' '
/* 0x0680df2d */ LDATA extern char public_680df2d; // 'a'
/* 0x0680df2e */ LDATA extern char public_680df2e; // 't'
/* 0x0680df2f */ LDATA extern char public_680df2f; // ' '
/* 0x0680df30 */ LDATA extern char public_680df30; // 'l'
/* 0x0680df31 */ LDATA extern char public_680df31; // 'e'
/* 0x0680df32 */ LDATA extern char public_680df32; // 'a'
/* 0x0680df33 */ LDATA extern char public_680df33; // 's'
/* 0x0680df34 */ LDATA extern char public_680df34; // 't'
/* 0x0680df35 */ LDATA extern char public_680df35; // ' '
/* 0x0680df36 */ LDATA extern char public_680df36; // '0'
/* 0x0680df37 */ LDATA extern char public_680df37; // 'x'
/* 0x0680df38 */ LDATA extern char public_680df38; // '%'
/* 0x0680df39 */ LDATA extern char public_680df39; // '0'
/* 0x0680df3a */ LDATA extern char public_680df3a; // '2'
/* 0x0680df3b */ LDATA extern char public_680df3b; // 'x'
/* 0x0680df3c */ LDATA extern char public_680df3c;
/* 0x0680df3d */ LDATA extern char public_680df3d;
/* 0x0680df3e */ LDATA extern char public_680df3e;
/* 0x0680df3f */ LDATA extern char public_680df3f;
/* 0x0680df40 */ LDATA extern char public_680df40; // '%'
/* 0x0680df41 */ LDATA extern char public_680df41; // 's'
/* 0x0680df42 */ LDATA extern char public_680df42; // ' '
/* 0x0680df43 */ LDATA extern char public_680df43; // 't'
/* 0x0680df44 */ LDATA extern char public_680df44; // 'o'
/* 0x0680df45 */ LDATA extern char public_680df45; // 'o'
/* 0x0680df46 */ LDATA extern char public_680df46; // ' '
/* 0x0680df47 */ LDATA extern char public_680df47; // 'n'
/* 0x0680df48 */ LDATA extern char public_680df48; // 'e'
/* 0x0680df49 */ LDATA extern char public_680df49; // 'w'
/* 0x0680df4a */ LDATA extern char public_680df4a; // ':'
/* 0x0680df4b */ LDATA extern char public_680df4b; // ' '
/* 0x0680df4c */ LDATA extern char public_680df4c; // 'v'
/* 0x0680df4d */ LDATA extern char public_680df4d; // 'e'
/* 0x0680df4e */ LDATA extern char public_680df4e; // 'r'
/* 0x0680df4f */ LDATA extern char public_680df4f; // 's'
/* 0x0680df50 */ LDATA extern char public_680df50; // 'i'
/* 0x0680df51 */ LDATA extern char public_680df51; // 'o'
/* 0x0680df52 */ LDATA extern char public_680df52; // 'n'
/* 0x0680df53 */ LDATA extern char public_680df53; // '='
/* 0x0680df54 */ LDATA extern char public_680df54; // '0'
/* 0x0680df55 */ LDATA extern char public_680df55; // 'x'
/* 0x0680df56 */ LDATA extern char public_680df56; // '%'
/* 0x0680df57 */ LDATA extern char public_680df57; // '0'
/* 0x0680df58 */ LDATA extern char public_680df58; // '2'
/* 0x0680df59 */ LDATA extern char public_680df59; // 'x'
/* 0x0680df5a */ LDATA extern char public_680df5a; // ';'
/* 0x0680df5b */ LDATA extern char public_680df5b; // ' '
/* 0x0680df5c */ LDATA extern char public_680df5c; // 'e'
/* 0x0680df5d */ LDATA extern char public_680df5d; // 'x'
/* 0x0680df5e */ LDATA extern char public_680df5e; // 'p'
/* 0x0680df5f */ LDATA extern char public_680df5f; // 'e'
/* 0x0680df60 */ LDATA extern char public_680df60; // 'c'
/* 0x0680df61 */ LDATA extern char public_680df61; // 't'
/* 0x0680df62 */ LDATA extern char public_680df62; // 'e'
/* 0x0680df63 */ LDATA extern char public_680df63; // 'd'
/* 0x0680df64 */ LDATA extern char public_680df64; // ' '
/* 0x0680df65 */ LDATA extern char public_680df65; // 'a'
/* 0x0680df66 */ LDATA extern char public_680df66; // 't'
/* 0x0680df67 */ LDATA extern char public_680df67; // ' '
/* 0x0680df68 */ LDATA extern char public_680df68; // 'm'
/* 0x0680df69 */ LDATA extern char public_680df69; // 'o'
/* 0x0680df6a */ LDATA extern char public_680df6a; // 's'
/* 0x0680df6b */ LDATA extern char public_680df6b; // 't'
/* 0x0680df6c */ LDATA extern char public_680df6c; // ' '
/* 0x0680df6d */ LDATA extern char public_680df6d; // '0'
/* 0x0680df6e */ LDATA extern char public_680df6e; // 'x'
/* 0x0680df6f */ LDATA extern char public_680df6f; // '%'
/* 0x0680df70 */ LDATA extern char public_680df70; // '0'
/* 0x0680df71 */ LDATA extern char public_680df71; // '2'
/* 0x0680df72 */ LDATA extern char public_680df72; // 'x'
/* 0x0680df73 */ LDATA extern char public_680df73;
/* 0x0680df74 */ LDATA extern char public_680df74; // 'b'
/* 0x0680df75 */ LDATA extern char public_680df75; // 'a'
/* 0x0680df76 */ LDATA extern char public_680df76; // 'd'
/* 0x0680df77 */ LDATA extern char public_680df77; // ' '
/* 0x0680df78 */ LDATA extern char public_680df78; // 's'
/* 0x0680df79 */ LDATA extern char public_680df79; // 'i'
/* 0x0680df7a */ LDATA extern char public_680df7a; // 'g'
/* 0x0680df7b */ LDATA extern char public_680df7b; // 'n'
/* 0x0680df7c */ LDATA extern char public_680df7c; // 'a'
/* 0x0680df7d */ LDATA extern char public_680df7d; // 't'
/* 0x0680df7e */ LDATA extern char public_680df7e; // 'u'
/* 0x0680df7f */ LDATA extern char public_680df7f; // 'r'
/* 0x0680df80 */ LDATA extern char public_680df80; // 'e'
/* 0x0680df81 */ LDATA extern char public_680df81; // ' '
/* 0x0680df82 */ LDATA extern char public_680df82; // 'i'
/* 0x0680df83 */ LDATA extern char public_680df83; // 'n'
/* 0x0680df84 */ LDATA extern char public_680df84; // ' '
/* 0x0680df85 */ LDATA extern char public_680df85; // '%'
/* 0x0680df86 */ LDATA extern char public_680df86; // 's'
/* 0x0680df87 */ LDATA extern char public_680df87;
/* 0x0680df88 */ LDATA extern char public_680df88; // 'L'
/* 0x0680df89 */ LDATA extern char public_680df89; // 'u'
/* 0x0680df8a */ LDATA extern char public_680df8a; // 'a'
/* 0x0680df8b */ LDATA extern char public_680df8b;
/* 0x0680df8c */ LDATA extern char public_680df8c; // 'c'
/* 0x0680df8d */ LDATA extern char public_680df8d; // 'a'
/* 0x0680df8e */ LDATA extern char public_680df8e; // 'n'
/* 0x0680df8f */ LDATA extern char public_680df8f; // 'n'
/* 0x0680df90 */ LDATA extern char public_680df90; // 'o'
/* 0x0680df91 */ LDATA extern char public_680df91; // 't'
/* 0x0680df92 */ LDATA extern char public_680df92; // ' '
/* 0x0680df93 */ LDATA extern char public_680df93; // '%'
/* 0x0680df94 */ LDATA extern char public_680df94; // 's'
/* 0x0680df95 */ LDATA extern char public_680df95; // ' '
/* 0x0680df96 */ LDATA extern char public_680df96; // 'c'
/* 0x0680df97 */ LDATA extern char public_680df97; // 'o'
/* 0x0680df98 */ LDATA extern char public_680df98; // 'n'
/* 0x0680df99 */ LDATA extern char public_680df99; // 's'
/* 0x0680df9a */ LDATA extern char public_680df9a; // 't'
/* 0x0680df9b */ LDATA extern char public_680df9b; // 'a'
/* 0x0680df9c */ LDATA extern char public_680df9c; // 'n'
/* 0x0680df9d */ LDATA extern char public_680df9d; // 't'
/* 0x0680df9e */ LDATA extern char public_680df9e; // ' '
/* 0x0680df9f */ LDATA extern char public_680df9f; // '#'
/* 0x0680dfa0 */ LDATA extern char public_680dfa0; // '%'
/* 0x0680dfa1 */ LDATA extern char public_680dfa1; // 'd'
/* 0x0680dfa2 */ LDATA extern char public_680dfa2; // ':'
/* 0x0680dfa3 */ LDATA extern char public_680dfa3; // ' '
/* 0x0680dfa4 */ LDATA extern char public_680dfa4; // 't'
/* 0x0680dfa5 */ LDATA extern char public_680dfa5; // 'y'
/* 0x0680dfa6 */ LDATA extern char public_680dfa6; // 'p'
/* 0x0680dfa7 */ LDATA extern char public_680dfa7; // 'e'
/* 0x0680dfa8 */ LDATA extern char public_680dfa8; // '='
/* 0x0680dfa9 */ LDATA extern char public_680dfa9; // '%'
/* 0x0680dfaa */ LDATA extern char public_680dfaa; // 'd'
/* 0x0680dfab */ LDATA extern char public_680dfab; // ' '
/* 0x0680dfac */ LDATA extern char public_680dfac; // '['
/* 0x0680dfad */ LDATA extern char public_680dfad; // '%'
/* 0x0680dfae */ LDATA extern char public_680dfae; // 's'
/* 0x0680dfaf */ LDATA extern char public_680dfaf; // ']'
/* 0x0680dfb0 */ LDATA extern char public_680dfb0; // ' '
/* 0x0680dfb1 */ LDATA extern char public_680dfb1; // 'i'
/* 0x0680dfb2 */ LDATA extern char public_680dfb2; // 'n'
/* 0x0680dfb3 */ LDATA extern char public_680dfb3; // ' '
/* 0x0680dfb4 */ LDATA extern char public_680dfb4; // '%'
/* 0x0680dfb5 */ LDATA extern char public_680dfb5; // 'p'
/* 0x0680dfb6 */ LDATA extern char public_680dfb6; // ' '
/* 0x0680dfb7 */ LDATA extern char public_680dfb7; // '<'
/* 0x0680dfb8 */ LDATA extern char public_680dfb8; // '%'
/* 0x0680dfb9 */ LDATA extern char public_680dfb9; // 's'
/* 0x0680dfba */ LDATA extern char public_680dfba; // ':'
/* 0x0680dfbb */ LDATA extern char public_680dfbb; // '%'
/* 0x0680dfbc */ LDATA extern char public_680dfbc; // 'd'
/* 0x0680dfbd */ LDATA extern char public_680dfbd; // '>'
/* 0x0680dfbe */ LDATA extern char public_680dfbe;
/* 0x0680dfbf */ LDATA extern char public_680dfbf;
/* 0x0680dfc0 */ LDATA extern void const* public_680dfc0;
/* 0x0680dfc4 */ LDATA extern void const* public_680dfc4;
/* 0x0680dfc8 */ LDATA extern void const* public_680dfc8;
/* 0x0680dfcc */ LDATA extern void const* public_680dfcc;
/* 0x0680dfd0 */ LDATA extern void const* public_680dfd0;
/* 0x0680dfd4 */ LDATA extern void const* public_680dfd4;
/* 0x0680dfd8 */ LDATA extern void const* public_680dfd8;
/* 0x0680dfdc */ LDATA extern void const* public_680dfdc;
/* 0x0680dfe0 */ LDATA extern void const* public_680dfe0;
/* 0x0680dfe4 */ LDATA extern void const* public_680dfe4;
/* 0x0680dfe8 */ LDATA extern void const* public_680dfe8;
/* 0x0680dfec */ LDATA extern void const* public_680dfec;
/* 0x0680dff0 */ LDATA extern void const* public_680dff0;
/* 0x0680dff4 */ LDATA extern void const* public_680dff4;
/* 0x0680dff8 */ LDATA extern void const* public_680dff8;
/* 0x0680dffc */ LDATA extern void const* public_680dffc;
/* 0x0680e000 */ LDATA extern void const* public_680e000;
/* 0x0680e004 */ LDATA extern void const* public_680e004;
/* 0x0680e008 */ LDATA extern void const* public_680e008;
/* 0x0680e00c */ LDATA extern void const* public_680e00c;
/* 0x0680e010 */ LDATA extern void const* public_680e010;
/* 0x0680e014 */ LDATA extern void const* public_680e014;
/* 0x0680e018 */ LDATA extern void const* public_680e018;
/* 0x0680e01c */ LDATA extern void const* public_680e01c;
/* 0x0680e020 */ LDATA extern void const* public_680e020;
/* 0x0680e024 */ LDATA extern void const* public_680e024;
/* 0x0680e028 */ LDATA extern void const* public_680e028;
/* 0x0680e02c */ LDATA extern void const* public_680e02c;
/* 0x0680e030 */ LDATA extern void const* public_680e030;
/* 0x0680e034 */ LDATA extern void const* public_680e034;
/* 0x0680e038 */ LDATA extern void const* public_680e038;
/* 0x0680e03c */ LDATA extern void const* public_680e03c;
/* 0x0680e040 */ LDATA extern void const* public_680e040;
/* 0x0680e044 */ LDATA extern void const* public_680e044;
/* 0x0680e048 */ LDATA extern void const* public_680e048;
/* 0x0680e04c */ LDATA extern void const* public_680e04c;
/* 0x0680e050 */ LDATA extern void const* public_680e050;
/* 0x0680e054 */ LDATA extern void const* public_680e054;
/* 0x0680e058 */ LDATA extern void const* public_680e058;
/* 0x0680e05c */ LDATA extern void const* public_680e05c;
/* 0x0680e060 */ LDATA extern void const* public_680e060;
/* 0x0680e064 */ LDATA extern void const* public_680e064;
/* 0x0680e068 */ LDATA extern void const* public_680e068;
/* 0x0680e06c */ LDATA extern void const* public_680e06c;
/* 0x0680e070 */ LDATA extern void const* public_680e070;
/* 0x0680e074 */ LDATA extern void const* public_680e074;
/* 0x0680e078 */ LDATA extern void const* public_680e078;
/* 0x0680e07c */ LDATA extern void const* public_680e07c;
/* 0x0680e080 */ LDATA extern void const* public_680e080;
/* 0x0680e084 */ LDATA extern void const* public_680e084;
/* 0x0680e088 */ LDATA extern void const* public_680e088;
/* 0x0680e08c */ LDATA extern void const* public_680e08c;
/* 0x0680e090 */ LDATA extern void const* public_680e090;
/* 0x0680e094 */ LDATA extern void const* public_680e094;
/* 0x0680e098 */ LDATA extern void const* public_680e098;
/* 0x0680e09c */ LDATA extern void const* public_680e09c;
/* 0x0680e0a0 */ LDATA extern void const* public_680e0a0;
/* 0x0680e0a4 */ LDATA extern void const* public_680e0a4;
/* 0x0680e0a8 */ LDATA extern void const* public_680e0a8;
/* 0x0680e0ac */ LDATA extern void const* public_680e0ac;
/* 0x0680e0b0 */ LDATA extern void const* public_680e0b0;
/* 0x0680e0b4 */ LDATA extern void const* public_680e0b4;
/* 0x0680e0b8 */ LDATA extern void const* public_680e0b8;
/* 0x0680e0bc */ LDATA extern void const* public_680e0bc;
/* 0x0680e0c0 */ LDATA extern void const* public_680e0c0;
/* 0x0680e0c4 */ LDATA extern void const* public_680e0c4;
/* 0x0680e0c8 */ LDATA extern void const* public_680e0c8;
/* 0x0680e0cc */ LDATA extern void const* public_680e0cc;
/* 0x0680e0d0 */ LDATA extern char public_680e0d0; // 't'
/* 0x0680e0d1 */ LDATA extern char public_680e0d1; // 'r'
/* 0x0680e0d2 */ LDATA extern char public_680e0d2; // 'e'
/* 0x0680e0d3 */ LDATA extern char public_680e0d3; // 'm'
/* 0x0680e0d4 */ LDATA extern char public_680e0d4; // 'o'
/* 0x0680e0d5 */ LDATA extern char public_680e0d5; // 'v'
/* 0x0680e0d6 */ LDATA extern char public_680e0d6; // 'e'
/* 0x0680e0d7 */ LDATA extern char public_680e0d7;
/* 0x0680e0d8 */ LDATA extern char public_680e0d8; // 't'
/* 0x0680e0d9 */ LDATA extern char public_680e0d9; // 'i'
/* 0x0680e0da */ LDATA extern char public_680e0da; // 'n'
/* 0x0680e0db */ LDATA extern char public_680e0db; // 's'
/* 0x0680e0dc */ LDATA extern char public_680e0dc; // 'e'
/* 0x0680e0dd */ LDATA extern char public_680e0dd; // 'r'
/* 0x0680e0de */ LDATA extern char public_680e0de; // 't'
/* 0x0680e0df */ LDATA extern char public_680e0df;
/* 0x0680e0e0 */ LDATA extern char public_680e0e0; // 's'
/* 0x0680e0e1 */ LDATA extern char public_680e0e1; // 'o'
/* 0x0680e0e2 */ LDATA extern char public_680e0e2; // 'r'
/* 0x0680e0e3 */ LDATA extern char public_680e0e3; // 't'
/* 0x0680e0e4 */ LDATA extern char public_680e0e4;
/* 0x0680e0e5 */ LDATA extern char public_680e0e5;
/* 0x0680e0e6 */ LDATA extern char public_680e0e6;
/* 0x0680e0e7 */ LDATA extern char public_680e0e7;
/* 0x0680e0e8 */ LDATA extern char public_680e0e8; // 'g'
/* 0x0680e0e9 */ LDATA extern char public_680e0e9; // 'e'
/* 0x0680e0ea */ LDATA extern char public_680e0ea; // 't'
/* 0x0680e0eb */ LDATA extern char public_680e0eb; // 'n'
/* 0x0680e0ec */ LDATA extern char public_680e0ec;
/* 0x0680e0ed */ LDATA extern char public_680e0ed;
/* 0x0680e0ee */ LDATA extern char public_680e0ee;
/* 0x0680e0ef */ LDATA extern char public_680e0ef;
/* 0x0680e0f0 */ LDATA extern char public_680e0f0; // 'f'
/* 0x0680e0f1 */ LDATA extern char public_680e0f1; // 'o'
/* 0x0680e0f2 */ LDATA extern char public_680e0f2; // 'r'
/* 0x0680e0f3 */ LDATA extern char public_680e0f3; // 'e'
/* 0x0680e0f4 */ LDATA extern char public_680e0f4; // 'a'
/* 0x0680e0f5 */ LDATA extern char public_680e0f5; // 'c'
/* 0x0680e0f6 */ LDATA extern char public_680e0f6; // 'h'
/* 0x0680e0f7 */ LDATA extern char public_680e0f7; // 'v'
/* 0x0680e0f8 */ LDATA extern char public_680e0f8; // 'a'
/* 0x0680e0f9 */ LDATA extern char public_680e0f9; // 'r'
/* 0x0680e0fa */ LDATA extern char public_680e0fa;
/* 0x0680e0fb */ LDATA extern char public_680e0fb;
/* 0x0680e0fc */ LDATA extern char public_680e0fc; // 'f'
/* 0x0680e0fd */ LDATA extern char public_680e0fd; // 'o'
/* 0x0680e0fe */ LDATA extern char public_680e0fe; // 'r'
/* 0x0680e0ff */ LDATA extern char public_680e0ff; // 'e'
/* 0x0680e100 */ LDATA extern char public_680e100; // 'a'
/* 0x0680e101 */ LDATA extern char public_680e101; // 'c'
/* 0x0680e102 */ LDATA extern char public_680e102; // 'h'
/* 0x0680e103 */ LDATA extern char public_680e103; // 'i'
/* 0x0680e104 */ LDATA extern char public_680e104;
/* 0x0680e105 */ LDATA extern char public_680e105;
/* 0x0680e106 */ LDATA extern char public_680e106;
/* 0x0680e107 */ LDATA extern char public_680e107;
/* 0x0680e108 */ LDATA extern char public_680e108; // 'f'
/* 0x0680e109 */ LDATA extern char public_680e109; // 'o'
/* 0x0680e10a */ LDATA extern char public_680e10a; // 'r'
/* 0x0680e10b */ LDATA extern char public_680e10b; // 'e'
/* 0x0680e10c */ LDATA extern char public_680e10c; // 'a'
/* 0x0680e10d */ LDATA extern char public_680e10d; // 'c'
/* 0x0680e10e */ LDATA extern char public_680e10e; // 'h'
/* 0x0680e10f */ LDATA extern char public_680e10f;
/* 0x0680e110 */ LDATA extern char public_680e110; // 'a'
/* 0x0680e111 */ LDATA extern char public_680e111; // 's'
/* 0x0680e112 */ LDATA extern char public_680e112; // 's'
/* 0x0680e113 */ LDATA extern char public_680e113; // 'e'
/* 0x0680e114 */ LDATA extern char public_680e114; // 'r'
/* 0x0680e115 */ LDATA extern char public_680e115; // 't'
/* 0x0680e116 */ LDATA extern char public_680e116;
/* 0x0680e117 */ LDATA extern char public_680e117;
/* 0x0680e118 */ LDATA extern char public_680e118; // 't'
/* 0x0680e119 */ LDATA extern char public_680e119; // 'y'
/* 0x0680e11a */ LDATA extern char public_680e11a; // 'p'
/* 0x0680e11b */ LDATA extern char public_680e11b; // 'e'
/* 0x0680e11c */ LDATA extern char public_680e11c;
/* 0x0680e11d */ LDATA extern char public_680e11d;
/* 0x0680e11e */ LDATA extern char public_680e11e;
/* 0x0680e11f */ LDATA extern char public_680e11f;
/* 0x0680e120 */ LDATA extern char public_680e120; // 't'
/* 0x0680e121 */ LDATA extern char public_680e121; // 'o'
/* 0x0680e122 */ LDATA extern char public_680e122; // 's'
/* 0x0680e123 */ LDATA extern char public_680e123; // 't'
/* 0x0680e124 */ LDATA extern char public_680e124; // 'r'
/* 0x0680e125 */ LDATA extern char public_680e125; // 'i'
/* 0x0680e126 */ LDATA extern char public_680e126; // 'n'
/* 0x0680e127 */ LDATA extern char public_680e127; // 'g'
/* 0x0680e128 */ LDATA extern char public_680e128;
/* 0x0680e129 */ LDATA extern char public_680e129;
/* 0x0680e12a */ LDATA extern char public_680e12a;
/* 0x0680e12b */ LDATA extern char public_680e12b;
/* 0x0680e12c */ LDATA extern char public_680e12c; // 't'
/* 0x0680e12d */ LDATA extern char public_680e12d; // 'o'
/* 0x0680e12e */ LDATA extern char public_680e12e; // 'n'
/* 0x0680e12f */ LDATA extern char public_680e12f; // 'u'
/* 0x0680e130 */ LDATA extern char public_680e130; // 'm'
/* 0x0680e131 */ LDATA extern char public_680e131; // 'b'
/* 0x0680e132 */ LDATA extern char public_680e132; // 'e'
/* 0x0680e133 */ LDATA extern char public_680e133; // 'r'
/* 0x0680e134 */ LDATA extern char public_680e134;
/* 0x0680e135 */ LDATA extern char public_680e135;
/* 0x0680e136 */ LDATA extern char public_680e136;
/* 0x0680e137 */ LDATA extern char public_680e137;
/* 0x0680e138 */ LDATA extern char public_680e138; // 't'
/* 0x0680e139 */ LDATA extern char public_680e139; // 'a'
/* 0x0680e13a */ LDATA extern char public_680e13a; // 'g'
/* 0x0680e13b */ LDATA extern char public_680e13b;
/* 0x0680e13c */ LDATA extern char public_680e13c; // 's'
/* 0x0680e13d */ LDATA extern char public_680e13d; // 'e'
/* 0x0680e13e */ LDATA extern char public_680e13e; // 't'
/* 0x0680e13f */ LDATA extern char public_680e13f; // 't'
/* 0x0680e140 */ LDATA extern char public_680e140; // 'a'
/* 0x0680e141 */ LDATA extern char public_680e141; // 'g'
/* 0x0680e142 */ LDATA extern char public_680e142; // 'm'
/* 0x0680e143 */ LDATA extern char public_680e143; // 'e'
/* 0x0680e144 */ LDATA extern char public_680e144; // 't'
/* 0x0680e145 */ LDATA extern char public_680e145; // 'h'
/* 0x0680e146 */ LDATA extern char public_680e146; // 'o'
/* 0x0680e147 */ LDATA extern char public_680e147; // 'd'
/* 0x0680e148 */ LDATA extern char public_680e148;
/* 0x0680e149 */ LDATA extern char public_680e149;
/* 0x0680e14a */ LDATA extern char public_680e14a;
/* 0x0680e14b */ LDATA extern char public_680e14b;
/* 0x0680e14c */ LDATA extern char public_680e14c; // 's'
/* 0x0680e14d */ LDATA extern char public_680e14d; // 'e'
/* 0x0680e14e */ LDATA extern char public_680e14e; // 't'
/* 0x0680e14f */ LDATA extern char public_680e14f; // 't'
/* 0x0680e150 */ LDATA extern char public_680e150; // 'a'
/* 0x0680e151 */ LDATA extern char public_680e151; // 'g'
/* 0x0680e152 */ LDATA extern char public_680e152;
/* 0x0680e153 */ LDATA extern char public_680e153;
/* 0x0680e154 */ LDATA extern char public_680e154; // 's'
/* 0x0680e155 */ LDATA extern char public_680e155; // 'e'
/* 0x0680e156 */ LDATA extern char public_680e156; // 't'
/* 0x0680e157 */ LDATA extern char public_680e157; // 'e'
/* 0x0680e158 */ LDATA extern char public_680e158; // 'r'
/* 0x0680e159 */ LDATA extern char public_680e159; // 'r'
/* 0x0680e15a */ LDATA extern char public_680e15a; // 'o'
/* 0x0680e15b */ LDATA extern char public_680e15b; // 'r'
/* 0x0680e15c */ LDATA extern char public_680e15c; // 'm'
/* 0x0680e15d */ LDATA extern char public_680e15d; // 'e'
/* 0x0680e15e */ LDATA extern char public_680e15e; // 't'
/* 0x0680e15f */ LDATA extern char public_680e15f; // 'h'
/* 0x0680e160 */ LDATA extern char public_680e160; // 'o'
/* 0x0680e161 */ LDATA extern char public_680e161; // 'd'
/* 0x0680e162 */ LDATA extern char public_680e162;
/* 0x0680e163 */ LDATA extern char public_680e163;
/* 0x0680e164 */ LDATA extern char public_680e164; // 'r'
/* 0x0680e165 */ LDATA extern char public_680e165; // 'a'
/* 0x0680e166 */ LDATA extern char public_680e166; // 'w'
/* 0x0680e167 */ LDATA extern char public_680e167; // 's'
/* 0x0680e168 */ LDATA extern char public_680e168; // 'e'
/* 0x0680e169 */ LDATA extern char public_680e169; // 't'
/* 0x0680e16a */ LDATA extern char public_680e16a; // 't'
/* 0x0680e16b */ LDATA extern char public_680e16b; // 'a'
/* 0x0680e16c */ LDATA extern char public_680e16c; // 'b'
/* 0x0680e16d */ LDATA extern char public_680e16d; // 'l'
/* 0x0680e16e */ LDATA extern char public_680e16e; // 'e'
/* 0x0680e16f */ LDATA extern char public_680e16f;
/* 0x0680e170 */ LDATA extern char public_680e170; // 'r'
/* 0x0680e171 */ LDATA extern char public_680e171; // 'a'
/* 0x0680e172 */ LDATA extern char public_680e172; // 'w'
/* 0x0680e173 */ LDATA extern char public_680e173; // 's'
/* 0x0680e174 */ LDATA extern char public_680e174; // 'e'
/* 0x0680e175 */ LDATA extern char public_680e175; // 't'
/* 0x0680e176 */ LDATA extern char public_680e176; // 'g'
/* 0x0680e177 */ LDATA extern char public_680e177; // 'l'
/* 0x0680e178 */ LDATA extern char public_680e178; // 'o'
/* 0x0680e179 */ LDATA extern char public_680e179; // 'b'
/* 0x0680e17a */ LDATA extern char public_680e17a; // 'a'
/* 0x0680e17b */ LDATA extern char public_680e17b; // 'l'
/* 0x0680e17c */ LDATA extern char public_680e17c;
/* 0x0680e17d */ LDATA extern char public_680e17d;
/* 0x0680e17e */ LDATA extern char public_680e17e;
/* 0x0680e17f */ LDATA extern char public_680e17f;
/* 0x0680e180 */ LDATA extern char public_680e180; // 'r'
/* 0x0680e181 */ LDATA extern char public_680e181; // 'a'
/* 0x0680e182 */ LDATA extern char public_680e182; // 'w'
/* 0x0680e183 */ LDATA extern char public_680e183; // 'g'
/* 0x0680e184 */ LDATA extern char public_680e184; // 'e'
/* 0x0680e185 */ LDATA extern char public_680e185; // 't'
/* 0x0680e186 */ LDATA extern char public_680e186; // 't'
/* 0x0680e187 */ LDATA extern char public_680e187; // 'a'
/* 0x0680e188 */ LDATA extern char public_680e188; // 'b'
/* 0x0680e189 */ LDATA extern char public_680e189; // 'l'
/* 0x0680e18a */ LDATA extern char public_680e18a; // 'e'
/* 0x0680e18b */ LDATA extern char public_680e18b;
/* 0x0680e18c */ LDATA extern char public_680e18c; // 'r'
/* 0x0680e18d */ LDATA extern char public_680e18d; // 'a'
/* 0x0680e18e */ LDATA extern char public_680e18e; // 'w'
/* 0x0680e18f */ LDATA extern char public_680e18f; // 'g'
/* 0x0680e190 */ LDATA extern char public_680e190; // 'e'
/* 0x0680e191 */ LDATA extern char public_680e191; // 't'
/* 0x0680e192 */ LDATA extern char public_680e192; // 'g'
/* 0x0680e193 */ LDATA extern char public_680e193; // 'l'
/* 0x0680e194 */ LDATA extern char public_680e194; // 'o'
/* 0x0680e195 */ LDATA extern char public_680e195; // 'b'
/* 0x0680e196 */ LDATA extern char public_680e196; // 'a'
/* 0x0680e197 */ LDATA extern char public_680e197; // 'l'
/* 0x0680e198 */ LDATA extern char public_680e198;
/* 0x0680e199 */ LDATA extern char public_680e199;
/* 0x0680e19a */ LDATA extern char public_680e19a;
/* 0x0680e19b */ LDATA extern char public_680e19b;
/* 0x0680e19c */ LDATA extern char public_680e19c; // 'p'
/* 0x0680e19d */ LDATA extern char public_680e19d; // 'r'
/* 0x0680e19e */ LDATA extern char public_680e19e; // 'i'
/* 0x0680e19f */ LDATA extern char public_680e19f; // 'n'
/* 0x0680e1a0 */ LDATA extern char public_680e1a0; // 't'
/* 0x0680e1a1 */ LDATA extern char public_680e1a1;
/* 0x0680e1a2 */ LDATA extern char public_680e1a2;
/* 0x0680e1a3 */ LDATA extern char public_680e1a3;
/* 0x0680e1a4 */ LDATA extern char public_680e1a4; // 'n'
/* 0x0680e1a5 */ LDATA extern char public_680e1a5; // 'e'
/* 0x0680e1a6 */ LDATA extern char public_680e1a6; // 'x'
/* 0x0680e1a7 */ LDATA extern char public_680e1a7; // 't'
/* 0x0680e1a8 */ LDATA extern char public_680e1a8; // 'v'
/* 0x0680e1a9 */ LDATA extern char public_680e1a9; // 'a'
/* 0x0680e1aa */ LDATA extern char public_680e1aa; // 'r'
/* 0x0680e1ab */ LDATA extern char public_680e1ab;
/* 0x0680e1ac */ LDATA extern char public_680e1ac; // 'n'
/* 0x0680e1ad */ LDATA extern char public_680e1ad; // 'e'
/* 0x0680e1ae */ LDATA extern char public_680e1ae; // 'x'
/* 0x0680e1af */ LDATA extern char public_680e1af; // 't'
/* 0x0680e1b0 */ LDATA extern char public_680e1b0;
/* 0x0680e1b1 */ LDATA extern char public_680e1b1;
/* 0x0680e1b2 */ LDATA extern char public_680e1b2;
/* 0x0680e1b3 */ LDATA extern char public_680e1b3;
/* 0x0680e1b4 */ LDATA extern char public_680e1b4; // 'n'
/* 0x0680e1b5 */ LDATA extern char public_680e1b5; // 'e'
/* 0x0680e1b6 */ LDATA extern char public_680e1b6; // 'w'
/* 0x0680e1b7 */ LDATA extern char public_680e1b7; // 't'
/* 0x0680e1b8 */ LDATA extern char public_680e1b8; // 'a'
/* 0x0680e1b9 */ LDATA extern char public_680e1b9; // 'g'
/* 0x0680e1ba */ LDATA extern char public_680e1ba;
/* 0x0680e1bb */ LDATA extern char public_680e1bb;
/* 0x0680e1bc */ LDATA extern char public_680e1bc; // 'g'
/* 0x0680e1bd */ LDATA extern char public_680e1bd; // 'e'
/* 0x0680e1be */ LDATA extern char public_680e1be; // 't'
/* 0x0680e1bf */ LDATA extern char public_680e1bf; // 't'
/* 0x0680e1c0 */ LDATA extern char public_680e1c0; // 'a'
/* 0x0680e1c1 */ LDATA extern char public_680e1c1; // 'g'
/* 0x0680e1c2 */ LDATA extern char public_680e1c2; // 'm'
/* 0x0680e1c3 */ LDATA extern char public_680e1c3; // 'e'
/* 0x0680e1c4 */ LDATA extern char public_680e1c4; // 't'
/* 0x0680e1c5 */ LDATA extern char public_680e1c5; // 'h'
/* 0x0680e1c6 */ LDATA extern char public_680e1c6; // 'o'
/* 0x0680e1c7 */ LDATA extern char public_680e1c7; // 'd'
/* 0x0680e1c8 */ LDATA extern char public_680e1c8;
/* 0x0680e1c9 */ LDATA extern char public_680e1c9;
/* 0x0680e1ca */ LDATA extern char public_680e1ca;
/* 0x0680e1cb */ LDATA extern char public_680e1cb;
/* 0x0680e1cc */ LDATA extern char public_680e1cc; // 'e'
/* 0x0680e1cd */ LDATA extern char public_680e1cd; // 'r'
/* 0x0680e1ce */ LDATA extern char public_680e1ce; // 'r'
/* 0x0680e1cf */ LDATA extern char public_680e1cf; // 'o'
/* 0x0680e1d0 */ LDATA extern char public_680e1d0; // 'r'
/* 0x0680e1d1 */ LDATA extern char public_680e1d1;
/* 0x0680e1d2 */ LDATA extern char public_680e1d2;
/* 0x0680e1d3 */ LDATA extern char public_680e1d3;
/* 0x0680e1d4 */ LDATA extern char public_680e1d4; // 'd'
/* 0x0680e1d5 */ LDATA extern char public_680e1d5; // 'o'
/* 0x0680e1d6 */ LDATA extern char public_680e1d6; // 's'
/* 0x0680e1d7 */ LDATA extern char public_680e1d7; // 't'
/* 0x0680e1d8 */ LDATA extern char public_680e1d8; // 'r'
/* 0x0680e1d9 */ LDATA extern char public_680e1d9; // 'i'
/* 0x0680e1da */ LDATA extern char public_680e1da; // 'n'
/* 0x0680e1db */ LDATA extern char public_680e1db; // 'g'
/* 0x0680e1dc */ LDATA extern char public_680e1dc;
/* 0x0680e1dd */ LDATA extern char public_680e1dd;
/* 0x0680e1de */ LDATA extern char public_680e1de;
/* 0x0680e1df */ LDATA extern char public_680e1df;
/* 0x0680e1e0 */ LDATA extern char public_680e1e0; // 'd'
/* 0x0680e1e1 */ LDATA extern char public_680e1e1; // 'o'
/* 0x0680e1e2 */ LDATA extern char public_680e1e2; // 'f'
/* 0x0680e1e3 */ LDATA extern char public_680e1e3; // 'i'
/* 0x0680e1e4 */ LDATA extern char public_680e1e4; // 'l'
/* 0x0680e1e5 */ LDATA extern char public_680e1e5; // 'e'
/* 0x0680e1e6 */ LDATA extern char public_680e1e6;
/* 0x0680e1e7 */ LDATA extern char public_680e1e7;
/* 0x0680e1e8 */ LDATA extern char public_680e1e8; // 'c'
/* 0x0680e1e9 */ LDATA extern char public_680e1e9; // 'o'
/* 0x0680e1ea */ LDATA extern char public_680e1ea; // 'p'
/* 0x0680e1eb */ LDATA extern char public_680e1eb; // 'y'
/* 0x0680e1ec */ LDATA extern char public_680e1ec; // 't'
/* 0x0680e1ed */ LDATA extern char public_680e1ed; // 'a'
/* 0x0680e1ee */ LDATA extern char public_680e1ee; // 'g'
/* 0x0680e1ef */ LDATA extern char public_680e1ef; // 'm'
/* 0x0680e1f0 */ LDATA extern char public_680e1f0; // 'e'
/* 0x0680e1f1 */ LDATA extern char public_680e1f1; // 't'
/* 0x0680e1f2 */ LDATA extern char public_680e1f2; // 'h'
/* 0x0680e1f3 */ LDATA extern char public_680e1f3; // 'o'
/* 0x0680e1f4 */ LDATA extern char public_680e1f4; // 'd'
/* 0x0680e1f5 */ LDATA extern char public_680e1f5; // 's'
/* 0x0680e1f6 */ LDATA extern char public_680e1f6;
/* 0x0680e1f7 */ LDATA extern char public_680e1f7;
/* 0x0680e1f8 */ LDATA extern char public_680e1f8; // 'c'
/* 0x0680e1f9 */ LDATA extern char public_680e1f9; // 'o'
/* 0x0680e1fa */ LDATA extern char public_680e1fa; // 'l'
/* 0x0680e1fb */ LDATA extern char public_680e1fb; // 'l'
/* 0x0680e1fc */ LDATA extern char public_680e1fc; // 'e'
/* 0x0680e1fd */ LDATA extern char public_680e1fd; // 'c'
/* 0x0680e1fe */ LDATA extern char public_680e1fe; // 't'
/* 0x0680e1ff */ LDATA extern char public_680e1ff; // 'g'
/* 0x0680e200 */ LDATA extern char public_680e200; // 'a'
/* 0x0680e201 */ LDATA extern char public_680e201; // 'r'
/* 0x0680e202 */ LDATA extern char public_680e202; // 'b'
/* 0x0680e203 */ LDATA extern char public_680e203; // 'a'
/* 0x0680e204 */ LDATA extern char public_680e204; // 'g'
/* 0x0680e205 */ LDATA extern char public_680e205; // 'e'
/* 0x0680e206 */ LDATA extern char public_680e206;
/* 0x0680e207 */ LDATA extern char public_680e207;
/* 0x0680e208 */ LDATA extern char public_680e208; // 'c'
/* 0x0680e209 */ LDATA extern char public_680e209; // 'a'
/* 0x0680e20a */ LDATA extern char public_680e20a; // 'l'
/* 0x0680e20b */ LDATA extern char public_680e20b; // 'l'
/* 0x0680e20c */ LDATA extern char public_680e20c;
/* 0x0680e20d */ LDATA extern char public_680e20d;
/* 0x0680e20e */ LDATA extern char public_680e20e;
/* 0x0680e20f */ LDATA extern char public_680e20f;
/* 0x0680e210 */ LDATA extern char public_680e210; // '_'
/* 0x0680e211 */ LDATA extern char public_680e211; // 'A'
/* 0x0680e212 */ LDATA extern char public_680e212; // 'L'
/* 0x0680e213 */ LDATA extern char public_680e213; // 'E'
/* 0x0680e214 */ LDATA extern char public_680e214; // 'R'
/* 0x0680e215 */ LDATA extern char public_680e215; // 'T'
/* 0x0680e216 */ LDATA extern char public_680e216;
/* 0x0680e217 */ LDATA extern char public_680e217;
/* 0x0680e218 */ LDATA extern char public_680e218; // 'l'
/* 0x0680e219 */ LDATA extern char public_680e219; // 'u'
/* 0x0680e21a */ LDATA extern char public_680e21a; // 'a'
/* 0x0680e21b */ LDATA extern char public_680e21b; // ' '
/* 0x0680e21c */ LDATA extern char public_680e21c; // 'e'
/* 0x0680e21d */ LDATA extern char public_680e21d; // 'r'
/* 0x0680e21e */ LDATA extern char public_680e21e; // 'r'
/* 0x0680e21f */ LDATA extern char public_680e21f; // 'o'
/* 0x0680e220 */ LDATA extern char public_680e220; // 'r'
/* 0x0680e221 */ LDATA extern char public_680e221; // ':'
/* 0x0680e222 */ LDATA extern char public_680e222; // ' '
/* 0x0680e223 */ LDATA extern char public_680e223; // '%'
/* 0x0680e224 */ LDATA extern char public_680e224; // '.'
/* 0x0680e225 */ LDATA extern char public_680e225; // '5'
/* 0x0680e226 */ LDATA extern char public_680e226; // '0'
/* 0x0680e227 */ LDATA extern char public_680e227; // '0'
/* 0x0680e228 */ LDATA extern char public_680e228; // 's'
/* 0x0680e229 */ LDATA extern char public_680e229;
/* 0x0680e22a */ LDATA extern char public_680e22a;
/* 0x0680e22b */ LDATA extern char public_680e22b;
/* 0x0680e22c */ LDATA extern char public_680e22c;
/* 0x0680e22d */ LDATA extern char public_680e22d;
/* 0x0680e22e */ LDATA extern char public_680e22e;
/* 0x0680e22f */ LDATA extern char public_680e22f;
/* 0x0680e230 */ LDATA extern char public_680e230;
/* 0x0680e231 */ LDATA extern char public_680e231;
/* 0x0680e232 */ LDATA extern char public_680e232;
/* 0x0680e233 */ LDATA extern char public_680e233;
/* 0x0680e234 */ LDATA extern char public_680e234; // '`'
/* 0x0680e235 */ LDATA extern char public_680e235; // 't'
/* 0x0680e236 */ LDATA extern char public_680e236; // 'o'
/* 0x0680e237 */ LDATA extern char public_680e237; // 's'
/* 0x0680e238 */ LDATA extern char public_680e238; // 't'
/* 0x0680e239 */ LDATA extern char public_680e239; // 'r'
/* 0x0680e23a */ LDATA extern char public_680e23a; // 'i'
/* 0x0680e23b */ LDATA extern char public_680e23b; // 'n'
/* 0x0680e23c */ LDATA extern char public_680e23c; // 'g'
/* 0x0680e23d */ LDATA extern char public_680e23d; // '''
/* 0x0680e23e */ LDATA extern char public_680e23e; // ' '
/* 0x0680e23f */ LDATA extern char public_680e23f; // 'm'
/* 0x0680e240 */ LDATA extern char public_680e240; // 'u'
/* 0x0680e241 */ LDATA extern char public_680e241; // 's'
/* 0x0680e242 */ LDATA extern char public_680e242; // 't'
/* 0x0680e243 */ LDATA extern char public_680e243; // ' '
/* 0x0680e244 */ LDATA extern char public_680e244; // 'r'
/* 0x0680e245 */ LDATA extern char public_680e245; // 'e'
/* 0x0680e246 */ LDATA extern char public_680e246; // 't'
/* 0x0680e247 */ LDATA extern char public_680e247; // 'u'
/* 0x0680e248 */ LDATA extern char public_680e248; // 'r'
/* 0x0680e249 */ LDATA extern char public_680e249; // 'n'
/* 0x0680e24a */ LDATA extern char public_680e24a; // ' '
/* 0x0680e24b */ LDATA extern char public_680e24b; // 'a'
/* 0x0680e24c */ LDATA extern char public_680e24c; // ' '
/* 0x0680e24d */ LDATA extern char public_680e24d; // 's'
/* 0x0680e24e */ LDATA extern char public_680e24e; // 't'
/* 0x0680e24f */ LDATA extern char public_680e24f; // 'r'
/* 0x0680e250 */ LDATA extern char public_680e250; // 'i'
/* 0x0680e251 */ LDATA extern char public_680e251; // 'n'
/* 0x0680e252 */ LDATA extern char public_680e252; // 'g'
/* 0x0680e253 */ LDATA extern char public_680e253; // ' '
/* 0x0680e254 */ LDATA extern char public_680e254; // 't'
/* 0x0680e255 */ LDATA extern char public_680e255; // 'o'
/* 0x0680e256 */ LDATA extern char public_680e256; // ' '
/* 0x0680e257 */ LDATA extern char public_680e257; // '`'
/* 0x0680e258 */ LDATA extern char public_680e258; // 'p'
/* 0x0680e259 */ LDATA extern char public_680e259; // 'r'
/* 0x0680e25a */ LDATA extern char public_680e25a; // 'i'
/* 0x0680e25b */ LDATA extern char public_680e25b; // 'n'
/* 0x0680e25c */ LDATA extern char public_680e25c; // 't'
/* 0x0680e25d */ LDATA extern char public_680e25d; // '''
/* 0x0680e25e */ LDATA extern char public_680e25e;
/* 0x0680e25f */ LDATA extern char public_680e25f;
/* 0x0680e260 */ LDATA extern char public_680e260; // 'e'
/* 0x0680e261 */ LDATA extern char public_680e261; // 'r'
/* 0x0680e262 */ LDATA extern char public_680e262; // 'r'
/* 0x0680e263 */ LDATA extern char public_680e263; // 'o'
/* 0x0680e264 */ LDATA extern char public_680e264; // 'r'
/* 0x0680e265 */ LDATA extern char public_680e265; // ' '
/* 0x0680e266 */ LDATA extern char public_680e266; // 'i'
/* 0x0680e267 */ LDATA extern char public_680e267; // 'n'
/* 0x0680e268 */ LDATA extern char public_680e268; // ' '
/* 0x0680e269 */ LDATA extern char public_680e269; // '`'
/* 0x0680e26a */ LDATA extern char public_680e26a; // 't'
/* 0x0680e26b */ LDATA extern char public_680e26b; // 'o'
/* 0x0680e26c */ LDATA extern char public_680e26c; // 's'
/* 0x0680e26d */ LDATA extern char public_680e26d; // 't'
/* 0x0680e26e */ LDATA extern char public_680e26e; // 'r'
/* 0x0680e26f */ LDATA extern char public_680e26f; // 'i'
/* 0x0680e270 */ LDATA extern char public_680e270; // 'n'
/* 0x0680e271 */ LDATA extern char public_680e271; // 'g'
/* 0x0680e272 */ LDATA extern char public_680e272; // '''
/* 0x0680e273 */ LDATA extern char public_680e273; // ' '
/* 0x0680e274 */ LDATA extern char public_680e274; // 'c'
/* 0x0680e275 */ LDATA extern char public_680e275; // 'a'
/* 0x0680e276 */ LDATA extern char public_680e276; // 'l'
/* 0x0680e277 */ LDATA extern char public_680e277; // 'l'
/* 0x0680e278 */ LDATA extern char public_680e278; // 'e'
/* 0x0680e279 */ LDATA extern char public_680e279; // 'd'
/* 0x0680e27a */ LDATA extern char public_680e27a; // ' '
/* 0x0680e27b */ LDATA extern char public_680e27b; // 'b'
/* 0x0680e27c */ LDATA extern char public_680e27c; // 'y'
/* 0x0680e27d */ LDATA extern char public_680e27d; // ' '
/* 0x0680e27e */ LDATA extern char public_680e27e; // '`'
/* 0x0680e27f */ LDATA extern char public_680e27f; // 'p'
/* 0x0680e280 */ LDATA extern char public_680e280; // 'r'
/* 0x0680e281 */ LDATA extern char public_680e281; // 'i'
/* 0x0680e282 */ LDATA extern char public_680e282; // 'n'
/* 0x0680e283 */ LDATA extern char public_680e283; // 't'
/* 0x0680e284 */ LDATA extern char public_680e284; // '''
/* 0x0680e285 */ LDATA extern char public_680e285;
/* 0x0680e286 */ LDATA extern char public_680e286;
/* 0x0680e287 */ LDATA extern char public_680e287;
/* 0x0680e288 */ LDATA extern char public_680e288; // 't'
/* 0x0680e289 */ LDATA extern char public_680e289; // 'o'
/* 0x0680e28a */ LDATA extern char public_680e28a; // 'o'
/* 0x0680e28b */ LDATA extern char public_680e28b; // ' '
/* 0x0680e28c */ LDATA extern char public_680e28c; // 'm'
/* 0x0680e28d */ LDATA extern char public_680e28d; // 'a'
/* 0x0680e28e */ LDATA extern char public_680e28e; // 'n'
/* 0x0680e28f */ LDATA extern char public_680e28f; // 'y'
/* 0x0680e290 */ LDATA extern char public_680e290; // ' '
/* 0x0680e291 */ LDATA extern char public_680e291; // 'a'
/* 0x0680e292 */ LDATA extern char public_680e292; // 'r'
/* 0x0680e293 */ LDATA extern char public_680e293; // 'g'
/* 0x0680e294 */ LDATA extern char public_680e294; // 'u'
/* 0x0680e295 */ LDATA extern char public_680e295; // 'm'
/* 0x0680e296 */ LDATA extern char public_680e296; // 'e'
/* 0x0680e297 */ LDATA extern char public_680e297; // 'n'
/* 0x0680e298 */ LDATA extern char public_680e298; // 't'
/* 0x0680e299 */ LDATA extern char public_680e299; // 's'
/* 0x0680e29a */ LDATA extern char public_680e29a;
/* 0x0680e29b */ LDATA extern char public_680e29b;
/* 0x0680e29c */ LDATA extern char public_680e29c; // 'b'
/* 0x0680e29d */ LDATA extern char public_680e29d; // 'a'
/* 0x0680e29e */ LDATA extern char public_680e29e; // 's'
/* 0x0680e29f */ LDATA extern char public_680e29f; // 'e'
/* 0x0680e2a0 */ LDATA extern char public_680e2a0; // ' '
/* 0x0680e2a1 */ LDATA extern char public_680e2a1; // 'o'
/* 0x0680e2a2 */ LDATA extern char public_680e2a2; // 'u'
/* 0x0680e2a3 */ LDATA extern char public_680e2a3; // 't'
/* 0x0680e2a4 */ LDATA extern char public_680e2a4; // ' '
/* 0x0680e2a5 */ LDATA extern char public_680e2a5; // 'o'
/* 0x0680e2a6 */ LDATA extern char public_680e2a6; // 'f'
/* 0x0680e2a7 */ LDATA extern char public_680e2a7; // ' '
/* 0x0680e2a8 */ LDATA extern char public_680e2a8; // 'r'
/* 0x0680e2a9 */ LDATA extern char public_680e2a9; // 'a'
/* 0x0680e2aa */ LDATA extern char public_680e2aa; // 'n'
/* 0x0680e2ab */ LDATA extern char public_680e2ab; // 'g'
/* 0x0680e2ac */ LDATA extern char public_680e2ac; // 'e'
/* 0x0680e2ad */ LDATA extern char public_680e2ad;
/* 0x0680e2ae */ LDATA extern char public_680e2ae;
/* 0x0680e2af */ LDATA extern char public_680e2af;
/* 0x0680e2b0 */ LDATA extern char public_680e2b0; // '`'
/* 0x0680e2b1 */ LDATA extern char public_680e2b1; // 'd'
/* 0x0680e2b2 */ LDATA extern char public_680e2b2; // 'o'
/* 0x0680e2b3 */ LDATA extern char public_680e2b3; // 's'
/* 0x0680e2b4 */ LDATA extern char public_680e2b4; // 't'
/* 0x0680e2b5 */ LDATA extern char public_680e2b5; // 'r'
/* 0x0680e2b6 */ LDATA extern char public_680e2b6; // 'i'
/* 0x0680e2b7 */ LDATA extern char public_680e2b7; // 'n'
/* 0x0680e2b8 */ LDATA extern char public_680e2b8; // 'g'
/* 0x0680e2b9 */ LDATA extern char public_680e2b9; // '''
/* 0x0680e2ba */ LDATA extern char public_680e2ba; // ' '
/* 0x0680e2bb */ LDATA extern char public_680e2bb; // 'c'
/* 0x0680e2bc */ LDATA extern char public_680e2bc; // 'a'
/* 0x0680e2bd */ LDATA extern char public_680e2bd; // 'n'
/* 0x0680e2be */ LDATA extern char public_680e2be; // 'n'
/* 0x0680e2bf */ LDATA extern char public_680e2bf; // 'o'
/* 0x0680e2c0 */ LDATA extern char public_680e2c0; // 't'
/* 0x0680e2c1 */ LDATA extern char public_680e2c1; // ' '
/* 0x0680e2c2 */ LDATA extern char public_680e2c2; // 'r'
/* 0x0680e2c3 */ LDATA extern char public_680e2c3; // 'u'
/* 0x0680e2c4 */ LDATA extern char public_680e2c4; // 'n'
/* 0x0680e2c5 */ LDATA extern char public_680e2c5; // ' '
/* 0x0680e2c6 */ LDATA extern char public_680e2c6; // 'p'
/* 0x0680e2c7 */ LDATA extern char public_680e2c7; // 'r'
/* 0x0680e2c8 */ LDATA extern char public_680e2c8; // 'e'
/* 0x0680e2c9 */ LDATA extern char public_680e2c9; // '-'
/* 0x0680e2ca */ LDATA extern char public_680e2ca; // 'c'
/* 0x0680e2cb */ LDATA extern char public_680e2cb; // 'o'
/* 0x0680e2cc */ LDATA extern char public_680e2cc; // 'm'
/* 0x0680e2cd */ LDATA extern char public_680e2cd; // 'p'
/* 0x0680e2ce */ LDATA extern char public_680e2ce; // 'i'
/* 0x0680e2cf */ LDATA extern char public_680e2cf; // 'l'
/* 0x0680e2d0 */ LDATA extern char public_680e2d0; // 'e'
/* 0x0680e2d1 */ LDATA extern char public_680e2d1; // 'd'
/* 0x0680e2d2 */ LDATA extern char public_680e2d2; // ' '
/* 0x0680e2d3 */ LDATA extern char public_680e2d3; // 'c'
/* 0x0680e2d4 */ LDATA extern char public_680e2d4; // 'o'
/* 0x0680e2d5 */ LDATA extern char public_680e2d5; // 'd'
/* 0x0680e2d6 */ LDATA extern char public_680e2d6; // 'e'
/* 0x0680e2d7 */ LDATA extern char public_680e2d7;
/* 0x0680e2d8 */ LDATA extern char public_680e2d8; // 'u'
/* 0x0680e2d9 */ LDATA extern char public_680e2d9; // 's'
/* 0x0680e2da */ LDATA extern char public_680e2da; // 'e'
/* 0x0680e2db */ LDATA extern char public_680e2db; // 'r'
/* 0x0680e2dc */ LDATA extern char public_680e2dc; // 'd'
/* 0x0680e2dd */ LDATA extern char public_680e2dd; // 'a'
/* 0x0680e2de */ LDATA extern char public_680e2de; // 't'
/* 0x0680e2df */ LDATA extern char public_680e2df; // 'a'
/* 0x0680e2e0 */ LDATA extern char public_680e2e0; // ':'
/* 0x0680e2e1 */ LDATA extern char public_680e2e1; // ' '
/* 0x0680e2e2 */ LDATA extern char public_680e2e2; // '%'
/* 0x0680e2e3 */ LDATA extern char public_680e2e3; // 'p'
/* 0x0680e2e4 */ LDATA extern char public_680e2e4;
/* 0x0680e2e5 */ LDATA extern char public_680e2e5;
/* 0x0680e2e6 */ LDATA extern char public_680e2e6;
/* 0x0680e2e7 */ LDATA extern char public_680e2e7;
/* 0x0680e2e8 */ LDATA extern char public_680e2e8; // 'f'
/* 0x0680e2e9 */ LDATA extern char public_680e2e9; // 'u'
/* 0x0680e2ea */ LDATA extern char public_680e2ea; // 'n'
/* 0x0680e2eb */ LDATA extern char public_680e2eb; // 'c'
/* 0x0680e2ec */ LDATA extern char public_680e2ec; // 't'
/* 0x0680e2ed */ LDATA extern char public_680e2ed; // 'i'
/* 0x0680e2ee */ LDATA extern char public_680e2ee; // 'o'
/* 0x0680e2ef */ LDATA extern char public_680e2ef; // 'n'
/* 0x0680e2f0 */ LDATA extern char public_680e2f0; // ':'
/* 0x0680e2f1 */ LDATA extern char public_680e2f1; // ' '
/* 0x0680e2f2 */ LDATA extern char public_680e2f2; // '%'
/* 0x0680e2f3 */ LDATA extern char public_680e2f3; // 'p'
/* 0x0680e2f4 */ LDATA extern char public_680e2f4;
/* 0x0680e2f5 */ LDATA extern char public_680e2f5;
/* 0x0680e2f6 */ LDATA extern char public_680e2f6;
/* 0x0680e2f7 */ LDATA extern char public_680e2f7;
/* 0x0680e2f8 */ LDATA extern char public_680e2f8; // 't'
/* 0x0680e2f9 */ LDATA extern char public_680e2f9; // 'a'
/* 0x0680e2fa */ LDATA extern char public_680e2fa; // 'b'
/* 0x0680e2fb */ LDATA extern char public_680e2fb; // 'l'
/* 0x0680e2fc */ LDATA extern char public_680e2fc; // 'e'
/* 0x0680e2fd */ LDATA extern char public_680e2fd; // ':'
/* 0x0680e2fe */ LDATA extern char public_680e2fe; // ' '
/* 0x0680e2ff */ LDATA extern char public_680e2ff; // '%'
/* 0x0680e300 */ LDATA extern char public_680e300; // 'p'
/* 0x0680e301 */ LDATA extern char public_680e301;
/* 0x0680e302 */ LDATA extern char public_680e302;
/* 0x0680e303 */ LDATA extern char public_680e303;
/* 0x0680e304 */ LDATA extern char public_680e304; // 'a'
/* 0x0680e305 */ LDATA extern char public_680e305; // 's'
/* 0x0680e306 */ LDATA extern char public_680e306; // 's'
/* 0x0680e307 */ LDATA extern char public_680e307; // 'e'
/* 0x0680e308 */ LDATA extern char public_680e308; // 'r'
/* 0x0680e309 */ LDATA extern char public_680e309; // 't'
/* 0x0680e30a */ LDATA extern char public_680e30a; // 'i'
/* 0x0680e30b */ LDATA extern char public_680e30b; // 'o'
/* 0x0680e30c */ LDATA extern char public_680e30c; // 'n'
/* 0x0680e30d */ LDATA extern char public_680e30d; // ' '
/* 0x0680e30e */ LDATA extern char public_680e30e; // 'f'
/* 0x0680e30f */ LDATA extern char public_680e30f; // 'a'
/* 0x0680e310 */ LDATA extern char public_680e310; // 'i'
/* 0x0680e311 */ LDATA extern char public_680e311; // 'l'
/* 0x0680e312 */ LDATA extern char public_680e312; // 'e'
/* 0x0680e313 */ LDATA extern char public_680e313; // 'd'
/* 0x0680e314 */ LDATA extern char public_680e314; // '!'
/* 0x0680e315 */ LDATA extern char public_680e315; // ' '
/* 0x0680e316 */ LDATA extern char public_680e316; // ' '
/* 0x0680e317 */ LDATA extern char public_680e317; // '%'
/* 0x0680e318 */ LDATA extern char public_680e318; // '.'
/* 0x0680e319 */ LDATA extern char public_680e319; // '1'
/* 0x0680e31a */ LDATA extern char public_680e31a; // '0'
/* 0x0680e31b */ LDATA extern char public_680e31b; // '0'
/* 0x0680e31c */ LDATA extern char public_680e31c; // 's'
/* 0x0680e31d */ LDATA extern char public_680e31d;
/* 0x0680e31e */ LDATA extern char public_680e31e;
/* 0x0680e31f */ LDATA extern char public_680e31f;
/* 0x0680e320 */ LDATA extern char public_680e320; // 'i'
/* 0x0680e321 */ LDATA extern char public_680e321; // 'n'
/* 0x0680e322 */ LDATA extern char public_680e322; // 'v'
/* 0x0680e323 */ LDATA extern char public_680e323; // 'a'
/* 0x0680e324 */ LDATA extern char public_680e324; // 'l'
/* 0x0680e325 */ LDATA extern char public_680e325; // 'i'
/* 0x0680e326 */ LDATA extern char public_680e326; // 'd'
/* 0x0680e327 */ LDATA extern char public_680e327; // ' '
/* 0x0680e328 */ LDATA extern char public_680e328; // 'o'
/* 0x0680e329 */ LDATA extern char public_680e329; // 'r'
/* 0x0680e32a */ LDATA extern char public_680e32a; // 'd'
/* 0x0680e32b */ LDATA extern char public_680e32b; // 'e'
/* 0x0680e32c */ LDATA extern char public_680e32c; // 'r'
/* 0x0680e32d */ LDATA extern char public_680e32d; // ' '
/* 0x0680e32e */ LDATA extern char public_680e32e; // 'f'
/* 0x0680e32f */ LDATA extern char public_680e32f; // 'u'
/* 0x0680e330 */ LDATA extern char public_680e330; // 'n'
/* 0x0680e331 */ LDATA extern char public_680e331; // 'c'
/* 0x0680e332 */ LDATA extern char public_680e332; // 't'
/* 0x0680e333 */ LDATA extern char public_680e333; // 'i'
/* 0x0680e334 */ LDATA extern char public_680e334; // 'o'
/* 0x0680e335 */ LDATA extern char public_680e335; // 'n'
/* 0x0680e336 */ LDATA extern char public_680e336; // ' '
/* 0x0680e337 */ LDATA extern char public_680e337; // 'f'
/* 0x0680e338 */ LDATA extern char public_680e338; // 'o'
/* 0x0680e339 */ LDATA extern char public_680e339; // 'r'
/* 0x0680e33a */ LDATA extern char public_680e33a; // ' '
/* 0x0680e33b */ LDATA extern char public_680e33b; // 's'
/* 0x0680e33c */ LDATA extern char public_680e33c; // 'o'
/* 0x0680e33d */ LDATA extern char public_680e33d; // 'r'
/* 0x0680e33e */ LDATA extern char public_680e33e; // 't'
/* 0x0680e33f */ LDATA extern char public_680e33f; // 'i'
/* 0x0680e340 */ LDATA extern char public_680e340; // 'n'
/* 0x0680e341 */ LDATA extern char public_680e341; // 'g'
/* 0x0680e342 */ LDATA extern char public_680e342;
/* 0x0680e343 */ LDATA extern char public_680e343;
/* 0x0680e344 */ LDATA extern char public_680e344; // '_'
/* 0x0680e345 */ LDATA extern char public_680e345; // 'V'
/* 0x0680e346 */ LDATA extern char public_680e346; // 'E'
/* 0x0680e347 */ LDATA extern char public_680e347; // 'R'
/* 0x0680e348 */ LDATA extern char public_680e348; // 'S'
/* 0x0680e349 */ LDATA extern char public_680e349; // 'I'
/* 0x0680e34a */ LDATA extern char public_680e34a; // 'O'
/* 0x0680e34b */ LDATA extern char public_680e34b; // 'N'
/* 0x0680e34c */ LDATA extern char public_680e34c;
/* 0x0680e34d */ LDATA extern char public_680e34d;
/* 0x0680e34e */ LDATA extern char public_680e34e;
/* 0x0680e34f */ LDATA extern char public_680e34f;
/* 0x0680e350 */ LDATA extern char public_680e350; // 'L'
/* 0x0680e351 */ LDATA extern char public_680e351; // 'u'
/* 0x0680e352 */ LDATA extern char public_680e352; // 'a'
/* 0x0680e353 */ LDATA extern char public_680e353; // ' '
/* 0x0680e354 */ LDATA extern char public_680e354; // '3'
/* 0x0680e355 */ LDATA extern char public_680e355; // '.'
/* 0x0680e356 */ LDATA extern char public_680e356; // '2'
/* 0x0680e357 */ LDATA extern char public_680e357;
/* 0x0680e358 */ LDATA extern char public_680e358; // 't'
/* 0x0680e359 */ LDATA extern char public_680e359; // 'a'
/* 0x0680e35a */ LDATA extern char public_680e35a; // 'b'
/* 0x0680e35b */ LDATA extern char public_680e35b; // 'l'
/* 0x0680e35c */ LDATA extern char public_680e35c; // 'e'
/* 0x0680e35d */ LDATA extern char public_680e35d; // ' '
/* 0x0680e35e */ LDATA extern char public_680e35e; // 'o'
/* 0x0680e35f */ LDATA extern char public_680e35f; // 'v'
/* 0x0680e360 */ LDATA extern char public_680e360; // 'e'
/* 0x0680e361 */ LDATA extern char public_680e361; // 'r'
/* 0x0680e362 */ LDATA extern char public_680e362; // 'f'
/* 0x0680e363 */ LDATA extern char public_680e363; // 'l'
/* 0x0680e364 */ LDATA extern char public_680e364; // 'o'
/* 0x0680e365 */ LDATA extern char public_680e365; // 'w'
/* 0x0680e366 */ LDATA extern char public_680e366;
/* 0x0680e367 */ LDATA extern char public_680e367;
/* 0x0680e368 */ LDATA extern void const* public_680e368;
/* 0x0680e36c */ LDATA extern void const* public_680e36c;
/* 0x0680e370 */ LDATA extern void const* public_680e370;
/* 0x0680e374 */ LDATA extern void const* public_680e374;
/* 0x0680e378 */ LDATA extern void const* public_680e378;
/* 0x0680e37c */ LDATA extern void const* public_680e37c;
/* 0x0680e380 */ LDATA extern void const* public_680e380;
/* 0x0680e384 */ LDATA extern void const* public_680e384;
/* 0x0680e388 */ LDATA extern void const* public_680e388;
/* 0x0680e38c */ LDATA extern void const* public_680e38c;
/* 0x0680e390 */ LDATA extern void const* public_680e390;
/* 0x0680e394 */ LDATA extern void const* public_680e394;
/* 0x0680e398 */ LDATA extern void const* public_680e398;
/* 0x0680e39c */ LDATA extern void const* public_680e39c;
/* 0x0680e3a0 */ LDATA extern void const* public_680e3a0;
/* 0x0680e3a4 */ LDATA extern void const* public_680e3a4;
/* 0x0680e3a8 */ LDATA extern void const* public_680e3a8;
/* 0x0680e3ac */ LDATA extern void const* public_680e3ac;
/* 0x0680e3b0 */ LDATA extern char public_680e3b0;
/* 0x0680e3b1 */ LDATA extern char public_680e3b1;
/* 0x0680e3b2 */ LDATA extern char public_680e3b2;
/* 0x0680e3b3 */ LDATA extern char public_680e3b3;
/* 0x0680e3b4 */ LDATA extern void const* public_680e3b4;
/* 0x0680e3b8 */ LDATA extern void const* public_680e3b8;
/* 0x0680e3bc */ LDATA extern void const* public_680e3bc;
/* 0x0680e3c0 */ LDATA extern void const* public_680e3c0;
/* 0x0680e3c4 */ LDATA extern void const* public_680e3c4;
/* 0x0680e3c8 */ LDATA extern void const* public_680e3c8;
/* 0x0680e3cc */ LDATA extern void const* public_680e3cc;
/* 0x0680e3d0 */ LDATA extern char public_680e3d0;
/* 0x0680e3d1 */ LDATA extern char public_680e3d1;
/* 0x0680e3d2 */ LDATA extern char public_680e3d2;
/* 0x0680e3d3 */ LDATA extern char public_680e3d3;
/* 0x0680e3d4 */ LDATA extern char public_680e3d4; // 'i'
/* 0x0680e3d5 */ LDATA extern char public_680e3d5; // 'f'
/* 0x0680e3d6 */ LDATA extern char public_680e3d6; // 'n'
/* 0x0680e3d7 */ LDATA extern char public_680e3d7; // 'o'
/* 0x0680e3d8 */ LDATA extern char public_680e3d8; // 't'
/* 0x0680e3d9 */ LDATA extern char public_680e3d9;
/* 0x0680e3da */ LDATA extern char public_680e3da;
/* 0x0680e3db */ LDATA extern char public_680e3db;
/* 0x0680e3dc */ LDATA extern char public_680e3dc; // 'e'
/* 0x0680e3dd */ LDATA extern char public_680e3dd; // 'n'
/* 0x0680e3de */ LDATA extern char public_680e3de; // 'd'
/* 0x0680e3df */ LDATA extern char public_680e3df; // 'i'
/* 0x0680e3e0 */ LDATA extern char public_680e3e0; // 'n'
/* 0x0680e3e1 */ LDATA extern char public_680e3e1; // 'p'
/* 0x0680e3e2 */ LDATA extern char public_680e3e2; // 'u'
/* 0x0680e3e3 */ LDATA extern char public_680e3e3; // 't'
/* 0x0680e3e4 */ LDATA extern char public_680e3e4;
/* 0x0680e3e5 */ LDATA extern char public_680e3e5;
/* 0x0680e3e6 */ LDATA extern char public_680e3e6;
/* 0x0680e3e7 */ LDATA extern char public_680e3e7;
/* 0x0680e3e8 */ LDATA extern char public_680e3e8; // 'n'
/* 0x0680e3e9 */ LDATA extern char public_680e3e9; // 'o'
/* 0x0680e3ea */ LDATA extern char public_680e3ea; // 'd'
/* 0x0680e3eb */ LDATA extern char public_680e3eb; // 'e'
/* 0x0680e3ec */ LDATA extern char public_680e3ec; // 'b'
/* 0x0680e3ed */ LDATA extern char public_680e3ed; // 'u'
/* 0x0680e3ee */ LDATA extern char public_680e3ee; // 'g'
/* 0x0680e3ef */ LDATA extern char public_680e3ef;
/* 0x0680e3f0 */ LDATA extern char public_680e3f0; // 'd'
/* 0x0680e3f1 */ LDATA extern char public_680e3f1; // 'e'
/* 0x0680e3f2 */ LDATA extern char public_680e3f2; // 'b'
/* 0x0680e3f3 */ LDATA extern char public_680e3f3; // 'u'
/* 0x0680e3f4 */ LDATA extern char public_680e3f4; // 'g'
/* 0x0680e3f5 */ LDATA extern char public_680e3f5;
/* 0x0680e3f6 */ LDATA extern char public_680e3f6;
/* 0x0680e3f7 */ LDATA extern char public_680e3f7;
/* 0x0680e3f8 */ LDATA extern char public_680e3f8; // '1'
/* 0x0680e3f9 */ LDATA extern char public_680e3f9;
/* 0x0680e3fa */ LDATA extern char public_680e3fa;
/* 0x0680e3fb */ LDATA extern char public_680e3fb;
/* 0x0680e3fc */ LDATA extern char public_680e3fc; // 'w'
/* 0x0680e3fd */ LDATA extern char public_680e3fd; // 'h'
/* 0x0680e3fe */ LDATA extern char public_680e3fe; // 'i'
/* 0x0680e3ff */ LDATA extern char public_680e3ff; // 'l'
/* 0x0680e400 */ LDATA extern char public_680e400; // 'e'
/* 0x0680e401 */ LDATA extern char public_680e401;
/* 0x0680e402 */ LDATA extern char public_680e402;
/* 0x0680e403 */ LDATA extern char public_680e403;
/* 0x0680e404 */ LDATA extern char public_680e404; // 'u'
/* 0x0680e405 */ LDATA extern char public_680e405; // 'n'
/* 0x0680e406 */ LDATA extern char public_680e406; // 't'
/* 0x0680e407 */ LDATA extern char public_680e407; // 'i'
/* 0x0680e408 */ LDATA extern char public_680e408; // 'l'
/* 0x0680e409 */ LDATA extern char public_680e409;
/* 0x0680e40a */ LDATA extern char public_680e40a;
/* 0x0680e40b */ LDATA extern char public_680e40b;
/* 0x0680e40c */ LDATA extern char public_680e40c; // 't'
/* 0x0680e40d */ LDATA extern char public_680e40d; // 'h'
/* 0x0680e40e */ LDATA extern char public_680e40e; // 'e'
/* 0x0680e40f */ LDATA extern char public_680e40f; // 'n'
/* 0x0680e410 */ LDATA extern char public_680e410;
/* 0x0680e411 */ LDATA extern char public_680e411;
/* 0x0680e412 */ LDATA extern char public_680e412;
/* 0x0680e413 */ LDATA extern char public_680e413;
/* 0x0680e414 */ LDATA extern char public_680e414; // 'r'
/* 0x0680e415 */ LDATA extern char public_680e415; // 'e'
/* 0x0680e416 */ LDATA extern char public_680e416; // 't'
/* 0x0680e417 */ LDATA extern char public_680e417; // 'u'
/* 0x0680e418 */ LDATA extern char public_680e418; // 'r'
/* 0x0680e419 */ LDATA extern char public_680e419; // 'n'
/* 0x0680e41a */ LDATA extern char public_680e41a;
/* 0x0680e41b */ LDATA extern char public_680e41b;
/* 0x0680e41c */ LDATA extern char public_680e41c; // 'r'
/* 0x0680e41d */ LDATA extern char public_680e41d; // 'e'
/* 0x0680e41e */ LDATA extern char public_680e41e; // 'p'
/* 0x0680e41f */ LDATA extern char public_680e41f; // 'e'
/* 0x0680e420 */ LDATA extern char public_680e420; // 'a'
/* 0x0680e421 */ LDATA extern char public_680e421; // 't'
/* 0x0680e422 */ LDATA extern char public_680e422;
/* 0x0680e423 */ LDATA extern char public_680e423;
/* 0x0680e424 */ LDATA extern char public_680e424; // 'o'
/* 0x0680e425 */ LDATA extern char public_680e425; // 'r'
/* 0x0680e426 */ LDATA extern char public_680e426;
/* 0x0680e427 */ LDATA extern char public_680e427;
/* 0x0680e428 */ LDATA extern char public_680e428; // 'n'
/* 0x0680e429 */ LDATA extern char public_680e429; // 'o'
/* 0x0680e42a */ LDATA extern char public_680e42a; // 't'
/* 0x0680e42b */ LDATA extern char public_680e42b;
/* 0x0680e42c */ LDATA extern char public_680e42c; // 'l'
/* 0x0680e42d */ LDATA extern char public_680e42d; // 'o'
/* 0x0680e42e */ LDATA extern char public_680e42e; // 'c'
/* 0x0680e42f */ LDATA extern char public_680e42f; // 'a'
/* 0x0680e430 */ LDATA extern char public_680e430; // 'l'
/* 0x0680e431 */ LDATA extern char public_680e431;
/* 0x0680e432 */ LDATA extern char public_680e432;
/* 0x0680e433 */ LDATA extern char public_680e433;
/* 0x0680e434 */ LDATA extern char public_680e434; // 'i'
/* 0x0680e435 */ LDATA extern char public_680e435; // 'f'
/* 0x0680e436 */ LDATA extern char public_680e436;
/* 0x0680e437 */ LDATA extern char public_680e437;
/* 0x0680e438 */ LDATA extern char public_680e438; // 'e'
/* 0x0680e439 */ LDATA extern char public_680e439; // 'n'
/* 0x0680e43a */ LDATA extern char public_680e43a; // 'd'
/* 0x0680e43b */ LDATA extern char public_680e43b;
/* 0x0680e43c */ LDATA extern char public_680e43c; // 'e'
/* 0x0680e43d */ LDATA extern char public_680e43d; // 'l'
/* 0x0680e43e */ LDATA extern char public_680e43e; // 's'
/* 0x0680e43f */ LDATA extern char public_680e43f; // 'e'
/* 0x0680e440 */ LDATA extern char public_680e440; // 'i'
/* 0x0680e441 */ LDATA extern char public_680e441; // 'f'
/* 0x0680e442 */ LDATA extern char public_680e442;
/* 0x0680e443 */ LDATA extern char public_680e443;
/* 0x0680e444 */ LDATA extern char public_680e444; // 'e'
/* 0x0680e445 */ LDATA extern char public_680e445; // 'l'
/* 0x0680e446 */ LDATA extern char public_680e446; // 's'
/* 0x0680e447 */ LDATA extern char public_680e447; // 'e'
/* 0x0680e448 */ LDATA extern char public_680e448;
/* 0x0680e449 */ LDATA extern char public_680e449;
/* 0x0680e44a */ LDATA extern char public_680e44a;
/* 0x0680e44b */ LDATA extern char public_680e44b;
/* 0x0680e44c */ LDATA extern char public_680e44c; // 'd'
/* 0x0680e44d */ LDATA extern char public_680e44d; // 'o'
/* 0x0680e44e */ LDATA extern char public_680e44e;
/* 0x0680e44f */ LDATA extern char public_680e44f;
/* 0x0680e450 */ LDATA extern char public_680e450; // 'a'
/* 0x0680e451 */ LDATA extern char public_680e451; // 'n'
/* 0x0680e452 */ LDATA extern char public_680e452; // 'd'
/* 0x0680e453 */ LDATA extern char public_680e453;
/* 0x0680e454 */ LDATA extern char public_680e454; // '%'
/* 0x0680e455 */ LDATA extern char public_680e455; // '.'
/* 0x0680e456 */ LDATA extern char public_680e456; // '1'
/* 0x0680e457 */ LDATA extern char public_680e457; // '0'
/* 0x0680e458 */ LDATA extern char public_680e458; // '0'
/* 0x0680e459 */ LDATA extern char public_680e459; // 's'
/* 0x0680e45a */ LDATA extern char public_680e45a; // ';'
/* 0x0680e45b */ LDATA extern char public_680e45b;
/* 0x0680e45c */ LDATA extern char public_680e45c; // ' '
/* 0x0680e45d */ LDATA extern char public_680e45d; // ' '
/* 0x0680e45e */ LDATA extern char public_680e45e; // 'l'
/* 0x0680e45f */ LDATA extern char public_680e45f; // 'a'
/* 0x0680e460 */ LDATA extern char public_680e460; // 's'
/* 0x0680e461 */ LDATA extern char public_680e461; // 't'
/* 0x0680e462 */ LDATA extern char public_680e462; // ' '
/* 0x0680e463 */ LDATA extern char public_680e463; // 't'
/* 0x0680e464 */ LDATA extern char public_680e464; // 'o'
/* 0x0680e465 */ LDATA extern char public_680e465; // 'k'
/* 0x0680e466 */ LDATA extern char public_680e466; // 'e'
/* 0x0680e467 */ LDATA extern char public_680e467; // 'n'
/* 0x0680e468 */ LDATA extern char public_680e468; // ' '
/* 0x0680e469 */ LDATA extern char public_680e469; // 'r'
/* 0x0680e46a */ LDATA extern char public_680e46a; // 'e'
/* 0x0680e46b */ LDATA extern char public_680e46b; // 'a'
/* 0x0680e46c */ LDATA extern char public_680e46c; // 'd'
/* 0x0680e46d */ LDATA extern char public_680e46d; // ':'
/* 0x0680e46e */ LDATA extern char public_680e46e; // ' '
/* 0x0680e46f */ LDATA extern char public_680e46f; // '`'
/* 0x0680e470 */ LDATA extern char public_680e470; // '%'
/* 0x0680e471 */ LDATA extern char public_680e471; // '.'
/* 0x0680e472 */ LDATA extern char public_680e472; // '5'
/* 0x0680e473 */ LDATA extern char public_680e473; // '0'
/* 0x0680e474 */ LDATA extern char public_680e474; // 's'
/* 0x0680e475 */ LDATA extern char public_680e475; // '''
/* 0x0680e476 */ LDATA extern char public_680e476; // ' '
/* 0x0680e477 */ LDATA extern char public_680e477; // 'a'
/* 0x0680e478 */ LDATA extern char public_680e478; // 't'
/* 0x0680e479 */ LDATA extern char public_680e479; // ' '
/* 0x0680e47a */ LDATA extern char public_680e47a; // 'l'
/* 0x0680e47b */ LDATA extern char public_680e47b; // 'i'
/* 0x0680e47c */ LDATA extern char public_680e47c; // 'n'
/* 0x0680e47d */ LDATA extern char public_680e47d; // 'e'
/* 0x0680e47e */ LDATA extern char public_680e47e; // ' '
/* 0x0680e47f */ LDATA extern char public_680e47f; // '%'
/* 0x0680e480 */ LDATA extern char public_680e480; // 'd'
/* 0x0680e481 */ LDATA extern char public_680e481; // ' '
/* 0x0680e482 */ LDATA extern char public_680e482; // 'i'
/* 0x0680e483 */ LDATA extern char public_680e483; // 'n'
/* 0x0680e484 */ LDATA extern char public_680e484; // ' '
/* 0x0680e485 */ LDATA extern char public_680e485; // '%'
/* 0x0680e486 */ LDATA extern char public_680e486; // '.'
/* 0x0680e487 */ LDATA extern char public_680e487; // '8'
/* 0x0680e488 */ LDATA extern char public_680e488; // '0'
/* 0x0680e489 */ LDATA extern char public_680e489; // 's'
/* 0x0680e48a */ LDATA extern char public_680e48a;
/* 0x0680e48b */ LDATA extern char public_680e48b;
/* 0x0680e48c */ LDATA extern char public_680e48c; // '<'
/* 0x0680e48d */ LDATA extern char public_680e48d; // 'e'
/* 0x0680e48e */ LDATA extern char public_680e48e; // 'o'
/* 0x0680e48f */ LDATA extern char public_680e48f; // 'f'
/* 0x0680e490 */ LDATA extern char public_680e490; // '>'
/* 0x0680e491 */ LDATA extern char public_680e491;
/* 0x0680e492 */ LDATA extern char public_680e492;
/* 0x0680e493 */ LDATA extern char public_680e493;
/* 0x0680e494 */ LDATA extern char public_680e494; // 'i'
/* 0x0680e495 */ LDATA extern char public_680e495; // 'n'
/* 0x0680e496 */ LDATA extern char public_680e496; // 'p'
/* 0x0680e497 */ LDATA extern char public_680e497; // 'u'
/* 0x0680e498 */ LDATA extern char public_680e498; // 't'
/* 0x0680e499 */ LDATA extern char public_680e499; // ' '
/* 0x0680e49a */ LDATA extern char public_680e49a; // 'e'
/* 0x0680e49b */ LDATA extern char public_680e49b; // 'n'
/* 0x0680e49c */ LDATA extern char public_680e49c; // 'd'
/* 0x0680e49d */ LDATA extern char public_680e49d; // 's'
/* 0x0680e49e */ LDATA extern char public_680e49e; // ' '
/* 0x0680e49f */ LDATA extern char public_680e49f; // 'i'
/* 0x0680e4a0 */ LDATA extern char public_680e4a0; // 'n'
/* 0x0680e4a1 */ LDATA extern char public_680e4a1; // 's'
/* 0x0680e4a2 */ LDATA extern char public_680e4a2; // 'i'
/* 0x0680e4a3 */ LDATA extern char public_680e4a3; // 'd'
/* 0x0680e4a4 */ LDATA extern char public_680e4a4; // 'e'
/* 0x0680e4a5 */ LDATA extern char public_680e4a5; // ' '
/* 0x0680e4a6 */ LDATA extern char public_680e4a6; // 'a'
/* 0x0680e4a7 */ LDATA extern char public_680e4a7; // ' '
/* 0x0680e4a8 */ LDATA extern char public_680e4a8; // '$'
/* 0x0680e4a9 */ LDATA extern char public_680e4a9; // 'i'
/* 0x0680e4aa */ LDATA extern char public_680e4aa; // 'f'
/* 0x0680e4ab */ LDATA extern char public_680e4ab;
/* 0x0680e4ac */ LDATA extern char public_680e4ac; // 'i'
/* 0x0680e4ad */ LDATA extern char public_680e4ad; // 'n'
/* 0x0680e4ae */ LDATA extern char public_680e4ae; // 'v'
/* 0x0680e4af */ LDATA extern char public_680e4af; // 'a'
/* 0x0680e4b0 */ LDATA extern char public_680e4b0; // 'l'
/* 0x0680e4b1 */ LDATA extern char public_680e4b1; // 'i'
/* 0x0680e4b2 */ LDATA extern char public_680e4b2; // 'd'
/* 0x0680e4b3 */ LDATA extern char public_680e4b3; // ' '
/* 0x0680e4b4 */ LDATA extern char public_680e4b4; // 'n'
/* 0x0680e4b5 */ LDATA extern char public_680e4b5; // 'u'
/* 0x0680e4b6 */ LDATA extern char public_680e4b6; // 'm'
/* 0x0680e4b7 */ LDATA extern char public_680e4b7; // 'e'
/* 0x0680e4b8 */ LDATA extern char public_680e4b8; // 'r'
/* 0x0680e4b9 */ LDATA extern char public_680e4b9; // 'i'
/* 0x0680e4ba */ LDATA extern char public_680e4ba; // 'c'
/* 0x0680e4bb */ LDATA extern char public_680e4bb; // ' '
/* 0x0680e4bc */ LDATA extern char public_680e4bc; // 'f'
/* 0x0680e4bd */ LDATA extern char public_680e4bd; // 'o'
/* 0x0680e4be */ LDATA extern char public_680e4be; // 'r'
/* 0x0680e4bf */ LDATA extern char public_680e4bf; // 'm'
/* 0x0680e4c0 */ LDATA extern char public_680e4c0; // 'a'
/* 0x0680e4c1 */ LDATA extern char public_680e4c1; // 't'
/* 0x0680e4c2 */ LDATA extern char public_680e4c2;
/* 0x0680e4c3 */ LDATA extern char public_680e4c3;
/* 0x0680e4c4 */ LDATA extern char public_680e4c4; // 'a'
/* 0x0680e4c5 */ LDATA extern char public_680e4c5; // 'm'
/* 0x0680e4c6 */ LDATA extern char public_680e4c6; // 'b'
/* 0x0680e4c7 */ LDATA extern char public_680e4c7; // 'i'
/* 0x0680e4c8 */ LDATA extern char public_680e4c8; // 'g'
/* 0x0680e4c9 */ LDATA extern char public_680e4c9; // 'u'
/* 0x0680e4ca */ LDATA extern char public_680e4ca; // 'o'
/* 0x0680e4cb */ LDATA extern char public_680e4cb; // 'u'
/* 0x0680e4cc */ LDATA extern char public_680e4cc; // 's'
/* 0x0680e4cd */ LDATA extern char public_680e4cd; // ' '
/* 0x0680e4ce */ LDATA extern char public_680e4ce; // 's'
/* 0x0680e4cf */ LDATA extern char public_680e4cf; // 'y'
/* 0x0680e4d0 */ LDATA extern char public_680e4d0; // 'n'
/* 0x0680e4d1 */ LDATA extern char public_680e4d1; // 't'
/* 0x0680e4d2 */ LDATA extern char public_680e4d2; // 'a'
/* 0x0680e4d3 */ LDATA extern char public_680e4d3; // 'x'
/* 0x0680e4d4 */ LDATA extern char public_680e4d4; // ' '
/* 0x0680e4d5 */ LDATA extern char public_680e4d5; // '('
/* 0x0680e4d6 */ LDATA extern char public_680e4d6; // 'd'
/* 0x0680e4d7 */ LDATA extern char public_680e4d7; // 'e'
/* 0x0680e4d8 */ LDATA extern char public_680e4d8; // 'c'
/* 0x0680e4d9 */ LDATA extern char public_680e4d9; // 'i'
/* 0x0680e4da */ LDATA extern char public_680e4da; // 'm'
/* 0x0680e4db */ LDATA extern char public_680e4db; // 'a'
/* 0x0680e4dc */ LDATA extern char public_680e4dc; // 'l'
/* 0x0680e4dd */ LDATA extern char public_680e4dd; // ' '
/* 0x0680e4de */ LDATA extern char public_680e4de; // 'p'
/* 0x0680e4df */ LDATA extern char public_680e4df; // 'o'
/* 0x0680e4e0 */ LDATA extern char public_680e4e0; // 'i'
/* 0x0680e4e1 */ LDATA extern char public_680e4e1; // 'n'
/* 0x0680e4e2 */ LDATA extern char public_680e4e2; // 't'
/* 0x0680e4e3 */ LDATA extern char public_680e4e3; // ' '
/* 0x0680e4e4 */ LDATA extern char public_680e4e4; // 'x'
/* 0x0680e4e5 */ LDATA extern char public_680e4e5; // ' '
/* 0x0680e4e6 */ LDATA extern char public_680e4e6; // 's'
/* 0x0680e4e7 */ LDATA extern char public_680e4e7; // 't'
/* 0x0680e4e8 */ LDATA extern char public_680e4e8; // 'r'
/* 0x0680e4e9 */ LDATA extern char public_680e4e9; // 'i'
/* 0x0680e4ea */ LDATA extern char public_680e4ea; // 'n'
/* 0x0680e4eb */ LDATA extern char public_680e4eb; // 'g'
/* 0x0680e4ec */ LDATA extern char public_680e4ec; // ' '
/* 0x0680e4ed */ LDATA extern char public_680e4ed; // 'c'
/* 0x0680e4ee */ LDATA extern char public_680e4ee; // 'o'
/* 0x0680e4ef */ LDATA extern char public_680e4ef; // 'n'
/* 0x0680e4f0 */ LDATA extern char public_680e4f0; // 'c'
/* 0x0680e4f1 */ LDATA extern char public_680e4f1; // 'a'
/* 0x0680e4f2 */ LDATA extern char public_680e4f2; // 't'
/* 0x0680e4f3 */ LDATA extern char public_680e4f3; // 'e'
/* 0x0680e4f4 */ LDATA extern char public_680e4f4; // 'n'
/* 0x0680e4f5 */ LDATA extern char public_680e4f5; // 'a'
/* 0x0680e4f6 */ LDATA extern char public_680e4f6; // 't'
/* 0x0680e4f7 */ LDATA extern char public_680e4f7; // 'i'
/* 0x0680e4f8 */ LDATA extern char public_680e4f8; // 'o'
/* 0x0680e4f9 */ LDATA extern char public_680e4f9; // 'n'
/* 0x0680e4fa */ LDATA extern char public_680e4fa; // ')'
/* 0x0680e4fb */ LDATA extern char public_680e4fb;
/* 0x0680e4fc */ LDATA extern char public_680e4fc; // 'u'
/* 0x0680e4fd */ LDATA extern char public_680e4fd; // 'n'
/* 0x0680e4fe */ LDATA extern char public_680e4fe; // 'f'
/* 0x0680e4ff */ LDATA extern char public_680e4ff; // 'i'
/* 0x0680e500 */ LDATA extern char public_680e500; // 'n'
/* 0x0680e501 */ LDATA extern char public_680e501; // 'i'
/* 0x0680e502 */ LDATA extern char public_680e502; // 's'
/* 0x0680e503 */ LDATA extern char public_680e503; // 'h'
/* 0x0680e504 */ LDATA extern char public_680e504; // 'e'
/* 0x0680e505 */ LDATA extern char public_680e505; // 'd'
/* 0x0680e506 */ LDATA extern char public_680e506; // ' '
/* 0x0680e507 */ LDATA extern char public_680e507; // 's'
/* 0x0680e508 */ LDATA extern char public_680e508; // 't'
/* 0x0680e509 */ LDATA extern char public_680e509; // 'r'
/* 0x0680e50a */ LDATA extern char public_680e50a; // 'i'
/* 0x0680e50b */ LDATA extern char public_680e50b; // 'n'
/* 0x0680e50c */ LDATA extern char public_680e50c; // 'g'
/* 0x0680e50d */ LDATA extern char public_680e50d;
/* 0x0680e50e */ LDATA extern char public_680e50e;
/* 0x0680e50f */ LDATA extern char public_680e50f;
/* 0x0680e510 */ LDATA extern char public_680e510; // 'e'
/* 0x0680e511 */ LDATA extern char public_680e511; // 's'
/* 0x0680e512 */ LDATA extern char public_680e512; // 'c'
/* 0x0680e513 */ LDATA extern char public_680e513; // 'a'
/* 0x0680e514 */ LDATA extern char public_680e514; // 'p'
/* 0x0680e515 */ LDATA extern char public_680e515; // 'e'
/* 0x0680e516 */ LDATA extern char public_680e516; // ' '
/* 0x0680e517 */ LDATA extern char public_680e517; // 's'
/* 0x0680e518 */ LDATA extern char public_680e518; // 'e'
/* 0x0680e519 */ LDATA extern char public_680e519; // 'q'
/* 0x0680e51a */ LDATA extern char public_680e51a; // 'u'
/* 0x0680e51b */ LDATA extern char public_680e51b; // 'e'
/* 0x0680e51c */ LDATA extern char public_680e51c; // 'n'
/* 0x0680e51d */ LDATA extern char public_680e51d; // 'c'
/* 0x0680e51e */ LDATA extern char public_680e51e; // 'e'
/* 0x0680e51f */ LDATA extern char public_680e51f; // ' '
/* 0x0680e520 */ LDATA extern char public_680e520; // 't'
/* 0x0680e521 */ LDATA extern char public_680e521; // 'o'
/* 0x0680e522 */ LDATA extern char public_680e522; // 'o'
/* 0x0680e523 */ LDATA extern char public_680e523; // ' '
/* 0x0680e524 */ LDATA extern char public_680e524; // 'l'
/* 0x0680e525 */ LDATA extern char public_680e525; // 'a'
/* 0x0680e526 */ LDATA extern char public_680e526; // 'r'
/* 0x0680e527 */ LDATA extern char public_680e527; // 'g'
/* 0x0680e528 */ LDATA extern char public_680e528; // 'e'
/* 0x0680e529 */ LDATA extern char public_680e529;
/* 0x0680e52a */ LDATA extern char public_680e52a;
/* 0x0680e52b */ LDATA extern char public_680e52b;
/* 0x0680e52c */ LDATA extern char public_680e52c; // 'i'
/* 0x0680e52d */ LDATA extern char public_680e52d; // 'n'
/* 0x0680e52e */ LDATA extern char public_680e52e; // 'v'
/* 0x0680e52f */ LDATA extern char public_680e52f; // 'a'
/* 0x0680e530 */ LDATA extern char public_680e530; // 'l'
/* 0x0680e531 */ LDATA extern char public_680e531; // 'i'
/* 0x0680e532 */ LDATA extern char public_680e532; // 'd'
/* 0x0680e533 */ LDATA extern char public_680e533; // ' '
/* 0x0680e534 */ LDATA extern char public_680e534; // 'c'
/* 0x0680e535 */ LDATA extern char public_680e535; // 'o'
/* 0x0680e536 */ LDATA extern char public_680e536; // 'n'
/* 0x0680e537 */ LDATA extern char public_680e537; // 't'
/* 0x0680e538 */ LDATA extern char public_680e538; // 'r'
/* 0x0680e539 */ LDATA extern char public_680e539; // 'o'
/* 0x0680e53a */ LDATA extern char public_680e53a; // 'l'
/* 0x0680e53b */ LDATA extern char public_680e53b; // ' '
/* 0x0680e53c */ LDATA extern char public_680e53c; // 'c'
/* 0x0680e53d */ LDATA extern char public_680e53d; // 'h'
/* 0x0680e53e */ LDATA extern char public_680e53e; // 'a'
/* 0x0680e53f */ LDATA extern char public_680e53f; // 'r'
/* 0x0680e540 */ LDATA extern char public_680e540;
/* 0x0680e541 */ LDATA extern char public_680e541;
/* 0x0680e542 */ LDATA extern char public_680e542;
/* 0x0680e543 */ LDATA extern char public_680e543;
/* 0x0680e544 */ LDATA extern char public_680e544; // '0'
/* 0x0680e545 */ LDATA extern char public_680e545; // 'x'
/* 0x0680e546 */ LDATA extern char public_680e546; // '%'
/* 0x0680e547 */ LDATA extern char public_680e547; // '0'
/* 0x0680e548 */ LDATA extern char public_680e548; // '2'
/* 0x0680e549 */ LDATA extern char public_680e549; // 'X'
/* 0x0680e54a */ LDATA extern char public_680e54a;
/* 0x0680e54b */ LDATA extern char public_680e54b;
/* 0x0680e54c */ LDATA extern char public_680e54c; // 'i'
/* 0x0680e54d */ LDATA extern char public_680e54d; // 'n'
/* 0x0680e54e */ LDATA extern char public_680e54e; // 'v'
/* 0x0680e54f */ LDATA extern char public_680e54f; // 'a'
/* 0x0680e550 */ LDATA extern char public_680e550; // 'l'
/* 0x0680e551 */ LDATA extern char public_680e551; // 'i'
/* 0x0680e552 */ LDATA extern char public_680e552; // 'd'
/* 0x0680e553 */ LDATA extern char public_680e553; // ' '
/* 0x0680e554 */ LDATA extern char public_680e554; // 'p'
/* 0x0680e555 */ LDATA extern char public_680e555; // 'r'
/* 0x0680e556 */ LDATA extern char public_680e556; // 'a'
/* 0x0680e557 */ LDATA extern char public_680e557; // 'g'
/* 0x0680e558 */ LDATA extern char public_680e558; // 'm'
/* 0x0680e559 */ LDATA extern char public_680e559; // 'a'
/* 0x0680e55a */ LDATA extern char public_680e55a; // ' '
/* 0x0680e55b */ LDATA extern char public_680e55b; // 'f'
/* 0x0680e55c */ LDATA extern char public_680e55c; // 'o'
/* 0x0680e55d */ LDATA extern char public_680e55d; // 'r'
/* 0x0680e55e */ LDATA extern char public_680e55e; // 'm'
/* 0x0680e55f */ LDATA extern char public_680e55f; // 'a'
/* 0x0680e560 */ LDATA extern char public_680e560; // 't'
/* 0x0680e561 */ LDATA extern char public_680e561;
/* 0x0680e562 */ LDATA extern char public_680e562;
/* 0x0680e563 */ LDATA extern char public_680e563;
/* 0x0680e564 */ LDATA extern char public_680e564; // 'u'
/* 0x0680e565 */ LDATA extern char public_680e565; // 'n'
/* 0x0680e566 */ LDATA extern char public_680e566; // 'k'
/* 0x0680e567 */ LDATA extern char public_680e567; // 'n'
/* 0x0680e568 */ LDATA extern char public_680e568; // 'o'
/* 0x0680e569 */ LDATA extern char public_680e569; // 'w'
/* 0x0680e56a */ LDATA extern char public_680e56a; // 'n'
/* 0x0680e56b */ LDATA extern char public_680e56b; // ' '
/* 0x0680e56c */ LDATA extern char public_680e56c; // 'p'
/* 0x0680e56d */ LDATA extern char public_680e56d; // 'r'
/* 0x0680e56e */ LDATA extern char public_680e56e; // 'a'
/* 0x0680e56f */ LDATA extern char public_680e56f; // 'g'
/* 0x0680e570 */ LDATA extern char public_680e570; // 'm'
/* 0x0680e571 */ LDATA extern char public_680e571; // 'a'
/* 0x0680e572 */ LDATA extern char public_680e572;
/* 0x0680e573 */ LDATA extern char public_680e573;
/* 0x0680e574 */ LDATA extern char public_680e574; // 'u'
/* 0x0680e575 */ LDATA extern char public_680e575; // 'n'
/* 0x0680e576 */ LDATA extern char public_680e576; // 'm'
/* 0x0680e577 */ LDATA extern char public_680e577; // 'a'
/* 0x0680e578 */ LDATA extern char public_680e578; // 't'
/* 0x0680e579 */ LDATA extern char public_680e579; // 'c'
/* 0x0680e57a */ LDATA extern char public_680e57a; // 'h'
/* 0x0680e57b */ LDATA extern char public_680e57b; // 'e'
/* 0x0680e57c */ LDATA extern char public_680e57c; // 'd'
/* 0x0680e57d */ LDATA extern char public_680e57d; // ' '
/* 0x0680e57e */ LDATA extern char public_680e57e; // '$'
/* 0x0680e57f */ LDATA extern char public_680e57f; // 'e'
/* 0x0680e580 */ LDATA extern char public_680e580; // 'l'
/* 0x0680e581 */ LDATA extern char public_680e581; // 's'
/* 0x0680e582 */ LDATA extern char public_680e582; // 'e'
/* 0x0680e583 */ LDATA extern char public_680e583;
/* 0x0680e584 */ LDATA extern char public_680e584; // '$'
/* 0x0680e585 */ LDATA extern char public_680e585; // 'e'
/* 0x0680e586 */ LDATA extern char public_680e586; // 'l'
/* 0x0680e587 */ LDATA extern char public_680e587; // 's'
/* 0x0680e588 */ LDATA extern char public_680e588; // 'e'
/* 0x0680e589 */ LDATA extern char public_680e589;
/* 0x0680e58a */ LDATA extern char public_680e58a;
/* 0x0680e58b */ LDATA extern char public_680e58b;
/* 0x0680e58c */ LDATA extern char public_680e58c; // 't'
/* 0x0680e58d */ LDATA extern char public_680e58d; // 'o'
/* 0x0680e58e */ LDATA extern char public_680e58e; // 'o'
/* 0x0680e58f */ LDATA extern char public_680e58f; // ' '
/* 0x0680e590 */ LDATA extern char public_680e590; // 'm'
/* 0x0680e591 */ LDATA extern char public_680e591; // 'a'
/* 0x0680e592 */ LDATA extern char public_680e592; // 'n'
/* 0x0680e593 */ LDATA extern char public_680e593; // 'y'
/* 0x0680e594 */ LDATA extern char public_680e594; // ' '
/* 0x0680e595 */ LDATA extern char public_680e595; // 'n'
/* 0x0680e596 */ LDATA extern char public_680e596; // 'e'
/* 0x0680e597 */ LDATA extern char public_680e597; // 's'
/* 0x0680e598 */ LDATA extern char public_680e598; // 't'
/* 0x0680e599 */ LDATA extern char public_680e599; // 'e'
/* 0x0680e59a */ LDATA extern char public_680e59a; // 'd'
/* 0x0680e59b */ LDATA extern char public_680e59b; // ' '
/* 0x0680e59c */ LDATA extern char public_680e59c; // '$'
/* 0x0680e59d */ LDATA extern char public_680e59d; // 'i'
/* 0x0680e59e */ LDATA extern char public_680e59e; // 'f'
/* 0x0680e59f */ LDATA extern char public_680e59f; // 's'
/* 0x0680e5a0 */ LDATA extern char public_680e5a0;
/* 0x0680e5a1 */ LDATA extern char public_680e5a1;
/* 0x0680e5a2 */ LDATA extern char public_680e5a2;
/* 0x0680e5a3 */ LDATA extern char public_680e5a3;
/* 0x0680e5a4 */ LDATA extern char public_680e5a4; // '$'
/* 0x0680e5a5 */ LDATA extern char public_680e5a5; // 'i'
/* 0x0680e5a6 */ LDATA extern char public_680e5a6; // 'f'
/* 0x0680e5a7 */ LDATA extern char public_680e5a7;
/* 0x0680e5a8 */ LDATA extern char public_680e5a8; // 'u'
/* 0x0680e5a9 */ LDATA extern char public_680e5a9; // 'n'
/* 0x0680e5aa */ LDATA extern char public_680e5aa; // 'm'
/* 0x0680e5ab */ LDATA extern char public_680e5ab; // 'a'
/* 0x0680e5ac */ LDATA extern char public_680e5ac; // 't'
/* 0x0680e5ad */ LDATA extern char public_680e5ad; // 'c'
/* 0x0680e5ae */ LDATA extern char public_680e5ae; // 'h'
/* 0x0680e5af */ LDATA extern char public_680e5af; // 'e'
/* 0x0680e5b0 */ LDATA extern char public_680e5b0; // 'd'
/* 0x0680e5b1 */ LDATA extern char public_680e5b1; // ' '
/* 0x0680e5b2 */ LDATA extern char public_680e5b2; // '$'
/* 0x0680e5b3 */ LDATA extern char public_680e5b3; // 'e'
/* 0x0680e5b4 */ LDATA extern char public_680e5b4; // 'n'
/* 0x0680e5b5 */ LDATA extern char public_680e5b5; // 'd'
/* 0x0680e5b6 */ LDATA extern char public_680e5b6;
/* 0x0680e5b7 */ LDATA extern char public_680e5b7;
/* 0x0680e5b8 */ LDATA extern char public_680e5b8; // '$'
/* 0x0680e5b9 */ LDATA extern char public_680e5b9; // 'e'
/* 0x0680e5ba */ LDATA extern char public_680e5ba; // 'n'
/* 0x0680e5bb */ LDATA extern char public_680e5bb; // 'd'
/* 0x0680e5bc */ LDATA extern char public_680e5bc;
/* 0x0680e5bd */ LDATA extern char public_680e5bd;
/* 0x0680e5be */ LDATA extern char public_680e5be;
/* 0x0680e5bf */ LDATA extern char public_680e5bf;
/* 0x0680e5c0 */ LDATA extern char public_680e5c0; // 'i'
/* 0x0680e5c1 */ LDATA extern char public_680e5c1; // 'n'
/* 0x0680e5c2 */ LDATA extern char public_680e5c2; // 'v'
/* 0x0680e5c3 */ LDATA extern char public_680e5c3; // 'a'
/* 0x0680e5c4 */ LDATA extern char public_680e5c4; // 'l'
/* 0x0680e5c5 */ LDATA extern char public_680e5c5; // 'i'
/* 0x0680e5c6 */ LDATA extern char public_680e5c6; // 'd'
/* 0x0680e5c7 */ LDATA extern char public_680e5c7; // ' '
/* 0x0680e5c8 */ LDATA extern char public_680e5c8; // '$'
/* 0x0680e5c9 */ LDATA extern char public_680e5c9; // 'i'
/* 0x0680e5ca */ LDATA extern char public_680e5ca; // 'f'
/* 0x0680e5cb */ LDATA extern char public_680e5cb; // ' '
/* 0x0680e5cc */ LDATA extern char public_680e5cc; // 'c'
/* 0x0680e5cd */ LDATA extern char public_680e5cd; // 'o'
/* 0x0680e5ce */ LDATA extern char public_680e5ce; // 'n'
/* 0x0680e5cf */ LDATA extern char public_680e5cf; // 'd'
/* 0x0680e5d0 */ LDATA extern char public_680e5d0; // 'i'
/* 0x0680e5d1 */ LDATA extern char public_680e5d1; // 't'
/* 0x0680e5d2 */ LDATA extern char public_680e5d2; // 'i'
/* 0x0680e5d3 */ LDATA extern char public_680e5d3; // 'o'
/* 0x0680e5d4 */ LDATA extern char public_680e5d4; // 'n'
/* 0x0680e5d5 */ LDATA extern char public_680e5d5;
/* 0x0680e5d6 */ LDATA extern char public_680e5d6;
/* 0x0680e5d7 */ LDATA extern char public_680e5d7;
/* 0x0680e5d8 */ LDATA extern char public_680e5d8; // 'p'
/* 0x0680e5d9 */ LDATA extern char public_680e5d9; // 'r'
/* 0x0680e5da */ LDATA extern char public_680e5da; // 'a'
/* 0x0680e5db */ LDATA extern char public_680e5db; // 'g'
/* 0x0680e5dc */ LDATA extern char public_680e5dc; // 'm'
/* 0x0680e5dd */ LDATA extern char public_680e5dd; // 'a'
/* 0x0680e5de */ LDATA extern char public_680e5de; // ' '
/* 0x0680e5df */ LDATA extern char public_680e5df; // 't'
/* 0x0680e5e0 */ LDATA extern char public_680e5e0; // 'o'
/* 0x0680e5e1 */ LDATA extern char public_680e5e1; // 'o'
/* 0x0680e5e2 */ LDATA extern char public_680e5e2; // ' '
/* 0x0680e5e3 */ LDATA extern char public_680e5e3; // 'l'
/* 0x0680e5e4 */ LDATA extern char public_680e5e4; // 'o'
/* 0x0680e5e5 */ LDATA extern char public_680e5e5; // 'n'
/* 0x0680e5e6 */ LDATA extern char public_680e5e6; // 'g'
/* 0x0680e5e7 */ LDATA extern char public_680e5e7;
/* 0x0680e5e8 */ LDATA extern char public_680e5e8; // 'u'
/* 0x0680e5e9 */ LDATA extern char public_680e5e9; // 'n'
/* 0x0680e5ea */ LDATA extern char public_680e5ea; // 'f'
/* 0x0680e5eb */ LDATA extern char public_680e5eb; // 'i'
/* 0x0680e5ec */ LDATA extern char public_680e5ec; // 'n'
/* 0x0680e5ed */ LDATA extern char public_680e5ed; // 'i'
/* 0x0680e5ee */ LDATA extern char public_680e5ee; // 's'
/* 0x0680e5ef */ LDATA extern char public_680e5ef; // 'h'
/* 0x0680e5f0 */ LDATA extern char public_680e5f0; // 'e'
/* 0x0680e5f1 */ LDATA extern char public_680e5f1; // 'd'
/* 0x0680e5f2 */ LDATA extern char public_680e5f2; // ' '
/* 0x0680e5f3 */ LDATA extern char public_680e5f3; // 'l'
/* 0x0680e5f4 */ LDATA extern char public_680e5f4; // 'o'
/* 0x0680e5f5 */ LDATA extern char public_680e5f5; // 'n'
/* 0x0680e5f6 */ LDATA extern char public_680e5f6; // 'g'
/* 0x0680e5f7 */ LDATA extern char public_680e5f7; // ' '
/* 0x0680e5f8 */ LDATA extern char public_680e5f8; // 's'
/* 0x0680e5f9 */ LDATA extern char public_680e5f9; // 't'
/* 0x0680e5fa */ LDATA extern char public_680e5fa; // 'r'
/* 0x0680e5fb */ LDATA extern char public_680e5fb; // 'i'
/* 0x0680e5fc */ LDATA extern char public_680e5fc; // 'n'
/* 0x0680e5fd */ LDATA extern char public_680e5fd; // 'g'
/* 0x0680e5fe */ LDATA extern char public_680e5fe;
/* 0x0680e5ff */ LDATA extern char public_680e5ff;
/* 0x0680e600 */ LDATA extern char public_680e600;
/* 0x0680e601 */ LDATA extern char public_680e601;
/* 0x0680e602 */ LDATA extern char public_680e602;
/* 0x0680e603 */ LDATA extern char public_680e603;
/* 0x0680e604 */ LDATA extern char public_680e604;
/* 0x0680e605 */ LDATA extern char public_680e605;
/* 0x0680e606 */ LDATA extern char public_680e606;
/* 0x0680e607 */ LDATA extern char public_680e607;
/* 0x0680e608 */ LDATA extern char public_680e608;
/* 0x0680e609 */ LDATA extern char public_680e609;
/* 0x0680e60a */ LDATA extern char public_680e60a;
/* 0x0680e60b */ LDATA extern char public_680e60b;
/* 0x0680e60c */ LDATA extern char public_680e60c;
/* 0x0680e60d */ LDATA extern char public_680e60d;
/* 0x0680e60e */ LDATA extern char public_680e60e;
/* 0x0680e60f */ LDATA extern char public_680e60f;
/* 0x0680e610 */ LDATA extern char public_680e610;
/* 0x0680e611 */ LDATA extern char public_680e611;
/* 0x0680e612 */ LDATA extern char public_680e612;
/* 0x0680e613 */ LDATA extern char public_680e613;
/* 0x0680e614 */ LDATA extern char public_680e614;
/* 0x0680e615 */ LDATA extern char public_680e615;
/* 0x0680e616 */ LDATA extern char public_680e616;
/* 0x0680e617 */ LDATA extern char public_680e617;
/* 0x0680e618 */ LDATA extern char public_680e618;
/* 0x0680e619 */ LDATA extern char public_680e619;
/* 0x0680e61a */ LDATA extern char public_680e61a;
/* 0x0680e61b */ LDATA extern char public_680e61b;
/* 0x0680e61c */ LDATA extern char public_680e61c; // ?
/* 0x0680e61d */ LDATA extern char public_680e61d; // ?
/* 0x0680e61e */ LDATA extern char public_680e61e; // ?
/* 0x0680e61f */ LDATA extern char public_680e61f; // ?
/* 0x0680e620 */ LDATA extern char public_680e620; // ?
/* 0x0680e621 */ LDATA extern char public_680e621; // ?
/* 0x0680e622 */ LDATA extern char public_680e622; // ?
/* 0x0680e623 */ LDATA extern char public_680e623; // ?
/* 0x0680e624 */ LDATA extern char public_680e624; // ?
/* 0x0680e625 */ LDATA extern char public_680e625; // ?
/* 0x0680e626 */ LDATA extern char public_680e626; // ?
/* 0x0680e627 */ LDATA extern char public_680e627; // ?
/* 0x0680e628 */ LDATA extern char public_680e628; // ?
/* 0x0680e629 */ LDATA extern char public_680e629; // ?
/* 0x0680e62a */ LDATA extern char public_680e62a; // ?
/* 0x0680e62b */ LDATA extern char public_680e62b; // ?
/* 0x0680e62c */ LDATA extern char public_680e62c; // ?
/* 0x0680e62d */ LDATA extern char public_680e62d; // ?
/* 0x0680e62e */ LDATA extern char public_680e62e; // ?
/* 0x0680e62f */ LDATA extern char public_680e62f; // ?
/* 0x0680e630 */ LDATA extern char public_680e630; // ?
/* 0x0680e631 */ LDATA extern char public_680e631; // ?
/* 0x0680e632 */ LDATA extern char public_680e632; // ?
/* 0x0680e633 */ LDATA extern char public_680e633; // ?
/* 0x0680e634 */ LDATA extern char public_680e634; // ?
/* 0x0680e635 */ LDATA extern char public_680e635; // ?
/* 0x0680e636 */ LDATA extern char public_680e636; // ?
/* 0x0680e637 */ LDATA extern char public_680e637; // ?
/* 0x0680e638 */ LDATA extern char public_680e638; // ?
/* 0x0680e639 */ LDATA extern char public_680e639; // ?
/* 0x0680e63a */ LDATA extern char public_680e63a; // ?
/* 0x0680e63b */ LDATA extern char public_680e63b; // ?
/* 0x0680e63c */ LDATA extern char public_680e63c; // ?
/* 0x0680e63d */ LDATA extern char public_680e63d; // ?
/* 0x0680e63e */ LDATA extern char public_680e63e; // ?
/* 0x0680e63f */ LDATA extern char public_680e63f; // ?
/* 0x0680e640 */ LDATA extern char public_680e640; // ?
/* 0x0680e641 */ LDATA extern char public_680e641; // ?
/* 0x0680e642 */ LDATA extern char public_680e642; // ?
/* 0x0680e643 */ LDATA extern char public_680e643; // ?
/* 0x0680e644 */ LDATA extern char public_680e644; // ?
/* 0x0680e645 */ LDATA extern char public_680e645; // ?
/* 0x0680e646 */ LDATA extern char public_680e646; // ?
/* 0x0680e647 */ LDATA extern char public_680e647; // ?
/* 0x0680e648 */ LDATA extern char public_680e648; // ?
/* 0x0680e649 */ LDATA extern char public_680e649; // ?
/* 0x0680e64a */ LDATA extern char public_680e64a; // ?
/* 0x0680e64b */ LDATA extern char public_680e64b; // ?
/* 0x0680e64c */ LDATA extern char public_680e64c; // ?
/* 0x0680e64d */ LDATA extern char public_680e64d; // ?
/* 0x0680e64e */ LDATA extern char public_680e64e; // ?
/* 0x0680e64f */ LDATA extern char public_680e64f; // ?
/* 0x0680e650 */ LDATA extern char public_680e650; // ?
/* 0x0680e651 */ LDATA extern char public_680e651; // ?
/* 0x0680e652 */ LDATA extern char public_680e652; // ?
/* 0x0680e653 */ LDATA extern char public_680e653; // ?
/* 0x0680e654 */ LDATA extern char public_680e654; // ?
/* 0x0680e655 */ LDATA extern char public_680e655; // ?
/* 0x0680e656 */ LDATA extern char public_680e656; // ?
/* 0x0680e657 */ LDATA extern char public_680e657; // ?
/* 0x0680e658 */ LDATA extern char public_680e658; // ?
/* 0x0680e659 */ LDATA extern char public_680e659; // ?
/* 0x0680e65a */ LDATA extern char public_680e65a; // ?
/* 0x0680e65b */ LDATA extern char public_680e65b; // ?
/* 0x0680e65c */ LDATA extern char public_680e65c; // ?
/* 0x0680e65d */ LDATA extern char public_680e65d; // ?
/* 0x0680e65e */ LDATA extern char public_680e65e; // ?
/* 0x0680e65f */ LDATA extern char public_680e65f; // ?
/* 0x0680e660 */ LDATA extern char public_680e660; // ?
/* 0x0680e661 */ LDATA extern char public_680e661; // ?
/* 0x0680e662 */ LDATA extern char public_680e662; // ?
/* 0x0680e663 */ LDATA extern char public_680e663; // ?
/* 0x0680e664 */ LDATA extern char public_680e664; // ?
/* 0x0680e665 */ LDATA extern char public_680e665; // ?
/* 0x0680e666 */ LDATA extern char public_680e666; // ?
/* 0x0680e667 */ LDATA extern char public_680e667; // ?
/* 0x0680e668 */ LDATA extern char public_680e668; // ?
/* 0x0680e669 */ LDATA extern char public_680e669; // ?
/* 0x0680e66a */ LDATA extern char public_680e66a; // ?
/* 0x0680e66b */ LDATA extern char public_680e66b; // ?
/* 0x0680e66c */ LDATA extern char public_680e66c; // ?
/* 0x0680e66d */ LDATA extern char public_680e66d; // ?
/* 0x0680e66e */ LDATA extern char public_680e66e; // ?
/* 0x0680e66f */ LDATA extern char public_680e66f; // ?
/* 0x0680e670 */ LDATA extern char public_680e670; // ?
/* 0x0680e671 */ LDATA extern char public_680e671; // ?
/* 0x0680e672 */ LDATA extern char public_680e672; // ?
/* 0x0680e673 */ LDATA extern char public_680e673; // ?
/* 0x0680e674 */ LDATA extern char public_680e674; // ?
/* 0x0680e675 */ LDATA extern char public_680e675; // ?
/* 0x0680e676 */ LDATA extern char public_680e676; // ?
/* 0x0680e677 */ LDATA extern char public_680e677; // ?
/* 0x0680e678 */ LDATA extern char public_680e678; // ?
/* 0x0680e679 */ LDATA extern char public_680e679; // ?
/* 0x0680e67a */ LDATA extern char public_680e67a; // ?
/* 0x0680e67b */ LDATA extern char public_680e67b; // ?
/* 0x0680e67c */ LDATA extern char public_680e67c; // ?
/* 0x0680e67d */ LDATA extern char public_680e67d; // ?
/* 0x0680e67e */ LDATA extern char public_680e67e; // ?
/* 0x0680e67f */ LDATA extern char public_680e67f; // ?
/* 0x0680e680 */ LDATA extern char public_680e680; // ?
/* 0x0680e681 */ LDATA extern char public_680e681; // ?
/* 0x0680e682 */ LDATA extern char public_680e682; // ?
/* 0x0680e683 */ LDATA extern char public_680e683; // ?
/* 0x0680e684 */ LDATA extern char public_680e684; // ?
/* 0x0680e685 */ LDATA extern char public_680e685; // ?
/* 0x0680e686 */ LDATA extern char public_680e686; // ?
/* 0x0680e687 */ LDATA extern char public_680e687; // ?
/* 0x0680e688 */ LDATA extern char public_680e688; // ?
/* 0x0680e689 */ LDATA extern char public_680e689; // ?
/* 0x0680e68a */ LDATA extern char public_680e68a; // ?
/* 0x0680e68b */ LDATA extern char public_680e68b; // ?
/* 0x0680e68c */ LDATA extern char public_680e68c; // ?
/* 0x0680e68d */ LDATA extern char public_680e68d; // ?
/* 0x0680e68e */ LDATA extern char public_680e68e; // ?
/* 0x0680e68f */ LDATA extern char public_680e68f; // ?
/* 0x0680e690 */ LDATA extern char public_680e690; // ?
/* 0x0680e691 */ LDATA extern char public_680e691; // ?
/* 0x0680e692 */ LDATA extern char public_680e692; // ?
/* 0x0680e693 */ LDATA extern char public_680e693; // ?
/* 0x0680e694 */ LDATA extern char public_680e694; // ?
/* 0x0680e695 */ LDATA extern char public_680e695; // ?
/* 0x0680e696 */ LDATA extern char public_680e696; // ?
/* 0x0680e697 */ LDATA extern char public_680e697; // ?
/* 0x0680e698 */ LDATA extern char public_680e698; // ?
/* 0x0680e699 */ LDATA extern char public_680e699; // ?
/* 0x0680e69a */ LDATA extern char public_680e69a; // ?
/* 0x0680e69b */ LDATA extern char public_680e69b; // ?
/* 0x0680e69c */ LDATA extern char public_680e69c; // ?
/* 0x0680e69d */ LDATA extern char public_680e69d; // ?
/* 0x0680e69e */ LDATA extern char public_680e69e; // ?
/* 0x0680e69f */ LDATA extern char public_680e69f; // ?
/* 0x0680e6a0 */ LDATA extern char public_680e6a0; // ?
/* 0x0680e6a1 */ LDATA extern char public_680e6a1; // ?
/* 0x0680e6a2 */ LDATA extern char public_680e6a2; // ?
/* 0x0680e6a3 */ LDATA extern char public_680e6a3; // ?
/* 0x0680e6a4 */ LDATA extern char public_680e6a4; // ?
/* 0x0680e6a5 */ LDATA extern char public_680e6a5; // ?
/* 0x0680e6a6 */ LDATA extern char public_680e6a6; // ?
/* 0x0680e6a7 */ LDATA extern char public_680e6a7; // ?
/* 0x0680e6a8 */ LDATA extern char public_680e6a8; // ?
/* 0x0680e6a9 */ LDATA extern char public_680e6a9; // ?
/* 0x0680e6aa */ LDATA extern char public_680e6aa; // ?
/* 0x0680e6ab */ LDATA extern char public_680e6ab; // ?
/* 0x0680e6ac */ LDATA extern char public_680e6ac; // ?
/* 0x0680e6ad */ LDATA extern char public_680e6ad; // ?
/* 0x0680e6ae */ LDATA extern char public_680e6ae; // ?
/* 0x0680e6af */ LDATA extern char public_680e6af; // ?
/* 0x0680e6b0 */ LDATA extern char public_680e6b0; // ?
/* 0x0680e6b1 */ LDATA extern char public_680e6b1; // ?
/* 0x0680e6b2 */ LDATA extern char public_680e6b2; // ?
/* 0x0680e6b3 */ LDATA extern char public_680e6b3; // ?
/* 0x0680e6b4 */ LDATA extern char public_680e6b4; // ?
/* 0x0680e6b5 */ LDATA extern char public_680e6b5; // ?
/* 0x0680e6b6 */ LDATA extern char public_680e6b6; // ?
/* 0x0680e6b7 */ LDATA extern char public_680e6b7; // ?
/* 0x0680e6b8 */ LDATA extern char public_680e6b8; // ?
/* 0x0680e6b9 */ LDATA extern char public_680e6b9; // ?
/* 0x0680e6ba */ LDATA extern char public_680e6ba; // ?
/* 0x0680e6bb */ LDATA extern char public_680e6bb; // ?
/* 0x0680e6bc */ LDATA extern char public_680e6bc; // ?
/* 0x0680e6bd */ LDATA extern char public_680e6bd; // ?
/* 0x0680e6be */ LDATA extern char public_680e6be; // ?
/* 0x0680e6bf */ LDATA extern char public_680e6bf; // ?
/* 0x0680e6c0 */ LDATA extern char public_680e6c0; // ?
/* 0x0680e6c1 */ LDATA extern char public_680e6c1; // ?
/* 0x0680e6c2 */ LDATA extern char public_680e6c2; // ?
/* 0x0680e6c3 */ LDATA extern char public_680e6c3; // ?
/* 0x0680e6c4 */ LDATA extern char public_680e6c4; // ?
/* 0x0680e6c5 */ LDATA extern char public_680e6c5; // ?
/* 0x0680e6c6 */ LDATA extern char public_680e6c6; // ?
/* 0x0680e6c7 */ LDATA extern char public_680e6c7; // ?
/* 0x0680e6c8 */ LDATA extern char public_680e6c8; // ?
/* 0x0680e6c9 */ LDATA extern char public_680e6c9; // ?
/* 0x0680e6ca */ LDATA extern char public_680e6ca; // ?
/* 0x0680e6cb */ LDATA extern char public_680e6cb; // ?
/* 0x0680e6cc */ LDATA extern char public_680e6cc; // ?
/* 0x0680e6cd */ LDATA extern char public_680e6cd; // ?
/* 0x0680e6ce */ LDATA extern char public_680e6ce; // ?
/* 0x0680e6cf */ LDATA extern char public_680e6cf; // ?
/* 0x0680e6d0 */ LDATA extern char public_680e6d0; // ?
/* 0x0680e6d1 */ LDATA extern char public_680e6d1; // ?
/* 0x0680e6d2 */ LDATA extern char public_680e6d2; // ?
/* 0x0680e6d3 */ LDATA extern char public_680e6d3; // ?
/* 0x0680e6d4 */ LDATA extern char public_680e6d4; // ?
/* 0x0680e6d5 */ LDATA extern char public_680e6d5; // ?
/* 0x0680e6d6 */ LDATA extern char public_680e6d6; // ?
/* 0x0680e6d7 */ LDATA extern char public_680e6d7; // ?
/* 0x0680e6d8 */ LDATA extern char public_680e6d8; // ?
/* 0x0680e6d9 */ LDATA extern char public_680e6d9; // ?
/* 0x0680e6da */ LDATA extern char public_680e6da; // ?
/* 0x0680e6db */ LDATA extern char public_680e6db; // ?
/* 0x0680e6dc */ LDATA extern char public_680e6dc; // ?
/* 0x0680e6dd */ LDATA extern char public_680e6dd; // ?
/* 0x0680e6de */ LDATA extern char public_680e6de; // ?
/* 0x0680e6df */ LDATA extern char public_680e6df; // ?
/* 0x0680e6e0 */ LDATA extern char public_680e6e0; // ?
/* 0x0680e6e1 */ LDATA extern char public_680e6e1; // ?
/* 0x0680e6e2 */ LDATA extern char public_680e6e2; // ?
/* 0x0680e6e3 */ LDATA extern char public_680e6e3; // ?
/* 0x0680e6e4 */ LDATA extern char public_680e6e4; // ?
/* 0x0680e6e5 */ LDATA extern char public_680e6e5; // ?
/* 0x0680e6e6 */ LDATA extern char public_680e6e6; // ?
/* 0x0680e6e7 */ LDATA extern char public_680e6e7; // ?
/* 0x0680e6e8 */ LDATA extern char public_680e6e8; // ?
/* 0x0680e6e9 */ LDATA extern char public_680e6e9; // ?
/* 0x0680e6ea */ LDATA extern char public_680e6ea; // ?
/* 0x0680e6eb */ LDATA extern char public_680e6eb; // ?
/* 0x0680e6ec */ LDATA extern char public_680e6ec; // ?
/* 0x0680e6ed */ LDATA extern char public_680e6ed; // ?
/* 0x0680e6ee */ LDATA extern char public_680e6ee; // ?
/* 0x0680e6ef */ LDATA extern char public_680e6ef; // ?
/* 0x0680e6f0 */ LDATA extern char public_680e6f0; // ?
/* 0x0680e6f1 */ LDATA extern char public_680e6f1; // ?
/* 0x0680e6f2 */ LDATA extern char public_680e6f2; // ?
/* 0x0680e6f3 */ LDATA extern char public_680e6f3; // ?
/* 0x0680e6f4 */ LDATA extern char public_680e6f4; // ?
/* 0x0680e6f5 */ LDATA extern char public_680e6f5; // ?
/* 0x0680e6f6 */ LDATA extern char public_680e6f6; // ?
/* 0x0680e6f7 */ LDATA extern char public_680e6f7; // ?
/* 0x0680e6f8 */ LDATA extern char public_680e6f8; // ?
/* 0x0680e6f9 */ LDATA extern char public_680e6f9; // ?
/* 0x0680e6fa */ LDATA extern char public_680e6fa; // ?
/* 0x0680e6fb */ LDATA extern char public_680e6fb; // ?
/* 0x0680e6fc */ LDATA extern char public_680e6fc; // ?
/* 0x0680e6fd */ LDATA extern char public_680e6fd; // ?
/* 0x0680e6fe */ LDATA extern char public_680e6fe; // ?
/* 0x0680e6ff */ LDATA extern char public_680e6ff; // ?
/* 0x0680e700 */ LDATA extern char public_680e700; // ?
/* 0x0680e701 */ LDATA extern char public_680e701; // ?
/* 0x0680e702 */ LDATA extern char public_680e702; // ?
/* 0x0680e703 */ LDATA extern char public_680e703; // ?
/* 0x0680e704 */ LDATA extern char public_680e704; // ?
/* 0x0680e705 */ LDATA extern char public_680e705; // ?
/* 0x0680e706 */ LDATA extern char public_680e706; // ?
/* 0x0680e707 */ LDATA extern char public_680e707; // ?
/* 0x0680e708 */ LDATA extern char public_680e708; // ?
/* 0x0680e709 */ LDATA extern char public_680e709; // ?
/* 0x0680e70a */ LDATA extern char public_680e70a; // ?
/* 0x0680e70b */ LDATA extern char public_680e70b; // ?
/* 0x0680e70c */ LDATA extern char public_680e70c; // ?
/* 0x0680e70d */ LDATA extern char public_680e70d; // ?
/* 0x0680e70e */ LDATA extern char public_680e70e; // ?
/* 0x0680e70f */ LDATA extern char public_680e70f; // ?
/* 0x0680e710 */ LDATA extern char public_680e710; // ?
/* 0x0680e711 */ LDATA extern char public_680e711; // ?
/* 0x0680e712 */ LDATA extern char public_680e712; // ?
/* 0x0680e713 */ LDATA extern char public_680e713; // ?
/* 0x0680e714 */ LDATA extern char public_680e714; // ?
/* 0x0680e715 */ LDATA extern char public_680e715; // ?
/* 0x0680e716 */ LDATA extern char public_680e716; // ?
/* 0x0680e717 */ LDATA extern char public_680e717; // ?
/* 0x0680e718 */ LDATA extern char public_680e718; // ?
/* 0x0680e719 */ LDATA extern char public_680e719; // ?
/* 0x0680e71a */ LDATA extern char public_680e71a; // ?
/* 0x0680e71b */ LDATA extern char public_680e71b; // ?
/* 0x0680e71c */ LDATA extern char public_680e71c; // ?
/* 0x0680e71d */ LDATA extern char public_680e71d; // ?
/* 0x0680e71e */ LDATA extern char public_680e71e; // ?
/* 0x0680e71f */ LDATA extern char public_680e71f; // ?
/* 0x0680e720 */ LDATA extern char public_680e720; // ?
/* 0x0680e721 */ LDATA extern char public_680e721; // ?
/* 0x0680e722 */ LDATA extern char public_680e722; // ?
/* 0x0680e723 */ LDATA extern char public_680e723; // ?
/* 0x0680e724 */ LDATA extern char public_680e724; // ?
/* 0x0680e725 */ LDATA extern char public_680e725; // ?
/* 0x0680e726 */ LDATA extern char public_680e726; // ?
/* 0x0680e727 */ LDATA extern char public_680e727; // ?
/* 0x0680e728 */ LDATA extern char public_680e728; // ?
/* 0x0680e729 */ LDATA extern char public_680e729; // ?
/* 0x0680e72a */ LDATA extern char public_680e72a; // ?
/* 0x0680e72b */ LDATA extern char public_680e72b; // ?
/* 0x0680e72c */ LDATA extern char public_680e72c; // ?
/* 0x0680e72d */ LDATA extern char public_680e72d; // ?
/* 0x0680e72e */ LDATA extern char public_680e72e; // ?
/* 0x0680e72f */ LDATA extern char public_680e72f; // ?
/* 0x0680e730 */ LDATA extern char public_680e730; // ?
/* 0x0680e731 */ LDATA extern char public_680e731; // ?
/* 0x0680e732 */ LDATA extern char public_680e732; // ?
/* 0x0680e733 */ LDATA extern char public_680e733; // ?
/* 0x0680e734 */ LDATA extern char public_680e734; // ?
/* 0x0680e735 */ LDATA extern char public_680e735; // ?
/* 0x0680e736 */ LDATA extern char public_680e736; // ?
/* 0x0680e737 */ LDATA extern char public_680e737; // ?
/* 0x0680e738 */ LDATA extern char public_680e738; // ?
/* 0x0680e739 */ LDATA extern char public_680e739; // ?
/* 0x0680e73a */ LDATA extern char public_680e73a; // ?
/* 0x0680e73b */ LDATA extern char public_680e73b; // ?
/* 0x0680e73c */ LDATA extern char public_680e73c; // ?
/* 0x0680e73d */ LDATA extern char public_680e73d; // ?
/* 0x0680e73e */ LDATA extern char public_680e73e; // ?
/* 0x0680e73f */ LDATA extern char public_680e73f; // ?
/* 0x0680e740 */ LDATA extern char public_680e740; // ?
/* 0x0680e741 */ LDATA extern char public_680e741; // ?
/* 0x0680e742 */ LDATA extern char public_680e742; // ?
/* 0x0680e743 */ LDATA extern char public_680e743; // ?
/* 0x0680e744 */ LDATA extern char public_680e744; // ?
/* 0x0680e745 */ LDATA extern char public_680e745; // ?
/* 0x0680e746 */ LDATA extern char public_680e746; // ?
/* 0x0680e747 */ LDATA extern char public_680e747; // ?
/* 0x0680e748 */ LDATA extern char public_680e748; // ?
/* 0x0680e749 */ LDATA extern char public_680e749; // ?
/* 0x0680e74a */ LDATA extern char public_680e74a; // ?
/* 0x0680e74b */ LDATA extern char public_680e74b; // ?
/* 0x0680e74c */ LDATA extern char public_680e74c; // ?
/* 0x0680e74d */ LDATA extern char public_680e74d; // ?
/* 0x0680e74e */ LDATA extern char public_680e74e; // ?
/* 0x0680e74f */ LDATA extern char public_680e74f; // ?
/* 0x0680e750 */ LDATA extern char public_680e750; // ?
/* 0x0680e751 */ LDATA extern char public_680e751; // ?
/* 0x0680e752 */ LDATA extern char public_680e752; // ?
/* 0x0680e753 */ LDATA extern char public_680e753; // ?
/* 0x0680e754 */ LDATA extern char public_680e754; // ?
/* 0x0680e755 */ LDATA extern char public_680e755; // ?
/* 0x0680e756 */ LDATA extern char public_680e756; // ?
/* 0x0680e757 */ LDATA extern char public_680e757; // ?
/* 0x0680e758 */ LDATA extern char public_680e758; // ?
/* 0x0680e759 */ LDATA extern char public_680e759; // ?
/* 0x0680e75a */ LDATA extern char public_680e75a; // ?
/* 0x0680e75b */ LDATA extern char public_680e75b; // ?
/* 0x0680e75c */ LDATA extern char public_680e75c; // ?
/* 0x0680e75d */ LDATA extern char public_680e75d; // ?
/* 0x0680e75e */ LDATA extern char public_680e75e; // ?
/* 0x0680e75f */ LDATA extern char public_680e75f; // ?
/* 0x0680e760 */ LDATA extern char public_680e760; // ?
/* 0x0680e761 */ LDATA extern char public_680e761; // ?
/* 0x0680e762 */ LDATA extern char public_680e762; // ?
/* 0x0680e763 */ LDATA extern char public_680e763; // ?
/* 0x0680e764 */ LDATA extern char public_680e764; // ?
/* 0x0680e765 */ LDATA extern char public_680e765; // ?
/* 0x0680e766 */ LDATA extern char public_680e766; // ?
/* 0x0680e767 */ LDATA extern char public_680e767; // ?
/* 0x0680e768 */ LDATA extern char public_680e768; // ?
/* 0x0680e769 */ LDATA extern char public_680e769; // ?
/* 0x0680e76a */ LDATA extern char public_680e76a; // ?
/* 0x0680e76b */ LDATA extern char public_680e76b; // ?
/* 0x0680e76c */ LDATA extern char public_680e76c; // ?
/* 0x0680e76d */ LDATA extern char public_680e76d; // ?
/* 0x0680e76e */ LDATA extern char public_680e76e; // ?
/* 0x0680e76f */ LDATA extern char public_680e76f; // ?
/* 0x0680e770 */ LDATA extern char public_680e770; // ?
/* 0x0680e771 */ LDATA extern char public_680e771; // ?
/* 0x0680e772 */ LDATA extern char public_680e772; // ?
/* 0x0680e773 */ LDATA extern char public_680e773; // ?
/* 0x0680e774 */ LDATA extern char public_680e774; // ?
/* 0x0680e775 */ LDATA extern char public_680e775; // ?
/* 0x0680e776 */ LDATA extern char public_680e776; // ?
/* 0x0680e777 */ LDATA extern char public_680e777; // ?
/* 0x0680e778 */ LDATA extern char public_680e778; // ?
/* 0x0680e779 */ LDATA extern char public_680e779; // ?
/* 0x0680e77a */ LDATA extern char public_680e77a; // ?
/* 0x0680e77b */ LDATA extern char public_680e77b; // ?
/* 0x0680e77c */ LDATA extern char public_680e77c; // ?
/* 0x0680e77d */ LDATA extern char public_680e77d; // ?
/* 0x0680e77e */ LDATA extern char public_680e77e; // ?
/* 0x0680e77f */ LDATA extern char public_680e77f; // ?
/* 0x0680e780 */ LDATA extern char public_680e780; // ?
/* 0x0680e781 */ LDATA extern char public_680e781; // ?
/* 0x0680e782 */ LDATA extern char public_680e782; // ?
/* 0x0680e783 */ LDATA extern char public_680e783; // ?
/* 0x0680e784 */ LDATA extern char public_680e784; // ?
/* 0x0680e785 */ LDATA extern char public_680e785; // ?
/* 0x0680e786 */ LDATA extern char public_680e786; // ?
/* 0x0680e787 */ LDATA extern char public_680e787; // ?
/* 0x0680e788 */ LDATA extern char public_680e788; // ?
/* 0x0680e789 */ LDATA extern char public_680e789; // ?
/* 0x0680e78a */ LDATA extern char public_680e78a; // ?
/* 0x0680e78b */ LDATA extern char public_680e78b; // ?
/* 0x0680e78c */ LDATA extern char public_680e78c; // ?
/* 0x0680e78d */ LDATA extern char public_680e78d; // ?
/* 0x0680e78e */ LDATA extern char public_680e78e; // ?
/* 0x0680e78f */ LDATA extern char public_680e78f; // ?
/* 0x0680e790 */ LDATA extern char public_680e790; // ?
/* 0x0680e791 */ LDATA extern char public_680e791; // ?
/* 0x0680e792 */ LDATA extern char public_680e792; // ?
/* 0x0680e793 */ LDATA extern char public_680e793; // ?
/* 0x0680e794 */ LDATA extern char public_680e794; // ?
/* 0x0680e795 */ LDATA extern char public_680e795; // ?
/* 0x0680e796 */ LDATA extern char public_680e796; // ?
/* 0x0680e797 */ LDATA extern char public_680e797; // ?
/* 0x0680e798 */ LDATA extern char public_680e798; // ?
/* 0x0680e799 */ LDATA extern char public_680e799; // ?
/* 0x0680e79a */ LDATA extern char public_680e79a; // ?
/* 0x0680e79b */ LDATA extern char public_680e79b; // ?
/* 0x0680e79c */ LDATA extern char public_680e79c; // ?
/* 0x0680e79d */ LDATA extern char public_680e79d; // ?
/* 0x0680e79e */ LDATA extern char public_680e79e; // ?
/* 0x0680e79f */ LDATA extern char public_680e79f; // ?
/* 0x0680e7a0 */ LDATA extern char public_680e7a0; // ?
/* 0x0680e7a1 */ LDATA extern char public_680e7a1; // ?
/* 0x0680e7a2 */ LDATA extern char public_680e7a2; // ?
/* 0x0680e7a3 */ LDATA extern char public_680e7a3; // ?
/* 0x0680e7a4 */ LDATA extern char public_680e7a4; // ?
/* 0x0680e7a5 */ LDATA extern char public_680e7a5; // ?
/* 0x0680e7a6 */ LDATA extern char public_680e7a6; // ?
/* 0x0680e7a7 */ LDATA extern char public_680e7a7; // ?
/* 0x0680e7a8 */ LDATA extern char public_680e7a8; // ?
/* 0x0680e7a9 */ LDATA extern char public_680e7a9; // ?
/* 0x0680e7aa */ LDATA extern char public_680e7aa; // ?
/* 0x0680e7ab */ LDATA extern char public_680e7ab; // ?
/* 0x0680e7ac */ LDATA extern char public_680e7ac; // ?
/* 0x0680e7ad */ LDATA extern char public_680e7ad; // ?
/* 0x0680e7ae */ LDATA extern char public_680e7ae; // ?
/* 0x0680e7af */ LDATA extern char public_680e7af; // ?
/* 0x0680e7b0 */ LDATA extern char public_680e7b0; // ?
/* 0x0680e7b1 */ LDATA extern char public_680e7b1; // ?
/* 0x0680e7b2 */ LDATA extern char public_680e7b2; // ?
/* 0x0680e7b3 */ LDATA extern char public_680e7b3; // ?
/* 0x0680e7b4 */ LDATA extern char public_680e7b4; // ?
/* 0x0680e7b5 */ LDATA extern char public_680e7b5; // ?
/* 0x0680e7b6 */ LDATA extern char public_680e7b6; // ?
/* 0x0680e7b7 */ LDATA extern char public_680e7b7; // ?
/* 0x0680e7b8 */ LDATA extern char public_680e7b8; // ?
/* 0x0680e7b9 */ LDATA extern char public_680e7b9; // ?
/* 0x0680e7ba */ LDATA extern char public_680e7ba; // ?
/* 0x0680e7bb */ LDATA extern char public_680e7bb; // ?
/* 0x0680e7bc */ LDATA extern char public_680e7bc; // ?
/* 0x0680e7bd */ LDATA extern char public_680e7bd; // ?
/* 0x0680e7be */ LDATA extern char public_680e7be; // ?
/* 0x0680e7bf */ LDATA extern char public_680e7bf; // ?
/* 0x0680e7c0 */ LDATA extern char public_680e7c0; // ?
/* 0x0680e7c1 */ LDATA extern char public_680e7c1; // ?
/* 0x0680e7c2 */ LDATA extern char public_680e7c2; // ?
/* 0x0680e7c3 */ LDATA extern char public_680e7c3; // ?
/* 0x0680e7c4 */ LDATA extern char public_680e7c4; // ?
/* 0x0680e7c5 */ LDATA extern char public_680e7c5; // ?
/* 0x0680e7c6 */ LDATA extern char public_680e7c6; // ?
/* 0x0680e7c7 */ LDATA extern char public_680e7c7; // ?
/* 0x0680e7c8 */ LDATA extern char public_680e7c8; // ?
/* 0x0680e7c9 */ LDATA extern char public_680e7c9; // ?
/* 0x0680e7ca */ LDATA extern char public_680e7ca; // ?
/* 0x0680e7cb */ LDATA extern char public_680e7cb; // ?
/* 0x0680e7cc */ LDATA extern char public_680e7cc; // ?
/* 0x0680e7cd */ LDATA extern char public_680e7cd; // ?
/* 0x0680e7ce */ LDATA extern char public_680e7ce; // ?
/* 0x0680e7cf */ LDATA extern char public_680e7cf; // ?
/* 0x0680e7d0 */ LDATA extern char public_680e7d0; // ?
/* 0x0680e7d1 */ LDATA extern char public_680e7d1; // ?
/* 0x0680e7d2 */ LDATA extern char public_680e7d2; // ?
/* 0x0680e7d3 */ LDATA extern char public_680e7d3; // ?
/* 0x0680e7d4 */ LDATA extern char public_680e7d4; // ?
/* 0x0680e7d5 */ LDATA extern char public_680e7d5; // ?
/* 0x0680e7d6 */ LDATA extern char public_680e7d6; // ?
/* 0x0680e7d7 */ LDATA extern char public_680e7d7; // ?
/* 0x0680e7d8 */ LDATA extern char public_680e7d8; // ?
/* 0x0680e7d9 */ LDATA extern char public_680e7d9; // ?
/* 0x0680e7da */ LDATA extern char public_680e7da; // ?
/* 0x0680e7db */ LDATA extern char public_680e7db; // ?
/* 0x0680e7dc */ LDATA extern char public_680e7dc; // ?
/* 0x0680e7dd */ LDATA extern char public_680e7dd; // ?
/* 0x0680e7de */ LDATA extern char public_680e7de; // ?
/* 0x0680e7df */ LDATA extern char public_680e7df; // ?
/* 0x0680e7e0 */ LDATA extern char public_680e7e0; // ?
/* 0x0680e7e1 */ LDATA extern char public_680e7e1; // ?
/* 0x0680e7e2 */ LDATA extern char public_680e7e2; // ?
/* 0x0680e7e3 */ LDATA extern char public_680e7e3; // ?
/* 0x0680e7e4 */ LDATA extern char public_680e7e4; // ?
/* 0x0680e7e5 */ LDATA extern char public_680e7e5; // ?
/* 0x0680e7e6 */ LDATA extern char public_680e7e6; // ?
/* 0x0680e7e7 */ LDATA extern char public_680e7e7; // ?
/* 0x0680e7e8 */ LDATA extern char public_680e7e8; // ?
/* 0x0680e7e9 */ LDATA extern char public_680e7e9; // ?
/* 0x0680e7ea */ LDATA extern char public_680e7ea; // ?
/* 0x0680e7eb */ LDATA extern char public_680e7eb; // ?
/* 0x0680e7ec */ LDATA extern char public_680e7ec; // ?
/* 0x0680e7ed */ LDATA extern char public_680e7ed; // ?
/* 0x0680e7ee */ LDATA extern char public_680e7ee; // ?
/* 0x0680e7ef */ LDATA extern char public_680e7ef; // ?
/* 0x0680e7f0 */ LDATA extern char public_680e7f0; // ?
/* 0x0680e7f1 */ LDATA extern char public_680e7f1; // ?
/* 0x0680e7f2 */ LDATA extern char public_680e7f2; // ?
/* 0x0680e7f3 */ LDATA extern char public_680e7f3; // ?
/* 0x0680e7f4 */ LDATA extern char public_680e7f4; // ?
/* 0x0680e7f5 */ LDATA extern char public_680e7f5; // ?
/* 0x0680e7f6 */ LDATA extern char public_680e7f6; // ?
/* 0x0680e7f7 */ LDATA extern char public_680e7f7; // ?
/* 0x0680e7f8 */ LDATA extern char public_680e7f8; // ?
/* 0x0680e7f9 */ LDATA extern char public_680e7f9; // ?
/* 0x0680e7fa */ LDATA extern char public_680e7fa; // ?
/* 0x0680e7fb */ LDATA extern char public_680e7fb; // ?
/* 0x0680e7fc */ LDATA extern char public_680e7fc; // ?
/* 0x0680e7fd */ LDATA extern char public_680e7fd; // ?
/* 0x0680e7fe */ LDATA extern char public_680e7fe; // ?
/* 0x0680e7ff */ LDATA extern char public_680e7ff; // ?
/* 0x0680e800 */ LDATA extern char public_680e800; // ?
/* 0x0680e801 */ LDATA extern char public_680e801; // ?
/* 0x0680e802 */ LDATA extern char public_680e802; // ?
/* 0x0680e803 */ LDATA extern char public_680e803; // ?
/* 0x0680e804 */ LDATA extern char public_680e804; // ?
/* 0x0680e805 */ LDATA extern char public_680e805; // ?
/* 0x0680e806 */ LDATA extern char public_680e806; // ?
/* 0x0680e807 */ LDATA extern char public_680e807; // ?
/* 0x0680e808 */ LDATA extern char public_680e808; // ?
/* 0x0680e809 */ LDATA extern char public_680e809; // ?
/* 0x0680e80a */ LDATA extern char public_680e80a; // ?
/* 0x0680e80b */ LDATA extern char public_680e80b; // ?
/* 0x0680e80c */ LDATA extern char public_680e80c; // ?
/* 0x0680e80d */ LDATA extern char public_680e80d; // ?
/* 0x0680e80e */ LDATA extern char public_680e80e; // ?
/* 0x0680e80f */ LDATA extern char public_680e80f; // ?
/* 0x0680e810 */ LDATA extern char public_680e810; // ?
/* 0x0680e811 */ LDATA extern char public_680e811; // ?
/* 0x0680e812 */ LDATA extern char public_680e812; // ?
/* 0x0680e813 */ LDATA extern char public_680e813; // ?
/* 0x0680e814 */ LDATA extern char public_680e814; // ?
/* 0x0680e815 */ LDATA extern char public_680e815; // ?
/* 0x0680e816 */ LDATA extern char public_680e816; // ?
/* 0x0680e817 */ LDATA extern char public_680e817; // ?
/* 0x0680e818 */ LDATA extern char public_680e818; // ?
/* 0x0680e819 */ LDATA extern char public_680e819; // ?
/* 0x0680e81a */ LDATA extern char public_680e81a; // ?
/* 0x0680e81b */ LDATA extern char public_680e81b; // ?
/* 0x0680e81c */ LDATA extern char public_680e81c; // ?
/* 0x0680e81d */ LDATA extern char public_680e81d; // ?
/* 0x0680e81e */ LDATA extern char public_680e81e; // ?
/* 0x0680e81f */ LDATA extern char public_680e81f; // ?
/* 0x0680e820 */ LDATA extern char public_680e820; // ?
/* 0x0680e821 */ LDATA extern char public_680e821; // ?
/* 0x0680e822 */ LDATA extern char public_680e822; // ?
/* 0x0680e823 */ LDATA extern char public_680e823; // ?
/* 0x0680e824 */ LDATA extern char public_680e824; // ?
/* 0x0680e825 */ LDATA extern char public_680e825; // ?
/* 0x0680e826 */ LDATA extern char public_680e826; // ?
/* 0x0680e827 */ LDATA extern char public_680e827; // ?
/* 0x0680e828 */ LDATA extern char public_680e828; // ?
/* 0x0680e829 */ LDATA extern char public_680e829; // ?
/* 0x0680e82a */ LDATA extern char public_680e82a; // ?
/* 0x0680e82b */ LDATA extern char public_680e82b; // ?
/* 0x0680e82c */ LDATA extern char public_680e82c; // ?
/* 0x0680e82d */ LDATA extern char public_680e82d; // ?
/* 0x0680e82e */ LDATA extern char public_680e82e; // ?
/* 0x0680e82f */ LDATA extern char public_680e82f; // ?
/* 0x0680e830 */ LDATA extern char public_680e830; // ?
/* 0x0680e831 */ LDATA extern char public_680e831; // ?
/* 0x0680e832 */ LDATA extern char public_680e832; // ?
/* 0x0680e833 */ LDATA extern char public_680e833; // ?
/* 0x0680e834 */ LDATA extern char public_680e834; // ?
/* 0x0680e835 */ LDATA extern char public_680e835; // ?
/* 0x0680e836 */ LDATA extern char public_680e836; // ?
/* 0x0680e837 */ LDATA extern char public_680e837; // ?
/* 0x0680e838 */ LDATA extern char public_680e838; // ?
/* 0x0680e839 */ LDATA extern char public_680e839; // ?
/* 0x0680e83a */ LDATA extern char public_680e83a; // ?
/* 0x0680e83b */ LDATA extern char public_680e83b; // ?
/* 0x0680e83c */ LDATA extern char public_680e83c; // ?
/* 0x0680e83d */ LDATA extern char public_680e83d; // ?
/* 0x0680e83e */ LDATA extern char public_680e83e; // ?
/* 0x0680e83f */ LDATA extern char public_680e83f; // ?
/* 0x0680e840 */ LDATA extern char public_680e840; // ?
/* 0x0680e841 */ LDATA extern char public_680e841; // ?
/* 0x0680e842 */ LDATA extern char public_680e842; // ?
/* 0x0680e843 */ LDATA extern char public_680e843; // ?
/* 0x0680e844 */ LDATA extern char public_680e844; // ?
/* 0x0680e845 */ LDATA extern char public_680e845; // ?
/* 0x0680e846 */ LDATA extern char public_680e846; // ?
/* 0x0680e847 */ LDATA extern char public_680e847; // ?
/* 0x0680e848 */ LDATA extern char public_680e848; // ?
/* 0x0680e849 */ LDATA extern char public_680e849; // ?
/* 0x0680e84a */ LDATA extern char public_680e84a; // ?
/* 0x0680e84b */ LDATA extern char public_680e84b; // ?
/* 0x0680e84c */ LDATA extern char public_680e84c; // ?
/* 0x0680e84d */ LDATA extern char public_680e84d; // ?
/* 0x0680e84e */ LDATA extern char public_680e84e; // ?
/* 0x0680e84f */ LDATA extern char public_680e84f; // ?
/* 0x0680e850 */ LDATA extern char public_680e850; // ?
/* 0x0680e851 */ LDATA extern char public_680e851; // ?
/* 0x0680e852 */ LDATA extern char public_680e852; // ?
/* 0x0680e853 */ LDATA extern char public_680e853; // ?
/* 0x0680e854 */ LDATA extern char public_680e854; // ?
/* 0x0680e855 */ LDATA extern char public_680e855; // ?
/* 0x0680e856 */ LDATA extern char public_680e856; // ?
/* 0x0680e857 */ LDATA extern char public_680e857; // ?
/* 0x0680e858 */ LDATA extern char public_680e858; // ?
/* 0x0680e859 */ LDATA extern char public_680e859; // ?
/* 0x0680e85a */ LDATA extern char public_680e85a; // ?
/* 0x0680e85b */ LDATA extern char public_680e85b; // ?
/* 0x0680e85c */ LDATA extern char public_680e85c; // ?
/* 0x0680e85d */ LDATA extern char public_680e85d; // ?
/* 0x0680e85e */ LDATA extern char public_680e85e; // ?
/* 0x0680e85f */ LDATA extern char public_680e85f; // ?
/* 0x0680e860 */ LDATA extern char public_680e860; // ?
/* 0x0680e861 */ LDATA extern char public_680e861; // ?
/* 0x0680e862 */ LDATA extern char public_680e862; // ?
/* 0x0680e863 */ LDATA extern char public_680e863; // ?
/* 0x0680e864 */ LDATA extern char public_680e864; // ?
/* 0x0680e865 */ LDATA extern char public_680e865; // ?
/* 0x0680e866 */ LDATA extern char public_680e866; // ?
/* 0x0680e867 */ LDATA extern char public_680e867; // ?
/* 0x0680e868 */ LDATA extern char public_680e868; // ?
/* 0x0680e869 */ LDATA extern char public_680e869; // ?
/* 0x0680e86a */ LDATA extern char public_680e86a; // ?
/* 0x0680e86b */ LDATA extern char public_680e86b; // ?
/* 0x0680e86c */ LDATA extern char public_680e86c; // ?
/* 0x0680e86d */ LDATA extern char public_680e86d; // ?
/* 0x0680e86e */ LDATA extern char public_680e86e; // ?
/* 0x0680e86f */ LDATA extern char public_680e86f; // ?
/* 0x0680e870 */ LDATA extern char public_680e870; // ?
/* 0x0680e871 */ LDATA extern char public_680e871; // ?
/* 0x0680e872 */ LDATA extern char public_680e872; // ?
/* 0x0680e873 */ LDATA extern char public_680e873; // ?
/* 0x0680e874 */ LDATA extern char public_680e874; // ?
/* 0x0680e875 */ LDATA extern char public_680e875; // ?
/* 0x0680e876 */ LDATA extern char public_680e876; // ?
/* 0x0680e877 */ LDATA extern char public_680e877; // ?
/* 0x0680e878 */ LDATA extern char public_680e878; // ?
/* 0x0680e879 */ LDATA extern char public_680e879; // ?
/* 0x0680e87a */ LDATA extern char public_680e87a; // ?
/* 0x0680e87b */ LDATA extern char public_680e87b; // ?
/* 0x0680e87c */ LDATA extern char public_680e87c; // ?
/* 0x0680e87d */ LDATA extern char public_680e87d; // ?
/* 0x0680e87e */ LDATA extern char public_680e87e; // ?
/* 0x0680e87f */ LDATA extern char public_680e87f; // ?
/* 0x0680e880 */ LDATA extern char public_680e880; // ?
/* 0x0680e881 */ LDATA extern char public_680e881; // ?
/* 0x0680e882 */ LDATA extern char public_680e882; // ?
/* 0x0680e883 */ LDATA extern char public_680e883; // ?
/* 0x0680e884 */ LDATA extern char public_680e884; // ?
/* 0x0680e885 */ LDATA extern char public_680e885; // ?
/* 0x0680e886 */ LDATA extern char public_680e886; // ?
/* 0x0680e887 */ LDATA extern char public_680e887; // ?
/* 0x0680e888 */ LDATA extern char public_680e888; // ?
/* 0x0680e889 */ LDATA extern char public_680e889; // ?
/* 0x0680e88a */ LDATA extern char public_680e88a; // ?
/* 0x0680e88b */ LDATA extern char public_680e88b; // ?
/* 0x0680e88c */ LDATA extern char public_680e88c; // ?
/* 0x0680e88d */ LDATA extern char public_680e88d; // ?
/* 0x0680e88e */ LDATA extern char public_680e88e; // ?
/* 0x0680e88f */ LDATA extern char public_680e88f; // ?
/* 0x0680e890 */ LDATA extern char public_680e890; // ?
/* 0x0680e891 */ LDATA extern char public_680e891; // ?
/* 0x0680e892 */ LDATA extern char public_680e892; // ?
/* 0x0680e893 */ LDATA extern char public_680e893; // ?
/* 0x0680e894 */ LDATA extern char public_680e894; // ?
/* 0x0680e895 */ LDATA extern char public_680e895; // ?
/* 0x0680e896 */ LDATA extern char public_680e896; // ?
/* 0x0680e897 */ LDATA extern char public_680e897; // ?
/* 0x0680e898 */ LDATA extern char public_680e898; // ?
/* 0x0680e899 */ LDATA extern char public_680e899; // ?
/* 0x0680e89a */ LDATA extern char public_680e89a; // ?
/* 0x0680e89b */ LDATA extern char public_680e89b; // ?
/* 0x0680e89c */ LDATA extern char public_680e89c; // ?
/* 0x0680e89d */ LDATA extern char public_680e89d; // ?
/* 0x0680e89e */ LDATA extern char public_680e89e; // ?
/* 0x0680e89f */ LDATA extern char public_680e89f; // ?
/* 0x0680e8a0 */ LDATA extern char public_680e8a0; // ?
/* 0x0680e8a1 */ LDATA extern char public_680e8a1; // ?
/* 0x0680e8a2 */ LDATA extern char public_680e8a2; // ?
/* 0x0680e8a3 */ LDATA extern char public_680e8a3; // ?
/* 0x0680e8a4 */ LDATA extern char public_680e8a4; // ?
/* 0x0680e8a5 */ LDATA extern char public_680e8a5; // ?
/* 0x0680e8a6 */ LDATA extern char public_680e8a6; // ?
/* 0x0680e8a7 */ LDATA extern char public_680e8a7; // ?
/* 0x0680e8a8 */ LDATA extern char public_680e8a8; // ?
/* 0x0680e8a9 */ LDATA extern char public_680e8a9; // ?
/* 0x0680e8aa */ LDATA extern char public_680e8aa; // ?
/* 0x0680e8ab */ LDATA extern char public_680e8ab; // ?
/* 0x0680e8ac */ LDATA extern char public_680e8ac; // ?
/* 0x0680e8ad */ LDATA extern char public_680e8ad; // ?
/* 0x0680e8ae */ LDATA extern char public_680e8ae; // ?
/* 0x0680e8af */ LDATA extern char public_680e8af; // ?
/* 0x0680e8b0 */ LDATA extern char public_680e8b0; // ?
/* 0x0680e8b1 */ LDATA extern char public_680e8b1; // ?
/* 0x0680e8b2 */ LDATA extern char public_680e8b2; // ?
/* 0x0680e8b3 */ LDATA extern char public_680e8b3; // ?
/* 0x0680e8b4 */ LDATA extern char public_680e8b4; // ?
/* 0x0680e8b5 */ LDATA extern char public_680e8b5; // ?
/* 0x0680e8b6 */ LDATA extern char public_680e8b6; // ?
/* 0x0680e8b7 */ LDATA extern char public_680e8b7; // ?
/* 0x0680e8b8 */ LDATA extern char public_680e8b8; // ?
/* 0x0680e8b9 */ LDATA extern char public_680e8b9; // ?
/* 0x0680e8ba */ LDATA extern char public_680e8ba; // ?
/* 0x0680e8bb */ LDATA extern char public_680e8bb; // ?
/* 0x0680e8bc */ LDATA extern char public_680e8bc; // ?
/* 0x0680e8bd */ LDATA extern char public_680e8bd; // ?
/* 0x0680e8be */ LDATA extern char public_680e8be; // ?
/* 0x0680e8bf */ LDATA extern char public_680e8bf; // ?
/* 0x0680e8c0 */ LDATA extern char public_680e8c0; // ?
/* 0x0680e8c1 */ LDATA extern char public_680e8c1; // ?
/* 0x0680e8c2 */ LDATA extern char public_680e8c2; // ?
/* 0x0680e8c3 */ LDATA extern char public_680e8c3; // ?
/* 0x0680e8c4 */ LDATA extern char public_680e8c4; // ?
/* 0x0680e8c5 */ LDATA extern char public_680e8c5; // ?
/* 0x0680e8c6 */ LDATA extern char public_680e8c6; // ?
/* 0x0680e8c7 */ LDATA extern char public_680e8c7; // ?
/* 0x0680e8c8 */ LDATA extern char public_680e8c8; // ?
/* 0x0680e8c9 */ LDATA extern char public_680e8c9; // ?
/* 0x0680e8ca */ LDATA extern char public_680e8ca; // ?
/* 0x0680e8cb */ LDATA extern char public_680e8cb; // ?
/* 0x0680e8cc */ LDATA extern char public_680e8cc; // ?
/* 0x0680e8cd */ LDATA extern char public_680e8cd; // ?
/* 0x0680e8ce */ LDATA extern char public_680e8ce; // ?
/* 0x0680e8cf */ LDATA extern char public_680e8cf; // ?
/* 0x0680e8d0 */ LDATA extern char public_680e8d0; // ?
/* 0x0680e8d1 */ LDATA extern char public_680e8d1; // ?
/* 0x0680e8d2 */ LDATA extern char public_680e8d2; // ?
/* 0x0680e8d3 */ LDATA extern char public_680e8d3; // ?
/* 0x0680e8d4 */ LDATA extern char public_680e8d4; // ?
/* 0x0680e8d5 */ LDATA extern char public_680e8d5; // ?
/* 0x0680e8d6 */ LDATA extern char public_680e8d6; // ?
/* 0x0680e8d7 */ LDATA extern char public_680e8d7; // ?
/* 0x0680e8d8 */ LDATA extern char public_680e8d8; // ?
/* 0x0680e8d9 */ LDATA extern char public_680e8d9; // ?
/* 0x0680e8da */ LDATA extern char public_680e8da; // ?
/* 0x0680e8db */ LDATA extern char public_680e8db; // ?
/* 0x0680e8dc */ LDATA extern char public_680e8dc; // ?
/* 0x0680e8dd */ LDATA extern char public_680e8dd; // ?
/* 0x0680e8de */ LDATA extern char public_680e8de; // ?
/* 0x0680e8df */ LDATA extern char public_680e8df; // ?
/* 0x0680e8e0 */ LDATA extern char public_680e8e0; // ?
/* 0x0680e8e1 */ LDATA extern char public_680e8e1; // ?
/* 0x0680e8e2 */ LDATA extern char public_680e8e2; // ?
/* 0x0680e8e3 */ LDATA extern char public_680e8e3; // ?
/* 0x0680e8e4 */ LDATA extern char public_680e8e4; // ?
/* 0x0680e8e5 */ LDATA extern char public_680e8e5; // ?
/* 0x0680e8e6 */ LDATA extern char public_680e8e6; // ?
/* 0x0680e8e7 */ LDATA extern char public_680e8e7; // ?
/* 0x0680e8e8 */ LDATA extern char public_680e8e8; // ?
/* 0x0680e8e9 */ LDATA extern char public_680e8e9; // ?
/* 0x0680e8ea */ LDATA extern char public_680e8ea; // ?
/* 0x0680e8eb */ LDATA extern char public_680e8eb; // ?
/* 0x0680e8ec */ LDATA extern char public_680e8ec; // ?
/* 0x0680e8ed */ LDATA extern char public_680e8ed; // ?
/* 0x0680e8ee */ LDATA extern char public_680e8ee; // ?
/* 0x0680e8ef */ LDATA extern char public_680e8ef; // ?
/* 0x0680e8f0 */ LDATA extern char public_680e8f0; // ?
/* 0x0680e8f1 */ LDATA extern char public_680e8f1; // ?
/* 0x0680e8f2 */ LDATA extern char public_680e8f2; // ?
/* 0x0680e8f3 */ LDATA extern char public_680e8f3; // ?
/* 0x0680e8f4 */ LDATA extern char public_680e8f4; // ?
/* 0x0680e8f5 */ LDATA extern char public_680e8f5; // ?
/* 0x0680e8f6 */ LDATA extern char public_680e8f6; // ?
/* 0x0680e8f7 */ LDATA extern char public_680e8f7; // ?
/* 0x0680e8f8 */ LDATA extern char public_680e8f8; // ?
/* 0x0680e8f9 */ LDATA extern char public_680e8f9; // ?
/* 0x0680e8fa */ LDATA extern char public_680e8fa; // ?
/* 0x0680e8fb */ LDATA extern char public_680e8fb; // ?
/* 0x0680e8fc */ LDATA extern char public_680e8fc; // ?
/* 0x0680e8fd */ LDATA extern char public_680e8fd; // ?
/* 0x0680e8fe */ LDATA extern char public_680e8fe; // ?
/* 0x0680e8ff */ LDATA extern char public_680e8ff; // ?
/* 0x0680e900 */ LDATA extern char public_680e900; // ?
/* 0x0680e901 */ LDATA extern char public_680e901; // ?
/* 0x0680e902 */ LDATA extern char public_680e902; // ?
/* 0x0680e903 */ LDATA extern char public_680e903; // ?
/* 0x0680e904 */ LDATA extern char public_680e904; // ?
/* 0x0680e905 */ LDATA extern char public_680e905; // ?
/* 0x0680e906 */ LDATA extern char public_680e906; // ?
/* 0x0680e907 */ LDATA extern char public_680e907; // ?
/* 0x0680e908 */ LDATA extern char public_680e908; // ?
/* 0x0680e909 */ LDATA extern char public_680e909; // ?
/* 0x0680e90a */ LDATA extern char public_680e90a; // ?
/* 0x0680e90b */ LDATA extern char public_680e90b; // ?
/* 0x0680e90c */ LDATA extern char public_680e90c; // ?
/* 0x0680e90d */ LDATA extern char public_680e90d; // ?
/* 0x0680e90e */ LDATA extern char public_680e90e; // ?
/* 0x0680e90f */ LDATA extern char public_680e90f; // ?
/* 0x0680e910 */ LDATA extern char public_680e910; // ?
/* 0x0680e911 */ LDATA extern char public_680e911; // ?
/* 0x0680e912 */ LDATA extern char public_680e912; // ?
/* 0x0680e913 */ LDATA extern char public_680e913; // ?
/* 0x0680e914 */ LDATA extern char public_680e914; // ?
/* 0x0680e915 */ LDATA extern char public_680e915; // ?
/* 0x0680e916 */ LDATA extern char public_680e916; // ?
/* 0x0680e917 */ LDATA extern char public_680e917; // ?
/* 0x0680e918 */ LDATA extern char public_680e918; // ?
/* 0x0680e919 */ LDATA extern char public_680e919; // ?
/* 0x0680e91a */ LDATA extern char public_680e91a; // ?
/* 0x0680e91b */ LDATA extern char public_680e91b; // ?
/* 0x0680e91c */ LDATA extern char public_680e91c; // ?
/* 0x0680e91d */ LDATA extern char public_680e91d; // ?
/* 0x0680e91e */ LDATA extern char public_680e91e; // ?
/* 0x0680e91f */ LDATA extern char public_680e91f; // ?
/* 0x0680e920 */ LDATA extern char public_680e920; // ?
/* 0x0680e921 */ LDATA extern char public_680e921; // ?
/* 0x0680e922 */ LDATA extern char public_680e922; // ?
/* 0x0680e923 */ LDATA extern char public_680e923; // ?
/* 0x0680e924 */ LDATA extern char public_680e924; // ?
/* 0x0680e925 */ LDATA extern char public_680e925; // ?
/* 0x0680e926 */ LDATA extern char public_680e926; // ?
/* 0x0680e927 */ LDATA extern char public_680e927; // ?
/* 0x0680e928 */ LDATA extern char public_680e928; // ?
/* 0x0680e929 */ LDATA extern char public_680e929; // ?
/* 0x0680e92a */ LDATA extern char public_680e92a; // ?
/* 0x0680e92b */ LDATA extern char public_680e92b; // ?
/* 0x0680e92c */ LDATA extern char public_680e92c; // ?
/* 0x0680e92d */ LDATA extern char public_680e92d; // ?
/* 0x0680e92e */ LDATA extern char public_680e92e; // ?
/* 0x0680e92f */ LDATA extern char public_680e92f; // ?
/* 0x0680e930 */ LDATA extern char public_680e930; // ?
/* 0x0680e931 */ LDATA extern char public_680e931; // ?
/* 0x0680e932 */ LDATA extern char public_680e932; // ?
/* 0x0680e933 */ LDATA extern char public_680e933; // ?
/* 0x0680e934 */ LDATA extern char public_680e934; // ?
/* 0x0680e935 */ LDATA extern char public_680e935; // ?
/* 0x0680e936 */ LDATA extern char public_680e936; // ?
/* 0x0680e937 */ LDATA extern char public_680e937; // ?
/* 0x0680e938 */ LDATA extern char public_680e938; // ?
/* 0x0680e939 */ LDATA extern char public_680e939; // ?
/* 0x0680e93a */ LDATA extern char public_680e93a; // ?
/* 0x0680e93b */ LDATA extern char public_680e93b; // ?
/* 0x0680e93c */ LDATA extern char public_680e93c; // ?
/* 0x0680e93d */ LDATA extern char public_680e93d; // ?
/* 0x0680e93e */ LDATA extern char public_680e93e; // ?
/* 0x0680e93f */ LDATA extern char public_680e93f; // ?
/* 0x0680e940 */ LDATA extern char public_680e940; // ?
/* 0x0680e941 */ LDATA extern char public_680e941; // ?
/* 0x0680e942 */ LDATA extern char public_680e942; // ?
/* 0x0680e943 */ LDATA extern char public_680e943; // ?
/* 0x0680e944 */ LDATA extern char public_680e944; // ?
/* 0x0680e945 */ LDATA extern char public_680e945; // ?
/* 0x0680e946 */ LDATA extern char public_680e946; // ?
/* 0x0680e947 */ LDATA extern char public_680e947; // ?
/* 0x0680e948 */ LDATA extern char public_680e948; // ?
/* 0x0680e949 */ LDATA extern char public_680e949; // ?
/* 0x0680e94a */ LDATA extern char public_680e94a; // ?
/* 0x0680e94b */ LDATA extern char public_680e94b; // ?
/* 0x0680e94c */ LDATA extern char public_680e94c; // ?
/* 0x0680e94d */ LDATA extern char public_680e94d; // ?
/* 0x0680e94e */ LDATA extern char public_680e94e; // ?
/* 0x0680e94f */ LDATA extern char public_680e94f; // ?
/* 0x0680e950 */ LDATA extern char public_680e950; // ?
/* 0x0680e951 */ LDATA extern char public_680e951; // ?
/* 0x0680e952 */ LDATA extern char public_680e952; // ?
/* 0x0680e953 */ LDATA extern char public_680e953; // ?
/* 0x0680e954 */ LDATA extern char public_680e954; // ?
/* 0x0680e955 */ LDATA extern char public_680e955; // ?
/* 0x0680e956 */ LDATA extern char public_680e956; // ?
/* 0x0680e957 */ LDATA extern char public_680e957; // ?
/* 0x0680e958 */ LDATA extern char public_680e958; // ?
/* 0x0680e959 */ LDATA extern char public_680e959; // ?
/* 0x0680e95a */ LDATA extern char public_680e95a; // ?
/* 0x0680e95b */ LDATA extern char public_680e95b; // ?
/* 0x0680e95c */ LDATA extern char public_680e95c; // ?
/* 0x0680e95d */ LDATA extern char public_680e95d; // ?
/* 0x0680e95e */ LDATA extern char public_680e95e; // ?
/* 0x0680e95f */ LDATA extern char public_680e95f; // ?
/* 0x0680e960 */ LDATA extern char public_680e960; // ?
/* 0x0680e961 */ LDATA extern char public_680e961; // ?
/* 0x0680e962 */ LDATA extern char public_680e962; // ?
/* 0x0680e963 */ LDATA extern char public_680e963; // ?
/* 0x0680e964 */ LDATA extern char public_680e964; // ?
/* 0x0680e965 */ LDATA extern char public_680e965; // ?
/* 0x0680e966 */ LDATA extern char public_680e966; // ?
/* 0x0680e967 */ LDATA extern char public_680e967; // ?
/* 0x0680e968 */ LDATA extern char public_680e968; // ?
/* 0x0680e969 */ LDATA extern char public_680e969; // ?
/* 0x0680e96a */ LDATA extern char public_680e96a; // ?
/* 0x0680e96b */ LDATA extern char public_680e96b; // ?
/* 0x0680e96c */ LDATA extern char public_680e96c; // ?
/* 0x0680e96d */ LDATA extern char public_680e96d; // ?
/* 0x0680e96e */ LDATA extern char public_680e96e; // ?
/* 0x0680e96f */ LDATA extern char public_680e96f; // ?
/* 0x0680e970 */ LDATA extern char public_680e970; // ?
/* 0x0680e971 */ LDATA extern char public_680e971; // ?
/* 0x0680e972 */ LDATA extern char public_680e972; // ?
/* 0x0680e973 */ LDATA extern char public_680e973; // ?
/* 0x0680e974 */ LDATA extern char public_680e974; // ?
/* 0x0680e975 */ LDATA extern char public_680e975; // ?
/* 0x0680e976 */ LDATA extern char public_680e976; // ?
/* 0x0680e977 */ LDATA extern char public_680e977; // ?
/* 0x0680e978 */ LDATA extern char public_680e978; // ?
/* 0x0680e979 */ LDATA extern char public_680e979; // ?
/* 0x0680e97a */ LDATA extern char public_680e97a; // ?
/* 0x0680e97b */ LDATA extern char public_680e97b; // ?
/* 0x0680e97c */ LDATA extern char public_680e97c; // ?
/* 0x0680e97d */ LDATA extern char public_680e97d; // ?
/* 0x0680e97e */ LDATA extern char public_680e97e; // ?
/* 0x0680e97f */ LDATA extern char public_680e97f; // ?
/* 0x0680e980 */ LDATA extern char public_680e980; // ?
/* 0x0680e981 */ LDATA extern char public_680e981; // ?
/* 0x0680e982 */ LDATA extern char public_680e982; // ?
/* 0x0680e983 */ LDATA extern char public_680e983; // ?
/* 0x0680e984 */ LDATA extern char public_680e984; // ?
/* 0x0680e985 */ LDATA extern char public_680e985; // ?
/* 0x0680e986 */ LDATA extern char public_680e986; // ?
/* 0x0680e987 */ LDATA extern char public_680e987; // ?
/* 0x0680e988 */ LDATA extern char public_680e988; // ?
/* 0x0680e989 */ LDATA extern char public_680e989; // ?
/* 0x0680e98a */ LDATA extern char public_680e98a; // ?
/* 0x0680e98b */ LDATA extern char public_680e98b; // ?
/* 0x0680e98c */ LDATA extern char public_680e98c; // ?
/* 0x0680e98d */ LDATA extern char public_680e98d; // ?
/* 0x0680e98e */ LDATA extern char public_680e98e; // ?
/* 0x0680e98f */ LDATA extern char public_680e98f; // ?
/* 0x0680e990 */ LDATA extern char public_680e990; // ?
/* 0x0680e991 */ LDATA extern char public_680e991; // ?
/* 0x0680e992 */ LDATA extern char public_680e992; // ?
/* 0x0680e993 */ LDATA extern char public_680e993; // ?
/* 0x0680e994 */ LDATA extern char public_680e994; // ?
/* 0x0680e995 */ LDATA extern char public_680e995; // ?
/* 0x0680e996 */ LDATA extern char public_680e996; // ?
/* 0x0680e997 */ LDATA extern char public_680e997; // ?
/* 0x0680e998 */ LDATA extern char public_680e998; // ?
/* 0x0680e999 */ LDATA extern char public_680e999; // ?
/* 0x0680e99a */ LDATA extern char public_680e99a; // ?
/* 0x0680e99b */ LDATA extern char public_680e99b; // ?
/* 0x0680e99c */ LDATA extern char public_680e99c; // ?
/* 0x0680e99d */ LDATA extern char public_680e99d; // ?
/* 0x0680e99e */ LDATA extern char public_680e99e; // ?
/* 0x0680e99f */ LDATA extern char public_680e99f; // ?
/* 0x0680e9a0 */ LDATA extern char public_680e9a0; // ?
/* 0x0680e9a1 */ LDATA extern char public_680e9a1; // ?
/* 0x0680e9a2 */ LDATA extern char public_680e9a2; // ?
/* 0x0680e9a3 */ LDATA extern char public_680e9a3; // ?
/* 0x0680e9a4 */ LDATA extern char public_680e9a4; // ?
/* 0x0680e9a5 */ LDATA extern char public_680e9a5; // ?
/* 0x0680e9a6 */ LDATA extern char public_680e9a6; // ?
/* 0x0680e9a7 */ LDATA extern char public_680e9a7; // ?
/* 0x0680e9a8 */ LDATA extern char public_680e9a8; // ?
/* 0x0680e9a9 */ LDATA extern char public_680e9a9; // ?
/* 0x0680e9aa */ LDATA extern char public_680e9aa; // ?
/* 0x0680e9ab */ LDATA extern char public_680e9ab; // ?
/* 0x0680e9ac */ LDATA extern char public_680e9ac; // ?
/* 0x0680e9ad */ LDATA extern char public_680e9ad; // ?
/* 0x0680e9ae */ LDATA extern char public_680e9ae; // ?
/* 0x0680e9af */ LDATA extern char public_680e9af; // ?
/* 0x0680e9b0 */ LDATA extern char public_680e9b0; // ?
/* 0x0680e9b1 */ LDATA extern char public_680e9b1; // ?
/* 0x0680e9b2 */ LDATA extern char public_680e9b2; // ?
/* 0x0680e9b3 */ LDATA extern char public_680e9b3; // ?
/* 0x0680e9b4 */ LDATA extern char public_680e9b4; // ?
/* 0x0680e9b5 */ LDATA extern char public_680e9b5; // ?
/* 0x0680e9b6 */ LDATA extern char public_680e9b6; // ?
/* 0x0680e9b7 */ LDATA extern char public_680e9b7; // ?
/* 0x0680e9b8 */ LDATA extern char public_680e9b8; // ?
/* 0x0680e9b9 */ LDATA extern char public_680e9b9; // ?
/* 0x0680e9ba */ LDATA extern char public_680e9ba; // ?
/* 0x0680e9bb */ LDATA extern char public_680e9bb; // ?
/* 0x0680e9bc */ LDATA extern char public_680e9bc; // ?
/* 0x0680e9bd */ LDATA extern char public_680e9bd; // ?
/* 0x0680e9be */ LDATA extern char public_680e9be; // ?
/* 0x0680e9bf */ LDATA extern char public_680e9bf; // ?
/* 0x0680e9c0 */ LDATA extern char public_680e9c0; // ?
/* 0x0680e9c1 */ LDATA extern char public_680e9c1; // ?
/* 0x0680e9c2 */ LDATA extern char public_680e9c2; // ?
/* 0x0680e9c3 */ LDATA extern char public_680e9c3; // ?
/* 0x0680e9c4 */ LDATA extern char public_680e9c4; // ?
/* 0x0680e9c5 */ LDATA extern char public_680e9c5; // ?
/* 0x0680e9c6 */ LDATA extern char public_680e9c6; // ?
/* 0x0680e9c7 */ LDATA extern char public_680e9c7; // ?
/* 0x0680e9c8 */ LDATA extern char public_680e9c8; // ?
/* 0x0680e9c9 */ LDATA extern char public_680e9c9; // ?
/* 0x0680e9ca */ LDATA extern char public_680e9ca; // ?
/* 0x0680e9cb */ LDATA extern char public_680e9cb; // ?
/* 0x0680e9cc */ LDATA extern char public_680e9cc; // ?
/* 0x0680e9cd */ LDATA extern char public_680e9cd; // ?
/* 0x0680e9ce */ LDATA extern char public_680e9ce; // ?
/* 0x0680e9cf */ LDATA extern char public_680e9cf; // ?
/* 0x0680e9d0 */ LDATA extern char public_680e9d0; // ?
/* 0x0680e9d1 */ LDATA extern char public_680e9d1; // ?
/* 0x0680e9d2 */ LDATA extern char public_680e9d2; // ?
/* 0x0680e9d3 */ LDATA extern char public_680e9d3; // ?
/* 0x0680e9d4 */ LDATA extern char public_680e9d4; // ?
/* 0x0680e9d5 */ LDATA extern char public_680e9d5; // ?
/* 0x0680e9d6 */ LDATA extern char public_680e9d6; // ?
/* 0x0680e9d7 */ LDATA extern char public_680e9d7; // ?
/* 0x0680e9d8 */ LDATA extern char public_680e9d8; // ?
/* 0x0680e9d9 */ LDATA extern char public_680e9d9; // ?
/* 0x0680e9da */ LDATA extern char public_680e9da; // ?
/* 0x0680e9db */ LDATA extern char public_680e9db; // ?
/* 0x0680e9dc */ LDATA extern char public_680e9dc; // ?
/* 0x0680e9dd */ LDATA extern char public_680e9dd; // ?
/* 0x0680e9de */ LDATA extern char public_680e9de; // ?
/* 0x0680e9df */ LDATA extern char public_680e9df; // ?
/* 0x0680e9e0 */ LDATA extern char public_680e9e0; // ?
/* 0x0680e9e1 */ LDATA extern char public_680e9e1; // ?
/* 0x0680e9e2 */ LDATA extern char public_680e9e2; // ?
/* 0x0680e9e3 */ LDATA extern char public_680e9e3; // ?
/* 0x0680e9e4 */ LDATA extern char public_680e9e4; // ?
/* 0x0680e9e5 */ LDATA extern char public_680e9e5; // ?
/* 0x0680e9e6 */ LDATA extern char public_680e9e6; // ?
/* 0x0680e9e7 */ LDATA extern char public_680e9e7; // ?
/* 0x0680e9e8 */ LDATA extern char public_680e9e8; // ?
/* 0x0680e9e9 */ LDATA extern char public_680e9e9; // ?
/* 0x0680e9ea */ LDATA extern char public_680e9ea; // ?
/* 0x0680e9eb */ LDATA extern char public_680e9eb; // ?
/* 0x0680e9ec */ LDATA extern char public_680e9ec; // ?
/* 0x0680e9ed */ LDATA extern char public_680e9ed; // ?
/* 0x0680e9ee */ LDATA extern char public_680e9ee; // ?
/* 0x0680e9ef */ LDATA extern char public_680e9ef; // ?
/* 0x0680e9f0 */ LDATA extern char public_680e9f0; // ?
/* 0x0680e9f1 */ LDATA extern char public_680e9f1; // ?
/* 0x0680e9f2 */ LDATA extern char public_680e9f2; // ?
/* 0x0680e9f3 */ LDATA extern char public_680e9f3; // ?
/* 0x0680e9f4 */ LDATA extern char public_680e9f4; // ?
/* 0x0680e9f5 */ LDATA extern char public_680e9f5; // ?
/* 0x0680e9f6 */ LDATA extern char public_680e9f6; // ?
/* 0x0680e9f7 */ LDATA extern char public_680e9f7; // ?
/* 0x0680e9f8 */ LDATA extern char public_680e9f8; // ?
/* 0x0680e9f9 */ LDATA extern char public_680e9f9; // ?
/* 0x0680e9fa */ LDATA extern char public_680e9fa; // ?
/* 0x0680e9fb */ LDATA extern char public_680e9fb; // ?
/* 0x0680e9fc */ LDATA extern char public_680e9fc; // ?
/* 0x0680e9fd */ LDATA extern char public_680e9fd; // ?
/* 0x0680e9fe */ LDATA extern char public_680e9fe; // ?
/* 0x0680e9ff */ LDATA extern char public_680e9ff; // ?
/* 0x0680ea00 */ LDATA extern char public_680ea00; // ?
/* 0x0680ea01 */ LDATA extern char public_680ea01; // ?
/* 0x0680ea02 */ LDATA extern char public_680ea02; // ?
/* 0x0680ea03 */ LDATA extern char public_680ea03; // ?
/* 0x0680ea04 */ LDATA extern char public_680ea04; // ?
/* 0x0680ea05 */ LDATA extern char public_680ea05; // ?
/* 0x0680ea06 */ LDATA extern char public_680ea06; // ?
/* 0x0680ea07 */ LDATA extern char public_680ea07; // ?
/* 0x0680ea08 */ LDATA extern char public_680ea08; // ?
/* 0x0680ea09 */ LDATA extern char public_680ea09; // ?
/* 0x0680ea0a */ LDATA extern char public_680ea0a; // ?
/* 0x0680ea0b */ LDATA extern char public_680ea0b; // ?
/* 0x0680ea0c */ LDATA extern char public_680ea0c; // ?
/* 0x0680ea0d */ LDATA extern char public_680ea0d; // ?
/* 0x0680ea0e */ LDATA extern char public_680ea0e; // ?
/* 0x0680ea0f */ LDATA extern char public_680ea0f; // ?
/* 0x0680ea10 */ LDATA extern char public_680ea10; // ?
/* 0x0680ea11 */ LDATA extern char public_680ea11; // ?
/* 0x0680ea12 */ LDATA extern char public_680ea12; // ?
/* 0x0680ea13 */ LDATA extern char public_680ea13; // ?
/* 0x0680ea14 */ LDATA extern char public_680ea14; // ?
/* 0x0680ea15 */ LDATA extern char public_680ea15; // ?
/* 0x0680ea16 */ LDATA extern char public_680ea16; // ?
/* 0x0680ea17 */ LDATA extern char public_680ea17; // ?
/* 0x0680ea18 */ LDATA extern char public_680ea18; // ?
/* 0x0680ea19 */ LDATA extern char public_680ea19; // ?
/* 0x0680ea1a */ LDATA extern char public_680ea1a; // ?
/* 0x0680ea1b */ LDATA extern char public_680ea1b; // ?
/* 0x0680ea1c */ LDATA extern char public_680ea1c; // ?
/* 0x0680ea1d */ LDATA extern char public_680ea1d; // ?
/* 0x0680ea1e */ LDATA extern char public_680ea1e; // ?
/* 0x0680ea1f */ LDATA extern char public_680ea1f; // ?
/* 0x0680ea20 */ LDATA extern char public_680ea20; // ?
/* 0x0680ea21 */ LDATA extern char public_680ea21; // ?
/* 0x0680ea22 */ LDATA extern char public_680ea22; // ?
/* 0x0680ea23 */ LDATA extern char public_680ea23; // ?
/* 0x0680ea24 */ LDATA extern char public_680ea24; // ?
/* 0x0680ea25 */ LDATA extern char public_680ea25; // ?
/* 0x0680ea26 */ LDATA extern char public_680ea26; // ?
/* 0x0680ea27 */ LDATA extern char public_680ea27; // ?
/* 0x0680ea28 */ LDATA extern char public_680ea28; // ?
/* 0x0680ea29 */ LDATA extern char public_680ea29; // ?
/* 0x0680ea2a */ LDATA extern char public_680ea2a; // ?
/* 0x0680ea2b */ LDATA extern char public_680ea2b; // ?
/* 0x0680ea2c */ LDATA extern char public_680ea2c; // ?
/* 0x0680ea2d */ LDATA extern char public_680ea2d; // ?
/* 0x0680ea2e */ LDATA extern char public_680ea2e; // ?
/* 0x0680ea2f */ LDATA extern char public_680ea2f; // ?
/* 0x0680ea30 */ LDATA extern char public_680ea30; // ?
/* 0x0680ea31 */ LDATA extern char public_680ea31; // ?
/* 0x0680ea32 */ LDATA extern char public_680ea32; // ?
/* 0x0680ea33 */ LDATA extern char public_680ea33; // ?
/* 0x0680ea34 */ LDATA extern char public_680ea34; // ?
/* 0x0680ea35 */ LDATA extern char public_680ea35; // ?
/* 0x0680ea36 */ LDATA extern char public_680ea36; // ?
/* 0x0680ea37 */ LDATA extern char public_680ea37; // ?
/* 0x0680ea38 */ LDATA extern char public_680ea38; // ?
/* 0x0680ea39 */ LDATA extern char public_680ea39; // ?
/* 0x0680ea3a */ LDATA extern char public_680ea3a; // ?
/* 0x0680ea3b */ LDATA extern char public_680ea3b; // ?
/* 0x0680ea3c */ LDATA extern char public_680ea3c; // ?
/* 0x0680ea3d */ LDATA extern char public_680ea3d; // ?
/* 0x0680ea3e */ LDATA extern char public_680ea3e; // ?
/* 0x0680ea3f */ LDATA extern char public_680ea3f; // ?
/* 0x0680ea40 */ LDATA extern char public_680ea40; // ?
/* 0x0680ea41 */ LDATA extern char public_680ea41; // ?
/* 0x0680ea42 */ LDATA extern char public_680ea42; // ?
/* 0x0680ea43 */ LDATA extern char public_680ea43; // ?
/* 0x0680ea44 */ LDATA extern char public_680ea44; // ?
/* 0x0680ea45 */ LDATA extern char public_680ea45; // ?
/* 0x0680ea46 */ LDATA extern char public_680ea46; // ?
/* 0x0680ea47 */ LDATA extern char public_680ea47; // ?
/* 0x0680ea48 */ LDATA extern char public_680ea48; // ?
/* 0x0680ea49 */ LDATA extern char public_680ea49; // ?
/* 0x0680ea4a */ LDATA extern char public_680ea4a; // ?
/* 0x0680ea4b */ LDATA extern char public_680ea4b; // ?
/* 0x0680ea4c */ LDATA extern char public_680ea4c; // ?
/* 0x0680ea4d */ LDATA extern char public_680ea4d; // ?
/* 0x0680ea4e */ LDATA extern char public_680ea4e; // ?
/* 0x0680ea4f */ LDATA extern char public_680ea4f; // ?
/* 0x0680ea50 */ LDATA extern char public_680ea50; // ?
/* 0x0680ea51 */ LDATA extern char public_680ea51; // ?
/* 0x0680ea52 */ LDATA extern char public_680ea52; // ?
/* 0x0680ea53 */ LDATA extern char public_680ea53; // ?
/* 0x0680ea54 */ LDATA extern char public_680ea54; // ?
/* 0x0680ea55 */ LDATA extern char public_680ea55; // ?
/* 0x0680ea56 */ LDATA extern char public_680ea56; // ?
/* 0x0680ea57 */ LDATA extern char public_680ea57; // ?
/* 0x0680ea58 */ LDATA extern char public_680ea58; // ?
/* 0x0680ea59 */ LDATA extern char public_680ea59; // ?
/* 0x0680ea5a */ LDATA extern char public_680ea5a; // ?
/* 0x0680ea5b */ LDATA extern char public_680ea5b; // ?
/* 0x0680ea5c */ LDATA extern char public_680ea5c; // ?
/* 0x0680ea5d */ LDATA extern char public_680ea5d; // ?
/* 0x0680ea5e */ LDATA extern char public_680ea5e; // ?
/* 0x0680ea5f */ LDATA extern char public_680ea5f; // ?
/* 0x0680ea60 */ LDATA extern char public_680ea60; // ?
/* 0x0680ea61 */ LDATA extern char public_680ea61; // ?
/* 0x0680ea62 */ LDATA extern char public_680ea62; // ?
/* 0x0680ea63 */ LDATA extern char public_680ea63; // ?
/* 0x0680ea64 */ LDATA extern char public_680ea64; // ?
/* 0x0680ea65 */ LDATA extern char public_680ea65; // ?
/* 0x0680ea66 */ LDATA extern char public_680ea66; // ?
/* 0x0680ea67 */ LDATA extern char public_680ea67; // ?
/* 0x0680ea68 */ LDATA extern char public_680ea68; // ?
/* 0x0680ea69 */ LDATA extern char public_680ea69; // ?
/* 0x0680ea6a */ LDATA extern char public_680ea6a; // ?
/* 0x0680ea6b */ LDATA extern char public_680ea6b; // ?
/* 0x0680ea6c */ LDATA extern char public_680ea6c; // ?
/* 0x0680ea6d */ LDATA extern char public_680ea6d; // ?
/* 0x0680ea6e */ LDATA extern char public_680ea6e; // ?
/* 0x0680ea6f */ LDATA extern char public_680ea6f; // ?
/* 0x0680ea70 */ LDATA extern char public_680ea70; // ?
/* 0x0680ea71 */ LDATA extern char public_680ea71; // ?
/* 0x0680ea72 */ LDATA extern char public_680ea72; // ?
/* 0x0680ea73 */ LDATA extern char public_680ea73; // ?
/* 0x0680ea74 */ LDATA extern char public_680ea74; // ?
/* 0x0680ea75 */ LDATA extern char public_680ea75; // ?
/* 0x0680ea76 */ LDATA extern char public_680ea76; // ?
/* 0x0680ea77 */ LDATA extern char public_680ea77; // ?
/* 0x0680ea78 */ LDATA extern char public_680ea78; // ?
/* 0x0680ea79 */ LDATA extern char public_680ea79; // ?
/* 0x0680ea7a */ LDATA extern char public_680ea7a; // ?
/* 0x0680ea7b */ LDATA extern char public_680ea7b; // ?
/* 0x0680ea7c */ LDATA extern char public_680ea7c; // ?
/* 0x0680ea7d */ LDATA extern char public_680ea7d; // ?
/* 0x0680ea7e */ LDATA extern char public_680ea7e; // ?
/* 0x0680ea7f */ LDATA extern char public_680ea7f; // ?
/* 0x0680ea80 */ LDATA extern char public_680ea80; // ?
/* 0x0680ea81 */ LDATA extern char public_680ea81; // ?
/* 0x0680ea82 */ LDATA extern char public_680ea82; // ?
/* 0x0680ea83 */ LDATA extern char public_680ea83; // ?
/* 0x0680ea84 */ LDATA extern char public_680ea84; // ?
/* 0x0680ea85 */ LDATA extern char public_680ea85; // ?
/* 0x0680ea86 */ LDATA extern char public_680ea86; // ?
/* 0x0680ea87 */ LDATA extern char public_680ea87; // ?
/* 0x0680ea88 */ LDATA extern char public_680ea88; // ?
/* 0x0680ea89 */ LDATA extern char public_680ea89; // ?
/* 0x0680ea8a */ LDATA extern char public_680ea8a; // ?
/* 0x0680ea8b */ LDATA extern char public_680ea8b; // ?
/* 0x0680ea8c */ LDATA extern char public_680ea8c; // ?
/* 0x0680ea8d */ LDATA extern char public_680ea8d; // ?
/* 0x0680ea8e */ LDATA extern char public_680ea8e; // ?
/* 0x0680ea8f */ LDATA extern char public_680ea8f; // ?
/* 0x0680ea90 */ LDATA extern char public_680ea90; // ?
/* 0x0680ea91 */ LDATA extern char public_680ea91; // ?
/* 0x0680ea92 */ LDATA extern char public_680ea92; // ?
/* 0x0680ea93 */ LDATA extern char public_680ea93; // ?
/* 0x0680ea94 */ LDATA extern char public_680ea94; // ?
/* 0x0680ea95 */ LDATA extern char public_680ea95; // ?
/* 0x0680ea96 */ LDATA extern char public_680ea96; // ?
/* 0x0680ea97 */ LDATA extern char public_680ea97; // ?
/* 0x0680ea98 */ LDATA extern char public_680ea98; // ?
/* 0x0680ea99 */ LDATA extern char public_680ea99; // ?
/* 0x0680ea9a */ LDATA extern char public_680ea9a; // ?
/* 0x0680ea9b */ LDATA extern char public_680ea9b; // ?
/* 0x0680ea9c */ LDATA extern char public_680ea9c; // ?
/* 0x0680ea9d */ LDATA extern char public_680ea9d; // ?
/* 0x0680ea9e */ LDATA extern char public_680ea9e; // ?
/* 0x0680ea9f */ LDATA extern char public_680ea9f; // ?
/* 0x0680eaa0 */ LDATA extern char public_680eaa0; // ?
/* 0x0680eaa1 */ LDATA extern char public_680eaa1; // ?
/* 0x0680eaa2 */ LDATA extern char public_680eaa2; // ?
/* 0x0680eaa3 */ LDATA extern char public_680eaa3; // ?
/* 0x0680eaa4 */ LDATA extern char public_680eaa4; // ?
/* 0x0680eaa5 */ LDATA extern char public_680eaa5; // ?
/* 0x0680eaa6 */ LDATA extern char public_680eaa6; // ?
/* 0x0680eaa7 */ LDATA extern char public_680eaa7; // ?
/* 0x0680eaa8 */ LDATA extern char public_680eaa8; // ?
/* 0x0680eaa9 */ LDATA extern char public_680eaa9; // ?
/* 0x0680eaaa */ LDATA extern char public_680eaaa; // ?
/* 0x0680eaab */ LDATA extern char public_680eaab; // ?
/* 0x0680eaac */ LDATA extern char public_680eaac; // ?
/* 0x0680eaad */ LDATA extern char public_680eaad; // ?
/* 0x0680eaae */ LDATA extern char public_680eaae; // ?
/* 0x0680eaaf */ LDATA extern char public_680eaaf; // ?
/* 0x0680eab0 */ LDATA extern char public_680eab0; // ?
/* 0x0680eab1 */ LDATA extern char public_680eab1; // ?
/* 0x0680eab2 */ LDATA extern char public_680eab2; // ?
/* 0x0680eab3 */ LDATA extern char public_680eab3; // ?
/* 0x0680eab4 */ LDATA extern char public_680eab4; // ?
/* 0x0680eab5 */ LDATA extern char public_680eab5; // ?
/* 0x0680eab6 */ LDATA extern char public_680eab6; // ?
/* 0x0680eab7 */ LDATA extern char public_680eab7; // ?
/* 0x0680eab8 */ LDATA extern char public_680eab8; // ?
/* 0x0680eab9 */ LDATA extern char public_680eab9; // ?
/* 0x0680eaba */ LDATA extern char public_680eaba; // ?
/* 0x0680eabb */ LDATA extern char public_680eabb; // ?
/* 0x0680eabc */ LDATA extern char public_680eabc; // ?
/* 0x0680eabd */ LDATA extern char public_680eabd; // ?
/* 0x0680eabe */ LDATA extern char public_680eabe; // ?
/* 0x0680eabf */ LDATA extern char public_680eabf; // ?
/* 0x0680eac0 */ LDATA extern char public_680eac0; // ?
/* 0x0680eac1 */ LDATA extern char public_680eac1; // ?
/* 0x0680eac2 */ LDATA extern char public_680eac2; // ?
/* 0x0680eac3 */ LDATA extern char public_680eac3; // ?
/* 0x0680eac4 */ LDATA extern char public_680eac4; // ?
/* 0x0680eac5 */ LDATA extern char public_680eac5; // ?
/* 0x0680eac6 */ LDATA extern char public_680eac6; // ?
/* 0x0680eac7 */ LDATA extern char public_680eac7; // ?
/* 0x0680eac8 */ LDATA extern char public_680eac8; // ?
/* 0x0680eac9 */ LDATA extern char public_680eac9; // ?
/* 0x0680eaca */ LDATA extern char public_680eaca; // ?
/* 0x0680eacb */ LDATA extern char public_680eacb; // ?
/* 0x0680eacc */ LDATA extern char public_680eacc; // ?
/* 0x0680eacd */ LDATA extern char public_680eacd; // ?
/* 0x0680eace */ LDATA extern char public_680eace; // ?
/* 0x0680eacf */ LDATA extern char public_680eacf; // ?
/* 0x0680ead0 */ LDATA extern char public_680ead0; // ?
/* 0x0680ead1 */ LDATA extern char public_680ead1; // ?
/* 0x0680ead2 */ LDATA extern char public_680ead2; // ?
/* 0x0680ead3 */ LDATA extern char public_680ead3; // ?
/* 0x0680ead4 */ LDATA extern char public_680ead4; // ?
/* 0x0680ead5 */ LDATA extern char public_680ead5; // ?
/* 0x0680ead6 */ LDATA extern char public_680ead6; // ?
/* 0x0680ead7 */ LDATA extern char public_680ead7; // ?
/* 0x0680ead8 */ LDATA extern char public_680ead8; // ?
/* 0x0680ead9 */ LDATA extern char public_680ead9; // ?
/* 0x0680eada */ LDATA extern char public_680eada; // ?
/* 0x0680eadb */ LDATA extern char public_680eadb; // ?
/* 0x0680eadc */ LDATA extern char public_680eadc; // ?
/* 0x0680eadd */ LDATA extern char public_680eadd; // ?
/* 0x0680eade */ LDATA extern char public_680eade; // ?
/* 0x0680eadf */ LDATA extern char public_680eadf; // ?
/* 0x0680eae0 */ LDATA extern char public_680eae0; // ?
/* 0x0680eae1 */ LDATA extern char public_680eae1; // ?
/* 0x0680eae2 */ LDATA extern char public_680eae2; // ?
/* 0x0680eae3 */ LDATA extern char public_680eae3; // ?
/* 0x0680eae4 */ LDATA extern char public_680eae4; // ?
/* 0x0680eae5 */ LDATA extern char public_680eae5; // ?
/* 0x0680eae6 */ LDATA extern char public_680eae6; // ?
/* 0x0680eae7 */ LDATA extern char public_680eae7; // ?
/* 0x0680eae8 */ LDATA extern char public_680eae8; // ?
/* 0x0680eae9 */ LDATA extern char public_680eae9; // ?
/* 0x0680eaea */ LDATA extern char public_680eaea; // ?
/* 0x0680eaeb */ LDATA extern char public_680eaeb; // ?
/* 0x0680eaec */ LDATA extern char public_680eaec; // ?
/* 0x0680eaed */ LDATA extern char public_680eaed; // ?
/* 0x0680eaee */ LDATA extern char public_680eaee; // ?
/* 0x0680eaef */ LDATA extern char public_680eaef; // ?
/* 0x0680eaf0 */ LDATA extern char public_680eaf0; // ?
/* 0x0680eaf1 */ LDATA extern char public_680eaf1; // ?
/* 0x0680eaf2 */ LDATA extern char public_680eaf2; // ?
/* 0x0680eaf3 */ LDATA extern char public_680eaf3; // ?
/* 0x0680eaf4 */ LDATA extern char public_680eaf4; // ?
/* 0x0680eaf5 */ LDATA extern char public_680eaf5; // ?
/* 0x0680eaf6 */ LDATA extern char public_680eaf6; // ?
/* 0x0680eaf7 */ LDATA extern char public_680eaf7; // ?
/* 0x0680eaf8 */ LDATA extern char public_680eaf8; // ?
/* 0x0680eaf9 */ LDATA extern char public_680eaf9; // ?
/* 0x0680eafa */ LDATA extern char public_680eafa; // ?
/* 0x0680eafb */ LDATA extern char public_680eafb; // ?
/* 0x0680eafc */ LDATA extern char public_680eafc; // ?
/* 0x0680eafd */ LDATA extern char public_680eafd; // ?
/* 0x0680eafe */ LDATA extern char public_680eafe; // ?
/* 0x0680eaff */ LDATA extern char public_680eaff; // ?
/* 0x0680eb00 */ LDATA extern char public_680eb00; // ?
/* 0x0680eb01 */ LDATA extern char public_680eb01; // ?
/* 0x0680eb02 */ LDATA extern char public_680eb02; // ?
/* 0x0680eb03 */ LDATA extern char public_680eb03; // ?
/* 0x0680eb04 */ LDATA extern char public_680eb04; // ?
/* 0x0680eb05 */ LDATA extern char public_680eb05; // ?
/* 0x0680eb06 */ LDATA extern char public_680eb06; // ?
/* 0x0680eb07 */ LDATA extern char public_680eb07; // ?
/* 0x0680eb08 */ LDATA extern char public_680eb08; // ?
/* 0x0680eb09 */ LDATA extern char public_680eb09; // ?
/* 0x0680eb0a */ LDATA extern char public_680eb0a; // ?
/* 0x0680eb0b */ LDATA extern char public_680eb0b; // ?
/* 0x0680eb0c */ LDATA extern char public_680eb0c; // ?
/* 0x0680eb0d */ LDATA extern char public_680eb0d; // ?
/* 0x0680eb0e */ LDATA extern char public_680eb0e; // ?
/* 0x0680eb0f */ LDATA extern char public_680eb0f; // ?
/* 0x0680eb10 */ LDATA extern char public_680eb10; // ?
/* 0x0680eb11 */ LDATA extern char public_680eb11; // ?
/* 0x0680eb12 */ LDATA extern char public_680eb12; // ?
/* 0x0680eb13 */ LDATA extern char public_680eb13; // ?
/* 0x0680eb14 */ LDATA extern char public_680eb14; // ?
/* 0x0680eb15 */ LDATA extern char public_680eb15; // ?
/* 0x0680eb16 */ LDATA extern char public_680eb16; // ?
/* 0x0680eb17 */ LDATA extern char public_680eb17; // ?
/* 0x0680eb18 */ LDATA extern char public_680eb18; // ?
/* 0x0680eb19 */ LDATA extern char public_680eb19; // ?
/* 0x0680eb1a */ LDATA extern char public_680eb1a; // ?
/* 0x0680eb1b */ LDATA extern char public_680eb1b; // ?
/* 0x0680eb1c */ LDATA extern char public_680eb1c; // ?
/* 0x0680eb1d */ LDATA extern char public_680eb1d; // ?
/* 0x0680eb1e */ LDATA extern char public_680eb1e; // ?
/* 0x0680eb1f */ LDATA extern char public_680eb1f; // ?
/* 0x0680eb20 */ LDATA extern char public_680eb20; // ?
/* 0x0680eb21 */ LDATA extern char public_680eb21; // ?
/* 0x0680eb22 */ LDATA extern char public_680eb22; // ?
/* 0x0680eb23 */ LDATA extern char public_680eb23; // ?
/* 0x0680eb24 */ LDATA extern char public_680eb24; // ?
/* 0x0680eb25 */ LDATA extern char public_680eb25; // ?
/* 0x0680eb26 */ LDATA extern char public_680eb26; // ?
/* 0x0680eb27 */ LDATA extern char public_680eb27; // ?
/* 0x0680eb28 */ LDATA extern char public_680eb28; // ?
/* 0x0680eb29 */ LDATA extern char public_680eb29; // ?
/* 0x0680eb2a */ LDATA extern char public_680eb2a; // ?
/* 0x0680eb2b */ LDATA extern char public_680eb2b; // ?
/* 0x0680eb2c */ LDATA extern char public_680eb2c; // ?
/* 0x0680eb2d */ LDATA extern char public_680eb2d; // ?
/* 0x0680eb2e */ LDATA extern char public_680eb2e; // ?
/* 0x0680eb2f */ LDATA extern char public_680eb2f; // ?
/* 0x0680eb30 */ LDATA extern char public_680eb30; // ?
/* 0x0680eb31 */ LDATA extern char public_680eb31; // ?
/* 0x0680eb32 */ LDATA extern char public_680eb32; // ?
/* 0x0680eb33 */ LDATA extern char public_680eb33; // ?
/* 0x0680eb34 */ LDATA extern char public_680eb34; // ?
/* 0x0680eb35 */ LDATA extern char public_680eb35; // ?
/* 0x0680eb36 */ LDATA extern char public_680eb36; // ?
/* 0x0680eb37 */ LDATA extern char public_680eb37; // ?
/* 0x0680eb38 */ LDATA extern char public_680eb38; // ?
/* 0x0680eb39 */ LDATA extern char public_680eb39; // ?
/* 0x0680eb3a */ LDATA extern char public_680eb3a; // ?
/* 0x0680eb3b */ LDATA extern char public_680eb3b; // ?
/* 0x0680eb3c */ LDATA extern char public_680eb3c; // ?
/* 0x0680eb3d */ LDATA extern char public_680eb3d; // ?
/* 0x0680eb3e */ LDATA extern char public_680eb3e; // ?
/* 0x0680eb3f */ LDATA extern char public_680eb3f; // ?
/* 0x0680eb40 */ LDATA extern char public_680eb40; // ?
/* 0x0680eb41 */ LDATA extern char public_680eb41; // ?
/* 0x0680eb42 */ LDATA extern char public_680eb42; // ?
/* 0x0680eb43 */ LDATA extern char public_680eb43; // ?
/* 0x0680eb44 */ LDATA extern char public_680eb44; // ?
/* 0x0680eb45 */ LDATA extern char public_680eb45; // ?
/* 0x0680eb46 */ LDATA extern char public_680eb46; // ?
/* 0x0680eb47 */ LDATA extern char public_680eb47; // ?
/* 0x0680eb48 */ LDATA extern char public_680eb48; // ?
/* 0x0680eb49 */ LDATA extern char public_680eb49; // ?
/* 0x0680eb4a */ LDATA extern char public_680eb4a; // ?
/* 0x0680eb4b */ LDATA extern char public_680eb4b; // ?
/* 0x0680eb4c */ LDATA extern char public_680eb4c; // ?
/* 0x0680eb4d */ LDATA extern char public_680eb4d; // ?
/* 0x0680eb4e */ LDATA extern char public_680eb4e; // ?
/* 0x0680eb4f */ LDATA extern char public_680eb4f; // ?
/* 0x0680eb50 */ LDATA extern char public_680eb50; // ?
/* 0x0680eb51 */ LDATA extern char public_680eb51; // ?
/* 0x0680eb52 */ LDATA extern char public_680eb52; // ?
/* 0x0680eb53 */ LDATA extern char public_680eb53; // ?
/* 0x0680eb54 */ LDATA extern char public_680eb54; // ?
/* 0x0680eb55 */ LDATA extern char public_680eb55; // ?
/* 0x0680eb56 */ LDATA extern char public_680eb56; // ?
/* 0x0680eb57 */ LDATA extern char public_680eb57; // ?
/* 0x0680eb58 */ LDATA extern char public_680eb58; // ?
/* 0x0680eb59 */ LDATA extern char public_680eb59; // ?
/* 0x0680eb5a */ LDATA extern char public_680eb5a; // ?
/* 0x0680eb5b */ LDATA extern char public_680eb5b; // ?
/* 0x0680eb5c */ LDATA extern char public_680eb5c; // ?
/* 0x0680eb5d */ LDATA extern char public_680eb5d; // ?
/* 0x0680eb5e */ LDATA extern char public_680eb5e; // ?
/* 0x0680eb5f */ LDATA extern char public_680eb5f; // ?
/* 0x0680eb60 */ LDATA extern char public_680eb60; // ?
/* 0x0680eb61 */ LDATA extern char public_680eb61; // ?
/* 0x0680eb62 */ LDATA extern char public_680eb62; // ?
/* 0x0680eb63 */ LDATA extern char public_680eb63; // ?
/* 0x0680eb64 */ LDATA extern char public_680eb64; // ?
/* 0x0680eb65 */ LDATA extern char public_680eb65; // ?
/* 0x0680eb66 */ LDATA extern char public_680eb66; // ?
/* 0x0680eb67 */ LDATA extern char public_680eb67; // ?
/* 0x0680eb68 */ LDATA extern char public_680eb68; // ?
/* 0x0680eb69 */ LDATA extern char public_680eb69; // ?
/* 0x0680eb6a */ LDATA extern char public_680eb6a; // ?
/* 0x0680eb6b */ LDATA extern char public_680eb6b; // ?
/* 0x0680eb6c */ LDATA extern char public_680eb6c; // ?
/* 0x0680eb6d */ LDATA extern char public_680eb6d; // ?
/* 0x0680eb6e */ LDATA extern char public_680eb6e; // ?
/* 0x0680eb6f */ LDATA extern char public_680eb6f; // ?
/* 0x0680eb70 */ LDATA extern char public_680eb70; // ?
/* 0x0680eb71 */ LDATA extern char public_680eb71; // ?
/* 0x0680eb72 */ LDATA extern char public_680eb72; // ?
/* 0x0680eb73 */ LDATA extern char public_680eb73; // ?
/* 0x0680eb74 */ LDATA extern char public_680eb74; // ?
/* 0x0680eb75 */ LDATA extern char public_680eb75; // ?
/* 0x0680eb76 */ LDATA extern char public_680eb76; // ?
/* 0x0680eb77 */ LDATA extern char public_680eb77; // ?
/* 0x0680eb78 */ LDATA extern char public_680eb78; // ?
/* 0x0680eb79 */ LDATA extern char public_680eb79; // ?
/* 0x0680eb7a */ LDATA extern char public_680eb7a; // ?
/* 0x0680eb7b */ LDATA extern char public_680eb7b; // ?
/* 0x0680eb7c */ LDATA extern char public_680eb7c; // ?
/* 0x0680eb7d */ LDATA extern char public_680eb7d; // ?
/* 0x0680eb7e */ LDATA extern char public_680eb7e; // ?
/* 0x0680eb7f */ LDATA extern char public_680eb7f; // ?
/* 0x0680eb80 */ LDATA extern char public_680eb80; // ?
/* 0x0680eb81 */ LDATA extern char public_680eb81; // ?
/* 0x0680eb82 */ LDATA extern char public_680eb82; // ?
/* 0x0680eb83 */ LDATA extern char public_680eb83; // ?
/* 0x0680eb84 */ LDATA extern char public_680eb84; // ?
/* 0x0680eb85 */ LDATA extern char public_680eb85; // ?
/* 0x0680eb86 */ LDATA extern char public_680eb86; // ?
/* 0x0680eb87 */ LDATA extern char public_680eb87; // ?
/* 0x0680eb88 */ LDATA extern char public_680eb88; // ?
/* 0x0680eb89 */ LDATA extern char public_680eb89; // ?
/* 0x0680eb8a */ LDATA extern char public_680eb8a; // ?
/* 0x0680eb8b */ LDATA extern char public_680eb8b; // ?
/* 0x0680eb8c */ LDATA extern char public_680eb8c; // ?
/* 0x0680eb8d */ LDATA extern char public_680eb8d; // ?
/* 0x0680eb8e */ LDATA extern char public_680eb8e; // ?
/* 0x0680eb8f */ LDATA extern char public_680eb8f; // ?
/* 0x0680eb90 */ LDATA extern char public_680eb90; // ?
/* 0x0680eb91 */ LDATA extern char public_680eb91; // ?
/* 0x0680eb92 */ LDATA extern char public_680eb92; // ?
/* 0x0680eb93 */ LDATA extern char public_680eb93; // ?
/* 0x0680eb94 */ LDATA extern char public_680eb94; // ?
/* 0x0680eb95 */ LDATA extern char public_680eb95; // ?
/* 0x0680eb96 */ LDATA extern char public_680eb96; // ?
/* 0x0680eb97 */ LDATA extern char public_680eb97; // ?
/* 0x0680eb98 */ LDATA extern char public_680eb98; // ?
/* 0x0680eb99 */ LDATA extern char public_680eb99; // ?
/* 0x0680eb9a */ LDATA extern char public_680eb9a; // ?
/* 0x0680eb9b */ LDATA extern char public_680eb9b; // ?
/* 0x0680eb9c */ LDATA extern char public_680eb9c; // ?
/* 0x0680eb9d */ LDATA extern char public_680eb9d; // ?
/* 0x0680eb9e */ LDATA extern char public_680eb9e; // ?
/* 0x0680eb9f */ LDATA extern char public_680eb9f; // ?
/* 0x0680eba0 */ LDATA extern char public_680eba0; // ?
/* 0x0680eba1 */ LDATA extern char public_680eba1; // ?
/* 0x0680eba2 */ LDATA extern char public_680eba2; // ?
/* 0x0680eba3 */ LDATA extern char public_680eba3; // ?
/* 0x0680eba4 */ LDATA extern char public_680eba4; // ?
/* 0x0680eba5 */ LDATA extern char public_680eba5; // ?
/* 0x0680eba6 */ LDATA extern char public_680eba6; // ?
/* 0x0680eba7 */ LDATA extern char public_680eba7; // ?
/* 0x0680eba8 */ LDATA extern char public_680eba8; // ?
/* 0x0680eba9 */ LDATA extern char public_680eba9; // ?
/* 0x0680ebaa */ LDATA extern char public_680ebaa; // ?
/* 0x0680ebab */ LDATA extern char public_680ebab; // ?
/* 0x0680ebac */ LDATA extern char public_680ebac; // ?
/* 0x0680ebad */ LDATA extern char public_680ebad; // ?
/* 0x0680ebae */ LDATA extern char public_680ebae; // ?
/* 0x0680ebaf */ LDATA extern char public_680ebaf; // ?
/* 0x0680ebb0 */ LDATA extern char public_680ebb0; // ?
/* 0x0680ebb1 */ LDATA extern char public_680ebb1; // ?
/* 0x0680ebb2 */ LDATA extern char public_680ebb2; // ?
/* 0x0680ebb3 */ LDATA extern char public_680ebb3; // ?
/* 0x0680ebb4 */ LDATA extern char public_680ebb4; // ?
/* 0x0680ebb5 */ LDATA extern char public_680ebb5; // ?
/* 0x0680ebb6 */ LDATA extern char public_680ebb6; // ?
/* 0x0680ebb7 */ LDATA extern char public_680ebb7; // ?
/* 0x0680ebb8 */ LDATA extern char public_680ebb8; // ?
/* 0x0680ebb9 */ LDATA extern char public_680ebb9; // ?
/* 0x0680ebba */ LDATA extern char public_680ebba; // ?
/* 0x0680ebbb */ LDATA extern char public_680ebbb; // ?
/* 0x0680ebbc */ LDATA extern char public_680ebbc; // ?
/* 0x0680ebbd */ LDATA extern char public_680ebbd; // ?
/* 0x0680ebbe */ LDATA extern char public_680ebbe; // ?
/* 0x0680ebbf */ LDATA extern char public_680ebbf; // ?
/* 0x0680ebc0 */ LDATA extern char public_680ebc0; // ?
/* 0x0680ebc1 */ LDATA extern char public_680ebc1; // ?
/* 0x0680ebc2 */ LDATA extern char public_680ebc2; // ?
/* 0x0680ebc3 */ LDATA extern char public_680ebc3; // ?
/* 0x0680ebc4 */ LDATA extern char public_680ebc4; // ?
/* 0x0680ebc5 */ LDATA extern char public_680ebc5; // ?
/* 0x0680ebc6 */ LDATA extern char public_680ebc6; // ?
/* 0x0680ebc7 */ LDATA extern char public_680ebc7; // ?
/* 0x0680ebc8 */ LDATA extern char public_680ebc8; // ?
/* 0x0680ebc9 */ LDATA extern char public_680ebc9; // ?
/* 0x0680ebca */ LDATA extern char public_680ebca; // ?
/* 0x0680ebcb */ LDATA extern char public_680ebcb; // ?
/* 0x0680ebcc */ LDATA extern char public_680ebcc; // ?
/* 0x0680ebcd */ LDATA extern char public_680ebcd; // ?
/* 0x0680ebce */ LDATA extern char public_680ebce; // ?
/* 0x0680ebcf */ LDATA extern char public_680ebcf; // ?
/* 0x0680ebd0 */ LDATA extern char public_680ebd0; // ?
/* 0x0680ebd1 */ LDATA extern char public_680ebd1; // ?
/* 0x0680ebd2 */ LDATA extern char public_680ebd2; // ?
/* 0x0680ebd3 */ LDATA extern char public_680ebd3; // ?
/* 0x0680ebd4 */ LDATA extern char public_680ebd4; // ?
/* 0x0680ebd5 */ LDATA extern char public_680ebd5; // ?
/* 0x0680ebd6 */ LDATA extern char public_680ebd6; // ?
/* 0x0680ebd7 */ LDATA extern char public_680ebd7; // ?
/* 0x0680ebd8 */ LDATA extern char public_680ebd8; // ?
/* 0x0680ebd9 */ LDATA extern char public_680ebd9; // ?
/* 0x0680ebda */ LDATA extern char public_680ebda; // ?
/* 0x0680ebdb */ LDATA extern char public_680ebdb; // ?
/* 0x0680ebdc */ LDATA extern char public_680ebdc; // ?
/* 0x0680ebdd */ LDATA extern char public_680ebdd; // ?
/* 0x0680ebde */ LDATA extern char public_680ebde; // ?
/* 0x0680ebdf */ LDATA extern char public_680ebdf; // ?
/* 0x0680ebe0 */ LDATA extern char public_680ebe0; // ?
/* 0x0680ebe1 */ LDATA extern char public_680ebe1; // ?
/* 0x0680ebe2 */ LDATA extern char public_680ebe2; // ?
/* 0x0680ebe3 */ LDATA extern char public_680ebe3; // ?
/* 0x0680ebe4 */ LDATA extern char public_680ebe4; // ?
/* 0x0680ebe5 */ LDATA extern char public_680ebe5; // ?
/* 0x0680ebe6 */ LDATA extern char public_680ebe6; // ?
/* 0x0680ebe7 */ LDATA extern char public_680ebe7; // ?
/* 0x0680ebe8 */ LDATA extern char public_680ebe8; // ?
/* 0x0680ebe9 */ LDATA extern char public_680ebe9; // ?
/* 0x0680ebea */ LDATA extern char public_680ebea; // ?
/* 0x0680ebeb */ LDATA extern char public_680ebeb; // ?
/* 0x0680ebec */ LDATA extern char public_680ebec; // ?
/* 0x0680ebed */ LDATA extern char public_680ebed; // ?
/* 0x0680ebee */ LDATA extern char public_680ebee; // ?
/* 0x0680ebef */ LDATA extern char public_680ebef; // ?
/* 0x0680ebf0 */ LDATA extern char public_680ebf0; // ?
/* 0x0680ebf1 */ LDATA extern char public_680ebf1; // ?
/* 0x0680ebf2 */ LDATA extern char public_680ebf2; // ?
/* 0x0680ebf3 */ LDATA extern char public_680ebf3; // ?
/* 0x0680ebf4 */ LDATA extern char public_680ebf4; // ?
/* 0x0680ebf5 */ LDATA extern char public_680ebf5; // ?
/* 0x0680ebf6 */ LDATA extern char public_680ebf6; // ?
/* 0x0680ebf7 */ LDATA extern char public_680ebf7; // ?
/* 0x0680ebf8 */ LDATA extern char public_680ebf8; // ?
/* 0x0680ebf9 */ LDATA extern char public_680ebf9; // ?
/* 0x0680ebfa */ LDATA extern char public_680ebfa; // ?
/* 0x0680ebfb */ LDATA extern char public_680ebfb; // ?
/* 0x0680ebfc */ LDATA extern char public_680ebfc; // ?
/* 0x0680ebfd */ LDATA extern char public_680ebfd; // ?
/* 0x0680ebfe */ LDATA extern char public_680ebfe; // ?
/* 0x0680ebff */ LDATA extern char public_680ebff; // ?
/* 0x0680ec00 */ LDATA extern char public_680ec00; // ?
/* 0x0680ec01 */ LDATA extern char public_680ec01; // ?
/* 0x0680ec02 */ LDATA extern char public_680ec02; // ?
/* 0x0680ec03 */ LDATA extern char public_680ec03; // ?
/* 0x0680ec04 */ LDATA extern char public_680ec04; // ?
/* 0x0680ec05 */ LDATA extern char public_680ec05; // ?
/* 0x0680ec06 */ LDATA extern char public_680ec06; // ?
/* 0x0680ec07 */ LDATA extern char public_680ec07; // ?
/* 0x0680ec08 */ LDATA extern char public_680ec08; // ?
/* 0x0680ec09 */ LDATA extern char public_680ec09; // ?
/* 0x0680ec0a */ LDATA extern char public_680ec0a; // ?
/* 0x0680ec0b */ LDATA extern char public_680ec0b; // ?
/* 0x0680ec0c */ LDATA extern char public_680ec0c; // ?
/* 0x0680ec0d */ LDATA extern char public_680ec0d; // ?
/* 0x0680ec0e */ LDATA extern char public_680ec0e; // ?
/* 0x0680ec0f */ LDATA extern char public_680ec0f; // ?
/* 0x0680ec10 */ LDATA extern char public_680ec10; // ?
/* 0x0680ec11 */ LDATA extern char public_680ec11; // ?
/* 0x0680ec12 */ LDATA extern char public_680ec12; // ?
/* 0x0680ec13 */ LDATA extern char public_680ec13; // ?
/* 0x0680ec14 */ LDATA extern char public_680ec14; // ?
/* 0x0680ec15 */ LDATA extern char public_680ec15; // ?
/* 0x0680ec16 */ LDATA extern char public_680ec16; // ?
/* 0x0680ec17 */ LDATA extern char public_680ec17; // ?
/* 0x0680ec18 */ LDATA extern char public_680ec18; // ?
/* 0x0680ec19 */ LDATA extern char public_680ec19; // ?
/* 0x0680ec1a */ LDATA extern char public_680ec1a; // ?
/* 0x0680ec1b */ LDATA extern char public_680ec1b; // ?
/* 0x0680ec1c */ LDATA extern char public_680ec1c; // ?
/* 0x0680ec1d */ LDATA extern char public_680ec1d; // ?
/* 0x0680ec1e */ LDATA extern char public_680ec1e; // ?
/* 0x0680ec1f */ LDATA extern char public_680ec1f; // ?
/* 0x0680ec20 */ LDATA extern char public_680ec20; // ?
/* 0x0680ec21 */ LDATA extern char public_680ec21; // ?
/* 0x0680ec22 */ LDATA extern char public_680ec22; // ?
/* 0x0680ec23 */ LDATA extern char public_680ec23; // ?
/* 0x0680ec24 */ LDATA extern char public_680ec24; // ?
/* 0x0680ec25 */ LDATA extern char public_680ec25; // ?
/* 0x0680ec26 */ LDATA extern char public_680ec26; // ?
/* 0x0680ec27 */ LDATA extern char public_680ec27; // ?
/* 0x0680ec28 */ LDATA extern char public_680ec28; // ?
/* 0x0680ec29 */ LDATA extern char public_680ec29; // ?
/* 0x0680ec2a */ LDATA extern char public_680ec2a; // ?
/* 0x0680ec2b */ LDATA extern char public_680ec2b; // ?
/* 0x0680ec2c */ LDATA extern char public_680ec2c; // ?
/* 0x0680ec2d */ LDATA extern char public_680ec2d; // ?
/* 0x0680ec2e */ LDATA extern char public_680ec2e; // ?
/* 0x0680ec2f */ LDATA extern char public_680ec2f; // ?
/* 0x0680ec30 */ LDATA extern char public_680ec30; // ?
/* 0x0680ec31 */ LDATA extern char public_680ec31; // ?
/* 0x0680ec32 */ LDATA extern char public_680ec32; // ?
/* 0x0680ec33 */ LDATA extern char public_680ec33; // ?
/* 0x0680ec34 */ LDATA extern char public_680ec34; // ?
/* 0x0680ec35 */ LDATA extern char public_680ec35; // ?
/* 0x0680ec36 */ LDATA extern char public_680ec36; // ?
/* 0x0680ec37 */ LDATA extern char public_680ec37; // ?
/* 0x0680ec38 */ LDATA extern char public_680ec38; // ?
/* 0x0680ec39 */ LDATA extern char public_680ec39; // ?
/* 0x0680ec3a */ LDATA extern char public_680ec3a; // ?
/* 0x0680ec3b */ LDATA extern char public_680ec3b; // ?
/* 0x0680ec3c */ LDATA extern char public_680ec3c; // ?
/* 0x0680ec3d */ LDATA extern char public_680ec3d; // ?
/* 0x0680ec3e */ LDATA extern char public_680ec3e; // ?
/* 0x0680ec3f */ LDATA extern char public_680ec3f; // ?
/* 0x0680ec40 */ LDATA extern char public_680ec40; // ?
/* 0x0680ec41 */ LDATA extern char public_680ec41; // ?
/* 0x0680ec42 */ LDATA extern char public_680ec42; // ?
/* 0x0680ec43 */ LDATA extern char public_680ec43; // ?
/* 0x0680ec44 */ LDATA extern char public_680ec44; // ?
/* 0x0680ec45 */ LDATA extern char public_680ec45; // ?
/* 0x0680ec46 */ LDATA extern char public_680ec46; // ?
/* 0x0680ec47 */ LDATA extern char public_680ec47; // ?
/* 0x0680ec48 */ LDATA extern char public_680ec48; // ?
/* 0x0680ec49 */ LDATA extern char public_680ec49; // ?
/* 0x0680ec4a */ LDATA extern char public_680ec4a; // ?
/* 0x0680ec4b */ LDATA extern char public_680ec4b; // ?
/* 0x0680ec4c */ LDATA extern char public_680ec4c; // ?
/* 0x0680ec4d */ LDATA extern char public_680ec4d; // ?
/* 0x0680ec4e */ LDATA extern char public_680ec4e; // ?
/* 0x0680ec4f */ LDATA extern char public_680ec4f; // ?
/* 0x0680ec50 */ LDATA extern char public_680ec50; // ?
/* 0x0680ec51 */ LDATA extern char public_680ec51; // ?
/* 0x0680ec52 */ LDATA extern char public_680ec52; // ?
/* 0x0680ec53 */ LDATA extern char public_680ec53; // ?
/* 0x0680ec54 */ LDATA extern char public_680ec54; // ?
/* 0x0680ec55 */ LDATA extern char public_680ec55; // ?
/* 0x0680ec56 */ LDATA extern char public_680ec56; // ?
/* 0x0680ec57 */ LDATA extern char public_680ec57; // ?
/* 0x0680ec58 */ LDATA extern char public_680ec58; // ?
/* 0x0680ec59 */ LDATA extern char public_680ec59; // ?
/* 0x0680ec5a */ LDATA extern char public_680ec5a; // ?
/* 0x0680ec5b */ LDATA extern char public_680ec5b; // ?
/* 0x0680ec5c */ LDATA extern char public_680ec5c; // ?
/* 0x0680ec5d */ LDATA extern char public_680ec5d; // ?
/* 0x0680ec5e */ LDATA extern char public_680ec5e; // ?
/* 0x0680ec5f */ LDATA extern char public_680ec5f; // ?
/* 0x0680ec60 */ LDATA extern char public_680ec60; // ?
/* 0x0680ec61 */ LDATA extern char public_680ec61; // ?
/* 0x0680ec62 */ LDATA extern char public_680ec62; // ?
/* 0x0680ec63 */ LDATA extern char public_680ec63; // ?
/* 0x0680ec64 */ LDATA extern char public_680ec64; // ?
/* 0x0680ec65 */ LDATA extern char public_680ec65; // ?
/* 0x0680ec66 */ LDATA extern char public_680ec66; // ?
/* 0x0680ec67 */ LDATA extern char public_680ec67; // ?
/* 0x0680ec68 */ LDATA extern char public_680ec68; // ?
/* 0x0680ec69 */ LDATA extern char public_680ec69; // ?
/* 0x0680ec6a */ LDATA extern char public_680ec6a; // ?
/* 0x0680ec6b */ LDATA extern char public_680ec6b; // ?
/* 0x0680ec6c */ LDATA extern char public_680ec6c; // ?
/* 0x0680ec6d */ LDATA extern char public_680ec6d; // ?
/* 0x0680ec6e */ LDATA extern char public_680ec6e; // ?
/* 0x0680ec6f */ LDATA extern char public_680ec6f; // ?
/* 0x0680ec70 */ LDATA extern char public_680ec70; // ?
/* 0x0680ec71 */ LDATA extern char public_680ec71; // ?
/* 0x0680ec72 */ LDATA extern char public_680ec72; // ?
/* 0x0680ec73 */ LDATA extern char public_680ec73; // ?
/* 0x0680ec74 */ LDATA extern char public_680ec74; // ?
/* 0x0680ec75 */ LDATA extern char public_680ec75; // ?
/* 0x0680ec76 */ LDATA extern char public_680ec76; // ?
/* 0x0680ec77 */ LDATA extern char public_680ec77; // ?
/* 0x0680ec78 */ LDATA extern char public_680ec78; // ?
/* 0x0680ec79 */ LDATA extern char public_680ec79; // ?
/* 0x0680ec7a */ LDATA extern char public_680ec7a; // ?
/* 0x0680ec7b */ LDATA extern char public_680ec7b; // ?
/* 0x0680ec7c */ LDATA extern char public_680ec7c; // ?
/* 0x0680ec7d */ LDATA extern char public_680ec7d; // ?
/* 0x0680ec7e */ LDATA extern char public_680ec7e; // ?
/* 0x0680ec7f */ LDATA extern char public_680ec7f; // ?
/* 0x0680ec80 */ LDATA extern char public_680ec80; // ?
/* 0x0680ec81 */ LDATA extern char public_680ec81; // ?
/* 0x0680ec82 */ LDATA extern char public_680ec82; // ?
/* 0x0680ec83 */ LDATA extern char public_680ec83; // ?
/* 0x0680ec84 */ LDATA extern char public_680ec84; // ?
/* 0x0680ec85 */ LDATA extern char public_680ec85; // ?
/* 0x0680ec86 */ LDATA extern char public_680ec86; // ?
/* 0x0680ec87 */ LDATA extern char public_680ec87; // ?
/* 0x0680ec88 */ LDATA extern char public_680ec88; // ?
/* 0x0680ec89 */ LDATA extern char public_680ec89; // ?
/* 0x0680ec8a */ LDATA extern char public_680ec8a; // ?
/* 0x0680ec8b */ LDATA extern char public_680ec8b; // ?
/* 0x0680ec8c */ LDATA extern char public_680ec8c; // ?
/* 0x0680ec8d */ LDATA extern char public_680ec8d; // ?
/* 0x0680ec8e */ LDATA extern char public_680ec8e; // ?
/* 0x0680ec8f */ LDATA extern char public_680ec8f; // ?
/* 0x0680ec90 */ LDATA extern char public_680ec90; // ?
/* 0x0680ec91 */ LDATA extern char public_680ec91; // ?
/* 0x0680ec92 */ LDATA extern char public_680ec92; // ?
/* 0x0680ec93 */ LDATA extern char public_680ec93; // ?
/* 0x0680ec94 */ LDATA extern char public_680ec94; // ?
/* 0x0680ec95 */ LDATA extern char public_680ec95; // ?
/* 0x0680ec96 */ LDATA extern char public_680ec96; // ?
/* 0x0680ec97 */ LDATA extern char public_680ec97; // ?
/* 0x0680ec98 */ LDATA extern char public_680ec98; // ?
/* 0x0680ec99 */ LDATA extern char public_680ec99; // ?
/* 0x0680ec9a */ LDATA extern char public_680ec9a; // ?
/* 0x0680ec9b */ LDATA extern char public_680ec9b; // ?
/* 0x0680ec9c */ LDATA extern char public_680ec9c; // ?
/* 0x0680ec9d */ LDATA extern char public_680ec9d; // ?
/* 0x0680ec9e */ LDATA extern char public_680ec9e; // ?
/* 0x0680ec9f */ LDATA extern char public_680ec9f; // ?
/* 0x0680eca0 */ LDATA extern char public_680eca0; // ?
/* 0x0680eca1 */ LDATA extern char public_680eca1; // ?
/* 0x0680eca2 */ LDATA extern char public_680eca2; // ?
/* 0x0680eca3 */ LDATA extern char public_680eca3; // ?
/* 0x0680eca4 */ LDATA extern char public_680eca4; // ?
/* 0x0680eca5 */ LDATA extern char public_680eca5; // ?
/* 0x0680eca6 */ LDATA extern char public_680eca6; // ?
/* 0x0680eca7 */ LDATA extern char public_680eca7; // ?
/* 0x0680eca8 */ LDATA extern char public_680eca8; // ?
/* 0x0680eca9 */ LDATA extern char public_680eca9; // ?
/* 0x0680ecaa */ LDATA extern char public_680ecaa; // ?
/* 0x0680ecab */ LDATA extern char public_680ecab; // ?
/* 0x0680ecac */ LDATA extern char public_680ecac; // ?
/* 0x0680ecad */ LDATA extern char public_680ecad; // ?
/* 0x0680ecae */ LDATA extern char public_680ecae; // ?
/* 0x0680ecaf */ LDATA extern char public_680ecaf; // ?
/* 0x0680ecb0 */ LDATA extern char public_680ecb0; // ?
/* 0x0680ecb1 */ LDATA extern char public_680ecb1; // ?
/* 0x0680ecb2 */ LDATA extern char public_680ecb2; // ?
/* 0x0680ecb3 */ LDATA extern char public_680ecb3; // ?
/* 0x0680ecb4 */ LDATA extern char public_680ecb4; // ?
/* 0x0680ecb5 */ LDATA extern char public_680ecb5; // ?
/* 0x0680ecb6 */ LDATA extern char public_680ecb6; // ?
/* 0x0680ecb7 */ LDATA extern char public_680ecb7; // ?
/* 0x0680ecb8 */ LDATA extern char public_680ecb8; // ?
/* 0x0680ecb9 */ LDATA extern char public_680ecb9; // ?
/* 0x0680ecba */ LDATA extern char public_680ecba; // ?
/* 0x0680ecbb */ LDATA extern char public_680ecbb; // ?
/* 0x0680ecbc */ LDATA extern char public_680ecbc; // ?
/* 0x0680ecbd */ LDATA extern char public_680ecbd; // ?
/* 0x0680ecbe */ LDATA extern char public_680ecbe; // ?
/* 0x0680ecbf */ LDATA extern char public_680ecbf; // ?
/* 0x0680ecc0 */ LDATA extern char public_680ecc0; // ?
/* 0x0680ecc1 */ LDATA extern char public_680ecc1; // ?
/* 0x0680ecc2 */ LDATA extern char public_680ecc2; // ?
/* 0x0680ecc3 */ LDATA extern char public_680ecc3; // ?
/* 0x0680ecc4 */ LDATA extern char public_680ecc4; // ?
/* 0x0680ecc5 */ LDATA extern char public_680ecc5; // ?
/* 0x0680ecc6 */ LDATA extern char public_680ecc6; // ?
/* 0x0680ecc7 */ LDATA extern char public_680ecc7; // ?
/* 0x0680ecc8 */ LDATA extern char public_680ecc8; // ?
/* 0x0680ecc9 */ LDATA extern char public_680ecc9; // ?
/* 0x0680ecca */ LDATA extern char public_680ecca; // ?
/* 0x0680eccb */ LDATA extern char public_680eccb; // ?
/* 0x0680eccc */ LDATA extern char public_680eccc; // ?
/* 0x0680eccd */ LDATA extern char public_680eccd; // ?
/* 0x0680ecce */ LDATA extern char public_680ecce; // ?
/* 0x0680eccf */ LDATA extern char public_680eccf; // ?
/* 0x0680ecd0 */ LDATA extern char public_680ecd0; // ?
/* 0x0680ecd1 */ LDATA extern char public_680ecd1; // ?
/* 0x0680ecd2 */ LDATA extern char public_680ecd2; // ?
/* 0x0680ecd3 */ LDATA extern char public_680ecd3; // ?
/* 0x0680ecd4 */ LDATA extern char public_680ecd4; // ?
/* 0x0680ecd5 */ LDATA extern char public_680ecd5; // ?
/* 0x0680ecd6 */ LDATA extern char public_680ecd6; // ?
/* 0x0680ecd7 */ LDATA extern char public_680ecd7; // ?
/* 0x0680ecd8 */ LDATA extern char public_680ecd8; // ?
/* 0x0680ecd9 */ LDATA extern char public_680ecd9; // ?
/* 0x0680ecda */ LDATA extern char public_680ecda; // ?
/* 0x0680ecdb */ LDATA extern char public_680ecdb; // ?
/* 0x0680ecdc */ LDATA extern char public_680ecdc; // ?
/* 0x0680ecdd */ LDATA extern char public_680ecdd; // ?
/* 0x0680ecde */ LDATA extern char public_680ecde; // ?
/* 0x0680ecdf */ LDATA extern char public_680ecdf; // ?
/* 0x0680ece0 */ LDATA extern char public_680ece0; // ?
/* 0x0680ece1 */ LDATA extern char public_680ece1; // ?
/* 0x0680ece2 */ LDATA extern char public_680ece2; // ?
/* 0x0680ece3 */ LDATA extern char public_680ece3; // ?
/* 0x0680ece4 */ LDATA extern char public_680ece4; // ?
/* 0x0680ece5 */ LDATA extern char public_680ece5; // ?
/* 0x0680ece6 */ LDATA extern char public_680ece6; // ?
/* 0x0680ece7 */ LDATA extern char public_680ece7; // ?
/* 0x0680ece8 */ LDATA extern char public_680ece8; // ?
/* 0x0680ece9 */ LDATA extern char public_680ece9; // ?
/* 0x0680ecea */ LDATA extern char public_680ecea; // ?
/* 0x0680eceb */ LDATA extern char public_680eceb; // ?
/* 0x0680ecec */ LDATA extern char public_680ecec; // ?
/* 0x0680eced */ LDATA extern char public_680eced; // ?
/* 0x0680ecee */ LDATA extern char public_680ecee; // ?
/* 0x0680ecef */ LDATA extern char public_680ecef; // ?
/* 0x0680ecf0 */ LDATA extern char public_680ecf0; // ?
/* 0x0680ecf1 */ LDATA extern char public_680ecf1; // ?
/* 0x0680ecf2 */ LDATA extern char public_680ecf2; // ?
/* 0x0680ecf3 */ LDATA extern char public_680ecf3; // ?
/* 0x0680ecf4 */ LDATA extern char public_680ecf4; // ?
/* 0x0680ecf5 */ LDATA extern char public_680ecf5; // ?
/* 0x0680ecf6 */ LDATA extern char public_680ecf6; // ?
/* 0x0680ecf7 */ LDATA extern char public_680ecf7; // ?
/* 0x0680ecf8 */ LDATA extern char public_680ecf8; // ?
/* 0x0680ecf9 */ LDATA extern char public_680ecf9; // ?
/* 0x0680ecfa */ LDATA extern char public_680ecfa; // ?
/* 0x0680ecfb */ LDATA extern char public_680ecfb; // ?
/* 0x0680ecfc */ LDATA extern char public_680ecfc; // ?
/* 0x0680ecfd */ LDATA extern char public_680ecfd; // ?
/* 0x0680ecfe */ LDATA extern char public_680ecfe; // ?
/* 0x0680ecff */ LDATA extern char public_680ecff; // ?
/* 0x0680ed00 */ LDATA extern char public_680ed00; // ?
/* 0x0680ed01 */ LDATA extern char public_680ed01; // ?
/* 0x0680ed02 */ LDATA extern char public_680ed02; // ?
/* 0x0680ed03 */ LDATA extern char public_680ed03; // ?
/* 0x0680ed04 */ LDATA extern char public_680ed04; // ?
/* 0x0680ed05 */ LDATA extern char public_680ed05; // ?
/* 0x0680ed06 */ LDATA extern char public_680ed06; // ?
/* 0x0680ed07 */ LDATA extern char public_680ed07; // ?
/* 0x0680ed08 */ LDATA extern char public_680ed08; // ?
/* 0x0680ed09 */ LDATA extern char public_680ed09; // ?
/* 0x0680ed0a */ LDATA extern char public_680ed0a; // ?
/* 0x0680ed0b */ LDATA extern char public_680ed0b; // ?
/* 0x0680ed0c */ LDATA extern char public_680ed0c; // ?
/* 0x0680ed0d */ LDATA extern char public_680ed0d; // ?
/* 0x0680ed0e */ LDATA extern char public_680ed0e; // ?
/* 0x0680ed0f */ LDATA extern char public_680ed0f; // ?
/* 0x0680ed10 */ LDATA extern char public_680ed10; // ?
/* 0x0680ed11 */ LDATA extern char public_680ed11; // ?
/* 0x0680ed12 */ LDATA extern char public_680ed12; // ?
/* 0x0680ed13 */ LDATA extern char public_680ed13; // ?
/* 0x0680ed14 */ LDATA extern char public_680ed14; // ?
/* 0x0680ed15 */ LDATA extern char public_680ed15; // ?
/* 0x0680ed16 */ LDATA extern char public_680ed16; // ?
/* 0x0680ed17 */ LDATA extern char public_680ed17; // ?
/* 0x0680ed18 */ LDATA extern char public_680ed18; // ?
/* 0x0680ed19 */ LDATA extern char public_680ed19; // ?
/* 0x0680ed1a */ LDATA extern char public_680ed1a; // ?
/* 0x0680ed1b */ LDATA extern char public_680ed1b; // ?
/* 0x0680ed1c */ LDATA extern char public_680ed1c; // ?
/* 0x0680ed1d */ LDATA extern char public_680ed1d; // ?
/* 0x0680ed1e */ LDATA extern char public_680ed1e; // ?
/* 0x0680ed1f */ LDATA extern char public_680ed1f; // ?
/* 0x0680ed20 */ LDATA extern char public_680ed20; // ?
/* 0x0680ed21 */ LDATA extern char public_680ed21; // ?
/* 0x0680ed22 */ LDATA extern char public_680ed22; // ?
/* 0x0680ed23 */ LDATA extern char public_680ed23; // ?
/* 0x0680ed24 */ LDATA extern char public_680ed24; // ?
/* 0x0680ed25 */ LDATA extern char public_680ed25; // ?
/* 0x0680ed26 */ LDATA extern char public_680ed26; // ?
/* 0x0680ed27 */ LDATA extern char public_680ed27; // ?
/* 0x0680ed28 */ LDATA extern char public_680ed28; // ?
/* 0x0680ed29 */ LDATA extern char public_680ed29; // ?
/* 0x0680ed2a */ LDATA extern char public_680ed2a; // ?
/* 0x0680ed2b */ LDATA extern char public_680ed2b; // ?
/* 0x0680ed2c */ LDATA extern char public_680ed2c; // ?
/* 0x0680ed2d */ LDATA extern char public_680ed2d; // ?
/* 0x0680ed2e */ LDATA extern char public_680ed2e; // ?
/* 0x0680ed2f */ LDATA extern char public_680ed2f; // ?
/* 0x0680ed30 */ LDATA extern char public_680ed30; // ?
/* 0x0680ed31 */ LDATA extern char public_680ed31; // ?
/* 0x0680ed32 */ LDATA extern char public_680ed32; // ?
/* 0x0680ed33 */ LDATA extern char public_680ed33; // ?
/* 0x0680ed34 */ LDATA extern char public_680ed34; // ?
/* 0x0680ed35 */ LDATA extern char public_680ed35; // ?
/* 0x0680ed36 */ LDATA extern char public_680ed36; // ?
/* 0x0680ed37 */ LDATA extern char public_680ed37; // ?
/* 0x0680ed38 */ LDATA extern char public_680ed38; // ?
/* 0x0680ed39 */ LDATA extern char public_680ed39; // ?
/* 0x0680ed3a */ LDATA extern char public_680ed3a; // ?
/* 0x0680ed3b */ LDATA extern char public_680ed3b; // ?
/* 0x0680ed3c */ LDATA extern char public_680ed3c; // ?
/* 0x0680ed3d */ LDATA extern char public_680ed3d; // ?
/* 0x0680ed3e */ LDATA extern char public_680ed3e; // ?
/* 0x0680ed3f */ LDATA extern char public_680ed3f; // ?
/* 0x0680ed40 */ LDATA extern char public_680ed40; // ?
/* 0x0680ed41 */ LDATA extern char public_680ed41; // ?
/* 0x0680ed42 */ LDATA extern char public_680ed42; // ?
/* 0x0680ed43 */ LDATA extern char public_680ed43; // ?
/* 0x0680ed44 */ LDATA extern char public_680ed44; // ?
/* 0x0680ed45 */ LDATA extern char public_680ed45; // ?
/* 0x0680ed46 */ LDATA extern char public_680ed46; // ?
/* 0x0680ed47 */ LDATA extern char public_680ed47; // ?
/* 0x0680ed48 */ LDATA extern char public_680ed48; // ?
/* 0x0680ed49 */ LDATA extern char public_680ed49; // ?
/* 0x0680ed4a */ LDATA extern char public_680ed4a; // ?
/* 0x0680ed4b */ LDATA extern char public_680ed4b; // ?
/* 0x0680ed4c */ LDATA extern char public_680ed4c; // ?
/* 0x0680ed4d */ LDATA extern char public_680ed4d; // ?
/* 0x0680ed4e */ LDATA extern char public_680ed4e; // ?
/* 0x0680ed4f */ LDATA extern char public_680ed4f; // ?
/* 0x0680ed50 */ LDATA extern char public_680ed50; // ?
/* 0x0680ed51 */ LDATA extern char public_680ed51; // ?
/* 0x0680ed52 */ LDATA extern char public_680ed52; // ?
/* 0x0680ed53 */ LDATA extern char public_680ed53; // ?
/* 0x0680ed54 */ LDATA extern char public_680ed54; // ?
/* 0x0680ed55 */ LDATA extern char public_680ed55; // ?
/* 0x0680ed56 */ LDATA extern char public_680ed56; // ?
/* 0x0680ed57 */ LDATA extern char public_680ed57; // ?
/* 0x0680ed58 */ LDATA extern char public_680ed58; // ?
/* 0x0680ed59 */ LDATA extern char public_680ed59; // ?
/* 0x0680ed5a */ LDATA extern char public_680ed5a; // ?
/* 0x0680ed5b */ LDATA extern char public_680ed5b; // ?
/* 0x0680ed5c */ LDATA extern char public_680ed5c; // ?
/* 0x0680ed5d */ LDATA extern char public_680ed5d; // ?
/* 0x0680ed5e */ LDATA extern char public_680ed5e; // ?
/* 0x0680ed5f */ LDATA extern char public_680ed5f; // ?
/* 0x0680ed60 */ LDATA extern char public_680ed60; // ?
/* 0x0680ed61 */ LDATA extern char public_680ed61; // ?
/* 0x0680ed62 */ LDATA extern char public_680ed62; // ?
/* 0x0680ed63 */ LDATA extern char public_680ed63; // ?
/* 0x0680ed64 */ LDATA extern char public_680ed64; // ?
/* 0x0680ed65 */ LDATA extern char public_680ed65; // ?
/* 0x0680ed66 */ LDATA extern char public_680ed66; // ?
/* 0x0680ed67 */ LDATA extern char public_680ed67; // ?
/* 0x0680ed68 */ LDATA extern char public_680ed68; // ?
/* 0x0680ed69 */ LDATA extern char public_680ed69; // ?
/* 0x0680ed6a */ LDATA extern char public_680ed6a; // ?
/* 0x0680ed6b */ LDATA extern char public_680ed6b; // ?
/* 0x0680ed6c */ LDATA extern char public_680ed6c; // ?
/* 0x0680ed6d */ LDATA extern char public_680ed6d; // ?
/* 0x0680ed6e */ LDATA extern char public_680ed6e; // ?
/* 0x0680ed6f */ LDATA extern char public_680ed6f; // ?
/* 0x0680ed70 */ LDATA extern char public_680ed70; // ?
/* 0x0680ed71 */ LDATA extern char public_680ed71; // ?
/* 0x0680ed72 */ LDATA extern char public_680ed72; // ?
/* 0x0680ed73 */ LDATA extern char public_680ed73; // ?
/* 0x0680ed74 */ LDATA extern char public_680ed74; // ?
/* 0x0680ed75 */ LDATA extern char public_680ed75; // ?
/* 0x0680ed76 */ LDATA extern char public_680ed76; // ?
/* 0x0680ed77 */ LDATA extern char public_680ed77; // ?
/* 0x0680ed78 */ LDATA extern char public_680ed78; // ?
/* 0x0680ed79 */ LDATA extern char public_680ed79; // ?
/* 0x0680ed7a */ LDATA extern char public_680ed7a; // ?
/* 0x0680ed7b */ LDATA extern char public_680ed7b; // ?
/* 0x0680ed7c */ LDATA extern char public_680ed7c; // ?
/* 0x0680ed7d */ LDATA extern char public_680ed7d; // ?
/* 0x0680ed7e */ LDATA extern char public_680ed7e; // ?
/* 0x0680ed7f */ LDATA extern char public_680ed7f; // ?
/* 0x0680ed80 */ LDATA extern char public_680ed80; // ?
/* 0x0680ed81 */ LDATA extern char public_680ed81; // ?
/* 0x0680ed82 */ LDATA extern char public_680ed82; // ?
/* 0x0680ed83 */ LDATA extern char public_680ed83; // ?
/* 0x0680ed84 */ LDATA extern char public_680ed84; // ?
/* 0x0680ed85 */ LDATA extern char public_680ed85; // ?
/* 0x0680ed86 */ LDATA extern char public_680ed86; // ?
/* 0x0680ed87 */ LDATA extern char public_680ed87; // ?
/* 0x0680ed88 */ LDATA extern char public_680ed88; // ?
/* 0x0680ed89 */ LDATA extern char public_680ed89; // ?
/* 0x0680ed8a */ LDATA extern char public_680ed8a; // ?
/* 0x0680ed8b */ LDATA extern char public_680ed8b; // ?
/* 0x0680ed8c */ LDATA extern char public_680ed8c; // ?
/* 0x0680ed8d */ LDATA extern char public_680ed8d; // ?
/* 0x0680ed8e */ LDATA extern char public_680ed8e; // ?
/* 0x0680ed8f */ LDATA extern char public_680ed8f; // ?
/* 0x0680ed90 */ LDATA extern char public_680ed90; // ?
/* 0x0680ed91 */ LDATA extern char public_680ed91; // ?
/* 0x0680ed92 */ LDATA extern char public_680ed92; // ?
/* 0x0680ed93 */ LDATA extern char public_680ed93; // ?
/* 0x0680ed94 */ LDATA extern char public_680ed94; // ?
/* 0x0680ed95 */ LDATA extern char public_680ed95; // ?
/* 0x0680ed96 */ LDATA extern char public_680ed96; // ?
/* 0x0680ed97 */ LDATA extern char public_680ed97; // ?
/* 0x0680ed98 */ LDATA extern char public_680ed98; // ?
/* 0x0680ed99 */ LDATA extern char public_680ed99; // ?
/* 0x0680ed9a */ LDATA extern char public_680ed9a; // ?
/* 0x0680ed9b */ LDATA extern char public_680ed9b; // ?
/* 0x0680ed9c */ LDATA extern char public_680ed9c; // ?
/* 0x0680ed9d */ LDATA extern char public_680ed9d; // ?
/* 0x0680ed9e */ LDATA extern char public_680ed9e; // ?
/* 0x0680ed9f */ LDATA extern char public_680ed9f; // ?
/* 0x0680eda0 */ LDATA extern char public_680eda0; // ?
/* 0x0680eda1 */ LDATA extern char public_680eda1; // ?
/* 0x0680eda2 */ LDATA extern char public_680eda2; // ?
/* 0x0680eda3 */ LDATA extern char public_680eda3; // ?
/* 0x0680eda4 */ LDATA extern char public_680eda4; // ?
/* 0x0680eda5 */ LDATA extern char public_680eda5; // ?
/* 0x0680eda6 */ LDATA extern char public_680eda6; // ?
/* 0x0680eda7 */ LDATA extern char public_680eda7; // ?
/* 0x0680eda8 */ LDATA extern char public_680eda8; // ?
/* 0x0680eda9 */ LDATA extern char public_680eda9; // ?
/* 0x0680edaa */ LDATA extern char public_680edaa; // ?
/* 0x0680edab */ LDATA extern char public_680edab; // ?
/* 0x0680edac */ LDATA extern char public_680edac; // ?
/* 0x0680edad */ LDATA extern char public_680edad; // ?
/* 0x0680edae */ LDATA extern char public_680edae; // ?
/* 0x0680edaf */ LDATA extern char public_680edaf; // ?
/* 0x0680edb0 */ LDATA extern char public_680edb0; // ?
/* 0x0680edb1 */ LDATA extern char public_680edb1; // ?
/* 0x0680edb2 */ LDATA extern char public_680edb2; // ?
/* 0x0680edb3 */ LDATA extern char public_680edb3; // ?
/* 0x0680edb4 */ LDATA extern char public_680edb4; // ?
/* 0x0680edb5 */ LDATA extern char public_680edb5; // ?
/* 0x0680edb6 */ LDATA extern char public_680edb6; // ?
/* 0x0680edb7 */ LDATA extern char public_680edb7; // ?
/* 0x0680edb8 */ LDATA extern char public_680edb8; // ?
/* 0x0680edb9 */ LDATA extern char public_680edb9; // ?
/* 0x0680edba */ LDATA extern char public_680edba; // ?
/* 0x0680edbb */ LDATA extern char public_680edbb; // ?
/* 0x0680edbc */ LDATA extern char public_680edbc; // ?
/* 0x0680edbd */ LDATA extern char public_680edbd; // ?
/* 0x0680edbe */ LDATA extern char public_680edbe; // ?
/* 0x0680edbf */ LDATA extern char public_680edbf; // ?
/* 0x0680edc0 */ LDATA extern char public_680edc0; // ?
/* 0x0680edc1 */ LDATA extern char public_680edc1; // ?
/* 0x0680edc2 */ LDATA extern char public_680edc2; // ?
/* 0x0680edc3 */ LDATA extern char public_680edc3; // ?
/* 0x0680edc4 */ LDATA extern char public_680edc4; // ?
/* 0x0680edc5 */ LDATA extern char public_680edc5; // ?
/* 0x0680edc6 */ LDATA extern char public_680edc6; // ?
/* 0x0680edc7 */ LDATA extern char public_680edc7; // ?
/* 0x0680edc8 */ LDATA extern char public_680edc8; // ?
/* 0x0680edc9 */ LDATA extern char public_680edc9; // ?
/* 0x0680edca */ LDATA extern char public_680edca; // ?
/* 0x0680edcb */ LDATA extern char public_680edcb; // ?
/* 0x0680edcc */ LDATA extern char public_680edcc; // ?
/* 0x0680edcd */ LDATA extern char public_680edcd; // ?
/* 0x0680edce */ LDATA extern char public_680edce; // ?
/* 0x0680edcf */ LDATA extern char public_680edcf; // ?
/* 0x0680edd0 */ LDATA extern char public_680edd0; // ?
/* 0x0680edd1 */ LDATA extern char public_680edd1; // ?
/* 0x0680edd2 */ LDATA extern char public_680edd2; // ?
/* 0x0680edd3 */ LDATA extern char public_680edd3; // ?
/* 0x0680edd4 */ LDATA extern char public_680edd4; // ?
/* 0x0680edd5 */ LDATA extern char public_680edd5; // ?
/* 0x0680edd6 */ LDATA extern char public_680edd6; // ?
/* 0x0680edd7 */ LDATA extern char public_680edd7; // ?
/* 0x0680edd8 */ LDATA extern char public_680edd8; // ?
/* 0x0680edd9 */ LDATA extern char public_680edd9; // ?
/* 0x0680edda */ LDATA extern char public_680edda; // ?
/* 0x0680eddb */ LDATA extern char public_680eddb; // ?
/* 0x0680eddc */ LDATA extern char public_680eddc; // ?
/* 0x0680eddd */ LDATA extern char public_680eddd; // ?
/* 0x0680edde */ LDATA extern char public_680edde; // ?
/* 0x0680eddf */ LDATA extern char public_680eddf; // ?
/* 0x0680ede0 */ LDATA extern char public_680ede0; // ?
/* 0x0680ede1 */ LDATA extern char public_680ede1; // ?
/* 0x0680ede2 */ LDATA extern char public_680ede2; // ?
/* 0x0680ede3 */ LDATA extern char public_680ede3; // ?
/* 0x0680ede4 */ LDATA extern char public_680ede4; // ?
/* 0x0680ede5 */ LDATA extern char public_680ede5; // ?
/* 0x0680ede6 */ LDATA extern char public_680ede6; // ?
/* 0x0680ede7 */ LDATA extern char public_680ede7; // ?
/* 0x0680ede8 */ LDATA extern char public_680ede8; // ?
/* 0x0680ede9 */ LDATA extern char public_680ede9; // ?
/* 0x0680edea */ LDATA extern char public_680edea; // ?
/* 0x0680edeb */ LDATA extern char public_680edeb; // ?
/* 0x0680edec */ LDATA extern char public_680edec; // ?
/* 0x0680eded */ LDATA extern char public_680eded; // ?
/* 0x0680edee */ LDATA extern char public_680edee; // ?
/* 0x0680edef */ LDATA extern char public_680edef; // ?
/* 0x0680edf0 */ LDATA extern char public_680edf0; // ?
/* 0x0680edf1 */ LDATA extern char public_680edf1; // ?
/* 0x0680edf2 */ LDATA extern char public_680edf2; // ?
/* 0x0680edf3 */ LDATA extern char public_680edf3; // ?
/* 0x0680edf4 */ LDATA extern char public_680edf4; // ?
/* 0x0680edf5 */ LDATA extern char public_680edf5; // ?
/* 0x0680edf6 */ LDATA extern char public_680edf6; // ?
/* 0x0680edf7 */ LDATA extern char public_680edf7; // ?
/* 0x0680edf8 */ LDATA extern char public_680edf8; // ?
/* 0x0680edf9 */ LDATA extern char public_680edf9; // ?
/* 0x0680edfa */ LDATA extern char public_680edfa; // ?
/* 0x0680edfb */ LDATA extern char public_680edfb; // ?
/* 0x0680edfc */ LDATA extern char public_680edfc; // ?
/* 0x0680edfd */ LDATA extern char public_680edfd; // ?
/* 0x0680edfe */ LDATA extern char public_680edfe; // ?
/* 0x0680edff */ LDATA extern char public_680edff; // ?
/* 0x0680ee00 */ LDATA extern char public_680ee00; // ?
/* 0x0680ee01 */ LDATA extern char public_680ee01; // ?
/* 0x0680ee02 */ LDATA extern char public_680ee02; // ?
/* 0x0680ee03 */ LDATA extern char public_680ee03; // ?
/* 0x0680ee04 */ LDATA extern char public_680ee04; // ?
/* 0x0680ee05 */ LDATA extern char public_680ee05; // ?
/* 0x0680ee06 */ LDATA extern char public_680ee06; // ?
/* 0x0680ee07 */ LDATA extern char public_680ee07; // ?
/* 0x0680ee08 */ LDATA extern char public_680ee08; // ?
/* 0x0680ee09 */ LDATA extern char public_680ee09; // ?
/* 0x0680ee0a */ LDATA extern char public_680ee0a; // ?
/* 0x0680ee0b */ LDATA extern char public_680ee0b; // ?
/* 0x0680ee0c */ LDATA extern char public_680ee0c; // ?
/* 0x0680ee0d */ LDATA extern char public_680ee0d; // ?
/* 0x0680ee0e */ LDATA extern char public_680ee0e; // ?
/* 0x0680ee0f */ LDATA extern char public_680ee0f; // ?
/* 0x0680ee10 */ LDATA extern char public_680ee10; // ?
/* 0x0680ee11 */ LDATA extern char public_680ee11; // ?
/* 0x0680ee12 */ LDATA extern char public_680ee12; // ?
/* 0x0680ee13 */ LDATA extern char public_680ee13; // ?
/* 0x0680ee14 */ LDATA extern char public_680ee14; // ?
/* 0x0680ee15 */ LDATA extern char public_680ee15; // ?
/* 0x0680ee16 */ LDATA extern char public_680ee16; // ?
/* 0x0680ee17 */ LDATA extern char public_680ee17; // ?
/* 0x0680ee18 */ LDATA extern char public_680ee18; // ?
/* 0x0680ee19 */ LDATA extern char public_680ee19; // ?
/* 0x0680ee1a */ LDATA extern char public_680ee1a; // ?
/* 0x0680ee1b */ LDATA extern char public_680ee1b; // ?
/* 0x0680ee1c */ LDATA extern char public_680ee1c; // ?
/* 0x0680ee1d */ LDATA extern char public_680ee1d; // ?
/* 0x0680ee1e */ LDATA extern char public_680ee1e; // ?
/* 0x0680ee1f */ LDATA extern char public_680ee1f; // ?
/* 0x0680ee20 */ LDATA extern char public_680ee20; // ?
/* 0x0680ee21 */ LDATA extern char public_680ee21; // ?
/* 0x0680ee22 */ LDATA extern char public_680ee22; // ?
/* 0x0680ee23 */ LDATA extern char public_680ee23; // ?
/* 0x0680ee24 */ LDATA extern char public_680ee24; // ?
/* 0x0680ee25 */ LDATA extern char public_680ee25; // ?
/* 0x0680ee26 */ LDATA extern char public_680ee26; // ?
/* 0x0680ee27 */ LDATA extern char public_680ee27; // ?
/* 0x0680ee28 */ LDATA extern char public_680ee28; // ?
/* 0x0680ee29 */ LDATA extern char public_680ee29; // ?
/* 0x0680ee2a */ LDATA extern char public_680ee2a; // ?
/* 0x0680ee2b */ LDATA extern char public_680ee2b; // ?
/* 0x0680ee2c */ LDATA extern char public_680ee2c; // ?
/* 0x0680ee2d */ LDATA extern char public_680ee2d; // ?
/* 0x0680ee2e */ LDATA extern char public_680ee2e; // ?
/* 0x0680ee2f */ LDATA extern char public_680ee2f; // ?
/* 0x0680ee30 */ LDATA extern char public_680ee30; // ?
/* 0x0680ee31 */ LDATA extern char public_680ee31; // ?
/* 0x0680ee32 */ LDATA extern char public_680ee32; // ?
/* 0x0680ee33 */ LDATA extern char public_680ee33; // ?
/* 0x0680ee34 */ LDATA extern char public_680ee34; // ?
/* 0x0680ee35 */ LDATA extern char public_680ee35; // ?
/* 0x0680ee36 */ LDATA extern char public_680ee36; // ?
/* 0x0680ee37 */ LDATA extern char public_680ee37; // ?
/* 0x0680ee38 */ LDATA extern char public_680ee38; // ?
/* 0x0680ee39 */ LDATA extern char public_680ee39; // ?
/* 0x0680ee3a */ LDATA extern char public_680ee3a; // ?
/* 0x0680ee3b */ LDATA extern char public_680ee3b; // ?
/* 0x0680ee3c */ LDATA extern char public_680ee3c; // ?
/* 0x0680ee3d */ LDATA extern char public_680ee3d; // ?
/* 0x0680ee3e */ LDATA extern char public_680ee3e; // ?
/* 0x0680ee3f */ LDATA extern char public_680ee3f; // ?
/* 0x0680ee40 */ LDATA extern char public_680ee40; // ?
/* 0x0680ee41 */ LDATA extern char public_680ee41; // ?
/* 0x0680ee42 */ LDATA extern char public_680ee42; // ?
/* 0x0680ee43 */ LDATA extern char public_680ee43; // ?
/* 0x0680ee44 */ LDATA extern char public_680ee44; // ?
/* 0x0680ee45 */ LDATA extern char public_680ee45; // ?
/* 0x0680ee46 */ LDATA extern char public_680ee46; // ?
/* 0x0680ee47 */ LDATA extern char public_680ee47; // ?
/* 0x0680ee48 */ LDATA extern char public_680ee48; // ?
/* 0x0680ee49 */ LDATA extern char public_680ee49; // ?
/* 0x0680ee4a */ LDATA extern char public_680ee4a; // ?
/* 0x0680ee4b */ LDATA extern char public_680ee4b; // ?
/* 0x0680ee4c */ LDATA extern char public_680ee4c; // ?
/* 0x0680ee4d */ LDATA extern char public_680ee4d; // ?
/* 0x0680ee4e */ LDATA extern char public_680ee4e; // ?
/* 0x0680ee4f */ LDATA extern char public_680ee4f; // ?
/* 0x0680ee50 */ LDATA extern char public_680ee50; // ?
/* 0x0680ee51 */ LDATA extern char public_680ee51; // ?
/* 0x0680ee52 */ LDATA extern char public_680ee52; // ?
/* 0x0680ee53 */ LDATA extern char public_680ee53; // ?
/* 0x0680ee54 */ LDATA extern char public_680ee54; // ?
/* 0x0680ee55 */ LDATA extern char public_680ee55; // ?
/* 0x0680ee56 */ LDATA extern char public_680ee56; // ?
/* 0x0680ee57 */ LDATA extern char public_680ee57; // ?
/* 0x0680ee58 */ LDATA extern char public_680ee58; // ?
/* 0x0680ee59 */ LDATA extern char public_680ee59; // ?
/* 0x0680ee5a */ LDATA extern char public_680ee5a; // ?
/* 0x0680ee5b */ LDATA extern char public_680ee5b; // ?
/* 0x0680ee5c */ LDATA extern char public_680ee5c; // ?
/* 0x0680ee5d */ LDATA extern char public_680ee5d; // ?
/* 0x0680ee5e */ LDATA extern char public_680ee5e; // ?
/* 0x0680ee5f */ LDATA extern char public_680ee5f; // ?
/* 0x0680ee60 */ LDATA extern char public_680ee60; // ?
/* 0x0680ee61 */ LDATA extern char public_680ee61; // ?
/* 0x0680ee62 */ LDATA extern char public_680ee62; // ?
/* 0x0680ee63 */ LDATA extern char public_680ee63; // ?
/* 0x0680ee64 */ LDATA extern char public_680ee64; // ?
/* 0x0680ee65 */ LDATA extern char public_680ee65; // ?
/* 0x0680ee66 */ LDATA extern char public_680ee66; // ?
/* 0x0680ee67 */ LDATA extern char public_680ee67; // ?
/* 0x0680ee68 */ LDATA extern char public_680ee68; // ?
/* 0x0680ee69 */ LDATA extern char public_680ee69; // ?
/* 0x0680ee6a */ LDATA extern char public_680ee6a; // ?
/* 0x0680ee6b */ LDATA extern char public_680ee6b; // ?
/* 0x0680ee6c */ LDATA extern char public_680ee6c; // ?
/* 0x0680ee6d */ LDATA extern char public_680ee6d; // ?
/* 0x0680ee6e */ LDATA extern char public_680ee6e; // ?
/* 0x0680ee6f */ LDATA extern char public_680ee6f; // ?
/* 0x0680ee70 */ LDATA extern char public_680ee70; // ?
/* 0x0680ee71 */ LDATA extern char public_680ee71; // ?
/* 0x0680ee72 */ LDATA extern char public_680ee72; // ?
/* 0x0680ee73 */ LDATA extern char public_680ee73; // ?
/* 0x0680ee74 */ LDATA extern char public_680ee74; // ?
/* 0x0680ee75 */ LDATA extern char public_680ee75; // ?
/* 0x0680ee76 */ LDATA extern char public_680ee76; // ?
/* 0x0680ee77 */ LDATA extern char public_680ee77; // ?
/* 0x0680ee78 */ LDATA extern char public_680ee78; // ?
/* 0x0680ee79 */ LDATA extern char public_680ee79; // ?
/* 0x0680ee7a */ LDATA extern char public_680ee7a; // ?
/* 0x0680ee7b */ LDATA extern char public_680ee7b; // ?
/* 0x0680ee7c */ LDATA extern char public_680ee7c; // ?
/* 0x0680ee7d */ LDATA extern char public_680ee7d; // ?
/* 0x0680ee7e */ LDATA extern char public_680ee7e; // ?
/* 0x0680ee7f */ LDATA extern char public_680ee7f; // ?
/* 0x0680ee80 */ LDATA extern char public_680ee80; // ?
/* 0x0680ee81 */ LDATA extern char public_680ee81; // ?
/* 0x0680ee82 */ LDATA extern char public_680ee82; // ?
/* 0x0680ee83 */ LDATA extern char public_680ee83; // ?
/* 0x0680ee84 */ LDATA extern char public_680ee84; // ?
/* 0x0680ee85 */ LDATA extern char public_680ee85; // ?
/* 0x0680ee86 */ LDATA extern char public_680ee86; // ?
/* 0x0680ee87 */ LDATA extern char public_680ee87; // ?
/* 0x0680ee88 */ LDATA extern char public_680ee88; // ?
/* 0x0680ee89 */ LDATA extern char public_680ee89; // ?
/* 0x0680ee8a */ LDATA extern char public_680ee8a; // ?
/* 0x0680ee8b */ LDATA extern char public_680ee8b; // ?
/* 0x0680ee8c */ LDATA extern char public_680ee8c; // ?
/* 0x0680ee8d */ LDATA extern char public_680ee8d; // ?
/* 0x0680ee8e */ LDATA extern char public_680ee8e; // ?
/* 0x0680ee8f */ LDATA extern char public_680ee8f; // ?
/* 0x0680ee90 */ LDATA extern char public_680ee90; // ?
/* 0x0680ee91 */ LDATA extern char public_680ee91; // ?
/* 0x0680ee92 */ LDATA extern char public_680ee92; // ?
/* 0x0680ee93 */ LDATA extern char public_680ee93; // ?
/* 0x0680ee94 */ LDATA extern char public_680ee94; // ?
/* 0x0680ee95 */ LDATA extern char public_680ee95; // ?
/* 0x0680ee96 */ LDATA extern char public_680ee96; // ?
/* 0x0680ee97 */ LDATA extern char public_680ee97; // ?
/* 0x0680ee98 */ LDATA extern char public_680ee98; // ?
/* 0x0680ee99 */ LDATA extern char public_680ee99; // ?
/* 0x0680ee9a */ LDATA extern char public_680ee9a; // ?
/* 0x0680ee9b */ LDATA extern char public_680ee9b; // ?
/* 0x0680ee9c */ LDATA extern char public_680ee9c; // ?
/* 0x0680ee9d */ LDATA extern char public_680ee9d; // ?
/* 0x0680ee9e */ LDATA extern char public_680ee9e; // ?
/* 0x0680ee9f */ LDATA extern char public_680ee9f; // ?
/* 0x0680eea0 */ LDATA extern char public_680eea0; // ?
/* 0x0680eea1 */ LDATA extern char public_680eea1; // ?
/* 0x0680eea2 */ LDATA extern char public_680eea2; // ?
/* 0x0680eea3 */ LDATA extern char public_680eea3; // ?
/* 0x0680eea4 */ LDATA extern char public_680eea4; // ?
/* 0x0680eea5 */ LDATA extern char public_680eea5; // ?
/* 0x0680eea6 */ LDATA extern char public_680eea6; // ?
/* 0x0680eea7 */ LDATA extern char public_680eea7; // ?
/* 0x0680eea8 */ LDATA extern char public_680eea8; // ?
/* 0x0680eea9 */ LDATA extern char public_680eea9; // ?
/* 0x0680eeaa */ LDATA extern char public_680eeaa; // ?
/* 0x0680eeab */ LDATA extern char public_680eeab; // ?
/* 0x0680eeac */ LDATA extern char public_680eeac; // ?
/* 0x0680eead */ LDATA extern char public_680eead; // ?
/* 0x0680eeae */ LDATA extern char public_680eeae; // ?
/* 0x0680eeaf */ LDATA extern char public_680eeaf; // ?
/* 0x0680eeb0 */ LDATA extern char public_680eeb0; // ?
/* 0x0680eeb1 */ LDATA extern char public_680eeb1; // ?
/* 0x0680eeb2 */ LDATA extern char public_680eeb2; // ?
/* 0x0680eeb3 */ LDATA extern char public_680eeb3; // ?
/* 0x0680eeb4 */ LDATA extern char public_680eeb4; // ?
/* 0x0680eeb5 */ LDATA extern char public_680eeb5; // ?
/* 0x0680eeb6 */ LDATA extern char public_680eeb6; // ?
/* 0x0680eeb7 */ LDATA extern char public_680eeb7; // ?
/* 0x0680eeb8 */ LDATA extern char public_680eeb8; // ?
/* 0x0680eeb9 */ LDATA extern char public_680eeb9; // ?
/* 0x0680eeba */ LDATA extern char public_680eeba; // ?
/* 0x0680eebb */ LDATA extern char public_680eebb; // ?
/* 0x0680eebc */ LDATA extern char public_680eebc; // ?
/* 0x0680eebd */ LDATA extern char public_680eebd; // ?
/* 0x0680eebe */ LDATA extern char public_680eebe; // ?
/* 0x0680eebf */ LDATA extern char public_680eebf; // ?
/* 0x0680eec0 */ LDATA extern char public_680eec0; // ?
/* 0x0680eec1 */ LDATA extern char public_680eec1; // ?
/* 0x0680eec2 */ LDATA extern char public_680eec2; // ?
/* 0x0680eec3 */ LDATA extern char public_680eec3; // ?
/* 0x0680eec4 */ LDATA extern char public_680eec4; // ?
/* 0x0680eec5 */ LDATA extern char public_680eec5; // ?
/* 0x0680eec6 */ LDATA extern char public_680eec6; // ?
/* 0x0680eec7 */ LDATA extern char public_680eec7; // ?
/* 0x0680eec8 */ LDATA extern char public_680eec8; // ?
/* 0x0680eec9 */ LDATA extern char public_680eec9; // ?
/* 0x0680eeca */ LDATA extern char public_680eeca; // ?
/* 0x0680eecb */ LDATA extern char public_680eecb; // ?
/* 0x0680eecc */ LDATA extern char public_680eecc; // ?
/* 0x0680eecd */ LDATA extern char public_680eecd; // ?
/* 0x0680eece */ LDATA extern char public_680eece; // ?
/* 0x0680eecf */ LDATA extern char public_680eecf; // ?
/* 0x0680eed0 */ LDATA extern char public_680eed0; // ?
/* 0x0680eed1 */ LDATA extern char public_680eed1; // ?
/* 0x0680eed2 */ LDATA extern char public_680eed2; // ?
/* 0x0680eed3 */ LDATA extern char public_680eed3; // ?
/* 0x0680eed4 */ LDATA extern char public_680eed4; // ?
/* 0x0680eed5 */ LDATA extern char public_680eed5; // ?
/* 0x0680eed6 */ LDATA extern char public_680eed6; // ?
/* 0x0680eed7 */ LDATA extern char public_680eed7; // ?
/* 0x0680eed8 */ LDATA extern char public_680eed8; // ?
/* 0x0680eed9 */ LDATA extern char public_680eed9; // ?
/* 0x0680eeda */ LDATA extern char public_680eeda; // ?
/* 0x0680eedb */ LDATA extern char public_680eedb; // ?
/* 0x0680eedc */ LDATA extern char public_680eedc; // ?
/* 0x0680eedd */ LDATA extern char public_680eedd; // ?
/* 0x0680eede */ LDATA extern char public_680eede; // ?
/* 0x0680eedf */ LDATA extern char public_680eedf; // ?
/* 0x0680eee0 */ LDATA extern char public_680eee0; // ?
/* 0x0680eee1 */ LDATA extern char public_680eee1; // ?
/* 0x0680eee2 */ LDATA extern char public_680eee2; // ?
/* 0x0680eee3 */ LDATA extern char public_680eee3; // ?
/* 0x0680eee4 */ LDATA extern char public_680eee4; // ?
/* 0x0680eee5 */ LDATA extern char public_680eee5; // ?
/* 0x0680eee6 */ LDATA extern char public_680eee6; // ?
/* 0x0680eee7 */ LDATA extern char public_680eee7; // ?
/* 0x0680eee8 */ LDATA extern char public_680eee8; // ?
/* 0x0680eee9 */ LDATA extern char public_680eee9; // ?
/* 0x0680eeea */ LDATA extern char public_680eeea; // ?
/* 0x0680eeeb */ LDATA extern char public_680eeeb; // ?
/* 0x0680eeec */ LDATA extern char public_680eeec; // ?
/* 0x0680eeed */ LDATA extern char public_680eeed; // ?
/* 0x0680eeee */ LDATA extern char public_680eeee; // ?
/* 0x0680eeef */ LDATA extern char public_680eeef; // ?
/* 0x0680eef0 */ LDATA extern char public_680eef0; // ?
/* 0x0680eef1 */ LDATA extern char public_680eef1; // ?
/* 0x0680eef2 */ LDATA extern char public_680eef2; // ?
/* 0x0680eef3 */ LDATA extern char public_680eef3; // ?
/* 0x0680eef4 */ LDATA extern char public_680eef4; // ?
/* 0x0680eef5 */ LDATA extern char public_680eef5; // ?
/* 0x0680eef6 */ LDATA extern char public_680eef6; // ?
/* 0x0680eef7 */ LDATA extern char public_680eef7; // ?
/* 0x0680eef8 */ LDATA extern char public_680eef8; // ?
/* 0x0680eef9 */ LDATA extern char public_680eef9; // ?
/* 0x0680eefa */ LDATA extern char public_680eefa; // ?
/* 0x0680eefb */ LDATA extern char public_680eefb; // ?
/* 0x0680eefc */ LDATA extern char public_680eefc; // ?
/* 0x0680eefd */ LDATA extern char public_680eefd; // ?
/* 0x0680eefe */ LDATA extern char public_680eefe; // ?
/* 0x0680eeff */ LDATA extern char public_680eeff; // ?
/* 0x0680ef00 */ LDATA extern char public_680ef00; // ?
/* 0x0680ef01 */ LDATA extern char public_680ef01; // ?
/* 0x0680ef02 */ LDATA extern char public_680ef02; // ?
/* 0x0680ef03 */ LDATA extern char public_680ef03; // ?
/* 0x0680ef04 */ LDATA extern char public_680ef04; // ?
/* 0x0680ef05 */ LDATA extern char public_680ef05; // ?
/* 0x0680ef06 */ LDATA extern char public_680ef06; // ?
/* 0x0680ef07 */ LDATA extern char public_680ef07; // ?
/* 0x0680ef08 */ LDATA extern char public_680ef08; // ?
/* 0x0680ef09 */ LDATA extern char public_680ef09; // ?
/* 0x0680ef0a */ LDATA extern char public_680ef0a; // ?
/* 0x0680ef0b */ LDATA extern char public_680ef0b; // ?
/* 0x0680ef0c */ LDATA extern char public_680ef0c; // ?
/* 0x0680ef0d */ LDATA extern char public_680ef0d; // ?
/* 0x0680ef0e */ LDATA extern char public_680ef0e; // ?
/* 0x0680ef0f */ LDATA extern char public_680ef0f; // ?
/* 0x0680ef10 */ LDATA extern char public_680ef10; // ?
/* 0x0680ef11 */ LDATA extern char public_680ef11; // ?
/* 0x0680ef12 */ LDATA extern char public_680ef12; // ?
/* 0x0680ef13 */ LDATA extern char public_680ef13; // ?
/* 0x0680ef14 */ LDATA extern char public_680ef14; // ?
/* 0x0680ef15 */ LDATA extern char public_680ef15; // ?
/* 0x0680ef16 */ LDATA extern char public_680ef16; // ?
/* 0x0680ef17 */ LDATA extern char public_680ef17; // ?
/* 0x0680ef18 */ LDATA extern char public_680ef18; // ?
/* 0x0680ef19 */ LDATA extern char public_680ef19; // ?
/* 0x0680ef1a */ LDATA extern char public_680ef1a; // ?
/* 0x0680ef1b */ LDATA extern char public_680ef1b; // ?
/* 0x0680ef1c */ LDATA extern char public_680ef1c; // ?
/* 0x0680ef1d */ LDATA extern char public_680ef1d; // ?
/* 0x0680ef1e */ LDATA extern char public_680ef1e; // ?
/* 0x0680ef1f */ LDATA extern char public_680ef1f; // ?
/* 0x0680ef20 */ LDATA extern char public_680ef20; // ?
/* 0x0680ef21 */ LDATA extern char public_680ef21; // ?
/* 0x0680ef22 */ LDATA extern char public_680ef22; // ?
/* 0x0680ef23 */ LDATA extern char public_680ef23; // ?
/* 0x0680ef24 */ LDATA extern char public_680ef24; // ?
/* 0x0680ef25 */ LDATA extern char public_680ef25; // ?
/* 0x0680ef26 */ LDATA extern char public_680ef26; // ?
/* 0x0680ef27 */ LDATA extern char public_680ef27; // ?
/* 0x0680ef28 */ LDATA extern char public_680ef28; // ?
/* 0x0680ef29 */ LDATA extern char public_680ef29; // ?
/* 0x0680ef2a */ LDATA extern char public_680ef2a; // ?
/* 0x0680ef2b */ LDATA extern char public_680ef2b; // ?
/* 0x0680ef2c */ LDATA extern char public_680ef2c; // ?
/* 0x0680ef2d */ LDATA extern char public_680ef2d; // ?
/* 0x0680ef2e */ LDATA extern char public_680ef2e; // ?
/* 0x0680ef2f */ LDATA extern char public_680ef2f; // ?
/* 0x0680ef30 */ LDATA extern char public_680ef30; // ?
/* 0x0680ef31 */ LDATA extern char public_680ef31; // ?
/* 0x0680ef32 */ LDATA extern char public_680ef32; // ?
/* 0x0680ef33 */ LDATA extern char public_680ef33; // ?
/* 0x0680ef34 */ LDATA extern char public_680ef34; // ?
/* 0x0680ef35 */ LDATA extern char public_680ef35; // ?
/* 0x0680ef36 */ LDATA extern char public_680ef36; // ?
/* 0x0680ef37 */ LDATA extern char public_680ef37; // ?
/* 0x0680ef38 */ LDATA extern char public_680ef38; // ?
/* 0x0680ef39 */ LDATA extern char public_680ef39; // ?
/* 0x0680ef3a */ LDATA extern char public_680ef3a; // ?
/* 0x0680ef3b */ LDATA extern char public_680ef3b; // ?
/* 0x0680ef3c */ LDATA extern char public_680ef3c; // ?
/* 0x0680ef3d */ LDATA extern char public_680ef3d; // ?
/* 0x0680ef3e */ LDATA extern char public_680ef3e; // ?
/* 0x0680ef3f */ LDATA extern char public_680ef3f; // ?
/* 0x0680ef40 */ LDATA extern char public_680ef40; // ?
/* 0x0680ef41 */ LDATA extern char public_680ef41; // ?
/* 0x0680ef42 */ LDATA extern char public_680ef42; // ?
/* 0x0680ef43 */ LDATA extern char public_680ef43; // ?
/* 0x0680ef44 */ LDATA extern char public_680ef44; // ?
/* 0x0680ef45 */ LDATA extern char public_680ef45; // ?
/* 0x0680ef46 */ LDATA extern char public_680ef46; // ?
/* 0x0680ef47 */ LDATA extern char public_680ef47; // ?
/* 0x0680ef48 */ LDATA extern char public_680ef48; // ?
/* 0x0680ef49 */ LDATA extern char public_680ef49; // ?
/* 0x0680ef4a */ LDATA extern char public_680ef4a; // ?
/* 0x0680ef4b */ LDATA extern char public_680ef4b; // ?
/* 0x0680ef4c */ LDATA extern char public_680ef4c; // ?
/* 0x0680ef4d */ LDATA extern char public_680ef4d; // ?
/* 0x0680ef4e */ LDATA extern char public_680ef4e; // ?
/* 0x0680ef4f */ LDATA extern char public_680ef4f; // ?
/* 0x0680ef50 */ LDATA extern char public_680ef50; // ?
/* 0x0680ef51 */ LDATA extern char public_680ef51; // ?
/* 0x0680ef52 */ LDATA extern char public_680ef52; // ?
/* 0x0680ef53 */ LDATA extern char public_680ef53; // ?
/* 0x0680ef54 */ LDATA extern char public_680ef54; // ?
/* 0x0680ef55 */ LDATA extern char public_680ef55; // ?
/* 0x0680ef56 */ LDATA extern char public_680ef56; // ?
/* 0x0680ef57 */ LDATA extern char public_680ef57; // ?
/* 0x0680ef58 */ LDATA extern char public_680ef58; // ?
/* 0x0680ef59 */ LDATA extern char public_680ef59; // ?
/* 0x0680ef5a */ LDATA extern char public_680ef5a; // ?
/* 0x0680ef5b */ LDATA extern char public_680ef5b; // ?
/* 0x0680ef5c */ LDATA extern char public_680ef5c; // ?
/* 0x0680ef5d */ LDATA extern char public_680ef5d; // ?
/* 0x0680ef5e */ LDATA extern char public_680ef5e; // ?
/* 0x0680ef5f */ LDATA extern char public_680ef5f; // ?
/* 0x0680ef60 */ LDATA extern char public_680ef60; // ?
/* 0x0680ef61 */ LDATA extern char public_680ef61; // ?
/* 0x0680ef62 */ LDATA extern char public_680ef62; // ?
/* 0x0680ef63 */ LDATA extern char public_680ef63; // ?
/* 0x0680ef64 */ LDATA extern char public_680ef64; // ?
/* 0x0680ef65 */ LDATA extern char public_680ef65; // ?
/* 0x0680ef66 */ LDATA extern char public_680ef66; // ?
/* 0x0680ef67 */ LDATA extern char public_680ef67; // ?
/* 0x0680ef68 */ LDATA extern char public_680ef68; // ?
/* 0x0680ef69 */ LDATA extern char public_680ef69; // ?
/* 0x0680ef6a */ LDATA extern char public_680ef6a; // ?
/* 0x0680ef6b */ LDATA extern char public_680ef6b; // ?
/* 0x0680ef6c */ LDATA extern char public_680ef6c; // ?
/* 0x0680ef6d */ LDATA extern char public_680ef6d; // ?
/* 0x0680ef6e */ LDATA extern char public_680ef6e; // ?
/* 0x0680ef6f */ LDATA extern char public_680ef6f; // ?
/* 0x0680ef70 */ LDATA extern char public_680ef70; // ?
/* 0x0680ef71 */ LDATA extern char public_680ef71; // ?
/* 0x0680ef72 */ LDATA extern char public_680ef72; // ?
/* 0x0680ef73 */ LDATA extern char public_680ef73; // ?
/* 0x0680ef74 */ LDATA extern char public_680ef74; // ?
/* 0x0680ef75 */ LDATA extern char public_680ef75; // ?
/* 0x0680ef76 */ LDATA extern char public_680ef76; // ?
/* 0x0680ef77 */ LDATA extern char public_680ef77; // ?
/* 0x0680ef78 */ LDATA extern char public_680ef78; // ?
/* 0x0680ef79 */ LDATA extern char public_680ef79; // ?
/* 0x0680ef7a */ LDATA extern char public_680ef7a; // ?
/* 0x0680ef7b */ LDATA extern char public_680ef7b; // ?
/* 0x0680ef7c */ LDATA extern char public_680ef7c; // ?
/* 0x0680ef7d */ LDATA extern char public_680ef7d; // ?
/* 0x0680ef7e */ LDATA extern char public_680ef7e; // ?
/* 0x0680ef7f */ LDATA extern char public_680ef7f; // ?
/* 0x0680ef80 */ LDATA extern char public_680ef80; // ?
/* 0x0680ef81 */ LDATA extern char public_680ef81; // ?
/* 0x0680ef82 */ LDATA extern char public_680ef82; // ?
/* 0x0680ef83 */ LDATA extern char public_680ef83; // ?
/* 0x0680ef84 */ LDATA extern char public_680ef84; // ?
/* 0x0680ef85 */ LDATA extern char public_680ef85; // ?
/* 0x0680ef86 */ LDATA extern char public_680ef86; // ?
/* 0x0680ef87 */ LDATA extern char public_680ef87; // ?
/* 0x0680ef88 */ LDATA extern char public_680ef88; // ?
/* 0x0680ef89 */ LDATA extern char public_680ef89; // ?
/* 0x0680ef8a */ LDATA extern char public_680ef8a; // ?
/* 0x0680ef8b */ LDATA extern char public_680ef8b; // ?
/* 0x0680ef8c */ LDATA extern char public_680ef8c; // ?
/* 0x0680ef8d */ LDATA extern char public_680ef8d; // ?
/* 0x0680ef8e */ LDATA extern char public_680ef8e; // ?
/* 0x0680ef8f */ LDATA extern char public_680ef8f; // ?
/* 0x0680ef90 */ LDATA extern char public_680ef90; // ?
/* 0x0680ef91 */ LDATA extern char public_680ef91; // ?
/* 0x0680ef92 */ LDATA extern char public_680ef92; // ?
/* 0x0680ef93 */ LDATA extern char public_680ef93; // ?
/* 0x0680ef94 */ LDATA extern char public_680ef94; // ?
/* 0x0680ef95 */ LDATA extern char public_680ef95; // ?
/* 0x0680ef96 */ LDATA extern char public_680ef96; // ?
/* 0x0680ef97 */ LDATA extern char public_680ef97; // ?
/* 0x0680ef98 */ LDATA extern char public_680ef98; // ?
/* 0x0680ef99 */ LDATA extern char public_680ef99; // ?
/* 0x0680ef9a */ LDATA extern char public_680ef9a; // ?
/* 0x0680ef9b */ LDATA extern char public_680ef9b; // ?
/* 0x0680ef9c */ LDATA extern char public_680ef9c; // ?
/* 0x0680ef9d */ LDATA extern char public_680ef9d; // ?
/* 0x0680ef9e */ LDATA extern char public_680ef9e; // ?
/* 0x0680ef9f */ LDATA extern char public_680ef9f; // ?
/* 0x0680efa0 */ LDATA extern char public_680efa0; // ?
/* 0x0680efa1 */ LDATA extern char public_680efa1; // ?
/* 0x0680efa2 */ LDATA extern char public_680efa2; // ?
/* 0x0680efa3 */ LDATA extern char public_680efa3; // ?
/* 0x0680efa4 */ LDATA extern char public_680efa4; // ?
/* 0x0680efa5 */ LDATA extern char public_680efa5; // ?
/* 0x0680efa6 */ LDATA extern char public_680efa6; // ?
/* 0x0680efa7 */ LDATA extern char public_680efa7; // ?
/* 0x0680efa8 */ LDATA extern char public_680efa8; // ?
/* 0x0680efa9 */ LDATA extern char public_680efa9; // ?
/* 0x0680efaa */ LDATA extern char public_680efaa; // ?
/* 0x0680efab */ LDATA extern char public_680efab; // ?
/* 0x0680efac */ LDATA extern char public_680efac; // ?
/* 0x0680efad */ LDATA extern char public_680efad; // ?
/* 0x0680efae */ LDATA extern char public_680efae; // ?
/* 0x0680efaf */ LDATA extern char public_680efaf; // ?
/* 0x0680efb0 */ LDATA extern char public_680efb0; // ?
/* 0x0680efb1 */ LDATA extern char public_680efb1; // ?
/* 0x0680efb2 */ LDATA extern char public_680efb2; // ?
/* 0x0680efb3 */ LDATA extern char public_680efb3; // ?
/* 0x0680efb4 */ LDATA extern char public_680efb4; // ?
/* 0x0680efb5 */ LDATA extern char public_680efb5; // ?
/* 0x0680efb6 */ LDATA extern char public_680efb6; // ?
/* 0x0680efb7 */ LDATA extern char public_680efb7; // ?
/* 0x0680efb8 */ LDATA extern char public_680efb8; // ?
/* 0x0680efb9 */ LDATA extern char public_680efb9; // ?
/* 0x0680efba */ LDATA extern char public_680efba; // ?
/* 0x0680efbb */ LDATA extern char public_680efbb; // ?
/* 0x0680efbc */ LDATA extern char public_680efbc; // ?
/* 0x0680efbd */ LDATA extern char public_680efbd; // ?
/* 0x0680efbe */ LDATA extern char public_680efbe; // ?
/* 0x0680efbf */ LDATA extern char public_680efbf; // ?
/* 0x0680efc0 */ LDATA extern char public_680efc0; // ?
/* 0x0680efc1 */ LDATA extern char public_680efc1; // ?
/* 0x0680efc2 */ LDATA extern char public_680efc2; // ?
/* 0x0680efc3 */ LDATA extern char public_680efc3; // ?
/* 0x0680efc4 */ LDATA extern char public_680efc4; // ?
/* 0x0680efc5 */ LDATA extern char public_680efc5; // ?
/* 0x0680efc6 */ LDATA extern char public_680efc6; // ?
/* 0x0680efc7 */ LDATA extern char public_680efc7; // ?
/* 0x0680efc8 */ LDATA extern char public_680efc8; // ?
/* 0x0680efc9 */ LDATA extern char public_680efc9; // ?
/* 0x0680efca */ LDATA extern char public_680efca; // ?
/* 0x0680efcb */ LDATA extern char public_680efcb; // ?
/* 0x0680efcc */ LDATA extern char public_680efcc; // ?
/* 0x0680efcd */ LDATA extern char public_680efcd; // ?
/* 0x0680efce */ LDATA extern char public_680efce; // ?
/* 0x0680efcf */ LDATA extern char public_680efcf; // ?
/* 0x0680efd0 */ LDATA extern char public_680efd0; // ?
/* 0x0680efd1 */ LDATA extern char public_680efd1; // ?
/* 0x0680efd2 */ LDATA extern char public_680efd2; // ?
/* 0x0680efd3 */ LDATA extern char public_680efd3; // ?
/* 0x0680efd4 */ LDATA extern char public_680efd4; // ?
/* 0x0680efd5 */ LDATA extern char public_680efd5; // ?
/* 0x0680efd6 */ LDATA extern char public_680efd6; // ?
/* 0x0680efd7 */ LDATA extern char public_680efd7; // ?
/* 0x0680efd8 */ LDATA extern char public_680efd8; // ?
/* 0x0680efd9 */ LDATA extern char public_680efd9; // ?
/* 0x0680efda */ LDATA extern char public_680efda; // ?
/* 0x0680efdb */ LDATA extern char public_680efdb; // ?
/* 0x0680efdc */ LDATA extern char public_680efdc; // ?
/* 0x0680efdd */ LDATA extern char public_680efdd; // ?
/* 0x0680efde */ LDATA extern char public_680efde; // ?
/* 0x0680efdf */ LDATA extern char public_680efdf; // ?
/* 0x0680efe0 */ LDATA extern char public_680efe0; // ?
/* 0x0680efe1 */ LDATA extern char public_680efe1; // ?
/* 0x0680efe2 */ LDATA extern char public_680efe2; // ?
/* 0x0680efe3 */ LDATA extern char public_680efe3; // ?
/* 0x0680efe4 */ LDATA extern char public_680efe4; // ?
/* 0x0680efe5 */ LDATA extern char public_680efe5; // ?
/* 0x0680efe6 */ LDATA extern char public_680efe6; // ?
/* 0x0680efe7 */ LDATA extern char public_680efe7; // ?
/* 0x0680efe8 */ LDATA extern char public_680efe8; // ?
/* 0x0680efe9 */ LDATA extern char public_680efe9; // ?
/* 0x0680efea */ LDATA extern char public_680efea; // ?
/* 0x0680efeb */ LDATA extern char public_680efeb; // ?
/* 0x0680efec */ LDATA extern char public_680efec; // ?
/* 0x0680efed */ LDATA extern char public_680efed; // ?
/* 0x0680efee */ LDATA extern char public_680efee; // ?
/* 0x0680efef */ LDATA extern char public_680efef; // ?
/* 0x0680eff0 */ LDATA extern char public_680eff0; // ?
/* 0x0680eff1 */ LDATA extern char public_680eff1; // ?
/* 0x0680eff2 */ LDATA extern char public_680eff2; // ?
/* 0x0680eff3 */ LDATA extern char public_680eff3; // ?
/* 0x0680eff4 */ LDATA extern char public_680eff4; // ?
/* 0x0680eff5 */ LDATA extern char public_680eff5; // ?
/* 0x0680eff6 */ LDATA extern char public_680eff6; // ?
/* 0x0680eff7 */ LDATA extern char public_680eff7; // ?
/* 0x0680eff8 */ LDATA extern char public_680eff8; // ?
/* 0x0680eff9 */ LDATA extern char public_680eff9; // ?
/* 0x0680effa */ LDATA extern char public_680effa; // ?
/* 0x0680effb */ LDATA extern char public_680effb; // ?
/* 0x0680effc */ LDATA extern char public_680effc; // ?
/* 0x0680effd */ LDATA extern char public_680effd; // ?
/* 0x0680effe */ LDATA extern char public_680effe; // ?
/* 0x0680efff */ LDATA extern char public_680efff; // ?
#ifdef __cplusplus
} // extern "C"
#endif // __cplusplus
