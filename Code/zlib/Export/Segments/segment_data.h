#pragma once

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

#ifdef __INTELLISENSE__ /* ffs Visual Studio is so slow */
#define LDATA
#else
#define LDATA __declspec(allocate("l_data")) __declspec(align(1))
#endif // __INTELLISENSE__

/* 0x1000d000 */ LDATA extern char public_1000d000;
/* 0x1000d001 */ LDATA extern char public_1000d001;
/* 0x1000d002 */ LDATA extern char public_1000d002;
/* 0x1000d003 */ LDATA extern char public_1000d003;
/* 0x1000d004 */ LDATA extern void const* public_1000d004;
/* 0x1000d008 */ LDATA extern char public_1000d008;
/* 0x1000d009 */ LDATA extern char public_1000d009;
/* 0x1000d00a */ LDATA extern char public_1000d00a;
/* 0x1000d00b */ LDATA extern char public_1000d00b;
/* 0x1000d00c */ LDATA extern char public_1000d00c;
/* 0x1000d00d */ LDATA extern char public_1000d00d;
/* 0x1000d00e */ LDATA extern char public_1000d00e;
/* 0x1000d00f */ LDATA extern char public_1000d00f;
/* 0x1000d010 */ LDATA extern char public_1000d010;
/* 0x1000d011 */ LDATA extern char public_1000d011;
/* 0x1000d012 */ LDATA extern char public_1000d012;
/* 0x1000d013 */ LDATA extern char public_1000d013;
/* 0x1000d014 */ LDATA extern char public_1000d014;
/* 0x1000d015 */ LDATA extern char public_1000d015;
/* 0x1000d016 */ LDATA extern char public_1000d016;
/* 0x1000d017 */ LDATA extern char public_1000d017;
/* 0x1000d018 */ LDATA extern char public_1000d018;
/* 0x1000d019 */ LDATA extern char public_1000d019;
/* 0x1000d01a */ LDATA extern char public_1000d01a;
/* 0x1000d01b */ LDATA extern char public_1000d01b;
/* 0x1000d01c */ LDATA extern char public_1000d01c;
/* 0x1000d01d */ LDATA extern char public_1000d01d;
/* 0x1000d01e */ LDATA extern char public_1000d01e;
/* 0x1000d01f */ LDATA extern char public_1000d01f;
/* 0x1000d020 */ LDATA extern char public_1000d020; // '`'
/* 0x1000d021 */ LDATA extern char public_1000d021;
/* 0x1000d022 */ LDATA extern char public_1000d022;
/* 0x1000d023 */ LDATA extern char public_1000d023;
/* 0x1000d024 */ LDATA extern char public_1000d024;
/* 0x1000d025 */ LDATA extern char public_1000d025;
/* 0x1000d026 */ LDATA extern char public_1000d026;
/* 0x1000d027 */ LDATA extern char public_1000d027;
/* 0x1000d028 */ LDATA extern char public_1000d028;
/* 0x1000d029 */ LDATA extern char public_1000d029;
/* 0x1000d02a */ LDATA extern char public_1000d02a;
/* 0x1000d02b */ LDATA extern char public_1000d02b;
/* 0x1000d02c */ LDATA extern char public_1000d02c; // 'P'
/* 0x1000d02d */ LDATA extern char public_1000d02d;
/* 0x1000d02e */ LDATA extern char public_1000d02e;
/* 0x1000d02f */ LDATA extern char public_1000d02f;
/* 0x1000d030 */ LDATA extern char public_1000d030;
/* 0x1000d031 */ LDATA extern char public_1000d031;
/* 0x1000d032 */ LDATA extern char public_1000d032;
/* 0x1000d033 */ LDATA extern char public_1000d033;
/* 0x1000d034 */ LDATA extern char public_1000d034;
/* 0x1000d035 */ LDATA extern char public_1000d035;
/* 0x1000d036 */ LDATA extern char public_1000d036;
/* 0x1000d037 */ LDATA extern char public_1000d037;
/* 0x1000d038 */ LDATA extern char public_1000d038; // 'T'
/* 0x1000d039 */ LDATA extern char public_1000d039;
/* 0x1000d03a */ LDATA extern char public_1000d03a;
/* 0x1000d03b */ LDATA extern char public_1000d03b;
/* 0x1000d03c */ LDATA extern char public_1000d03c; // 's'
/* 0x1000d03d */ LDATA extern char public_1000d03d;
/* 0x1000d03e */ LDATA extern char public_1000d03e;
/* 0x1000d03f */ LDATA extern char public_1000d03f;
/* 0x1000d040 */ LDATA extern char public_1000d040; // 'R'
/* 0x1000d041 */ LDATA extern char public_1000d041;
/* 0x1000d042 */ LDATA extern char public_1000d042;
/* 0x1000d043 */ LDATA extern char public_1000d043;
/* 0x1000d044 */ LDATA extern char public_1000d044;
/* 0x1000d045 */ LDATA extern char public_1000d045;
/* 0x1000d046 */ LDATA extern char public_1000d046;
/* 0x1000d047 */ LDATA extern char public_1000d047;
/* 0x1000d048 */ LDATA extern char public_1000d048;
/* 0x1000d049 */ LDATA extern char public_1000d049;
/* 0x1000d04a */ LDATA extern char public_1000d04a;
/* 0x1000d04b */ LDATA extern char public_1000d04b;
/* 0x1000d04c */ LDATA extern char public_1000d04c; // 'p'
/* 0x1000d04d */ LDATA extern char public_1000d04d;
/* 0x1000d04e */ LDATA extern char public_1000d04e;
/* 0x1000d04f */ LDATA extern char public_1000d04f;
/* 0x1000d050 */ LDATA extern char public_1000d050;
/* 0x1000d051 */ LDATA extern char public_1000d051;
/* 0x1000d052 */ LDATA extern char public_1000d052;
/* 0x1000d053 */ LDATA extern char public_1000d053;
/* 0x1000d054 */ LDATA extern char public_1000d054; // '0'
/* 0x1000d055 */ LDATA extern char public_1000d055;
/* 0x1000d056 */ LDATA extern char public_1000d056;
/* 0x1000d057 */ LDATA extern char public_1000d057;
/* 0x1000d058 */ LDATA extern char public_1000d058;
/* 0x1000d059 */ LDATA extern char public_1000d059;
/* 0x1000d05a */ LDATA extern char public_1000d05a;
/* 0x1000d05b */ LDATA extern char public_1000d05b;
/* 0x1000d05c */ LDATA extern char public_1000d05c;
/* 0x1000d05d */ LDATA extern char public_1000d05d;
/* 0x1000d05e */ LDATA extern char public_1000d05e;
/* 0x1000d05f */ LDATA extern char public_1000d05f;
/* 0x1000d060 */ LDATA extern char public_1000d060; // 'P'
/* 0x1000d061 */ LDATA extern char public_1000d061;
/* 0x1000d062 */ LDATA extern char public_1000d062;
/* 0x1000d063 */ LDATA extern char public_1000d063;
/* 0x1000d064 */ LDATA extern char public_1000d064;
/* 0x1000d065 */ LDATA extern char public_1000d065;
/* 0x1000d066 */ LDATA extern char public_1000d066;
/* 0x1000d067 */ LDATA extern char public_1000d067;
/* 0x1000d068 */ LDATA extern char public_1000d068;
/* 0x1000d069 */ LDATA extern char public_1000d069;
/* 0x1000d06a */ LDATA extern char public_1000d06a;
/* 0x1000d06b */ LDATA extern char public_1000d06b;
/* 0x1000d06c */ LDATA extern char public_1000d06c; // '`'
/* 0x1000d06d */ LDATA extern char public_1000d06d;
/* 0x1000d06e */ LDATA extern char public_1000d06e;
/* 0x1000d06f */ LDATA extern char public_1000d06f;
/* 0x1000d070 */ LDATA extern char public_1000d070;
/* 0x1000d071 */ LDATA extern char public_1000d071;
/* 0x1000d072 */ LDATA extern char public_1000d072;
/* 0x1000d073 */ LDATA extern char public_1000d073;
/* 0x1000d074 */ LDATA extern char public_1000d074; // ' '
/* 0x1000d075 */ LDATA extern char public_1000d075;
/* 0x1000d076 */ LDATA extern char public_1000d076;
/* 0x1000d077 */ LDATA extern char public_1000d077;
/* 0x1000d078 */ LDATA extern char public_1000d078;
/* 0x1000d079 */ LDATA extern char public_1000d079;
/* 0x1000d07a */ LDATA extern char public_1000d07a;
/* 0x1000d07b */ LDATA extern char public_1000d07b;
/* 0x1000d07c */ LDATA extern char public_1000d07c;
/* 0x1000d07d */ LDATA extern char public_1000d07d;
/* 0x1000d07e */ LDATA extern char public_1000d07e;
/* 0x1000d07f */ LDATA extern char public_1000d07f;
/* 0x1000d080 */ LDATA extern char public_1000d080;
/* 0x1000d081 */ LDATA extern char public_1000d081;
/* 0x1000d082 */ LDATA extern char public_1000d082;
/* 0x1000d083 */ LDATA extern char public_1000d083;
/* 0x1000d084 */ LDATA extern char public_1000d084;
/* 0x1000d085 */ LDATA extern char public_1000d085;
/* 0x1000d086 */ LDATA extern char public_1000d086;
/* 0x1000d087 */ LDATA extern char public_1000d087;
/* 0x1000d088 */ LDATA extern char public_1000d088;
/* 0x1000d089 */ LDATA extern char public_1000d089;
/* 0x1000d08a */ LDATA extern char public_1000d08a;
/* 0x1000d08b */ LDATA extern char public_1000d08b;
/* 0x1000d08c */ LDATA extern char public_1000d08c;
/* 0x1000d08d */ LDATA extern char public_1000d08d;
/* 0x1000d08e */ LDATA extern char public_1000d08e;
/* 0x1000d08f */ LDATA extern char public_1000d08f;
/* 0x1000d090 */ LDATA extern char public_1000d090;
/* 0x1000d091 */ LDATA extern char public_1000d091;
/* 0x1000d092 */ LDATA extern char public_1000d092;
/* 0x1000d093 */ LDATA extern char public_1000d093;
/* 0x1000d094 */ LDATA extern char public_1000d094; // '@'
/* 0x1000d095 */ LDATA extern char public_1000d095;
/* 0x1000d096 */ LDATA extern char public_1000d096;
/* 0x1000d097 */ LDATA extern char public_1000d097;
/* 0x1000d098 */ LDATA extern char public_1000d098;
/* 0x1000d099 */ LDATA extern char public_1000d099;
/* 0x1000d09a */ LDATA extern char public_1000d09a;
/* 0x1000d09b */ LDATA extern char public_1000d09b;
/* 0x1000d09c */ LDATA extern char public_1000d09c;
/* 0x1000d09d */ LDATA extern char public_1000d09d;
/* 0x1000d09e */ LDATA extern char public_1000d09e;
/* 0x1000d09f */ LDATA extern char public_1000d09f;
/* 0x1000d0a0 */ LDATA extern char public_1000d0a0; // 'P'
/* 0x1000d0a1 */ LDATA extern char public_1000d0a1;
/* 0x1000d0a2 */ LDATA extern char public_1000d0a2;
/* 0x1000d0a3 */ LDATA extern char public_1000d0a3;
/* 0x1000d0a4 */ LDATA extern char public_1000d0a4;
/* 0x1000d0a5 */ LDATA extern char public_1000d0a5;
/* 0x1000d0a6 */ LDATA extern char public_1000d0a6;
/* 0x1000d0a7 */ LDATA extern char public_1000d0a7;
/* 0x1000d0a8 */ LDATA extern char public_1000d0a8;
/* 0x1000d0a9 */ LDATA extern char public_1000d0a9;
/* 0x1000d0aa */ LDATA extern char public_1000d0aa;
/* 0x1000d0ab */ LDATA extern char public_1000d0ab;
/* 0x1000d0ac */ LDATA extern char public_1000d0ac; // 'X'
/* 0x1000d0ad */ LDATA extern char public_1000d0ad;
/* 0x1000d0ae */ LDATA extern char public_1000d0ae;
/* 0x1000d0af */ LDATA extern char public_1000d0af;
/* 0x1000d0b0 */ LDATA extern char public_1000d0b0;
/* 0x1000d0b1 */ LDATA extern char public_1000d0b1;
/* 0x1000d0b2 */ LDATA extern char public_1000d0b2;
/* 0x1000d0b3 */ LDATA extern char public_1000d0b3;
/* 0x1000d0b4 */ LDATA extern char public_1000d0b4;
/* 0x1000d0b5 */ LDATA extern char public_1000d0b5;
/* 0x1000d0b6 */ LDATA extern char public_1000d0b6;
/* 0x1000d0b7 */ LDATA extern char public_1000d0b7;
/* 0x1000d0b8 */ LDATA extern char public_1000d0b8;
/* 0x1000d0b9 */ LDATA extern char public_1000d0b9;
/* 0x1000d0ba */ LDATA extern char public_1000d0ba;
/* 0x1000d0bb */ LDATA extern char public_1000d0bb;
/* 0x1000d0bc */ LDATA extern char public_1000d0bc;
/* 0x1000d0bd */ LDATA extern char public_1000d0bd;
/* 0x1000d0be */ LDATA extern char public_1000d0be;
/* 0x1000d0bf */ LDATA extern char public_1000d0bf;
/* 0x1000d0c0 */ LDATA extern char public_1000d0c0; // 'S'
/* 0x1000d0c1 */ LDATA extern char public_1000d0c1;
/* 0x1000d0c2 */ LDATA extern char public_1000d0c2;
/* 0x1000d0c3 */ LDATA extern char public_1000d0c3;
/* 0x1000d0c4 */ LDATA extern char public_1000d0c4; // ';'
/* 0x1000d0c5 */ LDATA extern char public_1000d0c5;
/* 0x1000d0c6 */ LDATA extern char public_1000d0c6;
/* 0x1000d0c7 */ LDATA extern char public_1000d0c7;
/* 0x1000d0c8 */ LDATA extern char public_1000d0c8;
/* 0x1000d0c9 */ LDATA extern char public_1000d0c9;
/* 0x1000d0ca */ LDATA extern char public_1000d0ca;
/* 0x1000d0cb */ LDATA extern char public_1000d0cb;
/* 0x1000d0cc */ LDATA extern char public_1000d0cc; // 'x'
/* 0x1000d0cd */ LDATA extern char public_1000d0cd;
/* 0x1000d0ce */ LDATA extern char public_1000d0ce;
/* 0x1000d0cf */ LDATA extern char public_1000d0cf;
/* 0x1000d0d0 */ LDATA extern char public_1000d0d0;
/* 0x1000d0d1 */ LDATA extern char public_1000d0d1;
/* 0x1000d0d2 */ LDATA extern char public_1000d0d2;
/* 0x1000d0d3 */ LDATA extern char public_1000d0d3;
/* 0x1000d0d4 */ LDATA extern char public_1000d0d4; // '8'
/* 0x1000d0d5 */ LDATA extern char public_1000d0d5;
/* 0x1000d0d6 */ LDATA extern char public_1000d0d6;
/* 0x1000d0d7 */ LDATA extern char public_1000d0d7;
/* 0x1000d0d8 */ LDATA extern char public_1000d0d8;
/* 0x1000d0d9 */ LDATA extern char public_1000d0d9;
/* 0x1000d0da */ LDATA extern char public_1000d0da;
/* 0x1000d0db */ LDATA extern char public_1000d0db;
/* 0x1000d0dc */ LDATA extern char public_1000d0dc;
/* 0x1000d0dd */ LDATA extern char public_1000d0dd;
/* 0x1000d0de */ LDATA extern char public_1000d0de;
/* 0x1000d0df */ LDATA extern char public_1000d0df;
/* 0x1000d0e0 */ LDATA extern char public_1000d0e0; // 'Q'
/* 0x1000d0e1 */ LDATA extern char public_1000d0e1;
/* 0x1000d0e2 */ LDATA extern char public_1000d0e2;
/* 0x1000d0e3 */ LDATA extern char public_1000d0e3;
/* 0x1000d0e4 */ LDATA extern char public_1000d0e4;
/* 0x1000d0e5 */ LDATA extern char public_1000d0e5;
/* 0x1000d0e6 */ LDATA extern char public_1000d0e6;
/* 0x1000d0e7 */ LDATA extern char public_1000d0e7;
/* 0x1000d0e8 */ LDATA extern char public_1000d0e8;
/* 0x1000d0e9 */ LDATA extern char public_1000d0e9;
/* 0x1000d0ea */ LDATA extern char public_1000d0ea;
/* 0x1000d0eb */ LDATA extern char public_1000d0eb;
/* 0x1000d0ec */ LDATA extern char public_1000d0ec; // 'h'
/* 0x1000d0ed */ LDATA extern char public_1000d0ed;
/* 0x1000d0ee */ LDATA extern char public_1000d0ee;
/* 0x1000d0ef */ LDATA extern char public_1000d0ef;
/* 0x1000d0f0 */ LDATA extern char public_1000d0f0;
/* 0x1000d0f1 */ LDATA extern char public_1000d0f1;
/* 0x1000d0f2 */ LDATA extern char public_1000d0f2;
/* 0x1000d0f3 */ LDATA extern char public_1000d0f3;
/* 0x1000d0f4 */ LDATA extern char public_1000d0f4; // '('
/* 0x1000d0f5 */ LDATA extern char public_1000d0f5;
/* 0x1000d0f6 */ LDATA extern char public_1000d0f6;
/* 0x1000d0f7 */ LDATA extern char public_1000d0f7;
/* 0x1000d0f8 */ LDATA extern char public_1000d0f8;
/* 0x1000d0f9 */ LDATA extern char public_1000d0f9;
/* 0x1000d0fa */ LDATA extern char public_1000d0fa;
/* 0x1000d0fb */ LDATA extern char public_1000d0fb;
/* 0x1000d0fc */ LDATA extern char public_1000d0fc;
/* 0x1000d0fd */ LDATA extern char public_1000d0fd;
/* 0x1000d0fe */ LDATA extern char public_1000d0fe;
/* 0x1000d0ff */ LDATA extern char public_1000d0ff;
/* 0x1000d100 */ LDATA extern char public_1000d100;
/* 0x1000d101 */ LDATA extern char public_1000d101;
/* 0x1000d102 */ LDATA extern char public_1000d102;
/* 0x1000d103 */ LDATA extern char public_1000d103;
/* 0x1000d104 */ LDATA extern char public_1000d104;
/* 0x1000d105 */ LDATA extern char public_1000d105;
/* 0x1000d106 */ LDATA extern char public_1000d106;
/* 0x1000d107 */ LDATA extern char public_1000d107;
/* 0x1000d108 */ LDATA extern char public_1000d108;
/* 0x1000d109 */ LDATA extern char public_1000d109;
/* 0x1000d10a */ LDATA extern char public_1000d10a;
/* 0x1000d10b */ LDATA extern char public_1000d10b;
/* 0x1000d10c */ LDATA extern char public_1000d10c;
/* 0x1000d10d */ LDATA extern char public_1000d10d;
/* 0x1000d10e */ LDATA extern char public_1000d10e;
/* 0x1000d10f */ LDATA extern char public_1000d10f;
/* 0x1000d110 */ LDATA extern char public_1000d110;
/* 0x1000d111 */ LDATA extern char public_1000d111;
/* 0x1000d112 */ LDATA extern char public_1000d112;
/* 0x1000d113 */ LDATA extern char public_1000d113;
/* 0x1000d114 */ LDATA extern char public_1000d114; // 'H'
/* 0x1000d115 */ LDATA extern char public_1000d115;
/* 0x1000d116 */ LDATA extern char public_1000d116;
/* 0x1000d117 */ LDATA extern char public_1000d117;
/* 0x1000d118 */ LDATA extern char public_1000d118;
/* 0x1000d119 */ LDATA extern char public_1000d119;
/* 0x1000d11a */ LDATA extern char public_1000d11a;
/* 0x1000d11b */ LDATA extern char public_1000d11b;
/* 0x1000d11c */ LDATA extern char public_1000d11c;
/* 0x1000d11d */ LDATA extern char public_1000d11d;
/* 0x1000d11e */ LDATA extern char public_1000d11e;
/* 0x1000d11f */ LDATA extern char public_1000d11f;
/* 0x1000d120 */ LDATA extern char public_1000d120; // 'P'
/* 0x1000d121 */ LDATA extern char public_1000d121;
/* 0x1000d122 */ LDATA extern char public_1000d122;
/* 0x1000d123 */ LDATA extern char public_1000d123;
/* 0x1000d124 */ LDATA extern char public_1000d124;
/* 0x1000d125 */ LDATA extern char public_1000d125;
/* 0x1000d126 */ LDATA extern char public_1000d126;
/* 0x1000d127 */ LDATA extern char public_1000d127;
/* 0x1000d128 */ LDATA extern char public_1000d128;
/* 0x1000d129 */ LDATA extern char public_1000d129;
/* 0x1000d12a */ LDATA extern char public_1000d12a;
/* 0x1000d12b */ LDATA extern char public_1000d12b;
/* 0x1000d12c */ LDATA extern char public_1000d12c; // 'T'
/* 0x1000d12d */ LDATA extern char public_1000d12d;
/* 0x1000d12e */ LDATA extern char public_1000d12e;
/* 0x1000d12f */ LDATA extern char public_1000d12f;
/* 0x1000d130 */ LDATA extern char public_1000d130;
/* 0x1000d131 */ LDATA extern char public_1000d131;
/* 0x1000d132 */ LDATA extern char public_1000d132;
/* 0x1000d133 */ LDATA extern char public_1000d133;
/* 0x1000d134 */ LDATA extern char public_1000d134;
/* 0x1000d135 */ LDATA extern char public_1000d135;
/* 0x1000d136 */ LDATA extern char public_1000d136;
/* 0x1000d137 */ LDATA extern char public_1000d137;
/* 0x1000d138 */ LDATA extern char public_1000d138; // 'U'
/* 0x1000d139 */ LDATA extern char public_1000d139;
/* 0x1000d13a */ LDATA extern char public_1000d13a;
/* 0x1000d13b */ LDATA extern char public_1000d13b;
/* 0x1000d13c */ LDATA extern char public_1000d13c;
/* 0x1000d13d */ LDATA extern char public_1000d13d;
/* 0x1000d13e */ LDATA extern char public_1000d13e;
/* 0x1000d13f */ LDATA extern char public_1000d13f;
/* 0x1000d140 */ LDATA extern char public_1000d140; // 'S'
/* 0x1000d141 */ LDATA extern char public_1000d141;
/* 0x1000d142 */ LDATA extern char public_1000d142;
/* 0x1000d143 */ LDATA extern char public_1000d143;
/* 0x1000d144 */ LDATA extern char public_1000d144; // '+'
/* 0x1000d145 */ LDATA extern char public_1000d145;
/* 0x1000d146 */ LDATA extern char public_1000d146;
/* 0x1000d147 */ LDATA extern char public_1000d147;
/* 0x1000d148 */ LDATA extern char public_1000d148;
/* 0x1000d149 */ LDATA extern char public_1000d149;
/* 0x1000d14a */ LDATA extern char public_1000d14a;
/* 0x1000d14b */ LDATA extern char public_1000d14b;
/* 0x1000d14c */ LDATA extern char public_1000d14c; // 't'
/* 0x1000d14d */ LDATA extern char public_1000d14d;
/* 0x1000d14e */ LDATA extern char public_1000d14e;
/* 0x1000d14f */ LDATA extern char public_1000d14f;
/* 0x1000d150 */ LDATA extern char public_1000d150;
/* 0x1000d151 */ LDATA extern char public_1000d151;
/* 0x1000d152 */ LDATA extern char public_1000d152;
/* 0x1000d153 */ LDATA extern char public_1000d153;
/* 0x1000d154 */ LDATA extern char public_1000d154; // '4'
/* 0x1000d155 */ LDATA extern char public_1000d155;
/* 0x1000d156 */ LDATA extern char public_1000d156;
/* 0x1000d157 */ LDATA extern char public_1000d157;
/* 0x1000d158 */ LDATA extern char public_1000d158;
/* 0x1000d159 */ LDATA extern char public_1000d159;
/* 0x1000d15a */ LDATA extern char public_1000d15a;
/* 0x1000d15b */ LDATA extern char public_1000d15b;
/* 0x1000d15c */ LDATA extern char public_1000d15c;
/* 0x1000d15d */ LDATA extern char public_1000d15d;
/* 0x1000d15e */ LDATA extern char public_1000d15e;
/* 0x1000d15f */ LDATA extern char public_1000d15f;
/* 0x1000d160 */ LDATA extern char public_1000d160; // 'Q'
/* 0x1000d161 */ LDATA extern char public_1000d161;
/* 0x1000d162 */ LDATA extern char public_1000d162;
/* 0x1000d163 */ LDATA extern char public_1000d163;
/* 0x1000d164 */ LDATA extern char public_1000d164;
/* 0x1000d165 */ LDATA extern char public_1000d165;
/* 0x1000d166 */ LDATA extern char public_1000d166;
/* 0x1000d167 */ LDATA extern char public_1000d167;
/* 0x1000d168 */ LDATA extern char public_1000d168;
/* 0x1000d169 */ LDATA extern char public_1000d169;
/* 0x1000d16a */ LDATA extern char public_1000d16a;
/* 0x1000d16b */ LDATA extern char public_1000d16b;
/* 0x1000d16c */ LDATA extern char public_1000d16c; // 'd'
/* 0x1000d16d */ LDATA extern char public_1000d16d;
/* 0x1000d16e */ LDATA extern char public_1000d16e;
/* 0x1000d16f */ LDATA extern char public_1000d16f;
/* 0x1000d170 */ LDATA extern char public_1000d170;
/* 0x1000d171 */ LDATA extern char public_1000d171;
/* 0x1000d172 */ LDATA extern char public_1000d172;
/* 0x1000d173 */ LDATA extern char public_1000d173;
/* 0x1000d174 */ LDATA extern char public_1000d174; // '$'
/* 0x1000d175 */ LDATA extern char public_1000d175;
/* 0x1000d176 */ LDATA extern char public_1000d176;
/* 0x1000d177 */ LDATA extern char public_1000d177;
/* 0x1000d178 */ LDATA extern char public_1000d178;
/* 0x1000d179 */ LDATA extern char public_1000d179;
/* 0x1000d17a */ LDATA extern char public_1000d17a;
/* 0x1000d17b */ LDATA extern char public_1000d17b;
/* 0x1000d17c */ LDATA extern char public_1000d17c;
/* 0x1000d17d */ LDATA extern char public_1000d17d;
/* 0x1000d17e */ LDATA extern char public_1000d17e;
/* 0x1000d17f */ LDATA extern char public_1000d17f;
/* 0x1000d180 */ LDATA extern char public_1000d180;
/* 0x1000d181 */ LDATA extern char public_1000d181;
/* 0x1000d182 */ LDATA extern char public_1000d182;
/* 0x1000d183 */ LDATA extern char public_1000d183;
/* 0x1000d184 */ LDATA extern char public_1000d184;
/* 0x1000d185 */ LDATA extern char public_1000d185;
/* 0x1000d186 */ LDATA extern char public_1000d186;
/* 0x1000d187 */ LDATA extern char public_1000d187;
/* 0x1000d188 */ LDATA extern char public_1000d188;
/* 0x1000d189 */ LDATA extern char public_1000d189;
/* 0x1000d18a */ LDATA extern char public_1000d18a;
/* 0x1000d18b */ LDATA extern char public_1000d18b;
/* 0x1000d18c */ LDATA extern char public_1000d18c;
/* 0x1000d18d */ LDATA extern char public_1000d18d;
/* 0x1000d18e */ LDATA extern char public_1000d18e;
/* 0x1000d18f */ LDATA extern char public_1000d18f;
/* 0x1000d190 */ LDATA extern char public_1000d190;
/* 0x1000d191 */ LDATA extern char public_1000d191;
/* 0x1000d192 */ LDATA extern char public_1000d192;
/* 0x1000d193 */ LDATA extern char public_1000d193;
/* 0x1000d194 */ LDATA extern char public_1000d194; // 'D'
/* 0x1000d195 */ LDATA extern char public_1000d195;
/* 0x1000d196 */ LDATA extern char public_1000d196;
/* 0x1000d197 */ LDATA extern char public_1000d197;
/* 0x1000d198 */ LDATA extern char public_1000d198;
/* 0x1000d199 */ LDATA extern char public_1000d199;
/* 0x1000d19a */ LDATA extern char public_1000d19a;
/* 0x1000d19b */ LDATA extern char public_1000d19b;
/* 0x1000d19c */ LDATA extern char public_1000d19c;
/* 0x1000d19d */ LDATA extern char public_1000d19d;
/* 0x1000d19e */ LDATA extern char public_1000d19e;
/* 0x1000d19f */ LDATA extern char public_1000d19f;
/* 0x1000d1a0 */ LDATA extern char public_1000d1a0; // 'P'
/* 0x1000d1a1 */ LDATA extern char public_1000d1a1;
/* 0x1000d1a2 */ LDATA extern char public_1000d1a2;
/* 0x1000d1a3 */ LDATA extern char public_1000d1a3;
/* 0x1000d1a4 */ LDATA extern char public_1000d1a4;
/* 0x1000d1a5 */ LDATA extern char public_1000d1a5;
/* 0x1000d1a6 */ LDATA extern char public_1000d1a6;
/* 0x1000d1a7 */ LDATA extern char public_1000d1a7;
/* 0x1000d1a8 */ LDATA extern char public_1000d1a8;
/* 0x1000d1a9 */ LDATA extern char public_1000d1a9;
/* 0x1000d1aa */ LDATA extern char public_1000d1aa;
/* 0x1000d1ab */ LDATA extern char public_1000d1ab;
/* 0x1000d1ac */ LDATA extern char public_1000d1ac; // '\'
/* 0x1000d1ad */ LDATA extern char public_1000d1ad;
/* 0x1000d1ae */ LDATA extern char public_1000d1ae;
/* 0x1000d1af */ LDATA extern char public_1000d1af;
/* 0x1000d1b0 */ LDATA extern char public_1000d1b0;
/* 0x1000d1b1 */ LDATA extern char public_1000d1b1;
/* 0x1000d1b2 */ LDATA extern char public_1000d1b2;
/* 0x1000d1b3 */ LDATA extern char public_1000d1b3;
/* 0x1000d1b4 */ LDATA extern char public_1000d1b4;
/* 0x1000d1b5 */ LDATA extern char public_1000d1b5;
/* 0x1000d1b6 */ LDATA extern char public_1000d1b6;
/* 0x1000d1b7 */ LDATA extern char public_1000d1b7;
/* 0x1000d1b8 */ LDATA extern char public_1000d1b8;
/* 0x1000d1b9 */ LDATA extern char public_1000d1b9;
/* 0x1000d1ba */ LDATA extern char public_1000d1ba;
/* 0x1000d1bb */ LDATA extern char public_1000d1bb;
/* 0x1000d1bc */ LDATA extern char public_1000d1bc;
/* 0x1000d1bd */ LDATA extern char public_1000d1bd;
/* 0x1000d1be */ LDATA extern char public_1000d1be;
/* 0x1000d1bf */ LDATA extern char public_1000d1bf;
/* 0x1000d1c0 */ LDATA extern char public_1000d1c0; // 'T'
/* 0x1000d1c1 */ LDATA extern char public_1000d1c1;
/* 0x1000d1c2 */ LDATA extern char public_1000d1c2;
/* 0x1000d1c3 */ LDATA extern char public_1000d1c3;
/* 0x1000d1c4 */ LDATA extern char public_1000d1c4; // 'S'
/* 0x1000d1c5 */ LDATA extern char public_1000d1c5;
/* 0x1000d1c6 */ LDATA extern char public_1000d1c6;
/* 0x1000d1c7 */ LDATA extern char public_1000d1c7;
/* 0x1000d1c8 */ LDATA extern char public_1000d1c8;
/* 0x1000d1c9 */ LDATA extern char public_1000d1c9;
/* 0x1000d1ca */ LDATA extern char public_1000d1ca;
/* 0x1000d1cb */ LDATA extern char public_1000d1cb;
/* 0x1000d1cc */ LDATA extern char public_1000d1cc; // '|'
/* 0x1000d1cd */ LDATA extern char public_1000d1cd;
/* 0x1000d1ce */ LDATA extern char public_1000d1ce;
/* 0x1000d1cf */ LDATA extern char public_1000d1cf;
/* 0x1000d1d0 */ LDATA extern char public_1000d1d0;
/* 0x1000d1d1 */ LDATA extern char public_1000d1d1;
/* 0x1000d1d2 */ LDATA extern char public_1000d1d2;
/* 0x1000d1d3 */ LDATA extern char public_1000d1d3;
/* 0x1000d1d4 */ LDATA extern char public_1000d1d4; // '<'
/* 0x1000d1d5 */ LDATA extern char public_1000d1d5;
/* 0x1000d1d6 */ LDATA extern char public_1000d1d6;
/* 0x1000d1d7 */ LDATA extern char public_1000d1d7;
/* 0x1000d1d8 */ LDATA extern char public_1000d1d8;
/* 0x1000d1d9 */ LDATA extern char public_1000d1d9;
/* 0x1000d1da */ LDATA extern char public_1000d1da;
/* 0x1000d1db */ LDATA extern char public_1000d1db;
/* 0x1000d1dc */ LDATA extern char public_1000d1dc;
/* 0x1000d1dd */ LDATA extern char public_1000d1dd;
/* 0x1000d1de */ LDATA extern char public_1000d1de;
/* 0x1000d1df */ LDATA extern char public_1000d1df;
/* 0x1000d1e0 */ LDATA extern char public_1000d1e0; // 'R'
/* 0x1000d1e1 */ LDATA extern char public_1000d1e1;
/* 0x1000d1e2 */ LDATA extern char public_1000d1e2;
/* 0x1000d1e3 */ LDATA extern char public_1000d1e3;
/* 0x1000d1e4 */ LDATA extern char public_1000d1e4;
/* 0x1000d1e5 */ LDATA extern char public_1000d1e5;
/* 0x1000d1e6 */ LDATA extern char public_1000d1e6;
/* 0x1000d1e7 */ LDATA extern char public_1000d1e7;
/* 0x1000d1e8 */ LDATA extern char public_1000d1e8;
/* 0x1000d1e9 */ LDATA extern char public_1000d1e9;
/* 0x1000d1ea */ LDATA extern char public_1000d1ea;
/* 0x1000d1eb */ LDATA extern char public_1000d1eb;
/* 0x1000d1ec */ LDATA extern char public_1000d1ec; // 'l'
/* 0x1000d1ed */ LDATA extern char public_1000d1ed;
/* 0x1000d1ee */ LDATA extern char public_1000d1ee;
/* 0x1000d1ef */ LDATA extern char public_1000d1ef;
/* 0x1000d1f0 */ LDATA extern char public_1000d1f0;
/* 0x1000d1f1 */ LDATA extern char public_1000d1f1;
/* 0x1000d1f2 */ LDATA extern char public_1000d1f2;
/* 0x1000d1f3 */ LDATA extern char public_1000d1f3;
/* 0x1000d1f4 */ LDATA extern char public_1000d1f4; // ','
/* 0x1000d1f5 */ LDATA extern char public_1000d1f5;
/* 0x1000d1f6 */ LDATA extern char public_1000d1f6;
/* 0x1000d1f7 */ LDATA extern char public_1000d1f7;
/* 0x1000d1f8 */ LDATA extern char public_1000d1f8;
/* 0x1000d1f9 */ LDATA extern char public_1000d1f9;
/* 0x1000d1fa */ LDATA extern char public_1000d1fa;
/* 0x1000d1fb */ LDATA extern char public_1000d1fb;
/* 0x1000d1fc */ LDATA extern char public_1000d1fc;
/* 0x1000d1fd */ LDATA extern char public_1000d1fd;
/* 0x1000d1fe */ LDATA extern char public_1000d1fe;
/* 0x1000d1ff */ LDATA extern char public_1000d1ff;
/* 0x1000d200 */ LDATA extern char public_1000d200;
/* 0x1000d201 */ LDATA extern char public_1000d201;
/* 0x1000d202 */ LDATA extern char public_1000d202;
/* 0x1000d203 */ LDATA extern char public_1000d203;
/* 0x1000d204 */ LDATA extern char public_1000d204;
/* 0x1000d205 */ LDATA extern char public_1000d205;
/* 0x1000d206 */ LDATA extern char public_1000d206;
/* 0x1000d207 */ LDATA extern char public_1000d207;
/* 0x1000d208 */ LDATA extern char public_1000d208;
/* 0x1000d209 */ LDATA extern char public_1000d209;
/* 0x1000d20a */ LDATA extern char public_1000d20a;
/* 0x1000d20b */ LDATA extern char public_1000d20b;
/* 0x1000d20c */ LDATA extern char public_1000d20c;
/* 0x1000d20d */ LDATA extern char public_1000d20d;
/* 0x1000d20e */ LDATA extern char public_1000d20e;
/* 0x1000d20f */ LDATA extern char public_1000d20f;
/* 0x1000d210 */ LDATA extern char public_1000d210;
/* 0x1000d211 */ LDATA extern char public_1000d211;
/* 0x1000d212 */ LDATA extern char public_1000d212;
/* 0x1000d213 */ LDATA extern char public_1000d213;
/* 0x1000d214 */ LDATA extern char public_1000d214; // 'L'
/* 0x1000d215 */ LDATA extern char public_1000d215;
/* 0x1000d216 */ LDATA extern char public_1000d216;
/* 0x1000d217 */ LDATA extern char public_1000d217;
/* 0x1000d218 */ LDATA extern char public_1000d218;
/* 0x1000d219 */ LDATA extern char public_1000d219;
/* 0x1000d21a */ LDATA extern char public_1000d21a;
/* 0x1000d21b */ LDATA extern char public_1000d21b;
/* 0x1000d21c */ LDATA extern char public_1000d21c;
/* 0x1000d21d */ LDATA extern char public_1000d21d;
/* 0x1000d21e */ LDATA extern char public_1000d21e;
/* 0x1000d21f */ LDATA extern char public_1000d21f;
/* 0x1000d220 */ LDATA extern char public_1000d220; // 'P'
/* 0x1000d221 */ LDATA extern char public_1000d221;
/* 0x1000d222 */ LDATA extern char public_1000d222;
/* 0x1000d223 */ LDATA extern char public_1000d223;
/* 0x1000d224 */ LDATA extern char public_1000d224;
/* 0x1000d225 */ LDATA extern char public_1000d225;
/* 0x1000d226 */ LDATA extern char public_1000d226;
/* 0x1000d227 */ LDATA extern char public_1000d227;
/* 0x1000d228 */ LDATA extern char public_1000d228;
/* 0x1000d229 */ LDATA extern char public_1000d229;
/* 0x1000d22a */ LDATA extern char public_1000d22a;
/* 0x1000d22b */ LDATA extern char public_1000d22b;
/* 0x1000d22c */ LDATA extern char public_1000d22c; // 'R'
/* 0x1000d22d */ LDATA extern char public_1000d22d;
/* 0x1000d22e */ LDATA extern char public_1000d22e;
/* 0x1000d22f */ LDATA extern char public_1000d22f;
/* 0x1000d230 */ LDATA extern char public_1000d230;
/* 0x1000d231 */ LDATA extern char public_1000d231;
/* 0x1000d232 */ LDATA extern char public_1000d232;
/* 0x1000d233 */ LDATA extern char public_1000d233;
/* 0x1000d234 */ LDATA extern char public_1000d234;
/* 0x1000d235 */ LDATA extern char public_1000d235;
/* 0x1000d236 */ LDATA extern char public_1000d236;
/* 0x1000d237 */ LDATA extern char public_1000d237;
/* 0x1000d238 */ LDATA extern char public_1000d238; // 'U'
/* 0x1000d239 */ LDATA extern char public_1000d239;
/* 0x1000d23a */ LDATA extern char public_1000d23a;
/* 0x1000d23b */ LDATA extern char public_1000d23b;
/* 0x1000d23c */ LDATA extern char public_1000d23c;
/* 0x1000d23d */ LDATA extern char public_1000d23d;
/* 0x1000d23e */ LDATA extern char public_1000d23e;
/* 0x1000d23f */ LDATA extern char public_1000d23f;
/* 0x1000d240 */ LDATA extern char public_1000d240; // 'S'
/* 0x1000d241 */ LDATA extern char public_1000d241;
/* 0x1000d242 */ LDATA extern char public_1000d242;
/* 0x1000d243 */ LDATA extern char public_1000d243;
/* 0x1000d244 */ LDATA extern char public_1000d244; // '#'
/* 0x1000d245 */ LDATA extern char public_1000d245;
/* 0x1000d246 */ LDATA extern char public_1000d246;
/* 0x1000d247 */ LDATA extern char public_1000d247;
/* 0x1000d248 */ LDATA extern char public_1000d248;
/* 0x1000d249 */ LDATA extern char public_1000d249;
/* 0x1000d24a */ LDATA extern char public_1000d24a;
/* 0x1000d24b */ LDATA extern char public_1000d24b;
/* 0x1000d24c */ LDATA extern char public_1000d24c; // 'r'
/* 0x1000d24d */ LDATA extern char public_1000d24d;
/* 0x1000d24e */ LDATA extern char public_1000d24e;
/* 0x1000d24f */ LDATA extern char public_1000d24f;
/* 0x1000d250 */ LDATA extern char public_1000d250;
/* 0x1000d251 */ LDATA extern char public_1000d251;
/* 0x1000d252 */ LDATA extern char public_1000d252;
/* 0x1000d253 */ LDATA extern char public_1000d253;
/* 0x1000d254 */ LDATA extern char public_1000d254; // '2'
/* 0x1000d255 */ LDATA extern char public_1000d255;
/* 0x1000d256 */ LDATA extern char public_1000d256;
/* 0x1000d257 */ LDATA extern char public_1000d257;
/* 0x1000d258 */ LDATA extern char public_1000d258;
/* 0x1000d259 */ LDATA extern char public_1000d259;
/* 0x1000d25a */ LDATA extern char public_1000d25a;
/* 0x1000d25b */ LDATA extern char public_1000d25b;
/* 0x1000d25c */ LDATA extern char public_1000d25c;
/* 0x1000d25d */ LDATA extern char public_1000d25d;
/* 0x1000d25e */ LDATA extern char public_1000d25e;
/* 0x1000d25f */ LDATA extern char public_1000d25f;
/* 0x1000d260 */ LDATA extern char public_1000d260; // 'Q'
/* 0x1000d261 */ LDATA extern char public_1000d261;
/* 0x1000d262 */ LDATA extern char public_1000d262;
/* 0x1000d263 */ LDATA extern char public_1000d263;
/* 0x1000d264 */ LDATA extern char public_1000d264;
/* 0x1000d265 */ LDATA extern char public_1000d265;
/* 0x1000d266 */ LDATA extern char public_1000d266;
/* 0x1000d267 */ LDATA extern char public_1000d267;
/* 0x1000d268 */ LDATA extern char public_1000d268;
/* 0x1000d269 */ LDATA extern char public_1000d269;
/* 0x1000d26a */ LDATA extern char public_1000d26a;
/* 0x1000d26b */ LDATA extern char public_1000d26b;
/* 0x1000d26c */ LDATA extern char public_1000d26c; // 'b'
/* 0x1000d26d */ LDATA extern char public_1000d26d;
/* 0x1000d26e */ LDATA extern char public_1000d26e;
/* 0x1000d26f */ LDATA extern char public_1000d26f;
/* 0x1000d270 */ LDATA extern char public_1000d270;
/* 0x1000d271 */ LDATA extern char public_1000d271;
/* 0x1000d272 */ LDATA extern char public_1000d272;
/* 0x1000d273 */ LDATA extern char public_1000d273;
/* 0x1000d274 */ LDATA extern char public_1000d274; // '"'
/* 0x1000d275 */ LDATA extern char public_1000d275;
/* 0x1000d276 */ LDATA extern char public_1000d276;
/* 0x1000d277 */ LDATA extern char public_1000d277;
/* 0x1000d278 */ LDATA extern char public_1000d278;
/* 0x1000d279 */ LDATA extern char public_1000d279;
/* 0x1000d27a */ LDATA extern char public_1000d27a;
/* 0x1000d27b */ LDATA extern char public_1000d27b;
/* 0x1000d27c */ LDATA extern char public_1000d27c;
/* 0x1000d27d */ LDATA extern char public_1000d27d;
/* 0x1000d27e */ LDATA extern char public_1000d27e;
/* 0x1000d27f */ LDATA extern char public_1000d27f;
/* 0x1000d280 */ LDATA extern char public_1000d280;
/* 0x1000d281 */ LDATA extern char public_1000d281;
/* 0x1000d282 */ LDATA extern char public_1000d282;
/* 0x1000d283 */ LDATA extern char public_1000d283;
/* 0x1000d284 */ LDATA extern char public_1000d284;
/* 0x1000d285 */ LDATA extern char public_1000d285;
/* 0x1000d286 */ LDATA extern char public_1000d286;
/* 0x1000d287 */ LDATA extern char public_1000d287;
/* 0x1000d288 */ LDATA extern char public_1000d288;
/* 0x1000d289 */ LDATA extern char public_1000d289;
/* 0x1000d28a */ LDATA extern char public_1000d28a;
/* 0x1000d28b */ LDATA extern char public_1000d28b;
/* 0x1000d28c */ LDATA extern char public_1000d28c;
/* 0x1000d28d */ LDATA extern char public_1000d28d;
/* 0x1000d28e */ LDATA extern char public_1000d28e;
/* 0x1000d28f */ LDATA extern char public_1000d28f;
/* 0x1000d290 */ LDATA extern char public_1000d290;
/* 0x1000d291 */ LDATA extern char public_1000d291;
/* 0x1000d292 */ LDATA extern char public_1000d292;
/* 0x1000d293 */ LDATA extern char public_1000d293;
/* 0x1000d294 */ LDATA extern char public_1000d294; // 'B'
/* 0x1000d295 */ LDATA extern char public_1000d295;
/* 0x1000d296 */ LDATA extern char public_1000d296;
/* 0x1000d297 */ LDATA extern char public_1000d297;
/* 0x1000d298 */ LDATA extern char public_1000d298;
/* 0x1000d299 */ LDATA extern char public_1000d299;
/* 0x1000d29a */ LDATA extern char public_1000d29a;
/* 0x1000d29b */ LDATA extern char public_1000d29b;
/* 0x1000d29c */ LDATA extern char public_1000d29c;
/* 0x1000d29d */ LDATA extern char public_1000d29d;
/* 0x1000d29e */ LDATA extern char public_1000d29e;
/* 0x1000d29f */ LDATA extern char public_1000d29f;
/* 0x1000d2a0 */ LDATA extern char public_1000d2a0; // 'P'
/* 0x1000d2a1 */ LDATA extern char public_1000d2a1;
/* 0x1000d2a2 */ LDATA extern char public_1000d2a2;
/* 0x1000d2a3 */ LDATA extern char public_1000d2a3;
/* 0x1000d2a4 */ LDATA extern char public_1000d2a4;
/* 0x1000d2a5 */ LDATA extern char public_1000d2a5;
/* 0x1000d2a6 */ LDATA extern char public_1000d2a6;
/* 0x1000d2a7 */ LDATA extern char public_1000d2a7;
/* 0x1000d2a8 */ LDATA extern char public_1000d2a8;
/* 0x1000d2a9 */ LDATA extern char public_1000d2a9;
/* 0x1000d2aa */ LDATA extern char public_1000d2aa;
/* 0x1000d2ab */ LDATA extern char public_1000d2ab;
/* 0x1000d2ac */ LDATA extern char public_1000d2ac; // 'Z'
/* 0x1000d2ad */ LDATA extern char public_1000d2ad;
/* 0x1000d2ae */ LDATA extern char public_1000d2ae;
/* 0x1000d2af */ LDATA extern char public_1000d2af;
/* 0x1000d2b0 */ LDATA extern char public_1000d2b0;
/* 0x1000d2b1 */ LDATA extern char public_1000d2b1;
/* 0x1000d2b2 */ LDATA extern char public_1000d2b2;
/* 0x1000d2b3 */ LDATA extern char public_1000d2b3;
/* 0x1000d2b4 */ LDATA extern char public_1000d2b4;
/* 0x1000d2b5 */ LDATA extern char public_1000d2b5;
/* 0x1000d2b6 */ LDATA extern char public_1000d2b6;
/* 0x1000d2b7 */ LDATA extern char public_1000d2b7;
/* 0x1000d2b8 */ LDATA extern char public_1000d2b8;
/* 0x1000d2b9 */ LDATA extern char public_1000d2b9;
/* 0x1000d2ba */ LDATA extern char public_1000d2ba;
/* 0x1000d2bb */ LDATA extern char public_1000d2bb;
/* 0x1000d2bc */ LDATA extern char public_1000d2bc;
/* 0x1000d2bd */ LDATA extern char public_1000d2bd;
/* 0x1000d2be */ LDATA extern char public_1000d2be;
/* 0x1000d2bf */ LDATA extern char public_1000d2bf;
/* 0x1000d2c0 */ LDATA extern char public_1000d2c0; // 'T'
/* 0x1000d2c1 */ LDATA extern char public_1000d2c1;
/* 0x1000d2c2 */ LDATA extern char public_1000d2c2;
/* 0x1000d2c3 */ LDATA extern char public_1000d2c3;
/* 0x1000d2c4 */ LDATA extern char public_1000d2c4; // 'C'
/* 0x1000d2c5 */ LDATA extern char public_1000d2c5;
/* 0x1000d2c6 */ LDATA extern char public_1000d2c6;
/* 0x1000d2c7 */ LDATA extern char public_1000d2c7;
/* 0x1000d2c8 */ LDATA extern char public_1000d2c8;
/* 0x1000d2c9 */ LDATA extern char public_1000d2c9;
/* 0x1000d2ca */ LDATA extern char public_1000d2ca;
/* 0x1000d2cb */ LDATA extern char public_1000d2cb;
/* 0x1000d2cc */ LDATA extern char public_1000d2cc; // 'z'
/* 0x1000d2cd */ LDATA extern char public_1000d2cd;
/* 0x1000d2ce */ LDATA extern char public_1000d2ce;
/* 0x1000d2cf */ LDATA extern char public_1000d2cf;
/* 0x1000d2d0 */ LDATA extern char public_1000d2d0;
/* 0x1000d2d1 */ LDATA extern char public_1000d2d1;
/* 0x1000d2d2 */ LDATA extern char public_1000d2d2;
/* 0x1000d2d3 */ LDATA extern char public_1000d2d3;
/* 0x1000d2d4 */ LDATA extern char public_1000d2d4; // ':'
/* 0x1000d2d5 */ LDATA extern char public_1000d2d5;
/* 0x1000d2d6 */ LDATA extern char public_1000d2d6;
/* 0x1000d2d7 */ LDATA extern char public_1000d2d7;
/* 0x1000d2d8 */ LDATA extern char public_1000d2d8;
/* 0x1000d2d9 */ LDATA extern char public_1000d2d9;
/* 0x1000d2da */ LDATA extern char public_1000d2da;
/* 0x1000d2db */ LDATA extern char public_1000d2db;
/* 0x1000d2dc */ LDATA extern char public_1000d2dc;
/* 0x1000d2dd */ LDATA extern char public_1000d2dd;
/* 0x1000d2de */ LDATA extern char public_1000d2de;
/* 0x1000d2df */ LDATA extern char public_1000d2df;
/* 0x1000d2e0 */ LDATA extern char public_1000d2e0; // 'R'
/* 0x1000d2e1 */ LDATA extern char public_1000d2e1;
/* 0x1000d2e2 */ LDATA extern char public_1000d2e2;
/* 0x1000d2e3 */ LDATA extern char public_1000d2e3;
/* 0x1000d2e4 */ LDATA extern char public_1000d2e4;
/* 0x1000d2e5 */ LDATA extern char public_1000d2e5;
/* 0x1000d2e6 */ LDATA extern char public_1000d2e6;
/* 0x1000d2e7 */ LDATA extern char public_1000d2e7;
/* 0x1000d2e8 */ LDATA extern char public_1000d2e8;
/* 0x1000d2e9 */ LDATA extern char public_1000d2e9;
/* 0x1000d2ea */ LDATA extern char public_1000d2ea;
/* 0x1000d2eb */ LDATA extern char public_1000d2eb;
/* 0x1000d2ec */ LDATA extern char public_1000d2ec; // 'j'
/* 0x1000d2ed */ LDATA extern char public_1000d2ed;
/* 0x1000d2ee */ LDATA extern char public_1000d2ee;
/* 0x1000d2ef */ LDATA extern char public_1000d2ef;
/* 0x1000d2f0 */ LDATA extern char public_1000d2f0;
/* 0x1000d2f1 */ LDATA extern char public_1000d2f1;
/* 0x1000d2f2 */ LDATA extern char public_1000d2f2;
/* 0x1000d2f3 */ LDATA extern char public_1000d2f3;
/* 0x1000d2f4 */ LDATA extern char public_1000d2f4; // '*'
/* 0x1000d2f5 */ LDATA extern char public_1000d2f5;
/* 0x1000d2f6 */ LDATA extern char public_1000d2f6;
/* 0x1000d2f7 */ LDATA extern char public_1000d2f7;
/* 0x1000d2f8 */ LDATA extern char public_1000d2f8;
/* 0x1000d2f9 */ LDATA extern char public_1000d2f9;
/* 0x1000d2fa */ LDATA extern char public_1000d2fa;
/* 0x1000d2fb */ LDATA extern char public_1000d2fb;
/* 0x1000d2fc */ LDATA extern char public_1000d2fc;
/* 0x1000d2fd */ LDATA extern char public_1000d2fd;
/* 0x1000d2fe */ LDATA extern char public_1000d2fe;
/* 0x1000d2ff */ LDATA extern char public_1000d2ff;
/* 0x1000d300 */ LDATA extern char public_1000d300;
/* 0x1000d301 */ LDATA extern char public_1000d301;
/* 0x1000d302 */ LDATA extern char public_1000d302;
/* 0x1000d303 */ LDATA extern char public_1000d303;
/* 0x1000d304 */ LDATA extern char public_1000d304;
/* 0x1000d305 */ LDATA extern char public_1000d305;
/* 0x1000d306 */ LDATA extern char public_1000d306;
/* 0x1000d307 */ LDATA extern char public_1000d307;
/* 0x1000d308 */ LDATA extern char public_1000d308;
/* 0x1000d309 */ LDATA extern char public_1000d309;
/* 0x1000d30a */ LDATA extern char public_1000d30a;
/* 0x1000d30b */ LDATA extern char public_1000d30b;
/* 0x1000d30c */ LDATA extern char public_1000d30c;
/* 0x1000d30d */ LDATA extern char public_1000d30d;
/* 0x1000d30e */ LDATA extern char public_1000d30e;
/* 0x1000d30f */ LDATA extern char public_1000d30f;
/* 0x1000d310 */ LDATA extern char public_1000d310;
/* 0x1000d311 */ LDATA extern char public_1000d311;
/* 0x1000d312 */ LDATA extern char public_1000d312;
/* 0x1000d313 */ LDATA extern char public_1000d313;
/* 0x1000d314 */ LDATA extern char public_1000d314; // 'J'
/* 0x1000d315 */ LDATA extern char public_1000d315;
/* 0x1000d316 */ LDATA extern char public_1000d316;
/* 0x1000d317 */ LDATA extern char public_1000d317;
/* 0x1000d318 */ LDATA extern char public_1000d318;
/* 0x1000d319 */ LDATA extern char public_1000d319;
/* 0x1000d31a */ LDATA extern char public_1000d31a;
/* 0x1000d31b */ LDATA extern char public_1000d31b;
/* 0x1000d31c */ LDATA extern char public_1000d31c;
/* 0x1000d31d */ LDATA extern char public_1000d31d;
/* 0x1000d31e */ LDATA extern char public_1000d31e;
/* 0x1000d31f */ LDATA extern char public_1000d31f;
/* 0x1000d320 */ LDATA extern char public_1000d320; // 'P'
/* 0x1000d321 */ LDATA extern char public_1000d321;
/* 0x1000d322 */ LDATA extern char public_1000d322;
/* 0x1000d323 */ LDATA extern char public_1000d323;
/* 0x1000d324 */ LDATA extern char public_1000d324;
/* 0x1000d325 */ LDATA extern char public_1000d325;
/* 0x1000d326 */ LDATA extern char public_1000d326;
/* 0x1000d327 */ LDATA extern char public_1000d327;
/* 0x1000d328 */ LDATA extern char public_1000d328;
/* 0x1000d329 */ LDATA extern char public_1000d329;
/* 0x1000d32a */ LDATA extern char public_1000d32a;
/* 0x1000d32b */ LDATA extern char public_1000d32b;
/* 0x1000d32c */ LDATA extern char public_1000d32c; // 'V'
/* 0x1000d32d */ LDATA extern char public_1000d32d;
/* 0x1000d32e */ LDATA extern char public_1000d32e;
/* 0x1000d32f */ LDATA extern char public_1000d32f;
/* 0x1000d330 */ LDATA extern char public_1000d330;
/* 0x1000d331 */ LDATA extern char public_1000d331;
/* 0x1000d332 */ LDATA extern char public_1000d332;
/* 0x1000d333 */ LDATA extern char public_1000d333;
/* 0x1000d334 */ LDATA extern char public_1000d334;
/* 0x1000d335 */ LDATA extern char public_1000d335;
/* 0x1000d336 */ LDATA extern char public_1000d336;
/* 0x1000d337 */ LDATA extern char public_1000d337;
/* 0x1000d338 */ LDATA extern char public_1000d338;
/* 0x1000d339 */ LDATA extern char public_1000d339;
/* 0x1000d33a */ LDATA extern char public_1000d33a;
/* 0x1000d33b */ LDATA extern char public_1000d33b;
/* 0x1000d33c */ LDATA extern char public_1000d33c;
/* 0x1000d33d */ LDATA extern char public_1000d33d;
/* 0x1000d33e */ LDATA extern char public_1000d33e;
/* 0x1000d33f */ LDATA extern char public_1000d33f;
/* 0x1000d340 */ LDATA extern char public_1000d340; // 'S'
/* 0x1000d341 */ LDATA extern char public_1000d341;
/* 0x1000d342 */ LDATA extern char public_1000d342;
/* 0x1000d343 */ LDATA extern char public_1000d343;
/* 0x1000d344 */ LDATA extern char public_1000d344; // '3'
/* 0x1000d345 */ LDATA extern char public_1000d345;
/* 0x1000d346 */ LDATA extern char public_1000d346;
/* 0x1000d347 */ LDATA extern char public_1000d347;
/* 0x1000d348 */ LDATA extern char public_1000d348;
/* 0x1000d349 */ LDATA extern char public_1000d349;
/* 0x1000d34a */ LDATA extern char public_1000d34a;
/* 0x1000d34b */ LDATA extern char public_1000d34b;
/* 0x1000d34c */ LDATA extern char public_1000d34c; // 'v'
/* 0x1000d34d */ LDATA extern char public_1000d34d;
/* 0x1000d34e */ LDATA extern char public_1000d34e;
/* 0x1000d34f */ LDATA extern char public_1000d34f;
/* 0x1000d350 */ LDATA extern char public_1000d350;
/* 0x1000d351 */ LDATA extern char public_1000d351;
/* 0x1000d352 */ LDATA extern char public_1000d352;
/* 0x1000d353 */ LDATA extern char public_1000d353;
/* 0x1000d354 */ LDATA extern char public_1000d354; // '6'
/* 0x1000d355 */ LDATA extern char public_1000d355;
/* 0x1000d356 */ LDATA extern char public_1000d356;
/* 0x1000d357 */ LDATA extern char public_1000d357;
/* 0x1000d358 */ LDATA extern char public_1000d358;
/* 0x1000d359 */ LDATA extern char public_1000d359;
/* 0x1000d35a */ LDATA extern char public_1000d35a;
/* 0x1000d35b */ LDATA extern char public_1000d35b;
/* 0x1000d35c */ LDATA extern char public_1000d35c;
/* 0x1000d35d */ LDATA extern char public_1000d35d;
/* 0x1000d35e */ LDATA extern char public_1000d35e;
/* 0x1000d35f */ LDATA extern char public_1000d35f;
/* 0x1000d360 */ LDATA extern char public_1000d360; // 'Q'
/* 0x1000d361 */ LDATA extern char public_1000d361;
/* 0x1000d362 */ LDATA extern char public_1000d362;
/* 0x1000d363 */ LDATA extern char public_1000d363;
/* 0x1000d364 */ LDATA extern char public_1000d364;
/* 0x1000d365 */ LDATA extern char public_1000d365;
/* 0x1000d366 */ LDATA extern char public_1000d366;
/* 0x1000d367 */ LDATA extern char public_1000d367;
/* 0x1000d368 */ LDATA extern char public_1000d368;
/* 0x1000d369 */ LDATA extern char public_1000d369;
/* 0x1000d36a */ LDATA extern char public_1000d36a;
/* 0x1000d36b */ LDATA extern char public_1000d36b;
/* 0x1000d36c */ LDATA extern char public_1000d36c; // 'f'
/* 0x1000d36d */ LDATA extern char public_1000d36d;
/* 0x1000d36e */ LDATA extern char public_1000d36e;
/* 0x1000d36f */ LDATA extern char public_1000d36f;
/* 0x1000d370 */ LDATA extern char public_1000d370;
/* 0x1000d371 */ LDATA extern char public_1000d371;
/* 0x1000d372 */ LDATA extern char public_1000d372;
/* 0x1000d373 */ LDATA extern char public_1000d373;
/* 0x1000d374 */ LDATA extern char public_1000d374; // '&'
/* 0x1000d375 */ LDATA extern char public_1000d375;
/* 0x1000d376 */ LDATA extern char public_1000d376;
/* 0x1000d377 */ LDATA extern char public_1000d377;
/* 0x1000d378 */ LDATA extern char public_1000d378;
/* 0x1000d379 */ LDATA extern char public_1000d379;
/* 0x1000d37a */ LDATA extern char public_1000d37a;
/* 0x1000d37b */ LDATA extern char public_1000d37b;
/* 0x1000d37c */ LDATA extern char public_1000d37c;
/* 0x1000d37d */ LDATA extern char public_1000d37d;
/* 0x1000d37e */ LDATA extern char public_1000d37e;
/* 0x1000d37f */ LDATA extern char public_1000d37f;
/* 0x1000d380 */ LDATA extern char public_1000d380;
/* 0x1000d381 */ LDATA extern char public_1000d381;
/* 0x1000d382 */ LDATA extern char public_1000d382;
/* 0x1000d383 */ LDATA extern char public_1000d383;
/* 0x1000d384 */ LDATA extern char public_1000d384;
/* 0x1000d385 */ LDATA extern char public_1000d385;
/* 0x1000d386 */ LDATA extern char public_1000d386;
/* 0x1000d387 */ LDATA extern char public_1000d387;
/* 0x1000d388 */ LDATA extern char public_1000d388;
/* 0x1000d389 */ LDATA extern char public_1000d389;
/* 0x1000d38a */ LDATA extern char public_1000d38a;
/* 0x1000d38b */ LDATA extern char public_1000d38b;
/* 0x1000d38c */ LDATA extern char public_1000d38c;
/* 0x1000d38d */ LDATA extern char public_1000d38d;
/* 0x1000d38e */ LDATA extern char public_1000d38e;
/* 0x1000d38f */ LDATA extern char public_1000d38f;
/* 0x1000d390 */ LDATA extern char public_1000d390;
/* 0x1000d391 */ LDATA extern char public_1000d391;
/* 0x1000d392 */ LDATA extern char public_1000d392;
/* 0x1000d393 */ LDATA extern char public_1000d393;
/* 0x1000d394 */ LDATA extern char public_1000d394; // 'F'
/* 0x1000d395 */ LDATA extern char public_1000d395;
/* 0x1000d396 */ LDATA extern char public_1000d396;
/* 0x1000d397 */ LDATA extern char public_1000d397;
/* 0x1000d398 */ LDATA extern char public_1000d398;
/* 0x1000d399 */ LDATA extern char public_1000d399;
/* 0x1000d39a */ LDATA extern char public_1000d39a;
/* 0x1000d39b */ LDATA extern char public_1000d39b;
/* 0x1000d39c */ LDATA extern char public_1000d39c;
/* 0x1000d39d */ LDATA extern char public_1000d39d;
/* 0x1000d39e */ LDATA extern char public_1000d39e;
/* 0x1000d39f */ LDATA extern char public_1000d39f;
/* 0x1000d3a0 */ LDATA extern char public_1000d3a0; // 'P'
/* 0x1000d3a1 */ LDATA extern char public_1000d3a1;
/* 0x1000d3a2 */ LDATA extern char public_1000d3a2;
/* 0x1000d3a3 */ LDATA extern char public_1000d3a3;
/* 0x1000d3a4 */ LDATA extern char public_1000d3a4;
/* 0x1000d3a5 */ LDATA extern char public_1000d3a5;
/* 0x1000d3a6 */ LDATA extern char public_1000d3a6;
/* 0x1000d3a7 */ LDATA extern char public_1000d3a7;
/* 0x1000d3a8 */ LDATA extern char public_1000d3a8;
/* 0x1000d3a9 */ LDATA extern char public_1000d3a9;
/* 0x1000d3aa */ LDATA extern char public_1000d3aa;
/* 0x1000d3ab */ LDATA extern char public_1000d3ab;
/* 0x1000d3ac */ LDATA extern char public_1000d3ac; // '^'
/* 0x1000d3ad */ LDATA extern char public_1000d3ad;
/* 0x1000d3ae */ LDATA extern char public_1000d3ae;
/* 0x1000d3af */ LDATA extern char public_1000d3af;
/* 0x1000d3b0 */ LDATA extern char public_1000d3b0;
/* 0x1000d3b1 */ LDATA extern char public_1000d3b1;
/* 0x1000d3b2 */ LDATA extern char public_1000d3b2;
/* 0x1000d3b3 */ LDATA extern char public_1000d3b3;
/* 0x1000d3b4 */ LDATA extern char public_1000d3b4;
/* 0x1000d3b5 */ LDATA extern char public_1000d3b5;
/* 0x1000d3b6 */ LDATA extern char public_1000d3b6;
/* 0x1000d3b7 */ LDATA extern char public_1000d3b7;
/* 0x1000d3b8 */ LDATA extern char public_1000d3b8;
/* 0x1000d3b9 */ LDATA extern char public_1000d3b9;
/* 0x1000d3ba */ LDATA extern char public_1000d3ba;
/* 0x1000d3bb */ LDATA extern char public_1000d3bb;
/* 0x1000d3bc */ LDATA extern char public_1000d3bc;
/* 0x1000d3bd */ LDATA extern char public_1000d3bd;
/* 0x1000d3be */ LDATA extern char public_1000d3be;
/* 0x1000d3bf */ LDATA extern char public_1000d3bf;
/* 0x1000d3c0 */ LDATA extern char public_1000d3c0; // 'T'
/* 0x1000d3c1 */ LDATA extern char public_1000d3c1;
/* 0x1000d3c2 */ LDATA extern char public_1000d3c2;
/* 0x1000d3c3 */ LDATA extern char public_1000d3c3;
/* 0x1000d3c4 */ LDATA extern char public_1000d3c4; // 'c'
/* 0x1000d3c5 */ LDATA extern char public_1000d3c5;
/* 0x1000d3c6 */ LDATA extern char public_1000d3c6;
/* 0x1000d3c7 */ LDATA extern char public_1000d3c7;
/* 0x1000d3c8 */ LDATA extern char public_1000d3c8;
/* 0x1000d3c9 */ LDATA extern char public_1000d3c9;
/* 0x1000d3ca */ LDATA extern char public_1000d3ca;
/* 0x1000d3cb */ LDATA extern char public_1000d3cb;
/* 0x1000d3cc */ LDATA extern char public_1000d3cc; // '~'
/* 0x1000d3cd */ LDATA extern char public_1000d3cd;
/* 0x1000d3ce */ LDATA extern char public_1000d3ce;
/* 0x1000d3cf */ LDATA extern char public_1000d3cf;
/* 0x1000d3d0 */ LDATA extern char public_1000d3d0;
/* 0x1000d3d1 */ LDATA extern char public_1000d3d1;
/* 0x1000d3d2 */ LDATA extern char public_1000d3d2;
/* 0x1000d3d3 */ LDATA extern char public_1000d3d3;
/* 0x1000d3d4 */ LDATA extern char public_1000d3d4; // '>'
/* 0x1000d3d5 */ LDATA extern char public_1000d3d5;
/* 0x1000d3d6 */ LDATA extern char public_1000d3d6;
/* 0x1000d3d7 */ LDATA extern char public_1000d3d7;
/* 0x1000d3d8 */ LDATA extern char public_1000d3d8;
/* 0x1000d3d9 */ LDATA extern char public_1000d3d9;
/* 0x1000d3da */ LDATA extern char public_1000d3da;
/* 0x1000d3db */ LDATA extern char public_1000d3db;
/* 0x1000d3dc */ LDATA extern char public_1000d3dc;
/* 0x1000d3dd */ LDATA extern char public_1000d3dd;
/* 0x1000d3de */ LDATA extern char public_1000d3de;
/* 0x1000d3df */ LDATA extern char public_1000d3df;
/* 0x1000d3e0 */ LDATA extern char public_1000d3e0; // 'R'
/* 0x1000d3e1 */ LDATA extern char public_1000d3e1;
/* 0x1000d3e2 */ LDATA extern char public_1000d3e2;
/* 0x1000d3e3 */ LDATA extern char public_1000d3e3;
/* 0x1000d3e4 */ LDATA extern char public_1000d3e4;
/* 0x1000d3e5 */ LDATA extern char public_1000d3e5;
/* 0x1000d3e6 */ LDATA extern char public_1000d3e6;
/* 0x1000d3e7 */ LDATA extern char public_1000d3e7;
/* 0x1000d3e8 */ LDATA extern char public_1000d3e8;
/* 0x1000d3e9 */ LDATA extern char public_1000d3e9;
/* 0x1000d3ea */ LDATA extern char public_1000d3ea;
/* 0x1000d3eb */ LDATA extern char public_1000d3eb;
/* 0x1000d3ec */ LDATA extern char public_1000d3ec; // 'n'
/* 0x1000d3ed */ LDATA extern char public_1000d3ed;
/* 0x1000d3ee */ LDATA extern char public_1000d3ee;
/* 0x1000d3ef */ LDATA extern char public_1000d3ef;
/* 0x1000d3f0 */ LDATA extern char public_1000d3f0;
/* 0x1000d3f1 */ LDATA extern char public_1000d3f1;
/* 0x1000d3f2 */ LDATA extern char public_1000d3f2;
/* 0x1000d3f3 */ LDATA extern char public_1000d3f3;
/* 0x1000d3f4 */ LDATA extern char public_1000d3f4; // '.'
/* 0x1000d3f5 */ LDATA extern char public_1000d3f5;
/* 0x1000d3f6 */ LDATA extern char public_1000d3f6;
/* 0x1000d3f7 */ LDATA extern char public_1000d3f7;
/* 0x1000d3f8 */ LDATA extern char public_1000d3f8;
/* 0x1000d3f9 */ LDATA extern char public_1000d3f9;
/* 0x1000d3fa */ LDATA extern char public_1000d3fa;
/* 0x1000d3fb */ LDATA extern char public_1000d3fb;
/* 0x1000d3fc */ LDATA extern char public_1000d3fc;
/* 0x1000d3fd */ LDATA extern char public_1000d3fd;
/* 0x1000d3fe */ LDATA extern char public_1000d3fe;
/* 0x1000d3ff */ LDATA extern char public_1000d3ff;
/* 0x1000d400 */ LDATA extern char public_1000d400;
/* 0x1000d401 */ LDATA extern char public_1000d401;
/* 0x1000d402 */ LDATA extern char public_1000d402;
/* 0x1000d403 */ LDATA extern char public_1000d403;
/* 0x1000d404 */ LDATA extern char public_1000d404;
/* 0x1000d405 */ LDATA extern char public_1000d405;
/* 0x1000d406 */ LDATA extern char public_1000d406;
/* 0x1000d407 */ LDATA extern char public_1000d407;
/* 0x1000d408 */ LDATA extern char public_1000d408;
/* 0x1000d409 */ LDATA extern char public_1000d409;
/* 0x1000d40a */ LDATA extern char public_1000d40a;
/* 0x1000d40b */ LDATA extern char public_1000d40b;
/* 0x1000d40c */ LDATA extern char public_1000d40c;
/* 0x1000d40d */ LDATA extern char public_1000d40d;
/* 0x1000d40e */ LDATA extern char public_1000d40e;
/* 0x1000d40f */ LDATA extern char public_1000d40f;
/* 0x1000d410 */ LDATA extern char public_1000d410;
/* 0x1000d411 */ LDATA extern char public_1000d411;
/* 0x1000d412 */ LDATA extern char public_1000d412;
/* 0x1000d413 */ LDATA extern char public_1000d413;
/* 0x1000d414 */ LDATA extern char public_1000d414; // 'N'
/* 0x1000d415 */ LDATA extern char public_1000d415;
/* 0x1000d416 */ LDATA extern char public_1000d416;
/* 0x1000d417 */ LDATA extern char public_1000d417;
/* 0x1000d418 */ LDATA extern char public_1000d418;
/* 0x1000d419 */ LDATA extern char public_1000d419;
/* 0x1000d41a */ LDATA extern char public_1000d41a;
/* 0x1000d41b */ LDATA extern char public_1000d41b;
/* 0x1000d41c */ LDATA extern char public_1000d41c;
/* 0x1000d41d */ LDATA extern char public_1000d41d;
/* 0x1000d41e */ LDATA extern char public_1000d41e;
/* 0x1000d41f */ LDATA extern char public_1000d41f;
/* 0x1000d420 */ LDATA extern char public_1000d420; // '`'
/* 0x1000d421 */ LDATA extern char public_1000d421;
/* 0x1000d422 */ LDATA extern char public_1000d422;
/* 0x1000d423 */ LDATA extern char public_1000d423;
/* 0x1000d424 */ LDATA extern char public_1000d424;
/* 0x1000d425 */ LDATA extern char public_1000d425;
/* 0x1000d426 */ LDATA extern char public_1000d426;
/* 0x1000d427 */ LDATA extern char public_1000d427;
/* 0x1000d428 */ LDATA extern char public_1000d428;
/* 0x1000d429 */ LDATA extern char public_1000d429;
/* 0x1000d42a */ LDATA extern char public_1000d42a;
/* 0x1000d42b */ LDATA extern char public_1000d42b;
/* 0x1000d42c */ LDATA extern char public_1000d42c; // 'Q'
/* 0x1000d42d */ LDATA extern char public_1000d42d;
/* 0x1000d42e */ LDATA extern char public_1000d42e;
/* 0x1000d42f */ LDATA extern char public_1000d42f;
/* 0x1000d430 */ LDATA extern char public_1000d430;
/* 0x1000d431 */ LDATA extern char public_1000d431;
/* 0x1000d432 */ LDATA extern char public_1000d432;
/* 0x1000d433 */ LDATA extern char public_1000d433;
/* 0x1000d434 */ LDATA extern char public_1000d434;
/* 0x1000d435 */ LDATA extern char public_1000d435;
/* 0x1000d436 */ LDATA extern char public_1000d436;
/* 0x1000d437 */ LDATA extern char public_1000d437;
/* 0x1000d438 */ LDATA extern char public_1000d438; // 'U'
/* 0x1000d439 */ LDATA extern char public_1000d439;
/* 0x1000d43a */ LDATA extern char public_1000d43a;
/* 0x1000d43b */ LDATA extern char public_1000d43b;
/* 0x1000d43c */ LDATA extern char public_1000d43c;
/* 0x1000d43d */ LDATA extern char public_1000d43d;
/* 0x1000d43e */ LDATA extern char public_1000d43e;
/* 0x1000d43f */ LDATA extern char public_1000d43f;
/* 0x1000d440 */ LDATA extern char public_1000d440; // 'R'
/* 0x1000d441 */ LDATA extern char public_1000d441;
/* 0x1000d442 */ LDATA extern char public_1000d442;
/* 0x1000d443 */ LDATA extern char public_1000d443;
/* 0x1000d444 */ LDATA extern char public_1000d444;
/* 0x1000d445 */ LDATA extern char public_1000d445;
/* 0x1000d446 */ LDATA extern char public_1000d446;
/* 0x1000d447 */ LDATA extern char public_1000d447;
/* 0x1000d448 */ LDATA extern char public_1000d448;
/* 0x1000d449 */ LDATA extern char public_1000d449;
/* 0x1000d44a */ LDATA extern char public_1000d44a;
/* 0x1000d44b */ LDATA extern char public_1000d44b;
/* 0x1000d44c */ LDATA extern char public_1000d44c; // 'q'
/* 0x1000d44d */ LDATA extern char public_1000d44d;
/* 0x1000d44e */ LDATA extern char public_1000d44e;
/* 0x1000d44f */ LDATA extern char public_1000d44f;
/* 0x1000d450 */ LDATA extern char public_1000d450;
/* 0x1000d451 */ LDATA extern char public_1000d451;
/* 0x1000d452 */ LDATA extern char public_1000d452;
/* 0x1000d453 */ LDATA extern char public_1000d453;
/* 0x1000d454 */ LDATA extern char public_1000d454; // '1'
/* 0x1000d455 */ LDATA extern char public_1000d455;
/* 0x1000d456 */ LDATA extern char public_1000d456;
/* 0x1000d457 */ LDATA extern char public_1000d457;
/* 0x1000d458 */ LDATA extern char public_1000d458;
/* 0x1000d459 */ LDATA extern char public_1000d459;
/* 0x1000d45a */ LDATA extern char public_1000d45a;
/* 0x1000d45b */ LDATA extern char public_1000d45b;
/* 0x1000d45c */ LDATA extern char public_1000d45c;
/* 0x1000d45d */ LDATA extern char public_1000d45d;
/* 0x1000d45e */ LDATA extern char public_1000d45e;
/* 0x1000d45f */ LDATA extern char public_1000d45f;
/* 0x1000d460 */ LDATA extern char public_1000d460; // 'P'
/* 0x1000d461 */ LDATA extern char public_1000d461;
/* 0x1000d462 */ LDATA extern char public_1000d462;
/* 0x1000d463 */ LDATA extern char public_1000d463;
/* 0x1000d464 */ LDATA extern char public_1000d464;
/* 0x1000d465 */ LDATA extern char public_1000d465;
/* 0x1000d466 */ LDATA extern char public_1000d466;
/* 0x1000d467 */ LDATA extern char public_1000d467;
/* 0x1000d468 */ LDATA extern char public_1000d468;
/* 0x1000d469 */ LDATA extern char public_1000d469;
/* 0x1000d46a */ LDATA extern char public_1000d46a;
/* 0x1000d46b */ LDATA extern char public_1000d46b;
/* 0x1000d46c */ LDATA extern char public_1000d46c; // 'a'
/* 0x1000d46d */ LDATA extern char public_1000d46d;
/* 0x1000d46e */ LDATA extern char public_1000d46e;
/* 0x1000d46f */ LDATA extern char public_1000d46f;
/* 0x1000d470 */ LDATA extern char public_1000d470;
/* 0x1000d471 */ LDATA extern char public_1000d471;
/* 0x1000d472 */ LDATA extern char public_1000d472;
/* 0x1000d473 */ LDATA extern char public_1000d473;
/* 0x1000d474 */ LDATA extern char public_1000d474; // '!'
/* 0x1000d475 */ LDATA extern char public_1000d475;
/* 0x1000d476 */ LDATA extern char public_1000d476;
/* 0x1000d477 */ LDATA extern char public_1000d477;
/* 0x1000d478 */ LDATA extern char public_1000d478;
/* 0x1000d479 */ LDATA extern char public_1000d479;
/* 0x1000d47a */ LDATA extern char public_1000d47a;
/* 0x1000d47b */ LDATA extern char public_1000d47b;
/* 0x1000d47c */ LDATA extern char public_1000d47c;
/* 0x1000d47d */ LDATA extern char public_1000d47d;
/* 0x1000d47e */ LDATA extern char public_1000d47e;
/* 0x1000d47f */ LDATA extern char public_1000d47f;
/* 0x1000d480 */ LDATA extern char public_1000d480;
/* 0x1000d481 */ LDATA extern char public_1000d481;
/* 0x1000d482 */ LDATA extern char public_1000d482;
/* 0x1000d483 */ LDATA extern char public_1000d483;
/* 0x1000d484 */ LDATA extern char public_1000d484;
/* 0x1000d485 */ LDATA extern char public_1000d485;
/* 0x1000d486 */ LDATA extern char public_1000d486;
/* 0x1000d487 */ LDATA extern char public_1000d487;
/* 0x1000d488 */ LDATA extern char public_1000d488;
/* 0x1000d489 */ LDATA extern char public_1000d489;
/* 0x1000d48a */ LDATA extern char public_1000d48a;
/* 0x1000d48b */ LDATA extern char public_1000d48b;
/* 0x1000d48c */ LDATA extern char public_1000d48c;
/* 0x1000d48d */ LDATA extern char public_1000d48d;
/* 0x1000d48e */ LDATA extern char public_1000d48e;
/* 0x1000d48f */ LDATA extern char public_1000d48f;
/* 0x1000d490 */ LDATA extern char public_1000d490;
/* 0x1000d491 */ LDATA extern char public_1000d491;
/* 0x1000d492 */ LDATA extern char public_1000d492;
/* 0x1000d493 */ LDATA extern char public_1000d493;
/* 0x1000d494 */ LDATA extern char public_1000d494; // 'A'
/* 0x1000d495 */ LDATA extern char public_1000d495;
/* 0x1000d496 */ LDATA extern char public_1000d496;
/* 0x1000d497 */ LDATA extern char public_1000d497;
/* 0x1000d498 */ LDATA extern char public_1000d498;
/* 0x1000d499 */ LDATA extern char public_1000d499;
/* 0x1000d49a */ LDATA extern char public_1000d49a;
/* 0x1000d49b */ LDATA extern char public_1000d49b;
/* 0x1000d49c */ LDATA extern char public_1000d49c;
/* 0x1000d49d */ LDATA extern char public_1000d49d;
/* 0x1000d49e */ LDATA extern char public_1000d49e;
/* 0x1000d49f */ LDATA extern char public_1000d49f;
/* 0x1000d4a0 */ LDATA extern char public_1000d4a0; // 'P'
/* 0x1000d4a1 */ LDATA extern char public_1000d4a1;
/* 0x1000d4a2 */ LDATA extern char public_1000d4a2;
/* 0x1000d4a3 */ LDATA extern char public_1000d4a3;
/* 0x1000d4a4 */ LDATA extern char public_1000d4a4;
/* 0x1000d4a5 */ LDATA extern char public_1000d4a5;
/* 0x1000d4a6 */ LDATA extern char public_1000d4a6;
/* 0x1000d4a7 */ LDATA extern char public_1000d4a7;
/* 0x1000d4a8 */ LDATA extern char public_1000d4a8;
/* 0x1000d4a9 */ LDATA extern char public_1000d4a9;
/* 0x1000d4aa */ LDATA extern char public_1000d4aa;
/* 0x1000d4ab */ LDATA extern char public_1000d4ab;
/* 0x1000d4ac */ LDATA extern char public_1000d4ac; // 'Y'
/* 0x1000d4ad */ LDATA extern char public_1000d4ad;
/* 0x1000d4ae */ LDATA extern char public_1000d4ae;
/* 0x1000d4af */ LDATA extern char public_1000d4af;
/* 0x1000d4b0 */ LDATA extern char public_1000d4b0;
/* 0x1000d4b1 */ LDATA extern char public_1000d4b1;
/* 0x1000d4b2 */ LDATA extern char public_1000d4b2;
/* 0x1000d4b3 */ LDATA extern char public_1000d4b3;
/* 0x1000d4b4 */ LDATA extern char public_1000d4b4;
/* 0x1000d4b5 */ LDATA extern char public_1000d4b5;
/* 0x1000d4b6 */ LDATA extern char public_1000d4b6;
/* 0x1000d4b7 */ LDATA extern char public_1000d4b7;
/* 0x1000d4b8 */ LDATA extern char public_1000d4b8;
/* 0x1000d4b9 */ LDATA extern char public_1000d4b9;
/* 0x1000d4ba */ LDATA extern char public_1000d4ba;
/* 0x1000d4bb */ LDATA extern char public_1000d4bb;
/* 0x1000d4bc */ LDATA extern char public_1000d4bc;
/* 0x1000d4bd */ LDATA extern char public_1000d4bd;
/* 0x1000d4be */ LDATA extern char public_1000d4be;
/* 0x1000d4bf */ LDATA extern char public_1000d4bf;
/* 0x1000d4c0 */ LDATA extern char public_1000d4c0; // 'S'
/* 0x1000d4c1 */ LDATA extern char public_1000d4c1;
/* 0x1000d4c2 */ LDATA extern char public_1000d4c2;
/* 0x1000d4c3 */ LDATA extern char public_1000d4c3;
/* 0x1000d4c4 */ LDATA extern char public_1000d4c4; // ';'
/* 0x1000d4c5 */ LDATA extern char public_1000d4c5;
/* 0x1000d4c6 */ LDATA extern char public_1000d4c6;
/* 0x1000d4c7 */ LDATA extern char public_1000d4c7;
/* 0x1000d4c8 */ LDATA extern char public_1000d4c8;
/* 0x1000d4c9 */ LDATA extern char public_1000d4c9;
/* 0x1000d4ca */ LDATA extern char public_1000d4ca;
/* 0x1000d4cb */ LDATA extern char public_1000d4cb;
/* 0x1000d4cc */ LDATA extern char public_1000d4cc; // 'y'
/* 0x1000d4cd */ LDATA extern char public_1000d4cd;
/* 0x1000d4ce */ LDATA extern char public_1000d4ce;
/* 0x1000d4cf */ LDATA extern char public_1000d4cf;
/* 0x1000d4d0 */ LDATA extern char public_1000d4d0;
/* 0x1000d4d1 */ LDATA extern char public_1000d4d1;
/* 0x1000d4d2 */ LDATA extern char public_1000d4d2;
/* 0x1000d4d3 */ LDATA extern char public_1000d4d3;
/* 0x1000d4d4 */ LDATA extern char public_1000d4d4; // '9'
/* 0x1000d4d5 */ LDATA extern char public_1000d4d5;
/* 0x1000d4d6 */ LDATA extern char public_1000d4d6;
/* 0x1000d4d7 */ LDATA extern char public_1000d4d7;
/* 0x1000d4d8 */ LDATA extern char public_1000d4d8;
/* 0x1000d4d9 */ LDATA extern char public_1000d4d9;
/* 0x1000d4da */ LDATA extern char public_1000d4da;
/* 0x1000d4db */ LDATA extern char public_1000d4db;
/* 0x1000d4dc */ LDATA extern char public_1000d4dc;
/* 0x1000d4dd */ LDATA extern char public_1000d4dd;
/* 0x1000d4de */ LDATA extern char public_1000d4de;
/* 0x1000d4df */ LDATA extern char public_1000d4df;
/* 0x1000d4e0 */ LDATA extern char public_1000d4e0; // 'Q'
/* 0x1000d4e1 */ LDATA extern char public_1000d4e1;
/* 0x1000d4e2 */ LDATA extern char public_1000d4e2;
/* 0x1000d4e3 */ LDATA extern char public_1000d4e3;
/* 0x1000d4e4 */ LDATA extern char public_1000d4e4;
/* 0x1000d4e5 */ LDATA extern char public_1000d4e5;
/* 0x1000d4e6 */ LDATA extern char public_1000d4e6;
/* 0x1000d4e7 */ LDATA extern char public_1000d4e7;
/* 0x1000d4e8 */ LDATA extern char public_1000d4e8;
/* 0x1000d4e9 */ LDATA extern char public_1000d4e9;
/* 0x1000d4ea */ LDATA extern char public_1000d4ea;
/* 0x1000d4eb */ LDATA extern char public_1000d4eb;
/* 0x1000d4ec */ LDATA extern char public_1000d4ec; // 'i'
/* 0x1000d4ed */ LDATA extern char public_1000d4ed;
/* 0x1000d4ee */ LDATA extern char public_1000d4ee;
/* 0x1000d4ef */ LDATA extern char public_1000d4ef;
/* 0x1000d4f0 */ LDATA extern char public_1000d4f0;
/* 0x1000d4f1 */ LDATA extern char public_1000d4f1;
/* 0x1000d4f2 */ LDATA extern char public_1000d4f2;
/* 0x1000d4f3 */ LDATA extern char public_1000d4f3;
/* 0x1000d4f4 */ LDATA extern char public_1000d4f4; // ')'
/* 0x1000d4f5 */ LDATA extern char public_1000d4f5;
/* 0x1000d4f6 */ LDATA extern char public_1000d4f6;
/* 0x1000d4f7 */ LDATA extern char public_1000d4f7;
/* 0x1000d4f8 */ LDATA extern char public_1000d4f8;
/* 0x1000d4f9 */ LDATA extern char public_1000d4f9;
/* 0x1000d4fa */ LDATA extern char public_1000d4fa;
/* 0x1000d4fb */ LDATA extern char public_1000d4fb;
/* 0x1000d4fc */ LDATA extern char public_1000d4fc;
/* 0x1000d4fd */ LDATA extern char public_1000d4fd;
/* 0x1000d4fe */ LDATA extern char public_1000d4fe;
/* 0x1000d4ff */ LDATA extern char public_1000d4ff;
/* 0x1000d500 */ LDATA extern char public_1000d500;
/* 0x1000d501 */ LDATA extern char public_1000d501;
/* 0x1000d502 */ LDATA extern char public_1000d502;
/* 0x1000d503 */ LDATA extern char public_1000d503;
/* 0x1000d504 */ LDATA extern char public_1000d504;
/* 0x1000d505 */ LDATA extern char public_1000d505;
/* 0x1000d506 */ LDATA extern char public_1000d506;
/* 0x1000d507 */ LDATA extern char public_1000d507;
/* 0x1000d508 */ LDATA extern char public_1000d508;
/* 0x1000d509 */ LDATA extern char public_1000d509;
/* 0x1000d50a */ LDATA extern char public_1000d50a;
/* 0x1000d50b */ LDATA extern char public_1000d50b;
/* 0x1000d50c */ LDATA extern char public_1000d50c;
/* 0x1000d50d */ LDATA extern char public_1000d50d;
/* 0x1000d50e */ LDATA extern char public_1000d50e;
/* 0x1000d50f */ LDATA extern char public_1000d50f;
/* 0x1000d510 */ LDATA extern char public_1000d510;
/* 0x1000d511 */ LDATA extern char public_1000d511;
/* 0x1000d512 */ LDATA extern char public_1000d512;
/* 0x1000d513 */ LDATA extern char public_1000d513;
/* 0x1000d514 */ LDATA extern char public_1000d514; // 'I'
/* 0x1000d515 */ LDATA extern char public_1000d515;
/* 0x1000d516 */ LDATA extern char public_1000d516;
/* 0x1000d517 */ LDATA extern char public_1000d517;
/* 0x1000d518 */ LDATA extern char public_1000d518;
/* 0x1000d519 */ LDATA extern char public_1000d519;
/* 0x1000d51a */ LDATA extern char public_1000d51a;
/* 0x1000d51b */ LDATA extern char public_1000d51b;
/* 0x1000d51c */ LDATA extern char public_1000d51c;
/* 0x1000d51d */ LDATA extern char public_1000d51d;
/* 0x1000d51e */ LDATA extern char public_1000d51e;
/* 0x1000d51f */ LDATA extern char public_1000d51f;
/* 0x1000d520 */ LDATA extern char public_1000d520; // 'P'
/* 0x1000d521 */ LDATA extern char public_1000d521;
/* 0x1000d522 */ LDATA extern char public_1000d522;
/* 0x1000d523 */ LDATA extern char public_1000d523;
/* 0x1000d524 */ LDATA extern char public_1000d524;
/* 0x1000d525 */ LDATA extern char public_1000d525;
/* 0x1000d526 */ LDATA extern char public_1000d526;
/* 0x1000d527 */ LDATA extern char public_1000d527;
/* 0x1000d528 */ LDATA extern char public_1000d528;
/* 0x1000d529 */ LDATA extern char public_1000d529;
/* 0x1000d52a */ LDATA extern char public_1000d52a;
/* 0x1000d52b */ LDATA extern char public_1000d52b;
/* 0x1000d52c */ LDATA extern char public_1000d52c; // 'U'
/* 0x1000d52d */ LDATA extern char public_1000d52d;
/* 0x1000d52e */ LDATA extern char public_1000d52e;
/* 0x1000d52f */ LDATA extern char public_1000d52f;
/* 0x1000d530 */ LDATA extern char public_1000d530;
/* 0x1000d531 */ LDATA extern char public_1000d531;
/* 0x1000d532 */ LDATA extern char public_1000d532;
/* 0x1000d533 */ LDATA extern char public_1000d533;
/* 0x1000d534 */ LDATA extern char public_1000d534;
/* 0x1000d535 */ LDATA extern char public_1000d535;
/* 0x1000d536 */ LDATA extern char public_1000d536;
/* 0x1000d537 */ LDATA extern char public_1000d537;
/* 0x1000d538 */ LDATA extern char public_1000d538; // 'P'
/* 0x1000d539 */ LDATA extern char public_1000d539;
/* 0x1000d53a */ LDATA extern char public_1000d53a;
/* 0x1000d53b */ LDATA extern char public_1000d53b;
/* 0x1000d53c */ LDATA extern char public_1000d53c;
/* 0x1000d53d */ LDATA extern char public_1000d53d;
/* 0x1000d53e */ LDATA extern char public_1000d53e;
/* 0x1000d53f */ LDATA extern char public_1000d53f;
/* 0x1000d540 */ LDATA extern char public_1000d540; // 'S'
/* 0x1000d541 */ LDATA extern char public_1000d541;
/* 0x1000d542 */ LDATA extern char public_1000d542;
/* 0x1000d543 */ LDATA extern char public_1000d543;
/* 0x1000d544 */ LDATA extern char public_1000d544; // '+'
/* 0x1000d545 */ LDATA extern char public_1000d545;
/* 0x1000d546 */ LDATA extern char public_1000d546;
/* 0x1000d547 */ LDATA extern char public_1000d547;
/* 0x1000d548 */ LDATA extern char public_1000d548;
/* 0x1000d549 */ LDATA extern char public_1000d549;
/* 0x1000d54a */ LDATA extern char public_1000d54a;
/* 0x1000d54b */ LDATA extern char public_1000d54b;
/* 0x1000d54c */ LDATA extern char public_1000d54c; // 'u'
/* 0x1000d54d */ LDATA extern char public_1000d54d;
/* 0x1000d54e */ LDATA extern char public_1000d54e;
/* 0x1000d54f */ LDATA extern char public_1000d54f;
/* 0x1000d550 */ LDATA extern char public_1000d550;
/* 0x1000d551 */ LDATA extern char public_1000d551;
/* 0x1000d552 */ LDATA extern char public_1000d552;
/* 0x1000d553 */ LDATA extern char public_1000d553;
/* 0x1000d554 */ LDATA extern char public_1000d554; // '5'
/* 0x1000d555 */ LDATA extern char public_1000d555;
/* 0x1000d556 */ LDATA extern char public_1000d556;
/* 0x1000d557 */ LDATA extern char public_1000d557;
/* 0x1000d558 */ LDATA extern char public_1000d558;
/* 0x1000d559 */ LDATA extern char public_1000d559;
/* 0x1000d55a */ LDATA extern char public_1000d55a;
/* 0x1000d55b */ LDATA extern char public_1000d55b;
/* 0x1000d55c */ LDATA extern char public_1000d55c;
/* 0x1000d55d */ LDATA extern char public_1000d55d;
/* 0x1000d55e */ LDATA extern char public_1000d55e;
/* 0x1000d55f */ LDATA extern char public_1000d55f;
/* 0x1000d560 */ LDATA extern char public_1000d560; // 'Q'
/* 0x1000d561 */ LDATA extern char public_1000d561;
/* 0x1000d562 */ LDATA extern char public_1000d562;
/* 0x1000d563 */ LDATA extern char public_1000d563;
/* 0x1000d564 */ LDATA extern char public_1000d564;
/* 0x1000d565 */ LDATA extern char public_1000d565;
/* 0x1000d566 */ LDATA extern char public_1000d566;
/* 0x1000d567 */ LDATA extern char public_1000d567;
/* 0x1000d568 */ LDATA extern char public_1000d568;
/* 0x1000d569 */ LDATA extern char public_1000d569;
/* 0x1000d56a */ LDATA extern char public_1000d56a;
/* 0x1000d56b */ LDATA extern char public_1000d56b;
/* 0x1000d56c */ LDATA extern char public_1000d56c; // 'e'
/* 0x1000d56d */ LDATA extern char public_1000d56d;
/* 0x1000d56e */ LDATA extern char public_1000d56e;
/* 0x1000d56f */ LDATA extern char public_1000d56f;
/* 0x1000d570 */ LDATA extern char public_1000d570;
/* 0x1000d571 */ LDATA extern char public_1000d571;
/* 0x1000d572 */ LDATA extern char public_1000d572;
/* 0x1000d573 */ LDATA extern char public_1000d573;
/* 0x1000d574 */ LDATA extern char public_1000d574; // '%'
/* 0x1000d575 */ LDATA extern char public_1000d575;
/* 0x1000d576 */ LDATA extern char public_1000d576;
/* 0x1000d577 */ LDATA extern char public_1000d577;
/* 0x1000d578 */ LDATA extern char public_1000d578;
/* 0x1000d579 */ LDATA extern char public_1000d579;
/* 0x1000d57a */ LDATA extern char public_1000d57a;
/* 0x1000d57b */ LDATA extern char public_1000d57b;
/* 0x1000d57c */ LDATA extern char public_1000d57c;
/* 0x1000d57d */ LDATA extern char public_1000d57d;
/* 0x1000d57e */ LDATA extern char public_1000d57e;
/* 0x1000d57f */ LDATA extern char public_1000d57f;
/* 0x1000d580 */ LDATA extern char public_1000d580;
/* 0x1000d581 */ LDATA extern char public_1000d581;
/* 0x1000d582 */ LDATA extern char public_1000d582;
/* 0x1000d583 */ LDATA extern char public_1000d583;
/* 0x1000d584 */ LDATA extern char public_1000d584;
/* 0x1000d585 */ LDATA extern char public_1000d585;
/* 0x1000d586 */ LDATA extern char public_1000d586;
/* 0x1000d587 */ LDATA extern char public_1000d587;
/* 0x1000d588 */ LDATA extern char public_1000d588;
/* 0x1000d589 */ LDATA extern char public_1000d589;
/* 0x1000d58a */ LDATA extern char public_1000d58a;
/* 0x1000d58b */ LDATA extern char public_1000d58b;
/* 0x1000d58c */ LDATA extern char public_1000d58c;
/* 0x1000d58d */ LDATA extern char public_1000d58d;
/* 0x1000d58e */ LDATA extern char public_1000d58e;
/* 0x1000d58f */ LDATA extern char public_1000d58f;
/* 0x1000d590 */ LDATA extern char public_1000d590;
/* 0x1000d591 */ LDATA extern char public_1000d591;
/* 0x1000d592 */ LDATA extern char public_1000d592;
/* 0x1000d593 */ LDATA extern char public_1000d593;
/* 0x1000d594 */ LDATA extern char public_1000d594; // 'E'
/* 0x1000d595 */ LDATA extern char public_1000d595;
/* 0x1000d596 */ LDATA extern char public_1000d596;
/* 0x1000d597 */ LDATA extern char public_1000d597;
/* 0x1000d598 */ LDATA extern char public_1000d598;
/* 0x1000d599 */ LDATA extern char public_1000d599;
/* 0x1000d59a */ LDATA extern char public_1000d59a;
/* 0x1000d59b */ LDATA extern char public_1000d59b;
/* 0x1000d59c */ LDATA extern char public_1000d59c;
/* 0x1000d59d */ LDATA extern char public_1000d59d;
/* 0x1000d59e */ LDATA extern char public_1000d59e;
/* 0x1000d59f */ LDATA extern char public_1000d59f;
/* 0x1000d5a0 */ LDATA extern char public_1000d5a0; // 'P'
/* 0x1000d5a1 */ LDATA extern char public_1000d5a1;
/* 0x1000d5a2 */ LDATA extern char public_1000d5a2;
/* 0x1000d5a3 */ LDATA extern char public_1000d5a3;
/* 0x1000d5a4 */ LDATA extern char public_1000d5a4;
/* 0x1000d5a5 */ LDATA extern char public_1000d5a5;
/* 0x1000d5a6 */ LDATA extern char public_1000d5a6;
/* 0x1000d5a7 */ LDATA extern char public_1000d5a7;
/* 0x1000d5a8 */ LDATA extern char public_1000d5a8;
/* 0x1000d5a9 */ LDATA extern char public_1000d5a9;
/* 0x1000d5aa */ LDATA extern char public_1000d5aa;
/* 0x1000d5ab */ LDATA extern char public_1000d5ab;
/* 0x1000d5ac */ LDATA extern char public_1000d5ac; // ']'
/* 0x1000d5ad */ LDATA extern char public_1000d5ad;
/* 0x1000d5ae */ LDATA extern char public_1000d5ae;
/* 0x1000d5af */ LDATA extern char public_1000d5af;
/* 0x1000d5b0 */ LDATA extern char public_1000d5b0;
/* 0x1000d5b1 */ LDATA extern char public_1000d5b1;
/* 0x1000d5b2 */ LDATA extern char public_1000d5b2;
/* 0x1000d5b3 */ LDATA extern char public_1000d5b3;
/* 0x1000d5b4 */ LDATA extern char public_1000d5b4;
/* 0x1000d5b5 */ LDATA extern char public_1000d5b5;
/* 0x1000d5b6 */ LDATA extern char public_1000d5b6;
/* 0x1000d5b7 */ LDATA extern char public_1000d5b7;
/* 0x1000d5b8 */ LDATA extern char public_1000d5b8;
/* 0x1000d5b9 */ LDATA extern char public_1000d5b9;
/* 0x1000d5ba */ LDATA extern char public_1000d5ba;
/* 0x1000d5bb */ LDATA extern char public_1000d5bb;
/* 0x1000d5bc */ LDATA extern char public_1000d5bc;
/* 0x1000d5bd */ LDATA extern char public_1000d5bd;
/* 0x1000d5be */ LDATA extern char public_1000d5be;
/* 0x1000d5bf */ LDATA extern char public_1000d5bf;
/* 0x1000d5c0 */ LDATA extern char public_1000d5c0; // 'T'
/* 0x1000d5c1 */ LDATA extern char public_1000d5c1;
/* 0x1000d5c2 */ LDATA extern char public_1000d5c2;
/* 0x1000d5c3 */ LDATA extern char public_1000d5c3;
/* 0x1000d5c4 */ LDATA extern char public_1000d5c4; // 'S'
/* 0x1000d5c5 */ LDATA extern char public_1000d5c5;
/* 0x1000d5c6 */ LDATA extern char public_1000d5c6;
/* 0x1000d5c7 */ LDATA extern char public_1000d5c7;
/* 0x1000d5c8 */ LDATA extern char public_1000d5c8;
/* 0x1000d5c9 */ LDATA extern char public_1000d5c9;
/* 0x1000d5ca */ LDATA extern char public_1000d5ca;
/* 0x1000d5cb */ LDATA extern char public_1000d5cb;
/* 0x1000d5cc */ LDATA extern char public_1000d5cc; // '}'
/* 0x1000d5cd */ LDATA extern char public_1000d5cd;
/* 0x1000d5ce */ LDATA extern char public_1000d5ce;
/* 0x1000d5cf */ LDATA extern char public_1000d5cf;
/* 0x1000d5d0 */ LDATA extern char public_1000d5d0;
/* 0x1000d5d1 */ LDATA extern char public_1000d5d1;
/* 0x1000d5d2 */ LDATA extern char public_1000d5d2;
/* 0x1000d5d3 */ LDATA extern char public_1000d5d3;
/* 0x1000d5d4 */ LDATA extern char public_1000d5d4; // '='
/* 0x1000d5d5 */ LDATA extern char public_1000d5d5;
/* 0x1000d5d6 */ LDATA extern char public_1000d5d6;
/* 0x1000d5d7 */ LDATA extern char public_1000d5d7;
/* 0x1000d5d8 */ LDATA extern char public_1000d5d8;
/* 0x1000d5d9 */ LDATA extern char public_1000d5d9;
/* 0x1000d5da */ LDATA extern char public_1000d5da;
/* 0x1000d5db */ LDATA extern char public_1000d5db;
/* 0x1000d5dc */ LDATA extern char public_1000d5dc;
/* 0x1000d5dd */ LDATA extern char public_1000d5dd;
/* 0x1000d5de */ LDATA extern char public_1000d5de;
/* 0x1000d5df */ LDATA extern char public_1000d5df;
/* 0x1000d5e0 */ LDATA extern char public_1000d5e0; // 'R'
/* 0x1000d5e1 */ LDATA extern char public_1000d5e1;
/* 0x1000d5e2 */ LDATA extern char public_1000d5e2;
/* 0x1000d5e3 */ LDATA extern char public_1000d5e3;
/* 0x1000d5e4 */ LDATA extern char public_1000d5e4;
/* 0x1000d5e5 */ LDATA extern char public_1000d5e5;
/* 0x1000d5e6 */ LDATA extern char public_1000d5e6;
/* 0x1000d5e7 */ LDATA extern char public_1000d5e7;
/* 0x1000d5e8 */ LDATA extern char public_1000d5e8;
/* 0x1000d5e9 */ LDATA extern char public_1000d5e9;
/* 0x1000d5ea */ LDATA extern char public_1000d5ea;
/* 0x1000d5eb */ LDATA extern char public_1000d5eb;
/* 0x1000d5ec */ LDATA extern char public_1000d5ec; // 'm'
/* 0x1000d5ed */ LDATA extern char public_1000d5ed;
/* 0x1000d5ee */ LDATA extern char public_1000d5ee;
/* 0x1000d5ef */ LDATA extern char public_1000d5ef;
/* 0x1000d5f0 */ LDATA extern char public_1000d5f0;
/* 0x1000d5f1 */ LDATA extern char public_1000d5f1;
/* 0x1000d5f2 */ LDATA extern char public_1000d5f2;
/* 0x1000d5f3 */ LDATA extern char public_1000d5f3;
/* 0x1000d5f4 */ LDATA extern char public_1000d5f4; // '-'
/* 0x1000d5f5 */ LDATA extern char public_1000d5f5;
/* 0x1000d5f6 */ LDATA extern char public_1000d5f6;
/* 0x1000d5f7 */ LDATA extern char public_1000d5f7;
/* 0x1000d5f8 */ LDATA extern char public_1000d5f8;
/* 0x1000d5f9 */ LDATA extern char public_1000d5f9;
/* 0x1000d5fa */ LDATA extern char public_1000d5fa;
/* 0x1000d5fb */ LDATA extern char public_1000d5fb;
/* 0x1000d5fc */ LDATA extern char public_1000d5fc;
/* 0x1000d5fd */ LDATA extern char public_1000d5fd;
/* 0x1000d5fe */ LDATA extern char public_1000d5fe;
/* 0x1000d5ff */ LDATA extern char public_1000d5ff;
/* 0x1000d600 */ LDATA extern char public_1000d600;
/* 0x1000d601 */ LDATA extern char public_1000d601;
/* 0x1000d602 */ LDATA extern char public_1000d602;
/* 0x1000d603 */ LDATA extern char public_1000d603;
/* 0x1000d604 */ LDATA extern char public_1000d604;
/* 0x1000d605 */ LDATA extern char public_1000d605;
/* 0x1000d606 */ LDATA extern char public_1000d606;
/* 0x1000d607 */ LDATA extern char public_1000d607;
/* 0x1000d608 */ LDATA extern char public_1000d608;
/* 0x1000d609 */ LDATA extern char public_1000d609;
/* 0x1000d60a */ LDATA extern char public_1000d60a;
/* 0x1000d60b */ LDATA extern char public_1000d60b;
/* 0x1000d60c */ LDATA extern char public_1000d60c;
/* 0x1000d60d */ LDATA extern char public_1000d60d;
/* 0x1000d60e */ LDATA extern char public_1000d60e;
/* 0x1000d60f */ LDATA extern char public_1000d60f;
/* 0x1000d610 */ LDATA extern char public_1000d610;
/* 0x1000d611 */ LDATA extern char public_1000d611;
/* 0x1000d612 */ LDATA extern char public_1000d612;
/* 0x1000d613 */ LDATA extern char public_1000d613;
/* 0x1000d614 */ LDATA extern char public_1000d614; // 'M'
/* 0x1000d615 */ LDATA extern char public_1000d615;
/* 0x1000d616 */ LDATA extern char public_1000d616;
/* 0x1000d617 */ LDATA extern char public_1000d617;
/* 0x1000d618 */ LDATA extern char public_1000d618;
/* 0x1000d619 */ LDATA extern char public_1000d619;
/* 0x1000d61a */ LDATA extern char public_1000d61a;
/* 0x1000d61b */ LDATA extern char public_1000d61b;
/* 0x1000d61c */ LDATA extern char public_1000d61c;
/* 0x1000d61d */ LDATA extern char public_1000d61d;
/* 0x1000d61e */ LDATA extern char public_1000d61e;
/* 0x1000d61f */ LDATA extern char public_1000d61f;
/* 0x1000d620 */ LDATA extern char public_1000d620; // 'P'
/* 0x1000d621 */ LDATA extern char public_1000d621;
/* 0x1000d622 */ LDATA extern char public_1000d622;
/* 0x1000d623 */ LDATA extern char public_1000d623;
/* 0x1000d624 */ LDATA extern char public_1000d624;
/* 0x1000d625 */ LDATA extern char public_1000d625;
/* 0x1000d626 */ LDATA extern char public_1000d626;
/* 0x1000d627 */ LDATA extern char public_1000d627;
/* 0x1000d628 */ LDATA extern char public_1000d628;
/* 0x1000d629 */ LDATA extern char public_1000d629;
/* 0x1000d62a */ LDATA extern char public_1000d62a;
/* 0x1000d62b */ LDATA extern char public_1000d62b;
/* 0x1000d62c */ LDATA extern char public_1000d62c; // 'S'
/* 0x1000d62d */ LDATA extern char public_1000d62d;
/* 0x1000d62e */ LDATA extern char public_1000d62e;
/* 0x1000d62f */ LDATA extern char public_1000d62f;
/* 0x1000d630 */ LDATA extern char public_1000d630;
/* 0x1000d631 */ LDATA extern char public_1000d631;
/* 0x1000d632 */ LDATA extern char public_1000d632;
/* 0x1000d633 */ LDATA extern char public_1000d633;
/* 0x1000d634 */ LDATA extern char public_1000d634;
/* 0x1000d635 */ LDATA extern char public_1000d635;
/* 0x1000d636 */ LDATA extern char public_1000d636;
/* 0x1000d637 */ LDATA extern char public_1000d637;
/* 0x1000d638 */ LDATA extern char public_1000d638; // 'U'
/* 0x1000d639 */ LDATA extern char public_1000d639;
/* 0x1000d63a */ LDATA extern char public_1000d63a;
/* 0x1000d63b */ LDATA extern char public_1000d63b;
/* 0x1000d63c */ LDATA extern char public_1000d63c;
/* 0x1000d63d */ LDATA extern char public_1000d63d;
/* 0x1000d63e */ LDATA extern char public_1000d63e;
/* 0x1000d63f */ LDATA extern char public_1000d63f;
/* 0x1000d640 */ LDATA extern char public_1000d640; // 'S'
/* 0x1000d641 */ LDATA extern char public_1000d641;
/* 0x1000d642 */ LDATA extern char public_1000d642;
/* 0x1000d643 */ LDATA extern char public_1000d643;
/* 0x1000d644 */ LDATA extern char public_1000d644; // '#'
/* 0x1000d645 */ LDATA extern char public_1000d645;
/* 0x1000d646 */ LDATA extern char public_1000d646;
/* 0x1000d647 */ LDATA extern char public_1000d647;
/* 0x1000d648 */ LDATA extern char public_1000d648;
/* 0x1000d649 */ LDATA extern char public_1000d649;
/* 0x1000d64a */ LDATA extern char public_1000d64a;
/* 0x1000d64b */ LDATA extern char public_1000d64b;
/* 0x1000d64c */ LDATA extern char public_1000d64c; // 's'
/* 0x1000d64d */ LDATA extern char public_1000d64d;
/* 0x1000d64e */ LDATA extern char public_1000d64e;
/* 0x1000d64f */ LDATA extern char public_1000d64f;
/* 0x1000d650 */ LDATA extern char public_1000d650;
/* 0x1000d651 */ LDATA extern char public_1000d651;
/* 0x1000d652 */ LDATA extern char public_1000d652;
/* 0x1000d653 */ LDATA extern char public_1000d653;
/* 0x1000d654 */ LDATA extern char public_1000d654; // '3'
/* 0x1000d655 */ LDATA extern char public_1000d655;
/* 0x1000d656 */ LDATA extern char public_1000d656;
/* 0x1000d657 */ LDATA extern char public_1000d657;
/* 0x1000d658 */ LDATA extern char public_1000d658;
/* 0x1000d659 */ LDATA extern char public_1000d659;
/* 0x1000d65a */ LDATA extern char public_1000d65a;
/* 0x1000d65b */ LDATA extern char public_1000d65b;
/* 0x1000d65c */ LDATA extern char public_1000d65c;
/* 0x1000d65d */ LDATA extern char public_1000d65d;
/* 0x1000d65e */ LDATA extern char public_1000d65e;
/* 0x1000d65f */ LDATA extern char public_1000d65f;
/* 0x1000d660 */ LDATA extern char public_1000d660; // 'Q'
/* 0x1000d661 */ LDATA extern char public_1000d661;
/* 0x1000d662 */ LDATA extern char public_1000d662;
/* 0x1000d663 */ LDATA extern char public_1000d663;
/* 0x1000d664 */ LDATA extern char public_1000d664;
/* 0x1000d665 */ LDATA extern char public_1000d665;
/* 0x1000d666 */ LDATA extern char public_1000d666;
/* 0x1000d667 */ LDATA extern char public_1000d667;
/* 0x1000d668 */ LDATA extern char public_1000d668;
/* 0x1000d669 */ LDATA extern char public_1000d669;
/* 0x1000d66a */ LDATA extern char public_1000d66a;
/* 0x1000d66b */ LDATA extern char public_1000d66b;
/* 0x1000d66c */ LDATA extern char public_1000d66c; // 'c'
/* 0x1000d66d */ LDATA extern char public_1000d66d;
/* 0x1000d66e */ LDATA extern char public_1000d66e;
/* 0x1000d66f */ LDATA extern char public_1000d66f;
/* 0x1000d670 */ LDATA extern char public_1000d670;
/* 0x1000d671 */ LDATA extern char public_1000d671;
/* 0x1000d672 */ LDATA extern char public_1000d672;
/* 0x1000d673 */ LDATA extern char public_1000d673;
/* 0x1000d674 */ LDATA extern char public_1000d674; // '#'
/* 0x1000d675 */ LDATA extern char public_1000d675;
/* 0x1000d676 */ LDATA extern char public_1000d676;
/* 0x1000d677 */ LDATA extern char public_1000d677;
/* 0x1000d678 */ LDATA extern char public_1000d678;
/* 0x1000d679 */ LDATA extern char public_1000d679;
/* 0x1000d67a */ LDATA extern char public_1000d67a;
/* 0x1000d67b */ LDATA extern char public_1000d67b;
/* 0x1000d67c */ LDATA extern char public_1000d67c;
/* 0x1000d67d */ LDATA extern char public_1000d67d;
/* 0x1000d67e */ LDATA extern char public_1000d67e;
/* 0x1000d67f */ LDATA extern char public_1000d67f;
/* 0x1000d680 */ LDATA extern char public_1000d680;
/* 0x1000d681 */ LDATA extern char public_1000d681;
/* 0x1000d682 */ LDATA extern char public_1000d682;
/* 0x1000d683 */ LDATA extern char public_1000d683;
/* 0x1000d684 */ LDATA extern char public_1000d684;
/* 0x1000d685 */ LDATA extern char public_1000d685;
/* 0x1000d686 */ LDATA extern char public_1000d686;
/* 0x1000d687 */ LDATA extern char public_1000d687;
/* 0x1000d688 */ LDATA extern char public_1000d688;
/* 0x1000d689 */ LDATA extern char public_1000d689;
/* 0x1000d68a */ LDATA extern char public_1000d68a;
/* 0x1000d68b */ LDATA extern char public_1000d68b;
/* 0x1000d68c */ LDATA extern char public_1000d68c;
/* 0x1000d68d */ LDATA extern char public_1000d68d;
/* 0x1000d68e */ LDATA extern char public_1000d68e;
/* 0x1000d68f */ LDATA extern char public_1000d68f;
/* 0x1000d690 */ LDATA extern char public_1000d690;
/* 0x1000d691 */ LDATA extern char public_1000d691;
/* 0x1000d692 */ LDATA extern char public_1000d692;
/* 0x1000d693 */ LDATA extern char public_1000d693;
/* 0x1000d694 */ LDATA extern char public_1000d694; // 'C'
/* 0x1000d695 */ LDATA extern char public_1000d695;
/* 0x1000d696 */ LDATA extern char public_1000d696;
/* 0x1000d697 */ LDATA extern char public_1000d697;
/* 0x1000d698 */ LDATA extern char public_1000d698;
/* 0x1000d699 */ LDATA extern char public_1000d699;
/* 0x1000d69a */ LDATA extern char public_1000d69a;
/* 0x1000d69b */ LDATA extern char public_1000d69b;
/* 0x1000d69c */ LDATA extern char public_1000d69c;
/* 0x1000d69d */ LDATA extern char public_1000d69d;
/* 0x1000d69e */ LDATA extern char public_1000d69e;
/* 0x1000d69f */ LDATA extern char public_1000d69f;
/* 0x1000d6a0 */ LDATA extern char public_1000d6a0; // 'P'
/* 0x1000d6a1 */ LDATA extern char public_1000d6a1;
/* 0x1000d6a2 */ LDATA extern char public_1000d6a2;
/* 0x1000d6a3 */ LDATA extern char public_1000d6a3;
/* 0x1000d6a4 */ LDATA extern char public_1000d6a4;
/* 0x1000d6a5 */ LDATA extern char public_1000d6a5;
/* 0x1000d6a6 */ LDATA extern char public_1000d6a6;
/* 0x1000d6a7 */ LDATA extern char public_1000d6a7;
/* 0x1000d6a8 */ LDATA extern char public_1000d6a8;
/* 0x1000d6a9 */ LDATA extern char public_1000d6a9;
/* 0x1000d6aa */ LDATA extern char public_1000d6aa;
/* 0x1000d6ab */ LDATA extern char public_1000d6ab;
/* 0x1000d6ac */ LDATA extern char public_1000d6ac; // '['
/* 0x1000d6ad */ LDATA extern char public_1000d6ad;
/* 0x1000d6ae */ LDATA extern char public_1000d6ae;
/* 0x1000d6af */ LDATA extern char public_1000d6af;
/* 0x1000d6b0 */ LDATA extern char public_1000d6b0;
/* 0x1000d6b1 */ LDATA extern char public_1000d6b1;
/* 0x1000d6b2 */ LDATA extern char public_1000d6b2;
/* 0x1000d6b3 */ LDATA extern char public_1000d6b3;
/* 0x1000d6b4 */ LDATA extern char public_1000d6b4;
/* 0x1000d6b5 */ LDATA extern char public_1000d6b5;
/* 0x1000d6b6 */ LDATA extern char public_1000d6b6;
/* 0x1000d6b7 */ LDATA extern char public_1000d6b7;
/* 0x1000d6b8 */ LDATA extern char public_1000d6b8;
/* 0x1000d6b9 */ LDATA extern char public_1000d6b9;
/* 0x1000d6ba */ LDATA extern char public_1000d6ba;
/* 0x1000d6bb */ LDATA extern char public_1000d6bb;
/* 0x1000d6bc */ LDATA extern char public_1000d6bc;
/* 0x1000d6bd */ LDATA extern char public_1000d6bd;
/* 0x1000d6be */ LDATA extern char public_1000d6be;
/* 0x1000d6bf */ LDATA extern char public_1000d6bf;
/* 0x1000d6c0 */ LDATA extern char public_1000d6c0; // 'T'
/* 0x1000d6c1 */ LDATA extern char public_1000d6c1;
/* 0x1000d6c2 */ LDATA extern char public_1000d6c2;
/* 0x1000d6c3 */ LDATA extern char public_1000d6c3;
/* 0x1000d6c4 */ LDATA extern char public_1000d6c4; // 'C'
/* 0x1000d6c5 */ LDATA extern char public_1000d6c5;
/* 0x1000d6c6 */ LDATA extern char public_1000d6c6;
/* 0x1000d6c7 */ LDATA extern char public_1000d6c7;
/* 0x1000d6c8 */ LDATA extern char public_1000d6c8;
/* 0x1000d6c9 */ LDATA extern char public_1000d6c9;
/* 0x1000d6ca */ LDATA extern char public_1000d6ca;
/* 0x1000d6cb */ LDATA extern char public_1000d6cb;
/* 0x1000d6cc */ LDATA extern char public_1000d6cc; // '{'
/* 0x1000d6cd */ LDATA extern char public_1000d6cd;
/* 0x1000d6ce */ LDATA extern char public_1000d6ce;
/* 0x1000d6cf */ LDATA extern char public_1000d6cf;
/* 0x1000d6d0 */ LDATA extern char public_1000d6d0;
/* 0x1000d6d1 */ LDATA extern char public_1000d6d1;
/* 0x1000d6d2 */ LDATA extern char public_1000d6d2;
/* 0x1000d6d3 */ LDATA extern char public_1000d6d3;
/* 0x1000d6d4 */ LDATA extern char public_1000d6d4; // ';'
/* 0x1000d6d5 */ LDATA extern char public_1000d6d5;
/* 0x1000d6d6 */ LDATA extern char public_1000d6d6;
/* 0x1000d6d7 */ LDATA extern char public_1000d6d7;
/* 0x1000d6d8 */ LDATA extern char public_1000d6d8;
/* 0x1000d6d9 */ LDATA extern char public_1000d6d9;
/* 0x1000d6da */ LDATA extern char public_1000d6da;
/* 0x1000d6db */ LDATA extern char public_1000d6db;
/* 0x1000d6dc */ LDATA extern char public_1000d6dc;
/* 0x1000d6dd */ LDATA extern char public_1000d6dd;
/* 0x1000d6de */ LDATA extern char public_1000d6de;
/* 0x1000d6df */ LDATA extern char public_1000d6df;
/* 0x1000d6e0 */ LDATA extern char public_1000d6e0; // 'R'
/* 0x1000d6e1 */ LDATA extern char public_1000d6e1;
/* 0x1000d6e2 */ LDATA extern char public_1000d6e2;
/* 0x1000d6e3 */ LDATA extern char public_1000d6e3;
/* 0x1000d6e4 */ LDATA extern char public_1000d6e4;
/* 0x1000d6e5 */ LDATA extern char public_1000d6e5;
/* 0x1000d6e6 */ LDATA extern char public_1000d6e6;
/* 0x1000d6e7 */ LDATA extern char public_1000d6e7;
/* 0x1000d6e8 */ LDATA extern char public_1000d6e8;
/* 0x1000d6e9 */ LDATA extern char public_1000d6e9;
/* 0x1000d6ea */ LDATA extern char public_1000d6ea;
/* 0x1000d6eb */ LDATA extern char public_1000d6eb;
/* 0x1000d6ec */ LDATA extern char public_1000d6ec; // 'k'
/* 0x1000d6ed */ LDATA extern char public_1000d6ed;
/* 0x1000d6ee */ LDATA extern char public_1000d6ee;
/* 0x1000d6ef */ LDATA extern char public_1000d6ef;
/* 0x1000d6f0 */ LDATA extern char public_1000d6f0;
/* 0x1000d6f1 */ LDATA extern char public_1000d6f1;
/* 0x1000d6f2 */ LDATA extern char public_1000d6f2;
/* 0x1000d6f3 */ LDATA extern char public_1000d6f3;
/* 0x1000d6f4 */ LDATA extern char public_1000d6f4; // '+'
/* 0x1000d6f5 */ LDATA extern char public_1000d6f5;
/* 0x1000d6f6 */ LDATA extern char public_1000d6f6;
/* 0x1000d6f7 */ LDATA extern char public_1000d6f7;
/* 0x1000d6f8 */ LDATA extern char public_1000d6f8;
/* 0x1000d6f9 */ LDATA extern char public_1000d6f9;
/* 0x1000d6fa */ LDATA extern char public_1000d6fa;
/* 0x1000d6fb */ LDATA extern char public_1000d6fb;
/* 0x1000d6fc */ LDATA extern char public_1000d6fc;
/* 0x1000d6fd */ LDATA extern char public_1000d6fd;
/* 0x1000d6fe */ LDATA extern char public_1000d6fe;
/* 0x1000d6ff */ LDATA extern char public_1000d6ff;
/* 0x1000d700 */ LDATA extern char public_1000d700;
/* 0x1000d701 */ LDATA extern char public_1000d701;
/* 0x1000d702 */ LDATA extern char public_1000d702;
/* 0x1000d703 */ LDATA extern char public_1000d703;
/* 0x1000d704 */ LDATA extern char public_1000d704;
/* 0x1000d705 */ LDATA extern char public_1000d705;
/* 0x1000d706 */ LDATA extern char public_1000d706;
/* 0x1000d707 */ LDATA extern char public_1000d707;
/* 0x1000d708 */ LDATA extern char public_1000d708;
/* 0x1000d709 */ LDATA extern char public_1000d709;
/* 0x1000d70a */ LDATA extern char public_1000d70a;
/* 0x1000d70b */ LDATA extern char public_1000d70b;
/* 0x1000d70c */ LDATA extern char public_1000d70c;
/* 0x1000d70d */ LDATA extern char public_1000d70d;
/* 0x1000d70e */ LDATA extern char public_1000d70e;
/* 0x1000d70f */ LDATA extern char public_1000d70f;
/* 0x1000d710 */ LDATA extern char public_1000d710;
/* 0x1000d711 */ LDATA extern char public_1000d711;
/* 0x1000d712 */ LDATA extern char public_1000d712;
/* 0x1000d713 */ LDATA extern char public_1000d713;
/* 0x1000d714 */ LDATA extern char public_1000d714; // 'K'
/* 0x1000d715 */ LDATA extern char public_1000d715;
/* 0x1000d716 */ LDATA extern char public_1000d716;
/* 0x1000d717 */ LDATA extern char public_1000d717;
/* 0x1000d718 */ LDATA extern char public_1000d718;
/* 0x1000d719 */ LDATA extern char public_1000d719;
/* 0x1000d71a */ LDATA extern char public_1000d71a;
/* 0x1000d71b */ LDATA extern char public_1000d71b;
/* 0x1000d71c */ LDATA extern char public_1000d71c;
/* 0x1000d71d */ LDATA extern char public_1000d71d;
/* 0x1000d71e */ LDATA extern char public_1000d71e;
/* 0x1000d71f */ LDATA extern char public_1000d71f;
/* 0x1000d720 */ LDATA extern char public_1000d720; // 'P'
/* 0x1000d721 */ LDATA extern char public_1000d721;
/* 0x1000d722 */ LDATA extern char public_1000d722;
/* 0x1000d723 */ LDATA extern char public_1000d723;
/* 0x1000d724 */ LDATA extern char public_1000d724;
/* 0x1000d725 */ LDATA extern char public_1000d725;
/* 0x1000d726 */ LDATA extern char public_1000d726;
/* 0x1000d727 */ LDATA extern char public_1000d727;
/* 0x1000d728 */ LDATA extern char public_1000d728;
/* 0x1000d729 */ LDATA extern char public_1000d729;
/* 0x1000d72a */ LDATA extern char public_1000d72a;
/* 0x1000d72b */ LDATA extern char public_1000d72b;
/* 0x1000d72c */ LDATA extern char public_1000d72c; // 'W'
/* 0x1000d72d */ LDATA extern char public_1000d72d;
/* 0x1000d72e */ LDATA extern char public_1000d72e;
/* 0x1000d72f */ LDATA extern char public_1000d72f;
/* 0x1000d730 */ LDATA extern char public_1000d730;
/* 0x1000d731 */ LDATA extern char public_1000d731;
/* 0x1000d732 */ LDATA extern char public_1000d732;
/* 0x1000d733 */ LDATA extern char public_1000d733;
/* 0x1000d734 */ LDATA extern char public_1000d734;
/* 0x1000d735 */ LDATA extern char public_1000d735;
/* 0x1000d736 */ LDATA extern char public_1000d736;
/* 0x1000d737 */ LDATA extern char public_1000d737;
/* 0x1000d738 */ LDATA extern char public_1000d738;
/* 0x1000d739 */ LDATA extern char public_1000d739;
/* 0x1000d73a */ LDATA extern char public_1000d73a;
/* 0x1000d73b */ LDATA extern char public_1000d73b;
/* 0x1000d73c */ LDATA extern char public_1000d73c;
/* 0x1000d73d */ LDATA extern char public_1000d73d;
/* 0x1000d73e */ LDATA extern char public_1000d73e;
/* 0x1000d73f */ LDATA extern char public_1000d73f;
/* 0x1000d740 */ LDATA extern char public_1000d740; // 'S'
/* 0x1000d741 */ LDATA extern char public_1000d741;
/* 0x1000d742 */ LDATA extern char public_1000d742;
/* 0x1000d743 */ LDATA extern char public_1000d743;
/* 0x1000d744 */ LDATA extern char public_1000d744; // '3'
/* 0x1000d745 */ LDATA extern char public_1000d745;
/* 0x1000d746 */ LDATA extern char public_1000d746;
/* 0x1000d747 */ LDATA extern char public_1000d747;
/* 0x1000d748 */ LDATA extern char public_1000d748;
/* 0x1000d749 */ LDATA extern char public_1000d749;
/* 0x1000d74a */ LDATA extern char public_1000d74a;
/* 0x1000d74b */ LDATA extern char public_1000d74b;
/* 0x1000d74c */ LDATA extern char public_1000d74c; // 'w'
/* 0x1000d74d */ LDATA extern char public_1000d74d;
/* 0x1000d74e */ LDATA extern char public_1000d74e;
/* 0x1000d74f */ LDATA extern char public_1000d74f;
/* 0x1000d750 */ LDATA extern char public_1000d750;
/* 0x1000d751 */ LDATA extern char public_1000d751;
/* 0x1000d752 */ LDATA extern char public_1000d752;
/* 0x1000d753 */ LDATA extern char public_1000d753;
/* 0x1000d754 */ LDATA extern char public_1000d754; // '7'
/* 0x1000d755 */ LDATA extern char public_1000d755;
/* 0x1000d756 */ LDATA extern char public_1000d756;
/* 0x1000d757 */ LDATA extern char public_1000d757;
/* 0x1000d758 */ LDATA extern char public_1000d758;
/* 0x1000d759 */ LDATA extern char public_1000d759;
/* 0x1000d75a */ LDATA extern char public_1000d75a;
/* 0x1000d75b */ LDATA extern char public_1000d75b;
/* 0x1000d75c */ LDATA extern char public_1000d75c;
/* 0x1000d75d */ LDATA extern char public_1000d75d;
/* 0x1000d75e */ LDATA extern char public_1000d75e;
/* 0x1000d75f */ LDATA extern char public_1000d75f;
/* 0x1000d760 */ LDATA extern char public_1000d760; // 'Q'
/* 0x1000d761 */ LDATA extern char public_1000d761;
/* 0x1000d762 */ LDATA extern char public_1000d762;
/* 0x1000d763 */ LDATA extern char public_1000d763;
/* 0x1000d764 */ LDATA extern char public_1000d764;
/* 0x1000d765 */ LDATA extern char public_1000d765;
/* 0x1000d766 */ LDATA extern char public_1000d766;
/* 0x1000d767 */ LDATA extern char public_1000d767;
/* 0x1000d768 */ LDATA extern char public_1000d768;
/* 0x1000d769 */ LDATA extern char public_1000d769;
/* 0x1000d76a */ LDATA extern char public_1000d76a;
/* 0x1000d76b */ LDATA extern char public_1000d76b;
/* 0x1000d76c */ LDATA extern char public_1000d76c; // 'g'
/* 0x1000d76d */ LDATA extern char public_1000d76d;
/* 0x1000d76e */ LDATA extern char public_1000d76e;
/* 0x1000d76f */ LDATA extern char public_1000d76f;
/* 0x1000d770 */ LDATA extern char public_1000d770;
/* 0x1000d771 */ LDATA extern char public_1000d771;
/* 0x1000d772 */ LDATA extern char public_1000d772;
/* 0x1000d773 */ LDATA extern char public_1000d773;
/* 0x1000d774 */ LDATA extern char public_1000d774; // '''
/* 0x1000d775 */ LDATA extern char public_1000d775;
/* 0x1000d776 */ LDATA extern char public_1000d776;
/* 0x1000d777 */ LDATA extern char public_1000d777;
/* 0x1000d778 */ LDATA extern char public_1000d778;
/* 0x1000d779 */ LDATA extern char public_1000d779;
/* 0x1000d77a */ LDATA extern char public_1000d77a;
/* 0x1000d77b */ LDATA extern char public_1000d77b;
/* 0x1000d77c */ LDATA extern char public_1000d77c;
/* 0x1000d77d */ LDATA extern char public_1000d77d;
/* 0x1000d77e */ LDATA extern char public_1000d77e;
/* 0x1000d77f */ LDATA extern char public_1000d77f;
/* 0x1000d780 */ LDATA extern char public_1000d780;
/* 0x1000d781 */ LDATA extern char public_1000d781;
/* 0x1000d782 */ LDATA extern char public_1000d782;
/* 0x1000d783 */ LDATA extern char public_1000d783;
/* 0x1000d784 */ LDATA extern char public_1000d784;
/* 0x1000d785 */ LDATA extern char public_1000d785;
/* 0x1000d786 */ LDATA extern char public_1000d786;
/* 0x1000d787 */ LDATA extern char public_1000d787;
/* 0x1000d788 */ LDATA extern char public_1000d788;
/* 0x1000d789 */ LDATA extern char public_1000d789;
/* 0x1000d78a */ LDATA extern char public_1000d78a;
/* 0x1000d78b */ LDATA extern char public_1000d78b;
/* 0x1000d78c */ LDATA extern char public_1000d78c;
/* 0x1000d78d */ LDATA extern char public_1000d78d;
/* 0x1000d78e */ LDATA extern char public_1000d78e;
/* 0x1000d78f */ LDATA extern char public_1000d78f;
/* 0x1000d790 */ LDATA extern char public_1000d790;
/* 0x1000d791 */ LDATA extern char public_1000d791;
/* 0x1000d792 */ LDATA extern char public_1000d792;
/* 0x1000d793 */ LDATA extern char public_1000d793;
/* 0x1000d794 */ LDATA extern char public_1000d794; // 'G'
/* 0x1000d795 */ LDATA extern char public_1000d795;
/* 0x1000d796 */ LDATA extern char public_1000d796;
/* 0x1000d797 */ LDATA extern char public_1000d797;
/* 0x1000d798 */ LDATA extern char public_1000d798;
/* 0x1000d799 */ LDATA extern char public_1000d799;
/* 0x1000d79a */ LDATA extern char public_1000d79a;
/* 0x1000d79b */ LDATA extern char public_1000d79b;
/* 0x1000d79c */ LDATA extern char public_1000d79c;
/* 0x1000d79d */ LDATA extern char public_1000d79d;
/* 0x1000d79e */ LDATA extern char public_1000d79e;
/* 0x1000d79f */ LDATA extern char public_1000d79f;
/* 0x1000d7a0 */ LDATA extern char public_1000d7a0; // 'P'
/* 0x1000d7a1 */ LDATA extern char public_1000d7a1;
/* 0x1000d7a2 */ LDATA extern char public_1000d7a2;
/* 0x1000d7a3 */ LDATA extern char public_1000d7a3;
/* 0x1000d7a4 */ LDATA extern char public_1000d7a4;
/* 0x1000d7a5 */ LDATA extern char public_1000d7a5;
/* 0x1000d7a6 */ LDATA extern char public_1000d7a6;
/* 0x1000d7a7 */ LDATA extern char public_1000d7a7;
/* 0x1000d7a8 */ LDATA extern char public_1000d7a8;
/* 0x1000d7a9 */ LDATA extern char public_1000d7a9;
/* 0x1000d7aa */ LDATA extern char public_1000d7aa;
/* 0x1000d7ab */ LDATA extern char public_1000d7ab;
/* 0x1000d7ac */ LDATA extern char public_1000d7ac; // '_'
/* 0x1000d7ad */ LDATA extern char public_1000d7ad;
/* 0x1000d7ae */ LDATA extern char public_1000d7ae;
/* 0x1000d7af */ LDATA extern char public_1000d7af;
/* 0x1000d7b0 */ LDATA extern char public_1000d7b0;
/* 0x1000d7b1 */ LDATA extern char public_1000d7b1;
/* 0x1000d7b2 */ LDATA extern char public_1000d7b2;
/* 0x1000d7b3 */ LDATA extern char public_1000d7b3;
/* 0x1000d7b4 */ LDATA extern char public_1000d7b4;
/* 0x1000d7b5 */ LDATA extern char public_1000d7b5;
/* 0x1000d7b6 */ LDATA extern char public_1000d7b6;
/* 0x1000d7b7 */ LDATA extern char public_1000d7b7;
/* 0x1000d7b8 */ LDATA extern char public_1000d7b8;
/* 0x1000d7b9 */ LDATA extern char public_1000d7b9;
/* 0x1000d7ba */ LDATA extern char public_1000d7ba;
/* 0x1000d7bb */ LDATA extern char public_1000d7bb;
/* 0x1000d7bc */ LDATA extern char public_1000d7bc;
/* 0x1000d7bd */ LDATA extern char public_1000d7bd;
/* 0x1000d7be */ LDATA extern char public_1000d7be;
/* 0x1000d7bf */ LDATA extern char public_1000d7bf;
/* 0x1000d7c0 */ LDATA extern char public_1000d7c0; // 'T'
/* 0x1000d7c1 */ LDATA extern char public_1000d7c1;
/* 0x1000d7c2 */ LDATA extern char public_1000d7c2;
/* 0x1000d7c3 */ LDATA extern char public_1000d7c3;
/* 0x1000d7c4 */ LDATA extern char public_1000d7c4; // 'c'
/* 0x1000d7c5 */ LDATA extern char public_1000d7c5;
/* 0x1000d7c6 */ LDATA extern char public_1000d7c6;
/* 0x1000d7c7 */ LDATA extern char public_1000d7c7;
/* 0x1000d7c8 */ LDATA extern char public_1000d7c8;
/* 0x1000d7c9 */ LDATA extern char public_1000d7c9;
/* 0x1000d7ca */ LDATA extern char public_1000d7ca;
/* 0x1000d7cb */ LDATA extern char public_1000d7cb;
/* 0x1000d7cc */ LDATA extern char public_1000d7cc;
/* 0x1000d7cd */ LDATA extern char public_1000d7cd;
/* 0x1000d7ce */ LDATA extern char public_1000d7ce;
/* 0x1000d7cf */ LDATA extern char public_1000d7cf;
/* 0x1000d7d0 */ LDATA extern char public_1000d7d0;
/* 0x1000d7d1 */ LDATA extern char public_1000d7d1;
/* 0x1000d7d2 */ LDATA extern char public_1000d7d2;
/* 0x1000d7d3 */ LDATA extern char public_1000d7d3;
/* 0x1000d7d4 */ LDATA extern char public_1000d7d4; // '?'
/* 0x1000d7d5 */ LDATA extern char public_1000d7d5;
/* 0x1000d7d6 */ LDATA extern char public_1000d7d6;
/* 0x1000d7d7 */ LDATA extern char public_1000d7d7;
/* 0x1000d7d8 */ LDATA extern char public_1000d7d8;
/* 0x1000d7d9 */ LDATA extern char public_1000d7d9;
/* 0x1000d7da */ LDATA extern char public_1000d7da;
/* 0x1000d7db */ LDATA extern char public_1000d7db;
/* 0x1000d7dc */ LDATA extern char public_1000d7dc;
/* 0x1000d7dd */ LDATA extern char public_1000d7dd;
/* 0x1000d7de */ LDATA extern char public_1000d7de;
/* 0x1000d7df */ LDATA extern char public_1000d7df;
/* 0x1000d7e0 */ LDATA extern char public_1000d7e0; // 'R'
/* 0x1000d7e1 */ LDATA extern char public_1000d7e1;
/* 0x1000d7e2 */ LDATA extern char public_1000d7e2;
/* 0x1000d7e3 */ LDATA extern char public_1000d7e3;
/* 0x1000d7e4 */ LDATA extern char public_1000d7e4;
/* 0x1000d7e5 */ LDATA extern char public_1000d7e5;
/* 0x1000d7e6 */ LDATA extern char public_1000d7e6;
/* 0x1000d7e7 */ LDATA extern char public_1000d7e7;
/* 0x1000d7e8 */ LDATA extern char public_1000d7e8;
/* 0x1000d7e9 */ LDATA extern char public_1000d7e9;
/* 0x1000d7ea */ LDATA extern char public_1000d7ea;
/* 0x1000d7eb */ LDATA extern char public_1000d7eb;
/* 0x1000d7ec */ LDATA extern char public_1000d7ec; // 'o'
/* 0x1000d7ed */ LDATA extern char public_1000d7ed;
/* 0x1000d7ee */ LDATA extern char public_1000d7ee;
/* 0x1000d7ef */ LDATA extern char public_1000d7ef;
/* 0x1000d7f0 */ LDATA extern char public_1000d7f0;
/* 0x1000d7f1 */ LDATA extern char public_1000d7f1;
/* 0x1000d7f2 */ LDATA extern char public_1000d7f2;
/* 0x1000d7f3 */ LDATA extern char public_1000d7f3;
/* 0x1000d7f4 */ LDATA extern char public_1000d7f4; // '/'
/* 0x1000d7f5 */ LDATA extern char public_1000d7f5;
/* 0x1000d7f6 */ LDATA extern char public_1000d7f6;
/* 0x1000d7f7 */ LDATA extern char public_1000d7f7;
/* 0x1000d7f8 */ LDATA extern char public_1000d7f8;
/* 0x1000d7f9 */ LDATA extern char public_1000d7f9;
/* 0x1000d7fa */ LDATA extern char public_1000d7fa;
/* 0x1000d7fb */ LDATA extern char public_1000d7fb;
/* 0x1000d7fc */ LDATA extern char public_1000d7fc;
/* 0x1000d7fd */ LDATA extern char public_1000d7fd;
/* 0x1000d7fe */ LDATA extern char public_1000d7fe;
/* 0x1000d7ff */ LDATA extern char public_1000d7ff;
/* 0x1000d800 */ LDATA extern char public_1000d800;
/* 0x1000d801 */ LDATA extern char public_1000d801;
/* 0x1000d802 */ LDATA extern char public_1000d802;
/* 0x1000d803 */ LDATA extern char public_1000d803;
/* 0x1000d804 */ LDATA extern char public_1000d804;
/* 0x1000d805 */ LDATA extern char public_1000d805;
/* 0x1000d806 */ LDATA extern char public_1000d806;
/* 0x1000d807 */ LDATA extern char public_1000d807;
/* 0x1000d808 */ LDATA extern char public_1000d808;
/* 0x1000d809 */ LDATA extern char public_1000d809;
/* 0x1000d80a */ LDATA extern char public_1000d80a;
/* 0x1000d80b */ LDATA extern char public_1000d80b;
/* 0x1000d80c */ LDATA extern char public_1000d80c;
/* 0x1000d80d */ LDATA extern char public_1000d80d;
/* 0x1000d80e */ LDATA extern char public_1000d80e;
/* 0x1000d80f */ LDATA extern char public_1000d80f;
/* 0x1000d810 */ LDATA extern char public_1000d810;
/* 0x1000d811 */ LDATA extern char public_1000d811;
/* 0x1000d812 */ LDATA extern char public_1000d812;
/* 0x1000d813 */ LDATA extern char public_1000d813;
/* 0x1000d814 */ LDATA extern char public_1000d814; // 'O'
/* 0x1000d815 */ LDATA extern char public_1000d815;
/* 0x1000d816 */ LDATA extern char public_1000d816;
/* 0x1000d817 */ LDATA extern char public_1000d817;
/* 0x1000d818 */ LDATA extern char public_1000d818;
/* 0x1000d819 */ LDATA extern char public_1000d819;
/* 0x1000d81a */ LDATA extern char public_1000d81a;
/* 0x1000d81b */ LDATA extern char public_1000d81b;
/* 0x1000d81c */ LDATA extern char public_1000d81c;
/* 0x1000d81d */ LDATA extern char public_1000d81d;
/* 0x1000d81e */ LDATA extern char public_1000d81e;
/* 0x1000d81f */ LDATA extern char public_1000d81f;
/* 0x1000d820 */ LDATA extern char public_1000d820; // '`'
/* 0x1000d821 */ LDATA extern char public_1000d821;
/* 0x1000d822 */ LDATA extern char public_1000d822;
/* 0x1000d823 */ LDATA extern char public_1000d823;
/* 0x1000d824 */ LDATA extern char public_1000d824;
/* 0x1000d825 */ LDATA extern char public_1000d825;
/* 0x1000d826 */ LDATA extern char public_1000d826;
/* 0x1000d827 */ LDATA extern char public_1000d827;
/* 0x1000d828 */ LDATA extern char public_1000d828;
/* 0x1000d829 */ LDATA extern char public_1000d829;
/* 0x1000d82a */ LDATA extern char public_1000d82a;
/* 0x1000d82b */ LDATA extern char public_1000d82b;
/* 0x1000d82c */ LDATA extern char public_1000d82c; // 'P'
/* 0x1000d82d */ LDATA extern char public_1000d82d;
/* 0x1000d82e */ LDATA extern char public_1000d82e;
/* 0x1000d82f */ LDATA extern char public_1000d82f;
/* 0x1000d830 */ LDATA extern char public_1000d830;
/* 0x1000d831 */ LDATA extern char public_1000d831;
/* 0x1000d832 */ LDATA extern char public_1000d832;
/* 0x1000d833 */ LDATA extern char public_1000d833;
/* 0x1000d834 */ LDATA extern char public_1000d834;
/* 0x1000d835 */ LDATA extern char public_1000d835;
/* 0x1000d836 */ LDATA extern char public_1000d836;
/* 0x1000d837 */ LDATA extern char public_1000d837;
/* 0x1000d838 */ LDATA extern char public_1000d838; // 'T'
/* 0x1000d839 */ LDATA extern char public_1000d839;
/* 0x1000d83a */ LDATA extern char public_1000d83a;
/* 0x1000d83b */ LDATA extern char public_1000d83b;
/* 0x1000d83c */ LDATA extern char public_1000d83c; // 's'
/* 0x1000d83d */ LDATA extern char public_1000d83d;
/* 0x1000d83e */ LDATA extern char public_1000d83e;
/* 0x1000d83f */ LDATA extern char public_1000d83f;
/* 0x1000d840 */ LDATA extern char public_1000d840; // 'R'
/* 0x1000d841 */ LDATA extern char public_1000d841;
/* 0x1000d842 */ LDATA extern char public_1000d842;
/* 0x1000d843 */ LDATA extern char public_1000d843;
/* 0x1000d844 */ LDATA extern char public_1000d844;
/* 0x1000d845 */ LDATA extern char public_1000d845;
/* 0x1000d846 */ LDATA extern char public_1000d846;
/* 0x1000d847 */ LDATA extern char public_1000d847;
/* 0x1000d848 */ LDATA extern char public_1000d848;
/* 0x1000d849 */ LDATA extern char public_1000d849;
/* 0x1000d84a */ LDATA extern char public_1000d84a;
/* 0x1000d84b */ LDATA extern char public_1000d84b;
/* 0x1000d84c */ LDATA extern char public_1000d84c; // 'p'
/* 0x1000d84d */ LDATA extern char public_1000d84d;
/* 0x1000d84e */ LDATA extern char public_1000d84e;
/* 0x1000d84f */ LDATA extern char public_1000d84f;
/* 0x1000d850 */ LDATA extern char public_1000d850;
/* 0x1000d851 */ LDATA extern char public_1000d851;
/* 0x1000d852 */ LDATA extern char public_1000d852;
/* 0x1000d853 */ LDATA extern char public_1000d853;
/* 0x1000d854 */ LDATA extern char public_1000d854; // '0'
/* 0x1000d855 */ LDATA extern char public_1000d855;
/* 0x1000d856 */ LDATA extern char public_1000d856;
/* 0x1000d857 */ LDATA extern char public_1000d857;
/* 0x1000d858 */ LDATA extern char public_1000d858;
/* 0x1000d859 */ LDATA extern char public_1000d859;
/* 0x1000d85a */ LDATA extern char public_1000d85a;
/* 0x1000d85b */ LDATA extern char public_1000d85b;
/* 0x1000d85c */ LDATA extern char public_1000d85c;
/* 0x1000d85d */ LDATA extern char public_1000d85d;
/* 0x1000d85e */ LDATA extern char public_1000d85e;
/* 0x1000d85f */ LDATA extern char public_1000d85f;
/* 0x1000d860 */ LDATA extern char public_1000d860; // 'P'
/* 0x1000d861 */ LDATA extern char public_1000d861;
/* 0x1000d862 */ LDATA extern char public_1000d862;
/* 0x1000d863 */ LDATA extern char public_1000d863;
/* 0x1000d864 */ LDATA extern char public_1000d864;
/* 0x1000d865 */ LDATA extern char public_1000d865;
/* 0x1000d866 */ LDATA extern char public_1000d866;
/* 0x1000d867 */ LDATA extern char public_1000d867;
/* 0x1000d868 */ LDATA extern char public_1000d868;
/* 0x1000d869 */ LDATA extern char public_1000d869;
/* 0x1000d86a */ LDATA extern char public_1000d86a;
/* 0x1000d86b */ LDATA extern char public_1000d86b;
/* 0x1000d86c */ LDATA extern char public_1000d86c; // '`'
/* 0x1000d86d */ LDATA extern char public_1000d86d;
/* 0x1000d86e */ LDATA extern char public_1000d86e;
/* 0x1000d86f */ LDATA extern char public_1000d86f;
/* 0x1000d870 */ LDATA extern char public_1000d870;
/* 0x1000d871 */ LDATA extern char public_1000d871;
/* 0x1000d872 */ LDATA extern char public_1000d872;
/* 0x1000d873 */ LDATA extern char public_1000d873;
/* 0x1000d874 */ LDATA extern char public_1000d874; // ' '
/* 0x1000d875 */ LDATA extern char public_1000d875;
/* 0x1000d876 */ LDATA extern char public_1000d876;
/* 0x1000d877 */ LDATA extern char public_1000d877;
/* 0x1000d878 */ LDATA extern char public_1000d878;
/* 0x1000d879 */ LDATA extern char public_1000d879;
/* 0x1000d87a */ LDATA extern char public_1000d87a;
/* 0x1000d87b */ LDATA extern char public_1000d87b;
/* 0x1000d87c */ LDATA extern char public_1000d87c;
/* 0x1000d87d */ LDATA extern char public_1000d87d;
/* 0x1000d87e */ LDATA extern char public_1000d87e;
/* 0x1000d87f */ LDATA extern char public_1000d87f;
/* 0x1000d880 */ LDATA extern char public_1000d880;
/* 0x1000d881 */ LDATA extern char public_1000d881;
/* 0x1000d882 */ LDATA extern char public_1000d882;
/* 0x1000d883 */ LDATA extern char public_1000d883;
/* 0x1000d884 */ LDATA extern char public_1000d884;
/* 0x1000d885 */ LDATA extern char public_1000d885;
/* 0x1000d886 */ LDATA extern char public_1000d886;
/* 0x1000d887 */ LDATA extern char public_1000d887;
/* 0x1000d888 */ LDATA extern char public_1000d888;
/* 0x1000d889 */ LDATA extern char public_1000d889;
/* 0x1000d88a */ LDATA extern char public_1000d88a;
/* 0x1000d88b */ LDATA extern char public_1000d88b;
/* 0x1000d88c */ LDATA extern char public_1000d88c;
/* 0x1000d88d */ LDATA extern char public_1000d88d;
/* 0x1000d88e */ LDATA extern char public_1000d88e;
/* 0x1000d88f */ LDATA extern char public_1000d88f;
/* 0x1000d890 */ LDATA extern char public_1000d890;
/* 0x1000d891 */ LDATA extern char public_1000d891;
/* 0x1000d892 */ LDATA extern char public_1000d892;
/* 0x1000d893 */ LDATA extern char public_1000d893;
/* 0x1000d894 */ LDATA extern char public_1000d894; // '@'
/* 0x1000d895 */ LDATA extern char public_1000d895;
/* 0x1000d896 */ LDATA extern char public_1000d896;
/* 0x1000d897 */ LDATA extern char public_1000d897;
/* 0x1000d898 */ LDATA extern char public_1000d898;
/* 0x1000d899 */ LDATA extern char public_1000d899;
/* 0x1000d89a */ LDATA extern char public_1000d89a;
/* 0x1000d89b */ LDATA extern char public_1000d89b;
/* 0x1000d89c */ LDATA extern char public_1000d89c;
/* 0x1000d89d */ LDATA extern char public_1000d89d;
/* 0x1000d89e */ LDATA extern char public_1000d89e;
/* 0x1000d89f */ LDATA extern char public_1000d89f;
/* 0x1000d8a0 */ LDATA extern char public_1000d8a0; // 'P'
/* 0x1000d8a1 */ LDATA extern char public_1000d8a1;
/* 0x1000d8a2 */ LDATA extern char public_1000d8a2;
/* 0x1000d8a3 */ LDATA extern char public_1000d8a3;
/* 0x1000d8a4 */ LDATA extern char public_1000d8a4;
/* 0x1000d8a5 */ LDATA extern char public_1000d8a5;
/* 0x1000d8a6 */ LDATA extern char public_1000d8a6;
/* 0x1000d8a7 */ LDATA extern char public_1000d8a7;
/* 0x1000d8a8 */ LDATA extern char public_1000d8a8;
/* 0x1000d8a9 */ LDATA extern char public_1000d8a9;
/* 0x1000d8aa */ LDATA extern char public_1000d8aa;
/* 0x1000d8ab */ LDATA extern char public_1000d8ab;
/* 0x1000d8ac */ LDATA extern char public_1000d8ac; // 'X'
/* 0x1000d8ad */ LDATA extern char public_1000d8ad;
/* 0x1000d8ae */ LDATA extern char public_1000d8ae;
/* 0x1000d8af */ LDATA extern char public_1000d8af;
/* 0x1000d8b0 */ LDATA extern char public_1000d8b0;
/* 0x1000d8b1 */ LDATA extern char public_1000d8b1;
/* 0x1000d8b2 */ LDATA extern char public_1000d8b2;
/* 0x1000d8b3 */ LDATA extern char public_1000d8b3;
/* 0x1000d8b4 */ LDATA extern char public_1000d8b4;
/* 0x1000d8b5 */ LDATA extern char public_1000d8b5;
/* 0x1000d8b6 */ LDATA extern char public_1000d8b6;
/* 0x1000d8b7 */ LDATA extern char public_1000d8b7;
/* 0x1000d8b8 */ LDATA extern char public_1000d8b8;
/* 0x1000d8b9 */ LDATA extern char public_1000d8b9;
/* 0x1000d8ba */ LDATA extern char public_1000d8ba;
/* 0x1000d8bb */ LDATA extern char public_1000d8bb;
/* 0x1000d8bc */ LDATA extern char public_1000d8bc;
/* 0x1000d8bd */ LDATA extern char public_1000d8bd;
/* 0x1000d8be */ LDATA extern char public_1000d8be;
/* 0x1000d8bf */ LDATA extern char public_1000d8bf;
/* 0x1000d8c0 */ LDATA extern char public_1000d8c0; // 'S'
/* 0x1000d8c1 */ LDATA extern char public_1000d8c1;
/* 0x1000d8c2 */ LDATA extern char public_1000d8c2;
/* 0x1000d8c3 */ LDATA extern char public_1000d8c3;
/* 0x1000d8c4 */ LDATA extern char public_1000d8c4; // ';'
/* 0x1000d8c5 */ LDATA extern char public_1000d8c5;
/* 0x1000d8c6 */ LDATA extern char public_1000d8c6;
/* 0x1000d8c7 */ LDATA extern char public_1000d8c7;
/* 0x1000d8c8 */ LDATA extern char public_1000d8c8;
/* 0x1000d8c9 */ LDATA extern char public_1000d8c9;
/* 0x1000d8ca */ LDATA extern char public_1000d8ca;
/* 0x1000d8cb */ LDATA extern char public_1000d8cb;
/* 0x1000d8cc */ LDATA extern char public_1000d8cc; // 'x'
/* 0x1000d8cd */ LDATA extern char public_1000d8cd;
/* 0x1000d8ce */ LDATA extern char public_1000d8ce;
/* 0x1000d8cf */ LDATA extern char public_1000d8cf;
/* 0x1000d8d0 */ LDATA extern char public_1000d8d0;
/* 0x1000d8d1 */ LDATA extern char public_1000d8d1;
/* 0x1000d8d2 */ LDATA extern char public_1000d8d2;
/* 0x1000d8d3 */ LDATA extern char public_1000d8d3;
/* 0x1000d8d4 */ LDATA extern char public_1000d8d4; // '8'
/* 0x1000d8d5 */ LDATA extern char public_1000d8d5;
/* 0x1000d8d6 */ LDATA extern char public_1000d8d6;
/* 0x1000d8d7 */ LDATA extern char public_1000d8d7;
/* 0x1000d8d8 */ LDATA extern char public_1000d8d8;
/* 0x1000d8d9 */ LDATA extern char public_1000d8d9;
/* 0x1000d8da */ LDATA extern char public_1000d8da;
/* 0x1000d8db */ LDATA extern char public_1000d8db;
/* 0x1000d8dc */ LDATA extern char public_1000d8dc;
/* 0x1000d8dd */ LDATA extern char public_1000d8dd;
/* 0x1000d8de */ LDATA extern char public_1000d8de;
/* 0x1000d8df */ LDATA extern char public_1000d8df;
/* 0x1000d8e0 */ LDATA extern char public_1000d8e0; // 'Q'
/* 0x1000d8e1 */ LDATA extern char public_1000d8e1;
/* 0x1000d8e2 */ LDATA extern char public_1000d8e2;
/* 0x1000d8e3 */ LDATA extern char public_1000d8e3;
/* 0x1000d8e4 */ LDATA extern char public_1000d8e4;
/* 0x1000d8e5 */ LDATA extern char public_1000d8e5;
/* 0x1000d8e6 */ LDATA extern char public_1000d8e6;
/* 0x1000d8e7 */ LDATA extern char public_1000d8e7;
/* 0x1000d8e8 */ LDATA extern char public_1000d8e8;
/* 0x1000d8e9 */ LDATA extern char public_1000d8e9;
/* 0x1000d8ea */ LDATA extern char public_1000d8ea;
/* 0x1000d8eb */ LDATA extern char public_1000d8eb;
/* 0x1000d8ec */ LDATA extern char public_1000d8ec; // 'h'
/* 0x1000d8ed */ LDATA extern char public_1000d8ed;
/* 0x1000d8ee */ LDATA extern char public_1000d8ee;
/* 0x1000d8ef */ LDATA extern char public_1000d8ef;
/* 0x1000d8f0 */ LDATA extern char public_1000d8f0;
/* 0x1000d8f1 */ LDATA extern char public_1000d8f1;
/* 0x1000d8f2 */ LDATA extern char public_1000d8f2;
/* 0x1000d8f3 */ LDATA extern char public_1000d8f3;
/* 0x1000d8f4 */ LDATA extern char public_1000d8f4; // '('
/* 0x1000d8f5 */ LDATA extern char public_1000d8f5;
/* 0x1000d8f6 */ LDATA extern char public_1000d8f6;
/* 0x1000d8f7 */ LDATA extern char public_1000d8f7;
/* 0x1000d8f8 */ LDATA extern char public_1000d8f8;
/* 0x1000d8f9 */ LDATA extern char public_1000d8f9;
/* 0x1000d8fa */ LDATA extern char public_1000d8fa;
/* 0x1000d8fb */ LDATA extern char public_1000d8fb;
/* 0x1000d8fc */ LDATA extern char public_1000d8fc;
/* 0x1000d8fd */ LDATA extern char public_1000d8fd;
/* 0x1000d8fe */ LDATA extern char public_1000d8fe;
/* 0x1000d8ff */ LDATA extern char public_1000d8ff;
/* 0x1000d900 */ LDATA extern char public_1000d900;
/* 0x1000d901 */ LDATA extern char public_1000d901;
/* 0x1000d902 */ LDATA extern char public_1000d902;
/* 0x1000d903 */ LDATA extern char public_1000d903;
/* 0x1000d904 */ LDATA extern char public_1000d904;
/* 0x1000d905 */ LDATA extern char public_1000d905;
/* 0x1000d906 */ LDATA extern char public_1000d906;
/* 0x1000d907 */ LDATA extern char public_1000d907;
/* 0x1000d908 */ LDATA extern char public_1000d908;
/* 0x1000d909 */ LDATA extern char public_1000d909;
/* 0x1000d90a */ LDATA extern char public_1000d90a;
/* 0x1000d90b */ LDATA extern char public_1000d90b;
/* 0x1000d90c */ LDATA extern char public_1000d90c;
/* 0x1000d90d */ LDATA extern char public_1000d90d;
/* 0x1000d90e */ LDATA extern char public_1000d90e;
/* 0x1000d90f */ LDATA extern char public_1000d90f;
/* 0x1000d910 */ LDATA extern char public_1000d910;
/* 0x1000d911 */ LDATA extern char public_1000d911;
/* 0x1000d912 */ LDATA extern char public_1000d912;
/* 0x1000d913 */ LDATA extern char public_1000d913;
/* 0x1000d914 */ LDATA extern char public_1000d914; // 'H'
/* 0x1000d915 */ LDATA extern char public_1000d915;
/* 0x1000d916 */ LDATA extern char public_1000d916;
/* 0x1000d917 */ LDATA extern char public_1000d917;
/* 0x1000d918 */ LDATA extern char public_1000d918;
/* 0x1000d919 */ LDATA extern char public_1000d919;
/* 0x1000d91a */ LDATA extern char public_1000d91a;
/* 0x1000d91b */ LDATA extern char public_1000d91b;
/* 0x1000d91c */ LDATA extern char public_1000d91c;
/* 0x1000d91d */ LDATA extern char public_1000d91d;
/* 0x1000d91e */ LDATA extern char public_1000d91e;
/* 0x1000d91f */ LDATA extern char public_1000d91f;
/* 0x1000d920 */ LDATA extern char public_1000d920; // 'P'
/* 0x1000d921 */ LDATA extern char public_1000d921;
/* 0x1000d922 */ LDATA extern char public_1000d922;
/* 0x1000d923 */ LDATA extern char public_1000d923;
/* 0x1000d924 */ LDATA extern char public_1000d924;
/* 0x1000d925 */ LDATA extern char public_1000d925;
/* 0x1000d926 */ LDATA extern char public_1000d926;
/* 0x1000d927 */ LDATA extern char public_1000d927;
/* 0x1000d928 */ LDATA extern char public_1000d928;
/* 0x1000d929 */ LDATA extern char public_1000d929;
/* 0x1000d92a */ LDATA extern char public_1000d92a;
/* 0x1000d92b */ LDATA extern char public_1000d92b;
/* 0x1000d92c */ LDATA extern char public_1000d92c; // 'T'
/* 0x1000d92d */ LDATA extern char public_1000d92d;
/* 0x1000d92e */ LDATA extern char public_1000d92e;
/* 0x1000d92f */ LDATA extern char public_1000d92f;
/* 0x1000d930 */ LDATA extern char public_1000d930;
/* 0x1000d931 */ LDATA extern char public_1000d931;
/* 0x1000d932 */ LDATA extern char public_1000d932;
/* 0x1000d933 */ LDATA extern char public_1000d933;
/* 0x1000d934 */ LDATA extern char public_1000d934;
/* 0x1000d935 */ LDATA extern char public_1000d935;
/* 0x1000d936 */ LDATA extern char public_1000d936;
/* 0x1000d937 */ LDATA extern char public_1000d937;
/* 0x1000d938 */ LDATA extern char public_1000d938; // 'U'
/* 0x1000d939 */ LDATA extern char public_1000d939;
/* 0x1000d93a */ LDATA extern char public_1000d93a;
/* 0x1000d93b */ LDATA extern char public_1000d93b;
/* 0x1000d93c */ LDATA extern char public_1000d93c;
/* 0x1000d93d */ LDATA extern char public_1000d93d;
/* 0x1000d93e */ LDATA extern char public_1000d93e;
/* 0x1000d93f */ LDATA extern char public_1000d93f;
/* 0x1000d940 */ LDATA extern char public_1000d940; // 'S'
/* 0x1000d941 */ LDATA extern char public_1000d941;
/* 0x1000d942 */ LDATA extern char public_1000d942;
/* 0x1000d943 */ LDATA extern char public_1000d943;
/* 0x1000d944 */ LDATA extern char public_1000d944; // '+'
/* 0x1000d945 */ LDATA extern char public_1000d945;
/* 0x1000d946 */ LDATA extern char public_1000d946;
/* 0x1000d947 */ LDATA extern char public_1000d947;
/* 0x1000d948 */ LDATA extern char public_1000d948;
/* 0x1000d949 */ LDATA extern char public_1000d949;
/* 0x1000d94a */ LDATA extern char public_1000d94a;
/* 0x1000d94b */ LDATA extern char public_1000d94b;
/* 0x1000d94c */ LDATA extern char public_1000d94c; // 't'
/* 0x1000d94d */ LDATA extern char public_1000d94d;
/* 0x1000d94e */ LDATA extern char public_1000d94e;
/* 0x1000d94f */ LDATA extern char public_1000d94f;
/* 0x1000d950 */ LDATA extern char public_1000d950;
/* 0x1000d951 */ LDATA extern char public_1000d951;
/* 0x1000d952 */ LDATA extern char public_1000d952;
/* 0x1000d953 */ LDATA extern char public_1000d953;
/* 0x1000d954 */ LDATA extern char public_1000d954; // '4'
/* 0x1000d955 */ LDATA extern char public_1000d955;
/* 0x1000d956 */ LDATA extern char public_1000d956;
/* 0x1000d957 */ LDATA extern char public_1000d957;
/* 0x1000d958 */ LDATA extern char public_1000d958;
/* 0x1000d959 */ LDATA extern char public_1000d959;
/* 0x1000d95a */ LDATA extern char public_1000d95a;
/* 0x1000d95b */ LDATA extern char public_1000d95b;
/* 0x1000d95c */ LDATA extern char public_1000d95c;
/* 0x1000d95d */ LDATA extern char public_1000d95d;
/* 0x1000d95e */ LDATA extern char public_1000d95e;
/* 0x1000d95f */ LDATA extern char public_1000d95f;
/* 0x1000d960 */ LDATA extern char public_1000d960; // 'Q'
/* 0x1000d961 */ LDATA extern char public_1000d961;
/* 0x1000d962 */ LDATA extern char public_1000d962;
/* 0x1000d963 */ LDATA extern char public_1000d963;
/* 0x1000d964 */ LDATA extern char public_1000d964;
/* 0x1000d965 */ LDATA extern char public_1000d965;
/* 0x1000d966 */ LDATA extern char public_1000d966;
/* 0x1000d967 */ LDATA extern char public_1000d967;
/* 0x1000d968 */ LDATA extern char public_1000d968;
/* 0x1000d969 */ LDATA extern char public_1000d969;
/* 0x1000d96a */ LDATA extern char public_1000d96a;
/* 0x1000d96b */ LDATA extern char public_1000d96b;
/* 0x1000d96c */ LDATA extern char public_1000d96c; // 'd'
/* 0x1000d96d */ LDATA extern char public_1000d96d;
/* 0x1000d96e */ LDATA extern char public_1000d96e;
/* 0x1000d96f */ LDATA extern char public_1000d96f;
/* 0x1000d970 */ LDATA extern char public_1000d970;
/* 0x1000d971 */ LDATA extern char public_1000d971;
/* 0x1000d972 */ LDATA extern char public_1000d972;
/* 0x1000d973 */ LDATA extern char public_1000d973;
/* 0x1000d974 */ LDATA extern char public_1000d974; // '$'
/* 0x1000d975 */ LDATA extern char public_1000d975;
/* 0x1000d976 */ LDATA extern char public_1000d976;
/* 0x1000d977 */ LDATA extern char public_1000d977;
/* 0x1000d978 */ LDATA extern char public_1000d978;
/* 0x1000d979 */ LDATA extern char public_1000d979;
/* 0x1000d97a */ LDATA extern char public_1000d97a;
/* 0x1000d97b */ LDATA extern char public_1000d97b;
/* 0x1000d97c */ LDATA extern char public_1000d97c;
/* 0x1000d97d */ LDATA extern char public_1000d97d;
/* 0x1000d97e */ LDATA extern char public_1000d97e;
/* 0x1000d97f */ LDATA extern char public_1000d97f;
/* 0x1000d980 */ LDATA extern char public_1000d980;
/* 0x1000d981 */ LDATA extern char public_1000d981;
/* 0x1000d982 */ LDATA extern char public_1000d982;
/* 0x1000d983 */ LDATA extern char public_1000d983;
/* 0x1000d984 */ LDATA extern char public_1000d984;
/* 0x1000d985 */ LDATA extern char public_1000d985;
/* 0x1000d986 */ LDATA extern char public_1000d986;
/* 0x1000d987 */ LDATA extern char public_1000d987;
/* 0x1000d988 */ LDATA extern char public_1000d988;
/* 0x1000d989 */ LDATA extern char public_1000d989;
/* 0x1000d98a */ LDATA extern char public_1000d98a;
/* 0x1000d98b */ LDATA extern char public_1000d98b;
/* 0x1000d98c */ LDATA extern char public_1000d98c;
/* 0x1000d98d */ LDATA extern char public_1000d98d;
/* 0x1000d98e */ LDATA extern char public_1000d98e;
/* 0x1000d98f */ LDATA extern char public_1000d98f;
/* 0x1000d990 */ LDATA extern char public_1000d990;
/* 0x1000d991 */ LDATA extern char public_1000d991;
/* 0x1000d992 */ LDATA extern char public_1000d992;
/* 0x1000d993 */ LDATA extern char public_1000d993;
/* 0x1000d994 */ LDATA extern char public_1000d994; // 'D'
/* 0x1000d995 */ LDATA extern char public_1000d995;
/* 0x1000d996 */ LDATA extern char public_1000d996;
/* 0x1000d997 */ LDATA extern char public_1000d997;
/* 0x1000d998 */ LDATA extern char public_1000d998;
/* 0x1000d999 */ LDATA extern char public_1000d999;
/* 0x1000d99a */ LDATA extern char public_1000d99a;
/* 0x1000d99b */ LDATA extern char public_1000d99b;
/* 0x1000d99c */ LDATA extern char public_1000d99c;
/* 0x1000d99d */ LDATA extern char public_1000d99d;
/* 0x1000d99e */ LDATA extern char public_1000d99e;
/* 0x1000d99f */ LDATA extern char public_1000d99f;
/* 0x1000d9a0 */ LDATA extern char public_1000d9a0; // 'P'
/* 0x1000d9a1 */ LDATA extern char public_1000d9a1;
/* 0x1000d9a2 */ LDATA extern char public_1000d9a2;
/* 0x1000d9a3 */ LDATA extern char public_1000d9a3;
/* 0x1000d9a4 */ LDATA extern char public_1000d9a4;
/* 0x1000d9a5 */ LDATA extern char public_1000d9a5;
/* 0x1000d9a6 */ LDATA extern char public_1000d9a6;
/* 0x1000d9a7 */ LDATA extern char public_1000d9a7;
/* 0x1000d9a8 */ LDATA extern char public_1000d9a8;
/* 0x1000d9a9 */ LDATA extern char public_1000d9a9;
/* 0x1000d9aa */ LDATA extern char public_1000d9aa;
/* 0x1000d9ab */ LDATA extern char public_1000d9ab;
/* 0x1000d9ac */ LDATA extern char public_1000d9ac; // '\'
/* 0x1000d9ad */ LDATA extern char public_1000d9ad;
/* 0x1000d9ae */ LDATA extern char public_1000d9ae;
/* 0x1000d9af */ LDATA extern char public_1000d9af;
/* 0x1000d9b0 */ LDATA extern char public_1000d9b0;
/* 0x1000d9b1 */ LDATA extern char public_1000d9b1;
/* 0x1000d9b2 */ LDATA extern char public_1000d9b2;
/* 0x1000d9b3 */ LDATA extern char public_1000d9b3;
/* 0x1000d9b4 */ LDATA extern char public_1000d9b4;
/* 0x1000d9b5 */ LDATA extern char public_1000d9b5;
/* 0x1000d9b6 */ LDATA extern char public_1000d9b6;
/* 0x1000d9b7 */ LDATA extern char public_1000d9b7;
/* 0x1000d9b8 */ LDATA extern char public_1000d9b8;
/* 0x1000d9b9 */ LDATA extern char public_1000d9b9;
/* 0x1000d9ba */ LDATA extern char public_1000d9ba;
/* 0x1000d9bb */ LDATA extern char public_1000d9bb;
/* 0x1000d9bc */ LDATA extern char public_1000d9bc;
/* 0x1000d9bd */ LDATA extern char public_1000d9bd;
/* 0x1000d9be */ LDATA extern char public_1000d9be;
/* 0x1000d9bf */ LDATA extern char public_1000d9bf;
/* 0x1000d9c0 */ LDATA extern char public_1000d9c0; // 'T'
/* 0x1000d9c1 */ LDATA extern char public_1000d9c1;
/* 0x1000d9c2 */ LDATA extern char public_1000d9c2;
/* 0x1000d9c3 */ LDATA extern char public_1000d9c3;
/* 0x1000d9c4 */ LDATA extern char public_1000d9c4; // 'S'
/* 0x1000d9c5 */ LDATA extern char public_1000d9c5;
/* 0x1000d9c6 */ LDATA extern char public_1000d9c6;
/* 0x1000d9c7 */ LDATA extern char public_1000d9c7;
/* 0x1000d9c8 */ LDATA extern char public_1000d9c8;
/* 0x1000d9c9 */ LDATA extern char public_1000d9c9;
/* 0x1000d9ca */ LDATA extern char public_1000d9ca;
/* 0x1000d9cb */ LDATA extern char public_1000d9cb;
/* 0x1000d9cc */ LDATA extern char public_1000d9cc; // '|'
/* 0x1000d9cd */ LDATA extern char public_1000d9cd;
/* 0x1000d9ce */ LDATA extern char public_1000d9ce;
/* 0x1000d9cf */ LDATA extern char public_1000d9cf;
/* 0x1000d9d0 */ LDATA extern char public_1000d9d0;
/* 0x1000d9d1 */ LDATA extern char public_1000d9d1;
/* 0x1000d9d2 */ LDATA extern char public_1000d9d2;
/* 0x1000d9d3 */ LDATA extern char public_1000d9d3;
/* 0x1000d9d4 */ LDATA extern char public_1000d9d4; // '<'
/* 0x1000d9d5 */ LDATA extern char public_1000d9d5;
/* 0x1000d9d6 */ LDATA extern char public_1000d9d6;
/* 0x1000d9d7 */ LDATA extern char public_1000d9d7;
/* 0x1000d9d8 */ LDATA extern char public_1000d9d8;
/* 0x1000d9d9 */ LDATA extern char public_1000d9d9;
/* 0x1000d9da */ LDATA extern char public_1000d9da;
/* 0x1000d9db */ LDATA extern char public_1000d9db;
/* 0x1000d9dc */ LDATA extern char public_1000d9dc;
/* 0x1000d9dd */ LDATA extern char public_1000d9dd;
/* 0x1000d9de */ LDATA extern char public_1000d9de;
/* 0x1000d9df */ LDATA extern char public_1000d9df;
/* 0x1000d9e0 */ LDATA extern char public_1000d9e0; // 'R'
/* 0x1000d9e1 */ LDATA extern char public_1000d9e1;
/* 0x1000d9e2 */ LDATA extern char public_1000d9e2;
/* 0x1000d9e3 */ LDATA extern char public_1000d9e3;
/* 0x1000d9e4 */ LDATA extern char public_1000d9e4;
/* 0x1000d9e5 */ LDATA extern char public_1000d9e5;
/* 0x1000d9e6 */ LDATA extern char public_1000d9e6;
/* 0x1000d9e7 */ LDATA extern char public_1000d9e7;
/* 0x1000d9e8 */ LDATA extern char public_1000d9e8;
/* 0x1000d9e9 */ LDATA extern char public_1000d9e9;
/* 0x1000d9ea */ LDATA extern char public_1000d9ea;
/* 0x1000d9eb */ LDATA extern char public_1000d9eb;
/* 0x1000d9ec */ LDATA extern char public_1000d9ec; // 'l'
/* 0x1000d9ed */ LDATA extern char public_1000d9ed;
/* 0x1000d9ee */ LDATA extern char public_1000d9ee;
/* 0x1000d9ef */ LDATA extern char public_1000d9ef;
/* 0x1000d9f0 */ LDATA extern char public_1000d9f0;
/* 0x1000d9f1 */ LDATA extern char public_1000d9f1;
/* 0x1000d9f2 */ LDATA extern char public_1000d9f2;
/* 0x1000d9f3 */ LDATA extern char public_1000d9f3;
/* 0x1000d9f4 */ LDATA extern char public_1000d9f4; // ','
/* 0x1000d9f5 */ LDATA extern char public_1000d9f5;
/* 0x1000d9f6 */ LDATA extern char public_1000d9f6;
/* 0x1000d9f7 */ LDATA extern char public_1000d9f7;
/* 0x1000d9f8 */ LDATA extern char public_1000d9f8;
/* 0x1000d9f9 */ LDATA extern char public_1000d9f9;
/* 0x1000d9fa */ LDATA extern char public_1000d9fa;
/* 0x1000d9fb */ LDATA extern char public_1000d9fb;
/* 0x1000d9fc */ LDATA extern char public_1000d9fc;
/* 0x1000d9fd */ LDATA extern char public_1000d9fd;
/* 0x1000d9fe */ LDATA extern char public_1000d9fe;
/* 0x1000d9ff */ LDATA extern char public_1000d9ff;
/* 0x1000da00 */ LDATA extern char public_1000da00;
/* 0x1000da01 */ LDATA extern char public_1000da01;
/* 0x1000da02 */ LDATA extern char public_1000da02;
/* 0x1000da03 */ LDATA extern char public_1000da03;
/* 0x1000da04 */ LDATA extern char public_1000da04;
/* 0x1000da05 */ LDATA extern char public_1000da05;
/* 0x1000da06 */ LDATA extern char public_1000da06;
/* 0x1000da07 */ LDATA extern char public_1000da07;
/* 0x1000da08 */ LDATA extern char public_1000da08;
/* 0x1000da09 */ LDATA extern char public_1000da09;
/* 0x1000da0a */ LDATA extern char public_1000da0a;
/* 0x1000da0b */ LDATA extern char public_1000da0b;
/* 0x1000da0c */ LDATA extern char public_1000da0c;
/* 0x1000da0d */ LDATA extern char public_1000da0d;
/* 0x1000da0e */ LDATA extern char public_1000da0e;
/* 0x1000da0f */ LDATA extern char public_1000da0f;
/* 0x1000da10 */ LDATA extern char public_1000da10;
/* 0x1000da11 */ LDATA extern char public_1000da11;
/* 0x1000da12 */ LDATA extern char public_1000da12;
/* 0x1000da13 */ LDATA extern char public_1000da13;
/* 0x1000da14 */ LDATA extern char public_1000da14; // 'L'
/* 0x1000da15 */ LDATA extern char public_1000da15;
/* 0x1000da16 */ LDATA extern char public_1000da16;
/* 0x1000da17 */ LDATA extern char public_1000da17;
/* 0x1000da18 */ LDATA extern char public_1000da18;
/* 0x1000da19 */ LDATA extern char public_1000da19;
/* 0x1000da1a */ LDATA extern char public_1000da1a;
/* 0x1000da1b */ LDATA extern char public_1000da1b;
/* 0x1000da1c */ LDATA extern char public_1000da1c;
/* 0x1000da1d */ LDATA extern char public_1000da1d;
/* 0x1000da1e */ LDATA extern char public_1000da1e;
/* 0x1000da1f */ LDATA extern char public_1000da1f;
/* 0x1000da20 */ LDATA extern char public_1000da20; // 'P'
/* 0x1000da21 */ LDATA extern char public_1000da21;
/* 0x1000da22 */ LDATA extern char public_1000da22;
/* 0x1000da23 */ LDATA extern char public_1000da23;
/* 0x1000da24 */ LDATA extern char public_1000da24;
/* 0x1000da25 */ LDATA extern char public_1000da25;
/* 0x1000da26 */ LDATA extern char public_1000da26;
/* 0x1000da27 */ LDATA extern char public_1000da27;
/* 0x1000da28 */ LDATA extern char public_1000da28;
/* 0x1000da29 */ LDATA extern char public_1000da29;
/* 0x1000da2a */ LDATA extern char public_1000da2a;
/* 0x1000da2b */ LDATA extern char public_1000da2b;
/* 0x1000da2c */ LDATA extern char public_1000da2c; // 'R'
/* 0x1000da2d */ LDATA extern char public_1000da2d;
/* 0x1000da2e */ LDATA extern char public_1000da2e;
/* 0x1000da2f */ LDATA extern char public_1000da2f;
/* 0x1000da30 */ LDATA extern char public_1000da30;
/* 0x1000da31 */ LDATA extern char public_1000da31;
/* 0x1000da32 */ LDATA extern char public_1000da32;
/* 0x1000da33 */ LDATA extern char public_1000da33;
/* 0x1000da34 */ LDATA extern char public_1000da34;
/* 0x1000da35 */ LDATA extern char public_1000da35;
/* 0x1000da36 */ LDATA extern char public_1000da36;
/* 0x1000da37 */ LDATA extern char public_1000da37;
/* 0x1000da38 */ LDATA extern char public_1000da38; // 'U'
/* 0x1000da39 */ LDATA extern char public_1000da39;
/* 0x1000da3a */ LDATA extern char public_1000da3a;
/* 0x1000da3b */ LDATA extern char public_1000da3b;
/* 0x1000da3c */ LDATA extern char public_1000da3c;
/* 0x1000da3d */ LDATA extern char public_1000da3d;
/* 0x1000da3e */ LDATA extern char public_1000da3e;
/* 0x1000da3f */ LDATA extern char public_1000da3f;
/* 0x1000da40 */ LDATA extern char public_1000da40; // 'S'
/* 0x1000da41 */ LDATA extern char public_1000da41;
/* 0x1000da42 */ LDATA extern char public_1000da42;
/* 0x1000da43 */ LDATA extern char public_1000da43;
/* 0x1000da44 */ LDATA extern char public_1000da44; // '#'
/* 0x1000da45 */ LDATA extern char public_1000da45;
/* 0x1000da46 */ LDATA extern char public_1000da46;
/* 0x1000da47 */ LDATA extern char public_1000da47;
/* 0x1000da48 */ LDATA extern char public_1000da48;
/* 0x1000da49 */ LDATA extern char public_1000da49;
/* 0x1000da4a */ LDATA extern char public_1000da4a;
/* 0x1000da4b */ LDATA extern char public_1000da4b;
/* 0x1000da4c */ LDATA extern char public_1000da4c; // 'r'
/* 0x1000da4d */ LDATA extern char public_1000da4d;
/* 0x1000da4e */ LDATA extern char public_1000da4e;
/* 0x1000da4f */ LDATA extern char public_1000da4f;
/* 0x1000da50 */ LDATA extern char public_1000da50;
/* 0x1000da51 */ LDATA extern char public_1000da51;
/* 0x1000da52 */ LDATA extern char public_1000da52;
/* 0x1000da53 */ LDATA extern char public_1000da53;
/* 0x1000da54 */ LDATA extern char public_1000da54; // '2'
/* 0x1000da55 */ LDATA extern char public_1000da55;
/* 0x1000da56 */ LDATA extern char public_1000da56;
/* 0x1000da57 */ LDATA extern char public_1000da57;
/* 0x1000da58 */ LDATA extern char public_1000da58;
/* 0x1000da59 */ LDATA extern char public_1000da59;
/* 0x1000da5a */ LDATA extern char public_1000da5a;
/* 0x1000da5b */ LDATA extern char public_1000da5b;
/* 0x1000da5c */ LDATA extern char public_1000da5c;
/* 0x1000da5d */ LDATA extern char public_1000da5d;
/* 0x1000da5e */ LDATA extern char public_1000da5e;
/* 0x1000da5f */ LDATA extern char public_1000da5f;
/* 0x1000da60 */ LDATA extern char public_1000da60; // 'Q'
/* 0x1000da61 */ LDATA extern char public_1000da61;
/* 0x1000da62 */ LDATA extern char public_1000da62;
/* 0x1000da63 */ LDATA extern char public_1000da63;
/* 0x1000da64 */ LDATA extern char public_1000da64;
/* 0x1000da65 */ LDATA extern char public_1000da65;
/* 0x1000da66 */ LDATA extern char public_1000da66;
/* 0x1000da67 */ LDATA extern char public_1000da67;
/* 0x1000da68 */ LDATA extern char public_1000da68;
/* 0x1000da69 */ LDATA extern char public_1000da69;
/* 0x1000da6a */ LDATA extern char public_1000da6a;
/* 0x1000da6b */ LDATA extern char public_1000da6b;
/* 0x1000da6c */ LDATA extern char public_1000da6c; // 'b'
/* 0x1000da6d */ LDATA extern char public_1000da6d;
/* 0x1000da6e */ LDATA extern char public_1000da6e;
/* 0x1000da6f */ LDATA extern char public_1000da6f;
/* 0x1000da70 */ LDATA extern char public_1000da70;
/* 0x1000da71 */ LDATA extern char public_1000da71;
/* 0x1000da72 */ LDATA extern char public_1000da72;
/* 0x1000da73 */ LDATA extern char public_1000da73;
/* 0x1000da74 */ LDATA extern char public_1000da74; // '"'
/* 0x1000da75 */ LDATA extern char public_1000da75;
/* 0x1000da76 */ LDATA extern char public_1000da76;
/* 0x1000da77 */ LDATA extern char public_1000da77;
/* 0x1000da78 */ LDATA extern char public_1000da78;
/* 0x1000da79 */ LDATA extern char public_1000da79;
/* 0x1000da7a */ LDATA extern char public_1000da7a;
/* 0x1000da7b */ LDATA extern char public_1000da7b;
/* 0x1000da7c */ LDATA extern char public_1000da7c;
/* 0x1000da7d */ LDATA extern char public_1000da7d;
/* 0x1000da7e */ LDATA extern char public_1000da7e;
/* 0x1000da7f */ LDATA extern char public_1000da7f;
/* 0x1000da80 */ LDATA extern char public_1000da80;
/* 0x1000da81 */ LDATA extern char public_1000da81;
/* 0x1000da82 */ LDATA extern char public_1000da82;
/* 0x1000da83 */ LDATA extern char public_1000da83;
/* 0x1000da84 */ LDATA extern char public_1000da84;
/* 0x1000da85 */ LDATA extern char public_1000da85;
/* 0x1000da86 */ LDATA extern char public_1000da86;
/* 0x1000da87 */ LDATA extern char public_1000da87;
/* 0x1000da88 */ LDATA extern char public_1000da88;
/* 0x1000da89 */ LDATA extern char public_1000da89;
/* 0x1000da8a */ LDATA extern char public_1000da8a;
/* 0x1000da8b */ LDATA extern char public_1000da8b;
/* 0x1000da8c */ LDATA extern char public_1000da8c;
/* 0x1000da8d */ LDATA extern char public_1000da8d;
/* 0x1000da8e */ LDATA extern char public_1000da8e;
/* 0x1000da8f */ LDATA extern char public_1000da8f;
/* 0x1000da90 */ LDATA extern char public_1000da90;
/* 0x1000da91 */ LDATA extern char public_1000da91;
/* 0x1000da92 */ LDATA extern char public_1000da92;
/* 0x1000da93 */ LDATA extern char public_1000da93;
/* 0x1000da94 */ LDATA extern char public_1000da94; // 'B'
/* 0x1000da95 */ LDATA extern char public_1000da95;
/* 0x1000da96 */ LDATA extern char public_1000da96;
/* 0x1000da97 */ LDATA extern char public_1000da97;
/* 0x1000da98 */ LDATA extern char public_1000da98;
/* 0x1000da99 */ LDATA extern char public_1000da99;
/* 0x1000da9a */ LDATA extern char public_1000da9a;
/* 0x1000da9b */ LDATA extern char public_1000da9b;
/* 0x1000da9c */ LDATA extern char public_1000da9c;
/* 0x1000da9d */ LDATA extern char public_1000da9d;
/* 0x1000da9e */ LDATA extern char public_1000da9e;
/* 0x1000da9f */ LDATA extern char public_1000da9f;
/* 0x1000daa0 */ LDATA extern char public_1000daa0; // 'P'
/* 0x1000daa1 */ LDATA extern char public_1000daa1;
/* 0x1000daa2 */ LDATA extern char public_1000daa2;
/* 0x1000daa3 */ LDATA extern char public_1000daa3;
/* 0x1000daa4 */ LDATA extern char public_1000daa4;
/* 0x1000daa5 */ LDATA extern char public_1000daa5;
/* 0x1000daa6 */ LDATA extern char public_1000daa6;
/* 0x1000daa7 */ LDATA extern char public_1000daa7;
/* 0x1000daa8 */ LDATA extern char public_1000daa8;
/* 0x1000daa9 */ LDATA extern char public_1000daa9;
/* 0x1000daaa */ LDATA extern char public_1000daaa;
/* 0x1000daab */ LDATA extern char public_1000daab;
/* 0x1000daac */ LDATA extern char public_1000daac; // 'Z'
/* 0x1000daad */ LDATA extern char public_1000daad;
/* 0x1000daae */ LDATA extern char public_1000daae;
/* 0x1000daaf */ LDATA extern char public_1000daaf;
/* 0x1000dab0 */ LDATA extern char public_1000dab0;
/* 0x1000dab1 */ LDATA extern char public_1000dab1;
/* 0x1000dab2 */ LDATA extern char public_1000dab2;
/* 0x1000dab3 */ LDATA extern char public_1000dab3;
/* 0x1000dab4 */ LDATA extern char public_1000dab4;
/* 0x1000dab5 */ LDATA extern char public_1000dab5;
/* 0x1000dab6 */ LDATA extern char public_1000dab6;
/* 0x1000dab7 */ LDATA extern char public_1000dab7;
/* 0x1000dab8 */ LDATA extern char public_1000dab8;
/* 0x1000dab9 */ LDATA extern char public_1000dab9;
/* 0x1000daba */ LDATA extern char public_1000daba;
/* 0x1000dabb */ LDATA extern char public_1000dabb;
/* 0x1000dabc */ LDATA extern char public_1000dabc;
/* 0x1000dabd */ LDATA extern char public_1000dabd;
/* 0x1000dabe */ LDATA extern char public_1000dabe;
/* 0x1000dabf */ LDATA extern char public_1000dabf;
/* 0x1000dac0 */ LDATA extern char public_1000dac0; // 'T'
/* 0x1000dac1 */ LDATA extern char public_1000dac1;
/* 0x1000dac2 */ LDATA extern char public_1000dac2;
/* 0x1000dac3 */ LDATA extern char public_1000dac3;
/* 0x1000dac4 */ LDATA extern char public_1000dac4; // 'C'
/* 0x1000dac5 */ LDATA extern char public_1000dac5;
/* 0x1000dac6 */ LDATA extern char public_1000dac6;
/* 0x1000dac7 */ LDATA extern char public_1000dac7;
/* 0x1000dac8 */ LDATA extern char public_1000dac8;
/* 0x1000dac9 */ LDATA extern char public_1000dac9;
/* 0x1000daca */ LDATA extern char public_1000daca;
/* 0x1000dacb */ LDATA extern char public_1000dacb;
/* 0x1000dacc */ LDATA extern char public_1000dacc; // 'z'
/* 0x1000dacd */ LDATA extern char public_1000dacd;
/* 0x1000dace */ LDATA extern char public_1000dace;
/* 0x1000dacf */ LDATA extern char public_1000dacf;
/* 0x1000dad0 */ LDATA extern char public_1000dad0;
/* 0x1000dad1 */ LDATA extern char public_1000dad1;
/* 0x1000dad2 */ LDATA extern char public_1000dad2;
/* 0x1000dad3 */ LDATA extern char public_1000dad3;
/* 0x1000dad4 */ LDATA extern char public_1000dad4; // ':'
/* 0x1000dad5 */ LDATA extern char public_1000dad5;
/* 0x1000dad6 */ LDATA extern char public_1000dad6;
/* 0x1000dad7 */ LDATA extern char public_1000dad7;
/* 0x1000dad8 */ LDATA extern char public_1000dad8;
/* 0x1000dad9 */ LDATA extern char public_1000dad9;
/* 0x1000dada */ LDATA extern char public_1000dada;
/* 0x1000dadb */ LDATA extern char public_1000dadb;
/* 0x1000dadc */ LDATA extern char public_1000dadc;
/* 0x1000dadd */ LDATA extern char public_1000dadd;
/* 0x1000dade */ LDATA extern char public_1000dade;
/* 0x1000dadf */ LDATA extern char public_1000dadf;
/* 0x1000dae0 */ LDATA extern char public_1000dae0; // 'R'
/* 0x1000dae1 */ LDATA extern char public_1000dae1;
/* 0x1000dae2 */ LDATA extern char public_1000dae2;
/* 0x1000dae3 */ LDATA extern char public_1000dae3;
/* 0x1000dae4 */ LDATA extern char public_1000dae4;
/* 0x1000dae5 */ LDATA extern char public_1000dae5;
/* 0x1000dae6 */ LDATA extern char public_1000dae6;
/* 0x1000dae7 */ LDATA extern char public_1000dae7;
/* 0x1000dae8 */ LDATA extern char public_1000dae8;
/* 0x1000dae9 */ LDATA extern char public_1000dae9;
/* 0x1000daea */ LDATA extern char public_1000daea;
/* 0x1000daeb */ LDATA extern char public_1000daeb;
/* 0x1000daec */ LDATA extern char public_1000daec; // 'j'
/* 0x1000daed */ LDATA extern char public_1000daed;
/* 0x1000daee */ LDATA extern char public_1000daee;
/* 0x1000daef */ LDATA extern char public_1000daef;
/* 0x1000daf0 */ LDATA extern char public_1000daf0;
/* 0x1000daf1 */ LDATA extern char public_1000daf1;
/* 0x1000daf2 */ LDATA extern char public_1000daf2;
/* 0x1000daf3 */ LDATA extern char public_1000daf3;
/* 0x1000daf4 */ LDATA extern char public_1000daf4; // '*'
/* 0x1000daf5 */ LDATA extern char public_1000daf5;
/* 0x1000daf6 */ LDATA extern char public_1000daf6;
/* 0x1000daf7 */ LDATA extern char public_1000daf7;
/* 0x1000daf8 */ LDATA extern char public_1000daf8;
/* 0x1000daf9 */ LDATA extern char public_1000daf9;
/* 0x1000dafa */ LDATA extern char public_1000dafa;
/* 0x1000dafb */ LDATA extern char public_1000dafb;
/* 0x1000dafc */ LDATA extern char public_1000dafc;
/* 0x1000dafd */ LDATA extern char public_1000dafd;
/* 0x1000dafe */ LDATA extern char public_1000dafe;
/* 0x1000daff */ LDATA extern char public_1000daff;
/* 0x1000db00 */ LDATA extern char public_1000db00;
/* 0x1000db01 */ LDATA extern char public_1000db01;
/* 0x1000db02 */ LDATA extern char public_1000db02;
/* 0x1000db03 */ LDATA extern char public_1000db03;
/* 0x1000db04 */ LDATA extern char public_1000db04;
/* 0x1000db05 */ LDATA extern char public_1000db05;
/* 0x1000db06 */ LDATA extern char public_1000db06;
/* 0x1000db07 */ LDATA extern char public_1000db07;
/* 0x1000db08 */ LDATA extern char public_1000db08;
/* 0x1000db09 */ LDATA extern char public_1000db09;
/* 0x1000db0a */ LDATA extern char public_1000db0a;
/* 0x1000db0b */ LDATA extern char public_1000db0b;
/* 0x1000db0c */ LDATA extern char public_1000db0c;
/* 0x1000db0d */ LDATA extern char public_1000db0d;
/* 0x1000db0e */ LDATA extern char public_1000db0e;
/* 0x1000db0f */ LDATA extern char public_1000db0f;
/* 0x1000db10 */ LDATA extern char public_1000db10;
/* 0x1000db11 */ LDATA extern char public_1000db11;
/* 0x1000db12 */ LDATA extern char public_1000db12;
/* 0x1000db13 */ LDATA extern char public_1000db13;
/* 0x1000db14 */ LDATA extern char public_1000db14; // 'J'
/* 0x1000db15 */ LDATA extern char public_1000db15;
/* 0x1000db16 */ LDATA extern char public_1000db16;
/* 0x1000db17 */ LDATA extern char public_1000db17;
/* 0x1000db18 */ LDATA extern char public_1000db18;
/* 0x1000db19 */ LDATA extern char public_1000db19;
/* 0x1000db1a */ LDATA extern char public_1000db1a;
/* 0x1000db1b */ LDATA extern char public_1000db1b;
/* 0x1000db1c */ LDATA extern char public_1000db1c;
/* 0x1000db1d */ LDATA extern char public_1000db1d;
/* 0x1000db1e */ LDATA extern char public_1000db1e;
/* 0x1000db1f */ LDATA extern char public_1000db1f;
/* 0x1000db20 */ LDATA extern char public_1000db20; // 'P'
/* 0x1000db21 */ LDATA extern char public_1000db21;
/* 0x1000db22 */ LDATA extern char public_1000db22;
/* 0x1000db23 */ LDATA extern char public_1000db23;
/* 0x1000db24 */ LDATA extern char public_1000db24;
/* 0x1000db25 */ LDATA extern char public_1000db25;
/* 0x1000db26 */ LDATA extern char public_1000db26;
/* 0x1000db27 */ LDATA extern char public_1000db27;
/* 0x1000db28 */ LDATA extern char public_1000db28;
/* 0x1000db29 */ LDATA extern char public_1000db29;
/* 0x1000db2a */ LDATA extern char public_1000db2a;
/* 0x1000db2b */ LDATA extern char public_1000db2b;
/* 0x1000db2c */ LDATA extern char public_1000db2c; // 'V'
/* 0x1000db2d */ LDATA extern char public_1000db2d;
/* 0x1000db2e */ LDATA extern char public_1000db2e;
/* 0x1000db2f */ LDATA extern char public_1000db2f;
/* 0x1000db30 */ LDATA extern char public_1000db30;
/* 0x1000db31 */ LDATA extern char public_1000db31;
/* 0x1000db32 */ LDATA extern char public_1000db32;
/* 0x1000db33 */ LDATA extern char public_1000db33;
/* 0x1000db34 */ LDATA extern char public_1000db34;
/* 0x1000db35 */ LDATA extern char public_1000db35;
/* 0x1000db36 */ LDATA extern char public_1000db36;
/* 0x1000db37 */ LDATA extern char public_1000db37;
/* 0x1000db38 */ LDATA extern char public_1000db38;
/* 0x1000db39 */ LDATA extern char public_1000db39;
/* 0x1000db3a */ LDATA extern char public_1000db3a;
/* 0x1000db3b */ LDATA extern char public_1000db3b;
/* 0x1000db3c */ LDATA extern char public_1000db3c;
/* 0x1000db3d */ LDATA extern char public_1000db3d;
/* 0x1000db3e */ LDATA extern char public_1000db3e;
/* 0x1000db3f */ LDATA extern char public_1000db3f;
/* 0x1000db40 */ LDATA extern char public_1000db40; // 'S'
/* 0x1000db41 */ LDATA extern char public_1000db41;
/* 0x1000db42 */ LDATA extern char public_1000db42;
/* 0x1000db43 */ LDATA extern char public_1000db43;
/* 0x1000db44 */ LDATA extern char public_1000db44; // '3'
/* 0x1000db45 */ LDATA extern char public_1000db45;
/* 0x1000db46 */ LDATA extern char public_1000db46;
/* 0x1000db47 */ LDATA extern char public_1000db47;
/* 0x1000db48 */ LDATA extern char public_1000db48;
/* 0x1000db49 */ LDATA extern char public_1000db49;
/* 0x1000db4a */ LDATA extern char public_1000db4a;
/* 0x1000db4b */ LDATA extern char public_1000db4b;
/* 0x1000db4c */ LDATA extern char public_1000db4c; // 'v'
/* 0x1000db4d */ LDATA extern char public_1000db4d;
/* 0x1000db4e */ LDATA extern char public_1000db4e;
/* 0x1000db4f */ LDATA extern char public_1000db4f;
/* 0x1000db50 */ LDATA extern char public_1000db50;
/* 0x1000db51 */ LDATA extern char public_1000db51;
/* 0x1000db52 */ LDATA extern char public_1000db52;
/* 0x1000db53 */ LDATA extern char public_1000db53;
/* 0x1000db54 */ LDATA extern char public_1000db54; // '6'
/* 0x1000db55 */ LDATA extern char public_1000db55;
/* 0x1000db56 */ LDATA extern char public_1000db56;
/* 0x1000db57 */ LDATA extern char public_1000db57;
/* 0x1000db58 */ LDATA extern char public_1000db58;
/* 0x1000db59 */ LDATA extern char public_1000db59;
/* 0x1000db5a */ LDATA extern char public_1000db5a;
/* 0x1000db5b */ LDATA extern char public_1000db5b;
/* 0x1000db5c */ LDATA extern char public_1000db5c;
/* 0x1000db5d */ LDATA extern char public_1000db5d;
/* 0x1000db5e */ LDATA extern char public_1000db5e;
/* 0x1000db5f */ LDATA extern char public_1000db5f;
/* 0x1000db60 */ LDATA extern char public_1000db60; // 'Q'
/* 0x1000db61 */ LDATA extern char public_1000db61;
/* 0x1000db62 */ LDATA extern char public_1000db62;
/* 0x1000db63 */ LDATA extern char public_1000db63;
/* 0x1000db64 */ LDATA extern char public_1000db64;
/* 0x1000db65 */ LDATA extern char public_1000db65;
/* 0x1000db66 */ LDATA extern char public_1000db66;
/* 0x1000db67 */ LDATA extern char public_1000db67;
/* 0x1000db68 */ LDATA extern char public_1000db68;
/* 0x1000db69 */ LDATA extern char public_1000db69;
/* 0x1000db6a */ LDATA extern char public_1000db6a;
/* 0x1000db6b */ LDATA extern char public_1000db6b;
/* 0x1000db6c */ LDATA extern char public_1000db6c; // 'f'
/* 0x1000db6d */ LDATA extern char public_1000db6d;
/* 0x1000db6e */ LDATA extern char public_1000db6e;
/* 0x1000db6f */ LDATA extern char public_1000db6f;
/* 0x1000db70 */ LDATA extern char public_1000db70;
/* 0x1000db71 */ LDATA extern char public_1000db71;
/* 0x1000db72 */ LDATA extern char public_1000db72;
/* 0x1000db73 */ LDATA extern char public_1000db73;
/* 0x1000db74 */ LDATA extern char public_1000db74; // '&'
/* 0x1000db75 */ LDATA extern char public_1000db75;
/* 0x1000db76 */ LDATA extern char public_1000db76;
/* 0x1000db77 */ LDATA extern char public_1000db77;
/* 0x1000db78 */ LDATA extern char public_1000db78;
/* 0x1000db79 */ LDATA extern char public_1000db79;
/* 0x1000db7a */ LDATA extern char public_1000db7a;
/* 0x1000db7b */ LDATA extern char public_1000db7b;
/* 0x1000db7c */ LDATA extern char public_1000db7c;
/* 0x1000db7d */ LDATA extern char public_1000db7d;
/* 0x1000db7e */ LDATA extern char public_1000db7e;
/* 0x1000db7f */ LDATA extern char public_1000db7f;
/* 0x1000db80 */ LDATA extern char public_1000db80;
/* 0x1000db81 */ LDATA extern char public_1000db81;
/* 0x1000db82 */ LDATA extern char public_1000db82;
/* 0x1000db83 */ LDATA extern char public_1000db83;
/* 0x1000db84 */ LDATA extern char public_1000db84;
/* 0x1000db85 */ LDATA extern char public_1000db85;
/* 0x1000db86 */ LDATA extern char public_1000db86;
/* 0x1000db87 */ LDATA extern char public_1000db87;
/* 0x1000db88 */ LDATA extern char public_1000db88;
/* 0x1000db89 */ LDATA extern char public_1000db89;
/* 0x1000db8a */ LDATA extern char public_1000db8a;
/* 0x1000db8b */ LDATA extern char public_1000db8b;
/* 0x1000db8c */ LDATA extern char public_1000db8c;
/* 0x1000db8d */ LDATA extern char public_1000db8d;
/* 0x1000db8e */ LDATA extern char public_1000db8e;
/* 0x1000db8f */ LDATA extern char public_1000db8f;
/* 0x1000db90 */ LDATA extern char public_1000db90;
/* 0x1000db91 */ LDATA extern char public_1000db91;
/* 0x1000db92 */ LDATA extern char public_1000db92;
/* 0x1000db93 */ LDATA extern char public_1000db93;
/* 0x1000db94 */ LDATA extern char public_1000db94; // 'F'
/* 0x1000db95 */ LDATA extern char public_1000db95;
/* 0x1000db96 */ LDATA extern char public_1000db96;
/* 0x1000db97 */ LDATA extern char public_1000db97;
/* 0x1000db98 */ LDATA extern char public_1000db98;
/* 0x1000db99 */ LDATA extern char public_1000db99;
/* 0x1000db9a */ LDATA extern char public_1000db9a;
/* 0x1000db9b */ LDATA extern char public_1000db9b;
/* 0x1000db9c */ LDATA extern char public_1000db9c;
/* 0x1000db9d */ LDATA extern char public_1000db9d;
/* 0x1000db9e */ LDATA extern char public_1000db9e;
/* 0x1000db9f */ LDATA extern char public_1000db9f;
/* 0x1000dba0 */ LDATA extern char public_1000dba0; // 'P'
/* 0x1000dba1 */ LDATA extern char public_1000dba1;
/* 0x1000dba2 */ LDATA extern char public_1000dba2;
/* 0x1000dba3 */ LDATA extern char public_1000dba3;
/* 0x1000dba4 */ LDATA extern char public_1000dba4;
/* 0x1000dba5 */ LDATA extern char public_1000dba5;
/* 0x1000dba6 */ LDATA extern char public_1000dba6;
/* 0x1000dba7 */ LDATA extern char public_1000dba7;
/* 0x1000dba8 */ LDATA extern char public_1000dba8;
/* 0x1000dba9 */ LDATA extern char public_1000dba9;
/* 0x1000dbaa */ LDATA extern char public_1000dbaa;
/* 0x1000dbab */ LDATA extern char public_1000dbab;
/* 0x1000dbac */ LDATA extern char public_1000dbac; // '^'
/* 0x1000dbad */ LDATA extern char public_1000dbad;
/* 0x1000dbae */ LDATA extern char public_1000dbae;
/* 0x1000dbaf */ LDATA extern char public_1000dbaf;
/* 0x1000dbb0 */ LDATA extern char public_1000dbb0;
/* 0x1000dbb1 */ LDATA extern char public_1000dbb1;
/* 0x1000dbb2 */ LDATA extern char public_1000dbb2;
/* 0x1000dbb3 */ LDATA extern char public_1000dbb3;
/* 0x1000dbb4 */ LDATA extern char public_1000dbb4;
/* 0x1000dbb5 */ LDATA extern char public_1000dbb5;
/* 0x1000dbb6 */ LDATA extern char public_1000dbb6;
/* 0x1000dbb7 */ LDATA extern char public_1000dbb7;
/* 0x1000dbb8 */ LDATA extern char public_1000dbb8;
/* 0x1000dbb9 */ LDATA extern char public_1000dbb9;
/* 0x1000dbba */ LDATA extern char public_1000dbba;
/* 0x1000dbbb */ LDATA extern char public_1000dbbb;
/* 0x1000dbbc */ LDATA extern char public_1000dbbc;
/* 0x1000dbbd */ LDATA extern char public_1000dbbd;
/* 0x1000dbbe */ LDATA extern char public_1000dbbe;
/* 0x1000dbbf */ LDATA extern char public_1000dbbf;
/* 0x1000dbc0 */ LDATA extern char public_1000dbc0; // 'T'
/* 0x1000dbc1 */ LDATA extern char public_1000dbc1;
/* 0x1000dbc2 */ LDATA extern char public_1000dbc2;
/* 0x1000dbc3 */ LDATA extern char public_1000dbc3;
/* 0x1000dbc4 */ LDATA extern char public_1000dbc4; // 'c'
/* 0x1000dbc5 */ LDATA extern char public_1000dbc5;
/* 0x1000dbc6 */ LDATA extern char public_1000dbc6;
/* 0x1000dbc7 */ LDATA extern char public_1000dbc7;
/* 0x1000dbc8 */ LDATA extern char public_1000dbc8;
/* 0x1000dbc9 */ LDATA extern char public_1000dbc9;
/* 0x1000dbca */ LDATA extern char public_1000dbca;
/* 0x1000dbcb */ LDATA extern char public_1000dbcb;
/* 0x1000dbcc */ LDATA extern char public_1000dbcc; // '~'
/* 0x1000dbcd */ LDATA extern char public_1000dbcd;
/* 0x1000dbce */ LDATA extern char public_1000dbce;
/* 0x1000dbcf */ LDATA extern char public_1000dbcf;
/* 0x1000dbd0 */ LDATA extern char public_1000dbd0;
/* 0x1000dbd1 */ LDATA extern char public_1000dbd1;
/* 0x1000dbd2 */ LDATA extern char public_1000dbd2;
/* 0x1000dbd3 */ LDATA extern char public_1000dbd3;
/* 0x1000dbd4 */ LDATA extern char public_1000dbd4; // '>'
/* 0x1000dbd5 */ LDATA extern char public_1000dbd5;
/* 0x1000dbd6 */ LDATA extern char public_1000dbd6;
/* 0x1000dbd7 */ LDATA extern char public_1000dbd7;
/* 0x1000dbd8 */ LDATA extern char public_1000dbd8;
/* 0x1000dbd9 */ LDATA extern char public_1000dbd9;
/* 0x1000dbda */ LDATA extern char public_1000dbda;
/* 0x1000dbdb */ LDATA extern char public_1000dbdb;
/* 0x1000dbdc */ LDATA extern char public_1000dbdc;
/* 0x1000dbdd */ LDATA extern char public_1000dbdd;
/* 0x1000dbde */ LDATA extern char public_1000dbde;
/* 0x1000dbdf */ LDATA extern char public_1000dbdf;
/* 0x1000dbe0 */ LDATA extern char public_1000dbe0; // 'R'
/* 0x1000dbe1 */ LDATA extern char public_1000dbe1;
/* 0x1000dbe2 */ LDATA extern char public_1000dbe2;
/* 0x1000dbe3 */ LDATA extern char public_1000dbe3;
/* 0x1000dbe4 */ LDATA extern char public_1000dbe4;
/* 0x1000dbe5 */ LDATA extern char public_1000dbe5;
/* 0x1000dbe6 */ LDATA extern char public_1000dbe6;
/* 0x1000dbe7 */ LDATA extern char public_1000dbe7;
/* 0x1000dbe8 */ LDATA extern char public_1000dbe8;
/* 0x1000dbe9 */ LDATA extern char public_1000dbe9;
/* 0x1000dbea */ LDATA extern char public_1000dbea;
/* 0x1000dbeb */ LDATA extern char public_1000dbeb;
/* 0x1000dbec */ LDATA extern char public_1000dbec; // 'n'
/* 0x1000dbed */ LDATA extern char public_1000dbed;
/* 0x1000dbee */ LDATA extern char public_1000dbee;
/* 0x1000dbef */ LDATA extern char public_1000dbef;
/* 0x1000dbf0 */ LDATA extern char public_1000dbf0;
/* 0x1000dbf1 */ LDATA extern char public_1000dbf1;
/* 0x1000dbf2 */ LDATA extern char public_1000dbf2;
/* 0x1000dbf3 */ LDATA extern char public_1000dbf3;
/* 0x1000dbf4 */ LDATA extern char public_1000dbf4; // '.'
/* 0x1000dbf5 */ LDATA extern char public_1000dbf5;
/* 0x1000dbf6 */ LDATA extern char public_1000dbf6;
/* 0x1000dbf7 */ LDATA extern char public_1000dbf7;
/* 0x1000dbf8 */ LDATA extern char public_1000dbf8;
/* 0x1000dbf9 */ LDATA extern char public_1000dbf9;
/* 0x1000dbfa */ LDATA extern char public_1000dbfa;
/* 0x1000dbfb */ LDATA extern char public_1000dbfb;
/* 0x1000dbfc */ LDATA extern char public_1000dbfc;
/* 0x1000dbfd */ LDATA extern char public_1000dbfd;
/* 0x1000dbfe */ LDATA extern char public_1000dbfe;
/* 0x1000dbff */ LDATA extern char public_1000dbff;
/* 0x1000dc00 */ LDATA extern char public_1000dc00;
/* 0x1000dc01 */ LDATA extern char public_1000dc01;
/* 0x1000dc02 */ LDATA extern char public_1000dc02;
/* 0x1000dc03 */ LDATA extern char public_1000dc03;
/* 0x1000dc04 */ LDATA extern char public_1000dc04;
/* 0x1000dc05 */ LDATA extern char public_1000dc05;
/* 0x1000dc06 */ LDATA extern char public_1000dc06;
/* 0x1000dc07 */ LDATA extern char public_1000dc07;
/* 0x1000dc08 */ LDATA extern char public_1000dc08;
/* 0x1000dc09 */ LDATA extern char public_1000dc09;
/* 0x1000dc0a */ LDATA extern char public_1000dc0a;
/* 0x1000dc0b */ LDATA extern char public_1000dc0b;
/* 0x1000dc0c */ LDATA extern char public_1000dc0c;
/* 0x1000dc0d */ LDATA extern char public_1000dc0d;
/* 0x1000dc0e */ LDATA extern char public_1000dc0e;
/* 0x1000dc0f */ LDATA extern char public_1000dc0f;
/* 0x1000dc10 */ LDATA extern char public_1000dc10;
/* 0x1000dc11 */ LDATA extern char public_1000dc11;
/* 0x1000dc12 */ LDATA extern char public_1000dc12;
/* 0x1000dc13 */ LDATA extern char public_1000dc13;
/* 0x1000dc14 */ LDATA extern char public_1000dc14; // 'N'
/* 0x1000dc15 */ LDATA extern char public_1000dc15;
/* 0x1000dc16 */ LDATA extern char public_1000dc16;
/* 0x1000dc17 */ LDATA extern char public_1000dc17;
/* 0x1000dc18 */ LDATA extern char public_1000dc18;
/* 0x1000dc19 */ LDATA extern char public_1000dc19;
/* 0x1000dc1a */ LDATA extern char public_1000dc1a;
/* 0x1000dc1b */ LDATA extern char public_1000dc1b;
/* 0x1000dc1c */ LDATA extern char public_1000dc1c;
/* 0x1000dc1d */ LDATA extern char public_1000dc1d;
/* 0x1000dc1e */ LDATA extern char public_1000dc1e;
/* 0x1000dc1f */ LDATA extern char public_1000dc1f;
/* 0x1000dc20 */ LDATA extern char public_1000dc20; // '`'
/* 0x1000dc21 */ LDATA extern char public_1000dc21;
/* 0x1000dc22 */ LDATA extern char public_1000dc22;
/* 0x1000dc23 */ LDATA extern char public_1000dc23;
/* 0x1000dc24 */ LDATA extern char public_1000dc24;
/* 0x1000dc25 */ LDATA extern char public_1000dc25;
/* 0x1000dc26 */ LDATA extern char public_1000dc26;
/* 0x1000dc27 */ LDATA extern char public_1000dc27;
/* 0x1000dc28 */ LDATA extern char public_1000dc28;
/* 0x1000dc29 */ LDATA extern char public_1000dc29;
/* 0x1000dc2a */ LDATA extern char public_1000dc2a;
/* 0x1000dc2b */ LDATA extern char public_1000dc2b;
/* 0x1000dc2c */ LDATA extern char public_1000dc2c; // 'Q'
/* 0x1000dc2d */ LDATA extern char public_1000dc2d;
/* 0x1000dc2e */ LDATA extern char public_1000dc2e;
/* 0x1000dc2f */ LDATA extern char public_1000dc2f;
/* 0x1000dc30 */ LDATA extern char public_1000dc30;
/* 0x1000dc31 */ LDATA extern char public_1000dc31;
/* 0x1000dc32 */ LDATA extern char public_1000dc32;
/* 0x1000dc33 */ LDATA extern char public_1000dc33;
/* 0x1000dc34 */ LDATA extern char public_1000dc34;
/* 0x1000dc35 */ LDATA extern char public_1000dc35;
/* 0x1000dc36 */ LDATA extern char public_1000dc36;
/* 0x1000dc37 */ LDATA extern char public_1000dc37;
/* 0x1000dc38 */ LDATA extern char public_1000dc38; // 'U'
/* 0x1000dc39 */ LDATA extern char public_1000dc39;
/* 0x1000dc3a */ LDATA extern char public_1000dc3a;
/* 0x1000dc3b */ LDATA extern char public_1000dc3b;
/* 0x1000dc3c */ LDATA extern char public_1000dc3c;
/* 0x1000dc3d */ LDATA extern char public_1000dc3d;
/* 0x1000dc3e */ LDATA extern char public_1000dc3e;
/* 0x1000dc3f */ LDATA extern char public_1000dc3f;
/* 0x1000dc40 */ LDATA extern char public_1000dc40; // 'R'
/* 0x1000dc41 */ LDATA extern char public_1000dc41;
/* 0x1000dc42 */ LDATA extern char public_1000dc42;
/* 0x1000dc43 */ LDATA extern char public_1000dc43;
/* 0x1000dc44 */ LDATA extern char public_1000dc44;
/* 0x1000dc45 */ LDATA extern char public_1000dc45;
/* 0x1000dc46 */ LDATA extern char public_1000dc46;
/* 0x1000dc47 */ LDATA extern char public_1000dc47;
/* 0x1000dc48 */ LDATA extern char public_1000dc48;
/* 0x1000dc49 */ LDATA extern char public_1000dc49;
/* 0x1000dc4a */ LDATA extern char public_1000dc4a;
/* 0x1000dc4b */ LDATA extern char public_1000dc4b;
/* 0x1000dc4c */ LDATA extern char public_1000dc4c; // 'q'
/* 0x1000dc4d */ LDATA extern char public_1000dc4d;
/* 0x1000dc4e */ LDATA extern char public_1000dc4e;
/* 0x1000dc4f */ LDATA extern char public_1000dc4f;
/* 0x1000dc50 */ LDATA extern char public_1000dc50;
/* 0x1000dc51 */ LDATA extern char public_1000dc51;
/* 0x1000dc52 */ LDATA extern char public_1000dc52;
/* 0x1000dc53 */ LDATA extern char public_1000dc53;
/* 0x1000dc54 */ LDATA extern char public_1000dc54; // '1'
/* 0x1000dc55 */ LDATA extern char public_1000dc55;
/* 0x1000dc56 */ LDATA extern char public_1000dc56;
/* 0x1000dc57 */ LDATA extern char public_1000dc57;
/* 0x1000dc58 */ LDATA extern char public_1000dc58;
/* 0x1000dc59 */ LDATA extern char public_1000dc59;
/* 0x1000dc5a */ LDATA extern char public_1000dc5a;
/* 0x1000dc5b */ LDATA extern char public_1000dc5b;
/* 0x1000dc5c */ LDATA extern char public_1000dc5c;
/* 0x1000dc5d */ LDATA extern char public_1000dc5d;
/* 0x1000dc5e */ LDATA extern char public_1000dc5e;
/* 0x1000dc5f */ LDATA extern char public_1000dc5f;
/* 0x1000dc60 */ LDATA extern char public_1000dc60; // 'P'
/* 0x1000dc61 */ LDATA extern char public_1000dc61;
/* 0x1000dc62 */ LDATA extern char public_1000dc62;
/* 0x1000dc63 */ LDATA extern char public_1000dc63;
/* 0x1000dc64 */ LDATA extern char public_1000dc64;
/* 0x1000dc65 */ LDATA extern char public_1000dc65;
/* 0x1000dc66 */ LDATA extern char public_1000dc66;
/* 0x1000dc67 */ LDATA extern char public_1000dc67;
/* 0x1000dc68 */ LDATA extern char public_1000dc68;
/* 0x1000dc69 */ LDATA extern char public_1000dc69;
/* 0x1000dc6a */ LDATA extern char public_1000dc6a;
/* 0x1000dc6b */ LDATA extern char public_1000dc6b;
/* 0x1000dc6c */ LDATA extern char public_1000dc6c; // 'a'
/* 0x1000dc6d */ LDATA extern char public_1000dc6d;
/* 0x1000dc6e */ LDATA extern char public_1000dc6e;
/* 0x1000dc6f */ LDATA extern char public_1000dc6f;
/* 0x1000dc70 */ LDATA extern char public_1000dc70;
/* 0x1000dc71 */ LDATA extern char public_1000dc71;
/* 0x1000dc72 */ LDATA extern char public_1000dc72;
/* 0x1000dc73 */ LDATA extern char public_1000dc73;
/* 0x1000dc74 */ LDATA extern char public_1000dc74; // '!'
/* 0x1000dc75 */ LDATA extern char public_1000dc75;
/* 0x1000dc76 */ LDATA extern char public_1000dc76;
/* 0x1000dc77 */ LDATA extern char public_1000dc77;
/* 0x1000dc78 */ LDATA extern char public_1000dc78;
/* 0x1000dc79 */ LDATA extern char public_1000dc79;
/* 0x1000dc7a */ LDATA extern char public_1000dc7a;
/* 0x1000dc7b */ LDATA extern char public_1000dc7b;
/* 0x1000dc7c */ LDATA extern char public_1000dc7c;
/* 0x1000dc7d */ LDATA extern char public_1000dc7d;
/* 0x1000dc7e */ LDATA extern char public_1000dc7e;
/* 0x1000dc7f */ LDATA extern char public_1000dc7f;
/* 0x1000dc80 */ LDATA extern char public_1000dc80;
/* 0x1000dc81 */ LDATA extern char public_1000dc81;
/* 0x1000dc82 */ LDATA extern char public_1000dc82;
/* 0x1000dc83 */ LDATA extern char public_1000dc83;
/* 0x1000dc84 */ LDATA extern char public_1000dc84;
/* 0x1000dc85 */ LDATA extern char public_1000dc85;
/* 0x1000dc86 */ LDATA extern char public_1000dc86;
/* 0x1000dc87 */ LDATA extern char public_1000dc87;
/* 0x1000dc88 */ LDATA extern char public_1000dc88;
/* 0x1000dc89 */ LDATA extern char public_1000dc89;
/* 0x1000dc8a */ LDATA extern char public_1000dc8a;
/* 0x1000dc8b */ LDATA extern char public_1000dc8b;
/* 0x1000dc8c */ LDATA extern char public_1000dc8c;
/* 0x1000dc8d */ LDATA extern char public_1000dc8d;
/* 0x1000dc8e */ LDATA extern char public_1000dc8e;
/* 0x1000dc8f */ LDATA extern char public_1000dc8f;
/* 0x1000dc90 */ LDATA extern char public_1000dc90;
/* 0x1000dc91 */ LDATA extern char public_1000dc91;
/* 0x1000dc92 */ LDATA extern char public_1000dc92;
/* 0x1000dc93 */ LDATA extern char public_1000dc93;
/* 0x1000dc94 */ LDATA extern char public_1000dc94; // 'A'
/* 0x1000dc95 */ LDATA extern char public_1000dc95;
/* 0x1000dc96 */ LDATA extern char public_1000dc96;
/* 0x1000dc97 */ LDATA extern char public_1000dc97;
/* 0x1000dc98 */ LDATA extern char public_1000dc98;
/* 0x1000dc99 */ LDATA extern char public_1000dc99;
/* 0x1000dc9a */ LDATA extern char public_1000dc9a;
/* 0x1000dc9b */ LDATA extern char public_1000dc9b;
/* 0x1000dc9c */ LDATA extern char public_1000dc9c;
/* 0x1000dc9d */ LDATA extern char public_1000dc9d;
/* 0x1000dc9e */ LDATA extern char public_1000dc9e;
/* 0x1000dc9f */ LDATA extern char public_1000dc9f;
/* 0x1000dca0 */ LDATA extern char public_1000dca0; // 'P'
/* 0x1000dca1 */ LDATA extern char public_1000dca1;
/* 0x1000dca2 */ LDATA extern char public_1000dca2;
/* 0x1000dca3 */ LDATA extern char public_1000dca3;
/* 0x1000dca4 */ LDATA extern char public_1000dca4;
/* 0x1000dca5 */ LDATA extern char public_1000dca5;
/* 0x1000dca6 */ LDATA extern char public_1000dca6;
/* 0x1000dca7 */ LDATA extern char public_1000dca7;
/* 0x1000dca8 */ LDATA extern char public_1000dca8;
/* 0x1000dca9 */ LDATA extern char public_1000dca9;
/* 0x1000dcaa */ LDATA extern char public_1000dcaa;
/* 0x1000dcab */ LDATA extern char public_1000dcab;
/* 0x1000dcac */ LDATA extern char public_1000dcac; // 'Y'
/* 0x1000dcad */ LDATA extern char public_1000dcad;
/* 0x1000dcae */ LDATA extern char public_1000dcae;
/* 0x1000dcaf */ LDATA extern char public_1000dcaf;
/* 0x1000dcb0 */ LDATA extern char public_1000dcb0;
/* 0x1000dcb1 */ LDATA extern char public_1000dcb1;
/* 0x1000dcb2 */ LDATA extern char public_1000dcb2;
/* 0x1000dcb3 */ LDATA extern char public_1000dcb3;
/* 0x1000dcb4 */ LDATA extern char public_1000dcb4;
/* 0x1000dcb5 */ LDATA extern char public_1000dcb5;
/* 0x1000dcb6 */ LDATA extern char public_1000dcb6;
/* 0x1000dcb7 */ LDATA extern char public_1000dcb7;
/* 0x1000dcb8 */ LDATA extern char public_1000dcb8;
/* 0x1000dcb9 */ LDATA extern char public_1000dcb9;
/* 0x1000dcba */ LDATA extern char public_1000dcba;
/* 0x1000dcbb */ LDATA extern char public_1000dcbb;
/* 0x1000dcbc */ LDATA extern char public_1000dcbc;
/* 0x1000dcbd */ LDATA extern char public_1000dcbd;
/* 0x1000dcbe */ LDATA extern char public_1000dcbe;
/* 0x1000dcbf */ LDATA extern char public_1000dcbf;
/* 0x1000dcc0 */ LDATA extern char public_1000dcc0; // 'S'
/* 0x1000dcc1 */ LDATA extern char public_1000dcc1;
/* 0x1000dcc2 */ LDATA extern char public_1000dcc2;
/* 0x1000dcc3 */ LDATA extern char public_1000dcc3;
/* 0x1000dcc4 */ LDATA extern char public_1000dcc4; // ';'
/* 0x1000dcc5 */ LDATA extern char public_1000dcc5;
/* 0x1000dcc6 */ LDATA extern char public_1000dcc6;
/* 0x1000dcc7 */ LDATA extern char public_1000dcc7;
/* 0x1000dcc8 */ LDATA extern char public_1000dcc8;
/* 0x1000dcc9 */ LDATA extern char public_1000dcc9;
/* 0x1000dcca */ LDATA extern char public_1000dcca;
/* 0x1000dccb */ LDATA extern char public_1000dccb;
/* 0x1000dccc */ LDATA extern char public_1000dccc; // 'y'
/* 0x1000dccd */ LDATA extern char public_1000dccd;
/* 0x1000dcce */ LDATA extern char public_1000dcce;
/* 0x1000dccf */ LDATA extern char public_1000dccf;
/* 0x1000dcd0 */ LDATA extern char public_1000dcd0;
/* 0x1000dcd1 */ LDATA extern char public_1000dcd1;
/* 0x1000dcd2 */ LDATA extern char public_1000dcd2;
/* 0x1000dcd3 */ LDATA extern char public_1000dcd3;
/* 0x1000dcd4 */ LDATA extern char public_1000dcd4; // '9'
/* 0x1000dcd5 */ LDATA extern char public_1000dcd5;
/* 0x1000dcd6 */ LDATA extern char public_1000dcd6;
/* 0x1000dcd7 */ LDATA extern char public_1000dcd7;
/* 0x1000dcd8 */ LDATA extern char public_1000dcd8;
/* 0x1000dcd9 */ LDATA extern char public_1000dcd9;
/* 0x1000dcda */ LDATA extern char public_1000dcda;
/* 0x1000dcdb */ LDATA extern char public_1000dcdb;
/* 0x1000dcdc */ LDATA extern char public_1000dcdc;
/* 0x1000dcdd */ LDATA extern char public_1000dcdd;
/* 0x1000dcde */ LDATA extern char public_1000dcde;
/* 0x1000dcdf */ LDATA extern char public_1000dcdf;
/* 0x1000dce0 */ LDATA extern char public_1000dce0; // 'Q'
/* 0x1000dce1 */ LDATA extern char public_1000dce1;
/* 0x1000dce2 */ LDATA extern char public_1000dce2;
/* 0x1000dce3 */ LDATA extern char public_1000dce3;
/* 0x1000dce4 */ LDATA extern char public_1000dce4;
/* 0x1000dce5 */ LDATA extern char public_1000dce5;
/* 0x1000dce6 */ LDATA extern char public_1000dce6;
/* 0x1000dce7 */ LDATA extern char public_1000dce7;
/* 0x1000dce8 */ LDATA extern char public_1000dce8;
/* 0x1000dce9 */ LDATA extern char public_1000dce9;
/* 0x1000dcea */ LDATA extern char public_1000dcea;
/* 0x1000dceb */ LDATA extern char public_1000dceb;
/* 0x1000dcec */ LDATA extern char public_1000dcec; // 'i'
/* 0x1000dced */ LDATA extern char public_1000dced;
/* 0x1000dcee */ LDATA extern char public_1000dcee;
/* 0x1000dcef */ LDATA extern char public_1000dcef;
/* 0x1000dcf0 */ LDATA extern char public_1000dcf0;
/* 0x1000dcf1 */ LDATA extern char public_1000dcf1;
/* 0x1000dcf2 */ LDATA extern char public_1000dcf2;
/* 0x1000dcf3 */ LDATA extern char public_1000dcf3;
/* 0x1000dcf4 */ LDATA extern char public_1000dcf4; // ')'
/* 0x1000dcf5 */ LDATA extern char public_1000dcf5;
/* 0x1000dcf6 */ LDATA extern char public_1000dcf6;
/* 0x1000dcf7 */ LDATA extern char public_1000dcf7;
/* 0x1000dcf8 */ LDATA extern char public_1000dcf8;
/* 0x1000dcf9 */ LDATA extern char public_1000dcf9;
/* 0x1000dcfa */ LDATA extern char public_1000dcfa;
/* 0x1000dcfb */ LDATA extern char public_1000dcfb;
/* 0x1000dcfc */ LDATA extern char public_1000dcfc;
/* 0x1000dcfd */ LDATA extern char public_1000dcfd;
/* 0x1000dcfe */ LDATA extern char public_1000dcfe;
/* 0x1000dcff */ LDATA extern char public_1000dcff;
/* 0x1000dd00 */ LDATA extern char public_1000dd00;
/* 0x1000dd01 */ LDATA extern char public_1000dd01;
/* 0x1000dd02 */ LDATA extern char public_1000dd02;
/* 0x1000dd03 */ LDATA extern char public_1000dd03;
/* 0x1000dd04 */ LDATA extern char public_1000dd04;
/* 0x1000dd05 */ LDATA extern char public_1000dd05;
/* 0x1000dd06 */ LDATA extern char public_1000dd06;
/* 0x1000dd07 */ LDATA extern char public_1000dd07;
/* 0x1000dd08 */ LDATA extern char public_1000dd08;
/* 0x1000dd09 */ LDATA extern char public_1000dd09;
/* 0x1000dd0a */ LDATA extern char public_1000dd0a;
/* 0x1000dd0b */ LDATA extern char public_1000dd0b;
/* 0x1000dd0c */ LDATA extern char public_1000dd0c;
/* 0x1000dd0d */ LDATA extern char public_1000dd0d;
/* 0x1000dd0e */ LDATA extern char public_1000dd0e;
/* 0x1000dd0f */ LDATA extern char public_1000dd0f;
/* 0x1000dd10 */ LDATA extern char public_1000dd10;
/* 0x1000dd11 */ LDATA extern char public_1000dd11;
/* 0x1000dd12 */ LDATA extern char public_1000dd12;
/* 0x1000dd13 */ LDATA extern char public_1000dd13;
/* 0x1000dd14 */ LDATA extern char public_1000dd14; // 'I'
/* 0x1000dd15 */ LDATA extern char public_1000dd15;
/* 0x1000dd16 */ LDATA extern char public_1000dd16;
/* 0x1000dd17 */ LDATA extern char public_1000dd17;
/* 0x1000dd18 */ LDATA extern char public_1000dd18;
/* 0x1000dd19 */ LDATA extern char public_1000dd19;
/* 0x1000dd1a */ LDATA extern char public_1000dd1a;
/* 0x1000dd1b */ LDATA extern char public_1000dd1b;
/* 0x1000dd1c */ LDATA extern char public_1000dd1c;
/* 0x1000dd1d */ LDATA extern char public_1000dd1d;
/* 0x1000dd1e */ LDATA extern char public_1000dd1e;
/* 0x1000dd1f */ LDATA extern char public_1000dd1f;
/* 0x1000dd20 */ LDATA extern char public_1000dd20; // 'P'
/* 0x1000dd21 */ LDATA extern char public_1000dd21;
/* 0x1000dd22 */ LDATA extern char public_1000dd22;
/* 0x1000dd23 */ LDATA extern char public_1000dd23;
/* 0x1000dd24 */ LDATA extern char public_1000dd24;
/* 0x1000dd25 */ LDATA extern char public_1000dd25;
/* 0x1000dd26 */ LDATA extern char public_1000dd26;
/* 0x1000dd27 */ LDATA extern char public_1000dd27;
/* 0x1000dd28 */ LDATA extern char public_1000dd28;
/* 0x1000dd29 */ LDATA extern char public_1000dd29;
/* 0x1000dd2a */ LDATA extern char public_1000dd2a;
/* 0x1000dd2b */ LDATA extern char public_1000dd2b;
/* 0x1000dd2c */ LDATA extern char public_1000dd2c; // 'U'
/* 0x1000dd2d */ LDATA extern char public_1000dd2d;
/* 0x1000dd2e */ LDATA extern char public_1000dd2e;
/* 0x1000dd2f */ LDATA extern char public_1000dd2f;
/* 0x1000dd30 */ LDATA extern char public_1000dd30;
/* 0x1000dd31 */ LDATA extern char public_1000dd31;
/* 0x1000dd32 */ LDATA extern char public_1000dd32;
/* 0x1000dd33 */ LDATA extern char public_1000dd33;
/* 0x1000dd34 */ LDATA extern char public_1000dd34;
/* 0x1000dd35 */ LDATA extern char public_1000dd35;
/* 0x1000dd36 */ LDATA extern char public_1000dd36;
/* 0x1000dd37 */ LDATA extern char public_1000dd37;
/* 0x1000dd38 */ LDATA extern char public_1000dd38; // 'P'
/* 0x1000dd39 */ LDATA extern char public_1000dd39;
/* 0x1000dd3a */ LDATA extern char public_1000dd3a;
/* 0x1000dd3b */ LDATA extern char public_1000dd3b;
/* 0x1000dd3c */ LDATA extern char public_1000dd3c;
/* 0x1000dd3d */ LDATA extern char public_1000dd3d;
/* 0x1000dd3e */ LDATA extern char public_1000dd3e;
/* 0x1000dd3f */ LDATA extern char public_1000dd3f;
/* 0x1000dd40 */ LDATA extern char public_1000dd40; // 'S'
/* 0x1000dd41 */ LDATA extern char public_1000dd41;
/* 0x1000dd42 */ LDATA extern char public_1000dd42;
/* 0x1000dd43 */ LDATA extern char public_1000dd43;
/* 0x1000dd44 */ LDATA extern char public_1000dd44; // '+'
/* 0x1000dd45 */ LDATA extern char public_1000dd45;
/* 0x1000dd46 */ LDATA extern char public_1000dd46;
/* 0x1000dd47 */ LDATA extern char public_1000dd47;
/* 0x1000dd48 */ LDATA extern char public_1000dd48;
/* 0x1000dd49 */ LDATA extern char public_1000dd49;
/* 0x1000dd4a */ LDATA extern char public_1000dd4a;
/* 0x1000dd4b */ LDATA extern char public_1000dd4b;
/* 0x1000dd4c */ LDATA extern char public_1000dd4c; // 'u'
/* 0x1000dd4d */ LDATA extern char public_1000dd4d;
/* 0x1000dd4e */ LDATA extern char public_1000dd4e;
/* 0x1000dd4f */ LDATA extern char public_1000dd4f;
/* 0x1000dd50 */ LDATA extern char public_1000dd50;
/* 0x1000dd51 */ LDATA extern char public_1000dd51;
/* 0x1000dd52 */ LDATA extern char public_1000dd52;
/* 0x1000dd53 */ LDATA extern char public_1000dd53;
/* 0x1000dd54 */ LDATA extern char public_1000dd54; // '5'
/* 0x1000dd55 */ LDATA extern char public_1000dd55;
/* 0x1000dd56 */ LDATA extern char public_1000dd56;
/* 0x1000dd57 */ LDATA extern char public_1000dd57;
/* 0x1000dd58 */ LDATA extern char public_1000dd58;
/* 0x1000dd59 */ LDATA extern char public_1000dd59;
/* 0x1000dd5a */ LDATA extern char public_1000dd5a;
/* 0x1000dd5b */ LDATA extern char public_1000dd5b;
/* 0x1000dd5c */ LDATA extern char public_1000dd5c;
/* 0x1000dd5d */ LDATA extern char public_1000dd5d;
/* 0x1000dd5e */ LDATA extern char public_1000dd5e;
/* 0x1000dd5f */ LDATA extern char public_1000dd5f;
/* 0x1000dd60 */ LDATA extern char public_1000dd60; // 'Q'
/* 0x1000dd61 */ LDATA extern char public_1000dd61;
/* 0x1000dd62 */ LDATA extern char public_1000dd62;
/* 0x1000dd63 */ LDATA extern char public_1000dd63;
/* 0x1000dd64 */ LDATA extern char public_1000dd64;
/* 0x1000dd65 */ LDATA extern char public_1000dd65;
/* 0x1000dd66 */ LDATA extern char public_1000dd66;
/* 0x1000dd67 */ LDATA extern char public_1000dd67;
/* 0x1000dd68 */ LDATA extern char public_1000dd68;
/* 0x1000dd69 */ LDATA extern char public_1000dd69;
/* 0x1000dd6a */ LDATA extern char public_1000dd6a;
/* 0x1000dd6b */ LDATA extern char public_1000dd6b;
/* 0x1000dd6c */ LDATA extern char public_1000dd6c; // 'e'
/* 0x1000dd6d */ LDATA extern char public_1000dd6d;
/* 0x1000dd6e */ LDATA extern char public_1000dd6e;
/* 0x1000dd6f */ LDATA extern char public_1000dd6f;
/* 0x1000dd70 */ LDATA extern char public_1000dd70;
/* 0x1000dd71 */ LDATA extern char public_1000dd71;
/* 0x1000dd72 */ LDATA extern char public_1000dd72;
/* 0x1000dd73 */ LDATA extern char public_1000dd73;
/* 0x1000dd74 */ LDATA extern char public_1000dd74; // '%'
/* 0x1000dd75 */ LDATA extern char public_1000dd75;
/* 0x1000dd76 */ LDATA extern char public_1000dd76;
/* 0x1000dd77 */ LDATA extern char public_1000dd77;
/* 0x1000dd78 */ LDATA extern char public_1000dd78;
/* 0x1000dd79 */ LDATA extern char public_1000dd79;
/* 0x1000dd7a */ LDATA extern char public_1000dd7a;
/* 0x1000dd7b */ LDATA extern char public_1000dd7b;
/* 0x1000dd7c */ LDATA extern char public_1000dd7c;
/* 0x1000dd7d */ LDATA extern char public_1000dd7d;
/* 0x1000dd7e */ LDATA extern char public_1000dd7e;
/* 0x1000dd7f */ LDATA extern char public_1000dd7f;
/* 0x1000dd80 */ LDATA extern char public_1000dd80;
/* 0x1000dd81 */ LDATA extern char public_1000dd81;
/* 0x1000dd82 */ LDATA extern char public_1000dd82;
/* 0x1000dd83 */ LDATA extern char public_1000dd83;
/* 0x1000dd84 */ LDATA extern char public_1000dd84;
/* 0x1000dd85 */ LDATA extern char public_1000dd85;
/* 0x1000dd86 */ LDATA extern char public_1000dd86;
/* 0x1000dd87 */ LDATA extern char public_1000dd87;
/* 0x1000dd88 */ LDATA extern char public_1000dd88;
/* 0x1000dd89 */ LDATA extern char public_1000dd89;
/* 0x1000dd8a */ LDATA extern char public_1000dd8a;
/* 0x1000dd8b */ LDATA extern char public_1000dd8b;
/* 0x1000dd8c */ LDATA extern char public_1000dd8c;
/* 0x1000dd8d */ LDATA extern char public_1000dd8d;
/* 0x1000dd8e */ LDATA extern char public_1000dd8e;
/* 0x1000dd8f */ LDATA extern char public_1000dd8f;
/* 0x1000dd90 */ LDATA extern char public_1000dd90;
/* 0x1000dd91 */ LDATA extern char public_1000dd91;
/* 0x1000dd92 */ LDATA extern char public_1000dd92;
/* 0x1000dd93 */ LDATA extern char public_1000dd93;
/* 0x1000dd94 */ LDATA extern char public_1000dd94; // 'E'
/* 0x1000dd95 */ LDATA extern char public_1000dd95;
/* 0x1000dd96 */ LDATA extern char public_1000dd96;
/* 0x1000dd97 */ LDATA extern char public_1000dd97;
/* 0x1000dd98 */ LDATA extern char public_1000dd98;
/* 0x1000dd99 */ LDATA extern char public_1000dd99;
/* 0x1000dd9a */ LDATA extern char public_1000dd9a;
/* 0x1000dd9b */ LDATA extern char public_1000dd9b;
/* 0x1000dd9c */ LDATA extern char public_1000dd9c;
/* 0x1000dd9d */ LDATA extern char public_1000dd9d;
/* 0x1000dd9e */ LDATA extern char public_1000dd9e;
/* 0x1000dd9f */ LDATA extern char public_1000dd9f;
/* 0x1000dda0 */ LDATA extern char public_1000dda0; // 'P'
/* 0x1000dda1 */ LDATA extern char public_1000dda1;
/* 0x1000dda2 */ LDATA extern char public_1000dda2;
/* 0x1000dda3 */ LDATA extern char public_1000dda3;
/* 0x1000dda4 */ LDATA extern char public_1000dda4;
/* 0x1000dda5 */ LDATA extern char public_1000dda5;
/* 0x1000dda6 */ LDATA extern char public_1000dda6;
/* 0x1000dda7 */ LDATA extern char public_1000dda7;
/* 0x1000dda8 */ LDATA extern char public_1000dda8;
/* 0x1000dda9 */ LDATA extern char public_1000dda9;
/* 0x1000ddaa */ LDATA extern char public_1000ddaa;
/* 0x1000ddab */ LDATA extern char public_1000ddab;
/* 0x1000ddac */ LDATA extern char public_1000ddac; // ']'
/* 0x1000ddad */ LDATA extern char public_1000ddad;
/* 0x1000ddae */ LDATA extern char public_1000ddae;
/* 0x1000ddaf */ LDATA extern char public_1000ddaf;
/* 0x1000ddb0 */ LDATA extern char public_1000ddb0;
/* 0x1000ddb1 */ LDATA extern char public_1000ddb1;
/* 0x1000ddb2 */ LDATA extern char public_1000ddb2;
/* 0x1000ddb3 */ LDATA extern char public_1000ddb3;
/* 0x1000ddb4 */ LDATA extern char public_1000ddb4;
/* 0x1000ddb5 */ LDATA extern char public_1000ddb5;
/* 0x1000ddb6 */ LDATA extern char public_1000ddb6;
/* 0x1000ddb7 */ LDATA extern char public_1000ddb7;
/* 0x1000ddb8 */ LDATA extern char public_1000ddb8;
/* 0x1000ddb9 */ LDATA extern char public_1000ddb9;
/* 0x1000ddba */ LDATA extern char public_1000ddba;
/* 0x1000ddbb */ LDATA extern char public_1000ddbb;
/* 0x1000ddbc */ LDATA extern char public_1000ddbc;
/* 0x1000ddbd */ LDATA extern char public_1000ddbd;
/* 0x1000ddbe */ LDATA extern char public_1000ddbe;
/* 0x1000ddbf */ LDATA extern char public_1000ddbf;
/* 0x1000ddc0 */ LDATA extern char public_1000ddc0; // 'T'
/* 0x1000ddc1 */ LDATA extern char public_1000ddc1;
/* 0x1000ddc2 */ LDATA extern char public_1000ddc2;
/* 0x1000ddc3 */ LDATA extern char public_1000ddc3;
/* 0x1000ddc4 */ LDATA extern char public_1000ddc4; // 'S'
/* 0x1000ddc5 */ LDATA extern char public_1000ddc5;
/* 0x1000ddc6 */ LDATA extern char public_1000ddc6;
/* 0x1000ddc7 */ LDATA extern char public_1000ddc7;
/* 0x1000ddc8 */ LDATA extern char public_1000ddc8;
/* 0x1000ddc9 */ LDATA extern char public_1000ddc9;
/* 0x1000ddca */ LDATA extern char public_1000ddca;
/* 0x1000ddcb */ LDATA extern char public_1000ddcb;
/* 0x1000ddcc */ LDATA extern char public_1000ddcc; // '}'
/* 0x1000ddcd */ LDATA extern char public_1000ddcd;
/* 0x1000ddce */ LDATA extern char public_1000ddce;
/* 0x1000ddcf */ LDATA extern char public_1000ddcf;
/* 0x1000ddd0 */ LDATA extern char public_1000ddd0;
/* 0x1000ddd1 */ LDATA extern char public_1000ddd1;
/* 0x1000ddd2 */ LDATA extern char public_1000ddd2;
/* 0x1000ddd3 */ LDATA extern char public_1000ddd3;
/* 0x1000ddd4 */ LDATA extern char public_1000ddd4; // '='
/* 0x1000ddd5 */ LDATA extern char public_1000ddd5;
/* 0x1000ddd6 */ LDATA extern char public_1000ddd6;
/* 0x1000ddd7 */ LDATA extern char public_1000ddd7;
/* 0x1000ddd8 */ LDATA extern char public_1000ddd8;
/* 0x1000ddd9 */ LDATA extern char public_1000ddd9;
/* 0x1000ddda */ LDATA extern char public_1000ddda;
/* 0x1000dddb */ LDATA extern char public_1000dddb;
/* 0x1000dddc */ LDATA extern char public_1000dddc;
/* 0x1000dddd */ LDATA extern char public_1000dddd;
/* 0x1000ddde */ LDATA extern char public_1000ddde;
/* 0x1000dddf */ LDATA extern char public_1000dddf;
/* 0x1000dde0 */ LDATA extern char public_1000dde0; // 'R'
/* 0x1000dde1 */ LDATA extern char public_1000dde1;
/* 0x1000dde2 */ LDATA extern char public_1000dde2;
/* 0x1000dde3 */ LDATA extern char public_1000dde3;
/* 0x1000dde4 */ LDATA extern char public_1000dde4;
/* 0x1000dde5 */ LDATA extern char public_1000dde5;
/* 0x1000dde6 */ LDATA extern char public_1000dde6;
/* 0x1000dde7 */ LDATA extern char public_1000dde7;
/* 0x1000dde8 */ LDATA extern char public_1000dde8;
/* 0x1000dde9 */ LDATA extern char public_1000dde9;
/* 0x1000ddea */ LDATA extern char public_1000ddea;
/* 0x1000ddeb */ LDATA extern char public_1000ddeb;
/* 0x1000ddec */ LDATA extern char public_1000ddec; // 'm'
/* 0x1000dded */ LDATA extern char public_1000dded;
/* 0x1000ddee */ LDATA extern char public_1000ddee;
/* 0x1000ddef */ LDATA extern char public_1000ddef;
/* 0x1000ddf0 */ LDATA extern char public_1000ddf0;
/* 0x1000ddf1 */ LDATA extern char public_1000ddf1;
/* 0x1000ddf2 */ LDATA extern char public_1000ddf2;
/* 0x1000ddf3 */ LDATA extern char public_1000ddf3;
/* 0x1000ddf4 */ LDATA extern char public_1000ddf4; // '-'
/* 0x1000ddf5 */ LDATA extern char public_1000ddf5;
/* 0x1000ddf6 */ LDATA extern char public_1000ddf6;
/* 0x1000ddf7 */ LDATA extern char public_1000ddf7;
/* 0x1000ddf8 */ LDATA extern char public_1000ddf8;
/* 0x1000ddf9 */ LDATA extern char public_1000ddf9;
/* 0x1000ddfa */ LDATA extern char public_1000ddfa;
/* 0x1000ddfb */ LDATA extern char public_1000ddfb;
/* 0x1000ddfc */ LDATA extern char public_1000ddfc;
/* 0x1000ddfd */ LDATA extern char public_1000ddfd;
/* 0x1000ddfe */ LDATA extern char public_1000ddfe;
/* 0x1000ddff */ LDATA extern char public_1000ddff;
/* 0x1000de00 */ LDATA extern char public_1000de00;
/* 0x1000de01 */ LDATA extern char public_1000de01;
/* 0x1000de02 */ LDATA extern char public_1000de02;
/* 0x1000de03 */ LDATA extern char public_1000de03;
/* 0x1000de04 */ LDATA extern char public_1000de04;
/* 0x1000de05 */ LDATA extern char public_1000de05;
/* 0x1000de06 */ LDATA extern char public_1000de06;
/* 0x1000de07 */ LDATA extern char public_1000de07;
/* 0x1000de08 */ LDATA extern char public_1000de08;
/* 0x1000de09 */ LDATA extern char public_1000de09;
/* 0x1000de0a */ LDATA extern char public_1000de0a;
/* 0x1000de0b */ LDATA extern char public_1000de0b;
/* 0x1000de0c */ LDATA extern char public_1000de0c;
/* 0x1000de0d */ LDATA extern char public_1000de0d;
/* 0x1000de0e */ LDATA extern char public_1000de0e;
/* 0x1000de0f */ LDATA extern char public_1000de0f;
/* 0x1000de10 */ LDATA extern char public_1000de10;
/* 0x1000de11 */ LDATA extern char public_1000de11;
/* 0x1000de12 */ LDATA extern char public_1000de12;
/* 0x1000de13 */ LDATA extern char public_1000de13;
/* 0x1000de14 */ LDATA extern char public_1000de14; // 'M'
/* 0x1000de15 */ LDATA extern char public_1000de15;
/* 0x1000de16 */ LDATA extern char public_1000de16;
/* 0x1000de17 */ LDATA extern char public_1000de17;
/* 0x1000de18 */ LDATA extern char public_1000de18;
/* 0x1000de19 */ LDATA extern char public_1000de19;
/* 0x1000de1a */ LDATA extern char public_1000de1a;
/* 0x1000de1b */ LDATA extern char public_1000de1b;
/* 0x1000de1c */ LDATA extern char public_1000de1c;
/* 0x1000de1d */ LDATA extern char public_1000de1d;
/* 0x1000de1e */ LDATA extern char public_1000de1e;
/* 0x1000de1f */ LDATA extern char public_1000de1f;
/* 0x1000de20 */ LDATA extern char public_1000de20; // 'P'
/* 0x1000de21 */ LDATA extern char public_1000de21;
/* 0x1000de22 */ LDATA extern char public_1000de22;
/* 0x1000de23 */ LDATA extern char public_1000de23;
/* 0x1000de24 */ LDATA extern char public_1000de24;
/* 0x1000de25 */ LDATA extern char public_1000de25;
/* 0x1000de26 */ LDATA extern char public_1000de26;
/* 0x1000de27 */ LDATA extern char public_1000de27;
/* 0x1000de28 */ LDATA extern char public_1000de28;
/* 0x1000de29 */ LDATA extern char public_1000de29;
/* 0x1000de2a */ LDATA extern char public_1000de2a;
/* 0x1000de2b */ LDATA extern char public_1000de2b;
/* 0x1000de2c */ LDATA extern char public_1000de2c; // 'S'
/* 0x1000de2d */ LDATA extern char public_1000de2d;
/* 0x1000de2e */ LDATA extern char public_1000de2e;
/* 0x1000de2f */ LDATA extern char public_1000de2f;
/* 0x1000de30 */ LDATA extern char public_1000de30;
/* 0x1000de31 */ LDATA extern char public_1000de31;
/* 0x1000de32 */ LDATA extern char public_1000de32;
/* 0x1000de33 */ LDATA extern char public_1000de33;
/* 0x1000de34 */ LDATA extern char public_1000de34;
/* 0x1000de35 */ LDATA extern char public_1000de35;
/* 0x1000de36 */ LDATA extern char public_1000de36;
/* 0x1000de37 */ LDATA extern char public_1000de37;
/* 0x1000de38 */ LDATA extern char public_1000de38; // 'U'
/* 0x1000de39 */ LDATA extern char public_1000de39;
/* 0x1000de3a */ LDATA extern char public_1000de3a;
/* 0x1000de3b */ LDATA extern char public_1000de3b;
/* 0x1000de3c */ LDATA extern char public_1000de3c;
/* 0x1000de3d */ LDATA extern char public_1000de3d;
/* 0x1000de3e */ LDATA extern char public_1000de3e;
/* 0x1000de3f */ LDATA extern char public_1000de3f;
/* 0x1000de40 */ LDATA extern char public_1000de40; // 'S'
/* 0x1000de41 */ LDATA extern char public_1000de41;
/* 0x1000de42 */ LDATA extern char public_1000de42;
/* 0x1000de43 */ LDATA extern char public_1000de43;
/* 0x1000de44 */ LDATA extern char public_1000de44; // '#'
/* 0x1000de45 */ LDATA extern char public_1000de45;
/* 0x1000de46 */ LDATA extern char public_1000de46;
/* 0x1000de47 */ LDATA extern char public_1000de47;
/* 0x1000de48 */ LDATA extern char public_1000de48;
/* 0x1000de49 */ LDATA extern char public_1000de49;
/* 0x1000de4a */ LDATA extern char public_1000de4a;
/* 0x1000de4b */ LDATA extern char public_1000de4b;
/* 0x1000de4c */ LDATA extern char public_1000de4c; // 's'
/* 0x1000de4d */ LDATA extern char public_1000de4d;
/* 0x1000de4e */ LDATA extern char public_1000de4e;
/* 0x1000de4f */ LDATA extern char public_1000de4f;
/* 0x1000de50 */ LDATA extern char public_1000de50;
/* 0x1000de51 */ LDATA extern char public_1000de51;
/* 0x1000de52 */ LDATA extern char public_1000de52;
/* 0x1000de53 */ LDATA extern char public_1000de53;
/* 0x1000de54 */ LDATA extern char public_1000de54; // '3'
/* 0x1000de55 */ LDATA extern char public_1000de55;
/* 0x1000de56 */ LDATA extern char public_1000de56;
/* 0x1000de57 */ LDATA extern char public_1000de57;
/* 0x1000de58 */ LDATA extern char public_1000de58;
/* 0x1000de59 */ LDATA extern char public_1000de59;
/* 0x1000de5a */ LDATA extern char public_1000de5a;
/* 0x1000de5b */ LDATA extern char public_1000de5b;
/* 0x1000de5c */ LDATA extern char public_1000de5c;
/* 0x1000de5d */ LDATA extern char public_1000de5d;
/* 0x1000de5e */ LDATA extern char public_1000de5e;
/* 0x1000de5f */ LDATA extern char public_1000de5f;
/* 0x1000de60 */ LDATA extern char public_1000de60; // 'Q'
/* 0x1000de61 */ LDATA extern char public_1000de61;
/* 0x1000de62 */ LDATA extern char public_1000de62;
/* 0x1000de63 */ LDATA extern char public_1000de63;
/* 0x1000de64 */ LDATA extern char public_1000de64;
/* 0x1000de65 */ LDATA extern char public_1000de65;
/* 0x1000de66 */ LDATA extern char public_1000de66;
/* 0x1000de67 */ LDATA extern char public_1000de67;
/* 0x1000de68 */ LDATA extern char public_1000de68;
/* 0x1000de69 */ LDATA extern char public_1000de69;
/* 0x1000de6a */ LDATA extern char public_1000de6a;
/* 0x1000de6b */ LDATA extern char public_1000de6b;
/* 0x1000de6c */ LDATA extern char public_1000de6c; // 'c'
/* 0x1000de6d */ LDATA extern char public_1000de6d;
/* 0x1000de6e */ LDATA extern char public_1000de6e;
/* 0x1000de6f */ LDATA extern char public_1000de6f;
/* 0x1000de70 */ LDATA extern char public_1000de70;
/* 0x1000de71 */ LDATA extern char public_1000de71;
/* 0x1000de72 */ LDATA extern char public_1000de72;
/* 0x1000de73 */ LDATA extern char public_1000de73;
/* 0x1000de74 */ LDATA extern char public_1000de74; // '#'
/* 0x1000de75 */ LDATA extern char public_1000de75;
/* 0x1000de76 */ LDATA extern char public_1000de76;
/* 0x1000de77 */ LDATA extern char public_1000de77;
/* 0x1000de78 */ LDATA extern char public_1000de78;
/* 0x1000de79 */ LDATA extern char public_1000de79;
/* 0x1000de7a */ LDATA extern char public_1000de7a;
/* 0x1000de7b */ LDATA extern char public_1000de7b;
/* 0x1000de7c */ LDATA extern char public_1000de7c;
/* 0x1000de7d */ LDATA extern char public_1000de7d;
/* 0x1000de7e */ LDATA extern char public_1000de7e;
/* 0x1000de7f */ LDATA extern char public_1000de7f;
/* 0x1000de80 */ LDATA extern char public_1000de80;
/* 0x1000de81 */ LDATA extern char public_1000de81;
/* 0x1000de82 */ LDATA extern char public_1000de82;
/* 0x1000de83 */ LDATA extern char public_1000de83;
/* 0x1000de84 */ LDATA extern char public_1000de84;
/* 0x1000de85 */ LDATA extern char public_1000de85;
/* 0x1000de86 */ LDATA extern char public_1000de86;
/* 0x1000de87 */ LDATA extern char public_1000de87;
/* 0x1000de88 */ LDATA extern char public_1000de88;
/* 0x1000de89 */ LDATA extern char public_1000de89;
/* 0x1000de8a */ LDATA extern char public_1000de8a;
/* 0x1000de8b */ LDATA extern char public_1000de8b;
/* 0x1000de8c */ LDATA extern char public_1000de8c;
/* 0x1000de8d */ LDATA extern char public_1000de8d;
/* 0x1000de8e */ LDATA extern char public_1000de8e;
/* 0x1000de8f */ LDATA extern char public_1000de8f;
/* 0x1000de90 */ LDATA extern char public_1000de90;
/* 0x1000de91 */ LDATA extern char public_1000de91;
/* 0x1000de92 */ LDATA extern char public_1000de92;
/* 0x1000de93 */ LDATA extern char public_1000de93;
/* 0x1000de94 */ LDATA extern char public_1000de94; // 'C'
/* 0x1000de95 */ LDATA extern char public_1000de95;
/* 0x1000de96 */ LDATA extern char public_1000de96;
/* 0x1000de97 */ LDATA extern char public_1000de97;
/* 0x1000de98 */ LDATA extern char public_1000de98;
/* 0x1000de99 */ LDATA extern char public_1000de99;
/* 0x1000de9a */ LDATA extern char public_1000de9a;
/* 0x1000de9b */ LDATA extern char public_1000de9b;
/* 0x1000de9c */ LDATA extern char public_1000de9c;
/* 0x1000de9d */ LDATA extern char public_1000de9d;
/* 0x1000de9e */ LDATA extern char public_1000de9e;
/* 0x1000de9f */ LDATA extern char public_1000de9f;
/* 0x1000dea0 */ LDATA extern char public_1000dea0; // 'P'
/* 0x1000dea1 */ LDATA extern char public_1000dea1;
/* 0x1000dea2 */ LDATA extern char public_1000dea2;
/* 0x1000dea3 */ LDATA extern char public_1000dea3;
/* 0x1000dea4 */ LDATA extern char public_1000dea4;
/* 0x1000dea5 */ LDATA extern char public_1000dea5;
/* 0x1000dea6 */ LDATA extern char public_1000dea6;
/* 0x1000dea7 */ LDATA extern char public_1000dea7;
/* 0x1000dea8 */ LDATA extern char public_1000dea8;
/* 0x1000dea9 */ LDATA extern char public_1000dea9;
/* 0x1000deaa */ LDATA extern char public_1000deaa;
/* 0x1000deab */ LDATA extern char public_1000deab;
/* 0x1000deac */ LDATA extern char public_1000deac; // '['
/* 0x1000dead */ LDATA extern char public_1000dead;
/* 0x1000deae */ LDATA extern char public_1000deae;
/* 0x1000deaf */ LDATA extern char public_1000deaf;
/* 0x1000deb0 */ LDATA extern char public_1000deb0;
/* 0x1000deb1 */ LDATA extern char public_1000deb1;
/* 0x1000deb2 */ LDATA extern char public_1000deb2;
/* 0x1000deb3 */ LDATA extern char public_1000deb3;
/* 0x1000deb4 */ LDATA extern char public_1000deb4;
/* 0x1000deb5 */ LDATA extern char public_1000deb5;
/* 0x1000deb6 */ LDATA extern char public_1000deb6;
/* 0x1000deb7 */ LDATA extern char public_1000deb7;
/* 0x1000deb8 */ LDATA extern char public_1000deb8;
/* 0x1000deb9 */ LDATA extern char public_1000deb9;
/* 0x1000deba */ LDATA extern char public_1000deba;
/* 0x1000debb */ LDATA extern char public_1000debb;
/* 0x1000debc */ LDATA extern char public_1000debc;
/* 0x1000debd */ LDATA extern char public_1000debd;
/* 0x1000debe */ LDATA extern char public_1000debe;
/* 0x1000debf */ LDATA extern char public_1000debf;
/* 0x1000dec0 */ LDATA extern char public_1000dec0; // 'T'
/* 0x1000dec1 */ LDATA extern char public_1000dec1;
/* 0x1000dec2 */ LDATA extern char public_1000dec2;
/* 0x1000dec3 */ LDATA extern char public_1000dec3;
/* 0x1000dec4 */ LDATA extern char public_1000dec4; // 'C'
/* 0x1000dec5 */ LDATA extern char public_1000dec5;
/* 0x1000dec6 */ LDATA extern char public_1000dec6;
/* 0x1000dec7 */ LDATA extern char public_1000dec7;
/* 0x1000dec8 */ LDATA extern char public_1000dec8;
/* 0x1000dec9 */ LDATA extern char public_1000dec9;
/* 0x1000deca */ LDATA extern char public_1000deca;
/* 0x1000decb */ LDATA extern char public_1000decb;
/* 0x1000decc */ LDATA extern char public_1000decc; // '{'
/* 0x1000decd */ LDATA extern char public_1000decd;
/* 0x1000dece */ LDATA extern char public_1000dece;
/* 0x1000decf */ LDATA extern char public_1000decf;
/* 0x1000ded0 */ LDATA extern char public_1000ded0;
/* 0x1000ded1 */ LDATA extern char public_1000ded1;
/* 0x1000ded2 */ LDATA extern char public_1000ded2;
/* 0x1000ded3 */ LDATA extern char public_1000ded3;
/* 0x1000ded4 */ LDATA extern char public_1000ded4; // ';'
/* 0x1000ded5 */ LDATA extern char public_1000ded5;
/* 0x1000ded6 */ LDATA extern char public_1000ded6;
/* 0x1000ded7 */ LDATA extern char public_1000ded7;
/* 0x1000ded8 */ LDATA extern char public_1000ded8;
/* 0x1000ded9 */ LDATA extern char public_1000ded9;
/* 0x1000deda */ LDATA extern char public_1000deda;
/* 0x1000dedb */ LDATA extern char public_1000dedb;
/* 0x1000dedc */ LDATA extern char public_1000dedc;
/* 0x1000dedd */ LDATA extern char public_1000dedd;
/* 0x1000dede */ LDATA extern char public_1000dede;
/* 0x1000dedf */ LDATA extern char public_1000dedf;
/* 0x1000dee0 */ LDATA extern char public_1000dee0; // 'R'
/* 0x1000dee1 */ LDATA extern char public_1000dee1;
/* 0x1000dee2 */ LDATA extern char public_1000dee2;
/* 0x1000dee3 */ LDATA extern char public_1000dee3;
/* 0x1000dee4 */ LDATA extern char public_1000dee4;
/* 0x1000dee5 */ LDATA extern char public_1000dee5;
/* 0x1000dee6 */ LDATA extern char public_1000dee6;
/* 0x1000dee7 */ LDATA extern char public_1000dee7;
/* 0x1000dee8 */ LDATA extern char public_1000dee8;
/* 0x1000dee9 */ LDATA extern char public_1000dee9;
/* 0x1000deea */ LDATA extern char public_1000deea;
/* 0x1000deeb */ LDATA extern char public_1000deeb;
/* 0x1000deec */ LDATA extern char public_1000deec; // 'k'
/* 0x1000deed */ LDATA extern char public_1000deed;
/* 0x1000deee */ LDATA extern char public_1000deee;
/* 0x1000deef */ LDATA extern char public_1000deef;
/* 0x1000def0 */ LDATA extern char public_1000def0;
/* 0x1000def1 */ LDATA extern char public_1000def1;
/* 0x1000def2 */ LDATA extern char public_1000def2;
/* 0x1000def3 */ LDATA extern char public_1000def3;
/* 0x1000def4 */ LDATA extern char public_1000def4; // '+'
/* 0x1000def5 */ LDATA extern char public_1000def5;
/* 0x1000def6 */ LDATA extern char public_1000def6;
/* 0x1000def7 */ LDATA extern char public_1000def7;
/* 0x1000def8 */ LDATA extern char public_1000def8;
/* 0x1000def9 */ LDATA extern char public_1000def9;
/* 0x1000defa */ LDATA extern char public_1000defa;
/* 0x1000defb */ LDATA extern char public_1000defb;
/* 0x1000defc */ LDATA extern char public_1000defc;
/* 0x1000defd */ LDATA extern char public_1000defd;
/* 0x1000defe */ LDATA extern char public_1000defe;
/* 0x1000deff */ LDATA extern char public_1000deff;
/* 0x1000df00 */ LDATA extern char public_1000df00;
/* 0x1000df01 */ LDATA extern char public_1000df01;
/* 0x1000df02 */ LDATA extern char public_1000df02;
/* 0x1000df03 */ LDATA extern char public_1000df03;
/* 0x1000df04 */ LDATA extern char public_1000df04;
/* 0x1000df05 */ LDATA extern char public_1000df05;
/* 0x1000df06 */ LDATA extern char public_1000df06;
/* 0x1000df07 */ LDATA extern char public_1000df07;
/* 0x1000df08 */ LDATA extern char public_1000df08;
/* 0x1000df09 */ LDATA extern char public_1000df09;
/* 0x1000df0a */ LDATA extern char public_1000df0a;
/* 0x1000df0b */ LDATA extern char public_1000df0b;
/* 0x1000df0c */ LDATA extern char public_1000df0c;
/* 0x1000df0d */ LDATA extern char public_1000df0d;
/* 0x1000df0e */ LDATA extern char public_1000df0e;
/* 0x1000df0f */ LDATA extern char public_1000df0f;
/* 0x1000df10 */ LDATA extern char public_1000df10;
/* 0x1000df11 */ LDATA extern char public_1000df11;
/* 0x1000df12 */ LDATA extern char public_1000df12;
/* 0x1000df13 */ LDATA extern char public_1000df13;
/* 0x1000df14 */ LDATA extern char public_1000df14; // 'K'
/* 0x1000df15 */ LDATA extern char public_1000df15;
/* 0x1000df16 */ LDATA extern char public_1000df16;
/* 0x1000df17 */ LDATA extern char public_1000df17;
/* 0x1000df18 */ LDATA extern char public_1000df18;
/* 0x1000df19 */ LDATA extern char public_1000df19;
/* 0x1000df1a */ LDATA extern char public_1000df1a;
/* 0x1000df1b */ LDATA extern char public_1000df1b;
/* 0x1000df1c */ LDATA extern char public_1000df1c;
/* 0x1000df1d */ LDATA extern char public_1000df1d;
/* 0x1000df1e */ LDATA extern char public_1000df1e;
/* 0x1000df1f */ LDATA extern char public_1000df1f;
/* 0x1000df20 */ LDATA extern char public_1000df20; // 'P'
/* 0x1000df21 */ LDATA extern char public_1000df21;
/* 0x1000df22 */ LDATA extern char public_1000df22;
/* 0x1000df23 */ LDATA extern char public_1000df23;
/* 0x1000df24 */ LDATA extern char public_1000df24;
/* 0x1000df25 */ LDATA extern char public_1000df25;
/* 0x1000df26 */ LDATA extern char public_1000df26;
/* 0x1000df27 */ LDATA extern char public_1000df27;
/* 0x1000df28 */ LDATA extern char public_1000df28;
/* 0x1000df29 */ LDATA extern char public_1000df29;
/* 0x1000df2a */ LDATA extern char public_1000df2a;
/* 0x1000df2b */ LDATA extern char public_1000df2b;
/* 0x1000df2c */ LDATA extern char public_1000df2c; // 'W'
/* 0x1000df2d */ LDATA extern char public_1000df2d;
/* 0x1000df2e */ LDATA extern char public_1000df2e;
/* 0x1000df2f */ LDATA extern char public_1000df2f;
/* 0x1000df30 */ LDATA extern char public_1000df30;
/* 0x1000df31 */ LDATA extern char public_1000df31;
/* 0x1000df32 */ LDATA extern char public_1000df32;
/* 0x1000df33 */ LDATA extern char public_1000df33;
/* 0x1000df34 */ LDATA extern char public_1000df34;
/* 0x1000df35 */ LDATA extern char public_1000df35;
/* 0x1000df36 */ LDATA extern char public_1000df36;
/* 0x1000df37 */ LDATA extern char public_1000df37;
/* 0x1000df38 */ LDATA extern char public_1000df38;
/* 0x1000df39 */ LDATA extern char public_1000df39;
/* 0x1000df3a */ LDATA extern char public_1000df3a;
/* 0x1000df3b */ LDATA extern char public_1000df3b;
/* 0x1000df3c */ LDATA extern char public_1000df3c;
/* 0x1000df3d */ LDATA extern char public_1000df3d;
/* 0x1000df3e */ LDATA extern char public_1000df3e;
/* 0x1000df3f */ LDATA extern char public_1000df3f;
/* 0x1000df40 */ LDATA extern char public_1000df40; // 'S'
/* 0x1000df41 */ LDATA extern char public_1000df41;
/* 0x1000df42 */ LDATA extern char public_1000df42;
/* 0x1000df43 */ LDATA extern char public_1000df43;
/* 0x1000df44 */ LDATA extern char public_1000df44; // '3'
/* 0x1000df45 */ LDATA extern char public_1000df45;
/* 0x1000df46 */ LDATA extern char public_1000df46;
/* 0x1000df47 */ LDATA extern char public_1000df47;
/* 0x1000df48 */ LDATA extern char public_1000df48;
/* 0x1000df49 */ LDATA extern char public_1000df49;
/* 0x1000df4a */ LDATA extern char public_1000df4a;
/* 0x1000df4b */ LDATA extern char public_1000df4b;
/* 0x1000df4c */ LDATA extern char public_1000df4c; // 'w'
/* 0x1000df4d */ LDATA extern char public_1000df4d;
/* 0x1000df4e */ LDATA extern char public_1000df4e;
/* 0x1000df4f */ LDATA extern char public_1000df4f;
/* 0x1000df50 */ LDATA extern char public_1000df50;
/* 0x1000df51 */ LDATA extern char public_1000df51;
/* 0x1000df52 */ LDATA extern char public_1000df52;
/* 0x1000df53 */ LDATA extern char public_1000df53;
/* 0x1000df54 */ LDATA extern char public_1000df54; // '7'
/* 0x1000df55 */ LDATA extern char public_1000df55;
/* 0x1000df56 */ LDATA extern char public_1000df56;
/* 0x1000df57 */ LDATA extern char public_1000df57;
/* 0x1000df58 */ LDATA extern char public_1000df58;
/* 0x1000df59 */ LDATA extern char public_1000df59;
/* 0x1000df5a */ LDATA extern char public_1000df5a;
/* 0x1000df5b */ LDATA extern char public_1000df5b;
/* 0x1000df5c */ LDATA extern char public_1000df5c;
/* 0x1000df5d */ LDATA extern char public_1000df5d;
/* 0x1000df5e */ LDATA extern char public_1000df5e;
/* 0x1000df5f */ LDATA extern char public_1000df5f;
/* 0x1000df60 */ LDATA extern char public_1000df60; // 'Q'
/* 0x1000df61 */ LDATA extern char public_1000df61;
/* 0x1000df62 */ LDATA extern char public_1000df62;
/* 0x1000df63 */ LDATA extern char public_1000df63;
/* 0x1000df64 */ LDATA extern char public_1000df64;
/* 0x1000df65 */ LDATA extern char public_1000df65;
/* 0x1000df66 */ LDATA extern char public_1000df66;
/* 0x1000df67 */ LDATA extern char public_1000df67;
/* 0x1000df68 */ LDATA extern char public_1000df68;
/* 0x1000df69 */ LDATA extern char public_1000df69;
/* 0x1000df6a */ LDATA extern char public_1000df6a;
/* 0x1000df6b */ LDATA extern char public_1000df6b;
/* 0x1000df6c */ LDATA extern char public_1000df6c; // 'g'
/* 0x1000df6d */ LDATA extern char public_1000df6d;
/* 0x1000df6e */ LDATA extern char public_1000df6e;
/* 0x1000df6f */ LDATA extern char public_1000df6f;
/* 0x1000df70 */ LDATA extern char public_1000df70;
/* 0x1000df71 */ LDATA extern char public_1000df71;
/* 0x1000df72 */ LDATA extern char public_1000df72;
/* 0x1000df73 */ LDATA extern char public_1000df73;
/* 0x1000df74 */ LDATA extern char public_1000df74; // '''
/* 0x1000df75 */ LDATA extern char public_1000df75;
/* 0x1000df76 */ LDATA extern char public_1000df76;
/* 0x1000df77 */ LDATA extern char public_1000df77;
/* 0x1000df78 */ LDATA extern char public_1000df78;
/* 0x1000df79 */ LDATA extern char public_1000df79;
/* 0x1000df7a */ LDATA extern char public_1000df7a;
/* 0x1000df7b */ LDATA extern char public_1000df7b;
/* 0x1000df7c */ LDATA extern char public_1000df7c;
/* 0x1000df7d */ LDATA extern char public_1000df7d;
/* 0x1000df7e */ LDATA extern char public_1000df7e;
/* 0x1000df7f */ LDATA extern char public_1000df7f;
/* 0x1000df80 */ LDATA extern char public_1000df80;
/* 0x1000df81 */ LDATA extern char public_1000df81;
/* 0x1000df82 */ LDATA extern char public_1000df82;
/* 0x1000df83 */ LDATA extern char public_1000df83;
/* 0x1000df84 */ LDATA extern char public_1000df84;
/* 0x1000df85 */ LDATA extern char public_1000df85;
/* 0x1000df86 */ LDATA extern char public_1000df86;
/* 0x1000df87 */ LDATA extern char public_1000df87;
/* 0x1000df88 */ LDATA extern char public_1000df88;
/* 0x1000df89 */ LDATA extern char public_1000df89;
/* 0x1000df8a */ LDATA extern char public_1000df8a;
/* 0x1000df8b */ LDATA extern char public_1000df8b;
/* 0x1000df8c */ LDATA extern char public_1000df8c;
/* 0x1000df8d */ LDATA extern char public_1000df8d;
/* 0x1000df8e */ LDATA extern char public_1000df8e;
/* 0x1000df8f */ LDATA extern char public_1000df8f;
/* 0x1000df90 */ LDATA extern char public_1000df90;
/* 0x1000df91 */ LDATA extern char public_1000df91;
/* 0x1000df92 */ LDATA extern char public_1000df92;
/* 0x1000df93 */ LDATA extern char public_1000df93;
/* 0x1000df94 */ LDATA extern char public_1000df94; // 'G'
/* 0x1000df95 */ LDATA extern char public_1000df95;
/* 0x1000df96 */ LDATA extern char public_1000df96;
/* 0x1000df97 */ LDATA extern char public_1000df97;
/* 0x1000df98 */ LDATA extern char public_1000df98;
/* 0x1000df99 */ LDATA extern char public_1000df99;
/* 0x1000df9a */ LDATA extern char public_1000df9a;
/* 0x1000df9b */ LDATA extern char public_1000df9b;
/* 0x1000df9c */ LDATA extern char public_1000df9c;
/* 0x1000df9d */ LDATA extern char public_1000df9d;
/* 0x1000df9e */ LDATA extern char public_1000df9e;
/* 0x1000df9f */ LDATA extern char public_1000df9f;
/* 0x1000dfa0 */ LDATA extern char public_1000dfa0; // 'P'
/* 0x1000dfa1 */ LDATA extern char public_1000dfa1;
/* 0x1000dfa2 */ LDATA extern char public_1000dfa2;
/* 0x1000dfa3 */ LDATA extern char public_1000dfa3;
/* 0x1000dfa4 */ LDATA extern char public_1000dfa4;
/* 0x1000dfa5 */ LDATA extern char public_1000dfa5;
/* 0x1000dfa6 */ LDATA extern char public_1000dfa6;
/* 0x1000dfa7 */ LDATA extern char public_1000dfa7;
/* 0x1000dfa8 */ LDATA extern char public_1000dfa8;
/* 0x1000dfa9 */ LDATA extern char public_1000dfa9;
/* 0x1000dfaa */ LDATA extern char public_1000dfaa;
/* 0x1000dfab */ LDATA extern char public_1000dfab;
/* 0x1000dfac */ LDATA extern char public_1000dfac; // '_'
/* 0x1000dfad */ LDATA extern char public_1000dfad;
/* 0x1000dfae */ LDATA extern char public_1000dfae;
/* 0x1000dfaf */ LDATA extern char public_1000dfaf;
/* 0x1000dfb0 */ LDATA extern char public_1000dfb0;
/* 0x1000dfb1 */ LDATA extern char public_1000dfb1;
/* 0x1000dfb2 */ LDATA extern char public_1000dfb2;
/* 0x1000dfb3 */ LDATA extern char public_1000dfb3;
/* 0x1000dfb4 */ LDATA extern char public_1000dfb4;
/* 0x1000dfb5 */ LDATA extern char public_1000dfb5;
/* 0x1000dfb6 */ LDATA extern char public_1000dfb6;
/* 0x1000dfb7 */ LDATA extern char public_1000dfb7;
/* 0x1000dfb8 */ LDATA extern char public_1000dfb8;
/* 0x1000dfb9 */ LDATA extern char public_1000dfb9;
/* 0x1000dfba */ LDATA extern char public_1000dfba;
/* 0x1000dfbb */ LDATA extern char public_1000dfbb;
/* 0x1000dfbc */ LDATA extern char public_1000dfbc;
/* 0x1000dfbd */ LDATA extern char public_1000dfbd;
/* 0x1000dfbe */ LDATA extern char public_1000dfbe;
/* 0x1000dfbf */ LDATA extern char public_1000dfbf;
/* 0x1000dfc0 */ LDATA extern char public_1000dfc0; // 'T'
/* 0x1000dfc1 */ LDATA extern char public_1000dfc1;
/* 0x1000dfc2 */ LDATA extern char public_1000dfc2;
/* 0x1000dfc3 */ LDATA extern char public_1000dfc3;
/* 0x1000dfc4 */ LDATA extern char public_1000dfc4; // 'c'
/* 0x1000dfc5 */ LDATA extern char public_1000dfc5;
/* 0x1000dfc6 */ LDATA extern char public_1000dfc6;
/* 0x1000dfc7 */ LDATA extern char public_1000dfc7;
/* 0x1000dfc8 */ LDATA extern char public_1000dfc8;
/* 0x1000dfc9 */ LDATA extern char public_1000dfc9;
/* 0x1000dfca */ LDATA extern char public_1000dfca;
/* 0x1000dfcb */ LDATA extern char public_1000dfcb;
/* 0x1000dfcc */ LDATA extern char public_1000dfcc;
/* 0x1000dfcd */ LDATA extern char public_1000dfcd;
/* 0x1000dfce */ LDATA extern char public_1000dfce;
/* 0x1000dfcf */ LDATA extern char public_1000dfcf;
/* 0x1000dfd0 */ LDATA extern char public_1000dfd0;
/* 0x1000dfd1 */ LDATA extern char public_1000dfd1;
/* 0x1000dfd2 */ LDATA extern char public_1000dfd2;
/* 0x1000dfd3 */ LDATA extern char public_1000dfd3;
/* 0x1000dfd4 */ LDATA extern char public_1000dfd4; // '?'
/* 0x1000dfd5 */ LDATA extern char public_1000dfd5;
/* 0x1000dfd6 */ LDATA extern char public_1000dfd6;
/* 0x1000dfd7 */ LDATA extern char public_1000dfd7;
/* 0x1000dfd8 */ LDATA extern char public_1000dfd8;
/* 0x1000dfd9 */ LDATA extern char public_1000dfd9;
/* 0x1000dfda */ LDATA extern char public_1000dfda;
/* 0x1000dfdb */ LDATA extern char public_1000dfdb;
/* 0x1000dfdc */ LDATA extern char public_1000dfdc;
/* 0x1000dfdd */ LDATA extern char public_1000dfdd;
/* 0x1000dfde */ LDATA extern char public_1000dfde;
/* 0x1000dfdf */ LDATA extern char public_1000dfdf;
/* 0x1000dfe0 */ LDATA extern char public_1000dfe0; // 'R'
/* 0x1000dfe1 */ LDATA extern char public_1000dfe1;
/* 0x1000dfe2 */ LDATA extern char public_1000dfe2;
/* 0x1000dfe3 */ LDATA extern char public_1000dfe3;
/* 0x1000dfe4 */ LDATA extern char public_1000dfe4;
/* 0x1000dfe5 */ LDATA extern char public_1000dfe5;
/* 0x1000dfe6 */ LDATA extern char public_1000dfe6;
/* 0x1000dfe7 */ LDATA extern char public_1000dfe7;
/* 0x1000dfe8 */ LDATA extern char public_1000dfe8;
/* 0x1000dfe9 */ LDATA extern char public_1000dfe9;
/* 0x1000dfea */ LDATA extern char public_1000dfea;
/* 0x1000dfeb */ LDATA extern char public_1000dfeb;
/* 0x1000dfec */ LDATA extern char public_1000dfec; // 'o'
/* 0x1000dfed */ LDATA extern char public_1000dfed;
/* 0x1000dfee */ LDATA extern char public_1000dfee;
/* 0x1000dfef */ LDATA extern char public_1000dfef;
/* 0x1000dff0 */ LDATA extern char public_1000dff0;
/* 0x1000dff1 */ LDATA extern char public_1000dff1;
/* 0x1000dff2 */ LDATA extern char public_1000dff2;
/* 0x1000dff3 */ LDATA extern char public_1000dff3;
/* 0x1000dff4 */ LDATA extern char public_1000dff4; // '/'
/* 0x1000dff5 */ LDATA extern char public_1000dff5;
/* 0x1000dff6 */ LDATA extern char public_1000dff6;
/* 0x1000dff7 */ LDATA extern char public_1000dff7;
/* 0x1000dff8 */ LDATA extern char public_1000dff8;
/* 0x1000dff9 */ LDATA extern char public_1000dff9;
/* 0x1000dffa */ LDATA extern char public_1000dffa;
/* 0x1000dffb */ LDATA extern char public_1000dffb;
/* 0x1000dffc */ LDATA extern char public_1000dffc;
/* 0x1000dffd */ LDATA extern char public_1000dffd;
/* 0x1000dffe */ LDATA extern char public_1000dffe;
/* 0x1000dfff */ LDATA extern char public_1000dfff;
/* 0x1000e000 */ LDATA extern char public_1000e000;
/* 0x1000e001 */ LDATA extern char public_1000e001;
/* 0x1000e002 */ LDATA extern char public_1000e002;
/* 0x1000e003 */ LDATA extern char public_1000e003;
/* 0x1000e004 */ LDATA extern char public_1000e004;
/* 0x1000e005 */ LDATA extern char public_1000e005;
/* 0x1000e006 */ LDATA extern char public_1000e006;
/* 0x1000e007 */ LDATA extern char public_1000e007;
/* 0x1000e008 */ LDATA extern char public_1000e008;
/* 0x1000e009 */ LDATA extern char public_1000e009;
/* 0x1000e00a */ LDATA extern char public_1000e00a;
/* 0x1000e00b */ LDATA extern char public_1000e00b;
/* 0x1000e00c */ LDATA extern char public_1000e00c;
/* 0x1000e00d */ LDATA extern char public_1000e00d;
/* 0x1000e00e */ LDATA extern char public_1000e00e;
/* 0x1000e00f */ LDATA extern char public_1000e00f;
/* 0x1000e010 */ LDATA extern char public_1000e010;
/* 0x1000e011 */ LDATA extern char public_1000e011;
/* 0x1000e012 */ LDATA extern char public_1000e012;
/* 0x1000e013 */ LDATA extern char public_1000e013;
/* 0x1000e014 */ LDATA extern char public_1000e014; // 'O'
/* 0x1000e015 */ LDATA extern char public_1000e015;
/* 0x1000e016 */ LDATA extern char public_1000e016;
/* 0x1000e017 */ LDATA extern char public_1000e017;
/* 0x1000e018 */ LDATA extern char public_1000e018;
/* 0x1000e019 */ LDATA extern char public_1000e019;
/* 0x1000e01a */ LDATA extern char public_1000e01a;
/* 0x1000e01b */ LDATA extern char public_1000e01b;
/* 0x1000e01c */ LDATA extern char public_1000e01c;
/* 0x1000e01d */ LDATA extern char public_1000e01d;
/* 0x1000e01e */ LDATA extern char public_1000e01e;
/* 0x1000e01f */ LDATA extern char public_1000e01f;
/* 0x1000e020 */ LDATA extern char public_1000e020; // 'P'
/* 0x1000e021 */ LDATA extern char public_1000e021;
/* 0x1000e022 */ LDATA extern char public_1000e022;
/* 0x1000e023 */ LDATA extern char public_1000e023;
/* 0x1000e024 */ LDATA extern char public_1000e024;
/* 0x1000e025 */ LDATA extern char public_1000e025;
/* 0x1000e026 */ LDATA extern char public_1000e026;
/* 0x1000e027 */ LDATA extern char public_1000e027;
/* 0x1000e028 */ LDATA extern char public_1000e028; // 'W'
/* 0x1000e029 */ LDATA extern char public_1000e029;
/* 0x1000e02a */ LDATA extern char public_1000e02a;
/* 0x1000e02b */ LDATA extern char public_1000e02b;
/* 0x1000e02c */ LDATA extern char public_1000e02c;
/* 0x1000e02d */ LDATA extern char public_1000e02d;
/* 0x1000e02e */ LDATA extern char public_1000e02e;
/* 0x1000e02f */ LDATA extern char public_1000e02f;
/* 0x1000e030 */ LDATA extern char public_1000e030; // 'S'
/* 0x1000e031 */ LDATA extern char public_1000e031;
/* 0x1000e032 */ LDATA extern char public_1000e032;
/* 0x1000e033 */ LDATA extern char public_1000e033;
/* 0x1000e034 */ LDATA extern char public_1000e034;
/* 0x1000e035 */ LDATA extern char public_1000e035;
/* 0x1000e036 */ LDATA extern char public_1000e036;
/* 0x1000e037 */ LDATA extern char public_1000e037;
/* 0x1000e038 */ LDATA extern char public_1000e038; // '['
/* 0x1000e039 */ LDATA extern char public_1000e039;
/* 0x1000e03a */ LDATA extern char public_1000e03a;
/* 0x1000e03b */ LDATA extern char public_1000e03b;
/* 0x1000e03c */ LDATA extern char public_1000e03c;
/* 0x1000e03d */ LDATA extern char public_1000e03d;
/* 0x1000e03e */ LDATA extern char public_1000e03e;
/* 0x1000e03f */ LDATA extern char public_1000e03f;
/* 0x1000e040 */ LDATA extern char public_1000e040; // 'Q'
/* 0x1000e041 */ LDATA extern char public_1000e041;
/* 0x1000e042 */ LDATA extern char public_1000e042;
/* 0x1000e043 */ LDATA extern char public_1000e043;
/* 0x1000e044 */ LDATA extern char public_1000e044;
/* 0x1000e045 */ LDATA extern char public_1000e045;
/* 0x1000e046 */ LDATA extern char public_1000e046;
/* 0x1000e047 */ LDATA extern char public_1000e047;
/* 0x1000e048 */ LDATA extern char public_1000e048; // 'Y'
/* 0x1000e049 */ LDATA extern char public_1000e049;
/* 0x1000e04a */ LDATA extern char public_1000e04a;
/* 0x1000e04b */ LDATA extern char public_1000e04b;
/* 0x1000e04c */ LDATA extern char public_1000e04c;
/* 0x1000e04d */ LDATA extern char public_1000e04d;
/* 0x1000e04e */ LDATA extern char public_1000e04e;
/* 0x1000e04f */ LDATA extern char public_1000e04f;
/* 0x1000e050 */ LDATA extern char public_1000e050; // 'U'
/* 0x1000e051 */ LDATA extern char public_1000e051;
/* 0x1000e052 */ LDATA extern char public_1000e052;
/* 0x1000e053 */ LDATA extern char public_1000e053;
/* 0x1000e054 */ LDATA extern char public_1000e054; // 'A'
/* 0x1000e055 */ LDATA extern char public_1000e055;
/* 0x1000e056 */ LDATA extern char public_1000e056;
/* 0x1000e057 */ LDATA extern char public_1000e057;
/* 0x1000e058 */ LDATA extern char public_1000e058; // ']'
/* 0x1000e059 */ LDATA extern char public_1000e059;
/* 0x1000e05a */ LDATA extern char public_1000e05a;
/* 0x1000e05b */ LDATA extern char public_1000e05b;
/* 0x1000e05c */ LDATA extern char public_1000e05c;
/* 0x1000e05d */ LDATA extern char public_1000e05d; // '@'
/* 0x1000e05e */ LDATA extern char public_1000e05e;
/* 0x1000e05f */ LDATA extern char public_1000e05f;
/* 0x1000e060 */ LDATA extern char public_1000e060; // 'P'
/* 0x1000e061 */ LDATA extern char public_1000e061;
/* 0x1000e062 */ LDATA extern char public_1000e062;
/* 0x1000e063 */ LDATA extern char public_1000e063;
/* 0x1000e064 */ LDATA extern char public_1000e064;
/* 0x1000e065 */ LDATA extern char public_1000e065;
/* 0x1000e066 */ LDATA extern char public_1000e066;
/* 0x1000e067 */ LDATA extern char public_1000e067;
/* 0x1000e068 */ LDATA extern char public_1000e068; // 'X'
/* 0x1000e069 */ LDATA extern char public_1000e069;
/* 0x1000e06a */ LDATA extern char public_1000e06a;
/* 0x1000e06b */ LDATA extern char public_1000e06b;
/* 0x1000e06c */ LDATA extern char public_1000e06c;
/* 0x1000e06d */ LDATA extern char public_1000e06d;
/* 0x1000e06e */ LDATA extern char public_1000e06e;
/* 0x1000e06f */ LDATA extern char public_1000e06f;
/* 0x1000e070 */ LDATA extern char public_1000e070; // 'T'
/* 0x1000e071 */ LDATA extern char public_1000e071;
/* 0x1000e072 */ LDATA extern char public_1000e072;
/* 0x1000e073 */ LDATA extern char public_1000e073;
/* 0x1000e074 */ LDATA extern char public_1000e074; // '!'
/* 0x1000e075 */ LDATA extern char public_1000e075;
/* 0x1000e076 */ LDATA extern char public_1000e076;
/* 0x1000e077 */ LDATA extern char public_1000e077;
/* 0x1000e078 */ LDATA extern char public_1000e078; // '\'
/* 0x1000e079 */ LDATA extern char public_1000e079;
/* 0x1000e07a */ LDATA extern char public_1000e07a;
/* 0x1000e07b */ LDATA extern char public_1000e07b;
/* 0x1000e07c */ LDATA extern char public_1000e07c;
/* 0x1000e07d */ LDATA extern char public_1000e07d; // ' '
/* 0x1000e07e */ LDATA extern char public_1000e07e;
/* 0x1000e07f */ LDATA extern char public_1000e07f;
/* 0x1000e080 */ LDATA extern char public_1000e080; // 'R'
/* 0x1000e081 */ LDATA extern char public_1000e081;
/* 0x1000e082 */ LDATA extern char public_1000e082;
/* 0x1000e083 */ LDATA extern char public_1000e083;
/* 0x1000e084 */ LDATA extern char public_1000e084;
/* 0x1000e085 */ LDATA extern char public_1000e085;
/* 0x1000e086 */ LDATA extern char public_1000e086;
/* 0x1000e087 */ LDATA extern char public_1000e087;
/* 0x1000e088 */ LDATA extern char public_1000e088; // 'Z'
/* 0x1000e089 */ LDATA extern char public_1000e089;
/* 0x1000e08a */ LDATA extern char public_1000e08a;
/* 0x1000e08b */ LDATA extern char public_1000e08b;
/* 0x1000e08c */ LDATA extern char public_1000e08c;
/* 0x1000e08d */ LDATA extern char public_1000e08d;
/* 0x1000e08e */ LDATA extern char public_1000e08e;
/* 0x1000e08f */ LDATA extern char public_1000e08f;
/* 0x1000e090 */ LDATA extern char public_1000e090; // 'V'
/* 0x1000e091 */ LDATA extern char public_1000e091;
/* 0x1000e092 */ LDATA extern char public_1000e092;
/* 0x1000e093 */ LDATA extern char public_1000e093;
/* 0x1000e094 */ LDATA extern char public_1000e094;
/* 0x1000e095 */ LDATA extern char public_1000e095;
/* 0x1000e096 */ LDATA extern char public_1000e096;
/* 0x1000e097 */ LDATA extern char public_1000e097;
/* 0x1000e098 */ LDATA extern char public_1000e098;
/* 0x1000e099 */ LDATA extern char public_1000e099;
/* 0x1000e09a */ LDATA extern char public_1000e09a;
/* 0x1000e09b */ LDATA extern char public_1000e09b;
/* 0x1000e09c */ LDATA extern char public_1000e09c;
/* 0x1000e09d */ LDATA extern char public_1000e09d; // '`'
/* 0x1000e09e */ LDATA extern char public_1000e09e;
/* 0x1000e09f */ LDATA extern char public_1000e09f;
/* 0x1000e0a0 */ LDATA extern char public_1000e0a0; // 'P'
/* 0x1000e0a1 */ LDATA extern char public_1000e0a1;
/* 0x1000e0a2 */ LDATA extern char public_1000e0a2;
/* 0x1000e0a3 */ LDATA extern char public_1000e0a3;
/* 0x1000e0a4 */ LDATA extern char public_1000e0a4;
/* 0x1000e0a5 */ LDATA extern char public_1000e0a5;
/* 0x1000e0a6 */ LDATA extern char public_1000e0a6;
/* 0x1000e0a7 */ LDATA extern char public_1000e0a7;
/* 0x1000e0a8 */ LDATA extern char public_1000e0a8; // 'W'
/* 0x1000e0a9 */ LDATA extern char public_1000e0a9;
/* 0x1000e0aa */ LDATA extern char public_1000e0aa;
/* 0x1000e0ab */ LDATA extern char public_1000e0ab;
/* 0x1000e0ac */ LDATA extern char public_1000e0ac;
/* 0x1000e0ad */ LDATA extern char public_1000e0ad;
/* 0x1000e0ae */ LDATA extern char public_1000e0ae;
/* 0x1000e0af */ LDATA extern char public_1000e0af;
/* 0x1000e0b0 */ LDATA extern char public_1000e0b0; // 'S'
/* 0x1000e0b1 */ LDATA extern char public_1000e0b1;
/* 0x1000e0b2 */ LDATA extern char public_1000e0b2;
/* 0x1000e0b3 */ LDATA extern char public_1000e0b3;
/* 0x1000e0b4 */ LDATA extern char public_1000e0b4;
/* 0x1000e0b5 */ LDATA extern char public_1000e0b5;
/* 0x1000e0b6 */ LDATA extern char public_1000e0b6;
/* 0x1000e0b7 */ LDATA extern char public_1000e0b7;
/* 0x1000e0b8 */ LDATA extern char public_1000e0b8; // '['
/* 0x1000e0b9 */ LDATA extern char public_1000e0b9;
/* 0x1000e0ba */ LDATA extern char public_1000e0ba;
/* 0x1000e0bb */ LDATA extern char public_1000e0bb;
/* 0x1000e0bc */ LDATA extern char public_1000e0bc;
/* 0x1000e0bd */ LDATA extern char public_1000e0bd;
/* 0x1000e0be */ LDATA extern char public_1000e0be;
/* 0x1000e0bf */ LDATA extern char public_1000e0bf;
/* 0x1000e0c0 */ LDATA extern char public_1000e0c0; // 'Q'
/* 0x1000e0c1 */ LDATA extern char public_1000e0c1;
/* 0x1000e0c2 */ LDATA extern char public_1000e0c2;
/* 0x1000e0c3 */ LDATA extern char public_1000e0c3;
/* 0x1000e0c4 */ LDATA extern char public_1000e0c4;
/* 0x1000e0c5 */ LDATA extern char public_1000e0c5;
/* 0x1000e0c6 */ LDATA extern char public_1000e0c6;
/* 0x1000e0c7 */ LDATA extern char public_1000e0c7;
/* 0x1000e0c8 */ LDATA extern char public_1000e0c8; // 'Y'
/* 0x1000e0c9 */ LDATA extern char public_1000e0c9;
/* 0x1000e0ca */ LDATA extern char public_1000e0ca;
/* 0x1000e0cb */ LDATA extern char public_1000e0cb;
/* 0x1000e0cc */ LDATA extern char public_1000e0cc;
/* 0x1000e0cd */ LDATA extern char public_1000e0cd;
/* 0x1000e0ce */ LDATA extern char public_1000e0ce;
/* 0x1000e0cf */ LDATA extern char public_1000e0cf;
/* 0x1000e0d0 */ LDATA extern char public_1000e0d0; // 'U'
/* 0x1000e0d1 */ LDATA extern char public_1000e0d1;
/* 0x1000e0d2 */ LDATA extern char public_1000e0d2;
/* 0x1000e0d3 */ LDATA extern char public_1000e0d3;
/* 0x1000e0d4 */ LDATA extern char public_1000e0d4; // 'a'
/* 0x1000e0d5 */ LDATA extern char public_1000e0d5;
/* 0x1000e0d6 */ LDATA extern char public_1000e0d6;
/* 0x1000e0d7 */ LDATA extern char public_1000e0d7;
/* 0x1000e0d8 */ LDATA extern char public_1000e0d8; // ']'
/* 0x1000e0d9 */ LDATA extern char public_1000e0d9;
/* 0x1000e0da */ LDATA extern char public_1000e0da;
/* 0x1000e0db */ LDATA extern char public_1000e0db;
/* 0x1000e0dc */ LDATA extern char public_1000e0dc;
/* 0x1000e0dd */ LDATA extern char public_1000e0dd; // '`'
/* 0x1000e0de */ LDATA extern char public_1000e0de;
/* 0x1000e0df */ LDATA extern char public_1000e0df;
/* 0x1000e0e0 */ LDATA extern char public_1000e0e0; // 'P'
/* 0x1000e0e1 */ LDATA extern char public_1000e0e1;
/* 0x1000e0e2 */ LDATA extern char public_1000e0e2;
/* 0x1000e0e3 */ LDATA extern char public_1000e0e3;
/* 0x1000e0e4 */ LDATA extern char public_1000e0e4;
/* 0x1000e0e5 */ LDATA extern char public_1000e0e5;
/* 0x1000e0e6 */ LDATA extern char public_1000e0e6;
/* 0x1000e0e7 */ LDATA extern char public_1000e0e7;
/* 0x1000e0e8 */ LDATA extern char public_1000e0e8; // 'X'
/* 0x1000e0e9 */ LDATA extern char public_1000e0e9;
/* 0x1000e0ea */ LDATA extern char public_1000e0ea;
/* 0x1000e0eb */ LDATA extern char public_1000e0eb;
/* 0x1000e0ec */ LDATA extern char public_1000e0ec;
/* 0x1000e0ed */ LDATA extern char public_1000e0ed;
/* 0x1000e0ee */ LDATA extern char public_1000e0ee;
/* 0x1000e0ef */ LDATA extern char public_1000e0ef;
/* 0x1000e0f0 */ LDATA extern char public_1000e0f0; // 'T'
/* 0x1000e0f1 */ LDATA extern char public_1000e0f1;
/* 0x1000e0f2 */ LDATA extern char public_1000e0f2;
/* 0x1000e0f3 */ LDATA extern char public_1000e0f3;
/* 0x1000e0f4 */ LDATA extern char public_1000e0f4; // '1'
/* 0x1000e0f5 */ LDATA extern char public_1000e0f5;
/* 0x1000e0f6 */ LDATA extern char public_1000e0f6;
/* 0x1000e0f7 */ LDATA extern char public_1000e0f7;
/* 0x1000e0f8 */ LDATA extern char public_1000e0f8; // '\'
/* 0x1000e0f9 */ LDATA extern char public_1000e0f9;
/* 0x1000e0fa */ LDATA extern char public_1000e0fa;
/* 0x1000e0fb */ LDATA extern char public_1000e0fb;
/* 0x1000e0fc */ LDATA extern char public_1000e0fc;
/* 0x1000e0fd */ LDATA extern char public_1000e0fd; // '0'
/* 0x1000e0fe */ LDATA extern char public_1000e0fe;
/* 0x1000e0ff */ LDATA extern char public_1000e0ff;
/* 0x1000e100 */ LDATA extern char public_1000e100; // 'R'
/* 0x1000e101 */ LDATA extern char public_1000e101;
/* 0x1000e102 */ LDATA extern char public_1000e102;
/* 0x1000e103 */ LDATA extern char public_1000e103;
/* 0x1000e104 */ LDATA extern char public_1000e104;
/* 0x1000e105 */ LDATA extern char public_1000e105;
/* 0x1000e106 */ LDATA extern char public_1000e106;
/* 0x1000e107 */ LDATA extern char public_1000e107;
/* 0x1000e108 */ LDATA extern char public_1000e108; // 'Z'
/* 0x1000e109 */ LDATA extern char public_1000e109;
/* 0x1000e10a */ LDATA extern char public_1000e10a;
/* 0x1000e10b */ LDATA extern char public_1000e10b;
/* 0x1000e10c */ LDATA extern char public_1000e10c;
/* 0x1000e10d */ LDATA extern char public_1000e10d;
/* 0x1000e10e */ LDATA extern char public_1000e10e;
/* 0x1000e10f */ LDATA extern char public_1000e10f;
/* 0x1000e110 */ LDATA extern char public_1000e110; // 'V'
/* 0x1000e111 */ LDATA extern char public_1000e111;
/* 0x1000e112 */ LDATA extern char public_1000e112;
/* 0x1000e113 */ LDATA extern char public_1000e113;
/* 0x1000e114 */ LDATA extern char public_1000e114;
/* 0x1000e115 */ LDATA extern char public_1000e115;
/* 0x1000e116 */ LDATA extern char public_1000e116;
/* 0x1000e117 */ LDATA extern char public_1000e117;
/* 0x1000e118 */ LDATA extern char public_1000e118;
/* 0x1000e119 */ LDATA extern char public_1000e119;
/* 0x1000e11a */ LDATA extern char public_1000e11a;
/* 0x1000e11b */ LDATA extern char public_1000e11b;
/* 0x1000e11c */ LDATA extern char public_1000e11c;
/* 0x1000e11d */ LDATA extern char public_1000e11d; // '`'
/* 0x1000e11e */ LDATA extern char public_1000e11e;
/* 0x1000e11f */ LDATA extern char public_1000e11f;
/* 0x1000e120 */ LDATA extern char public_1000e120;
/* 0x1000e121 */ LDATA extern char public_1000e121;
/* 0x1000e122 */ LDATA extern char public_1000e122;
/* 0x1000e123 */ LDATA extern char public_1000e123;
/* 0x1000e124 */ LDATA extern char public_1000e124;
/* 0x1000e125 */ LDATA extern char public_1000e125;
/* 0x1000e126 */ LDATA extern char public_1000e126;
/* 0x1000e127 */ LDATA extern char public_1000e127;
/* 0x1000e128 */ LDATA extern char public_1000e128;
/* 0x1000e129 */ LDATA extern char public_1000e129;
/* 0x1000e12a */ LDATA extern char public_1000e12a;
/* 0x1000e12b */ LDATA extern char public_1000e12b;
/* 0x1000e12c */ LDATA extern char public_1000e12c;
/* 0x1000e12d */ LDATA extern char public_1000e12d;
/* 0x1000e12e */ LDATA extern char public_1000e12e;
/* 0x1000e12f */ LDATA extern char public_1000e12f;
/* 0x1000e130 */ LDATA extern char public_1000e130;
/* 0x1000e131 */ LDATA extern char public_1000e131;
/* 0x1000e132 */ LDATA extern char public_1000e132;
/* 0x1000e133 */ LDATA extern char public_1000e133;
/* 0x1000e134 */ LDATA extern char public_1000e134;
/* 0x1000e135 */ LDATA extern char public_1000e135;
/* 0x1000e136 */ LDATA extern char public_1000e136;
/* 0x1000e137 */ LDATA extern char public_1000e137;
/* 0x1000e138 */ LDATA extern char public_1000e138; // '?'
/* 0x1000e139 */ LDATA extern char public_1000e139;
/* 0x1000e13a */ LDATA extern char public_1000e13a;
/* 0x1000e13b */ LDATA extern char public_1000e13b;
/* 0x1000e13c */ LDATA extern char public_1000e13c;
/* 0x1000e13d */ LDATA extern char public_1000e13d;
/* 0x1000e13e */ LDATA extern char public_1000e13e;
/* 0x1000e13f */ LDATA extern char public_1000e13f;
/* 0x1000e140 */ LDATA extern char public_1000e140;
/* 0x1000e141 */ LDATA extern char public_1000e141;
/* 0x1000e142 */ LDATA extern char public_1000e142;
/* 0x1000e143 */ LDATA extern char public_1000e143;
/* 0x1000e144 */ LDATA extern char public_1000e144;
/* 0x1000e145 */ LDATA extern char public_1000e145;
/* 0x1000e146 */ LDATA extern char public_1000e146;
/* 0x1000e147 */ LDATA extern char public_1000e147;
/* 0x1000e148 */ LDATA extern char public_1000e148;
/* 0x1000e149 */ LDATA extern char public_1000e149;
/* 0x1000e14a */ LDATA extern char public_1000e14a;
/* 0x1000e14b */ LDATA extern char public_1000e14b;
/* 0x1000e14c */ LDATA extern char public_1000e14c;
/* 0x1000e14d */ LDATA extern char public_1000e14d;
/* 0x1000e14e */ LDATA extern char public_1000e14e;
/* 0x1000e14f */ LDATA extern char public_1000e14f;
/* 0x1000e150 */ LDATA extern char public_1000e150;
/* 0x1000e151 */ LDATA extern char public_1000e151;
/* 0x1000e152 */ LDATA extern char public_1000e152;
/* 0x1000e153 */ LDATA extern char public_1000e153;
/* 0x1000e154 */ LDATA extern char public_1000e154;
/* 0x1000e155 */ LDATA extern char public_1000e155;
/* 0x1000e156 */ LDATA extern char public_1000e156;
/* 0x1000e157 */ LDATA extern char public_1000e157;
/* 0x1000e158 */ LDATA extern char public_1000e158;
/* 0x1000e159 */ LDATA extern char public_1000e159; // '?'
/* 0x1000e15a */ LDATA extern char public_1000e15a;
/* 0x1000e15b */ LDATA extern char public_1000e15b;
/* 0x1000e15c */ LDATA extern char public_1000e15c;
/* 0x1000e15d */ LDATA extern char public_1000e15d;
/* 0x1000e15e */ LDATA extern char public_1000e15e;
/* 0x1000e15f */ LDATA extern char public_1000e15f;
/* 0x1000e160 */ LDATA extern char public_1000e160;
/* 0x1000e161 */ LDATA extern char public_1000e161;
/* 0x1000e162 */ LDATA extern char public_1000e162;
/* 0x1000e163 */ LDATA extern char public_1000e163;
/* 0x1000e164 */ LDATA extern void const* public_1000e164;
/* 0x1000e168 */ LDATA extern void const* public_1000e168;
/* 0x1000e16c */ LDATA extern char public_1000e16c;
/* 0x1000e16d */ LDATA extern char public_1000e16d;
/* 0x1000e16e */ LDATA extern char public_1000e16e;
/* 0x1000e16f */ LDATA extern char public_1000e16f;
/* 0x1000e170 */ LDATA extern char public_1000e170;
/* 0x1000e171 */ LDATA extern char public_1000e171;
/* 0x1000e172 */ LDATA extern char public_1000e172;
/* 0x1000e173 */ LDATA extern char public_1000e173;
/* 0x1000e174 */ LDATA extern char public_1000e174;
/* 0x1000e175 */ LDATA extern char public_1000e175;
/* 0x1000e176 */ LDATA extern char public_1000e176;
/* 0x1000e177 */ LDATA extern char public_1000e177;
/* 0x1000e178 */ LDATA extern void const* public_1000e178;
/* 0x1000e17c */ LDATA extern void const* public_1000e17c;
/* 0x1000e180 */ LDATA extern char public_1000e180;
/* 0x1000e181 */ LDATA extern char public_1000e181;
/* 0x1000e182 */ LDATA extern char public_1000e182;
/* 0x1000e183 */ LDATA extern char public_1000e183;
/* 0x1000e184 */ LDATA extern char public_1000e184;
/* 0x1000e185 */ LDATA extern char public_1000e185;
/* 0x1000e186 */ LDATA extern char public_1000e186;
/* 0x1000e187 */ LDATA extern char public_1000e187;
/* 0x1000e188 */ LDATA extern char public_1000e188;
/* 0x1000e189 */ LDATA extern char public_1000e189;
/* 0x1000e18a */ LDATA extern char public_1000e18a;
/* 0x1000e18b */ LDATA extern char public_1000e18b;
/* 0x1000e18c */ LDATA extern char public_1000e18c;
/* 0x1000e18d */ LDATA extern char public_1000e18d;
/* 0x1000e18e */ LDATA extern char public_1000e18e;
/* 0x1000e18f */ LDATA extern char public_1000e18f;
/* 0x1000e190 */ LDATA extern void const* public_1000e190;
/* 0x1000e194 */ LDATA extern char public_1000e194;
/* 0x1000e195 */ LDATA extern char public_1000e195;
/* 0x1000e196 */ LDATA extern char public_1000e196;
/* 0x1000e197 */ LDATA extern char public_1000e197;
/* 0x1000e198 */ LDATA extern char public_1000e198;
/* 0x1000e199 */ LDATA extern char public_1000e199;
/* 0x1000e19a */ LDATA extern char public_1000e19a;
/* 0x1000e19b */ LDATA extern char public_1000e19b;
/* 0x1000e19c */ LDATA extern char public_1000e19c;
/* 0x1000e19d */ LDATA extern char public_1000e19d;
/* 0x1000e19e */ LDATA extern char public_1000e19e;
/* 0x1000e19f */ LDATA extern char public_1000e19f;
/* 0x1000e1a0 */ LDATA extern void const* public_1000e1a0;
/* 0x1000e1a4 */ LDATA extern void const* public_1000e1a4;
/* 0x1000e1a8 */ LDATA extern void const* public_1000e1a8;
/* 0x1000e1ac */ LDATA extern void const* public_1000e1ac;
/* 0x1000e1b0 */ LDATA extern void const* public_1000e1b0;
/* 0x1000e1b4 */ LDATA extern void const* public_1000e1b4;
/* 0x1000e1b8 */ LDATA extern void const* public_1000e1b8;
/* 0x1000e1bc */ LDATA extern void const* public_1000e1bc;
/* 0x1000e1c0 */ LDATA extern void const* public_1000e1c0;
/* 0x1000e1c4 */ LDATA extern void const* public_1000e1c4;
/* 0x1000e1c8 */ LDATA extern char public_1000e1c8;
/* 0x1000e1c9 */ LDATA extern char public_1000e1c9;
/* 0x1000e1ca */ LDATA extern char public_1000e1ca;
/* 0x1000e1cb */ LDATA extern char public_1000e1cb;
/* 0x1000e1cc */ LDATA extern char public_1000e1cc;
/* 0x1000e1cd */ LDATA extern char public_1000e1cd;
/* 0x1000e1ce */ LDATA extern char public_1000e1ce;
/* 0x1000e1cf */ LDATA extern char public_1000e1cf;
/* 0x1000e1d0 */ LDATA extern char public_1000e1d0;
/* 0x1000e1d1 */ LDATA extern char public_1000e1d1;
/* 0x1000e1d2 */ LDATA extern char public_1000e1d2;
/* 0x1000e1d3 */ LDATA extern char public_1000e1d3;
/* 0x1000e1d4 */ LDATA extern char public_1000e1d4;
/* 0x1000e1d5 */ LDATA extern char public_1000e1d5;
/* 0x1000e1d6 */ LDATA extern char public_1000e1d6;
/* 0x1000e1d7 */ LDATA extern char public_1000e1d7;
/* 0x1000e1d8 */ LDATA extern char public_1000e1d8;
/* 0x1000e1d9 */ LDATA extern char public_1000e1d9;
/* 0x1000e1da */ LDATA extern char public_1000e1da;
/* 0x1000e1db */ LDATA extern char public_1000e1db;
/* 0x1000e1dc */ LDATA extern char public_1000e1dc;
/* 0x1000e1dd */ LDATA extern char public_1000e1dd;
/* 0x1000e1de */ LDATA extern char public_1000e1de;
/* 0x1000e1df */ LDATA extern char public_1000e1df;
/* 0x1000e1e0 */ LDATA extern char public_1000e1e0;
/* 0x1000e1e1 */ LDATA extern char public_1000e1e1;
/* 0x1000e1e2 */ LDATA extern char public_1000e1e2;
/* 0x1000e1e3 */ LDATA extern char public_1000e1e3;
/* 0x1000e1e4 */ LDATA extern char public_1000e1e4;
/* 0x1000e1e5 */ LDATA extern char public_1000e1e5;
/* 0x1000e1e6 */ LDATA extern char public_1000e1e6;
/* 0x1000e1e7 */ LDATA extern char public_1000e1e7;
/* 0x1000e1e8 */ LDATA extern char public_1000e1e8;
/* 0x1000e1e9 */ LDATA extern char public_1000e1e9;
/* 0x1000e1ea */ LDATA extern char public_1000e1ea;
/* 0x1000e1eb */ LDATA extern char public_1000e1eb;
/* 0x1000e1ec */ LDATA extern char public_1000e1ec;
/* 0x1000e1ed */ LDATA extern char public_1000e1ed;
/* 0x1000e1ee */ LDATA extern char public_1000e1ee;
/* 0x1000e1ef */ LDATA extern char public_1000e1ef;
/* 0x1000e1f0 */ LDATA extern char public_1000e1f0;
/* 0x1000e1f1 */ LDATA extern char public_1000e1f1;
/* 0x1000e1f2 */ LDATA extern char public_1000e1f2;
/* 0x1000e1f3 */ LDATA extern char public_1000e1f3;
/* 0x1000e1f4 */ LDATA extern char public_1000e1f4;
/* 0x1000e1f5 */ LDATA extern char public_1000e1f5;
/* 0x1000e1f6 */ LDATA extern char public_1000e1f6;
/* 0x1000e1f7 */ LDATA extern char public_1000e1f7;
/* 0x1000e1f8 */ LDATA extern char public_1000e1f8;
/* 0x1000e1f9 */ LDATA extern char public_1000e1f9;
/* 0x1000e1fa */ LDATA extern char public_1000e1fa;
/* 0x1000e1fb */ LDATA extern char public_1000e1fb;
/* 0x1000e1fc */ LDATA extern char public_1000e1fc;
/* 0x1000e1fd */ LDATA extern char public_1000e1fd;
/* 0x1000e1fe */ LDATA extern char public_1000e1fe;
/* 0x1000e1ff */ LDATA extern char public_1000e1ff;
/* 0x1000e200 */ LDATA extern char public_1000e200; // ?
/* 0x1000e201 */ LDATA extern char public_1000e201; // ?
/* 0x1000e202 */ LDATA extern char public_1000e202; // ?
/* 0x1000e203 */ LDATA extern char public_1000e203; // ?
/* 0x1000e204 */ LDATA extern char public_1000e204; // ?
/* 0x1000e205 */ LDATA extern char public_1000e205; // ?
/* 0x1000e206 */ LDATA extern char public_1000e206; // ?
/* 0x1000e207 */ LDATA extern char public_1000e207; // ?
/* 0x1000e208 */ LDATA extern char public_1000e208; // ?
/* 0x1000e209 */ LDATA extern char public_1000e209; // ?
/* 0x1000e20a */ LDATA extern char public_1000e20a; // ?
/* 0x1000e20b */ LDATA extern char public_1000e20b; // ?
/* 0x1000e20c */ LDATA extern char public_1000e20c; // ?
/* 0x1000e20d */ LDATA extern char public_1000e20d; // ?
/* 0x1000e20e */ LDATA extern char public_1000e20e; // ?
/* 0x1000e20f */ LDATA extern char public_1000e20f; // ?
/* 0x1000e210 */ LDATA extern char public_1000e210; // ?
/* 0x1000e211 */ LDATA extern char public_1000e211; // ?
/* 0x1000e212 */ LDATA extern char public_1000e212; // ?
/* 0x1000e213 */ LDATA extern char public_1000e213; // ?
/* 0x1000e214 */ LDATA extern char public_1000e214; // ?
/* 0x1000e215 */ LDATA extern char public_1000e215; // ?
/* 0x1000e216 */ LDATA extern char public_1000e216; // ?
/* 0x1000e217 */ LDATA extern char public_1000e217; // ?
/* 0x1000e218 */ LDATA extern char public_1000e218; // ?
/* 0x1000e219 */ LDATA extern char public_1000e219; // ?
/* 0x1000e21a */ LDATA extern char public_1000e21a; // ?
/* 0x1000e21b */ LDATA extern char public_1000e21b; // ?
/* 0x1000e21c */ LDATA extern char public_1000e21c; // ?
/* 0x1000e21d */ LDATA extern char public_1000e21d; // ?
/* 0x1000e21e */ LDATA extern char public_1000e21e; // ?
/* 0x1000e21f */ LDATA extern char public_1000e21f; // ?
/* 0x1000e220 */ LDATA extern char public_1000e220; // ?
/* 0x1000e221 */ LDATA extern char public_1000e221; // ?
/* 0x1000e222 */ LDATA extern char public_1000e222; // ?
/* 0x1000e223 */ LDATA extern char public_1000e223; // ?
/* 0x1000e224 */ LDATA extern char public_1000e224; // ?
/* 0x1000e225 */ LDATA extern char public_1000e225; // ?
/* 0x1000e226 */ LDATA extern char public_1000e226; // ?
/* 0x1000e227 */ LDATA extern char public_1000e227; // ?
/* 0x1000e228 */ LDATA extern char public_1000e228; // ?
/* 0x1000e229 */ LDATA extern char public_1000e229; // ?
/* 0x1000e22a */ LDATA extern char public_1000e22a; // ?
/* 0x1000e22b */ LDATA extern char public_1000e22b; // ?
/* 0x1000e22c */ LDATA extern char public_1000e22c; // ?
/* 0x1000e22d */ LDATA extern char public_1000e22d; // ?
/* 0x1000e22e */ LDATA extern char public_1000e22e; // ?
/* 0x1000e22f */ LDATA extern char public_1000e22f; // ?
/* 0x1000e230 */ LDATA extern char public_1000e230; // ?
/* 0x1000e231 */ LDATA extern char public_1000e231; // ?
/* 0x1000e232 */ LDATA extern char public_1000e232; // ?
/* 0x1000e233 */ LDATA extern char public_1000e233; // ?
/* 0x1000e234 */ LDATA extern char public_1000e234; // ?
/* 0x1000e235 */ LDATA extern char public_1000e235; // ?
/* 0x1000e236 */ LDATA extern char public_1000e236; // ?
/* 0x1000e237 */ LDATA extern char public_1000e237; // ?
/* 0x1000e238 */ LDATA extern char public_1000e238; // ?
/* 0x1000e239 */ LDATA extern char public_1000e239; // ?
/* 0x1000e23a */ LDATA extern char public_1000e23a; // ?
/* 0x1000e23b */ LDATA extern char public_1000e23b; // ?
/* 0x1000e23c */ LDATA extern char public_1000e23c; // ?
/* 0x1000e23d */ LDATA extern char public_1000e23d; // ?
/* 0x1000e23e */ LDATA extern char public_1000e23e; // ?
/* 0x1000e23f */ LDATA extern char public_1000e23f; // ?
/* 0x1000e240 */ LDATA extern char public_1000e240; // ?
/* 0x1000e241 */ LDATA extern char public_1000e241; // ?
/* 0x1000e242 */ LDATA extern char public_1000e242; // ?
/* 0x1000e243 */ LDATA extern char public_1000e243; // ?
/* 0x1000e244 */ LDATA extern char public_1000e244; // ?
/* 0x1000e245 */ LDATA extern char public_1000e245; // ?
/* 0x1000e246 */ LDATA extern char public_1000e246; // ?
/* 0x1000e247 */ LDATA extern char public_1000e247; // ?
/* 0x1000e248 */ LDATA extern char public_1000e248; // ?
/* 0x1000e249 */ LDATA extern char public_1000e249; // ?
/* 0x1000e24a */ LDATA extern char public_1000e24a; // ?
/* 0x1000e24b */ LDATA extern char public_1000e24b; // ?
/* 0x1000e24c */ LDATA extern char public_1000e24c; // ?
/* 0x1000e24d */ LDATA extern char public_1000e24d; // ?
/* 0x1000e24e */ LDATA extern char public_1000e24e; // ?
/* 0x1000e24f */ LDATA extern char public_1000e24f; // ?
/* 0x1000e250 */ LDATA extern char public_1000e250; // ?
/* 0x1000e251 */ LDATA extern char public_1000e251; // ?
/* 0x1000e252 */ LDATA extern char public_1000e252; // ?
/* 0x1000e253 */ LDATA extern char public_1000e253; // ?
/* 0x1000e254 */ LDATA extern char public_1000e254; // ?
/* 0x1000e255 */ LDATA extern char public_1000e255; // ?
/* 0x1000e256 */ LDATA extern char public_1000e256; // ?
/* 0x1000e257 */ LDATA extern char public_1000e257; // ?
/* 0x1000e258 */ LDATA extern char public_1000e258; // ?
/* 0x1000e259 */ LDATA extern char public_1000e259; // ?
/* 0x1000e25a */ LDATA extern char public_1000e25a; // ?
/* 0x1000e25b */ LDATA extern char public_1000e25b; // ?
/* 0x1000e25c */ LDATA extern char public_1000e25c; // ?
/* 0x1000e25d */ LDATA extern char public_1000e25d; // ?
/* 0x1000e25e */ LDATA extern char public_1000e25e; // ?
/* 0x1000e25f */ LDATA extern char public_1000e25f; // ?
/* 0x1000e260 */ LDATA extern char public_1000e260; // ?
/* 0x1000e261 */ LDATA extern char public_1000e261; // ?
/* 0x1000e262 */ LDATA extern char public_1000e262; // ?
/* 0x1000e263 */ LDATA extern char public_1000e263; // ?
/* 0x1000e264 */ LDATA extern char public_1000e264; // ?
/* 0x1000e265 */ LDATA extern char public_1000e265; // ?
/* 0x1000e266 */ LDATA extern char public_1000e266; // ?
/* 0x1000e267 */ LDATA extern char public_1000e267; // ?
/* 0x1000e268 */ LDATA extern char public_1000e268; // ?
/* 0x1000e269 */ LDATA extern char public_1000e269; // ?
/* 0x1000e26a */ LDATA extern char public_1000e26a; // ?
/* 0x1000e26b */ LDATA extern char public_1000e26b; // ?
/* 0x1000e26c */ LDATA extern char public_1000e26c; // ?
/* 0x1000e26d */ LDATA extern char public_1000e26d; // ?
/* 0x1000e26e */ LDATA extern char public_1000e26e; // ?
/* 0x1000e26f */ LDATA extern char public_1000e26f; // ?
/* 0x1000e270 */ LDATA extern char public_1000e270; // ?
/* 0x1000e271 */ LDATA extern char public_1000e271; // ?
/* 0x1000e272 */ LDATA extern char public_1000e272; // ?
/* 0x1000e273 */ LDATA extern char public_1000e273; // ?
/* 0x1000e274 */ LDATA extern char public_1000e274; // ?
/* 0x1000e275 */ LDATA extern char public_1000e275; // ?
/* 0x1000e276 */ LDATA extern char public_1000e276; // ?
/* 0x1000e277 */ LDATA extern char public_1000e277; // ?
/* 0x1000e278 */ LDATA extern char public_1000e278; // ?
/* 0x1000e279 */ LDATA extern char public_1000e279; // ?
/* 0x1000e27a */ LDATA extern char public_1000e27a; // ?
/* 0x1000e27b */ LDATA extern char public_1000e27b; // ?
/* 0x1000e27c */ LDATA extern char public_1000e27c; // ?
/* 0x1000e27d */ LDATA extern char public_1000e27d; // ?
/* 0x1000e27e */ LDATA extern char public_1000e27e; // ?
/* 0x1000e27f */ LDATA extern char public_1000e27f; // ?
/* 0x1000e280 */ LDATA extern char public_1000e280; // ?
/* 0x1000e281 */ LDATA extern char public_1000e281; // ?
/* 0x1000e282 */ LDATA extern char public_1000e282; // ?
/* 0x1000e283 */ LDATA extern char public_1000e283; // ?
/* 0x1000e284 */ LDATA extern char public_1000e284; // ?
/* 0x1000e285 */ LDATA extern char public_1000e285; // ?
/* 0x1000e286 */ LDATA extern char public_1000e286; // ?
/* 0x1000e287 */ LDATA extern char public_1000e287; // ?
/* 0x1000e288 */ LDATA extern char public_1000e288; // ?
/* 0x1000e289 */ LDATA extern char public_1000e289; // ?
/* 0x1000e28a */ LDATA extern char public_1000e28a; // ?
/* 0x1000e28b */ LDATA extern char public_1000e28b; // ?
/* 0x1000e28c */ LDATA extern char public_1000e28c; // ?
/* 0x1000e28d */ LDATA extern char public_1000e28d; // ?
/* 0x1000e28e */ LDATA extern char public_1000e28e; // ?
/* 0x1000e28f */ LDATA extern char public_1000e28f; // ?
/* 0x1000e290 */ LDATA extern char public_1000e290; // ?
/* 0x1000e291 */ LDATA extern char public_1000e291; // ?
/* 0x1000e292 */ LDATA extern char public_1000e292; // ?
/* 0x1000e293 */ LDATA extern char public_1000e293; // ?
/* 0x1000e294 */ LDATA extern char public_1000e294; // ?
/* 0x1000e295 */ LDATA extern char public_1000e295; // ?
/* 0x1000e296 */ LDATA extern char public_1000e296; // ?
/* 0x1000e297 */ LDATA extern char public_1000e297; // ?
/* 0x1000e298 */ LDATA extern char public_1000e298; // ?
/* 0x1000e299 */ LDATA extern char public_1000e299; // ?
/* 0x1000e29a */ LDATA extern char public_1000e29a; // ?
/* 0x1000e29b */ LDATA extern char public_1000e29b; // ?
/* 0x1000e29c */ LDATA extern char public_1000e29c; // ?
/* 0x1000e29d */ LDATA extern char public_1000e29d; // ?
/* 0x1000e29e */ LDATA extern char public_1000e29e; // ?
/* 0x1000e29f */ LDATA extern char public_1000e29f; // ?
/* 0x1000e2a0 */ LDATA extern char public_1000e2a0; // ?
/* 0x1000e2a1 */ LDATA extern char public_1000e2a1; // ?
/* 0x1000e2a2 */ LDATA extern char public_1000e2a2; // ?
/* 0x1000e2a3 */ LDATA extern char public_1000e2a3; // ?
/* 0x1000e2a4 */ LDATA extern char public_1000e2a4; // ?
/* 0x1000e2a5 */ LDATA extern char public_1000e2a5; // ?
/* 0x1000e2a6 */ LDATA extern char public_1000e2a6; // ?
/* 0x1000e2a7 */ LDATA extern char public_1000e2a7; // ?
/* 0x1000e2a8 */ LDATA extern char public_1000e2a8; // ?
/* 0x1000e2a9 */ LDATA extern char public_1000e2a9; // ?
/* 0x1000e2aa */ LDATA extern char public_1000e2aa; // ?
/* 0x1000e2ab */ LDATA extern char public_1000e2ab; // ?
/* 0x1000e2ac */ LDATA extern char public_1000e2ac; // ?
/* 0x1000e2ad */ LDATA extern char public_1000e2ad; // ?
/* 0x1000e2ae */ LDATA extern char public_1000e2ae; // ?
/* 0x1000e2af */ LDATA extern char public_1000e2af; // ?
/* 0x1000e2b0 */ LDATA extern char public_1000e2b0; // ?
/* 0x1000e2b1 */ LDATA extern char public_1000e2b1; // ?
/* 0x1000e2b2 */ LDATA extern char public_1000e2b2; // ?
/* 0x1000e2b3 */ LDATA extern char public_1000e2b3; // ?
/* 0x1000e2b4 */ LDATA extern char public_1000e2b4; // ?
/* 0x1000e2b5 */ LDATA extern char public_1000e2b5; // ?
/* 0x1000e2b6 */ LDATA extern char public_1000e2b6; // ?
/* 0x1000e2b7 */ LDATA extern char public_1000e2b7; // ?
/* 0x1000e2b8 */ LDATA extern char public_1000e2b8; // ?
/* 0x1000e2b9 */ LDATA extern char public_1000e2b9; // ?
/* 0x1000e2ba */ LDATA extern char public_1000e2ba; // ?
/* 0x1000e2bb */ LDATA extern char public_1000e2bb; // ?
/* 0x1000e2bc */ LDATA extern char public_1000e2bc; // ?
/* 0x1000e2bd */ LDATA extern char public_1000e2bd; // ?
/* 0x1000e2be */ LDATA extern char public_1000e2be; // ?
/* 0x1000e2bf */ LDATA extern char public_1000e2bf; // ?
/* 0x1000e2c0 */ LDATA extern char public_1000e2c0; // ?
/* 0x1000e2c1 */ LDATA extern char public_1000e2c1; // ?
/* 0x1000e2c2 */ LDATA extern char public_1000e2c2; // ?
/* 0x1000e2c3 */ LDATA extern char public_1000e2c3; // ?
/* 0x1000e2c4 */ LDATA extern char public_1000e2c4; // ?
/* 0x1000e2c5 */ LDATA extern char public_1000e2c5; // ?
/* 0x1000e2c6 */ LDATA extern char public_1000e2c6; // ?
/* 0x1000e2c7 */ LDATA extern char public_1000e2c7; // ?
/* 0x1000e2c8 */ LDATA extern char public_1000e2c8; // ?
/* 0x1000e2c9 */ LDATA extern char public_1000e2c9; // ?
/* 0x1000e2ca */ LDATA extern char public_1000e2ca; // ?
/* 0x1000e2cb */ LDATA extern char public_1000e2cb; // ?
/* 0x1000e2cc */ LDATA extern char public_1000e2cc; // ?
/* 0x1000e2cd */ LDATA extern char public_1000e2cd; // ?
/* 0x1000e2ce */ LDATA extern char public_1000e2ce; // ?
/* 0x1000e2cf */ LDATA extern char public_1000e2cf; // ?
/* 0x1000e2d0 */ LDATA extern char public_1000e2d0; // ?
/* 0x1000e2d1 */ LDATA extern char public_1000e2d1; // ?
/* 0x1000e2d2 */ LDATA extern char public_1000e2d2; // ?
/* 0x1000e2d3 */ LDATA extern char public_1000e2d3; // ?
/* 0x1000e2d4 */ LDATA extern char public_1000e2d4; // ?
/* 0x1000e2d5 */ LDATA extern char public_1000e2d5; // ?
/* 0x1000e2d6 */ LDATA extern char public_1000e2d6; // ?
/* 0x1000e2d7 */ LDATA extern char public_1000e2d7; // ?
/* 0x1000e2d8 */ LDATA extern char public_1000e2d8; // ?
/* 0x1000e2d9 */ LDATA extern char public_1000e2d9; // ?
/* 0x1000e2da */ LDATA extern char public_1000e2da; // ?
/* 0x1000e2db */ LDATA extern char public_1000e2db; // ?
/* 0x1000e2dc */ LDATA extern char public_1000e2dc; // ?
/* 0x1000e2dd */ LDATA extern char public_1000e2dd; // ?
/* 0x1000e2de */ LDATA extern char public_1000e2de; // ?
/* 0x1000e2df */ LDATA extern char public_1000e2df; // ?
/* 0x1000e2e0 */ LDATA extern char public_1000e2e0; // ?
/* 0x1000e2e1 */ LDATA extern char public_1000e2e1; // ?
/* 0x1000e2e2 */ LDATA extern char public_1000e2e2; // ?
/* 0x1000e2e3 */ LDATA extern char public_1000e2e3; // ?
/* 0x1000e2e4 */ LDATA extern char public_1000e2e4; // ?
/* 0x1000e2e5 */ LDATA extern char public_1000e2e5; // ?
/* 0x1000e2e6 */ LDATA extern char public_1000e2e6; // ?
/* 0x1000e2e7 */ LDATA extern char public_1000e2e7; // ?
/* 0x1000e2e8 */ LDATA extern char public_1000e2e8; // ?
/* 0x1000e2e9 */ LDATA extern char public_1000e2e9; // ?
/* 0x1000e2ea */ LDATA extern char public_1000e2ea; // ?
/* 0x1000e2eb */ LDATA extern char public_1000e2eb; // ?
/* 0x1000e2ec */ LDATA extern char public_1000e2ec; // ?
/* 0x1000e2ed */ LDATA extern char public_1000e2ed; // ?
/* 0x1000e2ee */ LDATA extern char public_1000e2ee; // ?
/* 0x1000e2ef */ LDATA extern char public_1000e2ef; // ?
/* 0x1000e2f0 */ LDATA extern char public_1000e2f0; // ?
/* 0x1000e2f1 */ LDATA extern char public_1000e2f1; // ?
/* 0x1000e2f2 */ LDATA extern char public_1000e2f2; // ?
/* 0x1000e2f3 */ LDATA extern char public_1000e2f3; // ?
/* 0x1000e2f4 */ LDATA extern char public_1000e2f4; // ?
/* 0x1000e2f5 */ LDATA extern char public_1000e2f5; // ?
/* 0x1000e2f6 */ LDATA extern char public_1000e2f6; // ?
/* 0x1000e2f7 */ LDATA extern char public_1000e2f7; // ?
/* 0x1000e2f8 */ LDATA extern char public_1000e2f8; // ?
/* 0x1000e2f9 */ LDATA extern char public_1000e2f9; // ?
/* 0x1000e2fa */ LDATA extern char public_1000e2fa; // ?
/* 0x1000e2fb */ LDATA extern char public_1000e2fb; // ?
/* 0x1000e2fc */ LDATA extern char public_1000e2fc; // ?
/* 0x1000e2fd */ LDATA extern char public_1000e2fd; // ?
/* 0x1000e2fe */ LDATA extern char public_1000e2fe; // ?
/* 0x1000e2ff */ LDATA extern char public_1000e2ff; // ?
/* 0x1000e300 */ LDATA extern char public_1000e300; // ?
/* 0x1000e301 */ LDATA extern char public_1000e301; // ?
/* 0x1000e302 */ LDATA extern char public_1000e302; // ?
/* 0x1000e303 */ LDATA extern char public_1000e303; // ?
/* 0x1000e304 */ LDATA extern char public_1000e304; // ?
/* 0x1000e305 */ LDATA extern char public_1000e305; // ?
/* 0x1000e306 */ LDATA extern char public_1000e306; // ?
/* 0x1000e307 */ LDATA extern char public_1000e307; // ?
/* 0x1000e308 */ LDATA extern char public_1000e308; // ?
/* 0x1000e309 */ LDATA extern char public_1000e309; // ?
/* 0x1000e30a */ LDATA extern char public_1000e30a; // ?
/* 0x1000e30b */ LDATA extern char public_1000e30b; // ?
/* 0x1000e30c */ LDATA extern char public_1000e30c; // ?
/* 0x1000e30d */ LDATA extern char public_1000e30d; // ?
/* 0x1000e30e */ LDATA extern char public_1000e30e; // ?
/* 0x1000e30f */ LDATA extern char public_1000e30f; // ?
/* 0x1000e310 */ LDATA extern char public_1000e310; // ?
/* 0x1000e311 */ LDATA extern char public_1000e311; // ?
/* 0x1000e312 */ LDATA extern char public_1000e312; // ?
/* 0x1000e313 */ LDATA extern char public_1000e313; // ?
/* 0x1000e314 */ LDATA extern char public_1000e314; // ?
/* 0x1000e315 */ LDATA extern char public_1000e315; // ?
/* 0x1000e316 */ LDATA extern char public_1000e316; // ?
/* 0x1000e317 */ LDATA extern char public_1000e317; // ?
/* 0x1000e318 */ LDATA extern char public_1000e318; // ?
/* 0x1000e319 */ LDATA extern char public_1000e319; // ?
/* 0x1000e31a */ LDATA extern char public_1000e31a; // ?
/* 0x1000e31b */ LDATA extern char public_1000e31b; // ?
/* 0x1000e31c */ LDATA extern char public_1000e31c; // ?
/* 0x1000e31d */ LDATA extern char public_1000e31d; // ?
/* 0x1000e31e */ LDATA extern char public_1000e31e; // ?
/* 0x1000e31f */ LDATA extern char public_1000e31f; // ?
/* 0x1000e320 */ LDATA extern char public_1000e320; // ?
/* 0x1000e321 */ LDATA extern char public_1000e321; // ?
/* 0x1000e322 */ LDATA extern char public_1000e322; // ?
/* 0x1000e323 */ LDATA extern char public_1000e323; // ?
/* 0x1000e324 */ LDATA extern char public_1000e324; // ?
/* 0x1000e325 */ LDATA extern char public_1000e325; // ?
/* 0x1000e326 */ LDATA extern char public_1000e326; // ?
/* 0x1000e327 */ LDATA extern char public_1000e327; // ?
/* 0x1000e328 */ LDATA extern char public_1000e328; // ?
/* 0x1000e329 */ LDATA extern char public_1000e329; // ?
/* 0x1000e32a */ LDATA extern char public_1000e32a; // ?
/* 0x1000e32b */ LDATA extern char public_1000e32b; // ?
/* 0x1000e32c */ LDATA extern char public_1000e32c; // ?
/* 0x1000e32d */ LDATA extern char public_1000e32d; // ?
/* 0x1000e32e */ LDATA extern char public_1000e32e; // ?
/* 0x1000e32f */ LDATA extern char public_1000e32f; // ?
/* 0x1000e330 */ LDATA extern char public_1000e330; // ?
/* 0x1000e331 */ LDATA extern char public_1000e331; // ?
/* 0x1000e332 */ LDATA extern char public_1000e332; // ?
/* 0x1000e333 */ LDATA extern char public_1000e333; // ?
/* 0x1000e334 */ LDATA extern char public_1000e334; // ?
/* 0x1000e335 */ LDATA extern char public_1000e335; // ?
/* 0x1000e336 */ LDATA extern char public_1000e336; // ?
/* 0x1000e337 */ LDATA extern char public_1000e337; // ?
/* 0x1000e338 */ LDATA extern char public_1000e338; // ?
/* 0x1000e339 */ LDATA extern char public_1000e339; // ?
/* 0x1000e33a */ LDATA extern char public_1000e33a; // ?
/* 0x1000e33b */ LDATA extern char public_1000e33b; // ?
/* 0x1000e33c */ LDATA extern char public_1000e33c; // ?
/* 0x1000e33d */ LDATA extern char public_1000e33d; // ?
/* 0x1000e33e */ LDATA extern char public_1000e33e; // ?
/* 0x1000e33f */ LDATA extern char public_1000e33f; // ?
/* 0x1000e340 */ LDATA extern char public_1000e340; // ?
/* 0x1000e341 */ LDATA extern char public_1000e341; // ?
/* 0x1000e342 */ LDATA extern char public_1000e342; // ?
/* 0x1000e343 */ LDATA extern char public_1000e343; // ?
/* 0x1000e344 */ LDATA extern char public_1000e344; // ?
/* 0x1000e345 */ LDATA extern char public_1000e345; // ?
/* 0x1000e346 */ LDATA extern char public_1000e346; // ?
/* 0x1000e347 */ LDATA extern char public_1000e347; // ?
/* 0x1000e348 */ LDATA extern char public_1000e348; // ?
/* 0x1000e349 */ LDATA extern char public_1000e349; // ?
/* 0x1000e34a */ LDATA extern char public_1000e34a; // ?
/* 0x1000e34b */ LDATA extern char public_1000e34b; // ?
/* 0x1000e34c */ LDATA extern char public_1000e34c; // ?
/* 0x1000e34d */ LDATA extern char public_1000e34d; // ?
/* 0x1000e34e */ LDATA extern char public_1000e34e; // ?
/* 0x1000e34f */ LDATA extern char public_1000e34f; // ?
/* 0x1000e350 */ LDATA extern char public_1000e350; // ?
/* 0x1000e351 */ LDATA extern char public_1000e351; // ?
/* 0x1000e352 */ LDATA extern char public_1000e352; // ?
/* 0x1000e353 */ LDATA extern char public_1000e353; // ?
/* 0x1000e354 */ LDATA extern char public_1000e354; // ?
/* 0x1000e355 */ LDATA extern char public_1000e355; // ?
/* 0x1000e356 */ LDATA extern char public_1000e356; // ?
/* 0x1000e357 */ LDATA extern char public_1000e357; // ?
/* 0x1000e358 */ LDATA extern char public_1000e358; // ?
/* 0x1000e359 */ LDATA extern char public_1000e359; // ?
/* 0x1000e35a */ LDATA extern char public_1000e35a; // ?
/* 0x1000e35b */ LDATA extern char public_1000e35b; // ?
/* 0x1000e35c */ LDATA extern char public_1000e35c; // ?
/* 0x1000e35d */ LDATA extern char public_1000e35d; // ?
/* 0x1000e35e */ LDATA extern char public_1000e35e; // ?
/* 0x1000e35f */ LDATA extern char public_1000e35f; // ?
/* 0x1000e360 */ LDATA extern char public_1000e360; // ?
/* 0x1000e361 */ LDATA extern char public_1000e361; // ?
/* 0x1000e362 */ LDATA extern char public_1000e362; // ?
/* 0x1000e363 */ LDATA extern char public_1000e363; // ?
/* 0x1000e364 */ LDATA extern char public_1000e364; // ?
/* 0x1000e365 */ LDATA extern char public_1000e365; // ?
/* 0x1000e366 */ LDATA extern char public_1000e366; // ?
/* 0x1000e367 */ LDATA extern char public_1000e367; // ?
/* 0x1000e368 */ LDATA extern char public_1000e368; // ?
/* 0x1000e369 */ LDATA extern char public_1000e369; // ?
/* 0x1000e36a */ LDATA extern char public_1000e36a; // ?
/* 0x1000e36b */ LDATA extern char public_1000e36b; // ?
/* 0x1000e36c */ LDATA extern char public_1000e36c; // ?
/* 0x1000e36d */ LDATA extern char public_1000e36d; // ?
/* 0x1000e36e */ LDATA extern char public_1000e36e; // ?
/* 0x1000e36f */ LDATA extern char public_1000e36f; // ?
/* 0x1000e370 */ LDATA extern char public_1000e370; // ?
/* 0x1000e371 */ LDATA extern char public_1000e371; // ?
/* 0x1000e372 */ LDATA extern char public_1000e372; // ?
/* 0x1000e373 */ LDATA extern char public_1000e373; // ?
/* 0x1000e374 */ LDATA extern char public_1000e374; // ?
/* 0x1000e375 */ LDATA extern char public_1000e375; // ?
/* 0x1000e376 */ LDATA extern char public_1000e376; // ?
/* 0x1000e377 */ LDATA extern char public_1000e377; // ?
/* 0x1000e378 */ LDATA extern char public_1000e378; // ?
/* 0x1000e379 */ LDATA extern char public_1000e379; // ?
/* 0x1000e37a */ LDATA extern char public_1000e37a; // ?
/* 0x1000e37b */ LDATA extern char public_1000e37b; // ?
/* 0x1000e37c */ LDATA extern char public_1000e37c; // ?
/* 0x1000e37d */ LDATA extern char public_1000e37d; // ?
/* 0x1000e37e */ LDATA extern char public_1000e37e; // ?
/* 0x1000e37f */ LDATA extern char public_1000e37f; // ?
/* 0x1000e380 */ LDATA extern char public_1000e380; // ?
/* 0x1000e381 */ LDATA extern char public_1000e381; // ?
/* 0x1000e382 */ LDATA extern char public_1000e382; // ?
/* 0x1000e383 */ LDATA extern char public_1000e383; // ?
/* 0x1000e384 */ LDATA extern char public_1000e384; // ?
/* 0x1000e385 */ LDATA extern char public_1000e385; // ?
/* 0x1000e386 */ LDATA extern char public_1000e386; // ?
/* 0x1000e387 */ LDATA extern char public_1000e387; // ?
/* 0x1000e388 */ LDATA extern char public_1000e388; // ?
/* 0x1000e389 */ LDATA extern char public_1000e389; // ?
/* 0x1000e38a */ LDATA extern char public_1000e38a; // ?
/* 0x1000e38b */ LDATA extern char public_1000e38b; // ?
/* 0x1000e38c */ LDATA extern char public_1000e38c; // ?
/* 0x1000e38d */ LDATA extern char public_1000e38d; // ?
/* 0x1000e38e */ LDATA extern char public_1000e38e; // ?
/* 0x1000e38f */ LDATA extern char public_1000e38f; // ?
/* 0x1000e390 */ LDATA extern char public_1000e390; // ?
/* 0x1000e391 */ LDATA extern char public_1000e391; // ?
/* 0x1000e392 */ LDATA extern char public_1000e392; // ?
/* 0x1000e393 */ LDATA extern char public_1000e393; // ?
/* 0x1000e394 */ LDATA extern char public_1000e394; // ?
/* 0x1000e395 */ LDATA extern char public_1000e395; // ?
/* 0x1000e396 */ LDATA extern char public_1000e396; // ?
/* 0x1000e397 */ LDATA extern char public_1000e397; // ?
/* 0x1000e398 */ LDATA extern char public_1000e398; // ?
/* 0x1000e399 */ LDATA extern char public_1000e399; // ?
/* 0x1000e39a */ LDATA extern char public_1000e39a; // ?
/* 0x1000e39b */ LDATA extern char public_1000e39b; // ?
/* 0x1000e39c */ LDATA extern char public_1000e39c; // ?
/* 0x1000e39d */ LDATA extern char public_1000e39d; // ?
/* 0x1000e39e */ LDATA extern char public_1000e39e; // ?
/* 0x1000e39f */ LDATA extern char public_1000e39f; // ?
/* 0x1000e3a0 */ LDATA extern char public_1000e3a0; // ?
/* 0x1000e3a1 */ LDATA extern char public_1000e3a1; // ?
/* 0x1000e3a2 */ LDATA extern char public_1000e3a2; // ?
/* 0x1000e3a3 */ LDATA extern char public_1000e3a3; // ?
/* 0x1000e3a4 */ LDATA extern char public_1000e3a4; // ?
/* 0x1000e3a5 */ LDATA extern char public_1000e3a5; // ?
/* 0x1000e3a6 */ LDATA extern char public_1000e3a6; // ?
/* 0x1000e3a7 */ LDATA extern char public_1000e3a7; // ?
/* 0x1000e3a8 */ LDATA extern char public_1000e3a8; // ?
/* 0x1000e3a9 */ LDATA extern char public_1000e3a9; // ?
/* 0x1000e3aa */ LDATA extern char public_1000e3aa; // ?
/* 0x1000e3ab */ LDATA extern char public_1000e3ab; // ?
/* 0x1000e3ac */ LDATA extern char public_1000e3ac; // ?
/* 0x1000e3ad */ LDATA extern char public_1000e3ad; // ?
/* 0x1000e3ae */ LDATA extern char public_1000e3ae; // ?
/* 0x1000e3af */ LDATA extern char public_1000e3af; // ?
/* 0x1000e3b0 */ LDATA extern char public_1000e3b0; // ?
/* 0x1000e3b1 */ LDATA extern char public_1000e3b1; // ?
/* 0x1000e3b2 */ LDATA extern char public_1000e3b2; // ?
/* 0x1000e3b3 */ LDATA extern char public_1000e3b3; // ?
/* 0x1000e3b4 */ LDATA extern char public_1000e3b4; // ?
/* 0x1000e3b5 */ LDATA extern char public_1000e3b5; // ?
/* 0x1000e3b6 */ LDATA extern char public_1000e3b6; // ?
/* 0x1000e3b7 */ LDATA extern char public_1000e3b7; // ?
/* 0x1000e3b8 */ LDATA extern char public_1000e3b8; // ?
/* 0x1000e3b9 */ LDATA extern char public_1000e3b9; // ?
/* 0x1000e3ba */ LDATA extern char public_1000e3ba; // ?
/* 0x1000e3bb */ LDATA extern char public_1000e3bb; // ?
/* 0x1000e3bc */ LDATA extern char public_1000e3bc; // ?
/* 0x1000e3bd */ LDATA extern char public_1000e3bd; // ?
/* 0x1000e3be */ LDATA extern char public_1000e3be; // ?
/* 0x1000e3bf */ LDATA extern char public_1000e3bf; // ?
/* 0x1000e3c0 */ LDATA extern char public_1000e3c0; // ?
/* 0x1000e3c1 */ LDATA extern char public_1000e3c1; // ?
/* 0x1000e3c2 */ LDATA extern char public_1000e3c2; // ?
/* 0x1000e3c3 */ LDATA extern char public_1000e3c3; // ?
/* 0x1000e3c4 */ LDATA extern char public_1000e3c4; // ?
/* 0x1000e3c5 */ LDATA extern char public_1000e3c5; // ?
/* 0x1000e3c6 */ LDATA extern char public_1000e3c6; // ?
/* 0x1000e3c7 */ LDATA extern char public_1000e3c7; // ?
/* 0x1000e3c8 */ LDATA extern char public_1000e3c8; // ?
/* 0x1000e3c9 */ LDATA extern char public_1000e3c9; // ?
/* 0x1000e3ca */ LDATA extern char public_1000e3ca; // ?
/* 0x1000e3cb */ LDATA extern char public_1000e3cb; // ?
/* 0x1000e3cc */ LDATA extern char public_1000e3cc; // ?
/* 0x1000e3cd */ LDATA extern char public_1000e3cd; // ?
/* 0x1000e3ce */ LDATA extern char public_1000e3ce; // ?
/* 0x1000e3cf */ LDATA extern char public_1000e3cf; // ?
/* 0x1000e3d0 */ LDATA extern char public_1000e3d0; // ?
/* 0x1000e3d1 */ LDATA extern char public_1000e3d1; // ?
/* 0x1000e3d2 */ LDATA extern char public_1000e3d2; // ?
/* 0x1000e3d3 */ LDATA extern char public_1000e3d3; // ?
/* 0x1000e3d4 */ LDATA extern char public_1000e3d4; // ?
/* 0x1000e3d5 */ LDATA extern char public_1000e3d5; // ?
/* 0x1000e3d6 */ LDATA extern char public_1000e3d6; // ?
/* 0x1000e3d7 */ LDATA extern char public_1000e3d7; // ?
/* 0x1000e3d8 */ LDATA extern char public_1000e3d8; // ?
/* 0x1000e3d9 */ LDATA extern char public_1000e3d9; // ?
/* 0x1000e3da */ LDATA extern char public_1000e3da; // ?
/* 0x1000e3db */ LDATA extern char public_1000e3db; // ?
/* 0x1000e3dc */ LDATA extern char public_1000e3dc; // ?
/* 0x1000e3dd */ LDATA extern char public_1000e3dd; // ?
/* 0x1000e3de */ LDATA extern char public_1000e3de; // ?
/* 0x1000e3df */ LDATA extern char public_1000e3df; // ?
/* 0x1000e3e0 */ LDATA extern char public_1000e3e0; // ?
/* 0x1000e3e1 */ LDATA extern char public_1000e3e1; // ?
/* 0x1000e3e2 */ LDATA extern char public_1000e3e2; // ?
/* 0x1000e3e3 */ LDATA extern char public_1000e3e3; // ?
/* 0x1000e3e4 */ LDATA extern char public_1000e3e4; // ?
/* 0x1000e3e5 */ LDATA extern char public_1000e3e5; // ?
/* 0x1000e3e6 */ LDATA extern char public_1000e3e6; // ?
/* 0x1000e3e7 */ LDATA extern char public_1000e3e7; // ?
/* 0x1000e3e8 */ LDATA extern char public_1000e3e8; // ?
/* 0x1000e3e9 */ LDATA extern char public_1000e3e9; // ?
/* 0x1000e3ea */ LDATA extern char public_1000e3ea; // ?
/* 0x1000e3eb */ LDATA extern char public_1000e3eb; // ?
/* 0x1000e3ec */ LDATA extern char public_1000e3ec; // ?
/* 0x1000e3ed */ LDATA extern char public_1000e3ed; // ?
/* 0x1000e3ee */ LDATA extern char public_1000e3ee; // ?
/* 0x1000e3ef */ LDATA extern char public_1000e3ef; // ?
/* 0x1000e3f0 */ LDATA extern char public_1000e3f0; // ?
/* 0x1000e3f1 */ LDATA extern char public_1000e3f1; // ?
/* 0x1000e3f2 */ LDATA extern char public_1000e3f2; // ?
/* 0x1000e3f3 */ LDATA extern char public_1000e3f3; // ?
/* 0x1000e3f4 */ LDATA extern char public_1000e3f4; // ?
/* 0x1000e3f5 */ LDATA extern char public_1000e3f5; // ?
/* 0x1000e3f6 */ LDATA extern char public_1000e3f6; // ?
/* 0x1000e3f7 */ LDATA extern char public_1000e3f7; // ?
/* 0x1000e3f8 */ LDATA extern char public_1000e3f8; // ?
/* 0x1000e3f9 */ LDATA extern char public_1000e3f9; // ?
/* 0x1000e3fa */ LDATA extern char public_1000e3fa; // ?
/* 0x1000e3fb */ LDATA extern char public_1000e3fb; // ?
/* 0x1000e3fc */ LDATA extern char public_1000e3fc; // ?
/* 0x1000e3fd */ LDATA extern char public_1000e3fd; // ?
/* 0x1000e3fe */ LDATA extern char public_1000e3fe; // ?
/* 0x1000e3ff */ LDATA extern char public_1000e3ff; // ?
/* 0x1000e400 */ LDATA extern char public_1000e400; // ?
/* 0x1000e401 */ LDATA extern char public_1000e401; // ?
/* 0x1000e402 */ LDATA extern char public_1000e402; // ?
/* 0x1000e403 */ LDATA extern char public_1000e403; // ?
/* 0x1000e404 */ LDATA extern char public_1000e404; // ?
/* 0x1000e405 */ LDATA extern char public_1000e405; // ?
/* 0x1000e406 */ LDATA extern char public_1000e406; // ?
/* 0x1000e407 */ LDATA extern char public_1000e407; // ?
/* 0x1000e408 */ LDATA extern char public_1000e408; // ?
/* 0x1000e409 */ LDATA extern char public_1000e409; // ?
/* 0x1000e40a */ LDATA extern char public_1000e40a; // ?
/* 0x1000e40b */ LDATA extern char public_1000e40b; // ?
/* 0x1000e40c */ LDATA extern char public_1000e40c; // ?
/* 0x1000e40d */ LDATA extern char public_1000e40d; // ?
/* 0x1000e40e */ LDATA extern char public_1000e40e; // ?
/* 0x1000e40f */ LDATA extern char public_1000e40f; // ?
/* 0x1000e410 */ LDATA extern char public_1000e410; // ?
/* 0x1000e411 */ LDATA extern char public_1000e411; // ?
/* 0x1000e412 */ LDATA extern char public_1000e412; // ?
/* 0x1000e413 */ LDATA extern char public_1000e413; // ?
/* 0x1000e414 */ LDATA extern char public_1000e414; // ?
/* 0x1000e415 */ LDATA extern char public_1000e415; // ?
/* 0x1000e416 */ LDATA extern char public_1000e416; // ?
/* 0x1000e417 */ LDATA extern char public_1000e417; // ?
/* 0x1000e418 */ LDATA extern char public_1000e418; // ?
/* 0x1000e419 */ LDATA extern char public_1000e419; // ?
/* 0x1000e41a */ LDATA extern char public_1000e41a; // ?
/* 0x1000e41b */ LDATA extern char public_1000e41b; // ?
/* 0x1000e41c */ LDATA extern char public_1000e41c; // ?
/* 0x1000e41d */ LDATA extern char public_1000e41d; // ?
/* 0x1000e41e */ LDATA extern char public_1000e41e; // ?
/* 0x1000e41f */ LDATA extern char public_1000e41f; // ?
/* 0x1000e420 */ LDATA extern char public_1000e420; // ?
/* 0x1000e421 */ LDATA extern char public_1000e421; // ?
/* 0x1000e422 */ LDATA extern char public_1000e422; // ?
/* 0x1000e423 */ LDATA extern char public_1000e423; // ?
/* 0x1000e424 */ LDATA extern char public_1000e424; // ?
/* 0x1000e425 */ LDATA extern char public_1000e425; // ?
/* 0x1000e426 */ LDATA extern char public_1000e426; // ?
/* 0x1000e427 */ LDATA extern char public_1000e427; // ?
/* 0x1000e428 */ LDATA extern char public_1000e428; // ?
/* 0x1000e429 */ LDATA extern char public_1000e429; // ?
/* 0x1000e42a */ LDATA extern char public_1000e42a; // ?
/* 0x1000e42b */ LDATA extern char public_1000e42b; // ?
/* 0x1000e42c */ LDATA extern char public_1000e42c; // ?
/* 0x1000e42d */ LDATA extern char public_1000e42d; // ?
/* 0x1000e42e */ LDATA extern char public_1000e42e; // ?
/* 0x1000e42f */ LDATA extern char public_1000e42f; // ?
/* 0x1000e430 */ LDATA extern char public_1000e430; // ?
/* 0x1000e431 */ LDATA extern char public_1000e431; // ?
/* 0x1000e432 */ LDATA extern char public_1000e432; // ?
/* 0x1000e433 */ LDATA extern char public_1000e433; // ?
/* 0x1000e434 */ LDATA extern char public_1000e434; // ?
/* 0x1000e435 */ LDATA extern char public_1000e435; // ?
/* 0x1000e436 */ LDATA extern char public_1000e436; // ?
/* 0x1000e437 */ LDATA extern char public_1000e437; // ?
/* 0x1000e438 */ LDATA extern char public_1000e438; // ?
/* 0x1000e439 */ LDATA extern char public_1000e439; // ?
/* 0x1000e43a */ LDATA extern char public_1000e43a; // ?
/* 0x1000e43b */ LDATA extern char public_1000e43b; // ?
/* 0x1000e43c */ LDATA extern char public_1000e43c; // ?
/* 0x1000e43d */ LDATA extern char public_1000e43d; // ?
/* 0x1000e43e */ LDATA extern char public_1000e43e; // ?
/* 0x1000e43f */ LDATA extern char public_1000e43f; // ?
/* 0x1000e440 */ LDATA extern char public_1000e440; // ?
/* 0x1000e441 */ LDATA extern char public_1000e441; // ?
/* 0x1000e442 */ LDATA extern char public_1000e442; // ?
/* 0x1000e443 */ LDATA extern char public_1000e443; // ?
/* 0x1000e444 */ LDATA extern char public_1000e444; // ?
/* 0x1000e445 */ LDATA extern char public_1000e445; // ?
/* 0x1000e446 */ LDATA extern char public_1000e446; // ?
/* 0x1000e447 */ LDATA extern char public_1000e447; // ?
/* 0x1000e448 */ LDATA extern char public_1000e448; // ?
/* 0x1000e449 */ LDATA extern char public_1000e449; // ?
/* 0x1000e44a */ LDATA extern char public_1000e44a; // ?
/* 0x1000e44b */ LDATA extern char public_1000e44b; // ?
/* 0x1000e44c */ LDATA extern char public_1000e44c; // ?
/* 0x1000e44d */ LDATA extern char public_1000e44d; // ?
/* 0x1000e44e */ LDATA extern char public_1000e44e; // ?
/* 0x1000e44f */ LDATA extern char public_1000e44f; // ?
/* 0x1000e450 */ LDATA extern char public_1000e450; // ?
/* 0x1000e451 */ LDATA extern char public_1000e451; // ?
/* 0x1000e452 */ LDATA extern char public_1000e452; // ?
/* 0x1000e453 */ LDATA extern char public_1000e453; // ?
/* 0x1000e454 */ LDATA extern char public_1000e454; // ?
/* 0x1000e455 */ LDATA extern char public_1000e455; // ?
/* 0x1000e456 */ LDATA extern char public_1000e456; // ?
/* 0x1000e457 */ LDATA extern char public_1000e457; // ?
/* 0x1000e458 */ LDATA extern char public_1000e458; // ?
/* 0x1000e459 */ LDATA extern char public_1000e459; // ?
/* 0x1000e45a */ LDATA extern char public_1000e45a; // ?
/* 0x1000e45b */ LDATA extern char public_1000e45b; // ?
/* 0x1000e45c */ LDATA extern char public_1000e45c; // ?
/* 0x1000e45d */ LDATA extern char public_1000e45d; // ?
/* 0x1000e45e */ LDATA extern char public_1000e45e; // ?
/* 0x1000e45f */ LDATA extern char public_1000e45f; // ?
/* 0x1000e460 */ LDATA extern char public_1000e460; // ?
/* 0x1000e461 */ LDATA extern char public_1000e461; // ?
/* 0x1000e462 */ LDATA extern char public_1000e462; // ?
/* 0x1000e463 */ LDATA extern char public_1000e463; // ?
/* 0x1000e464 */ LDATA extern char public_1000e464; // ?
/* 0x1000e465 */ LDATA extern char public_1000e465; // ?
/* 0x1000e466 */ LDATA extern char public_1000e466; // ?
/* 0x1000e467 */ LDATA extern char public_1000e467; // ?
/* 0x1000e468 */ LDATA extern char public_1000e468; // ?
/* 0x1000e469 */ LDATA extern char public_1000e469; // ?
/* 0x1000e46a */ LDATA extern char public_1000e46a; // ?
/* 0x1000e46b */ LDATA extern char public_1000e46b; // ?
/* 0x1000e46c */ LDATA extern char public_1000e46c; // ?
/* 0x1000e46d */ LDATA extern char public_1000e46d; // ?
/* 0x1000e46e */ LDATA extern char public_1000e46e; // ?
/* 0x1000e46f */ LDATA extern char public_1000e46f; // ?
/* 0x1000e470 */ LDATA extern char public_1000e470; // ?
/* 0x1000e471 */ LDATA extern char public_1000e471; // ?
/* 0x1000e472 */ LDATA extern char public_1000e472; // ?
/* 0x1000e473 */ LDATA extern char public_1000e473; // ?
/* 0x1000e474 */ LDATA extern char public_1000e474; // ?
/* 0x1000e475 */ LDATA extern char public_1000e475; // ?
/* 0x1000e476 */ LDATA extern char public_1000e476; // ?
/* 0x1000e477 */ LDATA extern char public_1000e477; // ?
/* 0x1000e478 */ LDATA extern char public_1000e478; // ?
/* 0x1000e479 */ LDATA extern char public_1000e479; // ?
/* 0x1000e47a */ LDATA extern char public_1000e47a; // ?
/* 0x1000e47b */ LDATA extern char public_1000e47b; // ?
/* 0x1000e47c */ LDATA extern char public_1000e47c; // ?
/* 0x1000e47d */ LDATA extern char public_1000e47d; // ?
/* 0x1000e47e */ LDATA extern char public_1000e47e; // ?
/* 0x1000e47f */ LDATA extern char public_1000e47f; // ?
/* 0x1000e480 */ LDATA extern char public_1000e480; // ?
/* 0x1000e481 */ LDATA extern char public_1000e481; // ?
/* 0x1000e482 */ LDATA extern char public_1000e482; // ?
/* 0x1000e483 */ LDATA extern char public_1000e483; // ?
/* 0x1000e484 */ LDATA extern char public_1000e484; // ?
/* 0x1000e485 */ LDATA extern char public_1000e485; // ?
/* 0x1000e486 */ LDATA extern char public_1000e486; // ?
/* 0x1000e487 */ LDATA extern char public_1000e487; // ?
/* 0x1000e488 */ LDATA extern char public_1000e488; // ?
/* 0x1000e489 */ LDATA extern char public_1000e489; // ?
/* 0x1000e48a */ LDATA extern char public_1000e48a; // ?
/* 0x1000e48b */ LDATA extern char public_1000e48b; // ?
/* 0x1000e48c */ LDATA extern char public_1000e48c; // ?
/* 0x1000e48d */ LDATA extern char public_1000e48d; // ?
/* 0x1000e48e */ LDATA extern char public_1000e48e; // ?
/* 0x1000e48f */ LDATA extern char public_1000e48f; // ?
/* 0x1000e490 */ LDATA extern char public_1000e490; // ?
/* 0x1000e491 */ LDATA extern char public_1000e491; // ?
/* 0x1000e492 */ LDATA extern char public_1000e492; // ?
/* 0x1000e493 */ LDATA extern char public_1000e493; // ?
/* 0x1000e494 */ LDATA extern char public_1000e494; // ?
/* 0x1000e495 */ LDATA extern char public_1000e495; // ?
/* 0x1000e496 */ LDATA extern char public_1000e496; // ?
/* 0x1000e497 */ LDATA extern char public_1000e497; // ?
/* 0x1000e498 */ LDATA extern char public_1000e498; // ?
/* 0x1000e499 */ LDATA extern char public_1000e499; // ?
/* 0x1000e49a */ LDATA extern char public_1000e49a; // ?
/* 0x1000e49b */ LDATA extern char public_1000e49b; // ?
/* 0x1000e49c */ LDATA extern char public_1000e49c; // ?
/* 0x1000e49d */ LDATA extern char public_1000e49d; // ?
/* 0x1000e49e */ LDATA extern char public_1000e49e; // ?
/* 0x1000e49f */ LDATA extern char public_1000e49f; // ?
/* 0x1000e4a0 */ LDATA extern char public_1000e4a0; // ?
/* 0x1000e4a1 */ LDATA extern char public_1000e4a1; // ?
/* 0x1000e4a2 */ LDATA extern char public_1000e4a2; // ?
/* 0x1000e4a3 */ LDATA extern char public_1000e4a3; // ?
/* 0x1000e4a4 */ LDATA extern char public_1000e4a4; // ?
/* 0x1000e4a5 */ LDATA extern char public_1000e4a5; // ?
/* 0x1000e4a6 */ LDATA extern char public_1000e4a6; // ?
/* 0x1000e4a7 */ LDATA extern char public_1000e4a7; // ?
/* 0x1000e4a8 */ LDATA extern char public_1000e4a8; // ?
/* 0x1000e4a9 */ LDATA extern char public_1000e4a9; // ?
/* 0x1000e4aa */ LDATA extern char public_1000e4aa; // ?
/* 0x1000e4ab */ LDATA extern char public_1000e4ab; // ?
/* 0x1000e4ac */ LDATA extern char public_1000e4ac; // ?
/* 0x1000e4ad */ LDATA extern char public_1000e4ad; // ?
/* 0x1000e4ae */ LDATA extern char public_1000e4ae; // ?
/* 0x1000e4af */ LDATA extern char public_1000e4af; // ?
/* 0x1000e4b0 */ LDATA extern char public_1000e4b0; // ?
/* 0x1000e4b1 */ LDATA extern char public_1000e4b1; // ?
/* 0x1000e4b2 */ LDATA extern char public_1000e4b2; // ?
/* 0x1000e4b3 */ LDATA extern char public_1000e4b3; // ?
/* 0x1000e4b4 */ LDATA extern char public_1000e4b4; // ?
/* 0x1000e4b5 */ LDATA extern char public_1000e4b5; // ?
/* 0x1000e4b6 */ LDATA extern char public_1000e4b6; // ?
/* 0x1000e4b7 */ LDATA extern char public_1000e4b7; // ?
/* 0x1000e4b8 */ LDATA extern char public_1000e4b8; // ?
/* 0x1000e4b9 */ LDATA extern char public_1000e4b9; // ?
/* 0x1000e4ba */ LDATA extern char public_1000e4ba; // ?
/* 0x1000e4bb */ LDATA extern char public_1000e4bb; // ?
/* 0x1000e4bc */ LDATA extern char public_1000e4bc; // ?
/* 0x1000e4bd */ LDATA extern char public_1000e4bd; // ?
/* 0x1000e4be */ LDATA extern char public_1000e4be; // ?
/* 0x1000e4bf */ LDATA extern char public_1000e4bf; // ?
/* 0x1000e4c0 */ LDATA extern char public_1000e4c0; // ?
/* 0x1000e4c1 */ LDATA extern char public_1000e4c1; // ?
/* 0x1000e4c2 */ LDATA extern char public_1000e4c2; // ?
/* 0x1000e4c3 */ LDATA extern char public_1000e4c3; // ?
/* 0x1000e4c4 */ LDATA extern char public_1000e4c4; // ?
/* 0x1000e4c5 */ LDATA extern char public_1000e4c5; // ?
/* 0x1000e4c6 */ LDATA extern char public_1000e4c6; // ?
/* 0x1000e4c7 */ LDATA extern char public_1000e4c7; // ?
/* 0x1000e4c8 */ LDATA extern char public_1000e4c8; // ?
/* 0x1000e4c9 */ LDATA extern char public_1000e4c9; // ?
/* 0x1000e4ca */ LDATA extern char public_1000e4ca; // ?
/* 0x1000e4cb */ LDATA extern char public_1000e4cb; // ?
/* 0x1000e4cc */ LDATA extern char public_1000e4cc; // ?
/* 0x1000e4cd */ LDATA extern char public_1000e4cd; // ?
/* 0x1000e4ce */ LDATA extern char public_1000e4ce; // ?
/* 0x1000e4cf */ LDATA extern char public_1000e4cf; // ?
/* 0x1000e4d0 */ LDATA extern char public_1000e4d0; // ?
/* 0x1000e4d1 */ LDATA extern char public_1000e4d1; // ?
/* 0x1000e4d2 */ LDATA extern char public_1000e4d2; // ?
/* 0x1000e4d3 */ LDATA extern char public_1000e4d3; // ?
/* 0x1000e4d4 */ LDATA extern char public_1000e4d4; // ?
/* 0x1000e4d5 */ LDATA extern char public_1000e4d5; // ?
/* 0x1000e4d6 */ LDATA extern char public_1000e4d6; // ?
/* 0x1000e4d7 */ LDATA extern char public_1000e4d7; // ?
/* 0x1000e4d8 */ LDATA extern char public_1000e4d8; // ?
/* 0x1000e4d9 */ LDATA extern char public_1000e4d9; // ?
/* 0x1000e4da */ LDATA extern char public_1000e4da; // ?
/* 0x1000e4db */ LDATA extern char public_1000e4db; // ?
/* 0x1000e4dc */ LDATA extern char public_1000e4dc; // ?
/* 0x1000e4dd */ LDATA extern char public_1000e4dd; // ?
/* 0x1000e4de */ LDATA extern char public_1000e4de; // ?
/* 0x1000e4df */ LDATA extern char public_1000e4df; // ?
/* 0x1000e4e0 */ LDATA extern char public_1000e4e0; // ?
/* 0x1000e4e1 */ LDATA extern char public_1000e4e1; // ?
/* 0x1000e4e2 */ LDATA extern char public_1000e4e2; // ?
/* 0x1000e4e3 */ LDATA extern char public_1000e4e3; // ?
/* 0x1000e4e4 */ LDATA extern char public_1000e4e4; // ?
/* 0x1000e4e5 */ LDATA extern char public_1000e4e5; // ?
/* 0x1000e4e6 */ LDATA extern char public_1000e4e6; // ?
/* 0x1000e4e7 */ LDATA extern char public_1000e4e7; // ?
/* 0x1000e4e8 */ LDATA extern char public_1000e4e8; // ?
/* 0x1000e4e9 */ LDATA extern char public_1000e4e9; // ?
/* 0x1000e4ea */ LDATA extern char public_1000e4ea; // ?
/* 0x1000e4eb */ LDATA extern char public_1000e4eb; // ?
/* 0x1000e4ec */ LDATA extern char public_1000e4ec; // ?
/* 0x1000e4ed */ LDATA extern char public_1000e4ed; // ?
/* 0x1000e4ee */ LDATA extern char public_1000e4ee; // ?
/* 0x1000e4ef */ LDATA extern char public_1000e4ef; // ?
/* 0x1000e4f0 */ LDATA extern char public_1000e4f0; // ?
/* 0x1000e4f1 */ LDATA extern char public_1000e4f1; // ?
/* 0x1000e4f2 */ LDATA extern char public_1000e4f2; // ?
/* 0x1000e4f3 */ LDATA extern char public_1000e4f3; // ?
/* 0x1000e4f4 */ LDATA extern char public_1000e4f4; // ?
/* 0x1000e4f5 */ LDATA extern char public_1000e4f5; // ?
/* 0x1000e4f6 */ LDATA extern char public_1000e4f6; // ?
/* 0x1000e4f7 */ LDATA extern char public_1000e4f7; // ?
/* 0x1000e4f8 */ LDATA extern char public_1000e4f8; // ?
/* 0x1000e4f9 */ LDATA extern char public_1000e4f9; // ?
/* 0x1000e4fa */ LDATA extern char public_1000e4fa; // ?
/* 0x1000e4fb */ LDATA extern char public_1000e4fb; // ?
/* 0x1000e4fc */ LDATA extern char public_1000e4fc; // ?
/* 0x1000e4fd */ LDATA extern char public_1000e4fd; // ?
/* 0x1000e4fe */ LDATA extern char public_1000e4fe; // ?
/* 0x1000e4ff */ LDATA extern char public_1000e4ff; // ?
/* 0x1000e500 */ LDATA extern char public_1000e500; // ?
/* 0x1000e501 */ LDATA extern char public_1000e501; // ?
/* 0x1000e502 */ LDATA extern char public_1000e502; // ?
/* 0x1000e503 */ LDATA extern char public_1000e503; // ?
/* 0x1000e504 */ LDATA extern char public_1000e504; // ?
/* 0x1000e505 */ LDATA extern char public_1000e505; // ?
/* 0x1000e506 */ LDATA extern char public_1000e506; // ?
/* 0x1000e507 */ LDATA extern char public_1000e507; // ?
/* 0x1000e508 */ LDATA extern char public_1000e508; // ?
/* 0x1000e509 */ LDATA extern char public_1000e509; // ?
/* 0x1000e50a */ LDATA extern char public_1000e50a; // ?
/* 0x1000e50b */ LDATA extern char public_1000e50b; // ?
/* 0x1000e50c */ LDATA extern char public_1000e50c; // ?
/* 0x1000e50d */ LDATA extern char public_1000e50d; // ?
/* 0x1000e50e */ LDATA extern char public_1000e50e; // ?
/* 0x1000e50f */ LDATA extern char public_1000e50f; // ?
/* 0x1000e510 */ LDATA extern char public_1000e510; // ?
/* 0x1000e511 */ LDATA extern char public_1000e511; // ?
/* 0x1000e512 */ LDATA extern char public_1000e512; // ?
/* 0x1000e513 */ LDATA extern char public_1000e513; // ?
/* 0x1000e514 */ LDATA extern char public_1000e514; // ?
/* 0x1000e515 */ LDATA extern char public_1000e515; // ?
/* 0x1000e516 */ LDATA extern char public_1000e516; // ?
/* 0x1000e517 */ LDATA extern char public_1000e517; // ?
/* 0x1000e518 */ LDATA extern char public_1000e518; // ?
/* 0x1000e519 */ LDATA extern char public_1000e519; // ?
/* 0x1000e51a */ LDATA extern char public_1000e51a; // ?
/* 0x1000e51b */ LDATA extern char public_1000e51b; // ?
/* 0x1000e51c */ LDATA extern char public_1000e51c; // ?
/* 0x1000e51d */ LDATA extern char public_1000e51d; // ?
/* 0x1000e51e */ LDATA extern char public_1000e51e; // ?
/* 0x1000e51f */ LDATA extern char public_1000e51f; // ?
/* 0x1000e520 */ LDATA extern char public_1000e520; // ?
/* 0x1000e521 */ LDATA extern char public_1000e521; // ?
/* 0x1000e522 */ LDATA extern char public_1000e522; // ?
/* 0x1000e523 */ LDATA extern char public_1000e523; // ?
/* 0x1000e524 */ LDATA extern char public_1000e524; // ?
/* 0x1000e525 */ LDATA extern char public_1000e525; // ?
/* 0x1000e526 */ LDATA extern char public_1000e526; // ?
/* 0x1000e527 */ LDATA extern char public_1000e527; // ?
/* 0x1000e528 */ LDATA extern char public_1000e528; // ?
/* 0x1000e529 */ LDATA extern char public_1000e529; // ?
/* 0x1000e52a */ LDATA extern char public_1000e52a; // ?
/* 0x1000e52b */ LDATA extern char public_1000e52b; // ?
/* 0x1000e52c */ LDATA extern char public_1000e52c; // ?
/* 0x1000e52d */ LDATA extern char public_1000e52d; // ?
/* 0x1000e52e */ LDATA extern char public_1000e52e; // ?
/* 0x1000e52f */ LDATA extern char public_1000e52f; // ?
/* 0x1000e530 */ LDATA extern char public_1000e530; // ?
/* 0x1000e531 */ LDATA extern char public_1000e531; // ?
/* 0x1000e532 */ LDATA extern char public_1000e532; // ?
/* 0x1000e533 */ LDATA extern char public_1000e533; // ?
/* 0x1000e534 */ LDATA extern char public_1000e534; // ?
/* 0x1000e535 */ LDATA extern char public_1000e535; // ?
/* 0x1000e536 */ LDATA extern char public_1000e536; // ?
/* 0x1000e537 */ LDATA extern char public_1000e537; // ?
/* 0x1000e538 */ LDATA extern char public_1000e538; // ?
/* 0x1000e539 */ LDATA extern char public_1000e539; // ?
/* 0x1000e53a */ LDATA extern char public_1000e53a; // ?
/* 0x1000e53b */ LDATA extern char public_1000e53b; // ?
/* 0x1000e53c */ LDATA extern char public_1000e53c; // ?
/* 0x1000e53d */ LDATA extern char public_1000e53d; // ?
/* 0x1000e53e */ LDATA extern char public_1000e53e; // ?
/* 0x1000e53f */ LDATA extern char public_1000e53f; // ?
/* 0x1000e540 */ LDATA extern char public_1000e540; // ?
/* 0x1000e541 */ LDATA extern char public_1000e541; // ?
/* 0x1000e542 */ LDATA extern char public_1000e542; // ?
/* 0x1000e543 */ LDATA extern char public_1000e543; // ?
/* 0x1000e544 */ LDATA extern char public_1000e544; // ?
/* 0x1000e545 */ LDATA extern char public_1000e545; // ?
/* 0x1000e546 */ LDATA extern char public_1000e546; // ?
/* 0x1000e547 */ LDATA extern char public_1000e547; // ?
/* 0x1000e548 */ LDATA extern char public_1000e548; // ?
/* 0x1000e549 */ LDATA extern char public_1000e549; // ?
/* 0x1000e54a */ LDATA extern char public_1000e54a; // ?
/* 0x1000e54b */ LDATA extern char public_1000e54b; // ?
/* 0x1000e54c */ LDATA extern char public_1000e54c; // ?
/* 0x1000e54d */ LDATA extern char public_1000e54d; // ?
/* 0x1000e54e */ LDATA extern char public_1000e54e; // ?
/* 0x1000e54f */ LDATA extern char public_1000e54f; // ?
/* 0x1000e550 */ LDATA extern char public_1000e550; // ?
/* 0x1000e551 */ LDATA extern char public_1000e551; // ?
/* 0x1000e552 */ LDATA extern char public_1000e552; // ?
/* 0x1000e553 */ LDATA extern char public_1000e553; // ?
/* 0x1000e554 */ LDATA extern char public_1000e554; // ?
/* 0x1000e555 */ LDATA extern char public_1000e555; // ?
/* 0x1000e556 */ LDATA extern char public_1000e556; // ?
/* 0x1000e557 */ LDATA extern char public_1000e557; // ?
/* 0x1000e558 */ LDATA extern char public_1000e558; // ?
/* 0x1000e559 */ LDATA extern char public_1000e559; // ?
/* 0x1000e55a */ LDATA extern char public_1000e55a; // ?
/* 0x1000e55b */ LDATA extern char public_1000e55b; // ?
/* 0x1000e55c */ LDATA extern char public_1000e55c; // ?
/* 0x1000e55d */ LDATA extern char public_1000e55d; // ?
/* 0x1000e55e */ LDATA extern char public_1000e55e; // ?
/* 0x1000e55f */ LDATA extern char public_1000e55f; // ?
/* 0x1000e560 */ LDATA extern char public_1000e560; // ?
/* 0x1000e561 */ LDATA extern char public_1000e561; // ?
/* 0x1000e562 */ LDATA extern char public_1000e562; // ?
/* 0x1000e563 */ LDATA extern char public_1000e563; // ?
/* 0x1000e564 */ LDATA extern char public_1000e564; // ?
/* 0x1000e565 */ LDATA extern char public_1000e565; // ?
/* 0x1000e566 */ LDATA extern char public_1000e566; // ?
/* 0x1000e567 */ LDATA extern char public_1000e567; // ?
/* 0x1000e568 */ LDATA extern char public_1000e568; // ?
/* 0x1000e569 */ LDATA extern char public_1000e569; // ?
/* 0x1000e56a */ LDATA extern char public_1000e56a; // ?
/* 0x1000e56b */ LDATA extern char public_1000e56b; // ?
/* 0x1000e56c */ LDATA extern char public_1000e56c; // ?
/* 0x1000e56d */ LDATA extern char public_1000e56d; // ?
/* 0x1000e56e */ LDATA extern char public_1000e56e; // ?
/* 0x1000e56f */ LDATA extern char public_1000e56f; // ?
/* 0x1000e570 */ LDATA extern char public_1000e570; // ?
/* 0x1000e571 */ LDATA extern char public_1000e571; // ?
/* 0x1000e572 */ LDATA extern char public_1000e572; // ?
/* 0x1000e573 */ LDATA extern char public_1000e573; // ?
/* 0x1000e574 */ LDATA extern char public_1000e574; // ?
/* 0x1000e575 */ LDATA extern char public_1000e575; // ?
/* 0x1000e576 */ LDATA extern char public_1000e576; // ?
/* 0x1000e577 */ LDATA extern char public_1000e577; // ?
/* 0x1000e578 */ LDATA extern char public_1000e578; // ?
/* 0x1000e579 */ LDATA extern char public_1000e579; // ?
/* 0x1000e57a */ LDATA extern char public_1000e57a; // ?
/* 0x1000e57b */ LDATA extern char public_1000e57b; // ?
/* 0x1000e57c */ LDATA extern char public_1000e57c; // ?
/* 0x1000e57d */ LDATA extern char public_1000e57d; // ?
/* 0x1000e57e */ LDATA extern char public_1000e57e; // ?
/* 0x1000e57f */ LDATA extern char public_1000e57f; // ?
/* 0x1000e580 */ LDATA extern char public_1000e580; // ?
/* 0x1000e581 */ LDATA extern char public_1000e581; // ?
/* 0x1000e582 */ LDATA extern char public_1000e582; // ?
/* 0x1000e583 */ LDATA extern char public_1000e583; // ?
/* 0x1000e584 */ LDATA extern char public_1000e584; // ?
/* 0x1000e585 */ LDATA extern char public_1000e585; // ?
/* 0x1000e586 */ LDATA extern char public_1000e586; // ?
/* 0x1000e587 */ LDATA extern char public_1000e587; // ?
/* 0x1000e588 */ LDATA extern char public_1000e588; // ?
/* 0x1000e589 */ LDATA extern char public_1000e589; // ?
/* 0x1000e58a */ LDATA extern char public_1000e58a; // ?
/* 0x1000e58b */ LDATA extern char public_1000e58b; // ?
/* 0x1000e58c */ LDATA extern char public_1000e58c; // ?
/* 0x1000e58d */ LDATA extern char public_1000e58d; // ?
/* 0x1000e58e */ LDATA extern char public_1000e58e; // ?
/* 0x1000e58f */ LDATA extern char public_1000e58f; // ?
/* 0x1000e590 */ LDATA extern char public_1000e590; // ?
/* 0x1000e591 */ LDATA extern char public_1000e591; // ?
/* 0x1000e592 */ LDATA extern char public_1000e592; // ?
/* 0x1000e593 */ LDATA extern char public_1000e593; // ?
/* 0x1000e594 */ LDATA extern char public_1000e594; // ?
/* 0x1000e595 */ LDATA extern char public_1000e595; // ?
/* 0x1000e596 */ LDATA extern char public_1000e596; // ?
/* 0x1000e597 */ LDATA extern char public_1000e597; // ?
/* 0x1000e598 */ LDATA extern char public_1000e598; // ?
/* 0x1000e599 */ LDATA extern char public_1000e599; // ?
/* 0x1000e59a */ LDATA extern char public_1000e59a; // ?
/* 0x1000e59b */ LDATA extern char public_1000e59b; // ?
/* 0x1000e59c */ LDATA extern char public_1000e59c; // ?
/* 0x1000e59d */ LDATA extern char public_1000e59d; // ?
/* 0x1000e59e */ LDATA extern char public_1000e59e; // ?
/* 0x1000e59f */ LDATA extern char public_1000e59f; // ?
/* 0x1000e5a0 */ LDATA extern char public_1000e5a0; // ?
/* 0x1000e5a1 */ LDATA extern char public_1000e5a1; // ?
/* 0x1000e5a2 */ LDATA extern char public_1000e5a2; // ?
/* 0x1000e5a3 */ LDATA extern char public_1000e5a3; // ?
/* 0x1000e5a4 */ LDATA extern char public_1000e5a4; // ?
/* 0x1000e5a5 */ LDATA extern char public_1000e5a5; // ?
/* 0x1000e5a6 */ LDATA extern char public_1000e5a6; // ?
/* 0x1000e5a7 */ LDATA extern char public_1000e5a7; // ?
/* 0x1000e5a8 */ LDATA extern char public_1000e5a8; // ?
/* 0x1000e5a9 */ LDATA extern char public_1000e5a9; // ?
/* 0x1000e5aa */ LDATA extern char public_1000e5aa; // ?
/* 0x1000e5ab */ LDATA extern char public_1000e5ab; // ?
/* 0x1000e5ac */ LDATA extern char public_1000e5ac; // ?
/* 0x1000e5ad */ LDATA extern char public_1000e5ad; // ?
/* 0x1000e5ae */ LDATA extern char public_1000e5ae; // ?
/* 0x1000e5af */ LDATA extern char public_1000e5af; // ?
/* 0x1000e5b0 */ LDATA extern char public_1000e5b0; // ?
/* 0x1000e5b1 */ LDATA extern char public_1000e5b1; // ?
/* 0x1000e5b2 */ LDATA extern char public_1000e5b2; // ?
/* 0x1000e5b3 */ LDATA extern char public_1000e5b3; // ?
/* 0x1000e5b4 */ LDATA extern char public_1000e5b4; // ?
/* 0x1000e5b5 */ LDATA extern char public_1000e5b5; // ?
/* 0x1000e5b6 */ LDATA extern char public_1000e5b6; // ?
/* 0x1000e5b7 */ LDATA extern char public_1000e5b7; // ?
/* 0x1000e5b8 */ LDATA extern char public_1000e5b8; // ?
/* 0x1000e5b9 */ LDATA extern char public_1000e5b9; // ?
/* 0x1000e5ba */ LDATA extern char public_1000e5ba; // ?
/* 0x1000e5bb */ LDATA extern char public_1000e5bb; // ?
/* 0x1000e5bc */ LDATA extern char public_1000e5bc; // ?
/* 0x1000e5bd */ LDATA extern char public_1000e5bd; // ?
/* 0x1000e5be */ LDATA extern char public_1000e5be; // ?
/* 0x1000e5bf */ LDATA extern char public_1000e5bf; // ?
/* 0x1000e5c0 */ LDATA extern char public_1000e5c0; // ?
/* 0x1000e5c1 */ LDATA extern char public_1000e5c1; // ?
/* 0x1000e5c2 */ LDATA extern char public_1000e5c2; // ?
/* 0x1000e5c3 */ LDATA extern char public_1000e5c3; // ?
/* 0x1000e5c4 */ LDATA extern char public_1000e5c4; // ?
/* 0x1000e5c5 */ LDATA extern char public_1000e5c5; // ?
/* 0x1000e5c6 */ LDATA extern char public_1000e5c6; // ?
/* 0x1000e5c7 */ LDATA extern char public_1000e5c7; // ?
/* 0x1000e5c8 */ LDATA extern char public_1000e5c8; // ?
/* 0x1000e5c9 */ LDATA extern char public_1000e5c9; // ?
/* 0x1000e5ca */ LDATA extern char public_1000e5ca; // ?
/* 0x1000e5cb */ LDATA extern char public_1000e5cb; // ?
/* 0x1000e5cc */ LDATA extern char public_1000e5cc; // ?
/* 0x1000e5cd */ LDATA extern char public_1000e5cd; // ?
/* 0x1000e5ce */ LDATA extern char public_1000e5ce; // ?
/* 0x1000e5cf */ LDATA extern char public_1000e5cf; // ?
/* 0x1000e5d0 */ LDATA extern char public_1000e5d0; // ?
/* 0x1000e5d1 */ LDATA extern char public_1000e5d1; // ?
/* 0x1000e5d2 */ LDATA extern char public_1000e5d2; // ?
/* 0x1000e5d3 */ LDATA extern char public_1000e5d3; // ?
/* 0x1000e5d4 */ LDATA extern char public_1000e5d4; // ?
/* 0x1000e5d5 */ LDATA extern char public_1000e5d5; // ?
/* 0x1000e5d6 */ LDATA extern char public_1000e5d6; // ?
/* 0x1000e5d7 */ LDATA extern char public_1000e5d7; // ?
/* 0x1000e5d8 */ LDATA extern char public_1000e5d8; // ?
/* 0x1000e5d9 */ LDATA extern char public_1000e5d9; // ?
/* 0x1000e5da */ LDATA extern char public_1000e5da; // ?
/* 0x1000e5db */ LDATA extern char public_1000e5db; // ?
/* 0x1000e5dc */ LDATA extern char public_1000e5dc; // ?
/* 0x1000e5dd */ LDATA extern char public_1000e5dd; // ?
/* 0x1000e5de */ LDATA extern char public_1000e5de; // ?
/* 0x1000e5df */ LDATA extern char public_1000e5df; // ?
/* 0x1000e5e0 */ LDATA extern char public_1000e5e0; // OOB+0x0000
/* 0x1000e5e1 */ LDATA extern char public_1000e5e1; // OOB+0x0001
/* 0x1000e5e2 */ LDATA extern char public_1000e5e2; // OOB+0x0002
/* 0x1000e5e3 */ LDATA extern char public_1000e5e3; // OOB+0x0003
/* 0x1000e5e4 */ LDATA extern char public_1000e5e4; // OOB+0x0004
/* 0x1000e5e5 */ LDATA extern char public_1000e5e5; // OOB+0x0005
/* 0x1000e5e6 */ LDATA extern char public_1000e5e6; // OOB+0x0006
/* 0x1000e5e7 */ LDATA extern char public_1000e5e7; // OOB+0x0007
/* 0x1000e5e8 */ LDATA extern char public_1000e5e8; // OOB+0x0008
/* 0x1000e5e9 */ LDATA extern char public_1000e5e9; // OOB+0x0009
/* 0x1000e5ea */ LDATA extern char public_1000e5ea; // OOB+0x000a
/* 0x1000e5eb */ LDATA extern char public_1000e5eb; // OOB+0x000b
/* 0x1000e5ec */ LDATA extern char public_1000e5ec; // OOB+0x000c
/* 0x1000e5ed */ LDATA extern char public_1000e5ed; // OOB+0x000d
/* 0x1000e5ee */ LDATA extern char public_1000e5ee; // OOB+0x000e
/* 0x1000e5ef */ LDATA extern char public_1000e5ef; // OOB+0x000f
/* 0x1000e5f0 */ LDATA extern char public_1000e5f0; // OOB+0x0010
/* 0x1000e5f1 */ LDATA extern char public_1000e5f1; // OOB+0x0011
/* 0x1000e5f2 */ LDATA extern char public_1000e5f2; // OOB+0x0012
/* 0x1000e5f3 */ LDATA extern char public_1000e5f3; // OOB+0x0013
/* 0x1000e5f4 */ LDATA extern char public_1000e5f4; // OOB+0x0014
/* 0x1000e5f5 */ LDATA extern char public_1000e5f5; // OOB+0x0015
/* 0x1000e5f6 */ LDATA extern char public_1000e5f6; // OOB+0x0016
/* 0x1000e5f7 */ LDATA extern char public_1000e5f7; // OOB+0x0017
/* 0x1000e5f8 */ LDATA extern char public_1000e5f8; // OOB+0x0018
/* 0x1000e5f9 */ LDATA extern char public_1000e5f9; // OOB+0x0019
/* 0x1000e5fa */ LDATA extern char public_1000e5fa; // OOB+0x001a
/* 0x1000e5fb */ LDATA extern char public_1000e5fb; // OOB+0x001b
/* 0x1000e5fc */ LDATA extern char public_1000e5fc; // OOB+0x001c
/* 0x1000e5fd */ LDATA extern char public_1000e5fd; // OOB+0x001d
/* 0x1000e5fe */ LDATA extern char public_1000e5fe; // OOB+0x001e
/* 0x1000e5ff */ LDATA extern char public_1000e5ff; // OOB+0x001f
/* 0x1000e600 */ LDATA extern char public_1000e600; // OOB+0x0020
/* 0x1000e601 */ LDATA extern char public_1000e601; // OOB+0x0021
/* 0x1000e602 */ LDATA extern char public_1000e602; // OOB+0x0022
/* 0x1000e603 */ LDATA extern char public_1000e603; // OOB+0x0023
/* 0x1000e604 */ LDATA extern char public_1000e604; // OOB+0x0024
/* 0x1000e605 */ LDATA extern char public_1000e605; // OOB+0x0025
/* 0x1000e606 */ LDATA extern char public_1000e606; // OOB+0x0026
/* 0x1000e607 */ LDATA extern char public_1000e607; // OOB+0x0027
/* 0x1000e608 */ LDATA extern char public_1000e608; // OOB+0x0028
/* 0x1000e609 */ LDATA extern char public_1000e609; // OOB+0x0029
/* 0x1000e60a */ LDATA extern char public_1000e60a; // OOB+0x002a
/* 0x1000e60b */ LDATA extern char public_1000e60b; // OOB+0x002b
/* 0x1000e60c */ LDATA extern char public_1000e60c; // OOB+0x002c
/* 0x1000e60d */ LDATA extern char public_1000e60d; // OOB+0x002d
/* 0x1000e60e */ LDATA extern char public_1000e60e; // OOB+0x002e
/* 0x1000e60f */ LDATA extern char public_1000e60f; // OOB+0x002f
/* 0x1000e610 */ LDATA extern char public_1000e610; // OOB+0x0030
/* 0x1000e611 */ LDATA extern char public_1000e611; // OOB+0x0031
/* 0x1000e612 */ LDATA extern char public_1000e612; // OOB+0x0032
/* 0x1000e613 */ LDATA extern char public_1000e613; // OOB+0x0033
/* 0x1000e614 */ LDATA extern char public_1000e614; // OOB+0x0034
/* 0x1000e615 */ LDATA extern char public_1000e615; // OOB+0x0035
/* 0x1000e616 */ LDATA extern char public_1000e616; // OOB+0x0036
/* 0x1000e617 */ LDATA extern char public_1000e617; // OOB+0x0037
/* 0x1000e618 */ LDATA extern char public_1000e618; // OOB+0x0038
/* 0x1000e619 */ LDATA extern char public_1000e619; // OOB+0x0039
/* 0x1000e61a */ LDATA extern char public_1000e61a; // OOB+0x003a
/* 0x1000e61b */ LDATA extern char public_1000e61b; // OOB+0x003b
/* 0x1000e61c */ LDATA extern char public_1000e61c; // OOB+0x003c
/* 0x1000e61d */ LDATA extern char public_1000e61d; // OOB+0x003d
/* 0x1000e61e */ LDATA extern char public_1000e61e; // OOB+0x003e
/* 0x1000e61f */ LDATA extern char public_1000e61f; // OOB+0x003f
/* 0x1000e620 */ LDATA extern char public_1000e620; // OOB+0x0040
/* 0x1000e621 */ LDATA extern char public_1000e621; // OOB+0x0041
/* 0x1000e622 */ LDATA extern char public_1000e622; // OOB+0x0042
/* 0x1000e623 */ LDATA extern char public_1000e623; // OOB+0x0043
/* 0x1000e624 */ LDATA extern char public_1000e624; // OOB+0x0044
/* 0x1000e625 */ LDATA extern char public_1000e625; // OOB+0x0045
/* 0x1000e626 */ LDATA extern char public_1000e626; // OOB+0x0046
/* 0x1000e627 */ LDATA extern char public_1000e627; // OOB+0x0047
/* 0x1000e628 */ LDATA extern char public_1000e628; // OOB+0x0048
/* 0x1000e629 */ LDATA extern char public_1000e629; // OOB+0x0049
/* 0x1000e62a */ LDATA extern char public_1000e62a; // OOB+0x004a
/* 0x1000e62b */ LDATA extern char public_1000e62b; // OOB+0x004b
/* 0x1000e62c */ LDATA extern char public_1000e62c; // OOB+0x004c
/* 0x1000e62d */ LDATA extern char public_1000e62d; // OOB+0x004d
/* 0x1000e62e */ LDATA extern char public_1000e62e; // OOB+0x004e
/* 0x1000e62f */ LDATA extern char public_1000e62f; // OOB+0x004f
/* 0x1000e630 */ LDATA extern char public_1000e630; // OOB+0x0050
/* 0x1000e631 */ LDATA extern char public_1000e631; // OOB+0x0051
/* 0x1000e632 */ LDATA extern char public_1000e632; // OOB+0x0052
/* 0x1000e633 */ LDATA extern char public_1000e633; // OOB+0x0053
/* 0x1000e634 */ LDATA extern char public_1000e634; // OOB+0x0054
/* 0x1000e635 */ LDATA extern char public_1000e635; // OOB+0x0055
/* 0x1000e636 */ LDATA extern char public_1000e636; // OOB+0x0056
/* 0x1000e637 */ LDATA extern char public_1000e637; // OOB+0x0057
/* 0x1000e638 */ LDATA extern char public_1000e638; // OOB+0x0058
/* 0x1000e639 */ LDATA extern char public_1000e639; // OOB+0x0059
/* 0x1000e63a */ LDATA extern char public_1000e63a; // OOB+0x005a
/* 0x1000e63b */ LDATA extern char public_1000e63b; // OOB+0x005b
/* 0x1000e63c */ LDATA extern char public_1000e63c; // OOB+0x005c
/* 0x1000e63d */ LDATA extern char public_1000e63d; // OOB+0x005d
/* 0x1000e63e */ LDATA extern char public_1000e63e; // OOB+0x005e
/* 0x1000e63f */ LDATA extern char public_1000e63f; // OOB+0x005f
/* 0x1000e640 */ LDATA extern char public_1000e640; // OOB+0x0060
/* 0x1000e641 */ LDATA extern char public_1000e641; // OOB+0x0061
/* 0x1000e642 */ LDATA extern char public_1000e642; // OOB+0x0062
/* 0x1000e643 */ LDATA extern char public_1000e643; // OOB+0x0063
/* 0x1000e644 */ LDATA extern char public_1000e644; // OOB+0x0064
/* 0x1000e645 */ LDATA extern char public_1000e645; // OOB+0x0065
/* 0x1000e646 */ LDATA extern char public_1000e646; // OOB+0x0066
/* 0x1000e647 */ LDATA extern char public_1000e647; // OOB+0x0067
/* 0x1000e648 */ LDATA extern char public_1000e648; // OOB+0x0068
/* 0x1000e649 */ LDATA extern char public_1000e649; // OOB+0x0069
/* 0x1000e64a */ LDATA extern char public_1000e64a; // OOB+0x006a
/* 0x1000e64b */ LDATA extern char public_1000e64b; // OOB+0x006b
/* 0x1000e64c */ LDATA extern char public_1000e64c; // OOB+0x006c
/* 0x1000e64d */ LDATA extern char public_1000e64d; // OOB+0x006d
/* 0x1000e64e */ LDATA extern char public_1000e64e; // OOB+0x006e
/* 0x1000e64f */ LDATA extern char public_1000e64f; // OOB+0x006f
/* 0x1000e650 */ LDATA extern char public_1000e650; // OOB+0x0070
/* 0x1000e651 */ LDATA extern char public_1000e651; // OOB+0x0071
/* 0x1000e652 */ LDATA extern char public_1000e652; // OOB+0x0072
/* 0x1000e653 */ LDATA extern char public_1000e653; // OOB+0x0073
/* 0x1000e654 */ LDATA extern char public_1000e654; // OOB+0x0074
/* 0x1000e655 */ LDATA extern char public_1000e655; // OOB+0x0075
/* 0x1000e656 */ LDATA extern char public_1000e656; // OOB+0x0076
/* 0x1000e657 */ LDATA extern char public_1000e657; // OOB+0x0077
/* 0x1000e658 */ LDATA extern char public_1000e658; // OOB+0x0078
/* 0x1000e659 */ LDATA extern char public_1000e659; // OOB+0x0079
/* 0x1000e65a */ LDATA extern char public_1000e65a; // OOB+0x007a
/* 0x1000e65b */ LDATA extern char public_1000e65b; // OOB+0x007b
/* 0x1000e65c */ LDATA extern char public_1000e65c; // OOB+0x007c
/* 0x1000e65d */ LDATA extern char public_1000e65d; // OOB+0x007d
/* 0x1000e65e */ LDATA extern char public_1000e65e; // OOB+0x007e
/* 0x1000e65f */ LDATA extern char public_1000e65f; // OOB+0x007f
/* 0x1000e660 */ LDATA extern char public_1000e660; // OOB+0x0080
/* 0x1000e661 */ LDATA extern char public_1000e661; // OOB+0x0081
/* 0x1000e662 */ LDATA extern char public_1000e662; // OOB+0x0082
/* 0x1000e663 */ LDATA extern char public_1000e663; // OOB+0x0083
/* 0x1000e664 */ LDATA extern char public_1000e664; // OOB+0x0084
/* 0x1000e665 */ LDATA extern char public_1000e665; // OOB+0x0085
/* 0x1000e666 */ LDATA extern char public_1000e666; // OOB+0x0086
/* 0x1000e667 */ LDATA extern char public_1000e667; // OOB+0x0087
/* 0x1000e668 */ LDATA extern char public_1000e668; // OOB+0x0088
/* 0x1000e669 */ LDATA extern char public_1000e669; // OOB+0x0089
/* 0x1000e66a */ LDATA extern char public_1000e66a; // OOB+0x008a
/* 0x1000e66b */ LDATA extern char public_1000e66b; // OOB+0x008b
/* 0x1000e66c */ LDATA extern char public_1000e66c; // OOB+0x008c
/* 0x1000e66d */ LDATA extern char public_1000e66d; // OOB+0x008d
/* 0x1000e66e */ LDATA extern char public_1000e66e; // OOB+0x008e
/* 0x1000e66f */ LDATA extern char public_1000e66f; // OOB+0x008f
/* 0x1000e670 */ LDATA extern char public_1000e670; // OOB+0x0090
/* 0x1000e671 */ LDATA extern char public_1000e671; // OOB+0x0091
/* 0x1000e672 */ LDATA extern char public_1000e672; // OOB+0x0092
/* 0x1000e673 */ LDATA extern char public_1000e673; // OOB+0x0093
/* 0x1000e674 */ LDATA extern char public_1000e674; // OOB+0x0094
/* 0x1000e675 */ LDATA extern char public_1000e675; // OOB+0x0095
/* 0x1000e676 */ LDATA extern char public_1000e676; // OOB+0x0096
/* 0x1000e677 */ LDATA extern char public_1000e677; // OOB+0x0097
/* 0x1000e678 */ LDATA extern char public_1000e678; // OOB+0x0098
/* 0x1000e679 */ LDATA extern char public_1000e679; // OOB+0x0099
/* 0x1000e67a */ LDATA extern char public_1000e67a; // OOB+0x009a
/* 0x1000e67b */ LDATA extern char public_1000e67b; // OOB+0x009b
/* 0x1000e67c */ LDATA extern char public_1000e67c; // OOB+0x009c
/* 0x1000e67d */ LDATA extern char public_1000e67d; // OOB+0x009d
/* 0x1000e67e */ LDATA extern char public_1000e67e; // OOB+0x009e
/* 0x1000e67f */ LDATA extern char public_1000e67f; // OOB+0x009f
/* 0x1000e680 */ LDATA extern char public_1000e680; // OOB+0x00a0
/* 0x1000e681 */ LDATA extern char public_1000e681; // OOB+0x00a1
/* 0x1000e682 */ LDATA extern char public_1000e682; // OOB+0x00a2
/* 0x1000e683 */ LDATA extern char public_1000e683; // OOB+0x00a3
/* 0x1000e684 */ LDATA extern char public_1000e684; // OOB+0x00a4
/* 0x1000e685 */ LDATA extern char public_1000e685; // OOB+0x00a5
/* 0x1000e686 */ LDATA extern char public_1000e686; // OOB+0x00a6
/* 0x1000e687 */ LDATA extern char public_1000e687; // OOB+0x00a7
/* 0x1000e688 */ LDATA extern char public_1000e688; // OOB+0x00a8
/* 0x1000e689 */ LDATA extern char public_1000e689; // OOB+0x00a9
/* 0x1000e68a */ LDATA extern char public_1000e68a; // OOB+0x00aa
/* 0x1000e68b */ LDATA extern char public_1000e68b; // OOB+0x00ab
/* 0x1000e68c */ LDATA extern char public_1000e68c; // OOB+0x00ac
/* 0x1000e68d */ LDATA extern char public_1000e68d; // OOB+0x00ad
/* 0x1000e68e */ LDATA extern char public_1000e68e; // OOB+0x00ae
/* 0x1000e68f */ LDATA extern char public_1000e68f; // OOB+0x00af
/* 0x1000e690 */ LDATA extern char public_1000e690; // OOB+0x00b0
/* 0x1000e691 */ LDATA extern char public_1000e691; // OOB+0x00b1
/* 0x1000e692 */ LDATA extern char public_1000e692; // OOB+0x00b2
/* 0x1000e693 */ LDATA extern char public_1000e693; // OOB+0x00b3
/* 0x1000e694 */ LDATA extern char public_1000e694; // OOB+0x00b4
/* 0x1000e695 */ LDATA extern char public_1000e695; // OOB+0x00b5
/* 0x1000e696 */ LDATA extern char public_1000e696; // OOB+0x00b6
/* 0x1000e697 */ LDATA extern char public_1000e697; // OOB+0x00b7
/* 0x1000e698 */ LDATA extern char public_1000e698; // OOB+0x00b8
/* 0x1000e699 */ LDATA extern char public_1000e699; // OOB+0x00b9
/* 0x1000e69a */ LDATA extern char public_1000e69a; // OOB+0x00ba
/* 0x1000e69b */ LDATA extern char public_1000e69b; // OOB+0x00bb
/* 0x1000e69c */ LDATA extern char public_1000e69c; // OOB+0x00bc
/* 0x1000e69d */ LDATA extern char public_1000e69d; // OOB+0x00bd
/* 0x1000e69e */ LDATA extern char public_1000e69e; // OOB+0x00be
/* 0x1000e69f */ LDATA extern char public_1000e69f; // OOB+0x00bf
/* 0x1000e6a0 */ LDATA extern char public_1000e6a0; // OOB+0x00c0
/* 0x1000e6a1 */ LDATA extern char public_1000e6a1; // OOB+0x00c1
/* 0x1000e6a2 */ LDATA extern char public_1000e6a2; // OOB+0x00c2
/* 0x1000e6a3 */ LDATA extern char public_1000e6a3; // OOB+0x00c3
/* 0x1000e6a4 */ LDATA extern char public_1000e6a4; // OOB+0x00c4
/* 0x1000e6a5 */ LDATA extern char public_1000e6a5; // OOB+0x00c5
/* 0x1000e6a6 */ LDATA extern char public_1000e6a6; // OOB+0x00c6
/* 0x1000e6a7 */ LDATA extern char public_1000e6a7; // OOB+0x00c7
/* 0x1000e6a8 */ LDATA extern char public_1000e6a8; // OOB+0x00c8
/* 0x1000e6a9 */ LDATA extern char public_1000e6a9; // OOB+0x00c9
/* 0x1000e6aa */ LDATA extern char public_1000e6aa; // OOB+0x00ca
/* 0x1000e6ab */ LDATA extern char public_1000e6ab; // OOB+0x00cb
/* 0x1000e6ac */ LDATA extern char public_1000e6ac; // OOB+0x00cc
/* 0x1000e6ad */ LDATA extern char public_1000e6ad; // OOB+0x00cd
/* 0x1000e6ae */ LDATA extern char public_1000e6ae; // OOB+0x00ce
/* 0x1000e6af */ LDATA extern char public_1000e6af; // OOB+0x00cf
/* 0x1000e6b0 */ LDATA extern char public_1000e6b0; // OOB+0x00d0
/* 0x1000e6b1 */ LDATA extern char public_1000e6b1; // OOB+0x00d1
/* 0x1000e6b2 */ LDATA extern char public_1000e6b2; // OOB+0x00d2
/* 0x1000e6b3 */ LDATA extern char public_1000e6b3; // OOB+0x00d3
/* 0x1000e6b4 */ LDATA extern char public_1000e6b4; // OOB+0x00d4
/* 0x1000e6b5 */ LDATA extern char public_1000e6b5; // OOB+0x00d5
/* 0x1000e6b6 */ LDATA extern char public_1000e6b6; // OOB+0x00d6
/* 0x1000e6b7 */ LDATA extern char public_1000e6b7; // OOB+0x00d7
/* 0x1000e6b8 */ LDATA extern char public_1000e6b8; // OOB+0x00d8
/* 0x1000e6b9 */ LDATA extern char public_1000e6b9; // OOB+0x00d9
/* 0x1000e6ba */ LDATA extern char public_1000e6ba; // OOB+0x00da
/* 0x1000e6bb */ LDATA extern char public_1000e6bb; // OOB+0x00db
/* 0x1000e6bc */ LDATA extern char public_1000e6bc; // OOB+0x00dc
/* 0x1000e6bd */ LDATA extern char public_1000e6bd; // OOB+0x00dd
/* 0x1000e6be */ LDATA extern char public_1000e6be; // OOB+0x00de
/* 0x1000e6bf */ LDATA extern char public_1000e6bf; // OOB+0x00df
/* 0x1000e6c0 */ LDATA extern char public_1000e6c0; // OOB+0x00e0
/* 0x1000e6c1 */ LDATA extern char public_1000e6c1; // OOB+0x00e1
/* 0x1000e6c2 */ LDATA extern char public_1000e6c2; // OOB+0x00e2
/* 0x1000e6c3 */ LDATA extern char public_1000e6c3; // OOB+0x00e3
/* 0x1000e6c4 */ LDATA extern char public_1000e6c4; // OOB+0x00e4
/* 0x1000e6c5 */ LDATA extern char public_1000e6c5; // OOB+0x00e5
/* 0x1000e6c6 */ LDATA extern char public_1000e6c6; // OOB+0x00e6
/* 0x1000e6c7 */ LDATA extern char public_1000e6c7; // OOB+0x00e7
/* 0x1000e6c8 */ LDATA extern char public_1000e6c8; // OOB+0x00e8
/* 0x1000e6c9 */ LDATA extern char public_1000e6c9; // OOB+0x00e9
/* 0x1000e6ca */ LDATA extern char public_1000e6ca; // OOB+0x00ea
/* 0x1000e6cb */ LDATA extern char public_1000e6cb; // OOB+0x00eb
/* 0x1000e6cc */ LDATA extern char public_1000e6cc; // OOB+0x00ec
/* 0x1000e6cd */ LDATA extern char public_1000e6cd; // OOB+0x00ed
/* 0x1000e6ce */ LDATA extern char public_1000e6ce; // OOB+0x00ee
/* 0x1000e6cf */ LDATA extern char public_1000e6cf; // OOB+0x00ef
/* 0x1000e6d0 */ LDATA extern char public_1000e6d0; // OOB+0x00f0
/* 0x1000e6d1 */ LDATA extern char public_1000e6d1; // OOB+0x00f1
/* 0x1000e6d2 */ LDATA extern char public_1000e6d2; // OOB+0x00f2
/* 0x1000e6d3 */ LDATA extern char public_1000e6d3; // OOB+0x00f3
/* 0x1000e6d4 */ LDATA extern char public_1000e6d4; // OOB+0x00f4
/* 0x1000e6d5 */ LDATA extern char public_1000e6d5; // OOB+0x00f5
/* 0x1000e6d6 */ LDATA extern char public_1000e6d6; // OOB+0x00f6
/* 0x1000e6d7 */ LDATA extern char public_1000e6d7; // OOB+0x00f7
/* 0x1000e6d8 */ LDATA extern char public_1000e6d8; // OOB+0x00f8
/* 0x1000e6d9 */ LDATA extern char public_1000e6d9; // OOB+0x00f9
/* 0x1000e6da */ LDATA extern char public_1000e6da; // OOB+0x00fa
/* 0x1000e6db */ LDATA extern char public_1000e6db; // OOB+0x00fb
/* 0x1000e6dc */ LDATA extern char public_1000e6dc; // OOB+0x00fc
/* 0x1000e6dd */ LDATA extern char public_1000e6dd; // OOB+0x00fd
/* 0x1000e6de */ LDATA extern char public_1000e6de; // OOB+0x00fe
/* 0x1000e6df */ LDATA extern char public_1000e6df; // OOB+0x00ff
/* 0x1000e6e0 */ LDATA extern char public_1000e6e0; // OOB+0x0100
/* 0x1000e6e1 */ LDATA extern char public_1000e6e1; // OOB+0x0101
/* 0x1000e6e2 */ LDATA extern char public_1000e6e2; // OOB+0x0102
/* 0x1000e6e3 */ LDATA extern char public_1000e6e3; // OOB+0x0103
/* 0x1000e6e4 */ LDATA extern char public_1000e6e4; // OOB+0x0104
/* 0x1000e6e5 */ LDATA extern char public_1000e6e5; // OOB+0x0105
/* 0x1000e6e6 */ LDATA extern char public_1000e6e6; // OOB+0x0106
/* 0x1000e6e7 */ LDATA extern char public_1000e6e7; // OOB+0x0107
/* 0x1000e6e8 */ LDATA extern char public_1000e6e8; // OOB+0x0108
/* 0x1000e6e9 */ LDATA extern char public_1000e6e9; // OOB+0x0109
/* 0x1000e6ea */ LDATA extern char public_1000e6ea; // OOB+0x010a
/* 0x1000e6eb */ LDATA extern char public_1000e6eb; // OOB+0x010b
/* 0x1000e6ec */ LDATA extern char public_1000e6ec; // OOB+0x010c
/* 0x1000e6ed */ LDATA extern char public_1000e6ed; // OOB+0x010d
/* 0x1000e6ee */ LDATA extern char public_1000e6ee; // OOB+0x010e
/* 0x1000e6ef */ LDATA extern char public_1000e6ef; // OOB+0x010f
/* 0x1000e6f0 */ LDATA extern char public_1000e6f0; // OOB+0x0110
/* 0x1000e6f1 */ LDATA extern char public_1000e6f1; // OOB+0x0111
/* 0x1000e6f2 */ LDATA extern char public_1000e6f2; // OOB+0x0112
/* 0x1000e6f3 */ LDATA extern char public_1000e6f3; // OOB+0x0113
/* 0x1000e6f4 */ LDATA extern char public_1000e6f4; // OOB+0x0114
/* 0x1000e6f5 */ LDATA extern char public_1000e6f5; // OOB+0x0115
/* 0x1000e6f6 */ LDATA extern char public_1000e6f6; // OOB+0x0116
/* 0x1000e6f7 */ LDATA extern char public_1000e6f7; // OOB+0x0117
/* 0x1000e6f8 */ LDATA extern char public_1000e6f8; // OOB+0x0118
/* 0x1000e6f9 */ LDATA extern char public_1000e6f9; // OOB+0x0119
/* 0x1000e6fa */ LDATA extern char public_1000e6fa; // OOB+0x011a
/* 0x1000e6fb */ LDATA extern char public_1000e6fb; // OOB+0x011b
/* 0x1000e6fc */ LDATA extern char public_1000e6fc; // OOB+0x011c
/* 0x1000e6fd */ LDATA extern char public_1000e6fd; // OOB+0x011d
/* 0x1000e6fe */ LDATA extern char public_1000e6fe; // OOB+0x011e
/* 0x1000e6ff */ LDATA extern char public_1000e6ff; // OOB+0x011f
/* 0x1000e700 */ LDATA extern char public_1000e700; // OOB+0x0120
/* 0x1000e701 */ LDATA extern char public_1000e701; // OOB+0x0121
/* 0x1000e702 */ LDATA extern char public_1000e702; // OOB+0x0122
/* 0x1000e703 */ LDATA extern char public_1000e703; // OOB+0x0123
/* 0x1000e704 */ LDATA extern char public_1000e704; // OOB+0x0124
/* 0x1000e705 */ LDATA extern char public_1000e705; // OOB+0x0125
/* 0x1000e706 */ LDATA extern char public_1000e706; // OOB+0x0126
/* 0x1000e707 */ LDATA extern char public_1000e707; // OOB+0x0127
/* 0x1000e708 */ LDATA extern char public_1000e708; // OOB+0x0128
/* 0x1000e709 */ LDATA extern char public_1000e709; // OOB+0x0129
/* 0x1000e70a */ LDATA extern char public_1000e70a; // OOB+0x012a
/* 0x1000e70b */ LDATA extern char public_1000e70b; // OOB+0x012b
/* 0x1000e70c */ LDATA extern char public_1000e70c; // OOB+0x012c
/* 0x1000e70d */ LDATA extern char public_1000e70d; // OOB+0x012d
/* 0x1000e70e */ LDATA extern char public_1000e70e; // OOB+0x012e
/* 0x1000e70f */ LDATA extern char public_1000e70f; // OOB+0x012f
/* 0x1000e710 */ LDATA extern char public_1000e710; // OOB+0x0130
/* 0x1000e711 */ LDATA extern char public_1000e711; // OOB+0x0131
/* 0x1000e712 */ LDATA extern char public_1000e712; // OOB+0x0132
/* 0x1000e713 */ LDATA extern char public_1000e713; // OOB+0x0133
/* 0x1000e714 */ LDATA extern char public_1000e714; // OOB+0x0134
/* 0x1000e715 */ LDATA extern char public_1000e715; // OOB+0x0135
/* 0x1000e716 */ LDATA extern char public_1000e716; // OOB+0x0136
/* 0x1000e717 */ LDATA extern char public_1000e717; // OOB+0x0137
/* 0x1000e718 */ LDATA extern char public_1000e718; // OOB+0x0138
/* 0x1000e719 */ LDATA extern char public_1000e719; // OOB+0x0139
/* 0x1000e71a */ LDATA extern char public_1000e71a; // OOB+0x013a
/* 0x1000e71b */ LDATA extern char public_1000e71b; // OOB+0x013b
/* 0x1000e71c */ LDATA extern char public_1000e71c; // OOB+0x013c
/* 0x1000e71d */ LDATA extern char public_1000e71d; // OOB+0x013d
/* 0x1000e71e */ LDATA extern char public_1000e71e; // OOB+0x013e
/* 0x1000e71f */ LDATA extern char public_1000e71f; // OOB+0x013f
/* 0x1000e720 */ LDATA extern char public_1000e720; // OOB+0x0140
/* 0x1000e721 */ LDATA extern char public_1000e721; // OOB+0x0141
/* 0x1000e722 */ LDATA extern char public_1000e722; // OOB+0x0142
/* 0x1000e723 */ LDATA extern char public_1000e723; // OOB+0x0143
/* 0x1000e724 */ LDATA extern char public_1000e724; // OOB+0x0144
/* 0x1000e725 */ LDATA extern char public_1000e725; // OOB+0x0145
/* 0x1000e726 */ LDATA extern char public_1000e726; // OOB+0x0146
/* 0x1000e727 */ LDATA extern char public_1000e727; // OOB+0x0147
/* 0x1000e728 */ LDATA extern char public_1000e728; // OOB+0x0148
/* 0x1000e729 */ LDATA extern char public_1000e729; // OOB+0x0149
/* 0x1000e72a */ LDATA extern char public_1000e72a; // OOB+0x014a
/* 0x1000e72b */ LDATA extern char public_1000e72b; // OOB+0x014b
/* 0x1000e72c */ LDATA extern char public_1000e72c; // OOB+0x014c
/* 0x1000e72d */ LDATA extern char public_1000e72d; // OOB+0x014d
/* 0x1000e72e */ LDATA extern char public_1000e72e; // OOB+0x014e
/* 0x1000e72f */ LDATA extern char public_1000e72f; // OOB+0x014f
/* 0x1000e730 */ LDATA extern char public_1000e730; // OOB+0x0150
/* 0x1000e731 */ LDATA extern char public_1000e731; // OOB+0x0151
/* 0x1000e732 */ LDATA extern char public_1000e732; // OOB+0x0152
/* 0x1000e733 */ LDATA extern char public_1000e733; // OOB+0x0153
/* 0x1000e734 */ LDATA extern char public_1000e734; // OOB+0x0154
/* 0x1000e735 */ LDATA extern char public_1000e735; // OOB+0x0155
/* 0x1000e736 */ LDATA extern char public_1000e736; // OOB+0x0156
/* 0x1000e737 */ LDATA extern char public_1000e737; // OOB+0x0157
/* 0x1000e738 */ LDATA extern char public_1000e738; // OOB+0x0158
/* 0x1000e739 */ LDATA extern char public_1000e739; // OOB+0x0159
/* 0x1000e73a */ LDATA extern char public_1000e73a; // OOB+0x015a
/* 0x1000e73b */ LDATA extern char public_1000e73b; // OOB+0x015b
/* 0x1000e73c */ LDATA extern char public_1000e73c; // OOB+0x015c
/* 0x1000e73d */ LDATA extern char public_1000e73d; // OOB+0x015d
/* 0x1000e73e */ LDATA extern char public_1000e73e; // OOB+0x015e
/* 0x1000e73f */ LDATA extern char public_1000e73f; // OOB+0x015f
/* 0x1000e740 */ LDATA extern char public_1000e740; // OOB+0x0160
/* 0x1000e741 */ LDATA extern char public_1000e741; // OOB+0x0161
/* 0x1000e742 */ LDATA extern char public_1000e742; // OOB+0x0162
/* 0x1000e743 */ LDATA extern char public_1000e743; // OOB+0x0163
/* 0x1000e744 */ LDATA extern char public_1000e744; // OOB+0x0164
/* 0x1000e745 */ LDATA extern char public_1000e745; // OOB+0x0165
/* 0x1000e746 */ LDATA extern char public_1000e746; // OOB+0x0166
/* 0x1000e747 */ LDATA extern char public_1000e747; // OOB+0x0167
/* 0x1000e748 */ LDATA extern char public_1000e748; // OOB+0x0168
/* 0x1000e749 */ LDATA extern char public_1000e749; // OOB+0x0169
/* 0x1000e74a */ LDATA extern char public_1000e74a; // OOB+0x016a
/* 0x1000e74b */ LDATA extern char public_1000e74b; // OOB+0x016b
/* 0x1000e74c */ LDATA extern char public_1000e74c; // OOB+0x016c
/* 0x1000e74d */ LDATA extern char public_1000e74d; // OOB+0x016d
/* 0x1000e74e */ LDATA extern char public_1000e74e; // OOB+0x016e
/* 0x1000e74f */ LDATA extern char public_1000e74f; // OOB+0x016f
/* 0x1000e750 */ LDATA extern char public_1000e750; // OOB+0x0170
/* 0x1000e751 */ LDATA extern char public_1000e751; // OOB+0x0171
/* 0x1000e752 */ LDATA extern char public_1000e752; // OOB+0x0172
/* 0x1000e753 */ LDATA extern char public_1000e753; // OOB+0x0173
/* 0x1000e754 */ LDATA extern char public_1000e754; // OOB+0x0174
/* 0x1000e755 */ LDATA extern char public_1000e755; // OOB+0x0175
/* 0x1000e756 */ LDATA extern char public_1000e756; // OOB+0x0176
/* 0x1000e757 */ LDATA extern char public_1000e757; // OOB+0x0177
/* 0x1000e758 */ LDATA extern char public_1000e758; // OOB+0x0178
/* 0x1000e759 */ LDATA extern char public_1000e759; // OOB+0x0179
/* 0x1000e75a */ LDATA extern char public_1000e75a; // OOB+0x017a
/* 0x1000e75b */ LDATA extern char public_1000e75b; // OOB+0x017b
/* 0x1000e75c */ LDATA extern char public_1000e75c; // OOB+0x017c
/* 0x1000e75d */ LDATA extern char public_1000e75d; // OOB+0x017d
/* 0x1000e75e */ LDATA extern char public_1000e75e; // OOB+0x017e
/* 0x1000e75f */ LDATA extern char public_1000e75f; // OOB+0x017f
/* 0x1000e760 */ LDATA extern char public_1000e760; // OOB+0x0180
/* 0x1000e761 */ LDATA extern char public_1000e761; // OOB+0x0181
/* 0x1000e762 */ LDATA extern char public_1000e762; // OOB+0x0182
/* 0x1000e763 */ LDATA extern char public_1000e763; // OOB+0x0183
/* 0x1000e764 */ LDATA extern char public_1000e764; // OOB+0x0184
/* 0x1000e765 */ LDATA extern char public_1000e765; // OOB+0x0185
/* 0x1000e766 */ LDATA extern char public_1000e766; // OOB+0x0186
/* 0x1000e767 */ LDATA extern char public_1000e767; // OOB+0x0187
/* 0x1000e768 */ LDATA extern char public_1000e768; // OOB+0x0188
/* 0x1000e769 */ LDATA extern char public_1000e769; // OOB+0x0189
/* 0x1000e76a */ LDATA extern char public_1000e76a; // OOB+0x018a
/* 0x1000e76b */ LDATA extern char public_1000e76b; // OOB+0x018b
/* 0x1000e76c */ LDATA extern char public_1000e76c; // OOB+0x018c
/* 0x1000e76d */ LDATA extern char public_1000e76d; // OOB+0x018d
/* 0x1000e76e */ LDATA extern char public_1000e76e; // OOB+0x018e
/* 0x1000e76f */ LDATA extern char public_1000e76f; // OOB+0x018f
/* 0x1000e770 */ LDATA extern char public_1000e770; // OOB+0x0190
/* 0x1000e771 */ LDATA extern char public_1000e771; // OOB+0x0191
/* 0x1000e772 */ LDATA extern char public_1000e772; // OOB+0x0192
/* 0x1000e773 */ LDATA extern char public_1000e773; // OOB+0x0193
/* 0x1000e774 */ LDATA extern char public_1000e774; // OOB+0x0194
/* 0x1000e775 */ LDATA extern char public_1000e775; // OOB+0x0195
/* 0x1000e776 */ LDATA extern char public_1000e776; // OOB+0x0196
/* 0x1000e777 */ LDATA extern char public_1000e777; // OOB+0x0197
/* 0x1000e778 */ LDATA extern char public_1000e778; // OOB+0x0198
/* 0x1000e779 */ LDATA extern char public_1000e779; // OOB+0x0199
/* 0x1000e77a */ LDATA extern char public_1000e77a; // OOB+0x019a
/* 0x1000e77b */ LDATA extern char public_1000e77b; // OOB+0x019b
/* 0x1000e77c */ LDATA extern char public_1000e77c; // OOB+0x019c
/* 0x1000e77d */ LDATA extern char public_1000e77d; // OOB+0x019d
/* 0x1000e77e */ LDATA extern char public_1000e77e; // OOB+0x019e
/* 0x1000e77f */ LDATA extern char public_1000e77f; // OOB+0x019f
/* 0x1000e780 */ LDATA extern char public_1000e780; // OOB+0x01a0
/* 0x1000e781 */ LDATA extern char public_1000e781; // OOB+0x01a1
/* 0x1000e782 */ LDATA extern char public_1000e782; // OOB+0x01a2
/* 0x1000e783 */ LDATA extern char public_1000e783; // OOB+0x01a3
/* 0x1000e784 */ LDATA extern char public_1000e784; // OOB+0x01a4
/* 0x1000e785 */ LDATA extern char public_1000e785; // OOB+0x01a5
/* 0x1000e786 */ LDATA extern char public_1000e786; // OOB+0x01a6
/* 0x1000e787 */ LDATA extern char public_1000e787; // OOB+0x01a7
/* 0x1000e788 */ LDATA extern char public_1000e788; // OOB+0x01a8
/* 0x1000e789 */ LDATA extern char public_1000e789; // OOB+0x01a9
/* 0x1000e78a */ LDATA extern char public_1000e78a; // OOB+0x01aa
/* 0x1000e78b */ LDATA extern char public_1000e78b; // OOB+0x01ab
/* 0x1000e78c */ LDATA extern char public_1000e78c; // OOB+0x01ac
/* 0x1000e78d */ LDATA extern char public_1000e78d; // OOB+0x01ad
/* 0x1000e78e */ LDATA extern char public_1000e78e; // OOB+0x01ae
/* 0x1000e78f */ LDATA extern char public_1000e78f; // OOB+0x01af
/* 0x1000e790 */ LDATA extern char public_1000e790; // OOB+0x01b0
/* 0x1000e791 */ LDATA extern char public_1000e791; // OOB+0x01b1
/* 0x1000e792 */ LDATA extern char public_1000e792; // OOB+0x01b2
/* 0x1000e793 */ LDATA extern char public_1000e793; // OOB+0x01b3
/* 0x1000e794 */ LDATA extern char public_1000e794; // OOB+0x01b4
/* 0x1000e795 */ LDATA extern char public_1000e795; // OOB+0x01b5
/* 0x1000e796 */ LDATA extern char public_1000e796; // OOB+0x01b6
/* 0x1000e797 */ LDATA extern char public_1000e797; // OOB+0x01b7
/* 0x1000e798 */ LDATA extern char public_1000e798; // OOB+0x01b8
/* 0x1000e799 */ LDATA extern char public_1000e799; // OOB+0x01b9
/* 0x1000e79a */ LDATA extern char public_1000e79a; // OOB+0x01ba
/* 0x1000e79b */ LDATA extern char public_1000e79b; // OOB+0x01bb
/* 0x1000e79c */ LDATA extern char public_1000e79c; // OOB+0x01bc
/* 0x1000e79d */ LDATA extern char public_1000e79d; // OOB+0x01bd
/* 0x1000e79e */ LDATA extern char public_1000e79e; // OOB+0x01be
/* 0x1000e79f */ LDATA extern char public_1000e79f; // OOB+0x01bf
/* 0x1000e7a0 */ LDATA extern char public_1000e7a0; // OOB+0x01c0
/* 0x1000e7a1 */ LDATA extern char public_1000e7a1; // OOB+0x01c1
/* 0x1000e7a2 */ LDATA extern char public_1000e7a2; // OOB+0x01c2
/* 0x1000e7a3 */ LDATA extern char public_1000e7a3; // OOB+0x01c3
/* 0x1000e7a4 */ LDATA extern char public_1000e7a4; // OOB+0x01c4
/* 0x1000e7a5 */ LDATA extern char public_1000e7a5; // OOB+0x01c5
/* 0x1000e7a6 */ LDATA extern char public_1000e7a6; // OOB+0x01c6
/* 0x1000e7a7 */ LDATA extern char public_1000e7a7; // OOB+0x01c7
/* 0x1000e7a8 */ LDATA extern char public_1000e7a8; // OOB+0x01c8
/* 0x1000e7a9 */ LDATA extern char public_1000e7a9; // OOB+0x01c9
/* 0x1000e7aa */ LDATA extern char public_1000e7aa; // OOB+0x01ca
/* 0x1000e7ab */ LDATA extern char public_1000e7ab; // OOB+0x01cb
/* 0x1000e7ac */ LDATA extern char public_1000e7ac; // OOB+0x01cc
/* 0x1000e7ad */ LDATA extern char public_1000e7ad; // OOB+0x01cd
/* 0x1000e7ae */ LDATA extern char public_1000e7ae; // OOB+0x01ce
/* 0x1000e7af */ LDATA extern char public_1000e7af; // OOB+0x01cf
/* 0x1000e7b0 */ LDATA extern char public_1000e7b0; // OOB+0x01d0
/* 0x1000e7b1 */ LDATA extern char public_1000e7b1; // OOB+0x01d1
/* 0x1000e7b2 */ LDATA extern char public_1000e7b2; // OOB+0x01d2
/* 0x1000e7b3 */ LDATA extern char public_1000e7b3; // OOB+0x01d3
/* 0x1000e7b4 */ LDATA extern char public_1000e7b4; // OOB+0x01d4
/* 0x1000e7b5 */ LDATA extern char public_1000e7b5; // OOB+0x01d5
/* 0x1000e7b6 */ LDATA extern char public_1000e7b6; // OOB+0x01d6
/* 0x1000e7b7 */ LDATA extern char public_1000e7b7; // OOB+0x01d7
/* 0x1000e7b8 */ LDATA extern char public_1000e7b8; // OOB+0x01d8
/* 0x1000e7b9 */ LDATA extern char public_1000e7b9; // OOB+0x01d9
/* 0x1000e7ba */ LDATA extern char public_1000e7ba; // OOB+0x01da
/* 0x1000e7bb */ LDATA extern char public_1000e7bb; // OOB+0x01db
/* 0x1000e7bc */ LDATA extern char public_1000e7bc; // OOB+0x01dc
/* 0x1000e7bd */ LDATA extern char public_1000e7bd; // OOB+0x01dd
/* 0x1000e7be */ LDATA extern char public_1000e7be; // OOB+0x01de
/* 0x1000e7bf */ LDATA extern char public_1000e7bf; // OOB+0x01df
/* 0x1000e7c0 */ LDATA extern char public_1000e7c0; // OOB+0x01e0
/* 0x1000e7c1 */ LDATA extern char public_1000e7c1; // OOB+0x01e1
/* 0x1000e7c2 */ LDATA extern char public_1000e7c2; // OOB+0x01e2
/* 0x1000e7c3 */ LDATA extern char public_1000e7c3; // OOB+0x01e3
/* 0x1000e7c4 */ LDATA extern char public_1000e7c4; // OOB+0x01e4
/* 0x1000e7c5 */ LDATA extern char public_1000e7c5; // OOB+0x01e5
/* 0x1000e7c6 */ LDATA extern char public_1000e7c6; // OOB+0x01e6
/* 0x1000e7c7 */ LDATA extern char public_1000e7c7; // OOB+0x01e7
/* 0x1000e7c8 */ LDATA extern char public_1000e7c8; // OOB+0x01e8
/* 0x1000e7c9 */ LDATA extern char public_1000e7c9; // OOB+0x01e9
/* 0x1000e7ca */ LDATA extern char public_1000e7ca; // OOB+0x01ea
/* 0x1000e7cb */ LDATA extern char public_1000e7cb; // OOB+0x01eb
/* 0x1000e7cc */ LDATA extern char public_1000e7cc; // OOB+0x01ec
/* 0x1000e7cd */ LDATA extern char public_1000e7cd; // OOB+0x01ed
/* 0x1000e7ce */ LDATA extern char public_1000e7ce; // OOB+0x01ee
/* 0x1000e7cf */ LDATA extern char public_1000e7cf; // OOB+0x01ef
/* 0x1000e7d0 */ LDATA extern char public_1000e7d0; // OOB+0x01f0
/* 0x1000e7d1 */ LDATA extern char public_1000e7d1; // OOB+0x01f1
/* 0x1000e7d2 */ LDATA extern char public_1000e7d2; // OOB+0x01f2
/* 0x1000e7d3 */ LDATA extern char public_1000e7d3; // OOB+0x01f3
/* 0x1000e7d4 */ LDATA extern char public_1000e7d4; // OOB+0x01f4
/* 0x1000e7d5 */ LDATA extern char public_1000e7d5; // OOB+0x01f5
/* 0x1000e7d6 */ LDATA extern char public_1000e7d6; // OOB+0x01f6
/* 0x1000e7d7 */ LDATA extern char public_1000e7d7; // OOB+0x01f7
/* 0x1000e7d8 */ LDATA extern char public_1000e7d8; // OOB+0x01f8
/* 0x1000e7d9 */ LDATA extern char public_1000e7d9; // OOB+0x01f9
/* 0x1000e7da */ LDATA extern char public_1000e7da; // OOB+0x01fa
/* 0x1000e7db */ LDATA extern char public_1000e7db; // OOB+0x01fb
/* 0x1000e7dc */ LDATA extern char public_1000e7dc; // OOB+0x01fc
/* 0x1000e7dd */ LDATA extern char public_1000e7dd; // OOB+0x01fd
/* 0x1000e7de */ LDATA extern char public_1000e7de; // OOB+0x01fe
/* 0x1000e7df */ LDATA extern char public_1000e7df; // OOB+0x01ff
/* 0x1000e7e0 */ LDATA extern char public_1000e7e0; // OOB+0x0200
/* 0x1000e7e1 */ LDATA extern char public_1000e7e1; // OOB+0x0201
/* 0x1000e7e2 */ LDATA extern char public_1000e7e2; // OOB+0x0202
/* 0x1000e7e3 */ LDATA extern char public_1000e7e3; // OOB+0x0203
/* 0x1000e7e4 */ LDATA extern char public_1000e7e4; // OOB+0x0204
/* 0x1000e7e5 */ LDATA extern char public_1000e7e5; // OOB+0x0205
/* 0x1000e7e6 */ LDATA extern char public_1000e7e6; // OOB+0x0206
/* 0x1000e7e7 */ LDATA extern char public_1000e7e7; // OOB+0x0207
/* 0x1000e7e8 */ LDATA extern char public_1000e7e8; // OOB+0x0208
/* 0x1000e7e9 */ LDATA extern char public_1000e7e9; // OOB+0x0209
/* 0x1000e7ea */ LDATA extern char public_1000e7ea; // OOB+0x020a
/* 0x1000e7eb */ LDATA extern char public_1000e7eb; // OOB+0x020b
/* 0x1000e7ec */ LDATA extern char public_1000e7ec; // OOB+0x020c
/* 0x1000e7ed */ LDATA extern char public_1000e7ed; // OOB+0x020d
/* 0x1000e7ee */ LDATA extern char public_1000e7ee; // OOB+0x020e
/* 0x1000e7ef */ LDATA extern char public_1000e7ef; // OOB+0x020f
/* 0x1000e7f0 */ LDATA extern char public_1000e7f0; // OOB+0x0210
/* 0x1000e7f1 */ LDATA extern char public_1000e7f1; // OOB+0x0211
/* 0x1000e7f2 */ LDATA extern char public_1000e7f2; // OOB+0x0212
/* 0x1000e7f3 */ LDATA extern char public_1000e7f3; // OOB+0x0213
/* 0x1000e7f4 */ LDATA extern char public_1000e7f4; // OOB+0x0214
/* 0x1000e7f5 */ LDATA extern char public_1000e7f5; // OOB+0x0215
/* 0x1000e7f6 */ LDATA extern char public_1000e7f6; // OOB+0x0216
/* 0x1000e7f7 */ LDATA extern char public_1000e7f7; // OOB+0x0217
/* 0x1000e7f8 */ LDATA extern char public_1000e7f8; // OOB+0x0218
/* 0x1000e7f9 */ LDATA extern char public_1000e7f9; // OOB+0x0219
/* 0x1000e7fa */ LDATA extern char public_1000e7fa; // OOB+0x021a
/* 0x1000e7fb */ LDATA extern char public_1000e7fb; // OOB+0x021b
/* 0x1000e7fc */ LDATA extern char public_1000e7fc; // OOB+0x021c
/* 0x1000e7fd */ LDATA extern char public_1000e7fd; // OOB+0x021d
/* 0x1000e7fe */ LDATA extern char public_1000e7fe; // OOB+0x021e
/* 0x1000e7ff */ LDATA extern char public_1000e7ff; // OOB+0x021f
/* 0x1000e800 */ LDATA extern char public_1000e800; // OOB+0x0220
/* 0x1000e801 */ LDATA extern char public_1000e801; // OOB+0x0221
/* 0x1000e802 */ LDATA extern char public_1000e802; // OOB+0x0222
/* 0x1000e803 */ LDATA extern char public_1000e803; // OOB+0x0223
/* 0x1000e804 */ LDATA extern char public_1000e804; // OOB+0x0224
/* 0x1000e805 */ LDATA extern char public_1000e805; // OOB+0x0225
/* 0x1000e806 */ LDATA extern char public_1000e806; // OOB+0x0226
/* 0x1000e807 */ LDATA extern char public_1000e807; // OOB+0x0227
/* 0x1000e808 */ LDATA extern char public_1000e808; // OOB+0x0228
/* 0x1000e809 */ LDATA extern char public_1000e809; // OOB+0x0229
/* 0x1000e80a */ LDATA extern char public_1000e80a; // OOB+0x022a
/* 0x1000e80b */ LDATA extern char public_1000e80b; // OOB+0x022b
/* 0x1000e80c */ LDATA extern char public_1000e80c; // OOB+0x022c
/* 0x1000e80d */ LDATA extern char public_1000e80d; // OOB+0x022d
/* 0x1000e80e */ LDATA extern char public_1000e80e; // OOB+0x022e
/* 0x1000e80f */ LDATA extern char public_1000e80f; // OOB+0x022f
/* 0x1000e810 */ LDATA extern char public_1000e810; // OOB+0x0230
/* 0x1000e811 */ LDATA extern char public_1000e811; // OOB+0x0231
/* 0x1000e812 */ LDATA extern char public_1000e812; // OOB+0x0232
/* 0x1000e813 */ LDATA extern char public_1000e813; // OOB+0x0233
/* 0x1000e814 */ LDATA extern char public_1000e814; // OOB+0x0234
/* 0x1000e815 */ LDATA extern char public_1000e815; // OOB+0x0235
/* 0x1000e816 */ LDATA extern char public_1000e816; // OOB+0x0236
/* 0x1000e817 */ LDATA extern char public_1000e817; // OOB+0x0237
/* 0x1000e818 */ LDATA extern char public_1000e818; // OOB+0x0238
/* 0x1000e819 */ LDATA extern char public_1000e819; // OOB+0x0239
/* 0x1000e81a */ LDATA extern char public_1000e81a; // OOB+0x023a
/* 0x1000e81b */ LDATA extern char public_1000e81b; // OOB+0x023b
/* 0x1000e81c */ LDATA extern char public_1000e81c; // OOB+0x023c
/* 0x1000e81d */ LDATA extern char public_1000e81d; // OOB+0x023d
/* 0x1000e81e */ LDATA extern char public_1000e81e; // OOB+0x023e
/* 0x1000e81f */ LDATA extern char public_1000e81f; // OOB+0x023f
/* 0x1000e820 */ LDATA extern char public_1000e820; // OOB+0x0240
/* 0x1000e821 */ LDATA extern char public_1000e821; // OOB+0x0241
/* 0x1000e822 */ LDATA extern char public_1000e822; // OOB+0x0242
/* 0x1000e823 */ LDATA extern char public_1000e823; // OOB+0x0243
/* 0x1000e824 */ LDATA extern char public_1000e824; // OOB+0x0244
/* 0x1000e825 */ LDATA extern char public_1000e825; // OOB+0x0245
/* 0x1000e826 */ LDATA extern char public_1000e826; // OOB+0x0246
/* 0x1000e827 */ LDATA extern char public_1000e827; // OOB+0x0247
/* 0x1000e828 */ LDATA extern char public_1000e828; // OOB+0x0248
/* 0x1000e829 */ LDATA extern char public_1000e829; // OOB+0x0249
/* 0x1000e82a */ LDATA extern char public_1000e82a; // OOB+0x024a
/* 0x1000e82b */ LDATA extern char public_1000e82b; // OOB+0x024b
/* 0x1000e82c */ LDATA extern char public_1000e82c; // OOB+0x024c
/* 0x1000e82d */ LDATA extern char public_1000e82d; // OOB+0x024d
/* 0x1000e82e */ LDATA extern char public_1000e82e; // OOB+0x024e
/* 0x1000e82f */ LDATA extern char public_1000e82f; // OOB+0x024f
/* 0x1000e830 */ LDATA extern char public_1000e830; // OOB+0x0250
/* 0x1000e831 */ LDATA extern char public_1000e831; // OOB+0x0251
/* 0x1000e832 */ LDATA extern char public_1000e832; // OOB+0x0252
/* 0x1000e833 */ LDATA extern char public_1000e833; // OOB+0x0253
/* 0x1000e834 */ LDATA extern char public_1000e834; // OOB+0x0254
/* 0x1000e835 */ LDATA extern char public_1000e835; // OOB+0x0255
/* 0x1000e836 */ LDATA extern char public_1000e836; // OOB+0x0256
/* 0x1000e837 */ LDATA extern char public_1000e837; // OOB+0x0257
/* 0x1000e838 */ LDATA extern char public_1000e838; // OOB+0x0258
/* 0x1000e839 */ LDATA extern char public_1000e839; // OOB+0x0259
/* 0x1000e83a */ LDATA extern char public_1000e83a; // OOB+0x025a
/* 0x1000e83b */ LDATA extern char public_1000e83b; // OOB+0x025b
/* 0x1000e83c */ LDATA extern char public_1000e83c; // OOB+0x025c
/* 0x1000e83d */ LDATA extern char public_1000e83d; // OOB+0x025d
/* 0x1000e83e */ LDATA extern char public_1000e83e; // OOB+0x025e
/* 0x1000e83f */ LDATA extern char public_1000e83f; // OOB+0x025f
/* 0x1000e840 */ LDATA extern char public_1000e840; // OOB+0x0260
/* 0x1000e841 */ LDATA extern char public_1000e841; // OOB+0x0261
/* 0x1000e842 */ LDATA extern char public_1000e842; // OOB+0x0262
/* 0x1000e843 */ LDATA extern char public_1000e843; // OOB+0x0263
/* 0x1000e844 */ LDATA extern char public_1000e844; // OOB+0x0264
/* 0x1000e845 */ LDATA extern char public_1000e845; // OOB+0x0265
/* 0x1000e846 */ LDATA extern char public_1000e846; // OOB+0x0266
/* 0x1000e847 */ LDATA extern char public_1000e847; // OOB+0x0267
/* 0x1000e848 */ LDATA extern char public_1000e848; // OOB+0x0268
/* 0x1000e849 */ LDATA extern char public_1000e849; // OOB+0x0269
/* 0x1000e84a */ LDATA extern char public_1000e84a; // OOB+0x026a
/* 0x1000e84b */ LDATA extern char public_1000e84b; // OOB+0x026b
/* 0x1000e84c */ LDATA extern char public_1000e84c; // OOB+0x026c
/* 0x1000e84d */ LDATA extern char public_1000e84d; // OOB+0x026d
/* 0x1000e84e */ LDATA extern char public_1000e84e; // OOB+0x026e
/* 0x1000e84f */ LDATA extern char public_1000e84f; // OOB+0x026f
/* 0x1000e850 */ LDATA extern char public_1000e850; // OOB+0x0270
/* 0x1000e851 */ LDATA extern char public_1000e851; // OOB+0x0271
/* 0x1000e852 */ LDATA extern char public_1000e852; // OOB+0x0272
/* 0x1000e853 */ LDATA extern char public_1000e853; // OOB+0x0273
/* 0x1000e854 */ LDATA extern char public_1000e854; // OOB+0x0274
/* 0x1000e855 */ LDATA extern char public_1000e855; // OOB+0x0275
/* 0x1000e856 */ LDATA extern char public_1000e856; // OOB+0x0276
/* 0x1000e857 */ LDATA extern char public_1000e857; // OOB+0x0277
/* 0x1000e858 */ LDATA extern char public_1000e858; // OOB+0x0278
/* 0x1000e859 */ LDATA extern char public_1000e859; // OOB+0x0279
/* 0x1000e85a */ LDATA extern char public_1000e85a; // OOB+0x027a
/* 0x1000e85b */ LDATA extern char public_1000e85b; // OOB+0x027b
/* 0x1000e85c */ LDATA extern char public_1000e85c; // OOB+0x027c
/* 0x1000e85d */ LDATA extern char public_1000e85d; // OOB+0x027d
/* 0x1000e85e */ LDATA extern char public_1000e85e; // OOB+0x027e
/* 0x1000e85f */ LDATA extern char public_1000e85f; // OOB+0x027f
/* 0x1000e860 */ LDATA extern char public_1000e860; // OOB+0x0280
/* 0x1000e861 */ LDATA extern char public_1000e861; // OOB+0x0281
/* 0x1000e862 */ LDATA extern char public_1000e862; // OOB+0x0282
/* 0x1000e863 */ LDATA extern char public_1000e863; // OOB+0x0283
/* 0x1000e864 */ LDATA extern char public_1000e864; // OOB+0x0284
/* 0x1000e865 */ LDATA extern char public_1000e865; // OOB+0x0285
/* 0x1000e866 */ LDATA extern char public_1000e866; // OOB+0x0286
/* 0x1000e867 */ LDATA extern char public_1000e867; // OOB+0x0287
/* 0x1000e868 */ LDATA extern char public_1000e868; // OOB+0x0288
/* 0x1000e869 */ LDATA extern char public_1000e869; // OOB+0x0289
/* 0x1000e86a */ LDATA extern char public_1000e86a; // OOB+0x028a
/* 0x1000e86b */ LDATA extern char public_1000e86b; // OOB+0x028b
/* 0x1000e86c */ LDATA extern char public_1000e86c; // OOB+0x028c
/* 0x1000e86d */ LDATA extern char public_1000e86d; // OOB+0x028d
/* 0x1000e86e */ LDATA extern char public_1000e86e; // OOB+0x028e
/* 0x1000e86f */ LDATA extern char public_1000e86f; // OOB+0x028f
/* 0x1000e870 */ LDATA extern char public_1000e870; // OOB+0x0290
/* 0x1000e871 */ LDATA extern char public_1000e871; // OOB+0x0291
/* 0x1000e872 */ LDATA extern char public_1000e872; // OOB+0x0292
/* 0x1000e873 */ LDATA extern char public_1000e873; // OOB+0x0293
/* 0x1000e874 */ LDATA extern char public_1000e874; // OOB+0x0294
/* 0x1000e875 */ LDATA extern char public_1000e875; // OOB+0x0295
/* 0x1000e876 */ LDATA extern char public_1000e876; // OOB+0x0296
/* 0x1000e877 */ LDATA extern char public_1000e877; // OOB+0x0297
/* 0x1000e878 */ LDATA extern char public_1000e878; // OOB+0x0298
/* 0x1000e879 */ LDATA extern char public_1000e879; // OOB+0x0299
/* 0x1000e87a */ LDATA extern char public_1000e87a; // OOB+0x029a
/* 0x1000e87b */ LDATA extern char public_1000e87b; // OOB+0x029b
/* 0x1000e87c */ LDATA extern char public_1000e87c; // OOB+0x029c
/* 0x1000e87d */ LDATA extern char public_1000e87d; // OOB+0x029d
/* 0x1000e87e */ LDATA extern char public_1000e87e; // OOB+0x029e
/* 0x1000e87f */ LDATA extern char public_1000e87f; // OOB+0x029f
/* 0x1000e880 */ LDATA extern char public_1000e880; // OOB+0x02a0
/* 0x1000e881 */ LDATA extern char public_1000e881; // OOB+0x02a1
/* 0x1000e882 */ LDATA extern char public_1000e882; // OOB+0x02a2
/* 0x1000e883 */ LDATA extern char public_1000e883; // OOB+0x02a3
/* 0x1000e884 */ LDATA extern char public_1000e884; // OOB+0x02a4
/* 0x1000e885 */ LDATA extern char public_1000e885; // OOB+0x02a5
/* 0x1000e886 */ LDATA extern char public_1000e886; // OOB+0x02a6
/* 0x1000e887 */ LDATA extern char public_1000e887; // OOB+0x02a7
/* 0x1000e888 */ LDATA extern char public_1000e888; // OOB+0x02a8
/* 0x1000e889 */ LDATA extern char public_1000e889; // OOB+0x02a9
/* 0x1000e88a */ LDATA extern char public_1000e88a; // OOB+0x02aa
/* 0x1000e88b */ LDATA extern char public_1000e88b; // OOB+0x02ab
/* 0x1000e88c */ LDATA extern char public_1000e88c; // OOB+0x02ac
/* 0x1000e88d */ LDATA extern char public_1000e88d; // OOB+0x02ad
/* 0x1000e88e */ LDATA extern char public_1000e88e; // OOB+0x02ae
/* 0x1000e88f */ LDATA extern char public_1000e88f; // OOB+0x02af
/* 0x1000e890 */ LDATA extern char public_1000e890; // OOB+0x02b0
/* 0x1000e891 */ LDATA extern char public_1000e891; // OOB+0x02b1
/* 0x1000e892 */ LDATA extern char public_1000e892; // OOB+0x02b2
/* 0x1000e893 */ LDATA extern char public_1000e893; // OOB+0x02b3
/* 0x1000e894 */ LDATA extern char public_1000e894; // OOB+0x02b4
/* 0x1000e895 */ LDATA extern char public_1000e895; // OOB+0x02b5
/* 0x1000e896 */ LDATA extern char public_1000e896; // OOB+0x02b6
/* 0x1000e897 */ LDATA extern char public_1000e897; // OOB+0x02b7
/* 0x1000e898 */ LDATA extern char public_1000e898; // OOB+0x02b8
/* 0x1000e899 */ LDATA extern char public_1000e899; // OOB+0x02b9
/* 0x1000e89a */ LDATA extern char public_1000e89a; // OOB+0x02ba
/* 0x1000e89b */ LDATA extern char public_1000e89b; // OOB+0x02bb
/* 0x1000e89c */ LDATA extern char public_1000e89c; // OOB+0x02bc
/* 0x1000e89d */ LDATA extern char public_1000e89d; // OOB+0x02bd
/* 0x1000e89e */ LDATA extern char public_1000e89e; // OOB+0x02be
/* 0x1000e89f */ LDATA extern char public_1000e89f; // OOB+0x02bf
/* 0x1000e8a0 */ LDATA extern char public_1000e8a0; // OOB+0x02c0
/* 0x1000e8a1 */ LDATA extern char public_1000e8a1; // OOB+0x02c1
/* 0x1000e8a2 */ LDATA extern char public_1000e8a2; // OOB+0x02c2
/* 0x1000e8a3 */ LDATA extern char public_1000e8a3; // OOB+0x02c3
/* 0x1000e8a4 */ LDATA extern char public_1000e8a4; // OOB+0x02c4
/* 0x1000e8a5 */ LDATA extern char public_1000e8a5; // OOB+0x02c5
/* 0x1000e8a6 */ LDATA extern char public_1000e8a6; // OOB+0x02c6
/* 0x1000e8a7 */ LDATA extern char public_1000e8a7; // OOB+0x02c7
/* 0x1000e8a8 */ LDATA extern char public_1000e8a8; // OOB+0x02c8
/* 0x1000e8a9 */ LDATA extern char public_1000e8a9; // OOB+0x02c9
/* 0x1000e8aa */ LDATA extern char public_1000e8aa; // OOB+0x02ca
/* 0x1000e8ab */ LDATA extern char public_1000e8ab; // OOB+0x02cb
/* 0x1000e8ac */ LDATA extern char public_1000e8ac; // OOB+0x02cc
/* 0x1000e8ad */ LDATA extern char public_1000e8ad; // OOB+0x02cd
/* 0x1000e8ae */ LDATA extern char public_1000e8ae; // OOB+0x02ce
/* 0x1000e8af */ LDATA extern char public_1000e8af; // OOB+0x02cf
/* 0x1000e8b0 */ LDATA extern char public_1000e8b0; // OOB+0x02d0
/* 0x1000e8b1 */ LDATA extern char public_1000e8b1; // OOB+0x02d1
/* 0x1000e8b2 */ LDATA extern char public_1000e8b2; // OOB+0x02d2
/* 0x1000e8b3 */ LDATA extern char public_1000e8b3; // OOB+0x02d3
/* 0x1000e8b4 */ LDATA extern char public_1000e8b4; // OOB+0x02d4
/* 0x1000e8b5 */ LDATA extern char public_1000e8b5; // OOB+0x02d5
/* 0x1000e8b6 */ LDATA extern char public_1000e8b6; // OOB+0x02d6
/* 0x1000e8b7 */ LDATA extern char public_1000e8b7; // OOB+0x02d7
/* 0x1000e8b8 */ LDATA extern char public_1000e8b8; // OOB+0x02d8
/* 0x1000e8b9 */ LDATA extern char public_1000e8b9; // OOB+0x02d9
/* 0x1000e8ba */ LDATA extern char public_1000e8ba; // OOB+0x02da
/* 0x1000e8bb */ LDATA extern char public_1000e8bb; // OOB+0x02db
/* 0x1000e8bc */ LDATA extern char public_1000e8bc; // OOB+0x02dc
/* 0x1000e8bd */ LDATA extern char public_1000e8bd; // OOB+0x02dd
/* 0x1000e8be */ LDATA extern char public_1000e8be; // OOB+0x02de
/* 0x1000e8bf */ LDATA extern char public_1000e8bf; // OOB+0x02df
/* 0x1000e8c0 */ LDATA extern char public_1000e8c0; // OOB+0x02e0
/* 0x1000e8c1 */ LDATA extern char public_1000e8c1; // OOB+0x02e1
/* 0x1000e8c2 */ LDATA extern char public_1000e8c2; // OOB+0x02e2
/* 0x1000e8c3 */ LDATA extern char public_1000e8c3; // OOB+0x02e3
/* 0x1000e8c4 */ LDATA extern char public_1000e8c4; // OOB+0x02e4
/* 0x1000e8c5 */ LDATA extern char public_1000e8c5; // OOB+0x02e5
/* 0x1000e8c6 */ LDATA extern char public_1000e8c6; // OOB+0x02e6
/* 0x1000e8c7 */ LDATA extern char public_1000e8c7; // OOB+0x02e7
/* 0x1000e8c8 */ LDATA extern char public_1000e8c8; // OOB+0x02e8
/* 0x1000e8c9 */ LDATA extern char public_1000e8c9; // OOB+0x02e9
/* 0x1000e8ca */ LDATA extern char public_1000e8ca; // OOB+0x02ea
/* 0x1000e8cb */ LDATA extern char public_1000e8cb; // OOB+0x02eb
/* 0x1000e8cc */ LDATA extern char public_1000e8cc; // OOB+0x02ec
/* 0x1000e8cd */ LDATA extern char public_1000e8cd; // OOB+0x02ed
/* 0x1000e8ce */ LDATA extern char public_1000e8ce; // OOB+0x02ee
/* 0x1000e8cf */ LDATA extern char public_1000e8cf; // OOB+0x02ef
/* 0x1000e8d0 */ LDATA extern char public_1000e8d0; // OOB+0x02f0
/* 0x1000e8d1 */ LDATA extern char public_1000e8d1; // OOB+0x02f1
/* 0x1000e8d2 */ LDATA extern char public_1000e8d2; // OOB+0x02f2
/* 0x1000e8d3 */ LDATA extern char public_1000e8d3; // OOB+0x02f3
/* 0x1000e8d4 */ LDATA extern char public_1000e8d4; // OOB+0x02f4
/* 0x1000e8d5 */ LDATA extern char public_1000e8d5; // OOB+0x02f5
/* 0x1000e8d6 */ LDATA extern char public_1000e8d6; // OOB+0x02f6
/* 0x1000e8d7 */ LDATA extern char public_1000e8d7; // OOB+0x02f7
/* 0x1000e8d8 */ LDATA extern char public_1000e8d8; // OOB+0x02f8
/* 0x1000e8d9 */ LDATA extern char public_1000e8d9; // OOB+0x02f9
/* 0x1000e8da */ LDATA extern char public_1000e8da; // OOB+0x02fa
/* 0x1000e8db */ LDATA extern char public_1000e8db; // OOB+0x02fb
/* 0x1000e8dc */ LDATA extern char public_1000e8dc; // OOB+0x02fc
/* 0x1000e8dd */ LDATA extern char public_1000e8dd; // OOB+0x02fd
/* 0x1000e8de */ LDATA extern char public_1000e8de; // OOB+0x02fe
/* 0x1000e8df */ LDATA extern char public_1000e8df; // OOB+0x02ff
/* 0x1000e8e0 */ LDATA extern char public_1000e8e0; // OOB+0x0300
/* 0x1000e8e1 */ LDATA extern char public_1000e8e1; // OOB+0x0301
/* 0x1000e8e2 */ LDATA extern char public_1000e8e2; // OOB+0x0302
/* 0x1000e8e3 */ LDATA extern char public_1000e8e3; // OOB+0x0303
/* 0x1000e8e4 */ LDATA extern char public_1000e8e4; // OOB+0x0304
/* 0x1000e8e5 */ LDATA extern char public_1000e8e5; // OOB+0x0305
/* 0x1000e8e6 */ LDATA extern char public_1000e8e6; // OOB+0x0306
/* 0x1000e8e7 */ LDATA extern char public_1000e8e7; // OOB+0x0307
/* 0x1000e8e8 */ LDATA extern char public_1000e8e8; // OOB+0x0308
/* 0x1000e8e9 */ LDATA extern char public_1000e8e9; // OOB+0x0309
/* 0x1000e8ea */ LDATA extern char public_1000e8ea; // OOB+0x030a
/* 0x1000e8eb */ LDATA extern char public_1000e8eb; // OOB+0x030b
/* 0x1000e8ec */ LDATA extern char public_1000e8ec; // OOB+0x030c
/* 0x1000e8ed */ LDATA extern char public_1000e8ed; // OOB+0x030d
/* 0x1000e8ee */ LDATA extern char public_1000e8ee; // OOB+0x030e
/* 0x1000e8ef */ LDATA extern char public_1000e8ef; // OOB+0x030f
/* 0x1000e8f0 */ LDATA extern char public_1000e8f0; // OOB+0x0310
/* 0x1000e8f1 */ LDATA extern char public_1000e8f1; // OOB+0x0311
/* 0x1000e8f2 */ LDATA extern char public_1000e8f2; // OOB+0x0312
/* 0x1000e8f3 */ LDATA extern char public_1000e8f3; // OOB+0x0313
/* 0x1000e8f4 */ LDATA extern char public_1000e8f4; // OOB+0x0314
/* 0x1000e8f5 */ LDATA extern char public_1000e8f5; // OOB+0x0315
/* 0x1000e8f6 */ LDATA extern char public_1000e8f6; // OOB+0x0316
/* 0x1000e8f7 */ LDATA extern char public_1000e8f7; // OOB+0x0317
/* 0x1000e8f8 */ LDATA extern char public_1000e8f8; // OOB+0x0318
/* 0x1000e8f9 */ LDATA extern char public_1000e8f9; // OOB+0x0319
/* 0x1000e8fa */ LDATA extern char public_1000e8fa; // OOB+0x031a
/* 0x1000e8fb */ LDATA extern char public_1000e8fb; // OOB+0x031b
/* 0x1000e8fc */ LDATA extern char public_1000e8fc; // OOB+0x031c
/* 0x1000e8fd */ LDATA extern char public_1000e8fd; // OOB+0x031d
/* 0x1000e8fe */ LDATA extern char public_1000e8fe; // OOB+0x031e
/* 0x1000e8ff */ LDATA extern char public_1000e8ff; // OOB+0x031f
/* 0x1000e900 */ LDATA extern char public_1000e900; // OOB+0x0320
/* 0x1000e901 */ LDATA extern char public_1000e901; // OOB+0x0321
/* 0x1000e902 */ LDATA extern char public_1000e902; // OOB+0x0322
/* 0x1000e903 */ LDATA extern char public_1000e903; // OOB+0x0323
/* 0x1000e904 */ LDATA extern char public_1000e904; // OOB+0x0324
/* 0x1000e905 */ LDATA extern char public_1000e905; // OOB+0x0325
/* 0x1000e906 */ LDATA extern char public_1000e906; // OOB+0x0326
/* 0x1000e907 */ LDATA extern char public_1000e907; // OOB+0x0327
/* 0x1000e908 */ LDATA extern char public_1000e908; // OOB+0x0328
/* 0x1000e909 */ LDATA extern char public_1000e909; // OOB+0x0329
/* 0x1000e90a */ LDATA extern char public_1000e90a; // OOB+0x032a
/* 0x1000e90b */ LDATA extern char public_1000e90b; // OOB+0x032b
/* 0x1000e90c */ LDATA extern char public_1000e90c; // OOB+0x032c
/* 0x1000e90d */ LDATA extern char public_1000e90d; // OOB+0x032d
/* 0x1000e90e */ LDATA extern char public_1000e90e; // OOB+0x032e
/* 0x1000e90f */ LDATA extern char public_1000e90f; // OOB+0x032f
/* 0x1000e910 */ LDATA extern char public_1000e910; // OOB+0x0330
/* 0x1000e911 */ LDATA extern char public_1000e911; // OOB+0x0331
/* 0x1000e912 */ LDATA extern char public_1000e912; // OOB+0x0332
/* 0x1000e913 */ LDATA extern char public_1000e913; // OOB+0x0333
/* 0x1000e914 */ LDATA extern char public_1000e914; // OOB+0x0334
/* 0x1000e915 */ LDATA extern char public_1000e915; // OOB+0x0335
/* 0x1000e916 */ LDATA extern char public_1000e916; // OOB+0x0336
/* 0x1000e917 */ LDATA extern char public_1000e917; // OOB+0x0337
/* 0x1000e918 */ LDATA extern char public_1000e918; // OOB+0x0338
/* 0x1000e919 */ LDATA extern char public_1000e919; // OOB+0x0339
/* 0x1000e91a */ LDATA extern char public_1000e91a; // OOB+0x033a
/* 0x1000e91b */ LDATA extern char public_1000e91b; // OOB+0x033b
/* 0x1000e91c */ LDATA extern char public_1000e91c; // OOB+0x033c
/* 0x1000e91d */ LDATA extern char public_1000e91d; // OOB+0x033d
/* 0x1000e91e */ LDATA extern char public_1000e91e; // OOB+0x033e
/* 0x1000e91f */ LDATA extern char public_1000e91f; // OOB+0x033f
/* 0x1000e920 */ LDATA extern char public_1000e920; // OOB+0x0340
/* 0x1000e921 */ LDATA extern char public_1000e921; // OOB+0x0341
/* 0x1000e922 */ LDATA extern char public_1000e922; // OOB+0x0342
/* 0x1000e923 */ LDATA extern char public_1000e923; // OOB+0x0343
/* 0x1000e924 */ LDATA extern char public_1000e924; // OOB+0x0344
/* 0x1000e925 */ LDATA extern char public_1000e925; // OOB+0x0345
/* 0x1000e926 */ LDATA extern char public_1000e926; // OOB+0x0346
/* 0x1000e927 */ LDATA extern char public_1000e927; // OOB+0x0347
/* 0x1000e928 */ LDATA extern char public_1000e928; // OOB+0x0348
/* 0x1000e929 */ LDATA extern char public_1000e929; // OOB+0x0349
/* 0x1000e92a */ LDATA extern char public_1000e92a; // OOB+0x034a
/* 0x1000e92b */ LDATA extern char public_1000e92b; // OOB+0x034b
/* 0x1000e92c */ LDATA extern char public_1000e92c; // OOB+0x034c
/* 0x1000e92d */ LDATA extern char public_1000e92d; // OOB+0x034d
/* 0x1000e92e */ LDATA extern char public_1000e92e; // OOB+0x034e
/* 0x1000e92f */ LDATA extern char public_1000e92f; // OOB+0x034f
/* 0x1000e930 */ LDATA extern char public_1000e930; // OOB+0x0350
/* 0x1000e931 */ LDATA extern char public_1000e931; // OOB+0x0351
/* 0x1000e932 */ LDATA extern char public_1000e932; // OOB+0x0352
/* 0x1000e933 */ LDATA extern char public_1000e933; // OOB+0x0353
/* 0x1000e934 */ LDATA extern char public_1000e934; // OOB+0x0354
/* 0x1000e935 */ LDATA extern char public_1000e935; // OOB+0x0355
/* 0x1000e936 */ LDATA extern char public_1000e936; // OOB+0x0356
/* 0x1000e937 */ LDATA extern char public_1000e937; // OOB+0x0357
/* 0x1000e938 */ LDATA extern char public_1000e938; // OOB+0x0358
/* 0x1000e939 */ LDATA extern char public_1000e939; // OOB+0x0359
/* 0x1000e93a */ LDATA extern char public_1000e93a; // OOB+0x035a
/* 0x1000e93b */ LDATA extern char public_1000e93b; // OOB+0x035b
/* 0x1000e93c */ LDATA extern char public_1000e93c; // OOB+0x035c
/* 0x1000e93d */ LDATA extern char public_1000e93d; // OOB+0x035d
/* 0x1000e93e */ LDATA extern char public_1000e93e; // OOB+0x035e
/* 0x1000e93f */ LDATA extern char public_1000e93f; // OOB+0x035f
/* 0x1000e940 */ LDATA extern char public_1000e940; // OOB+0x0360
/* 0x1000e941 */ LDATA extern char public_1000e941; // OOB+0x0361
/* 0x1000e942 */ LDATA extern char public_1000e942; // OOB+0x0362
/* 0x1000e943 */ LDATA extern char public_1000e943; // OOB+0x0363
/* 0x1000e944 */ LDATA extern char public_1000e944; // OOB+0x0364
/* 0x1000e945 */ LDATA extern char public_1000e945; // OOB+0x0365
/* 0x1000e946 */ LDATA extern char public_1000e946; // OOB+0x0366
/* 0x1000e947 */ LDATA extern char public_1000e947; // OOB+0x0367
/* 0x1000e948 */ LDATA extern char public_1000e948; // OOB+0x0368
/* 0x1000e949 */ LDATA extern char public_1000e949; // OOB+0x0369
/* 0x1000e94a */ LDATA extern char public_1000e94a; // OOB+0x036a
/* 0x1000e94b */ LDATA extern char public_1000e94b; // OOB+0x036b
/* 0x1000e94c */ LDATA extern char public_1000e94c; // OOB+0x036c
/* 0x1000e94d */ LDATA extern char public_1000e94d; // OOB+0x036d
/* 0x1000e94e */ LDATA extern char public_1000e94e; // OOB+0x036e
/* 0x1000e94f */ LDATA extern char public_1000e94f; // OOB+0x036f
/* 0x1000e950 */ LDATA extern char public_1000e950; // OOB+0x0370
/* 0x1000e951 */ LDATA extern char public_1000e951; // OOB+0x0371
/* 0x1000e952 */ LDATA extern char public_1000e952; // OOB+0x0372
/* 0x1000e953 */ LDATA extern char public_1000e953; // OOB+0x0373
/* 0x1000e954 */ LDATA extern char public_1000e954; // OOB+0x0374
/* 0x1000e955 */ LDATA extern char public_1000e955; // OOB+0x0375
/* 0x1000e956 */ LDATA extern char public_1000e956; // OOB+0x0376
/* 0x1000e957 */ LDATA extern char public_1000e957; // OOB+0x0377
/* 0x1000e958 */ LDATA extern char public_1000e958; // OOB+0x0378
/* 0x1000e959 */ LDATA extern char public_1000e959; // OOB+0x0379
/* 0x1000e95a */ LDATA extern char public_1000e95a; // OOB+0x037a
/* 0x1000e95b */ LDATA extern char public_1000e95b; // OOB+0x037b
/* 0x1000e95c */ LDATA extern char public_1000e95c; // OOB+0x037c
/* 0x1000e95d */ LDATA extern char public_1000e95d; // OOB+0x037d
/* 0x1000e95e */ LDATA extern char public_1000e95e; // OOB+0x037e
/* 0x1000e95f */ LDATA extern char public_1000e95f; // OOB+0x037f
/* 0x1000e960 */ LDATA extern char public_1000e960; // OOB+0x0380
/* 0x1000e961 */ LDATA extern char public_1000e961; // OOB+0x0381
/* 0x1000e962 */ LDATA extern char public_1000e962; // OOB+0x0382
/* 0x1000e963 */ LDATA extern char public_1000e963; // OOB+0x0383
/* 0x1000e964 */ LDATA extern char public_1000e964; // OOB+0x0384
/* 0x1000e965 */ LDATA extern char public_1000e965; // OOB+0x0385
/* 0x1000e966 */ LDATA extern char public_1000e966; // OOB+0x0386
/* 0x1000e967 */ LDATA extern char public_1000e967; // OOB+0x0387
/* 0x1000e968 */ LDATA extern char public_1000e968; // OOB+0x0388
/* 0x1000e969 */ LDATA extern char public_1000e969; // OOB+0x0389
/* 0x1000e96a */ LDATA extern char public_1000e96a; // OOB+0x038a
/* 0x1000e96b */ LDATA extern char public_1000e96b; // OOB+0x038b
/* 0x1000e96c */ LDATA extern char public_1000e96c; // OOB+0x038c
/* 0x1000e96d */ LDATA extern char public_1000e96d; // OOB+0x038d
/* 0x1000e96e */ LDATA extern char public_1000e96e; // OOB+0x038e
/* 0x1000e96f */ LDATA extern char public_1000e96f; // OOB+0x038f
/* 0x1000e970 */ LDATA extern char public_1000e970; // OOB+0x0390
/* 0x1000e971 */ LDATA extern char public_1000e971; // OOB+0x0391
/* 0x1000e972 */ LDATA extern char public_1000e972; // OOB+0x0392
/* 0x1000e973 */ LDATA extern char public_1000e973; // OOB+0x0393
/* 0x1000e974 */ LDATA extern char public_1000e974; // OOB+0x0394
/* 0x1000e975 */ LDATA extern char public_1000e975; // OOB+0x0395
/* 0x1000e976 */ LDATA extern char public_1000e976; // OOB+0x0396
/* 0x1000e977 */ LDATA extern char public_1000e977; // OOB+0x0397
/* 0x1000e978 */ LDATA extern char public_1000e978; // OOB+0x0398
/* 0x1000e979 */ LDATA extern char public_1000e979; // OOB+0x0399
/* 0x1000e97a */ LDATA extern char public_1000e97a; // OOB+0x039a
/* 0x1000e97b */ LDATA extern char public_1000e97b; // OOB+0x039b
/* 0x1000e97c */ LDATA extern char public_1000e97c; // OOB+0x039c
/* 0x1000e97d */ LDATA extern char public_1000e97d; // OOB+0x039d
/* 0x1000e97e */ LDATA extern char public_1000e97e; // OOB+0x039e
/* 0x1000e97f */ LDATA extern char public_1000e97f; // OOB+0x039f
/* 0x1000e980 */ LDATA extern char public_1000e980; // OOB+0x03a0
/* 0x1000e981 */ LDATA extern char public_1000e981; // OOB+0x03a1
/* 0x1000e982 */ LDATA extern char public_1000e982; // OOB+0x03a2
/* 0x1000e983 */ LDATA extern char public_1000e983; // OOB+0x03a3
/* 0x1000e984 */ LDATA extern char public_1000e984; // OOB+0x03a4
/* 0x1000e985 */ LDATA extern char public_1000e985; // OOB+0x03a5
/* 0x1000e986 */ LDATA extern char public_1000e986; // OOB+0x03a6
/* 0x1000e987 */ LDATA extern char public_1000e987; // OOB+0x03a7
/* 0x1000e988 */ LDATA extern char public_1000e988; // OOB+0x03a8
/* 0x1000e989 */ LDATA extern char public_1000e989; // OOB+0x03a9
/* 0x1000e98a */ LDATA extern char public_1000e98a; // OOB+0x03aa
/* 0x1000e98b */ LDATA extern char public_1000e98b; // OOB+0x03ab
/* 0x1000e98c */ LDATA extern char public_1000e98c; // OOB+0x03ac
/* 0x1000e98d */ LDATA extern char public_1000e98d; // OOB+0x03ad
/* 0x1000e98e */ LDATA extern char public_1000e98e; // OOB+0x03ae
/* 0x1000e98f */ LDATA extern char public_1000e98f; // OOB+0x03af
/* 0x1000e990 */ LDATA extern char public_1000e990; // OOB+0x03b0
/* 0x1000e991 */ LDATA extern char public_1000e991; // OOB+0x03b1
/* 0x1000e992 */ LDATA extern char public_1000e992; // OOB+0x03b2
/* 0x1000e993 */ LDATA extern char public_1000e993; // OOB+0x03b3
/* 0x1000e994 */ LDATA extern char public_1000e994; // OOB+0x03b4
/* 0x1000e995 */ LDATA extern char public_1000e995; // OOB+0x03b5
/* 0x1000e996 */ LDATA extern char public_1000e996; // OOB+0x03b6
/* 0x1000e997 */ LDATA extern char public_1000e997; // OOB+0x03b7
/* 0x1000e998 */ LDATA extern char public_1000e998; // OOB+0x03b8
/* 0x1000e999 */ LDATA extern char public_1000e999; // OOB+0x03b9
/* 0x1000e99a */ LDATA extern char public_1000e99a; // OOB+0x03ba
/* 0x1000e99b */ LDATA extern char public_1000e99b; // OOB+0x03bb
/* 0x1000e99c */ LDATA extern char public_1000e99c; // OOB+0x03bc
/* 0x1000e99d */ LDATA extern char public_1000e99d; // OOB+0x03bd
/* 0x1000e99e */ LDATA extern char public_1000e99e; // OOB+0x03be
/* 0x1000e99f */ LDATA extern char public_1000e99f; // OOB+0x03bf
/* 0x1000e9a0 */ LDATA extern char public_1000e9a0; // OOB+0x03c0
/* 0x1000e9a1 */ LDATA extern char public_1000e9a1; // OOB+0x03c1
/* 0x1000e9a2 */ LDATA extern char public_1000e9a2; // OOB+0x03c2
/* 0x1000e9a3 */ LDATA extern char public_1000e9a3; // OOB+0x03c3
/* 0x1000e9a4 */ LDATA extern char public_1000e9a4; // OOB+0x03c4
/* 0x1000e9a5 */ LDATA extern char public_1000e9a5; // OOB+0x03c5
/* 0x1000e9a6 */ LDATA extern char public_1000e9a6; // OOB+0x03c6
/* 0x1000e9a7 */ LDATA extern char public_1000e9a7; // OOB+0x03c7
/* 0x1000e9a8 */ LDATA extern char public_1000e9a8; // OOB+0x03c8
/* 0x1000e9a9 */ LDATA extern char public_1000e9a9; // OOB+0x03c9
/* 0x1000e9aa */ LDATA extern char public_1000e9aa; // OOB+0x03ca
/* 0x1000e9ab */ LDATA extern char public_1000e9ab; // OOB+0x03cb
/* 0x1000e9ac */ LDATA extern char public_1000e9ac; // OOB+0x03cc
/* 0x1000e9ad */ LDATA extern char public_1000e9ad; // OOB+0x03cd
/* 0x1000e9ae */ LDATA extern char public_1000e9ae; // OOB+0x03ce
/* 0x1000e9af */ LDATA extern char public_1000e9af; // OOB+0x03cf
/* 0x1000e9b0 */ LDATA extern char public_1000e9b0; // OOB+0x03d0
/* 0x1000e9b1 */ LDATA extern char public_1000e9b1; // OOB+0x03d1
/* 0x1000e9b2 */ LDATA extern char public_1000e9b2; // OOB+0x03d2
/* 0x1000e9b3 */ LDATA extern char public_1000e9b3; // OOB+0x03d3
/* 0x1000e9b4 */ LDATA extern char public_1000e9b4; // OOB+0x03d4
/* 0x1000e9b5 */ LDATA extern char public_1000e9b5; // OOB+0x03d5
/* 0x1000e9b6 */ LDATA extern char public_1000e9b6; // OOB+0x03d6
/* 0x1000e9b7 */ LDATA extern char public_1000e9b7; // OOB+0x03d7
/* 0x1000e9b8 */ LDATA extern char public_1000e9b8; // OOB+0x03d8
/* 0x1000e9b9 */ LDATA extern char public_1000e9b9; // OOB+0x03d9
/* 0x1000e9ba */ LDATA extern char public_1000e9ba; // OOB+0x03da
/* 0x1000e9bb */ LDATA extern char public_1000e9bb; // OOB+0x03db
/* 0x1000e9bc */ LDATA extern char public_1000e9bc; // OOB+0x03dc
/* 0x1000e9bd */ LDATA extern char public_1000e9bd; // OOB+0x03dd
/* 0x1000e9be */ LDATA extern char public_1000e9be; // OOB+0x03de
/* 0x1000e9bf */ LDATA extern char public_1000e9bf; // OOB+0x03df
/* 0x1000e9c0 */ LDATA extern char public_1000e9c0; // OOB+0x03e0
/* 0x1000e9c1 */ LDATA extern char public_1000e9c1; // OOB+0x03e1
/* 0x1000e9c2 */ LDATA extern char public_1000e9c2; // OOB+0x03e2
/* 0x1000e9c3 */ LDATA extern char public_1000e9c3; // OOB+0x03e3
/* 0x1000e9c4 */ LDATA extern char public_1000e9c4; // OOB+0x03e4
/* 0x1000e9c5 */ LDATA extern char public_1000e9c5; // OOB+0x03e5
/* 0x1000e9c6 */ LDATA extern char public_1000e9c6; // OOB+0x03e6
/* 0x1000e9c7 */ LDATA extern char public_1000e9c7; // OOB+0x03e7
/* 0x1000e9c8 */ LDATA extern char public_1000e9c8; // OOB+0x03e8
/* 0x1000e9c9 */ LDATA extern char public_1000e9c9; // OOB+0x03e9
/* 0x1000e9ca */ LDATA extern char public_1000e9ca; // OOB+0x03ea
/* 0x1000e9cb */ LDATA extern char public_1000e9cb; // OOB+0x03eb
/* 0x1000e9cc */ LDATA extern char public_1000e9cc; // OOB+0x03ec
/* 0x1000e9cd */ LDATA extern char public_1000e9cd; // OOB+0x03ed
/* 0x1000e9ce */ LDATA extern char public_1000e9ce; // OOB+0x03ee
/* 0x1000e9cf */ LDATA extern char public_1000e9cf; // OOB+0x03ef
/* 0x1000e9d0 */ LDATA extern char public_1000e9d0; // OOB+0x03f0
/* 0x1000e9d1 */ LDATA extern char public_1000e9d1; // OOB+0x03f1
/* 0x1000e9d2 */ LDATA extern char public_1000e9d2; // OOB+0x03f2
/* 0x1000e9d3 */ LDATA extern char public_1000e9d3; // OOB+0x03f3
/* 0x1000e9d4 */ LDATA extern char public_1000e9d4; // OOB+0x03f4
/* 0x1000e9d5 */ LDATA extern char public_1000e9d5; // OOB+0x03f5
/* 0x1000e9d6 */ LDATA extern char public_1000e9d6; // OOB+0x03f6
/* 0x1000e9d7 */ LDATA extern char public_1000e9d7; // OOB+0x03f7
/* 0x1000e9d8 */ LDATA extern char public_1000e9d8; // OOB+0x03f8
/* 0x1000e9d9 */ LDATA extern char public_1000e9d9; // OOB+0x03f9
/* 0x1000e9da */ LDATA extern char public_1000e9da; // OOB+0x03fa
/* 0x1000e9db */ LDATA extern char public_1000e9db; // OOB+0x03fb
/* 0x1000e9dc */ LDATA extern char public_1000e9dc; // OOB+0x03fc
/* 0x1000e9dd */ LDATA extern char public_1000e9dd; // OOB+0x03fd
/* 0x1000e9de */ LDATA extern char public_1000e9de; // OOB+0x03fe
/* 0x1000e9df */ LDATA extern char public_1000e9df; // OOB+0x03ff
/* 0x1000e9e0 */ LDATA extern char public_1000e9e0; // OOB+0x0400
/* 0x1000e9e1 */ LDATA extern char public_1000e9e1; // OOB+0x0401
/* 0x1000e9e2 */ LDATA extern char public_1000e9e2; // OOB+0x0402
/* 0x1000e9e3 */ LDATA extern char public_1000e9e3; // OOB+0x0403
/* 0x1000e9e4 */ LDATA extern char public_1000e9e4; // OOB+0x0404
/* 0x1000e9e5 */ LDATA extern char public_1000e9e5; // OOB+0x0405
/* 0x1000e9e6 */ LDATA extern char public_1000e9e6; // OOB+0x0406
/* 0x1000e9e7 */ LDATA extern char public_1000e9e7; // OOB+0x0407
/* 0x1000e9e8 */ LDATA extern char public_1000e9e8; // OOB+0x0408
/* 0x1000e9e9 */ LDATA extern char public_1000e9e9; // OOB+0x0409
/* 0x1000e9ea */ LDATA extern char public_1000e9ea; // OOB+0x040a
/* 0x1000e9eb */ LDATA extern char public_1000e9eb; // OOB+0x040b
/* 0x1000e9ec */ LDATA extern char public_1000e9ec; // OOB+0x040c
/* 0x1000e9ed */ LDATA extern char public_1000e9ed; // OOB+0x040d
/* 0x1000e9ee */ LDATA extern char public_1000e9ee; // OOB+0x040e
/* 0x1000e9ef */ LDATA extern char public_1000e9ef; // OOB+0x040f
/* 0x1000e9f0 */ LDATA extern char public_1000e9f0; // OOB+0x0410
/* 0x1000e9f1 */ LDATA extern char public_1000e9f1; // OOB+0x0411
/* 0x1000e9f2 */ LDATA extern char public_1000e9f2; // OOB+0x0412
/* 0x1000e9f3 */ LDATA extern char public_1000e9f3; // OOB+0x0413
/* 0x1000e9f4 */ LDATA extern char public_1000e9f4; // OOB+0x0414
/* 0x1000e9f5 */ LDATA extern char public_1000e9f5; // OOB+0x0415
/* 0x1000e9f6 */ LDATA extern char public_1000e9f6; // OOB+0x0416
/* 0x1000e9f7 */ LDATA extern char public_1000e9f7; // OOB+0x0417
/* 0x1000e9f8 */ LDATA extern char public_1000e9f8; // OOB+0x0418
/* 0x1000e9f9 */ LDATA extern char public_1000e9f9; // OOB+0x0419
/* 0x1000e9fa */ LDATA extern char public_1000e9fa; // OOB+0x041a
/* 0x1000e9fb */ LDATA extern char public_1000e9fb; // OOB+0x041b
/* 0x1000e9fc */ LDATA extern char public_1000e9fc; // OOB+0x041c
/* 0x1000e9fd */ LDATA extern char public_1000e9fd; // OOB+0x041d
/* 0x1000e9fe */ LDATA extern char public_1000e9fe; // OOB+0x041e
/* 0x1000e9ff */ LDATA extern char public_1000e9ff; // OOB+0x041f
/* 0x1000ea00 */ LDATA extern char public_1000ea00; // OOB+0x0420
/* 0x1000ea01 */ LDATA extern char public_1000ea01; // OOB+0x0421
/* 0x1000ea02 */ LDATA extern char public_1000ea02; // OOB+0x0422
/* 0x1000ea03 */ LDATA extern char public_1000ea03; // OOB+0x0423
/* 0x1000ea04 */ LDATA extern char public_1000ea04; // OOB+0x0424
/* 0x1000ea05 */ LDATA extern char public_1000ea05; // OOB+0x0425
/* 0x1000ea06 */ LDATA extern char public_1000ea06; // OOB+0x0426
/* 0x1000ea07 */ LDATA extern char public_1000ea07; // OOB+0x0427
/* 0x1000ea08 */ LDATA extern char public_1000ea08; // OOB+0x0428
/* 0x1000ea09 */ LDATA extern char public_1000ea09; // OOB+0x0429
/* 0x1000ea0a */ LDATA extern char public_1000ea0a; // OOB+0x042a
/* 0x1000ea0b */ LDATA extern char public_1000ea0b; // OOB+0x042b
/* 0x1000ea0c */ LDATA extern char public_1000ea0c; // OOB+0x042c
/* 0x1000ea0d */ LDATA extern char public_1000ea0d; // OOB+0x042d
/* 0x1000ea0e */ LDATA extern char public_1000ea0e; // OOB+0x042e
/* 0x1000ea0f */ LDATA extern char public_1000ea0f; // OOB+0x042f
/* 0x1000ea10 */ LDATA extern char public_1000ea10; // OOB+0x0430
/* 0x1000ea11 */ LDATA extern char public_1000ea11; // OOB+0x0431
/* 0x1000ea12 */ LDATA extern char public_1000ea12; // OOB+0x0432
/* 0x1000ea13 */ LDATA extern char public_1000ea13; // OOB+0x0433
/* 0x1000ea14 */ LDATA extern char public_1000ea14; // OOB+0x0434
/* 0x1000ea15 */ LDATA extern char public_1000ea15; // OOB+0x0435
/* 0x1000ea16 */ LDATA extern char public_1000ea16; // OOB+0x0436
/* 0x1000ea17 */ LDATA extern char public_1000ea17; // OOB+0x0437
/* 0x1000ea18 */ LDATA extern char public_1000ea18; // OOB+0x0438
/* 0x1000ea19 */ LDATA extern char public_1000ea19; // OOB+0x0439
/* 0x1000ea1a */ LDATA extern char public_1000ea1a; // OOB+0x043a
/* 0x1000ea1b */ LDATA extern char public_1000ea1b; // OOB+0x043b
/* 0x1000ea1c */ LDATA extern char public_1000ea1c; // OOB+0x043c
/* 0x1000ea1d */ LDATA extern char public_1000ea1d; // OOB+0x043d
/* 0x1000ea1e */ LDATA extern char public_1000ea1e; // OOB+0x043e
/* 0x1000ea1f */ LDATA extern char public_1000ea1f; // OOB+0x043f
/* 0x1000ea20 */ LDATA extern char public_1000ea20; // OOB+0x0440
/* 0x1000ea21 */ LDATA extern char public_1000ea21; // OOB+0x0441
/* 0x1000ea22 */ LDATA extern char public_1000ea22; // OOB+0x0442
/* 0x1000ea23 */ LDATA extern char public_1000ea23; // OOB+0x0443
/* 0x1000ea24 */ LDATA extern char public_1000ea24; // OOB+0x0444
/* 0x1000ea25 */ LDATA extern char public_1000ea25; // OOB+0x0445
/* 0x1000ea26 */ LDATA extern char public_1000ea26; // OOB+0x0446
/* 0x1000ea27 */ LDATA extern char public_1000ea27; // OOB+0x0447
/* 0x1000ea28 */ LDATA extern char public_1000ea28; // OOB+0x0448
/* 0x1000ea29 */ LDATA extern char public_1000ea29; // OOB+0x0449
/* 0x1000ea2a */ LDATA extern char public_1000ea2a; // OOB+0x044a
/* 0x1000ea2b */ LDATA extern char public_1000ea2b; // OOB+0x044b
/* 0x1000ea2c */ LDATA extern char public_1000ea2c; // OOB+0x044c
/* 0x1000ea2d */ LDATA extern char public_1000ea2d; // OOB+0x044d
/* 0x1000ea2e */ LDATA extern char public_1000ea2e; // OOB+0x044e
/* 0x1000ea2f */ LDATA extern char public_1000ea2f; // OOB+0x044f
/* 0x1000ea30 */ LDATA extern char public_1000ea30; // OOB+0x0450
/* 0x1000ea31 */ LDATA extern char public_1000ea31; // OOB+0x0451
/* 0x1000ea32 */ LDATA extern char public_1000ea32; // OOB+0x0452
/* 0x1000ea33 */ LDATA extern char public_1000ea33; // OOB+0x0453
/* 0x1000ea34 */ LDATA extern char public_1000ea34; // OOB+0x0454
/* 0x1000ea35 */ LDATA extern char public_1000ea35; // OOB+0x0455
/* 0x1000ea36 */ LDATA extern char public_1000ea36; // OOB+0x0456
/* 0x1000ea37 */ LDATA extern char public_1000ea37; // OOB+0x0457
/* 0x1000ea38 */ LDATA extern char public_1000ea38; // OOB+0x0458
/* 0x1000ea39 */ LDATA extern char public_1000ea39; // OOB+0x0459
/* 0x1000ea3a */ LDATA extern char public_1000ea3a; // OOB+0x045a
/* 0x1000ea3b */ LDATA extern char public_1000ea3b; // OOB+0x045b
/* 0x1000ea3c */ LDATA extern char public_1000ea3c; // OOB+0x045c
/* 0x1000ea3d */ LDATA extern char public_1000ea3d; // OOB+0x045d
/* 0x1000ea3e */ LDATA extern char public_1000ea3e; // OOB+0x045e
/* 0x1000ea3f */ LDATA extern char public_1000ea3f; // OOB+0x045f
/* 0x1000ea40 */ LDATA extern char public_1000ea40; // OOB+0x0460
/* 0x1000ea41 */ LDATA extern char public_1000ea41; // OOB+0x0461
/* 0x1000ea42 */ LDATA extern char public_1000ea42; // OOB+0x0462
/* 0x1000ea43 */ LDATA extern char public_1000ea43; // OOB+0x0463
/* 0x1000ea44 */ LDATA extern char public_1000ea44; // OOB+0x0464
/* 0x1000ea45 */ LDATA extern char public_1000ea45; // OOB+0x0465
/* 0x1000ea46 */ LDATA extern char public_1000ea46; // OOB+0x0466
/* 0x1000ea47 */ LDATA extern char public_1000ea47; // OOB+0x0467
/* 0x1000ea48 */ LDATA extern char public_1000ea48; // OOB+0x0468
/* 0x1000ea49 */ LDATA extern char public_1000ea49; // OOB+0x0469
/* 0x1000ea4a */ LDATA extern char public_1000ea4a; // OOB+0x046a
/* 0x1000ea4b */ LDATA extern char public_1000ea4b; // OOB+0x046b
/* 0x1000ea4c */ LDATA extern char public_1000ea4c; // OOB+0x046c
/* 0x1000ea4d */ LDATA extern char public_1000ea4d; // OOB+0x046d
/* 0x1000ea4e */ LDATA extern char public_1000ea4e; // OOB+0x046e
/* 0x1000ea4f */ LDATA extern char public_1000ea4f; // OOB+0x046f
/* 0x1000ea50 */ LDATA extern char public_1000ea50; // OOB+0x0470
/* 0x1000ea51 */ LDATA extern char public_1000ea51; // OOB+0x0471
/* 0x1000ea52 */ LDATA extern char public_1000ea52; // OOB+0x0472
/* 0x1000ea53 */ LDATA extern char public_1000ea53; // OOB+0x0473
/* 0x1000ea54 */ LDATA extern char public_1000ea54; // OOB+0x0474
/* 0x1000ea55 */ LDATA extern char public_1000ea55; // OOB+0x0475
/* 0x1000ea56 */ LDATA extern char public_1000ea56; // OOB+0x0476
/* 0x1000ea57 */ LDATA extern char public_1000ea57; // OOB+0x0477
/* 0x1000ea58 */ LDATA extern char public_1000ea58; // OOB+0x0478
/* 0x1000ea59 */ LDATA extern char public_1000ea59; // OOB+0x0479
/* 0x1000ea5a */ LDATA extern char public_1000ea5a; // OOB+0x047a
/* 0x1000ea5b */ LDATA extern char public_1000ea5b; // OOB+0x047b
/* 0x1000ea5c */ LDATA extern char public_1000ea5c; // OOB+0x047c
/* 0x1000ea5d */ LDATA extern char public_1000ea5d; // OOB+0x047d
/* 0x1000ea5e */ LDATA extern char public_1000ea5e; // OOB+0x047e
/* 0x1000ea5f */ LDATA extern char public_1000ea5f; // OOB+0x047f
/* 0x1000ea60 */ LDATA extern char public_1000ea60; // OOB+0x0480
/* 0x1000ea61 */ LDATA extern char public_1000ea61; // OOB+0x0481
/* 0x1000ea62 */ LDATA extern char public_1000ea62; // OOB+0x0482
/* 0x1000ea63 */ LDATA extern char public_1000ea63; // OOB+0x0483
/* 0x1000ea64 */ LDATA extern char public_1000ea64; // OOB+0x0484
/* 0x1000ea65 */ LDATA extern char public_1000ea65; // OOB+0x0485
/* 0x1000ea66 */ LDATA extern char public_1000ea66; // OOB+0x0486
/* 0x1000ea67 */ LDATA extern char public_1000ea67; // OOB+0x0487
/* 0x1000ea68 */ LDATA extern char public_1000ea68; // OOB+0x0488
/* 0x1000ea69 */ LDATA extern char public_1000ea69; // OOB+0x0489
/* 0x1000ea6a */ LDATA extern char public_1000ea6a; // OOB+0x048a
/* 0x1000ea6b */ LDATA extern char public_1000ea6b; // OOB+0x048b
/* 0x1000ea6c */ LDATA extern char public_1000ea6c; // OOB+0x048c
/* 0x1000ea6d */ LDATA extern char public_1000ea6d; // OOB+0x048d
/* 0x1000ea6e */ LDATA extern char public_1000ea6e; // OOB+0x048e
/* 0x1000ea6f */ LDATA extern char public_1000ea6f; // OOB+0x048f
/* 0x1000ea70 */ LDATA extern char public_1000ea70; // OOB+0x0490
/* 0x1000ea71 */ LDATA extern char public_1000ea71; // OOB+0x0491
/* 0x1000ea72 */ LDATA extern char public_1000ea72; // OOB+0x0492
/* 0x1000ea73 */ LDATA extern char public_1000ea73; // OOB+0x0493
/* 0x1000ea74 */ LDATA extern char public_1000ea74; // OOB+0x0494
/* 0x1000ea75 */ LDATA extern char public_1000ea75; // OOB+0x0495
/* 0x1000ea76 */ LDATA extern char public_1000ea76; // OOB+0x0496
/* 0x1000ea77 */ LDATA extern char public_1000ea77; // OOB+0x0497
/* 0x1000ea78 */ LDATA extern char public_1000ea78; // OOB+0x0498
/* 0x1000ea79 */ LDATA extern char public_1000ea79; // OOB+0x0499
/* 0x1000ea7a */ LDATA extern char public_1000ea7a; // OOB+0x049a
/* 0x1000ea7b */ LDATA extern char public_1000ea7b; // OOB+0x049b
/* 0x1000ea7c */ LDATA extern char public_1000ea7c; // OOB+0x049c
/* 0x1000ea7d */ LDATA extern char public_1000ea7d; // OOB+0x049d
/* 0x1000ea7e */ LDATA extern char public_1000ea7e; // OOB+0x049e
/* 0x1000ea7f */ LDATA extern char public_1000ea7f; // OOB+0x049f
/* 0x1000ea80 */ LDATA extern char public_1000ea80; // OOB+0x04a0
/* 0x1000ea81 */ LDATA extern char public_1000ea81; // OOB+0x04a1
/* 0x1000ea82 */ LDATA extern char public_1000ea82; // OOB+0x04a2
/* 0x1000ea83 */ LDATA extern char public_1000ea83; // OOB+0x04a3
/* 0x1000ea84 */ LDATA extern char public_1000ea84; // OOB+0x04a4
/* 0x1000ea85 */ LDATA extern char public_1000ea85; // OOB+0x04a5
/* 0x1000ea86 */ LDATA extern char public_1000ea86; // OOB+0x04a6
/* 0x1000ea87 */ LDATA extern char public_1000ea87; // OOB+0x04a7
/* 0x1000ea88 */ LDATA extern char public_1000ea88; // OOB+0x04a8
/* 0x1000ea89 */ LDATA extern char public_1000ea89; // OOB+0x04a9
/* 0x1000ea8a */ LDATA extern char public_1000ea8a; // OOB+0x04aa
/* 0x1000ea8b */ LDATA extern char public_1000ea8b; // OOB+0x04ab
/* 0x1000ea8c */ LDATA extern char public_1000ea8c; // OOB+0x04ac
/* 0x1000ea8d */ LDATA extern char public_1000ea8d; // OOB+0x04ad
/* 0x1000ea8e */ LDATA extern char public_1000ea8e; // OOB+0x04ae
/* 0x1000ea8f */ LDATA extern char public_1000ea8f; // OOB+0x04af
/* 0x1000ea90 */ LDATA extern char public_1000ea90; // OOB+0x04b0
/* 0x1000ea91 */ LDATA extern char public_1000ea91; // OOB+0x04b1
/* 0x1000ea92 */ LDATA extern char public_1000ea92; // OOB+0x04b2
/* 0x1000ea93 */ LDATA extern char public_1000ea93; // OOB+0x04b3
/* 0x1000ea94 */ LDATA extern char public_1000ea94; // OOB+0x04b4
/* 0x1000ea95 */ LDATA extern char public_1000ea95; // OOB+0x04b5
/* 0x1000ea96 */ LDATA extern char public_1000ea96; // OOB+0x04b6
/* 0x1000ea97 */ LDATA extern char public_1000ea97; // OOB+0x04b7
/* 0x1000ea98 */ LDATA extern char public_1000ea98; // OOB+0x04b8
/* 0x1000ea99 */ LDATA extern char public_1000ea99; // OOB+0x04b9
/* 0x1000ea9a */ LDATA extern char public_1000ea9a; // OOB+0x04ba
/* 0x1000ea9b */ LDATA extern char public_1000ea9b; // OOB+0x04bb
/* 0x1000ea9c */ LDATA extern char public_1000ea9c; // OOB+0x04bc
/* 0x1000ea9d */ LDATA extern char public_1000ea9d; // OOB+0x04bd
/* 0x1000ea9e */ LDATA extern char public_1000ea9e; // OOB+0x04be
/* 0x1000ea9f */ LDATA extern char public_1000ea9f; // OOB+0x04bf
/* 0x1000eaa0 */ LDATA extern char public_1000eaa0; // OOB+0x04c0
/* 0x1000eaa1 */ LDATA extern char public_1000eaa1; // OOB+0x04c1
/* 0x1000eaa2 */ LDATA extern char public_1000eaa2; // OOB+0x04c2
/* 0x1000eaa3 */ LDATA extern char public_1000eaa3; // OOB+0x04c3
/* 0x1000eaa4 */ LDATA extern char public_1000eaa4; // OOB+0x04c4
/* 0x1000eaa5 */ LDATA extern char public_1000eaa5; // OOB+0x04c5
/* 0x1000eaa6 */ LDATA extern char public_1000eaa6; // OOB+0x04c6
/* 0x1000eaa7 */ LDATA extern char public_1000eaa7; // OOB+0x04c7
/* 0x1000eaa8 */ LDATA extern char public_1000eaa8; // OOB+0x04c8
/* 0x1000eaa9 */ LDATA extern char public_1000eaa9; // OOB+0x04c9
/* 0x1000eaaa */ LDATA extern char public_1000eaaa; // OOB+0x04ca
/* 0x1000eaab */ LDATA extern char public_1000eaab; // OOB+0x04cb
/* 0x1000eaac */ LDATA extern char public_1000eaac; // OOB+0x04cc
/* 0x1000eaad */ LDATA extern char public_1000eaad; // OOB+0x04cd
/* 0x1000eaae */ LDATA extern char public_1000eaae; // OOB+0x04ce
/* 0x1000eaaf */ LDATA extern char public_1000eaaf; // OOB+0x04cf
/* 0x1000eab0 */ LDATA extern char public_1000eab0; // OOB+0x04d0
/* 0x1000eab1 */ LDATA extern char public_1000eab1; // OOB+0x04d1
/* 0x1000eab2 */ LDATA extern char public_1000eab2; // OOB+0x04d2
/* 0x1000eab3 */ LDATA extern char public_1000eab3; // OOB+0x04d3
/* 0x1000eab4 */ LDATA extern char public_1000eab4; // OOB+0x04d4
/* 0x1000eab5 */ LDATA extern char public_1000eab5; // OOB+0x04d5
/* 0x1000eab6 */ LDATA extern char public_1000eab6; // OOB+0x04d6
/* 0x1000eab7 */ LDATA extern char public_1000eab7; // OOB+0x04d7
/* 0x1000eab8 */ LDATA extern char public_1000eab8; // OOB+0x04d8
/* 0x1000eab9 */ LDATA extern char public_1000eab9; // OOB+0x04d9
/* 0x1000eaba */ LDATA extern char public_1000eaba; // OOB+0x04da
/* 0x1000eabb */ LDATA extern char public_1000eabb; // OOB+0x04db
/* 0x1000eabc */ LDATA extern char public_1000eabc; // OOB+0x04dc
/* 0x1000eabd */ LDATA extern char public_1000eabd; // OOB+0x04dd
/* 0x1000eabe */ LDATA extern char public_1000eabe; // OOB+0x04de
/* 0x1000eabf */ LDATA extern char public_1000eabf; // OOB+0x04df
/* 0x1000eac0 */ LDATA extern char public_1000eac0; // OOB+0x04e0
/* 0x1000eac1 */ LDATA extern char public_1000eac1; // OOB+0x04e1
/* 0x1000eac2 */ LDATA extern char public_1000eac2; // OOB+0x04e2
/* 0x1000eac3 */ LDATA extern char public_1000eac3; // OOB+0x04e3
/* 0x1000eac4 */ LDATA extern char public_1000eac4; // OOB+0x04e4
/* 0x1000eac5 */ LDATA extern char public_1000eac5; // OOB+0x04e5
/* 0x1000eac6 */ LDATA extern char public_1000eac6; // OOB+0x04e6
/* 0x1000eac7 */ LDATA extern char public_1000eac7; // OOB+0x04e7
/* 0x1000eac8 */ LDATA extern char public_1000eac8; // OOB+0x04e8
/* 0x1000eac9 */ LDATA extern char public_1000eac9; // OOB+0x04e9
/* 0x1000eaca */ LDATA extern char public_1000eaca; // OOB+0x04ea
/* 0x1000eacb */ LDATA extern char public_1000eacb; // OOB+0x04eb
/* 0x1000eacc */ LDATA extern char public_1000eacc; // OOB+0x04ec
/* 0x1000eacd */ LDATA extern char public_1000eacd; // OOB+0x04ed
/* 0x1000eace */ LDATA extern char public_1000eace; // OOB+0x04ee
/* 0x1000eacf */ LDATA extern char public_1000eacf; // OOB+0x04ef
/* 0x1000ead0 */ LDATA extern char public_1000ead0; // OOB+0x04f0
/* 0x1000ead1 */ LDATA extern char public_1000ead1; // OOB+0x04f1
/* 0x1000ead2 */ LDATA extern char public_1000ead2; // OOB+0x04f2
/* 0x1000ead3 */ LDATA extern char public_1000ead3; // OOB+0x04f3
/* 0x1000ead4 */ LDATA extern char public_1000ead4; // OOB+0x04f4
/* 0x1000ead5 */ LDATA extern char public_1000ead5; // OOB+0x04f5
/* 0x1000ead6 */ LDATA extern char public_1000ead6; // OOB+0x04f6
/* 0x1000ead7 */ LDATA extern char public_1000ead7; // OOB+0x04f7
/* 0x1000ead8 */ LDATA extern char public_1000ead8; // OOB+0x04f8
/* 0x1000ead9 */ LDATA extern char public_1000ead9; // OOB+0x04f9
/* 0x1000eada */ LDATA extern char public_1000eada; // OOB+0x04fa
/* 0x1000eadb */ LDATA extern char public_1000eadb; // OOB+0x04fb
/* 0x1000eadc */ LDATA extern char public_1000eadc; // OOB+0x04fc
/* 0x1000eadd */ LDATA extern char public_1000eadd; // OOB+0x04fd
/* 0x1000eade */ LDATA extern char public_1000eade; // OOB+0x04fe
/* 0x1000eadf */ LDATA extern char public_1000eadf; // OOB+0x04ff
/* 0x1000eae0 */ LDATA extern char public_1000eae0; // OOB+0x0500
/* 0x1000eae1 */ LDATA extern char public_1000eae1; // OOB+0x0501
/* 0x1000eae2 */ LDATA extern char public_1000eae2; // OOB+0x0502
/* 0x1000eae3 */ LDATA extern char public_1000eae3; // OOB+0x0503
/* 0x1000eae4 */ LDATA extern char public_1000eae4; // OOB+0x0504
/* 0x1000eae5 */ LDATA extern char public_1000eae5; // OOB+0x0505
/* 0x1000eae6 */ LDATA extern char public_1000eae6; // OOB+0x0506
/* 0x1000eae7 */ LDATA extern char public_1000eae7; // OOB+0x0507
/* 0x1000eae8 */ LDATA extern char public_1000eae8; // OOB+0x0508
/* 0x1000eae9 */ LDATA extern char public_1000eae9; // OOB+0x0509
/* 0x1000eaea */ LDATA extern char public_1000eaea; // OOB+0x050a
/* 0x1000eaeb */ LDATA extern char public_1000eaeb; // OOB+0x050b
/* 0x1000eaec */ LDATA extern char public_1000eaec; // OOB+0x050c
/* 0x1000eaed */ LDATA extern char public_1000eaed; // OOB+0x050d
/* 0x1000eaee */ LDATA extern char public_1000eaee; // OOB+0x050e
/* 0x1000eaef */ LDATA extern char public_1000eaef; // OOB+0x050f
/* 0x1000eaf0 */ LDATA extern char public_1000eaf0; // OOB+0x0510
/* 0x1000eaf1 */ LDATA extern char public_1000eaf1; // OOB+0x0511
/* 0x1000eaf2 */ LDATA extern char public_1000eaf2; // OOB+0x0512
/* 0x1000eaf3 */ LDATA extern char public_1000eaf3; // OOB+0x0513
/* 0x1000eaf4 */ LDATA extern char public_1000eaf4; // OOB+0x0514
/* 0x1000eaf5 */ LDATA extern char public_1000eaf5; // OOB+0x0515
/* 0x1000eaf6 */ LDATA extern char public_1000eaf6; // OOB+0x0516
/* 0x1000eaf7 */ LDATA extern char public_1000eaf7; // OOB+0x0517
/* 0x1000eaf8 */ LDATA extern char public_1000eaf8; // OOB+0x0518
/* 0x1000eaf9 */ LDATA extern char public_1000eaf9; // OOB+0x0519
/* 0x1000eafa */ LDATA extern char public_1000eafa; // OOB+0x051a
/* 0x1000eafb */ LDATA extern char public_1000eafb; // OOB+0x051b
/* 0x1000eafc */ LDATA extern char public_1000eafc; // OOB+0x051c
/* 0x1000eafd */ LDATA extern char public_1000eafd; // OOB+0x051d
/* 0x1000eafe */ LDATA extern char public_1000eafe; // OOB+0x051e
/* 0x1000eaff */ LDATA extern char public_1000eaff; // OOB+0x051f
/* 0x1000eb00 */ LDATA extern char public_1000eb00; // OOB+0x0520
/* 0x1000eb01 */ LDATA extern char public_1000eb01; // OOB+0x0521
/* 0x1000eb02 */ LDATA extern char public_1000eb02; // OOB+0x0522
/* 0x1000eb03 */ LDATA extern char public_1000eb03; // OOB+0x0523
/* 0x1000eb04 */ LDATA extern char public_1000eb04; // OOB+0x0524
/* 0x1000eb05 */ LDATA extern char public_1000eb05; // OOB+0x0525
/* 0x1000eb06 */ LDATA extern char public_1000eb06; // OOB+0x0526
/* 0x1000eb07 */ LDATA extern char public_1000eb07; // OOB+0x0527
/* 0x1000eb08 */ LDATA extern char public_1000eb08; // OOB+0x0528
/* 0x1000eb09 */ LDATA extern char public_1000eb09; // OOB+0x0529
/* 0x1000eb0a */ LDATA extern char public_1000eb0a; // OOB+0x052a
/* 0x1000eb0b */ LDATA extern char public_1000eb0b; // OOB+0x052b
/* 0x1000eb0c */ LDATA extern char public_1000eb0c; // OOB+0x052c
/* 0x1000eb0d */ LDATA extern char public_1000eb0d; // OOB+0x052d
/* 0x1000eb0e */ LDATA extern char public_1000eb0e; // OOB+0x052e
/* 0x1000eb0f */ LDATA extern char public_1000eb0f; // OOB+0x052f
/* 0x1000eb10 */ LDATA extern char public_1000eb10; // OOB+0x0530
/* 0x1000eb11 */ LDATA extern char public_1000eb11; // OOB+0x0531
/* 0x1000eb12 */ LDATA extern char public_1000eb12; // OOB+0x0532
/* 0x1000eb13 */ LDATA extern char public_1000eb13; // OOB+0x0533
/* 0x1000eb14 */ LDATA extern char public_1000eb14; // OOB+0x0534
/* 0x1000eb15 */ LDATA extern char public_1000eb15; // OOB+0x0535
/* 0x1000eb16 */ LDATA extern char public_1000eb16; // OOB+0x0536
/* 0x1000eb17 */ LDATA extern char public_1000eb17; // OOB+0x0537
/* 0x1000eb18 */ LDATA extern char public_1000eb18; // OOB+0x0538
/* 0x1000eb19 */ LDATA extern char public_1000eb19; // OOB+0x0539
/* 0x1000eb1a */ LDATA extern char public_1000eb1a; // OOB+0x053a
/* 0x1000eb1b */ LDATA extern char public_1000eb1b; // OOB+0x053b
/* 0x1000eb1c */ LDATA extern char public_1000eb1c; // OOB+0x053c
/* 0x1000eb1d */ LDATA extern char public_1000eb1d; // OOB+0x053d
/* 0x1000eb1e */ LDATA extern char public_1000eb1e; // OOB+0x053e
/* 0x1000eb1f */ LDATA extern char public_1000eb1f; // OOB+0x053f
/* 0x1000eb20 */ LDATA extern char public_1000eb20; // OOB+0x0540
/* 0x1000eb21 */ LDATA extern char public_1000eb21; // OOB+0x0541
/* 0x1000eb22 */ LDATA extern char public_1000eb22; // OOB+0x0542
/* 0x1000eb23 */ LDATA extern char public_1000eb23; // OOB+0x0543
/* 0x1000eb24 */ LDATA extern char public_1000eb24; // OOB+0x0544
/* 0x1000eb25 */ LDATA extern char public_1000eb25; // OOB+0x0545
/* 0x1000eb26 */ LDATA extern char public_1000eb26; // OOB+0x0546
/* 0x1000eb27 */ LDATA extern char public_1000eb27; // OOB+0x0547
/* 0x1000eb28 */ LDATA extern char public_1000eb28; // OOB+0x0548
/* 0x1000eb29 */ LDATA extern char public_1000eb29; // OOB+0x0549
/* 0x1000eb2a */ LDATA extern char public_1000eb2a; // OOB+0x054a
/* 0x1000eb2b */ LDATA extern char public_1000eb2b; // OOB+0x054b
/* 0x1000eb2c */ LDATA extern char public_1000eb2c; // OOB+0x054c
/* 0x1000eb2d */ LDATA extern char public_1000eb2d; // OOB+0x054d
/* 0x1000eb2e */ LDATA extern char public_1000eb2e; // OOB+0x054e
/* 0x1000eb2f */ LDATA extern char public_1000eb2f; // OOB+0x054f
/* 0x1000eb30 */ LDATA extern char public_1000eb30; // OOB+0x0550
/* 0x1000eb31 */ LDATA extern char public_1000eb31; // OOB+0x0551
/* 0x1000eb32 */ LDATA extern char public_1000eb32; // OOB+0x0552
/* 0x1000eb33 */ LDATA extern char public_1000eb33; // OOB+0x0553
/* 0x1000eb34 */ LDATA extern char public_1000eb34; // OOB+0x0554
/* 0x1000eb35 */ LDATA extern char public_1000eb35; // OOB+0x0555
/* 0x1000eb36 */ LDATA extern char public_1000eb36; // OOB+0x0556
/* 0x1000eb37 */ LDATA extern char public_1000eb37; // OOB+0x0557
/* 0x1000eb38 */ LDATA extern char public_1000eb38; // OOB+0x0558
/* 0x1000eb39 */ LDATA extern char public_1000eb39; // OOB+0x0559
/* 0x1000eb3a */ LDATA extern char public_1000eb3a; // OOB+0x055a
/* 0x1000eb3b */ LDATA extern char public_1000eb3b; // OOB+0x055b
/* 0x1000eb3c */ LDATA extern char public_1000eb3c; // OOB+0x055c
/* 0x1000eb3d */ LDATA extern char public_1000eb3d; // OOB+0x055d
/* 0x1000eb3e */ LDATA extern char public_1000eb3e; // OOB+0x055e
/* 0x1000eb3f */ LDATA extern char public_1000eb3f; // OOB+0x055f
/* 0x1000eb40 */ LDATA extern char public_1000eb40; // OOB+0x0560
/* 0x1000eb41 */ LDATA extern char public_1000eb41; // OOB+0x0561
/* 0x1000eb42 */ LDATA extern char public_1000eb42; // OOB+0x0562
/* 0x1000eb43 */ LDATA extern char public_1000eb43; // OOB+0x0563
/* 0x1000eb44 */ LDATA extern char public_1000eb44; // OOB+0x0564
/* 0x1000eb45 */ LDATA extern char public_1000eb45; // OOB+0x0565
/* 0x1000eb46 */ LDATA extern char public_1000eb46; // OOB+0x0566
/* 0x1000eb47 */ LDATA extern char public_1000eb47; // OOB+0x0567
/* 0x1000eb48 */ LDATA extern char public_1000eb48; // OOB+0x0568
/* 0x1000eb49 */ LDATA extern char public_1000eb49; // OOB+0x0569
/* 0x1000eb4a */ LDATA extern char public_1000eb4a; // OOB+0x056a
/* 0x1000eb4b */ LDATA extern char public_1000eb4b; // OOB+0x056b
/* 0x1000eb4c */ LDATA extern char public_1000eb4c; // OOB+0x056c
/* 0x1000eb4d */ LDATA extern char public_1000eb4d; // OOB+0x056d
/* 0x1000eb4e */ LDATA extern char public_1000eb4e; // OOB+0x056e
/* 0x1000eb4f */ LDATA extern char public_1000eb4f; // OOB+0x056f
/* 0x1000eb50 */ LDATA extern char public_1000eb50; // OOB+0x0570
/* 0x1000eb51 */ LDATA extern char public_1000eb51; // OOB+0x0571
/* 0x1000eb52 */ LDATA extern char public_1000eb52; // OOB+0x0572
/* 0x1000eb53 */ LDATA extern char public_1000eb53; // OOB+0x0573
/* 0x1000eb54 */ LDATA extern char public_1000eb54; // OOB+0x0574
/* 0x1000eb55 */ LDATA extern char public_1000eb55; // OOB+0x0575
/* 0x1000eb56 */ LDATA extern char public_1000eb56; // OOB+0x0576
/* 0x1000eb57 */ LDATA extern char public_1000eb57; // OOB+0x0577
/* 0x1000eb58 */ LDATA extern char public_1000eb58; // OOB+0x0578
/* 0x1000eb59 */ LDATA extern char public_1000eb59; // OOB+0x0579
/* 0x1000eb5a */ LDATA extern char public_1000eb5a; // OOB+0x057a
/* 0x1000eb5b */ LDATA extern char public_1000eb5b; // OOB+0x057b
/* 0x1000eb5c */ LDATA extern char public_1000eb5c; // OOB+0x057c
/* 0x1000eb5d */ LDATA extern char public_1000eb5d; // OOB+0x057d
/* 0x1000eb5e */ LDATA extern char public_1000eb5e; // OOB+0x057e
/* 0x1000eb5f */ LDATA extern char public_1000eb5f; // OOB+0x057f
/* 0x1000eb60 */ LDATA extern char public_1000eb60; // OOB+0x0580
/* 0x1000eb61 */ LDATA extern char public_1000eb61; // OOB+0x0581
/* 0x1000eb62 */ LDATA extern char public_1000eb62; // OOB+0x0582
/* 0x1000eb63 */ LDATA extern char public_1000eb63; // OOB+0x0583
/* 0x1000eb64 */ LDATA extern char public_1000eb64; // OOB+0x0584
/* 0x1000eb65 */ LDATA extern char public_1000eb65; // OOB+0x0585
/* 0x1000eb66 */ LDATA extern char public_1000eb66; // OOB+0x0586
/* 0x1000eb67 */ LDATA extern char public_1000eb67; // OOB+0x0587
/* 0x1000eb68 */ LDATA extern char public_1000eb68; // OOB+0x0588
/* 0x1000eb69 */ LDATA extern char public_1000eb69; // OOB+0x0589
/* 0x1000eb6a */ LDATA extern char public_1000eb6a; // OOB+0x058a
/* 0x1000eb6b */ LDATA extern char public_1000eb6b; // OOB+0x058b
/* 0x1000eb6c */ LDATA extern char public_1000eb6c; // OOB+0x058c
/* 0x1000eb6d */ LDATA extern char public_1000eb6d; // OOB+0x058d
/* 0x1000eb6e */ LDATA extern char public_1000eb6e; // OOB+0x058e
/* 0x1000eb6f */ LDATA extern char public_1000eb6f; // OOB+0x058f
/* 0x1000eb70 */ LDATA extern char public_1000eb70; // OOB+0x0590
/* 0x1000eb71 */ LDATA extern char public_1000eb71; // OOB+0x0591
/* 0x1000eb72 */ LDATA extern char public_1000eb72; // OOB+0x0592
/* 0x1000eb73 */ LDATA extern char public_1000eb73; // OOB+0x0593
/* 0x1000eb74 */ LDATA extern char public_1000eb74; // OOB+0x0594
/* 0x1000eb75 */ LDATA extern char public_1000eb75; // OOB+0x0595
/* 0x1000eb76 */ LDATA extern char public_1000eb76; // OOB+0x0596
/* 0x1000eb77 */ LDATA extern char public_1000eb77; // OOB+0x0597
/* 0x1000eb78 */ LDATA extern char public_1000eb78; // OOB+0x0598
/* 0x1000eb79 */ LDATA extern char public_1000eb79; // OOB+0x0599
/* 0x1000eb7a */ LDATA extern char public_1000eb7a; // OOB+0x059a
/* 0x1000eb7b */ LDATA extern char public_1000eb7b; // OOB+0x059b
/* 0x1000eb7c */ LDATA extern char public_1000eb7c; // OOB+0x059c
/* 0x1000eb7d */ LDATA extern char public_1000eb7d; // OOB+0x059d
/* 0x1000eb7e */ LDATA extern char public_1000eb7e; // OOB+0x059e
/* 0x1000eb7f */ LDATA extern char public_1000eb7f; // OOB+0x059f
/* 0x1000eb80 */ LDATA extern char public_1000eb80; // OOB+0x05a0
/* 0x1000eb81 */ LDATA extern char public_1000eb81; // OOB+0x05a1
/* 0x1000eb82 */ LDATA extern char public_1000eb82; // OOB+0x05a2
/* 0x1000eb83 */ LDATA extern char public_1000eb83; // OOB+0x05a3
/* 0x1000eb84 */ LDATA extern char public_1000eb84; // OOB+0x05a4
/* 0x1000eb85 */ LDATA extern char public_1000eb85; // OOB+0x05a5
/* 0x1000eb86 */ LDATA extern char public_1000eb86; // OOB+0x05a6
/* 0x1000eb87 */ LDATA extern char public_1000eb87; // OOB+0x05a7
/* 0x1000eb88 */ LDATA extern char public_1000eb88; // OOB+0x05a8
/* 0x1000eb89 */ LDATA extern char public_1000eb89; // OOB+0x05a9
/* 0x1000eb8a */ LDATA extern char public_1000eb8a; // OOB+0x05aa
/* 0x1000eb8b */ LDATA extern char public_1000eb8b; // OOB+0x05ab
/* 0x1000eb8c */ LDATA extern char public_1000eb8c; // OOB+0x05ac
/* 0x1000eb8d */ LDATA extern char public_1000eb8d; // OOB+0x05ad
/* 0x1000eb8e */ LDATA extern char public_1000eb8e; // OOB+0x05ae
/* 0x1000eb8f */ LDATA extern char public_1000eb8f; // OOB+0x05af
/* 0x1000eb90 */ LDATA extern char public_1000eb90; // OOB+0x05b0
/* 0x1000eb91 */ LDATA extern char public_1000eb91; // OOB+0x05b1
/* 0x1000eb92 */ LDATA extern char public_1000eb92; // OOB+0x05b2
/* 0x1000eb93 */ LDATA extern char public_1000eb93; // OOB+0x05b3
/* 0x1000eb94 */ LDATA extern char public_1000eb94; // OOB+0x05b4
/* 0x1000eb95 */ LDATA extern char public_1000eb95; // OOB+0x05b5
/* 0x1000eb96 */ LDATA extern char public_1000eb96; // OOB+0x05b6
/* 0x1000eb97 */ LDATA extern char public_1000eb97; // OOB+0x05b7
/* 0x1000eb98 */ LDATA extern char public_1000eb98; // OOB+0x05b8
/* 0x1000eb99 */ LDATA extern char public_1000eb99; // OOB+0x05b9
/* 0x1000eb9a */ LDATA extern char public_1000eb9a; // OOB+0x05ba
/* 0x1000eb9b */ LDATA extern char public_1000eb9b; // OOB+0x05bb
/* 0x1000eb9c */ LDATA extern char public_1000eb9c; // OOB+0x05bc
/* 0x1000eb9d */ LDATA extern char public_1000eb9d; // OOB+0x05bd
/* 0x1000eb9e */ LDATA extern char public_1000eb9e; // OOB+0x05be
/* 0x1000eb9f */ LDATA extern char public_1000eb9f; // OOB+0x05bf
/* 0x1000eba0 */ LDATA extern char public_1000eba0; // OOB+0x05c0
/* 0x1000eba1 */ LDATA extern char public_1000eba1; // OOB+0x05c1
/* 0x1000eba2 */ LDATA extern char public_1000eba2; // OOB+0x05c2
/* 0x1000eba3 */ LDATA extern char public_1000eba3; // OOB+0x05c3
/* 0x1000eba4 */ LDATA extern char public_1000eba4; // OOB+0x05c4
/* 0x1000eba5 */ LDATA extern char public_1000eba5; // OOB+0x05c5
/* 0x1000eba6 */ LDATA extern char public_1000eba6; // OOB+0x05c6
/* 0x1000eba7 */ LDATA extern char public_1000eba7; // OOB+0x05c7
/* 0x1000eba8 */ LDATA extern char public_1000eba8; // OOB+0x05c8
/* 0x1000eba9 */ LDATA extern char public_1000eba9; // OOB+0x05c9
/* 0x1000ebaa */ LDATA extern char public_1000ebaa; // OOB+0x05ca
/* 0x1000ebab */ LDATA extern char public_1000ebab; // OOB+0x05cb
/* 0x1000ebac */ LDATA extern char public_1000ebac; // OOB+0x05cc
/* 0x1000ebad */ LDATA extern char public_1000ebad; // OOB+0x05cd
/* 0x1000ebae */ LDATA extern char public_1000ebae; // OOB+0x05ce
/* 0x1000ebaf */ LDATA extern char public_1000ebaf; // OOB+0x05cf
/* 0x1000ebb0 */ LDATA extern char public_1000ebb0; // OOB+0x05d0
/* 0x1000ebb1 */ LDATA extern char public_1000ebb1; // OOB+0x05d1
/* 0x1000ebb2 */ LDATA extern char public_1000ebb2; // OOB+0x05d2
/* 0x1000ebb3 */ LDATA extern char public_1000ebb3; // OOB+0x05d3
/* 0x1000ebb4 */ LDATA extern char public_1000ebb4; // OOB+0x05d4
/* 0x1000ebb5 */ LDATA extern char public_1000ebb5; // OOB+0x05d5
/* 0x1000ebb6 */ LDATA extern char public_1000ebb6; // OOB+0x05d6
/* 0x1000ebb7 */ LDATA extern char public_1000ebb7; // OOB+0x05d7
/* 0x1000ebb8 */ LDATA extern char public_1000ebb8; // OOB+0x05d8
/* 0x1000ebb9 */ LDATA extern char public_1000ebb9; // OOB+0x05d9
/* 0x1000ebba */ LDATA extern char public_1000ebba; // OOB+0x05da
/* 0x1000ebbb */ LDATA extern char public_1000ebbb; // OOB+0x05db
/* 0x1000ebbc */ LDATA extern char public_1000ebbc; // OOB+0x05dc
/* 0x1000ebbd */ LDATA extern char public_1000ebbd; // OOB+0x05dd
/* 0x1000ebbe */ LDATA extern char public_1000ebbe; // OOB+0x05de
/* 0x1000ebbf */ LDATA extern char public_1000ebbf; // OOB+0x05df
/* 0x1000ebc0 */ LDATA extern char public_1000ebc0; // OOB+0x05e0
/* 0x1000ebc1 */ LDATA extern char public_1000ebc1; // OOB+0x05e1
/* 0x1000ebc2 */ LDATA extern char public_1000ebc2; // OOB+0x05e2
/* 0x1000ebc3 */ LDATA extern char public_1000ebc3; // OOB+0x05e3
/* 0x1000ebc4 */ LDATA extern char public_1000ebc4; // OOB+0x05e4
/* 0x1000ebc5 */ LDATA extern char public_1000ebc5; // OOB+0x05e5
/* 0x1000ebc6 */ LDATA extern char public_1000ebc6; // OOB+0x05e6
/* 0x1000ebc7 */ LDATA extern char public_1000ebc7; // OOB+0x05e7
/* 0x1000ebc8 */ LDATA extern char public_1000ebc8; // OOB+0x05e8
/* 0x1000ebc9 */ LDATA extern char public_1000ebc9; // OOB+0x05e9
/* 0x1000ebca */ LDATA extern char public_1000ebca; // OOB+0x05ea
/* 0x1000ebcb */ LDATA extern char public_1000ebcb; // OOB+0x05eb
/* 0x1000ebcc */ LDATA extern char public_1000ebcc; // OOB+0x05ec
/* 0x1000ebcd */ LDATA extern char public_1000ebcd; // OOB+0x05ed
/* 0x1000ebce */ LDATA extern char public_1000ebce; // OOB+0x05ee
/* 0x1000ebcf */ LDATA extern char public_1000ebcf; // OOB+0x05ef
/* 0x1000ebd0 */ LDATA extern char public_1000ebd0; // OOB+0x05f0
/* 0x1000ebd1 */ LDATA extern char public_1000ebd1; // OOB+0x05f1
/* 0x1000ebd2 */ LDATA extern char public_1000ebd2; // OOB+0x05f2
/* 0x1000ebd3 */ LDATA extern char public_1000ebd3; // OOB+0x05f3
/* 0x1000ebd4 */ LDATA extern char public_1000ebd4; // OOB+0x05f4
/* 0x1000ebd5 */ LDATA extern char public_1000ebd5; // OOB+0x05f5
/* 0x1000ebd6 */ LDATA extern char public_1000ebd6; // OOB+0x05f6
/* 0x1000ebd7 */ LDATA extern char public_1000ebd7; // OOB+0x05f7
/* 0x1000ebd8 */ LDATA extern char public_1000ebd8; // OOB+0x05f8
/* 0x1000ebd9 */ LDATA extern char public_1000ebd9; // OOB+0x05f9
/* 0x1000ebda */ LDATA extern char public_1000ebda; // OOB+0x05fa
/* 0x1000ebdb */ LDATA extern char public_1000ebdb; // OOB+0x05fb
/* 0x1000ebdc */ LDATA extern char public_1000ebdc; // OOB+0x05fc
/* 0x1000ebdd */ LDATA extern char public_1000ebdd; // OOB+0x05fd
/* 0x1000ebde */ LDATA extern char public_1000ebde; // OOB+0x05fe
/* 0x1000ebdf */ LDATA extern char public_1000ebdf; // OOB+0x05ff
/* 0x1000ebe0 */ LDATA extern char public_1000ebe0; // OOB+0x0600
/* 0x1000ebe1 */ LDATA extern char public_1000ebe1; // OOB+0x0601
/* 0x1000ebe2 */ LDATA extern char public_1000ebe2; // OOB+0x0602
/* 0x1000ebe3 */ LDATA extern char public_1000ebe3; // OOB+0x0603
/* 0x1000ebe4 */ LDATA extern char public_1000ebe4; // OOB+0x0604
/* 0x1000ebe5 */ LDATA extern char public_1000ebe5; // OOB+0x0605
/* 0x1000ebe6 */ LDATA extern char public_1000ebe6; // OOB+0x0606
/* 0x1000ebe7 */ LDATA extern char public_1000ebe7; // OOB+0x0607
/* 0x1000ebe8 */ LDATA extern char public_1000ebe8; // OOB+0x0608
/* 0x1000ebe9 */ LDATA extern char public_1000ebe9; // OOB+0x0609
/* 0x1000ebea */ LDATA extern char public_1000ebea; // OOB+0x060a
/* 0x1000ebeb */ LDATA extern char public_1000ebeb; // OOB+0x060b
/* 0x1000ebec */ LDATA extern char public_1000ebec; // OOB+0x060c
/* 0x1000ebed */ LDATA extern char public_1000ebed; // OOB+0x060d
/* 0x1000ebee */ LDATA extern char public_1000ebee; // OOB+0x060e
/* 0x1000ebef */ LDATA extern char public_1000ebef; // OOB+0x060f
/* 0x1000ebf0 */ LDATA extern char public_1000ebf0; // OOB+0x0610
/* 0x1000ebf1 */ LDATA extern char public_1000ebf1; // OOB+0x0611
/* 0x1000ebf2 */ LDATA extern char public_1000ebf2; // OOB+0x0612
/* 0x1000ebf3 */ LDATA extern char public_1000ebf3; // OOB+0x0613
/* 0x1000ebf4 */ LDATA extern char public_1000ebf4; // OOB+0x0614
/* 0x1000ebf5 */ LDATA extern char public_1000ebf5; // OOB+0x0615
/* 0x1000ebf6 */ LDATA extern char public_1000ebf6; // OOB+0x0616
/* 0x1000ebf7 */ LDATA extern char public_1000ebf7; // OOB+0x0617
/* 0x1000ebf8 */ LDATA extern char public_1000ebf8; // OOB+0x0618
/* 0x1000ebf9 */ LDATA extern char public_1000ebf9; // OOB+0x0619
/* 0x1000ebfa */ LDATA extern char public_1000ebfa; // OOB+0x061a
/* 0x1000ebfb */ LDATA extern char public_1000ebfb; // OOB+0x061b
/* 0x1000ebfc */ LDATA extern char public_1000ebfc; // OOB+0x061c
/* 0x1000ebfd */ LDATA extern char public_1000ebfd; // OOB+0x061d
/* 0x1000ebfe */ LDATA extern char public_1000ebfe; // OOB+0x061e
/* 0x1000ebff */ LDATA extern char public_1000ebff; // OOB+0x061f
/* 0x1000ec00 */ LDATA extern char public_1000ec00; // OOB+0x0620
/* 0x1000ec01 */ LDATA extern char public_1000ec01; // OOB+0x0621
/* 0x1000ec02 */ LDATA extern char public_1000ec02; // OOB+0x0622
/* 0x1000ec03 */ LDATA extern char public_1000ec03; // OOB+0x0623
/* 0x1000ec04 */ LDATA extern char public_1000ec04; // OOB+0x0624
/* 0x1000ec05 */ LDATA extern char public_1000ec05; // OOB+0x0625
/* 0x1000ec06 */ LDATA extern char public_1000ec06; // OOB+0x0626
/* 0x1000ec07 */ LDATA extern char public_1000ec07; // OOB+0x0627
/* 0x1000ec08 */ LDATA extern char public_1000ec08; // OOB+0x0628
/* 0x1000ec09 */ LDATA extern char public_1000ec09; // OOB+0x0629
/* 0x1000ec0a */ LDATA extern char public_1000ec0a; // OOB+0x062a
/* 0x1000ec0b */ LDATA extern char public_1000ec0b; // OOB+0x062b
/* 0x1000ec0c */ LDATA extern char public_1000ec0c; // OOB+0x062c
/* 0x1000ec0d */ LDATA extern char public_1000ec0d; // OOB+0x062d
/* 0x1000ec0e */ LDATA extern char public_1000ec0e; // OOB+0x062e
/* 0x1000ec0f */ LDATA extern char public_1000ec0f; // OOB+0x062f
/* 0x1000ec10 */ LDATA extern char public_1000ec10; // OOB+0x0630
/* 0x1000ec11 */ LDATA extern char public_1000ec11; // OOB+0x0631
/* 0x1000ec12 */ LDATA extern char public_1000ec12; // OOB+0x0632
/* 0x1000ec13 */ LDATA extern char public_1000ec13; // OOB+0x0633
/* 0x1000ec14 */ LDATA extern char public_1000ec14; // OOB+0x0634
/* 0x1000ec15 */ LDATA extern char public_1000ec15; // OOB+0x0635
/* 0x1000ec16 */ LDATA extern char public_1000ec16; // OOB+0x0636
/* 0x1000ec17 */ LDATA extern char public_1000ec17; // OOB+0x0637
/* 0x1000ec18 */ LDATA extern char public_1000ec18; // OOB+0x0638
/* 0x1000ec19 */ LDATA extern char public_1000ec19; // OOB+0x0639
/* 0x1000ec1a */ LDATA extern char public_1000ec1a; // OOB+0x063a
/* 0x1000ec1b */ LDATA extern char public_1000ec1b; // OOB+0x063b
/* 0x1000ec1c */ LDATA extern char public_1000ec1c; // OOB+0x063c
/* 0x1000ec1d */ LDATA extern char public_1000ec1d; // OOB+0x063d
/* 0x1000ec1e */ LDATA extern char public_1000ec1e; // OOB+0x063e
/* 0x1000ec1f */ LDATA extern char public_1000ec1f; // OOB+0x063f
/* 0x1000ec20 */ LDATA extern char public_1000ec20; // OOB+0x0640
/* 0x1000ec21 */ LDATA extern char public_1000ec21; // OOB+0x0641
/* 0x1000ec22 */ LDATA extern char public_1000ec22; // OOB+0x0642
/* 0x1000ec23 */ LDATA extern char public_1000ec23; // OOB+0x0643
/* 0x1000ec24 */ LDATA extern char public_1000ec24; // OOB+0x0644
/* 0x1000ec25 */ LDATA extern char public_1000ec25; // OOB+0x0645
/* 0x1000ec26 */ LDATA extern char public_1000ec26; // OOB+0x0646
/* 0x1000ec27 */ LDATA extern char public_1000ec27; // OOB+0x0647
/* 0x1000ec28 */ LDATA extern char public_1000ec28; // OOB+0x0648
/* 0x1000ec29 */ LDATA extern char public_1000ec29; // OOB+0x0649
/* 0x1000ec2a */ LDATA extern char public_1000ec2a; // OOB+0x064a
/* 0x1000ec2b */ LDATA extern char public_1000ec2b; // OOB+0x064b
/* 0x1000ec2c */ LDATA extern char public_1000ec2c; // OOB+0x064c
/* 0x1000ec2d */ LDATA extern char public_1000ec2d; // OOB+0x064d
/* 0x1000ec2e */ LDATA extern char public_1000ec2e; // OOB+0x064e
/* 0x1000ec2f */ LDATA extern char public_1000ec2f; // OOB+0x064f
/* 0x1000ec30 */ LDATA extern char public_1000ec30; // OOB+0x0650
/* 0x1000ec31 */ LDATA extern char public_1000ec31; // OOB+0x0651
/* 0x1000ec32 */ LDATA extern char public_1000ec32; // OOB+0x0652
/* 0x1000ec33 */ LDATA extern char public_1000ec33; // OOB+0x0653
/* 0x1000ec34 */ LDATA extern char public_1000ec34; // OOB+0x0654
/* 0x1000ec35 */ LDATA extern char public_1000ec35; // OOB+0x0655
/* 0x1000ec36 */ LDATA extern char public_1000ec36; // OOB+0x0656
/* 0x1000ec37 */ LDATA extern char public_1000ec37; // OOB+0x0657
/* 0x1000ec38 */ LDATA extern char public_1000ec38; // OOB+0x0658
/* 0x1000ec39 */ LDATA extern char public_1000ec39; // OOB+0x0659
/* 0x1000ec3a */ LDATA extern char public_1000ec3a; // OOB+0x065a
/* 0x1000ec3b */ LDATA extern char public_1000ec3b; // OOB+0x065b
/* 0x1000ec3c */ LDATA extern char public_1000ec3c; // OOB+0x065c
/* 0x1000ec3d */ LDATA extern char public_1000ec3d; // OOB+0x065d
/* 0x1000ec3e */ LDATA extern char public_1000ec3e; // OOB+0x065e
/* 0x1000ec3f */ LDATA extern char public_1000ec3f; // OOB+0x065f
/* 0x1000ec40 */ LDATA extern char public_1000ec40; // OOB+0x0660
/* 0x1000ec41 */ LDATA extern char public_1000ec41; // OOB+0x0661
/* 0x1000ec42 */ LDATA extern char public_1000ec42; // OOB+0x0662
/* 0x1000ec43 */ LDATA extern char public_1000ec43; // OOB+0x0663
/* 0x1000ec44 */ LDATA extern char public_1000ec44; // OOB+0x0664
/* 0x1000ec45 */ LDATA extern char public_1000ec45; // OOB+0x0665
/* 0x1000ec46 */ LDATA extern char public_1000ec46; // OOB+0x0666
/* 0x1000ec47 */ LDATA extern char public_1000ec47; // OOB+0x0667
/* 0x1000ec48 */ LDATA extern char public_1000ec48; // OOB+0x0668
/* 0x1000ec49 */ LDATA extern char public_1000ec49; // OOB+0x0669
/* 0x1000ec4a */ LDATA extern char public_1000ec4a; // OOB+0x066a
/* 0x1000ec4b */ LDATA extern char public_1000ec4b; // OOB+0x066b
/* 0x1000ec4c */ LDATA extern char public_1000ec4c; // OOB+0x066c
/* 0x1000ec4d */ LDATA extern char public_1000ec4d; // OOB+0x066d
/* 0x1000ec4e */ LDATA extern char public_1000ec4e; // OOB+0x066e
/* 0x1000ec4f */ LDATA extern char public_1000ec4f; // OOB+0x066f
/* 0x1000ec50 */ LDATA extern char public_1000ec50; // OOB+0x0670
/* 0x1000ec51 */ LDATA extern char public_1000ec51; // OOB+0x0671
/* 0x1000ec52 */ LDATA extern char public_1000ec52; // OOB+0x0672
/* 0x1000ec53 */ LDATA extern char public_1000ec53; // OOB+0x0673
/* 0x1000ec54 */ LDATA extern char public_1000ec54; // OOB+0x0674
/* 0x1000ec55 */ LDATA extern char public_1000ec55; // OOB+0x0675
/* 0x1000ec56 */ LDATA extern char public_1000ec56; // OOB+0x0676
/* 0x1000ec57 */ LDATA extern char public_1000ec57; // OOB+0x0677
/* 0x1000ec58 */ LDATA extern char public_1000ec58; // OOB+0x0678
/* 0x1000ec59 */ LDATA extern char public_1000ec59; // OOB+0x0679
/* 0x1000ec5a */ LDATA extern char public_1000ec5a; // OOB+0x067a
/* 0x1000ec5b */ LDATA extern char public_1000ec5b; // OOB+0x067b
/* 0x1000ec5c */ LDATA extern char public_1000ec5c; // OOB+0x067c
/* 0x1000ec5d */ LDATA extern char public_1000ec5d; // OOB+0x067d
/* 0x1000ec5e */ LDATA extern char public_1000ec5e; // OOB+0x067e
/* 0x1000ec5f */ LDATA extern char public_1000ec5f; // OOB+0x067f
/* 0x1000ec60 */ LDATA extern char public_1000ec60; // OOB+0x0680
/* 0x1000ec61 */ LDATA extern char public_1000ec61; // OOB+0x0681
/* 0x1000ec62 */ LDATA extern char public_1000ec62; // OOB+0x0682
/* 0x1000ec63 */ LDATA extern char public_1000ec63; // OOB+0x0683
/* 0x1000ec64 */ LDATA extern char public_1000ec64; // OOB+0x0684
/* 0x1000ec65 */ LDATA extern char public_1000ec65; // OOB+0x0685
/* 0x1000ec66 */ LDATA extern char public_1000ec66; // OOB+0x0686
/* 0x1000ec67 */ LDATA extern char public_1000ec67; // OOB+0x0687
/* 0x1000ec68 */ LDATA extern char public_1000ec68; // OOB+0x0688
/* 0x1000ec69 */ LDATA extern char public_1000ec69; // OOB+0x0689
/* 0x1000ec6a */ LDATA extern char public_1000ec6a; // OOB+0x068a
/* 0x1000ec6b */ LDATA extern char public_1000ec6b; // OOB+0x068b
/* 0x1000ec6c */ LDATA extern char public_1000ec6c; // OOB+0x068c
/* 0x1000ec6d */ LDATA extern char public_1000ec6d; // OOB+0x068d
/* 0x1000ec6e */ LDATA extern char public_1000ec6e; // OOB+0x068e
/* 0x1000ec6f */ LDATA extern char public_1000ec6f; // OOB+0x068f
/* 0x1000ec70 */ LDATA extern char public_1000ec70; // OOB+0x0690
/* 0x1000ec71 */ LDATA extern char public_1000ec71; // OOB+0x0691
/* 0x1000ec72 */ LDATA extern char public_1000ec72; // OOB+0x0692
/* 0x1000ec73 */ LDATA extern char public_1000ec73; // OOB+0x0693
/* 0x1000ec74 */ LDATA extern char public_1000ec74; // OOB+0x0694
/* 0x1000ec75 */ LDATA extern char public_1000ec75; // OOB+0x0695
/* 0x1000ec76 */ LDATA extern char public_1000ec76; // OOB+0x0696
/* 0x1000ec77 */ LDATA extern char public_1000ec77; // OOB+0x0697
/* 0x1000ec78 */ LDATA extern char public_1000ec78; // OOB+0x0698
/* 0x1000ec79 */ LDATA extern char public_1000ec79; // OOB+0x0699
/* 0x1000ec7a */ LDATA extern char public_1000ec7a; // OOB+0x069a
/* 0x1000ec7b */ LDATA extern char public_1000ec7b; // OOB+0x069b
/* 0x1000ec7c */ LDATA extern char public_1000ec7c; // OOB+0x069c
/* 0x1000ec7d */ LDATA extern char public_1000ec7d; // OOB+0x069d
/* 0x1000ec7e */ LDATA extern char public_1000ec7e; // OOB+0x069e
/* 0x1000ec7f */ LDATA extern char public_1000ec7f; // OOB+0x069f
/* 0x1000ec80 */ LDATA extern char public_1000ec80; // OOB+0x06a0
/* 0x1000ec81 */ LDATA extern char public_1000ec81; // OOB+0x06a1
/* 0x1000ec82 */ LDATA extern char public_1000ec82; // OOB+0x06a2
/* 0x1000ec83 */ LDATA extern char public_1000ec83; // OOB+0x06a3
/* 0x1000ec84 */ LDATA extern char public_1000ec84; // OOB+0x06a4
/* 0x1000ec85 */ LDATA extern char public_1000ec85; // OOB+0x06a5
/* 0x1000ec86 */ LDATA extern char public_1000ec86; // OOB+0x06a6
/* 0x1000ec87 */ LDATA extern char public_1000ec87; // OOB+0x06a7
/* 0x1000ec88 */ LDATA extern char public_1000ec88; // OOB+0x06a8
/* 0x1000ec89 */ LDATA extern char public_1000ec89; // OOB+0x06a9
/* 0x1000ec8a */ LDATA extern char public_1000ec8a; // OOB+0x06aa
/* 0x1000ec8b */ LDATA extern char public_1000ec8b; // OOB+0x06ab
/* 0x1000ec8c */ LDATA extern char public_1000ec8c; // OOB+0x06ac
/* 0x1000ec8d */ LDATA extern char public_1000ec8d; // OOB+0x06ad
/* 0x1000ec8e */ LDATA extern char public_1000ec8e; // OOB+0x06ae
/* 0x1000ec8f */ LDATA extern char public_1000ec8f; // OOB+0x06af
/* 0x1000ec90 */ LDATA extern char public_1000ec90; // OOB+0x06b0
/* 0x1000ec91 */ LDATA extern char public_1000ec91; // OOB+0x06b1
/* 0x1000ec92 */ LDATA extern char public_1000ec92; // OOB+0x06b2
/* 0x1000ec93 */ LDATA extern char public_1000ec93; // OOB+0x06b3
/* 0x1000ec94 */ LDATA extern char public_1000ec94; // OOB+0x06b4
/* 0x1000ec95 */ LDATA extern char public_1000ec95; // OOB+0x06b5
/* 0x1000ec96 */ LDATA extern char public_1000ec96; // OOB+0x06b6
/* 0x1000ec97 */ LDATA extern char public_1000ec97; // OOB+0x06b7
/* 0x1000ec98 */ LDATA extern char public_1000ec98; // OOB+0x06b8
/* 0x1000ec99 */ LDATA extern char public_1000ec99; // OOB+0x06b9
/* 0x1000ec9a */ LDATA extern char public_1000ec9a; // OOB+0x06ba
/* 0x1000ec9b */ LDATA extern char public_1000ec9b; // OOB+0x06bb
/* 0x1000ec9c */ LDATA extern char public_1000ec9c; // OOB+0x06bc
/* 0x1000ec9d */ LDATA extern char public_1000ec9d; // OOB+0x06bd
/* 0x1000ec9e */ LDATA extern char public_1000ec9e; // OOB+0x06be
/* 0x1000ec9f */ LDATA extern char public_1000ec9f; // OOB+0x06bf
/* 0x1000eca0 */ LDATA extern char public_1000eca0; // OOB+0x06c0
/* 0x1000eca1 */ LDATA extern char public_1000eca1; // OOB+0x06c1
/* 0x1000eca2 */ LDATA extern char public_1000eca2; // OOB+0x06c2
/* 0x1000eca3 */ LDATA extern char public_1000eca3; // OOB+0x06c3
/* 0x1000eca4 */ LDATA extern char public_1000eca4; // OOB+0x06c4
/* 0x1000eca5 */ LDATA extern char public_1000eca5; // OOB+0x06c5
/* 0x1000eca6 */ LDATA extern char public_1000eca6; // OOB+0x06c6
/* 0x1000eca7 */ LDATA extern char public_1000eca7; // OOB+0x06c7
/* 0x1000eca8 */ LDATA extern char public_1000eca8; // OOB+0x06c8
/* 0x1000eca9 */ LDATA extern char public_1000eca9; // OOB+0x06c9
/* 0x1000ecaa */ LDATA extern char public_1000ecaa; // OOB+0x06ca
/* 0x1000ecab */ LDATA extern char public_1000ecab; // OOB+0x06cb
/* 0x1000ecac */ LDATA extern char public_1000ecac; // OOB+0x06cc
/* 0x1000ecad */ LDATA extern char public_1000ecad; // OOB+0x06cd
/* 0x1000ecae */ LDATA extern char public_1000ecae; // OOB+0x06ce
/* 0x1000ecaf */ LDATA extern char public_1000ecaf; // OOB+0x06cf
/* 0x1000ecb0 */ LDATA extern char public_1000ecb0; // OOB+0x06d0
/* 0x1000ecb1 */ LDATA extern char public_1000ecb1; // OOB+0x06d1
/* 0x1000ecb2 */ LDATA extern char public_1000ecb2; // OOB+0x06d2
/* 0x1000ecb3 */ LDATA extern char public_1000ecb3; // OOB+0x06d3
/* 0x1000ecb4 */ LDATA extern char public_1000ecb4; // OOB+0x06d4
/* 0x1000ecb5 */ LDATA extern char public_1000ecb5; // OOB+0x06d5
/* 0x1000ecb6 */ LDATA extern char public_1000ecb6; // OOB+0x06d6
/* 0x1000ecb7 */ LDATA extern char public_1000ecb7; // OOB+0x06d7
/* 0x1000ecb8 */ LDATA extern char public_1000ecb8; // OOB+0x06d8
/* 0x1000ecb9 */ LDATA extern char public_1000ecb9; // OOB+0x06d9
/* 0x1000ecba */ LDATA extern char public_1000ecba; // OOB+0x06da
/* 0x1000ecbb */ LDATA extern char public_1000ecbb; // OOB+0x06db
/* 0x1000ecbc */ LDATA extern char public_1000ecbc; // OOB+0x06dc
/* 0x1000ecbd */ LDATA extern char public_1000ecbd; // OOB+0x06dd
/* 0x1000ecbe */ LDATA extern char public_1000ecbe; // OOB+0x06de
/* 0x1000ecbf */ LDATA extern char public_1000ecbf; // OOB+0x06df
/* 0x1000ecc0 */ LDATA extern char public_1000ecc0; // OOB+0x06e0
/* 0x1000ecc1 */ LDATA extern char public_1000ecc1; // OOB+0x06e1
/* 0x1000ecc2 */ LDATA extern char public_1000ecc2; // OOB+0x06e2
/* 0x1000ecc3 */ LDATA extern char public_1000ecc3; // OOB+0x06e3
/* 0x1000ecc4 */ LDATA extern char public_1000ecc4; // OOB+0x06e4
/* 0x1000ecc5 */ LDATA extern char public_1000ecc5; // OOB+0x06e5
/* 0x1000ecc6 */ LDATA extern char public_1000ecc6; // OOB+0x06e6
/* 0x1000ecc7 */ LDATA extern char public_1000ecc7; // OOB+0x06e7
/* 0x1000ecc8 */ LDATA extern char public_1000ecc8; // OOB+0x06e8
/* 0x1000ecc9 */ LDATA extern char public_1000ecc9; // OOB+0x06e9
/* 0x1000ecca */ LDATA extern char public_1000ecca; // OOB+0x06ea
/* 0x1000eccb */ LDATA extern char public_1000eccb; // OOB+0x06eb
/* 0x1000eccc */ LDATA extern char public_1000eccc; // OOB+0x06ec
/* 0x1000eccd */ LDATA extern char public_1000eccd; // OOB+0x06ed
/* 0x1000ecce */ LDATA extern char public_1000ecce; // OOB+0x06ee
/* 0x1000eccf */ LDATA extern char public_1000eccf; // OOB+0x06ef
/* 0x1000ecd0 */ LDATA extern char public_1000ecd0; // OOB+0x06f0
/* 0x1000ecd1 */ LDATA extern char public_1000ecd1; // OOB+0x06f1
/* 0x1000ecd2 */ LDATA extern char public_1000ecd2; // OOB+0x06f2
/* 0x1000ecd3 */ LDATA extern char public_1000ecd3; // OOB+0x06f3
/* 0x1000ecd4 */ LDATA extern char public_1000ecd4; // OOB+0x06f4
/* 0x1000ecd5 */ LDATA extern char public_1000ecd5; // OOB+0x06f5
/* 0x1000ecd6 */ LDATA extern char public_1000ecd6; // OOB+0x06f6
/* 0x1000ecd7 */ LDATA extern char public_1000ecd7; // OOB+0x06f7
/* 0x1000ecd8 */ LDATA extern char public_1000ecd8; // OOB+0x06f8
/* 0x1000ecd9 */ LDATA extern char public_1000ecd9; // OOB+0x06f9
/* 0x1000ecda */ LDATA extern char public_1000ecda; // OOB+0x06fa
/* 0x1000ecdb */ LDATA extern char public_1000ecdb; // OOB+0x06fb
/* 0x1000ecdc */ LDATA extern char public_1000ecdc; // OOB+0x06fc
/* 0x1000ecdd */ LDATA extern char public_1000ecdd; // OOB+0x06fd
/* 0x1000ecde */ LDATA extern char public_1000ecde; // OOB+0x06fe
/* 0x1000ecdf */ LDATA extern char public_1000ecdf; // OOB+0x06ff
/* 0x1000ece0 */ LDATA extern char public_1000ece0; // OOB+0x0700
/* 0x1000ece1 */ LDATA extern char public_1000ece1; // OOB+0x0701
/* 0x1000ece2 */ LDATA extern char public_1000ece2; // OOB+0x0702
/* 0x1000ece3 */ LDATA extern char public_1000ece3; // OOB+0x0703
/* 0x1000ece4 */ LDATA extern char public_1000ece4; // OOB+0x0704
/* 0x1000ece5 */ LDATA extern char public_1000ece5; // OOB+0x0705
/* 0x1000ece6 */ LDATA extern char public_1000ece6; // OOB+0x0706
/* 0x1000ece7 */ LDATA extern char public_1000ece7; // OOB+0x0707
/* 0x1000ece8 */ LDATA extern char public_1000ece8; // OOB+0x0708
/* 0x1000ece9 */ LDATA extern char public_1000ece9; // OOB+0x0709
/* 0x1000ecea */ LDATA extern char public_1000ecea; // OOB+0x070a
/* 0x1000eceb */ LDATA extern char public_1000eceb; // OOB+0x070b
/* 0x1000ecec */ LDATA extern char public_1000ecec; // OOB+0x070c
/* 0x1000eced */ LDATA extern char public_1000eced; // OOB+0x070d
/* 0x1000ecee */ LDATA extern char public_1000ecee; // OOB+0x070e
/* 0x1000ecef */ LDATA extern char public_1000ecef; // OOB+0x070f
/* 0x1000ecf0 */ LDATA extern char public_1000ecf0; // OOB+0x0710
/* 0x1000ecf1 */ LDATA extern char public_1000ecf1; // OOB+0x0711
/* 0x1000ecf2 */ LDATA extern char public_1000ecf2; // OOB+0x0712
/* 0x1000ecf3 */ LDATA extern char public_1000ecf3; // OOB+0x0713
/* 0x1000ecf4 */ LDATA extern char public_1000ecf4; // OOB+0x0714
/* 0x1000ecf5 */ LDATA extern char public_1000ecf5; // OOB+0x0715
/* 0x1000ecf6 */ LDATA extern char public_1000ecf6; // OOB+0x0716
/* 0x1000ecf7 */ LDATA extern char public_1000ecf7; // OOB+0x0717
/* 0x1000ecf8 */ LDATA extern char public_1000ecf8; // OOB+0x0718
/* 0x1000ecf9 */ LDATA extern char public_1000ecf9; // OOB+0x0719
/* 0x1000ecfa */ LDATA extern char public_1000ecfa; // OOB+0x071a
/* 0x1000ecfb */ LDATA extern char public_1000ecfb; // OOB+0x071b
/* 0x1000ecfc */ LDATA extern char public_1000ecfc; // OOB+0x071c
/* 0x1000ecfd */ LDATA extern char public_1000ecfd; // OOB+0x071d
/* 0x1000ecfe */ LDATA extern char public_1000ecfe; // OOB+0x071e
/* 0x1000ecff */ LDATA extern char public_1000ecff; // OOB+0x071f
/* 0x1000ed00 */ LDATA extern char public_1000ed00; // OOB+0x0720
/* 0x1000ed01 */ LDATA extern char public_1000ed01; // OOB+0x0721
/* 0x1000ed02 */ LDATA extern char public_1000ed02; // OOB+0x0722
/* 0x1000ed03 */ LDATA extern char public_1000ed03; // OOB+0x0723
/* 0x1000ed04 */ LDATA extern char public_1000ed04; // OOB+0x0724
/* 0x1000ed05 */ LDATA extern char public_1000ed05; // OOB+0x0725
/* 0x1000ed06 */ LDATA extern char public_1000ed06; // OOB+0x0726
/* 0x1000ed07 */ LDATA extern char public_1000ed07; // OOB+0x0727
/* 0x1000ed08 */ LDATA extern char public_1000ed08; // OOB+0x0728
/* 0x1000ed09 */ LDATA extern char public_1000ed09; // OOB+0x0729
/* 0x1000ed0a */ LDATA extern char public_1000ed0a; // OOB+0x072a
/* 0x1000ed0b */ LDATA extern char public_1000ed0b; // OOB+0x072b
/* 0x1000ed0c */ LDATA extern char public_1000ed0c; // OOB+0x072c
/* 0x1000ed0d */ LDATA extern char public_1000ed0d; // OOB+0x072d
/* 0x1000ed0e */ LDATA extern char public_1000ed0e; // OOB+0x072e
/* 0x1000ed0f */ LDATA extern char public_1000ed0f; // OOB+0x072f
/* 0x1000ed10 */ LDATA extern char public_1000ed10; // OOB+0x0730
/* 0x1000ed11 */ LDATA extern char public_1000ed11; // OOB+0x0731
/* 0x1000ed12 */ LDATA extern char public_1000ed12; // OOB+0x0732
/* 0x1000ed13 */ LDATA extern char public_1000ed13; // OOB+0x0733
/* 0x1000ed14 */ LDATA extern char public_1000ed14; // OOB+0x0734
/* 0x1000ed15 */ LDATA extern char public_1000ed15; // OOB+0x0735
/* 0x1000ed16 */ LDATA extern char public_1000ed16; // OOB+0x0736
/* 0x1000ed17 */ LDATA extern char public_1000ed17; // OOB+0x0737
/* 0x1000ed18 */ LDATA extern char public_1000ed18; // OOB+0x0738
/* 0x1000ed19 */ LDATA extern char public_1000ed19; // OOB+0x0739
/* 0x1000ed1a */ LDATA extern char public_1000ed1a; // OOB+0x073a
/* 0x1000ed1b */ LDATA extern char public_1000ed1b; // OOB+0x073b
/* 0x1000ed1c */ LDATA extern char public_1000ed1c; // OOB+0x073c
/* 0x1000ed1d */ LDATA extern char public_1000ed1d; // OOB+0x073d
/* 0x1000ed1e */ LDATA extern char public_1000ed1e; // OOB+0x073e
/* 0x1000ed1f */ LDATA extern char public_1000ed1f; // OOB+0x073f
/* 0x1000ed20 */ LDATA extern char public_1000ed20; // OOB+0x0740
/* 0x1000ed21 */ LDATA extern char public_1000ed21; // OOB+0x0741
/* 0x1000ed22 */ LDATA extern char public_1000ed22; // OOB+0x0742
/* 0x1000ed23 */ LDATA extern char public_1000ed23; // OOB+0x0743
/* 0x1000ed24 */ LDATA extern char public_1000ed24; // OOB+0x0744
/* 0x1000ed25 */ LDATA extern char public_1000ed25; // OOB+0x0745
/* 0x1000ed26 */ LDATA extern char public_1000ed26; // OOB+0x0746
/* 0x1000ed27 */ LDATA extern char public_1000ed27; // OOB+0x0747
/* 0x1000ed28 */ LDATA extern char public_1000ed28; // OOB+0x0748
/* 0x1000ed29 */ LDATA extern char public_1000ed29; // OOB+0x0749
/* 0x1000ed2a */ LDATA extern char public_1000ed2a; // OOB+0x074a
/* 0x1000ed2b */ LDATA extern char public_1000ed2b; // OOB+0x074b
/* 0x1000ed2c */ LDATA extern char public_1000ed2c; // OOB+0x074c
/* 0x1000ed2d */ LDATA extern char public_1000ed2d; // OOB+0x074d
/* 0x1000ed2e */ LDATA extern char public_1000ed2e; // OOB+0x074e
/* 0x1000ed2f */ LDATA extern char public_1000ed2f; // OOB+0x074f
/* 0x1000ed30 */ LDATA extern char public_1000ed30; // OOB+0x0750
/* 0x1000ed31 */ LDATA extern char public_1000ed31; // OOB+0x0751
/* 0x1000ed32 */ LDATA extern char public_1000ed32; // OOB+0x0752
/* 0x1000ed33 */ LDATA extern char public_1000ed33; // OOB+0x0753
/* 0x1000ed34 */ LDATA extern char public_1000ed34; // OOB+0x0754
/* 0x1000ed35 */ LDATA extern char public_1000ed35; // OOB+0x0755
/* 0x1000ed36 */ LDATA extern char public_1000ed36; // OOB+0x0756
/* 0x1000ed37 */ LDATA extern char public_1000ed37; // OOB+0x0757
/* 0x1000ed38 */ LDATA extern char public_1000ed38; // OOB+0x0758
/* 0x1000ed39 */ LDATA extern char public_1000ed39; // OOB+0x0759
/* 0x1000ed3a */ LDATA extern char public_1000ed3a; // OOB+0x075a
/* 0x1000ed3b */ LDATA extern char public_1000ed3b; // OOB+0x075b
/* 0x1000ed3c */ LDATA extern char public_1000ed3c; // OOB+0x075c
/* 0x1000ed3d */ LDATA extern char public_1000ed3d; // OOB+0x075d
/* 0x1000ed3e */ LDATA extern char public_1000ed3e; // OOB+0x075e
/* 0x1000ed3f */ LDATA extern char public_1000ed3f; // OOB+0x075f
/* 0x1000ed40 */ LDATA extern char public_1000ed40; // OOB+0x0760
/* 0x1000ed41 */ LDATA extern char public_1000ed41; // OOB+0x0761
/* 0x1000ed42 */ LDATA extern char public_1000ed42; // OOB+0x0762
/* 0x1000ed43 */ LDATA extern char public_1000ed43; // OOB+0x0763
/* 0x1000ed44 */ LDATA extern char public_1000ed44; // OOB+0x0764
/* 0x1000ed45 */ LDATA extern char public_1000ed45; // OOB+0x0765
/* 0x1000ed46 */ LDATA extern char public_1000ed46; // OOB+0x0766
/* 0x1000ed47 */ LDATA extern char public_1000ed47; // OOB+0x0767
/* 0x1000ed48 */ LDATA extern char public_1000ed48; // OOB+0x0768
/* 0x1000ed49 */ LDATA extern char public_1000ed49; // OOB+0x0769
/* 0x1000ed4a */ LDATA extern char public_1000ed4a; // OOB+0x076a
/* 0x1000ed4b */ LDATA extern char public_1000ed4b; // OOB+0x076b
/* 0x1000ed4c */ LDATA extern char public_1000ed4c; // OOB+0x076c
/* 0x1000ed4d */ LDATA extern char public_1000ed4d; // OOB+0x076d
/* 0x1000ed4e */ LDATA extern char public_1000ed4e; // OOB+0x076e
/* 0x1000ed4f */ LDATA extern char public_1000ed4f; // OOB+0x076f
/* 0x1000ed50 */ LDATA extern char public_1000ed50; // OOB+0x0770
/* 0x1000ed51 */ LDATA extern char public_1000ed51; // OOB+0x0771
/* 0x1000ed52 */ LDATA extern char public_1000ed52; // OOB+0x0772
/* 0x1000ed53 */ LDATA extern char public_1000ed53; // OOB+0x0773
/* 0x1000ed54 */ LDATA extern char public_1000ed54; // OOB+0x0774
/* 0x1000ed55 */ LDATA extern char public_1000ed55; // OOB+0x0775
/* 0x1000ed56 */ LDATA extern char public_1000ed56; // OOB+0x0776
/* 0x1000ed57 */ LDATA extern char public_1000ed57; // OOB+0x0777
/* 0x1000ed58 */ LDATA extern char public_1000ed58; // OOB+0x0778
/* 0x1000ed59 */ LDATA extern char public_1000ed59; // OOB+0x0779
/* 0x1000ed5a */ LDATA extern char public_1000ed5a; // OOB+0x077a
/* 0x1000ed5b */ LDATA extern char public_1000ed5b; // OOB+0x077b
/* 0x1000ed5c */ LDATA extern char public_1000ed5c; // OOB+0x077c
/* 0x1000ed5d */ LDATA extern char public_1000ed5d; // OOB+0x077d
/* 0x1000ed5e */ LDATA extern char public_1000ed5e; // OOB+0x077e
/* 0x1000ed5f */ LDATA extern char public_1000ed5f; // OOB+0x077f
/* 0x1000ed60 */ LDATA extern char public_1000ed60; // OOB+0x0780
/* 0x1000ed61 */ LDATA extern char public_1000ed61; // OOB+0x0781
/* 0x1000ed62 */ LDATA extern char public_1000ed62; // OOB+0x0782
/* 0x1000ed63 */ LDATA extern char public_1000ed63; // OOB+0x0783
/* 0x1000ed64 */ LDATA extern char public_1000ed64; // OOB+0x0784
/* 0x1000ed65 */ LDATA extern char public_1000ed65; // OOB+0x0785
/* 0x1000ed66 */ LDATA extern char public_1000ed66; // OOB+0x0786
/* 0x1000ed67 */ LDATA extern char public_1000ed67; // OOB+0x0787
/* 0x1000ed68 */ LDATA extern char public_1000ed68; // OOB+0x0788
/* 0x1000ed69 */ LDATA extern char public_1000ed69; // OOB+0x0789
/* 0x1000ed6a */ LDATA extern char public_1000ed6a; // OOB+0x078a
/* 0x1000ed6b */ LDATA extern char public_1000ed6b; // OOB+0x078b
/* 0x1000ed6c */ LDATA extern char public_1000ed6c; // OOB+0x078c
/* 0x1000ed6d */ LDATA extern char public_1000ed6d; // OOB+0x078d
/* 0x1000ed6e */ LDATA extern char public_1000ed6e; // OOB+0x078e
/* 0x1000ed6f */ LDATA extern char public_1000ed6f; // OOB+0x078f
/* 0x1000ed70 */ LDATA extern char public_1000ed70; // OOB+0x0790
/* 0x1000ed71 */ LDATA extern char public_1000ed71; // OOB+0x0791
/* 0x1000ed72 */ LDATA extern char public_1000ed72; // OOB+0x0792
/* 0x1000ed73 */ LDATA extern char public_1000ed73; // OOB+0x0793
/* 0x1000ed74 */ LDATA extern char public_1000ed74; // OOB+0x0794
/* 0x1000ed75 */ LDATA extern char public_1000ed75; // OOB+0x0795
/* 0x1000ed76 */ LDATA extern char public_1000ed76; // OOB+0x0796
/* 0x1000ed77 */ LDATA extern char public_1000ed77; // OOB+0x0797
/* 0x1000ed78 */ LDATA extern char public_1000ed78; // OOB+0x0798
/* 0x1000ed79 */ LDATA extern char public_1000ed79; // OOB+0x0799
/* 0x1000ed7a */ LDATA extern char public_1000ed7a; // OOB+0x079a
/* 0x1000ed7b */ LDATA extern char public_1000ed7b; // OOB+0x079b
/* 0x1000ed7c */ LDATA extern char public_1000ed7c; // OOB+0x079c
/* 0x1000ed7d */ LDATA extern char public_1000ed7d; // OOB+0x079d
/* 0x1000ed7e */ LDATA extern char public_1000ed7e; // OOB+0x079e
/* 0x1000ed7f */ LDATA extern char public_1000ed7f; // OOB+0x079f
/* 0x1000ed80 */ LDATA extern char public_1000ed80; // OOB+0x07a0
/* 0x1000ed81 */ LDATA extern char public_1000ed81; // OOB+0x07a1
/* 0x1000ed82 */ LDATA extern char public_1000ed82; // OOB+0x07a2
/* 0x1000ed83 */ LDATA extern char public_1000ed83; // OOB+0x07a3
/* 0x1000ed84 */ LDATA extern char public_1000ed84; // OOB+0x07a4
/* 0x1000ed85 */ LDATA extern char public_1000ed85; // OOB+0x07a5
/* 0x1000ed86 */ LDATA extern char public_1000ed86; // OOB+0x07a6
/* 0x1000ed87 */ LDATA extern char public_1000ed87; // OOB+0x07a7
/* 0x1000ed88 */ LDATA extern char public_1000ed88; // OOB+0x07a8
/* 0x1000ed89 */ LDATA extern char public_1000ed89; // OOB+0x07a9
/* 0x1000ed8a */ LDATA extern char public_1000ed8a; // OOB+0x07aa
/* 0x1000ed8b */ LDATA extern char public_1000ed8b; // OOB+0x07ab
/* 0x1000ed8c */ LDATA extern char public_1000ed8c; // OOB+0x07ac
/* 0x1000ed8d */ LDATA extern char public_1000ed8d; // OOB+0x07ad
/* 0x1000ed8e */ LDATA extern char public_1000ed8e; // OOB+0x07ae
/* 0x1000ed8f */ LDATA extern char public_1000ed8f; // OOB+0x07af
/* 0x1000ed90 */ LDATA extern char public_1000ed90; // OOB+0x07b0
/* 0x1000ed91 */ LDATA extern char public_1000ed91; // OOB+0x07b1
/* 0x1000ed92 */ LDATA extern char public_1000ed92; // OOB+0x07b2
/* 0x1000ed93 */ LDATA extern char public_1000ed93; // OOB+0x07b3
/* 0x1000ed94 */ LDATA extern char public_1000ed94; // OOB+0x07b4
/* 0x1000ed95 */ LDATA extern char public_1000ed95; // OOB+0x07b5
/* 0x1000ed96 */ LDATA extern char public_1000ed96; // OOB+0x07b6
/* 0x1000ed97 */ LDATA extern char public_1000ed97; // OOB+0x07b7
/* 0x1000ed98 */ LDATA extern char public_1000ed98; // OOB+0x07b8
/* 0x1000ed99 */ LDATA extern char public_1000ed99; // OOB+0x07b9
/* 0x1000ed9a */ LDATA extern char public_1000ed9a; // OOB+0x07ba
/* 0x1000ed9b */ LDATA extern char public_1000ed9b; // OOB+0x07bb
/* 0x1000ed9c */ LDATA extern char public_1000ed9c; // OOB+0x07bc
/* 0x1000ed9d */ LDATA extern char public_1000ed9d; // OOB+0x07bd
/* 0x1000ed9e */ LDATA extern char public_1000ed9e; // OOB+0x07be
/* 0x1000ed9f */ LDATA extern char public_1000ed9f; // OOB+0x07bf
/* 0x1000eda0 */ LDATA extern char public_1000eda0; // OOB+0x07c0
/* 0x1000eda1 */ LDATA extern char public_1000eda1; // OOB+0x07c1
/* 0x1000eda2 */ LDATA extern char public_1000eda2; // OOB+0x07c2
/* 0x1000eda3 */ LDATA extern char public_1000eda3; // OOB+0x07c3
/* 0x1000eda4 */ LDATA extern char public_1000eda4; // OOB+0x07c4
/* 0x1000eda5 */ LDATA extern char public_1000eda5; // OOB+0x07c5
/* 0x1000eda6 */ LDATA extern char public_1000eda6; // OOB+0x07c6
/* 0x1000eda7 */ LDATA extern char public_1000eda7; // OOB+0x07c7
/* 0x1000eda8 */ LDATA extern char public_1000eda8; // OOB+0x07c8
/* 0x1000eda9 */ LDATA extern char public_1000eda9; // OOB+0x07c9
/* 0x1000edaa */ LDATA extern char public_1000edaa; // OOB+0x07ca
/* 0x1000edab */ LDATA extern char public_1000edab; // OOB+0x07cb
/* 0x1000edac */ LDATA extern char public_1000edac; // OOB+0x07cc
/* 0x1000edad */ LDATA extern char public_1000edad; // OOB+0x07cd
/* 0x1000edae */ LDATA extern char public_1000edae; // OOB+0x07ce
/* 0x1000edaf */ LDATA extern char public_1000edaf; // OOB+0x07cf
/* 0x1000edb0 */ LDATA extern char public_1000edb0; // OOB+0x07d0
/* 0x1000edb1 */ LDATA extern char public_1000edb1; // OOB+0x07d1
/* 0x1000edb2 */ LDATA extern char public_1000edb2; // OOB+0x07d2
/* 0x1000edb3 */ LDATA extern char public_1000edb3; // OOB+0x07d3
/* 0x1000edb4 */ LDATA extern char public_1000edb4; // OOB+0x07d4
/* 0x1000edb5 */ LDATA extern char public_1000edb5; // OOB+0x07d5
/* 0x1000edb6 */ LDATA extern char public_1000edb6; // OOB+0x07d6
/* 0x1000edb7 */ LDATA extern char public_1000edb7; // OOB+0x07d7
/* 0x1000edb8 */ LDATA extern char public_1000edb8; // OOB+0x07d8
/* 0x1000edb9 */ LDATA extern char public_1000edb9; // OOB+0x07d9
/* 0x1000edba */ LDATA extern char public_1000edba; // OOB+0x07da
/* 0x1000edbb */ LDATA extern char public_1000edbb; // OOB+0x07db
/* 0x1000edbc */ LDATA extern char public_1000edbc; // OOB+0x07dc
/* 0x1000edbd */ LDATA extern char public_1000edbd; // OOB+0x07dd
/* 0x1000edbe */ LDATA extern char public_1000edbe; // OOB+0x07de
/* 0x1000edbf */ LDATA extern char public_1000edbf; // OOB+0x07df
/* 0x1000edc0 */ LDATA extern char public_1000edc0; // OOB+0x07e0
/* 0x1000edc1 */ LDATA extern char public_1000edc1; // OOB+0x07e1
/* 0x1000edc2 */ LDATA extern char public_1000edc2; // OOB+0x07e2
/* 0x1000edc3 */ LDATA extern char public_1000edc3; // OOB+0x07e3
/* 0x1000edc4 */ LDATA extern char public_1000edc4; // OOB+0x07e4
/* 0x1000edc5 */ LDATA extern char public_1000edc5; // OOB+0x07e5
/* 0x1000edc6 */ LDATA extern char public_1000edc6; // OOB+0x07e6
/* 0x1000edc7 */ LDATA extern char public_1000edc7; // OOB+0x07e7
/* 0x1000edc8 */ LDATA extern char public_1000edc8; // OOB+0x07e8
/* 0x1000edc9 */ LDATA extern char public_1000edc9; // OOB+0x07e9
/* 0x1000edca */ LDATA extern char public_1000edca; // OOB+0x07ea
/* 0x1000edcb */ LDATA extern char public_1000edcb; // OOB+0x07eb
/* 0x1000edcc */ LDATA extern char public_1000edcc; // OOB+0x07ec
/* 0x1000edcd */ LDATA extern char public_1000edcd; // OOB+0x07ed
/* 0x1000edce */ LDATA extern char public_1000edce; // OOB+0x07ee
/* 0x1000edcf */ LDATA extern char public_1000edcf; // OOB+0x07ef
/* 0x1000edd0 */ LDATA extern char public_1000edd0; // OOB+0x07f0
/* 0x1000edd1 */ LDATA extern char public_1000edd1; // OOB+0x07f1
/* 0x1000edd2 */ LDATA extern char public_1000edd2; // OOB+0x07f2
/* 0x1000edd3 */ LDATA extern char public_1000edd3; // OOB+0x07f3
/* 0x1000edd4 */ LDATA extern char public_1000edd4; // OOB+0x07f4
/* 0x1000edd5 */ LDATA extern char public_1000edd5; // OOB+0x07f5
/* 0x1000edd6 */ LDATA extern char public_1000edd6; // OOB+0x07f6
/* 0x1000edd7 */ LDATA extern char public_1000edd7; // OOB+0x07f7
/* 0x1000edd8 */ LDATA extern char public_1000edd8; // OOB+0x07f8
/* 0x1000edd9 */ LDATA extern char public_1000edd9; // OOB+0x07f9
/* 0x1000edda */ LDATA extern char public_1000edda; // OOB+0x07fa
/* 0x1000eddb */ LDATA extern char public_1000eddb; // OOB+0x07fb
/* 0x1000eddc */ LDATA extern char public_1000eddc; // OOB+0x07fc
/* 0x1000eddd */ LDATA extern char public_1000eddd; // OOB+0x07fd
/* 0x1000edde */ LDATA extern char public_1000edde; // OOB+0x07fe
/* 0x1000eddf */ LDATA extern char public_1000eddf; // OOB+0x07ff
/* 0x1000ede0 */ LDATA extern char public_1000ede0; // OOB+0x0800
/* 0x1000ede1 */ LDATA extern char public_1000ede1; // OOB+0x0801
/* 0x1000ede2 */ LDATA extern char public_1000ede2; // OOB+0x0802
/* 0x1000ede3 */ LDATA extern char public_1000ede3; // OOB+0x0803
/* 0x1000ede4 */ LDATA extern char public_1000ede4; // OOB+0x0804
/* 0x1000ede5 */ LDATA extern char public_1000ede5; // OOB+0x0805
/* 0x1000ede6 */ LDATA extern char public_1000ede6; // OOB+0x0806
/* 0x1000ede7 */ LDATA extern char public_1000ede7; // OOB+0x0807
/* 0x1000ede8 */ LDATA extern char public_1000ede8; // OOB+0x0808
/* 0x1000ede9 */ LDATA extern char public_1000ede9; // OOB+0x0809
/* 0x1000edea */ LDATA extern char public_1000edea; // OOB+0x080a
/* 0x1000edeb */ LDATA extern char public_1000edeb; // OOB+0x080b
/* 0x1000edec */ LDATA extern char public_1000edec; // OOB+0x080c
/* 0x1000eded */ LDATA extern char public_1000eded; // OOB+0x080d
/* 0x1000edee */ LDATA extern char public_1000edee; // OOB+0x080e
/* 0x1000edef */ LDATA extern char public_1000edef; // OOB+0x080f
/* 0x1000edf0 */ LDATA extern char public_1000edf0; // OOB+0x0810
/* 0x1000edf1 */ LDATA extern char public_1000edf1; // OOB+0x0811
/* 0x1000edf2 */ LDATA extern char public_1000edf2; // OOB+0x0812
/* 0x1000edf3 */ LDATA extern char public_1000edf3; // OOB+0x0813
/* 0x1000edf4 */ LDATA extern char public_1000edf4; // OOB+0x0814
/* 0x1000edf5 */ LDATA extern char public_1000edf5; // OOB+0x0815
/* 0x1000edf6 */ LDATA extern char public_1000edf6; // OOB+0x0816
/* 0x1000edf7 */ LDATA extern char public_1000edf7; // OOB+0x0817
/* 0x1000edf8 */ LDATA extern char public_1000edf8; // OOB+0x0818
/* 0x1000edf9 */ LDATA extern char public_1000edf9; // OOB+0x0819
/* 0x1000edfa */ LDATA extern char public_1000edfa; // OOB+0x081a
/* 0x1000edfb */ LDATA extern char public_1000edfb; // OOB+0x081b
/* 0x1000edfc */ LDATA extern char public_1000edfc; // OOB+0x081c
/* 0x1000edfd */ LDATA extern char public_1000edfd; // OOB+0x081d
/* 0x1000edfe */ LDATA extern char public_1000edfe; // OOB+0x081e
/* 0x1000edff */ LDATA extern char public_1000edff; // OOB+0x081f
/* 0x1000ee00 */ LDATA extern char public_1000ee00; // OOB+0x0820
/* 0x1000ee01 */ LDATA extern char public_1000ee01; // OOB+0x0821
/* 0x1000ee02 */ LDATA extern char public_1000ee02; // OOB+0x0822
/* 0x1000ee03 */ LDATA extern char public_1000ee03; // OOB+0x0823
/* 0x1000ee04 */ LDATA extern char public_1000ee04; // OOB+0x0824
/* 0x1000ee05 */ LDATA extern char public_1000ee05; // OOB+0x0825
/* 0x1000ee06 */ LDATA extern char public_1000ee06; // OOB+0x0826
/* 0x1000ee07 */ LDATA extern char public_1000ee07; // OOB+0x0827
/* 0x1000ee08 */ LDATA extern char public_1000ee08; // OOB+0x0828
/* 0x1000ee09 */ LDATA extern char public_1000ee09; // OOB+0x0829
/* 0x1000ee0a */ LDATA extern char public_1000ee0a; // OOB+0x082a
/* 0x1000ee0b */ LDATA extern char public_1000ee0b; // OOB+0x082b
/* 0x1000ee0c */ LDATA extern char public_1000ee0c; // OOB+0x082c
/* 0x1000ee0d */ LDATA extern char public_1000ee0d; // OOB+0x082d
/* 0x1000ee0e */ LDATA extern char public_1000ee0e; // OOB+0x082e
/* 0x1000ee0f */ LDATA extern char public_1000ee0f; // OOB+0x082f
/* 0x1000ee10 */ LDATA extern char public_1000ee10; // OOB+0x0830
/* 0x1000ee11 */ LDATA extern char public_1000ee11; // OOB+0x0831
/* 0x1000ee12 */ LDATA extern char public_1000ee12; // OOB+0x0832
/* 0x1000ee13 */ LDATA extern char public_1000ee13; // OOB+0x0833
/* 0x1000ee14 */ LDATA extern char public_1000ee14; // OOB+0x0834
/* 0x1000ee15 */ LDATA extern char public_1000ee15; // OOB+0x0835
/* 0x1000ee16 */ LDATA extern char public_1000ee16; // OOB+0x0836
/* 0x1000ee17 */ LDATA extern char public_1000ee17; // OOB+0x0837
/* 0x1000ee18 */ LDATA extern char public_1000ee18; // OOB+0x0838
/* 0x1000ee19 */ LDATA extern char public_1000ee19; // OOB+0x0839
/* 0x1000ee1a */ LDATA extern char public_1000ee1a; // OOB+0x083a
/* 0x1000ee1b */ LDATA extern char public_1000ee1b; // OOB+0x083b
/* 0x1000ee1c */ LDATA extern char public_1000ee1c; // OOB+0x083c
/* 0x1000ee1d */ LDATA extern char public_1000ee1d; // OOB+0x083d
/* 0x1000ee1e */ LDATA extern char public_1000ee1e; // OOB+0x083e
/* 0x1000ee1f */ LDATA extern char public_1000ee1f; // OOB+0x083f
/* 0x1000ee20 */ LDATA extern char public_1000ee20; // OOB+0x0840
/* 0x1000ee21 */ LDATA extern char public_1000ee21; // OOB+0x0841
/* 0x1000ee22 */ LDATA extern char public_1000ee22; // OOB+0x0842
/* 0x1000ee23 */ LDATA extern char public_1000ee23; // OOB+0x0843
/* 0x1000ee24 */ LDATA extern char public_1000ee24; // OOB+0x0844
/* 0x1000ee25 */ LDATA extern char public_1000ee25; // OOB+0x0845
/* 0x1000ee26 */ LDATA extern char public_1000ee26; // OOB+0x0846
/* 0x1000ee27 */ LDATA extern char public_1000ee27; // OOB+0x0847
/* 0x1000ee28 */ LDATA extern char public_1000ee28; // OOB+0x0848
/* 0x1000ee29 */ LDATA extern char public_1000ee29; // OOB+0x0849
/* 0x1000ee2a */ LDATA extern char public_1000ee2a; // OOB+0x084a
/* 0x1000ee2b */ LDATA extern char public_1000ee2b; // OOB+0x084b
/* 0x1000ee2c */ LDATA extern char public_1000ee2c; // OOB+0x084c
/* 0x1000ee2d */ LDATA extern char public_1000ee2d; // OOB+0x084d
/* 0x1000ee2e */ LDATA extern char public_1000ee2e; // OOB+0x084e
/* 0x1000ee2f */ LDATA extern char public_1000ee2f; // OOB+0x084f
/* 0x1000ee30 */ LDATA extern char public_1000ee30; // OOB+0x0850
/* 0x1000ee31 */ LDATA extern char public_1000ee31; // OOB+0x0851
/* 0x1000ee32 */ LDATA extern char public_1000ee32; // OOB+0x0852
/* 0x1000ee33 */ LDATA extern char public_1000ee33; // OOB+0x0853
/* 0x1000ee34 */ LDATA extern char public_1000ee34; // OOB+0x0854
/* 0x1000ee35 */ LDATA extern char public_1000ee35; // OOB+0x0855
/* 0x1000ee36 */ LDATA extern char public_1000ee36; // OOB+0x0856
/* 0x1000ee37 */ LDATA extern char public_1000ee37; // OOB+0x0857
/* 0x1000ee38 */ LDATA extern char public_1000ee38; // OOB+0x0858
/* 0x1000ee39 */ LDATA extern char public_1000ee39; // OOB+0x0859
/* 0x1000ee3a */ LDATA extern char public_1000ee3a; // OOB+0x085a
/* 0x1000ee3b */ LDATA extern char public_1000ee3b; // OOB+0x085b
/* 0x1000ee3c */ LDATA extern char public_1000ee3c; // OOB+0x085c
/* 0x1000ee3d */ LDATA extern char public_1000ee3d; // OOB+0x085d
/* 0x1000ee3e */ LDATA extern char public_1000ee3e; // OOB+0x085e
/* 0x1000ee3f */ LDATA extern char public_1000ee3f; // OOB+0x085f
/* 0x1000ee40 */ LDATA extern char public_1000ee40; // OOB+0x0860
/* 0x1000ee41 */ LDATA extern char public_1000ee41; // OOB+0x0861
/* 0x1000ee42 */ LDATA extern char public_1000ee42; // OOB+0x0862
/* 0x1000ee43 */ LDATA extern char public_1000ee43; // OOB+0x0863
/* 0x1000ee44 */ LDATA extern char public_1000ee44; // OOB+0x0864
/* 0x1000ee45 */ LDATA extern char public_1000ee45; // OOB+0x0865
/* 0x1000ee46 */ LDATA extern char public_1000ee46; // OOB+0x0866
/* 0x1000ee47 */ LDATA extern char public_1000ee47; // OOB+0x0867
/* 0x1000ee48 */ LDATA extern char public_1000ee48; // OOB+0x0868
/* 0x1000ee49 */ LDATA extern char public_1000ee49; // OOB+0x0869
/* 0x1000ee4a */ LDATA extern char public_1000ee4a; // OOB+0x086a
/* 0x1000ee4b */ LDATA extern char public_1000ee4b; // OOB+0x086b
/* 0x1000ee4c */ LDATA extern char public_1000ee4c; // OOB+0x086c
/* 0x1000ee4d */ LDATA extern char public_1000ee4d; // OOB+0x086d
/* 0x1000ee4e */ LDATA extern char public_1000ee4e; // OOB+0x086e
/* 0x1000ee4f */ LDATA extern char public_1000ee4f; // OOB+0x086f
/* 0x1000ee50 */ LDATA extern char public_1000ee50; // OOB+0x0870
/* 0x1000ee51 */ LDATA extern char public_1000ee51; // OOB+0x0871
/* 0x1000ee52 */ LDATA extern char public_1000ee52; // OOB+0x0872
/* 0x1000ee53 */ LDATA extern char public_1000ee53; // OOB+0x0873
/* 0x1000ee54 */ LDATA extern char public_1000ee54; // OOB+0x0874
/* 0x1000ee55 */ LDATA extern char public_1000ee55; // OOB+0x0875
/* 0x1000ee56 */ LDATA extern char public_1000ee56; // OOB+0x0876
/* 0x1000ee57 */ LDATA extern char public_1000ee57; // OOB+0x0877
/* 0x1000ee58 */ LDATA extern char public_1000ee58; // OOB+0x0878
/* 0x1000ee59 */ LDATA extern char public_1000ee59; // OOB+0x0879
/* 0x1000ee5a */ LDATA extern char public_1000ee5a; // OOB+0x087a
/* 0x1000ee5b */ LDATA extern char public_1000ee5b; // OOB+0x087b
/* 0x1000ee5c */ LDATA extern char public_1000ee5c; // OOB+0x087c
/* 0x1000ee5d */ LDATA extern char public_1000ee5d; // OOB+0x087d
/* 0x1000ee5e */ LDATA extern char public_1000ee5e; // OOB+0x087e
/* 0x1000ee5f */ LDATA extern char public_1000ee5f; // OOB+0x087f
/* 0x1000ee60 */ LDATA extern char public_1000ee60; // OOB+0x0880
/* 0x1000ee61 */ LDATA extern char public_1000ee61; // OOB+0x0881
/* 0x1000ee62 */ LDATA extern char public_1000ee62; // OOB+0x0882
/* 0x1000ee63 */ LDATA extern char public_1000ee63; // OOB+0x0883
/* 0x1000ee64 */ LDATA extern char public_1000ee64; // OOB+0x0884
/* 0x1000ee65 */ LDATA extern char public_1000ee65; // OOB+0x0885
/* 0x1000ee66 */ LDATA extern char public_1000ee66; // OOB+0x0886
/* 0x1000ee67 */ LDATA extern char public_1000ee67; // OOB+0x0887
/* 0x1000ee68 */ LDATA extern char public_1000ee68; // OOB+0x0888
/* 0x1000ee69 */ LDATA extern char public_1000ee69; // OOB+0x0889
/* 0x1000ee6a */ LDATA extern char public_1000ee6a; // OOB+0x088a
/* 0x1000ee6b */ LDATA extern char public_1000ee6b; // OOB+0x088b
/* 0x1000ee6c */ LDATA extern char public_1000ee6c; // OOB+0x088c
/* 0x1000ee6d */ LDATA extern char public_1000ee6d; // OOB+0x088d
/* 0x1000ee6e */ LDATA extern char public_1000ee6e; // OOB+0x088e
/* 0x1000ee6f */ LDATA extern char public_1000ee6f; // OOB+0x088f
/* 0x1000ee70 */ LDATA extern char public_1000ee70; // OOB+0x0890
/* 0x1000ee71 */ LDATA extern char public_1000ee71; // OOB+0x0891
/* 0x1000ee72 */ LDATA extern char public_1000ee72; // OOB+0x0892
/* 0x1000ee73 */ LDATA extern char public_1000ee73; // OOB+0x0893
/* 0x1000ee74 */ LDATA extern char public_1000ee74; // OOB+0x0894
/* 0x1000ee75 */ LDATA extern char public_1000ee75; // OOB+0x0895
/* 0x1000ee76 */ LDATA extern char public_1000ee76; // OOB+0x0896
/* 0x1000ee77 */ LDATA extern char public_1000ee77; // OOB+0x0897
/* 0x1000ee78 */ LDATA extern char public_1000ee78; // OOB+0x0898
/* 0x1000ee79 */ LDATA extern char public_1000ee79; // OOB+0x0899
/* 0x1000ee7a */ LDATA extern char public_1000ee7a; // OOB+0x089a
/* 0x1000ee7b */ LDATA extern char public_1000ee7b; // OOB+0x089b
/* 0x1000ee7c */ LDATA extern char public_1000ee7c; // OOB+0x089c
/* 0x1000ee7d */ LDATA extern char public_1000ee7d; // OOB+0x089d
/* 0x1000ee7e */ LDATA extern char public_1000ee7e; // OOB+0x089e
/* 0x1000ee7f */ LDATA extern char public_1000ee7f; // OOB+0x089f
/* 0x1000ee80 */ LDATA extern char public_1000ee80; // OOB+0x08a0
/* 0x1000ee81 */ LDATA extern char public_1000ee81; // OOB+0x08a1
/* 0x1000ee82 */ LDATA extern char public_1000ee82; // OOB+0x08a2
/* 0x1000ee83 */ LDATA extern char public_1000ee83; // OOB+0x08a3
/* 0x1000ee84 */ LDATA extern char public_1000ee84; // OOB+0x08a4
/* 0x1000ee85 */ LDATA extern char public_1000ee85; // OOB+0x08a5
/* 0x1000ee86 */ LDATA extern char public_1000ee86; // OOB+0x08a6
/* 0x1000ee87 */ LDATA extern char public_1000ee87; // OOB+0x08a7
/* 0x1000ee88 */ LDATA extern char public_1000ee88; // OOB+0x08a8
/* 0x1000ee89 */ LDATA extern char public_1000ee89; // OOB+0x08a9
/* 0x1000ee8a */ LDATA extern char public_1000ee8a; // OOB+0x08aa
/* 0x1000ee8b */ LDATA extern char public_1000ee8b; // OOB+0x08ab
/* 0x1000ee8c */ LDATA extern char public_1000ee8c; // OOB+0x08ac
/* 0x1000ee8d */ LDATA extern char public_1000ee8d; // OOB+0x08ad
/* 0x1000ee8e */ LDATA extern char public_1000ee8e; // OOB+0x08ae
/* 0x1000ee8f */ LDATA extern char public_1000ee8f; // OOB+0x08af
/* 0x1000ee90 */ LDATA extern char public_1000ee90; // OOB+0x08b0
/* 0x1000ee91 */ LDATA extern char public_1000ee91; // OOB+0x08b1
/* 0x1000ee92 */ LDATA extern char public_1000ee92; // OOB+0x08b2
/* 0x1000ee93 */ LDATA extern char public_1000ee93; // OOB+0x08b3
/* 0x1000ee94 */ LDATA extern char public_1000ee94; // OOB+0x08b4
/* 0x1000ee95 */ LDATA extern char public_1000ee95; // OOB+0x08b5
/* 0x1000ee96 */ LDATA extern char public_1000ee96; // OOB+0x08b6
/* 0x1000ee97 */ LDATA extern char public_1000ee97; // OOB+0x08b7
/* 0x1000ee98 */ LDATA extern char public_1000ee98; // OOB+0x08b8
/* 0x1000ee99 */ LDATA extern char public_1000ee99; // OOB+0x08b9
/* 0x1000ee9a */ LDATA extern char public_1000ee9a; // OOB+0x08ba
/* 0x1000ee9b */ LDATA extern char public_1000ee9b; // OOB+0x08bb
/* 0x1000ee9c */ LDATA extern char public_1000ee9c; // OOB+0x08bc
/* 0x1000ee9d */ LDATA extern char public_1000ee9d; // OOB+0x08bd
/* 0x1000ee9e */ LDATA extern char public_1000ee9e; // OOB+0x08be
/* 0x1000ee9f */ LDATA extern char public_1000ee9f; // OOB+0x08bf
/* 0x1000eea0 */ LDATA extern char public_1000eea0; // OOB+0x08c0
/* 0x1000eea1 */ LDATA extern char public_1000eea1; // OOB+0x08c1
/* 0x1000eea2 */ LDATA extern char public_1000eea2; // OOB+0x08c2
/* 0x1000eea3 */ LDATA extern char public_1000eea3; // OOB+0x08c3
/* 0x1000eea4 */ LDATA extern char public_1000eea4; // OOB+0x08c4
/* 0x1000eea5 */ LDATA extern char public_1000eea5; // OOB+0x08c5
/* 0x1000eea6 */ LDATA extern char public_1000eea6; // OOB+0x08c6
/* 0x1000eea7 */ LDATA extern char public_1000eea7; // OOB+0x08c7
/* 0x1000eea8 */ LDATA extern char public_1000eea8; // OOB+0x08c8
/* 0x1000eea9 */ LDATA extern char public_1000eea9; // OOB+0x08c9
/* 0x1000eeaa */ LDATA extern char public_1000eeaa; // OOB+0x08ca
/* 0x1000eeab */ LDATA extern char public_1000eeab; // OOB+0x08cb
/* 0x1000eeac */ LDATA extern char public_1000eeac; // OOB+0x08cc
/* 0x1000eead */ LDATA extern char public_1000eead; // OOB+0x08cd
/* 0x1000eeae */ LDATA extern char public_1000eeae; // OOB+0x08ce
/* 0x1000eeaf */ LDATA extern char public_1000eeaf; // OOB+0x08cf
/* 0x1000eeb0 */ LDATA extern char public_1000eeb0; // OOB+0x08d0
/* 0x1000eeb1 */ LDATA extern char public_1000eeb1; // OOB+0x08d1
/* 0x1000eeb2 */ LDATA extern char public_1000eeb2; // OOB+0x08d2
/* 0x1000eeb3 */ LDATA extern char public_1000eeb3; // OOB+0x08d3
/* 0x1000eeb4 */ LDATA extern char public_1000eeb4; // OOB+0x08d4
/* 0x1000eeb5 */ LDATA extern char public_1000eeb5; // OOB+0x08d5
/* 0x1000eeb6 */ LDATA extern char public_1000eeb6; // OOB+0x08d6
/* 0x1000eeb7 */ LDATA extern char public_1000eeb7; // OOB+0x08d7
/* 0x1000eeb8 */ LDATA extern char public_1000eeb8; // OOB+0x08d8
/* 0x1000eeb9 */ LDATA extern char public_1000eeb9; // OOB+0x08d9
/* 0x1000eeba */ LDATA extern char public_1000eeba; // OOB+0x08da
/* 0x1000eebb */ LDATA extern char public_1000eebb; // OOB+0x08db
/* 0x1000eebc */ LDATA extern char public_1000eebc; // OOB+0x08dc
/* 0x1000eebd */ LDATA extern char public_1000eebd; // OOB+0x08dd
/* 0x1000eebe */ LDATA extern char public_1000eebe; // OOB+0x08de
/* 0x1000eebf */ LDATA extern char public_1000eebf; // OOB+0x08df
/* 0x1000eec0 */ LDATA extern char public_1000eec0; // OOB+0x08e0
/* 0x1000eec1 */ LDATA extern char public_1000eec1; // OOB+0x08e1
/* 0x1000eec2 */ LDATA extern char public_1000eec2; // OOB+0x08e2
/* 0x1000eec3 */ LDATA extern char public_1000eec3; // OOB+0x08e3
/* 0x1000eec4 */ LDATA extern char public_1000eec4; // OOB+0x08e4
/* 0x1000eec5 */ LDATA extern char public_1000eec5; // OOB+0x08e5
/* 0x1000eec6 */ LDATA extern char public_1000eec6; // OOB+0x08e6
/* 0x1000eec7 */ LDATA extern char public_1000eec7; // OOB+0x08e7
/* 0x1000eec8 */ LDATA extern char public_1000eec8; // OOB+0x08e8
/* 0x1000eec9 */ LDATA extern char public_1000eec9; // OOB+0x08e9
/* 0x1000eeca */ LDATA extern char public_1000eeca; // OOB+0x08ea
/* 0x1000eecb */ LDATA extern char public_1000eecb; // OOB+0x08eb
/* 0x1000eecc */ LDATA extern char public_1000eecc; // OOB+0x08ec
/* 0x1000eecd */ LDATA extern char public_1000eecd; // OOB+0x08ed
/* 0x1000eece */ LDATA extern char public_1000eece; // OOB+0x08ee
/* 0x1000eecf */ LDATA extern char public_1000eecf; // OOB+0x08ef
/* 0x1000eed0 */ LDATA extern char public_1000eed0; // OOB+0x08f0
/* 0x1000eed1 */ LDATA extern char public_1000eed1; // OOB+0x08f1
/* 0x1000eed2 */ LDATA extern char public_1000eed2; // OOB+0x08f2
/* 0x1000eed3 */ LDATA extern char public_1000eed3; // OOB+0x08f3
/* 0x1000eed4 */ LDATA extern char public_1000eed4; // OOB+0x08f4
/* 0x1000eed5 */ LDATA extern char public_1000eed5; // OOB+0x08f5
/* 0x1000eed6 */ LDATA extern char public_1000eed6; // OOB+0x08f6
/* 0x1000eed7 */ LDATA extern char public_1000eed7; // OOB+0x08f7
/* 0x1000eed8 */ LDATA extern char public_1000eed8; // OOB+0x08f8
/* 0x1000eed9 */ LDATA extern char public_1000eed9; // OOB+0x08f9
/* 0x1000eeda */ LDATA extern char public_1000eeda; // OOB+0x08fa
/* 0x1000eedb */ LDATA extern char public_1000eedb; // OOB+0x08fb
/* 0x1000eedc */ LDATA extern char public_1000eedc; // OOB+0x08fc
/* 0x1000eedd */ LDATA extern char public_1000eedd; // OOB+0x08fd
/* 0x1000eede */ LDATA extern char public_1000eede; // OOB+0x08fe
/* 0x1000eedf */ LDATA extern char public_1000eedf; // OOB+0x08ff
/* 0x1000eee0 */ LDATA extern char public_1000eee0; // OOB+0x0900
/* 0x1000eee1 */ LDATA extern char public_1000eee1; // OOB+0x0901
/* 0x1000eee2 */ LDATA extern char public_1000eee2; // OOB+0x0902
/* 0x1000eee3 */ LDATA extern char public_1000eee3; // OOB+0x0903
/* 0x1000eee4 */ LDATA extern char public_1000eee4; // OOB+0x0904
/* 0x1000eee5 */ LDATA extern char public_1000eee5; // OOB+0x0905
/* 0x1000eee6 */ LDATA extern char public_1000eee6; // OOB+0x0906
/* 0x1000eee7 */ LDATA extern char public_1000eee7; // OOB+0x0907
/* 0x1000eee8 */ LDATA extern char public_1000eee8; // OOB+0x0908
/* 0x1000eee9 */ LDATA extern char public_1000eee9; // OOB+0x0909
/* 0x1000eeea */ LDATA extern char public_1000eeea; // OOB+0x090a
/* 0x1000eeeb */ LDATA extern char public_1000eeeb; // OOB+0x090b
/* 0x1000eeec */ LDATA extern char public_1000eeec; // OOB+0x090c
/* 0x1000eeed */ LDATA extern char public_1000eeed; // OOB+0x090d
/* 0x1000eeee */ LDATA extern char public_1000eeee; // OOB+0x090e
/* 0x1000eeef */ LDATA extern char public_1000eeef; // OOB+0x090f
/* 0x1000eef0 */ LDATA extern char public_1000eef0; // OOB+0x0910
/* 0x1000eef1 */ LDATA extern char public_1000eef1; // OOB+0x0911
/* 0x1000eef2 */ LDATA extern char public_1000eef2; // OOB+0x0912
/* 0x1000eef3 */ LDATA extern char public_1000eef3; // OOB+0x0913
/* 0x1000eef4 */ LDATA extern char public_1000eef4; // OOB+0x0914
/* 0x1000eef5 */ LDATA extern char public_1000eef5; // OOB+0x0915
/* 0x1000eef6 */ LDATA extern char public_1000eef6; // OOB+0x0916
/* 0x1000eef7 */ LDATA extern char public_1000eef7; // OOB+0x0917
/* 0x1000eef8 */ LDATA extern char public_1000eef8; // OOB+0x0918
/* 0x1000eef9 */ LDATA extern char public_1000eef9; // OOB+0x0919
/* 0x1000eefa */ LDATA extern char public_1000eefa; // OOB+0x091a
/* 0x1000eefb */ LDATA extern char public_1000eefb; // OOB+0x091b
/* 0x1000eefc */ LDATA extern char public_1000eefc; // OOB+0x091c
/* 0x1000eefd */ LDATA extern char public_1000eefd; // OOB+0x091d
/* 0x1000eefe */ LDATA extern char public_1000eefe; // OOB+0x091e
/* 0x1000eeff */ LDATA extern char public_1000eeff; // OOB+0x091f
/* 0x1000ef00 */ LDATA extern char public_1000ef00; // OOB+0x0920
/* 0x1000ef01 */ LDATA extern char public_1000ef01; // OOB+0x0921
/* 0x1000ef02 */ LDATA extern char public_1000ef02; // OOB+0x0922
/* 0x1000ef03 */ LDATA extern char public_1000ef03; // OOB+0x0923
/* 0x1000ef04 */ LDATA extern char public_1000ef04; // OOB+0x0924
/* 0x1000ef05 */ LDATA extern char public_1000ef05; // OOB+0x0925
/* 0x1000ef06 */ LDATA extern char public_1000ef06; // OOB+0x0926
/* 0x1000ef07 */ LDATA extern char public_1000ef07; // OOB+0x0927
/* 0x1000ef08 */ LDATA extern char public_1000ef08; // OOB+0x0928
/* 0x1000ef09 */ LDATA extern char public_1000ef09; // OOB+0x0929
/* 0x1000ef0a */ LDATA extern char public_1000ef0a; // OOB+0x092a
/* 0x1000ef0b */ LDATA extern char public_1000ef0b; // OOB+0x092b
/* 0x1000ef0c */ LDATA extern char public_1000ef0c; // OOB+0x092c
/* 0x1000ef0d */ LDATA extern char public_1000ef0d; // OOB+0x092d
/* 0x1000ef0e */ LDATA extern char public_1000ef0e; // OOB+0x092e
/* 0x1000ef0f */ LDATA extern char public_1000ef0f; // OOB+0x092f
/* 0x1000ef10 */ LDATA extern char public_1000ef10; // OOB+0x0930
/* 0x1000ef11 */ LDATA extern char public_1000ef11; // OOB+0x0931
/* 0x1000ef12 */ LDATA extern char public_1000ef12; // OOB+0x0932
/* 0x1000ef13 */ LDATA extern char public_1000ef13; // OOB+0x0933
/* 0x1000ef14 */ LDATA extern char public_1000ef14; // OOB+0x0934
/* 0x1000ef15 */ LDATA extern char public_1000ef15; // OOB+0x0935
/* 0x1000ef16 */ LDATA extern char public_1000ef16; // OOB+0x0936
/* 0x1000ef17 */ LDATA extern char public_1000ef17; // OOB+0x0937
/* 0x1000ef18 */ LDATA extern char public_1000ef18; // OOB+0x0938
/* 0x1000ef19 */ LDATA extern char public_1000ef19; // OOB+0x0939
/* 0x1000ef1a */ LDATA extern char public_1000ef1a; // OOB+0x093a
/* 0x1000ef1b */ LDATA extern char public_1000ef1b; // OOB+0x093b
/* 0x1000ef1c */ LDATA extern char public_1000ef1c; // OOB+0x093c
/* 0x1000ef1d */ LDATA extern char public_1000ef1d; // OOB+0x093d
/* 0x1000ef1e */ LDATA extern char public_1000ef1e; // OOB+0x093e
/* 0x1000ef1f */ LDATA extern char public_1000ef1f; // OOB+0x093f
/* 0x1000ef20 */ LDATA extern char public_1000ef20; // OOB+0x0940
/* 0x1000ef21 */ LDATA extern char public_1000ef21; // OOB+0x0941
/* 0x1000ef22 */ LDATA extern char public_1000ef22; // OOB+0x0942
/* 0x1000ef23 */ LDATA extern char public_1000ef23; // OOB+0x0943
/* 0x1000ef24 */ LDATA extern char public_1000ef24; // OOB+0x0944
/* 0x1000ef25 */ LDATA extern char public_1000ef25; // OOB+0x0945
/* 0x1000ef26 */ LDATA extern char public_1000ef26; // OOB+0x0946
/* 0x1000ef27 */ LDATA extern char public_1000ef27; // OOB+0x0947
/* 0x1000ef28 */ LDATA extern char public_1000ef28; // OOB+0x0948
/* 0x1000ef29 */ LDATA extern char public_1000ef29; // OOB+0x0949
/* 0x1000ef2a */ LDATA extern char public_1000ef2a; // OOB+0x094a
/* 0x1000ef2b */ LDATA extern char public_1000ef2b; // OOB+0x094b
/* 0x1000ef2c */ LDATA extern char public_1000ef2c; // OOB+0x094c
/* 0x1000ef2d */ LDATA extern char public_1000ef2d; // OOB+0x094d
/* 0x1000ef2e */ LDATA extern char public_1000ef2e; // OOB+0x094e
/* 0x1000ef2f */ LDATA extern char public_1000ef2f; // OOB+0x094f
/* 0x1000ef30 */ LDATA extern char public_1000ef30; // OOB+0x0950
/* 0x1000ef31 */ LDATA extern char public_1000ef31; // OOB+0x0951
/* 0x1000ef32 */ LDATA extern char public_1000ef32; // OOB+0x0952
/* 0x1000ef33 */ LDATA extern char public_1000ef33; // OOB+0x0953
/* 0x1000ef34 */ LDATA extern char public_1000ef34; // OOB+0x0954
/* 0x1000ef35 */ LDATA extern char public_1000ef35; // OOB+0x0955
/* 0x1000ef36 */ LDATA extern char public_1000ef36; // OOB+0x0956
/* 0x1000ef37 */ LDATA extern char public_1000ef37; // OOB+0x0957
/* 0x1000ef38 */ LDATA extern char public_1000ef38; // OOB+0x0958
/* 0x1000ef39 */ LDATA extern char public_1000ef39; // OOB+0x0959
/* 0x1000ef3a */ LDATA extern char public_1000ef3a; // OOB+0x095a
/* 0x1000ef3b */ LDATA extern char public_1000ef3b; // OOB+0x095b
/* 0x1000ef3c */ LDATA extern char public_1000ef3c; // OOB+0x095c
/* 0x1000ef3d */ LDATA extern char public_1000ef3d; // OOB+0x095d
/* 0x1000ef3e */ LDATA extern char public_1000ef3e; // OOB+0x095e
/* 0x1000ef3f */ LDATA extern char public_1000ef3f; // OOB+0x095f
/* 0x1000ef40 */ LDATA extern char public_1000ef40; // OOB+0x0960
/* 0x1000ef41 */ LDATA extern char public_1000ef41; // OOB+0x0961
/* 0x1000ef42 */ LDATA extern char public_1000ef42; // OOB+0x0962
/* 0x1000ef43 */ LDATA extern char public_1000ef43; // OOB+0x0963
/* 0x1000ef44 */ LDATA extern char public_1000ef44; // OOB+0x0964
/* 0x1000ef45 */ LDATA extern char public_1000ef45; // OOB+0x0965
/* 0x1000ef46 */ LDATA extern char public_1000ef46; // OOB+0x0966
/* 0x1000ef47 */ LDATA extern char public_1000ef47; // OOB+0x0967
/* 0x1000ef48 */ LDATA extern char public_1000ef48; // OOB+0x0968
/* 0x1000ef49 */ LDATA extern char public_1000ef49; // OOB+0x0969
/* 0x1000ef4a */ LDATA extern char public_1000ef4a; // OOB+0x096a
/* 0x1000ef4b */ LDATA extern char public_1000ef4b; // OOB+0x096b
/* 0x1000ef4c */ LDATA extern char public_1000ef4c; // OOB+0x096c
/* 0x1000ef4d */ LDATA extern char public_1000ef4d; // OOB+0x096d
/* 0x1000ef4e */ LDATA extern char public_1000ef4e; // OOB+0x096e
/* 0x1000ef4f */ LDATA extern char public_1000ef4f; // OOB+0x096f
/* 0x1000ef50 */ LDATA extern char public_1000ef50; // OOB+0x0970
/* 0x1000ef51 */ LDATA extern char public_1000ef51; // OOB+0x0971
/* 0x1000ef52 */ LDATA extern char public_1000ef52; // OOB+0x0972
/* 0x1000ef53 */ LDATA extern char public_1000ef53; // OOB+0x0973
/* 0x1000ef54 */ LDATA extern char public_1000ef54; // OOB+0x0974
/* 0x1000ef55 */ LDATA extern char public_1000ef55; // OOB+0x0975
/* 0x1000ef56 */ LDATA extern char public_1000ef56; // OOB+0x0976
/* 0x1000ef57 */ LDATA extern char public_1000ef57; // OOB+0x0977
/* 0x1000ef58 */ LDATA extern char public_1000ef58; // OOB+0x0978
/* 0x1000ef59 */ LDATA extern char public_1000ef59; // OOB+0x0979
/* 0x1000ef5a */ LDATA extern char public_1000ef5a; // OOB+0x097a
/* 0x1000ef5b */ LDATA extern char public_1000ef5b; // OOB+0x097b
/* 0x1000ef5c */ LDATA extern char public_1000ef5c; // OOB+0x097c
/* 0x1000ef5d */ LDATA extern char public_1000ef5d; // OOB+0x097d
/* 0x1000ef5e */ LDATA extern char public_1000ef5e; // OOB+0x097e
/* 0x1000ef5f */ LDATA extern char public_1000ef5f; // OOB+0x097f
/* 0x1000ef60 */ LDATA extern char public_1000ef60; // OOB+0x0980
/* 0x1000ef61 */ LDATA extern char public_1000ef61; // OOB+0x0981
/* 0x1000ef62 */ LDATA extern char public_1000ef62; // OOB+0x0982
/* 0x1000ef63 */ LDATA extern char public_1000ef63; // OOB+0x0983
/* 0x1000ef64 */ LDATA extern char public_1000ef64; // OOB+0x0984
/* 0x1000ef65 */ LDATA extern char public_1000ef65; // OOB+0x0985
/* 0x1000ef66 */ LDATA extern char public_1000ef66; // OOB+0x0986
/* 0x1000ef67 */ LDATA extern char public_1000ef67; // OOB+0x0987
/* 0x1000ef68 */ LDATA extern char public_1000ef68; // OOB+0x0988
/* 0x1000ef69 */ LDATA extern char public_1000ef69; // OOB+0x0989
/* 0x1000ef6a */ LDATA extern char public_1000ef6a; // OOB+0x098a
/* 0x1000ef6b */ LDATA extern char public_1000ef6b; // OOB+0x098b
/* 0x1000ef6c */ LDATA extern char public_1000ef6c; // OOB+0x098c
/* 0x1000ef6d */ LDATA extern char public_1000ef6d; // OOB+0x098d
/* 0x1000ef6e */ LDATA extern char public_1000ef6e; // OOB+0x098e
/* 0x1000ef6f */ LDATA extern char public_1000ef6f; // OOB+0x098f
/* 0x1000ef70 */ LDATA extern char public_1000ef70; // OOB+0x0990
/* 0x1000ef71 */ LDATA extern char public_1000ef71; // OOB+0x0991
/* 0x1000ef72 */ LDATA extern char public_1000ef72; // OOB+0x0992
/* 0x1000ef73 */ LDATA extern char public_1000ef73; // OOB+0x0993
/* 0x1000ef74 */ LDATA extern char public_1000ef74; // OOB+0x0994
/* 0x1000ef75 */ LDATA extern char public_1000ef75; // OOB+0x0995
/* 0x1000ef76 */ LDATA extern char public_1000ef76; // OOB+0x0996
/* 0x1000ef77 */ LDATA extern char public_1000ef77; // OOB+0x0997
/* 0x1000ef78 */ LDATA extern char public_1000ef78; // OOB+0x0998
/* 0x1000ef79 */ LDATA extern char public_1000ef79; // OOB+0x0999
/* 0x1000ef7a */ LDATA extern char public_1000ef7a; // OOB+0x099a
/* 0x1000ef7b */ LDATA extern char public_1000ef7b; // OOB+0x099b
/* 0x1000ef7c */ LDATA extern char public_1000ef7c; // OOB+0x099c
/* 0x1000ef7d */ LDATA extern char public_1000ef7d; // OOB+0x099d
/* 0x1000ef7e */ LDATA extern char public_1000ef7e; // OOB+0x099e
/* 0x1000ef7f */ LDATA extern char public_1000ef7f; // OOB+0x099f
/* 0x1000ef80 */ LDATA extern char public_1000ef80; // OOB+0x09a0
/* 0x1000ef81 */ LDATA extern char public_1000ef81; // OOB+0x09a1
/* 0x1000ef82 */ LDATA extern char public_1000ef82; // OOB+0x09a2
/* 0x1000ef83 */ LDATA extern char public_1000ef83; // OOB+0x09a3
/* 0x1000ef84 */ LDATA extern char public_1000ef84; // OOB+0x09a4
/* 0x1000ef85 */ LDATA extern char public_1000ef85; // OOB+0x09a5
/* 0x1000ef86 */ LDATA extern char public_1000ef86; // OOB+0x09a6
/* 0x1000ef87 */ LDATA extern char public_1000ef87; // OOB+0x09a7
/* 0x1000ef88 */ LDATA extern char public_1000ef88; // OOB+0x09a8
/* 0x1000ef89 */ LDATA extern char public_1000ef89; // OOB+0x09a9
/* 0x1000ef8a */ LDATA extern char public_1000ef8a; // OOB+0x09aa
/* 0x1000ef8b */ LDATA extern char public_1000ef8b; // OOB+0x09ab
/* 0x1000ef8c */ LDATA extern char public_1000ef8c; // OOB+0x09ac
/* 0x1000ef8d */ LDATA extern char public_1000ef8d; // OOB+0x09ad
/* 0x1000ef8e */ LDATA extern char public_1000ef8e; // OOB+0x09ae
/* 0x1000ef8f */ LDATA extern char public_1000ef8f; // OOB+0x09af
/* 0x1000ef90 */ LDATA extern char public_1000ef90; // OOB+0x09b0
/* 0x1000ef91 */ LDATA extern char public_1000ef91; // OOB+0x09b1
/* 0x1000ef92 */ LDATA extern char public_1000ef92; // OOB+0x09b2
/* 0x1000ef93 */ LDATA extern char public_1000ef93; // OOB+0x09b3
/* 0x1000ef94 */ LDATA extern char public_1000ef94; // OOB+0x09b4
/* 0x1000ef95 */ LDATA extern char public_1000ef95; // OOB+0x09b5
/* 0x1000ef96 */ LDATA extern char public_1000ef96; // OOB+0x09b6
/* 0x1000ef97 */ LDATA extern char public_1000ef97; // OOB+0x09b7
/* 0x1000ef98 */ LDATA extern char public_1000ef98; // OOB+0x09b8
/* 0x1000ef99 */ LDATA extern char public_1000ef99; // OOB+0x09b9
/* 0x1000ef9a */ LDATA extern char public_1000ef9a; // OOB+0x09ba
/* 0x1000ef9b */ LDATA extern char public_1000ef9b; // OOB+0x09bb
/* 0x1000ef9c */ LDATA extern char public_1000ef9c; // OOB+0x09bc
/* 0x1000ef9d */ LDATA extern char public_1000ef9d; // OOB+0x09bd
/* 0x1000ef9e */ LDATA extern char public_1000ef9e; // OOB+0x09be
/* 0x1000ef9f */ LDATA extern char public_1000ef9f; // OOB+0x09bf
/* 0x1000efa0 */ LDATA extern char public_1000efa0; // OOB+0x09c0
/* 0x1000efa1 */ LDATA extern char public_1000efa1; // OOB+0x09c1
/* 0x1000efa2 */ LDATA extern char public_1000efa2; // OOB+0x09c2
/* 0x1000efa3 */ LDATA extern char public_1000efa3; // OOB+0x09c3
/* 0x1000efa4 */ LDATA extern char public_1000efa4; // OOB+0x09c4
/* 0x1000efa5 */ LDATA extern char public_1000efa5; // OOB+0x09c5
/* 0x1000efa6 */ LDATA extern char public_1000efa6; // OOB+0x09c6
/* 0x1000efa7 */ LDATA extern char public_1000efa7; // OOB+0x09c7
/* 0x1000efa8 */ LDATA extern char public_1000efa8; // OOB+0x09c8
/* 0x1000efa9 */ LDATA extern char public_1000efa9; // OOB+0x09c9
/* 0x1000efaa */ LDATA extern char public_1000efaa; // OOB+0x09ca
/* 0x1000efab */ LDATA extern char public_1000efab; // OOB+0x09cb
/* 0x1000efac */ LDATA extern char public_1000efac; // OOB+0x09cc
/* 0x1000efad */ LDATA extern char public_1000efad; // OOB+0x09cd
/* 0x1000efae */ LDATA extern char public_1000efae; // OOB+0x09ce
/* 0x1000efaf */ LDATA extern char public_1000efaf; // OOB+0x09cf
/* 0x1000efb0 */ LDATA extern char public_1000efb0; // OOB+0x09d0
/* 0x1000efb1 */ LDATA extern char public_1000efb1; // OOB+0x09d1
/* 0x1000efb2 */ LDATA extern char public_1000efb2; // OOB+0x09d2
/* 0x1000efb3 */ LDATA extern char public_1000efb3; // OOB+0x09d3
/* 0x1000efb4 */ LDATA extern char public_1000efb4; // OOB+0x09d4
/* 0x1000efb5 */ LDATA extern char public_1000efb5; // OOB+0x09d5
/* 0x1000efb6 */ LDATA extern char public_1000efb6; // OOB+0x09d6
/* 0x1000efb7 */ LDATA extern char public_1000efb7; // OOB+0x09d7
/* 0x1000efb8 */ LDATA extern char public_1000efb8; // OOB+0x09d8
/* 0x1000efb9 */ LDATA extern char public_1000efb9; // OOB+0x09d9
/* 0x1000efba */ LDATA extern char public_1000efba; // OOB+0x09da
/* 0x1000efbb */ LDATA extern char public_1000efbb; // OOB+0x09db
/* 0x1000efbc */ LDATA extern char public_1000efbc; // OOB+0x09dc
/* 0x1000efbd */ LDATA extern char public_1000efbd; // OOB+0x09dd
/* 0x1000efbe */ LDATA extern char public_1000efbe; // OOB+0x09de
/* 0x1000efbf */ LDATA extern char public_1000efbf; // OOB+0x09df
/* 0x1000efc0 */ LDATA extern char public_1000efc0; // OOB+0x09e0
/* 0x1000efc1 */ LDATA extern char public_1000efc1; // OOB+0x09e1
/* 0x1000efc2 */ LDATA extern char public_1000efc2; // OOB+0x09e2
/* 0x1000efc3 */ LDATA extern char public_1000efc3; // OOB+0x09e3
/* 0x1000efc4 */ LDATA extern char public_1000efc4; // OOB+0x09e4
/* 0x1000efc5 */ LDATA extern char public_1000efc5; // OOB+0x09e5
/* 0x1000efc6 */ LDATA extern char public_1000efc6; // OOB+0x09e6
/* 0x1000efc7 */ LDATA extern char public_1000efc7; // OOB+0x09e7
/* 0x1000efc8 */ LDATA extern char public_1000efc8; // OOB+0x09e8
/* 0x1000efc9 */ LDATA extern char public_1000efc9; // OOB+0x09e9
/* 0x1000efca */ LDATA extern char public_1000efca; // OOB+0x09ea
/* 0x1000efcb */ LDATA extern char public_1000efcb; // OOB+0x09eb
/* 0x1000efcc */ LDATA extern char public_1000efcc; // OOB+0x09ec
/* 0x1000efcd */ LDATA extern char public_1000efcd; // OOB+0x09ed
/* 0x1000efce */ LDATA extern char public_1000efce; // OOB+0x09ee
/* 0x1000efcf */ LDATA extern char public_1000efcf; // OOB+0x09ef
/* 0x1000efd0 */ LDATA extern char public_1000efd0; // OOB+0x09f0
/* 0x1000efd1 */ LDATA extern char public_1000efd1; // OOB+0x09f1
/* 0x1000efd2 */ LDATA extern char public_1000efd2; // OOB+0x09f2
/* 0x1000efd3 */ LDATA extern char public_1000efd3; // OOB+0x09f3
/* 0x1000efd4 */ LDATA extern char public_1000efd4; // OOB+0x09f4
/* 0x1000efd5 */ LDATA extern char public_1000efd5; // OOB+0x09f5
/* 0x1000efd6 */ LDATA extern char public_1000efd6; // OOB+0x09f6
/* 0x1000efd7 */ LDATA extern char public_1000efd7; // OOB+0x09f7
/* 0x1000efd8 */ LDATA extern char public_1000efd8; // OOB+0x09f8
/* 0x1000efd9 */ LDATA extern char public_1000efd9; // OOB+0x09f9
/* 0x1000efda */ LDATA extern char public_1000efda; // OOB+0x09fa
/* 0x1000efdb */ LDATA extern char public_1000efdb; // OOB+0x09fb
/* 0x1000efdc */ LDATA extern char public_1000efdc; // OOB+0x09fc
/* 0x1000efdd */ LDATA extern char public_1000efdd; // OOB+0x09fd
/* 0x1000efde */ LDATA extern char public_1000efde; // OOB+0x09fe
/* 0x1000efdf */ LDATA extern char public_1000efdf; // OOB+0x09ff
/* 0x1000efe0 */ LDATA extern char public_1000efe0; // OOB+0x0a00
/* 0x1000efe1 */ LDATA extern char public_1000efe1; // OOB+0x0a01
/* 0x1000efe2 */ LDATA extern char public_1000efe2; // OOB+0x0a02
/* 0x1000efe3 */ LDATA extern char public_1000efe3; // OOB+0x0a03
/* 0x1000efe4 */ LDATA extern char public_1000efe4; // OOB+0x0a04
/* 0x1000efe5 */ LDATA extern char public_1000efe5; // OOB+0x0a05
/* 0x1000efe6 */ LDATA extern char public_1000efe6; // OOB+0x0a06
/* 0x1000efe7 */ LDATA extern char public_1000efe7; // OOB+0x0a07
/* 0x1000efe8 */ LDATA extern char public_1000efe8; // OOB+0x0a08
/* 0x1000efe9 */ LDATA extern char public_1000efe9; // OOB+0x0a09
/* 0x1000efea */ LDATA extern char public_1000efea; // OOB+0x0a0a
/* 0x1000efeb */ LDATA extern char public_1000efeb; // OOB+0x0a0b
/* 0x1000efec */ LDATA extern char public_1000efec; // OOB+0x0a0c
/* 0x1000efed */ LDATA extern char public_1000efed; // OOB+0x0a0d
/* 0x1000efee */ LDATA extern char public_1000efee; // OOB+0x0a0e
/* 0x1000efef */ LDATA extern char public_1000efef; // OOB+0x0a0f
/* 0x1000eff0 */ LDATA extern char public_1000eff0; // OOB+0x0a10
/* 0x1000eff1 */ LDATA extern char public_1000eff1; // OOB+0x0a11
/* 0x1000eff2 */ LDATA extern char public_1000eff2; // OOB+0x0a12
/* 0x1000eff3 */ LDATA extern char public_1000eff3; // OOB+0x0a13
/* 0x1000eff4 */ LDATA extern char public_1000eff4; // OOB+0x0a14
/* 0x1000eff5 */ LDATA extern char public_1000eff5; // OOB+0x0a15
/* 0x1000eff6 */ LDATA extern char public_1000eff6; // OOB+0x0a16
/* 0x1000eff7 */ LDATA extern char public_1000eff7; // OOB+0x0a17
/* 0x1000eff8 */ LDATA extern char public_1000eff8; // OOB+0x0a18
/* 0x1000eff9 */ LDATA extern char public_1000eff9; // OOB+0x0a19
/* 0x1000effa */ LDATA extern char public_1000effa; // OOB+0x0a1a
/* 0x1000effb */ LDATA extern char public_1000effb; // OOB+0x0a1b
/* 0x1000effc */ LDATA extern char public_1000effc; // OOB+0x0a1c
/* 0x1000effd */ LDATA extern char public_1000effd; // OOB+0x0a1d
/* 0x1000effe */ LDATA extern char public_1000effe; // OOB+0x0a1e
/* 0x1000efff */ LDATA extern char public_1000efff; // OOB+0x0a1f
#ifdef __cplusplus
} // extern "C"
#endif // __cplusplus
