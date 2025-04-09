#ifndef __INTELLISENSE__
// clang-format off
#include "..\..\PCH.h"
#pragma init_seg(lib)
#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

_naked _weak void _sub_65C1000() // _sub_65C1000
{
    __DEBUG_ASM(65C1000);
    // chunk 0x65C1000 _sub_65C1000
    asm("loc_65C1000: push %esi;");
    asm("loc_65C1001: push %edi;");
    asm("loc_65C1002: mov %ecx,%esi;");
    asm("loc_65C1004: push $0x38;");
    asm("loc_65C1006: push $_data_65C7140;");
    asm("loc_65C100B: xor %edi,%edi;");
    asm("loc_65C100D: push $6;");
    asm("loc_65C100F: lea 4(%esi),%eax;");
    asm("loc_65C1012: push %eax;");
    asm("loc_65C1013: movl $_off_65C713C,(%esi);");
    asm("loc_65C1019: mov %edi,0x24(%esi);");
    asm("loc_65C101C: mov %edi,0x28(%esi);");
    asm("loc_65C101F: mov %edi,0x2C(%esi);");
    asm("loc_65C1022: call _sub_65C6A36;");
    asm("loc_65C1027: push $0x38;");
    asm("loc_65C1029: lea 0x3C(%esi),%eax;");
    asm("loc_65C102C: push $_data_65C7140;");
    asm("loc_65C1031: push %eax;");
    asm("loc_65C1032: mov %edi,0x5C(%esi);");
    asm("loc_65C1035: mov %edi,0x60(%esi);");
    asm("loc_65C1038: mov %edi,0x64(%esi);");
    asm("loc_65C103B: mov %edi,(%eax);");
    asm("loc_65C103D: mov %edi,0x40(%esi);");
    asm("loc_65C1040: call _sub_65C6A30;");
    asm("loc_65C1045: mov %edi,0x78(%esi);");
    asm("loc_65C1048: mov %edi,0x74(%esi);");
    asm("loc_65C104B: pop %edi;");
    asm("loc_65C104C: mov %esi,%eax;");
    asm("loc_65C104E: pop %esi;");
    asm("loc_65C104F: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C1050() // _sub_65C1050
{
    __DEBUG_ASM(65C1050);
    // chunk 0x65C1050 _sub_65C1050
    asm("loc_65C1050: push %esi;");
    asm("loc_65C1051: mov %ecx,%esi;");
    asm("loc_65C1053: lea 4(%esi),%eax;");
    asm("loc_65C1056: push %eax;");
    asm("loc_65C1057: movl $_off_65C713C,(%esi);");
    asm("loc_65C105D: call _sub_65C6A42;");
    asm("loc_65C1062: lea 0x3C(%esi),%ecx;");
    asm("loc_65C1065: push %ecx;");
    asm("loc_65C1066: call _sub_65C6A3C;");
    asm("loc_65C106B: testb $1,8(%esp);");
    asm("loc_65C1070: je loc_65C107B;");
    asm("loc_65C1072: push %esi;");
    asm("loc_65C1073: call _sub_65C6A60;");
    asm("loc_65C1078: add $4,%esp;");
    asm("loc_65C107B: mov %esi,%eax;");
    asm("loc_65C107D: pop %esi;");
    asm("loc_65C107E: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C1090() // _sub_65C1090
{
    __DEBUG_ASM(65C1090);
    // chunk 0x65C1090 _sub_65C1090
    asm("loc_65C1090: push %esi;");
    asm("loc_65C1091: mov %ecx,%esi;");
    asm("loc_65C1093: lea 4(%esi),%eax;");
    asm("loc_65C1096: push %eax;");
    asm("loc_65C1097: movl $_off_65C713C,(%esi);");
    asm("loc_65C109D: call _sub_65C6A42;");
    asm("loc_65C10A2: add $0x3C,%esi;");
    asm("loc_65C10A5: push %esi;");
    asm("loc_65C10A6: call _sub_65C6A3C;");
    asm("loc_65C10AB: pop %esi;");
    asm("loc_65C10AC: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C10B0() // _sub_65C10B0
{
    __DEBUG_ASM(65C10B0);
    // chunk 0x65C10B0 _sub_65C10B0
    asm("loc_65C10B0: mov 8(%esp),%eax;");
    asm("loc_65C10B4: cmp $0x20,%eax;");
    asm("loc_65C10B7: push %esi;");
    asm("loc_65C10B8: mov %ecx,%esi;");
    asm("loc_65C10BA: jae loc_65C10C2;");
    asm("loc_65C10BC: xor %al,%al;");
    asm("loc_65C10BE: pop %esi;");
    asm("loc_65C10BF: ret $0x10;");
    asm("loc_65C10C2: mov 8(%esp),%ecx;");
    asm("loc_65C10C6: mov 0x10(%esp),%edx;");
    asm("loc_65C10CA: push %ebx;");
    asm("loc_65C10CB: push %edi;");
    asm("loc_65C10CC: lea 4(%esi),%edi;");
    asm("loc_65C10CF: mov %eax,8(%esi);");
    asm("loc_65C10D2: mov 0x1C(%esp),%eax;");
    asm("loc_65C10D6: push $4;");
    asm("loc_65C10D8: push %edi;");
    asm("loc_65C10D9: mov %ecx,(%edi);");
    asm("loc_65C10DB: mov %edx,0x10(%esi);");
    asm("loc_65C10DE: mov %eax,0x14(%esi);");
    asm("loc_65C10E1: call _sub_65C6A4E;");
    asm("loc_65C10E6: mov 0x18(%esi),%ecx;");
    asm("loc_65C10E9: push %edi;");
    asm("loc_65C10EA: mov %eax,%ebx;");
    asm("loc_65C10EC: mov %ecx,0x74(%esi);");
    asm("loc_65C10EF: call _sub_65C6A48;");
    asm("loc_65C10F4: xor %eax,%eax;");
    asm("loc_65C10F6: pop %edi;");
    asm("loc_65C10F7: cmp $1,%ebx;");
    asm("loc_65C10FA: pop %ebx;");
    asm("loc_65C10FB: sete %al;");
    asm("loc_65C10FE: pop %esi;");
    asm("loc_65C10FF: ret $0x10;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C1110() // _sub_65C1110
{
    __DEBUG_ASM(65C1110);
    // chunk 0x65C1110 _sub_65C1110
    asm("loc_65C1110: mov 4(%esp),%eax;");
    asm("loc_65C1114: mov 0xC(%esp),%edx;");
    asm("loc_65C1118: push %ebx;");
    asm("loc_65C1119: push %esi;");
    asm("loc_65C111A: mov %ecx,%esi;");
    asm("loc_65C111C: mov 0x10(%esp),%ecx;");
    asm("loc_65C1120: push %edi;");
    asm("loc_65C1121: lea 0x3C(%esi),%edi;");
    asm("loc_65C1124: mov %eax,(%edi);");
    asm("loc_65C1126: mov 0x1C(%esp),%eax;");
    asm("loc_65C112A: push $4;");
    asm("loc_65C112C: push %edi;");
    asm("loc_65C112D: mov %ecx,0x40(%esi);");
    asm("loc_65C1130: mov %edx,0x48(%esi);");
    asm("loc_65C1133: mov %eax,0x4C(%esi);");
    asm("loc_65C1136: call _sub_65C6A5A;");
    asm("loc_65C113B: mov 0x50(%esi),%ecx;");
    asm("loc_65C113E: push %edi;");
    asm("loc_65C113F: mov %eax,%ebx;");
    asm("loc_65C1141: mov %ecx,0x78(%esi);");
    asm("loc_65C1144: call _sub_65C6A54;");
    asm("loc_65C1149: pop %edi;");
    asm("loc_65C114A: xor %eax,%eax;");
    asm("loc_65C114C: cmp $1,%ebx;");
    asm("loc_65C114F: pop %esi;");
    asm("loc_65C1150: sete %al;");
    asm("loc_65C1153: pop %ebx;");
    asm("loc_65C1154: ret $0x10;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C1160() // ?Startup@DALib@@YA_NPAUHWND__@@PBD@Z
{
    __DEBUG_ASM(65C1160);
    // chunk 0x65C1160 _sub_65C1160
    asm("loc_65C1160: sub $0x350,%esp;");
    asm("loc_65C1166: push %edi;");
    asm("loc_65C1167: calll *_import_65C7000;");
    asm("loc_65C116D: xor %edi,%edi;");
    asm("loc_65C116F: cmp %edi,%eax;");
    asm("loc_65C1171: mov %eax,_data_65CA0F4;");
    asm("loc_65C1176: je loc_65C15AA;");
    asm("loc_65C117C: mov 0x35C(%esp),%ecx;");
    asm("loc_65C1183: cmp %edi,%ecx;");
    asm("loc_65C1185: je loc_65C1194;");
    asm("loc_65C1187: mov (%eax),%edx;");
    asm("loc_65C1189: push %edi;");
    asm("loc_65C118A: push %ecx;");
    asm("loc_65C118B: push %eax;");
    asm("loc_65C118C: calll *0x28(%edx);");
    asm("loc_65C118F: jmp loc_65C1218;");
    asm("loc_65C1194: push $4;");
    asm("loc_65C1196: push $_data_65C714C;");
    asm("loc_65C119B: calll *_import_65C70A0;");
    asm("loc_65C11A1: add $8,%esp;");
    asm("loc_65C11A4: test %eax,%eax;");
    asm("loc_65C11A6: jne loc_65C11B0;");
    asm("loc_65C11A8: push %edi;");
    asm("loc_65C11A9: push $_data_65C714C;");
    asm("loc_65C11AE: jmp loc_65C120D;");
    asm("loc_65C11B0: mov _data_65CA2AC,%eax;");
    asm("loc_65C11B5: push $0x104;");
    asm("loc_65C11BA: lea 0x50(%esp),%edx;");
    asm("loc_65C11BE: push %edx;");
    asm("loc_65C11BF: push %eax;");
    asm("loc_65C11C0: calll *_import_65C700C;");
    asm("loc_65C11C6: push %edi;");
    asm("loc_65C11C7: push %edi;");
    asm("loc_65C11C8: lea 0x158(%esp),%ecx;");
    asm("loc_65C11CF: push %ecx;");
    asm("loc_65C11D0: lea 0x14(%esp),%edx;");
    asm("loc_65C11D4: push %edx;");
    asm("loc_65C11D5: lea 0x5C(%esp),%eax;");
    asm("loc_65C11D9: push %eax;");
    asm("loc_65C11DA: calll *_import_65C709C;");
    asm("loc_65C11E0: push %edi;");
    asm("loc_65C11E1: push $_data_65C714C;");
    asm("loc_65C11E6: lea 0x16C(%esp),%ecx;");
    asm("loc_65C11ED: push %ecx;");
    asm("loc_65C11EE: lea 0x28(%esp),%edx;");
    asm("loc_65C11F2: push %edx;");
    asm("loc_65C11F3: lea 0x274(%esp),%eax;");
    asm("loc_65C11FA: push %eax;");
    asm("loc_65C11FB: calll *_import_65C7098;");
    asm("loc_65C1201: add $0x28,%esp;");
    asm("loc_65C1204: push %edi;");
    asm("loc_65C1205: lea 0x254(%esp),%edx;");
    asm("loc_65C120C: push %edx;");
    asm("loc_65C120D: mov _data_65CA0F4,%eax;");
    asm("loc_65C1212: mov (%eax),%ecx;");
    asm("loc_65C1214: push %eax;");
    asm("loc_65C1215: calll *0x28(%ecx);");
    asm("loc_65C1218: cmp %edi,%eax;");
    asm("loc_65C121A: jne loc_65C15AA;");
    asm("loc_65C1220: mov _data_65CA0F4,%eax;");
    asm("loc_65C1225: push %esi;");
    asm("loc_65C1226: lea 0xC(%esp),%edx;");
    asm("loc_65C122A: push %edx;");
    asm("loc_65C122B: lea 0x28(%esp),%edx;");
    asm("loc_65C122F: push %edx;");
    asm("loc_65C1230: mov %edi,0x28(%esp);");
    asm("loc_65C1234: movl $_data_65C735C,0x30(%esp);");
    asm("loc_65C123C: mov %edi,0x34(%esp);");
    asm("loc_65C1240: mov %edi,0x38(%esp);");
    asm("loc_65C1244: mov %edi,0x3C(%esp);");
    asm("loc_65C1248: movl $0x14,0x2C(%esp);");
    asm("loc_65C1250: mov (%eax),%ecx;");
    asm("loc_65C1252: push %eax;");
    asm("loc_65C1253: movb $1,0x17(%esp);");
    asm("loc_65C1258: calll *0xC(%ecx);");
    asm("loc_65C125B: test %eax,%eax;");
    asm("loc_65C125D: jne loc_65C12B1;");
    asm("loc_65C125F: mov 0xC(%esp),%eax;");
    asm("loc_65C1263: mov (%eax),%ecx;");
    asm("loc_65C1265: lea 0x1C(%esp),%edx;");
    asm("loc_65C1269: push %edx;");
    asm("loc_65C126A: push $_data_65C7340;");
    asm("loc_65C126F: push %eax;");
    asm("loc_65C1270: calll *(%ecx);");
    asm("loc_65C1272: cmp %edi,%eax;");
    asm("loc_65C1274: jne loc_65C12B1;");
    asm("loc_65C1276: mov 0x1C(%esp),%eax;");
    asm("loc_65C127A: mov (%eax),%ecx;");
    asm("loc_65C127C: push %eax;");
    asm("loc_65C127D: calll *0xC(%ecx);");
    asm("loc_65C1280: mov %eax,%esi;");
    asm("loc_65C1282: mov 0x1C(%esp),%eax;");
    asm("loc_65C1286: mov (%eax),%edx;");
    asm("loc_65C1288: push %eax;");
    asm("loc_65C1289: calll *8(%edx);");
    asm("loc_65C128C: cmp %edi,%esi;");
    asm("loc_65C128E: jne loc_65C12B1;");
    asm("loc_65C1290: mov 0xC(%esp),%eax;");
    asm("loc_65C1294: mov (%eax),%ecx;");
    asm("loc_65C1296: lea 0x20(%esp),%edx;");
    asm("loc_65C129A: push %edx;");
    asm("loc_65C129B: push $_data_65C7328;");
    asm("loc_65C12A0: push %eax;");
    asm("loc_65C12A1: calll *(%ecx);");
    asm("loc_65C12A3: test %eax,%eax;");
    asm("loc_65C12A5: jne loc_65C12B1;");
    asm("loc_65C12A7: mov 0xC(%esp),%eax;");
    asm("loc_65C12AB: mov (%eax),%ecx;");
    asm("loc_65C12AD: push %eax;");
    asm("loc_65C12AE: calll *8(%ecx);");
    asm("loc_65C12B1: mov 0x20(%esp),%esi;");
    asm("loc_65C12B5: cmp %edi,%esi;");
    asm("loc_65C12B7: je loc_65C14A4;");
    asm("loc_65C12BD: mov (%esi),%edx;");
    asm("loc_65C12BF: push %esi;");
    asm("loc_65C12C0: calll *0x14(%edx);");
    asm("loc_65C12C3: mov (%esi),%eax;");
    asm("loc_65C12C5: push $_data_65CA0F8;");
    asm("loc_65C12CA: push $_data_65C7314;");
    asm("loc_65C12CF: push %esi;");
    asm("loc_65C12D0: calll *(%eax);");
    asm("loc_65C12D2: mov (%esi),%ecx;");
    asm("loc_65C12D4: push $_data_65CA0C8;");
    asm("loc_65C12D9: push $_data_65C7304;");
    asm("loc_65C12DE: push %esi;");
    asm("loc_65C12DF: calll *(%ecx);");
    asm("loc_65C12E1: mov (%esi),%edx;");
    asm("loc_65C12E3: push $_data_65CA0E0;");
    asm("loc_65C12E8: push $_data_65C72EC;");
    asm("loc_65C12ED: push %esi;");
    asm("loc_65C12EE: calll *(%edx);");
    asm("loc_65C12F0: mov _data_65CA0E0,%eax;");
    asm("loc_65C12F5: cmp %edi,%eax;");
    asm("loc_65C12F7: je loc_65C1330;");
    asm("loc_65C12F9: mov (%eax),%ecx;");
    asm("loc_65C12FB: push $_data_65CA0E4;");
    asm("loc_65C1300: push $_data_65C72DC;");
    asm("loc_65C1305: push %eax;");
    asm("loc_65C1306: calll *(%ecx);");
    asm("loc_65C1308: mov _data_65CA0E0,%eax;");
    asm("loc_65C130D: mov (%eax),%edx;");
    asm("loc_65C130F: push $_data_65CA0E8;");
    asm("loc_65C1314: push $_data_65C72C8;");
    asm("loc_65C1319: push %eax;");
    asm("loc_65C131A: calll *(%edx);");
    asm("loc_65C131C: mov _data_65CA0E0,%eax;");
    asm("loc_65C1321: mov (%eax),%ecx;");
    asm("loc_65C1323: push $_data_65CA0EC;");
    asm("loc_65C1328: push $_data_65C72B0;");
    asm("loc_65C132D: push %eax;");
    asm("loc_65C132E: calll *(%ecx);");
    asm("loc_65C1330: mov (%esi),%edx;");
    asm("loc_65C1332: push %ebx;");
    asm("loc_65C1333: push %ebp;");
    asm("loc_65C1334: push $_data_65CA0DC;");
    asm("loc_65C1339: push $_data_65C7298;");
    asm("loc_65C133E: push %esi;");
    asm("loc_65C133F: calll *(%edx);");
    asm("loc_65C1341: mov (%esi),%eax;");
    asm("loc_65C1343: push $_data_65CA100;");
    asm("loc_65C1348: push $_data_65C7280;");
    asm("loc_65C134D: push %esi;");
    asm("loc_65C134E: calll *(%eax);");
    asm("loc_65C1350: mov (%esi),%ecx;");
    asm("loc_65C1352: push $_data_65CA104;");
    asm("loc_65C1357: push $_data_65C7268;");
    asm("loc_65C135C: push %esi;");
    asm("loc_65C135D: calll *(%ecx);");
    asm("loc_65C135F: mov (%esi),%edx;");
    asm("loc_65C1361: push $_data_65CA110;");
    asm("loc_65C1366: push $_data_65C724C;");
    asm("loc_65C136B: push %esi;");
    asm("loc_65C136C: calll *(%edx);");
    asm("loc_65C136E: mov (%esi),%eax;");
    asm("loc_65C1370: push $_data_65CA114;");
    asm("loc_65C1375: push $_data_65C723C;");
    asm("loc_65C137A: push %esi;");
    asm("loc_65C137B: calll *(%eax);");
    asm("loc_65C137D: mov (%esi),%ecx;");
    asm("loc_65C137F: push $_data_65CA118;");
    asm("loc_65C1384: push $_data_65C722C;");
    asm("loc_65C1389: push %esi;");
    asm("loc_65C138A: calll *(%ecx);");
    asm("loc_65C138C: mov (%esi),%edx;");
    asm("loc_65C138E: push $_data_65CA108;");
    asm("loc_65C1393: push $_data_65C7214;");
    asm("loc_65C1398: push %esi;");
    asm("loc_65C1399: calll *(%edx);");
    asm("loc_65C139B: mov (%esi),%eax;");
    asm("loc_65C139D: push $_data_65CA10C;");
    asm("loc_65C13A2: push $_data_65C7200;");
    asm("loc_65C13A7: push %esi;");
    asm("loc_65C13A8: calll *(%eax);");
    asm("loc_65C13AA: mov _data_65CA0F8,%eax;");
    asm("loc_65C13AF: mov 0x364(%esp),%ebp;");
    asm("loc_65C13B6: xor %bl,%bl;");
    asm("loc_65C13B8: cmp %edi,%eax;");
    asm("loc_65C13BA: je loc_65C13FA;");
    asm("loc_65C13BC: mov (%eax),%ecx;");
    asm("loc_65C13BE: push $0x113;");
    asm("loc_65C13C3: push %ebp;");
    asm("loc_65C13C4: push %eax;");
    asm("loc_65C13C5: calll *0xA4(%ecx);");
    asm("loc_65C13CB: test %eax,%eax;");
    asm("loc_65C13CD: mov _data_65CA0F8,%eax;");
    asm("loc_65C13D2: je loc_65C13FA;");
    asm("loc_65C13D4: mov (%eax),%edx;");
    asm("loc_65C13D6: push %eax;");
    asm("loc_65C13D7: mov $1,%bl;");
    asm("loc_65C13D9: calll *0xA8(%edx);");
    asm("loc_65C13DF: mov _data_65CA0F8,%eax;");
    asm("loc_65C13E4: cmp %edi,%eax;");
    asm("loc_65C13E6: je loc_65C13FA;");
    asm("loc_65C13E8: mov (%eax),%ecx;");
    asm("loc_65C13EA: push %eax;");
    asm("loc_65C13EB: calll *8(%ecx);");
    asm("loc_65C13EE: mov %eax,_data_65CA0BC;");
    asm("loc_65C13F3: xor %eax,%eax;");
    asm("loc_65C13F5: mov %eax,_data_65CA0F8;");
    asm("loc_65C13FA: mov _data_65CA0C8,%edx;");
    asm("loc_65C1400: cmp %edi,%edx;");
    asm("loc_65C1402: je loc_65C148B;");
    asm("loc_65C1408: cmp %edi,%eax;");
    asm("loc_65C140A: mov %edi,0x18(%esp);");
    asm("loc_65C140E: je loc_65C1424;");
    asm("loc_65C1410: mov (%eax),%edx;");
    asm("loc_65C1412: lea 0x18(%esp),%ecx;");
    asm("loc_65C1416: push %ecx;");
    asm("loc_65C1417: push %eax;");
    asm("loc_65C1418: calll *0xAC(%edx);");
    asm("loc_65C141E: mov _data_65CA0C8,%edx;");
    asm("loc_65C1424: xor %eax,%eax;");
    asm("loc_65C1426: mov $6,%ecx;");
    asm("loc_65C142B: lea 0x40(%esp),%edi;");
    asm("loc_65C142F: rep stos %eax,(%edi);");
    asm("loc_65C1431: mov 0x18(%esp),%eax;");
    asm("loc_65C1435: mov %eax,0x44(%esp);");
    asm("loc_65C1439: lea 0x40(%esp),%eax;");
    asm("loc_65C143D: xor %edi,%edi;");
    asm("loc_65C143F: push %eax;");
    asm("loc_65C1440: movl $0x18,0x44(%esp);");
    asm("loc_65C1448: mov %ebp,0x4C(%esp);");
    asm("loc_65C144C: mov %edi,0x50(%esp);");
    asm("loc_65C1450: mov (%edx),%ecx;");
    asm("loc_65C1452: push %edx;");
    asm("loc_65C1453: calll *0xC(%ecx);");
    asm("loc_65C1456: test %eax,%eax;");
    asm("loc_65C1458: jne loc_65C1476;");
    asm("loc_65C145A: mov _data_65CA0C8,%eax;");
    asm("loc_65C145F: cmp %edi,%eax;");
    asm("loc_65C1461: mov $1,%bl;");
    asm("loc_65C1463: je loc_65C1476;");
    asm("loc_65C1465: mov (%eax),%ecx;");
    asm("loc_65C1467: push %eax;");
    asm("loc_65C1468: calll *8(%ecx);");
    asm("loc_65C146B: mov %eax,_data_65CA0BC;");
    asm("loc_65C1470: mov %edi,_data_65CA0C8;");
    asm("loc_65C1476: mov 0x18(%esp),%eax;");
    asm("loc_65C147A: cmp %edi,%eax;");
    asm("loc_65C147C: je loc_65C1489;");
    asm("loc_65C147E: mov (%eax),%edx;");
    asm("loc_65C1480: push %eax;");
    asm("loc_65C1481: calll *8(%edx);");
    asm("loc_65C1484: mov %eax,_data_65CA0BC;");
    asm("loc_65C1489: xor %edi,%edi;");
    asm("loc_65C148B: pop %ebp;");
    asm("loc_65C148C: test %bl,%bl;");
    asm("loc_65C148E: pop %ebx;");
    asm("loc_65C148F: je loc_65C14A4;");
    asm("loc_65C1491: push %edi;");
    asm("loc_65C1492: push $0xD3;");
    asm("loc_65C1497: calll *_data_65CA0B4;");
    asm("loc_65C149D: add $8,%esp;");
    asm("loc_65C14A0: mov %al,0xB(%esp);");
    asm("loc_65C14A4: mov _data_65CA0F4,%eax;");
    asm("loc_65C14A9: push $_data_65CA0C4;");
    asm("loc_65C14AE: lea 0x18(%esp),%edx;");
    asm("loc_65C14B2: push %edx;");
    asm("loc_65C14B3: movl $8,0x1C(%esp);");
    asm("loc_65C14BB: movl $_data_65C71F8,0x20(%esp);");
    asm("loc_65C14C3: mov (%eax),%ecx;");
    asm("loc_65C14C5: push %eax;");
    asm("loc_65C14C6: calll *0xC(%ecx);");
    asm("loc_65C14C9: test %eax,%eax;");
    asm("loc_65C14CB: jne loc_65C1555;");
    asm("loc_65C14D1: mov _data_65CA0C4,%eax;");
    asm("loc_65C14D6: mov (%eax),%ecx;");
    asm("loc_65C14D8: push %esi;");
    asm("loc_65C14D9: push %eax;");
    asm("loc_65C14DA: calll *0xC(%ecx);");
    asm("loc_65C14DD: mov _data_65CA0C4,%eax;");
    asm("loc_65C14E2: mov (%eax),%edx;");
    asm("loc_65C14E4: push $_data_65CA0CC;");
    asm("loc_65C14E9: push $_data_65C71E4;");
    asm("loc_65C14EE: push %eax;");
    asm("loc_65C14EF: calll *(%edx);");
    asm("loc_65C14F1: mov _data_65CA0C4,%eax;");
    asm("loc_65C14F6: mov (%eax),%ecx;");
    asm("loc_65C14F8: push $_data_65CA0D4;");
    asm("loc_65C14FD: push $_data_65C71D4;");
    asm("loc_65C1502: push %eax;");
    asm("loc_65C1503: calll *(%ecx);");
    asm("loc_65C1505: mov _data_65CA0C4,%eax;");
    asm("loc_65C150A: mov (%eax),%edx;");
    asm("loc_65C150C: push $_data_65CA0D8;");
    asm("loc_65C1511: push $_data_65C71C4;");
    asm("loc_65C1516: push %eax;");
    asm("loc_65C1517: calll *(%edx);");
    asm("loc_65C1519: mov _data_65CA0C4,%eax;");
    asm("loc_65C151E: mov (%eax),%ecx;");
    asm("loc_65C1520: push $_data_65CA0FC;");
    asm("loc_65C1525: push $_data_65C71B0;");
    asm("loc_65C152A: push %eax;");
    asm("loc_65C152B: calll *(%ecx);");
    asm("loc_65C152D: mov _data_65CA0C4,%eax;");
    asm("loc_65C1532: mov (%eax),%edx;");
    asm("loc_65C1534: push $_data_65CA0D0;");
    asm("loc_65C1539: push $_data_65C71A0;");
    asm("loc_65C153E: push %eax;");
    asm("loc_65C153F: calll *(%edx);");
    asm("loc_65C1541: mov _data_65CA0C4,%eax;");
    asm("loc_65C1546: mov (%eax),%ecx;");
    asm("loc_65C1548: push $_data_65CA0C0;");
    asm("loc_65C154D: push $_data_65C7190;");
    asm("loc_65C1552: push %eax;");
    asm("loc_65C1553: calll *(%ecx);");
    asm("loc_65C1555: mov $_data_65C7180,%ecx;");
    asm("loc_65C155A: mov %ecx,0x18(%esp);");
    asm("loc_65C155E: mov $8,%eax;");
    asm("loc_65C1563: push $_data_65CA11C;");
    asm("loc_65C1568: mov %eax,0x18(%esp);");
    asm("loc_65C156C: mov _data_65CA0F4,%eax;");
    asm("loc_65C1571: mov (%eax),%edx;");
    asm("loc_65C1573: lea 0x18(%esp),%ecx;");
    asm("loc_65C1577: push %ecx;");
    asm("loc_65C1578: push %eax;");
    asm("loc_65C1579: calll *0xC(%edx);");
    asm("loc_65C157C: test %eax,%eax;");
    asm("loc_65C157E: jne loc_65C1593;");
    asm("loc_65C1580: mov _data_65CA114,%ecx;");
    asm("loc_65C1586: mov _data_65CA11C,%eax;");
    asm("loc_65C158B: mov (%eax),%edx;");
    asm("loc_65C158D: push %ecx;");
    asm("loc_65C158E: push %ecx;");
    asm("loc_65C158F: push %eax;");
    asm("loc_65C1590: calll *0xC(%edx);");
    asm("loc_65C1593: cmp %edi,%esi;");
    asm("loc_65C1595: je loc_65C159D;");
    asm("loc_65C1597: mov (%esi),%eax;");
    asm("loc_65C1599: push %esi;");
    asm("loc_65C159A: calll *8(%eax);");
    asm("loc_65C159D: mov 0xB(%esp),%al;");
    asm("loc_65C15A1: pop %esi;");
    asm("loc_65C15A2: pop %edi;");
    asm("loc_65C15A3: add $0x350,%esp;");
    asm("loc_65C15A9: ret;");
    asm("loc_65C15AA: push $_data_65C7158;");
    asm("loc_65C15AF: call _sub_65C15D0;");
    asm("loc_65C15B4: add $4,%esp;");
    asm("loc_65C15B7: xor %al,%al;");
    asm("loc_65C15B9: pop %edi;");
    asm("loc_65C15BA: add $0x350,%esp;");
    asm("loc_65C15C0: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C15D0() // _sub_65C15D0
{
    __DEBUG_ASM(65C15D0);
    // chunk 0x65C15D0 _sub_65C15D0
    asm("loc_65C15D0: mov 4(%esp),%eax;");
    asm("loc_65C15D4: sub $0x100,%esp;");
    asm("loc_65C15DA: test %eax,%eax;");
    asm("loc_65C15DC: je loc_65C1600;");
    asm("loc_65C15DE: lea 0x108(%esp),%ecx;");
    asm("loc_65C15E5: push %ecx;");
    asm("loc_65C15E6: push %eax;");
    asm("loc_65C15E7: lea 8(%esp),%edx;");
    asm("loc_65C15EB: push %edx;");
    asm("loc_65C15EC: calll *_import_65C70A4;");
    asm("loc_65C15F2: add $0xC,%esp;");
    asm("loc_65C15F5: lea (%esp),%eax;");
    asm("loc_65C15F9: push %eax;");
    asm("loc_65C15FA: calll *_import_65C7010;");
    asm("loc_65C1600: add $0x100,%esp;");
    asm("loc_65C1606: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C1610() // ?OpenData@DALib@@YAXPBD@Z
{
    __DEBUG_ASM(65C1610);
    // chunk 0x65C1610 _sub_65C1610
    asm("loc_65C1610: sub $0x34,%esp;");
    asm("loc_65C1613: push %edi;");
    asm("loc_65C1614: xor %eax,%eax;");
    asm("loc_65C1616: movl $_data_65C7370,8(%esp);");
    asm("loc_65C161E: mov $0xB,%ecx;");
    asm("loc_65C1623: lea 0xC(%esp),%edi;");
    asm("loc_65C1627: rep stos %eax,(%edi);");
    asm("loc_65C1629: mov 0x3C(%esp),%eax;");
    asm("loc_65C162D: push $_data_65CA0F0;");
    asm("loc_65C1632: mov %eax,0x14(%esp);");
    asm("loc_65C1636: mov _data_65CA0F4,%eax;");
    asm("loc_65C163B: lea 8(%esp),%edx;");
    asm("loc_65C163F: push %edx;");
    asm("loc_65C1640: movl $0x80000000,0x1C(%esp);");
    asm("loc_65C1648: movl $1,0x20(%esp);");
    asm("loc_65C1650: movl $3,0x28(%esp);");
    asm("loc_65C1658: movl $0x8000080,0x2C(%esp);");
    asm("loc_65C1660: movl $0x34,0xC(%esp);");
    asm("loc_65C1668: movl $0xFFFFFFFF,0x3C(%esp);");
    asm("loc_65C1670: movl $_data_65C736C,0x14(%esp);");
    asm("loc_65C1678: mov (%eax),%ecx;");
    asm("loc_65C167A: push %eax;");
    asm("loc_65C167B: calll *0xC(%ecx);");
    asm("loc_65C167E: pop %edi;");
    asm("loc_65C167F: add $0x34,%esp;");
    asm("loc_65C1682: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C1690() // ?CloseData@DALib@@YAXXZ
{
    __DEBUG_ASM(65C1690);
    // chunk 0x65C1690 _sub_65C1690
    asm("loc_65C1690: mov _data_65CA0F0,%eax;");
    asm("loc_65C1695: test %eax,%eax;");
    asm("loc_65C1697: je loc_65C16AE;");
    asm("loc_65C1699: mov (%eax),%ecx;");
    asm("loc_65C169B: push %eax;");
    asm("loc_65C169C: calll *8(%ecx);");
    asm("loc_65C169F: mov %eax,_data_65CA0BC;");
    asm("loc_65C16A4: movl $0,_data_65CA0F0;");
    asm("loc_65C16AE: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C16B0() // ?Shutdown@DALib@@YAXPAUHWND__@@@Z
{
    __DEBUG_ASM(65C16B0);
    // chunk 0x65C16B0 _sub_65C16B0
    asm("loc_65C16B0: push %ebp;");
    asm("loc_65C16B1: mov _import_65C7010,%ebp;");
    asm("loc_65C16B7: push %esi;");
    asm("loc_65C16B8: push $_data_65C742C;");
    asm("loc_65C16BD: call *%ebp;");
    asm("loc_65C16BF: mov _data_65CA11C,%eax;");
    asm("loc_65C16C4: xor %esi,%esi;");
    asm("loc_65C16C6: cmp %esi,%eax;");
    asm("loc_65C16C8: je loc_65C16D5;");
    asm("loc_65C16CA: mov (%eax),%ecx;");
    asm("loc_65C16CC: push %eax;");
    asm("loc_65C16CD: calll *0x24(%ecx);");
    asm("loc_65C16D0: mov _data_65CA11C,%eax;");
    asm("loc_65C16D5: cmp %esi,%eax;");
    asm("loc_65C16D7: push %ebx;");
    asm("loc_65C16D8: mov _data_65CA0E0,%ebx;");
    asm("loc_65C16DE: je loc_65C16F1;");
    asm("loc_65C16E0: mov (%eax),%edx;");
    asm("loc_65C16E2: push %eax;");
    asm("loc_65C16E3: calll *8(%edx);");
    asm("loc_65C16E6: mov %eax,_data_65CA0BC;");
    asm("loc_65C16EB: mov %esi,_data_65CA11C;");
    asm("loc_65C16F1: mov _data_65CA0D0,%eax;");
    asm("loc_65C16F6: cmp %esi,%eax;");
    asm("loc_65C16F8: je loc_65C170B;");
    asm("loc_65C16FA: mov (%eax),%ecx;");
    asm("loc_65C16FC: push %eax;");
    asm("loc_65C16FD: calll *8(%ecx);");
    asm("loc_65C1700: mov %eax,_data_65CA0BC;");
    asm("loc_65C1705: mov %esi,_data_65CA0D0;");
    asm("loc_65C170B: mov _data_65CA0CC,%eax;");
    asm("loc_65C1710: cmp %esi,%eax;");
    asm("loc_65C1712: je loc_65C1725;");
    asm("loc_65C1714: mov (%eax),%edx;");
    asm("loc_65C1716: push %eax;");
    asm("loc_65C1717: calll *8(%edx);");
    asm("loc_65C171A: mov %eax,_data_65CA0BC;");
    asm("loc_65C171F: mov %esi,_data_65CA0CC;");
    asm("loc_65C1725: mov _data_65CA0D4,%eax;");
    asm("loc_65C172A: cmp %esi,%eax;");
    asm("loc_65C172C: je loc_65C173F;");
    asm("loc_65C172E: mov (%eax),%ecx;");
    asm("loc_65C1730: push %eax;");
    asm("loc_65C1731: calll *8(%ecx);");
    asm("loc_65C1734: mov %eax,_data_65CA0BC;");
    asm("loc_65C1739: mov %esi,_data_65CA0D4;");
    asm("loc_65C173F: mov _data_65CA0D8,%eax;");
    asm("loc_65C1744: cmp %esi,%eax;");
    asm("loc_65C1746: je loc_65C1759;");
    asm("loc_65C1748: mov (%eax),%edx;");
    asm("loc_65C174A: push %eax;");
    asm("loc_65C174B: calll *8(%edx);");
    asm("loc_65C174E: mov %eax,_data_65CA0BC;");
    asm("loc_65C1753: mov %esi,_data_65CA0D8;");
    asm("loc_65C1759: mov _data_65CA0FC,%eax;");
    asm("loc_65C175E: cmp %esi,%eax;");
    asm("loc_65C1760: je loc_65C1773;");
    asm("loc_65C1762: mov (%eax),%ecx;");
    asm("loc_65C1764: push %eax;");
    asm("loc_65C1765: calll *8(%ecx);");
    asm("loc_65C1768: mov %eax,_data_65CA0BC;");
    asm("loc_65C176D: mov %esi,_data_65CA0FC;");
    asm("loc_65C1773: mov _data_65CA0C0,%eax;");
    asm("loc_65C1778: cmp %esi,%eax;");
    asm("loc_65C177A: je loc_65C178D;");
    asm("loc_65C177C: mov (%eax),%edx;");
    asm("loc_65C177E: push %eax;");
    asm("loc_65C177F: calll *8(%edx);");
    asm("loc_65C1782: mov %eax,_data_65CA0BC;");
    asm("loc_65C1787: mov %esi,_data_65CA0C0;");
    asm("loc_65C178D: mov _data_65CA0C4,%eax;");
    asm("loc_65C1792: cmp %esi,%eax;");
    asm("loc_65C1794: je loc_65C17A7;");
    asm("loc_65C1796: mov (%eax),%ecx;");
    asm("loc_65C1798: push %eax;");
    asm("loc_65C1799: calll *8(%ecx);");
    asm("loc_65C179C: mov %eax,_data_65CA0BC;");
    asm("loc_65C17A1: mov %esi,_data_65CA0C4;");
    asm("loc_65C17A7: cmp %esi,_data_65CA0BC;");
    asm("loc_65C17AD: je loc_65C17D4;");
    asm("loc_65C17AF: mov _import_65C7004,%edx;");
    asm("loc_65C17B5: push $_data_65C740C;");
    asm("loc_65C17BA: push $0x14E;");
    asm("loc_65C17BF: push $_data_65C73E4;");
    asm("loc_65C17C4: mov $0x100002,%eax;");
    asm("loc_65C17C9: push $_data_65C73C8;");
    asm("loc_65C17CE: push %eax;");
    asm("loc_65C17CF: calll *(%edx);");
    asm("loc_65C17D1: add $0x14,%esp;");
    asm("loc_65C17D4: mov _data_65CA0DC,%eax;");
    asm("loc_65C17D9: cmp %esi,%eax;");
    asm("loc_65C17DB: je loc_65C17EE;");
    asm("loc_65C17DD: mov (%eax),%ecx;");
    asm("loc_65C17DF: push %eax;");
    asm("loc_65C17E0: calll *8(%ecx);");
    asm("loc_65C17E3: mov %eax,_data_65CA0BC;");
    asm("loc_65C17E8: mov %esi,_data_65CA0DC;");
    asm("loc_65C17EE: mov _data_65CA104,%eax;");
    asm("loc_65C17F3: cmp %esi,%eax;");
    asm("loc_65C17F5: je loc_65C1808;");
    asm("loc_65C17F7: mov (%eax),%edx;");
    asm("loc_65C17F9: push %eax;");
    asm("loc_65C17FA: calll *8(%edx);");
    asm("loc_65C17FD: mov %eax,_data_65CA0BC;");
    asm("loc_65C1802: mov %esi,_data_65CA104;");
    asm("loc_65C1808: mov _data_65CA100,%eax;");
    asm("loc_65C180D: cmp %esi,%eax;");
    asm("loc_65C180F: je loc_65C1822;");
    asm("loc_65C1811: mov (%eax),%ecx;");
    asm("loc_65C1813: push %eax;");
    asm("loc_65C1814: calll *8(%ecx);");
    asm("loc_65C1817: mov %eax,_data_65CA0BC;");
    asm("loc_65C181C: mov %esi,_data_65CA100;");
    asm("loc_65C1822: mov _data_65CA114,%eax;");
    asm("loc_65C1827: cmp %esi,%eax;");
    asm("loc_65C1829: je loc_65C1856;");
    asm("loc_65C182B: mov (%eax),%edx;");
    asm("loc_65C182D: push %eax;");
    asm("loc_65C182E: calll *0x24(%edx);");
    asm("loc_65C1831: mov _data_65CA114,%eax;");
    asm("loc_65C1836: mov (%eax),%ecx;");
    asm("loc_65C1838: push %eax;");
    asm("loc_65C1839: calll *0x38(%ecx);");
    asm("loc_65C183C: mov _data_65CA114,%eax;");
    asm("loc_65C1841: cmp %esi,%eax;");
    asm("loc_65C1843: je loc_65C1856;");
    asm("loc_65C1845: mov (%eax),%edx;");
    asm("loc_65C1847: push %eax;");
    asm("loc_65C1848: calll *8(%edx);");
    asm("loc_65C184B: mov %eax,_data_65CA0BC;");
    asm("loc_65C1850: mov %esi,_data_65CA114;");
    asm("loc_65C1856: mov _data_65CA118,%eax;");
    asm("loc_65C185B: cmp %esi,%eax;");
    asm("loc_65C185D: je loc_65C1870;");
    asm("loc_65C185F: mov (%eax),%ecx;");
    asm("loc_65C1861: push %eax;");
    asm("loc_65C1862: calll *8(%ecx);");
    asm("loc_65C1865: mov %eax,_data_65CA0BC;");
    asm("loc_65C186A: mov %esi,_data_65CA118;");
    asm("loc_65C1870: mov _data_65CA110,%eax;");
    asm("loc_65C1875: cmp %esi,%eax;");
    asm("loc_65C1877: je loc_65C1899;");
    asm("loc_65C1879: mov (%eax),%edx;");
    asm("loc_65C187B: push %eax;");
    asm("loc_65C187C: calll *0x10(%edx);");
    asm("loc_65C187F: mov _data_65CA110,%eax;");
    asm("loc_65C1884: cmp %esi,%eax;");
    asm("loc_65C1886: je loc_65C1899;");
    asm("loc_65C1888: mov (%eax),%ecx;");
    asm("loc_65C188A: push %eax;");
    asm("loc_65C188B: calll *8(%ecx);");
    asm("loc_65C188E: mov %eax,_data_65CA0BC;");
    asm("loc_65C1893: mov %esi,_data_65CA110;");
    asm("loc_65C1899: mov _data_65CA0C8,%eax;");
    asm("loc_65C189E: cmp %esi,%eax;");
    asm("loc_65C18A0: je loc_65C18B3;");
    asm("loc_65C18A2: mov (%eax),%edx;");
    asm("loc_65C18A4: push %eax;");
    asm("loc_65C18A5: calll *8(%edx);");
    asm("loc_65C18A8: mov %eax,_data_65CA0BC;");
    asm("loc_65C18AD: mov %esi,_data_65CA0C8;");
    asm("loc_65C18B3: mov _data_65CA0F8,%eax;");
    asm("loc_65C18B8: cmp %esi,%eax;");
    asm("loc_65C18BA: je loc_65C18DF;");
    asm("loc_65C18BC: mov (%eax),%ecx;");
    asm("loc_65C18BE: push %eax;");
    asm("loc_65C18BF: calll *0xA8(%ecx);");
    asm("loc_65C18C5: mov _data_65CA0F8,%eax;");
    asm("loc_65C18CA: cmp %esi,%eax;");
    asm("loc_65C18CC: je loc_65C18DF;");
    asm("loc_65C18CE: mov (%eax),%edx;");
    asm("loc_65C18D0: push %eax;");
    asm("loc_65C18D1: calll *8(%edx);");
    asm("loc_65C18D4: mov %eax,_data_65CA0BC;");
    asm("loc_65C18D9: mov %esi,_data_65CA0F8;");
    asm("loc_65C18DF: mov _data_65CA0E4,%eax;");
    asm("loc_65C18E4: cmp %esi,%eax;");
    asm("loc_65C18E6: je loc_65C18F9;");
    asm("loc_65C18E8: mov (%eax),%ecx;");
    asm("loc_65C18EA: push %eax;");
    asm("loc_65C18EB: calll *8(%ecx);");
    asm("loc_65C18EE: mov %eax,_data_65CA0BC;");
    asm("loc_65C18F3: mov %esi,_data_65CA0E4;");
    asm("loc_65C18F9: mov _data_65CA0E8,%eax;");
    asm("loc_65C18FE: cmp %esi,%eax;");
    asm("loc_65C1900: je loc_65C1913;");
    asm("loc_65C1902: mov (%eax),%edx;");
    asm("loc_65C1904: push %eax;");
    asm("loc_65C1905: calll *8(%edx);");
    asm("loc_65C1908: mov %eax,_data_65CA0BC;");
    asm("loc_65C190D: mov %esi,_data_65CA0E8;");
    asm("loc_65C1913: mov _data_65CA0EC,%eax;");
    asm("loc_65C1918: cmp %esi,%eax;");
    asm("loc_65C191A: je loc_65C192D;");
    asm("loc_65C191C: mov (%eax),%ecx;");
    asm("loc_65C191E: push %eax;");
    asm("loc_65C191F: calll *8(%ecx);");
    asm("loc_65C1922: mov %eax,_data_65CA0BC;");
    asm("loc_65C1927: mov %esi,_data_65CA0EC;");
    asm("loc_65C192D: mov _data_65CA0E0,%eax;");
    asm("loc_65C1932: cmp %esi,%eax;");
    asm("loc_65C1934: je loc_65C1956;");
    asm("loc_65C1936: mov (%eax),%edx;");
    asm("loc_65C1938: push %eax;");
    asm("loc_65C1939: calll *0x10(%edx);");
    asm("loc_65C193C: mov _data_65CA0E0,%eax;");
    asm("loc_65C1941: cmp %esi,%eax;");
    asm("loc_65C1943: je loc_65C1956;");
    asm("loc_65C1945: mov (%eax),%ecx;");
    asm("loc_65C1947: push %eax;");
    asm("loc_65C1948: calll *8(%ecx);");
    asm("loc_65C194B: mov %eax,_data_65CA0BC;");
    asm("loc_65C1950: mov %esi,_data_65CA0E0;");
    asm("loc_65C1956: cmp %esi,_data_65CA0BC;");
    asm("loc_65C195C: je loc_65C1994;");
    asm("loc_65C195E: push %edi;");
    asm("loc_65C195F: mov $0x100002,%edi;");
    asm("loc_65C1964: mov _import_65C7004,%edx;");
    asm("loc_65C196A: push $_data_65C7398;");
    asm("loc_65C196F: push $0x178;");
    asm("loc_65C1974: push $_data_65C73E4;");
    asm("loc_65C1979: push $_data_65C73C8;");
    asm("loc_65C197E: push %edi;");
    asm("loc_65C197F: calll *(%edx);");
    asm("loc_65C1981: mov (%ebx),%eax;");
    asm("loc_65C1983: add $0x14,%esp;");
    asm("loc_65C1986: push %ebx;");
    asm("loc_65C1987: calll *8(%eax);");
    asm("loc_65C198A: cmp %esi,%eax;");
    asm("loc_65C198C: mov %eax,_data_65CA0BC;");
    asm("loc_65C1991: jne loc_65C1964;");
    asm("loc_65C1993: pop %edi;");
    asm("loc_65C1994: mov _data_65CA0F4,%eax;");
    asm("loc_65C1999: cmp %esi,%eax;");
    asm("loc_65C199B: pop %ebx;");
    asm("loc_65C199C: je loc_65C19AA;");
    asm("loc_65C199E: mov (%eax),%ecx;");
    asm("loc_65C19A0: push %eax;");
    asm("loc_65C19A1: calll *0x24(%ecx);");
    asm("loc_65C19A4: mov %esi,_data_65CA0F4;");
    asm("loc_65C19AA: push $_data_65C737C;");
    asm("loc_65C19AF: call *%ebp;");
    asm("loc_65C19B1: pop %esi;");
    asm("loc_65C19B2: pop %ebp;");
    asm("loc_65C19B3: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C19C0() // _sub_65C19C0
{
    __DEBUG_ASM(65C19C0);
    // chunk 0x65C19C0 _sub_65C19C0
    asm("loc_65C19C0: calll *_import_65C70D8;");
    asm("loc_65C19C6: mov %eax,_data_65CA120;");
    asm("loc_65C19CB: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C19D0() // ?HandleClientMsg@CDPClient@@KGJPAXK0@Z
{
    asm("jmp dgb_65C19D0;"); // jumptable skip
    asm(".long _jmp_65C1D58;"); // jumptable address
    __DEBUG_ASM(65C19D0);
    // chunk 0x65C19D0 _sub_65C19D0
    asm("loc_65C19D0: push $0xFFFFFFFF;");
    asm("loc_65C19D2: push $_sub_65C6D7C;");
    asm("loc_65C19D7: mov %fs:0,%eax;");
    asm("loc_65C19DD: push %eax;");
    asm("loc_65C19DE: mov %esp,%fs:0;");
    asm("loc_65C19E5: sub $0x60,%esp;");
    asm("loc_65C19E8: mov 0x74(%esp),%eax;");
    asm("loc_65C19EC: push %ebx;");
    asm("loc_65C19ED: push %esi;");
    asm("loc_65C19EE: xor %esi,%esi;");
    asm("loc_65C19F0: add $0xFFFD,%eax;");
    asm("loc_65C19F5: cmp $0x13,%eax;");
    asm("loc_65C19F8: push %edi;");
    asm("loc_65C19F9: mov %esi,0xC(%esp);");
    asm("loc_65C19FD: ja loc_65C1D3F;");
    asm("loc_65C1A03: movzbl _data_65C1D70(%eax),%ecx;");
    asm("loc_65C1A0A: jmpl *_jmp_65C1D58(,%ecx,4);");
    asm("loc_65C1A11: mov 0x7C(%esp),%ebx;");
    asm("loc_65C1A15: mov 4(%ebx),%eax;");
    asm("loc_65C1A18: push %esi;");
    asm("loc_65C1A19: lea 0x14(%esp),%ecx;");
    asm("loc_65C1A1D: push %ecx;");
    asm("loc_65C1A1E: movl $0x5C,0x18(%esp);");
    asm("loc_65C1A26: mov (%eax),%edx;");
    asm("loc_65C1A28: push %eax;");
    asm("loc_65C1A29: calll *0x50(%edx);");
    asm("loc_65C1A2C: calll *_import_65C70D8;");
    asm("loc_65C1A32: mov 0x84(%esp),%edi;");
    asm("loc_65C1A39: mov %eax,_data_65CA120;");
    asm("loc_65C1A3E: cmpl $1,0x10(%edi);");
    asm("loc_65C1A42: jbe loc_65C1AA8;");
    asm("loc_65C1A44: push $0x20;");
    asm("loc_65C1A46: call _sub_65C6A66;");
    asm("loc_65C1A4B: add $4,%esp;");
    asm("loc_65C1A4E: mov %eax,0x7C(%esp);");
    asm("loc_65C1A52: cmp %esi,%eax;");
    asm("loc_65C1A54: mov %esi,0x74(%esp);");
    asm("loc_65C1A58: je loc_65C1A63;");
    asm("loc_65C1A5A: mov %eax,%ecx;");
    asm("loc_65C1A5C: call _sub_65C41C0;");
    asm("loc_65C1A61: jmp loc_65C1A65;");
    asm("loc_65C1A63: xor %eax,%eax;");
    asm("loc_65C1A65: mov 4(%edi),%edx;");
    asm("loc_65C1A68: mov %edx,0x14(%eax);");
    asm("loc_65C1A6B: mov 0x10(%edi),%ecx;");
    asm("loc_65C1A6E: mov %ecx,0xC(%eax);");
    asm("loc_65C1A71: mov 0xC(%edi),%edx;");
    asm("loc_65C1A74: mov %edx,8(%eax);");
    asm("loc_65C1A77: mov 0x14(%edi),%ecx;");
    asm("loc_65C1A7A: mov %ecx,0x10(%eax);");
    asm("loc_65C1A7D: push %eax;");
    asm("loc_65C1A7E: lea 0x10(%ebx),%ecx;");
    asm("loc_65C1A81: movl $0xFFFFFFFF,0x78(%esp);");
    asm("loc_65C1A89: mov %ebx,0x18(%eax);");
    asm("loc_65C1A8C: call _sub_65C4320;");
    asm("loc_65C1A91: mov 0x14(%esp),%ecx;");
    asm("loc_65C1A95: movl $0x15800E,0xC(%esp);");
    asm("loc_65C1A9D: mov %ecx,_data_65CA1C0;");
    asm("loc_65C1AA3: jmp loc_65C1D3F;");
    asm("loc_65C1AA8: mov 0x14(%esp),%ecx;");
    asm("loc_65C1AAC: mov %eax,_data_65CA1B0;");
    asm("loc_65C1AB1: mov 0xC(%edi),%edx;");
    asm("loc_65C1AB4: movzbl (%edx),%eax;");
    asm("loc_65C1AB7: mov %eax,_data_65CA020;");
    asm("loc_65C1ABC: incl _data_65CA1B8;");
    asm("loc_65C1AC2: mov %ecx,_data_65CA1C0;");
    asm("loc_65C1AC8: jmp loc_65C1D3F;");
    asm("loc_65C1ACD: mov 0x7C(%esp),%edi;");
    asm("loc_65C1AD1: cmp %esi,%edi;");
    asm("loc_65C1AD3: je loc_65C1D3F;");
    asm("loc_65C1AD9: calll *_import_65C70D8;");
    asm("loc_65C1ADF: push $0x20;");
    asm("loc_65C1AE1: mov %eax,_data_65CA120;");
    asm("loc_65C1AE6: call _sub_65C6A66;");
    asm("loc_65C1AEB: add $4,%esp;");
    asm("loc_65C1AEE: mov %eax,0x7C(%esp);");
    asm("loc_65C1AF2: cmp %esi,%eax;");
    asm("loc_65C1AF4: mov $1,%ebx;");
    asm("loc_65C1AF9: mov %ebx,0x74(%esp);");
    asm("loc_65C1AFD: je loc_65C1B08;");
    asm("loc_65C1AFF: mov %eax,%ecx;");
    asm("loc_65C1B01: call _sub_65C41C0;");
    asm("loc_65C1B06: jmp loc_65C1B0A;");
    asm("loc_65C1B08: xor %eax,%eax;");
    asm("loc_65C1B0A: mov 0x84(%esp),%edx;");
    asm("loc_65C1B11: mov %edi,0x18(%eax);");
    asm("loc_65C1B14: mov %ebx,4(%eax);");
    asm("loc_65C1B17: mov 0xC(%edx),%ecx;");
    asm("loc_65C1B1A: mov %ecx,0x1C(%eax);");
    asm("loc_65C1B1D: push %eax;");
    asm("loc_65C1B1E: lea 0x10(%edi),%ecx;");
    asm("loc_65C1B21: movl $0xFFFFFFFF,0x78(%esp);");
    asm("loc_65C1B29: call _sub_65C4320;");
    asm("loc_65C1B2E: jmp loc_65C1D3F;");
    asm("loc_65C1B33: mov 0x7C(%esp),%eax;");
    asm("loc_65C1B37: cmp %esi,%eax;");
    asm("loc_65C1B39: je loc_65C1D3F;");
    asm("loc_65C1B3F: mov 0x84(%esp),%edx;");
    asm("loc_65C1B46: mov 4(%edx),%ecx;");
    asm("loc_65C1B49: cmp 0x78(%eax),%ecx;");
    asm("loc_65C1B4C: jne loc_65C1D3F;");
    asm("loc_65C1B52: mov %esi,0x78(%eax);");
    asm("loc_65C1B55: jmp loc_65C1D3F;");
    asm("loc_65C1B5A: mov 0x7C(%esp),%edi;");
    asm("loc_65C1B5E: cmp %esi,%edi;");
    asm("loc_65C1B60: je loc_65C1D3F;");
    asm("loc_65C1B66: calll *_import_65C70D8;");
    asm("loc_65C1B6C: push $0x20;");
    asm("loc_65C1B6E: mov %eax,_data_65CA120;");
    asm("loc_65C1B73: call _sub_65C6A66;");
    asm("loc_65C1B78: add $4,%esp;");
    asm("loc_65C1B7B: mov %eax,0x7C(%esp);");
    asm("loc_65C1B7F: cmp %esi,%eax;");
    asm("loc_65C1B81: movl $2,0x74(%esp);");
    asm("loc_65C1B89: je loc_65C1B94;");
    asm("loc_65C1B8B: mov %eax,%ecx;");
    asm("loc_65C1B8D: call _sub_65C41C0;");
    asm("loc_65C1B92: jmp loc_65C1B96;");
    asm("loc_65C1B94: xor %eax,%eax;");
    asm("loc_65C1B96: push %eax;");
    asm("loc_65C1B97: lea 0x10(%edi),%ecx;");
    asm("loc_65C1B9A: movl $0xFFFFFFFF,0x78(%esp);");
    asm("loc_65C1BA2: mov %edi,0x18(%eax);");
    asm("loc_65C1BA5: movl $3,4(%eax);");
    asm("loc_65C1BAC: call _sub_65C4320;");
    asm("loc_65C1BB1: jmp loc_65C1D3F;");
    asm("loc_65C1BB6: mov 0x7C(%esp),%edi;");
    asm("loc_65C1BBA: cmp %esi,%edi;");
    asm("loc_65C1BBC: je loc_65C1D3F;");
    asm("loc_65C1BC2: push $0x20;");
    asm("loc_65C1BC4: call _sub_65C6A66;");
    asm("loc_65C1BC9: add $4,%esp;");
    asm("loc_65C1BCC: mov %eax,0x80(%esp);");
    asm("loc_65C1BD3: cmp %esi,%eax;");
    asm("loc_65C1BD5: movl $3,0x74(%esp);");
    asm("loc_65C1BDD: je loc_65C1BEF;");
    asm("loc_65C1BDF: mov %eax,%ecx;");
    asm("loc_65C1BE1: call _sub_65C41C0;");
    asm("loc_65C1BE6: mov %eax,0x80(%esp);");
    asm("loc_65C1BED: jmp loc_65C1BF8;");
    asm("loc_65C1BEF: mov %esi,0x80(%esp);");
    asm("loc_65C1BF6: mov %esi,%eax;");
    asm("loc_65C1BF8: mov 0x84(%esp),%ebx;");
    asm("loc_65C1BFF: mov %edi,0x18(%eax);");
    asm("loc_65C1C02: movl $4,4(%eax);");
    asm("loc_65C1C09: mov 4(%ebx),%eax;");
    asm("loc_65C1C0C: mov (%eax),%edx;");
    asm("loc_65C1C0E: push %ebp;");
    asm("loc_65C1C0F: push %eax;");
    asm("loc_65C1C10: movl $0xFFFFFFFF,0x7C(%esp);");
    asm("loc_65C1C18: calll *4(%edx);");
    asm("loc_65C1C1B: mov _import_65C7084,%edi;");
    asm("loc_65C1C21: push $0x20;");
    asm("loc_65C1C23: call *%edi;");
    asm("loc_65C1C25: mov %eax,%ebp;");
    asm("loc_65C1C27: movl $0x20,(%ebp);");
    asm("loc_65C1C2E: mov 4(%ebx),%eax;");
    asm("loc_65C1C31: mov %eax,4(%ebp);");
    asm("loc_65C1C34: mov %esi,8(%ebp);");
    asm("loc_65C1C37: mov 0x10(%ebx),%eax;");
    asm("loc_65C1C3A: add $4,%esp;");
    asm("loc_65C1C3D: cmp %esi,%eax;");
    asm("loc_65C1C3F: je loc_65C1C6E;");
    asm("loc_65C1C41: mov 0x14(%ebx),%ecx;");
    asm("loc_65C1C44: push %ecx;");
    asm("loc_65C1C45: call *%edi;");
    asm("loc_65C1C47: mov %eax,0x10(%ebp);");
    asm("loc_65C1C4A: mov 0x14(%ebx),%ecx;");
    asm("loc_65C1C4D: mov %ecx,0x14(%ebp);");
    asm("loc_65C1C50: mov 0x10(%ebx),%esi;");
    asm("loc_65C1C53: mov %ecx,%edx;");
    asm("loc_65C1C55: shr $2,%ecx;");
    asm("loc_65C1C58: mov %eax,%edi;");
    asm("loc_65C1C5A: rep movsl (%esi),(%edi);");
    asm("loc_65C1C5C: mov %edx,%ecx;");
    asm("loc_65C1C5E: add $4,%esp;");
    asm("loc_65C1C61: and $3,%ecx;");
    asm("loc_65C1C64: rep movsb (%esi),(%edi);");
    asm("loc_65C1C66: mov _import_65C7084,%edi;");
    asm("loc_65C1C6C: jmp loc_65C1C74;");
    asm("loc_65C1C6E: mov %esi,0x10(%ebp);");
    asm("loc_65C1C71: mov %esi,0x14(%ebp);");
    asm("loc_65C1C74: mov 0x18(%ebx),%eax;");
    asm("loc_65C1C77: mov %eax,0x18(%ebp);");
    asm("loc_65C1C7A: mov 0x1C(%ebx),%ecx;");
    asm("loc_65C1C7D: mov %ecx,0x1C(%ebp);");
    asm("loc_65C1C80: mov 0xC(%ebx),%esi;");
    asm("loc_65C1C83: push $0x48;");
    asm("loc_65C1C85: call *%edi;");
    asm("loc_65C1C87: mov %eax,%ebx;");
    asm("loc_65C1C89: movl $0x48,(%ebx);");
    asm("loc_65C1C8F: mov 4(%esi),%edx;");
    asm("loc_65C1C92: mov %edx,4(%ebx);");
    asm("loc_65C1C95: lea 8(%esi),%eax;");
    asm("loc_65C1C98: mov (%eax),%edx;");
    asm("loc_65C1C9A: lea 8(%ebx),%ecx;");
    asm("loc_65C1C9D: mov %edx,(%ecx);");
    asm("loc_65C1C9F: mov 4(%eax),%edx;");
    asm("loc_65C1CA2: mov %edx,4(%ecx);");
    asm("loc_65C1CA5: mov 8(%eax),%edx;");
    asm("loc_65C1CA8: mov %edx,8(%ecx);");
    asm("loc_65C1CAB: mov 0xC(%eax),%eax;");
    asm("loc_65C1CAE: mov %eax,0xC(%ecx);");
    asm("loc_65C1CB1: lea 0x18(%esi),%ecx;");
    asm("loc_65C1CB4: mov (%ecx),%eax;");
    asm("loc_65C1CB6: lea 0x18(%ebx),%edx;");
    asm("loc_65C1CB9: mov %eax,(%edx);");
    asm("loc_65C1CBB: mov 4(%ecx),%eax;");
    asm("loc_65C1CBE: mov %eax,4(%edx);");
    asm("loc_65C1CC1: mov 8(%ecx),%eax;");
    asm("loc_65C1CC4: mov %eax,8(%edx);");
    asm("loc_65C1CC7: mov 0xC(%ecx),%ecx;");
    asm("loc_65C1CCA: mov %ecx,0xC(%edx);");
    asm("loc_65C1CCD: mov 0x28(%esi),%edx;");
    asm("loc_65C1CD0: mov %edx,0x28(%ebx);");
    asm("loc_65C1CD3: mov 0x2C(%esi),%eax;");
    asm("loc_65C1CD6: mov %eax,0x2C(%ebx);");
    asm("loc_65C1CD9: mov 0x30(%esi),%ecx;");
    asm("loc_65C1CDC: push %ecx;");
    asm("loc_65C1CDD: calll *_import_65C70A8;");
    asm("loc_65C1CE3: lea 2(%eax,%eax),%edi;");
    asm("loc_65C1CE7: push %edi;");
    asm("loc_65C1CE8: calll *_import_65C7084;");
    asm("loc_65C1CEE: mov %eax,0x30(%ebx);");
    asm("loc_65C1CF1: mov 0x30(%esi),%esi;");
    asm("loc_65C1CF4: mov %edi,%ecx;");
    asm("loc_65C1CF6: mov %ecx,%edx;");
    asm("loc_65C1CF8: shr $2,%ecx;");
    asm("loc_65C1CFB: mov %eax,%edi;");
    asm("loc_65C1CFD: rep movsl (%esi),(%edi);");
    asm("loc_65C1CFF: xor %eax,%eax;");
    asm("loc_65C1D01: mov %edx,%ecx;");
    asm("loc_65C1D03: and $3,%ecx;");
    asm("loc_65C1D06: rep movsb (%esi),(%edi);");
    asm("loc_65C1D08: mov %eax,0x34(%ebx);");
    asm("loc_65C1D0B: mov %eax,0x38(%ebx);");
    asm("loc_65C1D0E: mov %eax,0x3C(%ebx);");
    asm("loc_65C1D11: mov %eax,0x40(%ebx);");
    asm("loc_65C1D14: mov %eax,0x44(%ebx);");
    asm("loc_65C1D17: mov 0x90(%esp),%eax;");
    asm("loc_65C1D1E: add $0xC,%esp;");
    asm("loc_65C1D21: mov %ebx,0xC(%ebp);");
    asm("loc_65C1D24: mov %ebp,8(%eax);");
    asm("loc_65C1D27: movl $0x20,0xC(%eax);");
    asm("loc_65C1D2E: push %eax;");
    asm("loc_65C1D2F: mov 0x84(%esp),%eax;");
    asm("loc_65C1D36: lea 0x10(%eax),%ecx;");
    asm("loc_65C1D39: call _sub_65C4320;");
    asm("loc_65C1D3E: pop %ebp;");
    asm("loc_65C1D3F: mov 0x6C(%esp),%ecx;");
    asm("loc_65C1D43: mov 0xC(%esp),%eax;");
    asm("loc_65C1D47: pop %edi;");
    asm("loc_65C1D48: pop %esi;");
    asm("loc_65C1D49: pop %ebx;");
    asm("loc_65C1D4A: mov %ecx,%fs:0;");
    asm("loc_65C1D51: add $0x6C,%esp;");
    asm("loc_65C1D54: ret $0xC;");
    asm("int3;"); // unreachable
    asm("_jmp_65C1D58: .long loc_65C1B33;");
    asm(".long loc_65C1ACD;");
    asm(".long loc_65C1BB6;");
    asm(".long loc_65C1A11;");
    asm(".long loc_65C1B5A;");
    asm(".long loc_65C1D3F;");
    asm(".long 0xCCCCCCCC;");
}
FIXUP_JUMP_TABLE(_sub_65C19D0);
_naked _weak void _sub_65C1D90() // ?DispatchMsgs@CDPClient@@QAEXK@Z
{
    asm("jmp dgb_65C1D90;"); // jumptable skip
    asm(".long _jmp_65C206C;"); // jumptable address
    __DEBUG_ASM(65C1D90);
    // chunk 0x65C1D90 _sub_65C1D90
    asm("loc_65C1D90: mov $0x8010,%eax;");
    asm("loc_65C1D95: call _sub_65C6AC0;");
    asm("loc_65C1D9A: push %ebx;");
    asm("loc_65C1D9B: push %ebp;");
    asm("loc_65C1D9C: push %esi;");
    asm("loc_65C1D9D: mov %ecx,%esi;");
    asm("loc_65C1D9F: mov 8(%esi),%al;");
    asm("loc_65C1DA2: test %al,%al;");
    asm("loc_65C1DA4: push %edi;");
    asm("loc_65C1DA5: je loc_65C1E1F;");
    asm("loc_65C1DA7: mov _data_65CA1B4,%eax;");
    asm("loc_65C1DAC: cmp _data_65CA1B8,%eax;");
    asm("loc_65C1DB2: jne loc_65C1E1F;");
    asm("loc_65C1DB4: mov _import_65C70D8,%edi;");
    asm("loc_65C1DBA: call *%edi;");
    asm("loc_65C1DBC: sub _data_65CA1AC,%eax;");
    asm("loc_65C1DC2: cmp $0x3E8,%eax;");
    asm("loc_65C1DC7: jb loc_65C1E1F;");
    asm("loc_65C1DC9: call *%edi;");
    asm("loc_65C1DCB: mov _data_65CA1B4,%ecx;");
    asm("loc_65C1DD1: inc %ecx;");
    asm("loc_65C1DD2: mov %eax,_data_65CA1AC;");
    asm("loc_65C1DD7: mov %ecx,_data_65CA1B4;");
    asm("loc_65C1DDD: mov 8(%esi),%al;");
    asm("loc_65C1DE0: test %al,%al;");
    asm("loc_65C1DE2: movb $1,0x13(%esp);");
    asm("loc_65C1DE7: je loc_65C1E1F;");
    asm("loc_65C1DE9: mov 4(%esi),%eax;");
    asm("loc_65C1DEC: push $0x108;");
    asm("loc_65C1DF1: lea 0x17(%esp),%ecx;");
    asm("loc_65C1DF5: mov %ecx,0x20(%esp);");
    asm("loc_65C1DF9: lea 0x18(%esp),%ecx;");
    asm("loc_65C1DFD: push %ecx;");
    asm("loc_65C1DFE: push $0;");
    asm("loc_65C1E00: push $0;");
    asm("loc_65C1E02: push $1;");
    asm("loc_65C1E04: lea 0x2C(%esp),%ecx;");
    asm("loc_65C1E08: push %ecx;");
    asm("loc_65C1E09: movl $0,0x2C(%esp);");
    asm("loc_65C1E11: movl $1,0x30(%esp);");
    asm("loc_65C1E19: mov (%eax),%edx;");
    asm("loc_65C1E1B: push %eax;");
    asm("loc_65C1E1C: calll *0x20(%edx);");
    asm("loc_65C1E1F: lea 0x3C(%esi),%edi;");
    asm("loc_65C1E22: mov %edi,%ecx;");
    asm("loc_65C1E24: call _sub_65C4300;");
    asm("loc_65C1E29: lea 0x10(%esi),%edx;");
    asm("loc_65C1E2C: push %edx;");
    asm("loc_65C1E2D: mov %edi,%ecx;");
    asm("loc_65C1E2F: call _sub_65C44E0;");
    asm("loc_65C1E34: mov %edi,%ecx;");
    asm("loc_65C1E36: call _sub_65C4390;");
    asm("loc_65C1E3B: mov %eax,%ebx;");
    asm("loc_65C1E3D: xor %ebp,%ebp;");
    asm("loc_65C1E3F: cmp %ebp,%ebx;");
    asm("loc_65C1E41: je loc_65C2055;");
    asm("loc_65C1E47: mov 4(%ebx),%eax;");
    asm("loc_65C1E4A: cmp $4,%eax;");
    asm("loc_65C1E4D: ja loc_65C2037;");
    asm("loc_65C1E53: jmpl *_jmp_65C206C(,%eax,4);");
    asm("loc_65C1E5A: mov _data_65CA1A4,%al;");
    asm("loc_65C1E5F: test $1,%al;");
    asm("loc_65C1E61: jne loc_65C1E85;");
    asm("loc_65C1E63: mov %al,%dl;");
    asm("loc_65C1E65: or $1,%dl;");
    asm("loc_65C1E68: mov $_data_65CA128,%ecx;");
    asm("loc_65C1E6D: mov %dl,_data_65CA1A4;");
    asm("loc_65C1E73: call _sub_65C1000;");
    asm("loc_65C1E78: push $_sub_65C2080;");
    asm("loc_65C1E7D: call _sub_65C6AAC;");
    asm("loc_65C1E82: add $4,%esp;");
    asm("loc_65C1E85: mov 0xC(%ebx),%eax;");
    asm("loc_65C1E88: mov 8(%ebx),%ecx;");
    asm("loc_65C1E8B: push $0x7FFF;");
    asm("loc_65C1E90: lea 0x24(%esp),%edx;");
    asm("loc_65C1E94: push %edx;");
    asm("loc_65C1E95: push %eax;");
    asm("loc_65C1E96: push %ecx;");
    asm("loc_65C1E97: mov $_data_65CA128,%ecx;");
    asm("loc_65C1E9C: call _sub_65C1110;");
    asm("loc_65C1EA1: cmp $1,%al;");
    asm("loc_65C1EA3: mov (%esi),%eax;");
    asm("loc_65C1EA5: jne loc_65C1EB3;");
    asm("loc_65C1EA7: mov _data_65CA1A0,%ecx;");
    asm("loc_65C1EAD: lea 0x20(%esp),%edx;");
    asm("loc_65C1EB1: jmp loc_65C1EB9;");
    asm("loc_65C1EB3: mov 0xC(%ebx),%ecx;");
    asm("loc_65C1EB6: mov 8(%ebx),%edx;");
    asm("loc_65C1EB9: push %ecx;");
    asm("loc_65C1EBA: mov %esi,%ecx;");
    asm("loc_65C1EBC: push %edx;");
    asm("loc_65C1EBD: calll *(%eax);");
    asm("loc_65C1EBF: mov 0x10(%ebx),%ecx;");
    asm("loc_65C1EC2: cmp %ebp,%ecx;");
    asm("loc_65C1EC4: je loc_65C2037;");
    asm("loc_65C1ECA: mov 4(%esi),%eax;");
    asm("loc_65C1ECD: mov (%eax),%edx;");
    asm("loc_65C1ECF: push %ebp;");
    asm("loc_65C1ED0: push %ecx;");
    asm("loc_65C1ED1: push %eax;");
    asm("loc_65C1ED2: calll *0x3C(%edx);");
    asm("loc_65C1ED5: jmp loc_65C2037;");
    asm("loc_65C1EDA: cmp %ebp,0x1C(%ebx);");
    asm("loc_65C1EDD: jne loc_65C1F2F;");
    asm("loc_65C1EDF: movb $1,8(%esi);");
    asm("loc_65C1EE3: mov 0x84(%esi),%eax;");
    asm("loc_65C1EE9: mov (%eax),%ebp;");
    asm("loc_65C1EEB: cmp %eax,%ebp;");
    asm("loc_65C1EED: mov %eax,0x14(%esp);");
    asm("loc_65C1EF1: je loc_65C1F2F;");
    asm("loc_65C1EF3: mov %ebp,%edi;");
    asm("loc_65C1EF5: mov 4(%edi),%eax;");
    asm("loc_65C1EF8: mov (%edi),%ecx;");
    asm("loc_65C1EFA: mov (%ebp),%ebp;");
    asm("loc_65C1EFD: mov %ecx,(%eax);");
    asm("loc_65C1EFF: mov (%edi),%edx;");
    asm("loc_65C1F01: mov 4(%edi),%eax;");
    asm("loc_65C1F04: push $0;");
    asm("loc_65C1F06: lea 8(%edi),%ecx;");
    asm("loc_65C1F09: mov %eax,4(%edx);");
    asm("loc_65C1F0C: call _sub_65C3690;");
    asm("loc_65C1F11: push %edi;");
    asm("loc_65C1F12: call _sub_65C6A60;");
    asm("loc_65C1F17: mov 0x88(%esi),%ecx;");
    asm("loc_65C1F1D: mov 0x18(%esp),%eax;");
    asm("loc_65C1F21: add $4,%esp;");
    asm("loc_65C1F24: dec %ecx;");
    asm("loc_65C1F25: cmp %eax,%ebp;");
    asm("loc_65C1F27: mov %ecx,0x88(%esi);");
    asm("loc_65C1F2D: jne loc_65C1EF3;");
    asm("loc_65C1F2F: mov 0x88(%esi),%eax;");
    asm("loc_65C1F35: test %eax,%eax;");
    asm("loc_65C1F37: je loc_65C1FB5;");
    asm("loc_65C1F39: mov 0x84(%esi),%ecx;");
    asm("loc_65C1F3F: mov (%ecx),%eax;");
    asm("loc_65C1F41: mov 0x20(%eax),%ecx;");
    asm("loc_65C1F44: mov _import_65C7070,%edx;");
    asm("loc_65C1F4A: add $8,%eax;");
    asm("loc_65C1F4D: test %ecx,%ecx;");
    asm("loc_65C1F4F: je loc_65C1F5C;");
    asm("loc_65C1F51: mov 0x14(%eax),%ecx;");
    asm("loc_65C1F54: test %ecx,%ecx;");
    asm("loc_65C1F56: jne loc_65C1F5E;");
    asm("loc_65C1F58: mov %edx,%ecx;");
    asm("loc_65C1F5A: jmp loc_65C1F5E;");
    asm("loc_65C1F5C: xor %ecx,%ecx;");
    asm("loc_65C1F5E: mov 4(%eax),%eax;");
    asm("loc_65C1F61: test %eax,%eax;");
    asm("loc_65C1F63: jne loc_65C1F67;");
    asm("loc_65C1F65: mov %edx,%eax;");
    asm("loc_65C1F67: push %ecx;");
    asm("loc_65C1F68: push %eax;");
    asm("loc_65C1F69: mov %esi,%ecx;");
    asm("loc_65C1F6B: call _sub_65C2610;");
    asm("loc_65C1F70: mov 0x84(%esi),%edx;");
    asm("loc_65C1F76: mov (%edx),%edi;");
    asm("loc_65C1F78: mov (%edi),%ecx;");
    asm("loc_65C1F7A: mov %al,0x13(%esp);");
    asm("loc_65C1F7E: mov 4(%edi),%eax;");
    asm("loc_65C1F81: mov %ecx,(%eax);");
    asm("loc_65C1F83: mov (%edi),%edx;");
    asm("loc_65C1F85: mov 4(%edi),%eax;");
    asm("loc_65C1F88: lea 8(%edi),%ecx;");
    asm("loc_65C1F8B: mov %eax,4(%edx);");
    asm("loc_65C1F8E: call _sub_65C2500;");
    asm("loc_65C1F93: push %edi;");
    asm("loc_65C1F94: call _sub_65C6A60;");
    asm("loc_65C1F99: mov 0x88(%esi),%ecx;");
    asm("loc_65C1F9F: mov 0x17(%esp),%al;");
    asm("loc_65C1FA3: add $4,%esp;");
    asm("loc_65C1FA6: dec %ecx;");
    asm("loc_65C1FA7: test %al,%al;");
    asm("loc_65C1FA9: mov %ecx,0x88(%esi);");
    asm("loc_65C1FAF: jne loc_65C2037;");
    asm("loc_65C1FB5: mov 0x1C(%ebx),%ecx;");
    asm("loc_65C1FB8: mov (%esi),%edx;");
    asm("loc_65C1FBA: mov %ecx,0x7C(%esi);");
    asm("loc_65C1FBD: mov 0x1C(%ebx),%eax;");
    asm("loc_65C1FC0: push %eax;");
    asm("loc_65C1FC1: mov %esi,%ecx;");
    asm("loc_65C1FC3: calll *4(%edx);");
    asm("loc_65C1FC6: jmp loc_65C2037;");
    asm("loc_65C1FC8: calll *_import_65C70D8;");
    asm("loc_65C1FCE: mov %eax,_data_65CA1AC;");
    asm("loc_65C1FD3: mov %ebp,_data_65CA1B0;");
    asm("loc_65C1FD9: mov %ebp,_data_65CA1B4;");
    asm("loc_65C1FDF: mov %ebp,_data_65CA1B8;");
    asm("loc_65C1FE5: mov %ebp,_data_65CA1BC;");
    asm("loc_65C1FEB: mov (%esi),%edx;");
    asm("loc_65C1FED: mov %esi,%ecx;");
    asm("loc_65C1FEF: calll *8(%edx);");
    asm("loc_65C1FF2: movb $0,8(%esi);");
    asm("loc_65C1FF6: jmp loc_65C2037;");
    asm("loc_65C1FF8: mov 8(%ebx),%edi;");
    asm("loc_65C1FFB: mov (%esi),%eax;");
    asm("loc_65C1FFD: push %edi;");
    asm("loc_65C1FFE: mov %esi,%ecx;");
    asm("loc_65C2000: calll *0xC(%eax);");
    asm("loc_65C2003: mov 4(%edi),%eax;");
    asm("loc_65C2006: mov (%eax),%ecx;");
    asm("loc_65C2008: push %eax;");
    asm("loc_65C2009: calll *8(%ecx);");
    asm("loc_65C200C: mov 0xC(%edi),%edx;");
    asm("loc_65C200F: mov 0x30(%edx),%eax;");
    asm("loc_65C2012: mov _import_65C70B8,%ebp;");
    asm("loc_65C2018: push %eax;");
    asm("loc_65C2019: call *%ebp;");
    asm("loc_65C201B: mov 0xC(%edi),%ecx;");
    asm("loc_65C201E: push %ecx;");
    asm("loc_65C201F: call *%ebp;");
    asm("loc_65C2021: mov 0x10(%edi),%eax;");
    asm("loc_65C2024: add $8,%esp;");
    asm("loc_65C2027: test %eax,%eax;");
    asm("loc_65C2029: je loc_65C2031;");
    asm("loc_65C202B: push %eax;");
    asm("loc_65C202C: call *%ebp;");
    asm("loc_65C202E: add $4,%esp;");
    asm("loc_65C2031: push %edi;");
    asm("loc_65C2032: call *%ebp;");
    asm("loc_65C2034: add $4,%esp;");
    asm("loc_65C2037: mov (%ebx),%edx;");
    asm("loc_65C2039: push $1;");
    asm("loc_65C203B: mov %ebx,%ecx;");
    asm("loc_65C203D: calll *(%edx);");
    asm("loc_65C203F: lea 0x3C(%esi),%edi;");
    asm("loc_65C2042: mov %edi,%ecx;");
    asm("loc_65C2044: call _sub_65C4390;");
    asm("loc_65C2049: mov %eax,%ebx;");
    asm("loc_65C204B: xor %ebp,%ebp;");
    asm("loc_65C204D: cmp %ebp,%ebx;");
    asm("loc_65C204F: jne loc_65C1E47;");
    asm("loc_65C2055: mov %edi,%ecx;");
    asm("loc_65C2057: call _sub_65C4310;");
    asm("loc_65C205C: pop %edi;");
    asm("loc_65C205D: pop %esi;");
    asm("loc_65C205E: pop %ebp;");
    asm("loc_65C205F: pop %ebx;");
    asm("loc_65C2060: add $0x8010,%esp;");
    asm("loc_65C2066: ret $4;");
    asm("int3;"); // unreachable
    asm("_jmp_65C206C: .long loc_65C1E5A;");
    asm(".long loc_65C1EDA;");
    asm(".long loc_65C2037;");
    asm(".long loc_65C1FC8;");
    asm(".long loc_65C1FF8;");
    asm(".long 0xCCCCCCCC;");
}
FIXUP_JUMP_TABLE(_sub_65C1D90);
_naked _weak void _sub_65C2080() // _unknown_libname_1
{
    __DEBUG_ASM(65C2080);
    // chunk 0x65C2080 _sub_65C2080
    asm("loc_65C2080: mov $_data_65CA128,%ecx;");
    asm("loc_65C2085: jmp _sub_65C1090;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C2090() // ??0CDPClient@@QAE@XZ
{
    __DEBUG_ASM(65C2090);
    // chunk 0x65C2090 _sub_65C2090
    asm("loc_65C2090: push $0xFFFFFFFF;");
    asm("loc_65C2092: push $_sub_65C6DB4;");
    asm("loc_65C2097: mov %fs:0,%eax;");
    asm("loc_65C209D: push %eax;");
    asm("loc_65C209E: mov %esp,%fs:0;");
    asm("loc_65C20A5: sub $0x1C,%esp;");
    asm("loc_65C20A8: push %ebx;");
    asm("loc_65C20A9: push %esi;");
    asm("loc_65C20AA: mov %ecx,%esi;");
    asm("loc_65C20AC: push %edi;");
    asm("loc_65C20AD: lea 0x10(%esi),%ecx;");
    asm("loc_65C20B0: mov %esi,0x10(%esp);");
    asm("loc_65C20B4: movl $_off_65C7460,(%esi);");
    asm("loc_65C20BA: call _sub_65C41F0;");
    asm("loc_65C20BF: xor %ebx,%ebx;");
    asm("loc_65C20C1: lea 0x3C(%esi),%ecx;");
    asm("loc_65C20C4: mov %ebx,0x30(%esp);");
    asm("loc_65C20C8: call _sub_65C41F0;");
    asm("loc_65C20CD: mov 0xF(%esp),%al;");
    asm("loc_65C20D1: push $0x28;");
    asm("loc_65C20D3: movb $1,0x34(%esp);");
    asm("loc_65C20D8: mov %al,0x80(%esi);");
    asm("loc_65C20DE: call _sub_65C6A66;");
    asm("loc_65C20E3: mov %eax,(%eax);");
    asm("loc_65C20E5: mov %eax,4(%eax);");
    asm("loc_65C20E8: add $4,%esp;");
    asm("loc_65C20EB: mov %eax,0x84(%esi);");
    asm("loc_65C20F1: mov %ebx,0x88(%esi);");
    asm("loc_65C20F7: movl $_off_65C744C,(%esi);");
    asm("loc_65C20FD: mov %esi,_data_65CA1C8;");
    asm("loc_65C2103: lea 4(%esi),%edi;");
    asm("loc_65C2106: push %ebx;");
    asm("loc_65C2107: movb $2,0x34(%esp);");
    asm("loc_65C210C: mov %ebx,(%edi);");
    asm("loc_65C210E: mov %bl,8(%esi);");
    asm("loc_65C2111: mov %ebx,0xC(%esi);");
    asm("loc_65C2114: mov %ebx,0x78(%esi);");
    asm("loc_65C2117: movb $1,0x8C(%esi);");
    asm("loc_65C211E: calll *_import_65C70E8;");
    asm("loc_65C2124: push %edi;");
    asm("loc_65C2125: push $_data_65C75C0;");
    asm("loc_65C212A: push $1;");
    asm("loc_65C212C: push %ebx;");
    asm("loc_65C212D: push $_data_65C75E0;");
    asm("loc_65C2132: calll *_import_65C70E0;");
    asm("loc_65C2138: test %eax,%eax;");
    asm("loc_65C213A: je loc_65C215F;");
    asm("loc_65C213C: push %ebx;");
    asm("loc_65C213D: push $0xD4;");
    asm("loc_65C2142: calll *_data_65CA0B4;");
    asm("loc_65C2148: add $8,%esp;");
    asm("loc_65C214B: pop %edi;");
    asm("loc_65C214C: mov %esi,%eax;");
    asm("loc_65C214E: pop %esi;");
    asm("loc_65C214F: pop %ebx;");
    asm("loc_65C2150: mov 0x1C(%esp),%ecx;");
    asm("loc_65C2154: mov %ecx,%fs:0;");
    asm("loc_65C215B: add $0x28,%esp;");
    asm("loc_65C215E: ret;");
    asm("loc_65C215F: mov (%edi),%eax;");
    asm("loc_65C2161: cmp %ebx,%eax;");
    asm("loc_65C2163: je loc_65C21A4;");
    asm("loc_65C2165: mov (%eax),%ecx;");
    asm("loc_65C2167: push %ebx;");
    asm("loc_65C2168: push $_sub_65C19D0;");
    asm("loc_65C216D: push %esi;");
    asm("loc_65C216E: push %eax;");
    asm("loc_65C216F: calll *0xC(%ecx);");
    asm("loc_65C2172: mov (%edi),%edi;");
    asm("loc_65C2174: push %ebx;");
    asm("loc_65C2175: lea 0x18(%esp),%eax;");
    asm("loc_65C2179: push %eax;");
    asm("loc_65C217A: movl $0x14,0x1C(%esp);");
    asm("loc_65C2182: mov %ebx,0x20(%esp);");
    asm("loc_65C2186: movl $0xBB8,0x24(%esp);");
    asm("loc_65C218E: movl $1,0x28(%esp);");
    asm("loc_65C2196: movl $0x1388,0x2C(%esp);");
    asm("loc_65C219E: mov (%edi),%edx;");
    asm("loc_65C21A0: push %edi;");
    asm("loc_65C21A1: calll *0x44(%edx);");
    asm("loc_65C21A4: mov 0x28(%esp),%ecx;");
    asm("loc_65C21A8: pop %edi;");
    asm("loc_65C21A9: mov %esi,%eax;");
    asm("loc_65C21AB: pop %esi;");
    asm("loc_65C21AC: pop %ebx;");
    asm("loc_65C21AD: mov %ecx,%fs:0;");
    asm("loc_65C21B4: add $0x28,%esp;");
    asm("loc_65C21B7: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C21C0() // ??1CDPClient@@UAE@XZ
{
    __DEBUG_ASM(65C21C0);
    // chunk 0x65C21C0 _sub_65C21C0
    asm("loc_65C21C0: push $0xFFFFFFFF;");
    asm("loc_65C21C2: push $_sub_65C6DE4;");
    asm("loc_65C21C7: mov %fs:0,%eax;");
    asm("loc_65C21CD: push %eax;");
    asm("loc_65C21CE: mov %esp,%fs:0;");
    asm("loc_65C21D5: push %ecx;");
    asm("loc_65C21D6: push %ebx;");
    asm("loc_65C21D7: push %ebp;");
    asm("loc_65C21D8: push %esi;");
    asm("loc_65C21D9: push %edi;");
    asm("loc_65C21DA: mov %ecx,%edi;");
    asm("loc_65C21DC: mov %edi,0x10(%esp);");
    asm("loc_65C21E0: movl $_off_65C744C,(%edi);");
    asm("loc_65C21E6: mov _data_65CA1C8,%eax;");
    asm("loc_65C21EB: xor %esi,%esi;");
    asm("loc_65C21ED: cmp %edi,%eax;");
    asm("loc_65C21EF: movl $2,0x1C(%esp);");
    asm("loc_65C21F7: jne loc_65C21FF;");
    asm("loc_65C21F9: mov %esi,_data_65CA1C8;");
    asm("loc_65C21FF: mov 4(%edi),%eax;");
    asm("loc_65C2202: cmp %esi,%eax;");
    asm("loc_65C2204: je loc_65C2228;");
    asm("loc_65C2206: mov (%eax),%ecx;");
    asm("loc_65C2208: push $0x8000;");
    asm("loc_65C220D: push %esi;");
    asm("loc_65C220E: push %eax;");
    asm("loc_65C220F: calll *0x18(%ecx);");
    asm("loc_65C2212: mov 4(%edi),%eax;");
    asm("loc_65C2215: mov (%eax),%edx;");
    asm("loc_65C2217: push %esi;");
    asm("loc_65C2218: push %eax;");
    asm("loc_65C2219: calll *0x38(%edx);");
    asm("loc_65C221C: mov 4(%edi),%eax;");
    asm("loc_65C221F: mov (%eax),%ecx;");
    asm("loc_65C2221: push %eax;");
    asm("loc_65C2222: calll *8(%ecx);");
    asm("loc_65C2225: mov %esi,4(%edi);");
    asm("loc_65C2228: mov 0x8C(%edi),%al;");
    asm("loc_65C222E: test %al,%al;");
    asm("loc_65C2230: je loc_65C223F;");
    asm("loc_65C2232: calll *_import_65C70E4;");
    asm("loc_65C2238: movb $0,0x8C(%edi);");
    asm("loc_65C223F: mov 0x84(%edi),%ebx;");
    asm("loc_65C2245: mov (%ebx),%ebp;");
    asm("loc_65C2247: cmp %ebx,%ebp;");
    asm("loc_65C2249: movb $1,0x1C(%esp);");
    asm("loc_65C224E: je loc_65C2288;");
    asm("loc_65C2250: mov %ebp,%esi;");
    asm("loc_65C2252: mov 4(%esi),%eax;");
    asm("loc_65C2255: mov (%esi),%edx;");
    asm("loc_65C2257: mov (%ebp),%ebp;");
    asm("loc_65C225A: mov %edx,(%eax);");
    asm("loc_65C225C: mov 4(%esi),%ecx;");
    asm("loc_65C225F: mov (%esi),%eax;");
    asm("loc_65C2261: mov %ecx,4(%eax);");
    asm("loc_65C2264: lea 8(%esi),%ecx;");
    asm("loc_65C2267: call _sub_65C2500;");
    asm("loc_65C226C: push %esi;");
    asm("loc_65C226D: call _sub_65C6A60;");
    asm("loc_65C2272: mov 0x88(%edi),%ecx;");
    asm("loc_65C2278: add $4,%esp;");
    asm("loc_65C227B: dec %ecx;");
    asm("loc_65C227C: cmp %ebx,%ebp;");
    asm("loc_65C227E: mov %ecx,0x88(%edi);");
    asm("loc_65C2284: jne loc_65C2250;");
    asm("loc_65C2286: xor %esi,%esi;");
    asm("loc_65C2288: mov 0x84(%edi),%eax;");
    asm("loc_65C228E: push %eax;");
    asm("loc_65C228F: call _sub_65C6A60;");
    asm("loc_65C2294: add $4,%esp;");
    asm("loc_65C2297: lea 0x3C(%edi),%ecx;");
    asm("loc_65C229A: mov %esi,0x84(%edi);");
    asm("loc_65C22A0: mov %esi,0x88(%edi);");
    asm("loc_65C22A6: movb $0,0x1C(%esp);");
    asm("loc_65C22AB: call _sub_65C4240;");
    asm("loc_65C22B0: lea 0x10(%edi),%ecx;");
    asm("loc_65C22B3: movl $0xFFFFFFFF,0x1C(%esp);");
    asm("loc_65C22BB: call _sub_65C4240;");
    asm("loc_65C22C0: mov 0x14(%esp),%ecx;");
    asm("loc_65C22C4: pop %edi;");
    asm("loc_65C22C5: pop %esi;");
    asm("loc_65C22C6: pop %ebp;");
    asm("loc_65C22C7: pop %ebx;");
    asm("loc_65C22C8: mov %ecx,%fs:0;");
    asm("loc_65C22CF: add $0x10,%esp;");
    asm("loc_65C22D2: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C22E0() // ?GetClient@CDPClient@@QAEPAUIDirectPlay8Client@@XZ
{
    __DEBUG_ASM(65C22E0);
    // chunk 0x65C22E0 _sub_65C22E0
    asm("loc_65C22E0: mov 4(%ecx),%eax;");
    asm("loc_65C22E3: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C22F0() // ?Cleanup@CDPClient@@QAEXXZ
{
    __DEBUG_ASM(65C22F0);
    // chunk 0x65C22F0 _sub_65C22F0
    asm("loc_65C22F0: push %esi;");
    asm("loc_65C22F1: mov %ecx,%esi;");
    asm("loc_65C22F3: mov 4(%esi),%eax;");
    asm("loc_65C22F6: test %eax,%eax;");
    asm("loc_65C22F8: je loc_65C2322;");
    asm("loc_65C22FA: mov (%eax),%ecx;");
    asm("loc_65C22FC: push $0x8000;");
    asm("loc_65C2301: push $0;");
    asm("loc_65C2303: push %eax;");
    asm("loc_65C2304: calll *0x18(%ecx);");
    asm("loc_65C2307: mov 4(%esi),%eax;");
    asm("loc_65C230A: mov (%eax),%edx;");
    asm("loc_65C230C: push $0;");
    asm("loc_65C230E: push %eax;");
    asm("loc_65C230F: calll *0x38(%edx);");
    asm("loc_65C2312: mov 4(%esi),%eax;");
    asm("loc_65C2315: mov (%eax),%ecx;");
    asm("loc_65C2317: push %eax;");
    asm("loc_65C2318: calll *8(%ecx);");
    asm("loc_65C231B: movl $0,4(%esi);");
    asm("loc_65C2322: mov 0x8C(%esi),%al;");
    asm("loc_65C2328: test %al,%al;");
    asm("loc_65C232A: je loc_65C2339;");
    asm("loc_65C232C: calll *_import_65C70E4;");
    asm("loc_65C2332: movb $0,0x8C(%esi);");
    asm("loc_65C2339: pop %esi;");
    asm("loc_65C233A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C2340() // ?AddConnectAttempt@CDPClient@@QAE_NPBGPAG@Z
{
    __DEBUG_ASM(65C2340);
    // chunk 0x65C2340 _sub_65C2340
    asm("loc_65C2340: push $0xFFFFFFFF;");
    asm("loc_65C2342: push $_sub_65C6E0A;");
    asm("loc_65C2347: mov %fs:0,%eax;");
    asm("loc_65C234D: push %eax;");
    asm("loc_65C234E: mov %esp,%fs:0;");
    asm("loc_65C2355: sub $0x24,%esp;");
    asm("loc_65C2358: mov 8(%ecx),%al;");
    asm("loc_65C235B: test %al,%al;");
    asm("loc_65C235D: mov %ecx,(%esp);");
    asm("loc_65C2361: je loc_65C2376;");
    asm("loc_65C2363: xor %al,%al;");
    asm("loc_65C2365: mov 0x24(%esp),%ecx;");
    asm("loc_65C2369: mov %ecx,%fs:0;");
    asm("loc_65C2370: add $0x30,%esp;");
    asm("loc_65C2373: ret $8;");
    asm("loc_65C2376: mov 0x34(%esp),%al;");
    asm("loc_65C237A: push %ebx;");
    asm("loc_65C237B: push %esi;");
    asm("loc_65C237C: push %edi;");
    asm("loc_65C237D: push $0;");
    asm("loc_65C237F: lea 0x14(%esp),%ecx;");
    asm("loc_65C2383: mov %al,0x14(%esp);");
    asm("loc_65C2387: calll *_import_65C7064;");
    asm("loc_65C238D: mov 0x40(%esp),%cl;");
    asm("loc_65C2391: mov %cl,0x20(%esp);");
    asm("loc_65C2395: push $0;");
    asm("loc_65C2397: lea 0x24(%esp),%ecx;");
    asm("loc_65C239B: movl $0,0x3C(%esp);");
    asm("loc_65C23A3: calll *_import_65C7064;");
    asm("loc_65C23A9: mov 0x40(%esp),%edi;");
    asm("loc_65C23AD: mov _import_65C70A8,%ebx;");
    asm("loc_65C23B3: push %edi;");
    asm("loc_65C23B4: movl $1,0x3C(%esp);");
    asm("loc_65C23BC: call *%ebx;");
    asm("loc_65C23BE: add $4,%esp;");
    asm("loc_65C23C1: mov %eax,%esi;");
    asm("loc_65C23C3: push $1;");
    asm("loc_65C23C5: push %esi;");
    asm("loc_65C23C6: lea 0x18(%esp),%ecx;");
    asm("loc_65C23CA: calll *_import_65C7068;");
    asm("loc_65C23D0: test %al,%al;");
    asm("loc_65C23D2: je loc_65C23FD;");
    asm("loc_65C23D4: test %esi,%esi;");
    asm("loc_65C23D6: mov 0x14(%esp),%eax;");
    asm("loc_65C23DA: mov %edi,%ecx;");
    asm("loc_65C23DC: jbe loc_65C23EF;");
    asm("loc_65C23DE: mov %esi,%edx;");
    asm("loc_65C23E0: mov (%ecx),%di;");
    asm("loc_65C23E3: mov %di,(%eax);");
    asm("loc_65C23E6: add $2,%eax;");
    asm("loc_65C23E9: add $2,%ecx;");
    asm("loc_65C23EC: dec %edx;");
    asm("loc_65C23ED: jne loc_65C23E0;");
    asm("loc_65C23EF: mov 0x14(%esp),%edx;");
    asm("loc_65C23F3: mov %esi,0x18(%esp);");
    asm("loc_65C23F7: movw $0,(%edx,%esi,2);");
    asm("loc_65C23FD: mov 0x44(%esp),%edi;");
    asm("loc_65C2401: test %edi,%edi;");
    asm("loc_65C2403: jne loc_65C240A;");
    asm("loc_65C2405: mov $_data_65C7470,%edi;");
    asm("loc_65C240A: push %edi;");
    asm("loc_65C240B: call *%ebx;");
    asm("loc_65C240D: add $4,%esp;");
    asm("loc_65C2410: mov %eax,%esi;");
    asm("loc_65C2412: push $1;");
    asm("loc_65C2414: push %esi;");
    asm("loc_65C2415: lea 0x28(%esp),%ecx;");
    asm("loc_65C2419: calll *_import_65C7068;");
    asm("loc_65C241F: test %al,%al;");
    asm("loc_65C2421: je loc_65C244D;");
    asm("loc_65C2423: test %esi,%esi;");
    asm("loc_65C2425: mov 0x24(%esp),%eax;");
    asm("loc_65C2429: mov %edi,%ecx;");
    asm("loc_65C242B: jbe loc_65C243F;");
    asm("loc_65C242D: mov %esi,%edx;");
    asm("loc_65C242F: nop;");
    asm("loc_65C2430: mov (%ecx),%di;");
    asm("loc_65C2433: mov %di,(%eax);");
    asm("loc_65C2436: add $2,%eax;");
    asm("loc_65C2439: add $2,%ecx;");
    asm("loc_65C243C: dec %edx;");
    asm("loc_65C243D: jne loc_65C2430;");
    asm("loc_65C243F: mov 0x24(%esp),%eax;");
    asm("loc_65C2443: mov %esi,0x28(%esp);");
    asm("loc_65C2447: movw $0,(%eax,%esi,2);");
    asm("loc_65C244D: mov 0xC(%esp),%ebx;");
    asm("loc_65C2451: mov 0x84(%ebx),%esi;");
    asm("loc_65C2457: mov 4(%esi),%edi;");
    asm("loc_65C245A: push $0x28;");
    asm("loc_65C245C: call _sub_65C6A66;");
    asm("loc_65C2461: add $4,%esp;");
    asm("loc_65C2464: test %edi,%edi;");
    asm("loc_65C2466: mov %esi,(%eax);");
    asm("loc_65C2468: mov %edi,%ecx;");
    asm("loc_65C246A: jne loc_65C246E;");
    asm("loc_65C246C: mov %eax,%ecx;");
    asm("loc_65C246E: mov %ecx,4(%eax);");
    asm("loc_65C2471: mov %eax,4(%esi);");
    asm("loc_65C2474: mov 4(%eax),%ecx;");
    asm("loc_65C2477: mov %eax,(%ecx);");
    asm("loc_65C2479: lea 0x10(%esp),%ecx;");
    asm("loc_65C247D: push %ecx;");
    asm("loc_65C247E: add $8,%eax;");
    asm("loc_65C2481: push %eax;");
    asm("loc_65C2482: call _sub_65C3510;");
    asm("loc_65C2487: mov 0x88(%ebx),%esi;");
    asm("loc_65C248D: add $8,%esp;");
    asm("loc_65C2490: inc %esi;");
    asm("loc_65C2491: mov %esi,0x88(%ebx);");
    asm("loc_65C2497: push $1;");
    asm("loc_65C2499: lea 0x24(%esp),%ecx;");
    asm("loc_65C249D: movl $2,0x3C(%esp);");
    asm("loc_65C24A5: calll *_import_65C7064;");
    asm("loc_65C24AB: mov 0x14(%esp),%eax;");
    asm("loc_65C24AF: test %eax,%eax;");
    asm("loc_65C24B1: pop %edi;");
    asm("loc_65C24B2: pop %esi;");
    asm("loc_65C24B3: pop %ebx;");
    asm("loc_65C24B4: je loc_65C24E6;");
    asm("loc_65C24B6: mov -1(%eax),%cl;");
    asm("loc_65C24B9: test %cl,%cl;");
    asm("loc_65C24BB: je loc_65C24DA;");
    asm("loc_65C24BD: cmp $0xFF,%cl;");
    asm("loc_65C24C0: je loc_65C24DA;");
    asm("loc_65C24C2: dec %cl;");
    asm("loc_65C24C4: mov %cl,-1(%eax);");
    asm("loc_65C24C7: mov $1,%al;");
    asm("loc_65C24C9: mov 0x24(%esp),%ecx;");
    asm("loc_65C24CD: mov %ecx,%fs:0;");
    asm("loc_65C24D4: add $0x30,%esp;");
    asm("loc_65C24D7: ret $8;");
    asm("loc_65C24DA: add $0xFFFFFFFE,%eax;");
    asm("loc_65C24DD: push %eax;");
    asm("loc_65C24DE: call _sub_65C6A60;");
    asm("loc_65C24E3: add $4,%esp;");
    asm("loc_65C24E6: mov 0x24(%esp),%ecx;");
    asm("loc_65C24EA: mov $1,%al;");
    asm("loc_65C24EC: mov %ecx,%fs:0;");
    asm("loc_65C24F3: add $0x30,%esp;");
    asm("loc_65C24F6: ret $8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C2500() // _sub_65C2500
{
    __DEBUG_ASM(65C2500);
    // chunk 0x65C2500 _sub_65C2500
    asm("loc_65C2500: push %ebx;");
    asm("loc_65C2501: push %esi;");
    asm("loc_65C2502: mov %ecx,%esi;");
    asm("loc_65C2504: mov 0x14(%esi),%eax;");
    asm("loc_65C2507: xor %ebx,%ebx;");
    asm("loc_65C2509: cmp %ebx,%eax;");
    asm("loc_65C250B: je loc_65C252C;");
    asm("loc_65C250D: mov -1(%eax),%cl;");
    asm("loc_65C2510: cmp %bl,%cl;");
    asm("loc_65C2512: je loc_65C2520;");
    asm("loc_65C2514: cmp $0xFF,%cl;");
    asm("loc_65C2517: je loc_65C2520;");
    asm("loc_65C2519: dec %cl;");
    asm("loc_65C251B: mov %cl,-1(%eax);");
    asm("loc_65C251E: jmp loc_65C252C;");
    asm("loc_65C2520: add $0xFFFFFFFE,%eax;");
    asm("loc_65C2523: push %eax;");
    asm("loc_65C2524: call _sub_65C6A60;");
    asm("loc_65C2529: add $4,%esp;");
    asm("loc_65C252C: mov %ebx,0x14(%esi);");
    asm("loc_65C252F: mov %ebx,0x18(%esi);");
    asm("loc_65C2532: mov %ebx,0x1C(%esi);");
    asm("loc_65C2535: mov 4(%esi),%eax;");
    asm("loc_65C2538: cmp %ebx,%eax;");
    asm("loc_65C253A: je loc_65C2565;");
    asm("loc_65C253C: mov -1(%eax),%cl;");
    asm("loc_65C253F: cmp %bl,%cl;");
    asm("loc_65C2541: je loc_65C2559;");
    asm("loc_65C2543: cmp $0xFF,%cl;");
    asm("loc_65C2546: je loc_65C2559;");
    asm("loc_65C2548: dec %cl;");
    asm("loc_65C254A: mov %cl,-1(%eax);");
    asm("loc_65C254D: mov %ebx,4(%esi);");
    asm("loc_65C2550: mov %ebx,8(%esi);");
    asm("loc_65C2553: mov %ebx,0xC(%esi);");
    asm("loc_65C2556: pop %esi;");
    asm("loc_65C2557: pop %ebx;");
    asm("loc_65C2558: ret;");
    asm("loc_65C2559: add $0xFFFFFFFE,%eax;");
    asm("loc_65C255C: push %eax;");
    asm("loc_65C255D: call _sub_65C6A60;");
    asm("loc_65C2562: add $4,%esp;");
    asm("loc_65C2565: mov %ebx,4(%esi);");
    asm("loc_65C2568: mov %ebx,8(%esi);");
    asm("loc_65C256B: mov %ebx,0xC(%esi);");
    asm("loc_65C256E: pop %esi;");
    asm("loc_65C256F: pop %ebx;");
    asm("loc_65C2570: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C2580() // ?ProcessConnectAttempt@CDPClient@@QAE_NXZ
{
    __DEBUG_ASM(65C2580);
    // chunk 0x65C2580 _sub_65C2580
    asm("loc_65C2580: push %edi;");
    asm("loc_65C2581: mov %ecx,%edi;");
    asm("loc_65C2583: mov 0x88(%edi),%eax;");
    asm("loc_65C2589: test %eax,%eax;");
    asm("loc_65C258B: jne loc_65C2591;");
    asm("loc_65C258D: xor %al,%al;");
    asm("loc_65C258F: pop %edi;");
    asm("loc_65C2590: ret;");
    asm("loc_65C2591: mov 0x84(%edi),%eax;");
    asm("loc_65C2597: mov (%eax),%eax;");
    asm("loc_65C2599: mov 0x20(%eax),%ecx;");
    asm("loc_65C259C: mov _import_65C7070,%edx;");
    asm("loc_65C25A2: add $8,%eax;");
    asm("loc_65C25A5: test %ecx,%ecx;");
    asm("loc_65C25A7: je loc_65C25B4;");
    asm("loc_65C25A9: mov 0x14(%eax),%ecx;");
    asm("loc_65C25AC: test %ecx,%ecx;");
    asm("loc_65C25AE: jne loc_65C25B6;");
    asm("loc_65C25B0: mov %edx,%ecx;");
    asm("loc_65C25B2: jmp loc_65C25B6;");
    asm("loc_65C25B4: xor %ecx,%ecx;");
    asm("loc_65C25B6: mov 4(%eax),%eax;");
    asm("loc_65C25B9: test %eax,%eax;");
    asm("loc_65C25BB: jne loc_65C25BF;");
    asm("loc_65C25BD: mov %edx,%eax;");
    asm("loc_65C25BF: push %ebx;");
    asm("loc_65C25C0: push %esi;");
    asm("loc_65C25C1: push %ecx;");
    asm("loc_65C25C2: push %eax;");
    asm("loc_65C25C3: mov %edi,%ecx;");
    asm("loc_65C25C5: call _sub_65C2610;");
    asm("loc_65C25CA: mov 0x84(%edi),%ecx;");
    asm("loc_65C25D0: mov (%ecx),%esi;");
    asm("loc_65C25D2: mov 4(%esi),%edx;");
    asm("loc_65C25D5: mov %al,%bl;");
    asm("loc_65C25D7: mov (%esi),%eax;");
    asm("loc_65C25D9: mov %eax,(%edx);");
    asm("loc_65C25DB: mov (%esi),%ecx;");
    asm("loc_65C25DD: mov 4(%esi),%edx;");
    asm("loc_65C25E0: mov %edx,4(%ecx);");
    asm("loc_65C25E3: lea 8(%esi),%ecx;");
    asm("loc_65C25E6: call _sub_65C2500;");
    asm("loc_65C25EB: push %esi;");
    asm("loc_65C25EC: call _sub_65C6A60;");
    asm("loc_65C25F1: mov 0x88(%edi),%eax;");
    asm("loc_65C25F7: add $4,%esp;");
    asm("loc_65C25FA: dec %eax;");
    asm("loc_65C25FB: mov %eax,0x88(%edi);");
    asm("loc_65C2601: pop %esi;");
    asm("loc_65C2602: mov %bl,%al;");
    asm("loc_65C2604: pop %ebx;");
    asm("loc_65C2605: pop %edi;");
    asm("loc_65C2606: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C2610() // ?ConnectToServer@CDPClient@@IAE_NPBG0@Z
{
    __DEBUG_ASM(65C2610);
    // chunk 0x65C2610 _sub_65C2610
    asm("loc_65C2610: sub $0x54,%esp;");
    asm("loc_65C2613: push %ebx;");
    asm("loc_65C2614: push %esi;");
    asm("loc_65C2615: xor %esi,%esi;");
    asm("loc_65C2617: push %edi;");
    asm("loc_65C2618: mov %ecx,%ebx;");
    asm("loc_65C261A: mov %esi,0xC(%esp);");
    asm("loc_65C261E: mov %esi,0x10(%esp);");
    asm("loc_65C2622: calll *_import_65C70D8;");
    asm("loc_65C2628: mov _import_65C70E0,%edi;");
    asm("loc_65C262E: mov %eax,_data_65CA1AC;");
    asm("loc_65C2633: lea 0xC(%esp),%eax;");
    asm("loc_65C2637: push %eax;");
    asm("loc_65C2638: push $_data_65C75F0;");
    asm("loc_65C263D: push $1;");
    asm("loc_65C263F: push %esi;");
    asm("loc_65C2640: push $_data_65C7600;");
    asm("loc_65C2645: mov %esi,_data_65CA1B0;");
    asm("loc_65C264B: mov %esi,_data_65CA1B4;");
    asm("loc_65C2651: mov %esi,_data_65CA1B8;");
    asm("loc_65C2657: mov %esi,_data_65CA1BC;");
    asm("loc_65C265D: call *%edi;");
    asm("loc_65C265F: test %eax,%eax;");
    asm("loc_65C2661: je loc_65C266E;");
    asm("loc_65C2663: pop %edi;");
    asm("loc_65C2664: pop %esi;");
    asm("loc_65C2665: xor %al,%al;");
    asm("loc_65C2667: pop %ebx;");
    asm("loc_65C2668: add $0x54,%esp;");
    asm("loc_65C266B: ret $8;");
    asm("loc_65C266E: lea 0x10(%esp),%ecx;");
    asm("loc_65C2672: push %ecx;");
    asm("loc_65C2673: push $_data_65C75F0;");
    asm("loc_65C2678: push $1;");
    asm("loc_65C267A: push %esi;");
    asm("loc_65C267B: push $_data_65C7600;");
    asm("loc_65C2680: call *%edi;");
    asm("loc_65C2682: test %eax,%eax;");
    asm("loc_65C2684: mov 0xC(%esp),%eax;");
    asm("loc_65C2688: je loc_65C269B;");
    asm("loc_65C268A: mov (%eax),%edx;");
    asm("loc_65C268C: push %eax;");
    asm("loc_65C268D: calll *8(%edx);");
    asm("loc_65C2690: pop %edi;");
    asm("loc_65C2691: pop %esi;");
    asm("loc_65C2692: xor %al,%al;");
    asm("loc_65C2694: pop %ebx;");
    asm("loc_65C2695: add $0x54,%esp;");
    asm("loc_65C2698: ret $8;");
    asm("loc_65C269B: mov 0x64(%esp),%edx;");
    asm("loc_65C269F: mov (%eax),%ecx;");
    asm("loc_65C26A1: push %edx;");
    asm("loc_65C26A2: push %eax;");
    asm("loc_65C26A3: calll *0xC(%ecx);");
    asm("loc_65C26A6: mov 0xC(%esp),%eax;");
    asm("loc_65C26AA: mov (%eax),%ecx;");
    asm("loc_65C26AC: push $_data_65C75A0;");
    asm("loc_65C26B1: push %eax;");
    asm("loc_65C26B2: calll *0x34(%ecx);");
    asm("loc_65C26B5: mov 0x10(%esp),%eax;");
    asm("loc_65C26B9: mov (%eax),%edx;");
    asm("loc_65C26BB: push $_data_65C75A0;");
    asm("loc_65C26C0: push %eax;");
    asm("loc_65C26C1: calll *0x34(%edx);");
    asm("loc_65C26C4: cmp %esi,_data_65CA1C4;");
    asm("loc_65C26CA: je loc_65C26E4;");
    asm("loc_65C26CC: mov 0x10(%esp),%eax;");
    asm("loc_65C26D0: mov (%eax),%ecx;");
    asm("loc_65C26D2: push $2;");
    asm("loc_65C26D4: push $4;");
    asm("loc_65C26D6: push $_data_65CA1C4;");
    asm("loc_65C26DB: push $_data_65C7474;");
    asm("loc_65C26E0: push %eax;");
    asm("loc_65C26E1: calll *0x48(%ecx);");
    asm("loc_65C26E4: xor %eax,%eax;");
    asm("loc_65C26E6: mov $0x12,%ecx;");
    asm("loc_65C26EB: lea 0x18(%esp),%edi;");
    asm("loc_65C26EF: rep stos %eax,(%edi);");
    asm("loc_65C26F1: lea 0x68(%ebx),%edx;");
    asm("loc_65C26F4: mov (%edx),%eax;");
    asm("loc_65C26F6: mov 4(%edx),%ecx;");
    asm("loc_65C26F9: mov %eax,0x30(%esp);");
    asm("loc_65C26FD: mov 8(%edx),%eax;");
    asm("loc_65C2700: mov %eax,0x38(%esp);");
    asm("loc_65C2704: mov 0x68(%esp),%eax;");
    asm("loc_65C2708: cmp %esi,%eax;");
    asm("loc_65C270A: mov %ecx,0x34(%esp);");
    asm("loc_65C270E: mov 0xC(%edx),%ecx;");
    asm("loc_65C2711: movl $0x48,0x18(%esp);");
    asm("loc_65C2719: mov %ecx,0x3C(%esp);");
    asm("loc_65C271D: je loc_65C272B;");
    asm("loc_65C271F: orl $0x80,0x1C(%esp);");
    asm("loc_65C2727: mov %eax,0x4C(%esp);");
    asm("loc_65C272B: mov 4(%ebx),%eax;");
    asm("loc_65C272E: push %esi;");
    asm("loc_65C272F: lea 0x18(%esp),%ecx;");
    asm("loc_65C2733: push %ecx;");
    asm("loc_65C2734: mov 0x18(%esp),%ecx;");
    asm("loc_65C2738: push %esi;");
    asm("loc_65C2739: push %esi;");
    asm("loc_65C273A: push %esi;");
    asm("loc_65C273B: push %esi;");
    asm("loc_65C273C: push %esi;");
    asm("loc_65C273D: push %ecx;");
    asm("loc_65C273E: mov 0x2C(%esp),%ecx;");
    asm("loc_65C2742: push %ecx;");
    asm("loc_65C2743: lea 0x3C(%esp),%ecx;");
    asm("loc_65C2747: push %ecx;");
    asm("loc_65C2748: mov %esi,0x3C(%esp);");
    asm("loc_65C274C: movl $0x15800E,0x7C(%ebx);");
    asm("loc_65C2753: mov (%eax),%edx;");
    asm("loc_65C2755: push %eax;");
    asm("loc_65C2756: calll *0x1C(%edx);");
    asm("loc_65C2759: cmp %esi,%eax;");
    asm("loc_65C275B: je loc_65C276F;");
    asm("loc_65C275D: cmp $0x15800E,%eax;");
    asm("loc_65C2762: je loc_65C276F;");
    asm("loc_65C2764: pop %edi;");
    asm("loc_65C2765: pop %esi;");
    asm("loc_65C2766: xor %al,%al;");
    asm("loc_65C2768: pop %ebx;");
    asm("loc_65C2769: add $0x54,%esp;");
    asm("loc_65C276C: ret $8;");
    asm("loc_65C276F: mov 0xC(%esp),%eax;");
    asm("loc_65C2773: mov (%eax),%edx;");
    asm("loc_65C2775: push %eax;");
    asm("loc_65C2776: calll *8(%edx);");
    asm("loc_65C2779: mov 0x10(%esp),%eax;");
    asm("loc_65C277D: mov (%eax),%ecx;");
    asm("loc_65C277F: push %eax;");
    asm("loc_65C2780: calll *8(%ecx);");
    asm("loc_65C2783: pop %edi;");
    asm("loc_65C2784: pop %esi;");
    asm("loc_65C2785: mov $1,%al;");
    asm("loc_65C2787: pop %ebx;");
    asm("loc_65C2788: add $0x54,%esp;");
    asm("loc_65C278B: ret $8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C2790() // ?Close@CDPClient@@QAEXXZ
{
    __DEBUG_ASM(65C2790);
    // chunk 0x65C2790 _sub_65C2790
    asm("loc_65C2790: push %esi;");
    asm("loc_65C2791: mov %ecx,%esi;");
    asm("loc_65C2793: mov 4(%esi),%eax;");
    asm("loc_65C2796: test %eax,%eax;");
    asm("loc_65C2798: je loc_65C27B2;");
    asm("loc_65C279A: mov (%eax),%ecx;");
    asm("loc_65C279C: push $0x8000;");
    asm("loc_65C27A1: push $0;");
    asm("loc_65C27A3: push %eax;");
    asm("loc_65C27A4: calll *0x18(%ecx);");
    asm("loc_65C27A7: mov 4(%esi),%eax;");
    asm("loc_65C27AA: mov (%eax),%edx;");
    asm("loc_65C27AC: push $0;");
    asm("loc_65C27AE: push %eax;");
    asm("loc_65C27AF: calll *0x38(%edx);");
    asm("loc_65C27B2: pop %esi;");
    asm("loc_65C27B3: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C27C0() // ?CancelEnums@CDPClient@@QAEXXZ
{
    __DEBUG_ASM(65C27C0);
    // chunk 0x65C27C0 _sub_65C27C0
    asm("loc_65C27C0: mov 4(%ecx),%eax;");
    asm("loc_65C27C3: test %eax,%eax;");
    asm("loc_65C27C5: je loc_65C27D1;");
    asm("loc_65C27C7: mov (%eax),%ecx;");
    asm("loc_65C27C9: push $2;");
    asm("loc_65C27CB: push $0;");
    asm("loc_65C27CD: push %eax;");
    asm("loc_65C27CE: calll *0x18(%ecx);");
    asm("loc_65C27D1: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C27E0() // ?Send@CDPClient@@QAE_NPAEK@Z
{
    __DEBUG_ASM(65C27E0);
    // chunk 0x65C27E0 _sub_65C27E0
    asm("loc_65C27E0: mov 8(%ecx),%al;");
    asm("loc_65C27E3: sub $0xC,%esp;");
    asm("loc_65C27E6: test %al,%al;");
    asm("loc_65C27E8: jne loc_65C27F2;");
    asm("loc_65C27EA: xor %al,%al;");
    asm("loc_65C27EC: add $0xC,%esp;");
    asm("loc_65C27EF: ret $8;");
    asm("loc_65C27F2: mov 0x10(%esp),%edx;");
    asm("loc_65C27F6: mov 0x14(%esp),%eax;");
    asm("loc_65C27FA: push $0x108;");
    asm("loc_65C27FF: mov %edx,0xC(%esp);");
    asm("loc_65C2803: lea 4(%esp),%edx;");
    asm("loc_65C2807: push %edx;");
    asm("loc_65C2808: push $0;");
    asm("loc_65C280A: push $0;");
    asm("loc_65C280C: push $1;");
    asm("loc_65C280E: mov %eax,0x18(%esp);");
    asm("loc_65C2812: mov 4(%ecx),%eax;");
    asm("loc_65C2815: lea 0x18(%esp),%edx;");
    asm("loc_65C2819: push %edx;");
    asm("loc_65C281A: movl $0,0x18(%esp);");
    asm("loc_65C2822: mov (%eax),%ecx;");
    asm("loc_65C2824: push %eax;");
    asm("loc_65C2825: calll *0x20(%ecx);");
    asm("loc_65C2828: test %eax,%eax;");
    asm("loc_65C282A: je loc_65C283B;");
    asm("loc_65C282C: cmp $0x15800E,%eax;");
    asm("loc_65C2831: je loc_65C283B;");
    asm("loc_65C2833: xor %al,%al;");
    asm("loc_65C2835: add $0xC,%esp;");
    asm("loc_65C2838: ret $8;");
    asm("loc_65C283B: mov $1,%al;");
    asm("loc_65C283D: add $0xC,%esp;");
    asm("loc_65C2840: ret $8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C2850() // ?SetGUID@CDPClient@@QAEXAAU_GUID@@@Z
{
    __DEBUG_ASM(65C2850);
    // chunk 0x65C2850 _sub_65C2850
    asm("loc_65C2850: mov 4(%esp),%eax;");
    asm("loc_65C2854: mov (%eax),%edx;");
    asm("loc_65C2856: add $0x68,%ecx;");
    asm("loc_65C2859: mov %edx,(%ecx);");
    asm("loc_65C285B: mov 4(%eax),%edx;");
    asm("loc_65C285E: mov %edx,4(%ecx);");
    asm("loc_65C2861: mov 8(%eax),%edx;");
    asm("loc_65C2864: mov %edx,8(%ecx);");
    asm("loc_65C2867: mov 0xC(%eax),%eax;");
    asm("loc_65C286A: mov %eax,0xC(%ecx);");
    asm("loc_65C286D: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C2870() // ?EnumerateHosts@CDPClient@@QAE_NXZ
{
    __DEBUG_ASM(65C2870);
    // chunk 0x65C2870 _sub_65C2870
    asm("loc_65C2870: sub $0x50,%esp;");
    asm("loc_65C2873: push %esi;");
    asm("loc_65C2874: mov %ecx,%esi;");
    asm("loc_65C2876: mov 4(%esi),%eax;");
    asm("loc_65C2879: test %eax,%eax;");
    asm("loc_65C287B: push %edi;");
    asm("loc_65C287C: jne loc_65C2886;");
    asm("loc_65C287E: pop %edi;");
    asm("loc_65C287F: xor %al,%al;");
    asm("loc_65C2881: pop %esi;");
    asm("loc_65C2882: add $0x50,%esp;");
    asm("loc_65C2885: ret;");
    asm("loc_65C2886: xor %eax,%eax;");
    asm("loc_65C2888: mov $0x12,%ecx;");
    asm("loc_65C288D: lea 0x10(%esp),%edi;");
    asm("loc_65C2891: rep stos %eax,(%edi);");
    asm("loc_65C2893: mov _import_65C70E0,%edi;");
    asm("loc_65C2899: lea 0x68(%esi),%eax;");
    asm("loc_65C289C: mov (%eax),%ecx;");
    asm("loc_65C289E: mov 4(%eax),%edx;");
    asm("loc_65C28A1: mov %ecx,0x28(%esp);");
    asm("loc_65C28A5: mov 8(%eax),%ecx;");
    asm("loc_65C28A8: mov %edx,0x2C(%esp);");
    asm("loc_65C28AC: mov 0xC(%eax),%edx;");
    asm("loc_65C28AF: lea 8(%esp),%eax;");
    asm("loc_65C28B3: push %eax;");
    asm("loc_65C28B4: push $_data_65C75F0;");
    asm("loc_65C28B9: push $7;");
    asm("loc_65C28BB: push $0;");
    asm("loc_65C28BD: push $_data_65C7600;");
    asm("loc_65C28C2: movl $0x48,0x24(%esp);");
    asm("loc_65C28CA: mov %ecx,0x44(%esp);");
    asm("loc_65C28CE: mov %edx,0x48(%esp);");
    asm("loc_65C28D2: movl $0,0x20(%esp);");
    asm("loc_65C28DA: call *%edi;");
    asm("loc_65C28DC: test %eax,%eax;");
    asm("loc_65C28DE: je loc_65C28E8;");
    asm("loc_65C28E0: pop %edi;");
    asm("loc_65C28E1: xor %al,%al;");
    asm("loc_65C28E3: pop %esi;");
    asm("loc_65C28E4: add $0x50,%esp;");
    asm("loc_65C28E7: ret;");
    asm("loc_65C28E8: lea 0xC(%esp),%ecx;");
    asm("loc_65C28EC: push %ecx;");
    asm("loc_65C28ED: push $_data_65C75F0;");
    asm("loc_65C28F2: push $7;");
    asm("loc_65C28F4: push $0;");
    asm("loc_65C28F6: push $_data_65C7600;");
    asm("loc_65C28FB: call *%edi;");
    asm("loc_65C28FD: test %eax,%eax;");
    asm("loc_65C28FF: mov 8(%esp),%eax;");
    asm("loc_65C2903: je loc_65C2913;");
    asm("loc_65C2905: mov (%eax),%edx;");
    asm("loc_65C2907: push %eax;");
    asm("loc_65C2908: calll *8(%edx);");
    asm("loc_65C290B: pop %edi;");
    asm("loc_65C290C: xor %al,%al;");
    asm("loc_65C290E: pop %esi;");
    asm("loc_65C290F: add $0x50,%esp;");
    asm("loc_65C2912: ret;");
    asm("loc_65C2913: mov (%eax),%ecx;");
    asm("loc_65C2915: push $_data_65C75A0;");
    asm("loc_65C291A: push %eax;");
    asm("loc_65C291B: calll *0x34(%ecx);");
    asm("loc_65C291E: test %eax,%eax;");
    asm("loc_65C2920: je loc_65C2934;");
    asm("loc_65C2922: mov 8(%esp),%eax;");
    asm("loc_65C2926: mov (%eax),%edx;");
    asm("loc_65C2928: push %eax;");
    asm("loc_65C2929: calll *8(%edx);");
    asm("loc_65C292C: pop %edi;");
    asm("loc_65C292D: xor %al,%al;");
    asm("loc_65C292F: pop %esi;");
    asm("loc_65C2930: add $0x50,%esp;");
    asm("loc_65C2933: ret;");
    asm("loc_65C2934: mov 0xC(%esp),%eax;");
    asm("loc_65C2938: mov (%eax),%ecx;");
    asm("loc_65C293A: push $_data_65C75A0;");
    asm("loc_65C293F: push %eax;");
    asm("loc_65C2940: calll *0x34(%ecx);");
    asm("loc_65C2943: test %eax,%eax;");
    asm("loc_65C2945: je loc_65C2963;");
    asm("loc_65C2947: mov 8(%esp),%eax;");
    asm("loc_65C294B: mov (%eax),%edx;");
    asm("loc_65C294D: push %eax;");
    asm("loc_65C294E: calll *8(%edx);");
    asm("loc_65C2951: mov 0xC(%esp),%eax;");
    asm("loc_65C2955: mov (%eax),%ecx;");
    asm("loc_65C2957: push %eax;");
    asm("loc_65C2958: calll *8(%ecx);");
    asm("loc_65C295B: pop %edi;");
    asm("loc_65C295C: xor %al,%al;");
    asm("loc_65C295E: pop %esi;");
    asm("loc_65C295F: add $0x50,%esp;");
    asm("loc_65C2962: ret;");
    asm("loc_65C2963: mov 4(%esi),%eax;");
    asm("loc_65C2966: mov 0xC(%esp),%ecx;");
    asm("loc_65C296A: push $0;");
    asm("loc_65C296C: mov (%eax),%edx;");
    asm("loc_65C296E: add $0x78,%esi;");
    asm("loc_65C2971: push %esi;");
    asm("loc_65C2972: push $0;");
    asm("loc_65C2974: push $0;");
    asm("loc_65C2976: push $0;");
    asm("loc_65C2978: push $0xFFFFFFFF;");
    asm("loc_65C297A: push $0;");
    asm("loc_65C297C: push $0;");
    asm("loc_65C297E: push %ecx;");
    asm("loc_65C297F: mov 0x2C(%esp),%ecx;");
    asm("loc_65C2983: push %ecx;");
    asm("loc_65C2984: lea 0x38(%esp),%ecx;");
    asm("loc_65C2988: push %ecx;");
    asm("loc_65C2989: push %eax;");
    asm("loc_65C298A: calll *0x14(%edx);");
    asm("loc_65C298D: test %eax,%eax;");
    asm("loc_65C298F: je loc_65C29B4;");
    asm("loc_65C2991: cmp $0x15800E,%eax;");
    asm("loc_65C2996: je loc_65C29B4;");
    asm("loc_65C2998: mov 8(%esp),%eax;");
    asm("loc_65C299C: mov (%eax),%edx;");
    asm("loc_65C299E: push %eax;");
    asm("loc_65C299F: calll *8(%edx);");
    asm("loc_65C29A2: mov 0xC(%esp),%eax;");
    asm("loc_65C29A6: mov (%eax),%ecx;");
    asm("loc_65C29A8: push %eax;");
    asm("loc_65C29A9: calll *8(%ecx);");
    asm("loc_65C29AC: pop %edi;");
    asm("loc_65C29AD: xor %al,%al;");
    asm("loc_65C29AF: pop %esi;");
    asm("loc_65C29B0: add $0x50,%esp;");
    asm("loc_65C29B3: ret;");
    asm("loc_65C29B4: mov 8(%esp),%eax;");
    asm("loc_65C29B8: mov (%eax),%edx;");
    asm("loc_65C29BA: push %eax;");
    asm("loc_65C29BB: calll *8(%edx);");
    asm("loc_65C29BE: mov 0xC(%esp),%eax;");
    asm("loc_65C29C2: mov (%eax),%ecx;");
    asm("loc_65C29C4: push %eax;");
    asm("loc_65C29C5: calll *8(%ecx);");
    asm("loc_65C29C8: pop %edi;");
    asm("loc_65C29C9: mov $1,%al;");
    asm("loc_65C29CB: pop %esi;");
    asm("loc_65C29CC: add $0x50,%esp;");
    asm("loc_65C29CF: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C29D0() // ?EnumerateHost@CDPClient@@QAE_NPBGKKKK@Z
{
    __DEBUG_ASM(65C29D0);
    // chunk 0x65C29D0 _sub_65C29D0
    asm("loc_65C29D0: sub $0x854,%esp;");
    asm("loc_65C29D6: push %esi;");
    asm("loc_65C29D7: mov %ecx,%esi;");
    asm("loc_65C29D9: mov 4(%esi),%eax;");
    asm("loc_65C29DC: test %eax,%eax;");
    asm("loc_65C29DE: push %edi;");
    asm("loc_65C29DF: jne loc_65C29EE;");
    asm("loc_65C29E1: pop %edi;");
    asm("loc_65C29E2: xor %al,%al;");
    asm("loc_65C29E4: pop %esi;");
    asm("loc_65C29E5: add $0x854,%esp;");
    asm("loc_65C29EB: ret $0x14;");
    asm("loc_65C29EE: xor %eax,%eax;");
    asm("loc_65C29F0: mov $0x12,%ecx;");
    asm("loc_65C29F5: lea 0x14(%esp),%edi;");
    asm("loc_65C29F9: rep stos %eax,(%edi);");
    asm("loc_65C29FB: mov _import_65C70E0,%edi;");
    asm("loc_65C2A01: lea 0x68(%esi),%eax;");
    asm("loc_65C2A04: mov (%eax),%ecx;");
    asm("loc_65C2A06: mov 4(%eax),%edx;");
    asm("loc_65C2A09: mov %ecx,0x2C(%esp);");
    asm("loc_65C2A0D: mov 8(%eax),%ecx;");
    asm("loc_65C2A10: mov %edx,0x30(%esp);");
    asm("loc_65C2A14: mov 0xC(%eax),%edx;");
    asm("loc_65C2A17: lea 8(%esp),%eax;");
    asm("loc_65C2A1B: push %eax;");
    asm("loc_65C2A1C: push $_data_65C75F0;");
    asm("loc_65C2A21: push $1;");
    asm("loc_65C2A23: push $0;");
    asm("loc_65C2A25: push $_data_65C7600;");
    asm("loc_65C2A2A: movl $0,0x24(%esp);");
    asm("loc_65C2A32: movl $0x48,0x28(%esp);");
    asm("loc_65C2A3A: mov %ecx,0x48(%esp);");
    asm("loc_65C2A3E: mov %edx,0x4C(%esp);");
    asm("loc_65C2A42: movl $0,0x1C(%esp);");
    asm("loc_65C2A4A: movl $0,0x20(%esp);");
    asm("loc_65C2A52: call *%edi;");
    asm("loc_65C2A54: test %eax,%eax;");
    asm("loc_65C2A56: je loc_65C2A65;");
    asm("loc_65C2A58: pop %edi;");
    asm("loc_65C2A59: xor %al,%al;");
    asm("loc_65C2A5B: pop %esi;");
    asm("loc_65C2A5C: add $0x854,%esp;");
    asm("loc_65C2A62: ret $0x14;");
    asm("loc_65C2A65: lea 0xC(%esp),%ecx;");
    asm("loc_65C2A69: push %ecx;");
    asm("loc_65C2A6A: push $_data_65C75F0;");
    asm("loc_65C2A6F: push $1;");
    asm("loc_65C2A71: push $0;");
    asm("loc_65C2A73: push $_data_65C7600;");
    asm("loc_65C2A78: call *%edi;");
    asm("loc_65C2A7A: test %eax,%eax;");
    asm("loc_65C2A7C: je loc_65C2A8B;");
    asm("loc_65C2A7E: pop %edi;");
    asm("loc_65C2A7F: xor %al,%al;");
    asm("loc_65C2A81: pop %esi;");
    asm("loc_65C2A82: add $0x854,%esp;");
    asm("loc_65C2A88: ret $0x14;");
    asm("loc_65C2A8B: mov 0x860(%esp),%edx;");
    asm("loc_65C2A92: push %edx;");
    asm("loc_65C2A93: lea 0x60(%esp),%eax;");
    asm("loc_65C2A97: push $_data_65C7480;");
    asm("loc_65C2A9C: push %eax;");
    asm("loc_65C2A9D: calll *_import_65C70BC;");
    asm("loc_65C2AA3: mov 0x14(%esp),%eax;");
    asm("loc_65C2AA7: mov (%eax),%ecx;");
    asm("loc_65C2AA9: add $0xC,%esp;");
    asm("loc_65C2AAC: lea 0x5C(%esp),%edx;");
    asm("loc_65C2AB0: push %edx;");
    asm("loc_65C2AB1: push %eax;");
    asm("loc_65C2AB2: calll *0xC(%ecx);");
    asm("loc_65C2AB5: test %eax,%eax;");
    asm("loc_65C2AB7: je loc_65C2AC6;");
    asm("loc_65C2AB9: pop %edi;");
    asm("loc_65C2ABA: xor %al,%al;");
    asm("loc_65C2ABC: pop %esi;");
    asm("loc_65C2ABD: add $0x854,%esp;");
    asm("loc_65C2AC3: ret $0x14;");
    asm("loc_65C2AC6: mov 8(%esp),%eax;");
    asm("loc_65C2ACA: mov (%eax),%ecx;");
    asm("loc_65C2ACC: push $_data_65C75A0;");
    asm("loc_65C2AD1: push %eax;");
    asm("loc_65C2AD2: calll *0x34(%ecx);");
    asm("loc_65C2AD5: test %eax,%eax;");
    asm("loc_65C2AD7: je loc_65C2AE6;");
    asm("loc_65C2AD9: pop %edi;");
    asm("loc_65C2ADA: xor %al,%al;");
    asm("loc_65C2ADC: pop %esi;");
    asm("loc_65C2ADD: add $0x854,%esp;");
    asm("loc_65C2AE3: ret $0x14;");
    asm("loc_65C2AE6: mov 0xC(%esp),%eax;");
    asm("loc_65C2AEA: mov (%eax),%edx;");
    asm("loc_65C2AEC: push $_data_65C75A0;");
    asm("loc_65C2AF1: push %eax;");
    asm("loc_65C2AF2: calll *0x34(%edx);");
    asm("loc_65C2AF5: test %eax,%eax;");
    asm("loc_65C2AF7: je loc_65C2B06;");
    asm("loc_65C2AF9: pop %edi;");
    asm("loc_65C2AFA: xor %al,%al;");
    asm("loc_65C2AFC: pop %esi;");
    asm("loc_65C2AFD: add $0x854,%esp;");
    asm("loc_65C2B03: ret $0x14;");
    asm("loc_65C2B06: mov 0x864(%esp),%eax;");
    asm("loc_65C2B0D: test %eax,%eax;");
    asm("loc_65C2B0F: je loc_65C2B3D;");
    asm("loc_65C2B11: mov 8(%esp),%eax;");
    asm("loc_65C2B15: mov (%eax),%ecx;");
    asm("loc_65C2B17: push $2;");
    asm("loc_65C2B19: push $4;");
    asm("loc_65C2B1B: lea 0x86C(%esp),%edx;");
    asm("loc_65C2B22: push %edx;");
    asm("loc_65C2B23: push $_data_65C7474;");
    asm("loc_65C2B28: push %eax;");
    asm("loc_65C2B29: calll *0x48(%ecx);");
    asm("loc_65C2B2C: test %eax,%eax;");
    asm("loc_65C2B2E: je loc_65C2B3D;");
    asm("loc_65C2B30: pop %edi;");
    asm("loc_65C2B31: xor %al,%al;");
    asm("loc_65C2B33: pop %esi;");
    asm("loc_65C2B34: add $0x854,%esp;");
    asm("loc_65C2B3A: ret $0x14;");
    asm("loc_65C2B3D: push $2;");
    asm("loc_65C2B3F: mov 4(%esi),%eax;");
    asm("loc_65C2B42: mov (%eax),%ecx;");
    asm("loc_65C2B44: lea 0x14(%esp),%edx;");
    asm("loc_65C2B48: push %edx;");
    asm("loc_65C2B49: mov 0x878(%esp),%edx;");
    asm("loc_65C2B50: push %esi;");
    asm("loc_65C2B51: push %edx;");
    asm("loc_65C2B52: mov 0x87C(%esp),%edx;");
    asm("loc_65C2B59: push %edx;");
    asm("loc_65C2B5A: mov 0x87C(%esp),%edx;");
    asm("loc_65C2B61: push %edx;");
    asm("loc_65C2B62: mov 0x24(%esp),%edx;");
    asm("loc_65C2B66: push $0;");
    asm("loc_65C2B68: push $0;");
    asm("loc_65C2B6A: push %edx;");
    asm("loc_65C2B6B: mov 0x2C(%esp),%edx;");
    asm("loc_65C2B6F: push %edx;");
    asm("loc_65C2B70: lea 0x3C(%esp),%edx;");
    asm("loc_65C2B74: push %edx;");
    asm("loc_65C2B75: push %eax;");
    asm("loc_65C2B76: calll *0x14(%ecx);");
    asm("loc_65C2B79: test %eax,%eax;");
    asm("loc_65C2B7B: je loc_65C2B91;");
    asm("loc_65C2B7D: cmp $0x15800E,%eax;");
    asm("loc_65C2B82: je loc_65C2B91;");
    asm("loc_65C2B84: pop %edi;");
    asm("loc_65C2B85: xor %al,%al;");
    asm("loc_65C2B87: pop %esi;");
    asm("loc_65C2B88: add $0x854,%esp;");
    asm("loc_65C2B8E: ret $0x14;");
    asm("loc_65C2B91: mov 8(%esp),%eax;");
    asm("loc_65C2B95: mov (%eax),%ecx;");
    asm("loc_65C2B97: push %eax;");
    asm("loc_65C2B98: calll *8(%ecx);");
    asm("loc_65C2B9B: mov 0xC(%esp),%eax;");
    asm("loc_65C2B9F: mov (%eax),%edx;");
    asm("loc_65C2BA1: push %eax;");
    asm("loc_65C2BA2: calll *8(%edx);");
    asm("loc_65C2BA5: pop %edi;");
    asm("loc_65C2BA6: mov $1,%al;");
    asm("loc_65C2BA8: pop %esi;");
    asm("loc_65C2BA9: add $0x854,%esp;");
    asm("loc_65C2BAF: ret $0x14;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C2BC0() // ?GetLastMsgTimestamp@CDPClient@@SAKXZ
{
    __DEBUG_ASM(65C2BC0);
    // chunk 0x65C2BC0 _sub_65C2BC0
    asm("loc_65C2BC0: mov _data_65CA120,%eax;");
    asm("loc_65C2BC5: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C2BD0() // ?GetPingDelay@CDPClient@@SAKXZ
{
    __DEBUG_ASM(65C2BD0);
    // chunk 0x65C2BD0 _sub_65C2BD0
    asm("loc_65C2BD0: mov _data_65CA1B4,%eax;");
    asm("loc_65C2BD5: test %eax,%eax;");
    asm("loc_65C2BD7: jne loc_65C2BDA;");
    asm("loc_65C2BD9: ret;");
    asm("loc_65C2BDA: cmp _data_65CA1B8,%eax;");
    asm("loc_65C2BE0: jne loc_65C2BF3;");
    asm("loc_65C2BE2: mov _data_65CA1B0,%eax;");
    asm("loc_65C2BE7: sub _data_65CA1AC,%eax;");
    asm("loc_65C2BED: mov %eax,_data_65CA1BC;");
    asm("loc_65C2BF2: ret;");
    asm("loc_65C2BF3: calll *_import_65C70D8;");
    asm("loc_65C2BF9: sub _data_65CA1AC,%eax;");
    asm("loc_65C2BFF: mov _data_65CA1BC,%ecx;");
    asm("loc_65C2C05: cmp %ecx,%eax;");
    asm("loc_65C2C07: ja loc_65C2C0B;");
    asm("loc_65C2C09: mov %ecx,%eax;");
    asm("loc_65C2C0B: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C2C10() // ?GetSendQueueSize@CDPClient@@SAKXZ
{
    __DEBUG_ASM(65C2C10);
    // chunk 0x65C2C10 _sub_65C2C10
    asm("loc_65C2C10: push %ecx;");
    asm("loc_65C2C11: mov _data_65CA1C8,%ecx;");
    asm("loc_65C2C17: xor %eax,%eax;");
    asm("loc_65C2C19: test %ecx,%ecx;");
    asm("loc_65C2C1B: mov %eax,(%esp);");
    asm("loc_65C2C1F: je loc_65C2C3B;");
    asm("loc_65C2C21: mov 4(%ecx),%ecx;");
    asm("loc_65C2C24: test %ecx,%ecx;");
    asm("loc_65C2C26: je loc_65C2C3B;");
    asm("loc_65C2C28: mov (%ecx),%eax;");
    asm("loc_65C2C2A: push $1;");
    asm("loc_65C2C2C: push $0;");
    asm("loc_65C2C2E: lea 8(%esp),%edx;");
    asm("loc_65C2C32: push %edx;");
    asm("loc_65C2C33: push %ecx;");
    asm("loc_65C2C34: calll *0x24(%eax);");
    asm("loc_65C2C37: mov (%esp),%eax;");
    asm("loc_65C2C3B: pop %ecx;");
    asm("loc_65C2C3C: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C2C40() // ?IsPingOutstanding@CDPClient@@SA_NXZ
{
    __DEBUG_ASM(65C2C40);
    // chunk 0x65C2C40 _sub_65C2C40
    asm("loc_65C2C40: mov _data_65CA1B8,%eax;");
    asm("loc_65C2C45: cmp _data_65CA1B4,%eax;");
    asm("loc_65C2C4B: sbb %eax,%eax;");
    asm("loc_65C2C4D: neg %eax;");
    asm("loc_65C2C4F: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C2C50() // ?SetSourcePort@CDPClient@@SAXK@Z
{
    __DEBUG_ASM(65C2C50);
    // chunk 0x65C2C50 _sub_65C2C50
    asm("loc_65C2C50: mov 4(%esp),%eax;");
    asm("loc_65C2C54: mov %eax,_data_65CA1C4;");
    asm("loc_65C2C59: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C2C60() // ?GetLinkQuality@CDPClient@@SAKXZ
{
    __DEBUG_ASM(65C2C60);
    // chunk 0x65C2C60 _sub_65C2C60
    asm("loc_65C2C60: mov _data_65CA020,%eax;");
    asm("loc_65C2C65: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C2C70() // ??0CDPMsgList@@QAE@ABV0@@Z
{
    __DEBUG_ASM(65C2C70);
    // chunk 0x65C2C70 _sub_65C2C70
    asm("loc_65C2C70: push %ecx;");
    asm("loc_65C2C71: push %ebx;");
    asm("loc_65C2C72: push %ebp;");
    asm("loc_65C2C73: mov 0x10(%esp),%ebp;");
    asm("loc_65C2C77: mov 4(%ebp),%al;");
    asm("loc_65C2C7A: push %esi;");
    asm("loc_65C2C7B: push %edi;");
    asm("loc_65C2C7C: mov %ecx,%ebx;");
    asm("loc_65C2C7E: push $0xC;");
    asm("loc_65C2C80: mov %al,4(%ebx);");
    asm("loc_65C2C83: call _sub_65C6A66;");
    asm("loc_65C2C88: mov %eax,(%eax);");
    asm("loc_65C2C8A: mov %eax,4(%eax);");
    asm("loc_65C2C8D: mov %eax,8(%ebx);");
    asm("loc_65C2C90: movl $0,0xC(%ebx);");
    asm("loc_65C2C97: mov 8(%ebp),%ecx;");
    asm("loc_65C2C9A: mov (%ecx),%edi;");
    asm("loc_65C2C9C: mov (%eax),%esi;");
    asm("loc_65C2C9E: add $4,%esp;");
    asm("loc_65C2CA1: cmp %ecx,%edi;");
    asm("loc_65C2CA3: mov %ecx,0x10(%esp);");
    asm("loc_65C2CA7: je loc_65C2CF1;");
    asm("loc_65C2CA9: lea (%esp),%esp;");
    asm("loc_65C2CB0: mov 4(%esi),%ebp;");
    asm("loc_65C2CB3: push $0xC;");
    asm("loc_65C2CB5: call _sub_65C6A66;");
    asm("loc_65C2CBA: add $4,%esp;");
    asm("loc_65C2CBD: test %ebp,%ebp;");
    asm("loc_65C2CBF: mov %esi,(%eax);");
    asm("loc_65C2CC1: jne loc_65C2CC5;");
    asm("loc_65C2CC3: mov %eax,%ebp;");
    asm("loc_65C2CC5: mov %ebp,4(%eax);");
    asm("loc_65C2CC8: mov %eax,4(%esi);");
    asm("loc_65C2CCB: mov 4(%eax),%ecx;");
    asm("loc_65C2CCE: mov %eax,(%ecx);");
    asm("loc_65C2CD0: add $8,%eax;");
    asm("loc_65C2CD3: test %eax,%eax;");
    asm("loc_65C2CD5: je loc_65C2CDC;");
    asm("loc_65C2CD7: mov 8(%edi),%edx;");
    asm("loc_65C2CDA: mov %edx,(%eax);");
    asm("loc_65C2CDC: mov 0xC(%ebx),%ecx;");
    asm("loc_65C2CDF: mov 0x10(%esp),%eax;");
    asm("loc_65C2CE3: inc %ecx;");
    asm("loc_65C2CE4: mov %ecx,0xC(%ebx);");
    asm("loc_65C2CE7: mov (%edi),%edi;");
    asm("loc_65C2CE9: cmp %eax,%edi;");
    asm("loc_65C2CEB: jne loc_65C2CB0;");
    asm("loc_65C2CED: mov 0x18(%esp),%ebp;");
    asm("loc_65C2CF1: lea 0x10(%ebp),%esi;");
    asm("loc_65C2CF4: lea 0x10(%ebx),%edi;");
    asm("loc_65C2CF7: mov $6,%ecx;");
    asm("loc_65C2CFC: rep movsl (%esi),(%edi);");
    asm("loc_65C2CFE: mov 0x28(%ebp),%eax;");
    asm("loc_65C2D01: pop %edi;");
    asm("loc_65C2D02: pop %esi;");
    asm("loc_65C2D03: mov %eax,0x28(%ebx);");
    asm("loc_65C2D06: pop %ebp;");
    asm("loc_65C2D07: movl $_off_65C74B4,(%ebx);");
    asm("loc_65C2D0D: mov %ebx,%eax;");
    asm("loc_65C2D0F: pop %ebx;");
    asm("loc_65C2D10: pop %ecx;");
    asm("loc_65C2D11: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C2D20() // ??4CDPMsgList@@QAEAAV0@ABV0@@Z
{
    __DEBUG_ASM(65C2D20);
    // chunk 0x65C2D20 _sub_65C2D20
    asm("loc_65C2D20: sub $8,%esp;");
    asm("loc_65C2D23: mov 0xC(%esp),%eax;");
    asm("loc_65C2D27: push %ebx;");
    asm("loc_65C2D28: mov %ecx,%edx;");
    asm("loc_65C2D2A: push %ebp;");
    asm("loc_65C2D2B: lea 4(%eax),%ecx;");
    asm("loc_65C2D2E: lea 4(%edx),%ebp;");
    asm("loc_65C2D31: cmp %ecx,%ebp;");
    asm("loc_65C2D33: push %esi;");
    asm("loc_65C2D34: push %edi;");
    asm("loc_65C2D35: mov %edx,0x14(%esp);");
    asm("loc_65C2D39: je loc_65C2DE4;");
    asm("loc_65C2D3F: mov 4(%ebp),%esi;");
    asm("loc_65C2D42: mov (%esi),%eax;");
    asm("loc_65C2D44: cmp %esi,%eax;");
    asm("loc_65C2D46: mov 4(%ecx),%ecx;");
    asm("loc_65C2D49: mov (%ecx),%ebx;");
    asm("loc_65C2D4B: mov %ecx,0x10(%esp);");
    asm("loc_65C2D4F: je loc_65C2D63;");
    asm("loc_65C2D51: cmp %ecx,%ebx;");
    asm("loc_65C2D53: je loc_65C2D63;");
    asm("loc_65C2D55: mov 8(%ebx),%edi;");
    asm("loc_65C2D58: mov %edi,8(%eax);");
    asm("loc_65C2D5B: mov (%eax),%eax;");
    asm("loc_65C2D5D: cmp %esi,%eax;");
    asm("loc_65C2D5F: mov (%ebx),%ebx;");
    asm("loc_65C2D61: jne loc_65C2D51;");
    asm("loc_65C2D63: cmp %esi,%eax;");
    asm("loc_65C2D65: mov %eax,%edi;");
    asm("loc_65C2D67: je loc_65C2D9F;");
    asm("loc_65C2D69: lea (%esp),%esp;");
    asm("loc_65C2D70: mov %edi,%eax;");
    asm("loc_65C2D72: mov 4(%eax),%ecx;");
    asm("loc_65C2D75: mov (%eax),%edx;");
    asm("loc_65C2D77: mov (%edi),%edi;");
    asm("loc_65C2D79: mov %edx,(%ecx);");
    asm("loc_65C2D7B: mov (%eax),%ecx;");
    asm("loc_65C2D7D: mov 4(%eax),%edx;");
    asm("loc_65C2D80: push %eax;");
    asm("loc_65C2D81: mov %edx,4(%ecx);");
    asm("loc_65C2D84: call _sub_65C6A60;");
    asm("loc_65C2D89: mov 8(%ebp),%ecx;");
    asm("loc_65C2D8C: add $4,%esp;");
    asm("loc_65C2D8F: dec %ecx;");
    asm("loc_65C2D90: cmp %esi,%edi;");
    asm("loc_65C2D92: mov %ecx,8(%ebp);");
    asm("loc_65C2D95: jne loc_65C2D70;");
    asm("loc_65C2D97: mov 0x14(%esp),%edx;");
    asm("loc_65C2D9B: mov 0x10(%esp),%ecx;");
    asm("loc_65C2D9F: cmp %ecx,%ebx;");
    asm("loc_65C2DA1: je loc_65C2DE4;");
    asm("loc_65C2DA3: mov 4(%esi),%edi;");
    asm("loc_65C2DA6: push $0xC;");
    asm("loc_65C2DA8: call _sub_65C6A66;");
    asm("loc_65C2DAD: add $4,%esp;");
    asm("loc_65C2DB0: test %edi,%edi;");
    asm("loc_65C2DB2: mov %esi,(%eax);");
    asm("loc_65C2DB4: jne loc_65C2DB8;");
    asm("loc_65C2DB6: mov %eax,%edi;");
    asm("loc_65C2DB8: mov %edi,4(%eax);");
    asm("loc_65C2DBB: mov %eax,4(%esi);");
    asm("loc_65C2DBE: mov 4(%eax),%ecx;");
    asm("loc_65C2DC1: mov %eax,(%ecx);");
    asm("loc_65C2DC3: add $8,%eax;");
    asm("loc_65C2DC6: test %eax,%eax;");
    asm("loc_65C2DC8: je loc_65C2DCF;");
    asm("loc_65C2DCA: mov 8(%ebx),%edx;");
    asm("loc_65C2DCD: mov %edx,(%eax);");
    asm("loc_65C2DCF: mov 8(%ebp),%ecx;");
    asm("loc_65C2DD2: mov 0x10(%esp),%eax;");
    asm("loc_65C2DD6: inc %ecx;");
    asm("loc_65C2DD7: mov %ecx,8(%ebp);");
    asm("loc_65C2DDA: mov (%ebx),%ebx;");
    asm("loc_65C2DDC: cmp %eax,%ebx;");
    asm("loc_65C2DDE: jne loc_65C2DA3;");
    asm("loc_65C2DE0: mov 0x14(%esp),%edx;");
    asm("loc_65C2DE4: mov 0x1C(%esp),%eax;");
    asm("loc_65C2DE8: lea 0x10(%eax),%esi;");
    asm("loc_65C2DEB: lea 0x10(%edx),%edi;");
    asm("loc_65C2DEE: mov $6,%ecx;");
    asm("loc_65C2DF3: rep movsl (%esi),(%edi);");
    asm("loc_65C2DF5: pop %edi;");
    asm("loc_65C2DF6: mov %eax,%ecx;");
    asm("loc_65C2DF8: mov 0x28(%ecx),%eax;");
    asm("loc_65C2DFB: pop %esi;");
    asm("loc_65C2DFC: pop %ebp;");
    asm("loc_65C2DFD: mov %eax,0x28(%edx);");
    asm("loc_65C2E00: mov %edx,%eax;");
    asm("loc_65C2E02: pop %ebx;");
    asm("loc_65C2E03: add $8,%esp;");
    asm("loc_65C2E06: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C2E10() // _sub_65C2E10
{
    __DEBUG_ASM(65C2E10);
    // chunk 0x65C2E10 _sub_65C2E10
    asm("loc_65C2E10: push %ebx;");
    asm("loc_65C2E11: mov 8(%esp),%bl;");
    asm("loc_65C2E15: test $2,%bl;");
    asm("loc_65C2E18: push %esi;");
    asm("loc_65C2E19: mov %ecx,%esi;");
    asm("loc_65C2E1B: je loc_65C2E48;");
    asm("loc_65C2E1D: mov -4(%esi),%eax;");
    asm("loc_65C2E20: push %edi;");
    asm("loc_65C2E21: push $_sub_65C4240;");
    asm("loc_65C2E26: lea -4(%esi),%edi;");
    asm("loc_65C2E29: push %eax;");
    asm("loc_65C2E2A: push $0x2C;");
    asm("loc_65C2E2C: push %esi;");
    asm("loc_65C2E2D: call _sub_65C6AEF;");
    asm("loc_65C2E32: test $1,%bl;");
    asm("loc_65C2E35: je loc_65C2E40;");
    asm("loc_65C2E37: push %edi;");
    asm("loc_65C2E38: call _sub_65C6A60;");
    asm("loc_65C2E3D: add $4,%esp;");
    asm("loc_65C2E40: mov %edi,%eax;");
    asm("loc_65C2E42: pop %edi;");
    asm("loc_65C2E43: pop %esi;");
    asm("loc_65C2E44: pop %ebx;");
    asm("loc_65C2E45: ret $4;");
    asm("loc_65C2E48: mov %esi,%ecx;");
    asm("loc_65C2E4A: call _sub_65C4240;");
    asm("loc_65C2E4F: test $1,%bl;");
    asm("loc_65C2E52: je loc_65C2E5D;");
    asm("loc_65C2E54: push %esi;");
    asm("loc_65C2E55: call _sub_65C6A60;");
    asm("loc_65C2E5A: add $4,%esp;");
    asm("loc_65C2E5D: mov %esi,%eax;");
    asm("loc_65C2E5F: pop %esi;");
    asm("loc_65C2E60: pop %ebx;");
    asm("loc_65C2E61: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C2E70() // ?OnDisconnect@IDPMsgHandler@@UAEXXZ
{
    __DEBUG_ASM(65C2E70);
    // chunk 0x65C2E70 _sub_65C2E70
    asm("loc_65C2E70: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C2E80() // ??0IDPMsgHandler@@QAE@XZ
{
    __DEBUG_ASM(65C2E80);
    // chunk 0x65C2E80 _sub_65C2E80
    asm("loc_65C2E80: mov %ecx,%eax;");
    asm("loc_65C2E82: movl $_off_65C7460,(%eax);");
    asm("loc_65C2E88: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C2E90() // ??0IDPMsgHandler@@QAE@ABV0@@Z
{
    __DEBUG_ASM(65C2E90);
    // chunk 0x65C2E90 _sub_65C2E90
    asm("loc_65C2E90: mov %ecx,%eax;");
    asm("loc_65C2E92: movl $_off_65C7460,(%eax);");
    asm("loc_65C2E98: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C2EA0() // ??4IDPMsgHandler@@QAEAAV0@ABV0@@Z
{
    __DEBUG_ASM(65C2EA0);
    // chunk 0x65C2EA0 _sub_65C2EA0
    asm("loc_65C2EA0: mov %ecx,%eax;");
    asm("loc_65C2EA2: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C2EB0() // ?GetConnectResult@CDPClient@@QAEJXZ
{
    __DEBUG_ASM(65C2EB0);
    // chunk 0x65C2EB0 _sub_65C2EB0
    asm("loc_65C2EB0: mov 0x7C(%ecx),%eax;");
    asm("loc_65C2EB3: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C2EC0() // ??0CDPClient@@QAE@ABV0@@Z
{
    __DEBUG_ASM(65C2EC0);
    // chunk 0x65C2EC0 _sub_65C2EC0
    asm("loc_65C2EC0: push $0xFFFFFFFF;");
    asm("loc_65C2EC2: push $_sub_65C6E36;");
    asm("loc_65C2EC7: mov %fs:0,%eax;");
    asm("loc_65C2ECD: push %eax;");
    asm("loc_65C2ECE: mov %esp,%fs:0;");
    asm("loc_65C2ED5: push %ecx;");
    asm("loc_65C2ED6: push %ebx;");
    asm("loc_65C2ED7: mov %ecx,%ebx;");
    asm("loc_65C2ED9: push %ebp;");
    asm("loc_65C2EDA: mov 0x1C(%esp),%ebp;");
    asm("loc_65C2EDE: movl $_off_65C7460,(%ebx);");
    asm("loc_65C2EE4: mov 4(%ebp),%eax;");
    asm("loc_65C2EE7: mov %eax,4(%ebx);");
    asm("loc_65C2EEA: mov 8(%ebp),%cl;");
    asm("loc_65C2EED: mov %cl,8(%ebx);");
    asm("loc_65C2EF0: mov 0xC(%ebp),%edx;");
    asm("loc_65C2EF3: push %esi;");
    asm("loc_65C2EF4: mov %edx,0xC(%ebx);");
    asm("loc_65C2EF7: mov 0x14(%ebp),%al;");
    asm("loc_65C2EFA: push %edi;");
    asm("loc_65C2EFB: lea 0x14(%ebx),%esi;");
    asm("loc_65C2EFE: push $0xC;");
    asm("loc_65C2F00: mov %ebx,0x14(%esp);");
    asm("loc_65C2F04: mov %al,(%esi);");
    asm("loc_65C2F06: call _sub_65C6A66;");
    asm("loc_65C2F0B: mov %eax,(%eax);");
    asm("loc_65C2F0D: mov %eax,4(%eax);");
    asm("loc_65C2F10: mov %eax,4(%esi);");
    asm("loc_65C2F13: movl $0,8(%esi);");
    asm("loc_65C2F1A: mov 0x18(%ebp),%ecx;");
    asm("loc_65C2F1D: mov (%ecx),%edx;");
    asm("loc_65C2F1F: mov (%eax),%eax;");
    asm("loc_65C2F21: add $4,%esp;");
    asm("loc_65C2F24: push %ecx;");
    asm("loc_65C2F25: push %edx;");
    asm("loc_65C2F26: push %eax;");
    asm("loc_65C2F27: mov %esi,%ecx;");
    asm("loc_65C2F29: call _sub_65C33A0;");
    asm("loc_65C2F2E: lea 0x20(%ebp),%esi;");
    asm("loc_65C2F31: lea 0x20(%ebx),%edi;");
    asm("loc_65C2F34: mov $6,%ecx;");
    asm("loc_65C2F39: rep movsl (%esi),(%edi);");
    asm("loc_65C2F3B: mov 0x38(%ebp),%ecx;");
    asm("loc_65C2F3E: mov %ecx,0x38(%ebx);");
    asm("loc_65C2F41: movl $_off_65C74B4,0x10(%ebx);");
    asm("loc_65C2F48: mov 0x40(%ebp),%dl;");
    asm("loc_65C2F4B: xor %edi,%edi;");
    asm("loc_65C2F4D: lea 0x40(%ebx),%esi;");
    asm("loc_65C2F50: push $0xC;");
    asm("loc_65C2F52: mov %edi,0x20(%esp);");
    asm("loc_65C2F56: mov %dl,(%esi);");
    asm("loc_65C2F58: call _sub_65C6A66;");
    asm("loc_65C2F5D: mov %eax,(%eax);");
    asm("loc_65C2F5F: mov %eax,4(%eax);");
    asm("loc_65C2F62: mov %eax,4(%esi);");
    asm("loc_65C2F65: mov %edi,8(%esi);");
    asm("loc_65C2F68: mov 0x44(%ebp),%ecx;");
    asm("loc_65C2F6B: mov (%ecx),%edx;");
    asm("loc_65C2F6D: mov (%eax),%eax;");
    asm("loc_65C2F6F: add $4,%esp;");
    asm("loc_65C2F72: push %ecx;");
    asm("loc_65C2F73: push %edx;");
    asm("loc_65C2F74: push %eax;");
    asm("loc_65C2F75: mov %esi,%ecx;");
    asm("loc_65C2F77: call _sub_65C33A0;");
    asm("loc_65C2F7C: lea 0x4C(%ebp),%esi;");
    asm("loc_65C2F7F: lea 0x4C(%ebx),%edi;");
    asm("loc_65C2F82: mov $6,%ecx;");
    asm("loc_65C2F87: rep movsl (%esi),(%edi);");
    asm("loc_65C2F89: mov 0x64(%ebp),%eax;");
    asm("loc_65C2F8C: mov %eax,0x64(%ebx);");
    asm("loc_65C2F8F: movl $_off_65C74B4,0x3C(%ebx);");
    asm("loc_65C2F96: lea 0x68(%ebp),%ecx;");
    asm("loc_65C2F99: mov (%ecx),%eax;");
    asm("loc_65C2F9B: lea 0x68(%ebx),%edx;");
    asm("loc_65C2F9E: mov %eax,(%edx);");
    asm("loc_65C2FA0: mov 4(%ecx),%eax;");
    asm("loc_65C2FA3: mov %eax,4(%edx);");
    asm("loc_65C2FA6: mov 8(%ecx),%eax;");
    asm("loc_65C2FA9: mov %eax,8(%edx);");
    asm("loc_65C2FAC: mov 0xC(%ecx),%ecx;");
    asm("loc_65C2FAF: mov %ecx,0xC(%edx);");
    asm("loc_65C2FB2: mov 0x78(%ebp),%edx;");
    asm("loc_65C2FB5: movb $1,0x1C(%esp);");
    asm("loc_65C2FBA: mov %edx,0x78(%ebx);");
    asm("loc_65C2FBD: mov 0x7C(%ebp),%eax;");
    asm("loc_65C2FC0: mov %eax,0x7C(%ebx);");
    asm("loc_65C2FC3: mov 0x80(%ebp),%cl;");
    asm("loc_65C2FC9: lea 0x80(%ebx),%esi;");
    asm("loc_65C2FCF: push $0x28;");
    asm("loc_65C2FD1: mov %cl,(%esi);");
    asm("loc_65C2FD3: call _sub_65C6A66;");
    asm("loc_65C2FD8: mov %eax,(%eax);");
    asm("loc_65C2FDA: mov %eax,4(%eax);");
    asm("loc_65C2FDD: mov %eax,4(%esi);");
    asm("loc_65C2FE0: movl $0,8(%esi);");
    asm("loc_65C2FE7: mov 0x84(%ebp),%ecx;");
    asm("loc_65C2FED: mov (%ecx),%edx;");
    asm("loc_65C2FEF: mov (%eax),%eax;");
    asm("loc_65C2FF1: add $4,%esp;");
    asm("loc_65C2FF4: push %ecx;");
    asm("loc_65C2FF5: push %edx;");
    asm("loc_65C2FF6: push %eax;");
    asm("loc_65C2FF7: mov %esi,%ecx;");
    asm("loc_65C2FF9: call _sub_65C3450;");
    asm("loc_65C2FFE: mov 0x8C(%ebp),%dl;");
    asm("loc_65C3004: mov 0x14(%esp),%ecx;");
    asm("loc_65C3008: pop %edi;");
    asm("loc_65C3009: pop %esi;");
    asm("loc_65C300A: mov %dl,0x8C(%ebx);");
    asm("loc_65C3010: movl $_off_65C744C,(%ebx);");
    asm("loc_65C3016: pop %ebp;");
    asm("loc_65C3017: mov %ebx,%eax;");
    asm("loc_65C3019: pop %ebx;");
    asm("loc_65C301A: mov %ecx,%fs:0;");
    asm("loc_65C3021: add $0x10,%esp;");
    asm("loc_65C3024: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C3030() // ??4CDPClient@@QAEAAV0@ABV0@@Z
{
    __DEBUG_ASM(65C3030);
    // chunk 0x65C3030 _sub_65C3030
    asm("loc_65C3030: sub $0xC,%esp;");
    asm("loc_65C3033: push %ebx;");
    asm("loc_65C3034: mov 0x14(%esp),%ebx;");
    asm("loc_65C3038: mov 4(%ebx),%eax;");
    asm("loc_65C303B: push %ebp;");
    asm("loc_65C303C: mov %ecx,%ebp;");
    asm("loc_65C303E: mov %eax,4(%ebp);");
    asm("loc_65C3041: mov 8(%ebx),%cl;");
    asm("loc_65C3044: mov %cl,8(%ebp);");
    asm("loc_65C3047: mov 0xC(%ebx),%edx;");
    asm("loc_65C304A: lea 0x14(%ebx),%ecx;");
    asm("loc_65C304D: lea 0x14(%ebp),%eax;");
    asm("loc_65C3050: cmp %ecx,%eax;");
    asm("loc_65C3052: push %esi;");
    asm("loc_65C3053: push %edi;");
    asm("loc_65C3054: mov %ebp,0x10(%esp);");
    asm("loc_65C3058: mov %edx,0xC(%ebp);");
    asm("loc_65C305B: je loc_65C30A0;");
    asm("loc_65C305D: mov 4(%eax),%edi;");
    asm("loc_65C3060: mov (%edi),%eax;");
    asm("loc_65C3062: cmp %edi,%eax;");
    asm("loc_65C3064: mov 4(%ecx),%ecx;");
    asm("loc_65C3067: mov (%ecx),%esi;");
    asm("loc_65C3069: mov %ecx,0x14(%esp);");
    asm("loc_65C306D: je loc_65C3082;");
    asm("loc_65C306F: nop;");
    asm("loc_65C3070: cmp %ecx,%esi;");
    asm("loc_65C3072: je loc_65C3082;");
    asm("loc_65C3074: mov 8(%esi),%edx;");
    asm("loc_65C3077: mov %edx,8(%eax);");
    asm("loc_65C307A: mov (%eax),%eax;");
    asm("loc_65C307C: cmp %edi,%eax;");
    asm("loc_65C307E: mov (%esi),%esi;");
    asm("loc_65C3080: jne loc_65C3070;");
    asm("loc_65C3082: push %edi;");
    asm("loc_65C3083: push %eax;");
    asm("loc_65C3084: lea 0x20(%esp),%eax;");
    asm("loc_65C3088: push %eax;");
    asm("loc_65C3089: lea 0x14(%ebp),%ecx;");
    asm("loc_65C308C: call _sub_65C3400;");
    asm("loc_65C3091: mov 0x14(%esp),%ecx;");
    asm("loc_65C3095: push %ecx;");
    asm("loc_65C3096: push %esi;");
    asm("loc_65C3097: push %edi;");
    asm("loc_65C3098: lea 0x14(%ebp),%ecx;");
    asm("loc_65C309B: call _sub_65C33A0;");
    asm("loc_65C30A0: lea 0x20(%ebx),%esi;");
    asm("loc_65C30A3: lea 0x20(%ebp),%edi;");
    asm("loc_65C30A6: mov $6,%ecx;");
    asm("loc_65C30AB: rep movsl (%esi),(%edi);");
    asm("loc_65C30AD: mov 0x38(%ebx),%edx;");
    asm("loc_65C30B0: lea 0x40(%ebx),%ecx;");
    asm("loc_65C30B3: lea 0x40(%ebp),%eax;");
    asm("loc_65C30B6: cmp %ecx,%eax;");
    asm("loc_65C30B8: mov %edx,0x38(%ebp);");
    asm("loc_65C30BB: je loc_65C3100;");
    asm("loc_65C30BD: mov 4(%eax),%edi;");
    asm("loc_65C30C0: mov (%edi),%eax;");
    asm("loc_65C30C2: cmp %edi,%eax;");
    asm("loc_65C30C4: mov 4(%ecx),%ecx;");
    asm("loc_65C30C7: mov (%ecx),%esi;");
    asm("loc_65C30C9: mov %ecx,0x14(%esp);");
    asm("loc_65C30CD: je loc_65C30E2;");
    asm("loc_65C30CF: nop;");
    asm("loc_65C30D0: cmp %ecx,%esi;");
    asm("loc_65C30D2: je loc_65C30E2;");
    asm("loc_65C30D4: mov 8(%esi),%edx;");
    asm("loc_65C30D7: mov %edx,8(%eax);");
    asm("loc_65C30DA: mov (%eax),%eax;");
    asm("loc_65C30DC: cmp %edi,%eax;");
    asm("loc_65C30DE: mov (%esi),%esi;");
    asm("loc_65C30E0: jne loc_65C30D0;");
    asm("loc_65C30E2: push %edi;");
    asm("loc_65C30E3: push %eax;");
    asm("loc_65C30E4: lea 0x20(%esp),%eax;");
    asm("loc_65C30E8: push %eax;");
    asm("loc_65C30E9: lea 0x40(%ebp),%ecx;");
    asm("loc_65C30EC: call _sub_65C3400;");
    asm("loc_65C30F1: mov 0x14(%esp),%ecx;");
    asm("loc_65C30F5: push %ecx;");
    asm("loc_65C30F6: push %esi;");
    asm("loc_65C30F7: push %edi;");
    asm("loc_65C30F8: lea 0x40(%ebp),%ecx;");
    asm("loc_65C30FB: call _sub_65C33A0;");
    asm("loc_65C3100: lea 0x4C(%ebx),%esi;");
    asm("loc_65C3103: lea 0x4C(%ebp),%edi;");
    asm("loc_65C3106: mov $6,%ecx;");
    asm("loc_65C310B: rep movsl (%esi),(%edi);");
    asm("loc_65C310D: mov 0x64(%ebx),%edx;");
    asm("loc_65C3110: mov %edx,0x64(%ebp);");
    asm("loc_65C3113: lea 0x68(%ebx),%eax;");
    asm("loc_65C3116: mov (%eax),%edx;");
    asm("loc_65C3118: lea 0x68(%ebp),%ecx;");
    asm("loc_65C311B: mov %edx,(%ecx);");
    asm("loc_65C311D: mov 4(%eax),%edx;");
    asm("loc_65C3120: mov %edx,4(%ecx);");
    asm("loc_65C3123: mov 8(%eax),%edx;");
    asm("loc_65C3126: mov %edx,8(%ecx);");
    asm("loc_65C3129: mov 0xC(%eax),%eax;");
    asm("loc_65C312C: mov %eax,0xC(%ecx);");
    asm("loc_65C312F: mov 0x78(%ebx),%ecx;");
    asm("loc_65C3132: mov %ecx,0x78(%ebp);");
    asm("loc_65C3135: mov 0x7C(%ebx),%edx;");
    asm("loc_65C3138: lea 0x80(%ebx),%eax;");
    asm("loc_65C313E: lea 0x80(%ebp),%ecx;");
    asm("loc_65C3144: cmp %eax,%ecx;");
    asm("loc_65C3146: mov %edx,0x7C(%ebp);");
    asm("loc_65C3149: je loc_65C31C7;");
    asm("loc_65C314B: mov 4(%ecx),%ebx;");
    asm("loc_65C314E: mov (%ebx),%esi;");
    asm("loc_65C3150: cmp %ebx,%esi;");
    asm("loc_65C3152: mov 4(%eax),%eax;");
    asm("loc_65C3155: mov (%eax),%edi;");
    asm("loc_65C3157: mov %eax,0x14(%esp);");
    asm("loc_65C315B: je loc_65C31A1;");
    asm("loc_65C315D: jmp loc_65C3163;");
    asm("loc_65C315F: mov 0x14(%esp),%eax;");
    asm("loc_65C3163: cmp %eax,%edi;");
    asm("loc_65C3165: je loc_65C31A1;");
    asm("loc_65C3167: mov _import_65C7060,%eax;");
    asm("loc_65C316C: mov (%eax),%edx;");
    asm("loc_65C316E: push %edx;");
    asm("loc_65C316F: push $0;");
    asm("loc_65C3171: lea 8(%edi),%ebp;");
    asm("loc_65C3174: lea 8(%esi),%ecx;");
    asm("loc_65C3177: push %ebp;");
    asm("loc_65C3178: calll *_import_65C7054;");
    asm("loc_65C317E: mov _import_65C7060,%eax;");
    asm("loc_65C3183: mov (%eax),%ecx;");
    asm("loc_65C3185: push %ecx;");
    asm("loc_65C3186: push $0;");
    asm("loc_65C3188: add $0x10,%ebp;");
    asm("loc_65C318B: push %ebp;");
    asm("loc_65C318C: lea 0x18(%esi),%ecx;");
    asm("loc_65C318F: calll *_import_65C7054;");
    asm("loc_65C3195: mov (%esi),%esi;");
    asm("loc_65C3197: cmp %ebx,%esi;");
    asm("loc_65C3199: mov (%edi),%edi;");
    asm("loc_65C319B: mov 0x10(%esp),%ebp;");
    asm("loc_65C319F: jne loc_65C315F;");
    asm("loc_65C31A1: push %ebx;");
    asm("loc_65C31A2: push %esi;");
    asm("loc_65C31A3: lea 0x20(%esp),%edx;");
    asm("loc_65C31A7: lea 0x80(%ebp),%esi;");
    asm("loc_65C31AD: push %edx;");
    asm("loc_65C31AE: mov %esi,%ecx;");
    asm("loc_65C31B0: call _sub_65C34C0;");
    asm("loc_65C31B5: mov 0x14(%esp),%eax;");
    asm("loc_65C31B9: push %eax;");
    asm("loc_65C31BA: push %edi;");
    asm("loc_65C31BB: push %ebx;");
    asm("loc_65C31BC: mov %esi,%ecx;");
    asm("loc_65C31BE: call _sub_65C3450;");
    asm("loc_65C31C3: mov 0x20(%esp),%ebx;");
    asm("loc_65C31C7: mov 0x8C(%ebx),%cl;");
    asm("loc_65C31CD: pop %edi;");
    asm("loc_65C31CE: pop %esi;");
    asm("loc_65C31CF: mov %cl,0x8C(%ebp);");
    asm("loc_65C31D5: mov %ebp,%eax;");
    asm("loc_65C31D7: pop %ebp;");
    asm("loc_65C31D8: pop %ebx;");
    asm("loc_65C31D9: add $0xC,%esp;");
    asm("loc_65C31DC: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C31E0() // _sub_65C31E0
{
    __DEBUG_ASM(65C31E0);
    // chunk 0x65C31E0 _sub_65C31E0
    asm("loc_65C31E0: push %ebx;");
    asm("loc_65C31E1: mov 8(%esp),%bl;");
    asm("loc_65C31E5: test $2,%bl;");
    asm("loc_65C31E8: push %esi;");
    asm("loc_65C31E9: mov %ecx,%esi;");
    asm("loc_65C31EB: je loc_65C321B;");
    asm("loc_65C31ED: mov -4(%esi),%eax;");
    asm("loc_65C31F0: push %edi;");
    asm("loc_65C31F1: push $_sub_65C21C0;");
    asm("loc_65C31F6: lea -4(%esi),%edi;");
    asm("loc_65C31F9: push %eax;");
    asm("loc_65C31FA: push $0x90;");
    asm("loc_65C31FF: push %esi;");
    asm("loc_65C3200: call _sub_65C6AEF;");
    asm("loc_65C3205: test $1,%bl;");
    asm("loc_65C3208: je loc_65C3213;");
    asm("loc_65C320A: push %edi;");
    asm("loc_65C320B: call _sub_65C6A60;");
    asm("loc_65C3210: add $4,%esp;");
    asm("loc_65C3213: mov %edi,%eax;");
    asm("loc_65C3215: pop %edi;");
    asm("loc_65C3216: pop %esi;");
    asm("loc_65C3217: pop %ebx;");
    asm("loc_65C3218: ret $4;");
    asm("loc_65C321B: mov %esi,%ecx;");
    asm("loc_65C321D: call _sub_65C21C0;");
    asm("loc_65C3222: test $1,%bl;");
    asm("loc_65C3225: je loc_65C3230;");
    asm("loc_65C3227: push %esi;");
    asm("loc_65C3228: call _sub_65C6A60;");
    asm("loc_65C322D: add $4,%esp;");
    asm("loc_65C3230: mov %esi,%eax;");
    asm("loc_65C3232: pop %esi;");
    asm("loc_65C3233: pop %ebx;");
    asm("loc_65C3234: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C3240() // ?GetData@CDPMessage@@QAEQAEXZ
{
    __DEBUG_ASM(65C3240);
    // chunk 0x65C3240 _sub_65C3240
    asm("loc_65C3240: mov 8(%ecx),%eax;");
    asm("loc_65C3243: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C3250() // ?GetSize@CDPMessage@@QAE?BKXZ
{
    __DEBUG_ASM(65C3250);
    // chunk 0x65C3250 _sub_65C3250
    asm("loc_65C3250: mov 0xC(%ecx),%eax;");
    asm("loc_65C3253: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C3260() // ??0CDPMessage@@QAE@ABV0@@Z
{
    __DEBUG_ASM(65C3260);
    // chunk 0x65C3260 _sub_65C3260
    asm("loc_65C3260: mov %ecx,%eax;");
    asm("loc_65C3262: mov 4(%esp),%ecx;");
    asm("loc_65C3266: mov 4(%ecx),%edx;");
    asm("loc_65C3269: mov %edx,4(%eax);");
    asm("loc_65C326C: mov 8(%ecx),%edx;");
    asm("loc_65C326F: mov %edx,8(%eax);");
    asm("loc_65C3272: mov 0xC(%ecx),%edx;");
    asm("loc_65C3275: mov %edx,0xC(%eax);");
    asm("loc_65C3278: mov 0x10(%ecx),%edx;");
    asm("loc_65C327B: mov %edx,0x10(%eax);");
    asm("loc_65C327E: mov 0x14(%ecx),%edx;");
    asm("loc_65C3281: mov %edx,0x14(%eax);");
    asm("loc_65C3284: mov 0x18(%ecx),%edx;");
    asm("loc_65C3287: mov %edx,0x18(%eax);");
    asm("loc_65C328A: mov 0x1C(%ecx),%ecx;");
    asm("loc_65C328D: mov %ecx,0x1C(%eax);");
    asm("loc_65C3290: movl $_off_65C74B8,(%eax);");
    asm("loc_65C3296: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C32A0() // ??4CDPMessage@@QAEAAV0@ABV0@@Z
{
    __DEBUG_ASM(65C32A0);
    // chunk 0x65C32A0 _sub_65C32A0
    asm("loc_65C32A0: mov %ecx,%eax;");
    asm("loc_65C32A2: mov 4(%esp),%ecx;");
    asm("loc_65C32A6: mov 4(%ecx),%edx;");
    asm("loc_65C32A9: mov %edx,4(%eax);");
    asm("loc_65C32AC: mov 8(%ecx),%edx;");
    asm("loc_65C32AF: mov %edx,8(%eax);");
    asm("loc_65C32B2: mov 0xC(%ecx),%edx;");
    asm("loc_65C32B5: mov %edx,0xC(%eax);");
    asm("loc_65C32B8: mov 0x10(%ecx),%edx;");
    asm("loc_65C32BB: mov %edx,0x10(%eax);");
    asm("loc_65C32BE: mov 0x14(%ecx),%edx;");
    asm("loc_65C32C1: mov %edx,0x14(%eax);");
    asm("loc_65C32C4: mov 0x18(%ecx),%edx;");
    asm("loc_65C32C7: mov %edx,0x18(%eax);");
    asm("loc_65C32CA: mov 0x1C(%ecx),%ecx;");
    asm("loc_65C32CD: mov %ecx,0x1C(%eax);");
    asm("loc_65C32D0: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C32E0() // _sub_65C32E0
{
    __DEBUG_ASM(65C32E0);
    // chunk 0x65C32E0 _sub_65C32E0
    asm("loc_65C32E0: push %ebx;");
    asm("loc_65C32E1: mov 8(%esp),%bl;");
    asm("loc_65C32E5: test $2,%bl;");
    asm("loc_65C32E8: push %esi;");
    asm("loc_65C32E9: mov %ecx,%esi;");
    asm("loc_65C32EB: je loc_65C3318;");
    asm("loc_65C32ED: mov -4(%esi),%eax;");
    asm("loc_65C32F0: push %edi;");
    asm("loc_65C32F1: push $_sub_65C41E0;");
    asm("loc_65C32F6: lea -4(%esi),%edi;");
    asm("loc_65C32F9: push %eax;");
    asm("loc_65C32FA: push $0x20;");
    asm("loc_65C32FC: push %esi;");
    asm("loc_65C32FD: call _sub_65C6AEF;");
    asm("loc_65C3302: test $1,%bl;");
    asm("loc_65C3305: je loc_65C3310;");
    asm("loc_65C3307: push %edi;");
    asm("loc_65C3308: call _sub_65C6A60;");
    asm("loc_65C330D: add $4,%esp;");
    asm("loc_65C3310: mov %edi,%eax;");
    asm("loc_65C3312: pop %edi;");
    asm("loc_65C3313: pop %esi;");
    asm("loc_65C3314: pop %ebx;");
    asm("loc_65C3315: ret $4;");
    asm("loc_65C3318: mov %esi,%ecx;");
    asm("loc_65C331A: call _sub_65C41E0;");
    asm("loc_65C331F: test $1,%bl;");
    asm("loc_65C3322: je loc_65C332D;");
    asm("loc_65C3324: push %esi;");
    asm("loc_65C3325: call _sub_65C6A60;");
    asm("loc_65C332A: add $4,%esp;");
    asm("loc_65C332D: mov %esi,%eax;");
    asm("loc_65C332F: pop %esi;");
    asm("loc_65C3330: pop %ebx;");
    asm("loc_65C3331: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C3340() // _sub_65C3340
{
    __DEBUG_ASM(65C3340);
    // chunk 0x65C3340 _sub_65C3340
    asm("loc_65C3340: push %ebx;");
    asm("loc_65C3341: push %ebp;");
    asm("loc_65C3342: mov %ecx,%ebx;");
    asm("loc_65C3344: mov 4(%ebx),%ebp;");
    asm("loc_65C3347: push %edi;");
    asm("loc_65C3348: mov (%ebp),%edi;");
    asm("loc_65C334B: cmp %ebp,%edi;");
    asm("loc_65C334D: je loc_65C3380;");
    asm("loc_65C334F: push %esi;");
    asm("loc_65C3350: mov %edi,%esi;");
    asm("loc_65C3352: mov 4(%esi),%eax;");
    asm("loc_65C3355: mov (%esi),%ecx;");
    asm("loc_65C3357: mov (%edi),%edi;");
    asm("loc_65C3359: mov %ecx,(%eax);");
    asm("loc_65C335B: mov (%esi),%edx;");
    asm("loc_65C335D: mov 4(%esi),%eax;");
    asm("loc_65C3360: lea 8(%esi),%ecx;");
    asm("loc_65C3363: mov %eax,4(%edx);");
    asm("loc_65C3366: call _sub_65C2500;");
    asm("loc_65C336B: push %esi;");
    asm("loc_65C336C: call _sub_65C6A60;");
    asm("loc_65C3371: mov 8(%ebx),%ecx;");
    asm("loc_65C3374: add $4,%esp;");
    asm("loc_65C3377: dec %ecx;");
    asm("loc_65C3378: cmp %ebp,%edi;");
    asm("loc_65C337A: mov %ecx,8(%ebx);");
    asm("loc_65C337D: jne loc_65C3350;");
    asm("loc_65C337F: pop %esi;");
    asm("loc_65C3380: mov 4(%ebx),%ecx;");
    asm("loc_65C3383: push %ecx;");
    asm("loc_65C3384: call _sub_65C6A60;");
    asm("loc_65C3389: add $4,%esp;");
    asm("loc_65C338C: pop %edi;");
    asm("loc_65C338D: xor %eax,%eax;");
    asm("loc_65C338F: pop %ebp;");
    asm("loc_65C3390: mov %eax,4(%ebx);");
    asm("loc_65C3393: mov %eax,8(%ebx);");
    asm("loc_65C3396: pop %ebx;");
    asm("loc_65C3397: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C33A0() // _sub_65C33A0
{
    __DEBUG_ASM(65C33A0);
    // chunk 0x65C33A0 _sub_65C33A0
    asm("loc_65C33A0: mov 0xC(%esp),%eax;");
    asm("loc_65C33A4: push %ebx;");
    asm("loc_65C33A5: mov 0xC(%esp),%ebx;");
    asm("loc_65C33A9: cmp %eax,%ebx;");
    asm("loc_65C33AB: push %ebp;");
    asm("loc_65C33AC: mov %ecx,%ebp;");
    asm("loc_65C33AE: je loc_65C33F5;");
    asm("loc_65C33B0: push %esi;");
    asm("loc_65C33B1: push %edi;");
    asm("loc_65C33B2: mov 0x14(%esp),%edi;");
    asm("loc_65C33B6: mov 4(%edi),%esi;");
    asm("loc_65C33B9: push $0xC;");
    asm("loc_65C33BB: call _sub_65C6A66;");
    asm("loc_65C33C0: add $4,%esp;");
    asm("loc_65C33C3: test %esi,%esi;");
    asm("loc_65C33C5: mov %edi,(%eax);");
    asm("loc_65C33C7: jne loc_65C33CB;");
    asm("loc_65C33C9: mov %eax,%esi;");
    asm("loc_65C33CB: mov %esi,4(%eax);");
    asm("loc_65C33CE: mov %eax,4(%edi);");
    asm("loc_65C33D1: mov 4(%eax),%ecx;");
    asm("loc_65C33D4: mov %eax,(%ecx);");
    asm("loc_65C33D6: add $8,%eax;");
    asm("loc_65C33D9: test %eax,%eax;");
    asm("loc_65C33DB: je loc_65C33E2;");
    asm("loc_65C33DD: mov 8(%ebx),%edx;");
    asm("loc_65C33E0: mov %edx,(%eax);");
    asm("loc_65C33E2: mov 8(%ebp),%ecx;");
    asm("loc_65C33E5: mov 0x1C(%esp),%eax;");
    asm("loc_65C33E9: inc %ecx;");
    asm("loc_65C33EA: mov %ecx,8(%ebp);");
    asm("loc_65C33ED: mov (%ebx),%ebx;");
    asm("loc_65C33EF: cmp %eax,%ebx;");
    asm("loc_65C33F1: jne loc_65C33B6;");
    asm("loc_65C33F3: pop %edi;");
    asm("loc_65C33F4: pop %esi;");
    asm("loc_65C33F5: pop %ebp;");
    asm("loc_65C33F6: pop %ebx;");
    asm("loc_65C33F7: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C3400() // _sub_65C3400
{
    __DEBUG_ASM(65C3400);
    // chunk 0x65C3400 _sub_65C3400
    asm("loc_65C3400: push %ebx;");
    asm("loc_65C3401: mov 0x10(%esp),%ebx;");
    asm("loc_65C3405: push %esi;");
    asm("loc_65C3406: mov 0x10(%esp),%esi;");
    asm("loc_65C340A: cmp %ebx,%esi;");
    asm("loc_65C340C: push %edi;");
    asm("loc_65C340D: mov %ecx,%edi;");
    asm("loc_65C340F: je loc_65C3438;");
    asm("loc_65C3411: mov %esi,%eax;");
    asm("loc_65C3413: mov 4(%eax),%ecx;");
    asm("loc_65C3416: mov (%eax),%edx;");
    asm("loc_65C3418: mov (%esi),%esi;");
    asm("loc_65C341A: mov %edx,(%ecx);");
    asm("loc_65C341C: mov (%eax),%ecx;");
    asm("loc_65C341E: mov 4(%eax),%edx;");
    asm("loc_65C3421: push %eax;");
    asm("loc_65C3422: mov %edx,4(%ecx);");
    asm("loc_65C3425: call _sub_65C6A60;");
    asm("loc_65C342A: mov 8(%edi),%ecx;");
    asm("loc_65C342D: add $4,%esp;");
    asm("loc_65C3430: dec %ecx;");
    asm("loc_65C3431: cmp %ebx,%esi;");
    asm("loc_65C3433: mov %ecx,8(%edi);");
    asm("loc_65C3436: jne loc_65C3411;");
    asm("loc_65C3438: mov 0x10(%esp),%eax;");
    asm("loc_65C343C: pop %edi;");
    asm("loc_65C343D: mov %esi,(%eax);");
    asm("loc_65C343F: pop %esi;");
    asm("loc_65C3440: pop %ebx;");
    asm("loc_65C3441: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C3450() // _sub_65C3450
{
    __DEBUG_ASM(65C3450);
    // chunk 0x65C3450 _sub_65C3450
    asm("loc_65C3450: push %ecx;");
    asm("loc_65C3451: mov 0x10(%esp),%eax;");
    asm("loc_65C3455: push %esi;");
    asm("loc_65C3456: mov 0x10(%esp),%esi;");
    asm("loc_65C345A: cmp %eax,%esi;");
    asm("loc_65C345C: mov %ecx,4(%esp);");
    asm("loc_65C3460: je loc_65C34B6;");
    asm("loc_65C3462: push %ebx;");
    asm("loc_65C3463: push %ebp;");
    asm("loc_65C3464: push %edi;");
    asm("loc_65C3465: mov 0x18(%esp),%edi;");
    asm("loc_65C3469: lea (%esp),%esp;");
    asm("loc_65C3470: mov 4(%edi),%ebx;");
    asm("loc_65C3473: push $0x28;");
    asm("loc_65C3475: lea 8(%esi),%ebp;");
    asm("loc_65C3478: call _sub_65C6A66;");
    asm("loc_65C347D: add $4,%esp;");
    asm("loc_65C3480: test %ebx,%ebx;");
    asm("loc_65C3482: mov %edi,(%eax);");
    asm("loc_65C3484: jne loc_65C3488;");
    asm("loc_65C3486: mov %eax,%ebx;");
    asm("loc_65C3488: mov %ebx,4(%eax);");
    asm("loc_65C348B: mov %eax,4(%edi);");
    asm("loc_65C348E: mov 4(%eax),%ecx;");
    asm("loc_65C3491: mov %eax,(%ecx);");
    asm("loc_65C3493: add $8,%eax;");
    asm("loc_65C3496: push %ebp;");
    asm("loc_65C3497: push %eax;");
    asm("loc_65C3498: call _sub_65C3510;");
    asm("loc_65C349D: mov 0x18(%esp),%eax;");
    asm("loc_65C34A1: mov 8(%eax),%ecx;");
    asm("loc_65C34A4: add $8,%esp;");
    asm("loc_65C34A7: inc %ecx;");
    asm("loc_65C34A8: mov %ecx,8(%eax);");
    asm("loc_65C34AB: mov (%esi),%esi;");
    asm("loc_65C34AD: cmp 0x20(%esp),%esi;");
    asm("loc_65C34B1: jne loc_65C3470;");
    asm("loc_65C34B3: pop %edi;");
    asm("loc_65C34B4: pop %ebp;");
    asm("loc_65C34B5: pop %ebx;");
    asm("loc_65C34B6: pop %esi;");
    asm("loc_65C34B7: pop %ecx;");
    asm("loc_65C34B8: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C34C0() // _sub_65C34C0
{
    __DEBUG_ASM(65C34C0);
    // chunk 0x65C34C0 _sub_65C34C0
    asm("loc_65C34C0: push %ebx;");
    asm("loc_65C34C1: push %ebp;");
    asm("loc_65C34C2: mov 0x14(%esp),%ebp;");
    asm("loc_65C34C6: push %edi;");
    asm("loc_65C34C7: mov 0x14(%esp),%edi;");
    asm("loc_65C34CB: cmp %ebp,%edi;");
    asm("loc_65C34CD: mov %ecx,%ebx;");
    asm("loc_65C34CF: je loc_65C3502;");
    asm("loc_65C34D1: push %esi;");
    asm("loc_65C34D2: mov %edi,%esi;");
    asm("loc_65C34D4: mov 4(%esi),%eax;");
    asm("loc_65C34D7: mov (%esi),%ecx;");
    asm("loc_65C34D9: mov (%edi),%edi;");
    asm("loc_65C34DB: mov %ecx,(%eax);");
    asm("loc_65C34DD: mov (%esi),%edx;");
    asm("loc_65C34DF: mov 4(%esi),%eax;");
    asm("loc_65C34E2: lea 8(%esi),%ecx;");
    asm("loc_65C34E5: mov %eax,4(%edx);");
    asm("loc_65C34E8: call _sub_65C2500;");
    asm("loc_65C34ED: push %esi;");
    asm("loc_65C34EE: call _sub_65C6A60;");
    asm("loc_65C34F3: mov 8(%ebx),%ecx;");
    asm("loc_65C34F6: add $4,%esp;");
    asm("loc_65C34F9: dec %ecx;");
    asm("loc_65C34FA: cmp %ebp,%edi;");
    asm("loc_65C34FC: mov %ecx,8(%ebx);");
    asm("loc_65C34FF: jne loc_65C34D2;");
    asm("loc_65C3501: pop %esi;");
    asm("loc_65C3502: mov 0x10(%esp),%eax;");
    asm("loc_65C3506: mov %edi,(%eax);");
    asm("loc_65C3508: pop %edi;");
    asm("loc_65C3509: pop %ebp;");
    asm("loc_65C350A: pop %ebx;");
    asm("loc_65C350B: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C3510() // _sub_65C3510
{
    __DEBUG_ASM(65C3510);
    // chunk 0x65C3510 _sub_65C3510
    asm("loc_65C3510: push $0xFFFFFFFF;");
    asm("loc_65C3512: push $_sub_65C6E5A;");
    asm("loc_65C3517: mov %fs:0,%eax;");
    asm("loc_65C351D: push %eax;");
    asm("loc_65C351E: mov %esp,%fs:0;");
    asm("loc_65C3525: push %ecx;");
    asm("loc_65C3526: push %ebx;");
    asm("loc_65C3527: push %ebp;");
    asm("loc_65C3528: push %esi;");
    asm("loc_65C3529: mov 0x20(%esp),%esi;");
    asm("loc_65C352D: push %edi;");
    asm("loc_65C352E: mov %esi,0x10(%esp);");
    asm("loc_65C3532: xor %ebp,%ebp;");
    asm("loc_65C3534: cmp %ebp,%esi;");
    asm("loc_65C3536: mov %ebp,0x1C(%esp);");
    asm("loc_65C353A: je loc_65C3647;");
    asm("loc_65C3540: mov 0x28(%esp),%edi;");
    asm("loc_65C3544: mov (%edi),%al;");
    asm("loc_65C3546: mov %al,(%esi);");
    asm("loc_65C3548: mov %ebp,4(%esi);");
    asm("loc_65C354B: mov %ebp,8(%esi);");
    asm("loc_65C354E: mov %ebp,0xC(%esi);");
    asm("loc_65C3551: mov _import_65C7060,%ecx;");
    asm("loc_65C3557: mov (%ecx),%edx;");
    asm("loc_65C3559: push %edx;");
    asm("loc_65C355A: push %ebp;");
    asm("loc_65C355B: push %edi;");
    asm("loc_65C355C: mov %esi,%ecx;");
    asm("loc_65C355E: calll *_import_65C7054;");
    asm("loc_65C3564: mov 0x10(%edi),%al;");
    asm("loc_65C3567: add $0x10,%edi;");
    asm("loc_65C356A: add $0x10,%esi;");
    asm("loc_65C356D: mov %al,(%esi);");
    asm("loc_65C356F: mov %ebp,4(%esi);");
    asm("loc_65C3572: mov %ebp,8(%esi);");
    asm("loc_65C3575: mov %ebp,0xC(%esi);");
    asm("loc_65C3578: mov _import_65C7060,%ecx;");
    asm("loc_65C357E: mov (%ecx),%eax;");
    asm("loc_65C3580: mov 8(%edi),%ecx;");
    asm("loc_65C3583: mov %ecx,%ebx;");
    asm("loc_65C3585: cmp %ebx,%eax;");
    asm("loc_65C3587: movb $1,0x1C(%esp);");
    asm("loc_65C358C: jae loc_65C3590;");
    asm("loc_65C358E: mov %eax,%ebx;");
    asm("loc_65C3590: cmp %edi,%esi;");
    asm("loc_65C3592: jne loc_65C35BB;");
    asm("loc_65C3594: push %eax;");
    asm("loc_65C3595: push %ebx;");
    asm("loc_65C3596: mov %esi,%ecx;");
    asm("loc_65C3598: calll *_import_65C7058;");
    asm("loc_65C359E: push %ebp;");
    asm("loc_65C359F: push %ebp;");
    asm("loc_65C35A0: mov %esi,%ecx;");
    asm("loc_65C35A2: calll *_import_65C7058;");
    asm("loc_65C35A8: pop %edi;");
    asm("loc_65C35A9: pop %esi;");
    asm("loc_65C35AA: pop %ebp;");
    asm("loc_65C35AB: pop %ebx;");
    asm("loc_65C35AC: mov 4(%esp),%ecx;");
    asm("loc_65C35B0: mov %ecx,%fs:0;");
    asm("loc_65C35B7: add $0x10,%esp;");
    asm("loc_65C35BA: ret;");
    asm("loc_65C35BB: cmp %ebp,%ebx;");
    asm("loc_65C35BD: jbe loc_65C3614;");
    asm("loc_65C35BF: cmp %ecx,%ebx;");
    asm("loc_65C35C1: jne loc_65C3614;");
    asm("loc_65C35C3: mov 4(%edi),%eax;");
    asm("loc_65C35C6: cmp %ebp,%eax;");
    asm("loc_65C35C8: jne loc_65C35CF;");
    asm("loc_65C35CA: mov _import_65C7070,%eax;");
    asm("loc_65C35CF: cmpb $0xFE,-1(%eax);");
    asm("loc_65C35D3: jae loc_65C3614;");
    asm("loc_65C35D5: mov %ebp,4(%esi);");
    asm("loc_65C35D8: mov %ebp,8(%esi);");
    asm("loc_65C35DB: mov %ebp,0xC(%esi);");
    asm("loc_65C35DE: mov 4(%edi),%eax;");
    asm("loc_65C35E1: cmp %ebp,%eax;");
    asm("loc_65C35E3: jne loc_65C35EA;");
    asm("loc_65C35E5: mov _import_65C7070,%eax;");
    asm("loc_65C35EA: mov %eax,4(%esi);");
    asm("loc_65C35ED: mov 8(%edi),%edx;");
    asm("loc_65C35F0: mov %edx,8(%esi);");
    asm("loc_65C35F3: mov 0xC(%edi),%ecx;");
    asm("loc_65C35F6: mov %ecx,0xC(%esi);");
    asm("loc_65C35F9: mov -1(%eax),%cl;");
    asm("loc_65C35FC: pop %edi;");
    asm("loc_65C35FD: pop %esi;");
    asm("loc_65C35FE: inc %cl;");
    asm("loc_65C3600: pop %ebp;");
    asm("loc_65C3601: mov %cl,-1(%eax);");
    asm("loc_65C3604: pop %ebx;");
    asm("loc_65C3605: mov 4(%esp),%ecx;");
    asm("loc_65C3609: mov %ecx,%fs:0;");
    asm("loc_65C3610: add $0x10,%esp;");
    asm("loc_65C3613: ret;");
    asm("loc_65C3614: push $1;");
    asm("loc_65C3616: push %ebx;");
    asm("loc_65C3617: mov %esi,%ecx;");
    asm("loc_65C3619: calll *_import_65C7068;");
    asm("loc_65C361F: test %al,%al;");
    asm("loc_65C3621: je loc_65C3647;");
    asm("loc_65C3623: mov 4(%edi),%edi;");
    asm("loc_65C3626: test %edi,%edi;");
    asm("loc_65C3628: jne loc_65C3630;");
    asm("loc_65C362A: mov _import_65C7070,%edi;");
    asm("loc_65C3630: mov 4(%esi),%edx;");
    asm("loc_65C3633: push %ebx;");
    asm("loc_65C3634: push %edi;");
    asm("loc_65C3635: push %edx;");
    asm("loc_65C3636: call _sub_65C3660;");
    asm("loc_65C363B: add $0xC,%esp;");
    asm("loc_65C363E: push %ebx;");
    asm("loc_65C363F: mov %esi,%ecx;");
    asm("loc_65C3641: calll *_import_65C705C;");
    asm("loc_65C3647: mov 0x14(%esp),%ecx;");
    asm("loc_65C364B: pop %edi;");
    asm("loc_65C364C: pop %esi;");
    asm("loc_65C364D: pop %ebp;");
    asm("loc_65C364E: pop %ebx;");
    asm("loc_65C364F: mov %ecx,%fs:0;");
    asm("loc_65C3656: add $0x10,%esp;");
    asm("loc_65C3659: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C3660() // _sub_65C3660
{
    __DEBUG_ASM(65C3660);
    // chunk 0x65C3660 _sub_65C3660
    asm("loc_65C3660: mov 4(%esp),%eax;");
    asm("loc_65C3664: push %esi;");
    asm("loc_65C3665: mov 0x10(%esp),%esi;");
    asm("loc_65C3669: test %esi,%esi;");
    asm("loc_65C366B: mov %eax,%ecx;");
    asm("loc_65C366D: jbe loc_65C3684;");
    asm("loc_65C366F: mov 0xC(%esp),%edx;");
    asm("loc_65C3673: push %edi;");
    asm("loc_65C3674: mov (%edx),%di;");
    asm("loc_65C3677: mov %di,(%ecx);");
    asm("loc_65C367A: add $2,%ecx;");
    asm("loc_65C367D: add $2,%edx;");
    asm("loc_65C3680: dec %esi;");
    asm("loc_65C3681: jne loc_65C3674;");
    asm("loc_65C3683: pop %edi;");
    asm("loc_65C3684: pop %esi;");
    asm("loc_65C3685: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C3690() // _sub_65C3690
{
    __DEBUG_ASM(65C3690);
    // chunk 0x65C3690 _sub_65C3690
    asm("loc_65C3690: push %esi;");
    asm("loc_65C3691: mov %ecx,%esi;");
    asm("loc_65C3693: call _sub_65C2500;");
    asm("loc_65C3698: testb $1,8(%esp);");
    asm("loc_65C369D: je loc_65C36A8;");
    asm("loc_65C369F: push %esi;");
    asm("loc_65C36A0: call _sub_65C6A60;");
    asm("loc_65C36A5: add $4,%esp;");
    asm("loc_65C36A8: mov %esi,%eax;");
    asm("loc_65C36AA: pop %esi;");
    asm("loc_65C36AB: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C36B0() // ??0CDPClientProxy@@QAE@XZ
{
    __DEBUG_ASM(65C36B0);
    // chunk 0x65C36B0 _sub_65C36B0
    asm("loc_65C36B0: push %esi;");
    asm("loc_65C36B1: mov %ecx,%esi;");
    asm("loc_65C36B3: push %edi;");
    asm("loc_65C36B4: lea 0x10(%esi),%ecx;");
    asm("loc_65C36B7: movl $_off_65C7460,(%esi);");
    asm("loc_65C36BD: call _sub_65C41F0;");
    asm("loc_65C36C2: xor %edi,%edi;");
    asm("loc_65C36C4: movl $_off_65C74BC,(%esi);");
    asm("loc_65C36CA: mov %edi,4(%esi);");
    asm("loc_65C36CD: mov %edi,8(%esi);");
    asm("loc_65C36D0: calll *_import_65C70D8;");
    asm("loc_65C36D6: mov %eax,0xC(%esi);");
    asm("loc_65C36D9: mov %edi,0x3C(%esi);");
    asm("loc_65C36DC: mov %edi,0x40(%esi);");
    asm("loc_65C36DF: mov %edi,0x58(%esi);");
    asm("loc_65C36E2: mov %edi,0x5C(%esi);");
    asm("loc_65C36E5: movb $1,0x60(%esi);");
    asm("loc_65C36E9: mov $0x3E8,%eax;");
    asm("loc_65C36EE: mov %eax,0x44(%esi);");
    asm("loc_65C36F1: mov %eax,0x48(%esi);");
    asm("loc_65C36F4: mov %eax,0x4C(%esi);");
    asm("loc_65C36F7: mov 0xC(%esi),%ecx;");
    asm("loc_65C36FA: pop %edi;");
    asm("loc_65C36FB: mov %ecx,0x50(%esi);");
    asm("loc_65C36FE: mov %esi,%eax;");
    asm("loc_65C3700: pop %esi;");
    asm("loc_65C3701: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C3710() // ??1CDPClientProxy@@UAE@XZ
{
    __DEBUG_ASM(65C3710);
    // chunk 0x65C3710 _sub_65C3710
    asm("loc_65C3710: xor %eax,%eax;");
    asm("loc_65C3712: movl $_off_65C74BC,(%ecx);");
    asm("loc_65C3718: mov %eax,4(%ecx);");
    asm("loc_65C371B: mov %eax,8(%ecx);");
    asm("loc_65C371E: add $0x10,%ecx;");
    asm("loc_65C3721: jmp _sub_65C4240;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C3730() // ?SendMsgs@CDPClientProxy@@QAE_NXZ
{
    __DEBUG_ASM(65C3730);
    // chunk 0x65C3730 _sub_65C3730
    asm("loc_65C3730: mov _data_65CA1D0,%al;");
    asm("loc_65C3735: sub $0xC08,%esp;");
    asm("loc_65C373B: test $1,%al;");
    asm("loc_65C373D: push %ebx;");
    asm("loc_65C373E: mov %ecx,%ebx;");
    asm("loc_65C3740: jne loc_65C3764;");
    asm("loc_65C3742: mov %al,%dl;");
    asm("loc_65C3744: or $1,%dl;");
    asm("loc_65C3747: mov $_data_65CA1D8,%ecx;");
    asm("loc_65C374C: mov %dl,_data_65CA1D0;");
    asm("loc_65C3752: call _sub_65C1000;");
    asm("loc_65C3757: push $_sub_65C39F0;");
    asm("loc_65C375C: call _sub_65C6AAC;");
    asm("loc_65C3761: add $4,%esp;");
    asm("loc_65C3764: mov 0x60(%ebx),%al;");
    asm("loc_65C3767: test %al,%al;");
    asm("loc_65C3769: jne loc_65C3775;");
    asm("loc_65C376B: xor %al,%al;");
    asm("loc_65C376D: pop %ebx;");
    asm("loc_65C376E: add $0xC08,%esp;");
    asm("loc_65C3774: ret;");
    asm("loc_65C3775: push %esi;");
    asm("loc_65C3776: lea 0x10(%ebx),%esi;");
    asm("loc_65C3779: push %edi;");
    asm("loc_65C377A: mov %esi,%ecx;");
    asm("loc_65C377C: call _sub_65C4300;");
    asm("loc_65C3781: mov %esi,%ecx;");
    asm("loc_65C3783: call _sub_65C43F0;");
    asm("loc_65C3788: test %eax,%eax;");
    asm("loc_65C378A: je loc_65C39DB;");
    asm("loc_65C3790: calll *_import_65C70D8;");
    asm("loc_65C3796: mov %eax,0xC(%ebx);");
    asm("loc_65C3799: mov 0x60(%ebx),%al;");
    asm("loc_65C379C: xor %edi,%edi;");
    asm("loc_65C379E: test %al,%al;");
    asm("loc_65C37A0: mov %edi,0xC(%esp);");
    asm("loc_65C37A4: je loc_65C39DB;");
    asm("loc_65C37AA: push %ebp;");
    asm("loc_65C37AB: nop;");
    asm("loc_65C37AC: lea (%esp),%esp;");
    asm("loc_65C37B0: mov %esi,%ecx;");
    asm("loc_65C37B2: call _sub_65C43F0;");
    asm("loc_65C37B7: mov %eax,%ebp;");
    asm("loc_65C37B9: test %ebp,%ebp;");
    asm("loc_65C37BB: je loc_65C3988;");
    asm("loc_65C37C1: mov 0xC(%ebp),%ecx;");
    asm("loc_65C37C4: lea (%ecx,%edi),%eax;");
    asm("loc_65C37C7: cmp $0x400,%eax;");
    asm("loc_65C37CC: ja loc_65C3806;");
    asm("loc_65C37CE: mov 8(%ebp),%esi;");
    asm("loc_65C37D1: mov %ecx,%edx;");
    asm("loc_65C37D3: shr $2,%ecx;");
    asm("loc_65C37D6: lea 0x18(%esp,%edi),%edi;");
    asm("loc_65C37DA: rep movsl (%esi),(%edi);");
    asm("loc_65C37DC: mov %edx,%ecx;");
    asm("loc_65C37DE: mov 0x10(%esp),%edx;");
    asm("loc_65C37E2: and $3,%ecx;");
    asm("loc_65C37E5: rep movsb (%esi),(%edi);");
    asm("loc_65C37E7: mov 0xC(%ebp),%eax;");
    asm("loc_65C37EA: mov 0x3C(%ebx),%ecx;");
    asm("loc_65C37ED: add %eax,%edx;");
    asm("loc_65C37EF: sub %eax,%ecx;");
    asm("loc_65C37F1: mov 0x40(%ebx),%eax;");
    asm("loc_65C37F4: dec %eax;");
    asm("loc_65C37F5: mov %edx,0x10(%esp);");
    asm("loc_65C37F9: mov %ecx,0x3C(%ebx);");
    asm("loc_65C37FC: mov %eax,0x40(%ebx);");
    asm("loc_65C37FF: mov %edx,%edi;");
    asm("loc_65C3801: jmp loc_65C395D;");
    asm("loc_65C3806: test %edi,%edi;");
    asm("loc_65C3808: je loc_65C3862;");
    asm("loc_65C380A: push $0x800;");
    asm("loc_65C380F: lea 0x41C(%esp),%eax;");
    asm("loc_65C3816: push %eax;");
    asm("loc_65C3817: push %edi;");
    asm("loc_65C3818: lea 0x24(%esp),%ecx;");
    asm("loc_65C381C: push %ecx;");
    asm("loc_65C381D: mov $_data_65CA1D8,%ecx;");
    asm("loc_65C3822: call _sub_65C10B0;");
    asm("loc_65C3827: cmp $1,%al;");
    asm("loc_65C3829: jne loc_65C383F;");
    asm("loc_65C382B: mov _data_65CA24C,%eax;");
    asm("loc_65C3830: cmp %edi,%eax;");
    asm("loc_65C3832: ja loc_65C383F;");
    asm("loc_65C3834: push %eax;");
    asm("loc_65C3835: lea 0x41C(%esp),%edx;");
    asm("loc_65C383C: push %edx;");
    asm("loc_65C383D: jmp loc_65C3845;");
    asm("loc_65C383F: push %edi;");
    asm("loc_65C3840: lea 0x1C(%esp),%eax;");
    asm("loc_65C3844: push %eax;");
    asm("loc_65C3845: mov 4(%ebx),%ecx;");
    asm("loc_65C3848: push %ebx;");
    asm("loc_65C3849: call _sub_65C5360;");
    asm("loc_65C384E: movl $0,0x10(%esp);");
    asm("loc_65C3856: mov 0x10(%esp),%edi;");
    asm("loc_65C385A: mov %al,0x60(%ebx);");
    asm("loc_65C385D: jmp loc_65C397D;");
    asm("loc_65C3862: mov 0x3C(%ebx),%edx;");
    asm("loc_65C3865: sub %ecx,%edx;");
    asm("loc_65C3867: mov 0x40(%ebx),%ecx;");
    asm("loc_65C386A: dec %ecx;");
    asm("loc_65C386B: mov %edx,0x3C(%ebx);");
    asm("loc_65C386E: mov %ecx,0x40(%ebx);");
    asm("loc_65C3871: mov 0xC(%ebp),%ecx;");
    asm("loc_65C3874: cmp $0x7FFF,%ecx;");
    asm("loc_65C387A: jae loc_65C394C;");
    asm("loc_65C3880: imul $0x65,%ecx;");
    asm("loc_65C3883: mov $0x51EB851F,%eax;");
    asm("loc_65C3888: mul %ecx;");
    asm("loc_65C388A: mov %edx,%esi;");
    asm("loc_65C388C: shr $5,%esi;");
    asm("loc_65C388F: add $0xD,%esi;");
    asm("loc_65C3892: push %esi;");
    asm("loc_65C3893: calll *_import_65C7084;");
    asm("loc_65C3899: add $4,%esp;");
    asm("loc_65C389C: push $0x800;");
    asm("loc_65C38A1: lea 0x41C(%esp),%ecx;");
    asm("loc_65C38A8: push %ecx;");
    asm("loc_65C38A9: push $0;");
    asm("loc_65C38AB: lea 0x24(%esp),%edx;");
    asm("loc_65C38AF: push %edx;");
    asm("loc_65C38B0: mov $_data_65CA1D8,%ecx;");
    asm("loc_65C38B5: mov %eax,0x24(%esp);");
    asm("loc_65C38B9: call _sub_65C10B0;");
    asm("loc_65C38BE: cmp $1,%al;");
    asm("loc_65C38C0: jne loc_65C38D6;");
    asm("loc_65C38C2: mov _data_65CA24C,%eax;");
    asm("loc_65C38C7: test %eax,%eax;");
    asm("loc_65C38C9: ja loc_65C38D6;");
    asm("loc_65C38CB: push %eax;");
    asm("loc_65C38CC: lea 0x41C(%esp),%eax;");
    asm("loc_65C38D3: push %eax;");
    asm("loc_65C38D4: jmp loc_65C38DD;");
    asm("loc_65C38D6: push $0;");
    asm("loc_65C38D8: lea 0x1C(%esp),%ecx;");
    asm("loc_65C38DC: push %ecx;");
    asm("loc_65C38DD: mov 4(%ebx),%ecx;");
    asm("loc_65C38E0: push %ebx;");
    asm("loc_65C38E1: call _sub_65C5360;");
    asm("loc_65C38E6: mov 0x14(%esp),%edi;");
    asm("loc_65C38EA: test %edi,%edi;");
    asm("loc_65C38EC: mov %al,0x60(%ebx);");
    asm("loc_65C38EF: mov 8(%ebp),%ecx;");
    asm("loc_65C38F2: mov 0xC(%ebp),%eax;");
    asm("loc_65C38F5: je loc_65C393B;");
    asm("loc_65C38F7: push %esi;");
    asm("loc_65C38F8: push %edi;");
    asm("loc_65C38F9: push %eax;");
    asm("loc_65C38FA: push %ecx;");
    asm("loc_65C38FB: mov $_data_65CA1D8,%ecx;");
    asm("loc_65C3900: call _sub_65C10B0;");
    asm("loc_65C3905: cmp $1,%al;");
    asm("loc_65C3907: jne loc_65C3917;");
    asm("loc_65C3909: mov _data_65CA24C,%eax;");
    asm("loc_65C390E: cmp 0xC(%ebp),%eax;");
    asm("loc_65C3911: ja loc_65C3917;");
    asm("loc_65C3913: push %eax;");
    asm("loc_65C3914: push %edi;");
    asm("loc_65C3915: jmp loc_65C391F;");
    asm("loc_65C3917: mov 0xC(%ebp),%eax;");
    asm("loc_65C391A: mov 8(%ebp),%ecx;");
    asm("loc_65C391D: push %eax;");
    asm("loc_65C391E: push %ecx;");
    asm("loc_65C391F: mov 4(%ebx),%ecx;");
    asm("loc_65C3922: push %ebx;");
    asm("loc_65C3923: call _sub_65C5360;");
    asm("loc_65C3928: push %edi;");
    asm("loc_65C3929: mov %al,0x60(%ebx);");
    asm("loc_65C392C: calll *_import_65C70B8;");
    asm("loc_65C3932: mov 0x14(%esp),%edi;");
    asm("loc_65C3936: add $4,%esp;");
    asm("loc_65C3939: jmp loc_65C395D;");
    asm("loc_65C393B: push %eax;");
    asm("loc_65C393C: push %ecx;");
    asm("loc_65C393D: mov 4(%ebx),%ecx;");
    asm("loc_65C3940: push %ebx;");
    asm("loc_65C3941: call _sub_65C5360;");
    asm("loc_65C3946: mov 0x10(%esp),%edi;");
    asm("loc_65C394A: jmp loc_65C395A;");
    asm("loc_65C394C: mov 8(%ebp),%eax;");
    asm("loc_65C394F: push %ecx;");
    asm("loc_65C3950: mov 4(%ebx),%ecx;");
    asm("loc_65C3953: push %eax;");
    asm("loc_65C3954: push %ebx;");
    asm("loc_65C3955: call _sub_65C5360;");
    asm("loc_65C395A: mov %al,0x60(%ebx);");
    asm("loc_65C395D: lea 0x10(%ebx),%esi;");
    asm("loc_65C3960: mov %esi,%ecx;");
    asm("loc_65C3962: call _sub_65C4390;");
    asm("loc_65C3967: mov 8(%ebp),%edx;");
    asm("loc_65C396A: push %edx;");
    asm("loc_65C396B: calll *_import_65C70B8;");
    asm("loc_65C3971: mov (%ebp),%eax;");
    asm("loc_65C3974: add $4,%esp;");
    asm("loc_65C3977: push $1;");
    asm("loc_65C3979: mov %ebp,%ecx;");
    asm("loc_65C397B: calll *(%eax);");
    asm("loc_65C397D: mov 0x60(%ebx),%al;");
    asm("loc_65C3980: test %al,%al;");
    asm("loc_65C3982: jne loc_65C37B0;");
    asm("loc_65C3988: mov 0x60(%ebx),%al;");
    asm("loc_65C398B: test %al,%al;");
    asm("loc_65C398D: pop %ebp;");
    asm("loc_65C398E: je loc_65C39DB;");
    asm("loc_65C3990: test %edi,%edi;");
    asm("loc_65C3992: je loc_65C39DB;");
    asm("loc_65C3994: push $0x800;");
    asm("loc_65C3999: lea 0x418(%esp),%ecx;");
    asm("loc_65C39A0: push %ecx;");
    asm("loc_65C39A1: push %edi;");
    asm("loc_65C39A2: lea 0x20(%esp),%edx;");
    asm("loc_65C39A6: push %edx;");
    asm("loc_65C39A7: mov $_data_65CA1D8,%ecx;");
    asm("loc_65C39AC: call _sub_65C10B0;");
    asm("loc_65C39B1: cmp $1,%al;");
    asm("loc_65C39B3: jne loc_65C39C9;");
    asm("loc_65C39B5: mov _data_65CA24C,%eax;");
    asm("loc_65C39BA: cmp %edi,%eax;");
    asm("loc_65C39BC: ja loc_65C39C9;");
    asm("loc_65C39BE: push %eax;");
    asm("loc_65C39BF: lea 0x418(%esp),%eax;");
    asm("loc_65C39C6: push %eax;");
    asm("loc_65C39C7: jmp loc_65C39CF;");
    asm("loc_65C39C9: push %edi;");
    asm("loc_65C39CA: lea 0x18(%esp),%ecx;");
    asm("loc_65C39CE: push %ecx;");
    asm("loc_65C39CF: mov 4(%ebx),%ecx;");
    asm("loc_65C39D2: push %ebx;");
    asm("loc_65C39D3: call _sub_65C5360;");
    asm("loc_65C39D8: mov %al,0x60(%ebx);");
    asm("loc_65C39DB: mov %esi,%ecx;");
    asm("loc_65C39DD: call _sub_65C4310;");
    asm("loc_65C39E2: pop %edi;");
    asm("loc_65C39E3: pop %esi;");
    asm("loc_65C39E4: mov $1,%al;");
    asm("loc_65C39E6: pop %ebx;");
    asm("loc_65C39E7: add $0xC08,%esp;");
    asm("loc_65C39ED: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C39F0() // _unknown_libname_2
{
    __DEBUG_ASM(65C39F0);
    // chunk 0x65C39F0 _sub_65C39F0
    asm("loc_65C39F0: mov $_data_65CA1D8,%ecx;");
    asm("loc_65C39F5: jmp _sub_65C1090;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C3A00() // ?Send@CDPClientProxy@@QAE_NPAXK@Z
{
    __DEBUG_ASM(65C3A00);
    // chunk 0x65C3A00 _sub_65C3A00
    asm("loc_65C3A00: push $0xFFFFFFFF;");
    asm("loc_65C3A02: push $_sub_65C6E7B;");
    asm("loc_65C3A07: mov %fs:0,%eax;");
    asm("loc_65C3A0D: push %eax;");
    asm("loc_65C3A0E: mov %esp,%fs:0;");
    asm("loc_65C3A15: push %ecx;");
    asm("loc_65C3A16: push %ebx;");
    asm("loc_65C3A17: push %ebp;");
    asm("loc_65C3A18: push %esi;");
    asm("loc_65C3A19: push %edi;");
    asm("loc_65C3A1A: push $0x20;");
    asm("loc_65C3A1C: mov %ecx,%ebx;");
    asm("loc_65C3A1E: call _sub_65C6A66;");
    asm("loc_65C3A23: add $4,%esp;");
    asm("loc_65C3A26: mov %eax,0x10(%esp);");
    asm("loc_65C3A2A: xor %ebp,%ebp;");
    asm("loc_65C3A2C: cmp %ebp,%eax;");
    asm("loc_65C3A2E: mov %ebp,0x1C(%esp);");
    asm("loc_65C3A32: je loc_65C3A3D;");
    asm("loc_65C3A34: mov %eax,%ecx;");
    asm("loc_65C3A36: call _sub_65C41C0;");
    asm("loc_65C3A3B: mov %eax,%ebp;");
    asm("loc_65C3A3D: mov 8(%ebx),%eax;");
    asm("loc_65C3A40: mov 0x28(%esp),%esi;");
    asm("loc_65C3A44: push %esi;");
    asm("loc_65C3A45: movl $0xFFFFFFFF,0x20(%esp);");
    asm("loc_65C3A4D: mov %eax,0x14(%ebp);");
    asm("loc_65C3A50: calll *_import_65C7084;");
    asm("loc_65C3A56: mov %esi,%ecx;");
    asm("loc_65C3A58: mov %ecx,%edx;");
    asm("loc_65C3A5A: mov %esi,0xC(%ebp);");
    asm("loc_65C3A5D: mov 0x28(%esp),%esi;");
    asm("loc_65C3A61: shr $2,%ecx;");
    asm("loc_65C3A64: mov %eax,8(%ebp);");
    asm("loc_65C3A67: mov %eax,%edi;");
    asm("loc_65C3A69: rep movsl (%esi),(%edi);");
    asm("loc_65C3A6B: mov %edx,%ecx;");
    asm("loc_65C3A6D: and $3,%ecx;");
    asm("loc_65C3A70: rep movsb (%esi),(%edi);");
    asm("loc_65C3A72: lea 0x10(%ebx),%esi;");
    asm("loc_65C3A75: add $4,%esp;");
    asm("loc_65C3A78: mov %esi,%ecx;");
    asm("loc_65C3A7A: call _sub_65C4300;");
    asm("loc_65C3A7F: mov 0x3C(%ebx),%edx;");
    asm("loc_65C3A82: mov 0x28(%esp),%eax;");
    asm("loc_65C3A86: mov 0x40(%ebx),%ecx;");
    asm("loc_65C3A89: add %eax,%edx;");
    asm("loc_65C3A8B: inc %ecx;");
    asm("loc_65C3A8C: mov %ecx,0x40(%ebx);");
    asm("loc_65C3A8F: push %ebp;");
    asm("loc_65C3A90: mov %esi,%ecx;");
    asm("loc_65C3A92: mov %edx,0x3C(%ebx);");
    asm("loc_65C3A95: call _sub_65C4320;");
    asm("loc_65C3A9A: mov %esi,%ecx;");
    asm("loc_65C3A9C: call _sub_65C4310;");
    asm("loc_65C3AA1: mov %ebx,%ecx;");
    asm("loc_65C3AA3: call _sub_65C3730;");
    asm("loc_65C3AA8: mov 0x14(%esp),%ecx;");
    asm("loc_65C3AAC: pop %edi;");
    asm("loc_65C3AAD: pop %esi;");
    asm("loc_65C3AAE: pop %ebp;");
    asm("loc_65C3AAF: mov $1,%al;");
    asm("loc_65C3AB1: pop %ebx;");
    asm("loc_65C3AB2: mov %ecx,%fs:0;");
    asm("loc_65C3AB9: add $0x10,%esp;");
    asm("loc_65C3ABC: ret $8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C3AC0() // ?Disconnect@CDPClientProxy@@QAE_NXZ
{
    __DEBUG_ASM(65C3AC0);
    // chunk 0x65C3AC0 _sub_65C3AC0
    asm("loc_65C3AC0: mov 8(%ecx),%eax;");
    asm("loc_65C3AC3: mov 4(%ecx),%ecx;");
    asm("loc_65C3AC6: push %eax;");
    asm("loc_65C3AC7: call _sub_65C53D0;");
    asm("loc_65C3ACC: mov $1,%al;");
    asm("loc_65C3ACE: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C3AD0() // ?GetConnectionStats@CDPClientProxy@@QAE_NPAU_DPN_CONNECTION_INFO@@@Z
{
    __DEBUG_ASM(65C3AD0);
    // chunk 0x65C3AD0 _sub_65C3AD0
    asm("loc_65C3AD0: mov %ecx,%eax;");
    asm("loc_65C3AD2: mov 4(%eax),%ecx;");
    asm("loc_65C3AD5: test %ecx,%ecx;");
    asm("loc_65C3AD7: jne loc_65C3ADE;");
    asm("loc_65C3AD9: xor %al,%al;");
    asm("loc_65C3ADB: ret $4;");
    asm("loc_65C3ADE: mov 4(%esp),%edx;");
    asm("loc_65C3AE2: push %edx;");
    asm("loc_65C3AE3: push %eax;");
    asm("loc_65C3AE4: call _sub_65C53F0;");
    asm("loc_65C3AE9: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C3AF0() // ?OnMsgSent@CDPClientProxy@@QAEXK@Z
{
    __DEBUG_ASM(65C3AF0);
    // chunk 0x65C3AF0 _sub_65C3AF0
    asm("loc_65C3AF0: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C3B00() // ?GetLinkSaturation@CDPClientProxy@@QAENXZ
{
    __DEBUG_ASM(65C3B00);
    // chunk 0x65C3B00 _sub_65C3B00
    asm("loc_65C3B00: fldl 0x58(%ecx);");
    asm("loc_65C3B03: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C3B10() // ?UpdateQueueHistory@CDPClientProxy@@QAEXXZ
{
    __DEBUG_ASM(65C3B10);
    // chunk 0x65C3B10 _sub_65C3B10
    asm("loc_65C3B10: sub $8,%esp;");
    asm("loc_65C3B13: push %esi;");
    asm("loc_65C3B14: push %edi;");
    asm("loc_65C3B15: mov %ecx,%esi;");
    asm("loc_65C3B17: calll *_import_65C70D8;");
    asm("loc_65C3B1D: mov 0x50(%esi),%edi;");
    asm("loc_65C3B20: mov %eax,%ecx;");
    asm("loc_65C3B22: sub %edi,%ecx;");
    asm("loc_65C3B24: cmp $0x3E8,%ecx;");
    asm("loc_65C3B2A: jbe loc_65C3B79;");
    asm("loc_65C3B2C: mov 4(%esi),%ecx;");
    asm("loc_65C3B2F: push %ebx;");
    asm("loc_65C3B30: push %esi;");
    asm("loc_65C3B31: mov %eax,0x50(%esi);");
    asm("loc_65C3B34: call _sub_65C54C0;");
    asm("loc_65C3B39: add 0x3C(%esi),%eax;");
    asm("loc_65C3B3C: mov %eax,%edi;");
    asm("loc_65C3B3E: lea 0x48(%esi),%ecx;");
    asm("loc_65C3B41: mov $2,%ebx;");
    asm("loc_65C3B46: mov (%ecx),%edx;");
    asm("loc_65C3B48: mov %edx,4(%ecx);");
    asm("loc_65C3B4B: add %edx,%edi;");
    asm("loc_65C3B4D: sub $4,%ecx;");
    asm("loc_65C3B50: dec %ebx;");
    asm("loc_65C3B51: jne loc_65C3B46;");
    asm("loc_65C3B53: mov %eax,0x44(%esi);");
    asm("loc_65C3B56: mov $0xAAAAAAAB,%eax;");
    asm("loc_65C3B5B: mul %edi;");
    asm("loc_65C3B5D: shr $1,%edx;");
    asm("loc_65C3B5F: mov %edx,0xC(%esp);");
    asm("loc_65C3B63: movl $0,0x10(%esp);");
    asm("loc_65C3B6B: pop %ebx;");
    asm("loc_65C3B6C: fildll 8(%esp);");
    asm("loc_65C3B70: fmull _data_65C74D0;");
    asm("loc_65C3B76: fstpl 0x58(%esi);");
    asm("loc_65C3B79: pop %edi;");
    asm("loc_65C3B7A: pop %esi;");
    asm("loc_65C3B7B: add $8,%esp;");
    asm("loc_65C3B7E: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C3B80() // ?GetSendQSize@CDPClientProxy@@QAEIXZ
{
    __DEBUG_ASM(65C3B80);
    // chunk 0x65C3B80 _sub_65C3B80
    asm("loc_65C3B80: push %esi;");
    asm("loc_65C3B81: mov %ecx,%esi;");
    asm("loc_65C3B83: mov 4(%esi),%ecx;");
    asm("loc_65C3B86: push %esi;");
    asm("loc_65C3B87: call _sub_65C5480;");
    asm("loc_65C3B8C: add 0x40(%esi),%eax;");
    asm("loc_65C3B8F: pop %esi;");
    asm("loc_65C3B90: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C3BA0() // ?GetSendQBytes@CDPClientProxy@@QAEIXZ
{
    __DEBUG_ASM(65C3BA0);
    // chunk 0x65C3BA0 _sub_65C3BA0
    asm("loc_65C3BA0: push %esi;");
    asm("loc_65C3BA1: mov %ecx,%esi;");
    asm("loc_65C3BA3: mov 4(%esi),%ecx;");
    asm("loc_65C3BA6: push %esi;");
    asm("loc_65C3BA7: call _sub_65C54C0;");
    asm("loc_65C3BAC: add 0x3C(%esi),%eax;");
    asm("loc_65C3BAF: pop %esi;");
    asm("loc_65C3BB0: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C3BC0() // ??0CDPServer@@QAE@ABV0@@Z
{
    __DEBUG_ASM(65C3BC0);
    // chunk 0x65C3BC0 _sub_65C3BC0
    asm("loc_65C3BC0: push %ecx;");
    asm("loc_65C3BC1: push %ebx;");
    asm("loc_65C3BC2: mov %ecx,%ebx;");
    asm("loc_65C3BC4: push %ebp;");
    asm("loc_65C3BC5: mov 0x10(%esp),%ebp;");
    asm("loc_65C3BC9: mov 4(%ebp),%eax;");
    asm("loc_65C3BCC: push %esi;");
    asm("loc_65C3BCD: push %edi;");
    asm("loc_65C3BCE: mov %eax,4(%ebx);");
    asm("loc_65C3BD1: lea 8(%ebp),%esi;");
    asm("loc_65C3BD4: lea 8(%ebx),%edi;");
    asm("loc_65C3BD7: mov $0x12,%ecx;");
    asm("loc_65C3BDC: rep movsl (%esi),(%edi);");
    asm("loc_65C3BDE: lea 0x50(%ebp),%esi;");
    asm("loc_65C3BE1: lea 0x50(%ebx),%edi;");
    asm("loc_65C3BE4: mov $0x82,%ecx;");
    asm("loc_65C3BE9: rep movsl (%esi),(%edi);");
    asm("loc_65C3BEB: lea 0x258(%ebp),%esi;");
    asm("loc_65C3BF1: lea 0x258(%ebx),%edi;");
    asm("loc_65C3BF7: mov $0x82,%ecx;");
    asm("loc_65C3BFC: rep movsl (%esi),(%edi);");
    asm("loc_65C3BFE: lea 0x460(%ebp),%esi;");
    asm("loc_65C3C04: lea 0x460(%ebx),%edi;");
    asm("loc_65C3C0A: mov $0x40,%ecx;");
    asm("loc_65C3C0F: rep movsl (%esi),(%edi);");
    asm("loc_65C3C11: mov 0x560(%ebp),%ecx;");
    asm("loc_65C3C17: mov %ecx,0x560(%ebx);");
    asm("loc_65C3C1D: mov 0x564(%ebp),%dl;");
    asm("loc_65C3C23: mov %dl,0x564(%ebx);");
    asm("loc_65C3C29: mov 0x568(%ebp),%eax;");
    asm("loc_65C3C2F: mov %eax,0x568(%ebx);");
    asm("loc_65C3C35: mov 0x570(%ebp),%cl;");
    asm("loc_65C3C3B: push $0xC;");
    asm("loc_65C3C3D: mov %cl,0x570(%ebx);");
    asm("loc_65C3C43: call _sub_65C6A66;");
    asm("loc_65C3C48: mov %eax,(%eax);");
    asm("loc_65C3C4A: mov %eax,4(%eax);");
    asm("loc_65C3C4D: mov %eax,0x574(%ebx);");
    asm("loc_65C3C53: movl $0,0x578(%ebx);");
    asm("loc_65C3C5D: mov 0x574(%ebp),%ecx;");
    asm("loc_65C3C63: mov (%ecx),%edi;");
    asm("loc_65C3C65: mov (%eax),%esi;");
    asm("loc_65C3C67: add $4,%esp;");
    asm("loc_65C3C6A: cmp %ecx,%edi;");
    asm("loc_65C3C6C: mov %ecx,0x10(%esp);");
    asm("loc_65C3C70: je loc_65C3CBD;");
    asm("loc_65C3C72: mov 4(%esi),%edx;");
    asm("loc_65C3C75: push $0xC;");
    asm("loc_65C3C77: mov %edx,0x1C(%esp);");
    asm("loc_65C3C7B: call _sub_65C6A66;");
    asm("loc_65C3C80: mov 0x1C(%esp),%ecx;");
    asm("loc_65C3C84: add $4,%esp;");
    asm("loc_65C3C87: test %ecx,%ecx;");
    asm("loc_65C3C89: mov %esi,(%eax);");
    asm("loc_65C3C8B: jne loc_65C3C8F;");
    asm("loc_65C3C8D: mov %eax,%ecx;");
    asm("loc_65C3C8F: mov %ecx,4(%eax);");
    asm("loc_65C3C92: mov %eax,4(%esi);");
    asm("loc_65C3C95: mov 4(%eax),%ecx;");
    asm("loc_65C3C98: mov %eax,(%ecx);");
    asm("loc_65C3C9A: add $8,%eax;");
    asm("loc_65C3C9D: test %eax,%eax;");
    asm("loc_65C3C9F: je loc_65C3CA6;");
    asm("loc_65C3CA1: mov 8(%edi),%edx;");
    asm("loc_65C3CA4: mov %edx,(%eax);");
    asm("loc_65C3CA6: mov 0x578(%ebx),%ecx;");
    asm("loc_65C3CAC: mov 0x10(%esp),%eax;");
    asm("loc_65C3CB0: inc %ecx;");
    asm("loc_65C3CB1: mov %ecx,0x578(%ebx);");
    asm("loc_65C3CB7: mov (%edi),%edi;");
    asm("loc_65C3CB9: cmp %eax,%edi;");
    asm("loc_65C3CBB: jne loc_65C3C72;");
    asm("loc_65C3CBD: lea 0x57C(%ebp),%esi;");
    asm("loc_65C3CC3: lea 0x57C(%ebx),%edi;");
    asm("loc_65C3CC9: mov $6,%ecx;");
    asm("loc_65C3CCE: rep movsl (%esi),(%edi);");
    asm("loc_65C3CD0: mov 0x594(%ebp),%eax;");
    asm("loc_65C3CD6: mov %eax,0x594(%ebx);");
    asm("loc_65C3CDC: movl $_off_65C74B4,0x56C(%ebx);");
    asm("loc_65C3CE6: lea 0x598(%ebp),%esi;");
    asm("loc_65C3CEC: lea 0x598(%ebx),%edi;");
    asm("loc_65C3CF2: mov $0x100,%ecx;");
    asm("loc_65C3CF7: rep movsl (%esi),(%edi);");
    asm("loc_65C3CF9: mov 0x998(%ebp),%ecx;");
    asm("loc_65C3CFF: pop %edi;");
    asm("loc_65C3D00: pop %esi;");
    asm("loc_65C3D01: pop %ebp;");
    asm("loc_65C3D02: mov %ecx,0x998(%ebx);");
    asm("loc_65C3D08: movl $_off_65C74D8,(%ebx);");
    asm("loc_65C3D0E: mov %ebx,%eax;");
    asm("loc_65C3D10: pop %ebx;");
    asm("loc_65C3D11: pop %ecx;");
    asm("loc_65C3D12: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C3D20() // ??4CDPServer@@QAEAAV0@ABV0@@Z
{
    __DEBUG_ASM(65C3D20);
    // chunk 0x65C3D20 _sub_65C3D20
    asm("loc_65C3D20: sub $8,%esp;");
    asm("loc_65C3D23: push %ebx;");
    asm("loc_65C3D24: mov 0x10(%esp),%ebx;");
    asm("loc_65C3D28: mov 4(%ebx),%eax;");
    asm("loc_65C3D2B: push %ebp;");
    asm("loc_65C3D2C: mov %ecx,%ebp;");
    asm("loc_65C3D2E: push %esi;");
    asm("loc_65C3D2F: push %edi;");
    asm("loc_65C3D30: mov %ebx,%edx;");
    asm("loc_65C3D32: mov %eax,4(%ebp);");
    asm("loc_65C3D35: lea 8(%ebx),%esi;");
    asm("loc_65C3D38: lea 8(%ebp),%edi;");
    asm("loc_65C3D3B: mov $0x12,%ecx;");
    asm("loc_65C3D40: sub %ebp,%edx;");
    asm("loc_65C3D42: rep movsl (%esi),(%edi);");
    asm("loc_65C3D44: lea 0x50(%ebp),%eax;");
    asm("loc_65C3D47: mov %edx,0x14(%esp);");
    asm("loc_65C3D4B: mov $0x104,%ecx;");
    asm("loc_65C3D50: mov (%edx,%eax),%si;");
    asm("loc_65C3D54: mov %si,(%eax);");
    asm("loc_65C3D57: add $2,%eax;");
    asm("loc_65C3D5A: dec %ecx;");
    asm("loc_65C3D5B: jne loc_65C3D50;");
    asm("loc_65C3D5D: lea 0x258(%ebp),%eax;");
    asm("loc_65C3D63: mov $0x104,%ecx;");
    asm("loc_65C3D68: mov (%eax,%edx),%si;");
    asm("loc_65C3D6C: mov %si,(%eax);");
    asm("loc_65C3D6F: add $2,%eax;");
    asm("loc_65C3D72: dec %ecx;");
    asm("loc_65C3D73: jne loc_65C3D68;");
    asm("loc_65C3D75: lea 0x460(%ebp),%eax;");
    asm("loc_65C3D7B: mov $0x40,%ecx;");
    asm("loc_65C3D80: mov (%eax,%edx),%esi;");
    asm("loc_65C3D83: mov %esi,(%eax);");
    asm("loc_65C3D85: add $4,%eax;");
    asm("loc_65C3D88: dec %ecx;");
    asm("loc_65C3D89: jne loc_65C3D80;");
    asm("loc_65C3D8B: mov 0x560(%ebx),%ecx;");
    asm("loc_65C3D91: mov %ecx,0x560(%ebp);");
    asm("loc_65C3D97: mov 0x564(%ebx),%al;");
    asm("loc_65C3D9D: mov %al,0x564(%ebp);");
    asm("loc_65C3DA3: mov 0x568(%ebx),%ecx;");
    asm("loc_65C3DA9: mov %ecx,0x568(%ebp);");
    asm("loc_65C3DAF: lea 0x570(%ebx),%ecx;");
    asm("loc_65C3DB5: lea 0x570(%ebp),%eax;");
    asm("loc_65C3DBB: cmp %ecx,%eax;");
    asm("loc_65C3DBD: je loc_65C3E7B;");
    asm("loc_65C3DC3: mov 4(%eax),%esi;");
    asm("loc_65C3DC6: mov (%esi),%eax;");
    asm("loc_65C3DC8: cmp %esi,%eax;");
    asm("loc_65C3DCA: mov 4(%ecx),%ecx;");
    asm("loc_65C3DCD: mov (%ecx),%ebx;");
    asm("loc_65C3DCF: mov %ecx,0x10(%esp);");
    asm("loc_65C3DD3: je loc_65C3DE7;");
    asm("loc_65C3DD5: cmp %ecx,%ebx;");
    asm("loc_65C3DD7: je loc_65C3DE7;");
    asm("loc_65C3DD9: mov 8(%ebx),%edi;");
    asm("loc_65C3DDC: mov %edi,8(%eax);");
    asm("loc_65C3DDF: mov (%eax),%eax;");
    asm("loc_65C3DE1: cmp %esi,%eax;");
    asm("loc_65C3DE3: mov (%ebx),%ebx;");
    asm("loc_65C3DE5: jne loc_65C3DD5;");
    asm("loc_65C3DE7: cmp %esi,%eax;");
    asm("loc_65C3DE9: mov %eax,%edi;");
    asm("loc_65C3DEB: je loc_65C3E25;");
    asm("loc_65C3DED: lea (%ecx),%ecx;");
    asm("loc_65C3DF0: mov %edi,%eax;");
    asm("loc_65C3DF2: mov 4(%eax),%edx;");
    asm("loc_65C3DF5: mov (%eax),%ecx;");
    asm("loc_65C3DF7: mov (%edi),%edi;");
    asm("loc_65C3DF9: mov %ecx,(%edx);");
    asm("loc_65C3DFB: mov (%eax),%edx;");
    asm("loc_65C3DFD: mov 4(%eax),%ecx;");
    asm("loc_65C3E00: push %eax;");
    asm("loc_65C3E01: mov %ecx,4(%edx);");
    asm("loc_65C3E04: call _sub_65C6A60;");
    asm("loc_65C3E09: mov 0x578(%ebp),%ecx;");
    asm("loc_65C3E0F: add $4,%esp;");
    asm("loc_65C3E12: dec %ecx;");
    asm("loc_65C3E13: cmp %esi,%edi;");
    asm("loc_65C3E15: mov %ecx,0x578(%ebp);");
    asm("loc_65C3E1B: jne loc_65C3DF0;");
    asm("loc_65C3E1D: mov 0x10(%esp),%ecx;");
    asm("loc_65C3E21: mov 0x14(%esp),%edx;");
    asm("loc_65C3E25: cmp %ecx,%ebx;");
    asm("loc_65C3E27: je loc_65C3E77;");
    asm("loc_65C3E29: lea (%esp),%esp;");
    asm("loc_65C3E30: mov 4(%esi),%edi;");
    asm("loc_65C3E33: push $0xC;");
    asm("loc_65C3E35: call _sub_65C6A66;");
    asm("loc_65C3E3A: add $4,%esp;");
    asm("loc_65C3E3D: test %edi,%edi;");
    asm("loc_65C3E3F: mov %esi,(%eax);");
    asm("loc_65C3E41: jne loc_65C3E45;");
    asm("loc_65C3E43: mov %eax,%edi;");
    asm("loc_65C3E45: mov %edi,4(%eax);");
    asm("loc_65C3E48: mov %eax,4(%esi);");
    asm("loc_65C3E4B: mov 4(%eax),%edx;");
    asm("loc_65C3E4E: mov %eax,(%edx);");
    asm("loc_65C3E50: add $8,%eax;");
    asm("loc_65C3E53: test %eax,%eax;");
    asm("loc_65C3E55: je loc_65C3E5C;");
    asm("loc_65C3E57: mov 8(%ebx),%ecx;");
    asm("loc_65C3E5A: mov %ecx,(%eax);");
    asm("loc_65C3E5C: mov 0x578(%ebp),%ecx;");
    asm("loc_65C3E62: mov 0x10(%esp),%eax;");
    asm("loc_65C3E66: inc %ecx;");
    asm("loc_65C3E67: mov %ecx,0x578(%ebp);");
    asm("loc_65C3E6D: mov (%ebx),%ebx;");
    asm("loc_65C3E6F: cmp %eax,%ebx;");
    asm("loc_65C3E71: jne loc_65C3E30;");
    asm("loc_65C3E73: mov 0x14(%esp),%edx;");
    asm("loc_65C3E77: mov 0x1C(%esp),%ebx;");
    asm("loc_65C3E7B: lea 0x57C(%ebx),%esi;");
    asm("loc_65C3E81: lea 0x57C(%ebp),%edi;");
    asm("loc_65C3E87: mov $6,%ecx;");
    asm("loc_65C3E8C: rep movsl (%esi),(%edi);");
    asm("loc_65C3E8E: mov 0x594(%ebx),%eax;");
    asm("loc_65C3E94: mov $0xFFFFFA68,%esi;");
    asm("loc_65C3E99: mov %eax,0x594(%ebp);");
    asm("loc_65C3E9F: lea 0x598(%ebp),%eax;");
    asm("loc_65C3EA5: sub %ebp,%esi;");
    asm("loc_65C3EA7: mov (%eax,%edx),%cl;");
    asm("loc_65C3EAA: mov %cl,(%eax);");
    asm("loc_65C3EAC: inc %eax;");
    asm("loc_65C3EAD: lea (%esi,%eax),%ecx;");
    asm("loc_65C3EB0: cmp $0x400,%ecx;");
    asm("loc_65C3EB6: jb loc_65C3EA7;");
    asm("loc_65C3EB8: mov 0x998(%ebx),%edx;");
    asm("loc_65C3EBE: pop %edi;");
    asm("loc_65C3EBF: pop %esi;");
    asm("loc_65C3EC0: mov %edx,0x998(%ebp);");
    asm("loc_65C3EC6: mov %ebp,%eax;");
    asm("loc_65C3EC8: pop %ebp;");
    asm("loc_65C3EC9: pop %ebx;");
    asm("loc_65C3ECA: add $8,%esp;");
    asm("loc_65C3ECD: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C3ED0() // _sub_65C3ED0
{
    __DEBUG_ASM(65C3ED0);
    // chunk 0x65C3ED0 _sub_65C3ED0
    asm("loc_65C3ED0: push %ebx;");
    asm("loc_65C3ED1: mov 8(%esp),%bl;");
    asm("loc_65C3ED5: test $2,%bl;");
    asm("loc_65C3ED8: push %esi;");
    asm("loc_65C3ED9: mov %ecx,%esi;");
    asm("loc_65C3EDB: je loc_65C3F0B;");
    asm("loc_65C3EDD: mov -4(%esi),%eax;");
    asm("loc_65C3EE0: push %edi;");
    asm("loc_65C3EE1: push $_sub_65C4D70;");
    asm("loc_65C3EE6: lea -4(%esi),%edi;");
    asm("loc_65C3EE9: push %eax;");
    asm("loc_65C3EEA: push $0x99C;");
    asm("loc_65C3EEF: push %esi;");
    asm("loc_65C3EF0: call _sub_65C6AEF;");
    asm("loc_65C3EF5: test $1,%bl;");
    asm("loc_65C3EF8: je loc_65C3F03;");
    asm("loc_65C3EFA: push %edi;");
    asm("loc_65C3EFB: call _sub_65C6A60;");
    asm("loc_65C3F00: add $4,%esp;");
    asm("loc_65C3F03: mov %edi,%eax;");
    asm("loc_65C3F05: pop %edi;");
    asm("loc_65C3F06: pop %esi;");
    asm("loc_65C3F07: pop %ebx;");
    asm("loc_65C3F08: ret $4;");
    asm("loc_65C3F0B: mov %esi,%ecx;");
    asm("loc_65C3F0D: call _sub_65C4D70;");
    asm("loc_65C3F12: test $1,%bl;");
    asm("loc_65C3F15: je loc_65C3F20;");
    asm("loc_65C3F17: push %esi;");
    asm("loc_65C3F18: call _sub_65C6A60;");
    asm("loc_65C3F1D: add $4,%esp;");
    asm("loc_65C3F20: mov %esi,%eax;");
    asm("loc_65C3F22: pop %esi;");
    asm("loc_65C3F23: pop %ebx;");
    asm("loc_65C3F24: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C3F30() // ??0CDPClientProxy@@QAE@ABV0@@Z
{
    __DEBUG_ASM(65C3F30);
    // chunk 0x65C3F30 _sub_65C3F30
    asm("loc_65C3F30: push %ecx;");
    asm("loc_65C3F31: push %ebx;");
    asm("loc_65C3F32: mov %ecx,%ebx;");
    asm("loc_65C3F34: push %ebp;");
    asm("loc_65C3F35: mov 0x10(%esp),%ebp;");
    asm("loc_65C3F39: movl $_off_65C7460,(%ebx);");
    asm("loc_65C3F3F: mov 4(%ebp),%eax;");
    asm("loc_65C3F42: mov %eax,4(%ebx);");
    asm("loc_65C3F45: mov 8(%ebp),%ecx;");
    asm("loc_65C3F48: mov %ecx,8(%ebx);");
    asm("loc_65C3F4B: mov 0xC(%ebp),%edx;");
    asm("loc_65C3F4E: push %esi;");
    asm("loc_65C3F4F: mov %edx,0xC(%ebx);");
    asm("loc_65C3F52: mov 0x14(%ebp),%al;");
    asm("loc_65C3F55: push %edi;");
    asm("loc_65C3F56: push $0xC;");
    asm("loc_65C3F58: mov %al,0x14(%ebx);");
    asm("loc_65C3F5B: call _sub_65C6A66;");
    asm("loc_65C3F60: mov %eax,(%eax);");
    asm("loc_65C3F62: mov %eax,4(%eax);");
    asm("loc_65C3F65: mov %eax,0x18(%ebx);");
    asm("loc_65C3F68: movl $0,0x1C(%ebx);");
    asm("loc_65C3F6F: mov 0x18(%ebp),%ecx;");
    asm("loc_65C3F72: mov (%ecx),%edi;");
    asm("loc_65C3F74: mov (%eax),%esi;");
    asm("loc_65C3F76: add $4,%esp;");
    asm("loc_65C3F79: cmp %ecx,%edi;");
    asm("loc_65C3F7B: mov %ecx,0x10(%esp);");
    asm("loc_65C3F7F: je loc_65C3FC6;");
    asm("loc_65C3F81: mov 4(%esi),%ecx;");
    asm("loc_65C3F84: push $0xC;");
    asm("loc_65C3F86: mov %ecx,0x1C(%esp);");
    asm("loc_65C3F8A: call _sub_65C6A66;");
    asm("loc_65C3F8F: mov 0x1C(%esp),%ecx;");
    asm("loc_65C3F93: add $4,%esp;");
    asm("loc_65C3F96: test %ecx,%ecx;");
    asm("loc_65C3F98: mov %esi,(%eax);");
    asm("loc_65C3F9A: jne loc_65C3F9E;");
    asm("loc_65C3F9C: mov %eax,%ecx;");
    asm("loc_65C3F9E: mov %ecx,4(%eax);");
    asm("loc_65C3FA1: mov %eax,4(%esi);");
    asm("loc_65C3FA4: mov 4(%eax),%edx;");
    asm("loc_65C3FA7: mov %eax,(%edx);");
    asm("loc_65C3FA9: add $8,%eax;");
    asm("loc_65C3FAC: test %eax,%eax;");
    asm("loc_65C3FAE: je loc_65C3FB5;");
    asm("loc_65C3FB0: mov 8(%edi),%ecx;");
    asm("loc_65C3FB3: mov %ecx,(%eax);");
    asm("loc_65C3FB5: mov 0x1C(%ebx),%ecx;");
    asm("loc_65C3FB8: mov 0x10(%esp),%eax;");
    asm("loc_65C3FBC: inc %ecx;");
    asm("loc_65C3FBD: mov %ecx,0x1C(%ebx);");
    asm("loc_65C3FC0: mov (%edi),%edi;");
    asm("loc_65C3FC2: cmp %eax,%edi;");
    asm("loc_65C3FC4: jne loc_65C3F81;");
    asm("loc_65C3FC6: lea 0x20(%ebp),%esi;");
    asm("loc_65C3FC9: lea 0x20(%ebx),%edi;");
    asm("loc_65C3FCC: mov $6,%ecx;");
    asm("loc_65C3FD1: rep movsl (%esi),(%edi);");
    asm("loc_65C3FD3: mov 0x38(%ebp),%edx;");
    asm("loc_65C3FD6: mov %edx,0x38(%ebx);");
    asm("loc_65C3FD9: movl $_off_65C74B4,0x10(%ebx);");
    asm("loc_65C3FE0: mov 0x3C(%ebp),%eax;");
    asm("loc_65C3FE3: mov %eax,0x3C(%ebx);");
    asm("loc_65C3FE6: mov 0x40(%ebp),%ecx;");
    asm("loc_65C3FE9: mov %ecx,0x40(%ebx);");
    asm("loc_65C3FEC: lea 0x44(%ebp),%edx;");
    asm("loc_65C3FEF: mov (%edx),%ecx;");
    asm("loc_65C3FF1: lea 0x44(%ebx),%eax;");
    asm("loc_65C3FF4: mov %ecx,(%eax);");
    asm("loc_65C3FF6: mov 4(%edx),%ecx;");
    asm("loc_65C3FF9: mov %ecx,4(%eax);");
    asm("loc_65C3FFC: mov 8(%edx),%edx;");
    asm("loc_65C3FFF: mov %edx,8(%eax);");
    asm("loc_65C4002: mov 0x50(%ebp),%eax;");
    asm("loc_65C4005: mov %eax,0x50(%ebx);");
    asm("loc_65C4008: mov 0x58(%ebp),%ecx;");
    asm("loc_65C400B: mov %ecx,0x58(%ebx);");
    asm("loc_65C400E: mov 0x5C(%ebp),%edx;");
    asm("loc_65C4011: pop %edi;");
    asm("loc_65C4012: mov %edx,0x5C(%ebx);");
    asm("loc_65C4015: mov 0x60(%ebp),%al;");
    asm("loc_65C4018: pop %esi;");
    asm("loc_65C4019: mov %al,0x60(%ebx);");
    asm("loc_65C401C: pop %ebp;");
    asm("loc_65C401D: movl $_off_65C74BC,(%ebx);");
    asm("loc_65C4023: mov %ebx,%eax;");
    asm("loc_65C4025: pop %ebx;");
    asm("loc_65C4026: pop %ecx;");
    asm("loc_65C4027: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C4030() // ??4CDPClientProxy@@QAEAAV0@ABV0@@Z
{
    __DEBUG_ASM(65C4030);
    // chunk 0x65C4030 _sub_65C4030
    asm("loc_65C4030: push %ecx;");
    asm("loc_65C4031: mov 8(%esp),%edx;");
    asm("loc_65C4035: mov 4(%edx),%eax;");
    asm("loc_65C4038: push %ebx;");
    asm("loc_65C4039: push %ebp;");
    asm("loc_65C403A: mov %ecx,%ebp;");
    asm("loc_65C403C: mov %eax,4(%ebp);");
    asm("loc_65C403F: mov 8(%edx),%ecx;");
    asm("loc_65C4042: mov %ecx,8(%ebp);");
    asm("loc_65C4045: mov 0xC(%edx),%eax;");
    asm("loc_65C4048: mov %eax,0xC(%ebp);");
    asm("loc_65C404B: lea 0x14(%edx),%ecx;");
    asm("loc_65C404E: lea 0x14(%ebp),%eax;");
    asm("loc_65C4051: cmp %ecx,%eax;");
    asm("loc_65C4053: push %esi;");
    asm("loc_65C4054: push %edi;");
    asm("loc_65C4055: je loc_65C4101;");
    asm("loc_65C405B: mov 4(%eax),%esi;");
    asm("loc_65C405E: mov (%esi),%eax;");
    asm("loc_65C4060: cmp %esi,%eax;");
    asm("loc_65C4062: mov 4(%ecx),%ecx;");
    asm("loc_65C4065: mov (%ecx),%ebx;");
    asm("loc_65C4067: mov %ecx,0x10(%esp);");
    asm("loc_65C406B: je loc_65C4082;");
    asm("loc_65C406D: lea (%ecx),%ecx;");
    asm("loc_65C4070: cmp %ecx,%ebx;");
    asm("loc_65C4072: je loc_65C4082;");
    asm("loc_65C4074: mov 8(%ebx),%edi;");
    asm("loc_65C4077: mov %edi,8(%eax);");
    asm("loc_65C407A: mov (%eax),%eax;");
    asm("loc_65C407C: cmp %esi,%eax;");
    asm("loc_65C407E: mov (%ebx),%ebx;");
    asm("loc_65C4080: jne loc_65C4070;");
    asm("loc_65C4082: cmp %esi,%eax;");
    asm("loc_65C4084: mov %eax,%edi;");
    asm("loc_65C4086: je loc_65C40B7;");
    asm("loc_65C4088: mov %edi,%eax;");
    asm("loc_65C408A: mov 4(%eax),%ecx;");
    asm("loc_65C408D: mov (%eax),%edx;");
    asm("loc_65C408F: mov (%edi),%edi;");
    asm("loc_65C4091: mov %edx,(%ecx);");
    asm("loc_65C4093: mov (%eax),%ecx;");
    asm("loc_65C4095: mov 4(%eax),%edx;");
    asm("loc_65C4098: push %eax;");
    asm("loc_65C4099: mov %edx,4(%ecx);");
    asm("loc_65C409C: call _sub_65C6A60;");
    asm("loc_65C40A1: mov 0x1C(%ebp),%ecx;");
    asm("loc_65C40A4: add $4,%esp;");
    asm("loc_65C40A7: dec %ecx;");
    asm("loc_65C40A8: cmp %esi,%edi;");
    asm("loc_65C40AA: mov %ecx,0x1C(%ebp);");
    asm("loc_65C40AD: jne loc_65C4088;");
    asm("loc_65C40AF: mov 0x18(%esp),%edx;");
    asm("loc_65C40B3: mov 0x10(%esp),%ecx;");
    asm("loc_65C40B7: cmp %ecx,%ebx;");
    asm("loc_65C40B9: je loc_65C4101;");
    asm("loc_65C40BB: nop;");
    asm("loc_65C40BC: lea (%esp),%esp;");
    asm("loc_65C40C0: mov 4(%esi),%edi;");
    asm("loc_65C40C3: push $0xC;");
    asm("loc_65C40C5: call _sub_65C6A66;");
    asm("loc_65C40CA: add $4,%esp;");
    asm("loc_65C40CD: test %edi,%edi;");
    asm("loc_65C40CF: mov %esi,(%eax);");
    asm("loc_65C40D1: jne loc_65C40D5;");
    asm("loc_65C40D3: mov %eax,%edi;");
    asm("loc_65C40D5: mov %edi,4(%eax);");
    asm("loc_65C40D8: mov %eax,4(%esi);");
    asm("loc_65C40DB: mov 4(%eax),%ecx;");
    asm("loc_65C40DE: mov %eax,(%ecx);");
    asm("loc_65C40E0: add $8,%eax;");
    asm("loc_65C40E3: test %eax,%eax;");
    asm("loc_65C40E5: je loc_65C40EC;");
    asm("loc_65C40E7: mov 8(%ebx),%edx;");
    asm("loc_65C40EA: mov %edx,(%eax);");
    asm("loc_65C40EC: mov 0x1C(%ebp),%ecx;");
    asm("loc_65C40EF: mov 0x10(%esp),%eax;");
    asm("loc_65C40F3: inc %ecx;");
    asm("loc_65C40F4: mov %ecx,0x1C(%ebp);");
    asm("loc_65C40F7: mov (%ebx),%ebx;");
    asm("loc_65C40F9: cmp %eax,%ebx;");
    asm("loc_65C40FB: jne loc_65C40C0;");
    asm("loc_65C40FD: mov 0x18(%esp),%edx;");
    asm("loc_65C4101: lea 0x20(%edx),%esi;");
    asm("loc_65C4104: lea 0x20(%ebp),%edi;");
    asm("loc_65C4107: mov $6,%ecx;");
    asm("loc_65C410C: rep movsl (%esi),(%edi);");
    asm("loc_65C410E: mov 0x38(%edx),%eax;");
    asm("loc_65C4111: mov %eax,0x38(%ebp);");
    asm("loc_65C4114: mov 0x3C(%edx),%ecx;");
    asm("loc_65C4117: mov %ecx,0x3C(%ebp);");
    asm("loc_65C411A: mov 0x40(%edx),%eax;");
    asm("loc_65C411D: mov %edx,%ecx;");
    asm("loc_65C411F: mov %eax,0x40(%ebp);");
    asm("loc_65C4122: lea 0x44(%ebp),%eax;");
    asm("loc_65C4125: sub %ebp,%ecx;");
    asm("loc_65C4127: mov $3,%esi;");
    asm("loc_65C412C: lea (%esp),%esp;");
    asm("loc_65C4130: mov (%ecx,%eax),%edi;");
    asm("loc_65C4133: mov %edi,(%eax);");
    asm("loc_65C4135: add $4,%eax;");
    asm("loc_65C4138: dec %esi;");
    asm("loc_65C4139: jne loc_65C4130;");
    asm("loc_65C413B: mov 0x50(%edx),%ecx;");
    asm("loc_65C413E: mov %ecx,0x50(%ebp);");
    asm("loc_65C4141: mov 0x58(%edx),%eax;");
    asm("loc_65C4144: mov %eax,0x58(%ebp);");
    asm("loc_65C4147: mov 0x5C(%edx),%ecx;");
    asm("loc_65C414A: pop %edi;");
    asm("loc_65C414B: mov %ecx,0x5C(%ebp);");
    asm("loc_65C414E: mov 0x60(%edx),%dl;");
    asm("loc_65C4151: pop %esi;");
    asm("loc_65C4152: mov %dl,0x60(%ebp);");
    asm("loc_65C4155: mov %ebp,%eax;");
    asm("loc_65C4157: pop %ebp;");
    asm("loc_65C4158: pop %ebx;");
    asm("loc_65C4159: pop %ecx;");
    asm("loc_65C415A: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C4160() // _sub_65C4160
{
    __DEBUG_ASM(65C4160);
    // chunk 0x65C4160 _sub_65C4160
    asm("loc_65C4160: push %ebx;");
    asm("loc_65C4161: mov 8(%esp),%bl;");
    asm("loc_65C4165: test $2,%bl;");
    asm("loc_65C4168: push %esi;");
    asm("loc_65C4169: mov %ecx,%esi;");
    asm("loc_65C416B: je loc_65C4198;");
    asm("loc_65C416D: mov -4(%esi),%eax;");
    asm("loc_65C4170: push %edi;");
    asm("loc_65C4171: push $_sub_65C3710;");
    asm("loc_65C4176: lea -4(%esi),%edi;");
    asm("loc_65C4179: push %eax;");
    asm("loc_65C417A: push $0x68;");
    asm("loc_65C417C: push %esi;");
    asm("loc_65C417D: call _sub_65C6AEF;");
    asm("loc_65C4182: test $1,%bl;");
    asm("loc_65C4185: je loc_65C4190;");
    asm("loc_65C4187: push %edi;");
    asm("loc_65C4188: call _sub_65C6A60;");
    asm("loc_65C418D: add $4,%esp;");
    asm("loc_65C4190: mov %edi,%eax;");
    asm("loc_65C4192: pop %edi;");
    asm("loc_65C4193: pop %esi;");
    asm("loc_65C4194: pop %ebx;");
    asm("loc_65C4195: ret $4;");
    asm("loc_65C4198: mov %esi,%ecx;");
    asm("loc_65C419A: call _sub_65C3710;");
    asm("loc_65C419F: test $1,%bl;");
    asm("loc_65C41A2: je loc_65C41AD;");
    asm("loc_65C41A4: push %esi;");
    asm("loc_65C41A5: call _sub_65C6A60;");
    asm("loc_65C41AA: add $4,%esp;");
    asm("loc_65C41AD: mov %esi,%eax;");
    asm("loc_65C41AF: pop %esi;");
    asm("loc_65C41B0: pop %ebx;");
    asm("loc_65C41B1: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C41C0() // ??0CDPMessage@@QAE@XZ
{
    __DEBUG_ASM(65C41C0);
    // chunk 0x65C41C0 _sub_65C41C0
    asm("loc_65C41C0: mov %ecx,%eax;");
    asm("loc_65C41C2: xor %ecx,%ecx;");
    asm("loc_65C41C4: movl $_off_65C74B8,(%eax);");
    asm("loc_65C41CA: mov %ecx,0x10(%eax);");
    asm("loc_65C41CD: mov %ecx,8(%eax);");
    asm("loc_65C41D0: mov %ecx,0xC(%eax);");
    asm("loc_65C41D3: mov %ecx,0x14(%eax);");
    asm("loc_65C41D6: mov %ecx,0x18(%eax);");
    asm("loc_65C41D9: mov %ecx,4(%eax);");
    asm("loc_65C41DC: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C41E0() // ??1CDPMessage@@UAE@XZ
{
    __DEBUG_ASM(65C41E0);
    // chunk 0x65C41E0 _sub_65C41E0
    asm("loc_65C41E0: movl $_off_65C74B8,(%ecx);");
    asm("loc_65C41E6: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C41F0() // ??0CDPMsgList@@QAE@XZ
{
    __DEBUG_ASM(65C41F0);
    // chunk 0x65C41F0 _sub_65C41F0
    asm("loc_65C41F0: push %ecx;");
    asm("loc_65C41F1: mov 3(%esp),%al;");
    asm("loc_65C41F5: push %esi;");
    asm("loc_65C41F6: mov %ecx,%esi;");
    asm("loc_65C41F8: push $0xC;");
    asm("loc_65C41FA: mov %al,4(%esi);");
    asm("loc_65C41FD: call _sub_65C6A66;");
    asm("loc_65C4202: mov %eax,(%eax);");
    asm("loc_65C4204: mov %eax,4(%eax);");
    asm("loc_65C4207: add $4,%esp;");
    asm("loc_65C420A: lea 0x10(%esi),%ecx;");
    asm("loc_65C420D: mov %eax,8(%esi);");
    asm("loc_65C4210: movl $0,0xC(%esi);");
    asm("loc_65C4217: push %ecx;");
    asm("loc_65C4218: movl $_off_65C74B4,(%esi);");
    asm("loc_65C421E: calll *_import_65C7018;");
    asm("loc_65C4224: push $0;");
    asm("loc_65C4226: push $0;");
    asm("loc_65C4228: push $1;");
    asm("loc_65C422A: push $0;");
    asm("loc_65C422C: calll *_import_65C7014;");
    asm("loc_65C4232: mov %eax,0x28(%esi);");
    asm("loc_65C4235: mov %esi,%eax;");
    asm("loc_65C4237: pop %esi;");
    asm("loc_65C4238: pop %ecx;");
    asm("loc_65C4239: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C4240() // ??1CDPMsgList@@UAE@XZ
{
    __DEBUG_ASM(65C4240);
    // chunk 0x65C4240 _sub_65C4240
    asm("loc_65C4240: sub $8,%esp;");
    asm("loc_65C4243: push %ebx;");
    asm("loc_65C4244: push %esi;");
    asm("loc_65C4245: mov %ecx,%esi;");
    asm("loc_65C4247: push %edi;");
    asm("loc_65C4248: lea 0x10(%esi),%eax;");
    asm("loc_65C424B: push %eax;");
    asm("loc_65C424C: movl $_off_65C74B4,(%esi);");
    asm("loc_65C4252: calll *_import_65C7020;");
    asm("loc_65C4258: mov 0x28(%esi),%ecx;");
    asm("loc_65C425B: push %ecx;");
    asm("loc_65C425C: calll *_import_65C701C;");
    asm("loc_65C4262: mov 8(%esi),%ebx;");
    asm("loc_65C4265: mov (%ebx),%edi;");
    asm("loc_65C4267: cmp %ebx,%edi;");
    asm("loc_65C4269: je loc_65C4297;");
    asm("loc_65C426B: nop;");
    asm("loc_65C426C: lea (%esp),%esp;");
    asm("loc_65C4270: mov %edi,%eax;");
    asm("loc_65C4272: mov 4(%eax),%edx;");
    asm("loc_65C4275: mov (%eax),%ecx;");
    asm("loc_65C4277: mov (%edi),%edi;");
    asm("loc_65C4279: mov %ecx,(%edx);");
    asm("loc_65C427B: mov (%eax),%edx;");
    asm("loc_65C427D: mov 4(%eax),%ecx;");
    asm("loc_65C4280: push %eax;");
    asm("loc_65C4281: mov %ecx,4(%edx);");
    asm("loc_65C4284: call _sub_65C6A60;");
    asm("loc_65C4289: mov 0xC(%esi),%ecx;");
    asm("loc_65C428C: add $4,%esp;");
    asm("loc_65C428F: dec %ecx;");
    asm("loc_65C4290: cmp %ebx,%edi;");
    asm("loc_65C4292: mov %ecx,0xC(%esi);");
    asm("loc_65C4295: jne loc_65C4270;");
    asm("loc_65C4297: mov 8(%esi),%ebx;");
    asm("loc_65C429A: mov (%ebx),%edi;");
    asm("loc_65C429C: cmp %ebx,%edi;");
    asm("loc_65C429E: je loc_65C42DD;");
    asm("loc_65C42A0: mov %edi,%eax;");
    asm("loc_65C42A2: mov (%edi),%edi;");
    asm("loc_65C42A4: push $0;");
    asm("loc_65C42A6: lea 0x14(%esp),%edx;");
    asm("loc_65C42AA: push %edx;");
    asm("loc_65C42AB: lea 0x14(%esp),%ecx;");
    asm("loc_65C42AF: mov %eax,0x14(%esp);");
    asm("loc_65C42B3: call _sub_65C45D0;");
    asm("loc_65C42B8: mov (%eax),%eax;");
    asm("loc_65C42BA: mov 4(%eax),%ecx;");
    asm("loc_65C42BD: mov (%eax),%edx;");
    asm("loc_65C42BF: mov %edx,(%ecx);");
    asm("loc_65C42C1: mov (%eax),%ecx;");
    asm("loc_65C42C3: mov 4(%eax),%edx;");
    asm("loc_65C42C6: push %eax;");
    asm("loc_65C42C7: mov %edx,4(%ecx);");
    asm("loc_65C42CA: call _sub_65C6A60;");
    asm("loc_65C42CF: mov 0xC(%esi),%ecx;");
    asm("loc_65C42D2: add $4,%esp;");
    asm("loc_65C42D5: dec %ecx;");
    asm("loc_65C42D6: cmp %ebx,%edi;");
    asm("loc_65C42D8: mov %ecx,0xC(%esi);");
    asm("loc_65C42DB: jne loc_65C42A0;");
    asm("loc_65C42DD: mov 8(%esi),%eax;");
    asm("loc_65C42E0: push %eax;");
    asm("loc_65C42E1: call _sub_65C6A60;");
    asm("loc_65C42E6: add $4,%esp;");
    asm("loc_65C42E9: pop %edi;");
    asm("loc_65C42EA: movl $0,8(%esi);");
    asm("loc_65C42F1: movl $0,0xC(%esi);");
    asm("loc_65C42F8: pop %esi;");
    asm("loc_65C42F9: pop %ebx;");
    asm("loc_65C42FA: add $8,%esp;");
    asm("loc_65C42FD: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C4300() // ?Lock@CDPMsgList@@QAEXXZ
{
    __DEBUG_ASM(65C4300);
    // chunk 0x65C4300 _sub_65C4300
    asm("loc_65C4300: add $0x10,%ecx;");
    asm("loc_65C4303: push %ecx;");
    asm("loc_65C4304: calll *_import_65C7024;");
    asm("loc_65C430A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C4310() // ?Unlock@CDPMsgList@@QAEXXZ
{
    __DEBUG_ASM(65C4310);
    // chunk 0x65C4310 _sub_65C4310
    asm("loc_65C4310: add $0x10,%ecx;");
    asm("loc_65C4313: push %ecx;");
    asm("loc_65C4314: calll *_import_65C7028;");
    asm("loc_65C431A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C4320() // ?Add@CDPMsgList@@QAEXPAVCDPMessage@@@Z
{
    __DEBUG_ASM(65C4320);
    // chunk 0x65C4320 _sub_65C4320
    asm("loc_65C4320: push %ebp;");
    asm("loc_65C4321: push %edi;");
    asm("loc_65C4322: mov %ecx,%edi;");
    asm("loc_65C4324: lea 0x10(%edi),%ebp;");
    asm("loc_65C4327: push %ebp;");
    asm("loc_65C4328: calll *_import_65C7024;");
    asm("loc_65C432E: mov 0xC(%edi),%eax;");
    asm("loc_65C4331: test %eax,%eax;");
    asm("loc_65C4333: jne loc_65C433F;");
    asm("loc_65C4335: mov 0x28(%edi),%eax;");
    asm("loc_65C4338: push %eax;");
    asm("loc_65C4339: calll *_import_65C702C;");
    asm("loc_65C433F: push %ebx;");
    asm("loc_65C4340: push %esi;");
    asm("loc_65C4341: mov 8(%edi),%esi;");
    asm("loc_65C4344: mov 4(%esi),%ebx;");
    asm("loc_65C4347: push $0xC;");
    asm("loc_65C4349: call _sub_65C6A66;");
    asm("loc_65C434E: add $4,%esp;");
    asm("loc_65C4351: test %ebx,%ebx;");
    asm("loc_65C4353: mov %esi,(%eax);");
    asm("loc_65C4355: jne loc_65C4359;");
    asm("loc_65C4357: mov %eax,%ebx;");
    asm("loc_65C4359: mov %ebx,4(%eax);");
    asm("loc_65C435C: mov %eax,4(%esi);");
    asm("loc_65C435F: mov 4(%eax),%ecx;");
    asm("loc_65C4362: mov %eax,(%ecx);");
    asm("loc_65C4364: add $8,%eax;");
    asm("loc_65C4367: test %eax,%eax;");
    asm("loc_65C4369: pop %esi;");
    asm("loc_65C436A: pop %ebx;");
    asm("loc_65C436B: je loc_65C4373;");
    asm("loc_65C436D: mov 0xC(%esp),%edx;");
    asm("loc_65C4371: mov %edx,(%eax);");
    asm("loc_65C4373: mov 0xC(%edi),%ecx;");
    asm("loc_65C4376: inc %ecx;");
    asm("loc_65C4377: push %ebp;");
    asm("loc_65C4378: mov %ecx,0xC(%edi);");
    asm("loc_65C437B: calll *_import_65C7028;");
    asm("loc_65C4381: pop %edi;");
    asm("loc_65C4382: pop %ebp;");
    asm("loc_65C4383: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C4390() // ?GetNextMsg@CDPMsgList@@QAEPAVCDPMessage@@XZ
{
    __DEBUG_ASM(65C4390);
    // chunk 0x65C4390 _sub_65C4390
    asm("loc_65C4390: push %ebx;");
    asm("loc_65C4391: push %esi;");
    asm("loc_65C4392: mov %ecx,%esi;");
    asm("loc_65C4394: push %edi;");
    asm("loc_65C4395: lea 0x10(%esi),%ebx;");
    asm("loc_65C4398: push %ebx;");
    asm("loc_65C4399: xor %edi,%edi;");
    asm("loc_65C439B: calll *_import_65C7024;");
    asm("loc_65C43A1: mov 0xC(%esi),%eax;");
    asm("loc_65C43A4: test %eax,%eax;");
    asm("loc_65C43A6: je loc_65C43E3;");
    asm("loc_65C43A8: mov 8(%esi),%eax;");
    asm("loc_65C43AB: mov (%eax),%ecx;");
    asm("loc_65C43AD: mov 8(%ecx),%edi;");
    asm("loc_65C43B0: mov %eax,%edx;");
    asm("loc_65C43B2: mov (%edx),%eax;");
    asm("loc_65C43B4: mov 4(%eax),%ecx;");
    asm("loc_65C43B7: mov (%eax),%edx;");
    asm("loc_65C43B9: mov %edx,(%ecx);");
    asm("loc_65C43BB: mov (%eax),%ecx;");
    asm("loc_65C43BD: mov 4(%eax),%edx;");
    asm("loc_65C43C0: push %eax;");
    asm("loc_65C43C1: mov %edx,4(%ecx);");
    asm("loc_65C43C4: call _sub_65C6A60;");
    asm("loc_65C43C9: mov 0xC(%esi),%ecx;");
    asm("loc_65C43CC: add $4,%esp;");
    asm("loc_65C43CF: dec %ecx;");
    asm("loc_65C43D0: mov %ecx,%eax;");
    asm("loc_65C43D2: test %eax,%eax;");
    asm("loc_65C43D4: mov %ecx,0xC(%esi);");
    asm("loc_65C43D7: jne loc_65C43E3;");
    asm("loc_65C43D9: mov 0x28(%esi),%eax;");
    asm("loc_65C43DC: push %eax;");
    asm("loc_65C43DD: calll *_import_65C7030;");
    asm("loc_65C43E3: push %ebx;");
    asm("loc_65C43E4: calll *_import_65C7028;");
    asm("loc_65C43EA: mov %edi,%eax;");
    asm("loc_65C43EC: pop %edi;");
    asm("loc_65C43ED: pop %esi;");
    asm("loc_65C43EE: pop %ebx;");
    asm("loc_65C43EF: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C43F0() // ?PeekNextMsg@CDPMsgList@@QAEPAVCDPMessage@@XZ
{
    __DEBUG_ASM(65C43F0);
    // chunk 0x65C43F0 _sub_65C43F0
    asm("loc_65C43F0: push %ebx;");
    asm("loc_65C43F1: push %esi;");
    asm("loc_65C43F2: push %edi;");
    asm("loc_65C43F3: mov %ecx,%esi;");
    asm("loc_65C43F5: lea 0x10(%esi),%edi;");
    asm("loc_65C43F8: push %edi;");
    asm("loc_65C43F9: xor %ebx,%ebx;");
    asm("loc_65C43FB: calll *_import_65C7024;");
    asm("loc_65C4401: mov 0xC(%esi),%eax;");
    asm("loc_65C4404: test %eax,%eax;");
    asm("loc_65C4406: je loc_65C4410;");
    asm("loc_65C4408: mov 8(%esi),%eax;");
    asm("loc_65C440B: mov (%eax),%ecx;");
    asm("loc_65C440D: mov 8(%ecx),%ebx;");
    asm("loc_65C4410: push %edi;");
    asm("loc_65C4411: calll *_import_65C7028;");
    asm("loc_65C4417: pop %edi;");
    asm("loc_65C4418: pop %esi;");
    asm("loc_65C4419: mov %ebx,%eax;");
    asm("loc_65C441B: pop %ebx;");
    asm("loc_65C441C: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C4420() // ?ExtractMsgs@CDPMsgList@@QAEXKAAV1@@Z
{
    __DEBUG_ASM(65C4420);
    // chunk 0x65C4420 _sub_65C4420
    asm("loc_65C4420: sub $0xC,%esp;");
    asm("loc_65C4423: push %ebx;");
    asm("loc_65C4424: push %ebp;");
    asm("loc_65C4425: push %esi;");
    asm("loc_65C4426: mov _import_65C7024,%esi;");
    asm("loc_65C442C: push %edi;");
    asm("loc_65C442D: mov 0x24(%esp),%edi;");
    asm("loc_65C4431: lea 0x10(%edi),%ebp;");
    asm("loc_65C4434: push %ebp;");
    asm("loc_65C4435: mov %ecx,%ebx;");
    asm("loc_65C4437: call *%esi;");
    asm("loc_65C4439: lea 0x10(%ebx),%eax;");
    asm("loc_65C443C: push %eax;");
    asm("loc_65C443D: mov %eax,0x18(%esp);");
    asm("loc_65C4441: call *%esi;");
    asm("loc_65C4443: mov 8(%ebx),%eax;");
    asm("loc_65C4446: mov (%eax),%esi;");
    asm("loc_65C4448: cmp %eax,%esi;");
    asm("loc_65C444A: je loc_65C44C3;");
    asm("loc_65C444C: lea (%esp),%esp;");
    asm("loc_65C4450: mov 8(%esi),%eax;");
    asm("loc_65C4453: mov 0x20(%esp),%ecx;");
    asm("loc_65C4457: cmp %ecx,0x14(%eax);");
    asm("loc_65C445A: jne loc_65C44BC;");
    asm("loc_65C445C: push %ebp;");
    asm("loc_65C445D: mov %eax,0x14(%esp);");
    asm("loc_65C4461: calll *_import_65C7024;");
    asm("loc_65C4467: mov 0xC(%edi),%eax;");
    asm("loc_65C446A: test %eax,%eax;");
    asm("loc_65C446C: jne loc_65C4478;");
    asm("loc_65C446E: mov 0x28(%edi),%edx;");
    asm("loc_65C4471: push %edx;");
    asm("loc_65C4472: calll *_import_65C702C;");
    asm("loc_65C4478: mov 8(%edi),%eax;");
    asm("loc_65C447B: lea 4(%edi),%ecx;");
    asm("loc_65C447E: lea 0x10(%esp),%edx;");
    asm("loc_65C4482: push %edx;");
    asm("loc_65C4483: push %eax;");
    asm("loc_65C4484: lea 0x20(%esp),%eax;");
    asm("loc_65C4488: push %eax;");
    asm("loc_65C4489: call _sub_65C45E0;");
    asm("loc_65C448E: push %ebp;");
    asm("loc_65C448F: calll *_import_65C7028;");
    asm("loc_65C4495: mov (%esi),%edi;");
    asm("loc_65C4497: mov 4(%esi),%ecx;");
    asm("loc_65C449A: mov %edi,(%ecx);");
    asm("loc_65C449C: mov (%esi),%edx;");
    asm("loc_65C449E: mov 4(%esi),%eax;");
    asm("loc_65C44A1: push %esi;");
    asm("loc_65C44A2: mov %eax,4(%edx);");
    asm("loc_65C44A5: call _sub_65C6A60;");
    asm("loc_65C44AA: mov 0xC(%ebx),%eax;");
    asm("loc_65C44AD: add $4,%esp;");
    asm("loc_65C44B0: dec %eax;");
    asm("loc_65C44B1: mov %edi,%esi;");
    asm("loc_65C44B3: mov 0x24(%esp),%edi;");
    asm("loc_65C44B7: mov %eax,0xC(%ebx);");
    asm("loc_65C44BA: jmp loc_65C44BE;");
    asm("loc_65C44BC: mov (%esi),%esi;");
    asm("loc_65C44BE: cmp 8(%ebx),%esi;");
    asm("loc_65C44C1: jne loc_65C4450;");
    asm("loc_65C44C3: mov 0x14(%esp),%ecx;");
    asm("loc_65C44C7: mov _import_65C7028,%esi;");
    asm("loc_65C44CD: push %ecx;");
    asm("loc_65C44CE: call *%esi;");
    asm("loc_65C44D0: push %ebp;");
    asm("loc_65C44D1: call *%esi;");
    asm("loc_65C44D3: pop %edi;");
    asm("loc_65C44D4: pop %esi;");
    asm("loc_65C44D5: pop %ebp;");
    asm("loc_65C44D6: pop %ebx;");
    asm("loc_65C44D7: add $0xC,%esp;");
    asm("loc_65C44DA: ret $8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C44E0() // ?CopyList@CDPMsgList@@QAEXAAV1@@Z
{
    __DEBUG_ASM(65C44E0);
    // chunk 0x65C44E0 _sub_65C44E0
    asm("loc_65C44E0: sub $8,%esp;");
    asm("loc_65C44E3: push %ebx;");
    asm("loc_65C44E4: push %ebp;");
    asm("loc_65C44E5: mov 0x14(%esp),%ebp;");
    asm("loc_65C44E9: push %esi;");
    asm("loc_65C44EA: mov _import_65C7024,%esi;");
    asm("loc_65C44F0: lea 0x10(%ebp),%eax;");
    asm("loc_65C44F3: push %edi;");
    asm("loc_65C44F4: push %eax;");
    asm("loc_65C44F5: mov %ecx,%ebx;");
    asm("loc_65C44F7: mov %eax,0x14(%esp);");
    asm("loc_65C44FB: call *%esi;");
    asm("loc_65C44FD: lea 0x10(%ebx),%edi;");
    asm("loc_65C4500: push %edi;");
    asm("loc_65C4501: call *%esi;");
    asm("loc_65C4503: mov 8(%ebp),%eax;");
    asm("loc_65C4506: mov (%eax),%esi;");
    asm("loc_65C4508: cmp %eax,%esi;");
    asm("loc_65C450A: je loc_65C4553;");
    asm("loc_65C450C: lea (%esp),%esp;");
    asm("loc_65C4510: mov 8(%esi),%eax;");
    asm("loc_65C4513: push %edi;");
    asm("loc_65C4514: mov %eax,0x20(%esp);");
    asm("loc_65C4518: calll *_import_65C7024;");
    asm("loc_65C451E: mov 0xC(%ebx),%eax;");
    asm("loc_65C4521: test %eax,%eax;");
    asm("loc_65C4523: jne loc_65C452F;");
    asm("loc_65C4525: mov 0x28(%ebx),%ecx;");
    asm("loc_65C4528: push %ecx;");
    asm("loc_65C4529: calll *_import_65C702C;");
    asm("loc_65C452F: mov 8(%ebx),%eax;");
    asm("loc_65C4532: lea 4(%ebx),%ecx;");
    asm("loc_65C4535: lea 0x1C(%esp),%edx;");
    asm("loc_65C4539: push %edx;");
    asm("loc_65C453A: push %eax;");
    asm("loc_65C453B: lea 0x1C(%esp),%eax;");
    asm("loc_65C453F: push %eax;");
    asm("loc_65C4540: call _sub_65C45E0;");
    asm("loc_65C4545: push %edi;");
    asm("loc_65C4546: calll *_import_65C7028;");
    asm("loc_65C454C: mov (%esi),%esi;");
    asm("loc_65C454E: cmp 8(%ebp),%esi;");
    asm("loc_65C4551: jne loc_65C4510;");
    asm("loc_65C4553: mov 8(%ebp),%ebx;");
    asm("loc_65C4556: mov (%ebx),%esi;");
    asm("loc_65C4558: cmp %ebx,%esi;");
    asm("loc_65C455A: je loc_65C4576;");
    asm("loc_65C455C: lea (%esp),%esp;");
    asm("loc_65C4560: mov %esi,%eax;");
    asm("loc_65C4562: mov (%esi),%esi;");
    asm("loc_65C4564: push %eax;");
    asm("loc_65C4565: lea 0x20(%esp),%ecx;");
    asm("loc_65C4569: push %ecx;");
    asm("loc_65C456A: lea 4(%ebp),%ecx;");
    asm("loc_65C456D: call _sub_65C5590;");
    asm("loc_65C4572: cmp %ebx,%esi;");
    asm("loc_65C4574: jne loc_65C4560;");
    asm("loc_65C4576: mov 0x28(%ebp),%edx;");
    asm("loc_65C4579: push %edx;");
    asm("loc_65C457A: calll *_import_65C7030;");
    asm("loc_65C4580: mov _import_65C7028,%esi;");
    asm("loc_65C4586: push %edi;");
    asm("loc_65C4587: call *%esi;");
    asm("loc_65C4589: mov 0x10(%esp),%eax;");
    asm("loc_65C458D: push %eax;");
    asm("loc_65C458E: call *%esi;");
    asm("loc_65C4590: pop %edi;");
    asm("loc_65C4591: pop %esi;");
    asm("loc_65C4592: pop %ebp;");
    asm("loc_65C4593: pop %ebx;");
    asm("loc_65C4594: add $8,%esp;");
    asm("loc_65C4597: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C45A0() // ?WaitForMsg@CDPMsgList@@QAEXK@Z
{
    __DEBUG_ASM(65C45A0);
    // chunk 0x65C45A0 _sub_65C45A0
    asm("loc_65C45A0: mov 4(%esp),%eax;");
    asm("loc_65C45A4: mov 0x28(%ecx),%ecx;");
    asm("loc_65C45A7: push %eax;");
    asm("loc_65C45A8: push %ecx;");
    asm("loc_65C45A9: calll *_import_65C7034;");
    asm("loc_65C45AF: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C45C0() // ?SetEmptyEvent@CDPMsgList@@QAEXXZ
{
    __DEBUG_ASM(65C45C0);
    // chunk 0x65C45C0 _sub_65C45C0
    asm("loc_65C45C0: mov 0x28(%ecx),%eax;");
    asm("loc_65C45C3: push %eax;");
    asm("loc_65C45C4: calll *_import_65C702C;");
    asm("loc_65C45CA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C45D0() // _sub_65C45D0
{
    __DEBUG_ASM(65C45D0);
    // chunk 0x65C45D0 _sub_65C45D0
    asm("loc_65C45D0: mov (%ecx),%edx;");
    asm("loc_65C45D2: mov (%edx),%eax;");
    asm("loc_65C45D4: mov %eax,(%ecx);");
    asm("loc_65C45D6: mov 4(%esp),%eax;");
    asm("loc_65C45DA: mov %edx,(%eax);");
    asm("loc_65C45DC: ret $8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C45E0() // _sub_65C45E0
{
    __DEBUG_ASM(65C45E0);
    // chunk 0x65C45E0 _sub_65C45E0
    asm("loc_65C45E0: push %ebx;");
    asm("loc_65C45E1: push %esi;");
    asm("loc_65C45E2: mov 0x10(%esp),%esi;");
    asm("loc_65C45E6: push %edi;");
    asm("loc_65C45E7: mov 4(%esi),%edi;");
    asm("loc_65C45EA: push $0xC;");
    asm("loc_65C45EC: mov %ecx,%ebx;");
    asm("loc_65C45EE: call _sub_65C6A66;");
    asm("loc_65C45F3: add $4,%esp;");
    asm("loc_65C45F6: test %edi,%edi;");
    asm("loc_65C45F8: mov %esi,(%eax);");
    asm("loc_65C45FA: jne loc_65C45FE;");
    asm("loc_65C45FC: mov %eax,%edi;");
    asm("loc_65C45FE: mov %edi,4(%eax);");
    asm("loc_65C4601: mov %eax,4(%esi);");
    asm("loc_65C4604: mov 4(%eax),%ecx;");
    asm("loc_65C4607: mov %eax,(%ecx);");
    asm("loc_65C4609: lea 8(%eax),%ecx;");
    asm("loc_65C460C: test %ecx,%ecx;");
    asm("loc_65C460E: je loc_65C4618;");
    asm("loc_65C4610: mov 0x18(%esp),%edx;");
    asm("loc_65C4614: mov (%edx),%edx;");
    asm("loc_65C4616: mov %edx,(%ecx);");
    asm("loc_65C4618: incl 8(%ebx);");
    asm("loc_65C461B: mov 0x10(%esp),%ecx;");
    asm("loc_65C461F: pop %edi;");
    asm("loc_65C4620: pop %esi;");
    asm("loc_65C4621: mov %eax,(%ecx);");
    asm("loc_65C4623: mov %ecx,%eax;");
    asm("loc_65C4625: pop %ebx;");
    asm("loc_65C4626: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C4630() // _sub_65C4630
{
    __DEBUG_ASM(65C4630);
    // chunk 0x65C4630 _sub_65C4630
    asm("loc_65C4630: calll *_import_65C70D8;");
    asm("loc_65C4636: mov %eax,_data_65CA254;");
    asm("loc_65C463B: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C4640() // _sub_65C4640
{
    __DEBUG_ASM(65C4640);
    // chunk 0x65C4640 _sub_65C4640
    asm("loc_65C4640: mov $_data_65CA258,%ecx;");
    asm("loc_65C4645: call _sub_65C5640;");
    asm("loc_65C464A: push $_sub_65C4660;");
    asm("loc_65C464F: call _sub_65C6AAC;");
    asm("loc_65C4654: pop %ecx;");
    asm("loc_65C4655: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C4660() // _unknown_libname_3
{
    __DEBUG_ASM(65C4660);
    // chunk 0x65C4660 _sub_65C4660
    asm("loc_65C4660: mov $_data_65CA258,%ecx;");
    asm("loc_65C4665: jmp _sub_65C5680;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C4670() // ?HandleDPServerMsg@CDPServer@@KGJPAXK0@Z
{
    asm("jmp dgb_65C4670;"); // jumptable skip
    asm(".long _jmp_65C4904;"); // jumptable address
    __DEBUG_ASM(65C4670);
    // chunk 0x65C4670 _sub_65C4670
    asm("loc_65C4670: push $0xFFFFFFFF;");
    asm("loc_65C4672: push $_sub_65C6EBC;");
    asm("loc_65C4677: mov %fs:0,%eax;");
    asm("loc_65C467D: push %eax;");
    asm("loc_65C467E: mov %esp,%fs:0;");
    asm("loc_65C4685: push %ecx;");
    asm("loc_65C4686: mov 0x18(%esp),%eax;");
    asm("loc_65C468A: push %ebx;");
    asm("loc_65C468B: xor %ebx,%ebx;");
    asm("loc_65C468D: add $0xFFF9,%eax;");
    asm("loc_65C4692: cmp $0xD,%eax;");
    asm("loc_65C4695: push %esi;");
    asm("loc_65C4696: push %edi;");
    asm("loc_65C4697: mov %ebx,0xC(%esp);");
    asm("loc_65C469B: ja loc_65C48EE;");
    asm("loc_65C46A1: movzbl _data_65C4924(%eax),%ecx;");
    asm("loc_65C46A8: jmpl *_jmp_65C4904(,%ecx,4);");
    asm("loc_65C46AF: mov 0x28(%esp),%eax;");
    asm("loc_65C46B3: mov 8(%eax),%esi;");
    asm("loc_65C46B6: test %esi,%esi;");
    asm("loc_65C46B8: jne loc_65C46CC;");
    asm("loc_65C46BA: mov 4(%eax),%edx;");
    asm("loc_65C46BD: mov 0x20(%esp),%eax;");
    asm("loc_65C46C1: mov %edx,0x568(%eax);");
    asm("loc_65C46C7: jmp loc_65C48EE;");
    asm("loc_65C46CC: mov 4(%eax),%ecx;");
    asm("loc_65C46CF: push $0x20;");
    asm("loc_65C46D1: mov %ecx,8(%esi);");
    asm("loc_65C46D4: call _sub_65C6A66;");
    asm("loc_65C46D9: add $4,%esp;");
    asm("loc_65C46DC: mov %eax,0x28(%esp);");
    asm("loc_65C46E0: test %eax,%eax;");
    asm("loc_65C46E2: movl $0,0x18(%esp);");
    asm("loc_65C46EA: je loc_65C46FC;");
    asm("loc_65C46EC: mov %eax,%ecx;");
    asm("loc_65C46EE: call _sub_65C41C0;");
    asm("loc_65C46F3: movl $1,4(%eax);");
    asm("loc_65C46FA: jmp loc_65C474D;");
    asm("loc_65C46FC: xor %eax,%eax;");
    asm("loc_65C46FE: movl $1,4(%eax);");
    asm("loc_65C4705: jmp loc_65C474D;");
    asm("loc_65C4707: mov 0x28(%esp),%eax;");
    asm("loc_65C470B: mov 8(%eax),%esi;");
    asm("loc_65C470E: test %esi,%esi;");
    asm("loc_65C4710: jne loc_65C4721;");
    asm("loc_65C4712: mov 0x20(%esp),%ecx;");
    asm("loc_65C4716: mov %esi,0x568(%ecx);");
    asm("loc_65C471C: jmp loc_65C48EE;");
    asm("loc_65C4721: push $0x20;");
    asm("loc_65C4723: call _sub_65C6A66;");
    asm("loc_65C4728: add $4,%esp;");
    asm("loc_65C472B: mov %eax,0x28(%esp);");
    asm("loc_65C472F: test %eax,%eax;");
    asm("loc_65C4731: movl $1,0x18(%esp);");
    asm("loc_65C4739: je loc_65C4744;");
    asm("loc_65C473B: mov %eax,%ecx;");
    asm("loc_65C473D: call _sub_65C41C0;");
    asm("loc_65C4742: jmp loc_65C4746;");
    asm("loc_65C4744: xor %eax,%eax;");
    asm("loc_65C4746: movl $3,4(%eax);");
    asm("loc_65C474D: mov 0x20(%esp),%edx;");
    asm("loc_65C4751: push %eax;");
    asm("loc_65C4752: lea 0x56C(%edx),%ecx;");
    asm("loc_65C4758: movl $0xFFFFFFFF,0x1C(%esp);");
    asm("loc_65C4760: mov %esi,0x18(%eax);");
    asm("loc_65C4763: call _sub_65C4320;");
    asm("loc_65C4768: jmp loc_65C48EE;");
    asm("loc_65C476D: mov 0x20(%esp),%esi;");
    asm("loc_65C4771: mov (%esi),%eax;");
    asm("loc_65C4773: mov %esi,%ecx;");
    asm("loc_65C4775: calll *4(%eax);");
    asm("loc_65C4778: mov 0x28(%esp),%ecx;");
    asm("loc_65C477C: mov %eax,%edi;");
    asm("loc_65C477E: mov %esi,4(%edi);");
    asm("loc_65C4781: push $_data_65CA268;");
    asm("loc_65C4786: mov %edi,0x18(%ecx);");
    asm("loc_65C4789: calll *_import_65C7024;");
    asm("loc_65C478F: mov _data_65CA260,%esi;");
    asm("loc_65C4795: mov 4(%esi),%ebx;");
    asm("loc_65C4798: push $0xC;");
    asm("loc_65C479A: call _sub_65C6A66;");
    asm("loc_65C479F: add $4,%esp;");
    asm("loc_65C47A2: test %ebx,%ebx;");
    asm("loc_65C47A4: mov %esi,(%eax);");
    asm("loc_65C47A6: jne loc_65C47AA;");
    asm("loc_65C47A8: mov %eax,%ebx;");
    asm("loc_65C47AA: mov %ebx,4(%eax);");
    asm("loc_65C47AD: mov %eax,4(%esi);");
    asm("loc_65C47B0: mov 4(%eax),%edx;");
    asm("loc_65C47B3: mov %eax,(%edx);");
    asm("loc_65C47B5: add $8,%eax;");
    asm("loc_65C47B8: test %eax,%eax;");
    asm("loc_65C47BA: je loc_65C47BE;");
    asm("loc_65C47BC: mov %edi,(%eax);");
    asm("loc_65C47BE: mov _data_65CA264,%ecx;");
    asm("loc_65C47C4: inc %ecx;");
    asm("loc_65C47C5: push $_data_65CA268;");
    asm("loc_65C47CA: mov %ecx,_data_65CA264;");
    asm("loc_65C47D0: calll *_import_65C7028;");
    asm("loc_65C47D6: mov 0xC(%esp),%ebx;");
    asm("loc_65C47DA: jmp loc_65C48EE;");
    asm("loc_65C47DF: mov 0x28(%esp),%eax;");
    asm("loc_65C47E3: mov 4(%eax),%esi;");
    asm("loc_65C47E6: test %esi,%esi;");
    asm("loc_65C47E8: je loc_65C48EE;");
    asm("loc_65C47EE: push $0x20;");
    asm("loc_65C47F0: call _sub_65C6A66;");
    asm("loc_65C47F5: add $4,%esp;");
    asm("loc_65C47F8: mov %eax,0x28(%esp);");
    asm("loc_65C47FC: test %eax,%eax;");
    asm("loc_65C47FE: mov $2,%edi;");
    asm("loc_65C4803: mov %edi,0x18(%esp);");
    asm("loc_65C4807: je loc_65C4812;");
    asm("loc_65C4809: mov %eax,%ecx;");
    asm("loc_65C480B: call _sub_65C41C0;");
    asm("loc_65C4810: jmp loc_65C4814;");
    asm("loc_65C4812: xor %eax,%eax;");
    asm("loc_65C4814: mov 0x20(%esp),%ecx;");
    asm("loc_65C4818: push %eax;");
    asm("loc_65C4819: add $0x56C,%ecx;");
    asm("loc_65C481F: movl $0xFFFFFFFF,0x1C(%esp);");
    asm("loc_65C4827: mov %esi,0x18(%eax);");
    asm("loc_65C482A: mov %edi,4(%eax);");
    asm("loc_65C482D: call _sub_65C4320;");
    asm("loc_65C4832: jmp loc_65C48EE;");
    asm("loc_65C4837: mov 0x28(%esp),%esi;");
    asm("loc_65C483B: mov 8(%esi),%edi;");
    asm("loc_65C483E: test %edi,%edi;");
    asm("loc_65C4840: je loc_65C48EE;");
    asm("loc_65C4846: push $0x20;");
    asm("loc_65C4848: call _sub_65C6A66;");
    asm("loc_65C484D: add $4,%esp;");
    asm("loc_65C4850: mov %eax,0x28(%esp);");
    asm("loc_65C4854: test %eax,%eax;");
    asm("loc_65C4856: movl $3,0x18(%esp);");
    asm("loc_65C485E: je loc_65C4869;");
    asm("loc_65C4860: mov %eax,%ecx;");
    asm("loc_65C4862: call _sub_65C41C0;");
    asm("loc_65C4867: jmp loc_65C486B;");
    asm("loc_65C4869: xor %eax,%eax;");
    asm("loc_65C486B: mov 4(%esi),%edx;");
    asm("loc_65C486E: mov %edx,0x14(%eax);");
    asm("loc_65C4871: mov 0x10(%esi),%ecx;");
    asm("loc_65C4874: mov %ecx,0xC(%eax);");
    asm("loc_65C4877: mov 0xC(%esi),%edx;");
    asm("loc_65C487A: mov %edx,8(%eax);");
    asm("loc_65C487D: mov 0x14(%esi),%ecx;");
    asm("loc_65C4880: mov 0x20(%esp),%edx;");
    asm("loc_65C4884: mov %ecx,0x10(%eax);");
    asm("loc_65C4887: push %eax;");
    asm("loc_65C4888: lea 0x56C(%edx),%ecx;");
    asm("loc_65C488E: movl $0xFFFFFFFF,0x1C(%esp);");
    asm("loc_65C4896: mov %edi,0x18(%eax);");
    asm("loc_65C4899: call _sub_65C4320;");
    asm("loc_65C489E: calll *_import_65C70D8;");
    asm("loc_65C48A4: mov %eax,_data_65CA254;");
    asm("loc_65C48A9: mov $0x15800E,%ebx;");
    asm("loc_65C48AE: jmp loc_65C48EE;");
    asm("loc_65C48B0: mov 0x20(%esp),%edx;");
    asm("loc_65C48B4: mov 0x998(%edx),%eax;");
    asm("loc_65C48BA: test %eax,%eax;");
    asm("loc_65C48BC: je loc_65C48C6;");
    asm("loc_65C48BE: lea 0x598(%edx),%eax;");
    asm("loc_65C48C4: jmp loc_65C48C8;");
    asm("loc_65C48C6: xor %eax,%eax;");
    asm("loc_65C48C8: mov 0x28(%esp),%ecx;");
    asm("loc_65C48CC: mov %eax,0x18(%ecx);");
    asm("loc_65C48CF: mov 0x998(%edx),%eax;");
    asm("loc_65C48D5: mov %eax,0x1C(%ecx);");
    asm("loc_65C48D8: jmp loc_65C48EE;");
    asm("loc_65C48DA: mov 0x28(%esp),%eax;");
    asm("loc_65C48DE: mov 8(%eax),%ecx;");
    asm("loc_65C48E1: test %ecx,%ecx;");
    asm("loc_65C48E3: je loc_65C48EE;");
    asm("loc_65C48E5: mov 0x10(%eax),%edx;");
    asm("loc_65C48E8: push %edx;");
    asm("loc_65C48E9: call _sub_65C3AF0;");
    asm("loc_65C48EE: mov 0x10(%esp),%ecx;");
    asm("loc_65C48F2: pop %edi;");
    asm("loc_65C48F3: pop %esi;");
    asm("loc_65C48F4: mov %ebx,%eax;");
    asm("loc_65C48F6: pop %ebx;");
    asm("loc_65C48F7: mov %ecx,%fs:0;");
    asm("loc_65C48FE: add $0x10,%esp;");
    asm("loc_65C4901: ret $0xC;");
    asm("int3;"); // unreachable
    asm("_jmp_65C4904: .long loc_65C46AF;");
    asm(".long loc_65C4707;");
    asm(".long loc_65C48B0;");
    asm(".long loc_65C476D;");
    asm(".long loc_65C47DF;");
    asm(".long loc_65C4837;");
    asm(".long loc_65C48DA;");
    asm(".long loc_65C48EE;");
    asm(".long 0xCCCCCCCC;");
}
FIXUP_JUMP_TABLE(_sub_65C4670);
_naked _weak void _sub_65C4940() // ?DispatchMsgs@CDPServer@@QAEXXZ
{
    asm("jmp dgb_65C4940;"); // jumptable skip
    asm(".long _jmp_65C4BE0;"); // jumptable address
    __DEBUG_ASM(65C4940);
    // chunk 0x65C4940 _sub_65C4940
    asm("loc_65C4940: push $0xFFFFFFFF;");
    asm("loc_65C4942: push $_sub_65C6ED8;");
    asm("loc_65C4947: mov %fs:0,%eax;");
    asm("loc_65C494D: push %eax;");
    asm("loc_65C494E: mov %esp,%fs:0;");
    asm("loc_65C4955: sub $0x58,%esp;");
    asm("loc_65C4958: push %esi;");
    asm("loc_65C4959: mov %ecx,%esi;");
    asm("loc_65C495B: mov 0x564(%esi),%al;");
    asm("loc_65C4961: test %al,%al;");
    asm("loc_65C4963: mov %esi,0x10(%esp);");
    asm("loc_65C4967: je loc_65C4BCE;");
    asm("loc_65C496D: push %ebp;");
    asm("loc_65C496E: lea 0x34(%esp),%ecx;");
    asm("loc_65C4972: call _sub_65C41F0;");
    asm("loc_65C4977: lea 0x34(%esp),%ecx;");
    asm("loc_65C497B: movl $0,0x68(%esp);");
    asm("loc_65C4983: call _sub_65C4300;");
    asm("loc_65C4988: add $0x56C,%esi;");
    asm("loc_65C498E: push %esi;");
    asm("loc_65C498F: lea 0x38(%esp),%ecx;");
    asm("loc_65C4993: call _sub_65C44E0;");
    asm("loc_65C4998: lea 0x34(%esp),%ecx;");
    asm("loc_65C499C: call _sub_65C4390;");
    asm("loc_65C49A1: mov %eax,%ebp;");
    asm("loc_65C49A3: test %ebp,%ebp;");
    asm("loc_65C49A5: je loc_65C4B7C;");
    asm("loc_65C49AB: push %edi;");
    asm("loc_65C49AC: lea (%esp),%esp;");
    asm("loc_65C49B0: mov 4(%ebp),%eax;");
    asm("loc_65C49B3: cmp $3,%eax;");
    asm("loc_65C49B6: mov 0x18(%ebp),%esi;");
    asm("loc_65C49B9: ja loc_65C4B5F;");
    asm("loc_65C49BF: jmpl *_jmp_65C4BE0(,%eax,4);");
    asm("loc_65C49C6: mov 0xC(%ebp),%eax;");
    asm("loc_65C49C9: cmp $1,%eax;");
    asm("loc_65C49CC: jne loc_65C4A45;");
    asm("loc_65C49CE: mov %esi,%ecx;");
    asm("loc_65C49D0: call _sub_65C3B00;");
    asm("loc_65C49D5: fcoml _data_65C7500;");
    asm("loc_65C49DB: fnstsw %ax;");
    asm("loc_65C49DD: test $0x41,%ah;");
    asm("loc_65C49E0: jne loc_65C49EA;");
    asm("loc_65C49E2: fstp %st(0);");
    asm("loc_65C49E4: fldl _data_65C7500;");
    asm("loc_65C49EA: fmull _data_65C74F8;");
    asm("loc_65C49F0: call _sub_65C6BE4;");
    asm("loc_65C49F5: mov 0x18(%esp),%edx;");
    asm("loc_65C49F9: or $0xFF,%cl;");
    asm("loc_65C49FC: sub %al,%cl;");
    asm("loc_65C49FE: mov 4(%edx),%eax;");
    asm("loc_65C4A01: test %eax,%eax;");
    asm("loc_65C4A03: mov %cl,0xF(%esp);");
    asm("loc_65C4A07: je loc_65C4A50;");
    asm("loc_65C4A09: test %esi,%esi;");
    asm("loc_65C4A0B: je loc_65C4A50;");
    asm("loc_65C4A0D: push $0x108;");
    asm("loc_65C4A12: lea 0x13(%esp),%ecx;");
    asm("loc_65C4A16: mov %ecx,0x38(%esp);");
    asm("loc_65C4A1A: lea 0x20(%esp),%ecx;");
    asm("loc_65C4A1E: push %ecx;");
    asm("loc_65C4A1F: push %esi;");
    asm("loc_65C4A20: push $0;");
    asm("loc_65C4A22: push $1;");
    asm("loc_65C4A24: lea 0x44(%esp),%ecx;");
    asm("loc_65C4A28: push %ecx;");
    asm("loc_65C4A29: mov 8(%esi),%ecx;");
    asm("loc_65C4A2C: push %ecx;");
    asm("loc_65C4A2D: movl $0,0x38(%esp);");
    asm("loc_65C4A35: movl $1,0x4C(%esp);");
    asm("loc_65C4A3D: mov (%eax),%edx;");
    asm("loc_65C4A3F: push %eax;");
    asm("loc_65C4A40: calll *0x38(%edx);");
    asm("loc_65C4A43: jmp loc_65C4A50;");
    asm("loc_65C4A45: mov 8(%ebp),%ecx;");
    asm("loc_65C4A48: mov (%esi),%edx;");
    asm("loc_65C4A4A: push %eax;");
    asm("loc_65C4A4B: push %ecx;");
    asm("loc_65C4A4C: mov %esi,%ecx;");
    asm("loc_65C4A4E: calll *(%edx);");
    asm("loc_65C4A50: mov 0x10(%ebp),%ecx;");
    asm("loc_65C4A53: test %ecx,%ecx;");
    asm("loc_65C4A55: je loc_65C4B5F;");
    asm("loc_65C4A5B: mov 0x18(%esp),%eax;");
    asm("loc_65C4A5F: mov 4(%eax),%eax;");
    asm("loc_65C4A62: mov (%eax),%edx;");
    asm("loc_65C4A64: push $0;");
    asm("loc_65C4A66: push %ecx;");
    asm("loc_65C4A67: push %eax;");
    asm("loc_65C4A68: calll *0x64(%edx);");
    asm("loc_65C4A6B: jmp loc_65C4B5F;");
    asm("loc_65C4A70: mov (%esi),%eax;");
    asm("loc_65C4A72: push $0;");
    asm("loc_65C4A74: mov %esi,%ecx;");
    asm("loc_65C4A76: calll *4(%eax);");
    asm("loc_65C4A79: jmp loc_65C4B5F;");
    asm("loc_65C4A7E: mov (%esi),%edx;");
    asm("loc_65C4A80: mov %esi,%ecx;");
    asm("loc_65C4A82: calll *8(%edx);");
    asm("loc_65C4A85: push $_data_65CA268;");
    asm("loc_65C4A8A: calll *_import_65C7024;");
    asm("loc_65C4A90: mov _data_65CA260,%eax;");
    asm("loc_65C4A95: mov %eax,%edi;");
    asm("loc_65C4A97: mov (%eax),%eax;");
    asm("loc_65C4A99: cmp %edi,%eax;");
    asm("loc_65C4A9B: mov %eax,0x10(%esp);");
    asm("loc_65C4A9F: je loc_65C4AD8;");
    asm("loc_65C4AA1: cmp %esi,8(%eax);");
    asm("loc_65C4AA4: jne loc_65C4ACE;");
    asm("loc_65C4AA6: push $0;");
    asm("loc_65C4AA8: lea 0x24(%esp),%eax;");
    asm("loc_65C4AAC: push %eax;");
    asm("loc_65C4AAD: lea 0x18(%esp),%ecx;");
    asm("loc_65C4AB1: call _sub_65C45D0;");
    asm("loc_65C4AB6: mov (%eax),%ecx;");
    asm("loc_65C4AB8: push %ecx;");
    asm("loc_65C4AB9: lea 0x28(%esp),%edx;");
    asm("loc_65C4ABD: push %edx;");
    asm("loc_65C4ABE: mov $_data_65CA25C,%ecx;");
    asm("loc_65C4AC3: call _sub_65C5590;");
    asm("loc_65C4AC8: mov 0x10(%esp),%eax;");
    asm("loc_65C4ACC: jmp loc_65C4AD4;");
    asm("loc_65C4ACE: mov (%eax),%eax;");
    asm("loc_65C4AD0: mov %eax,0x10(%esp);");
    asm("loc_65C4AD4: cmp %edi,%eax;");
    asm("loc_65C4AD6: jne loc_65C4AA1;");
    asm("loc_65C4AD8: push $_data_65CA268;");
    asm("loc_65C4ADD: calll *_import_65C7028;");
    asm("loc_65C4AE3: mov (%esi),%eax;");
    asm("loc_65C4AE5: push $1;");
    asm("loc_65C4AE7: mov %esi,%ecx;");
    asm("loc_65C4AE9: calll *0x10(%eax);");
    asm("loc_65C4AEC: jmp loc_65C4B5F;");
    asm("loc_65C4AEE: push $_data_65CA268;");
    asm("loc_65C4AF3: calll *_import_65C7024;");
    asm("loc_65C4AF9: mov _data_65CA260,%eax;");
    asm("loc_65C4AFE: mov %eax,%edi;");
    asm("loc_65C4B00: mov (%eax),%eax;");
    asm("loc_65C4B02: cmp %edi,%eax;");
    asm("loc_65C4B04: mov %eax,0x14(%esp);");
    asm("loc_65C4B08: je loc_65C4B47;");
    asm("loc_65C4B0A: lea (%ebx),%ebx;");
    asm("loc_65C4B10: cmp %esi,8(%eax);");
    asm("loc_65C4B13: jne loc_65C4B3D;");
    asm("loc_65C4B15: push $0;");
    asm("loc_65C4B17: lea 0x2C(%esp),%ecx;");
    asm("loc_65C4B1B: push %ecx;");
    asm("loc_65C4B1C: lea 0x1C(%esp),%ecx;");
    asm("loc_65C4B20: call _sub_65C45D0;");
    asm("loc_65C4B25: mov (%eax),%edx;");
    asm("loc_65C4B27: push %edx;");
    asm("loc_65C4B28: lea 0x30(%esp),%eax;");
    asm("loc_65C4B2C: push %eax;");
    asm("loc_65C4B2D: mov $_data_65CA25C,%ecx;");
    asm("loc_65C4B32: call _sub_65C5590;");
    asm("loc_65C4B37: mov 0x14(%esp),%eax;");
    asm("loc_65C4B3B: jmp loc_65C4B43;");
    asm("loc_65C4B3D: mov (%eax),%eax;");
    asm("loc_65C4B3F: mov %eax,0x14(%esp);");
    asm("loc_65C4B43: cmp %edi,%eax;");
    asm("loc_65C4B45: jne loc_65C4B10;");
    asm("loc_65C4B47: push $_data_65CA268;");
    asm("loc_65C4B4C: calll *_import_65C7028;");
    asm("loc_65C4B52: test %esi,%esi;");
    asm("loc_65C4B54: je loc_65C4B5F;");
    asm("loc_65C4B56: mov (%esi),%edx;");
    asm("loc_65C4B58: push $1;");
    asm("loc_65C4B5A: mov %esi,%ecx;");
    asm("loc_65C4B5C: calll *0x10(%edx);");
    asm("loc_65C4B5F: mov (%ebp),%eax;");
    asm("loc_65C4B62: push $1;");
    asm("loc_65C4B64: mov %ebp,%ecx;");
    asm("loc_65C4B66: calll *(%eax);");
    asm("loc_65C4B68: lea 0x38(%esp),%ecx;");
    asm("loc_65C4B6C: call _sub_65C4390;");
    asm("loc_65C4B71: mov %eax,%ebp;");
    asm("loc_65C4B73: test %ebp,%ebp;");
    asm("loc_65C4B75: jne loc_65C49B0;");
    asm("loc_65C4B7B: pop %edi;");
    asm("loc_65C4B7C: lea 0x34(%esp),%ecx;");
    asm("loc_65C4B80: call _sub_65C4310;");
    asm("loc_65C4B85: push $_data_65CA268;");
    asm("loc_65C4B8A: calll *_import_65C7024;");
    asm("loc_65C4B90: mov _data_65CA260,%eax;");
    asm("loc_65C4B95: mov (%eax),%esi;");
    asm("loc_65C4B97: cmp %eax,%esi;");
    asm("loc_65C4B99: pop %ebp;");
    asm("loc_65C4B9A: je loc_65C4BB2;");
    asm("loc_65C4B9C: lea (%esp),%esp;");
    asm("loc_65C4BA0: mov 8(%esi),%ecx;");
    asm("loc_65C4BA3: call _sub_65C3B10;");
    asm("loc_65C4BA8: mov (%esi),%esi;");
    asm("loc_65C4BAA: cmp _data_65CA260,%esi;");
    asm("loc_65C4BB0: jne loc_65C4BA0;");
    asm("loc_65C4BB2: push $_data_65CA268;");
    asm("loc_65C4BB7: calll *_import_65C7028;");
    asm("loc_65C4BBD: lea 0x30(%esp),%ecx;");
    asm("loc_65C4BC1: movl $0xFFFFFFFF,0x64(%esp);");
    asm("loc_65C4BC9: call _sub_65C4240;");
    asm("loc_65C4BCE: mov 0x5C(%esp),%ecx;");
    asm("loc_65C4BD2: pop %esi;");
    asm("loc_65C4BD3: mov %ecx,%fs:0;");
    asm("loc_65C4BDA: add $0x64,%esp;");
    asm("loc_65C4BDD: ret;");
    asm("int3;"); // unreachable
    asm("_jmp_65C4BE0: .long loc_65C49C6;");
    asm(".long loc_65C4A70;");
    asm(".long loc_65C4AEE;");
    asm(".long loc_65C4A7E;");
    asm(".long 0xCCCCCCCC;");
}
FIXUP_JUMP_TABLE(_sub_65C4940);
_naked _weak void _sub_65C4BF0() // ??0CDPServer@@QAE@XZ
{
    __DEBUG_ASM(65C4BF0);
    // chunk 0x65C4BF0 _sub_65C4BF0
    asm("loc_65C4BF0: push $0xFFFFFFFF;");
    asm("loc_65C4BF2: push $_sub_65C6EFE;");
    asm("loc_65C4BF7: mov %fs:0,%eax;");
    asm("loc_65C4BFD: push %eax;");
    asm("loc_65C4BFE: mov %esp,%fs:0;");
    asm("loc_65C4C05: sub $0x18,%esp;");
    asm("loc_65C4C08: push %ebp;");
    asm("loc_65C4C09: push %esi;");
    asm("loc_65C4C0A: mov %ecx,%esi;");
    asm("loc_65C4C0C: push %edi;");
    asm("loc_65C4C0D: lea 0x56C(%esi),%ecx;");
    asm("loc_65C4C13: mov %esi,0xC(%esp);");
    asm("loc_65C4C17: call _sub_65C41F0;");
    asm("loc_65C4C1C: lea 4(%esi),%ebp;");
    asm("loc_65C4C1F: push %ebp;");
    asm("loc_65C4C20: push $_data_65C75B0;");
    asm("loc_65C4C25: xor %edi,%edi;");
    asm("loc_65C4C27: push $1;");
    asm("loc_65C4C29: push %edi;");
    asm("loc_65C4C2A: movl $_off_65C74D8,(%esi);");
    asm("loc_65C4C30: mov %edi,(%ebp);");
    asm("loc_65C4C33: movb $0,0x564(%esi);");
    asm("loc_65C4C3A: mov %edi,0x998(%esi);");
    asm("loc_65C4C40: mov %edi,0x560(%esi);");
    asm("loc_65C4C46: push $_data_65C75D0;");
    asm("loc_65C4C4B: mov %edi,0x40(%esp);");
    asm("loc_65C4C4F: mov %esi,_data_65CA284;");
    asm("loc_65C4C55: calll *_import_65C70E0;");
    asm("loc_65C4C5B: test %eax,%eax;");
    asm("loc_65C4C5D: je loc_65C4C82;");
    asm("loc_65C4C5F: push %edi;");
    asm("loc_65C4C60: push $0xD4;");
    asm("loc_65C4C65: calll *_data_65CA0B4;");
    asm("loc_65C4C6B: add $8,%esp;");
    asm("loc_65C4C6E: pop %edi;");
    asm("loc_65C4C6F: mov %esi,%eax;");
    asm("loc_65C4C71: pop %esi;");
    asm("loc_65C4C72: pop %ebp;");
    asm("loc_65C4C73: mov 0x18(%esp),%ecx;");
    asm("loc_65C4C77: mov %ecx,%fs:0;");
    asm("loc_65C4C7E: add $0x24,%esp;");
    asm("loc_65C4C81: ret;");
    asm("loc_65C4C82: mov (%ebp),%eax;");
    asm("loc_65C4C85: cmp %edi,%eax;");
    asm("loc_65C4C87: je loc_65C4D57;");
    asm("loc_65C4C8D: mov (%eax),%ecx;");
    asm("loc_65C4C8F: push %ebx;");
    asm("loc_65C4C90: push %edi;");
    asm("loc_65C4C91: push $_sub_65C4670;");
    asm("loc_65C4C96: push %esi;");
    asm("loc_65C4C97: push %eax;");
    asm("loc_65C4C98: calll *0xC(%ecx);");
    asm("loc_65C4C9B: lea 8(%esi),%ebx;");
    asm("loc_65C4C9E: xor %eax,%eax;");
    asm("loc_65C4CA0: mov $0x12,%ecx;");
    asm("loc_65C4CA5: mov %ebx,%edi;");
    asm("loc_65C4CA7: rep stos %eax,(%edi);");
    asm("loc_65C4CA9: lea 0x50(%esi),%eax;");
    asm("loc_65C4CAC: push $_data_65C7508;");
    asm("loc_65C4CB1: push %eax;");
    asm("loc_65C4CB2: movl $0x48,(%ebx);");
    asm("loc_65C4CB8: movl $1,0xC(%esi);");
    asm("loc_65C4CBF: movl $0x10,0x30(%esi);");
    asm("loc_65C4CC6: mov %eax,0x38(%esi);");
    asm("loc_65C4CC9: calll *_import_65C707C;");
    asm("loc_65C4CCF: mov (%ebp),%eax;");
    asm("loc_65C4CD2: xor %edi,%edi;");
    asm("loc_65C4CD4: add $8,%esp;");
    asm("loc_65C4CD7: cmp %edi,%eax;");
    asm("loc_65C4CD9: je loc_65C4CE3;");
    asm("loc_65C4CDB: mov (%eax),%edx;");
    asm("loc_65C4CDD: push %edi;");
    asm("loc_65C4CDE: push %ebx;");
    asm("loc_65C4CDF: push %eax;");
    asm("loc_65C4CE0: calll *0x30(%edx);");
    asm("loc_65C4CE3: mov 0xC(%esi),%edx;");
    asm("loc_65C4CE6: mov (%ebp),%eax;");
    asm("loc_65C4CE9: and $0xFFFFFF7F,%edx;");
    asm("loc_65C4CEF: cmp %edi,%eax;");
    asm("loc_65C4CF1: mov %edi,0x3C(%esi);");
    asm("loc_65C4CF4: mov %edx,0xC(%esi);");
    asm("loc_65C4CF7: je loc_65C4D01;");
    asm("loc_65C4CF9: mov (%eax),%ecx;");
    asm("loc_65C4CFB: push %edi;");
    asm("loc_65C4CFC: push %ebx;");
    asm("loc_65C4CFD: push %eax;");
    asm("loc_65C4CFE: calll *0x30(%ecx);");
    asm("loc_65C4D01: mov _data_65C74E4,%eax;");
    asm("loc_65C4D06: mov (%ebp),%ebp;");
    asm("loc_65C4D09: lea 0x20(%esi),%edx;");
    asm("loc_65C4D0C: mov %eax,(%edx);");
    asm("loc_65C4D0E: mov _data_65C74E8,%ecx;");
    asm("loc_65C4D14: mov %ecx,4(%edx);");
    asm("loc_65C4D17: mov _data_65C74EC,%eax;");
    asm("loc_65C4D1C: mov %eax,8(%edx);");
    asm("loc_65C4D1F: mov _data_65C74F0,%ecx;");
    asm("loc_65C4D25: mov $0x3E8,%eax;");
    asm("loc_65C4D2A: mov %eax,0x1C(%esp);");
    asm("loc_65C4D2E: mov %eax,0x24(%esp);");
    asm("loc_65C4D32: push %edi;");
    asm("loc_65C4D33: lea 0x18(%esp),%eax;");
    asm("loc_65C4D37: push %eax;");
    asm("loc_65C4D38: mov %ecx,0xC(%edx);");
    asm("loc_65C4D3B: movl $0x14,0x1C(%esp);");
    asm("loc_65C4D43: mov %edi,0x20(%esp);");
    asm("loc_65C4D47: movl $5,0x28(%esp);");
    asm("loc_65C4D4F: mov (%ebp),%edx;");
    asm("loc_65C4D52: push %ebp;");
    asm("loc_65C4D53: calll *0x74(%edx);");
    asm("loc_65C4D56: pop %ebx;");
    asm("loc_65C4D57: mov 0x24(%esp),%ecx;");
    asm("loc_65C4D5B: pop %edi;");
    asm("loc_65C4D5C: mov %esi,%eax;");
    asm("loc_65C4D5E: pop %esi;");
    asm("loc_65C4D5F: pop %ebp;");
    asm("loc_65C4D60: mov %ecx,%fs:0;");
    asm("loc_65C4D67: add $0x24,%esp;");
    asm("loc_65C4D6A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C4D70() // ??1CDPServer@@UAE@XZ
{
    __DEBUG_ASM(65C4D70);
    // chunk 0x65C4D70 _sub_65C4D70
    asm("loc_65C4D70: push $0xFFFFFFFF;");
    asm("loc_65C4D72: push $_sub_65C6F1E;");
    asm("loc_65C4D77: mov %fs:0,%eax;");
    asm("loc_65C4D7D: push %eax;");
    asm("loc_65C4D7E: mov %esp,%fs:0;");
    asm("loc_65C4D85: sub $8,%esp;");
    asm("loc_65C4D88: push %ebx;");
    asm("loc_65C4D89: push %ebp;");
    asm("loc_65C4D8A: push %esi;");
    asm("loc_65C4D8B: mov %ecx,%esi;");
    asm("loc_65C4D8D: push %edi;");
    asm("loc_65C4D8E: mov %esi,0x14(%esp);");
    asm("loc_65C4D92: movl $_off_65C74D8,(%esi);");
    asm("loc_65C4D98: lea 0x56C(%esi),%edi;");
    asm("loc_65C4D9E: xor %ebx,%ebx;");
    asm("loc_65C4DA0: mov %edi,%ecx;");
    asm("loc_65C4DA2: mov %ebx,0x20(%esp);");
    asm("loc_65C4DA6: mov %bl,0x564(%esi);");
    asm("loc_65C4DAC: mov %edi,0x10(%esp);");
    asm("loc_65C4DB0: call _sub_65C45C0;");
    asm("loc_65C4DB5: mov 0x560(%esi),%eax;");
    asm("loc_65C4DBB: xor %ebp,%ebp;");
    asm("loc_65C4DBD: cmp %ebx,%eax;");
    asm("loc_65C4DBF: jbe loc_65C4DE3;");
    asm("loc_65C4DC1: lea 0x460(%esi),%edi;");
    asm("loc_65C4DC7: mov (%edi),%eax;");
    asm("loc_65C4DC9: mov (%eax),%ecx;");
    asm("loc_65C4DCB: push %eax;");
    asm("loc_65C4DCC: calll *8(%ecx);");
    asm("loc_65C4DCF: mov %ebx,(%edi);");
    asm("loc_65C4DD1: mov 0x560(%esi),%eax;");
    asm("loc_65C4DD7: inc %ebp;");
    asm("loc_65C4DD8: add $4,%edi;");
    asm("loc_65C4DDB: cmp %eax,%ebp;");
    asm("loc_65C4DDD: jb loc_65C4DC7;");
    asm("loc_65C4DDF: mov 0x10(%esp),%edi;");
    asm("loc_65C4DE3: mov 4(%esi),%eax;");
    asm("loc_65C4DE6: cmp %ebx,%eax;");
    asm("loc_65C4DE8: mov %ebx,0x560(%esi);");
    asm("loc_65C4DEE: je loc_65C4E03;");
    asm("loc_65C4DF0: mov (%eax),%edx;");
    asm("loc_65C4DF2: push %ebx;");
    asm("loc_65C4DF3: push %eax;");
    asm("loc_65C4DF4: calll *0x5C(%edx);");
    asm("loc_65C4DF7: mov 4(%esi),%eax;");
    asm("loc_65C4DFA: mov (%eax),%ecx;");
    asm("loc_65C4DFC: push %eax;");
    asm("loc_65C4DFD: calll *8(%ecx);");
    asm("loc_65C4E00: mov %ebx,4(%esi);");
    asm("loc_65C4E03: mov %edi,%ecx;");
    asm("loc_65C4E05: mov %ebx,_data_65CA284;");
    asm("loc_65C4E0B: movl $0xFFFFFFFF,0x20(%esp);");
    asm("loc_65C4E13: call _sub_65C4240;");
    asm("loc_65C4E18: mov 0x18(%esp),%ecx;");
    asm("loc_65C4E1C: pop %edi;");
    asm("loc_65C4E1D: pop %esi;");
    asm("loc_65C4E1E: pop %ebp;");
    asm("loc_65C4E1F: pop %ebx;");
    asm("loc_65C4E20: mov %ecx,%fs:0;");
    asm("loc_65C4E27: add $0x14,%esp;");
    asm("loc_65C4E2A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C4E30() // ?UpdateDescription@CDPServer@@IAEXXZ
{
    __DEBUG_ASM(65C4E30);
    // chunk 0x65C4E30 _sub_65C4E30
    asm("loc_65C4E30: mov 4(%ecx),%eax;");
    asm("loc_65C4E33: test %eax,%eax;");
    asm("loc_65C4E35: je loc_65C4E43;");
    asm("loc_65C4E37: mov (%eax),%edx;");
    asm("loc_65C4E39: push $0;");
    asm("loc_65C4E3B: add $8,%ecx;");
    asm("loc_65C4E3E: push %ecx;");
    asm("loc_65C4E3F: push %eax;");
    asm("loc_65C4E40: calll *0x30(%edx);");
    asm("loc_65C4E43: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C4E50() // ?SetGUID@CDPServer@@QAEXAAU_GUID@@@Z
{
    __DEBUG_ASM(65C4E50);
    // chunk 0x65C4E50 _sub_65C4E50
    asm("loc_65C4E50: mov 4(%esp),%eax;");
    asm("loc_65C4E54: mov (%eax),%edx;");
    asm("loc_65C4E56: add $0x20,%ecx;");
    asm("loc_65C4E59: mov %edx,(%ecx);");
    asm("loc_65C4E5B: mov 4(%eax),%edx;");
    asm("loc_65C4E5E: mov %edx,4(%ecx);");
    asm("loc_65C4E61: mov 8(%eax),%edx;");
    asm("loc_65C4E64: mov %edx,8(%ecx);");
    asm("loc_65C4E67: mov 0xC(%eax),%eax;");
    asm("loc_65C4E6A: mov %eax,0xC(%ecx);");
    asm("loc_65C4E6D: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C4E70() // ?SetSessionName@CDPServer@@QAEXPBG@Z
{
    __DEBUG_ASM(65C4E70);
    // chunk 0x65C4E70 _sub_65C4E70
    asm("loc_65C4E70: mov 4(%esp),%eax;");
    asm("loc_65C4E74: push %esi;");
    asm("loc_65C4E75: mov %ecx,%esi;");
    asm("loc_65C4E77: push %eax;");
    asm("loc_65C4E78: lea 0x50(%esi),%ecx;");
    asm("loc_65C4E7B: push %ecx;");
    asm("loc_65C4E7C: calll *_import_65C707C;");
    asm("loc_65C4E82: mov 4(%esi),%eax;");
    asm("loc_65C4E85: add $8,%esp;");
    asm("loc_65C4E88: test %eax,%eax;");
    asm("loc_65C4E8A: je loc_65C4E98;");
    asm("loc_65C4E8C: mov (%eax),%edx;");
    asm("loc_65C4E8E: push $0;");
    asm("loc_65C4E90: add $8,%esi;");
    asm("loc_65C4E93: push %esi;");
    asm("loc_65C4E94: push %eax;");
    asm("loc_65C4E95: calll *0x30(%edx);");
    asm("loc_65C4E98: pop %esi;");
    asm("loc_65C4E99: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C4EA0() // ?SetMaxPlayers@CDPServer@@QAEXH@Z
{
    __DEBUG_ASM(65C4EA0);
    // chunk 0x65C4EA0 _sub_65C4EA0
    asm("loc_65C4EA0: mov 4(%esp),%eax;");
    asm("loc_65C4EA4: inc %eax;");
    asm("loc_65C4EA5: mov %eax,0x30(%ecx);");
    asm("loc_65C4EA8: mov 4(%ecx),%eax;");
    asm("loc_65C4EAB: test %eax,%eax;");
    asm("loc_65C4EAD: je loc_65C4EBB;");
    asm("loc_65C4EAF: mov (%eax),%edx;");
    asm("loc_65C4EB1: push $0;");
    asm("loc_65C4EB3: add $8,%ecx;");
    asm("loc_65C4EB6: push %ecx;");
    asm("loc_65C4EB7: push %eax;");
    asm("loc_65C4EB8: calll *0x30(%edx);");
    asm("loc_65C4EBB: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C4EC0() // ?SetPassword@CDPServer@@QAEXPBG@Z
{
    __DEBUG_ASM(65C4EC0);
    // chunk 0x65C4EC0 _sub_65C4EC0
    asm("loc_65C4EC0: mov 4(%esp),%eax;");
    asm("loc_65C4EC4: cmpw $0,(%eax);");
    asm("loc_65C4EC8: push %esi;");
    asm("loc_65C4EC9: mov %ecx,%esi;");
    asm("loc_65C4ECB: jne loc_65C4EDE;");
    asm("loc_65C4ECD: mov 0xC(%esi),%eax;");
    asm("loc_65C4ED0: movl $0,0x3C(%esi);");
    asm("loc_65C4ED7: and $0xFFFFFF7F,%eax;");
    asm("loc_65C4EDC: jmp loc_65C4EFC;");
    asm("loc_65C4EDE: push %edi;");
    asm("loc_65C4EDF: push %eax;");
    asm("loc_65C4EE0: lea 0x258(%esi),%edi;");
    asm("loc_65C4EE6: push %edi;");
    asm("loc_65C4EE7: calll *_import_65C707C;");
    asm("loc_65C4EED: mov 0xC(%esi),%eax;");
    asm("loc_65C4EF0: add $8,%esp;");
    asm("loc_65C4EF3: mov %edi,0x3C(%esi);");
    asm("loc_65C4EF6: or $0x80,%eax;");
    asm("loc_65C4EFB: pop %edi;");
    asm("loc_65C4EFC: mov %eax,0xC(%esi);");
    asm("loc_65C4EFF: mov 4(%esi),%eax;");
    asm("loc_65C4F02: test %eax,%eax;");
    asm("loc_65C4F04: je loc_65C4F12;");
    asm("loc_65C4F06: mov (%eax),%ecx;");
    asm("loc_65C4F08: push $0;");
    asm("loc_65C4F0A: add $8,%esi;");
    asm("loc_65C4F0D: push %esi;");
    asm("loc_65C4F0E: push %eax;");
    asm("loc_65C4F0F: calll *0x30(%ecx);");
    asm("loc_65C4F12: pop %esi;");
    asm("loc_65C4F13: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C4F20() // ?GetHostAddresses@CDPServer@@IAEXXZ
{
    __DEBUG_ASM(65C4F20);
    // chunk 0x65C4F20 _sub_65C4F20
    asm("loc_65C4F20: mov 4(%ecx),%eax;");
    asm("loc_65C4F23: sub $0x404,%esp;");
    asm("loc_65C4F29: test %eax,%eax;");
    asm("loc_65C4F2B: push %ebx;");
    asm("loc_65C4F2C: push %ebp;");
    asm("loc_65C4F2D: push %edi;");
    asm("loc_65C4F2E: je loc_65C4FC6;");
    asm("loc_65C4F34: mov 0x560(%ecx),%edx;");
    asm("loc_65C4F3A: test %edx,%edx;");
    asm("loc_65C4F3C: lea 0x560(%ecx),%ebp;");
    asm("loc_65C4F42: jne loc_65C4FC6;");
    asm("loc_65C4F48: push $0;");
    asm("loc_65C4F4A: lea 0x460(%ecx),%ebx;");
    asm("loc_65C4F50: push %ebp;");
    asm("loc_65C4F51: push %ebx;");
    asm("loc_65C4F52: movl $0x40,(%ebp);");
    asm("loc_65C4F59: mov (%eax),%ecx;");
    asm("loc_65C4F5B: push %eax;");
    asm("loc_65C4F5C: calll *0x2C(%ecx);");
    asm("loc_65C4F5F: test %eax,%eax;");
    asm("loc_65C4F61: je loc_65C4F74;");
    asm("loc_65C4F63: pop %edi;");
    asm("loc_65C4F64: movl $0,(%ebp);");
    asm("loc_65C4F6B: pop %ebp;");
    asm("loc_65C4F6C: pop %ebx;");
    asm("loc_65C4F6D: add $0x404,%esp;");
    asm("loc_65C4F73: ret;");
    asm("loc_65C4F74: mov (%ebp),%eax;");
    asm("loc_65C4F77: xor %edi,%edi;");
    asm("loc_65C4F79: test %eax,%eax;");
    asm("loc_65C4F7B: jbe loc_65C4FC6;");
    asm("loc_65C4F7D: push %esi;");
    asm("loc_65C4F7E: mov _import_65C7010,%esi;");
    asm("loc_65C4F84: mov (%ebx),%eax;");
    asm("loc_65C4F86: lea 0x10(%esp),%ecx;");
    asm("loc_65C4F8A: push %ecx;");
    asm("loc_65C4F8B: lea 0x18(%esp),%ecx;");
    asm("loc_65C4F8F: push %ecx;");
    asm("loc_65C4F90: movl $0x400,0x18(%esp);");
    asm("loc_65C4F98: mov (%eax),%edx;");
    asm("loc_65C4F9A: push %eax;");
    asm("loc_65C4F9B: calll *0x28(%edx);");
    asm("loc_65C4F9E: push $_data_65C7540;");
    asm("loc_65C4FA3: call *%esi;");
    asm("loc_65C4FA5: push $_data_65C7530;");
    asm("loc_65C4FAA: call *%esi;");
    asm("loc_65C4FAC: lea 0x14(%esp),%edx;");
    asm("loc_65C4FB0: push %edx;");
    asm("loc_65C4FB1: call *%esi;");
    asm("loc_65C4FB3: push $_data_65C752C;");
    asm("loc_65C4FB8: call *%esi;");
    asm("loc_65C4FBA: mov (%ebp),%eax;");
    asm("loc_65C4FBD: inc %edi;");
    asm("loc_65C4FBE: add $4,%ebx;");
    asm("loc_65C4FC1: cmp %eax,%edi;");
    asm("loc_65C4FC3: jb loc_65C4F84;");
    asm("loc_65C4FC5: pop %esi;");
    asm("loc_65C4FC6: pop %edi;");
    asm("loc_65C4FC7: pop %ebp;");
    asm("loc_65C4FC8: pop %ebx;");
    asm("loc_65C4FC9: add $0x404,%esp;");
    asm("loc_65C4FCF: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C4FD0() // ?ReleaseHostAddresses@CDPServer@@IAEXXZ
{
    __DEBUG_ASM(65C4FD0);
    // chunk 0x65C4FD0 _sub_65C4FD0
    asm("loc_65C4FD0: push %ebx;");
    asm("loc_65C4FD1: mov %ecx,%ebx;");
    asm("loc_65C4FD3: mov 0x560(%ebx),%eax;");
    asm("loc_65C4FD9: push %edi;");
    asm("loc_65C4FDA: xor %edi,%edi;");
    asm("loc_65C4FDC: test %eax,%eax;");
    asm("loc_65C4FDE: jbe loc_65C5004;");
    asm("loc_65C4FE0: push %esi;");
    asm("loc_65C4FE1: lea 0x460(%ebx),%esi;");
    asm("loc_65C4FE7: mov (%esi),%eax;");
    asm("loc_65C4FE9: mov (%eax),%ecx;");
    asm("loc_65C4FEB: push %eax;");
    asm("loc_65C4FEC: calll *8(%ecx);");
    asm("loc_65C4FEF: movl $0,(%esi);");
    asm("loc_65C4FF5: mov 0x560(%ebx),%eax;");
    asm("loc_65C4FFB: inc %edi;");
    asm("loc_65C4FFC: add $4,%esi;");
    asm("loc_65C4FFF: cmp %eax,%edi;");
    asm("loc_65C5001: jb loc_65C4FE7;");
    asm("loc_65C5003: pop %esi;");
    asm("loc_65C5004: pop %edi;");
    asm("loc_65C5005: movl $0,0x560(%ebx);");
    asm("loc_65C500F: pop %ebx;");
    asm("loc_65C5010: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C5020() // ?CreateClientProxy@CDPServer@@UAEPAVCDPClientProxy@@XZ
{
    __DEBUG_ASM(65C5020);
    // chunk 0x65C5020 _sub_65C5020
    asm("loc_65C5020: push $0xFFFFFFFF;");
    asm("loc_65C5022: push $_sub_65C6F3B;");
    asm("loc_65C5027: mov %fs:0,%eax;");
    asm("loc_65C502D: push %eax;");
    asm("loc_65C502E: mov %esp,%fs:0;");
    asm("loc_65C5035: push %ecx;");
    asm("loc_65C5036: push $0x68;");
    asm("loc_65C5038: call _sub_65C6A66;");
    asm("loc_65C503D: add $4,%esp;");
    asm("loc_65C5040: mov %eax,(%esp);");
    asm("loc_65C5044: test %eax,%eax;");
    asm("loc_65C5046: movl $0,0xC(%esp);");
    asm("loc_65C504E: je loc_65C5066;");
    asm("loc_65C5050: mov %eax,%ecx;");
    asm("loc_65C5052: call _sub_65C36B0;");
    asm("loc_65C5057: mov 4(%esp),%ecx;");
    asm("loc_65C505B: mov %ecx,%fs:0;");
    asm("loc_65C5062: add $0x10,%esp;");
    asm("loc_65C5065: ret;");
    asm("loc_65C5066: mov 4(%esp),%ecx;");
    asm("loc_65C506A: xor %eax,%eax;");
    asm("loc_65C506C: mov %ecx,%fs:0;");
    asm("loc_65C5073: add $0x10,%esp;");
    asm("loc_65C5076: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C5080() // ?BeginHosting@CDPServer@@QAE_NI@Z
{
    __DEBUG_ASM(65C5080);
    // chunk 0x65C5080 _sub_65C5080
    asm("loc_65C5080: push %ecx;");
    asm("loc_65C5081: push %esi;");
    asm("loc_65C5082: mov %ecx,%esi;");
    asm("loc_65C5084: mov 4(%esi),%eax;");
    asm("loc_65C5087: test %eax,%eax;");
    asm("loc_65C5089: jne loc_65C5092;");
    asm("loc_65C508B: xor %al,%al;");
    asm("loc_65C508D: pop %esi;");
    asm("loc_65C508E: pop %ecx;");
    asm("loc_65C508F: ret $4;");
    asm("loc_65C5092: cmpb $1,0x564(%esi);");
    asm("loc_65C5099: je loc_65C5132;");
    asm("loc_65C509F: lea 4(%esp),%eax;");
    asm("loc_65C50A3: push %eax;");
    asm("loc_65C50A4: push $_data_65C75F0;");
    asm("loc_65C50A9: push $1;");
    asm("loc_65C50AB: push $0;");
    asm("loc_65C50AD: push $_data_65C7600;");
    asm("loc_65C50B2: movl $0,0x18(%esp);");
    asm("loc_65C50BA: calll *_import_65C70E0;");
    asm("loc_65C50C0: mov 4(%esp),%eax;");
    asm("loc_65C50C4: mov (%eax),%ecx;");
    asm("loc_65C50C6: push $_data_65C75A0;");
    asm("loc_65C50CB: push %eax;");
    asm("loc_65C50CC: calll *0x34(%ecx);");
    asm("loc_65C50CF: mov 0xC(%esp),%eax;");
    asm("loc_65C50D3: test %eax,%eax;");
    asm("loc_65C50D5: je loc_65C50EF;");
    asm("loc_65C50D7: mov 4(%esp),%eax;");
    asm("loc_65C50DB: mov (%eax),%edx;");
    asm("loc_65C50DD: push $2;");
    asm("loc_65C50DF: push $4;");
    asm("loc_65C50E1: lea 0x14(%esp),%ecx;");
    asm("loc_65C50E5: push %ecx;");
    asm("loc_65C50E6: push $_data_65C7474;");
    asm("loc_65C50EB: push %eax;");
    asm("loc_65C50EC: calll *0x48(%edx);");
    asm("loc_65C50EF: mov 4(%esi),%eax;");
    asm("loc_65C50F2: mov (%eax),%edx;");
    asm("loc_65C50F4: push %edi;");
    asm("loc_65C50F5: push $0;");
    asm("loc_65C50F7: push $0;");
    asm("loc_65C50F9: push $0;");
    asm("loc_65C50FB: push $0;");
    asm("loc_65C50FD: push $1;");
    asm("loc_65C50FF: lea 0x1C(%esp),%ecx;");
    asm("loc_65C5103: push %ecx;");
    asm("loc_65C5104: lea 8(%esi),%ecx;");
    asm("loc_65C5107: push %ecx;");
    asm("loc_65C5108: push %eax;");
    asm("loc_65C5109: calll *0x34(%edx);");
    asm("loc_65C510C: mov %eax,%edi;");
    asm("loc_65C510E: mov 8(%esp),%eax;");
    asm("loc_65C5112: mov (%eax),%edx;");
    asm("loc_65C5114: push %eax;");
    asm("loc_65C5115: calll *8(%edx);");
    asm("loc_65C5118: test %edi,%edi;");
    asm("loc_65C511A: pop %edi;");
    asm("loc_65C511B: je loc_65C5124;");
    asm("loc_65C511D: xor %al,%al;");
    asm("loc_65C511F: pop %esi;");
    asm("loc_65C5120: pop %ecx;");
    asm("loc_65C5121: ret $4;");
    asm("loc_65C5124: mov %esi,%ecx;");
    asm("loc_65C5126: movb $1,0x564(%esi);");
    asm("loc_65C512D: call _sub_65C4F20;");
    asm("loc_65C5132: mov $1,%al;");
    asm("loc_65C5134: pop %esi;");
    asm("loc_65C5135: pop %ecx;");
    asm("loc_65C5136: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C5140() // ?StopHosting@CDPServer@@QAEXXZ
{
    __DEBUG_ASM(65C5140);
    // chunk 0x65C5140 _sub_65C5140
    asm("loc_65C5140: mov 4(%ecx),%eax;");
    asm("loc_65C5143: test %eax,%eax;");
    asm("loc_65C5145: je loc_65C514F;");
    asm("loc_65C5147: mov (%eax),%ecx;");
    asm("loc_65C5149: push $0;");
    asm("loc_65C514B: push %eax;");
    asm("loc_65C514C: calll *0x5C(%ecx);");
    asm("loc_65C514F: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C5150() // ?GetPort@CDPServer@@QAEXAAV?$vector@KV?$allocator@K@std@@@std@@@Z
{
    __DEBUG_ASM(65C5150);
    // chunk 0x65C5150 _sub_65C5150
    asm("loc_65C5150: sub $0x1C,%esp;");
    asm("loc_65C5153: push %ebp;");
    asm("loc_65C5154: mov %ecx,%ebp;");
    asm("loc_65C5156: mov 0x560(%ebp),%eax;");
    asm("loc_65C515C: test %eax,%eax;");
    asm("loc_65C515E: mov %ebp,0x1C(%esp);");
    asm("loc_65C5162: movl $0,8(%esp);");
    asm("loc_65C516A: jbe loc_65C5356;");
    asm("loc_65C5170: push %ebx;");
    asm("loc_65C5171: push %esi;");
    asm("loc_65C5172: mov 0x2C(%esp),%esi;");
    asm("loc_65C5176: lea 0x460(%ebp),%eax;");
    asm("loc_65C517C: push %edi;");
    asm("loc_65C517D: mov %eax,0x10(%esp);");
    asm("loc_65C5181: mov 0x10(%esp),%ecx;");
    asm("loc_65C5185: mov (%ecx),%eax;");
    asm("loc_65C5187: lea 0x18(%esp),%ecx;");
    asm("loc_65C518B: push %ecx;");
    asm("loc_65C518C: lea 0x20(%esp),%ecx;");
    asm("loc_65C5190: push %ecx;");
    asm("loc_65C5191: lea 0x38(%esp),%ecx;");
    asm("loc_65C5195: push %ecx;");
    asm("loc_65C5196: mov $4,%ebx;");
    asm("loc_65C519B: push $_data_65C7474;");
    asm("loc_65C51A0: mov %ebx,0x2C(%esp);");
    asm("loc_65C51A4: movl $2,0x28(%esp);");
    asm("loc_65C51AC: movl $0,0x40(%esp);");
    asm("loc_65C51B4: mov (%eax),%edx;");
    asm("loc_65C51B6: push %eax;");
    asm("loc_65C51B7: calll *0x40(%edx);");
    asm("loc_65C51BA: mov 8(%esi),%eax;");
    asm("loc_65C51BD: mov 0xC(%esi),%edx;");
    asm("loc_65C51C0: sub %eax,%edx;");
    asm("loc_65C51C2: sar $2,%edx;");
    asm("loc_65C51C5: cmp $1,%edx;");
    asm("loc_65C51C8: mov %eax,%edi;");
    asm("loc_65C51CA: jae loc_65C52A7;");
    asm("loc_65C51D0: mov 4(%esi),%edx;");
    asm("loc_65C51D3: test %edx,%edx;");
    asm("loc_65C51D5: je loc_65C51E3;");
    asm("loc_65C51D7: mov %eax,%ecx;");
    asm("loc_65C51D9: sub %edx,%ecx;");
    asm("loc_65C51DB: sar $2,%ecx;");
    asm("loc_65C51DE: cmp $1,%ecx;");
    asm("loc_65C51E1: ja loc_65C51E8;");
    asm("loc_65C51E3: mov $1,%ecx;");
    asm("loc_65C51E8: test %edx,%edx;");
    asm("loc_65C51EA: jne loc_65C51F0;");
    asm("loc_65C51EC: xor %eax,%eax;");
    asm("loc_65C51EE: jmp loc_65C51F5;");
    asm("loc_65C51F0: sub %edx,%eax;");
    asm("loc_65C51F2: sar $2,%eax;");
    asm("loc_65C51F5: add %ecx,%eax;");
    asm("loc_65C51F7: test %eax,%eax;");
    asm("loc_65C51F9: mov %eax,0x24(%esp);");
    asm("loc_65C51FD: jge loc_65C5201;");
    asm("loc_65C51FF: xor %eax,%eax;");
    asm("loc_65C5201: shl $2,%eax;");
    asm("loc_65C5204: push %eax;");
    asm("loc_65C5205: call _sub_65C6A66;");
    asm("loc_65C520A: mov 4(%esi),%ebp;");
    asm("loc_65C520D: add $4,%esp;");
    asm("loc_65C5210: cmp %edi,%ebp;");
    asm("loc_65C5212: mov %eax,0x20(%esp);");
    asm("loc_65C5216: mov %eax,%ebx;");
    asm("loc_65C5218: je loc_65C5234;");
    asm("loc_65C521A: lea (%ebx),%ebx;");
    asm("loc_65C5220: push %ebp;");
    asm("loc_65C5221: push %ebx;");
    asm("loc_65C5222: call _sub_65C5700;");
    asm("loc_65C5227: add $4,%ebp;");
    asm("loc_65C522A: add $8,%esp;");
    asm("loc_65C522D: add $4,%ebx;");
    asm("loc_65C5230: cmp %edi,%ebp;");
    asm("loc_65C5232: jne loc_65C5220;");
    asm("loc_65C5234: lea 0x30(%esp),%ecx;");
    asm("loc_65C5238: push %ecx;");
    asm("loc_65C5239: push $1;");
    asm("loc_65C523B: push %ebx;");
    asm("loc_65C523C: mov %esi,%ecx;");
    asm("loc_65C523E: call _sub_65C5610;");
    asm("loc_65C5243: mov 8(%esi),%edx;");
    asm("loc_65C5246: add $4,%ebx;");
    asm("loc_65C5249: push %ebx;");
    asm("loc_65C524A: push %edx;");
    asm("loc_65C524B: push %edi;");
    asm("loc_65C524C: mov %esi,%ecx;");
    asm("loc_65C524E: call _sub_65C55E0;");
    asm("loc_65C5253: mov 8(%esi),%eax;");
    asm("loc_65C5256: mov 4(%esi),%ecx;");
    asm("loc_65C5259: push %eax;");
    asm("loc_65C525A: push %ecx;");
    asm("loc_65C525B: mov %esi,%ecx;");
    asm("loc_65C525D: call _sub_65C55D0;");
    asm("loc_65C5262: mov 4(%esi),%edx;");
    asm("loc_65C5265: push %edx;");
    asm("loc_65C5266: call _sub_65C6A60;");
    asm("loc_65C526B: mov 0x28(%esp),%ecx;");
    asm("loc_65C526F: mov 0x24(%esp),%eax;");
    asm("loc_65C5273: lea (%eax,%ecx,4),%edx;");
    asm("loc_65C5276: mov 4(%esi),%ecx;");
    asm("loc_65C5279: add $4,%esp;");
    asm("loc_65C527C: test %ecx,%ecx;");
    asm("loc_65C527E: mov %edx,0xC(%esi);");
    asm("loc_65C5281: jne loc_65C5287;");
    asm("loc_65C5283: xor %edx,%edx;");
    asm("loc_65C5285: jmp loc_65C528F;");
    asm("loc_65C5287: mov 8(%esi),%edx;");
    asm("loc_65C528A: sub %ecx,%edx;");
    asm("loc_65C528C: sar $2,%edx;");
    asm("loc_65C528F: mov 0x28(%esp),%ebp;");
    asm("loc_65C5293: lea 4(%eax,%edx,4),%ecx;");
    asm("loc_65C5297: mov %ecx,8(%esi);");
    asm("loc_65C529A: mov %eax,4(%esi);");
    asm("loc_65C529D: mov $4,%ebx;");
    asm("loc_65C52A2: jmp loc_65C5332;");
    asm("loc_65C52A7: mov %eax,%edx;");
    asm("loc_65C52A9: sub %edi,%edx;");
    asm("loc_65C52AB: sar $2,%edx;");
    asm("loc_65C52AE: cmp $1,%edx;");
    asm("loc_65C52B1: jae loc_65C52F4;");
    asm("loc_65C52B3: lea 4(%edi),%ecx;");
    asm("loc_65C52B6: push %ecx;");
    asm("loc_65C52B7: push %eax;");
    asm("loc_65C52B8: push %edi;");
    asm("loc_65C52B9: mov %esi,%ecx;");
    asm("loc_65C52BB: call _sub_65C55E0;");
    asm("loc_65C52C0: mov 8(%esi),%eax;");
    asm("loc_65C52C3: mov %eax,%ecx;");
    asm("loc_65C52C5: lea 0x30(%esp),%edx;");
    asm("loc_65C52C9: push %edx;");
    asm("loc_65C52CA: sub %edi,%ecx;");
    asm("loc_65C52CC: sar $2,%ecx;");
    asm("loc_65C52CF: mov $1,%edx;");
    asm("loc_65C52D4: sub %ecx,%edx;");
    asm("loc_65C52D6: push %edx;");
    asm("loc_65C52D7: push %eax;");
    asm("loc_65C52D8: mov %esi,%ecx;");
    asm("loc_65C52DA: call _sub_65C5610;");
    asm("loc_65C52DF: mov 8(%esi),%eax;");
    asm("loc_65C52E2: cmp %eax,%edi;");
    asm("loc_65C52E4: je loc_65C532F;");
    asm("loc_65C52E6: mov 0x30(%esp),%ecx;");
    asm("loc_65C52EA: mov %ecx,(%edi);");
    asm("loc_65C52EC: add %ebx,%edi;");
    asm("loc_65C52EE: cmp %eax,%edi;");
    asm("loc_65C52F0: jne loc_65C52E6;");
    asm("loc_65C52F2: jmp loc_65C532F;");
    asm("loc_65C52F4: push %eax;");
    asm("loc_65C52F5: push %eax;");
    asm("loc_65C52F6: add $0xFFFFFFFC,%eax;");
    asm("loc_65C52F9: push %eax;");
    asm("loc_65C52FA: mov %esi,%ecx;");
    asm("loc_65C52FC: call _sub_65C55E0;");
    asm("loc_65C5301: mov 8(%esi),%ecx;");
    asm("loc_65C5304: lea -4(%ecx),%eax;");
    asm("loc_65C5307: cmp %eax,%edi;");
    asm("loc_65C5309: je loc_65C531C;");
    asm("loc_65C530B: nop;");
    asm("loc_65C530C: lea (%esp),%esp;");
    asm("loc_65C5310: sub %ebx,%eax;");
    asm("loc_65C5312: mov (%eax),%edx;");
    asm("loc_65C5314: sub %ebx,%ecx;");
    asm("loc_65C5316: cmp %edi,%eax;");
    asm("loc_65C5318: mov %edx,(%ecx);");
    asm("loc_65C531A: jne loc_65C5310;");
    asm("loc_65C531C: lea 4(%edi),%eax;");
    asm("loc_65C531F: cmp %eax,%edi;");
    asm("loc_65C5321: je loc_65C532F;");
    asm("loc_65C5323: mov 0x30(%esp),%ecx;");
    asm("loc_65C5327: mov %ecx,(%edi);");
    asm("loc_65C5329: add %ebx,%edi;");
    asm("loc_65C532B: cmp %eax,%edi;");
    asm("loc_65C532D: jne loc_65C5323;");
    asm("loc_65C532F: add %ebx,8(%esi);");
    asm("loc_65C5332: mov 0x14(%esp),%eax;");
    asm("loc_65C5336: mov 0x10(%esp),%edx;");
    asm("loc_65C533A: mov 0x560(%ebp),%ecx;");
    asm("loc_65C5340: inc %eax;");
    asm("loc_65C5341: add %ebx,%edx;");
    asm("loc_65C5343: cmp %ecx,%eax;");
    asm("loc_65C5345: mov %eax,0x14(%esp);");
    asm("loc_65C5349: mov %edx,0x10(%esp);");
    asm("loc_65C534D: jb loc_65C5181;");
    asm("loc_65C5353: pop %edi;");
    asm("loc_65C5354: pop %esi;");
    asm("loc_65C5355: pop %ebx;");
    asm("loc_65C5356: pop %ebp;");
    asm("loc_65C5357: add $0x1C,%esp;");
    asm("loc_65C535A: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C5360() // ?SendTo@CDPServer@@QAE_NPAVCDPClientProxy@@PAXK@Z
{
    __DEBUG_ASM(65C5360);
    // chunk 0x65C5360 _sub_65C5360
    asm("loc_65C5360: mov 4(%ecx),%eax;");
    asm("loc_65C5363: sub $8,%esp;");
    asm("loc_65C5366: test %eax,%eax;");
    asm("loc_65C5368: je loc_65C53BD;");
    asm("loc_65C536A: mov 0xC(%esp),%ecx;");
    asm("loc_65C536E: test %ecx,%ecx;");
    asm("loc_65C5370: je loc_65C53BD;");
    asm("loc_65C5372: mov 0x14(%esp),%edx;");
    asm("loc_65C5376: push %esi;");
    asm("loc_65C5377: push $0x108;");
    asm("loc_65C537C: lea 0x14(%esp),%esi;");
    asm("loc_65C5380: push %esi;");
    asm("loc_65C5381: push %ecx;");
    asm("loc_65C5382: mov 8(%ecx),%ecx;");
    asm("loc_65C5385: push $0;");
    asm("loc_65C5387: push $1;");
    asm("loc_65C5389: mov %edx,0x18(%esp);");
    asm("loc_65C538D: mov 0x28(%esp),%edx;");
    asm("loc_65C5391: lea 0x18(%esp),%esi;");
    asm("loc_65C5395: push %esi;");
    asm("loc_65C5396: push %ecx;");
    asm("loc_65C5397: movl $0,0x2C(%esp);");
    asm("loc_65C539F: mov %edx,0x24(%esp);");
    asm("loc_65C53A3: mov (%eax),%edx;");
    asm("loc_65C53A5: push %eax;");
    asm("loc_65C53A6: calll *0x38(%edx);");
    asm("loc_65C53A9: test %eax,%eax;");
    asm("loc_65C53AB: pop %esi;");
    asm("loc_65C53AC: je loc_65C53B5;");
    asm("loc_65C53AE: cmp $0x15800E,%eax;");
    asm("loc_65C53B3: jne loc_65C53BD;");
    asm("loc_65C53B5: mov $1,%al;");
    asm("loc_65C53B7: add $8,%esp;");
    asm("loc_65C53BA: ret $0xC;");
    asm("loc_65C53BD: xor %al,%al;");
    asm("loc_65C53BF: add $8,%esp;");
    asm("loc_65C53C2: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C53D0() // ?DisconnectClient@CDPServer@@QAEXK@Z
{
    __DEBUG_ASM(65C53D0);
    // chunk 0x65C53D0 _sub_65C53D0
    asm("loc_65C53D0: mov 4(%ecx),%eax;");
    asm("loc_65C53D3: test %eax,%eax;");
    asm("loc_65C53D5: je loc_65C53E8;");
    asm("loc_65C53D7: mov 4(%esp),%edx;");
    asm("loc_65C53DB: mov (%eax),%ecx;");
    asm("loc_65C53DD: push $0;");
    asm("loc_65C53DF: push $0;");
    asm("loc_65C53E1: push $0;");
    asm("loc_65C53E3: push %edx;");
    asm("loc_65C53E4: push %eax;");
    asm("loc_65C53E5: calll *0x60(%ecx);");
    asm("loc_65C53E8: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C53F0() // ?GetConnectionStats@CDPServer@@QAE_NPAVCDPClientProxy@@PAU_DPN_CONNECTION_INFO@@@Z
{
    __DEBUG_ASM(65C53F0);
    // chunk 0x65C53F0 _sub_65C53F0
    asm("loc_65C53F0: mov 4(%ecx),%eax;");
    asm("loc_65C53F3: test %eax,%eax;");
    asm("loc_65C53F5: push %esi;");
    asm("loc_65C53F6: je loc_65C542B;");
    asm("loc_65C53F8: mov 8(%esp),%esi;");
    asm("loc_65C53FC: test %esi,%esi;");
    asm("loc_65C53FE: je loc_65C542B;");
    asm("loc_65C5400: mov 0xC(%esp),%edx;");
    asm("loc_65C5404: test %edx,%edx;");
    asm("loc_65C5406: je loc_65C542B;");
    asm("loc_65C5408: push $0;");
    asm("loc_65C540A: movl $0x5C,(%edx);");
    asm("loc_65C5410: mov 4(%ecx),%eax;");
    asm("loc_65C5413: mov (%eax),%ecx;");
    asm("loc_65C5415: push %edx;");
    asm("loc_65C5416: mov 8(%esi),%edx;");
    asm("loc_65C5419: push %edx;");
    asm("loc_65C541A: push %eax;");
    asm("loc_65C541B: calll *0x80(%ecx);");
    asm("loc_65C5421: neg %eax;");
    asm("loc_65C5423: sbb %al,%al;");
    asm("loc_65C5425: inc %al;");
    asm("loc_65C5427: pop %esi;");
    asm("loc_65C5428: ret $8;");
    asm("loc_65C542B: xor %al,%al;");
    asm("loc_65C542D: pop %esi;");
    asm("loc_65C542E: ret $8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C5440() // ?GetConnectionStats@CDPServer@@QAE_NPAU_DPN_CONNECTION_INFO@@@Z
{
    __DEBUG_ASM(65C5440);
    // chunk 0x65C5440 _sub_65C5440
    asm("loc_65C5440: mov 4(%ecx),%eax;");
    asm("loc_65C5443: test %eax,%eax;");
    asm("loc_65C5445: je loc_65C5476;");
    asm("loc_65C5447: mov 4(%esp),%edx;");
    asm("loc_65C544B: test %edx,%edx;");
    asm("loc_65C544D: je loc_65C5476;");
    asm("loc_65C544F: push %esi;");
    asm("loc_65C5450: movl $0x5C,(%edx);");
    asm("loc_65C5456: mov 4(%ecx),%eax;");
    asm("loc_65C5459: mov 0x568(%ecx),%ecx;");
    asm("loc_65C545F: mov (%eax),%esi;");
    asm("loc_65C5461: push $0;");
    asm("loc_65C5463: push %edx;");
    asm("loc_65C5464: push %ecx;");
    asm("loc_65C5465: push %eax;");
    asm("loc_65C5466: calll *0x80(%esi);");
    asm("loc_65C546C: neg %eax;");
    asm("loc_65C546E: sbb %al,%al;");
    asm("loc_65C5470: inc %al;");
    asm("loc_65C5472: pop %esi;");
    asm("loc_65C5473: ret $4;");
    asm("loc_65C5476: xor %al,%al;");
    asm("loc_65C5478: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C5480() // ?GetSendQSize@CDPServer@@QAEIPAVCDPClientProxy@@@Z
{
    __DEBUG_ASM(65C5480);
    // chunk 0x65C5480 _sub_65C5480
    asm("loc_65C5480: push %ecx;");
    asm("loc_65C5481: mov 4(%ecx),%eax;");
    asm("loc_65C5484: xor %edx,%edx;");
    asm("loc_65C5486: cmp %edx,%eax;");
    asm("loc_65C5488: je loc_65C54BA;");
    asm("loc_65C548A: mov 8(%esp),%ecx;");
    asm("loc_65C548E: cmp %edx,%ecx;");
    asm("loc_65C5490: je loc_65C54BA;");
    asm("loc_65C5492: mov 8(%ecx),%ecx;");
    asm("loc_65C5495: push %esi;");
    asm("loc_65C5496: push $1;");
    asm("loc_65C5498: lea 8(%esp),%esi;");
    asm("loc_65C549C: push %esi;");
    asm("loc_65C549D: lea 0x14(%esp),%esi;");
    asm("loc_65C54A1: push %esi;");
    asm("loc_65C54A2: push %ecx;");
    asm("loc_65C54A3: mov %edx,0x1C(%esp);");
    asm("loc_65C54A7: mov %edx,0x14(%esp);");
    asm("loc_65C54AB: mov (%eax),%edx;");
    asm("loc_65C54AD: push %eax;");
    asm("loc_65C54AE: calll *0x18(%edx);");
    asm("loc_65C54B1: mov 0xC(%esp),%eax;");
    asm("loc_65C54B5: pop %esi;");
    asm("loc_65C54B6: pop %ecx;");
    asm("loc_65C54B7: ret $4;");
    asm("loc_65C54BA: xor %eax,%eax;");
    asm("loc_65C54BC: pop %ecx;");
    asm("loc_65C54BD: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C54C0() // ?GetSendQBytes@CDPServer@@QAEIPAVCDPClientProxy@@@Z
{
    __DEBUG_ASM(65C54C0);
    // chunk 0x65C54C0 _sub_65C54C0
    asm("loc_65C54C0: push %ecx;");
    asm("loc_65C54C1: mov 4(%ecx),%eax;");
    asm("loc_65C54C4: xor %edx,%edx;");
    asm("loc_65C54C6: cmp %edx,%eax;");
    asm("loc_65C54C8: je loc_65C54FA;");
    asm("loc_65C54CA: mov 8(%esp),%ecx;");
    asm("loc_65C54CE: cmp %edx,%ecx;");
    asm("loc_65C54D0: je loc_65C54FA;");
    asm("loc_65C54D2: mov 8(%ecx),%ecx;");
    asm("loc_65C54D5: push %esi;");
    asm("loc_65C54D6: push $1;");
    asm("loc_65C54D8: lea 0x10(%esp),%esi;");
    asm("loc_65C54DC: push %esi;");
    asm("loc_65C54DD: lea 0xC(%esp),%esi;");
    asm("loc_65C54E1: push %esi;");
    asm("loc_65C54E2: push %ecx;");
    asm("loc_65C54E3: mov %edx,0x14(%esp);");
    asm("loc_65C54E7: mov %edx,0x1C(%esp);");
    asm("loc_65C54EB: mov (%eax),%edx;");
    asm("loc_65C54ED: push %eax;");
    asm("loc_65C54EE: calll *0x18(%edx);");
    asm("loc_65C54F1: mov 0xC(%esp),%eax;");
    asm("loc_65C54F5: pop %esi;");
    asm("loc_65C54F6: pop %ecx;");
    asm("loc_65C54F7: ret $4;");
    asm("loc_65C54FA: xor %eax,%eax;");
    asm("loc_65C54FC: pop %ecx;");
    asm("loc_65C54FD: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C5500() // ?SetEnumResponse@CDPServer@@QAE_NPAXK@Z
{
    __DEBUG_ASM(65C5500);
    // chunk 0x65C5500 _sub_65C5500
    asm("loc_65C5500: mov 8(%esp),%edx;");
    asm("loc_65C5504: cmp $0x400,%edx;");
    asm("loc_65C550A: mov %ecx,%eax;");
    asm("loc_65C550C: jbe loc_65C5513;");
    asm("loc_65C550E: xor %al,%al;");
    asm("loc_65C5510: ret $8;");
    asm("loc_65C5513: push %esi;");
    asm("loc_65C5514: mov 8(%esp),%esi;");
    asm("loc_65C5518: test %esi,%esi;");
    asm("loc_65C551A: je loc_65C5542;");
    asm("loc_65C551C: push %ebx;");
    asm("loc_65C551D: push %edi;");
    asm("loc_65C551E: mov %edx,%ecx;");
    asm("loc_65C5520: mov %ecx,%ebx;");
    asm("loc_65C5522: shr $2,%ecx;");
    asm("loc_65C5525: lea 0x598(%eax),%edi;");
    asm("loc_65C552B: rep movsl (%esi),(%edi);");
    asm("loc_65C552D: mov %ebx,%ecx;");
    asm("loc_65C552F: and $3,%ecx;");
    asm("loc_65C5532: rep movsb (%esi),(%edi);");
    asm("loc_65C5534: pop %edi;");
    asm("loc_65C5535: pop %ebx;");
    asm("loc_65C5536: mov %edx,0x998(%eax);");
    asm("loc_65C553C: mov $1,%al;");
    asm("loc_65C553E: pop %esi;");
    asm("loc_65C553F: ret $8;");
    asm("loc_65C5542: movl $0,0x998(%eax);");
    asm("loc_65C554C: mov $1,%al;");
    asm("loc_65C554E: pop %esi;");
    asm("loc_65C554F: ret $8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C5560() // ?GetLastMsgTimestamp@CDPServer@@SAKXZ
{
    __DEBUG_ASM(65C5560);
    // chunk 0x65C5560 _sub_65C5560
    asm("loc_65C5560: mov _data_65CA254,%eax;");
    asm("loc_65C5565: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C5570() // ?CrashCleanup@CDPServer@@SAXXZ
{
    __DEBUG_ASM(65C5570);
    // chunk 0x65C5570 _sub_65C5570
    asm("loc_65C5570: mov _data_65CA284,%eax;");
    asm("loc_65C5575: test %eax,%eax;");
    asm("loc_65C5577: je loc_65C5588;");
    asm("loc_65C5579: mov 4(%eax),%eax;");
    asm("loc_65C557C: test %eax,%eax;");
    asm("loc_65C557E: je loc_65C5588;");
    asm("loc_65C5580: mov (%eax),%ecx;");
    asm("loc_65C5582: push $0;");
    asm("loc_65C5584: push %eax;");
    asm("loc_65C5585: calll *0x5C(%ecx);");
    asm("loc_65C5588: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C5590() // _sub_65C5590
{
    __DEBUG_ASM(65C5590);
    // chunk 0x65C5590 _sub_65C5590
    asm("loc_65C5590: mov 8(%esp),%eax;");
    asm("loc_65C5594: mov (%eax),%edx;");
    asm("loc_65C5596: push %esi;");
    asm("loc_65C5597: mov %ecx,%esi;");
    asm("loc_65C5599: mov 4(%eax),%ecx;");
    asm("loc_65C559C: push %edi;");
    asm("loc_65C559D: mov (%eax),%edi;");
    asm("loc_65C559F: mov %edx,(%ecx);");
    asm("loc_65C55A1: mov (%eax),%ecx;");
    asm("loc_65C55A3: mov 4(%eax),%edx;");
    asm("loc_65C55A6: push %eax;");
    asm("loc_65C55A7: mov %edx,4(%ecx);");
    asm("loc_65C55AA: call _sub_65C6A60;");
    asm("loc_65C55AF: mov 8(%esi),%eax;");
    asm("loc_65C55B2: add $4,%esp;");
    asm("loc_65C55B5: dec %eax;");
    asm("loc_65C55B6: mov %eax,8(%esi);");
    asm("loc_65C55B9: mov 0xC(%esp),%eax;");
    asm("loc_65C55BD: mov %edi,(%eax);");
    asm("loc_65C55BF: pop %edi;");
    asm("loc_65C55C0: pop %esi;");
    asm("loc_65C55C1: ret $8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C55D0() // ?OnReceive@IDPMsgHandler@@UAEXPAEK@Z
{
    __DEBUG_ASM(65C55D0);
    // chunk 0x65C55D0 _sub_65C55D0
    asm("loc_65C55D0: ret $8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C55E0() // _sub_65C55E0
{
    __DEBUG_ASM(65C55E0);
    // chunk 0x65C55E0 _sub_65C55E0
    asm("loc_65C55E0: mov 4(%esp),%ecx;");
    asm("loc_65C55E4: mov 8(%esp),%edx;");
    asm("loc_65C55E8: cmp %edx,%ecx;");
    asm("loc_65C55EA: mov 0xC(%esp),%eax;");
    asm("loc_65C55EE: je loc_65C5604;");
    asm("loc_65C55F0: push %esi;");
    asm("loc_65C55F1: test %eax,%eax;");
    asm("loc_65C55F3: je loc_65C55F9;");
    asm("loc_65C55F5: mov (%ecx),%esi;");
    asm("loc_65C55F7: mov %esi,(%eax);");
    asm("loc_65C55F9: add $4,%ecx;");
    asm("loc_65C55FC: add $4,%eax;");
    asm("loc_65C55FF: cmp %edx,%ecx;");
    asm("loc_65C5601: jne loc_65C55F1;");
    asm("loc_65C5603: pop %esi;");
    asm("loc_65C5604: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C5610() // _sub_65C5610
{
    __DEBUG_ASM(65C5610);
    // chunk 0x65C5610 _sub_65C5610
    asm("loc_65C5610: mov 8(%esp),%eax;");
    asm("loc_65C5614: test %eax,%eax;");
    asm("loc_65C5616: jbe loc_65C5632;");
    asm("loc_65C5618: mov 0xC(%esp),%edx;");
    asm("loc_65C561C: mov %eax,%ecx;");
    asm("loc_65C561E: mov 4(%esp),%eax;");
    asm("loc_65C5622: push %esi;");
    asm("loc_65C5623: test %eax,%eax;");
    asm("loc_65C5625: je loc_65C562B;");
    asm("loc_65C5627: mov (%edx),%esi;");
    asm("loc_65C5629: mov %esi,(%eax);");
    asm("loc_65C562B: add $4,%eax;");
    asm("loc_65C562E: dec %ecx;");
    asm("loc_65C562F: jne loc_65C5623;");
    asm("loc_65C5631: pop %esi;");
    asm("loc_65C5632: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C5640() // _sub_65C5640
{
    __DEBUG_ASM(65C5640);
    // chunk 0x65C5640 _sub_65C5640
    asm("loc_65C5640: push %ecx;");
    asm("loc_65C5641: mov 3(%esp),%al;");
    asm("loc_65C5645: push %esi;");
    asm("loc_65C5646: mov %ecx,%esi;");
    asm("loc_65C5648: push $0xC;");
    asm("loc_65C564A: mov %al,4(%esi);");
    asm("loc_65C564D: call _sub_65C6A66;");
    asm("loc_65C5652: mov %eax,(%eax);");
    asm("loc_65C5654: mov %eax,4(%eax);");
    asm("loc_65C5657: add $4,%esp;");
    asm("loc_65C565A: lea 0x10(%esi),%ecx;");
    asm("loc_65C565D: mov %eax,8(%esi);");
    asm("loc_65C5660: movl $0,0xC(%esi);");
    asm("loc_65C5667: push %ecx;");
    asm("loc_65C5668: movl $_off_65C7544,(%esi);");
    asm("loc_65C566E: calll *_import_65C7018;");
    asm("loc_65C5674: mov %esi,%eax;");
    asm("loc_65C5676: pop %esi;");
    asm("loc_65C5677: pop %ecx;");
    asm("loc_65C5678: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C5680() // _sub_65C5680
{
    __DEBUG_ASM(65C5680);
    // chunk 0x65C5680 _sub_65C5680
    asm("loc_65C5680: push %ebx;");
    asm("loc_65C5681: push %esi;");
    asm("loc_65C5682: push %edi;");
    asm("loc_65C5683: mov %ecx,%edi;");
    asm("loc_65C5685: lea 0x10(%edi),%eax;");
    asm("loc_65C5688: push %eax;");
    asm("loc_65C5689: movl $_off_65C7544,(%edi);");
    asm("loc_65C568F: calll *_import_65C7020;");
    asm("loc_65C5695: mov 8(%edi),%ebx;");
    asm("loc_65C5698: mov (%ebx),%esi;");
    asm("loc_65C569A: cmp %ebx,%esi;");
    asm("loc_65C569C: je loc_65C56C7;");
    asm("loc_65C569E: mov %edi,%edi;");
    asm("loc_65C56A0: mov %esi,%eax;");
    asm("loc_65C56A2: mov 4(%eax),%ecx;");
    asm("loc_65C56A5: mov (%eax),%edx;");
    asm("loc_65C56A7: mov (%esi),%esi;");
    asm("loc_65C56A9: mov %edx,(%ecx);");
    asm("loc_65C56AB: mov (%eax),%ecx;");
    asm("loc_65C56AD: mov 4(%eax),%edx;");
    asm("loc_65C56B0: push %eax;");
    asm("loc_65C56B1: mov %edx,4(%ecx);");
    asm("loc_65C56B4: call _sub_65C6A60;");
    asm("loc_65C56B9: mov 0xC(%edi),%ecx;");
    asm("loc_65C56BC: add $4,%esp;");
    asm("loc_65C56BF: dec %ecx;");
    asm("loc_65C56C0: cmp %ebx,%esi;");
    asm("loc_65C56C2: mov %ecx,0xC(%edi);");
    asm("loc_65C56C5: jne loc_65C56A0;");
    asm("loc_65C56C7: mov 8(%edi),%eax;");
    asm("loc_65C56CA: push %eax;");
    asm("loc_65C56CB: call _sub_65C6A60;");
    asm("loc_65C56D0: add $4,%esp;");
    asm("loc_65C56D3: xor %eax,%eax;");
    asm("loc_65C56D5: mov %eax,8(%edi);");
    asm("loc_65C56D8: mov %eax,0xC(%edi);");
    asm("loc_65C56DB: pop %edi;");
    asm("loc_65C56DC: pop %esi;");
    asm("loc_65C56DD: pop %ebx;");
    asm("loc_65C56DE: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C56E0() // _sub_65C56E0
{
    __DEBUG_ASM(65C56E0);
    // chunk 0x65C56E0 _sub_65C56E0
    asm("loc_65C56E0: push %esi;");
    asm("loc_65C56E1: mov %ecx,%esi;");
    asm("loc_65C56E3: call _sub_65C5680;");
    asm("loc_65C56E8: testb $1,8(%esp);");
    asm("loc_65C56ED: je loc_65C56F8;");
    asm("loc_65C56EF: push %esi;");
    asm("loc_65C56F0: call _sub_65C6A60;");
    asm("loc_65C56F5: add $4,%esp;");
    asm("loc_65C56F8: mov %esi,%eax;");
    asm("loc_65C56FA: pop %esi;");
    asm("loc_65C56FB: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C5700() // _sub_65C5700
{
    __DEBUG_ASM(65C5700);
    // chunk 0x65C5700 _sub_65C5700
    asm("loc_65C5700: mov 4(%esp),%eax;");
    asm("loc_65C5704: test %eax,%eax;");
    asm("loc_65C5706: je loc_65C5710;");
    asm("loc_65C5708: mov 8(%esp),%ecx;");
    asm("loc_65C570C: mov (%ecx),%edx;");
    asm("loc_65C570E: mov %edx,(%eax);");
    asm("loc_65C5710: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C5720() // _sub_65C5720
{
    __DEBUG_ASM(65C5720);
    // chunk 0x65C5720 _sub_65C5720
    asm("loc_65C5720: mov $_data_65CA2A0,%ecx;");
    asm("loc_65C5725: call _sub_65C57A0;");
    asm("loc_65C572A: push $_sub_65C5740;");
    asm("loc_65C572F: call _sub_65C6AAC;");
    asm("loc_65C5734: pop %ecx;");
    asm("loc_65C5735: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C5740() // _sub_65C5740
{
    __DEBUG_ASM(65C5740);
    // chunk 0x65C5740 _sub_65C5740
    asm("loc_65C5740: mov $_data_65CA2A0,%ecx;");
    asm("loc_65C5745: jmp loc_65C5750;");
    asm("loc_65C574A: nop;");
    asm("loc_65C574B: nop;");
    asm("loc_65C574C: nop;");
    asm("loc_65C574D: nop;");
    asm("loc_65C574E: nop;");
    asm("loc_65C574F: nop;");
    asm("loc_65C5750: push %ebx;");
    asm("loc_65C5751: push %esi;");
    asm("loc_65C5752: push %edi;");
    asm("loc_65C5753: mov %ecx,%edi;");
    asm("loc_65C5755: mov 4(%edi),%ebx;");
    asm("loc_65C5758: mov (%ebx),%esi;");
    asm("loc_65C575A: cmp %ebx,%esi;");
    asm("loc_65C575C: je loc_65C5787;");
    asm("loc_65C575E: mov %edi,%edi;");
    asm("loc_65C5760: mov %esi,%eax;");
    asm("loc_65C5762: mov 4(%eax),%ecx;");
    asm("loc_65C5765: mov (%eax),%edx;");
    asm("loc_65C5767: mov (%esi),%esi;");
    asm("loc_65C5769: mov %edx,(%ecx);");
    asm("loc_65C576B: mov (%eax),%ecx;");
    asm("loc_65C576D: mov 4(%eax),%edx;");
    asm("loc_65C5770: push %eax;");
    asm("loc_65C5771: mov %edx,4(%ecx);");
    asm("loc_65C5774: call _sub_65C6A60;");
    asm("loc_65C5779: mov 8(%edi),%ecx;");
    asm("loc_65C577C: add $4,%esp;");
    asm("loc_65C577F: dec %ecx;");
    asm("loc_65C5780: cmp %ebx,%esi;");
    asm("loc_65C5782: mov %ecx,8(%edi);");
    asm("loc_65C5785: jne loc_65C5760;");
    asm("loc_65C5787: mov 4(%edi),%eax;");
    asm("loc_65C578A: push %eax;");
    asm("loc_65C578B: call _sub_65C6A60;");
    asm("loc_65C5790: add $4,%esp;");
    asm("loc_65C5793: xor %eax,%eax;");
    asm("loc_65C5795: mov %eax,4(%edi);");
    asm("loc_65C5798: mov %eax,8(%edi);");
    asm("loc_65C579B: pop %edi;");
    asm("loc_65C579C: pop %esi;");
    asm("loc_65C579D: pop %ebx;");
    asm("loc_65C579E: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C57A0() // _sub_65C57A0
{
    __DEBUG_ASM(65C57A0);
    // chunk 0x65C57A0 _sub_65C57A0
    asm("loc_65C57A0: push %ecx;");
    asm("loc_65C57A1: mov 3(%esp),%al;");
    asm("loc_65C57A5: push %esi;");
    asm("loc_65C57A6: mov %ecx,%esi;");
    asm("loc_65C57A8: push $0xC;");
    asm("loc_65C57AA: mov %al,(%esi);");
    asm("loc_65C57AC: call _sub_65C6A66;");
    asm("loc_65C57B1: mov %eax,(%eax);");
    asm("loc_65C57B3: mov %eax,4(%eax);");
    asm("loc_65C57B6: mov %eax,4(%esi);");
    asm("loc_65C57B9: add $4,%esp;");
    asm("loc_65C57BC: movl $0,8(%esi);");
    asm("loc_65C57C3: mov %esi,%eax;");
    asm("loc_65C57C5: pop %esi;");
    asm("loc_65C57C6: pop %ecx;");
    asm("loc_65C57C7: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C57D0() // ?Shutdown@CGunWrapper@@SAXXZ
{
    __DEBUG_ASM(65C57D0);
    // chunk 0x65C57D0 _sub_65C57D0
    asm("loc_65C57D0: mov _data_65CA2A4,%eax;");
    asm("loc_65C57D5: push %esi;");
    asm("loc_65C57D6: push %edi;");
    asm("loc_65C57D7: mov (%eax),%edi;");
    asm("loc_65C57D9: cmp %eax,%edi;");
    asm("loc_65C57DB: je loc_65C5808;");
    asm("loc_65C57DD: push %ebx;");
    asm("loc_65C57DE: mov _import_65C7034,%ebx;");
    asm("loc_65C57E4: push %ebp;");
    asm("loc_65C57E5: mov _import_65C701C,%ebp;");
    asm("loc_65C57EB: nop;");
    asm("loc_65C57EC: lea (%esp),%esp;");
    asm("loc_65C57F0: mov 8(%edi),%esi;");
    asm("loc_65C57F3: push $0xFFFFFFFF;");
    asm("loc_65C57F5: push %esi;");
    asm("loc_65C57F6: call *%ebx;");
    asm("loc_65C57F8: push %esi;");
    asm("loc_65C57F9: call *%ebp;");
    asm("loc_65C57FB: mov (%edi),%edi;");
    asm("loc_65C57FD: mov _data_65CA2A4,%eax;");
    asm("loc_65C5802: cmp %eax,%edi;");
    asm("loc_65C5804: jne loc_65C57F0;");
    asm("loc_65C5806: pop %ebp;");
    asm("loc_65C5807: pop %ebx;");
    asm("loc_65C5808: mov (%eax),%esi;");
    asm("loc_65C580A: cmp %eax,%esi;");
    asm("loc_65C580C: mov %eax,%edi;");
    asm("loc_65C580E: je loc_65C583D;");
    asm("loc_65C5810: mov %esi,%eax;");
    asm("loc_65C5812: mov 4(%eax),%ecx;");
    asm("loc_65C5815: mov (%eax),%edx;");
    asm("loc_65C5817: mov (%esi),%esi;");
    asm("loc_65C5819: mov %edx,(%ecx);");
    asm("loc_65C581B: mov (%eax),%ecx;");
    asm("loc_65C581D: mov 4(%eax),%edx;");
    asm("loc_65C5820: push %eax;");
    asm("loc_65C5821: mov %edx,4(%ecx);");
    asm("loc_65C5824: call _sub_65C6A60;");
    asm("loc_65C5829: mov _data_65CA2A8,%ecx;");
    asm("loc_65C582F: add $4,%esp;");
    asm("loc_65C5832: dec %ecx;");
    asm("loc_65C5833: cmp %edi,%esi;");
    asm("loc_65C5835: mov %ecx,_data_65CA2A8;");
    asm("loc_65C583B: jne loc_65C5810;");
    asm("loc_65C583D: pop %edi;");
    asm("loc_65C583E: pop %esi;");
    asm("loc_65C583F: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C5840() // ??0CGunWrapper@@QAE@PBDAAU_GUID@@0KPAG@Z
{
    __DEBUG_ASM(65C5840);
    // chunk 0x65C5840 _sub_65C5840
    asm("loc_65C5840: push %ebx;");
    asm("loc_65C5841: push %ebp;");
    asm("loc_65C5842: mov 0x14(%esp),%ebp;");
    asm("loc_65C5846: push %esi;");
    asm("loc_65C5847: mov %ecx,%esi;");
    asm("loc_65C5849: xor %ebx,%ebx;");
    asm("loc_65C584B: push %edi;");
    asm("loc_65C584C: lea 0xC(%esi),%edi;");
    asm("loc_65C584F: push %ebp;");
    asm("loc_65C5850: movl $_off_65C7570,(%esi);");
    asm("loc_65C5856: mov %ebx,4(%esi);");
    asm("loc_65C5859: mov %ebx,(%edi);");
    asm("loc_65C585B: mov %ebx,0x10(%esi);");
    asm("loc_65C585E: mov %ebx,0x14(%esi);");
    asm("loc_65C5861: mov %bl,8(%esi);");
    asm("loc_65C5864: calll *_import_65C7088;");
    asm("loc_65C586A: mov 0x18(%esp),%ecx;");
    asm("loc_65C586E: add $4,%esp;");
    asm("loc_65C5871: mov %eax,0x1C(%esi);");
    asm("loc_65C5874: mov 0x20(%esp),%eax;");
    asm("loc_65C5878: push %ecx;");
    asm("loc_65C5879: mov %eax,0x20(%esi);");
    asm("loc_65C587C: mov %ebx,0x18(%esi);");
    asm("loc_65C587F: mov %ebx,0x24(%esi);");
    asm("loc_65C5882: calll *_import_65C703C;");
    asm("loc_65C5888: cmp %ebx,%eax;");
    asm("loc_65C588A: mov %eax,4(%esi);");
    asm("loc_65C588D: je loc_65C590A;");
    asm("loc_65C588F: push $_data_65C755C;");
    asm("loc_65C5894: push %eax;");
    asm("loc_65C5895: calll *_import_65C7038;");
    asm("loc_65C589B: cmp %ebx,%eax;");
    asm("loc_65C589D: je loc_65C590A;");
    asm("loc_65C589F: lea 0x1C(%esp),%edx;");
    asm("loc_65C58A3: push %edx;");
    asm("loc_65C58A4: push $_data_65C7610;");
    asm("loc_65C58A9: push $_data_65CA034;");
    asm("loc_65C58AE: mov %ebx,0x28(%esp);");
    asm("loc_65C58B2: call *%eax;");
    asm("loc_65C58B4: test %eax,%eax;");
    asm("loc_65C58B6: jne loc_65C590A;");
    asm("loc_65C58B8: mov 0x1C(%esp),%eax;");
    asm("loc_65C58BC: mov (%eax),%ecx;");
    asm("loc_65C58BE: push %edi;");
    asm("loc_65C58BF: push $_data_65CA024;");
    asm("loc_65C58C4: push %ebx;");
    asm("loc_65C58C5: push %eax;");
    asm("loc_65C58C6: calll *0xC(%ecx);");
    asm("loc_65C58C9: test %eax,%eax;");
    asm("loc_65C58CB: jne loc_65C590A;");
    asm("loc_65C58CD: mov 0x1C(%esp),%eax;");
    asm("loc_65C58D1: mov (%eax),%edx;");
    asm("loc_65C58D3: push %eax;");
    asm("loc_65C58D4: calll *8(%edx);");
    asm("loc_65C58D7: mov 0x24(%esp),%ecx;");
    asm("loc_65C58DB: cmp %ebx,%ecx;");
    asm("loc_65C58DD: jne loc_65C58E4;");
    asm("loc_65C58DF: mov $_data_65C7558,%ecx;");
    asm("loc_65C58E4: mov (%edi),%eax;");
    asm("loc_65C58E6: mov (%eax),%edx;");
    asm("loc_65C58E8: push $_data_65C7548;");
    asm("loc_65C58ED: push %ebx;");
    asm("loc_65C58EE: push %ecx;");
    asm("loc_65C58EF: mov 0x24(%esp),%ecx;");
    asm("loc_65C58F3: push %ecx;");
    asm("loc_65C58F4: push %eax;");
    asm("loc_65C58F5: calll *0xC(%edx);");
    asm("loc_65C58F8: test %eax,%eax;");
    asm("loc_65C58FA: jne loc_65C590A;");
    asm("loc_65C58FC: mov 0x20(%esp),%eax;");
    asm("loc_65C5900: mov (%edi),%edi;");
    asm("loc_65C5902: mov (%edi),%edx;");
    asm("loc_65C5904: push %eax;");
    asm("loc_65C5905: push %ebp;");
    asm("loc_65C5906: push %edi;");
    asm("loc_65C5907: calll *0x10(%edx);");
    asm("loc_65C590A: pop %edi;");
    asm("loc_65C590B: mov %esi,%eax;");
    asm("loc_65C590D: pop %esi;");
    asm("loc_65C590E: pop %ebp;");
    asm("loc_65C590F: pop %ebx;");
    asm("loc_65C5910: ret $0x14;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C5920() // ??1CGunWrapper@@UAE@XZ
{
    __DEBUG_ASM(65C5920);
    // chunk 0x65C5920 _sub_65C5920
    asm("loc_65C5920: sub $0xC,%esp;");
    asm("loc_65C5923: push %ebx;");
    asm("loc_65C5924: push %esi;");
    asm("loc_65C5925: push %edi;");
    asm("loc_65C5926: mov %ecx,%edi;");
    asm("loc_65C5928: push $0x14;");
    asm("loc_65C592A: movl $_off_65C7570,(%edi);");
    asm("loc_65C5930: call _sub_65C6A66;");
    asm("loc_65C5935: xor %ebx,%ebx;");
    asm("loc_65C5937: add $4,%esp;");
    asm("loc_65C593A: cmp %ebx,%eax;");
    asm("loc_65C593C: je loc_65C5951;");
    asm("loc_65C593E: mov %ebx,(%eax);");
    asm("loc_65C5940: mov %ebx,4(%eax);");
    asm("loc_65C5943: mov %ebx,8(%eax);");
    asm("loc_65C5946: mov %ebx,0xC(%eax);");
    asm("loc_65C5949: movb $1,0x10(%eax);");
    asm("loc_65C594D: mov %eax,%esi;");
    asm("loc_65C594F: jmp loc_65C5953;");
    asm("loc_65C5951: xor %esi,%esi;");
    asm("loc_65C5953: cmp %bl,0x10(%esi);");
    asm("loc_65C5956: mov 0x14(%edi),%eax;");
    asm("loc_65C5959: mov 0x10(%edi),%ecx;");
    asm("loc_65C595C: mov 0xC(%edi),%edx;");
    asm("loc_65C595F: push %ebp;");
    asm("loc_65C5960: mov 4(%edi),%ebp;");
    asm("loc_65C5963: je loc_65C5973;");
    asm("loc_65C5965: mov %bl,0x10(%esi);");
    asm("loc_65C5968: mov %ebp,(%esi);");
    asm("loc_65C596A: mov %edx,4(%esi);");
    asm("loc_65C596D: mov %ecx,8(%esi);");
    asm("loc_65C5970: mov %eax,0xC(%esi);");
    asm("loc_65C5973: lea 0x18(%esp),%eax;");
    asm("loc_65C5977: push %eax;");
    asm("loc_65C5978: push $4;");
    asm("loc_65C597A: push %esi;");
    asm("loc_65C597B: push $_sub_65C5A90;");
    asm("loc_65C5980: push %ebx;");
    asm("loc_65C5981: push %ebx;");
    asm("loc_65C5982: mov %ebx,4(%edi);");
    asm("loc_65C5985: mov %ebx,0xC(%edi);");
    asm("loc_65C5988: mov %ebx,0x10(%edi);");
    asm("loc_65C598B: mov %ebx,0x14(%edi);");
    asm("loc_65C598E: calll *_import_65C7048;");
    asm("loc_65C5994: cmp %ebx,%eax;");
    asm("loc_65C5996: mov %eax,0x10(%esp);");
    asm("loc_65C599A: jne loc_65C5A0F;");
    asm("loc_65C599C: cmp %bl,0x10(%esi);");
    asm("loc_65C599F: jne loc_65C5A04;");
    asm("loc_65C59A1: mov (%esi),%ecx;");
    asm("loc_65C59A3: push $_data_65C755C;");
    asm("loc_65C59A8: push %ecx;");
    asm("loc_65C59A9: calll *_import_65C7038;");
    asm("loc_65C59AF: test %eax,%eax;");
    asm("loc_65C59B1: je loc_65C59F5;");
    asm("loc_65C59B3: mov 8(%esi),%eax;");
    asm("loc_65C59B6: cmp %ebx,%eax;");
    asm("loc_65C59B8: je loc_65C59C3;");
    asm("loc_65C59BA: mov (%eax),%edx;");
    asm("loc_65C59BC: push %eax;");
    asm("loc_65C59BD: calll *8(%edx);");
    asm("loc_65C59C0: mov %ebx,8(%esi);");
    asm("loc_65C59C3: mov 0xC(%esi),%eax;");
    asm("loc_65C59C6: cmp %ebx,%eax;");
    asm("loc_65C59C8: je loc_65C59D3;");
    asm("loc_65C59CA: mov (%eax),%ecx;");
    asm("loc_65C59CC: push %eax;");
    asm("loc_65C59CD: calll *8(%ecx);");
    asm("loc_65C59D0: mov %ebx,0xC(%esi);");
    asm("loc_65C59D3: mov 4(%esi),%eax;");
    asm("loc_65C59D6: cmp %ebx,%eax;");
    asm("loc_65C59D8: je loc_65C59EC;");
    asm("loc_65C59DA: mov (%eax),%edx;");
    asm("loc_65C59DC: push %eax;");
    asm("loc_65C59DD: calll *0x14(%edx);");
    asm("loc_65C59E0: mov 4(%esi),%eax;");
    asm("loc_65C59E3: mov (%eax),%ecx;");
    asm("loc_65C59E5: push %eax;");
    asm("loc_65C59E6: calll *8(%ecx);");
    asm("loc_65C59E9: mov %ebx,4(%esi);");
    asm("loc_65C59EC: mov (%esi),%edx;");
    asm("loc_65C59EE: push %edx;");
    asm("loc_65C59EF: calll *_import_65C7044;");
    asm("loc_65C59F5: mov %ebx,(%esi);");
    asm("loc_65C59F7: mov %ebx,4(%esi);");
    asm("loc_65C59FA: mov %ebx,8(%esi);");
    asm("loc_65C59FD: mov %ebx,0xC(%esi);");
    asm("loc_65C5A00: movb $1,0x10(%esi);");
    asm("loc_65C5A04: push %esi;");
    asm("loc_65C5A05: call _sub_65C6A60;");
    asm("loc_65C5A0A: add $4,%esp;");
    asm("loc_65C5A0D: jmp loc_65C5A63;");
    asm("loc_65C5A0F: mov _data_65CA2A4,%eax;");
    asm("loc_65C5A14: mov 4(%eax),%ebp;");
    asm("loc_65C5A17: lea 4(%eax),%esi;");
    asm("loc_65C5A1A: push $0xC;");
    asm("loc_65C5A1C: mov %eax,0x18(%esp);");
    asm("loc_65C5A20: call _sub_65C6A66;");
    asm("loc_65C5A25: mov 0x18(%esp),%ecx;");
    asm("loc_65C5A29: add $4,%esp;");
    asm("loc_65C5A2C: cmp %ebx,%ebp;");
    asm("loc_65C5A2E: mov %ecx,(%eax);");
    asm("loc_65C5A30: jne loc_65C5A34;");
    asm("loc_65C5A32: mov %eax,%ebp;");
    asm("loc_65C5A34: mov %ebp,4(%eax);");
    asm("loc_65C5A37: mov %eax,(%esi);");
    asm("loc_65C5A39: mov 4(%eax),%edx;");
    asm("loc_65C5A3C: mov %eax,(%edx);");
    asm("loc_65C5A3E: add $8,%eax;");
    asm("loc_65C5A41: cmp %ebx,%eax;");
    asm("loc_65C5A43: je loc_65C5A4B;");
    asm("loc_65C5A45: mov 0x10(%esp),%ecx;");
    asm("loc_65C5A49: mov %ecx,(%eax);");
    asm("loc_65C5A4B: mov _data_65CA2A8,%ecx;");
    asm("loc_65C5A51: mov 0x10(%esp),%edx;");
    asm("loc_65C5A55: inc %ecx;");
    asm("loc_65C5A56: push %edx;");
    asm("loc_65C5A57: mov %ecx,_data_65CA2A8;");
    asm("loc_65C5A5D: calll *_import_65C7040;");
    asm("loc_65C5A63: mov 0x1C(%edi),%eax;");
    asm("loc_65C5A66: cmp %ebx,%eax;");
    asm("loc_65C5A68: pop %ebp;");
    asm("loc_65C5A69: je loc_65C5A78;");
    asm("loc_65C5A6B: push %eax;");
    asm("loc_65C5A6C: calll *_import_65C70B8;");
    asm("loc_65C5A72: add $4,%esp;");
    asm("loc_65C5A75: mov %ebx,0x1C(%edi);");
    asm("loc_65C5A78: mov %bl,8(%edi);");
    asm("loc_65C5A7B: pop %edi;");
    asm("loc_65C5A7C: pop %esi;");
    asm("loc_65C5A7D: pop %ebx;");
    asm("loc_65C5A7E: add $0xC,%esp;");
    asm("loc_65C5A81: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C5A90() // _StartAddress
{
    __DEBUG_ASM(65C5A90);
    // chunk 0x65C5A90 _sub_65C5A90
    asm("loc_65C5A90: push %ebx;");
    asm("loc_65C5A91: push %esi;");
    asm("loc_65C5A92: xor %ebx,%ebx;");
    asm("loc_65C5A94: push %ebx;");
    asm("loc_65C5A95: calll *_import_65C70E8;");
    asm("loc_65C5A9B: cmp %ebx,%eax;");
    asm("loc_65C5A9D: mov 0xC(%esp),%esi;");
    asm("loc_65C5AA1: je loc_65C5AA8;");
    asm("loc_65C5AA3: cmp $1,%eax;");
    asm("loc_65C5AA6: jne loc_65C5B1A;");
    asm("loc_65C5AA8: cmp %ebx,%esi;");
    asm("loc_65C5AAA: je loc_65C5B14;");
    asm("loc_65C5AAC: cmp %bl,0x10(%esi);");
    asm("loc_65C5AAF: jne loc_65C5B14;");
    asm("loc_65C5AB1: mov (%esi),%eax;");
    asm("loc_65C5AB3: push $_data_65C755C;");
    asm("loc_65C5AB8: push %eax;");
    asm("loc_65C5AB9: calll *_import_65C7038;");
    asm("loc_65C5ABF: test %eax,%eax;");
    asm("loc_65C5AC1: je loc_65C5B05;");
    asm("loc_65C5AC3: mov 8(%esi),%eax;");
    asm("loc_65C5AC6: cmp %ebx,%eax;");
    asm("loc_65C5AC8: je loc_65C5AD3;");
    asm("loc_65C5ACA: mov (%eax),%ecx;");
    asm("loc_65C5ACC: push %eax;");
    asm("loc_65C5ACD: calll *8(%ecx);");
    asm("loc_65C5AD0: mov %ebx,8(%esi);");
    asm("loc_65C5AD3: mov 0xC(%esi),%eax;");
    asm("loc_65C5AD6: cmp %ebx,%eax;");
    asm("loc_65C5AD8: je loc_65C5AE3;");
    asm("loc_65C5ADA: mov (%eax),%edx;");
    asm("loc_65C5ADC: push %eax;");
    asm("loc_65C5ADD: calll *8(%edx);");
    asm("loc_65C5AE0: mov %ebx,0xC(%esi);");
    asm("loc_65C5AE3: mov 4(%esi),%eax;");
    asm("loc_65C5AE6: cmp %ebx,%eax;");
    asm("loc_65C5AE8: je loc_65C5AFC;");
    asm("loc_65C5AEA: mov (%eax),%ecx;");
    asm("loc_65C5AEC: push %eax;");
    asm("loc_65C5AED: calll *0x14(%ecx);");
    asm("loc_65C5AF0: mov 4(%esi),%eax;");
    asm("loc_65C5AF3: mov (%eax),%edx;");
    asm("loc_65C5AF5: push %eax;");
    asm("loc_65C5AF6: calll *8(%edx);");
    asm("loc_65C5AF9: mov %ebx,4(%esi);");
    asm("loc_65C5AFC: mov (%esi),%eax;");
    asm("loc_65C5AFE: push %eax;");
    asm("loc_65C5AFF: calll *_import_65C7044;");
    asm("loc_65C5B05: mov %ebx,(%esi);");
    asm("loc_65C5B07: mov %ebx,4(%esi);");
    asm("loc_65C5B0A: mov %ebx,8(%esi);");
    asm("loc_65C5B0D: mov %ebx,0xC(%esi);");
    asm("loc_65C5B10: movb $1,0x10(%esi);");
    asm("loc_65C5B14: calll *_import_65C70E4;");
    asm("loc_65C5B1A: cmp %ebx,%esi;");
    asm("loc_65C5B1C: je loc_65C5B27;");
    asm("loc_65C5B1E: push %esi;");
    asm("loc_65C5B1F: call _sub_65C6A60;");
    asm("loc_65C5B24: add $4,%esp;");
    asm("loc_65C5B27: pop %esi;");
    asm("loc_65C5B28: xor %eax,%eax;");
    asm("loc_65C5B2A: pop %ebx;");
    asm("loc_65C5B2B: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C5B30() // ?Read@CGunWrapper@@UAGJPAUGUNQueueMessage@Gun2@@@Z
{
    __DEBUG_ASM(65C5B30);
    // chunk 0x65C5B30 _sub_65C5B30
    asm("loc_65C5B30: xor %eax,%eax;");
    asm("loc_65C5B32: ret $8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C5B40() // ?GetStatus@CGunWrapper@@QAE?AW4ConnectStatus@IGunConnection@@XZ
{
    __DEBUG_ASM(65C5B40);
    // chunk 0x65C5B40 _sub_65C5B40
    asm("loc_65C5B40: mov 0x18(%ecx),%eax;");
    asm("loc_65C5B43: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C5B50() // ?Update@CGunWrapper@@QAEXXZ
{
    __DEBUG_ASM(65C5B50);
    // chunk 0x65C5B50 _sub_65C5B50
    asm("loc_65C5B50: push %ecx;");
    asm("loc_65C5B51: push %esi;");
    asm("loc_65C5B52: mov %ecx,%esi;");
    asm("loc_65C5B54: mov 0xC(%esi),%eax;");
    asm("loc_65C5B57: test %eax,%eax;");
    asm("loc_65C5B59: push %edi;");
    asm("loc_65C5B5A: movl $0,8(%esp);");
    asm("loc_65C5B62: je loc_65C5C17;");
    asm("loc_65C5B68: mov (%eax),%ecx;");
    asm("loc_65C5B6A: lea 8(%esp),%edx;");
    asm("loc_65C5B6E: push %edx;");
    asm("loc_65C5B6F: push %eax;");
    asm("loc_65C5B70: calll *0x18(%ecx);");
    asm("loc_65C5B73: mov 8(%esp),%eax;");
    asm("loc_65C5B77: cmp $4,%eax;");
    asm("loc_65C5B7A: je loc_65C5B85;");
    asm("loc_65C5B7C: cmp %eax,0x18(%esi);");
    asm("loc_65C5B7F: je loc_65C5C17;");
    asm("loc_65C5B85: cmp $2,%eax;");
    asm("loc_65C5B88: mov %eax,0x18(%esi);");
    asm("loc_65C5B8B: je loc_65C5BE7;");
    asm("loc_65C5B8D: jle loc_65C5C17;");
    asm("loc_65C5B93: cmp $4,%eax;");
    asm("loc_65C5B96: jg loc_65C5C17;");
    asm("loc_65C5B98: mov _import_65C70D8,%edi;");
    asm("loc_65C5B9E: call *%edi;");
    asm("loc_65C5BA0: cmp 0x24(%esi),%eax;");
    asm("loc_65C5BA3: jbe loc_65C5C17;");
    asm("loc_65C5BA5: mov 0xC(%esi),%eax;");
    asm("loc_65C5BA8: mov (%eax),%ecx;");
    asm("loc_65C5BAA: xor %edx,%edx;");
    asm("loc_65C5BAC: mov 0x20(%esi),%dx;");
    asm("loc_65C5BB0: push %edx;");
    asm("loc_65C5BB1: mov 0x1C(%esi),%edx;");
    asm("loc_65C5BB4: push %edx;");
    asm("loc_65C5BB5: push %eax;");
    asm("loc_65C5BB6: calll *0x10(%ecx);");
    asm("loc_65C5BB9: mov 0xC(%esi),%eax;");
    asm("loc_65C5BBC: mov (%eax),%ecx;");
    asm("loc_65C5BBE: lea 8(%esp),%edx;");
    asm("loc_65C5BC2: push %edx;");
    asm("loc_65C5BC3: push %eax;");
    asm("loc_65C5BC4: calll *0x18(%ecx);");
    asm("loc_65C5BC7: cmpl $4,8(%esp);");
    asm("loc_65C5BCC: jne loc_65C5BDC;");
    asm("loc_65C5BCE: call *%edi;");
    asm("loc_65C5BD0: add $0x2710,%eax;");
    asm("loc_65C5BD5: pop %edi;");
    asm("loc_65C5BD6: mov %eax,0x24(%esi);");
    asm("loc_65C5BD9: pop %esi;");
    asm("loc_65C5BDA: pop %ecx;");
    asm("loc_65C5BDB: ret;");
    asm("loc_65C5BDC: pop %edi;");
    asm("loc_65C5BDD: movl $0,0x24(%esi);");
    asm("loc_65C5BE4: pop %esi;");
    asm("loc_65C5BE5: pop %ecx;");
    asm("loc_65C5BE6: ret;");
    asm("loc_65C5BE7: mov 0x10(%esi),%eax;");
    asm("loc_65C5BEA: test %eax,%eax;");
    asm("loc_65C5BEC: lea 0x10(%esi),%ecx;");
    asm("loc_65C5BEF: jne loc_65C5BFF;");
    asm("loc_65C5BF1: mov 0xC(%esi),%eax;");
    asm("loc_65C5BF4: mov (%eax),%edx;");
    asm("loc_65C5BF6: push %ecx;");
    asm("loc_65C5BF7: push $_data_65CA054;");
    asm("loc_65C5BFC: push %eax;");
    asm("loc_65C5BFD: calll *(%edx);");
    asm("loc_65C5BFF: mov 0x14(%esi),%ecx;");
    asm("loc_65C5C02: test %ecx,%ecx;");
    asm("loc_65C5C04: lea 0x14(%esi),%eax;");
    asm("loc_65C5C07: jne loc_65C5C17;");
    asm("loc_65C5C09: mov 0xC(%esi),%esi;");
    asm("loc_65C5C0C: mov (%esi),%ecx;");
    asm("loc_65C5C0E: push %eax;");
    asm("loc_65C5C0F: push $_data_65CA044;");
    asm("loc_65C5C14: push %esi;");
    asm("loc_65C5C15: calll *(%ecx);");
    asm("loc_65C5C17: pop %edi;");
    asm("loc_65C5C18: pop %esi;");
    asm("loc_65C5C19: pop %ecx;");
    asm("loc_65C5C1A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C5C20() // ?GetHost@CGunWrapper@@QAEPAUIGunHost@@XZ
{
    __DEBUG_ASM(65C5C20);
    // chunk 0x65C5C20 _sub_65C5C20
    asm("loc_65C5C20: mov 0x10(%ecx),%eax;");
    asm("loc_65C5C23: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C5C30() // ?GetBrowser@CGunWrapper@@QAEPAUIGunBrowser@@XZ
{
    __DEBUG_ASM(65C5C30);
    // chunk 0x65C5C30 _sub_65C5C30
    asm("loc_65C5C30: mov 0x14(%ecx),%eax;");
    asm("loc_65C5C33: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C5C40() // ?DispatchQueue@CGunWrapper@@QAEXXZ
{
    __DEBUG_ASM(65C5C40);
    // chunk 0x65C5C40 _sub_65C5C40
    asm("loc_65C5C40: mov 0xC(%ecx),%eax;");
    asm("loc_65C5C43: test %eax,%eax;");
    asm("loc_65C5C45: je loc_65C5C4E;");
    asm("loc_65C5C47: mov (%eax),%edx;");
    asm("loc_65C5C49: push %ecx;");
    asm("loc_65C5C4A: push %eax;");
    asm("loc_65C5C4B: calll *0x20(%edx);");
    asm("loc_65C5C4E: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C5C50() // ??0CGunWrapper@@QAE@ABV0@@Z
{
    __DEBUG_ASM(65C5C50);
    // chunk 0x65C5C50 _sub_65C5C50
    asm("loc_65C5C50: mov %ecx,%eax;");
    asm("loc_65C5C52: mov 4(%esp),%ecx;");
    asm("loc_65C5C56: movl $_off_65C7578,(%eax);");
    asm("loc_65C5C5C: mov 4(%ecx),%edx;");
    asm("loc_65C5C5F: mov %edx,4(%eax);");
    asm("loc_65C5C62: mov 8(%ecx),%dl;");
    asm("loc_65C5C65: mov %dl,8(%eax);");
    asm("loc_65C5C68: mov 0xC(%ecx),%edx;");
    asm("loc_65C5C6B: mov %edx,0xC(%eax);");
    asm("loc_65C5C6E: mov 0x10(%ecx),%edx;");
    asm("loc_65C5C71: mov %edx,0x10(%eax);");
    asm("loc_65C5C74: mov 0x14(%ecx),%edx;");
    asm("loc_65C5C77: mov %edx,0x14(%eax);");
    asm("loc_65C5C7A: mov 0x18(%ecx),%edx;");
    asm("loc_65C5C7D: mov %edx,0x18(%eax);");
    asm("loc_65C5C80: mov 0x1C(%ecx),%edx;");
    asm("loc_65C5C83: mov %edx,0x1C(%eax);");
    asm("loc_65C5C86: mov 0x20(%ecx),%edx;");
    asm("loc_65C5C89: mov %edx,0x20(%eax);");
    asm("loc_65C5C8C: mov 0x24(%ecx),%ecx;");
    asm("loc_65C5C8F: mov %ecx,0x24(%eax);");
    asm("loc_65C5C92: movl $_off_65C7570,(%eax);");
    asm("loc_65C5C98: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C5CA0() // ??4CGunWrapper@@QAEAAV0@ABV0@@Z
{
    __DEBUG_ASM(65C5CA0);
    // chunk 0x65C5CA0 _sub_65C5CA0
    asm("loc_65C5CA0: mov %ecx,%eax;");
    asm("loc_65C5CA2: mov 4(%esp),%ecx;");
    asm("loc_65C5CA6: mov 4(%ecx),%edx;");
    asm("loc_65C5CA9: mov %edx,4(%eax);");
    asm("loc_65C5CAC: mov 8(%ecx),%dl;");
    asm("loc_65C5CAF: mov %dl,8(%eax);");
    asm("loc_65C5CB2: mov 0xC(%ecx),%edx;");
    asm("loc_65C5CB5: mov %edx,0xC(%eax);");
    asm("loc_65C5CB8: mov 0x10(%ecx),%edx;");
    asm("loc_65C5CBB: mov %edx,0x10(%eax);");
    asm("loc_65C5CBE: mov 0x14(%ecx),%edx;");
    asm("loc_65C5CC1: mov %edx,0x14(%eax);");
    asm("loc_65C5CC4: mov 0x18(%ecx),%edx;");
    asm("loc_65C5CC7: mov %edx,0x18(%eax);");
    asm("loc_65C5CCA: mov 0x1C(%ecx),%edx;");
    asm("loc_65C5CCD: mov %edx,0x1C(%eax);");
    asm("loc_65C5CD0: mov 0x20(%ecx),%edx;");
    asm("loc_65C5CD3: mov %edx,0x20(%eax);");
    asm("loc_65C5CD6: mov 0x24(%ecx),%ecx;");
    asm("loc_65C5CD9: mov %ecx,0x24(%eax);");
    asm("loc_65C5CDC: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C5CE0() // _sub_65C5CE0
{
    __DEBUG_ASM(65C5CE0);
    // chunk 0x65C5CE0 _sub_65C5CE0
    asm("loc_65C5CE0: push %ebx;");
    asm("loc_65C5CE1: mov 8(%esp),%bl;");
    asm("loc_65C5CE5: test $2,%bl;");
    asm("loc_65C5CE8: push %esi;");
    asm("loc_65C5CE9: mov %ecx,%esi;");
    asm("loc_65C5CEB: je loc_65C5D18;");
    asm("loc_65C5CED: mov -4(%esi),%eax;");
    asm("loc_65C5CF0: push %edi;");
    asm("loc_65C5CF1: push $_sub_65C5920;");
    asm("loc_65C5CF6: lea -4(%esi),%edi;");
    asm("loc_65C5CF9: push %eax;");
    asm("loc_65C5CFA: push $0x28;");
    asm("loc_65C5CFC: push %esi;");
    asm("loc_65C5CFD: call _sub_65C6AEF;");
    asm("loc_65C5D02: test $1,%bl;");
    asm("loc_65C5D05: je loc_65C5D10;");
    asm("loc_65C5D07: push %edi;");
    asm("loc_65C5D08: call _sub_65C6A60;");
    asm("loc_65C5D0D: add $4,%esp;");
    asm("loc_65C5D10: mov %edi,%eax;");
    asm("loc_65C5D12: pop %edi;");
    asm("loc_65C5D13: pop %esi;");
    asm("loc_65C5D14: pop %ebx;");
    asm("loc_65C5D15: ret $4;");
    asm("loc_65C5D18: mov %esi,%ecx;");
    asm("loc_65C5D1A: call _sub_65C5920;");
    asm("loc_65C5D1F: test $1,%bl;");
    asm("loc_65C5D22: je loc_65C5D2D;");
    asm("loc_65C5D24: push %esi;");
    asm("loc_65C5D25: call _sub_65C6A60;");
    asm("loc_65C5D2A: add $4,%esp;");
    asm("loc_65C5D2D: mov %esi,%eax;");
    asm("loc_65C5D2F: pop %esi;");
    asm("loc_65C5D30: pop %ebx;");
    asm("loc_65C5D31: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C5D40() // _DllMain@12
{
    __DEBUG_ASM(65C5D40);
    // chunk 0x65C5D40 _sub_65C5D40
    asm("loc_65C5D40: mov 8(%esp),%eax;");
    asm("loc_65C5D44: dec %eax;");
    asm("loc_65C5D45: jne loc_65C5D57;");
    asm("loc_65C5D47: mov 4(%esp),%eax;");
    asm("loc_65C5D4B: push %eax;");
    asm("loc_65C5D4C: mov %eax,_data_65CA2AC;");
    asm("loc_65C5D51: calll *_import_65C704C;");
    asm("loc_65C5D57: mov $1,%eax;");
    asm("loc_65C5D5C: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C5D60() // ??0MD5Hash@@QAE@XZ
{
    __DEBUG_ASM(65C5D60);
    // chunk 0x65C5D60 _sub_65C5D60
    asm("loc_65C5D60: mov %ecx,%eax;");
    asm("loc_65C5D62: xor %ecx,%ecx;");
    asm("loc_65C5D64: movl $_off_65C757C,(%eax);");
    asm("loc_65C5D6A: mov %ecx,0x18(%eax);");
    asm("loc_65C5D6D: mov %ecx,0x14(%eax);");
    asm("loc_65C5D70: movl $0x67452301,4(%eax);");
    asm("loc_65C5D77: movl $0xEFCDAB89,8(%eax);");
    asm("loc_65C5D7E: movl $0x98BADCFE,0xC(%eax);");
    asm("loc_65C5D85: movl $0x10325476,0x10(%eax);");
    asm("loc_65C5D8C: mov %cl,0x5C(%eax);");
    asm("loc_65C5D8F: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C5D90() // ??1MD5Hash@@UAE@XZ
{
    __DEBUG_ASM(65C5D90);
    // chunk 0x65C5D90 _sub_65C5D90
    asm("loc_65C5D90: movl $_off_65C757C,(%ecx);");
    asm("loc_65C5D96: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C5DA0() // ?Transform@MD5Hash@@IAEXPAE@Z
{
    __DEBUG_ASM(65C5DA0);
    // chunk 0x65C5DA0 _sub_65C5DA0
    asm("loc_65C5DA0: sub $0x44,%esp;");
    asm("loc_65C5DA3: mov 0x48(%esp),%edx;");
    asm("loc_65C5DA7: push %ebx;");
    asm("loc_65C5DA8: push %ebp;");
    asm("loc_65C5DA9: push %esi;");
    asm("loc_65C5DAA: push %edi;");
    asm("loc_65C5DAB: mov $0xFFFFFFFE,%edi;");
    asm("loc_65C5DB0: mov %ecx,0x10(%esp);");
    asm("loc_65C5DB4: lea 2(%edx),%eax;");
    asm("loc_65C5DB7: lea 0x14(%esp),%esi;");
    asm("loc_65C5DBB: sub %edx,%edi;");
    asm("loc_65C5DBD: lea (%ecx),%ecx;");
    asm("loc_65C5DC0: movzbl -1(%eax),%ebx;");
    asm("loc_65C5DC4: xor %edx,%edx;");
    asm("loc_65C5DC6: mov 1(%eax),%dh;");
    asm("loc_65C5DC9: add $4,%eax;");
    asm("loc_65C5DCC: add $4,%esi;");
    asm("loc_65C5DCF: mov -4(%eax),%dl;");
    asm("loc_65C5DD2: shl $8,%edx;");
    asm("loc_65C5DD5: or %ebx,%edx;");
    asm("loc_65C5DD7: movzbl -6(%eax),%ebx;");
    asm("loc_65C5DDB: shl $8,%edx;");
    asm("loc_65C5DDE: or %ebx,%edx;");
    asm("loc_65C5DE0: mov %edx,-4(%esi);");
    asm("loc_65C5DE3: lea (%edi,%eax),%edx;");
    asm("loc_65C5DE6: cmp $0x40,%edx;");
    asm("loc_65C5DE9: jb loc_65C5DC0;");
    asm("loc_65C5DEB: mov 8(%ecx),%edi;");
    asm("loc_65C5DEE: mov 0xC(%ecx),%esi;");
    asm("loc_65C5DF1: mov 0x10(%ecx),%edx;");
    asm("loc_65C5DF4: mov 4(%ecx),%ecx;");
    asm("loc_65C5DF7: mov 0x14(%esp),%ebp;");
    asm("loc_65C5DFB: mov %edi,%eax;");
    asm("loc_65C5DFD: not %eax;");
    asm("loc_65C5DFF: and %edx,%eax;");
    asm("loc_65C5E01: mov %esi,%ebx;");
    asm("loc_65C5E03: and %edi,%ebx;");
    asm("loc_65C5E05: or %ebx,%eax;");
    asm("loc_65C5E07: add %ebp,%eax;");
    asm("loc_65C5E09: lea -0x28955B88(%ecx,%eax),%ecx;");
    asm("loc_65C5E10: mov %ecx,%eax;");
    asm("loc_65C5E12: shl $7,%ecx;");
    asm("loc_65C5E15: mov 0x18(%esp),%ebp;");
    asm("loc_65C5E19: shr $0x19,%eax;");
    asm("loc_65C5E1C: or %ecx,%eax;");
    asm("loc_65C5E1E: add %edi,%eax;");
    asm("loc_65C5E20: mov %eax,%ecx;");
    asm("loc_65C5E22: not %ecx;");
    asm("loc_65C5E24: and %esi,%ecx;");
    asm("loc_65C5E26: mov %edi,%ebx;");
    asm("loc_65C5E28: and %eax,%ebx;");
    asm("loc_65C5E2A: or %ebx,%ecx;");
    asm("loc_65C5E2C: add %ebp,%ecx;");
    asm("loc_65C5E2E: lea -0x173848AA(%edx,%ecx),%ecx;");
    asm("loc_65C5E35: mov %ecx,%edx;");
    asm("loc_65C5E37: shl $0xC,%ecx;");
    asm("loc_65C5E3A: mov 0x1C(%esp),%ebp;");
    asm("loc_65C5E3E: shr $0x14,%edx;");
    asm("loc_65C5E41: or %ecx,%edx;");
    asm("loc_65C5E43: add %eax,%edx;");
    asm("loc_65C5E45: mov %edx,%ecx;");
    asm("loc_65C5E47: not %ecx;");
    asm("loc_65C5E49: and %edi,%ecx;");
    asm("loc_65C5E4B: mov %edx,%ebx;");
    asm("loc_65C5E4D: and %eax,%ebx;");
    asm("loc_65C5E4F: or %ebx,%ecx;");
    asm("loc_65C5E51: add %ebp,%ecx;");
    asm("loc_65C5E53: lea 0x242070DB(%esi,%ecx),%ecx;");
    asm("loc_65C5E5A: mov %ecx,%esi;");
    asm("loc_65C5E5C: mov 0x20(%esp),%ebp;");
    asm("loc_65C5E60: shl $0x11,%ecx;");
    asm("loc_65C5E63: shr $0xF,%esi;");
    asm("loc_65C5E66: or %ecx,%esi;");
    asm("loc_65C5E68: add %edx,%esi;");
    asm("loc_65C5E6A: mov %esi,%ecx;");
    asm("loc_65C5E6C: not %ecx;");
    asm("loc_65C5E6E: and %eax,%ecx;");
    asm("loc_65C5E70: mov %edx,%ebx;");
    asm("loc_65C5E72: and %esi,%ebx;");
    asm("loc_65C5E74: or %ebx,%ecx;");
    asm("loc_65C5E76: add %ebp,%ecx;");
    asm("loc_65C5E78: mov 0x24(%esp),%ebp;");
    asm("loc_65C5E7C: lea -0x3E423112(%edi,%ecx),%ecx;");
    asm("loc_65C5E83: mov %ecx,%edi;");
    asm("loc_65C5E85: shr $0xA,%ecx;");
    asm("loc_65C5E88: shl $0x16,%edi;");
    asm("loc_65C5E8B: or %ecx,%edi;");
    asm("loc_65C5E8D: add %esi,%edi;");
    asm("loc_65C5E8F: mov %edi,%ecx;");
    asm("loc_65C5E91: not %ecx;");
    asm("loc_65C5E93: and %edx,%ecx;");
    asm("loc_65C5E95: mov %esi,%ebx;");
    asm("loc_65C5E97: and %edi,%ebx;");
    asm("loc_65C5E99: or %ebx,%ecx;");
    asm("loc_65C5E9B: add %ebp,%ecx;");
    asm("loc_65C5E9D: mov 0x28(%esp),%ebp;");
    asm("loc_65C5EA1: lea -0xA83F051(%eax,%ecx),%ecx;");
    asm("loc_65C5EA8: mov %ecx,%eax;");
    asm("loc_65C5EAA: shl $7,%ecx;");
    asm("loc_65C5EAD: shr $0x19,%eax;");
    asm("loc_65C5EB0: or %ecx,%eax;");
    asm("loc_65C5EB2: add %edi,%eax;");
    asm("loc_65C5EB4: mov %eax,%ecx;");
    asm("loc_65C5EB6: not %ecx;");
    asm("loc_65C5EB8: mov %edi,%ebx;");
    asm("loc_65C5EBA: and %esi,%ecx;");
    asm("loc_65C5EBC: and %eax,%ebx;");
    asm("loc_65C5EBE: or %ebx,%ecx;");
    asm("loc_65C5EC0: add %ebp,%ecx;");
    asm("loc_65C5EC2: lea 0x4787C62A(%edx,%ecx),%ecx;");
    asm("loc_65C5EC9: mov %ecx,%edx;");
    asm("loc_65C5ECB: shl $0xC,%ecx;");
    asm("loc_65C5ECE: mov 0x2C(%esp),%ebp;");
    asm("loc_65C5ED2: shr $0x14,%edx;");
    asm("loc_65C5ED5: or %ecx,%edx;");
    asm("loc_65C5ED7: add %eax,%edx;");
    asm("loc_65C5ED9: mov %edx,%ecx;");
    asm("loc_65C5EDB: not %ecx;");
    asm("loc_65C5EDD: and %edi,%ecx;");
    asm("loc_65C5EDF: mov %edx,%ebx;");
    asm("loc_65C5EE1: and %eax,%ebx;");
    asm("loc_65C5EE3: or %ebx,%ecx;");
    asm("loc_65C5EE5: add %ebp,%ecx;");
    asm("loc_65C5EE7: lea -0x57CFB9ED(%esi,%ecx),%ecx;");
    asm("loc_65C5EEE: mov %ecx,%esi;");
    asm("loc_65C5EF0: shl $0x11,%ecx;");
    asm("loc_65C5EF3: mov 0x30(%esp),%ebp;");
    asm("loc_65C5EF7: shr $0xF,%esi;");
    asm("loc_65C5EFA: or %ecx,%esi;");
    asm("loc_65C5EFC: add %edx,%esi;");
    asm("loc_65C5EFE: mov %esi,%ecx;");
    asm("loc_65C5F00: not %ecx;");
    asm("loc_65C5F02: and %eax,%ecx;");
    asm("loc_65C5F04: mov %edx,%ebx;");
    asm("loc_65C5F06: and %esi,%ebx;");
    asm("loc_65C5F08: or %ebx,%ecx;");
    asm("loc_65C5F0A: add %ebp,%ecx;");
    asm("loc_65C5F0C: lea -0x2B96AFF(%edi,%ecx),%ecx;");
    asm("loc_65C5F13: mov %ecx,%edi;");
    asm("loc_65C5F15: shr $0xA,%ecx;");
    asm("loc_65C5F18: mov 0x34(%esp),%ebp;");
    asm("loc_65C5F1C: shl $0x16,%edi;");
    asm("loc_65C5F1F: or %ecx,%edi;");
    asm("loc_65C5F21: add %esi,%edi;");
    asm("loc_65C5F23: mov %esi,%ebx;");
    asm("loc_65C5F25: and %edi,%ebx;");
    asm("loc_65C5F27: mov %edi,%ecx;");
    asm("loc_65C5F29: not %ecx;");
    asm("loc_65C5F2B: and %edx,%ecx;");
    asm("loc_65C5F2D: or %ebx,%ecx;");
    asm("loc_65C5F2F: add %ebp,%ecx;");
    asm("loc_65C5F31: lea 0x698098D8(%eax,%ecx),%ecx;");
    asm("loc_65C5F38: mov 0x38(%esp),%ebp;");
    asm("loc_65C5F3C: mov %ecx,%eax;");
    asm("loc_65C5F3E: shl $7,%ecx;");
    asm("loc_65C5F41: shr $0x19,%eax;");
    asm("loc_65C5F44: or %ecx,%eax;");
    asm("loc_65C5F46: add %edi,%eax;");
    asm("loc_65C5F48: mov %eax,%ecx;");
    asm("loc_65C5F4A: not %ecx;");
    asm("loc_65C5F4C: and %esi,%ecx;");
    asm("loc_65C5F4E: mov %edi,%ebx;");
    asm("loc_65C5F50: and %eax,%ebx;");
    asm("loc_65C5F52: or %ebx,%ecx;");
    asm("loc_65C5F54: add %ebp,%ecx;");
    asm("loc_65C5F56: mov 0x3C(%esp),%ebp;");
    asm("loc_65C5F5A: lea -0x74BB0851(%edx,%ecx),%ecx;");
    asm("loc_65C5F61: mov %ecx,%edx;");
    asm("loc_65C5F63: shl $0xC,%ecx;");
    asm("loc_65C5F66: shr $0x14,%edx;");
    asm("loc_65C5F69: or %ecx,%edx;");
    asm("loc_65C5F6B: add %eax,%edx;");
    asm("loc_65C5F6D: mov %edx,%ecx;");
    asm("loc_65C5F6F: not %ecx;");
    asm("loc_65C5F71: and %edi,%ecx;");
    asm("loc_65C5F73: mov %edx,%ebx;");
    asm("loc_65C5F75: and %eax,%ebx;");
    asm("loc_65C5F77: or %ebx,%ecx;");
    asm("loc_65C5F79: add %ebp,%ecx;");
    asm("loc_65C5F7B: lea -0xA44F(%esi,%ecx),%ecx;");
    asm("loc_65C5F82: mov %ecx,%esi;");
    asm("loc_65C5F84: shl $0x11,%ecx;");
    asm("loc_65C5F87: shr $0xF,%esi;");
    asm("loc_65C5F8A: or %ecx,%esi;");
    asm("loc_65C5F8C: add %edx,%esi;");
    asm("loc_65C5F8E: mov %esi,%ecx;");
    asm("loc_65C5F90: not %ecx;");
    asm("loc_65C5F92: and %eax,%ecx;");
    asm("loc_65C5F94: mov %edx,%ebx;");
    asm("loc_65C5F96: mov 0x40(%esp),%ebp;");
    asm("loc_65C5F9A: and %esi,%ebx;");
    asm("loc_65C5F9C: or %ebx,%ecx;");
    asm("loc_65C5F9E: add %ebp,%ecx;");
    asm("loc_65C5FA0: lea -0x76A32842(%edi,%ecx),%ecx;");
    asm("loc_65C5FA7: mov %ecx,%edi;");
    asm("loc_65C5FA9: shr $0xA,%ecx;");
    asm("loc_65C5FAC: mov 0x44(%esp),%ebp;");
    asm("loc_65C5FB0: shl $0x16,%edi;");
    asm("loc_65C5FB3: or %ecx,%edi;");
    asm("loc_65C5FB5: add %esi,%edi;");
    asm("loc_65C5FB7: mov %edi,%ecx;");
    asm("loc_65C5FB9: not %ecx;");
    asm("loc_65C5FBB: and %edx,%ecx;");
    asm("loc_65C5FBD: mov %esi,%ebx;");
    asm("loc_65C5FBF: and %edi,%ebx;");
    asm("loc_65C5FC1: or %ebx,%ecx;");
    asm("loc_65C5FC3: add %ebp,%ecx;");
    asm("loc_65C5FC5: lea 0x6B901122(%eax,%ecx),%ecx;");
    asm("loc_65C5FCC: mov %ecx,%eax;");
    asm("loc_65C5FCE: shl $7,%ecx;");
    asm("loc_65C5FD1: shr $0x19,%eax;");
    asm("loc_65C5FD4: or %ecx,%eax;");
    asm("loc_65C5FD6: add %edi,%eax;");
    asm("loc_65C5FD8: mov %eax,%ecx;");
    asm("loc_65C5FDA: not %ecx;");
    asm("loc_65C5FDC: and %esi,%ecx;");
    asm("loc_65C5FDE: mov %edi,%ebx;");
    asm("loc_65C5FE0: and %eax,%ebx;");
    asm("loc_65C5FE2: or %ebx,%ecx;");
    asm("loc_65C5FE4: add 0x48(%esp),%ecx;");
    asm("loc_65C5FE8: lea -0x2678E6D(%edx,%ecx),%ecx;");
    asm("loc_65C5FEF: mov %ecx,%edx;");
    asm("loc_65C5FF1: shl $0xC,%ecx;");
    asm("loc_65C5FF4: shr $0x14,%edx;");
    asm("loc_65C5FF7: or %ecx,%edx;");
    asm("loc_65C5FF9: add %eax,%edx;");
    asm("loc_65C5FFB: mov %edx,%ebx;");
    asm("loc_65C5FFD: not %ebx;");
    asm("loc_65C5FFF: mov %ebx,%ecx;");
    asm("loc_65C6001: and %edi,%ecx;");
    asm("loc_65C6003: mov %edx,%ebp;");
    asm("loc_65C6005: and %eax,%ebp;");
    asm("loc_65C6007: or %ebp,%ecx;");
    asm("loc_65C6009: add 0x4C(%esp),%ecx;");
    asm("loc_65C600D: lea -0x5986BC72(%esi,%ecx),%ecx;");
    asm("loc_65C6014: mov %ecx,%esi;");
    asm("loc_65C6016: shl $0x11,%ecx;");
    asm("loc_65C6019: shr $0xF,%esi;");
    asm("loc_65C601C: or %ecx,%esi;");
    asm("loc_65C601E: add %edx,%esi;");
    asm("loc_65C6020: mov %esi,%ecx;");
    asm("loc_65C6022: not %ecx;");
    asm("loc_65C6024: mov %ecx,0x58(%esp);");
    asm("loc_65C6028: and %eax,%ecx;");
    asm("loc_65C602A: mov %edx,%ebp;");
    asm("loc_65C602C: and %esi,%ebp;");
    asm("loc_65C602E: or %ebp,%ecx;");
    asm("loc_65C6030: mov 0x50(%esp),%ebp;");
    asm("loc_65C6034: add %ebp,%ecx;");
    asm("loc_65C6036: lea 0x49B40821(%edi,%ecx),%ecx;");
    asm("loc_65C603D: mov %ecx,%edi;");
    asm("loc_65C603F: shr $0xA,%ecx;");
    asm("loc_65C6042: shl $0x16,%edi;");
    asm("loc_65C6045: or %ecx,%edi;");
    asm("loc_65C6047: and %esi,%ebx;");
    asm("loc_65C6049: add %esi,%edi;");
    asm("loc_65C604B: mov %edx,%ecx;");
    asm("loc_65C604D: and %edi,%ecx;");
    asm("loc_65C604F: or %ecx,%ebx;");
    asm("loc_65C6051: add 0x18(%esp),%ebx;");
    asm("loc_65C6055: mov 0x58(%esp),%ecx;");
    asm("loc_65C6059: lea -0x9E1DA9E(%eax,%ebx),%ebx;");
    asm("loc_65C6060: mov %ebx,%eax;");
    asm("loc_65C6062: shr $0x1B,%eax;");
    asm("loc_65C6065: shl $5,%ebx;");
    asm("loc_65C6068: or %ebx,%eax;");
    asm("loc_65C606A: add %edi,%eax;");
    asm("loc_65C606C: and %edi,%ecx;");
    asm("loc_65C606E: mov %esi,%ebx;");
    asm("loc_65C6070: and %eax,%ebx;");
    asm("loc_65C6072: or %ebx,%ecx;");
    asm("loc_65C6074: add 0x2C(%esp),%ecx;");
    asm("loc_65C6078: lea -0x3FBF4CC0(%edx,%ecx),%ecx;");
    asm("loc_65C607F: mov %ecx,%edx;");
    asm("loc_65C6081: shl $9,%ecx;");
    asm("loc_65C6084: shr $0x17,%edx;");
    asm("loc_65C6087: or %ecx,%edx;");
    asm("loc_65C6089: add %eax,%edx;");
    asm("loc_65C608B: mov %edi,%ecx;");
    asm("loc_65C608D: not %ecx;");
    asm("loc_65C608F: and %eax,%ecx;");
    asm("loc_65C6091: mov %edx,%ebx;");
    asm("loc_65C6093: and %edi,%ebx;");
    asm("loc_65C6095: or %ebx,%ecx;");
    asm("loc_65C6097: add 0x40(%esp),%ecx;");
    asm("loc_65C609B: lea 0x265E5A51(%esi,%ecx),%ecx;");
    asm("loc_65C60A2: mov %ecx,%esi;");
    asm("loc_65C60A4: shl $0xE,%ecx;");
    asm("loc_65C60A7: shr $0x12,%esi;");
    asm("loc_65C60AA: or %ecx,%esi;");
    asm("loc_65C60AC: add %edx,%esi;");
    asm("loc_65C60AE: mov %eax,%ecx;");
    asm("loc_65C60B0: not %ecx;");
    asm("loc_65C60B2: and %edx,%ecx;");
    asm("loc_65C60B4: mov %esi,%ebx;");
    asm("loc_65C60B6: and %eax,%ebx;");
    asm("loc_65C60B8: or %ebx,%ecx;");
    asm("loc_65C60BA: add 0x14(%esp),%ecx;");
    asm("loc_65C60BE: lea -0x16493856(%edi,%ecx),%ecx;");
    asm("loc_65C60C5: mov %ecx,%edi;");
    asm("loc_65C60C7: shr $0xC,%ecx;");
    asm("loc_65C60CA: shl $0x14,%edi;");
    asm("loc_65C60CD: or %ecx,%edi;");
    asm("loc_65C60CF: add %esi,%edi;");
    asm("loc_65C60D1: mov %edx,%ecx;");
    asm("loc_65C60D3: not %ecx;");
    asm("loc_65C60D5: and %esi,%ecx;");
    asm("loc_65C60D7: mov %edx,%ebx;");
    asm("loc_65C60D9: and %edi,%ebx;");
    asm("loc_65C60DB: or %ebx,%ecx;");
    asm("loc_65C60DD: add 0x28(%esp),%ecx;");
    asm("loc_65C60E1: lea -0x29D0EFA3(%eax,%ecx),%ecx;");
    asm("loc_65C60E8: mov %ecx,%eax;");
    asm("loc_65C60EA: shl $5,%ecx;");
    asm("loc_65C60ED: shr $0x1B,%eax;");
    asm("loc_65C60F0: or %ecx,%eax;");
    asm("loc_65C60F2: mov %esi,%ecx;");
    asm("loc_65C60F4: not %ecx;");
    asm("loc_65C60F6: and %edi,%ecx;");
    asm("loc_65C60F8: mov %esi,%ebx;");
    asm("loc_65C60FA: add %edi,%eax;");
    asm("loc_65C60FC: and %eax,%ebx;");
    asm("loc_65C60FE: or %ebx,%ecx;");
    asm("loc_65C6100: add 0x3C(%esp),%ecx;");
    asm("loc_65C6104: lea 0x2441453(%edx,%ecx),%ecx;");
    asm("loc_65C610B: mov %ecx,%edx;");
    asm("loc_65C610D: shl $9,%ecx;");
    asm("loc_65C6110: shr $0x17,%edx;");
    asm("loc_65C6113: or %ecx,%edx;");
    asm("loc_65C6115: add %eax,%edx;");
    asm("loc_65C6117: mov %edi,%ecx;");
    asm("loc_65C6119: not %ecx;");
    asm("loc_65C611B: and %eax,%ecx;");
    asm("loc_65C611D: mov %edx,%ebx;");
    asm("loc_65C611F: and %edi,%ebx;");
    asm("loc_65C6121: or %ebx,%ecx;");
    asm("loc_65C6123: add %ebp,%ecx;");
    asm("loc_65C6125: lea -0x275E197F(%esi,%ecx),%ecx;");
    asm("loc_65C612C: mov %ecx,%esi;");
    asm("loc_65C612E: shr $0x12,%esi;");
    asm("loc_65C6131: shl $0xE,%ecx;");
    asm("loc_65C6134: or %ecx,%esi;");
    asm("loc_65C6136: add %edx,%esi;");
    asm("loc_65C6138: mov %eax,%ecx;");
    asm("loc_65C613A: not %ecx;");
    asm("loc_65C613C: and %edx,%ecx;");
    asm("loc_65C613E: mov %esi,%ebx;");
    asm("loc_65C6140: and %eax,%ebx;");
    asm("loc_65C6142: or %ebx,%ecx;");
    asm("loc_65C6144: add 0x24(%esp),%ecx;");
    asm("loc_65C6148: lea -0x182C0438(%edi,%ecx),%ecx;");
    asm("loc_65C614F: mov %ecx,%edi;");
    asm("loc_65C6151: shr $0xC,%ecx;");
    asm("loc_65C6154: shl $0x14,%edi;");
    asm("loc_65C6157: or %ecx,%edi;");
    asm("loc_65C6159: add %esi,%edi;");
    asm("loc_65C615B: mov %edx,%ecx;");
    asm("loc_65C615D: not %ecx;");
    asm("loc_65C615F: and %esi,%ecx;");
    asm("loc_65C6161: mov %edx,%ebx;");
    asm("loc_65C6163: and %edi,%ebx;");
    asm("loc_65C6165: or %ebx,%ecx;");
    asm("loc_65C6167: add 0x38(%esp),%ecx;");
    asm("loc_65C616B: lea 0x21E1CDE6(%eax,%ecx),%ecx;");
    asm("loc_65C6172: mov %ecx,%eax;");
    asm("loc_65C6174: shl $5,%ecx;");
    asm("loc_65C6177: shr $0x1B,%eax;");
    asm("loc_65C617A: or %ecx,%eax;");
    asm("loc_65C617C: add %edi,%eax;");
    asm("loc_65C617E: mov %esi,%ecx;");
    asm("loc_65C6180: not %ecx;");
    asm("loc_65C6182: and %edi,%ecx;");
    asm("loc_65C6184: mov %esi,%ebx;");
    asm("loc_65C6186: and %eax,%ebx;");
    asm("loc_65C6188: or %ebx,%ecx;");
    asm("loc_65C618A: add 0x4C(%esp),%ecx;");
    asm("loc_65C618E: lea -0x3CC8F82A(%edx,%ecx),%ecx;");
    asm("loc_65C6195: mov %ecx,%edx;");
    asm("loc_65C6197: shl $9,%ecx;");
    asm("loc_65C619A: shr $0x17,%edx;");
    asm("loc_65C619D: or %ecx,%edx;");
    asm("loc_65C619F: add %eax,%edx;");
    asm("loc_65C61A1: mov %edi,%ecx;");
    asm("loc_65C61A3: not %ecx;");
    asm("loc_65C61A5: and %eax,%ecx;");
    asm("loc_65C61A7: mov %edx,%ebx;");
    asm("loc_65C61A9: and %edi,%ebx;");
    asm("loc_65C61AB: or %ebx,%ecx;");
    asm("loc_65C61AD: add 0x20(%esp),%ecx;");
    asm("loc_65C61B1: lea -0xB2AF279(%esi,%ecx),%ecx;");
    asm("loc_65C61B8: mov %ecx,%esi;");
    asm("loc_65C61BA: shl $0xE,%ecx;");
    asm("loc_65C61BD: shr $0x12,%esi;");
    asm("loc_65C61C0: or %ecx,%esi;");
    asm("loc_65C61C2: add %edx,%esi;");
    asm("loc_65C61C4: mov %eax,%ecx;");
    asm("loc_65C61C6: not %ecx;");
    asm("loc_65C61C8: and %edx,%ecx;");
    asm("loc_65C61CA: mov %esi,%ebx;");
    asm("loc_65C61CC: and %eax,%ebx;");
    asm("loc_65C61CE: or %ebx,%ecx;");
    asm("loc_65C61D0: add 0x34(%esp),%ecx;");
    asm("loc_65C61D4: lea 0x455A14ED(%edi,%ecx),%ecx;");
    asm("loc_65C61DB: mov %ecx,%edi;");
    asm("loc_65C61DD: shr $0xC,%ecx;");
    asm("loc_65C61E0: shl $0x14,%edi;");
    asm("loc_65C61E3: or %ecx,%edi;");
    asm("loc_65C61E5: mov %edx,%ecx;");
    asm("loc_65C61E7: not %ecx;");
    asm("loc_65C61E9: add %esi,%edi;");
    asm("loc_65C61EB: and %esi,%ecx;");
    asm("loc_65C61ED: mov %edx,%ebx;");
    asm("loc_65C61EF: and %edi,%ebx;");
    asm("loc_65C61F1: or %ebx,%ecx;");
    asm("loc_65C61F3: add 0x48(%esp),%ecx;");
    asm("loc_65C61F7: lea -0x561C16FB(%eax,%ecx),%ecx;");
    asm("loc_65C61FE: mov %ecx,%eax;");
    asm("loc_65C6200: shr $0x1B,%eax;");
    asm("loc_65C6203: shl $5,%ecx;");
    asm("loc_65C6206: or %ecx,%eax;");
    asm("loc_65C6208: add %edi,%eax;");
    asm("loc_65C620A: mov %esi,%ecx;");
    asm("loc_65C620C: not %ecx;");
    asm("loc_65C620E: and %edi,%ecx;");
    asm("loc_65C6210: mov %esi,%ebx;");
    asm("loc_65C6212: and %eax,%ebx;");
    asm("loc_65C6214: or %ebx,%ecx;");
    asm("loc_65C6216: add 0x1C(%esp),%ecx;");
    asm("loc_65C621A: lea -0x3105C08(%edx,%ecx),%ecx;");
    asm("loc_65C6221: mov %ecx,%edx;");
    asm("loc_65C6223: shl $9,%ecx;");
    asm("loc_65C6226: shr $0x17,%edx;");
    asm("loc_65C6229: or %ecx,%edx;");
    asm("loc_65C622B: add %eax,%edx;");
    asm("loc_65C622D: mov %edx,%ebx;");
    asm("loc_65C622F: and %edi,%ebx;");
    asm("loc_65C6231: mov %edi,%ecx;");
    asm("loc_65C6233: not %ecx;");
    asm("loc_65C6235: and %eax,%ecx;");
    asm("loc_65C6237: or %ebx,%ecx;");
    asm("loc_65C6239: add 0x30(%esp),%ecx;");
    asm("loc_65C623D: lea 0x676F02D9(%esi,%ecx),%ecx;");
    asm("loc_65C6244: mov %ecx,%esi;");
    asm("loc_65C6246: shl $0xE,%ecx;");
    asm("loc_65C6249: shr $0x12,%esi;");
    asm("loc_65C624C: or %ecx,%esi;");
    asm("loc_65C624E: add %edx,%esi;");
    asm("loc_65C6250: mov %eax,%ecx;");
    asm("loc_65C6252: not %ecx;");
    asm("loc_65C6254: and %edx,%ecx;");
    asm("loc_65C6256: mov %esi,%ebx;");
    asm("loc_65C6258: and %eax,%ebx;");
    asm("loc_65C625A: or %ebx,%ecx;");
    asm("loc_65C625C: add 0x44(%esp),%ecx;");
    asm("loc_65C6260: mov 0x28(%esp),%ebx;");
    asm("loc_65C6264: lea -0x72D5B376(%edi,%ecx),%ecx;");
    asm("loc_65C626B: mov %ecx,%edi;");
    asm("loc_65C626D: shr $0xC,%ecx;");
    asm("loc_65C6270: shl $0x14,%edi;");
    asm("loc_65C6273: or %ecx,%edi;");
    asm("loc_65C6275: mov %edx,%ecx;");
    asm("loc_65C6277: xor %esi,%ecx;");
    asm("loc_65C6279: add %esi,%edi;");
    asm("loc_65C627B: xor %edi,%ecx;");
    asm("loc_65C627D: add %ebx,%ecx;");
    asm("loc_65C627F: mov 0x34(%esp),%ebx;");
    asm("loc_65C6283: lea -0x5C6BE(%eax,%ecx),%ecx;");
    asm("loc_65C628A: mov %ecx,%eax;");
    asm("loc_65C628C: shl $4,%ecx;");
    asm("loc_65C628F: shr $0x1C,%eax;");
    asm("loc_65C6292: or %ecx,%eax;");
    asm("loc_65C6294: mov %esi,%ecx;");
    asm("loc_65C6296: xor %edi,%ecx;");
    asm("loc_65C6298: add %edi,%eax;");
    asm("loc_65C629A: xor %eax,%ecx;");
    asm("loc_65C629C: add %ebx,%ecx;");
    asm("loc_65C629E: lea -0x788E097F(%edx,%ecx),%edx;");
    asm("loc_65C62A5: mov 0x40(%esp),%ecx;");
    asm("loc_65C62A9: mov %edx,%ebx;");
    asm("loc_65C62AB: shl $0xB,%edx;");
    asm("loc_65C62AE: shr $0x15,%ebx;");
    asm("loc_65C62B1: or %edx,%ebx;");
    asm("loc_65C62B3: add %eax,%ebx;");
    asm("loc_65C62B5: mov %ebx,%edx;");
    asm("loc_65C62B7: xor %edi,%edx;");
    asm("loc_65C62B9: xor %eax,%edx;");
    asm("loc_65C62BB: add %ecx,%edx;");
    asm("loc_65C62BD: lea 0x6D9D6122(%esi,%edx),%ecx;");
    asm("loc_65C62C4: mov %ecx,%esi;");
    asm("loc_65C62C6: shr $0x10,%esi;");
    asm("loc_65C62C9: shl $0x10,%ecx;");
    asm("loc_65C62CC: or %ecx,%esi;");
    asm("loc_65C62CE: add %ebx,%esi;");
    asm("loc_65C62D0: mov %ebx,%ecx;");
    asm("loc_65C62D2: xor %esi,%ecx;");
    asm("loc_65C62D4: mov %ecx,%edx;");
    asm("loc_65C62D6: xor %eax,%edx;");
    asm("loc_65C62D8: add 0x4C(%esp),%edx;");
    asm("loc_65C62DC: lea -0x21AC7F4(%edi,%edx),%edi;");
    asm("loc_65C62E3: mov %edi,%edx;");
    asm("loc_65C62E5: shr $9,%edi;");
    asm("loc_65C62E8: shl $0x17,%edx;");
    asm("loc_65C62EB: or %edi,%edx;");
    asm("loc_65C62ED: mov 0x18(%esp),%edi;");
    asm("loc_65C62F1: add %esi,%edx;");
    asm("loc_65C62F3: xor %edx,%ecx;");
    asm("loc_65C62F5: add %edi,%ecx;");
    asm("loc_65C62F7: lea -0x5B4115BC(%eax,%ecx),%ecx;");
    asm("loc_65C62FE: mov %ecx,%eax;");
    asm("loc_65C6300: shl $4,%ecx;");
    asm("loc_65C6303: mov 0x24(%esp),%edi;");
    asm("loc_65C6307: shr $0x1C,%eax;");
    asm("loc_65C630A: or %ecx,%eax;");
    asm("loc_65C630C: add %edx,%eax;");
    asm("loc_65C630E: mov %esi,%ecx;");
    asm("loc_65C6310: xor %edx,%ecx;");
    asm("loc_65C6312: xor %eax,%ecx;");
    asm("loc_65C6314: add %edi,%ecx;");
    asm("loc_65C6316: lea 0x4BDECFA9(%ebx,%ecx),%ebx;");
    asm("loc_65C631D: mov %ebx,%edi;");
    asm("loc_65C631F: shl $0xB,%ebx;");
    asm("loc_65C6322: shr $0x15,%edi;");
    asm("loc_65C6325: or %ebx,%edi;");
    asm("loc_65C6327: mov 0x30(%esp),%ebx;");
    asm("loc_65C632B: add %eax,%edi;");
    asm("loc_65C632D: mov %edi,%ecx;");
    asm("loc_65C632F: xor %edx,%ecx;");
    asm("loc_65C6331: xor %eax,%ecx;");
    asm("loc_65C6333: add %ebx,%ecx;");
    asm("loc_65C6335: lea -0x944B4A0(%esi,%ecx),%ecx;");
    asm("loc_65C633C: mov %ecx,%esi;");
    asm("loc_65C633E: shl $0x10,%ecx;");
    asm("loc_65C6341: shr $0x10,%esi;");
    asm("loc_65C6344: or %ecx,%esi;");
    asm("loc_65C6346: add %edi,%esi;");
    asm("loc_65C6348: mov %edi,%ecx;");
    asm("loc_65C634A: xor %esi,%ecx;");
    asm("loc_65C634C: mov %ecx,%ebx;");
    asm("loc_65C634E: xor %eax,%ebx;");
    asm("loc_65C6350: add 0x3C(%esp),%ebx;");
    asm("loc_65C6354: lea -0x41404390(%edx,%ebx),%ebx;");
    asm("loc_65C635B: mov %ebx,%edx;");
    asm("loc_65C635D: shr $9,%ebx;");
    asm("loc_65C6360: shl $0x17,%edx;");
    asm("loc_65C6363: or %ebx,%edx;");
    asm("loc_65C6365: mov 0x48(%esp),%ebx;");
    asm("loc_65C6369: add %esi,%edx;");
    asm("loc_65C636B: xor %edx,%ecx;");
    asm("loc_65C636D: add %ebx,%ecx;");
    asm("loc_65C636F: mov 0x14(%esp),%ebx;");
    asm("loc_65C6373: lea 0x289B7EC6(%eax,%ecx),%ecx;");
    asm("loc_65C637A: mov %ecx,%eax;");
    asm("loc_65C637C: shl $4,%ecx;");
    asm("loc_65C637F: shr $0x1C,%eax;");
    asm("loc_65C6382: or %ecx,%eax;");
    asm("loc_65C6384: mov %esi,%ecx;");
    asm("loc_65C6386: xor %edx,%ecx;");
    asm("loc_65C6388: add %edx,%eax;");
    asm("loc_65C638A: xor %eax,%ecx;");
    asm("loc_65C638C: add %ebx,%ecx;");
    asm("loc_65C638E: mov 0x20(%esp),%ebx;");
    asm("loc_65C6392: lea -0x155ED806(%edi,%ecx),%ecx;");
    asm("loc_65C6399: mov %ecx,%edi;");
    asm("loc_65C639B: shl $0xB,%ecx;");
    asm("loc_65C639E: shr $0x15,%edi;");
    asm("loc_65C63A1: or %ecx,%edi;");
    asm("loc_65C63A3: add %eax,%edi;");
    asm("loc_65C63A5: mov %edi,%ecx;");
    asm("loc_65C63A7: xor %edx,%ecx;");
    asm("loc_65C63A9: xor %eax,%ecx;");
    asm("loc_65C63AB: add %ebx,%ecx;");
    asm("loc_65C63AD: lea -0x2B10CF7B(%esi,%ecx),%esi;");
    asm("loc_65C63B4: mov %esi,%ebx;");
    asm("loc_65C63B6: shr $0x10,%ebx;");
    asm("loc_65C63B9: shl $0x10,%esi;");
    asm("loc_65C63BC: or %esi,%ebx;");
    asm("loc_65C63BE: add %edi,%ebx;");
    asm("loc_65C63C0: mov %edi,%ecx;");
    asm("loc_65C63C2: xor %ebx,%ecx;");
    asm("loc_65C63C4: mov %ecx,%esi;");
    asm("loc_65C63C6: xor %eax,%esi;");
    asm("loc_65C63C8: add 0x2C(%esp),%esi;");
    asm("loc_65C63CC: lea 0x4881D05(%edx,%esi),%esi;");
    asm("loc_65C63D3: mov %esi,%edx;");
    asm("loc_65C63D5: shr $9,%esi;");
    asm("loc_65C63D8: shl $0x17,%edx;");
    asm("loc_65C63DB: or %esi,%edx;");
    asm("loc_65C63DD: mov 0x38(%esp),%esi;");
    asm("loc_65C63E1: add %ebx,%edx;");
    asm("loc_65C63E3: xor %edx,%ecx;");
    asm("loc_65C63E5: add %esi,%ecx;");
    asm("loc_65C63E7: lea -0x262B2FC7(%eax,%ecx),%ecx;");
    asm("loc_65C63EE: mov %ecx,%eax;");
    asm("loc_65C63F0: shl $4,%ecx;");
    asm("loc_65C63F3: mov 0x44(%esp),%esi;");
    asm("loc_65C63F7: shr $0x1C,%eax;");
    asm("loc_65C63FA: or %ecx,%eax;");
    asm("loc_65C63FC: add %edx,%eax;");
    asm("loc_65C63FE: mov %ebx,%ecx;");
    asm("loc_65C6400: xor %edx,%ecx;");
    asm("loc_65C6402: xor %eax,%ecx;");
    asm("loc_65C6404: add %esi,%ecx;");
    asm("loc_65C6406: lea -0x1924661B(%edi,%ecx),%edi;");
    asm("loc_65C640D: mov %edi,%esi;");
    asm("loc_65C640F: shr $0x15,%esi;");
    asm("loc_65C6412: shl $0xB,%edi;");
    asm("loc_65C6415: or %edi,%esi;");
    asm("loc_65C6417: add %eax,%esi;");
    asm("loc_65C6419: mov %esi,%ecx;");
    asm("loc_65C641B: xor %edx,%ecx;");
    asm("loc_65C641D: xor %eax,%ecx;");
    asm("loc_65C641F: add %ebp,%ecx;");
    asm("loc_65C6421: lea 0x1FA27CF8(%ebx,%ecx),%ebx;");
    asm("loc_65C6428: mov %ebx,%edi;");
    asm("loc_65C642A: shl $0x10,%ebx;");
    asm("loc_65C642D: shr $0x10,%edi;");
    asm("loc_65C6430: or %ebx,%edi;");
    asm("loc_65C6432: mov 0x1C(%esp),%ebx;");
    asm("loc_65C6436: add %esi,%edi;");
    asm("loc_65C6438: mov %esi,%ecx;");
    asm("loc_65C643A: xor %edi,%ecx;");
    asm("loc_65C643C: xor %eax,%ecx;");
    asm("loc_65C643E: add %ebx,%ecx;");
    asm("loc_65C6440: lea -0x3B53A99B(%edx,%ecx),%ecx;");
    asm("loc_65C6447: mov 0x14(%esp),%ebx;");
    asm("loc_65C644B: mov %ecx,%edx;");
    asm("loc_65C644D: shr $9,%ecx;");
    asm("loc_65C6450: shl $0x17,%edx;");
    asm("loc_65C6453: or %ecx,%edx;");
    asm("loc_65C6455: mov %esi,%ecx;");
    asm("loc_65C6457: not %ecx;");
    asm("loc_65C6459: add %edi,%edx;");
    asm("loc_65C645B: or %edx,%ecx;");
    asm("loc_65C645D: xor %edi,%ecx;");
    asm("loc_65C645F: add %ebx,%ecx;");
    asm("loc_65C6461: mov 0x30(%esp),%ebx;");
    asm("loc_65C6465: lea -0xBD6DDBC(%eax,%ecx),%ecx;");
    asm("loc_65C646C: mov %ecx,%eax;");
    asm("loc_65C646E: shl $6,%ecx;");
    asm("loc_65C6471: shr $0x1A,%eax;");
    asm("loc_65C6474: or %ecx,%eax;");
    asm("loc_65C6476: add %edx,%eax;");
    asm("loc_65C6478: mov %edi,%ecx;");
    asm("loc_65C647A: not %ecx;");
    asm("loc_65C647C: or %eax,%ecx;");
    asm("loc_65C647E: xor %edx,%ecx;");
    asm("loc_65C6480: add %ebx,%ecx;");
    asm("loc_65C6482: mov 0x4C(%esp),%ebx;");
    asm("loc_65C6486: lea 0x432AFF97(%esi,%ecx),%ecx;");
    asm("loc_65C648D: mov %ecx,%esi;");
    asm("loc_65C648F: shl $0xA,%ecx;");
    asm("loc_65C6492: shr $0x16,%esi;");
    asm("loc_65C6495: or %ecx,%esi;");
    asm("loc_65C6497: mov %edx,%ecx;");
    asm("loc_65C6499: add %eax,%esi;");
    asm("loc_65C649B: not %ecx;");
    asm("loc_65C649D: or %esi,%ecx;");
    asm("loc_65C649F: xor %eax,%ecx;");
    asm("loc_65C64A1: add %ebx,%ecx;");
    asm("loc_65C64A3: lea -0x546BDC59(%edi,%ecx),%ecx;");
    asm("loc_65C64AA: mov %ecx,%edi;");
    asm("loc_65C64AC: shl $0xF,%ecx;");
    asm("loc_65C64AF: mov 0x28(%esp),%ebx;");
    asm("loc_65C64B3: shr $0x11,%edi;");
    asm("loc_65C64B6: or %ecx,%edi;");
    asm("loc_65C64B8: add %esi,%edi;");
    asm("loc_65C64BA: mov %eax,%ecx;");
    asm("loc_65C64BC: not %ecx;");
    asm("loc_65C64BE: or %edi,%ecx;");
    asm("loc_65C64C0: xor %esi,%ecx;");
    asm("loc_65C64C2: add %ebx,%ecx;");
    asm("loc_65C64C4: lea -0x36C5FC7(%edx,%ecx),%ecx;");
    asm("loc_65C64CB: mov %ecx,%edx;");
    asm("loc_65C64CD: shr $0xB,%ecx;");
    asm("loc_65C64D0: mov 0x44(%esp),%ebx;");
    asm("loc_65C64D4: shl $0x15,%edx;");
    asm("loc_65C64D7: or %ecx,%edx;");
    asm("loc_65C64D9: add %edi,%edx;");
    asm("loc_65C64DB: mov %esi,%ecx;");
    asm("loc_65C64DD: not %ecx;");
    asm("loc_65C64DF: or %edx,%ecx;");
    asm("loc_65C64E1: xor %edi,%ecx;");
    asm("loc_65C64E3: add %ebx,%ecx;");
    asm("loc_65C64E5: lea 0x655B59C3(%eax,%ecx),%ecx;");
    asm("loc_65C64EC: mov %ecx,%eax;");
    asm("loc_65C64EE: shl $6,%ecx;");
    asm("loc_65C64F1: mov 0x20(%esp),%ebx;");
    asm("loc_65C64F5: shr $0x1A,%eax;");
    asm("loc_65C64F8: or %ecx,%eax;");
    asm("loc_65C64FA: add %edx,%eax;");
    asm("loc_65C64FC: mov %edi,%ecx;");
    asm("loc_65C64FE: not %ecx;");
    asm("loc_65C6500: or %eax,%ecx;");
    asm("loc_65C6502: xor %edx,%ecx;");
    asm("loc_65C6504: add %ebx,%ecx;");
    asm("loc_65C6506: lea -0x70F3336E(%esi,%ecx),%ecx;");
    asm("loc_65C650D: mov %ecx,%esi;");
    asm("loc_65C650F: shl $0xA,%ecx;");
    asm("loc_65C6512: mov 0x3C(%esp),%ebx;");
    asm("loc_65C6516: shr $0x16,%esi;");
    asm("loc_65C6519: or %ecx,%esi;");
    asm("loc_65C651B: add %eax,%esi;");
    asm("loc_65C651D: mov %edx,%ecx;");
    asm("loc_65C651F: not %ecx;");
    asm("loc_65C6521: or %esi,%ecx;");
    asm("loc_65C6523: xor %eax,%ecx;");
    asm("loc_65C6525: add %ebx,%ecx;");
    asm("loc_65C6527: lea -0x100B83(%edi,%ecx),%ecx;");
    asm("loc_65C652E: mov 0x18(%esp),%ebx;");
    asm("loc_65C6532: mov %ecx,%edi;");
    asm("loc_65C6534: shl $0xF,%ecx;");
    asm("loc_65C6537: shr $0x11,%edi;");
    asm("loc_65C653A: or %ecx,%edi;");
    asm("loc_65C653C: mov %eax,%ecx;");
    asm("loc_65C653E: not %ecx;");
    asm("loc_65C6540: add %esi,%edi;");
    asm("loc_65C6542: or %edi,%ecx;");
    asm("loc_65C6544: xor %esi,%ecx;");
    asm("loc_65C6546: add %ebx,%ecx;");
    asm("loc_65C6548: mov 0x34(%esp),%ebx;");
    asm("loc_65C654C: lea -0x7A7BA22F(%edx,%ecx),%ecx;");
    asm("loc_65C6553: mov %ecx,%edx;");
    asm("loc_65C6555: shr $0xB,%ecx;");
    asm("loc_65C6558: shl $0x15,%edx;");
    asm("loc_65C655B: or %ecx,%edx;");
    asm("loc_65C655D: mov %esi,%ecx;");
    asm("loc_65C655F: not %ecx;");
    asm("loc_65C6561: add %edi,%edx;");
    asm("loc_65C6563: or %edx,%ecx;");
    asm("loc_65C6565: xor %edi,%ecx;");
    asm("loc_65C6567: add %ebx,%ecx;");
    asm("loc_65C6569: lea 0x6FA87E4F(%eax,%ecx),%ecx;");
    asm("loc_65C6570: mov %ecx,%eax;");
    asm("loc_65C6572: shl $6,%ecx;");
    asm("loc_65C6575: shr $0x1A,%eax;");
    asm("loc_65C6578: or %ecx,%eax;");
    asm("loc_65C657A: mov %edi,%ecx;");
    asm("loc_65C657C: add %edx,%eax;");
    asm("loc_65C657E: not %ecx;");
    asm("loc_65C6580: or %eax,%ecx;");
    asm("loc_65C6582: xor %edx,%ecx;");
    asm("loc_65C6584: add %ebp,%ecx;");
    asm("loc_65C6586: lea -0x1D31920(%esi,%ecx),%ecx;");
    asm("loc_65C658D: mov %ecx,%esi;");
    asm("loc_65C658F: shl $0xA,%ecx;");
    asm("loc_65C6592: mov 0x2C(%esp),%ebp;");
    asm("loc_65C6596: shr $0x16,%esi;");
    asm("loc_65C6599: or %ecx,%esi;");
    asm("loc_65C659B: add %eax,%esi;");
    asm("loc_65C659D: mov %edx,%ecx;");
    asm("loc_65C659F: not %ecx;");
    asm("loc_65C65A1: or %esi,%ecx;");
    asm("loc_65C65A3: xor %eax,%ecx;");
    asm("loc_65C65A5: add %ebp,%ecx;");
    asm("loc_65C65A7: lea -0x5CFEBCEC(%edi,%ecx),%ecx;");
    asm("loc_65C65AE: mov %ecx,%edi;");
    asm("loc_65C65B0: shl $0xF,%ecx;");
    asm("loc_65C65B3: mov 0x48(%esp),%ebp;");
    asm("loc_65C65B7: shr $0x11,%edi;");
    asm("loc_65C65BA: or %ecx,%edi;");
    asm("loc_65C65BC: add %esi,%edi;");
    asm("loc_65C65BE: mov %eax,%ecx;");
    asm("loc_65C65C0: not %ecx;");
    asm("loc_65C65C2: or %edi,%ecx;");
    asm("loc_65C65C4: xor %esi,%ecx;");
    asm("loc_65C65C6: add %ebp,%ecx;");
    asm("loc_65C65C8: lea 0x4E0811A1(%edx,%ecx),%ecx;");
    asm("loc_65C65CF: mov %ecx,%edx;");
    asm("loc_65C65D1: shr $0xB,%ecx;");
    asm("loc_65C65D4: mov 0x24(%esp),%ebp;");
    asm("loc_65C65D8: shl $0x15,%edx;");
    asm("loc_65C65DB: or %ecx,%edx;");
    asm("loc_65C65DD: add %edi,%edx;");
    asm("loc_65C65DF: mov %esi,%ecx;");
    asm("loc_65C65E1: not %ecx;");
    asm("loc_65C65E3: or %edx,%ecx;");
    asm("loc_65C65E5: xor %edi,%ecx;");
    asm("loc_65C65E7: add %ebp,%ecx;");
    asm("loc_65C65E9: lea -0x8AC817E(%eax,%ecx),%ecx;");
    asm("loc_65C65F0: mov 0x40(%esp),%ebp;");
    asm("loc_65C65F4: mov %ecx,%eax;");
    asm("loc_65C65F6: shl $6,%ecx;");
    asm("loc_65C65F9: mov 0x1C(%esp),%ebx;");
    asm("loc_65C65FD: shr $0x1A,%eax;");
    asm("loc_65C6600: or %ecx,%eax;");
    asm("loc_65C6602: mov %edi,%ecx;");
    asm("loc_65C6604: not %ecx;");
    asm("loc_65C6606: add %edx,%eax;");
    asm("loc_65C6608: or %eax,%ecx;");
    asm("loc_65C660A: xor %edx,%ecx;");
    asm("loc_65C660C: add %ebp,%ecx;");
    asm("loc_65C660E: lea -0x42C50DCB(%esi,%ecx),%ecx;");
    asm("loc_65C6615: mov %ecx,%esi;");
    asm("loc_65C6617: shl $0xA,%ecx;");
    asm("loc_65C661A: shr $0x16,%esi;");
    asm("loc_65C661D: or %ecx,%esi;");
    asm("loc_65C661F: add %eax,%esi;");
    asm("loc_65C6621: mov %edx,%ecx;");
    asm("loc_65C6623: not %ecx;");
    asm("loc_65C6625: or %esi,%ecx;");
    asm("loc_65C6627: xor %eax,%ecx;");
    asm("loc_65C6629: add %ebx,%ecx;");
    asm("loc_65C662B: lea 0x2AD7D2BB(%edi,%ecx),%edi;");
    asm("loc_65C6632: mov %edi,%ebx;");
    asm("loc_65C6634: shl $0xF,%edi;");
    asm("loc_65C6637: shr $0x11,%ebx;");
    asm("loc_65C663A: or %edi,%ebx;");
    asm("loc_65C663C: mov 0x38(%esp),%edi;");
    asm("loc_65C6640: mov %eax,%ecx;");
    asm("loc_65C6642: not %ecx;");
    asm("loc_65C6644: add %esi,%ebx;");
    asm("loc_65C6646: or %ebx,%ecx;");
    asm("loc_65C6648: xor %esi,%ecx;");
    asm("loc_65C664A: add %edi,%ecx;");
    asm("loc_65C664C: lea -0x14792C6F(%edx,%ecx),%edx;");
    asm("loc_65C6653: mov 0x10(%esp),%ecx;");
    asm("loc_65C6657: mov 4(%ecx),%edi;");
    asm("loc_65C665A: add %eax,%edi;");
    asm("loc_65C665C: mov %edi,4(%ecx);");
    asm("loc_65C665F: mov %edx,%eax;");
    asm("loc_65C6661: mov 8(%ecx),%edi;");
    asm("loc_65C6664: shl $0x15,%eax;");
    asm("loc_65C6667: shr $0xB,%edx;");
    asm("loc_65C666A: or %edx,%eax;");
    asm("loc_65C666C: add %edi,%eax;");
    asm("loc_65C666E: add %ebx,%eax;");
    asm("loc_65C6670: mov %eax,8(%ecx);");
    asm("loc_65C6673: mov 0xC(%ecx),%eax;");
    asm("loc_65C6676: add %ebx,%eax;");
    asm("loc_65C6678: mov %eax,0xC(%ecx);");
    asm("loc_65C667B: mov 0x10(%ecx),%eax;");
    asm("loc_65C667E: pop %edi;");
    asm("loc_65C667F: add %esi,%eax;");
    asm("loc_65C6681: pop %esi;");
    asm("loc_65C6682: pop %ebp;");
    asm("loc_65C6683: mov %eax,0x10(%ecx);");
    asm("loc_65C6686: pop %ebx;");
    asm("loc_65C6687: add $0x44,%esp;");
    asm("loc_65C668A: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C6690() // ?GetStatePtr@MD5Hash@@QAEPAEXZ
{
    __DEBUG_ASM(65C6690);
    // chunk 0x65C6690 _sub_65C6690
    asm("loc_65C6690: lea 4(%ecx),%eax;");
    asm("loc_65C6693: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C66A0() // ??0MD5Hash@@QAE@ABV0@@Z
{
    __DEBUG_ASM(65C66A0);
    // chunk 0x65C66A0 _sub_65C66A0
    asm("loc_65C66A0: mov 4(%esp),%edx;");
    asm("loc_65C66A4: mov %ecx,%eax;");
    asm("loc_65C66A6: push %esi;");
    asm("loc_65C66A7: push %edi;");
    asm("loc_65C66A8: lea 4(%edx),%ecx;");
    asm("loc_65C66AB: mov (%ecx),%edi;");
    asm("loc_65C66AD: lea 4(%eax),%esi;");
    asm("loc_65C66B0: mov %edi,(%esi);");
    asm("loc_65C66B2: mov 4(%ecx),%edi;");
    asm("loc_65C66B5: mov %edi,4(%esi);");
    asm("loc_65C66B8: mov 8(%ecx),%edi;");
    asm("loc_65C66BB: mov %edi,8(%esi);");
    asm("loc_65C66BE: mov 0xC(%ecx),%ecx;");
    asm("loc_65C66C1: mov %ecx,0xC(%esi);");
    asm("loc_65C66C4: mov 0x14(%edx),%ecx;");
    asm("loc_65C66C7: mov %ecx,0x14(%eax);");
    asm("loc_65C66CA: mov 0x18(%edx),%ecx;");
    asm("loc_65C66CD: mov %ecx,0x18(%eax);");
    asm("loc_65C66D0: lea 0x1C(%edx),%esi;");
    asm("loc_65C66D3: lea 0x1C(%eax),%edi;");
    asm("loc_65C66D6: mov $0x10,%ecx;");
    asm("loc_65C66DB: rep movsl (%esi),(%edi);");
    asm("loc_65C66DD: lea 0x5C(%edx),%esi;");
    asm("loc_65C66E0: lea 0x5C(%eax),%edi;");
    asm("loc_65C66E3: mov $0x20,%ecx;");
    asm("loc_65C66E8: rep movsl (%esi),(%edi);");
    asm("loc_65C66EA: pop %edi;");
    asm("loc_65C66EB: movl $_off_65C757C,(%eax);");
    asm("loc_65C66F1: pop %esi;");
    asm("loc_65C66F2: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C6700() // ??4MD5Hash@@QAEAAV0@ABV0@@Z
{
    __DEBUG_ASM(65C6700);
    // chunk 0x65C6700 _sub_65C6700
    asm("loc_65C6700: mov 4(%esp),%edx;");
    asm("loc_65C6704: mov %ecx,%eax;");
    asm("loc_65C6706: push %esi;");
    asm("loc_65C6707: push %edi;");
    asm("loc_65C6708: lea 4(%eax),%esi;");
    asm("loc_65C670B: sub %eax,%edx;");
    asm("loc_65C670D: mov $4,%ecx;");
    asm("loc_65C6712: mov (%edx,%esi),%edi;");
    asm("loc_65C6715: mov %edi,(%esi);");
    asm("loc_65C6717: add $4,%esi;");
    asm("loc_65C671A: dec %ecx;");
    asm("loc_65C671B: jne loc_65C6712;");
    asm("loc_65C671D: lea 0x14(%eax),%esi;");
    asm("loc_65C6720: mov $2,%ecx;");
    asm("loc_65C6725: mov (%esi,%edx),%edi;");
    asm("loc_65C6728: mov %edi,(%esi);");
    asm("loc_65C672A: add $4,%esi;");
    asm("loc_65C672D: dec %ecx;");
    asm("loc_65C672E: jne loc_65C6725;");
    asm("loc_65C6730: mov $0xFFFFFFE4,%edi;");
    asm("loc_65C6735: lea 0x1C(%eax),%esi;");
    asm("loc_65C6738: sub %eax,%edi;");
    asm("loc_65C673A: lea (%ebx),%ebx;");
    asm("loc_65C6740: mov (%esi,%edx),%cl;");
    asm("loc_65C6743: mov %cl,(%esi);");
    asm("loc_65C6745: inc %esi;");
    asm("loc_65C6746: lea (%edi,%esi),%ecx;");
    asm("loc_65C6749: cmp $0x40,%ecx;");
    asm("loc_65C674C: jb loc_65C6740;");
    asm("loc_65C674E: mov $0xFFFFFFA4,%edi;");
    asm("loc_65C6753: lea 0x5C(%eax),%esi;");
    asm("loc_65C6756: sub %eax,%edi;");
    asm("loc_65C6758: mov (%esi,%edx),%cl;");
    asm("loc_65C675B: mov %cl,(%esi);");
    asm("loc_65C675D: inc %esi;");
    asm("loc_65C675E: lea (%edi,%esi),%ecx;");
    asm("loc_65C6761: cmp $0x80,%ecx;");
    asm("loc_65C6767: jb loc_65C6758;");
    asm("loc_65C6769: pop %edi;");
    asm("loc_65C676A: pop %esi;");
    asm("loc_65C676B: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C6770() // _sub_65C6770
{
    __DEBUG_ASM(65C6770);
    // chunk 0x65C6770 _sub_65C6770
    asm("loc_65C6770: push %ebx;");
    asm("loc_65C6771: mov 8(%esp),%bl;");
    asm("loc_65C6775: test $2,%bl;");
    asm("loc_65C6778: push %esi;");
    asm("loc_65C6779: mov %ecx,%esi;");
    asm("loc_65C677B: je loc_65C67AB;");
    asm("loc_65C677D: mov -4(%esi),%eax;");
    asm("loc_65C6780: push %edi;");
    asm("loc_65C6781: push $_sub_65C5D90;");
    asm("loc_65C6786: lea -4(%esi),%edi;");
    asm("loc_65C6789: push %eax;");
    asm("loc_65C678A: push $0xDC;");
    asm("loc_65C678F: push %esi;");
    asm("loc_65C6790: call _sub_65C6AEF;");
    asm("loc_65C6795: test $1,%bl;");
    asm("loc_65C6798: je loc_65C67A3;");
    asm("loc_65C679A: push %edi;");
    asm("loc_65C679B: call _sub_65C6A60;");
    asm("loc_65C67A0: add $4,%esp;");
    asm("loc_65C67A3: mov %edi,%eax;");
    asm("loc_65C67A5: pop %edi;");
    asm("loc_65C67A6: pop %esi;");
    asm("loc_65C67A7: pop %ebx;");
    asm("loc_65C67A8: ret $4;");
    asm("loc_65C67AB: test $1,%bl;");
    asm("loc_65C67AE: movl $_off_65C757C,(%esi);");
    asm("loc_65C67B4: je loc_65C67BF;");
    asm("loc_65C67B6: push %esi;");
    asm("loc_65C67B7: call _sub_65C6A60;");
    asm("loc_65C67BC: add $4,%esp;");
    asm("loc_65C67BF: mov %esi,%eax;");
    asm("loc_65C67C1: pop %esi;");
    asm("loc_65C67C2: pop %ebx;");
    asm("loc_65C67C3: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C67D0() // ?Encode@MD5Hash@@IAEXPAEPAKK@Z
{
    __DEBUG_ASM(65C67D0);
    // chunk 0x65C67D0 _sub_65C67D0
    asm("loc_65C67D0: push %edi;");
    asm("loc_65C67D1: mov 0x10(%esp),%edi;");
    asm("loc_65C67D5: test %edi,%edi;");
    asm("loc_65C67D7: jbe loc_65C6814;");
    asm("loc_65C67D9: mov 8(%esp),%edx;");
    asm("loc_65C67DD: mov 0xC(%esp),%ecx;");
    asm("loc_65C67E1: push %esi;");
    asm("loc_65C67E2: or $0xFFFFFFFF,%esi;");
    asm("loc_65C67E5: add $2,%ecx;");
    asm("loc_65C67E8: lea 1(%edx),%eax;");
    asm("loc_65C67EB: sub %edx,%esi;");
    asm("loc_65C67ED: lea (%ecx),%ecx;");
    asm("loc_65C67F0: mov -2(%ecx),%dl;");
    asm("loc_65C67F3: mov %dl,-1(%eax);");
    asm("loc_65C67F6: mov -1(%ecx),%dl;");
    asm("loc_65C67F9: mov %dl,(%eax);");
    asm("loc_65C67FB: mov (%ecx),%dl;");
    asm("loc_65C67FD: mov %dl,1(%eax);");
    asm("loc_65C6800: mov 1(%ecx),%dl;");
    asm("loc_65C6803: mov %dl,2(%eax);");
    asm("loc_65C6806: add $4,%eax;");
    asm("loc_65C6809: lea (%esi,%eax),%edx;");
    asm("loc_65C680C: add $4,%ecx;");
    asm("loc_65C680F: cmp %edi,%edx;");
    asm("loc_65C6811: jb loc_65C67F0;");
    asm("loc_65C6813: pop %esi;");
    asm("loc_65C6814: pop %edi;");
    asm("loc_65C6815: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C6820() // ?Decode@MD5Hash@@IAEXPAKPAEK@Z
{
    __DEBUG_ASM(65C6820);
    // chunk 0x65C6820 _sub_65C6820
    asm("loc_65C6820: push %edi;");
    asm("loc_65C6821: mov 0x10(%esp),%edi;");
    asm("loc_65C6825: test %edi,%edi;");
    asm("loc_65C6827: jbe loc_65C686C;");
    asm("loc_65C6829: mov 0xC(%esp),%edx;");
    asm("loc_65C682D: mov 8(%esp),%ecx;");
    asm("loc_65C6831: push %ebx;");
    asm("loc_65C6832: push %esi;");
    asm("loc_65C6833: mov $0xFFFFFFFE,%esi;");
    asm("loc_65C6838: lea 2(%edx),%eax;");
    asm("loc_65C683B: sub %edx,%esi;");
    asm("loc_65C683D: lea (%ecx),%ecx;");
    asm("loc_65C6840: movzbl -1(%eax),%ebx;");
    asm("loc_65C6844: xor %edx,%edx;");
    asm("loc_65C6846: mov 1(%eax),%dh;");
    asm("loc_65C6849: add $4,%eax;");
    asm("loc_65C684C: add $4,%ecx;");
    asm("loc_65C684F: mov -4(%eax),%dl;");
    asm("loc_65C6852: shl $8,%edx;");
    asm("loc_65C6855: or %ebx,%edx;");
    asm("loc_65C6857: movzbl -6(%eax),%ebx;");
    asm("loc_65C685B: shl $8,%edx;");
    asm("loc_65C685E: or %ebx,%edx;");
    asm("loc_65C6860: mov %edx,-4(%ecx);");
    asm("loc_65C6863: lea (%esi,%eax),%edx;");
    asm("loc_65C6866: cmp %edi,%edx;");
    asm("loc_65C6868: jb loc_65C6840;");
    asm("loc_65C686A: pop %esi;");
    asm("loc_65C686B: pop %ebx;");
    asm("loc_65C686C: pop %edi;");
    asm("loc_65C686D: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C6870() // ?AddData@MD5Hash@@QAE_NQAXK@Z
{
    __DEBUG_ASM(65C6870);
    // chunk 0x65C6870 _sub_65C6870
    asm("loc_65C6870: push %ebx;");
    asm("loc_65C6871: mov %ecx,%ebx;");
    asm("loc_65C6873: mov 0x14(%ebx),%edx;");
    asm("loc_65C6876: mov 0xC(%esp),%ecx;");
    asm("loc_65C687A: push %ebp;");
    asm("loc_65C687B: mov %edx,%eax;");
    asm("loc_65C687D: push %esi;");
    asm("loc_65C687E: shr $3,%eax;");
    asm("loc_65C6881: lea (%edx,%ecx,8),%edx;");
    asm("loc_65C6884: lea (,%ecx,8),%esi;");
    asm("loc_65C688B: and $0x3F,%eax;");
    asm("loc_65C688E: cmp %esi,%edx;");
    asm("loc_65C6890: push %edi;");
    asm("loc_65C6891: mov %edx,0x14(%ebx);");
    asm("loc_65C6894: jae loc_65C6899;");
    asm("loc_65C6896: incl 0x18(%ebx);");
    asm("loc_65C6899: mov 0x18(%ebx),%edi;");
    asm("loc_65C689C: mov %ecx,%edx;");
    asm("loc_65C689E: shr $0x1D,%edx;");
    asm("loc_65C68A1: mov $0x40,%ebp;");
    asm("loc_65C68A6: add %edx,%edi;");
    asm("loc_65C68A8: sub %eax,%ebp;");
    asm("loc_65C68AA: cmp %ebp,%ecx;");
    asm("loc_65C68AC: mov %edi,0x18(%ebx);");
    asm("loc_65C68AF: jb loc_65C6903;");
    asm("loc_65C68B1: mov 0x14(%esp),%esi;");
    asm("loc_65C68B5: lea 0x1C(%eax,%ebx),%edi;");
    asm("loc_65C68B9: mov %ebp,%ecx;");
    asm("loc_65C68BB: mov %ecx,%eax;");
    asm("loc_65C68BD: shr $2,%ecx;");
    asm("loc_65C68C0: rep movsl (%esi),(%edi);");
    asm("loc_65C68C2: mov %eax,%ecx;");
    asm("loc_65C68C4: and $3,%ecx;");
    asm("loc_65C68C7: rep movsb (%esi),(%edi);");
    asm("loc_65C68C9: lea 0x1C(%ebx),%ecx;");
    asm("loc_65C68CC: push %ecx;");
    asm("loc_65C68CD: mov %ebx,%ecx;");
    asm("loc_65C68CF: call _sub_65C5DA0;");
    asm("loc_65C68D4: lea 0x3F(%ebp),%esi;");
    asm("loc_65C68D7: mov %ebp,%edi;");
    asm("loc_65C68D9: mov 0x18(%esp),%ebp;");
    asm("loc_65C68DD: cmp %ebp,%esi;");
    asm("loc_65C68DF: jae loc_65C68FB;");
    asm("loc_65C68E1: mov 0x14(%esp),%edx;");
    asm("loc_65C68E5: lea -0x3F(%edx,%esi),%eax;");
    asm("loc_65C68E9: push %eax;");
    asm("loc_65C68EA: mov %ebx,%ecx;");
    asm("loc_65C68EC: call _sub_65C5DA0;");
    asm("loc_65C68F1: add $0x40,%esi;");
    asm("loc_65C68F4: add $0x40,%edi;");
    asm("loc_65C68F7: cmp %ebp,%esi;");
    asm("loc_65C68F9: jb loc_65C68E1;");
    asm("loc_65C68FB: mov 0x18(%esp),%ecx;");
    asm("loc_65C68FF: xor %eax,%eax;");
    asm("loc_65C6901: jmp loc_65C6905;");
    asm("loc_65C6903: xor %edi,%edi;");
    asm("loc_65C6905: mov 0x14(%esp),%edx;");
    asm("loc_65C6909: sub %edi,%ecx;");
    asm("loc_65C690B: lea (%edi,%edx),%esi;");
    asm("loc_65C690E: lea 0x1C(%eax,%ebx),%edi;");
    asm("loc_65C6912: mov %ecx,%eax;");
    asm("loc_65C6914: shr $2,%ecx;");
    asm("loc_65C6917: rep movsl (%esi),(%edi);");
    asm("loc_65C6919: mov %eax,%ecx;");
    asm("loc_65C691B: and $3,%ecx;");
    asm("loc_65C691E: rep movsb (%esi),(%edi);");
    asm("loc_65C6920: pop %edi;");
    asm("loc_65C6921: pop %esi;");
    asm("loc_65C6922: pop %ebp;");
    asm("loc_65C6923: mov $1,%al;");
    asm("loc_65C6925: pop %ebx;");
    asm("loc_65C6926: ret $8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C6930() // ?CalcValue@MD5Hash@@QAE_NXZ
{
    __DEBUG_ASM(65C6930);
    // chunk 0x65C6930 _sub_65C6930
    asm("loc_65C6930: sub $8,%esp;");
    asm("loc_65C6933: push %esi;");
    asm("loc_65C6934: mov %ecx,%esi;");
    asm("loc_65C6936: xor %ecx,%ecx;");
    asm("loc_65C6938: lea 0x16(%esi),%eax;");
    asm("loc_65C693B: nop;");
    asm("loc_65C693C: lea (%esp),%esp;");
    asm("loc_65C6940: mov -2(%eax),%dl;");
    asm("loc_65C6943: mov %dl,4(%esp,%ecx);");
    asm("loc_65C6947: mov -1(%eax),%dl;");
    asm("loc_65C694A: mov %dl,5(%esp,%ecx);");
    asm("loc_65C694E: mov (%eax),%dl;");
    asm("loc_65C6950: mov %dl,6(%esp,%ecx);");
    asm("loc_65C6954: mov 1(%eax),%dl;");
    asm("loc_65C6957: mov %dl,7(%esp,%ecx);");
    asm("loc_65C695B: add $4,%ecx;");
    asm("loc_65C695E: add $4,%eax;");
    asm("loc_65C6961: cmp $8,%ecx;");
    asm("loc_65C6964: jb loc_65C6940;");
    asm("loc_65C6966: mov 0x14(%esi),%eax;");
    asm("loc_65C6969: shr $3,%eax;");
    asm("loc_65C696C: and $0x3F,%eax;");
    asm("loc_65C696F: cmp $0x38,%eax;");
    asm("loc_65C6972: mov $0x38,%ecx;");
    asm("loc_65C6977: jb loc_65C697E;");
    asm("loc_65C6979: mov $0x78,%ecx;");
    asm("loc_65C697E: sub %eax,%ecx;");
    asm("loc_65C6980: push %ecx;");
    asm("loc_65C6981: push $_data_65CA068;");
    asm("loc_65C6986: mov %esi,%ecx;");
    asm("loc_65C6988: call _sub_65C6870;");
    asm("loc_65C698D: push $8;");
    asm("loc_65C698F: lea 8(%esp),%eax;");
    asm("loc_65C6993: push %eax;");
    asm("loc_65C6994: mov %esi,%ecx;");
    asm("loc_65C6996: call _sub_65C6870;");
    asm("loc_65C699B: mov $1,%al;");
    asm("loc_65C699D: pop %esi;");
    asm("loc_65C699E: add $8,%esp;");
    asm("loc_65C69A1: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C69B0() // ?AsString@MD5Hash@@QAEPBDXZ
{
    __DEBUG_ASM(65C69B0);
    // chunk 0x65C69B0 _sub_65C69B0
    asm("loc_65C69B0: mov 0x10(%ecx),%eax;");
    asm("loc_65C69B3: mov 0xC(%ecx),%edx;");
    asm("loc_65C69B6: push %esi;");
    asm("loc_65C69B7: push %eax;");
    asm("loc_65C69B8: mov 8(%ecx),%eax;");
    asm("loc_65C69BB: push %edx;");
    asm("loc_65C69BC: lea 0x5C(%ecx),%esi;");
    asm("loc_65C69BF: mov 4(%ecx),%ecx;");
    asm("loc_65C69C2: push %eax;");
    asm("loc_65C69C3: push %ecx;");
    asm("loc_65C69C4: push $_data_65C7580;");
    asm("loc_65C69C9: push %esi;");
    asm("loc_65C69CA: calll *_import_65C70C8;");
    asm("loc_65C69D0: add $0x18,%esp;");
    asm("loc_65C69D3: mov %esi,%eax;");
    asm("loc_65C69D5: pop %esi;");
    asm("loc_65C69D6: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C69E0() // ?FromString@MD5Hash@@QAEXPBD@Z
{
    __DEBUG_ASM(65C69E0);
    // chunk 0x65C69E0 _sub_65C69E0
    asm("loc_65C69E0: lea 0x10(%ecx),%eax;");
    asm("loc_65C69E3: push %eax;");
    asm("loc_65C69E4: lea 0xC(%ecx),%edx;");
    asm("loc_65C69E7: push %edx;");
    asm("loc_65C69E8: lea 8(%ecx),%eax;");
    asm("loc_65C69EB: push %eax;");
    asm("loc_65C69EC: add $4,%ecx;");
    asm("loc_65C69EF: push %ecx;");
    asm("loc_65C69F0: mov 0x14(%esp),%ecx;");
    asm("loc_65C69F4: push $_data_65C7594;");
    asm("loc_65C69F9: push %ecx;");
    asm("loc_65C69FA: calll *_import_65C70CC;");
    asm("loc_65C6A00: add $0x18,%esp;");
    asm("loc_65C6A03: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C6A10() // ?Compare@MD5Hash@@QAE_NAAV1@@Z
{
    __DEBUG_ASM(65C6A10);
    // chunk 0x65C6A10 _sub_65C6A10
    asm("loc_65C6A10: mov 4(%esp),%edx;");
    asm("loc_65C6A14: push %esi;");
    asm("loc_65C6A15: mov %ecx,%eax;");
    asm("loc_65C6A17: push %edi;");
    asm("loc_65C6A18: lea 4(%eax),%esi;");
    asm("loc_65C6A1B: xor %eax,%eax;");
    asm("loc_65C6A1D: mov $4,%ecx;");
    asm("loc_65C6A22: lea 4(%edx),%edi;");
    asm("loc_65C6A25: repe cmpsl (%edi),(%esi);");
    asm("loc_65C6A27: pop %edi;");
    asm("loc_65C6A28: sete %al;");
    asm("loc_65C6A2B: pop %esi;");
    asm("loc_65C6A2C: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C6A30() // _inflateInit_
{
    __DEBUG_ASM(65C6A30);
    // chunk 0x65C6A30 _sub_65C6A30
    asm("loc_65C6A30: jmpl *_import_65C70FC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C6A36() // _deflateInit_
{
    __DEBUG_ASM(65C6A36);
    // chunk 0x65C6A36 _sub_65C6A36
    asm("loc_65C6A36: jmpl *_import_65C70F0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C6A3C() // _inflateEnd
{
    __DEBUG_ASM(65C6A3C);
    // chunk 0x65C6A3C _sub_65C6A3C
    asm("loc_65C6A3C: jmpl *_data_65C7104;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C6A42() // _deflateEnd
{
    __DEBUG_ASM(65C6A42);
    // chunk 0x65C6A42 _sub_65C6A42
    asm("loc_65C6A42: jmpl *_import_65C7100;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C6A48() // _deflateReset
{
    __DEBUG_ASM(65C6A48);
    // chunk 0x65C6A48 _sub_65C6A48
    asm("loc_65C6A48: jmpl *_import_65C70F8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C6A4E() // _deflate
{
    __DEBUG_ASM(65C6A4E);
    // chunk 0x65C6A4E _sub_65C6A4E
    asm("loc_65C6A4E: jmpl *_import_65C70F4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C6A54() // _inflateReset
{
    __DEBUG_ASM(65C6A54);
    // chunk 0x65C6A54 _sub_65C6A54
    asm("loc_65C6A54: jmpl *_import_65C710C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C6A5A() // _inflate
{
    __DEBUG_ASM(65C6A5A);
    // chunk 0x65C6A5A _sub_65C6A5A
    asm("loc_65C6A5A: jmpl *_import_65C7108;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C6A60() // ??3@YAXPAX@Z
{
    __DEBUG_ASM(65C6A60);
    // chunk 0x65C6A60 _sub_65C6A60
    asm("loc_65C6A60: jmpl *_import_65C7094;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C6A66() // ??2@YAPAXI@Z
{
    __DEBUG_ASM(65C6A66);
    // chunk 0x65C6A66 _sub_65C6A66
    asm("loc_65C6A66: jmpl *_import_65C7078;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C6A6C() // __CxxFrameHandler
{
    __DEBUG_ASM(65C6A6C);
    // chunk 0x65C6A6C _sub_65C6A6C
    asm("loc_65C6A6C: jmpl *_import_65C70B4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C6A80() // __onexit
{
    __DEBUG_ASM(65C6A80);
    // chunk 0x65C6A80 _sub_65C6A80
    asm("loc_65C6A80: cmpl $0xFFFFFFFF,_data_65CA2C0;");
    asm("loc_65C6A87: jne loc_65C6A95;");
    asm("loc_65C6A89: pushl 4(%esp);");
    asm("loc_65C6A8D: calll *_import_65C70AC;");
    asm("loc_65C6A93: pop %ecx;");
    asm("loc_65C6A94: ret;");
    asm("loc_65C6A95: push $_data_65CA2BC;");
    asm("loc_65C6A9A: push $_data_65CA2C0;");
    asm("loc_65C6A9F: pushl 0xC(%esp);");
    asm("loc_65C6AA3: call _sub_65C6D38;");
    asm("loc_65C6AA8: add $0xC,%esp;");
    asm("loc_65C6AAB: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C6AAC() // _atexit
{
    __DEBUG_ASM(65C6AAC);
    // chunk 0x65C6AAC _sub_65C6AAC
    asm("loc_65C6AAC: pushl 4(%esp);");
    asm("loc_65C6AB0: call _sub_65C6A80;");
    asm("loc_65C6AB5: neg %eax;");
    asm("loc_65C6AB7: sbb %eax,%eax;");
    asm("loc_65C6AB9: pop %ecx;");
    asm("loc_65C6ABA: neg %eax;");
    asm("loc_65C6ABC: dec %eax;");
    asm("loc_65C6ABD: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C6AC0() // __alloca_probe
{
    __DEBUG_ASM(65C6AC0);
    // chunk 0x65C6AC0 _sub_65C6AC0
    asm("loc_65C6AC0: push %ecx;");
    asm("loc_65C6AC1: cmp $0x1000,%eax;");
    asm("loc_65C6AC6: lea 8(%esp),%ecx;");
    asm("loc_65C6ACA: jb loc_65C6AE0;");
    asm("loc_65C6ACC: sub $0x1000,%ecx;");
    asm("loc_65C6AD2: sub $0x1000,%eax;");
    asm("loc_65C6AD7: test %eax,(%ecx);");
    asm("loc_65C6AD9: cmp $0x1000,%eax;");
    asm("loc_65C6ADE: jae loc_65C6ACC;");
    asm("loc_65C6AE0: sub %eax,%ecx;");
    asm("loc_65C6AE2: mov %esp,%eax;");
    asm("loc_65C6AE4: test %eax,(%ecx);");
    asm("loc_65C6AE6: mov %ecx,%esp;");
    asm("loc_65C6AE8: mov (%eax),%ecx;");
    asm("loc_65C6AEA: mov 4(%eax),%eax;");
    asm("loc_65C6AED: push %eax;");
    asm("loc_65C6AEE: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C6AEF() // ??_M@YGXPAXIHP6EX0@Z@Z
{
    __DEBUG_ASM(65C6AEF);
    // chunk 0x65C6AEF _sub_65C6AEF
    asm("loc_65C6AEF: push %ebp;");
    asm("loc_65C6AF0: mov %esp,%ebp;");
    asm("loc_65C6AF2: push $0xFFFFFFFF;");
    asm("loc_65C6AF4: push $_data_65C7620;");
    asm("loc_65C6AF9: push $_sub_65C6D3E;");
    asm("loc_65C6AFE: mov %fs:0,%eax;");
    asm("loc_65C6B04: push %eax;");
    asm("loc_65C6B05: mov %esp,%fs:0;");
    asm("loc_65C6B0C: sub $0xC,%esp;");
    asm("loc_65C6B0F: push %ebx;");
    asm("loc_65C6B10: push %esi;");
    asm("loc_65C6B11: push %edi;");
    asm("loc_65C6B12: andl $0,-0x1C(%ebp);");
    asm("loc_65C6B16: mov 0xC(%ebp),%esi;");
    asm("loc_65C6B19: mov %esi,%eax;");
    asm("loc_65C6B1B: imul 0x10(%ebp),%eax;");
    asm("loc_65C6B1F: add %eax,8(%ebp);");
    asm("loc_65C6B22: andl $0,-4(%ebp);");
    asm("loc_65C6B26: decl 0x10(%ebp);");
    asm("loc_65C6B29: js loc_65C6B36;");
    asm("loc_65C6B2B: sub %esi,8(%ebp);");
    asm("loc_65C6B2E: mov 8(%ebp),%ecx;");
    asm("loc_65C6B31: calll *0x14(%ebp);");
    asm("loc_65C6B34: jmp loc_65C6B26;");
    asm("loc_65C6B36: movl $1,-0x1C(%ebp);");
    asm("loc_65C6B3D: orl $0xFFFFFFFF,-4(%ebp);");
    asm("loc_65C6B41: call loc_65C6B57;");
    asm("loc_65C6B46: mov -0x10(%ebp),%ecx;");
    asm("loc_65C6B49: mov %ecx,%fs:0;");
    asm("loc_65C6B50: pop %edi;");
    asm("loc_65C6B51: pop %esi;");
    asm("loc_65C6B52: pop %ebx;");
    asm("loc_65C6B53: leave;");
    asm("loc_65C6B54: ret $0x10;");
    asm("loc_65C6B57: cmpl $0,-0x1C(%ebp);");
    asm("loc_65C6B5B: jne loc_65C6B6E;");
    asm("loc_65C6B5D: pushl 0x14(%ebp);");
    asm("loc_65C6B60: pushl 0x10(%ebp);");
    asm("loc_65C6B63: pushl 0xC(%ebp);");
    asm("loc_65C6B66: pushl 8(%ebp);");
    asm("loc_65C6B69: call _sub_65C6B6F;");
    asm("loc_65C6B6E: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C6B6F() // ?__ArrayUnwind@@YGXPAXIHP6EX0@Z@Z
{
    __DEBUG_ASM(65C6B6F);
    // chunk 0x65C6B6F _sub_65C6B6F
    asm("loc_65C6B6F: push %ebp;");
    asm("loc_65C6B70: mov %esp,%ebp;");
    asm("loc_65C6B72: push $0xFFFFFFFF;");
    asm("loc_65C6B74: push $_data_65C7630;");
    asm("loc_65C6B79: push $_sub_65C6D3E;");
    asm("loc_65C6B7E: mov %fs:0,%eax;");
    asm("loc_65C6B84: push %eax;");
    asm("loc_65C6B85: mov %esp,%fs:0;");
    asm("loc_65C6B8C: push %ecx;");
    asm("loc_65C6B8D: push %ecx;");
    asm("loc_65C6B8E: push %ebx;");
    asm("loc_65C6B8F: push %esi;");
    asm("loc_65C6B90: push %edi;");
    asm("loc_65C6B91: mov %esp,-0x18(%ebp);");
    asm("loc_65C6B94: andl $0,-4(%ebp);");
    asm("loc_65C6B98: decl 0x10(%ebp);");
    asm("loc_65C6B9B: js loc_65C6BB8;");
    asm("loc_65C6B9D: mov 8(%ebp),%ecx;");
    asm("loc_65C6BA0: sub 0xC(%ebp),%ecx;");
    asm("loc_65C6BA3: mov %ecx,8(%ebp);");
    asm("loc_65C6BA6: calll *0x14(%ebp);");
    asm("loc_65C6BA9: jmp loc_65C6B98;");
    asm("loc_65C6BAB: pushl -0x14(%ebp);");
    asm("loc_65C6BAE: call _sub_65C6BCD;");
    asm("loc_65C6BB3: pop %ecx;");
    asm("loc_65C6BB4: ret;");
    asm("loc_65C6BB5: mov -0x18(%ebp),%esp;");
    asm("loc_65C6BB8: orl $0xFFFFFFFF,-4(%ebp);");
    asm("loc_65C6BBC: mov -0x10(%ebp),%ecx;");
    asm("loc_65C6BBF: mov %ecx,%fs:0;");
    asm("loc_65C6BC6: pop %edi;");
    asm("loc_65C6BC7: pop %esi;");
    asm("loc_65C6BC8: pop %ebx;");
    asm("loc_65C6BC9: leave;");
    asm("loc_65C6BCA: ret $0x10;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C6BCD() // _unknown_libname_4
{
    __DEBUG_ASM(65C6BCD);
    // chunk 0x65C6BCD _sub_65C6BCD
    asm("loc_65C6BCD: mov 4(%esp),%eax;");
    asm("loc_65C6BD1: mov (%eax),%eax;");
    asm("loc_65C6BD3: cmpl $0xE06D7363,(%eax);");
    asm("loc_65C6BD9: je loc_65C6BDE;");
    asm("loc_65C6BDB: xor %eax,%eax;");
    asm("loc_65C6BDD: ret;");
    asm("loc_65C6BDE: jmp _sub_65C6D44;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C6BE4() // _ftol
{
    __DEBUG_ASM(65C6BE4);
    // chunk 0x65C6BE4 _sub_65C6BE4
    asm("loc_65C6BE4: jmpl *_import_65C7080;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C6BEA() // _purecall
{
    __DEBUG_ASM(65C6BEA);
    // chunk 0x65C6BEA _sub_65C6BEA
    asm("loc_65C6BEA: jmpl *_import_65C70C4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C6BF0() // __CRT_INIT@12
{
    __DEBUG_ASM(65C6BF0);
    // chunk 0x65C6BF0 _sub_65C6BF0
    asm("loc_65C6BF0: mov 8(%esp),%eax;");
    asm("loc_65C6BF4: test %eax,%eax;");
    asm("loc_65C6BF6: jne loc_65C6C06;");
    asm("loc_65C6BF8: cmp %eax,_data_65CA2B0;");
    asm("loc_65C6BFE: jle loc_65C6C2E;");
    asm("loc_65C6C00: decl _data_65CA2B0;");
    asm("loc_65C6C06: mov _import_65C708C,%ecx;");
    asm("loc_65C6C0C: cmp $1,%eax;");
    asm("loc_65C6C0F: mov (%ecx),%ecx;");
    asm("loc_65C6C11: mov %ecx,_data_65CA2B4;");
    asm("loc_65C6C17: jne loc_65C6C58;");
    asm("loc_65C6C19: push $0x80;");
    asm("loc_65C6C1E: calll *_import_65C7084;");
    asm("loc_65C6C24: test %eax,%eax;");
    asm("loc_65C6C26: pop %ecx;");
    asm("loc_65C6C27: mov %eax,_data_65CA2C0;");
    asm("loc_65C6C2C: jne loc_65C6C32;");
    asm("loc_65C6C2E: xor %eax,%eax;");
    asm("loc_65C6C30: jmp loc_65C6C98;");
    asm("loc_65C6C32: andl $0,(%eax);");
    asm("loc_65C6C35: mov _data_65CA2C0,%eax;");
    asm("loc_65C6C3A: push $_data_65CA014;");
    asm("loc_65C6C3F: push $_data_65CA000;");
    asm("loc_65C6C44: mov %eax,_data_65CA2BC;");
    asm("loc_65C6C49: call _sub_65C6D4A;");
    asm("loc_65C6C4E: incl _data_65CA2B0;");
    asm("loc_65C6C54: pop %ecx;");
    asm("loc_65C6C55: pop %ecx;");
    asm("loc_65C6C56: jmp loc_65C6C95;");
    asm("loc_65C6C58: test %eax,%eax;");
    asm("loc_65C6C5A: jne loc_65C6C95;");
    asm("loc_65C6C5C: mov _data_65CA2C0,%eax;");
    asm("loc_65C6C61: test %eax,%eax;");
    asm("loc_65C6C63: je loc_65C6C95;");
    asm("loc_65C6C65: mov _data_65CA2BC,%ecx;");
    asm("loc_65C6C6B: push %esi;");
    asm("loc_65C6C6C: lea -4(%ecx),%esi;");
    asm("loc_65C6C6F: cmp %eax,%esi;");
    asm("loc_65C6C71: jb loc_65C6C85;");
    asm("loc_65C6C73: mov (%esi),%ecx;");
    asm("loc_65C6C75: test %ecx,%ecx;");
    asm("loc_65C6C77: je loc_65C6C80;");
    asm("loc_65C6C79: call *%ecx;");
    asm("loc_65C6C7B: mov _data_65CA2C0,%eax;");
    asm("loc_65C6C80: sub $4,%esi;");
    asm("loc_65C6C83: jmp loc_65C6C6F;");
    asm("loc_65C6C85: push %eax;");
    asm("loc_65C6C86: calll *_import_65C70B8;");
    asm("loc_65C6C8C: andl $0,_data_65CA2C0;");
    asm("loc_65C6C93: pop %ecx;");
    asm("loc_65C6C94: pop %esi;");
    asm("loc_65C6C95: push $1;");
    asm("loc_65C6C97: pop %eax;");
    asm("loc_65C6C98: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C6C9B() // _DllEntryPoint
{
    __DEBUG_ASM(65C6C9B);
    // chunk 0x65C6C9B _sub_65C6C9B
    asm("loc_65C6C9B: push %ebp;");
    asm("loc_65C6C9C: mov %esp,%ebp;");
    asm("loc_65C6C9E: push %ebx;");
    asm("loc_65C6C9F: mov 8(%ebp),%ebx;");
    asm("loc_65C6CA2: push %esi;");
    asm("loc_65C6CA3: mov 0xC(%ebp),%esi;");
    asm("loc_65C6CA6: push %edi;");
    asm("loc_65C6CA7: mov 0x10(%ebp),%edi;");
    asm("loc_65C6CAA: test %esi,%esi;");
    asm("loc_65C6CAC: jne loc_65C6CB7;");
    asm("loc_65C6CAE: cmpl $0,_data_65CA2B0;");
    asm("loc_65C6CB5: jmp loc_65C6CDD;");
    asm("loc_65C6CB7: cmp $1,%esi;");
    asm("loc_65C6CBA: je loc_65C6CC1;");
    asm("loc_65C6CBC: cmp $2,%esi;");
    asm("loc_65C6CBF: jne loc_65C6CE3;");
    asm("loc_65C6CC1: mov _data_65CA2B8,%eax;");
    asm("loc_65C6CC6: test %eax,%eax;");
    asm("loc_65C6CC8: je loc_65C6CD3;");
    asm("loc_65C6CCA: push %edi;");
    asm("loc_65C6CCB: push %esi;");
    asm("loc_65C6CCC: push %ebx;");
    asm("loc_65C6CCD: call *%eax;");
    asm("loc_65C6CCF: test %eax,%eax;");
    asm("loc_65C6CD1: je loc_65C6CDF;");
    asm("loc_65C6CD3: push %edi;");
    asm("loc_65C6CD4: push %esi;");
    asm("loc_65C6CD5: push %ebx;");
    asm("loc_65C6CD6: call _sub_65C6BF0;");
    asm("loc_65C6CDB: test %eax,%eax;");
    asm("loc_65C6CDD: jne loc_65C6CE3;");
    asm("loc_65C6CDF: xor %eax,%eax;");
    asm("loc_65C6CE1: jmp loc_65C6D31;");
    asm("loc_65C6CE3: push %edi;");
    asm("loc_65C6CE4: push %esi;");
    asm("loc_65C6CE5: push %ebx;");
    asm("loc_65C6CE6: call _sub_65C5D40;");
    asm("loc_65C6CEB: cmp $1,%esi;");
    asm("loc_65C6CEE: mov %eax,0xC(%ebp);");
    asm("loc_65C6CF1: jne loc_65C6CFF;");
    asm("loc_65C6CF3: test %eax,%eax;");
    asm("loc_65C6CF5: jne loc_65C6D2E;");
    asm("loc_65C6CF7: push %edi;");
    asm("loc_65C6CF8: push %eax;");
    asm("loc_65C6CF9: push %ebx;");
    asm("loc_65C6CFA: call _sub_65C6BF0;");
    asm("loc_65C6CFF: test %esi,%esi;");
    asm("loc_65C6D01: je loc_65C6D08;");
    asm("loc_65C6D03: cmp $3,%esi;");
    asm("loc_65C6D06: jne loc_65C6D2E;");
    asm("loc_65C6D08: push %edi;");
    asm("loc_65C6D09: push %esi;");
    asm("loc_65C6D0A: push %ebx;");
    asm("loc_65C6D0B: call _sub_65C6BF0;");
    asm("loc_65C6D10: test %eax,%eax;");
    asm("loc_65C6D12: jne loc_65C6D17;");
    asm("loc_65C6D14: and %eax,0xC(%ebp);");
    asm("loc_65C6D17: cmpl $0,0xC(%ebp);");
    asm("loc_65C6D1B: je loc_65C6D2E;");
    asm("loc_65C6D1D: mov _data_65CA2B8,%eax;");
    asm("loc_65C6D22: test %eax,%eax;");
    asm("loc_65C6D24: je loc_65C6D2E;");
    asm("loc_65C6D26: push %edi;");
    asm("loc_65C6D27: push %esi;");
    asm("loc_65C6D28: push %ebx;");
    asm("loc_65C6D29: call *%eax;");
    asm("loc_65C6D2B: mov %eax,0xC(%ebp);");
    asm("loc_65C6D2E: mov 0xC(%ebp),%eax;");
    asm("loc_65C6D31: pop %edi;");
    asm("loc_65C6D32: pop %esi;");
    asm("loc_65C6D33: pop %ebx;");
    asm("loc_65C6D34: pop %ebp;");
    asm("loc_65C6D35: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C6D38() // __dllonexit
{
    __DEBUG_ASM(65C6D38);
    // chunk 0x65C6D38 _sub_65C6D38
    asm("loc_65C6D38: jmpl *_import_65C70D0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C6D3E() // _except_handler3
{
    __DEBUG_ASM(65C6D3E);
    // chunk 0x65C6D3E _sub_65C6D3E
    asm("loc_65C6D3E: jmpl *_import_65C70B0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C6D44() // ?terminate@@YAXXZ
{
    __DEBUG_ASM(65C6D44);
    // chunk 0x65C6D44 _sub_65C6D44
    asm("loc_65C6D44: jmpl *_import_65C70C0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C6D4A() // _initterm
{
    __DEBUG_ASM(65C6D4A);
    // chunk 0x65C6D4A _sub_65C6D4A
    asm("loc_65C6D4A: jmpl *_import_65C7090;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C6D50() // _sub_65C6D50
{
    __DEBUG_ASM(65C6D50);
    // chunk 0x65C6D50 _sub_65C6D50
    asm("loc_65C6D50: mov 4(%ebp),%eax;");
    asm("loc_65C6D53: push %eax;");
    asm("loc_65C6D54: call _sub_65C6A60;");
    asm("loc_65C6D59: pop %ecx;");
    asm("loc_65C6D5A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C6D5B() // _sub_65C6D5B
{
    __DEBUG_ASM(65C6D5B);
    // chunk 0x65C6D5B _sub_65C6D5B
    asm("loc_65C6D5B: mov 4(%ebp),%eax;");
    asm("loc_65C6D5E: push %eax;");
    asm("loc_65C6D5F: call _sub_65C6A60;");
    asm("loc_65C6D64: pop %ecx;");
    asm("loc_65C6D65: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C6D66() // _sub_65C6D66
{
    __DEBUG_ASM(65C6D66);
    // chunk 0x65C6D66 _sub_65C6D66
    asm("loc_65C6D66: mov 4(%ebp),%eax;");
    asm("loc_65C6D69: push %eax;");
    asm("loc_65C6D6A: call _sub_65C6A60;");
    asm("loc_65C6D6F: pop %ecx;");
    asm("loc_65C6D70: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C6D71() // _sub_65C6D71
{
    __DEBUG_ASM(65C6D71);
    // chunk 0x65C6D71 _sub_65C6D71
    asm("loc_65C6D71: mov 8(%ebp),%eax;");
    asm("loc_65C6D74: push %eax;");
    asm("loc_65C6D75: call _sub_65C6A60;");
    asm("loc_65C6D7A: pop %ecx;");
    asm("loc_65C6D7B: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C6D7C() // ?HandleClientMsg@CDPClient@@KGJPAXK0@Z_SEH
{
    __DEBUG_ASM(65C6D7C);
    // chunk 0x65C6D7C _sub_65C6D7C
    asm("loc_65C6D7C: mov $_data_65C7688,%eax;");
    asm("loc_65C6D81: jmp _sub_65C6A6C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C6D90() // _sub_65C6D90
{
    __DEBUG_ASM(65C6D90);
    // chunk 0x65C6D90 _sub_65C6D90
    asm("loc_65C6D90: mov -0x24(%ebp),%ecx;");
    asm("loc_65C6D93: add $0x10,%ecx;");
    asm("loc_65C6D96: jmp _sub_65C4240;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C6D9B() // _sub_65C6D9B
{
    __DEBUG_ASM(65C6D9B);
    // chunk 0x65C6D9B _sub_65C6D9B
    asm("loc_65C6D9B: mov -0x24(%ebp),%ecx;");
    asm("loc_65C6D9E: add $0x3C,%ecx;");
    asm("loc_65C6DA1: jmp _sub_65C4240;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C6DA6() // _sub_65C6DA6
{
    __DEBUG_ASM(65C6DA6);
    // chunk 0x65C6DA6 _sub_65C6DA6
    asm("loc_65C6DA6: mov -0x24(%ebp),%ecx;");
    asm("loc_65C6DA9: add $0x80,%ecx;");
    asm("loc_65C6DAF: jmp _sub_65C3340;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C6DB4() // ??0CDPClient@@QAE@XZ_SEH
{
    __DEBUG_ASM(65C6DB4);
    // chunk 0x65C6DB4 _sub_65C6DB4
    asm("loc_65C6DB4: mov $_data_65C76BC,%eax;");
    asm("loc_65C6DB9: jmp _sub_65C6A6C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C6DC0() // _sub_65C6DC0
{
    __DEBUG_ASM(65C6DC0);
    // chunk 0x65C6DC0 _sub_65C6DC0
    asm("loc_65C6DC0: mov -0x10(%ebp),%ecx;");
    asm("loc_65C6DC3: add $0x10,%ecx;");
    asm("loc_65C6DC6: jmp _sub_65C4240;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C6DCB() // _sub_65C6DCB
{
    __DEBUG_ASM(65C6DCB);
    // chunk 0x65C6DCB _sub_65C6DCB
    asm("loc_65C6DCB: mov -0x10(%ebp),%ecx;");
    asm("loc_65C6DCE: add $0x3C,%ecx;");
    asm("loc_65C6DD1: jmp _sub_65C4240;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C6DD6() // _sub_65C6DD6
{
    __DEBUG_ASM(65C6DD6);
    // chunk 0x65C6DD6 _sub_65C6DD6
    asm("loc_65C6DD6: mov -0x10(%ebp),%ecx;");
    asm("loc_65C6DD9: add $0x80,%ecx;");
    asm("loc_65C6DDF: jmp _sub_65C3340;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C6DE4() // ??1CDPClient@@UAE@XZ_SEH
{
    __DEBUG_ASM(65C6DE4);
    // chunk 0x65C6DE4 _sub_65C6DE4
    asm("loc_65C6DE4: mov $_data_65C76F0,%eax;");
    asm("loc_65C6DE9: jmp _sub_65C6A6C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C6DF0() // _sub_65C6DF0
{
    __DEBUG_ASM(65C6DF0);
    // chunk 0x65C6DF0 _sub_65C6DF0
    asm("loc_65C6DF0: lea -0x2C(%ebp),%ecx;");
    asm("loc_65C6DF3: jmpl *_import_65C706C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C6DF9() // _sub_65C6DF9
{
    __DEBUG_ASM(65C6DF9);
    // chunk 0x65C6DF9 _sub_65C6DF9
    asm("loc_65C6DF9: lea -0x2C(%ebp),%ecx;");
    asm("loc_65C6DFC: jmp _sub_65C2500;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C6E01() // _sub_65C6E01
{
    __DEBUG_ASM(65C6E01);
    // chunk 0x65C6E01 _sub_65C6E01
    asm("loc_65C6E01: lea -0x2C(%ebp),%ecx;");
    asm("loc_65C6E04: jmpl *_import_65C706C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C6E0A() // ?AddConnectAttempt@CDPClient@@QAE_NPBGPAG@Z_SEH
{
    __DEBUG_ASM(65C6E0A);
    // chunk 0x65C6E0A _sub_65C6E0A
    asm("loc_65C6E0A: mov $_data_65C7724,%eax;");
    asm("loc_65C6E0F: jmp _sub_65C6A6C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C6E20() // _sub_65C6E20
{
    __DEBUG_ASM(65C6E20);
    // chunk 0x65C6E20 _sub_65C6E20
    asm("loc_65C6E20: mov -0x10(%ebp),%ecx;");
    asm("loc_65C6E23: add $0x10,%ecx;");
    asm("loc_65C6E26: jmp _sub_65C4240;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C6E2B() // _sub_65C6E2B
{
    __DEBUG_ASM(65C6E2B);
    // chunk 0x65C6E2B _sub_65C6E2B
    asm("loc_65C6E2B: mov -0x10(%ebp),%ecx;");
    asm("loc_65C6E2E: add $0x3C,%ecx;");
    asm("loc_65C6E31: jmp _sub_65C4240;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C6E36() // ??0CDPClient@@QAE@ABV0@@Z_SEH
{
    __DEBUG_ASM(65C6E36);
    // chunk 0x65C6E36 _sub_65C6E36
    asm("loc_65C6E36: mov $_data_65C7750,%eax;");
    asm("loc_65C6E3B: jmp _sub_65C6A6C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C6E40() // _sub_65C6E40
{
    __DEBUG_ASM(65C6E40);
    // chunk 0x65C6E40 _sub_65C6E40
    asm("loc_65C6E40: mov 4(%ebp),%eax;");
    asm("loc_65C6E43: push %eax;");
    asm("loc_65C6E44: mov -0x10(%ebp),%ecx;");
    asm("loc_65C6E47: push %ecx;");
    asm("loc_65C6E48: call _sub_65C2E70;");
    asm("loc_65C6E4D: add $8,%esp;");
    asm("loc_65C6E50: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C6E51() // _sub_65C6E51
{
    __DEBUG_ASM(65C6E51);
    // chunk 0x65C6E51 _sub_65C6E51
    asm("loc_65C6E51: mov -0x10(%ebp),%ecx;");
    asm("loc_65C6E54: jmpl *_import_65C706C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C6E5A() // _SEH_65C3510
{
    __DEBUG_ASM(65C6E5A);
    // chunk 0x65C6E5A _sub_65C6E5A
    asm("loc_65C6E5A: mov $_data_65C777C,%eax;");
    asm("loc_65C6E5F: jmp _sub_65C6A6C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C6E70() // _unknown_libname_5
{
    __DEBUG_ASM(65C6E70);
    // chunk 0x65C6E70 _sub_65C6E70
    asm("loc_65C6E70: mov -0x10(%ebp),%eax;");
    asm("loc_65C6E73: push %eax;");
    asm("loc_65C6E74: call _sub_65C6A60;");
    asm("loc_65C6E79: pop %ecx;");
    asm("loc_65C6E7A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C6E7B() // ?Send@CDPClientProxy@@QAE_NPAXK@Z_SEH
{
    __DEBUG_ASM(65C6E7B);
    // chunk 0x65C6E7B _sub_65C6E7B
    asm("loc_65C6E7B: mov $_data_65C77A0,%eax;");
    asm("loc_65C6E80: jmp _sub_65C6A6C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C6E90() // _sub_65C6E90
{
    __DEBUG_ASM(65C6E90);
    // chunk 0x65C6E90 _sub_65C6E90
    asm("loc_65C6E90: mov 0xC(%ebp),%eax;");
    asm("loc_65C6E93: push %eax;");
    asm("loc_65C6E94: call _sub_65C6A60;");
    asm("loc_65C6E99: pop %ecx;");
    asm("loc_65C6E9A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C6E9B() // _sub_65C6E9B
{
    __DEBUG_ASM(65C6E9B);
    // chunk 0x65C6E9B _sub_65C6E9B
    asm("loc_65C6E9B: mov 0xC(%ebp),%eax;");
    asm("loc_65C6E9E: push %eax;");
    asm("loc_65C6E9F: call _sub_65C6A60;");
    asm("loc_65C6EA4: pop %ecx;");
    asm("loc_65C6EA5: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C6EA6() // _sub_65C6EA6
{
    __DEBUG_ASM(65C6EA6);
    // chunk 0x65C6EA6 _sub_65C6EA6
    asm("loc_65C6EA6: mov 0xC(%ebp),%eax;");
    asm("loc_65C6EA9: push %eax;");
    asm("loc_65C6EAA: call _sub_65C6A60;");
    asm("loc_65C6EAF: pop %ecx;");
    asm("loc_65C6EB0: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C6EB1() // _sub_65C6EB1
{
    __DEBUG_ASM(65C6EB1);
    // chunk 0x65C6EB1 _sub_65C6EB1
    asm("loc_65C6EB1: mov 0xC(%ebp),%eax;");
    asm("loc_65C6EB4: push %eax;");
    asm("loc_65C6EB5: call _sub_65C6A60;");
    asm("loc_65C6EBA: pop %ecx;");
    asm("loc_65C6EBB: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C6EBC() // ?HandleDPServerMsg@CDPServer@@KGJPAXK0@Z_SEH
{
    __DEBUG_ASM(65C6EBC);
    // chunk 0x65C6EBC _sub_65C6EBC
    asm("loc_65C6EBC: mov $_data_65C77DC,%eax;");
    asm("loc_65C6EC1: jmp _sub_65C6A6C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C6ED0() // _sub_65C6ED0
{
    __DEBUG_ASM(65C6ED0);
    // chunk 0x65C6ED0 _sub_65C6ED0
    asm("loc_65C6ED0: lea -0x38(%ebp),%ecx;");
    asm("loc_65C6ED3: jmp _sub_65C4240;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C6ED8() // ?DispatchMsgs@CDPServer@@QAEXXZ_SEH
{
    __DEBUG_ASM(65C6ED8);
    // chunk 0x65C6ED8 _sub_65C6ED8
    asm("loc_65C6ED8: mov $_data_65C7800,%eax;");
    asm("loc_65C6EDD: jmp _sub_65C6A6C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C6EF0() // _sub_65C6EF0
{
    __DEBUG_ASM(65C6EF0);
    // chunk 0x65C6EF0 _sub_65C6EF0
    asm("loc_65C6EF0: mov -0x24(%ebp),%ecx;");
    asm("loc_65C6EF3: add $0x56C,%ecx;");
    asm("loc_65C6EF9: jmp _sub_65C4240;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C6EFE() // ??0CDPServer@@QAE@XZ_SEH
{
    __DEBUG_ASM(65C6EFE);
    // chunk 0x65C6EFE _sub_65C6EFE
    asm("loc_65C6EFE: mov $_data_65C7824,%eax;");
    asm("loc_65C6F03: jmp _sub_65C6A6C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C6F10() // _sub_65C6F10
{
    __DEBUG_ASM(65C6F10);
    // chunk 0x65C6F10 _sub_65C6F10
    asm("loc_65C6F10: mov -0x10(%ebp),%ecx;");
    asm("loc_65C6F13: add $0x56C,%ecx;");
    asm("loc_65C6F19: jmp _sub_65C4240;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C6F1E() // ??1CDPServer@@UAE@XZ_SEH
{
    __DEBUG_ASM(65C6F1E);
    // chunk 0x65C6F1E _sub_65C6F1E
    asm("loc_65C6F1E: mov $_data_65C7848,%eax;");
    asm("loc_65C6F23: jmp _sub_65C6A6C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C6F30() // _unknown_libname_6
{
    __DEBUG_ASM(65C6F30);
    // chunk 0x65C6F30 _sub_65C6F30
    asm("loc_65C6F30: mov -0x10(%ebp),%eax;");
    asm("loc_65C6F33: push %eax;");
    asm("loc_65C6F34: call _sub_65C6A60;");
    asm("loc_65C6F39: pop %ecx;");
    asm("loc_65C6F3A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65C6F3B() // ?CreateClientProxy@CDPServer@@UAEPAVCDPClientProxy@@XZ_SEH
{
    __DEBUG_ASM(65C6F3B);
    // chunk 0x65C6F3B _sub_65C6F3B
    asm("loc_65C6F3B: mov $_data_65C786C,%eax;");
    asm("loc_65C6F40: jmp _sub_65C6A6C;");
    asm("int3;"); // unreachable
}
#ifdef __cplusplus
}
#endif // __cplusplus
#endif // __INTELLISENSE__
