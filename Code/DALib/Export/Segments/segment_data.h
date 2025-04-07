#pragma once

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

#ifdef __INTELLISENSE__ /* ffs Visual Studio is so slow */
#define LDATA
#else
#define LDATA __declspec(allocate("l_data")) __declspec(align(1))
#endif // __INTELLISENSE__

/* 0x065ca000 */ LDATA extern char public_65ca000;
/* 0x065ca001 */ LDATA extern char public_65ca001;
/* 0x065ca002 */ LDATA extern char public_65ca002;
/* 0x065ca003 */ LDATA extern char public_65ca003;
/* 0x065ca004 */ LDATA extern void const* public_65ca004;
/* 0x065ca008 */ LDATA extern void const* public_65ca008;
/* 0x065ca00c */ LDATA extern void const* public_65ca00c;
/* 0x065ca010 */ LDATA extern void const* public_65ca010;
/* 0x065ca014 */ LDATA extern char public_65ca014;
/* 0x065ca015 */ LDATA extern char public_65ca015;
/* 0x065ca016 */ LDATA extern char public_65ca016;
/* 0x065ca017 */ LDATA extern char public_65ca017;
/* 0x065ca018 */ LDATA extern char public_65ca018;
/* 0x065ca019 */ LDATA extern char public_65ca019;
/* 0x065ca01a */ LDATA extern char public_65ca01a;
/* 0x065ca01b */ LDATA extern char public_65ca01b;
/* 0x065ca01c */ LDATA extern char public_65ca01c;
/* 0x065ca01d */ LDATA extern char public_65ca01d;
/* 0x065ca01e */ LDATA extern char public_65ca01e;
/* 0x065ca01f */ LDATA extern char public_65ca01f;
/* 0x065ca020 */ LDATA extern char public_65ca020;
/* 0x065ca021 */ LDATA extern char public_65ca021;
/* 0x065ca022 */ LDATA extern char public_65ca022;
/* 0x065ca023 */ LDATA extern char public_65ca023;
/* 0x065ca024 */ LDATA extern char public_65ca024; // '!'
/* 0x065ca025 */ LDATA extern char public_65ca025;
/* 0x065ca026 */ LDATA extern char public_65ca026;
/* 0x065ca027 */ LDATA extern char public_65ca027;
/* 0x065ca028 */ LDATA extern char public_65ca028;
/* 0x065ca029 */ LDATA extern char public_65ca029;
/* 0x065ca02a */ LDATA extern char public_65ca02a;
/* 0x065ca02b */ LDATA extern char public_65ca02b; // '@'
/* 0x065ca02c */ LDATA extern char public_65ca02c;
/* 0x065ca02d */ LDATA extern char public_65ca02d; // 'W'
/* 0x065ca02e */ LDATA extern char public_65ca02e;
/* 0x065ca02f */ LDATA extern char public_65ca02f;
/* 0x065ca030 */ LDATA extern char public_65ca030;
/* 0x065ca031 */ LDATA extern char public_65ca031; // '8'
/* 0x065ca032 */ LDATA extern char public_65ca032;
/* 0x065ca033 */ LDATA extern char public_65ca033;
/* 0x065ca034 */ LDATA extern char public_65ca034; // '2'
/* 0x065ca035 */ LDATA extern char public_65ca035; // '3'
/* 0x065ca036 */ LDATA extern char public_65ca036; // 'c'
/* 0x065ca037 */ LDATA extern char public_65ca037; // 'v'
/* 0x065ca038 */ LDATA extern char public_65ca038;
/* 0x065ca039 */ LDATA extern char public_65ca039; // 'R'
/* 0x065ca03a */ LDATA extern char public_65ca03a; // '`'
/* 0x065ca03b */ LDATA extern char public_65ca03b; // 'D'
/* 0x065ca03c */ LDATA extern char public_65ca03c;
/* 0x065ca03d */ LDATA extern char public_65ca03d;
/* 0x065ca03e */ LDATA extern char public_65ca03e; // '5'
/* 0x065ca03f */ LDATA extern char public_65ca03f; // 'A'
/* 0x065ca040 */ LDATA extern char public_65ca040;
/* 0x065ca041 */ LDATA extern char public_65ca041; // 'D'
/* 0x065ca042 */ LDATA extern char public_65ca042; // '<'
/* 0x065ca043 */ LDATA extern char public_65ca043;
/* 0x065ca044 */ LDATA extern char public_65ca044; // '''
/* 0x065ca045 */ LDATA extern char public_65ca045;
/* 0x065ca046 */ LDATA extern char public_65ca046;
/* 0x065ca047 */ LDATA extern char public_65ca047;
/* 0x065ca048 */ LDATA extern char public_65ca048;
/* 0x065ca049 */ LDATA extern char public_65ca049;
/* 0x065ca04a */ LDATA extern char public_65ca04a;
/* 0x065ca04b */ LDATA extern char public_65ca04b; // '@'
/* 0x065ca04c */ LDATA extern char public_65ca04c;
/* 0x065ca04d */ LDATA extern char public_65ca04d; // 'W'
/* 0x065ca04e */ LDATA extern char public_65ca04e;
/* 0x065ca04f */ LDATA extern char public_65ca04f;
/* 0x065ca050 */ LDATA extern char public_65ca050;
/* 0x065ca051 */ LDATA extern char public_65ca051; // '8'
/* 0x065ca052 */ LDATA extern char public_65ca052;
/* 0x065ca053 */ LDATA extern char public_65ca053;
/* 0x065ca054 */ LDATA extern char public_65ca054; // '&'
/* 0x065ca055 */ LDATA extern char public_65ca055;
/* 0x065ca056 */ LDATA extern char public_65ca056;
/* 0x065ca057 */ LDATA extern char public_65ca057;
/* 0x065ca058 */ LDATA extern char public_65ca058;
/* 0x065ca059 */ LDATA extern char public_65ca059;
/* 0x065ca05a */ LDATA extern char public_65ca05a;
/* 0x065ca05b */ LDATA extern char public_65ca05b; // '@'
/* 0x065ca05c */ LDATA extern char public_65ca05c;
/* 0x065ca05d */ LDATA extern char public_65ca05d; // 'W'
/* 0x065ca05e */ LDATA extern char public_65ca05e;
/* 0x065ca05f */ LDATA extern char public_65ca05f;
/* 0x065ca060 */ LDATA extern char public_65ca060;
/* 0x065ca061 */ LDATA extern char public_65ca061; // '8'
/* 0x065ca062 */ LDATA extern char public_65ca062;
/* 0x065ca063 */ LDATA extern char public_65ca063;
/* 0x065ca064 */ LDATA extern char public_65ca064;
/* 0x065ca065 */ LDATA extern char public_65ca065;
/* 0x065ca066 */ LDATA extern char public_65ca066;
/* 0x065ca067 */ LDATA extern char public_65ca067;
/* 0x065ca068 */ LDATA extern char public_65ca068;
/* 0x065ca069 */ LDATA extern char public_65ca069;
/* 0x065ca06a */ LDATA extern char public_65ca06a;
/* 0x065ca06b */ LDATA extern char public_65ca06b;
/* 0x065ca06c */ LDATA extern char public_65ca06c;
/* 0x065ca06d */ LDATA extern char public_65ca06d;
/* 0x065ca06e */ LDATA extern char public_65ca06e;
/* 0x065ca06f */ LDATA extern char public_65ca06f;
/* 0x065ca070 */ LDATA extern char public_65ca070;
/* 0x065ca071 */ LDATA extern char public_65ca071;
/* 0x065ca072 */ LDATA extern char public_65ca072;
/* 0x065ca073 */ LDATA extern char public_65ca073;
/* 0x065ca074 */ LDATA extern char public_65ca074;
/* 0x065ca075 */ LDATA extern char public_65ca075;
/* 0x065ca076 */ LDATA extern char public_65ca076;
/* 0x065ca077 */ LDATA extern char public_65ca077;
/* 0x065ca078 */ LDATA extern char public_65ca078;
/* 0x065ca079 */ LDATA extern char public_65ca079;
/* 0x065ca07a */ LDATA extern char public_65ca07a;
/* 0x065ca07b */ LDATA extern char public_65ca07b;
/* 0x065ca07c */ LDATA extern char public_65ca07c;
/* 0x065ca07d */ LDATA extern char public_65ca07d;
/* 0x065ca07e */ LDATA extern char public_65ca07e;
/* 0x065ca07f */ LDATA extern char public_65ca07f;
/* 0x065ca080 */ LDATA extern char public_65ca080;
/* 0x065ca081 */ LDATA extern char public_65ca081;
/* 0x065ca082 */ LDATA extern char public_65ca082;
/* 0x065ca083 */ LDATA extern char public_65ca083;
/* 0x065ca084 */ LDATA extern char public_65ca084;
/* 0x065ca085 */ LDATA extern char public_65ca085;
/* 0x065ca086 */ LDATA extern char public_65ca086;
/* 0x065ca087 */ LDATA extern char public_65ca087;
/* 0x065ca088 */ LDATA extern char public_65ca088;
/* 0x065ca089 */ LDATA extern char public_65ca089;
/* 0x065ca08a */ LDATA extern char public_65ca08a;
/* 0x065ca08b */ LDATA extern char public_65ca08b;
/* 0x065ca08c */ LDATA extern char public_65ca08c;
/* 0x065ca08d */ LDATA extern char public_65ca08d;
/* 0x065ca08e */ LDATA extern char public_65ca08e;
/* 0x065ca08f */ LDATA extern char public_65ca08f;
/* 0x065ca090 */ LDATA extern char public_65ca090;
/* 0x065ca091 */ LDATA extern char public_65ca091;
/* 0x065ca092 */ LDATA extern char public_65ca092;
/* 0x065ca093 */ LDATA extern char public_65ca093;
/* 0x065ca094 */ LDATA extern char public_65ca094;
/* 0x065ca095 */ LDATA extern char public_65ca095;
/* 0x065ca096 */ LDATA extern char public_65ca096;
/* 0x065ca097 */ LDATA extern char public_65ca097;
/* 0x065ca098 */ LDATA extern char public_65ca098;
/* 0x065ca099 */ LDATA extern char public_65ca099;
/* 0x065ca09a */ LDATA extern char public_65ca09a;
/* 0x065ca09b */ LDATA extern char public_65ca09b;
/* 0x065ca09c */ LDATA extern char public_65ca09c;
/* 0x065ca09d */ LDATA extern char public_65ca09d;
/* 0x065ca09e */ LDATA extern char public_65ca09e;
/* 0x065ca09f */ LDATA extern char public_65ca09f;
/* 0x065ca0a0 */ LDATA extern char public_65ca0a0;
/* 0x065ca0a1 */ LDATA extern char public_65ca0a1;
/* 0x065ca0a2 */ LDATA extern char public_65ca0a2;
/* 0x065ca0a3 */ LDATA extern char public_65ca0a3;
/* 0x065ca0a4 */ LDATA extern char public_65ca0a4;
/* 0x065ca0a5 */ LDATA extern char public_65ca0a5;
/* 0x065ca0a6 */ LDATA extern char public_65ca0a6;
/* 0x065ca0a7 */ LDATA extern char public_65ca0a7;
/* 0x065ca0a8 */ LDATA extern char public_65ca0a8;
/* 0x065ca0a9 */ LDATA extern char public_65ca0a9;
/* 0x065ca0aa */ LDATA extern char public_65ca0aa;
/* 0x065ca0ab */ LDATA extern char public_65ca0ab;
/* 0x065ca0ac */ LDATA extern char public_65ca0ac;
/* 0x065ca0ad */ LDATA extern char public_65ca0ad;
/* 0x065ca0ae */ LDATA extern char public_65ca0ae;
/* 0x065ca0af */ LDATA extern char public_65ca0af;
/* 0x065ca0b0 */ LDATA extern char public_65ca0b0;
/* 0x065ca0b1 */ LDATA extern char public_65ca0b1;
/* 0x065ca0b2 */ LDATA extern char public_65ca0b2;
/* 0x065ca0b3 */ LDATA extern char public_65ca0b3;
/* 0x065ca0b4 */ LDATA extern char public_65ca0b4;
/* 0x065ca0b5 */ LDATA extern char public_65ca0b5;
/* 0x065ca0b6 */ LDATA extern char public_65ca0b6;
/* 0x065ca0b7 */ LDATA extern char public_65ca0b7;
/* 0x065ca0b8 */ LDATA extern char public_65ca0b8;
/* 0x065ca0b9 */ LDATA extern char public_65ca0b9;
/* 0x065ca0ba */ LDATA extern char public_65ca0ba;
/* 0x065ca0bb */ LDATA extern char public_65ca0bb;
/* 0x065ca0bc */ LDATA extern char public_65ca0bc;
/* 0x065ca0bd */ LDATA extern char public_65ca0bd;
/* 0x065ca0be */ LDATA extern char public_65ca0be;
/* 0x065ca0bf */ LDATA extern char public_65ca0bf;
/* 0x065ca0c0 */ LDATA extern char public_65ca0c0;
/* 0x065ca0c1 */ LDATA extern char public_65ca0c1;
/* 0x065ca0c2 */ LDATA extern char public_65ca0c2;
/* 0x065ca0c3 */ LDATA extern char public_65ca0c3;
/* 0x065ca0c4 */ LDATA extern char public_65ca0c4;
/* 0x065ca0c5 */ LDATA extern char public_65ca0c5;
/* 0x065ca0c6 */ LDATA extern char public_65ca0c6;
/* 0x065ca0c7 */ LDATA extern char public_65ca0c7;
/* 0x065ca0c8 */ LDATA extern char public_65ca0c8;
/* 0x065ca0c9 */ LDATA extern char public_65ca0c9;
/* 0x065ca0ca */ LDATA extern char public_65ca0ca;
/* 0x065ca0cb */ LDATA extern char public_65ca0cb;
/* 0x065ca0cc */ LDATA extern char public_65ca0cc;
/* 0x065ca0cd */ LDATA extern char public_65ca0cd;
/* 0x065ca0ce */ LDATA extern char public_65ca0ce;
/* 0x065ca0cf */ LDATA extern char public_65ca0cf;
/* 0x065ca0d0 */ LDATA extern char public_65ca0d0;
/* 0x065ca0d1 */ LDATA extern char public_65ca0d1;
/* 0x065ca0d2 */ LDATA extern char public_65ca0d2;
/* 0x065ca0d3 */ LDATA extern char public_65ca0d3;
/* 0x065ca0d4 */ LDATA extern char public_65ca0d4;
/* 0x065ca0d5 */ LDATA extern char public_65ca0d5;
/* 0x065ca0d6 */ LDATA extern char public_65ca0d6;
/* 0x065ca0d7 */ LDATA extern char public_65ca0d7;
/* 0x065ca0d8 */ LDATA extern char public_65ca0d8;
/* 0x065ca0d9 */ LDATA extern char public_65ca0d9;
/* 0x065ca0da */ LDATA extern char public_65ca0da;
/* 0x065ca0db */ LDATA extern char public_65ca0db;
/* 0x065ca0dc */ LDATA extern char public_65ca0dc;
/* 0x065ca0dd */ LDATA extern char public_65ca0dd;
/* 0x065ca0de */ LDATA extern char public_65ca0de;
/* 0x065ca0df */ LDATA extern char public_65ca0df;
/* 0x065ca0e0 */ LDATA extern char public_65ca0e0;
/* 0x065ca0e1 */ LDATA extern char public_65ca0e1;
/* 0x065ca0e2 */ LDATA extern char public_65ca0e2;
/* 0x065ca0e3 */ LDATA extern char public_65ca0e3;
/* 0x065ca0e4 */ LDATA extern char public_65ca0e4;
/* 0x065ca0e5 */ LDATA extern char public_65ca0e5;
/* 0x065ca0e6 */ LDATA extern char public_65ca0e6;
/* 0x065ca0e7 */ LDATA extern char public_65ca0e7;
/* 0x065ca0e8 */ LDATA extern char public_65ca0e8;
/* 0x065ca0e9 */ LDATA extern char public_65ca0e9;
/* 0x065ca0ea */ LDATA extern char public_65ca0ea;
/* 0x065ca0eb */ LDATA extern char public_65ca0eb;
/* 0x065ca0ec */ LDATA extern char public_65ca0ec;
/* 0x065ca0ed */ LDATA extern char public_65ca0ed;
/* 0x065ca0ee */ LDATA extern char public_65ca0ee;
/* 0x065ca0ef */ LDATA extern char public_65ca0ef;
/* 0x065ca0f0 */ LDATA extern char public_65ca0f0;
/* 0x065ca0f1 */ LDATA extern char public_65ca0f1;
/* 0x065ca0f2 */ LDATA extern char public_65ca0f2;
/* 0x065ca0f3 */ LDATA extern char public_65ca0f3;
/* 0x065ca0f4 */ LDATA extern char public_65ca0f4;
/* 0x065ca0f5 */ LDATA extern char public_65ca0f5;
/* 0x065ca0f6 */ LDATA extern char public_65ca0f6;
/* 0x065ca0f7 */ LDATA extern char public_65ca0f7;
/* 0x065ca0f8 */ LDATA extern char public_65ca0f8;
/* 0x065ca0f9 */ LDATA extern char public_65ca0f9;
/* 0x065ca0fa */ LDATA extern char public_65ca0fa;
/* 0x065ca0fb */ LDATA extern char public_65ca0fb;
/* 0x065ca0fc */ LDATA extern char public_65ca0fc;
/* 0x065ca0fd */ LDATA extern char public_65ca0fd;
/* 0x065ca0fe */ LDATA extern char public_65ca0fe;
/* 0x065ca0ff */ LDATA extern char public_65ca0ff;
/* 0x065ca100 */ LDATA extern char public_65ca100;
/* 0x065ca101 */ LDATA extern char public_65ca101;
/* 0x065ca102 */ LDATA extern char public_65ca102;
/* 0x065ca103 */ LDATA extern char public_65ca103;
/* 0x065ca104 */ LDATA extern char public_65ca104;
/* 0x065ca105 */ LDATA extern char public_65ca105;
/* 0x065ca106 */ LDATA extern char public_65ca106;
/* 0x065ca107 */ LDATA extern char public_65ca107;
/* 0x065ca108 */ LDATA extern char public_65ca108;
/* 0x065ca109 */ LDATA extern char public_65ca109;
/* 0x065ca10a */ LDATA extern char public_65ca10a;
/* 0x065ca10b */ LDATA extern char public_65ca10b;
/* 0x065ca10c */ LDATA extern char public_65ca10c;
/* 0x065ca10d */ LDATA extern char public_65ca10d;
/* 0x065ca10e */ LDATA extern char public_65ca10e;
/* 0x065ca10f */ LDATA extern char public_65ca10f;
/* 0x065ca110 */ LDATA extern char public_65ca110;
/* 0x065ca111 */ LDATA extern char public_65ca111;
/* 0x065ca112 */ LDATA extern char public_65ca112;
/* 0x065ca113 */ LDATA extern char public_65ca113;
/* 0x065ca114 */ LDATA extern char public_65ca114;
/* 0x065ca115 */ LDATA extern char public_65ca115;
/* 0x065ca116 */ LDATA extern char public_65ca116;
/* 0x065ca117 */ LDATA extern char public_65ca117;
/* 0x065ca118 */ LDATA extern char public_65ca118;
/* 0x065ca119 */ LDATA extern char public_65ca119;
/* 0x065ca11a */ LDATA extern char public_65ca11a;
/* 0x065ca11b */ LDATA extern char public_65ca11b;
/* 0x065ca11c */ LDATA extern char public_65ca11c;
/* 0x065ca11d */ LDATA extern char public_65ca11d;
/* 0x065ca11e */ LDATA extern char public_65ca11e;
/* 0x065ca11f */ LDATA extern char public_65ca11f;
/* 0x065ca120 */ LDATA extern char public_65ca120;
/* 0x065ca121 */ LDATA extern char public_65ca121;
/* 0x065ca122 */ LDATA extern char public_65ca122;
/* 0x065ca123 */ LDATA extern char public_65ca123;
/* 0x065ca124 */ LDATA extern char public_65ca124;
/* 0x065ca125 */ LDATA extern char public_65ca125;
/* 0x065ca126 */ LDATA extern char public_65ca126;
/* 0x065ca127 */ LDATA extern char public_65ca127;
/* 0x065ca128 */ LDATA extern char public_65ca128;
/* 0x065ca129 */ LDATA extern char public_65ca129;
/* 0x065ca12a */ LDATA extern char public_65ca12a;
/* 0x065ca12b */ LDATA extern char public_65ca12b;
/* 0x065ca12c */ LDATA extern char public_65ca12c;
/* 0x065ca12d */ LDATA extern char public_65ca12d;
/* 0x065ca12e */ LDATA extern char public_65ca12e;
/* 0x065ca12f */ LDATA extern char public_65ca12f;
/* 0x065ca130 */ LDATA extern char public_65ca130;
/* 0x065ca131 */ LDATA extern char public_65ca131;
/* 0x065ca132 */ LDATA extern char public_65ca132;
/* 0x065ca133 */ LDATA extern char public_65ca133;
/* 0x065ca134 */ LDATA extern char public_65ca134;
/* 0x065ca135 */ LDATA extern char public_65ca135;
/* 0x065ca136 */ LDATA extern char public_65ca136;
/* 0x065ca137 */ LDATA extern char public_65ca137;
/* 0x065ca138 */ LDATA extern char public_65ca138;
/* 0x065ca139 */ LDATA extern char public_65ca139;
/* 0x065ca13a */ LDATA extern char public_65ca13a;
/* 0x065ca13b */ LDATA extern char public_65ca13b;
/* 0x065ca13c */ LDATA extern char public_65ca13c;
/* 0x065ca13d */ LDATA extern char public_65ca13d;
/* 0x065ca13e */ LDATA extern char public_65ca13e;
/* 0x065ca13f */ LDATA extern char public_65ca13f;
/* 0x065ca140 */ LDATA extern char public_65ca140;
/* 0x065ca141 */ LDATA extern char public_65ca141;
/* 0x065ca142 */ LDATA extern char public_65ca142;
/* 0x065ca143 */ LDATA extern char public_65ca143;
/* 0x065ca144 */ LDATA extern char public_65ca144;
/* 0x065ca145 */ LDATA extern char public_65ca145;
/* 0x065ca146 */ LDATA extern char public_65ca146;
/* 0x065ca147 */ LDATA extern char public_65ca147;
/* 0x065ca148 */ LDATA extern char public_65ca148;
/* 0x065ca149 */ LDATA extern char public_65ca149;
/* 0x065ca14a */ LDATA extern char public_65ca14a;
/* 0x065ca14b */ LDATA extern char public_65ca14b;
/* 0x065ca14c */ LDATA extern char public_65ca14c;
/* 0x065ca14d */ LDATA extern char public_65ca14d;
/* 0x065ca14e */ LDATA extern char public_65ca14e;
/* 0x065ca14f */ LDATA extern char public_65ca14f;
/* 0x065ca150 */ LDATA extern char public_65ca150;
/* 0x065ca151 */ LDATA extern char public_65ca151;
/* 0x065ca152 */ LDATA extern char public_65ca152;
/* 0x065ca153 */ LDATA extern char public_65ca153;
/* 0x065ca154 */ LDATA extern char public_65ca154;
/* 0x065ca155 */ LDATA extern char public_65ca155;
/* 0x065ca156 */ LDATA extern char public_65ca156;
/* 0x065ca157 */ LDATA extern char public_65ca157;
/* 0x065ca158 */ LDATA extern char public_65ca158;
/* 0x065ca159 */ LDATA extern char public_65ca159;
/* 0x065ca15a */ LDATA extern char public_65ca15a;
/* 0x065ca15b */ LDATA extern char public_65ca15b;
/* 0x065ca15c */ LDATA extern char public_65ca15c;
/* 0x065ca15d */ LDATA extern char public_65ca15d;
/* 0x065ca15e */ LDATA extern char public_65ca15e;
/* 0x065ca15f */ LDATA extern char public_65ca15f;
/* 0x065ca160 */ LDATA extern char public_65ca160;
/* 0x065ca161 */ LDATA extern char public_65ca161;
/* 0x065ca162 */ LDATA extern char public_65ca162;
/* 0x065ca163 */ LDATA extern char public_65ca163;
/* 0x065ca164 */ LDATA extern char public_65ca164;
/* 0x065ca165 */ LDATA extern char public_65ca165;
/* 0x065ca166 */ LDATA extern char public_65ca166;
/* 0x065ca167 */ LDATA extern char public_65ca167;
/* 0x065ca168 */ LDATA extern char public_65ca168;
/* 0x065ca169 */ LDATA extern char public_65ca169;
/* 0x065ca16a */ LDATA extern char public_65ca16a;
/* 0x065ca16b */ LDATA extern char public_65ca16b;
/* 0x065ca16c */ LDATA extern char public_65ca16c;
/* 0x065ca16d */ LDATA extern char public_65ca16d;
/* 0x065ca16e */ LDATA extern char public_65ca16e;
/* 0x065ca16f */ LDATA extern char public_65ca16f;
/* 0x065ca170 */ LDATA extern char public_65ca170;
/* 0x065ca171 */ LDATA extern char public_65ca171;
/* 0x065ca172 */ LDATA extern char public_65ca172;
/* 0x065ca173 */ LDATA extern char public_65ca173;
/* 0x065ca174 */ LDATA extern char public_65ca174;
/* 0x065ca175 */ LDATA extern char public_65ca175;
/* 0x065ca176 */ LDATA extern char public_65ca176;
/* 0x065ca177 */ LDATA extern char public_65ca177;
/* 0x065ca178 */ LDATA extern char public_65ca178;
/* 0x065ca179 */ LDATA extern char public_65ca179;
/* 0x065ca17a */ LDATA extern char public_65ca17a;
/* 0x065ca17b */ LDATA extern char public_65ca17b;
/* 0x065ca17c */ LDATA extern char public_65ca17c;
/* 0x065ca17d */ LDATA extern char public_65ca17d;
/* 0x065ca17e */ LDATA extern char public_65ca17e;
/* 0x065ca17f */ LDATA extern char public_65ca17f;
/* 0x065ca180 */ LDATA extern char public_65ca180;
/* 0x065ca181 */ LDATA extern char public_65ca181;
/* 0x065ca182 */ LDATA extern char public_65ca182;
/* 0x065ca183 */ LDATA extern char public_65ca183;
/* 0x065ca184 */ LDATA extern char public_65ca184;
/* 0x065ca185 */ LDATA extern char public_65ca185;
/* 0x065ca186 */ LDATA extern char public_65ca186;
/* 0x065ca187 */ LDATA extern char public_65ca187;
/* 0x065ca188 */ LDATA extern char public_65ca188;
/* 0x065ca189 */ LDATA extern char public_65ca189;
/* 0x065ca18a */ LDATA extern char public_65ca18a;
/* 0x065ca18b */ LDATA extern char public_65ca18b;
/* 0x065ca18c */ LDATA extern char public_65ca18c;
/* 0x065ca18d */ LDATA extern char public_65ca18d;
/* 0x065ca18e */ LDATA extern char public_65ca18e;
/* 0x065ca18f */ LDATA extern char public_65ca18f;
/* 0x065ca190 */ LDATA extern char public_65ca190;
/* 0x065ca191 */ LDATA extern char public_65ca191;
/* 0x065ca192 */ LDATA extern char public_65ca192;
/* 0x065ca193 */ LDATA extern char public_65ca193;
/* 0x065ca194 */ LDATA extern char public_65ca194;
/* 0x065ca195 */ LDATA extern char public_65ca195;
/* 0x065ca196 */ LDATA extern char public_65ca196;
/* 0x065ca197 */ LDATA extern char public_65ca197;
/* 0x065ca198 */ LDATA extern char public_65ca198;
/* 0x065ca199 */ LDATA extern char public_65ca199;
/* 0x065ca19a */ LDATA extern char public_65ca19a;
/* 0x065ca19b */ LDATA extern char public_65ca19b;
/* 0x065ca19c */ LDATA extern char public_65ca19c;
/* 0x065ca19d */ LDATA extern char public_65ca19d;
/* 0x065ca19e */ LDATA extern char public_65ca19e;
/* 0x065ca19f */ LDATA extern char public_65ca19f;
/* 0x065ca1a0 */ LDATA extern char public_65ca1a0;
/* 0x065ca1a1 */ LDATA extern char public_65ca1a1;
/* 0x065ca1a2 */ LDATA extern char public_65ca1a2;
/* 0x065ca1a3 */ LDATA extern char public_65ca1a3;
/* 0x065ca1a4 */ LDATA extern char public_65ca1a4;
/* 0x065ca1a5 */ LDATA extern char public_65ca1a5;
/* 0x065ca1a6 */ LDATA extern char public_65ca1a6;
/* 0x065ca1a7 */ LDATA extern char public_65ca1a7;
/* 0x065ca1a8 */ LDATA extern char public_65ca1a8;
/* 0x065ca1a9 */ LDATA extern char public_65ca1a9;
/* 0x065ca1aa */ LDATA extern char public_65ca1aa;
/* 0x065ca1ab */ LDATA extern char public_65ca1ab;
/* 0x065ca1ac */ LDATA extern char public_65ca1ac;
/* 0x065ca1ad */ LDATA extern char public_65ca1ad;
/* 0x065ca1ae */ LDATA extern char public_65ca1ae;
/* 0x065ca1af */ LDATA extern char public_65ca1af;
/* 0x065ca1b0 */ LDATA extern char public_65ca1b0;
/* 0x065ca1b1 */ LDATA extern char public_65ca1b1;
/* 0x065ca1b2 */ LDATA extern char public_65ca1b2;
/* 0x065ca1b3 */ LDATA extern char public_65ca1b3;
/* 0x065ca1b4 */ LDATA extern char public_65ca1b4;
/* 0x065ca1b5 */ LDATA extern char public_65ca1b5;
/* 0x065ca1b6 */ LDATA extern char public_65ca1b6;
/* 0x065ca1b7 */ LDATA extern char public_65ca1b7;
/* 0x065ca1b8 */ LDATA extern char public_65ca1b8;
/* 0x065ca1b9 */ LDATA extern char public_65ca1b9;
/* 0x065ca1ba */ LDATA extern char public_65ca1ba;
/* 0x065ca1bb */ LDATA extern char public_65ca1bb;
/* 0x065ca1bc */ LDATA extern char public_65ca1bc;
/* 0x065ca1bd */ LDATA extern char public_65ca1bd;
/* 0x065ca1be */ LDATA extern char public_65ca1be;
/* 0x065ca1bf */ LDATA extern char public_65ca1bf;
/* 0x065ca1c0 */ LDATA extern char public_65ca1c0;
/* 0x065ca1c1 */ LDATA extern char public_65ca1c1;
/* 0x065ca1c2 */ LDATA extern char public_65ca1c2;
/* 0x065ca1c3 */ LDATA extern char public_65ca1c3;
/* 0x065ca1c4 */ LDATA extern char public_65ca1c4;
/* 0x065ca1c5 */ LDATA extern char public_65ca1c5;
/* 0x065ca1c6 */ LDATA extern char public_65ca1c6;
/* 0x065ca1c7 */ LDATA extern char public_65ca1c7;
/* 0x065ca1c8 */ LDATA extern char public_65ca1c8;
/* 0x065ca1c9 */ LDATA extern char public_65ca1c9;
/* 0x065ca1ca */ LDATA extern char public_65ca1ca;
/* 0x065ca1cb */ LDATA extern char public_65ca1cb;
/* 0x065ca1cc */ LDATA extern char public_65ca1cc;
/* 0x065ca1cd */ LDATA extern char public_65ca1cd;
/* 0x065ca1ce */ LDATA extern char public_65ca1ce;
/* 0x065ca1cf */ LDATA extern char public_65ca1cf;
/* 0x065ca1d0 */ LDATA extern char public_65ca1d0;
/* 0x065ca1d1 */ LDATA extern char public_65ca1d1;
/* 0x065ca1d2 */ LDATA extern char public_65ca1d2;
/* 0x065ca1d3 */ LDATA extern char public_65ca1d3;
/* 0x065ca1d4 */ LDATA extern char public_65ca1d4;
/* 0x065ca1d5 */ LDATA extern char public_65ca1d5;
/* 0x065ca1d6 */ LDATA extern char public_65ca1d6;
/* 0x065ca1d7 */ LDATA extern char public_65ca1d7;
/* 0x065ca1d8 */ LDATA extern char public_65ca1d8;
/* 0x065ca1d9 */ LDATA extern char public_65ca1d9;
/* 0x065ca1da */ LDATA extern char public_65ca1da;
/* 0x065ca1db */ LDATA extern char public_65ca1db;
/* 0x065ca1dc */ LDATA extern char public_65ca1dc;
/* 0x065ca1dd */ LDATA extern char public_65ca1dd;
/* 0x065ca1de */ LDATA extern char public_65ca1de;
/* 0x065ca1df */ LDATA extern char public_65ca1df;
/* 0x065ca1e0 */ LDATA extern char public_65ca1e0;
/* 0x065ca1e1 */ LDATA extern char public_65ca1e1;
/* 0x065ca1e2 */ LDATA extern char public_65ca1e2;
/* 0x065ca1e3 */ LDATA extern char public_65ca1e3;
/* 0x065ca1e4 */ LDATA extern char public_65ca1e4;
/* 0x065ca1e5 */ LDATA extern char public_65ca1e5;
/* 0x065ca1e6 */ LDATA extern char public_65ca1e6;
/* 0x065ca1e7 */ LDATA extern char public_65ca1e7;
/* 0x065ca1e8 */ LDATA extern char public_65ca1e8;
/* 0x065ca1e9 */ LDATA extern char public_65ca1e9;
/* 0x065ca1ea */ LDATA extern char public_65ca1ea;
/* 0x065ca1eb */ LDATA extern char public_65ca1eb;
/* 0x065ca1ec */ LDATA extern char public_65ca1ec;
/* 0x065ca1ed */ LDATA extern char public_65ca1ed;
/* 0x065ca1ee */ LDATA extern char public_65ca1ee;
/* 0x065ca1ef */ LDATA extern char public_65ca1ef;
/* 0x065ca1f0 */ LDATA extern char public_65ca1f0;
/* 0x065ca1f1 */ LDATA extern char public_65ca1f1;
/* 0x065ca1f2 */ LDATA extern char public_65ca1f2;
/* 0x065ca1f3 */ LDATA extern char public_65ca1f3;
/* 0x065ca1f4 */ LDATA extern char public_65ca1f4;
/* 0x065ca1f5 */ LDATA extern char public_65ca1f5;
/* 0x065ca1f6 */ LDATA extern char public_65ca1f6;
/* 0x065ca1f7 */ LDATA extern char public_65ca1f7;
/* 0x065ca1f8 */ LDATA extern char public_65ca1f8;
/* 0x065ca1f9 */ LDATA extern char public_65ca1f9;
/* 0x065ca1fa */ LDATA extern char public_65ca1fa;
/* 0x065ca1fb */ LDATA extern char public_65ca1fb;
/* 0x065ca1fc */ LDATA extern char public_65ca1fc;
/* 0x065ca1fd */ LDATA extern char public_65ca1fd;
/* 0x065ca1fe */ LDATA extern char public_65ca1fe;
/* 0x065ca1ff */ LDATA extern char public_65ca1ff;
/* 0x065ca200 */ LDATA extern char public_65ca200; // ?
/* 0x065ca201 */ LDATA extern char public_65ca201; // ?
/* 0x065ca202 */ LDATA extern char public_65ca202; // ?
/* 0x065ca203 */ LDATA extern char public_65ca203; // ?
/* 0x065ca204 */ LDATA extern char public_65ca204; // ?
/* 0x065ca205 */ LDATA extern char public_65ca205; // ?
/* 0x065ca206 */ LDATA extern char public_65ca206; // ?
/* 0x065ca207 */ LDATA extern char public_65ca207; // ?
/* 0x065ca208 */ LDATA extern char public_65ca208; // ?
/* 0x065ca209 */ LDATA extern char public_65ca209; // ?
/* 0x065ca20a */ LDATA extern char public_65ca20a; // ?
/* 0x065ca20b */ LDATA extern char public_65ca20b; // ?
/* 0x065ca20c */ LDATA extern char public_65ca20c; // ?
/* 0x065ca20d */ LDATA extern char public_65ca20d; // ?
/* 0x065ca20e */ LDATA extern char public_65ca20e; // ?
/* 0x065ca20f */ LDATA extern char public_65ca20f; // ?
/* 0x065ca210 */ LDATA extern char public_65ca210; // ?
/* 0x065ca211 */ LDATA extern char public_65ca211; // ?
/* 0x065ca212 */ LDATA extern char public_65ca212; // ?
/* 0x065ca213 */ LDATA extern char public_65ca213; // ?
/* 0x065ca214 */ LDATA extern char public_65ca214; // ?
/* 0x065ca215 */ LDATA extern char public_65ca215; // ?
/* 0x065ca216 */ LDATA extern char public_65ca216; // ?
/* 0x065ca217 */ LDATA extern char public_65ca217; // ?
/* 0x065ca218 */ LDATA extern char public_65ca218; // ?
/* 0x065ca219 */ LDATA extern char public_65ca219; // ?
/* 0x065ca21a */ LDATA extern char public_65ca21a; // ?
/* 0x065ca21b */ LDATA extern char public_65ca21b; // ?
/* 0x065ca21c */ LDATA extern char public_65ca21c; // ?
/* 0x065ca21d */ LDATA extern char public_65ca21d; // ?
/* 0x065ca21e */ LDATA extern char public_65ca21e; // ?
/* 0x065ca21f */ LDATA extern char public_65ca21f; // ?
/* 0x065ca220 */ LDATA extern char public_65ca220; // ?
/* 0x065ca221 */ LDATA extern char public_65ca221; // ?
/* 0x065ca222 */ LDATA extern char public_65ca222; // ?
/* 0x065ca223 */ LDATA extern char public_65ca223; // ?
/* 0x065ca224 */ LDATA extern char public_65ca224; // ?
/* 0x065ca225 */ LDATA extern char public_65ca225; // ?
/* 0x065ca226 */ LDATA extern char public_65ca226; // ?
/* 0x065ca227 */ LDATA extern char public_65ca227; // ?
/* 0x065ca228 */ LDATA extern char public_65ca228; // ?
/* 0x065ca229 */ LDATA extern char public_65ca229; // ?
/* 0x065ca22a */ LDATA extern char public_65ca22a; // ?
/* 0x065ca22b */ LDATA extern char public_65ca22b; // ?
/* 0x065ca22c */ LDATA extern char public_65ca22c; // ?
/* 0x065ca22d */ LDATA extern char public_65ca22d; // ?
/* 0x065ca22e */ LDATA extern char public_65ca22e; // ?
/* 0x065ca22f */ LDATA extern char public_65ca22f; // ?
/* 0x065ca230 */ LDATA extern char public_65ca230; // ?
/* 0x065ca231 */ LDATA extern char public_65ca231; // ?
/* 0x065ca232 */ LDATA extern char public_65ca232; // ?
/* 0x065ca233 */ LDATA extern char public_65ca233; // ?
/* 0x065ca234 */ LDATA extern char public_65ca234; // ?
/* 0x065ca235 */ LDATA extern char public_65ca235; // ?
/* 0x065ca236 */ LDATA extern char public_65ca236; // ?
/* 0x065ca237 */ LDATA extern char public_65ca237; // ?
/* 0x065ca238 */ LDATA extern char public_65ca238; // ?
/* 0x065ca239 */ LDATA extern char public_65ca239; // ?
/* 0x065ca23a */ LDATA extern char public_65ca23a; // ?
/* 0x065ca23b */ LDATA extern char public_65ca23b; // ?
/* 0x065ca23c */ LDATA extern char public_65ca23c; // ?
/* 0x065ca23d */ LDATA extern char public_65ca23d; // ?
/* 0x065ca23e */ LDATA extern char public_65ca23e; // ?
/* 0x065ca23f */ LDATA extern char public_65ca23f; // ?
/* 0x065ca240 */ LDATA extern char public_65ca240; // ?
/* 0x065ca241 */ LDATA extern char public_65ca241; // ?
/* 0x065ca242 */ LDATA extern char public_65ca242; // ?
/* 0x065ca243 */ LDATA extern char public_65ca243; // ?
/* 0x065ca244 */ LDATA extern char public_65ca244; // ?
/* 0x065ca245 */ LDATA extern char public_65ca245; // ?
/* 0x065ca246 */ LDATA extern char public_65ca246; // ?
/* 0x065ca247 */ LDATA extern char public_65ca247; // ?
/* 0x065ca248 */ LDATA extern char public_65ca248; // ?
/* 0x065ca249 */ LDATA extern char public_65ca249; // ?
/* 0x065ca24a */ LDATA extern char public_65ca24a; // ?
/* 0x065ca24b */ LDATA extern char public_65ca24b; // ?
/* 0x065ca24c */ LDATA extern char public_65ca24c; // ?
/* 0x065ca24d */ LDATA extern char public_65ca24d; // ?
/* 0x065ca24e */ LDATA extern char public_65ca24e; // ?
/* 0x065ca24f */ LDATA extern char public_65ca24f; // ?
/* 0x065ca250 */ LDATA extern char public_65ca250; // ?
/* 0x065ca251 */ LDATA extern char public_65ca251; // ?
/* 0x065ca252 */ LDATA extern char public_65ca252; // ?
/* 0x065ca253 */ LDATA extern char public_65ca253; // ?
/* 0x065ca254 */ LDATA extern char public_65ca254; // ?
/* 0x065ca255 */ LDATA extern char public_65ca255; // ?
/* 0x065ca256 */ LDATA extern char public_65ca256; // ?
/* 0x065ca257 */ LDATA extern char public_65ca257; // ?
/* 0x065ca258 */ LDATA extern char public_65ca258; // ?
/* 0x065ca259 */ LDATA extern char public_65ca259; // ?
/* 0x065ca25a */ LDATA extern char public_65ca25a; // ?
/* 0x065ca25b */ LDATA extern char public_65ca25b; // ?
/* 0x065ca25c */ LDATA extern char public_65ca25c; // ?
/* 0x065ca25d */ LDATA extern char public_65ca25d; // ?
/* 0x065ca25e */ LDATA extern char public_65ca25e; // ?
/* 0x065ca25f */ LDATA extern char public_65ca25f; // ?
/* 0x065ca260 */ LDATA extern char public_65ca260; // ?
/* 0x065ca261 */ LDATA extern char public_65ca261; // ?
/* 0x065ca262 */ LDATA extern char public_65ca262; // ?
/* 0x065ca263 */ LDATA extern char public_65ca263; // ?
/* 0x065ca264 */ LDATA extern char public_65ca264; // ?
/* 0x065ca265 */ LDATA extern char public_65ca265; // ?
/* 0x065ca266 */ LDATA extern char public_65ca266; // ?
/* 0x065ca267 */ LDATA extern char public_65ca267; // ?
/* 0x065ca268 */ LDATA extern char public_65ca268; // ?
/* 0x065ca269 */ LDATA extern char public_65ca269; // ?
/* 0x065ca26a */ LDATA extern char public_65ca26a; // ?
/* 0x065ca26b */ LDATA extern char public_65ca26b; // ?
/* 0x065ca26c */ LDATA extern char public_65ca26c; // ?
/* 0x065ca26d */ LDATA extern char public_65ca26d; // ?
/* 0x065ca26e */ LDATA extern char public_65ca26e; // ?
/* 0x065ca26f */ LDATA extern char public_65ca26f; // ?
/* 0x065ca270 */ LDATA extern char public_65ca270; // ?
/* 0x065ca271 */ LDATA extern char public_65ca271; // ?
/* 0x065ca272 */ LDATA extern char public_65ca272; // ?
/* 0x065ca273 */ LDATA extern char public_65ca273; // ?
/* 0x065ca274 */ LDATA extern char public_65ca274; // ?
/* 0x065ca275 */ LDATA extern char public_65ca275; // ?
/* 0x065ca276 */ LDATA extern char public_65ca276; // ?
/* 0x065ca277 */ LDATA extern char public_65ca277; // ?
/* 0x065ca278 */ LDATA extern char public_65ca278; // ?
/* 0x065ca279 */ LDATA extern char public_65ca279; // ?
/* 0x065ca27a */ LDATA extern char public_65ca27a; // ?
/* 0x065ca27b */ LDATA extern char public_65ca27b; // ?
/* 0x065ca27c */ LDATA extern char public_65ca27c; // ?
/* 0x065ca27d */ LDATA extern char public_65ca27d; // ?
/* 0x065ca27e */ LDATA extern char public_65ca27e; // ?
/* 0x065ca27f */ LDATA extern char public_65ca27f; // ?
/* 0x065ca280 */ LDATA extern char public_65ca280; // ?
/* 0x065ca281 */ LDATA extern char public_65ca281; // ?
/* 0x065ca282 */ LDATA extern char public_65ca282; // ?
/* 0x065ca283 */ LDATA extern char public_65ca283; // ?
/* 0x065ca284 */ LDATA extern char public_65ca284; // ?
/* 0x065ca285 */ LDATA extern char public_65ca285; // ?
/* 0x065ca286 */ LDATA extern char public_65ca286; // ?
/* 0x065ca287 */ LDATA extern char public_65ca287; // ?
/* 0x065ca288 */ LDATA extern char public_65ca288; // ?
/* 0x065ca289 */ LDATA extern char public_65ca289; // ?
/* 0x065ca28a */ LDATA extern char public_65ca28a; // ?
/* 0x065ca28b */ LDATA extern char public_65ca28b; // ?
/* 0x065ca28c */ LDATA extern char public_65ca28c; // ?
/* 0x065ca28d */ LDATA extern char public_65ca28d; // ?
/* 0x065ca28e */ LDATA extern char public_65ca28e; // ?
/* 0x065ca28f */ LDATA extern char public_65ca28f; // ?
/* 0x065ca290 */ LDATA extern char public_65ca290; // ?
/* 0x065ca291 */ LDATA extern char public_65ca291; // ?
/* 0x065ca292 */ LDATA extern char public_65ca292; // ?
/* 0x065ca293 */ LDATA extern char public_65ca293; // ?
/* 0x065ca294 */ LDATA extern char public_65ca294; // ?
/* 0x065ca295 */ LDATA extern char public_65ca295; // ?
/* 0x065ca296 */ LDATA extern char public_65ca296; // ?
/* 0x065ca297 */ LDATA extern char public_65ca297; // ?
/* 0x065ca298 */ LDATA extern char public_65ca298; // ?
/* 0x065ca299 */ LDATA extern char public_65ca299; // ?
/* 0x065ca29a */ LDATA extern char public_65ca29a; // ?
/* 0x065ca29b */ LDATA extern char public_65ca29b; // ?
/* 0x065ca29c */ LDATA extern char public_65ca29c; // ?
/* 0x065ca29d */ LDATA extern char public_65ca29d; // ?
/* 0x065ca29e */ LDATA extern char public_65ca29e; // ?
/* 0x065ca29f */ LDATA extern char public_65ca29f; // ?
/* 0x065ca2a0 */ LDATA extern char public_65ca2a0; // ?
/* 0x065ca2a1 */ LDATA extern char public_65ca2a1; // ?
/* 0x065ca2a2 */ LDATA extern char public_65ca2a2; // ?
/* 0x065ca2a3 */ LDATA extern char public_65ca2a3; // ?
/* 0x065ca2a4 */ LDATA extern char public_65ca2a4; // ?
/* 0x065ca2a5 */ LDATA extern char public_65ca2a5; // ?
/* 0x065ca2a6 */ LDATA extern char public_65ca2a6; // ?
/* 0x065ca2a7 */ LDATA extern char public_65ca2a7; // ?
/* 0x065ca2a8 */ LDATA extern char public_65ca2a8; // ?
/* 0x065ca2a9 */ LDATA extern char public_65ca2a9; // ?
/* 0x065ca2aa */ LDATA extern char public_65ca2aa; // ?
/* 0x065ca2ab */ LDATA extern char public_65ca2ab; // ?
/* 0x065ca2ac */ LDATA extern char public_65ca2ac; // ?
/* 0x065ca2ad */ LDATA extern char public_65ca2ad; // ?
/* 0x065ca2ae */ LDATA extern char public_65ca2ae; // ?
/* 0x065ca2af */ LDATA extern char public_65ca2af; // ?
/* 0x065ca2b0 */ LDATA extern char public_65ca2b0; // ?
/* 0x065ca2b1 */ LDATA extern char public_65ca2b1; // ?
/* 0x065ca2b2 */ LDATA extern char public_65ca2b2; // ?
/* 0x065ca2b3 */ LDATA extern char public_65ca2b3; // ?
/* 0x065ca2b4 */ LDATA extern char public_65ca2b4; // ?
/* 0x065ca2b5 */ LDATA extern char public_65ca2b5; // ?
/* 0x065ca2b6 */ LDATA extern char public_65ca2b6; // ?
/* 0x065ca2b7 */ LDATA extern char public_65ca2b7; // ?
/* 0x065ca2b8 */ LDATA extern char public_65ca2b8; // ?
/* 0x065ca2b9 */ LDATA extern char public_65ca2b9; // ?
/* 0x065ca2ba */ LDATA extern char public_65ca2ba; // ?
/* 0x065ca2bb */ LDATA extern char public_65ca2bb; // ?
/* 0x065ca2bc */ LDATA extern char public_65ca2bc; // ?
/* 0x065ca2bd */ LDATA extern char public_65ca2bd; // ?
/* 0x065ca2be */ LDATA extern char public_65ca2be; // ?
/* 0x065ca2bf */ LDATA extern char public_65ca2bf; // ?
/* 0x065ca2c0 */ LDATA extern char public_65ca2c0; // ?
/* 0x065ca2c1 */ LDATA extern char public_65ca2c1; // ?
/* 0x065ca2c2 */ LDATA extern char public_65ca2c2; // ?
/* 0x065ca2c3 */ LDATA extern char public_65ca2c3; // ?
/* 0x065ca2c4 */ LDATA extern char public_65ca2c4; // OOB+0x0000
/* 0x065ca2c5 */ LDATA extern char public_65ca2c5; // OOB+0x0001
/* 0x065ca2c6 */ LDATA extern char public_65ca2c6; // OOB+0x0002
/* 0x065ca2c7 */ LDATA extern char public_65ca2c7; // OOB+0x0003
/* 0x065ca2c8 */ LDATA extern char public_65ca2c8; // OOB+0x0004
/* 0x065ca2c9 */ LDATA extern char public_65ca2c9; // OOB+0x0005
/* 0x065ca2ca */ LDATA extern char public_65ca2ca; // OOB+0x0006
/* 0x065ca2cb */ LDATA extern char public_65ca2cb; // OOB+0x0007
/* 0x065ca2cc */ LDATA extern char public_65ca2cc; // OOB+0x0008
/* 0x065ca2cd */ LDATA extern char public_65ca2cd; // OOB+0x0009
/* 0x065ca2ce */ LDATA extern char public_65ca2ce; // OOB+0x000a
/* 0x065ca2cf */ LDATA extern char public_65ca2cf; // OOB+0x000b
/* 0x065ca2d0 */ LDATA extern char public_65ca2d0; // OOB+0x000c
/* 0x065ca2d1 */ LDATA extern char public_65ca2d1; // OOB+0x000d
/* 0x065ca2d2 */ LDATA extern char public_65ca2d2; // OOB+0x000e
/* 0x065ca2d3 */ LDATA extern char public_65ca2d3; // OOB+0x000f
/* 0x065ca2d4 */ LDATA extern char public_65ca2d4; // OOB+0x0010
/* 0x065ca2d5 */ LDATA extern char public_65ca2d5; // OOB+0x0011
/* 0x065ca2d6 */ LDATA extern char public_65ca2d6; // OOB+0x0012
/* 0x065ca2d7 */ LDATA extern char public_65ca2d7; // OOB+0x0013
/* 0x065ca2d8 */ LDATA extern char public_65ca2d8; // OOB+0x0014
/* 0x065ca2d9 */ LDATA extern char public_65ca2d9; // OOB+0x0015
/* 0x065ca2da */ LDATA extern char public_65ca2da; // OOB+0x0016
/* 0x065ca2db */ LDATA extern char public_65ca2db; // OOB+0x0017
/* 0x065ca2dc */ LDATA extern char public_65ca2dc; // OOB+0x0018
/* 0x065ca2dd */ LDATA extern char public_65ca2dd; // OOB+0x0019
/* 0x065ca2de */ LDATA extern char public_65ca2de; // OOB+0x001a
/* 0x065ca2df */ LDATA extern char public_65ca2df; // OOB+0x001b
/* 0x065ca2e0 */ LDATA extern char public_65ca2e0; // OOB+0x001c
/* 0x065ca2e1 */ LDATA extern char public_65ca2e1; // OOB+0x001d
/* 0x065ca2e2 */ LDATA extern char public_65ca2e2; // OOB+0x001e
/* 0x065ca2e3 */ LDATA extern char public_65ca2e3; // OOB+0x001f
/* 0x065ca2e4 */ LDATA extern char public_65ca2e4; // OOB+0x0020
/* 0x065ca2e5 */ LDATA extern char public_65ca2e5; // OOB+0x0021
/* 0x065ca2e6 */ LDATA extern char public_65ca2e6; // OOB+0x0022
/* 0x065ca2e7 */ LDATA extern char public_65ca2e7; // OOB+0x0023
/* 0x065ca2e8 */ LDATA extern char public_65ca2e8; // OOB+0x0024
/* 0x065ca2e9 */ LDATA extern char public_65ca2e9; // OOB+0x0025
/* 0x065ca2ea */ LDATA extern char public_65ca2ea; // OOB+0x0026
/* 0x065ca2eb */ LDATA extern char public_65ca2eb; // OOB+0x0027
/* 0x065ca2ec */ LDATA extern char public_65ca2ec; // OOB+0x0028
/* 0x065ca2ed */ LDATA extern char public_65ca2ed; // OOB+0x0029
/* 0x065ca2ee */ LDATA extern char public_65ca2ee; // OOB+0x002a
/* 0x065ca2ef */ LDATA extern char public_65ca2ef; // OOB+0x002b
/* 0x065ca2f0 */ LDATA extern char public_65ca2f0; // OOB+0x002c
/* 0x065ca2f1 */ LDATA extern char public_65ca2f1; // OOB+0x002d
/* 0x065ca2f2 */ LDATA extern char public_65ca2f2; // OOB+0x002e
/* 0x065ca2f3 */ LDATA extern char public_65ca2f3; // OOB+0x002f
/* 0x065ca2f4 */ LDATA extern char public_65ca2f4; // OOB+0x0030
/* 0x065ca2f5 */ LDATA extern char public_65ca2f5; // OOB+0x0031
/* 0x065ca2f6 */ LDATA extern char public_65ca2f6; // OOB+0x0032
/* 0x065ca2f7 */ LDATA extern char public_65ca2f7; // OOB+0x0033
/* 0x065ca2f8 */ LDATA extern char public_65ca2f8; // OOB+0x0034
/* 0x065ca2f9 */ LDATA extern char public_65ca2f9; // OOB+0x0035
/* 0x065ca2fa */ LDATA extern char public_65ca2fa; // OOB+0x0036
/* 0x065ca2fb */ LDATA extern char public_65ca2fb; // OOB+0x0037
/* 0x065ca2fc */ LDATA extern char public_65ca2fc; // OOB+0x0038
/* 0x065ca2fd */ LDATA extern char public_65ca2fd; // OOB+0x0039
/* 0x065ca2fe */ LDATA extern char public_65ca2fe; // OOB+0x003a
/* 0x065ca2ff */ LDATA extern char public_65ca2ff; // OOB+0x003b
/* 0x065ca300 */ LDATA extern char public_65ca300; // OOB+0x003c
/* 0x065ca301 */ LDATA extern char public_65ca301; // OOB+0x003d
/* 0x065ca302 */ LDATA extern char public_65ca302; // OOB+0x003e
/* 0x065ca303 */ LDATA extern char public_65ca303; // OOB+0x003f
/* 0x065ca304 */ LDATA extern char public_65ca304; // OOB+0x0040
/* 0x065ca305 */ LDATA extern char public_65ca305; // OOB+0x0041
/* 0x065ca306 */ LDATA extern char public_65ca306; // OOB+0x0042
/* 0x065ca307 */ LDATA extern char public_65ca307; // OOB+0x0043
/* 0x065ca308 */ LDATA extern char public_65ca308; // OOB+0x0044
/* 0x065ca309 */ LDATA extern char public_65ca309; // OOB+0x0045
/* 0x065ca30a */ LDATA extern char public_65ca30a; // OOB+0x0046
/* 0x065ca30b */ LDATA extern char public_65ca30b; // OOB+0x0047
/* 0x065ca30c */ LDATA extern char public_65ca30c; // OOB+0x0048
/* 0x065ca30d */ LDATA extern char public_65ca30d; // OOB+0x0049
/* 0x065ca30e */ LDATA extern char public_65ca30e; // OOB+0x004a
/* 0x065ca30f */ LDATA extern char public_65ca30f; // OOB+0x004b
/* 0x065ca310 */ LDATA extern char public_65ca310; // OOB+0x004c
/* 0x065ca311 */ LDATA extern char public_65ca311; // OOB+0x004d
/* 0x065ca312 */ LDATA extern char public_65ca312; // OOB+0x004e
/* 0x065ca313 */ LDATA extern char public_65ca313; // OOB+0x004f
/* 0x065ca314 */ LDATA extern char public_65ca314; // OOB+0x0050
/* 0x065ca315 */ LDATA extern char public_65ca315; // OOB+0x0051
/* 0x065ca316 */ LDATA extern char public_65ca316; // OOB+0x0052
/* 0x065ca317 */ LDATA extern char public_65ca317; // OOB+0x0053
/* 0x065ca318 */ LDATA extern char public_65ca318; // OOB+0x0054
/* 0x065ca319 */ LDATA extern char public_65ca319; // OOB+0x0055
/* 0x065ca31a */ LDATA extern char public_65ca31a; // OOB+0x0056
/* 0x065ca31b */ LDATA extern char public_65ca31b; // OOB+0x0057
/* 0x065ca31c */ LDATA extern char public_65ca31c; // OOB+0x0058
/* 0x065ca31d */ LDATA extern char public_65ca31d; // OOB+0x0059
/* 0x065ca31e */ LDATA extern char public_65ca31e; // OOB+0x005a
/* 0x065ca31f */ LDATA extern char public_65ca31f; // OOB+0x005b
/* 0x065ca320 */ LDATA extern char public_65ca320; // OOB+0x005c
/* 0x065ca321 */ LDATA extern char public_65ca321; // OOB+0x005d
/* 0x065ca322 */ LDATA extern char public_65ca322; // OOB+0x005e
/* 0x065ca323 */ LDATA extern char public_65ca323; // OOB+0x005f
/* 0x065ca324 */ LDATA extern char public_65ca324; // OOB+0x0060
/* 0x065ca325 */ LDATA extern char public_65ca325; // OOB+0x0061
/* 0x065ca326 */ LDATA extern char public_65ca326; // OOB+0x0062
/* 0x065ca327 */ LDATA extern char public_65ca327; // OOB+0x0063
/* 0x065ca328 */ LDATA extern char public_65ca328; // OOB+0x0064
/* 0x065ca329 */ LDATA extern char public_65ca329; // OOB+0x0065
/* 0x065ca32a */ LDATA extern char public_65ca32a; // OOB+0x0066
/* 0x065ca32b */ LDATA extern char public_65ca32b; // OOB+0x0067
/* 0x065ca32c */ LDATA extern char public_65ca32c; // OOB+0x0068
/* 0x065ca32d */ LDATA extern char public_65ca32d; // OOB+0x0069
/* 0x065ca32e */ LDATA extern char public_65ca32e; // OOB+0x006a
/* 0x065ca32f */ LDATA extern char public_65ca32f; // OOB+0x006b
/* 0x065ca330 */ LDATA extern char public_65ca330; // OOB+0x006c
/* 0x065ca331 */ LDATA extern char public_65ca331; // OOB+0x006d
/* 0x065ca332 */ LDATA extern char public_65ca332; // OOB+0x006e
/* 0x065ca333 */ LDATA extern char public_65ca333; // OOB+0x006f
/* 0x065ca334 */ LDATA extern char public_65ca334; // OOB+0x0070
/* 0x065ca335 */ LDATA extern char public_65ca335; // OOB+0x0071
/* 0x065ca336 */ LDATA extern char public_65ca336; // OOB+0x0072
/* 0x065ca337 */ LDATA extern char public_65ca337; // OOB+0x0073
/* 0x065ca338 */ LDATA extern char public_65ca338; // OOB+0x0074
/* 0x065ca339 */ LDATA extern char public_65ca339; // OOB+0x0075
/* 0x065ca33a */ LDATA extern char public_65ca33a; // OOB+0x0076
/* 0x065ca33b */ LDATA extern char public_65ca33b; // OOB+0x0077
/* 0x065ca33c */ LDATA extern char public_65ca33c; // OOB+0x0078
/* 0x065ca33d */ LDATA extern char public_65ca33d; // OOB+0x0079
/* 0x065ca33e */ LDATA extern char public_65ca33e; // OOB+0x007a
/* 0x065ca33f */ LDATA extern char public_65ca33f; // OOB+0x007b
/* 0x065ca340 */ LDATA extern char public_65ca340; // OOB+0x007c
/* 0x065ca341 */ LDATA extern char public_65ca341; // OOB+0x007d
/* 0x065ca342 */ LDATA extern char public_65ca342; // OOB+0x007e
/* 0x065ca343 */ LDATA extern char public_65ca343; // OOB+0x007f
/* 0x065ca344 */ LDATA extern char public_65ca344; // OOB+0x0080
/* 0x065ca345 */ LDATA extern char public_65ca345; // OOB+0x0081
/* 0x065ca346 */ LDATA extern char public_65ca346; // OOB+0x0082
/* 0x065ca347 */ LDATA extern char public_65ca347; // OOB+0x0083
/* 0x065ca348 */ LDATA extern char public_65ca348; // OOB+0x0084
/* 0x065ca349 */ LDATA extern char public_65ca349; // OOB+0x0085
/* 0x065ca34a */ LDATA extern char public_65ca34a; // OOB+0x0086
/* 0x065ca34b */ LDATA extern char public_65ca34b; // OOB+0x0087
/* 0x065ca34c */ LDATA extern char public_65ca34c; // OOB+0x0088
/* 0x065ca34d */ LDATA extern char public_65ca34d; // OOB+0x0089
/* 0x065ca34e */ LDATA extern char public_65ca34e; // OOB+0x008a
/* 0x065ca34f */ LDATA extern char public_65ca34f; // OOB+0x008b
/* 0x065ca350 */ LDATA extern char public_65ca350; // OOB+0x008c
/* 0x065ca351 */ LDATA extern char public_65ca351; // OOB+0x008d
/* 0x065ca352 */ LDATA extern char public_65ca352; // OOB+0x008e
/* 0x065ca353 */ LDATA extern char public_65ca353; // OOB+0x008f
/* 0x065ca354 */ LDATA extern char public_65ca354; // OOB+0x0090
/* 0x065ca355 */ LDATA extern char public_65ca355; // OOB+0x0091
/* 0x065ca356 */ LDATA extern char public_65ca356; // OOB+0x0092
/* 0x065ca357 */ LDATA extern char public_65ca357; // OOB+0x0093
/* 0x065ca358 */ LDATA extern char public_65ca358; // OOB+0x0094
/* 0x065ca359 */ LDATA extern char public_65ca359; // OOB+0x0095
/* 0x065ca35a */ LDATA extern char public_65ca35a; // OOB+0x0096
/* 0x065ca35b */ LDATA extern char public_65ca35b; // OOB+0x0097
/* 0x065ca35c */ LDATA extern char public_65ca35c; // OOB+0x0098
/* 0x065ca35d */ LDATA extern char public_65ca35d; // OOB+0x0099
/* 0x065ca35e */ LDATA extern char public_65ca35e; // OOB+0x009a
/* 0x065ca35f */ LDATA extern char public_65ca35f; // OOB+0x009b
/* 0x065ca360 */ LDATA extern char public_65ca360; // OOB+0x009c
/* 0x065ca361 */ LDATA extern char public_65ca361; // OOB+0x009d
/* 0x065ca362 */ LDATA extern char public_65ca362; // OOB+0x009e
/* 0x065ca363 */ LDATA extern char public_65ca363; // OOB+0x009f
/* 0x065ca364 */ LDATA extern char public_65ca364; // OOB+0x00a0
/* 0x065ca365 */ LDATA extern char public_65ca365; // OOB+0x00a1
/* 0x065ca366 */ LDATA extern char public_65ca366; // OOB+0x00a2
/* 0x065ca367 */ LDATA extern char public_65ca367; // OOB+0x00a3
/* 0x065ca368 */ LDATA extern char public_65ca368; // OOB+0x00a4
/* 0x065ca369 */ LDATA extern char public_65ca369; // OOB+0x00a5
/* 0x065ca36a */ LDATA extern char public_65ca36a; // OOB+0x00a6
/* 0x065ca36b */ LDATA extern char public_65ca36b; // OOB+0x00a7
/* 0x065ca36c */ LDATA extern char public_65ca36c; // OOB+0x00a8
/* 0x065ca36d */ LDATA extern char public_65ca36d; // OOB+0x00a9
/* 0x065ca36e */ LDATA extern char public_65ca36e; // OOB+0x00aa
/* 0x065ca36f */ LDATA extern char public_65ca36f; // OOB+0x00ab
/* 0x065ca370 */ LDATA extern char public_65ca370; // OOB+0x00ac
/* 0x065ca371 */ LDATA extern char public_65ca371; // OOB+0x00ad
/* 0x065ca372 */ LDATA extern char public_65ca372; // OOB+0x00ae
/* 0x065ca373 */ LDATA extern char public_65ca373; // OOB+0x00af
/* 0x065ca374 */ LDATA extern char public_65ca374; // OOB+0x00b0
/* 0x065ca375 */ LDATA extern char public_65ca375; // OOB+0x00b1
/* 0x065ca376 */ LDATA extern char public_65ca376; // OOB+0x00b2
/* 0x065ca377 */ LDATA extern char public_65ca377; // OOB+0x00b3
/* 0x065ca378 */ LDATA extern char public_65ca378; // OOB+0x00b4
/* 0x065ca379 */ LDATA extern char public_65ca379; // OOB+0x00b5
/* 0x065ca37a */ LDATA extern char public_65ca37a; // OOB+0x00b6
/* 0x065ca37b */ LDATA extern char public_65ca37b; // OOB+0x00b7
/* 0x065ca37c */ LDATA extern char public_65ca37c; // OOB+0x00b8
/* 0x065ca37d */ LDATA extern char public_65ca37d; // OOB+0x00b9
/* 0x065ca37e */ LDATA extern char public_65ca37e; // OOB+0x00ba
/* 0x065ca37f */ LDATA extern char public_65ca37f; // OOB+0x00bb
/* 0x065ca380 */ LDATA extern char public_65ca380; // OOB+0x00bc
/* 0x065ca381 */ LDATA extern char public_65ca381; // OOB+0x00bd
/* 0x065ca382 */ LDATA extern char public_65ca382; // OOB+0x00be
/* 0x065ca383 */ LDATA extern char public_65ca383; // OOB+0x00bf
/* 0x065ca384 */ LDATA extern char public_65ca384; // OOB+0x00c0
/* 0x065ca385 */ LDATA extern char public_65ca385; // OOB+0x00c1
/* 0x065ca386 */ LDATA extern char public_65ca386; // OOB+0x00c2
/* 0x065ca387 */ LDATA extern char public_65ca387; // OOB+0x00c3
/* 0x065ca388 */ LDATA extern char public_65ca388; // OOB+0x00c4
/* 0x065ca389 */ LDATA extern char public_65ca389; // OOB+0x00c5
/* 0x065ca38a */ LDATA extern char public_65ca38a; // OOB+0x00c6
/* 0x065ca38b */ LDATA extern char public_65ca38b; // OOB+0x00c7
/* 0x065ca38c */ LDATA extern char public_65ca38c; // OOB+0x00c8
/* 0x065ca38d */ LDATA extern char public_65ca38d; // OOB+0x00c9
/* 0x065ca38e */ LDATA extern char public_65ca38e; // OOB+0x00ca
/* 0x065ca38f */ LDATA extern char public_65ca38f; // OOB+0x00cb
/* 0x065ca390 */ LDATA extern char public_65ca390; // OOB+0x00cc
/* 0x065ca391 */ LDATA extern char public_65ca391; // OOB+0x00cd
/* 0x065ca392 */ LDATA extern char public_65ca392; // OOB+0x00ce
/* 0x065ca393 */ LDATA extern char public_65ca393; // OOB+0x00cf
/* 0x065ca394 */ LDATA extern char public_65ca394; // OOB+0x00d0
/* 0x065ca395 */ LDATA extern char public_65ca395; // OOB+0x00d1
/* 0x065ca396 */ LDATA extern char public_65ca396; // OOB+0x00d2
/* 0x065ca397 */ LDATA extern char public_65ca397; // OOB+0x00d3
/* 0x065ca398 */ LDATA extern char public_65ca398; // OOB+0x00d4
/* 0x065ca399 */ LDATA extern char public_65ca399; // OOB+0x00d5
/* 0x065ca39a */ LDATA extern char public_65ca39a; // OOB+0x00d6
/* 0x065ca39b */ LDATA extern char public_65ca39b; // OOB+0x00d7
/* 0x065ca39c */ LDATA extern char public_65ca39c; // OOB+0x00d8
/* 0x065ca39d */ LDATA extern char public_65ca39d; // OOB+0x00d9
/* 0x065ca39e */ LDATA extern char public_65ca39e; // OOB+0x00da
/* 0x065ca39f */ LDATA extern char public_65ca39f; // OOB+0x00db
/* 0x065ca3a0 */ LDATA extern char public_65ca3a0; // OOB+0x00dc
/* 0x065ca3a1 */ LDATA extern char public_65ca3a1; // OOB+0x00dd
/* 0x065ca3a2 */ LDATA extern char public_65ca3a2; // OOB+0x00de
/* 0x065ca3a3 */ LDATA extern char public_65ca3a3; // OOB+0x00df
/* 0x065ca3a4 */ LDATA extern char public_65ca3a4; // OOB+0x00e0
/* 0x065ca3a5 */ LDATA extern char public_65ca3a5; // OOB+0x00e1
/* 0x065ca3a6 */ LDATA extern char public_65ca3a6; // OOB+0x00e2
/* 0x065ca3a7 */ LDATA extern char public_65ca3a7; // OOB+0x00e3
/* 0x065ca3a8 */ LDATA extern char public_65ca3a8; // OOB+0x00e4
/* 0x065ca3a9 */ LDATA extern char public_65ca3a9; // OOB+0x00e5
/* 0x065ca3aa */ LDATA extern char public_65ca3aa; // OOB+0x00e6
/* 0x065ca3ab */ LDATA extern char public_65ca3ab; // OOB+0x00e7
/* 0x065ca3ac */ LDATA extern char public_65ca3ac; // OOB+0x00e8
/* 0x065ca3ad */ LDATA extern char public_65ca3ad; // OOB+0x00e9
/* 0x065ca3ae */ LDATA extern char public_65ca3ae; // OOB+0x00ea
/* 0x065ca3af */ LDATA extern char public_65ca3af; // OOB+0x00eb
/* 0x065ca3b0 */ LDATA extern char public_65ca3b0; // OOB+0x00ec
/* 0x065ca3b1 */ LDATA extern char public_65ca3b1; // OOB+0x00ed
/* 0x065ca3b2 */ LDATA extern char public_65ca3b2; // OOB+0x00ee
/* 0x065ca3b3 */ LDATA extern char public_65ca3b3; // OOB+0x00ef
/* 0x065ca3b4 */ LDATA extern char public_65ca3b4; // OOB+0x00f0
/* 0x065ca3b5 */ LDATA extern char public_65ca3b5; // OOB+0x00f1
/* 0x065ca3b6 */ LDATA extern char public_65ca3b6; // OOB+0x00f2
/* 0x065ca3b7 */ LDATA extern char public_65ca3b7; // OOB+0x00f3
/* 0x065ca3b8 */ LDATA extern char public_65ca3b8; // OOB+0x00f4
/* 0x065ca3b9 */ LDATA extern char public_65ca3b9; // OOB+0x00f5
/* 0x065ca3ba */ LDATA extern char public_65ca3ba; // OOB+0x00f6
/* 0x065ca3bb */ LDATA extern char public_65ca3bb; // OOB+0x00f7
/* 0x065ca3bc */ LDATA extern char public_65ca3bc; // OOB+0x00f8
/* 0x065ca3bd */ LDATA extern char public_65ca3bd; // OOB+0x00f9
/* 0x065ca3be */ LDATA extern char public_65ca3be; // OOB+0x00fa
/* 0x065ca3bf */ LDATA extern char public_65ca3bf; // OOB+0x00fb
/* 0x065ca3c0 */ LDATA extern char public_65ca3c0; // OOB+0x00fc
/* 0x065ca3c1 */ LDATA extern char public_65ca3c1; // OOB+0x00fd
/* 0x065ca3c2 */ LDATA extern char public_65ca3c2; // OOB+0x00fe
/* 0x065ca3c3 */ LDATA extern char public_65ca3c3; // OOB+0x00ff
/* 0x065ca3c4 */ LDATA extern char public_65ca3c4; // OOB+0x0100
/* 0x065ca3c5 */ LDATA extern char public_65ca3c5; // OOB+0x0101
/* 0x065ca3c6 */ LDATA extern char public_65ca3c6; // OOB+0x0102
/* 0x065ca3c7 */ LDATA extern char public_65ca3c7; // OOB+0x0103
/* 0x065ca3c8 */ LDATA extern char public_65ca3c8; // OOB+0x0104
/* 0x065ca3c9 */ LDATA extern char public_65ca3c9; // OOB+0x0105
/* 0x065ca3ca */ LDATA extern char public_65ca3ca; // OOB+0x0106
/* 0x065ca3cb */ LDATA extern char public_65ca3cb; // OOB+0x0107
/* 0x065ca3cc */ LDATA extern char public_65ca3cc; // OOB+0x0108
/* 0x065ca3cd */ LDATA extern char public_65ca3cd; // OOB+0x0109
/* 0x065ca3ce */ LDATA extern char public_65ca3ce; // OOB+0x010a
/* 0x065ca3cf */ LDATA extern char public_65ca3cf; // OOB+0x010b
/* 0x065ca3d0 */ LDATA extern char public_65ca3d0; // OOB+0x010c
/* 0x065ca3d1 */ LDATA extern char public_65ca3d1; // OOB+0x010d
/* 0x065ca3d2 */ LDATA extern char public_65ca3d2; // OOB+0x010e
/* 0x065ca3d3 */ LDATA extern char public_65ca3d3; // OOB+0x010f
/* 0x065ca3d4 */ LDATA extern char public_65ca3d4; // OOB+0x0110
/* 0x065ca3d5 */ LDATA extern char public_65ca3d5; // OOB+0x0111
/* 0x065ca3d6 */ LDATA extern char public_65ca3d6; // OOB+0x0112
/* 0x065ca3d7 */ LDATA extern char public_65ca3d7; // OOB+0x0113
/* 0x065ca3d8 */ LDATA extern char public_65ca3d8; // OOB+0x0114
/* 0x065ca3d9 */ LDATA extern char public_65ca3d9; // OOB+0x0115
/* 0x065ca3da */ LDATA extern char public_65ca3da; // OOB+0x0116
/* 0x065ca3db */ LDATA extern char public_65ca3db; // OOB+0x0117
/* 0x065ca3dc */ LDATA extern char public_65ca3dc; // OOB+0x0118
/* 0x065ca3dd */ LDATA extern char public_65ca3dd; // OOB+0x0119
/* 0x065ca3de */ LDATA extern char public_65ca3de; // OOB+0x011a
/* 0x065ca3df */ LDATA extern char public_65ca3df; // OOB+0x011b
/* 0x065ca3e0 */ LDATA extern char public_65ca3e0; // OOB+0x011c
/* 0x065ca3e1 */ LDATA extern char public_65ca3e1; // OOB+0x011d
/* 0x065ca3e2 */ LDATA extern char public_65ca3e2; // OOB+0x011e
/* 0x065ca3e3 */ LDATA extern char public_65ca3e3; // OOB+0x011f
/* 0x065ca3e4 */ LDATA extern char public_65ca3e4; // OOB+0x0120
/* 0x065ca3e5 */ LDATA extern char public_65ca3e5; // OOB+0x0121
/* 0x065ca3e6 */ LDATA extern char public_65ca3e6; // OOB+0x0122
/* 0x065ca3e7 */ LDATA extern char public_65ca3e7; // OOB+0x0123
/* 0x065ca3e8 */ LDATA extern char public_65ca3e8; // OOB+0x0124
/* 0x065ca3e9 */ LDATA extern char public_65ca3e9; // OOB+0x0125
/* 0x065ca3ea */ LDATA extern char public_65ca3ea; // OOB+0x0126
/* 0x065ca3eb */ LDATA extern char public_65ca3eb; // OOB+0x0127
/* 0x065ca3ec */ LDATA extern char public_65ca3ec; // OOB+0x0128
/* 0x065ca3ed */ LDATA extern char public_65ca3ed; // OOB+0x0129
/* 0x065ca3ee */ LDATA extern char public_65ca3ee; // OOB+0x012a
/* 0x065ca3ef */ LDATA extern char public_65ca3ef; // OOB+0x012b
/* 0x065ca3f0 */ LDATA extern char public_65ca3f0; // OOB+0x012c
/* 0x065ca3f1 */ LDATA extern char public_65ca3f1; // OOB+0x012d
/* 0x065ca3f2 */ LDATA extern char public_65ca3f2; // OOB+0x012e
/* 0x065ca3f3 */ LDATA extern char public_65ca3f3; // OOB+0x012f
/* 0x065ca3f4 */ LDATA extern char public_65ca3f4; // OOB+0x0130
/* 0x065ca3f5 */ LDATA extern char public_65ca3f5; // OOB+0x0131
/* 0x065ca3f6 */ LDATA extern char public_65ca3f6; // OOB+0x0132
/* 0x065ca3f7 */ LDATA extern char public_65ca3f7; // OOB+0x0133
/* 0x065ca3f8 */ LDATA extern char public_65ca3f8; // OOB+0x0134
/* 0x065ca3f9 */ LDATA extern char public_65ca3f9; // OOB+0x0135
/* 0x065ca3fa */ LDATA extern char public_65ca3fa; // OOB+0x0136
/* 0x065ca3fb */ LDATA extern char public_65ca3fb; // OOB+0x0137
/* 0x065ca3fc */ LDATA extern char public_65ca3fc; // OOB+0x0138
/* 0x065ca3fd */ LDATA extern char public_65ca3fd; // OOB+0x0139
/* 0x065ca3fe */ LDATA extern char public_65ca3fe; // OOB+0x013a
/* 0x065ca3ff */ LDATA extern char public_65ca3ff; // OOB+0x013b
/* 0x065ca400 */ LDATA extern char public_65ca400; // OOB+0x013c
/* 0x065ca401 */ LDATA extern char public_65ca401; // OOB+0x013d
/* 0x065ca402 */ LDATA extern char public_65ca402; // OOB+0x013e
/* 0x065ca403 */ LDATA extern char public_65ca403; // OOB+0x013f
/* 0x065ca404 */ LDATA extern char public_65ca404; // OOB+0x0140
/* 0x065ca405 */ LDATA extern char public_65ca405; // OOB+0x0141
/* 0x065ca406 */ LDATA extern char public_65ca406; // OOB+0x0142
/* 0x065ca407 */ LDATA extern char public_65ca407; // OOB+0x0143
/* 0x065ca408 */ LDATA extern char public_65ca408; // OOB+0x0144
/* 0x065ca409 */ LDATA extern char public_65ca409; // OOB+0x0145
/* 0x065ca40a */ LDATA extern char public_65ca40a; // OOB+0x0146
/* 0x065ca40b */ LDATA extern char public_65ca40b; // OOB+0x0147
/* 0x065ca40c */ LDATA extern char public_65ca40c; // OOB+0x0148
/* 0x065ca40d */ LDATA extern char public_65ca40d; // OOB+0x0149
/* 0x065ca40e */ LDATA extern char public_65ca40e; // OOB+0x014a
/* 0x065ca40f */ LDATA extern char public_65ca40f; // OOB+0x014b
/* 0x065ca410 */ LDATA extern char public_65ca410; // OOB+0x014c
/* 0x065ca411 */ LDATA extern char public_65ca411; // OOB+0x014d
/* 0x065ca412 */ LDATA extern char public_65ca412; // OOB+0x014e
/* 0x065ca413 */ LDATA extern char public_65ca413; // OOB+0x014f
/* 0x065ca414 */ LDATA extern char public_65ca414; // OOB+0x0150
/* 0x065ca415 */ LDATA extern char public_65ca415; // OOB+0x0151
/* 0x065ca416 */ LDATA extern char public_65ca416; // OOB+0x0152
/* 0x065ca417 */ LDATA extern char public_65ca417; // OOB+0x0153
/* 0x065ca418 */ LDATA extern char public_65ca418; // OOB+0x0154
/* 0x065ca419 */ LDATA extern char public_65ca419; // OOB+0x0155
/* 0x065ca41a */ LDATA extern char public_65ca41a; // OOB+0x0156
/* 0x065ca41b */ LDATA extern char public_65ca41b; // OOB+0x0157
/* 0x065ca41c */ LDATA extern char public_65ca41c; // OOB+0x0158
/* 0x065ca41d */ LDATA extern char public_65ca41d; // OOB+0x0159
/* 0x065ca41e */ LDATA extern char public_65ca41e; // OOB+0x015a
/* 0x065ca41f */ LDATA extern char public_65ca41f; // OOB+0x015b
/* 0x065ca420 */ LDATA extern char public_65ca420; // OOB+0x015c
/* 0x065ca421 */ LDATA extern char public_65ca421; // OOB+0x015d
/* 0x065ca422 */ LDATA extern char public_65ca422; // OOB+0x015e
/* 0x065ca423 */ LDATA extern char public_65ca423; // OOB+0x015f
/* 0x065ca424 */ LDATA extern char public_65ca424; // OOB+0x0160
/* 0x065ca425 */ LDATA extern char public_65ca425; // OOB+0x0161
/* 0x065ca426 */ LDATA extern char public_65ca426; // OOB+0x0162
/* 0x065ca427 */ LDATA extern char public_65ca427; // OOB+0x0163
/* 0x065ca428 */ LDATA extern char public_65ca428; // OOB+0x0164
/* 0x065ca429 */ LDATA extern char public_65ca429; // OOB+0x0165
/* 0x065ca42a */ LDATA extern char public_65ca42a; // OOB+0x0166
/* 0x065ca42b */ LDATA extern char public_65ca42b; // OOB+0x0167
/* 0x065ca42c */ LDATA extern char public_65ca42c; // OOB+0x0168
/* 0x065ca42d */ LDATA extern char public_65ca42d; // OOB+0x0169
/* 0x065ca42e */ LDATA extern char public_65ca42e; // OOB+0x016a
/* 0x065ca42f */ LDATA extern char public_65ca42f; // OOB+0x016b
/* 0x065ca430 */ LDATA extern char public_65ca430; // OOB+0x016c
/* 0x065ca431 */ LDATA extern char public_65ca431; // OOB+0x016d
/* 0x065ca432 */ LDATA extern char public_65ca432; // OOB+0x016e
/* 0x065ca433 */ LDATA extern char public_65ca433; // OOB+0x016f
/* 0x065ca434 */ LDATA extern char public_65ca434; // OOB+0x0170
/* 0x065ca435 */ LDATA extern char public_65ca435; // OOB+0x0171
/* 0x065ca436 */ LDATA extern char public_65ca436; // OOB+0x0172
/* 0x065ca437 */ LDATA extern char public_65ca437; // OOB+0x0173
/* 0x065ca438 */ LDATA extern char public_65ca438; // OOB+0x0174
/* 0x065ca439 */ LDATA extern char public_65ca439; // OOB+0x0175
/* 0x065ca43a */ LDATA extern char public_65ca43a; // OOB+0x0176
/* 0x065ca43b */ LDATA extern char public_65ca43b; // OOB+0x0177
/* 0x065ca43c */ LDATA extern char public_65ca43c; // OOB+0x0178
/* 0x065ca43d */ LDATA extern char public_65ca43d; // OOB+0x0179
/* 0x065ca43e */ LDATA extern char public_65ca43e; // OOB+0x017a
/* 0x065ca43f */ LDATA extern char public_65ca43f; // OOB+0x017b
/* 0x065ca440 */ LDATA extern char public_65ca440; // OOB+0x017c
/* 0x065ca441 */ LDATA extern char public_65ca441; // OOB+0x017d
/* 0x065ca442 */ LDATA extern char public_65ca442; // OOB+0x017e
/* 0x065ca443 */ LDATA extern char public_65ca443; // OOB+0x017f
/* 0x065ca444 */ LDATA extern char public_65ca444; // OOB+0x0180
/* 0x065ca445 */ LDATA extern char public_65ca445; // OOB+0x0181
/* 0x065ca446 */ LDATA extern char public_65ca446; // OOB+0x0182
/* 0x065ca447 */ LDATA extern char public_65ca447; // OOB+0x0183
/* 0x065ca448 */ LDATA extern char public_65ca448; // OOB+0x0184
/* 0x065ca449 */ LDATA extern char public_65ca449; // OOB+0x0185
/* 0x065ca44a */ LDATA extern char public_65ca44a; // OOB+0x0186
/* 0x065ca44b */ LDATA extern char public_65ca44b; // OOB+0x0187
/* 0x065ca44c */ LDATA extern char public_65ca44c; // OOB+0x0188
/* 0x065ca44d */ LDATA extern char public_65ca44d; // OOB+0x0189
/* 0x065ca44e */ LDATA extern char public_65ca44e; // OOB+0x018a
/* 0x065ca44f */ LDATA extern char public_65ca44f; // OOB+0x018b
/* 0x065ca450 */ LDATA extern char public_65ca450; // OOB+0x018c
/* 0x065ca451 */ LDATA extern char public_65ca451; // OOB+0x018d
/* 0x065ca452 */ LDATA extern char public_65ca452; // OOB+0x018e
/* 0x065ca453 */ LDATA extern char public_65ca453; // OOB+0x018f
/* 0x065ca454 */ LDATA extern char public_65ca454; // OOB+0x0190
/* 0x065ca455 */ LDATA extern char public_65ca455; // OOB+0x0191
/* 0x065ca456 */ LDATA extern char public_65ca456; // OOB+0x0192
/* 0x065ca457 */ LDATA extern char public_65ca457; // OOB+0x0193
/* 0x065ca458 */ LDATA extern char public_65ca458; // OOB+0x0194
/* 0x065ca459 */ LDATA extern char public_65ca459; // OOB+0x0195
/* 0x065ca45a */ LDATA extern char public_65ca45a; // OOB+0x0196
/* 0x065ca45b */ LDATA extern char public_65ca45b; // OOB+0x0197
/* 0x065ca45c */ LDATA extern char public_65ca45c; // OOB+0x0198
/* 0x065ca45d */ LDATA extern char public_65ca45d; // OOB+0x0199
/* 0x065ca45e */ LDATA extern char public_65ca45e; // OOB+0x019a
/* 0x065ca45f */ LDATA extern char public_65ca45f; // OOB+0x019b
/* 0x065ca460 */ LDATA extern char public_65ca460; // OOB+0x019c
/* 0x065ca461 */ LDATA extern char public_65ca461; // OOB+0x019d
/* 0x065ca462 */ LDATA extern char public_65ca462; // OOB+0x019e
/* 0x065ca463 */ LDATA extern char public_65ca463; // OOB+0x019f
/* 0x065ca464 */ LDATA extern char public_65ca464; // OOB+0x01a0
/* 0x065ca465 */ LDATA extern char public_65ca465; // OOB+0x01a1
/* 0x065ca466 */ LDATA extern char public_65ca466; // OOB+0x01a2
/* 0x065ca467 */ LDATA extern char public_65ca467; // OOB+0x01a3
/* 0x065ca468 */ LDATA extern char public_65ca468; // OOB+0x01a4
/* 0x065ca469 */ LDATA extern char public_65ca469; // OOB+0x01a5
/* 0x065ca46a */ LDATA extern char public_65ca46a; // OOB+0x01a6
/* 0x065ca46b */ LDATA extern char public_65ca46b; // OOB+0x01a7
/* 0x065ca46c */ LDATA extern char public_65ca46c; // OOB+0x01a8
/* 0x065ca46d */ LDATA extern char public_65ca46d; // OOB+0x01a9
/* 0x065ca46e */ LDATA extern char public_65ca46e; // OOB+0x01aa
/* 0x065ca46f */ LDATA extern char public_65ca46f; // OOB+0x01ab
/* 0x065ca470 */ LDATA extern char public_65ca470; // OOB+0x01ac
/* 0x065ca471 */ LDATA extern char public_65ca471; // OOB+0x01ad
/* 0x065ca472 */ LDATA extern char public_65ca472; // OOB+0x01ae
/* 0x065ca473 */ LDATA extern char public_65ca473; // OOB+0x01af
/* 0x065ca474 */ LDATA extern char public_65ca474; // OOB+0x01b0
/* 0x065ca475 */ LDATA extern char public_65ca475; // OOB+0x01b1
/* 0x065ca476 */ LDATA extern char public_65ca476; // OOB+0x01b2
/* 0x065ca477 */ LDATA extern char public_65ca477; // OOB+0x01b3
/* 0x065ca478 */ LDATA extern char public_65ca478; // OOB+0x01b4
/* 0x065ca479 */ LDATA extern char public_65ca479; // OOB+0x01b5
/* 0x065ca47a */ LDATA extern char public_65ca47a; // OOB+0x01b6
/* 0x065ca47b */ LDATA extern char public_65ca47b; // OOB+0x01b7
/* 0x065ca47c */ LDATA extern char public_65ca47c; // OOB+0x01b8
/* 0x065ca47d */ LDATA extern char public_65ca47d; // OOB+0x01b9
/* 0x065ca47e */ LDATA extern char public_65ca47e; // OOB+0x01ba
/* 0x065ca47f */ LDATA extern char public_65ca47f; // OOB+0x01bb
/* 0x065ca480 */ LDATA extern char public_65ca480; // OOB+0x01bc
/* 0x065ca481 */ LDATA extern char public_65ca481; // OOB+0x01bd
/* 0x065ca482 */ LDATA extern char public_65ca482; // OOB+0x01be
/* 0x065ca483 */ LDATA extern char public_65ca483; // OOB+0x01bf
/* 0x065ca484 */ LDATA extern char public_65ca484; // OOB+0x01c0
/* 0x065ca485 */ LDATA extern char public_65ca485; // OOB+0x01c1
/* 0x065ca486 */ LDATA extern char public_65ca486; // OOB+0x01c2
/* 0x065ca487 */ LDATA extern char public_65ca487; // OOB+0x01c3
/* 0x065ca488 */ LDATA extern char public_65ca488; // OOB+0x01c4
/* 0x065ca489 */ LDATA extern char public_65ca489; // OOB+0x01c5
/* 0x065ca48a */ LDATA extern char public_65ca48a; // OOB+0x01c6
/* 0x065ca48b */ LDATA extern char public_65ca48b; // OOB+0x01c7
/* 0x065ca48c */ LDATA extern char public_65ca48c; // OOB+0x01c8
/* 0x065ca48d */ LDATA extern char public_65ca48d; // OOB+0x01c9
/* 0x065ca48e */ LDATA extern char public_65ca48e; // OOB+0x01ca
/* 0x065ca48f */ LDATA extern char public_65ca48f; // OOB+0x01cb
/* 0x065ca490 */ LDATA extern char public_65ca490; // OOB+0x01cc
/* 0x065ca491 */ LDATA extern char public_65ca491; // OOB+0x01cd
/* 0x065ca492 */ LDATA extern char public_65ca492; // OOB+0x01ce
/* 0x065ca493 */ LDATA extern char public_65ca493; // OOB+0x01cf
/* 0x065ca494 */ LDATA extern char public_65ca494; // OOB+0x01d0
/* 0x065ca495 */ LDATA extern char public_65ca495; // OOB+0x01d1
/* 0x065ca496 */ LDATA extern char public_65ca496; // OOB+0x01d2
/* 0x065ca497 */ LDATA extern char public_65ca497; // OOB+0x01d3
/* 0x065ca498 */ LDATA extern char public_65ca498; // OOB+0x01d4
/* 0x065ca499 */ LDATA extern char public_65ca499; // OOB+0x01d5
/* 0x065ca49a */ LDATA extern char public_65ca49a; // OOB+0x01d6
/* 0x065ca49b */ LDATA extern char public_65ca49b; // OOB+0x01d7
/* 0x065ca49c */ LDATA extern char public_65ca49c; // OOB+0x01d8
/* 0x065ca49d */ LDATA extern char public_65ca49d; // OOB+0x01d9
/* 0x065ca49e */ LDATA extern char public_65ca49e; // OOB+0x01da
/* 0x065ca49f */ LDATA extern char public_65ca49f; // OOB+0x01db
/* 0x065ca4a0 */ LDATA extern char public_65ca4a0; // OOB+0x01dc
/* 0x065ca4a1 */ LDATA extern char public_65ca4a1; // OOB+0x01dd
/* 0x065ca4a2 */ LDATA extern char public_65ca4a2; // OOB+0x01de
/* 0x065ca4a3 */ LDATA extern char public_65ca4a3; // OOB+0x01df
/* 0x065ca4a4 */ LDATA extern char public_65ca4a4; // OOB+0x01e0
/* 0x065ca4a5 */ LDATA extern char public_65ca4a5; // OOB+0x01e1
/* 0x065ca4a6 */ LDATA extern char public_65ca4a6; // OOB+0x01e2
/* 0x065ca4a7 */ LDATA extern char public_65ca4a7; // OOB+0x01e3
/* 0x065ca4a8 */ LDATA extern char public_65ca4a8; // OOB+0x01e4
/* 0x065ca4a9 */ LDATA extern char public_65ca4a9; // OOB+0x01e5
/* 0x065ca4aa */ LDATA extern char public_65ca4aa; // OOB+0x01e6
/* 0x065ca4ab */ LDATA extern char public_65ca4ab; // OOB+0x01e7
/* 0x065ca4ac */ LDATA extern char public_65ca4ac; // OOB+0x01e8
/* 0x065ca4ad */ LDATA extern char public_65ca4ad; // OOB+0x01e9
/* 0x065ca4ae */ LDATA extern char public_65ca4ae; // OOB+0x01ea
/* 0x065ca4af */ LDATA extern char public_65ca4af; // OOB+0x01eb
/* 0x065ca4b0 */ LDATA extern char public_65ca4b0; // OOB+0x01ec
/* 0x065ca4b1 */ LDATA extern char public_65ca4b1; // OOB+0x01ed
/* 0x065ca4b2 */ LDATA extern char public_65ca4b2; // OOB+0x01ee
/* 0x065ca4b3 */ LDATA extern char public_65ca4b3; // OOB+0x01ef
/* 0x065ca4b4 */ LDATA extern char public_65ca4b4; // OOB+0x01f0
/* 0x065ca4b5 */ LDATA extern char public_65ca4b5; // OOB+0x01f1
/* 0x065ca4b6 */ LDATA extern char public_65ca4b6; // OOB+0x01f2
/* 0x065ca4b7 */ LDATA extern char public_65ca4b7; // OOB+0x01f3
/* 0x065ca4b8 */ LDATA extern char public_65ca4b8; // OOB+0x01f4
/* 0x065ca4b9 */ LDATA extern char public_65ca4b9; // OOB+0x01f5
/* 0x065ca4ba */ LDATA extern char public_65ca4ba; // OOB+0x01f6
/* 0x065ca4bb */ LDATA extern char public_65ca4bb; // OOB+0x01f7
/* 0x065ca4bc */ LDATA extern char public_65ca4bc; // OOB+0x01f8
/* 0x065ca4bd */ LDATA extern char public_65ca4bd; // OOB+0x01f9
/* 0x065ca4be */ LDATA extern char public_65ca4be; // OOB+0x01fa
/* 0x065ca4bf */ LDATA extern char public_65ca4bf; // OOB+0x01fb
/* 0x065ca4c0 */ LDATA extern char public_65ca4c0; // OOB+0x01fc
/* 0x065ca4c1 */ LDATA extern char public_65ca4c1; // OOB+0x01fd
/* 0x065ca4c2 */ LDATA extern char public_65ca4c2; // OOB+0x01fe
/* 0x065ca4c3 */ LDATA extern char public_65ca4c3; // OOB+0x01ff
/* 0x065ca4c4 */ LDATA extern char public_65ca4c4; // OOB+0x0200
/* 0x065ca4c5 */ LDATA extern char public_65ca4c5; // OOB+0x0201
/* 0x065ca4c6 */ LDATA extern char public_65ca4c6; // OOB+0x0202
/* 0x065ca4c7 */ LDATA extern char public_65ca4c7; // OOB+0x0203
/* 0x065ca4c8 */ LDATA extern char public_65ca4c8; // OOB+0x0204
/* 0x065ca4c9 */ LDATA extern char public_65ca4c9; // OOB+0x0205
/* 0x065ca4ca */ LDATA extern char public_65ca4ca; // OOB+0x0206
/* 0x065ca4cb */ LDATA extern char public_65ca4cb; // OOB+0x0207
/* 0x065ca4cc */ LDATA extern char public_65ca4cc; // OOB+0x0208
/* 0x065ca4cd */ LDATA extern char public_65ca4cd; // OOB+0x0209
/* 0x065ca4ce */ LDATA extern char public_65ca4ce; // OOB+0x020a
/* 0x065ca4cf */ LDATA extern char public_65ca4cf; // OOB+0x020b
/* 0x065ca4d0 */ LDATA extern char public_65ca4d0; // OOB+0x020c
/* 0x065ca4d1 */ LDATA extern char public_65ca4d1; // OOB+0x020d
/* 0x065ca4d2 */ LDATA extern char public_65ca4d2; // OOB+0x020e
/* 0x065ca4d3 */ LDATA extern char public_65ca4d3; // OOB+0x020f
/* 0x065ca4d4 */ LDATA extern char public_65ca4d4; // OOB+0x0210
/* 0x065ca4d5 */ LDATA extern char public_65ca4d5; // OOB+0x0211
/* 0x065ca4d6 */ LDATA extern char public_65ca4d6; // OOB+0x0212
/* 0x065ca4d7 */ LDATA extern char public_65ca4d7; // OOB+0x0213
/* 0x065ca4d8 */ LDATA extern char public_65ca4d8; // OOB+0x0214
/* 0x065ca4d9 */ LDATA extern char public_65ca4d9; // OOB+0x0215
/* 0x065ca4da */ LDATA extern char public_65ca4da; // OOB+0x0216
/* 0x065ca4db */ LDATA extern char public_65ca4db; // OOB+0x0217
/* 0x065ca4dc */ LDATA extern char public_65ca4dc; // OOB+0x0218
/* 0x065ca4dd */ LDATA extern char public_65ca4dd; // OOB+0x0219
/* 0x065ca4de */ LDATA extern char public_65ca4de; // OOB+0x021a
/* 0x065ca4df */ LDATA extern char public_65ca4df; // OOB+0x021b
/* 0x065ca4e0 */ LDATA extern char public_65ca4e0; // OOB+0x021c
/* 0x065ca4e1 */ LDATA extern char public_65ca4e1; // OOB+0x021d
/* 0x065ca4e2 */ LDATA extern char public_65ca4e2; // OOB+0x021e
/* 0x065ca4e3 */ LDATA extern char public_65ca4e3; // OOB+0x021f
/* 0x065ca4e4 */ LDATA extern char public_65ca4e4; // OOB+0x0220
/* 0x065ca4e5 */ LDATA extern char public_65ca4e5; // OOB+0x0221
/* 0x065ca4e6 */ LDATA extern char public_65ca4e6; // OOB+0x0222
/* 0x065ca4e7 */ LDATA extern char public_65ca4e7; // OOB+0x0223
/* 0x065ca4e8 */ LDATA extern char public_65ca4e8; // OOB+0x0224
/* 0x065ca4e9 */ LDATA extern char public_65ca4e9; // OOB+0x0225
/* 0x065ca4ea */ LDATA extern char public_65ca4ea; // OOB+0x0226
/* 0x065ca4eb */ LDATA extern char public_65ca4eb; // OOB+0x0227
/* 0x065ca4ec */ LDATA extern char public_65ca4ec; // OOB+0x0228
/* 0x065ca4ed */ LDATA extern char public_65ca4ed; // OOB+0x0229
/* 0x065ca4ee */ LDATA extern char public_65ca4ee; // OOB+0x022a
/* 0x065ca4ef */ LDATA extern char public_65ca4ef; // OOB+0x022b
/* 0x065ca4f0 */ LDATA extern char public_65ca4f0; // OOB+0x022c
/* 0x065ca4f1 */ LDATA extern char public_65ca4f1; // OOB+0x022d
/* 0x065ca4f2 */ LDATA extern char public_65ca4f2; // OOB+0x022e
/* 0x065ca4f3 */ LDATA extern char public_65ca4f3; // OOB+0x022f
/* 0x065ca4f4 */ LDATA extern char public_65ca4f4; // OOB+0x0230
/* 0x065ca4f5 */ LDATA extern char public_65ca4f5; // OOB+0x0231
/* 0x065ca4f6 */ LDATA extern char public_65ca4f6; // OOB+0x0232
/* 0x065ca4f7 */ LDATA extern char public_65ca4f7; // OOB+0x0233
/* 0x065ca4f8 */ LDATA extern char public_65ca4f8; // OOB+0x0234
/* 0x065ca4f9 */ LDATA extern char public_65ca4f9; // OOB+0x0235
/* 0x065ca4fa */ LDATA extern char public_65ca4fa; // OOB+0x0236
/* 0x065ca4fb */ LDATA extern char public_65ca4fb; // OOB+0x0237
/* 0x065ca4fc */ LDATA extern char public_65ca4fc; // OOB+0x0238
/* 0x065ca4fd */ LDATA extern char public_65ca4fd; // OOB+0x0239
/* 0x065ca4fe */ LDATA extern char public_65ca4fe; // OOB+0x023a
/* 0x065ca4ff */ LDATA extern char public_65ca4ff; // OOB+0x023b
/* 0x065ca500 */ LDATA extern char public_65ca500; // OOB+0x023c
/* 0x065ca501 */ LDATA extern char public_65ca501; // OOB+0x023d
/* 0x065ca502 */ LDATA extern char public_65ca502; // OOB+0x023e
/* 0x065ca503 */ LDATA extern char public_65ca503; // OOB+0x023f
/* 0x065ca504 */ LDATA extern char public_65ca504; // OOB+0x0240
/* 0x065ca505 */ LDATA extern char public_65ca505; // OOB+0x0241
/* 0x065ca506 */ LDATA extern char public_65ca506; // OOB+0x0242
/* 0x065ca507 */ LDATA extern char public_65ca507; // OOB+0x0243
/* 0x065ca508 */ LDATA extern char public_65ca508; // OOB+0x0244
/* 0x065ca509 */ LDATA extern char public_65ca509; // OOB+0x0245
/* 0x065ca50a */ LDATA extern char public_65ca50a; // OOB+0x0246
/* 0x065ca50b */ LDATA extern char public_65ca50b; // OOB+0x0247
/* 0x065ca50c */ LDATA extern char public_65ca50c; // OOB+0x0248
/* 0x065ca50d */ LDATA extern char public_65ca50d; // OOB+0x0249
/* 0x065ca50e */ LDATA extern char public_65ca50e; // OOB+0x024a
/* 0x065ca50f */ LDATA extern char public_65ca50f; // OOB+0x024b
/* 0x065ca510 */ LDATA extern char public_65ca510; // OOB+0x024c
/* 0x065ca511 */ LDATA extern char public_65ca511; // OOB+0x024d
/* 0x065ca512 */ LDATA extern char public_65ca512; // OOB+0x024e
/* 0x065ca513 */ LDATA extern char public_65ca513; // OOB+0x024f
/* 0x065ca514 */ LDATA extern char public_65ca514; // OOB+0x0250
/* 0x065ca515 */ LDATA extern char public_65ca515; // OOB+0x0251
/* 0x065ca516 */ LDATA extern char public_65ca516; // OOB+0x0252
/* 0x065ca517 */ LDATA extern char public_65ca517; // OOB+0x0253
/* 0x065ca518 */ LDATA extern char public_65ca518; // OOB+0x0254
/* 0x065ca519 */ LDATA extern char public_65ca519; // OOB+0x0255
/* 0x065ca51a */ LDATA extern char public_65ca51a; // OOB+0x0256
/* 0x065ca51b */ LDATA extern char public_65ca51b; // OOB+0x0257
/* 0x065ca51c */ LDATA extern char public_65ca51c; // OOB+0x0258
/* 0x065ca51d */ LDATA extern char public_65ca51d; // OOB+0x0259
/* 0x065ca51e */ LDATA extern char public_65ca51e; // OOB+0x025a
/* 0x065ca51f */ LDATA extern char public_65ca51f; // OOB+0x025b
/* 0x065ca520 */ LDATA extern char public_65ca520; // OOB+0x025c
/* 0x065ca521 */ LDATA extern char public_65ca521; // OOB+0x025d
/* 0x065ca522 */ LDATA extern char public_65ca522; // OOB+0x025e
/* 0x065ca523 */ LDATA extern char public_65ca523; // OOB+0x025f
/* 0x065ca524 */ LDATA extern char public_65ca524; // OOB+0x0260
/* 0x065ca525 */ LDATA extern char public_65ca525; // OOB+0x0261
/* 0x065ca526 */ LDATA extern char public_65ca526; // OOB+0x0262
/* 0x065ca527 */ LDATA extern char public_65ca527; // OOB+0x0263
/* 0x065ca528 */ LDATA extern char public_65ca528; // OOB+0x0264
/* 0x065ca529 */ LDATA extern char public_65ca529; // OOB+0x0265
/* 0x065ca52a */ LDATA extern char public_65ca52a; // OOB+0x0266
/* 0x065ca52b */ LDATA extern char public_65ca52b; // OOB+0x0267
/* 0x065ca52c */ LDATA extern char public_65ca52c; // OOB+0x0268
/* 0x065ca52d */ LDATA extern char public_65ca52d; // OOB+0x0269
/* 0x065ca52e */ LDATA extern char public_65ca52e; // OOB+0x026a
/* 0x065ca52f */ LDATA extern char public_65ca52f; // OOB+0x026b
/* 0x065ca530 */ LDATA extern char public_65ca530; // OOB+0x026c
/* 0x065ca531 */ LDATA extern char public_65ca531; // OOB+0x026d
/* 0x065ca532 */ LDATA extern char public_65ca532; // OOB+0x026e
/* 0x065ca533 */ LDATA extern char public_65ca533; // OOB+0x026f
/* 0x065ca534 */ LDATA extern char public_65ca534; // OOB+0x0270
/* 0x065ca535 */ LDATA extern char public_65ca535; // OOB+0x0271
/* 0x065ca536 */ LDATA extern char public_65ca536; // OOB+0x0272
/* 0x065ca537 */ LDATA extern char public_65ca537; // OOB+0x0273
/* 0x065ca538 */ LDATA extern char public_65ca538; // OOB+0x0274
/* 0x065ca539 */ LDATA extern char public_65ca539; // OOB+0x0275
/* 0x065ca53a */ LDATA extern char public_65ca53a; // OOB+0x0276
/* 0x065ca53b */ LDATA extern char public_65ca53b; // OOB+0x0277
/* 0x065ca53c */ LDATA extern char public_65ca53c; // OOB+0x0278
/* 0x065ca53d */ LDATA extern char public_65ca53d; // OOB+0x0279
/* 0x065ca53e */ LDATA extern char public_65ca53e; // OOB+0x027a
/* 0x065ca53f */ LDATA extern char public_65ca53f; // OOB+0x027b
/* 0x065ca540 */ LDATA extern char public_65ca540; // OOB+0x027c
/* 0x065ca541 */ LDATA extern char public_65ca541; // OOB+0x027d
/* 0x065ca542 */ LDATA extern char public_65ca542; // OOB+0x027e
/* 0x065ca543 */ LDATA extern char public_65ca543; // OOB+0x027f
/* 0x065ca544 */ LDATA extern char public_65ca544; // OOB+0x0280
/* 0x065ca545 */ LDATA extern char public_65ca545; // OOB+0x0281
/* 0x065ca546 */ LDATA extern char public_65ca546; // OOB+0x0282
/* 0x065ca547 */ LDATA extern char public_65ca547; // OOB+0x0283
/* 0x065ca548 */ LDATA extern char public_65ca548; // OOB+0x0284
/* 0x065ca549 */ LDATA extern char public_65ca549; // OOB+0x0285
/* 0x065ca54a */ LDATA extern char public_65ca54a; // OOB+0x0286
/* 0x065ca54b */ LDATA extern char public_65ca54b; // OOB+0x0287
/* 0x065ca54c */ LDATA extern char public_65ca54c; // OOB+0x0288
/* 0x065ca54d */ LDATA extern char public_65ca54d; // OOB+0x0289
/* 0x065ca54e */ LDATA extern char public_65ca54e; // OOB+0x028a
/* 0x065ca54f */ LDATA extern char public_65ca54f; // OOB+0x028b
/* 0x065ca550 */ LDATA extern char public_65ca550; // OOB+0x028c
/* 0x065ca551 */ LDATA extern char public_65ca551; // OOB+0x028d
/* 0x065ca552 */ LDATA extern char public_65ca552; // OOB+0x028e
/* 0x065ca553 */ LDATA extern char public_65ca553; // OOB+0x028f
/* 0x065ca554 */ LDATA extern char public_65ca554; // OOB+0x0290
/* 0x065ca555 */ LDATA extern char public_65ca555; // OOB+0x0291
/* 0x065ca556 */ LDATA extern char public_65ca556; // OOB+0x0292
/* 0x065ca557 */ LDATA extern char public_65ca557; // OOB+0x0293
/* 0x065ca558 */ LDATA extern char public_65ca558; // OOB+0x0294
/* 0x065ca559 */ LDATA extern char public_65ca559; // OOB+0x0295
/* 0x065ca55a */ LDATA extern char public_65ca55a; // OOB+0x0296
/* 0x065ca55b */ LDATA extern char public_65ca55b; // OOB+0x0297
/* 0x065ca55c */ LDATA extern char public_65ca55c; // OOB+0x0298
/* 0x065ca55d */ LDATA extern char public_65ca55d; // OOB+0x0299
/* 0x065ca55e */ LDATA extern char public_65ca55e; // OOB+0x029a
/* 0x065ca55f */ LDATA extern char public_65ca55f; // OOB+0x029b
/* 0x065ca560 */ LDATA extern char public_65ca560; // OOB+0x029c
/* 0x065ca561 */ LDATA extern char public_65ca561; // OOB+0x029d
/* 0x065ca562 */ LDATA extern char public_65ca562; // OOB+0x029e
/* 0x065ca563 */ LDATA extern char public_65ca563; // OOB+0x029f
/* 0x065ca564 */ LDATA extern char public_65ca564; // OOB+0x02a0
/* 0x065ca565 */ LDATA extern char public_65ca565; // OOB+0x02a1
/* 0x065ca566 */ LDATA extern char public_65ca566; // OOB+0x02a2
/* 0x065ca567 */ LDATA extern char public_65ca567; // OOB+0x02a3
/* 0x065ca568 */ LDATA extern char public_65ca568; // OOB+0x02a4
/* 0x065ca569 */ LDATA extern char public_65ca569; // OOB+0x02a5
/* 0x065ca56a */ LDATA extern char public_65ca56a; // OOB+0x02a6
/* 0x065ca56b */ LDATA extern char public_65ca56b; // OOB+0x02a7
/* 0x065ca56c */ LDATA extern char public_65ca56c; // OOB+0x02a8
/* 0x065ca56d */ LDATA extern char public_65ca56d; // OOB+0x02a9
/* 0x065ca56e */ LDATA extern char public_65ca56e; // OOB+0x02aa
/* 0x065ca56f */ LDATA extern char public_65ca56f; // OOB+0x02ab
/* 0x065ca570 */ LDATA extern char public_65ca570; // OOB+0x02ac
/* 0x065ca571 */ LDATA extern char public_65ca571; // OOB+0x02ad
/* 0x065ca572 */ LDATA extern char public_65ca572; // OOB+0x02ae
/* 0x065ca573 */ LDATA extern char public_65ca573; // OOB+0x02af
/* 0x065ca574 */ LDATA extern char public_65ca574; // OOB+0x02b0
/* 0x065ca575 */ LDATA extern char public_65ca575; // OOB+0x02b1
/* 0x065ca576 */ LDATA extern char public_65ca576; // OOB+0x02b2
/* 0x065ca577 */ LDATA extern char public_65ca577; // OOB+0x02b3
/* 0x065ca578 */ LDATA extern char public_65ca578; // OOB+0x02b4
/* 0x065ca579 */ LDATA extern char public_65ca579; // OOB+0x02b5
/* 0x065ca57a */ LDATA extern char public_65ca57a; // OOB+0x02b6
/* 0x065ca57b */ LDATA extern char public_65ca57b; // OOB+0x02b7
/* 0x065ca57c */ LDATA extern char public_65ca57c; // OOB+0x02b8
/* 0x065ca57d */ LDATA extern char public_65ca57d; // OOB+0x02b9
/* 0x065ca57e */ LDATA extern char public_65ca57e; // OOB+0x02ba
/* 0x065ca57f */ LDATA extern char public_65ca57f; // OOB+0x02bb
/* 0x065ca580 */ LDATA extern char public_65ca580; // OOB+0x02bc
/* 0x065ca581 */ LDATA extern char public_65ca581; // OOB+0x02bd
/* 0x065ca582 */ LDATA extern char public_65ca582; // OOB+0x02be
/* 0x065ca583 */ LDATA extern char public_65ca583; // OOB+0x02bf
/* 0x065ca584 */ LDATA extern char public_65ca584; // OOB+0x02c0
/* 0x065ca585 */ LDATA extern char public_65ca585; // OOB+0x02c1
/* 0x065ca586 */ LDATA extern char public_65ca586; // OOB+0x02c2
/* 0x065ca587 */ LDATA extern char public_65ca587; // OOB+0x02c3
/* 0x065ca588 */ LDATA extern char public_65ca588; // OOB+0x02c4
/* 0x065ca589 */ LDATA extern char public_65ca589; // OOB+0x02c5
/* 0x065ca58a */ LDATA extern char public_65ca58a; // OOB+0x02c6
/* 0x065ca58b */ LDATA extern char public_65ca58b; // OOB+0x02c7
/* 0x065ca58c */ LDATA extern char public_65ca58c; // OOB+0x02c8
/* 0x065ca58d */ LDATA extern char public_65ca58d; // OOB+0x02c9
/* 0x065ca58e */ LDATA extern char public_65ca58e; // OOB+0x02ca
/* 0x065ca58f */ LDATA extern char public_65ca58f; // OOB+0x02cb
/* 0x065ca590 */ LDATA extern char public_65ca590; // OOB+0x02cc
/* 0x065ca591 */ LDATA extern char public_65ca591; // OOB+0x02cd
/* 0x065ca592 */ LDATA extern char public_65ca592; // OOB+0x02ce
/* 0x065ca593 */ LDATA extern char public_65ca593; // OOB+0x02cf
/* 0x065ca594 */ LDATA extern char public_65ca594; // OOB+0x02d0
/* 0x065ca595 */ LDATA extern char public_65ca595; // OOB+0x02d1
/* 0x065ca596 */ LDATA extern char public_65ca596; // OOB+0x02d2
/* 0x065ca597 */ LDATA extern char public_65ca597; // OOB+0x02d3
/* 0x065ca598 */ LDATA extern char public_65ca598; // OOB+0x02d4
/* 0x065ca599 */ LDATA extern char public_65ca599; // OOB+0x02d5
/* 0x065ca59a */ LDATA extern char public_65ca59a; // OOB+0x02d6
/* 0x065ca59b */ LDATA extern char public_65ca59b; // OOB+0x02d7
/* 0x065ca59c */ LDATA extern char public_65ca59c; // OOB+0x02d8
/* 0x065ca59d */ LDATA extern char public_65ca59d; // OOB+0x02d9
/* 0x065ca59e */ LDATA extern char public_65ca59e; // OOB+0x02da
/* 0x065ca59f */ LDATA extern char public_65ca59f; // OOB+0x02db
/* 0x065ca5a0 */ LDATA extern char public_65ca5a0; // OOB+0x02dc
/* 0x065ca5a1 */ LDATA extern char public_65ca5a1; // OOB+0x02dd
/* 0x065ca5a2 */ LDATA extern char public_65ca5a2; // OOB+0x02de
/* 0x065ca5a3 */ LDATA extern char public_65ca5a3; // OOB+0x02df
/* 0x065ca5a4 */ LDATA extern char public_65ca5a4; // OOB+0x02e0
/* 0x065ca5a5 */ LDATA extern char public_65ca5a5; // OOB+0x02e1
/* 0x065ca5a6 */ LDATA extern char public_65ca5a6; // OOB+0x02e2
/* 0x065ca5a7 */ LDATA extern char public_65ca5a7; // OOB+0x02e3
/* 0x065ca5a8 */ LDATA extern char public_65ca5a8; // OOB+0x02e4
/* 0x065ca5a9 */ LDATA extern char public_65ca5a9; // OOB+0x02e5
/* 0x065ca5aa */ LDATA extern char public_65ca5aa; // OOB+0x02e6
/* 0x065ca5ab */ LDATA extern char public_65ca5ab; // OOB+0x02e7
/* 0x065ca5ac */ LDATA extern char public_65ca5ac; // OOB+0x02e8
/* 0x065ca5ad */ LDATA extern char public_65ca5ad; // OOB+0x02e9
/* 0x065ca5ae */ LDATA extern char public_65ca5ae; // OOB+0x02ea
/* 0x065ca5af */ LDATA extern char public_65ca5af; // OOB+0x02eb
/* 0x065ca5b0 */ LDATA extern char public_65ca5b0; // OOB+0x02ec
/* 0x065ca5b1 */ LDATA extern char public_65ca5b1; // OOB+0x02ed
/* 0x065ca5b2 */ LDATA extern char public_65ca5b2; // OOB+0x02ee
/* 0x065ca5b3 */ LDATA extern char public_65ca5b3; // OOB+0x02ef
/* 0x065ca5b4 */ LDATA extern char public_65ca5b4; // OOB+0x02f0
/* 0x065ca5b5 */ LDATA extern char public_65ca5b5; // OOB+0x02f1
/* 0x065ca5b6 */ LDATA extern char public_65ca5b6; // OOB+0x02f2
/* 0x065ca5b7 */ LDATA extern char public_65ca5b7; // OOB+0x02f3
/* 0x065ca5b8 */ LDATA extern char public_65ca5b8; // OOB+0x02f4
/* 0x065ca5b9 */ LDATA extern char public_65ca5b9; // OOB+0x02f5
/* 0x065ca5ba */ LDATA extern char public_65ca5ba; // OOB+0x02f6
/* 0x065ca5bb */ LDATA extern char public_65ca5bb; // OOB+0x02f7
/* 0x065ca5bc */ LDATA extern char public_65ca5bc; // OOB+0x02f8
/* 0x065ca5bd */ LDATA extern char public_65ca5bd; // OOB+0x02f9
/* 0x065ca5be */ LDATA extern char public_65ca5be; // OOB+0x02fa
/* 0x065ca5bf */ LDATA extern char public_65ca5bf; // OOB+0x02fb
/* 0x065ca5c0 */ LDATA extern char public_65ca5c0; // OOB+0x02fc
/* 0x065ca5c1 */ LDATA extern char public_65ca5c1; // OOB+0x02fd
/* 0x065ca5c2 */ LDATA extern char public_65ca5c2; // OOB+0x02fe
/* 0x065ca5c3 */ LDATA extern char public_65ca5c3; // OOB+0x02ff
/* 0x065ca5c4 */ LDATA extern char public_65ca5c4; // OOB+0x0300
/* 0x065ca5c5 */ LDATA extern char public_65ca5c5; // OOB+0x0301
/* 0x065ca5c6 */ LDATA extern char public_65ca5c6; // OOB+0x0302
/* 0x065ca5c7 */ LDATA extern char public_65ca5c7; // OOB+0x0303
/* 0x065ca5c8 */ LDATA extern char public_65ca5c8; // OOB+0x0304
/* 0x065ca5c9 */ LDATA extern char public_65ca5c9; // OOB+0x0305
/* 0x065ca5ca */ LDATA extern char public_65ca5ca; // OOB+0x0306
/* 0x065ca5cb */ LDATA extern char public_65ca5cb; // OOB+0x0307
/* 0x065ca5cc */ LDATA extern char public_65ca5cc; // OOB+0x0308
/* 0x065ca5cd */ LDATA extern char public_65ca5cd; // OOB+0x0309
/* 0x065ca5ce */ LDATA extern char public_65ca5ce; // OOB+0x030a
/* 0x065ca5cf */ LDATA extern char public_65ca5cf; // OOB+0x030b
/* 0x065ca5d0 */ LDATA extern char public_65ca5d0; // OOB+0x030c
/* 0x065ca5d1 */ LDATA extern char public_65ca5d1; // OOB+0x030d
/* 0x065ca5d2 */ LDATA extern char public_65ca5d2; // OOB+0x030e
/* 0x065ca5d3 */ LDATA extern char public_65ca5d3; // OOB+0x030f
/* 0x065ca5d4 */ LDATA extern char public_65ca5d4; // OOB+0x0310
/* 0x065ca5d5 */ LDATA extern char public_65ca5d5; // OOB+0x0311
/* 0x065ca5d6 */ LDATA extern char public_65ca5d6; // OOB+0x0312
/* 0x065ca5d7 */ LDATA extern char public_65ca5d7; // OOB+0x0313
/* 0x065ca5d8 */ LDATA extern char public_65ca5d8; // OOB+0x0314
/* 0x065ca5d9 */ LDATA extern char public_65ca5d9; // OOB+0x0315
/* 0x065ca5da */ LDATA extern char public_65ca5da; // OOB+0x0316
/* 0x065ca5db */ LDATA extern char public_65ca5db; // OOB+0x0317
/* 0x065ca5dc */ LDATA extern char public_65ca5dc; // OOB+0x0318
/* 0x065ca5dd */ LDATA extern char public_65ca5dd; // OOB+0x0319
/* 0x065ca5de */ LDATA extern char public_65ca5de; // OOB+0x031a
/* 0x065ca5df */ LDATA extern char public_65ca5df; // OOB+0x031b
/* 0x065ca5e0 */ LDATA extern char public_65ca5e0; // OOB+0x031c
/* 0x065ca5e1 */ LDATA extern char public_65ca5e1; // OOB+0x031d
/* 0x065ca5e2 */ LDATA extern char public_65ca5e2; // OOB+0x031e
/* 0x065ca5e3 */ LDATA extern char public_65ca5e3; // OOB+0x031f
/* 0x065ca5e4 */ LDATA extern char public_65ca5e4; // OOB+0x0320
/* 0x065ca5e5 */ LDATA extern char public_65ca5e5; // OOB+0x0321
/* 0x065ca5e6 */ LDATA extern char public_65ca5e6; // OOB+0x0322
/* 0x065ca5e7 */ LDATA extern char public_65ca5e7; // OOB+0x0323
/* 0x065ca5e8 */ LDATA extern char public_65ca5e8; // OOB+0x0324
/* 0x065ca5e9 */ LDATA extern char public_65ca5e9; // OOB+0x0325
/* 0x065ca5ea */ LDATA extern char public_65ca5ea; // OOB+0x0326
/* 0x065ca5eb */ LDATA extern char public_65ca5eb; // OOB+0x0327
/* 0x065ca5ec */ LDATA extern char public_65ca5ec; // OOB+0x0328
/* 0x065ca5ed */ LDATA extern char public_65ca5ed; // OOB+0x0329
/* 0x065ca5ee */ LDATA extern char public_65ca5ee; // OOB+0x032a
/* 0x065ca5ef */ LDATA extern char public_65ca5ef; // OOB+0x032b
/* 0x065ca5f0 */ LDATA extern char public_65ca5f0; // OOB+0x032c
/* 0x065ca5f1 */ LDATA extern char public_65ca5f1; // OOB+0x032d
/* 0x065ca5f2 */ LDATA extern char public_65ca5f2; // OOB+0x032e
/* 0x065ca5f3 */ LDATA extern char public_65ca5f3; // OOB+0x032f
/* 0x065ca5f4 */ LDATA extern char public_65ca5f4; // OOB+0x0330
/* 0x065ca5f5 */ LDATA extern char public_65ca5f5; // OOB+0x0331
/* 0x065ca5f6 */ LDATA extern char public_65ca5f6; // OOB+0x0332
/* 0x065ca5f7 */ LDATA extern char public_65ca5f7; // OOB+0x0333
/* 0x065ca5f8 */ LDATA extern char public_65ca5f8; // OOB+0x0334
/* 0x065ca5f9 */ LDATA extern char public_65ca5f9; // OOB+0x0335
/* 0x065ca5fa */ LDATA extern char public_65ca5fa; // OOB+0x0336
/* 0x065ca5fb */ LDATA extern char public_65ca5fb; // OOB+0x0337
/* 0x065ca5fc */ LDATA extern char public_65ca5fc; // OOB+0x0338
/* 0x065ca5fd */ LDATA extern char public_65ca5fd; // OOB+0x0339
/* 0x065ca5fe */ LDATA extern char public_65ca5fe; // OOB+0x033a
/* 0x065ca5ff */ LDATA extern char public_65ca5ff; // OOB+0x033b
/* 0x065ca600 */ LDATA extern char public_65ca600; // OOB+0x033c
/* 0x065ca601 */ LDATA extern char public_65ca601; // OOB+0x033d
/* 0x065ca602 */ LDATA extern char public_65ca602; // OOB+0x033e
/* 0x065ca603 */ LDATA extern char public_65ca603; // OOB+0x033f
/* 0x065ca604 */ LDATA extern char public_65ca604; // OOB+0x0340
/* 0x065ca605 */ LDATA extern char public_65ca605; // OOB+0x0341
/* 0x065ca606 */ LDATA extern char public_65ca606; // OOB+0x0342
/* 0x065ca607 */ LDATA extern char public_65ca607; // OOB+0x0343
/* 0x065ca608 */ LDATA extern char public_65ca608; // OOB+0x0344
/* 0x065ca609 */ LDATA extern char public_65ca609; // OOB+0x0345
/* 0x065ca60a */ LDATA extern char public_65ca60a; // OOB+0x0346
/* 0x065ca60b */ LDATA extern char public_65ca60b; // OOB+0x0347
/* 0x065ca60c */ LDATA extern char public_65ca60c; // OOB+0x0348
/* 0x065ca60d */ LDATA extern char public_65ca60d; // OOB+0x0349
/* 0x065ca60e */ LDATA extern char public_65ca60e; // OOB+0x034a
/* 0x065ca60f */ LDATA extern char public_65ca60f; // OOB+0x034b
/* 0x065ca610 */ LDATA extern char public_65ca610; // OOB+0x034c
/* 0x065ca611 */ LDATA extern char public_65ca611; // OOB+0x034d
/* 0x065ca612 */ LDATA extern char public_65ca612; // OOB+0x034e
/* 0x065ca613 */ LDATA extern char public_65ca613; // OOB+0x034f
/* 0x065ca614 */ LDATA extern char public_65ca614; // OOB+0x0350
/* 0x065ca615 */ LDATA extern char public_65ca615; // OOB+0x0351
/* 0x065ca616 */ LDATA extern char public_65ca616; // OOB+0x0352
/* 0x065ca617 */ LDATA extern char public_65ca617; // OOB+0x0353
/* 0x065ca618 */ LDATA extern char public_65ca618; // OOB+0x0354
/* 0x065ca619 */ LDATA extern char public_65ca619; // OOB+0x0355
/* 0x065ca61a */ LDATA extern char public_65ca61a; // OOB+0x0356
/* 0x065ca61b */ LDATA extern char public_65ca61b; // OOB+0x0357
/* 0x065ca61c */ LDATA extern char public_65ca61c; // OOB+0x0358
/* 0x065ca61d */ LDATA extern char public_65ca61d; // OOB+0x0359
/* 0x065ca61e */ LDATA extern char public_65ca61e; // OOB+0x035a
/* 0x065ca61f */ LDATA extern char public_65ca61f; // OOB+0x035b
/* 0x065ca620 */ LDATA extern char public_65ca620; // OOB+0x035c
/* 0x065ca621 */ LDATA extern char public_65ca621; // OOB+0x035d
/* 0x065ca622 */ LDATA extern char public_65ca622; // OOB+0x035e
/* 0x065ca623 */ LDATA extern char public_65ca623; // OOB+0x035f
/* 0x065ca624 */ LDATA extern char public_65ca624; // OOB+0x0360
/* 0x065ca625 */ LDATA extern char public_65ca625; // OOB+0x0361
/* 0x065ca626 */ LDATA extern char public_65ca626; // OOB+0x0362
/* 0x065ca627 */ LDATA extern char public_65ca627; // OOB+0x0363
/* 0x065ca628 */ LDATA extern char public_65ca628; // OOB+0x0364
/* 0x065ca629 */ LDATA extern char public_65ca629; // OOB+0x0365
/* 0x065ca62a */ LDATA extern char public_65ca62a; // OOB+0x0366
/* 0x065ca62b */ LDATA extern char public_65ca62b; // OOB+0x0367
/* 0x065ca62c */ LDATA extern char public_65ca62c; // OOB+0x0368
/* 0x065ca62d */ LDATA extern char public_65ca62d; // OOB+0x0369
/* 0x065ca62e */ LDATA extern char public_65ca62e; // OOB+0x036a
/* 0x065ca62f */ LDATA extern char public_65ca62f; // OOB+0x036b
/* 0x065ca630 */ LDATA extern char public_65ca630; // OOB+0x036c
/* 0x065ca631 */ LDATA extern char public_65ca631; // OOB+0x036d
/* 0x065ca632 */ LDATA extern char public_65ca632; // OOB+0x036e
/* 0x065ca633 */ LDATA extern char public_65ca633; // OOB+0x036f
/* 0x065ca634 */ LDATA extern char public_65ca634; // OOB+0x0370
/* 0x065ca635 */ LDATA extern char public_65ca635; // OOB+0x0371
/* 0x065ca636 */ LDATA extern char public_65ca636; // OOB+0x0372
/* 0x065ca637 */ LDATA extern char public_65ca637; // OOB+0x0373
/* 0x065ca638 */ LDATA extern char public_65ca638; // OOB+0x0374
/* 0x065ca639 */ LDATA extern char public_65ca639; // OOB+0x0375
/* 0x065ca63a */ LDATA extern char public_65ca63a; // OOB+0x0376
/* 0x065ca63b */ LDATA extern char public_65ca63b; // OOB+0x0377
/* 0x065ca63c */ LDATA extern char public_65ca63c; // OOB+0x0378
/* 0x065ca63d */ LDATA extern char public_65ca63d; // OOB+0x0379
/* 0x065ca63e */ LDATA extern char public_65ca63e; // OOB+0x037a
/* 0x065ca63f */ LDATA extern char public_65ca63f; // OOB+0x037b
/* 0x065ca640 */ LDATA extern char public_65ca640; // OOB+0x037c
/* 0x065ca641 */ LDATA extern char public_65ca641; // OOB+0x037d
/* 0x065ca642 */ LDATA extern char public_65ca642; // OOB+0x037e
/* 0x065ca643 */ LDATA extern char public_65ca643; // OOB+0x037f
/* 0x065ca644 */ LDATA extern char public_65ca644; // OOB+0x0380
/* 0x065ca645 */ LDATA extern char public_65ca645; // OOB+0x0381
/* 0x065ca646 */ LDATA extern char public_65ca646; // OOB+0x0382
/* 0x065ca647 */ LDATA extern char public_65ca647; // OOB+0x0383
/* 0x065ca648 */ LDATA extern char public_65ca648; // OOB+0x0384
/* 0x065ca649 */ LDATA extern char public_65ca649; // OOB+0x0385
/* 0x065ca64a */ LDATA extern char public_65ca64a; // OOB+0x0386
/* 0x065ca64b */ LDATA extern char public_65ca64b; // OOB+0x0387
/* 0x065ca64c */ LDATA extern char public_65ca64c; // OOB+0x0388
/* 0x065ca64d */ LDATA extern char public_65ca64d; // OOB+0x0389
/* 0x065ca64e */ LDATA extern char public_65ca64e; // OOB+0x038a
/* 0x065ca64f */ LDATA extern char public_65ca64f; // OOB+0x038b
/* 0x065ca650 */ LDATA extern char public_65ca650; // OOB+0x038c
/* 0x065ca651 */ LDATA extern char public_65ca651; // OOB+0x038d
/* 0x065ca652 */ LDATA extern char public_65ca652; // OOB+0x038e
/* 0x065ca653 */ LDATA extern char public_65ca653; // OOB+0x038f
/* 0x065ca654 */ LDATA extern char public_65ca654; // OOB+0x0390
/* 0x065ca655 */ LDATA extern char public_65ca655; // OOB+0x0391
/* 0x065ca656 */ LDATA extern char public_65ca656; // OOB+0x0392
/* 0x065ca657 */ LDATA extern char public_65ca657; // OOB+0x0393
/* 0x065ca658 */ LDATA extern char public_65ca658; // OOB+0x0394
/* 0x065ca659 */ LDATA extern char public_65ca659; // OOB+0x0395
/* 0x065ca65a */ LDATA extern char public_65ca65a; // OOB+0x0396
/* 0x065ca65b */ LDATA extern char public_65ca65b; // OOB+0x0397
/* 0x065ca65c */ LDATA extern char public_65ca65c; // OOB+0x0398
/* 0x065ca65d */ LDATA extern char public_65ca65d; // OOB+0x0399
/* 0x065ca65e */ LDATA extern char public_65ca65e; // OOB+0x039a
/* 0x065ca65f */ LDATA extern char public_65ca65f; // OOB+0x039b
/* 0x065ca660 */ LDATA extern char public_65ca660; // OOB+0x039c
/* 0x065ca661 */ LDATA extern char public_65ca661; // OOB+0x039d
/* 0x065ca662 */ LDATA extern char public_65ca662; // OOB+0x039e
/* 0x065ca663 */ LDATA extern char public_65ca663; // OOB+0x039f
/* 0x065ca664 */ LDATA extern char public_65ca664; // OOB+0x03a0
/* 0x065ca665 */ LDATA extern char public_65ca665; // OOB+0x03a1
/* 0x065ca666 */ LDATA extern char public_65ca666; // OOB+0x03a2
/* 0x065ca667 */ LDATA extern char public_65ca667; // OOB+0x03a3
/* 0x065ca668 */ LDATA extern char public_65ca668; // OOB+0x03a4
/* 0x065ca669 */ LDATA extern char public_65ca669; // OOB+0x03a5
/* 0x065ca66a */ LDATA extern char public_65ca66a; // OOB+0x03a6
/* 0x065ca66b */ LDATA extern char public_65ca66b; // OOB+0x03a7
/* 0x065ca66c */ LDATA extern char public_65ca66c; // OOB+0x03a8
/* 0x065ca66d */ LDATA extern char public_65ca66d; // OOB+0x03a9
/* 0x065ca66e */ LDATA extern char public_65ca66e; // OOB+0x03aa
/* 0x065ca66f */ LDATA extern char public_65ca66f; // OOB+0x03ab
/* 0x065ca670 */ LDATA extern char public_65ca670; // OOB+0x03ac
/* 0x065ca671 */ LDATA extern char public_65ca671; // OOB+0x03ad
/* 0x065ca672 */ LDATA extern char public_65ca672; // OOB+0x03ae
/* 0x065ca673 */ LDATA extern char public_65ca673; // OOB+0x03af
/* 0x065ca674 */ LDATA extern char public_65ca674; // OOB+0x03b0
/* 0x065ca675 */ LDATA extern char public_65ca675; // OOB+0x03b1
/* 0x065ca676 */ LDATA extern char public_65ca676; // OOB+0x03b2
/* 0x065ca677 */ LDATA extern char public_65ca677; // OOB+0x03b3
/* 0x065ca678 */ LDATA extern char public_65ca678; // OOB+0x03b4
/* 0x065ca679 */ LDATA extern char public_65ca679; // OOB+0x03b5
/* 0x065ca67a */ LDATA extern char public_65ca67a; // OOB+0x03b6
/* 0x065ca67b */ LDATA extern char public_65ca67b; // OOB+0x03b7
/* 0x065ca67c */ LDATA extern char public_65ca67c; // OOB+0x03b8
/* 0x065ca67d */ LDATA extern char public_65ca67d; // OOB+0x03b9
/* 0x065ca67e */ LDATA extern char public_65ca67e; // OOB+0x03ba
/* 0x065ca67f */ LDATA extern char public_65ca67f; // OOB+0x03bb
/* 0x065ca680 */ LDATA extern char public_65ca680; // OOB+0x03bc
/* 0x065ca681 */ LDATA extern char public_65ca681; // OOB+0x03bd
/* 0x065ca682 */ LDATA extern char public_65ca682; // OOB+0x03be
/* 0x065ca683 */ LDATA extern char public_65ca683; // OOB+0x03bf
/* 0x065ca684 */ LDATA extern char public_65ca684; // OOB+0x03c0
/* 0x065ca685 */ LDATA extern char public_65ca685; // OOB+0x03c1
/* 0x065ca686 */ LDATA extern char public_65ca686; // OOB+0x03c2
/* 0x065ca687 */ LDATA extern char public_65ca687; // OOB+0x03c3
/* 0x065ca688 */ LDATA extern char public_65ca688; // OOB+0x03c4
/* 0x065ca689 */ LDATA extern char public_65ca689; // OOB+0x03c5
/* 0x065ca68a */ LDATA extern char public_65ca68a; // OOB+0x03c6
/* 0x065ca68b */ LDATA extern char public_65ca68b; // OOB+0x03c7
/* 0x065ca68c */ LDATA extern char public_65ca68c; // OOB+0x03c8
/* 0x065ca68d */ LDATA extern char public_65ca68d; // OOB+0x03c9
/* 0x065ca68e */ LDATA extern char public_65ca68e; // OOB+0x03ca
/* 0x065ca68f */ LDATA extern char public_65ca68f; // OOB+0x03cb
/* 0x065ca690 */ LDATA extern char public_65ca690; // OOB+0x03cc
/* 0x065ca691 */ LDATA extern char public_65ca691; // OOB+0x03cd
/* 0x065ca692 */ LDATA extern char public_65ca692; // OOB+0x03ce
/* 0x065ca693 */ LDATA extern char public_65ca693; // OOB+0x03cf
/* 0x065ca694 */ LDATA extern char public_65ca694; // OOB+0x03d0
/* 0x065ca695 */ LDATA extern char public_65ca695; // OOB+0x03d1
/* 0x065ca696 */ LDATA extern char public_65ca696; // OOB+0x03d2
/* 0x065ca697 */ LDATA extern char public_65ca697; // OOB+0x03d3
/* 0x065ca698 */ LDATA extern char public_65ca698; // OOB+0x03d4
/* 0x065ca699 */ LDATA extern char public_65ca699; // OOB+0x03d5
/* 0x065ca69a */ LDATA extern char public_65ca69a; // OOB+0x03d6
/* 0x065ca69b */ LDATA extern char public_65ca69b; // OOB+0x03d7
/* 0x065ca69c */ LDATA extern char public_65ca69c; // OOB+0x03d8
/* 0x065ca69d */ LDATA extern char public_65ca69d; // OOB+0x03d9
/* 0x065ca69e */ LDATA extern char public_65ca69e; // OOB+0x03da
/* 0x065ca69f */ LDATA extern char public_65ca69f; // OOB+0x03db
/* 0x065ca6a0 */ LDATA extern char public_65ca6a0; // OOB+0x03dc
/* 0x065ca6a1 */ LDATA extern char public_65ca6a1; // OOB+0x03dd
/* 0x065ca6a2 */ LDATA extern char public_65ca6a2; // OOB+0x03de
/* 0x065ca6a3 */ LDATA extern char public_65ca6a3; // OOB+0x03df
/* 0x065ca6a4 */ LDATA extern char public_65ca6a4; // OOB+0x03e0
/* 0x065ca6a5 */ LDATA extern char public_65ca6a5; // OOB+0x03e1
/* 0x065ca6a6 */ LDATA extern char public_65ca6a6; // OOB+0x03e2
/* 0x065ca6a7 */ LDATA extern char public_65ca6a7; // OOB+0x03e3
/* 0x065ca6a8 */ LDATA extern char public_65ca6a8; // OOB+0x03e4
/* 0x065ca6a9 */ LDATA extern char public_65ca6a9; // OOB+0x03e5
/* 0x065ca6aa */ LDATA extern char public_65ca6aa; // OOB+0x03e6
/* 0x065ca6ab */ LDATA extern char public_65ca6ab; // OOB+0x03e7
/* 0x065ca6ac */ LDATA extern char public_65ca6ac; // OOB+0x03e8
/* 0x065ca6ad */ LDATA extern char public_65ca6ad; // OOB+0x03e9
/* 0x065ca6ae */ LDATA extern char public_65ca6ae; // OOB+0x03ea
/* 0x065ca6af */ LDATA extern char public_65ca6af; // OOB+0x03eb
/* 0x065ca6b0 */ LDATA extern char public_65ca6b0; // OOB+0x03ec
/* 0x065ca6b1 */ LDATA extern char public_65ca6b1; // OOB+0x03ed
/* 0x065ca6b2 */ LDATA extern char public_65ca6b2; // OOB+0x03ee
/* 0x065ca6b3 */ LDATA extern char public_65ca6b3; // OOB+0x03ef
/* 0x065ca6b4 */ LDATA extern char public_65ca6b4; // OOB+0x03f0
/* 0x065ca6b5 */ LDATA extern char public_65ca6b5; // OOB+0x03f1
/* 0x065ca6b6 */ LDATA extern char public_65ca6b6; // OOB+0x03f2
/* 0x065ca6b7 */ LDATA extern char public_65ca6b7; // OOB+0x03f3
/* 0x065ca6b8 */ LDATA extern char public_65ca6b8; // OOB+0x03f4
/* 0x065ca6b9 */ LDATA extern char public_65ca6b9; // OOB+0x03f5
/* 0x065ca6ba */ LDATA extern char public_65ca6ba; // OOB+0x03f6
/* 0x065ca6bb */ LDATA extern char public_65ca6bb; // OOB+0x03f7
/* 0x065ca6bc */ LDATA extern char public_65ca6bc; // OOB+0x03f8
/* 0x065ca6bd */ LDATA extern char public_65ca6bd; // OOB+0x03f9
/* 0x065ca6be */ LDATA extern char public_65ca6be; // OOB+0x03fa
/* 0x065ca6bf */ LDATA extern char public_65ca6bf; // OOB+0x03fb
/* 0x065ca6c0 */ LDATA extern char public_65ca6c0; // OOB+0x03fc
/* 0x065ca6c1 */ LDATA extern char public_65ca6c1; // OOB+0x03fd
/* 0x065ca6c2 */ LDATA extern char public_65ca6c2; // OOB+0x03fe
/* 0x065ca6c3 */ LDATA extern char public_65ca6c3; // OOB+0x03ff
/* 0x065ca6c4 */ LDATA extern char public_65ca6c4; // OOB+0x0400
/* 0x065ca6c5 */ LDATA extern char public_65ca6c5; // OOB+0x0401
/* 0x065ca6c6 */ LDATA extern char public_65ca6c6; // OOB+0x0402
/* 0x065ca6c7 */ LDATA extern char public_65ca6c7; // OOB+0x0403
/* 0x065ca6c8 */ LDATA extern char public_65ca6c8; // OOB+0x0404
/* 0x065ca6c9 */ LDATA extern char public_65ca6c9; // OOB+0x0405
/* 0x065ca6ca */ LDATA extern char public_65ca6ca; // OOB+0x0406
/* 0x065ca6cb */ LDATA extern char public_65ca6cb; // OOB+0x0407
/* 0x065ca6cc */ LDATA extern char public_65ca6cc; // OOB+0x0408
/* 0x065ca6cd */ LDATA extern char public_65ca6cd; // OOB+0x0409
/* 0x065ca6ce */ LDATA extern char public_65ca6ce; // OOB+0x040a
/* 0x065ca6cf */ LDATA extern char public_65ca6cf; // OOB+0x040b
/* 0x065ca6d0 */ LDATA extern char public_65ca6d0; // OOB+0x040c
/* 0x065ca6d1 */ LDATA extern char public_65ca6d1; // OOB+0x040d
/* 0x065ca6d2 */ LDATA extern char public_65ca6d2; // OOB+0x040e
/* 0x065ca6d3 */ LDATA extern char public_65ca6d3; // OOB+0x040f
/* 0x065ca6d4 */ LDATA extern char public_65ca6d4; // OOB+0x0410
/* 0x065ca6d5 */ LDATA extern char public_65ca6d5; // OOB+0x0411
/* 0x065ca6d6 */ LDATA extern char public_65ca6d6; // OOB+0x0412
/* 0x065ca6d7 */ LDATA extern char public_65ca6d7; // OOB+0x0413
/* 0x065ca6d8 */ LDATA extern char public_65ca6d8; // OOB+0x0414
/* 0x065ca6d9 */ LDATA extern char public_65ca6d9; // OOB+0x0415
/* 0x065ca6da */ LDATA extern char public_65ca6da; // OOB+0x0416
/* 0x065ca6db */ LDATA extern char public_65ca6db; // OOB+0x0417
/* 0x065ca6dc */ LDATA extern char public_65ca6dc; // OOB+0x0418
/* 0x065ca6dd */ LDATA extern char public_65ca6dd; // OOB+0x0419
/* 0x065ca6de */ LDATA extern char public_65ca6de; // OOB+0x041a
/* 0x065ca6df */ LDATA extern char public_65ca6df; // OOB+0x041b
/* 0x065ca6e0 */ LDATA extern char public_65ca6e0; // OOB+0x041c
/* 0x065ca6e1 */ LDATA extern char public_65ca6e1; // OOB+0x041d
/* 0x065ca6e2 */ LDATA extern char public_65ca6e2; // OOB+0x041e
/* 0x065ca6e3 */ LDATA extern char public_65ca6e3; // OOB+0x041f
/* 0x065ca6e4 */ LDATA extern char public_65ca6e4; // OOB+0x0420
/* 0x065ca6e5 */ LDATA extern char public_65ca6e5; // OOB+0x0421
/* 0x065ca6e6 */ LDATA extern char public_65ca6e6; // OOB+0x0422
/* 0x065ca6e7 */ LDATA extern char public_65ca6e7; // OOB+0x0423
/* 0x065ca6e8 */ LDATA extern char public_65ca6e8; // OOB+0x0424
/* 0x065ca6e9 */ LDATA extern char public_65ca6e9; // OOB+0x0425
/* 0x065ca6ea */ LDATA extern char public_65ca6ea; // OOB+0x0426
/* 0x065ca6eb */ LDATA extern char public_65ca6eb; // OOB+0x0427
/* 0x065ca6ec */ LDATA extern char public_65ca6ec; // OOB+0x0428
/* 0x065ca6ed */ LDATA extern char public_65ca6ed; // OOB+0x0429
/* 0x065ca6ee */ LDATA extern char public_65ca6ee; // OOB+0x042a
/* 0x065ca6ef */ LDATA extern char public_65ca6ef; // OOB+0x042b
/* 0x065ca6f0 */ LDATA extern char public_65ca6f0; // OOB+0x042c
/* 0x065ca6f1 */ LDATA extern char public_65ca6f1; // OOB+0x042d
/* 0x065ca6f2 */ LDATA extern char public_65ca6f2; // OOB+0x042e
/* 0x065ca6f3 */ LDATA extern char public_65ca6f3; // OOB+0x042f
/* 0x065ca6f4 */ LDATA extern char public_65ca6f4; // OOB+0x0430
/* 0x065ca6f5 */ LDATA extern char public_65ca6f5; // OOB+0x0431
/* 0x065ca6f6 */ LDATA extern char public_65ca6f6; // OOB+0x0432
/* 0x065ca6f7 */ LDATA extern char public_65ca6f7; // OOB+0x0433
/* 0x065ca6f8 */ LDATA extern char public_65ca6f8; // OOB+0x0434
/* 0x065ca6f9 */ LDATA extern char public_65ca6f9; // OOB+0x0435
/* 0x065ca6fa */ LDATA extern char public_65ca6fa; // OOB+0x0436
/* 0x065ca6fb */ LDATA extern char public_65ca6fb; // OOB+0x0437
/* 0x065ca6fc */ LDATA extern char public_65ca6fc; // OOB+0x0438
/* 0x065ca6fd */ LDATA extern char public_65ca6fd; // OOB+0x0439
/* 0x065ca6fe */ LDATA extern char public_65ca6fe; // OOB+0x043a
/* 0x065ca6ff */ LDATA extern char public_65ca6ff; // OOB+0x043b
/* 0x065ca700 */ LDATA extern char public_65ca700; // OOB+0x043c
/* 0x065ca701 */ LDATA extern char public_65ca701; // OOB+0x043d
/* 0x065ca702 */ LDATA extern char public_65ca702; // OOB+0x043e
/* 0x065ca703 */ LDATA extern char public_65ca703; // OOB+0x043f
/* 0x065ca704 */ LDATA extern char public_65ca704; // OOB+0x0440
/* 0x065ca705 */ LDATA extern char public_65ca705; // OOB+0x0441
/* 0x065ca706 */ LDATA extern char public_65ca706; // OOB+0x0442
/* 0x065ca707 */ LDATA extern char public_65ca707; // OOB+0x0443
/* 0x065ca708 */ LDATA extern char public_65ca708; // OOB+0x0444
/* 0x065ca709 */ LDATA extern char public_65ca709; // OOB+0x0445
/* 0x065ca70a */ LDATA extern char public_65ca70a; // OOB+0x0446
/* 0x065ca70b */ LDATA extern char public_65ca70b; // OOB+0x0447
/* 0x065ca70c */ LDATA extern char public_65ca70c; // OOB+0x0448
/* 0x065ca70d */ LDATA extern char public_65ca70d; // OOB+0x0449
/* 0x065ca70e */ LDATA extern char public_65ca70e; // OOB+0x044a
/* 0x065ca70f */ LDATA extern char public_65ca70f; // OOB+0x044b
/* 0x065ca710 */ LDATA extern char public_65ca710; // OOB+0x044c
/* 0x065ca711 */ LDATA extern char public_65ca711; // OOB+0x044d
/* 0x065ca712 */ LDATA extern char public_65ca712; // OOB+0x044e
/* 0x065ca713 */ LDATA extern char public_65ca713; // OOB+0x044f
/* 0x065ca714 */ LDATA extern char public_65ca714; // OOB+0x0450
/* 0x065ca715 */ LDATA extern char public_65ca715; // OOB+0x0451
/* 0x065ca716 */ LDATA extern char public_65ca716; // OOB+0x0452
/* 0x065ca717 */ LDATA extern char public_65ca717; // OOB+0x0453
/* 0x065ca718 */ LDATA extern char public_65ca718; // OOB+0x0454
/* 0x065ca719 */ LDATA extern char public_65ca719; // OOB+0x0455
/* 0x065ca71a */ LDATA extern char public_65ca71a; // OOB+0x0456
/* 0x065ca71b */ LDATA extern char public_65ca71b; // OOB+0x0457
/* 0x065ca71c */ LDATA extern char public_65ca71c; // OOB+0x0458
/* 0x065ca71d */ LDATA extern char public_65ca71d; // OOB+0x0459
/* 0x065ca71e */ LDATA extern char public_65ca71e; // OOB+0x045a
/* 0x065ca71f */ LDATA extern char public_65ca71f; // OOB+0x045b
/* 0x065ca720 */ LDATA extern char public_65ca720; // OOB+0x045c
/* 0x065ca721 */ LDATA extern char public_65ca721; // OOB+0x045d
/* 0x065ca722 */ LDATA extern char public_65ca722; // OOB+0x045e
/* 0x065ca723 */ LDATA extern char public_65ca723; // OOB+0x045f
/* 0x065ca724 */ LDATA extern char public_65ca724; // OOB+0x0460
/* 0x065ca725 */ LDATA extern char public_65ca725; // OOB+0x0461
/* 0x065ca726 */ LDATA extern char public_65ca726; // OOB+0x0462
/* 0x065ca727 */ LDATA extern char public_65ca727; // OOB+0x0463
/* 0x065ca728 */ LDATA extern char public_65ca728; // OOB+0x0464
/* 0x065ca729 */ LDATA extern char public_65ca729; // OOB+0x0465
/* 0x065ca72a */ LDATA extern char public_65ca72a; // OOB+0x0466
/* 0x065ca72b */ LDATA extern char public_65ca72b; // OOB+0x0467
/* 0x065ca72c */ LDATA extern char public_65ca72c; // OOB+0x0468
/* 0x065ca72d */ LDATA extern char public_65ca72d; // OOB+0x0469
/* 0x065ca72e */ LDATA extern char public_65ca72e; // OOB+0x046a
/* 0x065ca72f */ LDATA extern char public_65ca72f; // OOB+0x046b
/* 0x065ca730 */ LDATA extern char public_65ca730; // OOB+0x046c
/* 0x065ca731 */ LDATA extern char public_65ca731; // OOB+0x046d
/* 0x065ca732 */ LDATA extern char public_65ca732; // OOB+0x046e
/* 0x065ca733 */ LDATA extern char public_65ca733; // OOB+0x046f
/* 0x065ca734 */ LDATA extern char public_65ca734; // OOB+0x0470
/* 0x065ca735 */ LDATA extern char public_65ca735; // OOB+0x0471
/* 0x065ca736 */ LDATA extern char public_65ca736; // OOB+0x0472
/* 0x065ca737 */ LDATA extern char public_65ca737; // OOB+0x0473
/* 0x065ca738 */ LDATA extern char public_65ca738; // OOB+0x0474
/* 0x065ca739 */ LDATA extern char public_65ca739; // OOB+0x0475
/* 0x065ca73a */ LDATA extern char public_65ca73a; // OOB+0x0476
/* 0x065ca73b */ LDATA extern char public_65ca73b; // OOB+0x0477
/* 0x065ca73c */ LDATA extern char public_65ca73c; // OOB+0x0478
/* 0x065ca73d */ LDATA extern char public_65ca73d; // OOB+0x0479
/* 0x065ca73e */ LDATA extern char public_65ca73e; // OOB+0x047a
/* 0x065ca73f */ LDATA extern char public_65ca73f; // OOB+0x047b
/* 0x065ca740 */ LDATA extern char public_65ca740; // OOB+0x047c
/* 0x065ca741 */ LDATA extern char public_65ca741; // OOB+0x047d
/* 0x065ca742 */ LDATA extern char public_65ca742; // OOB+0x047e
/* 0x065ca743 */ LDATA extern char public_65ca743; // OOB+0x047f
/* 0x065ca744 */ LDATA extern char public_65ca744; // OOB+0x0480
/* 0x065ca745 */ LDATA extern char public_65ca745; // OOB+0x0481
/* 0x065ca746 */ LDATA extern char public_65ca746; // OOB+0x0482
/* 0x065ca747 */ LDATA extern char public_65ca747; // OOB+0x0483
/* 0x065ca748 */ LDATA extern char public_65ca748; // OOB+0x0484
/* 0x065ca749 */ LDATA extern char public_65ca749; // OOB+0x0485
/* 0x065ca74a */ LDATA extern char public_65ca74a; // OOB+0x0486
/* 0x065ca74b */ LDATA extern char public_65ca74b; // OOB+0x0487
/* 0x065ca74c */ LDATA extern char public_65ca74c; // OOB+0x0488
/* 0x065ca74d */ LDATA extern char public_65ca74d; // OOB+0x0489
/* 0x065ca74e */ LDATA extern char public_65ca74e; // OOB+0x048a
/* 0x065ca74f */ LDATA extern char public_65ca74f; // OOB+0x048b
/* 0x065ca750 */ LDATA extern char public_65ca750; // OOB+0x048c
/* 0x065ca751 */ LDATA extern char public_65ca751; // OOB+0x048d
/* 0x065ca752 */ LDATA extern char public_65ca752; // OOB+0x048e
/* 0x065ca753 */ LDATA extern char public_65ca753; // OOB+0x048f
/* 0x065ca754 */ LDATA extern char public_65ca754; // OOB+0x0490
/* 0x065ca755 */ LDATA extern char public_65ca755; // OOB+0x0491
/* 0x065ca756 */ LDATA extern char public_65ca756; // OOB+0x0492
/* 0x065ca757 */ LDATA extern char public_65ca757; // OOB+0x0493
/* 0x065ca758 */ LDATA extern char public_65ca758; // OOB+0x0494
/* 0x065ca759 */ LDATA extern char public_65ca759; // OOB+0x0495
/* 0x065ca75a */ LDATA extern char public_65ca75a; // OOB+0x0496
/* 0x065ca75b */ LDATA extern char public_65ca75b; // OOB+0x0497
/* 0x065ca75c */ LDATA extern char public_65ca75c; // OOB+0x0498
/* 0x065ca75d */ LDATA extern char public_65ca75d; // OOB+0x0499
/* 0x065ca75e */ LDATA extern char public_65ca75e; // OOB+0x049a
/* 0x065ca75f */ LDATA extern char public_65ca75f; // OOB+0x049b
/* 0x065ca760 */ LDATA extern char public_65ca760; // OOB+0x049c
/* 0x065ca761 */ LDATA extern char public_65ca761; // OOB+0x049d
/* 0x065ca762 */ LDATA extern char public_65ca762; // OOB+0x049e
/* 0x065ca763 */ LDATA extern char public_65ca763; // OOB+0x049f
/* 0x065ca764 */ LDATA extern char public_65ca764; // OOB+0x04a0
/* 0x065ca765 */ LDATA extern char public_65ca765; // OOB+0x04a1
/* 0x065ca766 */ LDATA extern char public_65ca766; // OOB+0x04a2
/* 0x065ca767 */ LDATA extern char public_65ca767; // OOB+0x04a3
/* 0x065ca768 */ LDATA extern char public_65ca768; // OOB+0x04a4
/* 0x065ca769 */ LDATA extern char public_65ca769; // OOB+0x04a5
/* 0x065ca76a */ LDATA extern char public_65ca76a; // OOB+0x04a6
/* 0x065ca76b */ LDATA extern char public_65ca76b; // OOB+0x04a7
/* 0x065ca76c */ LDATA extern char public_65ca76c; // OOB+0x04a8
/* 0x065ca76d */ LDATA extern char public_65ca76d; // OOB+0x04a9
/* 0x065ca76e */ LDATA extern char public_65ca76e; // OOB+0x04aa
/* 0x065ca76f */ LDATA extern char public_65ca76f; // OOB+0x04ab
/* 0x065ca770 */ LDATA extern char public_65ca770; // OOB+0x04ac
/* 0x065ca771 */ LDATA extern char public_65ca771; // OOB+0x04ad
/* 0x065ca772 */ LDATA extern char public_65ca772; // OOB+0x04ae
/* 0x065ca773 */ LDATA extern char public_65ca773; // OOB+0x04af
/* 0x065ca774 */ LDATA extern char public_65ca774; // OOB+0x04b0
/* 0x065ca775 */ LDATA extern char public_65ca775; // OOB+0x04b1
/* 0x065ca776 */ LDATA extern char public_65ca776; // OOB+0x04b2
/* 0x065ca777 */ LDATA extern char public_65ca777; // OOB+0x04b3
/* 0x065ca778 */ LDATA extern char public_65ca778; // OOB+0x04b4
/* 0x065ca779 */ LDATA extern char public_65ca779; // OOB+0x04b5
/* 0x065ca77a */ LDATA extern char public_65ca77a; // OOB+0x04b6
/* 0x065ca77b */ LDATA extern char public_65ca77b; // OOB+0x04b7
/* 0x065ca77c */ LDATA extern char public_65ca77c; // OOB+0x04b8
/* 0x065ca77d */ LDATA extern char public_65ca77d; // OOB+0x04b9
/* 0x065ca77e */ LDATA extern char public_65ca77e; // OOB+0x04ba
/* 0x065ca77f */ LDATA extern char public_65ca77f; // OOB+0x04bb
/* 0x065ca780 */ LDATA extern char public_65ca780; // OOB+0x04bc
/* 0x065ca781 */ LDATA extern char public_65ca781; // OOB+0x04bd
/* 0x065ca782 */ LDATA extern char public_65ca782; // OOB+0x04be
/* 0x065ca783 */ LDATA extern char public_65ca783; // OOB+0x04bf
/* 0x065ca784 */ LDATA extern char public_65ca784; // OOB+0x04c0
/* 0x065ca785 */ LDATA extern char public_65ca785; // OOB+0x04c1
/* 0x065ca786 */ LDATA extern char public_65ca786; // OOB+0x04c2
/* 0x065ca787 */ LDATA extern char public_65ca787; // OOB+0x04c3
/* 0x065ca788 */ LDATA extern char public_65ca788; // OOB+0x04c4
/* 0x065ca789 */ LDATA extern char public_65ca789; // OOB+0x04c5
/* 0x065ca78a */ LDATA extern char public_65ca78a; // OOB+0x04c6
/* 0x065ca78b */ LDATA extern char public_65ca78b; // OOB+0x04c7
/* 0x065ca78c */ LDATA extern char public_65ca78c; // OOB+0x04c8
/* 0x065ca78d */ LDATA extern char public_65ca78d; // OOB+0x04c9
/* 0x065ca78e */ LDATA extern char public_65ca78e; // OOB+0x04ca
/* 0x065ca78f */ LDATA extern char public_65ca78f; // OOB+0x04cb
/* 0x065ca790 */ LDATA extern char public_65ca790; // OOB+0x04cc
/* 0x065ca791 */ LDATA extern char public_65ca791; // OOB+0x04cd
/* 0x065ca792 */ LDATA extern char public_65ca792; // OOB+0x04ce
/* 0x065ca793 */ LDATA extern char public_65ca793; // OOB+0x04cf
/* 0x065ca794 */ LDATA extern char public_65ca794; // OOB+0x04d0
/* 0x065ca795 */ LDATA extern char public_65ca795; // OOB+0x04d1
/* 0x065ca796 */ LDATA extern char public_65ca796; // OOB+0x04d2
/* 0x065ca797 */ LDATA extern char public_65ca797; // OOB+0x04d3
/* 0x065ca798 */ LDATA extern char public_65ca798; // OOB+0x04d4
/* 0x065ca799 */ LDATA extern char public_65ca799; // OOB+0x04d5
/* 0x065ca79a */ LDATA extern char public_65ca79a; // OOB+0x04d6
/* 0x065ca79b */ LDATA extern char public_65ca79b; // OOB+0x04d7
/* 0x065ca79c */ LDATA extern char public_65ca79c; // OOB+0x04d8
/* 0x065ca79d */ LDATA extern char public_65ca79d; // OOB+0x04d9
/* 0x065ca79e */ LDATA extern char public_65ca79e; // OOB+0x04da
/* 0x065ca79f */ LDATA extern char public_65ca79f; // OOB+0x04db
/* 0x065ca7a0 */ LDATA extern char public_65ca7a0; // OOB+0x04dc
/* 0x065ca7a1 */ LDATA extern char public_65ca7a1; // OOB+0x04dd
/* 0x065ca7a2 */ LDATA extern char public_65ca7a2; // OOB+0x04de
/* 0x065ca7a3 */ LDATA extern char public_65ca7a3; // OOB+0x04df
/* 0x065ca7a4 */ LDATA extern char public_65ca7a4; // OOB+0x04e0
/* 0x065ca7a5 */ LDATA extern char public_65ca7a5; // OOB+0x04e1
/* 0x065ca7a6 */ LDATA extern char public_65ca7a6; // OOB+0x04e2
/* 0x065ca7a7 */ LDATA extern char public_65ca7a7; // OOB+0x04e3
/* 0x065ca7a8 */ LDATA extern char public_65ca7a8; // OOB+0x04e4
/* 0x065ca7a9 */ LDATA extern char public_65ca7a9; // OOB+0x04e5
/* 0x065ca7aa */ LDATA extern char public_65ca7aa; // OOB+0x04e6
/* 0x065ca7ab */ LDATA extern char public_65ca7ab; // OOB+0x04e7
/* 0x065ca7ac */ LDATA extern char public_65ca7ac; // OOB+0x04e8
/* 0x065ca7ad */ LDATA extern char public_65ca7ad; // OOB+0x04e9
/* 0x065ca7ae */ LDATA extern char public_65ca7ae; // OOB+0x04ea
/* 0x065ca7af */ LDATA extern char public_65ca7af; // OOB+0x04eb
/* 0x065ca7b0 */ LDATA extern char public_65ca7b0; // OOB+0x04ec
/* 0x065ca7b1 */ LDATA extern char public_65ca7b1; // OOB+0x04ed
/* 0x065ca7b2 */ LDATA extern char public_65ca7b2; // OOB+0x04ee
/* 0x065ca7b3 */ LDATA extern char public_65ca7b3; // OOB+0x04ef
/* 0x065ca7b4 */ LDATA extern char public_65ca7b4; // OOB+0x04f0
/* 0x065ca7b5 */ LDATA extern char public_65ca7b5; // OOB+0x04f1
/* 0x065ca7b6 */ LDATA extern char public_65ca7b6; // OOB+0x04f2
/* 0x065ca7b7 */ LDATA extern char public_65ca7b7; // OOB+0x04f3
/* 0x065ca7b8 */ LDATA extern char public_65ca7b8; // OOB+0x04f4
/* 0x065ca7b9 */ LDATA extern char public_65ca7b9; // OOB+0x04f5
/* 0x065ca7ba */ LDATA extern char public_65ca7ba; // OOB+0x04f6
/* 0x065ca7bb */ LDATA extern char public_65ca7bb; // OOB+0x04f7
/* 0x065ca7bc */ LDATA extern char public_65ca7bc; // OOB+0x04f8
/* 0x065ca7bd */ LDATA extern char public_65ca7bd; // OOB+0x04f9
/* 0x065ca7be */ LDATA extern char public_65ca7be; // OOB+0x04fa
/* 0x065ca7bf */ LDATA extern char public_65ca7bf; // OOB+0x04fb
/* 0x065ca7c0 */ LDATA extern char public_65ca7c0; // OOB+0x04fc
/* 0x065ca7c1 */ LDATA extern char public_65ca7c1; // OOB+0x04fd
/* 0x065ca7c2 */ LDATA extern char public_65ca7c2; // OOB+0x04fe
/* 0x065ca7c3 */ LDATA extern char public_65ca7c3; // OOB+0x04ff
/* 0x065ca7c4 */ LDATA extern char public_65ca7c4; // OOB+0x0500
/* 0x065ca7c5 */ LDATA extern char public_65ca7c5; // OOB+0x0501
/* 0x065ca7c6 */ LDATA extern char public_65ca7c6; // OOB+0x0502
/* 0x065ca7c7 */ LDATA extern char public_65ca7c7; // OOB+0x0503
/* 0x065ca7c8 */ LDATA extern char public_65ca7c8; // OOB+0x0504
/* 0x065ca7c9 */ LDATA extern char public_65ca7c9; // OOB+0x0505
/* 0x065ca7ca */ LDATA extern char public_65ca7ca; // OOB+0x0506
/* 0x065ca7cb */ LDATA extern char public_65ca7cb; // OOB+0x0507
/* 0x065ca7cc */ LDATA extern char public_65ca7cc; // OOB+0x0508
/* 0x065ca7cd */ LDATA extern char public_65ca7cd; // OOB+0x0509
/* 0x065ca7ce */ LDATA extern char public_65ca7ce; // OOB+0x050a
/* 0x065ca7cf */ LDATA extern char public_65ca7cf; // OOB+0x050b
/* 0x065ca7d0 */ LDATA extern char public_65ca7d0; // OOB+0x050c
/* 0x065ca7d1 */ LDATA extern char public_65ca7d1; // OOB+0x050d
/* 0x065ca7d2 */ LDATA extern char public_65ca7d2; // OOB+0x050e
/* 0x065ca7d3 */ LDATA extern char public_65ca7d3; // OOB+0x050f
/* 0x065ca7d4 */ LDATA extern char public_65ca7d4; // OOB+0x0510
/* 0x065ca7d5 */ LDATA extern char public_65ca7d5; // OOB+0x0511
/* 0x065ca7d6 */ LDATA extern char public_65ca7d6; // OOB+0x0512
/* 0x065ca7d7 */ LDATA extern char public_65ca7d7; // OOB+0x0513
/* 0x065ca7d8 */ LDATA extern char public_65ca7d8; // OOB+0x0514
/* 0x065ca7d9 */ LDATA extern char public_65ca7d9; // OOB+0x0515
/* 0x065ca7da */ LDATA extern char public_65ca7da; // OOB+0x0516
/* 0x065ca7db */ LDATA extern char public_65ca7db; // OOB+0x0517
/* 0x065ca7dc */ LDATA extern char public_65ca7dc; // OOB+0x0518
/* 0x065ca7dd */ LDATA extern char public_65ca7dd; // OOB+0x0519
/* 0x065ca7de */ LDATA extern char public_65ca7de; // OOB+0x051a
/* 0x065ca7df */ LDATA extern char public_65ca7df; // OOB+0x051b
/* 0x065ca7e0 */ LDATA extern char public_65ca7e0; // OOB+0x051c
/* 0x065ca7e1 */ LDATA extern char public_65ca7e1; // OOB+0x051d
/* 0x065ca7e2 */ LDATA extern char public_65ca7e2; // OOB+0x051e
/* 0x065ca7e3 */ LDATA extern char public_65ca7e3; // OOB+0x051f
/* 0x065ca7e4 */ LDATA extern char public_65ca7e4; // OOB+0x0520
/* 0x065ca7e5 */ LDATA extern char public_65ca7e5; // OOB+0x0521
/* 0x065ca7e6 */ LDATA extern char public_65ca7e6; // OOB+0x0522
/* 0x065ca7e7 */ LDATA extern char public_65ca7e7; // OOB+0x0523
/* 0x065ca7e8 */ LDATA extern char public_65ca7e8; // OOB+0x0524
/* 0x065ca7e9 */ LDATA extern char public_65ca7e9; // OOB+0x0525
/* 0x065ca7ea */ LDATA extern char public_65ca7ea; // OOB+0x0526
/* 0x065ca7eb */ LDATA extern char public_65ca7eb; // OOB+0x0527
/* 0x065ca7ec */ LDATA extern char public_65ca7ec; // OOB+0x0528
/* 0x065ca7ed */ LDATA extern char public_65ca7ed; // OOB+0x0529
/* 0x065ca7ee */ LDATA extern char public_65ca7ee; // OOB+0x052a
/* 0x065ca7ef */ LDATA extern char public_65ca7ef; // OOB+0x052b
/* 0x065ca7f0 */ LDATA extern char public_65ca7f0; // OOB+0x052c
/* 0x065ca7f1 */ LDATA extern char public_65ca7f1; // OOB+0x052d
/* 0x065ca7f2 */ LDATA extern char public_65ca7f2; // OOB+0x052e
/* 0x065ca7f3 */ LDATA extern char public_65ca7f3; // OOB+0x052f
/* 0x065ca7f4 */ LDATA extern char public_65ca7f4; // OOB+0x0530
/* 0x065ca7f5 */ LDATA extern char public_65ca7f5; // OOB+0x0531
/* 0x065ca7f6 */ LDATA extern char public_65ca7f6; // OOB+0x0532
/* 0x065ca7f7 */ LDATA extern char public_65ca7f7; // OOB+0x0533
/* 0x065ca7f8 */ LDATA extern char public_65ca7f8; // OOB+0x0534
/* 0x065ca7f9 */ LDATA extern char public_65ca7f9; // OOB+0x0535
/* 0x065ca7fa */ LDATA extern char public_65ca7fa; // OOB+0x0536
/* 0x065ca7fb */ LDATA extern char public_65ca7fb; // OOB+0x0537
/* 0x065ca7fc */ LDATA extern char public_65ca7fc; // OOB+0x0538
/* 0x065ca7fd */ LDATA extern char public_65ca7fd; // OOB+0x0539
/* 0x065ca7fe */ LDATA extern char public_65ca7fe; // OOB+0x053a
/* 0x065ca7ff */ LDATA extern char public_65ca7ff; // OOB+0x053b
/* 0x065ca800 */ LDATA extern char public_65ca800; // OOB+0x053c
/* 0x065ca801 */ LDATA extern char public_65ca801; // OOB+0x053d
/* 0x065ca802 */ LDATA extern char public_65ca802; // OOB+0x053e
/* 0x065ca803 */ LDATA extern char public_65ca803; // OOB+0x053f
/* 0x065ca804 */ LDATA extern char public_65ca804; // OOB+0x0540
/* 0x065ca805 */ LDATA extern char public_65ca805; // OOB+0x0541
/* 0x065ca806 */ LDATA extern char public_65ca806; // OOB+0x0542
/* 0x065ca807 */ LDATA extern char public_65ca807; // OOB+0x0543
/* 0x065ca808 */ LDATA extern char public_65ca808; // OOB+0x0544
/* 0x065ca809 */ LDATA extern char public_65ca809; // OOB+0x0545
/* 0x065ca80a */ LDATA extern char public_65ca80a; // OOB+0x0546
/* 0x065ca80b */ LDATA extern char public_65ca80b; // OOB+0x0547
/* 0x065ca80c */ LDATA extern char public_65ca80c; // OOB+0x0548
/* 0x065ca80d */ LDATA extern char public_65ca80d; // OOB+0x0549
/* 0x065ca80e */ LDATA extern char public_65ca80e; // OOB+0x054a
/* 0x065ca80f */ LDATA extern char public_65ca80f; // OOB+0x054b
/* 0x065ca810 */ LDATA extern char public_65ca810; // OOB+0x054c
/* 0x065ca811 */ LDATA extern char public_65ca811; // OOB+0x054d
/* 0x065ca812 */ LDATA extern char public_65ca812; // OOB+0x054e
/* 0x065ca813 */ LDATA extern char public_65ca813; // OOB+0x054f
/* 0x065ca814 */ LDATA extern char public_65ca814; // OOB+0x0550
/* 0x065ca815 */ LDATA extern char public_65ca815; // OOB+0x0551
/* 0x065ca816 */ LDATA extern char public_65ca816; // OOB+0x0552
/* 0x065ca817 */ LDATA extern char public_65ca817; // OOB+0x0553
/* 0x065ca818 */ LDATA extern char public_65ca818; // OOB+0x0554
/* 0x065ca819 */ LDATA extern char public_65ca819; // OOB+0x0555
/* 0x065ca81a */ LDATA extern char public_65ca81a; // OOB+0x0556
/* 0x065ca81b */ LDATA extern char public_65ca81b; // OOB+0x0557
/* 0x065ca81c */ LDATA extern char public_65ca81c; // OOB+0x0558
/* 0x065ca81d */ LDATA extern char public_65ca81d; // OOB+0x0559
/* 0x065ca81e */ LDATA extern char public_65ca81e; // OOB+0x055a
/* 0x065ca81f */ LDATA extern char public_65ca81f; // OOB+0x055b
/* 0x065ca820 */ LDATA extern char public_65ca820; // OOB+0x055c
/* 0x065ca821 */ LDATA extern char public_65ca821; // OOB+0x055d
/* 0x065ca822 */ LDATA extern char public_65ca822; // OOB+0x055e
/* 0x065ca823 */ LDATA extern char public_65ca823; // OOB+0x055f
/* 0x065ca824 */ LDATA extern char public_65ca824; // OOB+0x0560
/* 0x065ca825 */ LDATA extern char public_65ca825; // OOB+0x0561
/* 0x065ca826 */ LDATA extern char public_65ca826; // OOB+0x0562
/* 0x065ca827 */ LDATA extern char public_65ca827; // OOB+0x0563
/* 0x065ca828 */ LDATA extern char public_65ca828; // OOB+0x0564
/* 0x065ca829 */ LDATA extern char public_65ca829; // OOB+0x0565
/* 0x065ca82a */ LDATA extern char public_65ca82a; // OOB+0x0566
/* 0x065ca82b */ LDATA extern char public_65ca82b; // OOB+0x0567
/* 0x065ca82c */ LDATA extern char public_65ca82c; // OOB+0x0568
/* 0x065ca82d */ LDATA extern char public_65ca82d; // OOB+0x0569
/* 0x065ca82e */ LDATA extern char public_65ca82e; // OOB+0x056a
/* 0x065ca82f */ LDATA extern char public_65ca82f; // OOB+0x056b
/* 0x065ca830 */ LDATA extern char public_65ca830; // OOB+0x056c
/* 0x065ca831 */ LDATA extern char public_65ca831; // OOB+0x056d
/* 0x065ca832 */ LDATA extern char public_65ca832; // OOB+0x056e
/* 0x065ca833 */ LDATA extern char public_65ca833; // OOB+0x056f
/* 0x065ca834 */ LDATA extern char public_65ca834; // OOB+0x0570
/* 0x065ca835 */ LDATA extern char public_65ca835; // OOB+0x0571
/* 0x065ca836 */ LDATA extern char public_65ca836; // OOB+0x0572
/* 0x065ca837 */ LDATA extern char public_65ca837; // OOB+0x0573
/* 0x065ca838 */ LDATA extern char public_65ca838; // OOB+0x0574
/* 0x065ca839 */ LDATA extern char public_65ca839; // OOB+0x0575
/* 0x065ca83a */ LDATA extern char public_65ca83a; // OOB+0x0576
/* 0x065ca83b */ LDATA extern char public_65ca83b; // OOB+0x0577
/* 0x065ca83c */ LDATA extern char public_65ca83c; // OOB+0x0578
/* 0x065ca83d */ LDATA extern char public_65ca83d; // OOB+0x0579
/* 0x065ca83e */ LDATA extern char public_65ca83e; // OOB+0x057a
/* 0x065ca83f */ LDATA extern char public_65ca83f; // OOB+0x057b
/* 0x065ca840 */ LDATA extern char public_65ca840; // OOB+0x057c
/* 0x065ca841 */ LDATA extern char public_65ca841; // OOB+0x057d
/* 0x065ca842 */ LDATA extern char public_65ca842; // OOB+0x057e
/* 0x065ca843 */ LDATA extern char public_65ca843; // OOB+0x057f
/* 0x065ca844 */ LDATA extern char public_65ca844; // OOB+0x0580
/* 0x065ca845 */ LDATA extern char public_65ca845; // OOB+0x0581
/* 0x065ca846 */ LDATA extern char public_65ca846; // OOB+0x0582
/* 0x065ca847 */ LDATA extern char public_65ca847; // OOB+0x0583
/* 0x065ca848 */ LDATA extern char public_65ca848; // OOB+0x0584
/* 0x065ca849 */ LDATA extern char public_65ca849; // OOB+0x0585
/* 0x065ca84a */ LDATA extern char public_65ca84a; // OOB+0x0586
/* 0x065ca84b */ LDATA extern char public_65ca84b; // OOB+0x0587
/* 0x065ca84c */ LDATA extern char public_65ca84c; // OOB+0x0588
/* 0x065ca84d */ LDATA extern char public_65ca84d; // OOB+0x0589
/* 0x065ca84e */ LDATA extern char public_65ca84e; // OOB+0x058a
/* 0x065ca84f */ LDATA extern char public_65ca84f; // OOB+0x058b
/* 0x065ca850 */ LDATA extern char public_65ca850; // OOB+0x058c
/* 0x065ca851 */ LDATA extern char public_65ca851; // OOB+0x058d
/* 0x065ca852 */ LDATA extern char public_65ca852; // OOB+0x058e
/* 0x065ca853 */ LDATA extern char public_65ca853; // OOB+0x058f
/* 0x065ca854 */ LDATA extern char public_65ca854; // OOB+0x0590
/* 0x065ca855 */ LDATA extern char public_65ca855; // OOB+0x0591
/* 0x065ca856 */ LDATA extern char public_65ca856; // OOB+0x0592
/* 0x065ca857 */ LDATA extern char public_65ca857; // OOB+0x0593
/* 0x065ca858 */ LDATA extern char public_65ca858; // OOB+0x0594
/* 0x065ca859 */ LDATA extern char public_65ca859; // OOB+0x0595
/* 0x065ca85a */ LDATA extern char public_65ca85a; // OOB+0x0596
/* 0x065ca85b */ LDATA extern char public_65ca85b; // OOB+0x0597
/* 0x065ca85c */ LDATA extern char public_65ca85c; // OOB+0x0598
/* 0x065ca85d */ LDATA extern char public_65ca85d; // OOB+0x0599
/* 0x065ca85e */ LDATA extern char public_65ca85e; // OOB+0x059a
/* 0x065ca85f */ LDATA extern char public_65ca85f; // OOB+0x059b
/* 0x065ca860 */ LDATA extern char public_65ca860; // OOB+0x059c
/* 0x065ca861 */ LDATA extern char public_65ca861; // OOB+0x059d
/* 0x065ca862 */ LDATA extern char public_65ca862; // OOB+0x059e
/* 0x065ca863 */ LDATA extern char public_65ca863; // OOB+0x059f
/* 0x065ca864 */ LDATA extern char public_65ca864; // OOB+0x05a0
/* 0x065ca865 */ LDATA extern char public_65ca865; // OOB+0x05a1
/* 0x065ca866 */ LDATA extern char public_65ca866; // OOB+0x05a2
/* 0x065ca867 */ LDATA extern char public_65ca867; // OOB+0x05a3
/* 0x065ca868 */ LDATA extern char public_65ca868; // OOB+0x05a4
/* 0x065ca869 */ LDATA extern char public_65ca869; // OOB+0x05a5
/* 0x065ca86a */ LDATA extern char public_65ca86a; // OOB+0x05a6
/* 0x065ca86b */ LDATA extern char public_65ca86b; // OOB+0x05a7
/* 0x065ca86c */ LDATA extern char public_65ca86c; // OOB+0x05a8
/* 0x065ca86d */ LDATA extern char public_65ca86d; // OOB+0x05a9
/* 0x065ca86e */ LDATA extern char public_65ca86e; // OOB+0x05aa
/* 0x065ca86f */ LDATA extern char public_65ca86f; // OOB+0x05ab
/* 0x065ca870 */ LDATA extern char public_65ca870; // OOB+0x05ac
/* 0x065ca871 */ LDATA extern char public_65ca871; // OOB+0x05ad
/* 0x065ca872 */ LDATA extern char public_65ca872; // OOB+0x05ae
/* 0x065ca873 */ LDATA extern char public_65ca873; // OOB+0x05af
/* 0x065ca874 */ LDATA extern char public_65ca874; // OOB+0x05b0
/* 0x065ca875 */ LDATA extern char public_65ca875; // OOB+0x05b1
/* 0x065ca876 */ LDATA extern char public_65ca876; // OOB+0x05b2
/* 0x065ca877 */ LDATA extern char public_65ca877; // OOB+0x05b3
/* 0x065ca878 */ LDATA extern char public_65ca878; // OOB+0x05b4
/* 0x065ca879 */ LDATA extern char public_65ca879; // OOB+0x05b5
/* 0x065ca87a */ LDATA extern char public_65ca87a; // OOB+0x05b6
/* 0x065ca87b */ LDATA extern char public_65ca87b; // OOB+0x05b7
/* 0x065ca87c */ LDATA extern char public_65ca87c; // OOB+0x05b8
/* 0x065ca87d */ LDATA extern char public_65ca87d; // OOB+0x05b9
/* 0x065ca87e */ LDATA extern char public_65ca87e; // OOB+0x05ba
/* 0x065ca87f */ LDATA extern char public_65ca87f; // OOB+0x05bb
/* 0x065ca880 */ LDATA extern char public_65ca880; // OOB+0x05bc
/* 0x065ca881 */ LDATA extern char public_65ca881; // OOB+0x05bd
/* 0x065ca882 */ LDATA extern char public_65ca882; // OOB+0x05be
/* 0x065ca883 */ LDATA extern char public_65ca883; // OOB+0x05bf
/* 0x065ca884 */ LDATA extern char public_65ca884; // OOB+0x05c0
/* 0x065ca885 */ LDATA extern char public_65ca885; // OOB+0x05c1
/* 0x065ca886 */ LDATA extern char public_65ca886; // OOB+0x05c2
/* 0x065ca887 */ LDATA extern char public_65ca887; // OOB+0x05c3
/* 0x065ca888 */ LDATA extern char public_65ca888; // OOB+0x05c4
/* 0x065ca889 */ LDATA extern char public_65ca889; // OOB+0x05c5
/* 0x065ca88a */ LDATA extern char public_65ca88a; // OOB+0x05c6
/* 0x065ca88b */ LDATA extern char public_65ca88b; // OOB+0x05c7
/* 0x065ca88c */ LDATA extern char public_65ca88c; // OOB+0x05c8
/* 0x065ca88d */ LDATA extern char public_65ca88d; // OOB+0x05c9
/* 0x065ca88e */ LDATA extern char public_65ca88e; // OOB+0x05ca
/* 0x065ca88f */ LDATA extern char public_65ca88f; // OOB+0x05cb
/* 0x065ca890 */ LDATA extern char public_65ca890; // OOB+0x05cc
/* 0x065ca891 */ LDATA extern char public_65ca891; // OOB+0x05cd
/* 0x065ca892 */ LDATA extern char public_65ca892; // OOB+0x05ce
/* 0x065ca893 */ LDATA extern char public_65ca893; // OOB+0x05cf
/* 0x065ca894 */ LDATA extern char public_65ca894; // OOB+0x05d0
/* 0x065ca895 */ LDATA extern char public_65ca895; // OOB+0x05d1
/* 0x065ca896 */ LDATA extern char public_65ca896; // OOB+0x05d2
/* 0x065ca897 */ LDATA extern char public_65ca897; // OOB+0x05d3
/* 0x065ca898 */ LDATA extern char public_65ca898; // OOB+0x05d4
/* 0x065ca899 */ LDATA extern char public_65ca899; // OOB+0x05d5
/* 0x065ca89a */ LDATA extern char public_65ca89a; // OOB+0x05d6
/* 0x065ca89b */ LDATA extern char public_65ca89b; // OOB+0x05d7
/* 0x065ca89c */ LDATA extern char public_65ca89c; // OOB+0x05d8
/* 0x065ca89d */ LDATA extern char public_65ca89d; // OOB+0x05d9
/* 0x065ca89e */ LDATA extern char public_65ca89e; // OOB+0x05da
/* 0x065ca89f */ LDATA extern char public_65ca89f; // OOB+0x05db
/* 0x065ca8a0 */ LDATA extern char public_65ca8a0; // OOB+0x05dc
/* 0x065ca8a1 */ LDATA extern char public_65ca8a1; // OOB+0x05dd
/* 0x065ca8a2 */ LDATA extern char public_65ca8a2; // OOB+0x05de
/* 0x065ca8a3 */ LDATA extern char public_65ca8a3; // OOB+0x05df
/* 0x065ca8a4 */ LDATA extern char public_65ca8a4; // OOB+0x05e0
/* 0x065ca8a5 */ LDATA extern char public_65ca8a5; // OOB+0x05e1
/* 0x065ca8a6 */ LDATA extern char public_65ca8a6; // OOB+0x05e2
/* 0x065ca8a7 */ LDATA extern char public_65ca8a7; // OOB+0x05e3
/* 0x065ca8a8 */ LDATA extern char public_65ca8a8; // OOB+0x05e4
/* 0x065ca8a9 */ LDATA extern char public_65ca8a9; // OOB+0x05e5
/* 0x065ca8aa */ LDATA extern char public_65ca8aa; // OOB+0x05e6
/* 0x065ca8ab */ LDATA extern char public_65ca8ab; // OOB+0x05e7
/* 0x065ca8ac */ LDATA extern char public_65ca8ac; // OOB+0x05e8
/* 0x065ca8ad */ LDATA extern char public_65ca8ad; // OOB+0x05e9
/* 0x065ca8ae */ LDATA extern char public_65ca8ae; // OOB+0x05ea
/* 0x065ca8af */ LDATA extern char public_65ca8af; // OOB+0x05eb
/* 0x065ca8b0 */ LDATA extern char public_65ca8b0; // OOB+0x05ec
/* 0x065ca8b1 */ LDATA extern char public_65ca8b1; // OOB+0x05ed
/* 0x065ca8b2 */ LDATA extern char public_65ca8b2; // OOB+0x05ee
/* 0x065ca8b3 */ LDATA extern char public_65ca8b3; // OOB+0x05ef
/* 0x065ca8b4 */ LDATA extern char public_65ca8b4; // OOB+0x05f0
/* 0x065ca8b5 */ LDATA extern char public_65ca8b5; // OOB+0x05f1
/* 0x065ca8b6 */ LDATA extern char public_65ca8b6; // OOB+0x05f2
/* 0x065ca8b7 */ LDATA extern char public_65ca8b7; // OOB+0x05f3
/* 0x065ca8b8 */ LDATA extern char public_65ca8b8; // OOB+0x05f4
/* 0x065ca8b9 */ LDATA extern char public_65ca8b9; // OOB+0x05f5
/* 0x065ca8ba */ LDATA extern char public_65ca8ba; // OOB+0x05f6
/* 0x065ca8bb */ LDATA extern char public_65ca8bb; // OOB+0x05f7
/* 0x065ca8bc */ LDATA extern char public_65ca8bc; // OOB+0x05f8
/* 0x065ca8bd */ LDATA extern char public_65ca8bd; // OOB+0x05f9
/* 0x065ca8be */ LDATA extern char public_65ca8be; // OOB+0x05fa
/* 0x065ca8bf */ LDATA extern char public_65ca8bf; // OOB+0x05fb
/* 0x065ca8c0 */ LDATA extern char public_65ca8c0; // OOB+0x05fc
/* 0x065ca8c1 */ LDATA extern char public_65ca8c1; // OOB+0x05fd
/* 0x065ca8c2 */ LDATA extern char public_65ca8c2; // OOB+0x05fe
/* 0x065ca8c3 */ LDATA extern char public_65ca8c3; // OOB+0x05ff
/* 0x065ca8c4 */ LDATA extern char public_65ca8c4; // OOB+0x0600
/* 0x065ca8c5 */ LDATA extern char public_65ca8c5; // OOB+0x0601
/* 0x065ca8c6 */ LDATA extern char public_65ca8c6; // OOB+0x0602
/* 0x065ca8c7 */ LDATA extern char public_65ca8c7; // OOB+0x0603
/* 0x065ca8c8 */ LDATA extern char public_65ca8c8; // OOB+0x0604
/* 0x065ca8c9 */ LDATA extern char public_65ca8c9; // OOB+0x0605
/* 0x065ca8ca */ LDATA extern char public_65ca8ca; // OOB+0x0606
/* 0x065ca8cb */ LDATA extern char public_65ca8cb; // OOB+0x0607
/* 0x065ca8cc */ LDATA extern char public_65ca8cc; // OOB+0x0608
/* 0x065ca8cd */ LDATA extern char public_65ca8cd; // OOB+0x0609
/* 0x065ca8ce */ LDATA extern char public_65ca8ce; // OOB+0x060a
/* 0x065ca8cf */ LDATA extern char public_65ca8cf; // OOB+0x060b
/* 0x065ca8d0 */ LDATA extern char public_65ca8d0; // OOB+0x060c
/* 0x065ca8d1 */ LDATA extern char public_65ca8d1; // OOB+0x060d
/* 0x065ca8d2 */ LDATA extern char public_65ca8d2; // OOB+0x060e
/* 0x065ca8d3 */ LDATA extern char public_65ca8d3; // OOB+0x060f
/* 0x065ca8d4 */ LDATA extern char public_65ca8d4; // OOB+0x0610
/* 0x065ca8d5 */ LDATA extern char public_65ca8d5; // OOB+0x0611
/* 0x065ca8d6 */ LDATA extern char public_65ca8d6; // OOB+0x0612
/* 0x065ca8d7 */ LDATA extern char public_65ca8d7; // OOB+0x0613
/* 0x065ca8d8 */ LDATA extern char public_65ca8d8; // OOB+0x0614
/* 0x065ca8d9 */ LDATA extern char public_65ca8d9; // OOB+0x0615
/* 0x065ca8da */ LDATA extern char public_65ca8da; // OOB+0x0616
/* 0x065ca8db */ LDATA extern char public_65ca8db; // OOB+0x0617
/* 0x065ca8dc */ LDATA extern char public_65ca8dc; // OOB+0x0618
/* 0x065ca8dd */ LDATA extern char public_65ca8dd; // OOB+0x0619
/* 0x065ca8de */ LDATA extern char public_65ca8de; // OOB+0x061a
/* 0x065ca8df */ LDATA extern char public_65ca8df; // OOB+0x061b
/* 0x065ca8e0 */ LDATA extern char public_65ca8e0; // OOB+0x061c
/* 0x065ca8e1 */ LDATA extern char public_65ca8e1; // OOB+0x061d
/* 0x065ca8e2 */ LDATA extern char public_65ca8e2; // OOB+0x061e
/* 0x065ca8e3 */ LDATA extern char public_65ca8e3; // OOB+0x061f
/* 0x065ca8e4 */ LDATA extern char public_65ca8e4; // OOB+0x0620
/* 0x065ca8e5 */ LDATA extern char public_65ca8e5; // OOB+0x0621
/* 0x065ca8e6 */ LDATA extern char public_65ca8e6; // OOB+0x0622
/* 0x065ca8e7 */ LDATA extern char public_65ca8e7; // OOB+0x0623
/* 0x065ca8e8 */ LDATA extern char public_65ca8e8; // OOB+0x0624
/* 0x065ca8e9 */ LDATA extern char public_65ca8e9; // OOB+0x0625
/* 0x065ca8ea */ LDATA extern char public_65ca8ea; // OOB+0x0626
/* 0x065ca8eb */ LDATA extern char public_65ca8eb; // OOB+0x0627
/* 0x065ca8ec */ LDATA extern char public_65ca8ec; // OOB+0x0628
/* 0x065ca8ed */ LDATA extern char public_65ca8ed; // OOB+0x0629
/* 0x065ca8ee */ LDATA extern char public_65ca8ee; // OOB+0x062a
/* 0x065ca8ef */ LDATA extern char public_65ca8ef; // OOB+0x062b
/* 0x065ca8f0 */ LDATA extern char public_65ca8f0; // OOB+0x062c
/* 0x065ca8f1 */ LDATA extern char public_65ca8f1; // OOB+0x062d
/* 0x065ca8f2 */ LDATA extern char public_65ca8f2; // OOB+0x062e
/* 0x065ca8f3 */ LDATA extern char public_65ca8f3; // OOB+0x062f
/* 0x065ca8f4 */ LDATA extern char public_65ca8f4; // OOB+0x0630
/* 0x065ca8f5 */ LDATA extern char public_65ca8f5; // OOB+0x0631
/* 0x065ca8f6 */ LDATA extern char public_65ca8f6; // OOB+0x0632
/* 0x065ca8f7 */ LDATA extern char public_65ca8f7; // OOB+0x0633
/* 0x065ca8f8 */ LDATA extern char public_65ca8f8; // OOB+0x0634
/* 0x065ca8f9 */ LDATA extern char public_65ca8f9; // OOB+0x0635
/* 0x065ca8fa */ LDATA extern char public_65ca8fa; // OOB+0x0636
/* 0x065ca8fb */ LDATA extern char public_65ca8fb; // OOB+0x0637
/* 0x065ca8fc */ LDATA extern char public_65ca8fc; // OOB+0x0638
/* 0x065ca8fd */ LDATA extern char public_65ca8fd; // OOB+0x0639
/* 0x065ca8fe */ LDATA extern char public_65ca8fe; // OOB+0x063a
/* 0x065ca8ff */ LDATA extern char public_65ca8ff; // OOB+0x063b
/* 0x065ca900 */ LDATA extern char public_65ca900; // OOB+0x063c
/* 0x065ca901 */ LDATA extern char public_65ca901; // OOB+0x063d
/* 0x065ca902 */ LDATA extern char public_65ca902; // OOB+0x063e
/* 0x065ca903 */ LDATA extern char public_65ca903; // OOB+0x063f
/* 0x065ca904 */ LDATA extern char public_65ca904; // OOB+0x0640
/* 0x065ca905 */ LDATA extern char public_65ca905; // OOB+0x0641
/* 0x065ca906 */ LDATA extern char public_65ca906; // OOB+0x0642
/* 0x065ca907 */ LDATA extern char public_65ca907; // OOB+0x0643
/* 0x065ca908 */ LDATA extern char public_65ca908; // OOB+0x0644
/* 0x065ca909 */ LDATA extern char public_65ca909; // OOB+0x0645
/* 0x065ca90a */ LDATA extern char public_65ca90a; // OOB+0x0646
/* 0x065ca90b */ LDATA extern char public_65ca90b; // OOB+0x0647
/* 0x065ca90c */ LDATA extern char public_65ca90c; // OOB+0x0648
/* 0x065ca90d */ LDATA extern char public_65ca90d; // OOB+0x0649
/* 0x065ca90e */ LDATA extern char public_65ca90e; // OOB+0x064a
/* 0x065ca90f */ LDATA extern char public_65ca90f; // OOB+0x064b
/* 0x065ca910 */ LDATA extern char public_65ca910; // OOB+0x064c
/* 0x065ca911 */ LDATA extern char public_65ca911; // OOB+0x064d
/* 0x065ca912 */ LDATA extern char public_65ca912; // OOB+0x064e
/* 0x065ca913 */ LDATA extern char public_65ca913; // OOB+0x064f
/* 0x065ca914 */ LDATA extern char public_65ca914; // OOB+0x0650
/* 0x065ca915 */ LDATA extern char public_65ca915; // OOB+0x0651
/* 0x065ca916 */ LDATA extern char public_65ca916; // OOB+0x0652
/* 0x065ca917 */ LDATA extern char public_65ca917; // OOB+0x0653
/* 0x065ca918 */ LDATA extern char public_65ca918; // OOB+0x0654
/* 0x065ca919 */ LDATA extern char public_65ca919; // OOB+0x0655
/* 0x065ca91a */ LDATA extern char public_65ca91a; // OOB+0x0656
/* 0x065ca91b */ LDATA extern char public_65ca91b; // OOB+0x0657
/* 0x065ca91c */ LDATA extern char public_65ca91c; // OOB+0x0658
/* 0x065ca91d */ LDATA extern char public_65ca91d; // OOB+0x0659
/* 0x065ca91e */ LDATA extern char public_65ca91e; // OOB+0x065a
/* 0x065ca91f */ LDATA extern char public_65ca91f; // OOB+0x065b
/* 0x065ca920 */ LDATA extern char public_65ca920; // OOB+0x065c
/* 0x065ca921 */ LDATA extern char public_65ca921; // OOB+0x065d
/* 0x065ca922 */ LDATA extern char public_65ca922; // OOB+0x065e
/* 0x065ca923 */ LDATA extern char public_65ca923; // OOB+0x065f
/* 0x065ca924 */ LDATA extern char public_65ca924; // OOB+0x0660
/* 0x065ca925 */ LDATA extern char public_65ca925; // OOB+0x0661
/* 0x065ca926 */ LDATA extern char public_65ca926; // OOB+0x0662
/* 0x065ca927 */ LDATA extern char public_65ca927; // OOB+0x0663
/* 0x065ca928 */ LDATA extern char public_65ca928; // OOB+0x0664
/* 0x065ca929 */ LDATA extern char public_65ca929; // OOB+0x0665
/* 0x065ca92a */ LDATA extern char public_65ca92a; // OOB+0x0666
/* 0x065ca92b */ LDATA extern char public_65ca92b; // OOB+0x0667
/* 0x065ca92c */ LDATA extern char public_65ca92c; // OOB+0x0668
/* 0x065ca92d */ LDATA extern char public_65ca92d; // OOB+0x0669
/* 0x065ca92e */ LDATA extern char public_65ca92e; // OOB+0x066a
/* 0x065ca92f */ LDATA extern char public_65ca92f; // OOB+0x066b
/* 0x065ca930 */ LDATA extern char public_65ca930; // OOB+0x066c
/* 0x065ca931 */ LDATA extern char public_65ca931; // OOB+0x066d
/* 0x065ca932 */ LDATA extern char public_65ca932; // OOB+0x066e
/* 0x065ca933 */ LDATA extern char public_65ca933; // OOB+0x066f
/* 0x065ca934 */ LDATA extern char public_65ca934; // OOB+0x0670
/* 0x065ca935 */ LDATA extern char public_65ca935; // OOB+0x0671
/* 0x065ca936 */ LDATA extern char public_65ca936; // OOB+0x0672
/* 0x065ca937 */ LDATA extern char public_65ca937; // OOB+0x0673
/* 0x065ca938 */ LDATA extern char public_65ca938; // OOB+0x0674
/* 0x065ca939 */ LDATA extern char public_65ca939; // OOB+0x0675
/* 0x065ca93a */ LDATA extern char public_65ca93a; // OOB+0x0676
/* 0x065ca93b */ LDATA extern char public_65ca93b; // OOB+0x0677
/* 0x065ca93c */ LDATA extern char public_65ca93c; // OOB+0x0678
/* 0x065ca93d */ LDATA extern char public_65ca93d; // OOB+0x0679
/* 0x065ca93e */ LDATA extern char public_65ca93e; // OOB+0x067a
/* 0x065ca93f */ LDATA extern char public_65ca93f; // OOB+0x067b
/* 0x065ca940 */ LDATA extern char public_65ca940; // OOB+0x067c
/* 0x065ca941 */ LDATA extern char public_65ca941; // OOB+0x067d
/* 0x065ca942 */ LDATA extern char public_65ca942; // OOB+0x067e
/* 0x065ca943 */ LDATA extern char public_65ca943; // OOB+0x067f
/* 0x065ca944 */ LDATA extern char public_65ca944; // OOB+0x0680
/* 0x065ca945 */ LDATA extern char public_65ca945; // OOB+0x0681
/* 0x065ca946 */ LDATA extern char public_65ca946; // OOB+0x0682
/* 0x065ca947 */ LDATA extern char public_65ca947; // OOB+0x0683
/* 0x065ca948 */ LDATA extern char public_65ca948; // OOB+0x0684
/* 0x065ca949 */ LDATA extern char public_65ca949; // OOB+0x0685
/* 0x065ca94a */ LDATA extern char public_65ca94a; // OOB+0x0686
/* 0x065ca94b */ LDATA extern char public_65ca94b; // OOB+0x0687
/* 0x065ca94c */ LDATA extern char public_65ca94c; // OOB+0x0688
/* 0x065ca94d */ LDATA extern char public_65ca94d; // OOB+0x0689
/* 0x065ca94e */ LDATA extern char public_65ca94e; // OOB+0x068a
/* 0x065ca94f */ LDATA extern char public_65ca94f; // OOB+0x068b
/* 0x065ca950 */ LDATA extern char public_65ca950; // OOB+0x068c
/* 0x065ca951 */ LDATA extern char public_65ca951; // OOB+0x068d
/* 0x065ca952 */ LDATA extern char public_65ca952; // OOB+0x068e
/* 0x065ca953 */ LDATA extern char public_65ca953; // OOB+0x068f
/* 0x065ca954 */ LDATA extern char public_65ca954; // OOB+0x0690
/* 0x065ca955 */ LDATA extern char public_65ca955; // OOB+0x0691
/* 0x065ca956 */ LDATA extern char public_65ca956; // OOB+0x0692
/* 0x065ca957 */ LDATA extern char public_65ca957; // OOB+0x0693
/* 0x065ca958 */ LDATA extern char public_65ca958; // OOB+0x0694
/* 0x065ca959 */ LDATA extern char public_65ca959; // OOB+0x0695
/* 0x065ca95a */ LDATA extern char public_65ca95a; // OOB+0x0696
/* 0x065ca95b */ LDATA extern char public_65ca95b; // OOB+0x0697
/* 0x065ca95c */ LDATA extern char public_65ca95c; // OOB+0x0698
/* 0x065ca95d */ LDATA extern char public_65ca95d; // OOB+0x0699
/* 0x065ca95e */ LDATA extern char public_65ca95e; // OOB+0x069a
/* 0x065ca95f */ LDATA extern char public_65ca95f; // OOB+0x069b
/* 0x065ca960 */ LDATA extern char public_65ca960; // OOB+0x069c
/* 0x065ca961 */ LDATA extern char public_65ca961; // OOB+0x069d
/* 0x065ca962 */ LDATA extern char public_65ca962; // OOB+0x069e
/* 0x065ca963 */ LDATA extern char public_65ca963; // OOB+0x069f
/* 0x065ca964 */ LDATA extern char public_65ca964; // OOB+0x06a0
/* 0x065ca965 */ LDATA extern char public_65ca965; // OOB+0x06a1
/* 0x065ca966 */ LDATA extern char public_65ca966; // OOB+0x06a2
/* 0x065ca967 */ LDATA extern char public_65ca967; // OOB+0x06a3
/* 0x065ca968 */ LDATA extern char public_65ca968; // OOB+0x06a4
/* 0x065ca969 */ LDATA extern char public_65ca969; // OOB+0x06a5
/* 0x065ca96a */ LDATA extern char public_65ca96a; // OOB+0x06a6
/* 0x065ca96b */ LDATA extern char public_65ca96b; // OOB+0x06a7
/* 0x065ca96c */ LDATA extern char public_65ca96c; // OOB+0x06a8
/* 0x065ca96d */ LDATA extern char public_65ca96d; // OOB+0x06a9
/* 0x065ca96e */ LDATA extern char public_65ca96e; // OOB+0x06aa
/* 0x065ca96f */ LDATA extern char public_65ca96f; // OOB+0x06ab
/* 0x065ca970 */ LDATA extern char public_65ca970; // OOB+0x06ac
/* 0x065ca971 */ LDATA extern char public_65ca971; // OOB+0x06ad
/* 0x065ca972 */ LDATA extern char public_65ca972; // OOB+0x06ae
/* 0x065ca973 */ LDATA extern char public_65ca973; // OOB+0x06af
/* 0x065ca974 */ LDATA extern char public_65ca974; // OOB+0x06b0
/* 0x065ca975 */ LDATA extern char public_65ca975; // OOB+0x06b1
/* 0x065ca976 */ LDATA extern char public_65ca976; // OOB+0x06b2
/* 0x065ca977 */ LDATA extern char public_65ca977; // OOB+0x06b3
/* 0x065ca978 */ LDATA extern char public_65ca978; // OOB+0x06b4
/* 0x065ca979 */ LDATA extern char public_65ca979; // OOB+0x06b5
/* 0x065ca97a */ LDATA extern char public_65ca97a; // OOB+0x06b6
/* 0x065ca97b */ LDATA extern char public_65ca97b; // OOB+0x06b7
/* 0x065ca97c */ LDATA extern char public_65ca97c; // OOB+0x06b8
/* 0x065ca97d */ LDATA extern char public_65ca97d; // OOB+0x06b9
/* 0x065ca97e */ LDATA extern char public_65ca97e; // OOB+0x06ba
/* 0x065ca97f */ LDATA extern char public_65ca97f; // OOB+0x06bb
/* 0x065ca980 */ LDATA extern char public_65ca980; // OOB+0x06bc
/* 0x065ca981 */ LDATA extern char public_65ca981; // OOB+0x06bd
/* 0x065ca982 */ LDATA extern char public_65ca982; // OOB+0x06be
/* 0x065ca983 */ LDATA extern char public_65ca983; // OOB+0x06bf
/* 0x065ca984 */ LDATA extern char public_65ca984; // OOB+0x06c0
/* 0x065ca985 */ LDATA extern char public_65ca985; // OOB+0x06c1
/* 0x065ca986 */ LDATA extern char public_65ca986; // OOB+0x06c2
/* 0x065ca987 */ LDATA extern char public_65ca987; // OOB+0x06c3
/* 0x065ca988 */ LDATA extern char public_65ca988; // OOB+0x06c4
/* 0x065ca989 */ LDATA extern char public_65ca989; // OOB+0x06c5
/* 0x065ca98a */ LDATA extern char public_65ca98a; // OOB+0x06c6
/* 0x065ca98b */ LDATA extern char public_65ca98b; // OOB+0x06c7
/* 0x065ca98c */ LDATA extern char public_65ca98c; // OOB+0x06c8
/* 0x065ca98d */ LDATA extern char public_65ca98d; // OOB+0x06c9
/* 0x065ca98e */ LDATA extern char public_65ca98e; // OOB+0x06ca
/* 0x065ca98f */ LDATA extern char public_65ca98f; // OOB+0x06cb
/* 0x065ca990 */ LDATA extern char public_65ca990; // OOB+0x06cc
/* 0x065ca991 */ LDATA extern char public_65ca991; // OOB+0x06cd
/* 0x065ca992 */ LDATA extern char public_65ca992; // OOB+0x06ce
/* 0x065ca993 */ LDATA extern char public_65ca993; // OOB+0x06cf
/* 0x065ca994 */ LDATA extern char public_65ca994; // OOB+0x06d0
/* 0x065ca995 */ LDATA extern char public_65ca995; // OOB+0x06d1
/* 0x065ca996 */ LDATA extern char public_65ca996; // OOB+0x06d2
/* 0x065ca997 */ LDATA extern char public_65ca997; // OOB+0x06d3
/* 0x065ca998 */ LDATA extern char public_65ca998; // OOB+0x06d4
/* 0x065ca999 */ LDATA extern char public_65ca999; // OOB+0x06d5
/* 0x065ca99a */ LDATA extern char public_65ca99a; // OOB+0x06d6
/* 0x065ca99b */ LDATA extern char public_65ca99b; // OOB+0x06d7
/* 0x065ca99c */ LDATA extern char public_65ca99c; // OOB+0x06d8
/* 0x065ca99d */ LDATA extern char public_65ca99d; // OOB+0x06d9
/* 0x065ca99e */ LDATA extern char public_65ca99e; // OOB+0x06da
/* 0x065ca99f */ LDATA extern char public_65ca99f; // OOB+0x06db
/* 0x065ca9a0 */ LDATA extern char public_65ca9a0; // OOB+0x06dc
/* 0x065ca9a1 */ LDATA extern char public_65ca9a1; // OOB+0x06dd
/* 0x065ca9a2 */ LDATA extern char public_65ca9a2; // OOB+0x06de
/* 0x065ca9a3 */ LDATA extern char public_65ca9a3; // OOB+0x06df
/* 0x065ca9a4 */ LDATA extern char public_65ca9a4; // OOB+0x06e0
/* 0x065ca9a5 */ LDATA extern char public_65ca9a5; // OOB+0x06e1
/* 0x065ca9a6 */ LDATA extern char public_65ca9a6; // OOB+0x06e2
/* 0x065ca9a7 */ LDATA extern char public_65ca9a7; // OOB+0x06e3
/* 0x065ca9a8 */ LDATA extern char public_65ca9a8; // OOB+0x06e4
/* 0x065ca9a9 */ LDATA extern char public_65ca9a9; // OOB+0x06e5
/* 0x065ca9aa */ LDATA extern char public_65ca9aa; // OOB+0x06e6
/* 0x065ca9ab */ LDATA extern char public_65ca9ab; // OOB+0x06e7
/* 0x065ca9ac */ LDATA extern char public_65ca9ac; // OOB+0x06e8
/* 0x065ca9ad */ LDATA extern char public_65ca9ad; // OOB+0x06e9
/* 0x065ca9ae */ LDATA extern char public_65ca9ae; // OOB+0x06ea
/* 0x065ca9af */ LDATA extern char public_65ca9af; // OOB+0x06eb
/* 0x065ca9b0 */ LDATA extern char public_65ca9b0; // OOB+0x06ec
/* 0x065ca9b1 */ LDATA extern char public_65ca9b1; // OOB+0x06ed
/* 0x065ca9b2 */ LDATA extern char public_65ca9b2; // OOB+0x06ee
/* 0x065ca9b3 */ LDATA extern char public_65ca9b3; // OOB+0x06ef
/* 0x065ca9b4 */ LDATA extern char public_65ca9b4; // OOB+0x06f0
/* 0x065ca9b5 */ LDATA extern char public_65ca9b5; // OOB+0x06f1
/* 0x065ca9b6 */ LDATA extern char public_65ca9b6; // OOB+0x06f2
/* 0x065ca9b7 */ LDATA extern char public_65ca9b7; // OOB+0x06f3
/* 0x065ca9b8 */ LDATA extern char public_65ca9b8; // OOB+0x06f4
/* 0x065ca9b9 */ LDATA extern char public_65ca9b9; // OOB+0x06f5
/* 0x065ca9ba */ LDATA extern char public_65ca9ba; // OOB+0x06f6
/* 0x065ca9bb */ LDATA extern char public_65ca9bb; // OOB+0x06f7
/* 0x065ca9bc */ LDATA extern char public_65ca9bc; // OOB+0x06f8
/* 0x065ca9bd */ LDATA extern char public_65ca9bd; // OOB+0x06f9
/* 0x065ca9be */ LDATA extern char public_65ca9be; // OOB+0x06fa
/* 0x065ca9bf */ LDATA extern char public_65ca9bf; // OOB+0x06fb
/* 0x065ca9c0 */ LDATA extern char public_65ca9c0; // OOB+0x06fc
/* 0x065ca9c1 */ LDATA extern char public_65ca9c1; // OOB+0x06fd
/* 0x065ca9c2 */ LDATA extern char public_65ca9c2; // OOB+0x06fe
/* 0x065ca9c3 */ LDATA extern char public_65ca9c3; // OOB+0x06ff
/* 0x065ca9c4 */ LDATA extern char public_65ca9c4; // OOB+0x0700
/* 0x065ca9c5 */ LDATA extern char public_65ca9c5; // OOB+0x0701
/* 0x065ca9c6 */ LDATA extern char public_65ca9c6; // OOB+0x0702
/* 0x065ca9c7 */ LDATA extern char public_65ca9c7; // OOB+0x0703
/* 0x065ca9c8 */ LDATA extern char public_65ca9c8; // OOB+0x0704
/* 0x065ca9c9 */ LDATA extern char public_65ca9c9; // OOB+0x0705
/* 0x065ca9ca */ LDATA extern char public_65ca9ca; // OOB+0x0706
/* 0x065ca9cb */ LDATA extern char public_65ca9cb; // OOB+0x0707
/* 0x065ca9cc */ LDATA extern char public_65ca9cc; // OOB+0x0708
/* 0x065ca9cd */ LDATA extern char public_65ca9cd; // OOB+0x0709
/* 0x065ca9ce */ LDATA extern char public_65ca9ce; // OOB+0x070a
/* 0x065ca9cf */ LDATA extern char public_65ca9cf; // OOB+0x070b
/* 0x065ca9d0 */ LDATA extern char public_65ca9d0; // OOB+0x070c
/* 0x065ca9d1 */ LDATA extern char public_65ca9d1; // OOB+0x070d
/* 0x065ca9d2 */ LDATA extern char public_65ca9d2; // OOB+0x070e
/* 0x065ca9d3 */ LDATA extern char public_65ca9d3; // OOB+0x070f
/* 0x065ca9d4 */ LDATA extern char public_65ca9d4; // OOB+0x0710
/* 0x065ca9d5 */ LDATA extern char public_65ca9d5; // OOB+0x0711
/* 0x065ca9d6 */ LDATA extern char public_65ca9d6; // OOB+0x0712
/* 0x065ca9d7 */ LDATA extern char public_65ca9d7; // OOB+0x0713
/* 0x065ca9d8 */ LDATA extern char public_65ca9d8; // OOB+0x0714
/* 0x065ca9d9 */ LDATA extern char public_65ca9d9; // OOB+0x0715
/* 0x065ca9da */ LDATA extern char public_65ca9da; // OOB+0x0716
/* 0x065ca9db */ LDATA extern char public_65ca9db; // OOB+0x0717
/* 0x065ca9dc */ LDATA extern char public_65ca9dc; // OOB+0x0718
/* 0x065ca9dd */ LDATA extern char public_65ca9dd; // OOB+0x0719
/* 0x065ca9de */ LDATA extern char public_65ca9de; // OOB+0x071a
/* 0x065ca9df */ LDATA extern char public_65ca9df; // OOB+0x071b
/* 0x065ca9e0 */ LDATA extern char public_65ca9e0; // OOB+0x071c
/* 0x065ca9e1 */ LDATA extern char public_65ca9e1; // OOB+0x071d
/* 0x065ca9e2 */ LDATA extern char public_65ca9e2; // OOB+0x071e
/* 0x065ca9e3 */ LDATA extern char public_65ca9e3; // OOB+0x071f
/* 0x065ca9e4 */ LDATA extern char public_65ca9e4; // OOB+0x0720
/* 0x065ca9e5 */ LDATA extern char public_65ca9e5; // OOB+0x0721
/* 0x065ca9e6 */ LDATA extern char public_65ca9e6; // OOB+0x0722
/* 0x065ca9e7 */ LDATA extern char public_65ca9e7; // OOB+0x0723
/* 0x065ca9e8 */ LDATA extern char public_65ca9e8; // OOB+0x0724
/* 0x065ca9e9 */ LDATA extern char public_65ca9e9; // OOB+0x0725
/* 0x065ca9ea */ LDATA extern char public_65ca9ea; // OOB+0x0726
/* 0x065ca9eb */ LDATA extern char public_65ca9eb; // OOB+0x0727
/* 0x065ca9ec */ LDATA extern char public_65ca9ec; // OOB+0x0728
/* 0x065ca9ed */ LDATA extern char public_65ca9ed; // OOB+0x0729
/* 0x065ca9ee */ LDATA extern char public_65ca9ee; // OOB+0x072a
/* 0x065ca9ef */ LDATA extern char public_65ca9ef; // OOB+0x072b
/* 0x065ca9f0 */ LDATA extern char public_65ca9f0; // OOB+0x072c
/* 0x065ca9f1 */ LDATA extern char public_65ca9f1; // OOB+0x072d
/* 0x065ca9f2 */ LDATA extern char public_65ca9f2; // OOB+0x072e
/* 0x065ca9f3 */ LDATA extern char public_65ca9f3; // OOB+0x072f
/* 0x065ca9f4 */ LDATA extern char public_65ca9f4; // OOB+0x0730
/* 0x065ca9f5 */ LDATA extern char public_65ca9f5; // OOB+0x0731
/* 0x065ca9f6 */ LDATA extern char public_65ca9f6; // OOB+0x0732
/* 0x065ca9f7 */ LDATA extern char public_65ca9f7; // OOB+0x0733
/* 0x065ca9f8 */ LDATA extern char public_65ca9f8; // OOB+0x0734
/* 0x065ca9f9 */ LDATA extern char public_65ca9f9; // OOB+0x0735
/* 0x065ca9fa */ LDATA extern char public_65ca9fa; // OOB+0x0736
/* 0x065ca9fb */ LDATA extern char public_65ca9fb; // OOB+0x0737
/* 0x065ca9fc */ LDATA extern char public_65ca9fc; // OOB+0x0738
/* 0x065ca9fd */ LDATA extern char public_65ca9fd; // OOB+0x0739
/* 0x065ca9fe */ LDATA extern char public_65ca9fe; // OOB+0x073a
/* 0x065ca9ff */ LDATA extern char public_65ca9ff; // OOB+0x073b
/* 0x065caa00 */ LDATA extern char public_65caa00; // OOB+0x073c
/* 0x065caa01 */ LDATA extern char public_65caa01; // OOB+0x073d
/* 0x065caa02 */ LDATA extern char public_65caa02; // OOB+0x073e
/* 0x065caa03 */ LDATA extern char public_65caa03; // OOB+0x073f
/* 0x065caa04 */ LDATA extern char public_65caa04; // OOB+0x0740
/* 0x065caa05 */ LDATA extern char public_65caa05; // OOB+0x0741
/* 0x065caa06 */ LDATA extern char public_65caa06; // OOB+0x0742
/* 0x065caa07 */ LDATA extern char public_65caa07; // OOB+0x0743
/* 0x065caa08 */ LDATA extern char public_65caa08; // OOB+0x0744
/* 0x065caa09 */ LDATA extern char public_65caa09; // OOB+0x0745
/* 0x065caa0a */ LDATA extern char public_65caa0a; // OOB+0x0746
/* 0x065caa0b */ LDATA extern char public_65caa0b; // OOB+0x0747
/* 0x065caa0c */ LDATA extern char public_65caa0c; // OOB+0x0748
/* 0x065caa0d */ LDATA extern char public_65caa0d; // OOB+0x0749
/* 0x065caa0e */ LDATA extern char public_65caa0e; // OOB+0x074a
/* 0x065caa0f */ LDATA extern char public_65caa0f; // OOB+0x074b
/* 0x065caa10 */ LDATA extern char public_65caa10; // OOB+0x074c
/* 0x065caa11 */ LDATA extern char public_65caa11; // OOB+0x074d
/* 0x065caa12 */ LDATA extern char public_65caa12; // OOB+0x074e
/* 0x065caa13 */ LDATA extern char public_65caa13; // OOB+0x074f
/* 0x065caa14 */ LDATA extern char public_65caa14; // OOB+0x0750
/* 0x065caa15 */ LDATA extern char public_65caa15; // OOB+0x0751
/* 0x065caa16 */ LDATA extern char public_65caa16; // OOB+0x0752
/* 0x065caa17 */ LDATA extern char public_65caa17; // OOB+0x0753
/* 0x065caa18 */ LDATA extern char public_65caa18; // OOB+0x0754
/* 0x065caa19 */ LDATA extern char public_65caa19; // OOB+0x0755
/* 0x065caa1a */ LDATA extern char public_65caa1a; // OOB+0x0756
/* 0x065caa1b */ LDATA extern char public_65caa1b; // OOB+0x0757
/* 0x065caa1c */ LDATA extern char public_65caa1c; // OOB+0x0758
/* 0x065caa1d */ LDATA extern char public_65caa1d; // OOB+0x0759
/* 0x065caa1e */ LDATA extern char public_65caa1e; // OOB+0x075a
/* 0x065caa1f */ LDATA extern char public_65caa1f; // OOB+0x075b
/* 0x065caa20 */ LDATA extern char public_65caa20; // OOB+0x075c
/* 0x065caa21 */ LDATA extern char public_65caa21; // OOB+0x075d
/* 0x065caa22 */ LDATA extern char public_65caa22; // OOB+0x075e
/* 0x065caa23 */ LDATA extern char public_65caa23; // OOB+0x075f
/* 0x065caa24 */ LDATA extern char public_65caa24; // OOB+0x0760
/* 0x065caa25 */ LDATA extern char public_65caa25; // OOB+0x0761
/* 0x065caa26 */ LDATA extern char public_65caa26; // OOB+0x0762
/* 0x065caa27 */ LDATA extern char public_65caa27; // OOB+0x0763
/* 0x065caa28 */ LDATA extern char public_65caa28; // OOB+0x0764
/* 0x065caa29 */ LDATA extern char public_65caa29; // OOB+0x0765
/* 0x065caa2a */ LDATA extern char public_65caa2a; // OOB+0x0766
/* 0x065caa2b */ LDATA extern char public_65caa2b; // OOB+0x0767
/* 0x065caa2c */ LDATA extern char public_65caa2c; // OOB+0x0768
/* 0x065caa2d */ LDATA extern char public_65caa2d; // OOB+0x0769
/* 0x065caa2e */ LDATA extern char public_65caa2e; // OOB+0x076a
/* 0x065caa2f */ LDATA extern char public_65caa2f; // OOB+0x076b
/* 0x065caa30 */ LDATA extern char public_65caa30; // OOB+0x076c
/* 0x065caa31 */ LDATA extern char public_65caa31; // OOB+0x076d
/* 0x065caa32 */ LDATA extern char public_65caa32; // OOB+0x076e
/* 0x065caa33 */ LDATA extern char public_65caa33; // OOB+0x076f
/* 0x065caa34 */ LDATA extern char public_65caa34; // OOB+0x0770
/* 0x065caa35 */ LDATA extern char public_65caa35; // OOB+0x0771
/* 0x065caa36 */ LDATA extern char public_65caa36; // OOB+0x0772
/* 0x065caa37 */ LDATA extern char public_65caa37; // OOB+0x0773
/* 0x065caa38 */ LDATA extern char public_65caa38; // OOB+0x0774
/* 0x065caa39 */ LDATA extern char public_65caa39; // OOB+0x0775
/* 0x065caa3a */ LDATA extern char public_65caa3a; // OOB+0x0776
/* 0x065caa3b */ LDATA extern char public_65caa3b; // OOB+0x0777
/* 0x065caa3c */ LDATA extern char public_65caa3c; // OOB+0x0778
/* 0x065caa3d */ LDATA extern char public_65caa3d; // OOB+0x0779
/* 0x065caa3e */ LDATA extern char public_65caa3e; // OOB+0x077a
/* 0x065caa3f */ LDATA extern char public_65caa3f; // OOB+0x077b
/* 0x065caa40 */ LDATA extern char public_65caa40; // OOB+0x077c
/* 0x065caa41 */ LDATA extern char public_65caa41; // OOB+0x077d
/* 0x065caa42 */ LDATA extern char public_65caa42; // OOB+0x077e
/* 0x065caa43 */ LDATA extern char public_65caa43; // OOB+0x077f
/* 0x065caa44 */ LDATA extern char public_65caa44; // OOB+0x0780
/* 0x065caa45 */ LDATA extern char public_65caa45; // OOB+0x0781
/* 0x065caa46 */ LDATA extern char public_65caa46; // OOB+0x0782
/* 0x065caa47 */ LDATA extern char public_65caa47; // OOB+0x0783
/* 0x065caa48 */ LDATA extern char public_65caa48; // OOB+0x0784
/* 0x065caa49 */ LDATA extern char public_65caa49; // OOB+0x0785
/* 0x065caa4a */ LDATA extern char public_65caa4a; // OOB+0x0786
/* 0x065caa4b */ LDATA extern char public_65caa4b; // OOB+0x0787
/* 0x065caa4c */ LDATA extern char public_65caa4c; // OOB+0x0788
/* 0x065caa4d */ LDATA extern char public_65caa4d; // OOB+0x0789
/* 0x065caa4e */ LDATA extern char public_65caa4e; // OOB+0x078a
/* 0x065caa4f */ LDATA extern char public_65caa4f; // OOB+0x078b
/* 0x065caa50 */ LDATA extern char public_65caa50; // OOB+0x078c
/* 0x065caa51 */ LDATA extern char public_65caa51; // OOB+0x078d
/* 0x065caa52 */ LDATA extern char public_65caa52; // OOB+0x078e
/* 0x065caa53 */ LDATA extern char public_65caa53; // OOB+0x078f
/* 0x065caa54 */ LDATA extern char public_65caa54; // OOB+0x0790
/* 0x065caa55 */ LDATA extern char public_65caa55; // OOB+0x0791
/* 0x065caa56 */ LDATA extern char public_65caa56; // OOB+0x0792
/* 0x065caa57 */ LDATA extern char public_65caa57; // OOB+0x0793
/* 0x065caa58 */ LDATA extern char public_65caa58; // OOB+0x0794
/* 0x065caa59 */ LDATA extern char public_65caa59; // OOB+0x0795
/* 0x065caa5a */ LDATA extern char public_65caa5a; // OOB+0x0796
/* 0x065caa5b */ LDATA extern char public_65caa5b; // OOB+0x0797
/* 0x065caa5c */ LDATA extern char public_65caa5c; // OOB+0x0798
/* 0x065caa5d */ LDATA extern char public_65caa5d; // OOB+0x0799
/* 0x065caa5e */ LDATA extern char public_65caa5e; // OOB+0x079a
/* 0x065caa5f */ LDATA extern char public_65caa5f; // OOB+0x079b
/* 0x065caa60 */ LDATA extern char public_65caa60; // OOB+0x079c
/* 0x065caa61 */ LDATA extern char public_65caa61; // OOB+0x079d
/* 0x065caa62 */ LDATA extern char public_65caa62; // OOB+0x079e
/* 0x065caa63 */ LDATA extern char public_65caa63; // OOB+0x079f
/* 0x065caa64 */ LDATA extern char public_65caa64; // OOB+0x07a0
/* 0x065caa65 */ LDATA extern char public_65caa65; // OOB+0x07a1
/* 0x065caa66 */ LDATA extern char public_65caa66; // OOB+0x07a2
/* 0x065caa67 */ LDATA extern char public_65caa67; // OOB+0x07a3
/* 0x065caa68 */ LDATA extern char public_65caa68; // OOB+0x07a4
/* 0x065caa69 */ LDATA extern char public_65caa69; // OOB+0x07a5
/* 0x065caa6a */ LDATA extern char public_65caa6a; // OOB+0x07a6
/* 0x065caa6b */ LDATA extern char public_65caa6b; // OOB+0x07a7
/* 0x065caa6c */ LDATA extern char public_65caa6c; // OOB+0x07a8
/* 0x065caa6d */ LDATA extern char public_65caa6d; // OOB+0x07a9
/* 0x065caa6e */ LDATA extern char public_65caa6e; // OOB+0x07aa
/* 0x065caa6f */ LDATA extern char public_65caa6f; // OOB+0x07ab
/* 0x065caa70 */ LDATA extern char public_65caa70; // OOB+0x07ac
/* 0x065caa71 */ LDATA extern char public_65caa71; // OOB+0x07ad
/* 0x065caa72 */ LDATA extern char public_65caa72; // OOB+0x07ae
/* 0x065caa73 */ LDATA extern char public_65caa73; // OOB+0x07af
/* 0x065caa74 */ LDATA extern char public_65caa74; // OOB+0x07b0
/* 0x065caa75 */ LDATA extern char public_65caa75; // OOB+0x07b1
/* 0x065caa76 */ LDATA extern char public_65caa76; // OOB+0x07b2
/* 0x065caa77 */ LDATA extern char public_65caa77; // OOB+0x07b3
/* 0x065caa78 */ LDATA extern char public_65caa78; // OOB+0x07b4
/* 0x065caa79 */ LDATA extern char public_65caa79; // OOB+0x07b5
/* 0x065caa7a */ LDATA extern char public_65caa7a; // OOB+0x07b6
/* 0x065caa7b */ LDATA extern char public_65caa7b; // OOB+0x07b7
/* 0x065caa7c */ LDATA extern char public_65caa7c; // OOB+0x07b8
/* 0x065caa7d */ LDATA extern char public_65caa7d; // OOB+0x07b9
/* 0x065caa7e */ LDATA extern char public_65caa7e; // OOB+0x07ba
/* 0x065caa7f */ LDATA extern char public_65caa7f; // OOB+0x07bb
/* 0x065caa80 */ LDATA extern char public_65caa80; // OOB+0x07bc
/* 0x065caa81 */ LDATA extern char public_65caa81; // OOB+0x07bd
/* 0x065caa82 */ LDATA extern char public_65caa82; // OOB+0x07be
/* 0x065caa83 */ LDATA extern char public_65caa83; // OOB+0x07bf
/* 0x065caa84 */ LDATA extern char public_65caa84; // OOB+0x07c0
/* 0x065caa85 */ LDATA extern char public_65caa85; // OOB+0x07c1
/* 0x065caa86 */ LDATA extern char public_65caa86; // OOB+0x07c2
/* 0x065caa87 */ LDATA extern char public_65caa87; // OOB+0x07c3
/* 0x065caa88 */ LDATA extern char public_65caa88; // OOB+0x07c4
/* 0x065caa89 */ LDATA extern char public_65caa89; // OOB+0x07c5
/* 0x065caa8a */ LDATA extern char public_65caa8a; // OOB+0x07c6
/* 0x065caa8b */ LDATA extern char public_65caa8b; // OOB+0x07c7
/* 0x065caa8c */ LDATA extern char public_65caa8c; // OOB+0x07c8
/* 0x065caa8d */ LDATA extern char public_65caa8d; // OOB+0x07c9
/* 0x065caa8e */ LDATA extern char public_65caa8e; // OOB+0x07ca
/* 0x065caa8f */ LDATA extern char public_65caa8f; // OOB+0x07cb
/* 0x065caa90 */ LDATA extern char public_65caa90; // OOB+0x07cc
/* 0x065caa91 */ LDATA extern char public_65caa91; // OOB+0x07cd
/* 0x065caa92 */ LDATA extern char public_65caa92; // OOB+0x07ce
/* 0x065caa93 */ LDATA extern char public_65caa93; // OOB+0x07cf
/* 0x065caa94 */ LDATA extern char public_65caa94; // OOB+0x07d0
/* 0x065caa95 */ LDATA extern char public_65caa95; // OOB+0x07d1
/* 0x065caa96 */ LDATA extern char public_65caa96; // OOB+0x07d2
/* 0x065caa97 */ LDATA extern char public_65caa97; // OOB+0x07d3
/* 0x065caa98 */ LDATA extern char public_65caa98; // OOB+0x07d4
/* 0x065caa99 */ LDATA extern char public_65caa99; // OOB+0x07d5
/* 0x065caa9a */ LDATA extern char public_65caa9a; // OOB+0x07d6
/* 0x065caa9b */ LDATA extern char public_65caa9b; // OOB+0x07d7
/* 0x065caa9c */ LDATA extern char public_65caa9c; // OOB+0x07d8
/* 0x065caa9d */ LDATA extern char public_65caa9d; // OOB+0x07d9
/* 0x065caa9e */ LDATA extern char public_65caa9e; // OOB+0x07da
/* 0x065caa9f */ LDATA extern char public_65caa9f; // OOB+0x07db
/* 0x065caaa0 */ LDATA extern char public_65caaa0; // OOB+0x07dc
/* 0x065caaa1 */ LDATA extern char public_65caaa1; // OOB+0x07dd
/* 0x065caaa2 */ LDATA extern char public_65caaa2; // OOB+0x07de
/* 0x065caaa3 */ LDATA extern char public_65caaa3; // OOB+0x07df
/* 0x065caaa4 */ LDATA extern char public_65caaa4; // OOB+0x07e0
/* 0x065caaa5 */ LDATA extern char public_65caaa5; // OOB+0x07e1
/* 0x065caaa6 */ LDATA extern char public_65caaa6; // OOB+0x07e2
/* 0x065caaa7 */ LDATA extern char public_65caaa7; // OOB+0x07e3
/* 0x065caaa8 */ LDATA extern char public_65caaa8; // OOB+0x07e4
/* 0x065caaa9 */ LDATA extern char public_65caaa9; // OOB+0x07e5
/* 0x065caaaa */ LDATA extern char public_65caaaa; // OOB+0x07e6
/* 0x065caaab */ LDATA extern char public_65caaab; // OOB+0x07e7
/* 0x065caaac */ LDATA extern char public_65caaac; // OOB+0x07e8
/* 0x065caaad */ LDATA extern char public_65caaad; // OOB+0x07e9
/* 0x065caaae */ LDATA extern char public_65caaae; // OOB+0x07ea
/* 0x065caaaf */ LDATA extern char public_65caaaf; // OOB+0x07eb
/* 0x065caab0 */ LDATA extern char public_65caab0; // OOB+0x07ec
/* 0x065caab1 */ LDATA extern char public_65caab1; // OOB+0x07ed
/* 0x065caab2 */ LDATA extern char public_65caab2; // OOB+0x07ee
/* 0x065caab3 */ LDATA extern char public_65caab3; // OOB+0x07ef
/* 0x065caab4 */ LDATA extern char public_65caab4; // OOB+0x07f0
/* 0x065caab5 */ LDATA extern char public_65caab5; // OOB+0x07f1
/* 0x065caab6 */ LDATA extern char public_65caab6; // OOB+0x07f2
/* 0x065caab7 */ LDATA extern char public_65caab7; // OOB+0x07f3
/* 0x065caab8 */ LDATA extern char public_65caab8; // OOB+0x07f4
/* 0x065caab9 */ LDATA extern char public_65caab9; // OOB+0x07f5
/* 0x065caaba */ LDATA extern char public_65caaba; // OOB+0x07f6
/* 0x065caabb */ LDATA extern char public_65caabb; // OOB+0x07f7
/* 0x065caabc */ LDATA extern char public_65caabc; // OOB+0x07f8
/* 0x065caabd */ LDATA extern char public_65caabd; // OOB+0x07f9
/* 0x065caabe */ LDATA extern char public_65caabe; // OOB+0x07fa
/* 0x065caabf */ LDATA extern char public_65caabf; // OOB+0x07fb
/* 0x065caac0 */ LDATA extern char public_65caac0; // OOB+0x07fc
/* 0x065caac1 */ LDATA extern char public_65caac1; // OOB+0x07fd
/* 0x065caac2 */ LDATA extern char public_65caac2; // OOB+0x07fe
/* 0x065caac3 */ LDATA extern char public_65caac3; // OOB+0x07ff
/* 0x065caac4 */ LDATA extern char public_65caac4; // OOB+0x0800
/* 0x065caac5 */ LDATA extern char public_65caac5; // OOB+0x0801
/* 0x065caac6 */ LDATA extern char public_65caac6; // OOB+0x0802
/* 0x065caac7 */ LDATA extern char public_65caac7; // OOB+0x0803
/* 0x065caac8 */ LDATA extern char public_65caac8; // OOB+0x0804
/* 0x065caac9 */ LDATA extern char public_65caac9; // OOB+0x0805
/* 0x065caaca */ LDATA extern char public_65caaca; // OOB+0x0806
/* 0x065caacb */ LDATA extern char public_65caacb; // OOB+0x0807
/* 0x065caacc */ LDATA extern char public_65caacc; // OOB+0x0808
/* 0x065caacd */ LDATA extern char public_65caacd; // OOB+0x0809
/* 0x065caace */ LDATA extern char public_65caace; // OOB+0x080a
/* 0x065caacf */ LDATA extern char public_65caacf; // OOB+0x080b
/* 0x065caad0 */ LDATA extern char public_65caad0; // OOB+0x080c
/* 0x065caad1 */ LDATA extern char public_65caad1; // OOB+0x080d
/* 0x065caad2 */ LDATA extern char public_65caad2; // OOB+0x080e
/* 0x065caad3 */ LDATA extern char public_65caad3; // OOB+0x080f
/* 0x065caad4 */ LDATA extern char public_65caad4; // OOB+0x0810
/* 0x065caad5 */ LDATA extern char public_65caad5; // OOB+0x0811
/* 0x065caad6 */ LDATA extern char public_65caad6; // OOB+0x0812
/* 0x065caad7 */ LDATA extern char public_65caad7; // OOB+0x0813
/* 0x065caad8 */ LDATA extern char public_65caad8; // OOB+0x0814
/* 0x065caad9 */ LDATA extern char public_65caad9; // OOB+0x0815
/* 0x065caada */ LDATA extern char public_65caada; // OOB+0x0816
/* 0x065caadb */ LDATA extern char public_65caadb; // OOB+0x0817
/* 0x065caadc */ LDATA extern char public_65caadc; // OOB+0x0818
/* 0x065caadd */ LDATA extern char public_65caadd; // OOB+0x0819
/* 0x065caade */ LDATA extern char public_65caade; // OOB+0x081a
/* 0x065caadf */ LDATA extern char public_65caadf; // OOB+0x081b
/* 0x065caae0 */ LDATA extern char public_65caae0; // OOB+0x081c
/* 0x065caae1 */ LDATA extern char public_65caae1; // OOB+0x081d
/* 0x065caae2 */ LDATA extern char public_65caae2; // OOB+0x081e
/* 0x065caae3 */ LDATA extern char public_65caae3; // OOB+0x081f
/* 0x065caae4 */ LDATA extern char public_65caae4; // OOB+0x0820
/* 0x065caae5 */ LDATA extern char public_65caae5; // OOB+0x0821
/* 0x065caae6 */ LDATA extern char public_65caae6; // OOB+0x0822
/* 0x065caae7 */ LDATA extern char public_65caae7; // OOB+0x0823
/* 0x065caae8 */ LDATA extern char public_65caae8; // OOB+0x0824
/* 0x065caae9 */ LDATA extern char public_65caae9; // OOB+0x0825
/* 0x065caaea */ LDATA extern char public_65caaea; // OOB+0x0826
/* 0x065caaeb */ LDATA extern char public_65caaeb; // OOB+0x0827
/* 0x065caaec */ LDATA extern char public_65caaec; // OOB+0x0828
/* 0x065caaed */ LDATA extern char public_65caaed; // OOB+0x0829
/* 0x065caaee */ LDATA extern char public_65caaee; // OOB+0x082a
/* 0x065caaef */ LDATA extern char public_65caaef; // OOB+0x082b
/* 0x065caaf0 */ LDATA extern char public_65caaf0; // OOB+0x082c
/* 0x065caaf1 */ LDATA extern char public_65caaf1; // OOB+0x082d
/* 0x065caaf2 */ LDATA extern char public_65caaf2; // OOB+0x082e
/* 0x065caaf3 */ LDATA extern char public_65caaf3; // OOB+0x082f
/* 0x065caaf4 */ LDATA extern char public_65caaf4; // OOB+0x0830
/* 0x065caaf5 */ LDATA extern char public_65caaf5; // OOB+0x0831
/* 0x065caaf6 */ LDATA extern char public_65caaf6; // OOB+0x0832
/* 0x065caaf7 */ LDATA extern char public_65caaf7; // OOB+0x0833
/* 0x065caaf8 */ LDATA extern char public_65caaf8; // OOB+0x0834
/* 0x065caaf9 */ LDATA extern char public_65caaf9; // OOB+0x0835
/* 0x065caafa */ LDATA extern char public_65caafa; // OOB+0x0836
/* 0x065caafb */ LDATA extern char public_65caafb; // OOB+0x0837
/* 0x065caafc */ LDATA extern char public_65caafc; // OOB+0x0838
/* 0x065caafd */ LDATA extern char public_65caafd; // OOB+0x0839
/* 0x065caafe */ LDATA extern char public_65caafe; // OOB+0x083a
/* 0x065caaff */ LDATA extern char public_65caaff; // OOB+0x083b
/* 0x065cab00 */ LDATA extern char public_65cab00; // OOB+0x083c
/* 0x065cab01 */ LDATA extern char public_65cab01; // OOB+0x083d
/* 0x065cab02 */ LDATA extern char public_65cab02; // OOB+0x083e
/* 0x065cab03 */ LDATA extern char public_65cab03; // OOB+0x083f
/* 0x065cab04 */ LDATA extern char public_65cab04; // OOB+0x0840
/* 0x065cab05 */ LDATA extern char public_65cab05; // OOB+0x0841
/* 0x065cab06 */ LDATA extern char public_65cab06; // OOB+0x0842
/* 0x065cab07 */ LDATA extern char public_65cab07; // OOB+0x0843
/* 0x065cab08 */ LDATA extern char public_65cab08; // OOB+0x0844
/* 0x065cab09 */ LDATA extern char public_65cab09; // OOB+0x0845
/* 0x065cab0a */ LDATA extern char public_65cab0a; // OOB+0x0846
/* 0x065cab0b */ LDATA extern char public_65cab0b; // OOB+0x0847
/* 0x065cab0c */ LDATA extern char public_65cab0c; // OOB+0x0848
/* 0x065cab0d */ LDATA extern char public_65cab0d; // OOB+0x0849
/* 0x065cab0e */ LDATA extern char public_65cab0e; // OOB+0x084a
/* 0x065cab0f */ LDATA extern char public_65cab0f; // OOB+0x084b
/* 0x065cab10 */ LDATA extern char public_65cab10; // OOB+0x084c
/* 0x065cab11 */ LDATA extern char public_65cab11; // OOB+0x084d
/* 0x065cab12 */ LDATA extern char public_65cab12; // OOB+0x084e
/* 0x065cab13 */ LDATA extern char public_65cab13; // OOB+0x084f
/* 0x065cab14 */ LDATA extern char public_65cab14; // OOB+0x0850
/* 0x065cab15 */ LDATA extern char public_65cab15; // OOB+0x0851
/* 0x065cab16 */ LDATA extern char public_65cab16; // OOB+0x0852
/* 0x065cab17 */ LDATA extern char public_65cab17; // OOB+0x0853
/* 0x065cab18 */ LDATA extern char public_65cab18; // OOB+0x0854
/* 0x065cab19 */ LDATA extern char public_65cab19; // OOB+0x0855
/* 0x065cab1a */ LDATA extern char public_65cab1a; // OOB+0x0856
/* 0x065cab1b */ LDATA extern char public_65cab1b; // OOB+0x0857
/* 0x065cab1c */ LDATA extern char public_65cab1c; // OOB+0x0858
/* 0x065cab1d */ LDATA extern char public_65cab1d; // OOB+0x0859
/* 0x065cab1e */ LDATA extern char public_65cab1e; // OOB+0x085a
/* 0x065cab1f */ LDATA extern char public_65cab1f; // OOB+0x085b
/* 0x065cab20 */ LDATA extern char public_65cab20; // OOB+0x085c
/* 0x065cab21 */ LDATA extern char public_65cab21; // OOB+0x085d
/* 0x065cab22 */ LDATA extern char public_65cab22; // OOB+0x085e
/* 0x065cab23 */ LDATA extern char public_65cab23; // OOB+0x085f
/* 0x065cab24 */ LDATA extern char public_65cab24; // OOB+0x0860
/* 0x065cab25 */ LDATA extern char public_65cab25; // OOB+0x0861
/* 0x065cab26 */ LDATA extern char public_65cab26; // OOB+0x0862
/* 0x065cab27 */ LDATA extern char public_65cab27; // OOB+0x0863
/* 0x065cab28 */ LDATA extern char public_65cab28; // OOB+0x0864
/* 0x065cab29 */ LDATA extern char public_65cab29; // OOB+0x0865
/* 0x065cab2a */ LDATA extern char public_65cab2a; // OOB+0x0866
/* 0x065cab2b */ LDATA extern char public_65cab2b; // OOB+0x0867
/* 0x065cab2c */ LDATA extern char public_65cab2c; // OOB+0x0868
/* 0x065cab2d */ LDATA extern char public_65cab2d; // OOB+0x0869
/* 0x065cab2e */ LDATA extern char public_65cab2e; // OOB+0x086a
/* 0x065cab2f */ LDATA extern char public_65cab2f; // OOB+0x086b
/* 0x065cab30 */ LDATA extern char public_65cab30; // OOB+0x086c
/* 0x065cab31 */ LDATA extern char public_65cab31; // OOB+0x086d
/* 0x065cab32 */ LDATA extern char public_65cab32; // OOB+0x086e
/* 0x065cab33 */ LDATA extern char public_65cab33; // OOB+0x086f
/* 0x065cab34 */ LDATA extern char public_65cab34; // OOB+0x0870
/* 0x065cab35 */ LDATA extern char public_65cab35; // OOB+0x0871
/* 0x065cab36 */ LDATA extern char public_65cab36; // OOB+0x0872
/* 0x065cab37 */ LDATA extern char public_65cab37; // OOB+0x0873
/* 0x065cab38 */ LDATA extern char public_65cab38; // OOB+0x0874
/* 0x065cab39 */ LDATA extern char public_65cab39; // OOB+0x0875
/* 0x065cab3a */ LDATA extern char public_65cab3a; // OOB+0x0876
/* 0x065cab3b */ LDATA extern char public_65cab3b; // OOB+0x0877
/* 0x065cab3c */ LDATA extern char public_65cab3c; // OOB+0x0878
/* 0x065cab3d */ LDATA extern char public_65cab3d; // OOB+0x0879
/* 0x065cab3e */ LDATA extern char public_65cab3e; // OOB+0x087a
/* 0x065cab3f */ LDATA extern char public_65cab3f; // OOB+0x087b
/* 0x065cab40 */ LDATA extern char public_65cab40; // OOB+0x087c
/* 0x065cab41 */ LDATA extern char public_65cab41; // OOB+0x087d
/* 0x065cab42 */ LDATA extern char public_65cab42; // OOB+0x087e
/* 0x065cab43 */ LDATA extern char public_65cab43; // OOB+0x087f
/* 0x065cab44 */ LDATA extern char public_65cab44; // OOB+0x0880
/* 0x065cab45 */ LDATA extern char public_65cab45; // OOB+0x0881
/* 0x065cab46 */ LDATA extern char public_65cab46; // OOB+0x0882
/* 0x065cab47 */ LDATA extern char public_65cab47; // OOB+0x0883
/* 0x065cab48 */ LDATA extern char public_65cab48; // OOB+0x0884
/* 0x065cab49 */ LDATA extern char public_65cab49; // OOB+0x0885
/* 0x065cab4a */ LDATA extern char public_65cab4a; // OOB+0x0886
/* 0x065cab4b */ LDATA extern char public_65cab4b; // OOB+0x0887
/* 0x065cab4c */ LDATA extern char public_65cab4c; // OOB+0x0888
/* 0x065cab4d */ LDATA extern char public_65cab4d; // OOB+0x0889
/* 0x065cab4e */ LDATA extern char public_65cab4e; // OOB+0x088a
/* 0x065cab4f */ LDATA extern char public_65cab4f; // OOB+0x088b
/* 0x065cab50 */ LDATA extern char public_65cab50; // OOB+0x088c
/* 0x065cab51 */ LDATA extern char public_65cab51; // OOB+0x088d
/* 0x065cab52 */ LDATA extern char public_65cab52; // OOB+0x088e
/* 0x065cab53 */ LDATA extern char public_65cab53; // OOB+0x088f
/* 0x065cab54 */ LDATA extern char public_65cab54; // OOB+0x0890
/* 0x065cab55 */ LDATA extern char public_65cab55; // OOB+0x0891
/* 0x065cab56 */ LDATA extern char public_65cab56; // OOB+0x0892
/* 0x065cab57 */ LDATA extern char public_65cab57; // OOB+0x0893
/* 0x065cab58 */ LDATA extern char public_65cab58; // OOB+0x0894
/* 0x065cab59 */ LDATA extern char public_65cab59; // OOB+0x0895
/* 0x065cab5a */ LDATA extern char public_65cab5a; // OOB+0x0896
/* 0x065cab5b */ LDATA extern char public_65cab5b; // OOB+0x0897
/* 0x065cab5c */ LDATA extern char public_65cab5c; // OOB+0x0898
/* 0x065cab5d */ LDATA extern char public_65cab5d; // OOB+0x0899
/* 0x065cab5e */ LDATA extern char public_65cab5e; // OOB+0x089a
/* 0x065cab5f */ LDATA extern char public_65cab5f; // OOB+0x089b
/* 0x065cab60 */ LDATA extern char public_65cab60; // OOB+0x089c
/* 0x065cab61 */ LDATA extern char public_65cab61; // OOB+0x089d
/* 0x065cab62 */ LDATA extern char public_65cab62; // OOB+0x089e
/* 0x065cab63 */ LDATA extern char public_65cab63; // OOB+0x089f
/* 0x065cab64 */ LDATA extern char public_65cab64; // OOB+0x08a0
/* 0x065cab65 */ LDATA extern char public_65cab65; // OOB+0x08a1
/* 0x065cab66 */ LDATA extern char public_65cab66; // OOB+0x08a2
/* 0x065cab67 */ LDATA extern char public_65cab67; // OOB+0x08a3
/* 0x065cab68 */ LDATA extern char public_65cab68; // OOB+0x08a4
/* 0x065cab69 */ LDATA extern char public_65cab69; // OOB+0x08a5
/* 0x065cab6a */ LDATA extern char public_65cab6a; // OOB+0x08a6
/* 0x065cab6b */ LDATA extern char public_65cab6b; // OOB+0x08a7
/* 0x065cab6c */ LDATA extern char public_65cab6c; // OOB+0x08a8
/* 0x065cab6d */ LDATA extern char public_65cab6d; // OOB+0x08a9
/* 0x065cab6e */ LDATA extern char public_65cab6e; // OOB+0x08aa
/* 0x065cab6f */ LDATA extern char public_65cab6f; // OOB+0x08ab
/* 0x065cab70 */ LDATA extern char public_65cab70; // OOB+0x08ac
/* 0x065cab71 */ LDATA extern char public_65cab71; // OOB+0x08ad
/* 0x065cab72 */ LDATA extern char public_65cab72; // OOB+0x08ae
/* 0x065cab73 */ LDATA extern char public_65cab73; // OOB+0x08af
/* 0x065cab74 */ LDATA extern char public_65cab74; // OOB+0x08b0
/* 0x065cab75 */ LDATA extern char public_65cab75; // OOB+0x08b1
/* 0x065cab76 */ LDATA extern char public_65cab76; // OOB+0x08b2
/* 0x065cab77 */ LDATA extern char public_65cab77; // OOB+0x08b3
/* 0x065cab78 */ LDATA extern char public_65cab78; // OOB+0x08b4
/* 0x065cab79 */ LDATA extern char public_65cab79; // OOB+0x08b5
/* 0x065cab7a */ LDATA extern char public_65cab7a; // OOB+0x08b6
/* 0x065cab7b */ LDATA extern char public_65cab7b; // OOB+0x08b7
/* 0x065cab7c */ LDATA extern char public_65cab7c; // OOB+0x08b8
/* 0x065cab7d */ LDATA extern char public_65cab7d; // OOB+0x08b9
/* 0x065cab7e */ LDATA extern char public_65cab7e; // OOB+0x08ba
/* 0x065cab7f */ LDATA extern char public_65cab7f; // OOB+0x08bb
/* 0x065cab80 */ LDATA extern char public_65cab80; // OOB+0x08bc
/* 0x065cab81 */ LDATA extern char public_65cab81; // OOB+0x08bd
/* 0x065cab82 */ LDATA extern char public_65cab82; // OOB+0x08be
/* 0x065cab83 */ LDATA extern char public_65cab83; // OOB+0x08bf
/* 0x065cab84 */ LDATA extern char public_65cab84; // OOB+0x08c0
/* 0x065cab85 */ LDATA extern char public_65cab85; // OOB+0x08c1
/* 0x065cab86 */ LDATA extern char public_65cab86; // OOB+0x08c2
/* 0x065cab87 */ LDATA extern char public_65cab87; // OOB+0x08c3
/* 0x065cab88 */ LDATA extern char public_65cab88; // OOB+0x08c4
/* 0x065cab89 */ LDATA extern char public_65cab89; // OOB+0x08c5
/* 0x065cab8a */ LDATA extern char public_65cab8a; // OOB+0x08c6
/* 0x065cab8b */ LDATA extern char public_65cab8b; // OOB+0x08c7
/* 0x065cab8c */ LDATA extern char public_65cab8c; // OOB+0x08c8
/* 0x065cab8d */ LDATA extern char public_65cab8d; // OOB+0x08c9
/* 0x065cab8e */ LDATA extern char public_65cab8e; // OOB+0x08ca
/* 0x065cab8f */ LDATA extern char public_65cab8f; // OOB+0x08cb
/* 0x065cab90 */ LDATA extern char public_65cab90; // OOB+0x08cc
/* 0x065cab91 */ LDATA extern char public_65cab91; // OOB+0x08cd
/* 0x065cab92 */ LDATA extern char public_65cab92; // OOB+0x08ce
/* 0x065cab93 */ LDATA extern char public_65cab93; // OOB+0x08cf
/* 0x065cab94 */ LDATA extern char public_65cab94; // OOB+0x08d0
/* 0x065cab95 */ LDATA extern char public_65cab95; // OOB+0x08d1
/* 0x065cab96 */ LDATA extern char public_65cab96; // OOB+0x08d2
/* 0x065cab97 */ LDATA extern char public_65cab97; // OOB+0x08d3
/* 0x065cab98 */ LDATA extern char public_65cab98; // OOB+0x08d4
/* 0x065cab99 */ LDATA extern char public_65cab99; // OOB+0x08d5
/* 0x065cab9a */ LDATA extern char public_65cab9a; // OOB+0x08d6
/* 0x065cab9b */ LDATA extern char public_65cab9b; // OOB+0x08d7
/* 0x065cab9c */ LDATA extern char public_65cab9c; // OOB+0x08d8
/* 0x065cab9d */ LDATA extern char public_65cab9d; // OOB+0x08d9
/* 0x065cab9e */ LDATA extern char public_65cab9e; // OOB+0x08da
/* 0x065cab9f */ LDATA extern char public_65cab9f; // OOB+0x08db
/* 0x065caba0 */ LDATA extern char public_65caba0; // OOB+0x08dc
/* 0x065caba1 */ LDATA extern char public_65caba1; // OOB+0x08dd
/* 0x065caba2 */ LDATA extern char public_65caba2; // OOB+0x08de
/* 0x065caba3 */ LDATA extern char public_65caba3; // OOB+0x08df
/* 0x065caba4 */ LDATA extern char public_65caba4; // OOB+0x08e0
/* 0x065caba5 */ LDATA extern char public_65caba5; // OOB+0x08e1
/* 0x065caba6 */ LDATA extern char public_65caba6; // OOB+0x08e2
/* 0x065caba7 */ LDATA extern char public_65caba7; // OOB+0x08e3
/* 0x065caba8 */ LDATA extern char public_65caba8; // OOB+0x08e4
/* 0x065caba9 */ LDATA extern char public_65caba9; // OOB+0x08e5
/* 0x065cabaa */ LDATA extern char public_65cabaa; // OOB+0x08e6
/* 0x065cabab */ LDATA extern char public_65cabab; // OOB+0x08e7
/* 0x065cabac */ LDATA extern char public_65cabac; // OOB+0x08e8
/* 0x065cabad */ LDATA extern char public_65cabad; // OOB+0x08e9
/* 0x065cabae */ LDATA extern char public_65cabae; // OOB+0x08ea
/* 0x065cabaf */ LDATA extern char public_65cabaf; // OOB+0x08eb
/* 0x065cabb0 */ LDATA extern char public_65cabb0; // OOB+0x08ec
/* 0x065cabb1 */ LDATA extern char public_65cabb1; // OOB+0x08ed
/* 0x065cabb2 */ LDATA extern char public_65cabb2; // OOB+0x08ee
/* 0x065cabb3 */ LDATA extern char public_65cabb3; // OOB+0x08ef
/* 0x065cabb4 */ LDATA extern char public_65cabb4; // OOB+0x08f0
/* 0x065cabb5 */ LDATA extern char public_65cabb5; // OOB+0x08f1
/* 0x065cabb6 */ LDATA extern char public_65cabb6; // OOB+0x08f2
/* 0x065cabb7 */ LDATA extern char public_65cabb7; // OOB+0x08f3
/* 0x065cabb8 */ LDATA extern char public_65cabb8; // OOB+0x08f4
/* 0x065cabb9 */ LDATA extern char public_65cabb9; // OOB+0x08f5
/* 0x065cabba */ LDATA extern char public_65cabba; // OOB+0x08f6
/* 0x065cabbb */ LDATA extern char public_65cabbb; // OOB+0x08f7
/* 0x065cabbc */ LDATA extern char public_65cabbc; // OOB+0x08f8
/* 0x065cabbd */ LDATA extern char public_65cabbd; // OOB+0x08f9
/* 0x065cabbe */ LDATA extern char public_65cabbe; // OOB+0x08fa
/* 0x065cabbf */ LDATA extern char public_65cabbf; // OOB+0x08fb
/* 0x065cabc0 */ LDATA extern char public_65cabc0; // OOB+0x08fc
/* 0x065cabc1 */ LDATA extern char public_65cabc1; // OOB+0x08fd
/* 0x065cabc2 */ LDATA extern char public_65cabc2; // OOB+0x08fe
/* 0x065cabc3 */ LDATA extern char public_65cabc3; // OOB+0x08ff
/* 0x065cabc4 */ LDATA extern char public_65cabc4; // OOB+0x0900
/* 0x065cabc5 */ LDATA extern char public_65cabc5; // OOB+0x0901
/* 0x065cabc6 */ LDATA extern char public_65cabc6; // OOB+0x0902
/* 0x065cabc7 */ LDATA extern char public_65cabc7; // OOB+0x0903
/* 0x065cabc8 */ LDATA extern char public_65cabc8; // OOB+0x0904
/* 0x065cabc9 */ LDATA extern char public_65cabc9; // OOB+0x0905
/* 0x065cabca */ LDATA extern char public_65cabca; // OOB+0x0906
/* 0x065cabcb */ LDATA extern char public_65cabcb; // OOB+0x0907
/* 0x065cabcc */ LDATA extern char public_65cabcc; // OOB+0x0908
/* 0x065cabcd */ LDATA extern char public_65cabcd; // OOB+0x0909
/* 0x065cabce */ LDATA extern char public_65cabce; // OOB+0x090a
/* 0x065cabcf */ LDATA extern char public_65cabcf; // OOB+0x090b
/* 0x065cabd0 */ LDATA extern char public_65cabd0; // OOB+0x090c
/* 0x065cabd1 */ LDATA extern char public_65cabd1; // OOB+0x090d
/* 0x065cabd2 */ LDATA extern char public_65cabd2; // OOB+0x090e
/* 0x065cabd3 */ LDATA extern char public_65cabd3; // OOB+0x090f
/* 0x065cabd4 */ LDATA extern char public_65cabd4; // OOB+0x0910
/* 0x065cabd5 */ LDATA extern char public_65cabd5; // OOB+0x0911
/* 0x065cabd6 */ LDATA extern char public_65cabd6; // OOB+0x0912
/* 0x065cabd7 */ LDATA extern char public_65cabd7; // OOB+0x0913
/* 0x065cabd8 */ LDATA extern char public_65cabd8; // OOB+0x0914
/* 0x065cabd9 */ LDATA extern char public_65cabd9; // OOB+0x0915
/* 0x065cabda */ LDATA extern char public_65cabda; // OOB+0x0916
/* 0x065cabdb */ LDATA extern char public_65cabdb; // OOB+0x0917
/* 0x065cabdc */ LDATA extern char public_65cabdc; // OOB+0x0918
/* 0x065cabdd */ LDATA extern char public_65cabdd; // OOB+0x0919
/* 0x065cabde */ LDATA extern char public_65cabde; // OOB+0x091a
/* 0x065cabdf */ LDATA extern char public_65cabdf; // OOB+0x091b
/* 0x065cabe0 */ LDATA extern char public_65cabe0; // OOB+0x091c
/* 0x065cabe1 */ LDATA extern char public_65cabe1; // OOB+0x091d
/* 0x065cabe2 */ LDATA extern char public_65cabe2; // OOB+0x091e
/* 0x065cabe3 */ LDATA extern char public_65cabe3; // OOB+0x091f
/* 0x065cabe4 */ LDATA extern char public_65cabe4; // OOB+0x0920
/* 0x065cabe5 */ LDATA extern char public_65cabe5; // OOB+0x0921
/* 0x065cabe6 */ LDATA extern char public_65cabe6; // OOB+0x0922
/* 0x065cabe7 */ LDATA extern char public_65cabe7; // OOB+0x0923
/* 0x065cabe8 */ LDATA extern char public_65cabe8; // OOB+0x0924
/* 0x065cabe9 */ LDATA extern char public_65cabe9; // OOB+0x0925
/* 0x065cabea */ LDATA extern char public_65cabea; // OOB+0x0926
/* 0x065cabeb */ LDATA extern char public_65cabeb; // OOB+0x0927
/* 0x065cabec */ LDATA extern char public_65cabec; // OOB+0x0928
/* 0x065cabed */ LDATA extern char public_65cabed; // OOB+0x0929
/* 0x065cabee */ LDATA extern char public_65cabee; // OOB+0x092a
/* 0x065cabef */ LDATA extern char public_65cabef; // OOB+0x092b
/* 0x065cabf0 */ LDATA extern char public_65cabf0; // OOB+0x092c
/* 0x065cabf1 */ LDATA extern char public_65cabf1; // OOB+0x092d
/* 0x065cabf2 */ LDATA extern char public_65cabf2; // OOB+0x092e
/* 0x065cabf3 */ LDATA extern char public_65cabf3; // OOB+0x092f
/* 0x065cabf4 */ LDATA extern char public_65cabf4; // OOB+0x0930
/* 0x065cabf5 */ LDATA extern char public_65cabf5; // OOB+0x0931
/* 0x065cabf6 */ LDATA extern char public_65cabf6; // OOB+0x0932
/* 0x065cabf7 */ LDATA extern char public_65cabf7; // OOB+0x0933
/* 0x065cabf8 */ LDATA extern char public_65cabf8; // OOB+0x0934
/* 0x065cabf9 */ LDATA extern char public_65cabf9; // OOB+0x0935
/* 0x065cabfa */ LDATA extern char public_65cabfa; // OOB+0x0936
/* 0x065cabfb */ LDATA extern char public_65cabfb; // OOB+0x0937
/* 0x065cabfc */ LDATA extern char public_65cabfc; // OOB+0x0938
/* 0x065cabfd */ LDATA extern char public_65cabfd; // OOB+0x0939
/* 0x065cabfe */ LDATA extern char public_65cabfe; // OOB+0x093a
/* 0x065cabff */ LDATA extern char public_65cabff; // OOB+0x093b
/* 0x065cac00 */ LDATA extern char public_65cac00; // OOB+0x093c
/* 0x065cac01 */ LDATA extern char public_65cac01; // OOB+0x093d
/* 0x065cac02 */ LDATA extern char public_65cac02; // OOB+0x093e
/* 0x065cac03 */ LDATA extern char public_65cac03; // OOB+0x093f
/* 0x065cac04 */ LDATA extern char public_65cac04; // OOB+0x0940
/* 0x065cac05 */ LDATA extern char public_65cac05; // OOB+0x0941
/* 0x065cac06 */ LDATA extern char public_65cac06; // OOB+0x0942
/* 0x065cac07 */ LDATA extern char public_65cac07; // OOB+0x0943
/* 0x065cac08 */ LDATA extern char public_65cac08; // OOB+0x0944
/* 0x065cac09 */ LDATA extern char public_65cac09; // OOB+0x0945
/* 0x065cac0a */ LDATA extern char public_65cac0a; // OOB+0x0946
/* 0x065cac0b */ LDATA extern char public_65cac0b; // OOB+0x0947
/* 0x065cac0c */ LDATA extern char public_65cac0c; // OOB+0x0948
/* 0x065cac0d */ LDATA extern char public_65cac0d; // OOB+0x0949
/* 0x065cac0e */ LDATA extern char public_65cac0e; // OOB+0x094a
/* 0x065cac0f */ LDATA extern char public_65cac0f; // OOB+0x094b
/* 0x065cac10 */ LDATA extern char public_65cac10; // OOB+0x094c
/* 0x065cac11 */ LDATA extern char public_65cac11; // OOB+0x094d
/* 0x065cac12 */ LDATA extern char public_65cac12; // OOB+0x094e
/* 0x065cac13 */ LDATA extern char public_65cac13; // OOB+0x094f
/* 0x065cac14 */ LDATA extern char public_65cac14; // OOB+0x0950
/* 0x065cac15 */ LDATA extern char public_65cac15; // OOB+0x0951
/* 0x065cac16 */ LDATA extern char public_65cac16; // OOB+0x0952
/* 0x065cac17 */ LDATA extern char public_65cac17; // OOB+0x0953
/* 0x065cac18 */ LDATA extern char public_65cac18; // OOB+0x0954
/* 0x065cac19 */ LDATA extern char public_65cac19; // OOB+0x0955
/* 0x065cac1a */ LDATA extern char public_65cac1a; // OOB+0x0956
/* 0x065cac1b */ LDATA extern char public_65cac1b; // OOB+0x0957
/* 0x065cac1c */ LDATA extern char public_65cac1c; // OOB+0x0958
/* 0x065cac1d */ LDATA extern char public_65cac1d; // OOB+0x0959
/* 0x065cac1e */ LDATA extern char public_65cac1e; // OOB+0x095a
/* 0x065cac1f */ LDATA extern char public_65cac1f; // OOB+0x095b
/* 0x065cac20 */ LDATA extern char public_65cac20; // OOB+0x095c
/* 0x065cac21 */ LDATA extern char public_65cac21; // OOB+0x095d
/* 0x065cac22 */ LDATA extern char public_65cac22; // OOB+0x095e
/* 0x065cac23 */ LDATA extern char public_65cac23; // OOB+0x095f
/* 0x065cac24 */ LDATA extern char public_65cac24; // OOB+0x0960
/* 0x065cac25 */ LDATA extern char public_65cac25; // OOB+0x0961
/* 0x065cac26 */ LDATA extern char public_65cac26; // OOB+0x0962
/* 0x065cac27 */ LDATA extern char public_65cac27; // OOB+0x0963
/* 0x065cac28 */ LDATA extern char public_65cac28; // OOB+0x0964
/* 0x065cac29 */ LDATA extern char public_65cac29; // OOB+0x0965
/* 0x065cac2a */ LDATA extern char public_65cac2a; // OOB+0x0966
/* 0x065cac2b */ LDATA extern char public_65cac2b; // OOB+0x0967
/* 0x065cac2c */ LDATA extern char public_65cac2c; // OOB+0x0968
/* 0x065cac2d */ LDATA extern char public_65cac2d; // OOB+0x0969
/* 0x065cac2e */ LDATA extern char public_65cac2e; // OOB+0x096a
/* 0x065cac2f */ LDATA extern char public_65cac2f; // OOB+0x096b
/* 0x065cac30 */ LDATA extern char public_65cac30; // OOB+0x096c
/* 0x065cac31 */ LDATA extern char public_65cac31; // OOB+0x096d
/* 0x065cac32 */ LDATA extern char public_65cac32; // OOB+0x096e
/* 0x065cac33 */ LDATA extern char public_65cac33; // OOB+0x096f
/* 0x065cac34 */ LDATA extern char public_65cac34; // OOB+0x0970
/* 0x065cac35 */ LDATA extern char public_65cac35; // OOB+0x0971
/* 0x065cac36 */ LDATA extern char public_65cac36; // OOB+0x0972
/* 0x065cac37 */ LDATA extern char public_65cac37; // OOB+0x0973
/* 0x065cac38 */ LDATA extern char public_65cac38; // OOB+0x0974
/* 0x065cac39 */ LDATA extern char public_65cac39; // OOB+0x0975
/* 0x065cac3a */ LDATA extern char public_65cac3a; // OOB+0x0976
/* 0x065cac3b */ LDATA extern char public_65cac3b; // OOB+0x0977
/* 0x065cac3c */ LDATA extern char public_65cac3c; // OOB+0x0978
/* 0x065cac3d */ LDATA extern char public_65cac3d; // OOB+0x0979
/* 0x065cac3e */ LDATA extern char public_65cac3e; // OOB+0x097a
/* 0x065cac3f */ LDATA extern char public_65cac3f; // OOB+0x097b
/* 0x065cac40 */ LDATA extern char public_65cac40; // OOB+0x097c
/* 0x065cac41 */ LDATA extern char public_65cac41; // OOB+0x097d
/* 0x065cac42 */ LDATA extern char public_65cac42; // OOB+0x097e
/* 0x065cac43 */ LDATA extern char public_65cac43; // OOB+0x097f
/* 0x065cac44 */ LDATA extern char public_65cac44; // OOB+0x0980
/* 0x065cac45 */ LDATA extern char public_65cac45; // OOB+0x0981
/* 0x065cac46 */ LDATA extern char public_65cac46; // OOB+0x0982
/* 0x065cac47 */ LDATA extern char public_65cac47; // OOB+0x0983
/* 0x065cac48 */ LDATA extern char public_65cac48; // OOB+0x0984
/* 0x065cac49 */ LDATA extern char public_65cac49; // OOB+0x0985
/* 0x065cac4a */ LDATA extern char public_65cac4a; // OOB+0x0986
/* 0x065cac4b */ LDATA extern char public_65cac4b; // OOB+0x0987
/* 0x065cac4c */ LDATA extern char public_65cac4c; // OOB+0x0988
/* 0x065cac4d */ LDATA extern char public_65cac4d; // OOB+0x0989
/* 0x065cac4e */ LDATA extern char public_65cac4e; // OOB+0x098a
/* 0x065cac4f */ LDATA extern char public_65cac4f; // OOB+0x098b
/* 0x065cac50 */ LDATA extern char public_65cac50; // OOB+0x098c
/* 0x065cac51 */ LDATA extern char public_65cac51; // OOB+0x098d
/* 0x065cac52 */ LDATA extern char public_65cac52; // OOB+0x098e
/* 0x065cac53 */ LDATA extern char public_65cac53; // OOB+0x098f
/* 0x065cac54 */ LDATA extern char public_65cac54; // OOB+0x0990
/* 0x065cac55 */ LDATA extern char public_65cac55; // OOB+0x0991
/* 0x065cac56 */ LDATA extern char public_65cac56; // OOB+0x0992
/* 0x065cac57 */ LDATA extern char public_65cac57; // OOB+0x0993
/* 0x065cac58 */ LDATA extern char public_65cac58; // OOB+0x0994
/* 0x065cac59 */ LDATA extern char public_65cac59; // OOB+0x0995
/* 0x065cac5a */ LDATA extern char public_65cac5a; // OOB+0x0996
/* 0x065cac5b */ LDATA extern char public_65cac5b; // OOB+0x0997
/* 0x065cac5c */ LDATA extern char public_65cac5c; // OOB+0x0998
/* 0x065cac5d */ LDATA extern char public_65cac5d; // OOB+0x0999
/* 0x065cac5e */ LDATA extern char public_65cac5e; // OOB+0x099a
/* 0x065cac5f */ LDATA extern char public_65cac5f; // OOB+0x099b
/* 0x065cac60 */ LDATA extern char public_65cac60; // OOB+0x099c
/* 0x065cac61 */ LDATA extern char public_65cac61; // OOB+0x099d
/* 0x065cac62 */ LDATA extern char public_65cac62; // OOB+0x099e
/* 0x065cac63 */ LDATA extern char public_65cac63; // OOB+0x099f
/* 0x065cac64 */ LDATA extern char public_65cac64; // OOB+0x09a0
/* 0x065cac65 */ LDATA extern char public_65cac65; // OOB+0x09a1
/* 0x065cac66 */ LDATA extern char public_65cac66; // OOB+0x09a2
/* 0x065cac67 */ LDATA extern char public_65cac67; // OOB+0x09a3
/* 0x065cac68 */ LDATA extern char public_65cac68; // OOB+0x09a4
/* 0x065cac69 */ LDATA extern char public_65cac69; // OOB+0x09a5
/* 0x065cac6a */ LDATA extern char public_65cac6a; // OOB+0x09a6
/* 0x065cac6b */ LDATA extern char public_65cac6b; // OOB+0x09a7
/* 0x065cac6c */ LDATA extern char public_65cac6c; // OOB+0x09a8
/* 0x065cac6d */ LDATA extern char public_65cac6d; // OOB+0x09a9
/* 0x065cac6e */ LDATA extern char public_65cac6e; // OOB+0x09aa
/* 0x065cac6f */ LDATA extern char public_65cac6f; // OOB+0x09ab
/* 0x065cac70 */ LDATA extern char public_65cac70; // OOB+0x09ac
/* 0x065cac71 */ LDATA extern char public_65cac71; // OOB+0x09ad
/* 0x065cac72 */ LDATA extern char public_65cac72; // OOB+0x09ae
/* 0x065cac73 */ LDATA extern char public_65cac73; // OOB+0x09af
/* 0x065cac74 */ LDATA extern char public_65cac74; // OOB+0x09b0
/* 0x065cac75 */ LDATA extern char public_65cac75; // OOB+0x09b1
/* 0x065cac76 */ LDATA extern char public_65cac76; // OOB+0x09b2
/* 0x065cac77 */ LDATA extern char public_65cac77; // OOB+0x09b3
/* 0x065cac78 */ LDATA extern char public_65cac78; // OOB+0x09b4
/* 0x065cac79 */ LDATA extern char public_65cac79; // OOB+0x09b5
/* 0x065cac7a */ LDATA extern char public_65cac7a; // OOB+0x09b6
/* 0x065cac7b */ LDATA extern char public_65cac7b; // OOB+0x09b7
/* 0x065cac7c */ LDATA extern char public_65cac7c; // OOB+0x09b8
/* 0x065cac7d */ LDATA extern char public_65cac7d; // OOB+0x09b9
/* 0x065cac7e */ LDATA extern char public_65cac7e; // OOB+0x09ba
/* 0x065cac7f */ LDATA extern char public_65cac7f; // OOB+0x09bb
/* 0x065cac80 */ LDATA extern char public_65cac80; // OOB+0x09bc
/* 0x065cac81 */ LDATA extern char public_65cac81; // OOB+0x09bd
/* 0x065cac82 */ LDATA extern char public_65cac82; // OOB+0x09be
/* 0x065cac83 */ LDATA extern char public_65cac83; // OOB+0x09bf
/* 0x065cac84 */ LDATA extern char public_65cac84; // OOB+0x09c0
/* 0x065cac85 */ LDATA extern char public_65cac85; // OOB+0x09c1
/* 0x065cac86 */ LDATA extern char public_65cac86; // OOB+0x09c2
/* 0x065cac87 */ LDATA extern char public_65cac87; // OOB+0x09c3
/* 0x065cac88 */ LDATA extern char public_65cac88; // OOB+0x09c4
/* 0x065cac89 */ LDATA extern char public_65cac89; // OOB+0x09c5
/* 0x065cac8a */ LDATA extern char public_65cac8a; // OOB+0x09c6
/* 0x065cac8b */ LDATA extern char public_65cac8b; // OOB+0x09c7
/* 0x065cac8c */ LDATA extern char public_65cac8c; // OOB+0x09c8
/* 0x065cac8d */ LDATA extern char public_65cac8d; // OOB+0x09c9
/* 0x065cac8e */ LDATA extern char public_65cac8e; // OOB+0x09ca
/* 0x065cac8f */ LDATA extern char public_65cac8f; // OOB+0x09cb
/* 0x065cac90 */ LDATA extern char public_65cac90; // OOB+0x09cc
/* 0x065cac91 */ LDATA extern char public_65cac91; // OOB+0x09cd
/* 0x065cac92 */ LDATA extern char public_65cac92; // OOB+0x09ce
/* 0x065cac93 */ LDATA extern char public_65cac93; // OOB+0x09cf
/* 0x065cac94 */ LDATA extern char public_65cac94; // OOB+0x09d0
/* 0x065cac95 */ LDATA extern char public_65cac95; // OOB+0x09d1
/* 0x065cac96 */ LDATA extern char public_65cac96; // OOB+0x09d2
/* 0x065cac97 */ LDATA extern char public_65cac97; // OOB+0x09d3
/* 0x065cac98 */ LDATA extern char public_65cac98; // OOB+0x09d4
/* 0x065cac99 */ LDATA extern char public_65cac99; // OOB+0x09d5
/* 0x065cac9a */ LDATA extern char public_65cac9a; // OOB+0x09d6
/* 0x065cac9b */ LDATA extern char public_65cac9b; // OOB+0x09d7
/* 0x065cac9c */ LDATA extern char public_65cac9c; // OOB+0x09d8
/* 0x065cac9d */ LDATA extern char public_65cac9d; // OOB+0x09d9
/* 0x065cac9e */ LDATA extern char public_65cac9e; // OOB+0x09da
/* 0x065cac9f */ LDATA extern char public_65cac9f; // OOB+0x09db
/* 0x065caca0 */ LDATA extern char public_65caca0; // OOB+0x09dc
/* 0x065caca1 */ LDATA extern char public_65caca1; // OOB+0x09dd
/* 0x065caca2 */ LDATA extern char public_65caca2; // OOB+0x09de
/* 0x065caca3 */ LDATA extern char public_65caca3; // OOB+0x09df
/* 0x065caca4 */ LDATA extern char public_65caca4; // OOB+0x09e0
/* 0x065caca5 */ LDATA extern char public_65caca5; // OOB+0x09e1
/* 0x065caca6 */ LDATA extern char public_65caca6; // OOB+0x09e2
/* 0x065caca7 */ LDATA extern char public_65caca7; // OOB+0x09e3
/* 0x065caca8 */ LDATA extern char public_65caca8; // OOB+0x09e4
/* 0x065caca9 */ LDATA extern char public_65caca9; // OOB+0x09e5
/* 0x065cacaa */ LDATA extern char public_65cacaa; // OOB+0x09e6
/* 0x065cacab */ LDATA extern char public_65cacab; // OOB+0x09e7
/* 0x065cacac */ LDATA extern char public_65cacac; // OOB+0x09e8
/* 0x065cacad */ LDATA extern char public_65cacad; // OOB+0x09e9
/* 0x065cacae */ LDATA extern char public_65cacae; // OOB+0x09ea
/* 0x065cacaf */ LDATA extern char public_65cacaf; // OOB+0x09eb
/* 0x065cacb0 */ LDATA extern char public_65cacb0; // OOB+0x09ec
/* 0x065cacb1 */ LDATA extern char public_65cacb1; // OOB+0x09ed
/* 0x065cacb2 */ LDATA extern char public_65cacb2; // OOB+0x09ee
/* 0x065cacb3 */ LDATA extern char public_65cacb3; // OOB+0x09ef
/* 0x065cacb4 */ LDATA extern char public_65cacb4; // OOB+0x09f0
/* 0x065cacb5 */ LDATA extern char public_65cacb5; // OOB+0x09f1
/* 0x065cacb6 */ LDATA extern char public_65cacb6; // OOB+0x09f2
/* 0x065cacb7 */ LDATA extern char public_65cacb7; // OOB+0x09f3
/* 0x065cacb8 */ LDATA extern char public_65cacb8; // OOB+0x09f4
/* 0x065cacb9 */ LDATA extern char public_65cacb9; // OOB+0x09f5
/* 0x065cacba */ LDATA extern char public_65cacba; // OOB+0x09f6
/* 0x065cacbb */ LDATA extern char public_65cacbb; // OOB+0x09f7
/* 0x065cacbc */ LDATA extern char public_65cacbc; // OOB+0x09f8
/* 0x065cacbd */ LDATA extern char public_65cacbd; // OOB+0x09f9
/* 0x065cacbe */ LDATA extern char public_65cacbe; // OOB+0x09fa
/* 0x065cacbf */ LDATA extern char public_65cacbf; // OOB+0x09fb
/* 0x065cacc0 */ LDATA extern char public_65cacc0; // OOB+0x09fc
/* 0x065cacc1 */ LDATA extern char public_65cacc1; // OOB+0x09fd
/* 0x065cacc2 */ LDATA extern char public_65cacc2; // OOB+0x09fe
/* 0x065cacc3 */ LDATA extern char public_65cacc3; // OOB+0x09ff
/* 0x065cacc4 */ LDATA extern char public_65cacc4; // OOB+0x0a00
/* 0x065cacc5 */ LDATA extern char public_65cacc5; // OOB+0x0a01
/* 0x065cacc6 */ LDATA extern char public_65cacc6; // OOB+0x0a02
/* 0x065cacc7 */ LDATA extern char public_65cacc7; // OOB+0x0a03
/* 0x065cacc8 */ LDATA extern char public_65cacc8; // OOB+0x0a04
/* 0x065cacc9 */ LDATA extern char public_65cacc9; // OOB+0x0a05
/* 0x065cacca */ LDATA extern char public_65cacca; // OOB+0x0a06
/* 0x065caccb */ LDATA extern char public_65caccb; // OOB+0x0a07
/* 0x065caccc */ LDATA extern char public_65caccc; // OOB+0x0a08
/* 0x065caccd */ LDATA extern char public_65caccd; // OOB+0x0a09
/* 0x065cacce */ LDATA extern char public_65cacce; // OOB+0x0a0a
/* 0x065caccf */ LDATA extern char public_65caccf; // OOB+0x0a0b
/* 0x065cacd0 */ LDATA extern char public_65cacd0; // OOB+0x0a0c
/* 0x065cacd1 */ LDATA extern char public_65cacd1; // OOB+0x0a0d
/* 0x065cacd2 */ LDATA extern char public_65cacd2; // OOB+0x0a0e
/* 0x065cacd3 */ LDATA extern char public_65cacd3; // OOB+0x0a0f
/* 0x065cacd4 */ LDATA extern char public_65cacd4; // OOB+0x0a10
/* 0x065cacd5 */ LDATA extern char public_65cacd5; // OOB+0x0a11
/* 0x065cacd6 */ LDATA extern char public_65cacd6; // OOB+0x0a12
/* 0x065cacd7 */ LDATA extern char public_65cacd7; // OOB+0x0a13
/* 0x065cacd8 */ LDATA extern char public_65cacd8; // OOB+0x0a14
/* 0x065cacd9 */ LDATA extern char public_65cacd9; // OOB+0x0a15
/* 0x065cacda */ LDATA extern char public_65cacda; // OOB+0x0a16
/* 0x065cacdb */ LDATA extern char public_65cacdb; // OOB+0x0a17
/* 0x065cacdc */ LDATA extern char public_65cacdc; // OOB+0x0a18
/* 0x065cacdd */ LDATA extern char public_65cacdd; // OOB+0x0a19
/* 0x065cacde */ LDATA extern char public_65cacde; // OOB+0x0a1a
/* 0x065cacdf */ LDATA extern char public_65cacdf; // OOB+0x0a1b
/* 0x065cace0 */ LDATA extern char public_65cace0; // OOB+0x0a1c
/* 0x065cace1 */ LDATA extern char public_65cace1; // OOB+0x0a1d
/* 0x065cace2 */ LDATA extern char public_65cace2; // OOB+0x0a1e
/* 0x065cace3 */ LDATA extern char public_65cace3; // OOB+0x0a1f
/* 0x065cace4 */ LDATA extern char public_65cace4; // OOB+0x0a20
/* 0x065cace5 */ LDATA extern char public_65cace5; // OOB+0x0a21
/* 0x065cace6 */ LDATA extern char public_65cace6; // OOB+0x0a22
/* 0x065cace7 */ LDATA extern char public_65cace7; // OOB+0x0a23
/* 0x065cace8 */ LDATA extern char public_65cace8; // OOB+0x0a24
/* 0x065cace9 */ LDATA extern char public_65cace9; // OOB+0x0a25
/* 0x065cacea */ LDATA extern char public_65cacea; // OOB+0x0a26
/* 0x065caceb */ LDATA extern char public_65caceb; // OOB+0x0a27
/* 0x065cacec */ LDATA extern char public_65cacec; // OOB+0x0a28
/* 0x065caced */ LDATA extern char public_65caced; // OOB+0x0a29
/* 0x065cacee */ LDATA extern char public_65cacee; // OOB+0x0a2a
/* 0x065cacef */ LDATA extern char public_65cacef; // OOB+0x0a2b
/* 0x065cacf0 */ LDATA extern char public_65cacf0; // OOB+0x0a2c
/* 0x065cacf1 */ LDATA extern char public_65cacf1; // OOB+0x0a2d
/* 0x065cacf2 */ LDATA extern char public_65cacf2; // OOB+0x0a2e
/* 0x065cacf3 */ LDATA extern char public_65cacf3; // OOB+0x0a2f
/* 0x065cacf4 */ LDATA extern char public_65cacf4; // OOB+0x0a30
/* 0x065cacf5 */ LDATA extern char public_65cacf5; // OOB+0x0a31
/* 0x065cacf6 */ LDATA extern char public_65cacf6; // OOB+0x0a32
/* 0x065cacf7 */ LDATA extern char public_65cacf7; // OOB+0x0a33
/* 0x065cacf8 */ LDATA extern char public_65cacf8; // OOB+0x0a34
/* 0x065cacf9 */ LDATA extern char public_65cacf9; // OOB+0x0a35
/* 0x065cacfa */ LDATA extern char public_65cacfa; // OOB+0x0a36
/* 0x065cacfb */ LDATA extern char public_65cacfb; // OOB+0x0a37
/* 0x065cacfc */ LDATA extern char public_65cacfc; // OOB+0x0a38
/* 0x065cacfd */ LDATA extern char public_65cacfd; // OOB+0x0a39
/* 0x065cacfe */ LDATA extern char public_65cacfe; // OOB+0x0a3a
/* 0x065cacff */ LDATA extern char public_65cacff; // OOB+0x0a3b
/* 0x065cad00 */ LDATA extern char public_65cad00; // OOB+0x0a3c
/* 0x065cad01 */ LDATA extern char public_65cad01; // OOB+0x0a3d
/* 0x065cad02 */ LDATA extern char public_65cad02; // OOB+0x0a3e
/* 0x065cad03 */ LDATA extern char public_65cad03; // OOB+0x0a3f
/* 0x065cad04 */ LDATA extern char public_65cad04; // OOB+0x0a40
/* 0x065cad05 */ LDATA extern char public_65cad05; // OOB+0x0a41
/* 0x065cad06 */ LDATA extern char public_65cad06; // OOB+0x0a42
/* 0x065cad07 */ LDATA extern char public_65cad07; // OOB+0x0a43
/* 0x065cad08 */ LDATA extern char public_65cad08; // OOB+0x0a44
/* 0x065cad09 */ LDATA extern char public_65cad09; // OOB+0x0a45
/* 0x065cad0a */ LDATA extern char public_65cad0a; // OOB+0x0a46
/* 0x065cad0b */ LDATA extern char public_65cad0b; // OOB+0x0a47
/* 0x065cad0c */ LDATA extern char public_65cad0c; // OOB+0x0a48
/* 0x065cad0d */ LDATA extern char public_65cad0d; // OOB+0x0a49
/* 0x065cad0e */ LDATA extern char public_65cad0e; // OOB+0x0a4a
/* 0x065cad0f */ LDATA extern char public_65cad0f; // OOB+0x0a4b
/* 0x065cad10 */ LDATA extern char public_65cad10; // OOB+0x0a4c
/* 0x065cad11 */ LDATA extern char public_65cad11; // OOB+0x0a4d
/* 0x065cad12 */ LDATA extern char public_65cad12; // OOB+0x0a4e
/* 0x065cad13 */ LDATA extern char public_65cad13; // OOB+0x0a4f
/* 0x065cad14 */ LDATA extern char public_65cad14; // OOB+0x0a50
/* 0x065cad15 */ LDATA extern char public_65cad15; // OOB+0x0a51
/* 0x065cad16 */ LDATA extern char public_65cad16; // OOB+0x0a52
/* 0x065cad17 */ LDATA extern char public_65cad17; // OOB+0x0a53
/* 0x065cad18 */ LDATA extern char public_65cad18; // OOB+0x0a54
/* 0x065cad19 */ LDATA extern char public_65cad19; // OOB+0x0a55
/* 0x065cad1a */ LDATA extern char public_65cad1a; // OOB+0x0a56
/* 0x065cad1b */ LDATA extern char public_65cad1b; // OOB+0x0a57
/* 0x065cad1c */ LDATA extern char public_65cad1c; // OOB+0x0a58
/* 0x065cad1d */ LDATA extern char public_65cad1d; // OOB+0x0a59
/* 0x065cad1e */ LDATA extern char public_65cad1e; // OOB+0x0a5a
/* 0x065cad1f */ LDATA extern char public_65cad1f; // OOB+0x0a5b
/* 0x065cad20 */ LDATA extern char public_65cad20; // OOB+0x0a5c
/* 0x065cad21 */ LDATA extern char public_65cad21; // OOB+0x0a5d
/* 0x065cad22 */ LDATA extern char public_65cad22; // OOB+0x0a5e
/* 0x065cad23 */ LDATA extern char public_65cad23; // OOB+0x0a5f
/* 0x065cad24 */ LDATA extern char public_65cad24; // OOB+0x0a60
/* 0x065cad25 */ LDATA extern char public_65cad25; // OOB+0x0a61
/* 0x065cad26 */ LDATA extern char public_65cad26; // OOB+0x0a62
/* 0x065cad27 */ LDATA extern char public_65cad27; // OOB+0x0a63
/* 0x065cad28 */ LDATA extern char public_65cad28; // OOB+0x0a64
/* 0x065cad29 */ LDATA extern char public_65cad29; // OOB+0x0a65
/* 0x065cad2a */ LDATA extern char public_65cad2a; // OOB+0x0a66
/* 0x065cad2b */ LDATA extern char public_65cad2b; // OOB+0x0a67
/* 0x065cad2c */ LDATA extern char public_65cad2c; // OOB+0x0a68
/* 0x065cad2d */ LDATA extern char public_65cad2d; // OOB+0x0a69
/* 0x065cad2e */ LDATA extern char public_65cad2e; // OOB+0x0a6a
/* 0x065cad2f */ LDATA extern char public_65cad2f; // OOB+0x0a6b
/* 0x065cad30 */ LDATA extern char public_65cad30; // OOB+0x0a6c
/* 0x065cad31 */ LDATA extern char public_65cad31; // OOB+0x0a6d
/* 0x065cad32 */ LDATA extern char public_65cad32; // OOB+0x0a6e
/* 0x065cad33 */ LDATA extern char public_65cad33; // OOB+0x0a6f
/* 0x065cad34 */ LDATA extern char public_65cad34; // OOB+0x0a70
/* 0x065cad35 */ LDATA extern char public_65cad35; // OOB+0x0a71
/* 0x065cad36 */ LDATA extern char public_65cad36; // OOB+0x0a72
/* 0x065cad37 */ LDATA extern char public_65cad37; // OOB+0x0a73
/* 0x065cad38 */ LDATA extern char public_65cad38; // OOB+0x0a74
/* 0x065cad39 */ LDATA extern char public_65cad39; // OOB+0x0a75
/* 0x065cad3a */ LDATA extern char public_65cad3a; // OOB+0x0a76
/* 0x065cad3b */ LDATA extern char public_65cad3b; // OOB+0x0a77
/* 0x065cad3c */ LDATA extern char public_65cad3c; // OOB+0x0a78
/* 0x065cad3d */ LDATA extern char public_65cad3d; // OOB+0x0a79
/* 0x065cad3e */ LDATA extern char public_65cad3e; // OOB+0x0a7a
/* 0x065cad3f */ LDATA extern char public_65cad3f; // OOB+0x0a7b
/* 0x065cad40 */ LDATA extern char public_65cad40; // OOB+0x0a7c
/* 0x065cad41 */ LDATA extern char public_65cad41; // OOB+0x0a7d
/* 0x065cad42 */ LDATA extern char public_65cad42; // OOB+0x0a7e
/* 0x065cad43 */ LDATA extern char public_65cad43; // OOB+0x0a7f
/* 0x065cad44 */ LDATA extern char public_65cad44; // OOB+0x0a80
/* 0x065cad45 */ LDATA extern char public_65cad45; // OOB+0x0a81
/* 0x065cad46 */ LDATA extern char public_65cad46; // OOB+0x0a82
/* 0x065cad47 */ LDATA extern char public_65cad47; // OOB+0x0a83
/* 0x065cad48 */ LDATA extern char public_65cad48; // OOB+0x0a84
/* 0x065cad49 */ LDATA extern char public_65cad49; // OOB+0x0a85
/* 0x065cad4a */ LDATA extern char public_65cad4a; // OOB+0x0a86
/* 0x065cad4b */ LDATA extern char public_65cad4b; // OOB+0x0a87
/* 0x065cad4c */ LDATA extern char public_65cad4c; // OOB+0x0a88
/* 0x065cad4d */ LDATA extern char public_65cad4d; // OOB+0x0a89
/* 0x065cad4e */ LDATA extern char public_65cad4e; // OOB+0x0a8a
/* 0x065cad4f */ LDATA extern char public_65cad4f; // OOB+0x0a8b
/* 0x065cad50 */ LDATA extern char public_65cad50; // OOB+0x0a8c
/* 0x065cad51 */ LDATA extern char public_65cad51; // OOB+0x0a8d
/* 0x065cad52 */ LDATA extern char public_65cad52; // OOB+0x0a8e
/* 0x065cad53 */ LDATA extern char public_65cad53; // OOB+0x0a8f
/* 0x065cad54 */ LDATA extern char public_65cad54; // OOB+0x0a90
/* 0x065cad55 */ LDATA extern char public_65cad55; // OOB+0x0a91
/* 0x065cad56 */ LDATA extern char public_65cad56; // OOB+0x0a92
/* 0x065cad57 */ LDATA extern char public_65cad57; // OOB+0x0a93
/* 0x065cad58 */ LDATA extern char public_65cad58; // OOB+0x0a94
/* 0x065cad59 */ LDATA extern char public_65cad59; // OOB+0x0a95
/* 0x065cad5a */ LDATA extern char public_65cad5a; // OOB+0x0a96
/* 0x065cad5b */ LDATA extern char public_65cad5b; // OOB+0x0a97
/* 0x065cad5c */ LDATA extern char public_65cad5c; // OOB+0x0a98
/* 0x065cad5d */ LDATA extern char public_65cad5d; // OOB+0x0a99
/* 0x065cad5e */ LDATA extern char public_65cad5e; // OOB+0x0a9a
/* 0x065cad5f */ LDATA extern char public_65cad5f; // OOB+0x0a9b
/* 0x065cad60 */ LDATA extern char public_65cad60; // OOB+0x0a9c
/* 0x065cad61 */ LDATA extern char public_65cad61; // OOB+0x0a9d
/* 0x065cad62 */ LDATA extern char public_65cad62; // OOB+0x0a9e
/* 0x065cad63 */ LDATA extern char public_65cad63; // OOB+0x0a9f
/* 0x065cad64 */ LDATA extern char public_65cad64; // OOB+0x0aa0
/* 0x065cad65 */ LDATA extern char public_65cad65; // OOB+0x0aa1
/* 0x065cad66 */ LDATA extern char public_65cad66; // OOB+0x0aa2
/* 0x065cad67 */ LDATA extern char public_65cad67; // OOB+0x0aa3
/* 0x065cad68 */ LDATA extern char public_65cad68; // OOB+0x0aa4
/* 0x065cad69 */ LDATA extern char public_65cad69; // OOB+0x0aa5
/* 0x065cad6a */ LDATA extern char public_65cad6a; // OOB+0x0aa6
/* 0x065cad6b */ LDATA extern char public_65cad6b; // OOB+0x0aa7
/* 0x065cad6c */ LDATA extern char public_65cad6c; // OOB+0x0aa8
/* 0x065cad6d */ LDATA extern char public_65cad6d; // OOB+0x0aa9
/* 0x065cad6e */ LDATA extern char public_65cad6e; // OOB+0x0aaa
/* 0x065cad6f */ LDATA extern char public_65cad6f; // OOB+0x0aab
/* 0x065cad70 */ LDATA extern char public_65cad70; // OOB+0x0aac
/* 0x065cad71 */ LDATA extern char public_65cad71; // OOB+0x0aad
/* 0x065cad72 */ LDATA extern char public_65cad72; // OOB+0x0aae
/* 0x065cad73 */ LDATA extern char public_65cad73; // OOB+0x0aaf
/* 0x065cad74 */ LDATA extern char public_65cad74; // OOB+0x0ab0
/* 0x065cad75 */ LDATA extern char public_65cad75; // OOB+0x0ab1
/* 0x065cad76 */ LDATA extern char public_65cad76; // OOB+0x0ab2
/* 0x065cad77 */ LDATA extern char public_65cad77; // OOB+0x0ab3
/* 0x065cad78 */ LDATA extern char public_65cad78; // OOB+0x0ab4
/* 0x065cad79 */ LDATA extern char public_65cad79; // OOB+0x0ab5
/* 0x065cad7a */ LDATA extern char public_65cad7a; // OOB+0x0ab6
/* 0x065cad7b */ LDATA extern char public_65cad7b; // OOB+0x0ab7
/* 0x065cad7c */ LDATA extern char public_65cad7c; // OOB+0x0ab8
/* 0x065cad7d */ LDATA extern char public_65cad7d; // OOB+0x0ab9
/* 0x065cad7e */ LDATA extern char public_65cad7e; // OOB+0x0aba
/* 0x065cad7f */ LDATA extern char public_65cad7f; // OOB+0x0abb
/* 0x065cad80 */ LDATA extern char public_65cad80; // OOB+0x0abc
/* 0x065cad81 */ LDATA extern char public_65cad81; // OOB+0x0abd
/* 0x065cad82 */ LDATA extern char public_65cad82; // OOB+0x0abe
/* 0x065cad83 */ LDATA extern char public_65cad83; // OOB+0x0abf
/* 0x065cad84 */ LDATA extern char public_65cad84; // OOB+0x0ac0
/* 0x065cad85 */ LDATA extern char public_65cad85; // OOB+0x0ac1
/* 0x065cad86 */ LDATA extern char public_65cad86; // OOB+0x0ac2
/* 0x065cad87 */ LDATA extern char public_65cad87; // OOB+0x0ac3
/* 0x065cad88 */ LDATA extern char public_65cad88; // OOB+0x0ac4
/* 0x065cad89 */ LDATA extern char public_65cad89; // OOB+0x0ac5
/* 0x065cad8a */ LDATA extern char public_65cad8a; // OOB+0x0ac6
/* 0x065cad8b */ LDATA extern char public_65cad8b; // OOB+0x0ac7
/* 0x065cad8c */ LDATA extern char public_65cad8c; // OOB+0x0ac8
/* 0x065cad8d */ LDATA extern char public_65cad8d; // OOB+0x0ac9
/* 0x065cad8e */ LDATA extern char public_65cad8e; // OOB+0x0aca
/* 0x065cad8f */ LDATA extern char public_65cad8f; // OOB+0x0acb
/* 0x065cad90 */ LDATA extern char public_65cad90; // OOB+0x0acc
/* 0x065cad91 */ LDATA extern char public_65cad91; // OOB+0x0acd
/* 0x065cad92 */ LDATA extern char public_65cad92; // OOB+0x0ace
/* 0x065cad93 */ LDATA extern char public_65cad93; // OOB+0x0acf
/* 0x065cad94 */ LDATA extern char public_65cad94; // OOB+0x0ad0
/* 0x065cad95 */ LDATA extern char public_65cad95; // OOB+0x0ad1
/* 0x065cad96 */ LDATA extern char public_65cad96; // OOB+0x0ad2
/* 0x065cad97 */ LDATA extern char public_65cad97; // OOB+0x0ad3
/* 0x065cad98 */ LDATA extern char public_65cad98; // OOB+0x0ad4
/* 0x065cad99 */ LDATA extern char public_65cad99; // OOB+0x0ad5
/* 0x065cad9a */ LDATA extern char public_65cad9a; // OOB+0x0ad6
/* 0x065cad9b */ LDATA extern char public_65cad9b; // OOB+0x0ad7
/* 0x065cad9c */ LDATA extern char public_65cad9c; // OOB+0x0ad8
/* 0x065cad9d */ LDATA extern char public_65cad9d; // OOB+0x0ad9
/* 0x065cad9e */ LDATA extern char public_65cad9e; // OOB+0x0ada
/* 0x065cad9f */ LDATA extern char public_65cad9f; // OOB+0x0adb
/* 0x065cada0 */ LDATA extern char public_65cada0; // OOB+0x0adc
/* 0x065cada1 */ LDATA extern char public_65cada1; // OOB+0x0add
/* 0x065cada2 */ LDATA extern char public_65cada2; // OOB+0x0ade
/* 0x065cada3 */ LDATA extern char public_65cada3; // OOB+0x0adf
/* 0x065cada4 */ LDATA extern char public_65cada4; // OOB+0x0ae0
/* 0x065cada5 */ LDATA extern char public_65cada5; // OOB+0x0ae1
/* 0x065cada6 */ LDATA extern char public_65cada6; // OOB+0x0ae2
/* 0x065cada7 */ LDATA extern char public_65cada7; // OOB+0x0ae3
/* 0x065cada8 */ LDATA extern char public_65cada8; // OOB+0x0ae4
/* 0x065cada9 */ LDATA extern char public_65cada9; // OOB+0x0ae5
/* 0x065cadaa */ LDATA extern char public_65cadaa; // OOB+0x0ae6
/* 0x065cadab */ LDATA extern char public_65cadab; // OOB+0x0ae7
/* 0x065cadac */ LDATA extern char public_65cadac; // OOB+0x0ae8
/* 0x065cadad */ LDATA extern char public_65cadad; // OOB+0x0ae9
/* 0x065cadae */ LDATA extern char public_65cadae; // OOB+0x0aea
/* 0x065cadaf */ LDATA extern char public_65cadaf; // OOB+0x0aeb
/* 0x065cadb0 */ LDATA extern char public_65cadb0; // OOB+0x0aec
/* 0x065cadb1 */ LDATA extern char public_65cadb1; // OOB+0x0aed
/* 0x065cadb2 */ LDATA extern char public_65cadb2; // OOB+0x0aee
/* 0x065cadb3 */ LDATA extern char public_65cadb3; // OOB+0x0aef
/* 0x065cadb4 */ LDATA extern char public_65cadb4; // OOB+0x0af0
/* 0x065cadb5 */ LDATA extern char public_65cadb5; // OOB+0x0af1
/* 0x065cadb6 */ LDATA extern char public_65cadb6; // OOB+0x0af2
/* 0x065cadb7 */ LDATA extern char public_65cadb7; // OOB+0x0af3
/* 0x065cadb8 */ LDATA extern char public_65cadb8; // OOB+0x0af4
/* 0x065cadb9 */ LDATA extern char public_65cadb9; // OOB+0x0af5
/* 0x065cadba */ LDATA extern char public_65cadba; // OOB+0x0af6
/* 0x065cadbb */ LDATA extern char public_65cadbb; // OOB+0x0af7
/* 0x065cadbc */ LDATA extern char public_65cadbc; // OOB+0x0af8
/* 0x065cadbd */ LDATA extern char public_65cadbd; // OOB+0x0af9
/* 0x065cadbe */ LDATA extern char public_65cadbe; // OOB+0x0afa
/* 0x065cadbf */ LDATA extern char public_65cadbf; // OOB+0x0afb
/* 0x065cadc0 */ LDATA extern char public_65cadc0; // OOB+0x0afc
/* 0x065cadc1 */ LDATA extern char public_65cadc1; // OOB+0x0afd
/* 0x065cadc2 */ LDATA extern char public_65cadc2; // OOB+0x0afe
/* 0x065cadc3 */ LDATA extern char public_65cadc3; // OOB+0x0aff
/* 0x065cadc4 */ LDATA extern char public_65cadc4; // OOB+0x0b00
/* 0x065cadc5 */ LDATA extern char public_65cadc5; // OOB+0x0b01
/* 0x065cadc6 */ LDATA extern char public_65cadc6; // OOB+0x0b02
/* 0x065cadc7 */ LDATA extern char public_65cadc7; // OOB+0x0b03
/* 0x065cadc8 */ LDATA extern char public_65cadc8; // OOB+0x0b04
/* 0x065cadc9 */ LDATA extern char public_65cadc9; // OOB+0x0b05
/* 0x065cadca */ LDATA extern char public_65cadca; // OOB+0x0b06
/* 0x065cadcb */ LDATA extern char public_65cadcb; // OOB+0x0b07
/* 0x065cadcc */ LDATA extern char public_65cadcc; // OOB+0x0b08
/* 0x065cadcd */ LDATA extern char public_65cadcd; // OOB+0x0b09
/* 0x065cadce */ LDATA extern char public_65cadce; // OOB+0x0b0a
/* 0x065cadcf */ LDATA extern char public_65cadcf; // OOB+0x0b0b
/* 0x065cadd0 */ LDATA extern char public_65cadd0; // OOB+0x0b0c
/* 0x065cadd1 */ LDATA extern char public_65cadd1; // OOB+0x0b0d
/* 0x065cadd2 */ LDATA extern char public_65cadd2; // OOB+0x0b0e
/* 0x065cadd3 */ LDATA extern char public_65cadd3; // OOB+0x0b0f
/* 0x065cadd4 */ LDATA extern char public_65cadd4; // OOB+0x0b10
/* 0x065cadd5 */ LDATA extern char public_65cadd5; // OOB+0x0b11
/* 0x065cadd6 */ LDATA extern char public_65cadd6; // OOB+0x0b12
/* 0x065cadd7 */ LDATA extern char public_65cadd7; // OOB+0x0b13
/* 0x065cadd8 */ LDATA extern char public_65cadd8; // OOB+0x0b14
/* 0x065cadd9 */ LDATA extern char public_65cadd9; // OOB+0x0b15
/* 0x065cadda */ LDATA extern char public_65cadda; // OOB+0x0b16
/* 0x065caddb */ LDATA extern char public_65caddb; // OOB+0x0b17
/* 0x065caddc */ LDATA extern char public_65caddc; // OOB+0x0b18
/* 0x065caddd */ LDATA extern char public_65caddd; // OOB+0x0b19
/* 0x065cadde */ LDATA extern char public_65cadde; // OOB+0x0b1a
/* 0x065caddf */ LDATA extern char public_65caddf; // OOB+0x0b1b
/* 0x065cade0 */ LDATA extern char public_65cade0; // OOB+0x0b1c
/* 0x065cade1 */ LDATA extern char public_65cade1; // OOB+0x0b1d
/* 0x065cade2 */ LDATA extern char public_65cade2; // OOB+0x0b1e
/* 0x065cade3 */ LDATA extern char public_65cade3; // OOB+0x0b1f
/* 0x065cade4 */ LDATA extern char public_65cade4; // OOB+0x0b20
/* 0x065cade5 */ LDATA extern char public_65cade5; // OOB+0x0b21
/* 0x065cade6 */ LDATA extern char public_65cade6; // OOB+0x0b22
/* 0x065cade7 */ LDATA extern char public_65cade7; // OOB+0x0b23
/* 0x065cade8 */ LDATA extern char public_65cade8; // OOB+0x0b24
/* 0x065cade9 */ LDATA extern char public_65cade9; // OOB+0x0b25
/* 0x065cadea */ LDATA extern char public_65cadea; // OOB+0x0b26
/* 0x065cadeb */ LDATA extern char public_65cadeb; // OOB+0x0b27
/* 0x065cadec */ LDATA extern char public_65cadec; // OOB+0x0b28
/* 0x065caded */ LDATA extern char public_65caded; // OOB+0x0b29
/* 0x065cadee */ LDATA extern char public_65cadee; // OOB+0x0b2a
/* 0x065cadef */ LDATA extern char public_65cadef; // OOB+0x0b2b
/* 0x065cadf0 */ LDATA extern char public_65cadf0; // OOB+0x0b2c
/* 0x065cadf1 */ LDATA extern char public_65cadf1; // OOB+0x0b2d
/* 0x065cadf2 */ LDATA extern char public_65cadf2; // OOB+0x0b2e
/* 0x065cadf3 */ LDATA extern char public_65cadf3; // OOB+0x0b2f
/* 0x065cadf4 */ LDATA extern char public_65cadf4; // OOB+0x0b30
/* 0x065cadf5 */ LDATA extern char public_65cadf5; // OOB+0x0b31
/* 0x065cadf6 */ LDATA extern char public_65cadf6; // OOB+0x0b32
/* 0x065cadf7 */ LDATA extern char public_65cadf7; // OOB+0x0b33
/* 0x065cadf8 */ LDATA extern char public_65cadf8; // OOB+0x0b34
/* 0x065cadf9 */ LDATA extern char public_65cadf9; // OOB+0x0b35
/* 0x065cadfa */ LDATA extern char public_65cadfa; // OOB+0x0b36
/* 0x065cadfb */ LDATA extern char public_65cadfb; // OOB+0x0b37
/* 0x065cadfc */ LDATA extern char public_65cadfc; // OOB+0x0b38
/* 0x065cadfd */ LDATA extern char public_65cadfd; // OOB+0x0b39
/* 0x065cadfe */ LDATA extern char public_65cadfe; // OOB+0x0b3a
/* 0x065cadff */ LDATA extern char public_65cadff; // OOB+0x0b3b
/* 0x065cae00 */ LDATA extern char public_65cae00; // OOB+0x0b3c
/* 0x065cae01 */ LDATA extern char public_65cae01; // OOB+0x0b3d
/* 0x065cae02 */ LDATA extern char public_65cae02; // OOB+0x0b3e
/* 0x065cae03 */ LDATA extern char public_65cae03; // OOB+0x0b3f
/* 0x065cae04 */ LDATA extern char public_65cae04; // OOB+0x0b40
/* 0x065cae05 */ LDATA extern char public_65cae05; // OOB+0x0b41
/* 0x065cae06 */ LDATA extern char public_65cae06; // OOB+0x0b42
/* 0x065cae07 */ LDATA extern char public_65cae07; // OOB+0x0b43
/* 0x065cae08 */ LDATA extern char public_65cae08; // OOB+0x0b44
/* 0x065cae09 */ LDATA extern char public_65cae09; // OOB+0x0b45
/* 0x065cae0a */ LDATA extern char public_65cae0a; // OOB+0x0b46
/* 0x065cae0b */ LDATA extern char public_65cae0b; // OOB+0x0b47
/* 0x065cae0c */ LDATA extern char public_65cae0c; // OOB+0x0b48
/* 0x065cae0d */ LDATA extern char public_65cae0d; // OOB+0x0b49
/* 0x065cae0e */ LDATA extern char public_65cae0e; // OOB+0x0b4a
/* 0x065cae0f */ LDATA extern char public_65cae0f; // OOB+0x0b4b
/* 0x065cae10 */ LDATA extern char public_65cae10; // OOB+0x0b4c
/* 0x065cae11 */ LDATA extern char public_65cae11; // OOB+0x0b4d
/* 0x065cae12 */ LDATA extern char public_65cae12; // OOB+0x0b4e
/* 0x065cae13 */ LDATA extern char public_65cae13; // OOB+0x0b4f
/* 0x065cae14 */ LDATA extern char public_65cae14; // OOB+0x0b50
/* 0x065cae15 */ LDATA extern char public_65cae15; // OOB+0x0b51
/* 0x065cae16 */ LDATA extern char public_65cae16; // OOB+0x0b52
/* 0x065cae17 */ LDATA extern char public_65cae17; // OOB+0x0b53
/* 0x065cae18 */ LDATA extern char public_65cae18; // OOB+0x0b54
/* 0x065cae19 */ LDATA extern char public_65cae19; // OOB+0x0b55
/* 0x065cae1a */ LDATA extern char public_65cae1a; // OOB+0x0b56
/* 0x065cae1b */ LDATA extern char public_65cae1b; // OOB+0x0b57
/* 0x065cae1c */ LDATA extern char public_65cae1c; // OOB+0x0b58
/* 0x065cae1d */ LDATA extern char public_65cae1d; // OOB+0x0b59
/* 0x065cae1e */ LDATA extern char public_65cae1e; // OOB+0x0b5a
/* 0x065cae1f */ LDATA extern char public_65cae1f; // OOB+0x0b5b
/* 0x065cae20 */ LDATA extern char public_65cae20; // OOB+0x0b5c
/* 0x065cae21 */ LDATA extern char public_65cae21; // OOB+0x0b5d
/* 0x065cae22 */ LDATA extern char public_65cae22; // OOB+0x0b5e
/* 0x065cae23 */ LDATA extern char public_65cae23; // OOB+0x0b5f
/* 0x065cae24 */ LDATA extern char public_65cae24; // OOB+0x0b60
/* 0x065cae25 */ LDATA extern char public_65cae25; // OOB+0x0b61
/* 0x065cae26 */ LDATA extern char public_65cae26; // OOB+0x0b62
/* 0x065cae27 */ LDATA extern char public_65cae27; // OOB+0x0b63
/* 0x065cae28 */ LDATA extern char public_65cae28; // OOB+0x0b64
/* 0x065cae29 */ LDATA extern char public_65cae29; // OOB+0x0b65
/* 0x065cae2a */ LDATA extern char public_65cae2a; // OOB+0x0b66
/* 0x065cae2b */ LDATA extern char public_65cae2b; // OOB+0x0b67
/* 0x065cae2c */ LDATA extern char public_65cae2c; // OOB+0x0b68
/* 0x065cae2d */ LDATA extern char public_65cae2d; // OOB+0x0b69
/* 0x065cae2e */ LDATA extern char public_65cae2e; // OOB+0x0b6a
/* 0x065cae2f */ LDATA extern char public_65cae2f; // OOB+0x0b6b
/* 0x065cae30 */ LDATA extern char public_65cae30; // OOB+0x0b6c
/* 0x065cae31 */ LDATA extern char public_65cae31; // OOB+0x0b6d
/* 0x065cae32 */ LDATA extern char public_65cae32; // OOB+0x0b6e
/* 0x065cae33 */ LDATA extern char public_65cae33; // OOB+0x0b6f
/* 0x065cae34 */ LDATA extern char public_65cae34; // OOB+0x0b70
/* 0x065cae35 */ LDATA extern char public_65cae35; // OOB+0x0b71
/* 0x065cae36 */ LDATA extern char public_65cae36; // OOB+0x0b72
/* 0x065cae37 */ LDATA extern char public_65cae37; // OOB+0x0b73
/* 0x065cae38 */ LDATA extern char public_65cae38; // OOB+0x0b74
/* 0x065cae39 */ LDATA extern char public_65cae39; // OOB+0x0b75
/* 0x065cae3a */ LDATA extern char public_65cae3a; // OOB+0x0b76
/* 0x065cae3b */ LDATA extern char public_65cae3b; // OOB+0x0b77
/* 0x065cae3c */ LDATA extern char public_65cae3c; // OOB+0x0b78
/* 0x065cae3d */ LDATA extern char public_65cae3d; // OOB+0x0b79
/* 0x065cae3e */ LDATA extern char public_65cae3e; // OOB+0x0b7a
/* 0x065cae3f */ LDATA extern char public_65cae3f; // OOB+0x0b7b
/* 0x065cae40 */ LDATA extern char public_65cae40; // OOB+0x0b7c
/* 0x065cae41 */ LDATA extern char public_65cae41; // OOB+0x0b7d
/* 0x065cae42 */ LDATA extern char public_65cae42; // OOB+0x0b7e
/* 0x065cae43 */ LDATA extern char public_65cae43; // OOB+0x0b7f
/* 0x065cae44 */ LDATA extern char public_65cae44; // OOB+0x0b80
/* 0x065cae45 */ LDATA extern char public_65cae45; // OOB+0x0b81
/* 0x065cae46 */ LDATA extern char public_65cae46; // OOB+0x0b82
/* 0x065cae47 */ LDATA extern char public_65cae47; // OOB+0x0b83
/* 0x065cae48 */ LDATA extern char public_65cae48; // OOB+0x0b84
/* 0x065cae49 */ LDATA extern char public_65cae49; // OOB+0x0b85
/* 0x065cae4a */ LDATA extern char public_65cae4a; // OOB+0x0b86
/* 0x065cae4b */ LDATA extern char public_65cae4b; // OOB+0x0b87
/* 0x065cae4c */ LDATA extern char public_65cae4c; // OOB+0x0b88
/* 0x065cae4d */ LDATA extern char public_65cae4d; // OOB+0x0b89
/* 0x065cae4e */ LDATA extern char public_65cae4e; // OOB+0x0b8a
/* 0x065cae4f */ LDATA extern char public_65cae4f; // OOB+0x0b8b
/* 0x065cae50 */ LDATA extern char public_65cae50; // OOB+0x0b8c
/* 0x065cae51 */ LDATA extern char public_65cae51; // OOB+0x0b8d
/* 0x065cae52 */ LDATA extern char public_65cae52; // OOB+0x0b8e
/* 0x065cae53 */ LDATA extern char public_65cae53; // OOB+0x0b8f
/* 0x065cae54 */ LDATA extern char public_65cae54; // OOB+0x0b90
/* 0x065cae55 */ LDATA extern char public_65cae55; // OOB+0x0b91
/* 0x065cae56 */ LDATA extern char public_65cae56; // OOB+0x0b92
/* 0x065cae57 */ LDATA extern char public_65cae57; // OOB+0x0b93
/* 0x065cae58 */ LDATA extern char public_65cae58; // OOB+0x0b94
/* 0x065cae59 */ LDATA extern char public_65cae59; // OOB+0x0b95
/* 0x065cae5a */ LDATA extern char public_65cae5a; // OOB+0x0b96
/* 0x065cae5b */ LDATA extern char public_65cae5b; // OOB+0x0b97
/* 0x065cae5c */ LDATA extern char public_65cae5c; // OOB+0x0b98
/* 0x065cae5d */ LDATA extern char public_65cae5d; // OOB+0x0b99
/* 0x065cae5e */ LDATA extern char public_65cae5e; // OOB+0x0b9a
/* 0x065cae5f */ LDATA extern char public_65cae5f; // OOB+0x0b9b
/* 0x065cae60 */ LDATA extern char public_65cae60; // OOB+0x0b9c
/* 0x065cae61 */ LDATA extern char public_65cae61; // OOB+0x0b9d
/* 0x065cae62 */ LDATA extern char public_65cae62; // OOB+0x0b9e
/* 0x065cae63 */ LDATA extern char public_65cae63; // OOB+0x0b9f
/* 0x065cae64 */ LDATA extern char public_65cae64; // OOB+0x0ba0
/* 0x065cae65 */ LDATA extern char public_65cae65; // OOB+0x0ba1
/* 0x065cae66 */ LDATA extern char public_65cae66; // OOB+0x0ba2
/* 0x065cae67 */ LDATA extern char public_65cae67; // OOB+0x0ba3
/* 0x065cae68 */ LDATA extern char public_65cae68; // OOB+0x0ba4
/* 0x065cae69 */ LDATA extern char public_65cae69; // OOB+0x0ba5
/* 0x065cae6a */ LDATA extern char public_65cae6a; // OOB+0x0ba6
/* 0x065cae6b */ LDATA extern char public_65cae6b; // OOB+0x0ba7
/* 0x065cae6c */ LDATA extern char public_65cae6c; // OOB+0x0ba8
/* 0x065cae6d */ LDATA extern char public_65cae6d; // OOB+0x0ba9
/* 0x065cae6e */ LDATA extern char public_65cae6e; // OOB+0x0baa
/* 0x065cae6f */ LDATA extern char public_65cae6f; // OOB+0x0bab
/* 0x065cae70 */ LDATA extern char public_65cae70; // OOB+0x0bac
/* 0x065cae71 */ LDATA extern char public_65cae71; // OOB+0x0bad
/* 0x065cae72 */ LDATA extern char public_65cae72; // OOB+0x0bae
/* 0x065cae73 */ LDATA extern char public_65cae73; // OOB+0x0baf
/* 0x065cae74 */ LDATA extern char public_65cae74; // OOB+0x0bb0
/* 0x065cae75 */ LDATA extern char public_65cae75; // OOB+0x0bb1
/* 0x065cae76 */ LDATA extern char public_65cae76; // OOB+0x0bb2
/* 0x065cae77 */ LDATA extern char public_65cae77; // OOB+0x0bb3
/* 0x065cae78 */ LDATA extern char public_65cae78; // OOB+0x0bb4
/* 0x065cae79 */ LDATA extern char public_65cae79; // OOB+0x0bb5
/* 0x065cae7a */ LDATA extern char public_65cae7a; // OOB+0x0bb6
/* 0x065cae7b */ LDATA extern char public_65cae7b; // OOB+0x0bb7
/* 0x065cae7c */ LDATA extern char public_65cae7c; // OOB+0x0bb8
/* 0x065cae7d */ LDATA extern char public_65cae7d; // OOB+0x0bb9
/* 0x065cae7e */ LDATA extern char public_65cae7e; // OOB+0x0bba
/* 0x065cae7f */ LDATA extern char public_65cae7f; // OOB+0x0bbb
/* 0x065cae80 */ LDATA extern char public_65cae80; // OOB+0x0bbc
/* 0x065cae81 */ LDATA extern char public_65cae81; // OOB+0x0bbd
/* 0x065cae82 */ LDATA extern char public_65cae82; // OOB+0x0bbe
/* 0x065cae83 */ LDATA extern char public_65cae83; // OOB+0x0bbf
/* 0x065cae84 */ LDATA extern char public_65cae84; // OOB+0x0bc0
/* 0x065cae85 */ LDATA extern char public_65cae85; // OOB+0x0bc1
/* 0x065cae86 */ LDATA extern char public_65cae86; // OOB+0x0bc2
/* 0x065cae87 */ LDATA extern char public_65cae87; // OOB+0x0bc3
/* 0x065cae88 */ LDATA extern char public_65cae88; // OOB+0x0bc4
/* 0x065cae89 */ LDATA extern char public_65cae89; // OOB+0x0bc5
/* 0x065cae8a */ LDATA extern char public_65cae8a; // OOB+0x0bc6
/* 0x065cae8b */ LDATA extern char public_65cae8b; // OOB+0x0bc7
/* 0x065cae8c */ LDATA extern char public_65cae8c; // OOB+0x0bc8
/* 0x065cae8d */ LDATA extern char public_65cae8d; // OOB+0x0bc9
/* 0x065cae8e */ LDATA extern char public_65cae8e; // OOB+0x0bca
/* 0x065cae8f */ LDATA extern char public_65cae8f; // OOB+0x0bcb
/* 0x065cae90 */ LDATA extern char public_65cae90; // OOB+0x0bcc
/* 0x065cae91 */ LDATA extern char public_65cae91; // OOB+0x0bcd
/* 0x065cae92 */ LDATA extern char public_65cae92; // OOB+0x0bce
/* 0x065cae93 */ LDATA extern char public_65cae93; // OOB+0x0bcf
/* 0x065cae94 */ LDATA extern char public_65cae94; // OOB+0x0bd0
/* 0x065cae95 */ LDATA extern char public_65cae95; // OOB+0x0bd1
/* 0x065cae96 */ LDATA extern char public_65cae96; // OOB+0x0bd2
/* 0x065cae97 */ LDATA extern char public_65cae97; // OOB+0x0bd3
/* 0x065cae98 */ LDATA extern char public_65cae98; // OOB+0x0bd4
/* 0x065cae99 */ LDATA extern char public_65cae99; // OOB+0x0bd5
/* 0x065cae9a */ LDATA extern char public_65cae9a; // OOB+0x0bd6
/* 0x065cae9b */ LDATA extern char public_65cae9b; // OOB+0x0bd7
/* 0x065cae9c */ LDATA extern char public_65cae9c; // OOB+0x0bd8
/* 0x065cae9d */ LDATA extern char public_65cae9d; // OOB+0x0bd9
/* 0x065cae9e */ LDATA extern char public_65cae9e; // OOB+0x0bda
/* 0x065cae9f */ LDATA extern char public_65cae9f; // OOB+0x0bdb
/* 0x065caea0 */ LDATA extern char public_65caea0; // OOB+0x0bdc
/* 0x065caea1 */ LDATA extern char public_65caea1; // OOB+0x0bdd
/* 0x065caea2 */ LDATA extern char public_65caea2; // OOB+0x0bde
/* 0x065caea3 */ LDATA extern char public_65caea3; // OOB+0x0bdf
/* 0x065caea4 */ LDATA extern char public_65caea4; // OOB+0x0be0
/* 0x065caea5 */ LDATA extern char public_65caea5; // OOB+0x0be1
/* 0x065caea6 */ LDATA extern char public_65caea6; // OOB+0x0be2
/* 0x065caea7 */ LDATA extern char public_65caea7; // OOB+0x0be3
/* 0x065caea8 */ LDATA extern char public_65caea8; // OOB+0x0be4
/* 0x065caea9 */ LDATA extern char public_65caea9; // OOB+0x0be5
/* 0x065caeaa */ LDATA extern char public_65caeaa; // OOB+0x0be6
/* 0x065caeab */ LDATA extern char public_65caeab; // OOB+0x0be7
/* 0x065caeac */ LDATA extern char public_65caeac; // OOB+0x0be8
/* 0x065caead */ LDATA extern char public_65caead; // OOB+0x0be9
/* 0x065caeae */ LDATA extern char public_65caeae; // OOB+0x0bea
/* 0x065caeaf */ LDATA extern char public_65caeaf; // OOB+0x0beb
/* 0x065caeb0 */ LDATA extern char public_65caeb0; // OOB+0x0bec
/* 0x065caeb1 */ LDATA extern char public_65caeb1; // OOB+0x0bed
/* 0x065caeb2 */ LDATA extern char public_65caeb2; // OOB+0x0bee
/* 0x065caeb3 */ LDATA extern char public_65caeb3; // OOB+0x0bef
/* 0x065caeb4 */ LDATA extern char public_65caeb4; // OOB+0x0bf0
/* 0x065caeb5 */ LDATA extern char public_65caeb5; // OOB+0x0bf1
/* 0x065caeb6 */ LDATA extern char public_65caeb6; // OOB+0x0bf2
/* 0x065caeb7 */ LDATA extern char public_65caeb7; // OOB+0x0bf3
/* 0x065caeb8 */ LDATA extern char public_65caeb8; // OOB+0x0bf4
/* 0x065caeb9 */ LDATA extern char public_65caeb9; // OOB+0x0bf5
/* 0x065caeba */ LDATA extern char public_65caeba; // OOB+0x0bf6
/* 0x065caebb */ LDATA extern char public_65caebb; // OOB+0x0bf7
/* 0x065caebc */ LDATA extern char public_65caebc; // OOB+0x0bf8
/* 0x065caebd */ LDATA extern char public_65caebd; // OOB+0x0bf9
/* 0x065caebe */ LDATA extern char public_65caebe; // OOB+0x0bfa
/* 0x065caebf */ LDATA extern char public_65caebf; // OOB+0x0bfb
/* 0x065caec0 */ LDATA extern char public_65caec0; // OOB+0x0bfc
/* 0x065caec1 */ LDATA extern char public_65caec1; // OOB+0x0bfd
/* 0x065caec2 */ LDATA extern char public_65caec2; // OOB+0x0bfe
/* 0x065caec3 */ LDATA extern char public_65caec3; // OOB+0x0bff
/* 0x065caec4 */ LDATA extern char public_65caec4; // OOB+0x0c00
/* 0x065caec5 */ LDATA extern char public_65caec5; // OOB+0x0c01
/* 0x065caec6 */ LDATA extern char public_65caec6; // OOB+0x0c02
/* 0x065caec7 */ LDATA extern char public_65caec7; // OOB+0x0c03
/* 0x065caec8 */ LDATA extern char public_65caec8; // OOB+0x0c04
/* 0x065caec9 */ LDATA extern char public_65caec9; // OOB+0x0c05
/* 0x065caeca */ LDATA extern char public_65caeca; // OOB+0x0c06
/* 0x065caecb */ LDATA extern char public_65caecb; // OOB+0x0c07
/* 0x065caecc */ LDATA extern char public_65caecc; // OOB+0x0c08
/* 0x065caecd */ LDATA extern char public_65caecd; // OOB+0x0c09
/* 0x065caece */ LDATA extern char public_65caece; // OOB+0x0c0a
/* 0x065caecf */ LDATA extern char public_65caecf; // OOB+0x0c0b
/* 0x065caed0 */ LDATA extern char public_65caed0; // OOB+0x0c0c
/* 0x065caed1 */ LDATA extern char public_65caed1; // OOB+0x0c0d
/* 0x065caed2 */ LDATA extern char public_65caed2; // OOB+0x0c0e
/* 0x065caed3 */ LDATA extern char public_65caed3; // OOB+0x0c0f
/* 0x065caed4 */ LDATA extern char public_65caed4; // OOB+0x0c10
/* 0x065caed5 */ LDATA extern char public_65caed5; // OOB+0x0c11
/* 0x065caed6 */ LDATA extern char public_65caed6; // OOB+0x0c12
/* 0x065caed7 */ LDATA extern char public_65caed7; // OOB+0x0c13
/* 0x065caed8 */ LDATA extern char public_65caed8; // OOB+0x0c14
/* 0x065caed9 */ LDATA extern char public_65caed9; // OOB+0x0c15
/* 0x065caeda */ LDATA extern char public_65caeda; // OOB+0x0c16
/* 0x065caedb */ LDATA extern char public_65caedb; // OOB+0x0c17
/* 0x065caedc */ LDATA extern char public_65caedc; // OOB+0x0c18
/* 0x065caedd */ LDATA extern char public_65caedd; // OOB+0x0c19
/* 0x065caede */ LDATA extern char public_65caede; // OOB+0x0c1a
/* 0x065caedf */ LDATA extern char public_65caedf; // OOB+0x0c1b
/* 0x065caee0 */ LDATA extern char public_65caee0; // OOB+0x0c1c
/* 0x065caee1 */ LDATA extern char public_65caee1; // OOB+0x0c1d
/* 0x065caee2 */ LDATA extern char public_65caee2; // OOB+0x0c1e
/* 0x065caee3 */ LDATA extern char public_65caee3; // OOB+0x0c1f
/* 0x065caee4 */ LDATA extern char public_65caee4; // OOB+0x0c20
/* 0x065caee5 */ LDATA extern char public_65caee5; // OOB+0x0c21
/* 0x065caee6 */ LDATA extern char public_65caee6; // OOB+0x0c22
/* 0x065caee7 */ LDATA extern char public_65caee7; // OOB+0x0c23
/* 0x065caee8 */ LDATA extern char public_65caee8; // OOB+0x0c24
/* 0x065caee9 */ LDATA extern char public_65caee9; // OOB+0x0c25
/* 0x065caeea */ LDATA extern char public_65caeea; // OOB+0x0c26
/* 0x065caeeb */ LDATA extern char public_65caeeb; // OOB+0x0c27
/* 0x065caeec */ LDATA extern char public_65caeec; // OOB+0x0c28
/* 0x065caeed */ LDATA extern char public_65caeed; // OOB+0x0c29
/* 0x065caeee */ LDATA extern char public_65caeee; // OOB+0x0c2a
/* 0x065caeef */ LDATA extern char public_65caeef; // OOB+0x0c2b
/* 0x065caef0 */ LDATA extern char public_65caef0; // OOB+0x0c2c
/* 0x065caef1 */ LDATA extern char public_65caef1; // OOB+0x0c2d
/* 0x065caef2 */ LDATA extern char public_65caef2; // OOB+0x0c2e
/* 0x065caef3 */ LDATA extern char public_65caef3; // OOB+0x0c2f
/* 0x065caef4 */ LDATA extern char public_65caef4; // OOB+0x0c30
/* 0x065caef5 */ LDATA extern char public_65caef5; // OOB+0x0c31
/* 0x065caef6 */ LDATA extern char public_65caef6; // OOB+0x0c32
/* 0x065caef7 */ LDATA extern char public_65caef7; // OOB+0x0c33
/* 0x065caef8 */ LDATA extern char public_65caef8; // OOB+0x0c34
/* 0x065caef9 */ LDATA extern char public_65caef9; // OOB+0x0c35
/* 0x065caefa */ LDATA extern char public_65caefa; // OOB+0x0c36
/* 0x065caefb */ LDATA extern char public_65caefb; // OOB+0x0c37
/* 0x065caefc */ LDATA extern char public_65caefc; // OOB+0x0c38
/* 0x065caefd */ LDATA extern char public_65caefd; // OOB+0x0c39
/* 0x065caefe */ LDATA extern char public_65caefe; // OOB+0x0c3a
/* 0x065caeff */ LDATA extern char public_65caeff; // OOB+0x0c3b
/* 0x065caf00 */ LDATA extern char public_65caf00; // OOB+0x0c3c
/* 0x065caf01 */ LDATA extern char public_65caf01; // OOB+0x0c3d
/* 0x065caf02 */ LDATA extern char public_65caf02; // OOB+0x0c3e
/* 0x065caf03 */ LDATA extern char public_65caf03; // OOB+0x0c3f
/* 0x065caf04 */ LDATA extern char public_65caf04; // OOB+0x0c40
/* 0x065caf05 */ LDATA extern char public_65caf05; // OOB+0x0c41
/* 0x065caf06 */ LDATA extern char public_65caf06; // OOB+0x0c42
/* 0x065caf07 */ LDATA extern char public_65caf07; // OOB+0x0c43
/* 0x065caf08 */ LDATA extern char public_65caf08; // OOB+0x0c44
/* 0x065caf09 */ LDATA extern char public_65caf09; // OOB+0x0c45
/* 0x065caf0a */ LDATA extern char public_65caf0a; // OOB+0x0c46
/* 0x065caf0b */ LDATA extern char public_65caf0b; // OOB+0x0c47
/* 0x065caf0c */ LDATA extern char public_65caf0c; // OOB+0x0c48
/* 0x065caf0d */ LDATA extern char public_65caf0d; // OOB+0x0c49
/* 0x065caf0e */ LDATA extern char public_65caf0e; // OOB+0x0c4a
/* 0x065caf0f */ LDATA extern char public_65caf0f; // OOB+0x0c4b
/* 0x065caf10 */ LDATA extern char public_65caf10; // OOB+0x0c4c
/* 0x065caf11 */ LDATA extern char public_65caf11; // OOB+0x0c4d
/* 0x065caf12 */ LDATA extern char public_65caf12; // OOB+0x0c4e
/* 0x065caf13 */ LDATA extern char public_65caf13; // OOB+0x0c4f
/* 0x065caf14 */ LDATA extern char public_65caf14; // OOB+0x0c50
/* 0x065caf15 */ LDATA extern char public_65caf15; // OOB+0x0c51
/* 0x065caf16 */ LDATA extern char public_65caf16; // OOB+0x0c52
/* 0x065caf17 */ LDATA extern char public_65caf17; // OOB+0x0c53
/* 0x065caf18 */ LDATA extern char public_65caf18; // OOB+0x0c54
/* 0x065caf19 */ LDATA extern char public_65caf19; // OOB+0x0c55
/* 0x065caf1a */ LDATA extern char public_65caf1a; // OOB+0x0c56
/* 0x065caf1b */ LDATA extern char public_65caf1b; // OOB+0x0c57
/* 0x065caf1c */ LDATA extern char public_65caf1c; // OOB+0x0c58
/* 0x065caf1d */ LDATA extern char public_65caf1d; // OOB+0x0c59
/* 0x065caf1e */ LDATA extern char public_65caf1e; // OOB+0x0c5a
/* 0x065caf1f */ LDATA extern char public_65caf1f; // OOB+0x0c5b
/* 0x065caf20 */ LDATA extern char public_65caf20; // OOB+0x0c5c
/* 0x065caf21 */ LDATA extern char public_65caf21; // OOB+0x0c5d
/* 0x065caf22 */ LDATA extern char public_65caf22; // OOB+0x0c5e
/* 0x065caf23 */ LDATA extern char public_65caf23; // OOB+0x0c5f
/* 0x065caf24 */ LDATA extern char public_65caf24; // OOB+0x0c60
/* 0x065caf25 */ LDATA extern char public_65caf25; // OOB+0x0c61
/* 0x065caf26 */ LDATA extern char public_65caf26; // OOB+0x0c62
/* 0x065caf27 */ LDATA extern char public_65caf27; // OOB+0x0c63
/* 0x065caf28 */ LDATA extern char public_65caf28; // OOB+0x0c64
/* 0x065caf29 */ LDATA extern char public_65caf29; // OOB+0x0c65
/* 0x065caf2a */ LDATA extern char public_65caf2a; // OOB+0x0c66
/* 0x065caf2b */ LDATA extern char public_65caf2b; // OOB+0x0c67
/* 0x065caf2c */ LDATA extern char public_65caf2c; // OOB+0x0c68
/* 0x065caf2d */ LDATA extern char public_65caf2d; // OOB+0x0c69
/* 0x065caf2e */ LDATA extern char public_65caf2e; // OOB+0x0c6a
/* 0x065caf2f */ LDATA extern char public_65caf2f; // OOB+0x0c6b
/* 0x065caf30 */ LDATA extern char public_65caf30; // OOB+0x0c6c
/* 0x065caf31 */ LDATA extern char public_65caf31; // OOB+0x0c6d
/* 0x065caf32 */ LDATA extern char public_65caf32; // OOB+0x0c6e
/* 0x065caf33 */ LDATA extern char public_65caf33; // OOB+0x0c6f
/* 0x065caf34 */ LDATA extern char public_65caf34; // OOB+0x0c70
/* 0x065caf35 */ LDATA extern char public_65caf35; // OOB+0x0c71
/* 0x065caf36 */ LDATA extern char public_65caf36; // OOB+0x0c72
/* 0x065caf37 */ LDATA extern char public_65caf37; // OOB+0x0c73
/* 0x065caf38 */ LDATA extern char public_65caf38; // OOB+0x0c74
/* 0x065caf39 */ LDATA extern char public_65caf39; // OOB+0x0c75
/* 0x065caf3a */ LDATA extern char public_65caf3a; // OOB+0x0c76
/* 0x065caf3b */ LDATA extern char public_65caf3b; // OOB+0x0c77
/* 0x065caf3c */ LDATA extern char public_65caf3c; // OOB+0x0c78
/* 0x065caf3d */ LDATA extern char public_65caf3d; // OOB+0x0c79
/* 0x065caf3e */ LDATA extern char public_65caf3e; // OOB+0x0c7a
/* 0x065caf3f */ LDATA extern char public_65caf3f; // OOB+0x0c7b
/* 0x065caf40 */ LDATA extern char public_65caf40; // OOB+0x0c7c
/* 0x065caf41 */ LDATA extern char public_65caf41; // OOB+0x0c7d
/* 0x065caf42 */ LDATA extern char public_65caf42; // OOB+0x0c7e
/* 0x065caf43 */ LDATA extern char public_65caf43; // OOB+0x0c7f
/* 0x065caf44 */ LDATA extern char public_65caf44; // OOB+0x0c80
/* 0x065caf45 */ LDATA extern char public_65caf45; // OOB+0x0c81
/* 0x065caf46 */ LDATA extern char public_65caf46; // OOB+0x0c82
/* 0x065caf47 */ LDATA extern char public_65caf47; // OOB+0x0c83
/* 0x065caf48 */ LDATA extern char public_65caf48; // OOB+0x0c84
/* 0x065caf49 */ LDATA extern char public_65caf49; // OOB+0x0c85
/* 0x065caf4a */ LDATA extern char public_65caf4a; // OOB+0x0c86
/* 0x065caf4b */ LDATA extern char public_65caf4b; // OOB+0x0c87
/* 0x065caf4c */ LDATA extern char public_65caf4c; // OOB+0x0c88
/* 0x065caf4d */ LDATA extern char public_65caf4d; // OOB+0x0c89
/* 0x065caf4e */ LDATA extern char public_65caf4e; // OOB+0x0c8a
/* 0x065caf4f */ LDATA extern char public_65caf4f; // OOB+0x0c8b
/* 0x065caf50 */ LDATA extern char public_65caf50; // OOB+0x0c8c
/* 0x065caf51 */ LDATA extern char public_65caf51; // OOB+0x0c8d
/* 0x065caf52 */ LDATA extern char public_65caf52; // OOB+0x0c8e
/* 0x065caf53 */ LDATA extern char public_65caf53; // OOB+0x0c8f
/* 0x065caf54 */ LDATA extern char public_65caf54; // OOB+0x0c90
/* 0x065caf55 */ LDATA extern char public_65caf55; // OOB+0x0c91
/* 0x065caf56 */ LDATA extern char public_65caf56; // OOB+0x0c92
/* 0x065caf57 */ LDATA extern char public_65caf57; // OOB+0x0c93
/* 0x065caf58 */ LDATA extern char public_65caf58; // OOB+0x0c94
/* 0x065caf59 */ LDATA extern char public_65caf59; // OOB+0x0c95
/* 0x065caf5a */ LDATA extern char public_65caf5a; // OOB+0x0c96
/* 0x065caf5b */ LDATA extern char public_65caf5b; // OOB+0x0c97
/* 0x065caf5c */ LDATA extern char public_65caf5c; // OOB+0x0c98
/* 0x065caf5d */ LDATA extern char public_65caf5d; // OOB+0x0c99
/* 0x065caf5e */ LDATA extern char public_65caf5e; // OOB+0x0c9a
/* 0x065caf5f */ LDATA extern char public_65caf5f; // OOB+0x0c9b
/* 0x065caf60 */ LDATA extern char public_65caf60; // OOB+0x0c9c
/* 0x065caf61 */ LDATA extern char public_65caf61; // OOB+0x0c9d
/* 0x065caf62 */ LDATA extern char public_65caf62; // OOB+0x0c9e
/* 0x065caf63 */ LDATA extern char public_65caf63; // OOB+0x0c9f
/* 0x065caf64 */ LDATA extern char public_65caf64; // OOB+0x0ca0
/* 0x065caf65 */ LDATA extern char public_65caf65; // OOB+0x0ca1
/* 0x065caf66 */ LDATA extern char public_65caf66; // OOB+0x0ca2
/* 0x065caf67 */ LDATA extern char public_65caf67; // OOB+0x0ca3
/* 0x065caf68 */ LDATA extern char public_65caf68; // OOB+0x0ca4
/* 0x065caf69 */ LDATA extern char public_65caf69; // OOB+0x0ca5
/* 0x065caf6a */ LDATA extern char public_65caf6a; // OOB+0x0ca6
/* 0x065caf6b */ LDATA extern char public_65caf6b; // OOB+0x0ca7
/* 0x065caf6c */ LDATA extern char public_65caf6c; // OOB+0x0ca8
/* 0x065caf6d */ LDATA extern char public_65caf6d; // OOB+0x0ca9
/* 0x065caf6e */ LDATA extern char public_65caf6e; // OOB+0x0caa
/* 0x065caf6f */ LDATA extern char public_65caf6f; // OOB+0x0cab
/* 0x065caf70 */ LDATA extern char public_65caf70; // OOB+0x0cac
/* 0x065caf71 */ LDATA extern char public_65caf71; // OOB+0x0cad
/* 0x065caf72 */ LDATA extern char public_65caf72; // OOB+0x0cae
/* 0x065caf73 */ LDATA extern char public_65caf73; // OOB+0x0caf
/* 0x065caf74 */ LDATA extern char public_65caf74; // OOB+0x0cb0
/* 0x065caf75 */ LDATA extern char public_65caf75; // OOB+0x0cb1
/* 0x065caf76 */ LDATA extern char public_65caf76; // OOB+0x0cb2
/* 0x065caf77 */ LDATA extern char public_65caf77; // OOB+0x0cb3
/* 0x065caf78 */ LDATA extern char public_65caf78; // OOB+0x0cb4
/* 0x065caf79 */ LDATA extern char public_65caf79; // OOB+0x0cb5
/* 0x065caf7a */ LDATA extern char public_65caf7a; // OOB+0x0cb6
/* 0x065caf7b */ LDATA extern char public_65caf7b; // OOB+0x0cb7
/* 0x065caf7c */ LDATA extern char public_65caf7c; // OOB+0x0cb8
/* 0x065caf7d */ LDATA extern char public_65caf7d; // OOB+0x0cb9
/* 0x065caf7e */ LDATA extern char public_65caf7e; // OOB+0x0cba
/* 0x065caf7f */ LDATA extern char public_65caf7f; // OOB+0x0cbb
/* 0x065caf80 */ LDATA extern char public_65caf80; // OOB+0x0cbc
/* 0x065caf81 */ LDATA extern char public_65caf81; // OOB+0x0cbd
/* 0x065caf82 */ LDATA extern char public_65caf82; // OOB+0x0cbe
/* 0x065caf83 */ LDATA extern char public_65caf83; // OOB+0x0cbf
/* 0x065caf84 */ LDATA extern char public_65caf84; // OOB+0x0cc0
/* 0x065caf85 */ LDATA extern char public_65caf85; // OOB+0x0cc1
/* 0x065caf86 */ LDATA extern char public_65caf86; // OOB+0x0cc2
/* 0x065caf87 */ LDATA extern char public_65caf87; // OOB+0x0cc3
/* 0x065caf88 */ LDATA extern char public_65caf88; // OOB+0x0cc4
/* 0x065caf89 */ LDATA extern char public_65caf89; // OOB+0x0cc5
/* 0x065caf8a */ LDATA extern char public_65caf8a; // OOB+0x0cc6
/* 0x065caf8b */ LDATA extern char public_65caf8b; // OOB+0x0cc7
/* 0x065caf8c */ LDATA extern char public_65caf8c; // OOB+0x0cc8
/* 0x065caf8d */ LDATA extern char public_65caf8d; // OOB+0x0cc9
/* 0x065caf8e */ LDATA extern char public_65caf8e; // OOB+0x0cca
/* 0x065caf8f */ LDATA extern char public_65caf8f; // OOB+0x0ccb
/* 0x065caf90 */ LDATA extern char public_65caf90; // OOB+0x0ccc
/* 0x065caf91 */ LDATA extern char public_65caf91; // OOB+0x0ccd
/* 0x065caf92 */ LDATA extern char public_65caf92; // OOB+0x0cce
/* 0x065caf93 */ LDATA extern char public_65caf93; // OOB+0x0ccf
/* 0x065caf94 */ LDATA extern char public_65caf94; // OOB+0x0cd0
/* 0x065caf95 */ LDATA extern char public_65caf95; // OOB+0x0cd1
/* 0x065caf96 */ LDATA extern char public_65caf96; // OOB+0x0cd2
/* 0x065caf97 */ LDATA extern char public_65caf97; // OOB+0x0cd3
/* 0x065caf98 */ LDATA extern char public_65caf98; // OOB+0x0cd4
/* 0x065caf99 */ LDATA extern char public_65caf99; // OOB+0x0cd5
/* 0x065caf9a */ LDATA extern char public_65caf9a; // OOB+0x0cd6
/* 0x065caf9b */ LDATA extern char public_65caf9b; // OOB+0x0cd7
/* 0x065caf9c */ LDATA extern char public_65caf9c; // OOB+0x0cd8
/* 0x065caf9d */ LDATA extern char public_65caf9d; // OOB+0x0cd9
/* 0x065caf9e */ LDATA extern char public_65caf9e; // OOB+0x0cda
/* 0x065caf9f */ LDATA extern char public_65caf9f; // OOB+0x0cdb
/* 0x065cafa0 */ LDATA extern char public_65cafa0; // OOB+0x0cdc
/* 0x065cafa1 */ LDATA extern char public_65cafa1; // OOB+0x0cdd
/* 0x065cafa2 */ LDATA extern char public_65cafa2; // OOB+0x0cde
/* 0x065cafa3 */ LDATA extern char public_65cafa3; // OOB+0x0cdf
/* 0x065cafa4 */ LDATA extern char public_65cafa4; // OOB+0x0ce0
/* 0x065cafa5 */ LDATA extern char public_65cafa5; // OOB+0x0ce1
/* 0x065cafa6 */ LDATA extern char public_65cafa6; // OOB+0x0ce2
/* 0x065cafa7 */ LDATA extern char public_65cafa7; // OOB+0x0ce3
/* 0x065cafa8 */ LDATA extern char public_65cafa8; // OOB+0x0ce4
/* 0x065cafa9 */ LDATA extern char public_65cafa9; // OOB+0x0ce5
/* 0x065cafaa */ LDATA extern char public_65cafaa; // OOB+0x0ce6
/* 0x065cafab */ LDATA extern char public_65cafab; // OOB+0x0ce7
/* 0x065cafac */ LDATA extern char public_65cafac; // OOB+0x0ce8
/* 0x065cafad */ LDATA extern char public_65cafad; // OOB+0x0ce9
/* 0x065cafae */ LDATA extern char public_65cafae; // OOB+0x0cea
/* 0x065cafaf */ LDATA extern char public_65cafaf; // OOB+0x0ceb
/* 0x065cafb0 */ LDATA extern char public_65cafb0; // OOB+0x0cec
/* 0x065cafb1 */ LDATA extern char public_65cafb1; // OOB+0x0ced
/* 0x065cafb2 */ LDATA extern char public_65cafb2; // OOB+0x0cee
/* 0x065cafb3 */ LDATA extern char public_65cafb3; // OOB+0x0cef
/* 0x065cafb4 */ LDATA extern char public_65cafb4; // OOB+0x0cf0
/* 0x065cafb5 */ LDATA extern char public_65cafb5; // OOB+0x0cf1
/* 0x065cafb6 */ LDATA extern char public_65cafb6; // OOB+0x0cf2
/* 0x065cafb7 */ LDATA extern char public_65cafb7; // OOB+0x0cf3
/* 0x065cafb8 */ LDATA extern char public_65cafb8; // OOB+0x0cf4
/* 0x065cafb9 */ LDATA extern char public_65cafb9; // OOB+0x0cf5
/* 0x065cafba */ LDATA extern char public_65cafba; // OOB+0x0cf6
/* 0x065cafbb */ LDATA extern char public_65cafbb; // OOB+0x0cf7
/* 0x065cafbc */ LDATA extern char public_65cafbc; // OOB+0x0cf8
/* 0x065cafbd */ LDATA extern char public_65cafbd; // OOB+0x0cf9
/* 0x065cafbe */ LDATA extern char public_65cafbe; // OOB+0x0cfa
/* 0x065cafbf */ LDATA extern char public_65cafbf; // OOB+0x0cfb
/* 0x065cafc0 */ LDATA extern char public_65cafc0; // OOB+0x0cfc
/* 0x065cafc1 */ LDATA extern char public_65cafc1; // OOB+0x0cfd
/* 0x065cafc2 */ LDATA extern char public_65cafc2; // OOB+0x0cfe
/* 0x065cafc3 */ LDATA extern char public_65cafc3; // OOB+0x0cff
/* 0x065cafc4 */ LDATA extern char public_65cafc4; // OOB+0x0d00
/* 0x065cafc5 */ LDATA extern char public_65cafc5; // OOB+0x0d01
/* 0x065cafc6 */ LDATA extern char public_65cafc6; // OOB+0x0d02
/* 0x065cafc7 */ LDATA extern char public_65cafc7; // OOB+0x0d03
/* 0x065cafc8 */ LDATA extern char public_65cafc8; // OOB+0x0d04
/* 0x065cafc9 */ LDATA extern char public_65cafc9; // OOB+0x0d05
/* 0x065cafca */ LDATA extern char public_65cafca; // OOB+0x0d06
/* 0x065cafcb */ LDATA extern char public_65cafcb; // OOB+0x0d07
/* 0x065cafcc */ LDATA extern char public_65cafcc; // OOB+0x0d08
/* 0x065cafcd */ LDATA extern char public_65cafcd; // OOB+0x0d09
/* 0x065cafce */ LDATA extern char public_65cafce; // OOB+0x0d0a
/* 0x065cafcf */ LDATA extern char public_65cafcf; // OOB+0x0d0b
/* 0x065cafd0 */ LDATA extern char public_65cafd0; // OOB+0x0d0c
/* 0x065cafd1 */ LDATA extern char public_65cafd1; // OOB+0x0d0d
/* 0x065cafd2 */ LDATA extern char public_65cafd2; // OOB+0x0d0e
/* 0x065cafd3 */ LDATA extern char public_65cafd3; // OOB+0x0d0f
/* 0x065cafd4 */ LDATA extern char public_65cafd4; // OOB+0x0d10
/* 0x065cafd5 */ LDATA extern char public_65cafd5; // OOB+0x0d11
/* 0x065cafd6 */ LDATA extern char public_65cafd6; // OOB+0x0d12
/* 0x065cafd7 */ LDATA extern char public_65cafd7; // OOB+0x0d13
/* 0x065cafd8 */ LDATA extern char public_65cafd8; // OOB+0x0d14
/* 0x065cafd9 */ LDATA extern char public_65cafd9; // OOB+0x0d15
/* 0x065cafda */ LDATA extern char public_65cafda; // OOB+0x0d16
/* 0x065cafdb */ LDATA extern char public_65cafdb; // OOB+0x0d17
/* 0x065cafdc */ LDATA extern char public_65cafdc; // OOB+0x0d18
/* 0x065cafdd */ LDATA extern char public_65cafdd; // OOB+0x0d19
/* 0x065cafde */ LDATA extern char public_65cafde; // OOB+0x0d1a
/* 0x065cafdf */ LDATA extern char public_65cafdf; // OOB+0x0d1b
/* 0x065cafe0 */ LDATA extern char public_65cafe0; // OOB+0x0d1c
/* 0x065cafe1 */ LDATA extern char public_65cafe1; // OOB+0x0d1d
/* 0x065cafe2 */ LDATA extern char public_65cafe2; // OOB+0x0d1e
/* 0x065cafe3 */ LDATA extern char public_65cafe3; // OOB+0x0d1f
/* 0x065cafe4 */ LDATA extern char public_65cafe4; // OOB+0x0d20
/* 0x065cafe5 */ LDATA extern char public_65cafe5; // OOB+0x0d21
/* 0x065cafe6 */ LDATA extern char public_65cafe6; // OOB+0x0d22
/* 0x065cafe7 */ LDATA extern char public_65cafe7; // OOB+0x0d23
/* 0x065cafe8 */ LDATA extern char public_65cafe8; // OOB+0x0d24
/* 0x065cafe9 */ LDATA extern char public_65cafe9; // OOB+0x0d25
/* 0x065cafea */ LDATA extern char public_65cafea; // OOB+0x0d26
/* 0x065cafeb */ LDATA extern char public_65cafeb; // OOB+0x0d27
/* 0x065cafec */ LDATA extern char public_65cafec; // OOB+0x0d28
/* 0x065cafed */ LDATA extern char public_65cafed; // OOB+0x0d29
/* 0x065cafee */ LDATA extern char public_65cafee; // OOB+0x0d2a
/* 0x065cafef */ LDATA extern char public_65cafef; // OOB+0x0d2b
/* 0x065caff0 */ LDATA extern char public_65caff0; // OOB+0x0d2c
/* 0x065caff1 */ LDATA extern char public_65caff1; // OOB+0x0d2d
/* 0x065caff2 */ LDATA extern char public_65caff2; // OOB+0x0d2e
/* 0x065caff3 */ LDATA extern char public_65caff3; // OOB+0x0d2f
/* 0x065caff4 */ LDATA extern char public_65caff4; // OOB+0x0d30
/* 0x065caff5 */ LDATA extern char public_65caff5; // OOB+0x0d31
/* 0x065caff6 */ LDATA extern char public_65caff6; // OOB+0x0d32
/* 0x065caff7 */ LDATA extern char public_65caff7; // OOB+0x0d33
/* 0x065caff8 */ LDATA extern char public_65caff8; // OOB+0x0d34
/* 0x065caff9 */ LDATA extern char public_65caff9; // OOB+0x0d35
/* 0x065caffa */ LDATA extern char public_65caffa; // OOB+0x0d36
/* 0x065caffb */ LDATA extern char public_65caffb; // OOB+0x0d37
/* 0x065caffc */ LDATA extern char public_65caffc; // OOB+0x0d38
/* 0x065caffd */ LDATA extern char public_65caffd; // OOB+0x0d39
/* 0x065caffe */ LDATA extern char public_65caffe; // OOB+0x0d3a
/* 0x065cafff */ LDATA extern char public_65cafff; // OOB+0x0d3b
#ifdef __cplusplus
} // extern "C"
#endif // __cplusplus
