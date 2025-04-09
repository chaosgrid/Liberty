#ifndef __INTELLISENSE__
// clang-format off
#include "..\..\PCH.h"
#pragma init_seg(lib)
#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

_naked _weak void _sub_65D1000() // _sub_65D1000
{
    __DEBUG_ASM(65D1000);
    // chunk 0x65D1000 _sub_65D1000
    asm("loc_65D1000: push $0xFFFFFFFF;");
    asm("loc_65D1002: push $_sub_65DFE3B;");
    asm("loc_65D1007: mov %fs:0,%eax;");
    asm("loc_65D100D: push %eax;");
    asm("loc_65D100E: mov %esp,%fs:0;");
    asm("loc_65D1015: sub $8,%esp;");
    asm("loc_65D1018: mov 3(%esp),%al;");
    asm("loc_65D101C: push %esi;");
    asm("loc_65D101D: mov %ecx,%esi;");
    asm("loc_65D101F: push %edi;");
    asm("loc_65D1020: push $0xC;");
    asm("loc_65D1022: mov %esi,0x10(%esp);");
    asm("loc_65D1026: movl $_off_65E11D0,(%esi);");
    asm("loc_65D102C: movl $_off_65E11B4,4(%esi);");
    asm("loc_65D1033: mov %al,0xC(%esi);");
    asm("loc_65D1036: call _sub_65D6F71;");
    asm("loc_65D103B: xor %edi,%edi;");
    asm("loc_65D103D: mov %eax,(%eax);");
    asm("loc_65D103F: mov %eax,4(%eax);");
    asm("loc_65D1042: mov %eax,0x10(%esi);");
    asm("loc_65D1045: mov %edi,0x14(%esi);");
    asm("loc_65D1048: mov 0xF(%esp),%cl;");
    asm("loc_65D104C: push $0x10;");
    asm("loc_65D104E: mov %edi,0x20(%esp);");
    asm("loc_65D1052: mov %cl,0x20(%esi);");
    asm("loc_65D1055: call _sub_65D6F71;");
    asm("loc_65D105A: mov 0x18(%esp),%ecx;");
    asm("loc_65D105E: mov %eax,(%eax);");
    asm("loc_65D1060: mov %eax,4(%eax);");
    asm("loc_65D1063: add $8,%esp;");
    asm("loc_65D1066: mov %eax,0x24(%esi);");
    asm("loc_65D1069: mov %edi,0x28(%esi);");
    asm("loc_65D106C: mov %edi,0x2C(%esi);");
    asm("loc_65D106F: mov %edi,0x1C(%esi);");
    asm("loc_65D1072: movl $_off_65E118C,(%esi);");
    asm("loc_65D1078: movl $_off_65E1170,4(%esi);");
    asm("loc_65D107F: movl $0xFFFFFFFF,8(%esi);");
    asm("loc_65D1086: movl $4,0x18(%esi);");
    asm("loc_65D108D: mov %esi,%eax;");
    asm("loc_65D108F: pop %edi;");
    asm("loc_65D1090: pop %esi;");
    asm("loc_65D1091: mov %ecx,%fs:0;");
    asm("loc_65D1098: add $0x14,%esp;");
    asm("loc_65D109B: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D10A0() // _sub_65D10A0
{
    __DEBUG_ASM(65D10A0);
    // chunk 0x65D10A0 _sub_65D10A0
    asm("loc_65D10A0: push %esi;");
    asm("loc_65D10A1: mov %ecx,%esi;");
    asm("loc_65D10A3: call _sub_65D10C0;");
    asm("loc_65D10A8: testb $1,8(%esp);");
    asm("loc_65D10AD: je loc_65D10B8;");
    asm("loc_65D10AF: push %esi;");
    asm("loc_65D10B0: call _sub_65D6CB8;");
    asm("loc_65D10B5: add $4,%esp;");
    asm("loc_65D10B8: mov %esi,%eax;");
    asm("loc_65D10BA: pop %esi;");
    asm("loc_65D10BB: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D10C0() // _sub_65D10C0
{
    __DEBUG_ASM(65D10C0);
    // chunk 0x65D10C0 _sub_65D10C0
    asm("loc_65D10C0: push $0xFFFFFFFF;");
    asm("loc_65D10C2: push $_sub_65DFE71;");
    asm("loc_65D10C7: mov %fs:0,%eax;");
    asm("loc_65D10CD: push %eax;");
    asm("loc_65D10CE: mov %esp,%fs:0;");
    asm("loc_65D10D5: sub $8,%esp;");
    asm("loc_65D10D8: push %ebx;");
    asm("loc_65D10D9: push %ebp;");
    asm("loc_65D10DA: push %esi;");
    asm("loc_65D10DB: mov %ecx,%esi;");
    asm("loc_65D10DD: push %edi;");
    asm("loc_65D10DE: mov %esi,0x10(%esp);");
    asm("loc_65D10E2: movl $_off_65E118C,(%esi);");
    asm("loc_65D10E8: movl $_off_65E1170,4(%esi);");
    asm("loc_65D10EF: push %esi;");
    asm("loc_65D10F0: movl $2,0x24(%esp);");
    asm("loc_65D10F8: call _sub_65D13E0;");
    asm("loc_65D10FD: mov 0x2C(%esi),%eax;");
    asm("loc_65D1100: movb $1,0x20(%esp);");
    asm("loc_65D1105: test %eax,%eax;");
    asm("loc_65D1107: je loc_65D1116;");
    asm("loc_65D1109: mov (%eax),%ecx;");
    asm("loc_65D110B: push %eax;");
    asm("loc_65D110C: calll *8(%ecx);");
    asm("loc_65D110F: movl $0,0x2C(%esi);");
    asm("loc_65D1116: mov 0x24(%esi),%ebx;");
    asm("loc_65D1119: lea 0x20(%esi),%ebp;");
    asm("loc_65D111C: movb $0,0x20(%esp);");
    asm("loc_65D1121: mov (%ebx),%edi;");
    asm("loc_65D1123: cmp %ebx,%edi;");
    asm("loc_65D1125: je loc_65D113C;");
    asm("loc_65D1127: mov %edi,%eax;");
    asm("loc_65D1129: mov (%edi),%edi;");
    asm("loc_65D112B: lea 0x14(%esp),%edx;");
    asm("loc_65D112F: push %eax;");
    asm("loc_65D1130: push %edx;");
    asm("loc_65D1131: mov %ebp,%ecx;");
    asm("loc_65D1133: call _sub_65D25F0;");
    asm("loc_65D1138: cmp %ebx,%edi;");
    asm("loc_65D113A: jne loc_65D1127;");
    asm("loc_65D113C: mov 4(%ebp),%eax;");
    asm("loc_65D113F: push %eax;");
    asm("loc_65D1140: call _sub_65D6CB8;");
    asm("loc_65D1145: xor %ebx,%ebx;");
    asm("loc_65D1147: add $4,%esp;");
    asm("loc_65D114A: mov %ebx,4(%ebp);");
    asm("loc_65D114D: mov %ebx,8(%ebp);");
    asm("loc_65D1150: mov 0x10(%esi),%ebp;");
    asm("loc_65D1153: mov (%ebp),%edi;");
    asm("loc_65D1156: cmp %ebp,%edi;");
    asm("loc_65D1158: je loc_65D1181;");
    asm("loc_65D115A: mov %edi,%eax;");
    asm("loc_65D115C: mov (%edi),%edi;");
    asm("loc_65D115E: push %eax;");
    asm("loc_65D115F: mov 4(%eax),%ecx;");
    asm("loc_65D1162: mov (%eax),%edx;");
    asm("loc_65D1164: mov %edx,(%ecx);");
    asm("loc_65D1166: mov (%eax),%ecx;");
    asm("loc_65D1168: mov 4(%eax),%edx;");
    asm("loc_65D116B: mov %edx,4(%ecx);");
    asm("loc_65D116E: call _sub_65D6CB8;");
    asm("loc_65D1173: mov 0x14(%esi),%ecx;");
    asm("loc_65D1176: add $4,%esp;");
    asm("loc_65D1179: dec %ecx;");
    asm("loc_65D117A: cmp %ebp,%edi;");
    asm("loc_65D117C: mov %ecx,0x14(%esi);");
    asm("loc_65D117F: jne loc_65D115A;");
    asm("loc_65D1181: mov 0x10(%esi),%eax;");
    asm("loc_65D1184: push %eax;");
    asm("loc_65D1185: call _sub_65D6CB8;");
    asm("loc_65D118A: mov 0x1C(%esp),%ecx;");
    asm("loc_65D118E: add $4,%esp;");
    asm("loc_65D1191: mov %ebx,0x10(%esi);");
    asm("loc_65D1194: mov %ebx,0x14(%esi);");
    asm("loc_65D1197: pop %edi;");
    asm("loc_65D1198: pop %esi;");
    asm("loc_65D1199: pop %ebp;");
    asm("loc_65D119A: pop %ebx;");
    asm("loc_65D119B: mov %ecx,%fs:0;");
    asm("loc_65D11A2: add $0x14,%esp;");
    asm("loc_65D11A5: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D11B0() // _sub_65D11B0
{
    __DEBUG_ASM(65D11B0);
    // chunk 0x65D11B0 _sub_65D11B0
    asm("loc_65D11B0: push %ebx;");
    asm("loc_65D11B1: push %ebp;");
    asm("loc_65D11B2: push %esi;");
    asm("loc_65D11B3: mov 0x14(%esp),%esi;");
    asm("loc_65D11B7: push %edi;");
    asm("loc_65D11B8: mov %ecx,%edi;");
    asm("loc_65D11BA: mov 8(%esi),%ebx;");
    asm("loc_65D11BD: mov %ebx,%ecx;");
    asm("loc_65D11BF: mov 0x14(%ebx),%ebp;");
    asm("loc_65D11C2: call _sub_65D1C20;");
    asm("loc_65D11C7: push %ebx;");
    asm("loc_65D11C8: call _sub_65D6CB8;");
    asm("loc_65D11CD: mov 4(%esi),%eax;");
    asm("loc_65D11D0: mov (%esi),%ebx;");
    asm("loc_65D11D2: push %esi;");
    asm("loc_65D11D3: mov %ebx,(%eax);");
    asm("loc_65D11D5: mov (%esi),%ecx;");
    asm("loc_65D11D7: mov 4(%esi),%edx;");
    asm("loc_65D11DA: mov %edx,4(%ecx);");
    asm("loc_65D11DD: call _sub_65D6CB8;");
    asm("loc_65D11E2: mov 0x14(%edi),%ecx;");
    asm("loc_65D11E5: add $8,%esp;");
    asm("loc_65D11E8: dec %ecx;");
    asm("loc_65D11E9: mov %ecx,0x14(%edi);");
    asm("loc_65D11EC: mov 0x2C(%edi),%edi;");
    asm("loc_65D11EF: test %edi,%edi;");
    asm("loc_65D11F1: je loc_65D11FC;");
    asm("loc_65D11F3: mov (%edi),%eax;");
    asm("loc_65D11F5: push %ebp;");
    asm("loc_65D11F6: push $1;");
    asm("loc_65D11F8: push %edi;");
    asm("loc_65D11F9: calll *0xC(%eax);");
    asm("loc_65D11FC: mov 0x14(%esp),%eax;");
    asm("loc_65D1200: pop %edi;");
    asm("loc_65D1201: pop %esi;");
    asm("loc_65D1202: pop %ebp;");
    asm("loc_65D1203: mov %ebx,(%eax);");
    asm("loc_65D1205: pop %ebx;");
    asm("loc_65D1206: ret $8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D1210() // _sub_65D1210
{
    __DEBUG_ASM(65D1210);
    // chunk 0x65D1210 _sub_65D1210
    asm("loc_65D1210: sub $0x10,%esp;");
    asm("loc_65D1213: push %esi;");
    asm("loc_65D1214: mov 0x18(%esp),%esi;");
    asm("loc_65D1218: cmpl $0xFFFFFFFF,8(%esi);");
    asm("loc_65D121C: je loc_65D1228;");
    asm("loc_65D121E: or $0xFFFFFFFF,%eax;");
    asm("loc_65D1221: pop %esi;");
    asm("loc_65D1222: add $0x10,%esp;");
    asm("loc_65D1225: ret $0xC;");
    asm("loc_65D1228: mov 0x20(%esp),%eax;");
    asm("loc_65D122C: test %eax,%eax;");
    asm("loc_65D122E: jle loc_65D123A;");
    asm("loc_65D1230: cmp $0x100,%eax;");
    asm("loc_65D1235: jg loc_65D123A;");
    asm("loc_65D1237: mov %eax,0x18(%esi);");
    asm("loc_65D123A: mov 0x1C(%esp),%eax;");
    asm("loc_65D123E: push $6;");
    asm("loc_65D1240: and $0xFFFF,%eax;");
    asm("loc_65D1245: push $1;");
    asm("loc_65D1247: push $2;");
    asm("loc_65D1249: mov %eax,0x1C(%esi);");
    asm("loc_65D124C: call _sub_65D6C64;");
    asm("loc_65D1251: cmp $0xFFFFFFFF,%eax;");
    asm("loc_65D1254: mov %eax,8(%esi);");
    asm("loc_65D1257: jne loc_65D1268;");
    asm("loc_65D1259: call _sub_65D1330;");
    asm("loc_65D125E: or $0xFFFFFFFF,%eax;");
    asm("loc_65D1261: pop %esi;");
    asm("loc_65D1262: add $0x10,%esp;");
    asm("loc_65D1265: ret $0xC;");
    asm("loc_65D1268: lea 0x18(%esp),%ecx;");
    asm("loc_65D126C: push $4;");
    asm("loc_65D126E: push %ecx;");
    asm("loc_65D126F: push $4;");
    asm("loc_65D1271: push $6;");
    asm("loc_65D1273: push %eax;");
    asm("loc_65D1274: movl $1,0x2C(%esp);");
    asm("loc_65D127C: call _sub_65D6C5E;");
    asm("loc_65D1281: cmp $0xFFFFFFFF,%eax;");
    asm("loc_65D1284: jne loc_65D128B;");
    asm("loc_65D1286: call _sub_65D1330;");
    asm("loc_65D128B: mov 0x1C(%esi),%ax;");
    asm("loc_65D128F: xor %edx,%edx;");
    asm("loc_65D1291: mov %edx,4(%esp);");
    asm("loc_65D1295: push %eax;");
    asm("loc_65D1296: mov %edx,0xC(%esp);");
    asm("loc_65D129A: movw $2,8(%esp);");
    asm("loc_65D12A1: mov %edx,0x10(%esp);");
    asm("loc_65D12A5: mov %edx,0x14(%esp);");
    asm("loc_65D12A9: call _sub_65D6C58;");
    asm("loc_65D12AE: mov 8(%esi),%edx;");
    asm("loc_65D12B1: lea 4(%esp),%ecx;");
    asm("loc_65D12B5: push $0x10;");
    asm("loc_65D12B7: push %ecx;");
    asm("loc_65D12B8: push %edx;");
    asm("loc_65D12B9: mov %ax,0x12(%esp);");
    asm("loc_65D12BE: movl $0,0x14(%esp);");
    asm("loc_65D12C6: call _sub_65D6C52;");
    asm("loc_65D12CB: cmp $0xFFFFFFFF,%eax;");
    asm("loc_65D12CE: jne loc_65D12EF;");
    asm("loc_65D12D0: call _sub_65D1330;");
    asm("loc_65D12D5: mov 8(%esi),%eax;");
    asm("loc_65D12D8: push %eax;");
    asm("loc_65D12D9: call _sub_65D6C4C;");
    asm("loc_65D12DE: movl $0xFFFFFFFF,8(%esi);");
    asm("loc_65D12E5: or $0xFFFFFFFF,%eax;");
    asm("loc_65D12E8: pop %esi;");
    asm("loc_65D12E9: add $0x10,%esp;");
    asm("loc_65D12EC: ret $0xC;");
    asm("loc_65D12EF: mov 8(%esi),%ecx;");
    asm("loc_65D12F2: push $5;");
    asm("loc_65D12F4: push %ecx;");
    asm("loc_65D12F5: call _sub_65D6C46;");
    asm("loc_65D12FA: cmp $0xFFFFFFFF,%eax;");
    asm("loc_65D12FD: jne loc_65D131E;");
    asm("loc_65D12FF: call _sub_65D1330;");
    asm("loc_65D1304: mov 8(%esi),%edx;");
    asm("loc_65D1307: push %edx;");
    asm("loc_65D1308: call _sub_65D6C4C;");
    asm("loc_65D130D: movl $0xFFFFFFFF,8(%esi);");
    asm("loc_65D1314: or $0xFFFFFFFF,%eax;");
    asm("loc_65D1317: pop %esi;");
    asm("loc_65D1318: add $0x10,%esp;");
    asm("loc_65D131B: ret $0xC;");
    asm("loc_65D131E: xor %eax,%eax;");
    asm("loc_65D1320: pop %esi;");
    asm("loc_65D1321: add $0x10,%esp;");
    asm("loc_65D1324: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D1330() // _sub_65D1330
{
    __DEBUG_ASM(65D1330);
    // chunk 0x65D1330 _sub_65D1330
    asm("loc_65D1330: call _sub_65D6C6A;");
    asm("loc_65D1335: push %eax;");
    asm("loc_65D1336: call _sub_65D1340;");
    asm("loc_65D133B: pop %ecx;");
    asm("loc_65D133C: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D1340() // _sub_65D1340
{
    asm("jmp dgb_65D1340;"); // jumptable skip
    asm(".long _jmp_65D1378;"); // jumptable address
    __DEBUG_ASM(65D1340);
    // chunk 0x65D1340 _sub_65D1340
    asm("loc_65D1340: mov 4(%esp),%ecx;");
    asm("loc_65D1344: sub $0x50,%esp;");
    asm("loc_65D1347: lea -0x2714(%ecx),%eax;");
    asm("loc_65D134D: cmp $0x59,%eax;");
    asm("loc_65D1350: ja loc_65D1361;");
    asm("loc_65D1352: xor %edx,%edx;");
    asm("loc_65D1354: mov _data_65D1380(%eax),%dl;");
    asm("loc_65D135A: jmpl *_jmp_65D1378(,%edx,4);");
    asm("loc_65D1361: push %ecx;");
    asm("loc_65D1362: lea 4(%esp),%eax;");
    asm("loc_65D1366: push $_data_65E3040;");
    asm("loc_65D136B: push %eax;");
    asm("loc_65D136C: call _sub_65D734E;");
    asm("loc_65D1371: add $0xC,%esp;");
    asm("loc_65D1374: add $0x50,%esp;");
    asm("loc_65D1377: ret;");
    asm("int3;"); // unreachable
    asm("_jmp_65D1378: .long loc_65D1374;");
    asm(".long loc_65D1361;");
    asm(".long 0xCCCCCCCC;");
}
FIXUP_JUMP_TABLE(_sub_65D1340);
_naked _weak void _sub_65D13E0() // _sub_65D13E0
{
    __DEBUG_ASM(65D13E0);
    // chunk 0x65D13E0 _sub_65D13E0
    asm("loc_65D13E0: push %ebx;");
    asm("loc_65D13E1: mov 8(%esp),%ebx;");
    asm("loc_65D13E5: push %ebp;");
    asm("loc_65D13E6: push %edi;");
    asm("loc_65D13E7: mov 8(%ebx),%eax;");
    asm("loc_65D13EA: cmp $0xFFFFFFFF,%eax;");
    asm("loc_65D13ED: je loc_65D1459;");
    asm("loc_65D13EF: push %eax;");
    asm("loc_65D13F0: call _sub_65D6C4C;");
    asm("loc_65D13F5: cmp $0xFFFFFFFF,%eax;");
    asm("loc_65D13F8: jne loc_65D13FF;");
    asm("loc_65D13FA: call _sub_65D1330;");
    asm("loc_65D13FF: mov 0x10(%ebx),%ecx;");
    asm("loc_65D1402: mov (%ecx),%eax;");
    asm("loc_65D1404: cmp %ecx,%eax;");
    asm("loc_65D1406: je loc_65D141E;");
    asm("loc_65D1408: push %eax;");
    asm("loc_65D1409: lea 0x14(%esp),%eax;");
    asm("loc_65D140D: push %eax;");
    asm("loc_65D140E: mov %ebx,%ecx;");
    asm("loc_65D1410: call _sub_65D11B0;");
    asm("loc_65D1415: mov (%eax),%eax;");
    asm("loc_65D1417: mov 0x10(%ebx),%ecx;");
    asm("loc_65D141A: cmp %ecx,%eax;");
    asm("loc_65D141C: jne loc_65D1408;");
    asm("loc_65D141E: mov 0x24(%ebx),%ebp;");
    asm("loc_65D1421: mov (%ebp),%edi;");
    asm("loc_65D1424: cmp %ebp,%edi;");
    asm("loc_65D1426: je loc_65D1459;");
    asm("loc_65D1428: push %esi;");
    asm("loc_65D1429: mov %edi,%esi;");
    asm("loc_65D142B: mov (%edi),%edi;");
    asm("loc_65D142D: mov 4(%esi),%ecx;");
    asm("loc_65D1430: mov (%esi),%edx;");
    asm("loc_65D1432: mov %edx,(%ecx);");
    asm("loc_65D1434: mov (%esi),%eax;");
    asm("loc_65D1436: mov 4(%esi),%ecx;");
    asm("loc_65D1439: mov %ecx,4(%eax);");
    asm("loc_65D143C: lea 8(%esi),%ecx;");
    asm("loc_65D143F: call _sub_65D2630;");
    asm("loc_65D1444: push %esi;");
    asm("loc_65D1445: call _sub_65D6CB8;");
    asm("loc_65D144A: mov 0x28(%ebx),%ecx;");
    asm("loc_65D144D: add $4,%esp;");
    asm("loc_65D1450: dec %ecx;");
    asm("loc_65D1451: cmp %ebp,%edi;");
    asm("loc_65D1453: mov %ecx,0x28(%ebx);");
    asm("loc_65D1456: jne loc_65D1429;");
    asm("loc_65D1458: pop %esi;");
    asm("loc_65D1459: pop %edi;");
    asm("loc_65D145A: pop %ebp;");
    asm("loc_65D145B: xor %eax,%eax;");
    asm("loc_65D145D: pop %ebx;");
    asm("loc_65D145E: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D1470() // _sub_65D1470
{
    __DEBUG_ASM(65D1470);
    // chunk 0x65D1470 _sub_65D1470
    asm("loc_65D1470: mov %fs:0,%eax;");
    asm("loc_65D1476: push $0xFFFFFFFF;");
    asm("loc_65D1478: push $_sub_65DFEA4;");
    asm("loc_65D147D: push %eax;");
    asm("loc_65D147E: mov %esp,%fs:0;");
    asm("loc_65D1485: sub $0x534,%esp;");
    asm("loc_65D148B: push %ebx;");
    asm("loc_65D148C: push %ebp;");
    asm("loc_65D148D: push %esi;");
    asm("loc_65D148E: push %edi;");
    asm("loc_65D148F: mov 0x554(%esp),%edi;");
    asm("loc_65D1496: or $0xFFFFFFFF,%ebp;");
    asm("loc_65D1499: cmp %ebp,8(%edi);");
    asm("loc_65D149C: jne loc_65D14A5;");
    asm("loc_65D149E: mov %ebp,%eax;");
    asm("loc_65D14A0: jmp loc_65D16F3;");
    asm("loc_65D14A5: mov 0x14(%edi),%eax;");
    asm("loc_65D14A8: mov 0x18(%edi),%ecx;");
    asm("loc_65D14AB: xor %ebx,%ebx;");
    asm("loc_65D14AD: cmp %ecx,%eax;");
    asm("loc_65D14AF: jae loc_65D15AA;");
    asm("loc_65D14B5: mov 8(%edi),%eax;");
    asm("loc_65D14B8: lea 0x28(%esp),%ecx;");
    asm("loc_65D14BC: push %ecx;");
    asm("loc_65D14BD: push %ebx;");
    asm("loc_65D14BE: lea 0x48(%esp),%edx;");
    asm("loc_65D14C2: push %ebx;");
    asm("loc_65D14C3: push %edx;");
    asm("loc_65D14C4: push %ebx;");
    asm("loc_65D14C5: mov %eax,0x58(%esp);");
    asm("loc_65D14C9: movl $1,0x54(%esp);");
    asm("loc_65D14D1: mov %ebx,0x3C(%esp);");
    asm("loc_65D14D5: mov %ebx,0x40(%esp);");
    asm("loc_65D14D9: call _sub_65D6C7C;");
    asm("loc_65D14DE: cmp %ebp,%eax;");
    asm("loc_65D14E0: je loc_65D15BD;");
    asm("loc_65D14E6: cmp $1,%eax;");
    asm("loc_65D14E9: jne loc_65D1598;");
    asm("loc_65D14EF: mov 8(%edi),%edx;");
    asm("loc_65D14F2: lea 0x18(%esp),%eax;");
    asm("loc_65D14F6: lea 0x30(%esp),%ecx;");
    asm("loc_65D14FA: push %eax;");
    asm("loc_65D14FB: push %ecx;");
    asm("loc_65D14FC: push %edx;");
    asm("loc_65D14FD: movl $0x10,0x24(%esp);");
    asm("loc_65D1505: call _sub_65D6C76;");
    asm("loc_65D150A: mov %eax,%esi;");
    asm("loc_65D150C: cmp %ebp,%esi;");
    asm("loc_65D150E: jne loc_65D151A;");
    asm("loc_65D1510: call _sub_65D1330;");
    asm("loc_65D1515: jmp loc_65D159C;");
    asm("loc_65D151A: push $0x3C;");
    asm("loc_65D151C: call _sub_65D6F71;");
    asm("loc_65D1521: add $4,%esp;");
    asm("loc_65D1524: mov %eax,0x14(%esp);");
    asm("loc_65D1528: cmp %ebx,%eax;");
    asm("loc_65D152A: mov %ebx,0x54C(%esp);");
    asm("loc_65D1531: je loc_65D153D;");
    asm("loc_65D1533: push %esi;");
    asm("loc_65D1534: mov %eax,%ecx;");
    asm("loc_65D1536: call _sub_65D1B70;");
    asm("loc_65D153B: jmp loc_65D153F;");
    asm("loc_65D153D: xor %eax,%eax;");
    asm("loc_65D153F: lea 0xC(%edi),%ecx;");
    asm("loc_65D1542: mov %eax,0x10(%esp);");
    asm("loc_65D1546: lea 0x10(%esp),%edx;");
    asm("loc_65D154A: mov %ebp,0x54C(%esp);");
    asm("loc_65D1551: mov 4(%ecx),%eax;");
    asm("loc_65D1554: push %edx;");
    asm("loc_65D1555: push %eax;");
    asm("loc_65D1556: lea 0x2C(%esp),%eax;");
    asm("loc_65D155A: push %eax;");
    asm("loc_65D155B: call _sub_65D2650;");
    asm("loc_65D1560: mov 0x34(%esp),%ecx;");
    asm("loc_65D1564: push %ecx;");
    asm("loc_65D1565: call _sub_65D6C70;");
    asm("loc_65D156A: push %eax;");
    asm("loc_65D156B: lea 0x148(%esp),%edx;");
    asm("loc_65D1572: push $_data_65E3070;");
    asm("loc_65D1577: push %edx;");
    asm("loc_65D1578: call _sub_65D734E;");
    asm("loc_65D157D: mov 0x2C(%edi),%eax;");
    asm("loc_65D1580: add $0xC,%esp;");
    asm("loc_65D1583: cmp %ebx,%eax;");
    asm("loc_65D1585: je loc_65D159C;");
    asm("loc_65D1587: mov 0x10(%esp),%ecx;");
    asm("loc_65D158B: mov (%eax),%edx;");
    asm("loc_65D158D: mov 0x14(%ecx),%ecx;");
    asm("loc_65D1590: push %ecx;");
    asm("loc_65D1591: push %ebx;");
    asm("loc_65D1592: push %eax;");
    asm("loc_65D1593: calll *0xC(%edx);");
    asm("loc_65D1596: jmp loc_65D159C;");
    asm("loc_65D1598: cmp %ebx,%eax;");
    asm("loc_65D159A: je loc_65D15AA;");
    asm("loc_65D159C: mov 0x14(%edi),%eax;");
    asm("loc_65D159F: mov 0x18(%edi),%ecx;");
    asm("loc_65D15A2: cmp %ecx,%eax;");
    asm("loc_65D15A4: jb loc_65D14B5;");
    asm("loc_65D15AA: mov 0x10(%edi),%eax;");
    asm("loc_65D15AD: mov (%eax),%ecx;");
    asm("loc_65D15AF: cmp %eax,%ecx;");
    asm("loc_65D15B1: mov %ecx,0x10(%esp);");
    asm("loc_65D15B5: je loc_65D16F1;");
    asm("loc_65D15BB: jmp loc_65D15D3;");
    asm("loc_65D15BD: call _sub_65D1330;");
    asm("loc_65D15C2: mov (%edi),%eax;");
    asm("loc_65D15C4: push %edi;");
    asm("loc_65D15C5: calll *0x10(%eax);");
    asm("loc_65D15C8: mov %ebp,%eax;");
    asm("loc_65D15CA: jmp loc_65D16F3;");
    asm("loc_65D15CF: mov 0x10(%esp),%ecx;");
    asm("loc_65D15D3: mov 8(%ecx),%esi;");
    asm("loc_65D15D6: push $1;");
    asm("loc_65D15D8: mov %esi,%ecx;");
    asm("loc_65D15DA: mov %esi,0x1C(%esp);");
    asm("loc_65D15DE: call _sub_65D1EA0;");
    asm("loc_65D15E3: test %al,%al;");
    asm("loc_65D15E5: jne loc_65D1603;");
    asm("loc_65D15E7: mov 0x10(%esp),%ecx;");
    asm("loc_65D15EB: lea 0x24(%esp),%edx;");
    asm("loc_65D15EF: push %ecx;");
    asm("loc_65D15F0: push %edx;");
    asm("loc_65D15F1: mov %edi,%ecx;");
    asm("loc_65D15F3: call _sub_65D11B0;");
    asm("loc_65D15F8: mov (%eax),%eax;");
    asm("loc_65D15FA: mov %eax,0x10(%esp);");
    asm("loc_65D15FE: jmp loc_65D16E2;");
    asm("loc_65D1603: xor %eax,%eax;");
    asm("loc_65D1605: mov %eax,0x14(%esp);");
    asm("loc_65D1609: movl $1,0x54C(%esp);");
    asm("loc_65D1614: jmp loc_65D161E;");
    asm("loc_65D1616: mov 0x14(%esp),%eax;");
    asm("loc_65D161A: mov 0x18(%esp),%esi;");
    asm("loc_65D161E: cmp %ebx,%eax;");
    asm("loc_65D1620: je loc_65D162C;");
    asm("loc_65D1622: mov (%eax),%ecx;");
    asm("loc_65D1624: push %eax;");
    asm("loc_65D1625: calll *8(%ecx);");
    asm("loc_65D1628: mov %ebx,0x14(%esp);");
    asm("loc_65D162C: lea 0x14(%esp),%edx;");
    asm("loc_65D1630: mov %esi,%ecx;");
    asm("loc_65D1632: push %edx;");
    asm("loc_65D1633: call _sub_65D2170;");
    asm("loc_65D1638: test %al,%al;");
    asm("loc_65D163A: je loc_65D16BB;");
    asm("loc_65D163C: mov 0x14(%esp),%eax;");
    asm("loc_65D1640: mov 0x14(%esi),%esi;");
    asm("loc_65D1643: cmp %ebx,%eax;");
    asm("loc_65D1645: mov %eax,0x1C(%esp);");
    asm("loc_65D1649: je loc_65D1651;");
    asm("loc_65D164B: mov (%eax),%ecx;");
    asm("loc_65D164D: push %eax;");
    asm("loc_65D164E: calll *4(%ecx);");
    asm("loc_65D1651: mov %esi,0x20(%esp);");
    asm("loc_65D1655: mov 0x24(%edi),%esi;");
    asm("loc_65D1658: push $0x10;");
    asm("loc_65D165A: movb $2,0x550(%esp);");
    asm("loc_65D1662: mov 4(%esi),%ebp;");
    asm("loc_65D1665: call _sub_65D6F71;");
    asm("loc_65D166A: add $4,%esp;");
    asm("loc_65D166D: cmp %ebx,%ebp;");
    asm("loc_65D166F: mov %esi,(%eax);");
    asm("loc_65D1671: jne loc_65D1675;");
    asm("loc_65D1673: mov %eax,%ebp;");
    asm("loc_65D1675: mov %ebp,4(%eax);");
    asm("loc_65D1678: mov %eax,4(%esi);");
    asm("loc_65D167B: mov 4(%eax),%ecx;");
    asm("loc_65D167E: lea 0x1C(%esp),%edx;");
    asm("loc_65D1682: push %edx;");
    asm("loc_65D1683: mov %eax,(%ecx);");
    asm("loc_65D1685: add $8,%eax;");
    asm("loc_65D1688: push %eax;");
    asm("loc_65D1689: call _sub_65D2D00;");
    asm("loc_65D168E: mov 0x28(%edi),%edx;");
    asm("loc_65D1691: mov 0x24(%esp),%eax;");
    asm("loc_65D1695: add $8,%esp;");
    asm("loc_65D1698: inc %edx;");
    asm("loc_65D1699: cmp %ebx,%eax;");
    asm("loc_65D169B: mov %edx,0x28(%edi);");
    asm("loc_65D169E: movb $1,0x54C(%esp);");
    asm("loc_65D16A6: je loc_65D1616;");
    asm("loc_65D16AC: mov (%eax),%ecx;");
    asm("loc_65D16AE: push %eax;");
    asm("loc_65D16AF: calll *8(%ecx);");
    asm("loc_65D16B2: mov %ebx,0x1C(%esp);");
    asm("loc_65D16B6: jmp loc_65D1616;");
    asm("loc_65D16BB: mov 0x10(%esp),%edx;");
    asm("loc_65D16BF: movl $0xFFFFFFFF,0x54C(%esp);");
    asm("loc_65D16CA: mov (%edx),%eax;");
    asm("loc_65D16CC: mov %eax,0x10(%esp);");
    asm("loc_65D16D0: mov 0x14(%esp),%eax;");
    asm("loc_65D16D4: cmp %ebx,%eax;");
    asm("loc_65D16D6: je loc_65D16E2;");
    asm("loc_65D16D8: mov (%eax),%ecx;");
    asm("loc_65D16DA: push %eax;");
    asm("loc_65D16DB: calll *8(%ecx);");
    asm("loc_65D16DE: mov %ebx,0x14(%esp);");
    asm("loc_65D16E2: mov 0x10(%esp),%edx;");
    asm("loc_65D16E6: mov 0x10(%edi),%eax;");
    asm("loc_65D16E9: cmp %eax,%edx;");
    asm("loc_65D16EB: jne loc_65D15CF;");
    asm("loc_65D16F1: xor %eax,%eax;");
    asm("loc_65D16F3: mov 0x544(%esp),%ecx;");
    asm("loc_65D16FA: pop %edi;");
    asm("loc_65D16FB: pop %esi;");
    asm("loc_65D16FC: pop %ebp;");
    asm("loc_65D16FD: pop %ebx;");
    asm("loc_65D16FE: mov %ecx,%fs:0;");
    asm("loc_65D1705: add $0x540,%esp;");
    asm("loc_65D170B: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D1710() // _sub_65D1710
{
    __DEBUG_ASM(65D1710);
    // chunk 0x65D1710 _sub_65D1710
    asm("loc_65D1710: mov 4(%esp),%eax;");
    asm("loc_65D1714: cmpl $0xFFFFFFFF,8(%eax);");
    asm("loc_65D1718: jne loc_65D1720;");
    asm("loc_65D171A: or $0xFFFFFFFF,%eax;");
    asm("loc_65D171D: ret $8;");
    asm("loc_65D1720: mov 8(%esp),%ecx;");
    asm("loc_65D1724: mov 0x14(%eax),%eax;");
    asm("loc_65D1727: mov %eax,(%ecx);");
    asm("loc_65D1729: xor %eax,%eax;");
    asm("loc_65D172B: ret $8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D1730() // _sub_65D1730
{
    __DEBUG_ASM(65D1730);
    // chunk 0x65D1730 _sub_65D1730
    asm("loc_65D1730: mov 4(%esp),%eax;");
    asm("loc_65D1734: cmpl $0xFFFFFFFF,4(%eax);");
    asm("loc_65D1738: je loc_65D1766;");
    asm("loc_65D173A: mov 8(%esp),%ecx;");
    asm("loc_65D173E: test %ecx,%ecx;");
    asm("loc_65D1740: jl loc_65D1766;");
    asm("loc_65D1742: cmp 0x10(%eax),%ecx;");
    asm("loc_65D1745: jae loc_65D1766;");
    asm("loc_65D1747: mov 0xC(%eax),%eax;");
    asm("loc_65D174A: test %ecx,%ecx;");
    asm("loc_65D174C: mov (%eax),%eax;");
    asm("loc_65D174E: je loc_65D1755;");
    asm("loc_65D1750: mov (%eax),%eax;");
    asm("loc_65D1752: dec %ecx;");
    asm("loc_65D1753: jne loc_65D1750;");
    asm("loc_65D1755: mov 8(%eax),%ecx;");
    asm("loc_65D1758: mov 0xC(%esp),%eax;");
    asm("loc_65D175C: mov 0x14(%ecx),%edx;");
    asm("loc_65D175F: mov %edx,(%eax);");
    asm("loc_65D1761: xor %eax,%eax;");
    asm("loc_65D1763: ret $0xC;");
    asm("loc_65D1766: or $0xFFFFFFFF,%eax;");
    asm("loc_65D1769: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D1770() // _sub_65D1770
{
    __DEBUG_ASM(65D1770);
    // chunk 0x65D1770 _sub_65D1770
    asm("loc_65D1770: push %edi;");
    asm("loc_65D1771: mov 8(%esp),%edi;");
    asm("loc_65D1775: or $0xFFFFFFFF,%eax;");
    asm("loc_65D1778: cmp %eax,8(%edi);");
    asm("loc_65D177B: je loc_65D17B5;");
    asm("loc_65D177D: mov 0x10(%edi),%eax;");
    asm("loc_65D1780: push %esi;");
    asm("loc_65D1781: mov (%eax),%esi;");
    asm("loc_65D1783: cmp %eax,%esi;");
    asm("loc_65D1785: je loc_65D17B2;");
    asm("loc_65D1787: push %ebx;");
    asm("loc_65D1788: mov 0x14(%esp),%ebx;");
    asm("loc_65D178C: mov 8(%esi),%ecx;");
    asm("loc_65D178F: push %ebx;");
    asm("loc_65D1790: call _sub_65D21E0;");
    asm("loc_65D1795: test %al,%al;");
    asm("loc_65D1797: jne loc_65D17AA;");
    asm("loc_65D1799: lea 0x10(%esp),%eax;");
    asm("loc_65D179D: push %esi;");
    asm("loc_65D179E: push %eax;");
    asm("loc_65D179F: mov %edi,%ecx;");
    asm("loc_65D17A1: call _sub_65D11B0;");
    asm("loc_65D17A6: mov (%eax),%esi;");
    asm("loc_65D17A8: jmp loc_65D17AC;");
    asm("loc_65D17AA: mov (%esi),%esi;");
    asm("loc_65D17AC: cmp 0x10(%edi),%esi;");
    asm("loc_65D17AF: jne loc_65D178C;");
    asm("loc_65D17B1: pop %ebx;");
    asm("loc_65D17B2: xor %eax,%eax;");
    asm("loc_65D17B4: pop %esi;");
    asm("loc_65D17B5: pop %edi;");
    asm("loc_65D17B6: ret $8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D17C0() // _sub_65D17C0
{
    __DEBUG_ASM(65D17C0);
    // chunk 0x65D17C0 _sub_65D17C0
    asm("loc_65D17C0: push %esi;");
    asm("loc_65D17C1: push %edi;");
    asm("loc_65D17C2: mov 0xC(%esp),%edi;");
    asm("loc_65D17C6: cmpl $0xFFFFFFFF,4(%edi);");
    asm("loc_65D17CA: je loc_65D17E7;");
    asm("loc_65D17CC: mov 0xC(%edi),%eax;");
    asm("loc_65D17CF: mov (%eax),%esi;");
    asm("loc_65D17D1: cmp %eax,%esi;");
    asm("loc_65D17D3: je loc_65D17E7;");
    asm("loc_65D17D5: mov 0x14(%esp),%edx;");
    asm("loc_65D17D9: mov 8(%esi),%ecx;");
    asm("loc_65D17DC: cmp %edx,0x14(%ecx);");
    asm("loc_65D17DF: je loc_65D17EF;");
    asm("loc_65D17E1: mov (%esi),%esi;");
    asm("loc_65D17E3: cmp %eax,%esi;");
    asm("loc_65D17E5: jne loc_65D17D9;");
    asm("loc_65D17E7: pop %edi;");
    asm("loc_65D17E8: pop %esi;");
    asm("loc_65D17E9: or $0xFFFFFFFF,%eax;");
    asm("loc_65D17EC: ret $0xC;");
    asm("loc_65D17EF: mov 0x10(%esp),%eax;");
    asm("loc_65D17F3: push %eax;");
    asm("loc_65D17F4: call _sub_65D21E0;");
    asm("loc_65D17F9: test %al,%al;");
    asm("loc_65D17FB: jne loc_65D1813;");
    asm("loc_65D17FD: lea 0xC(%esp),%ecx;");
    asm("loc_65D1801: push %esi;");
    asm("loc_65D1802: push %ecx;");
    asm("loc_65D1803: lea -4(%edi),%ecx;");
    asm("loc_65D1806: call _sub_65D11B0;");
    asm("loc_65D180B: pop %edi;");
    asm("loc_65D180C: pop %esi;");
    asm("loc_65D180D: or $0xFFFFFFFF,%eax;");
    asm("loc_65D1810: ret $0xC;");
    asm("loc_65D1813: pop %edi;");
    asm("loc_65D1814: pop %esi;");
    asm("loc_65D1815: xor %eax,%eax;");
    asm("loc_65D1817: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D1820() // _sub_65D1820
{
    __DEBUG_ASM(65D1820);
    // chunk 0x65D1820 _sub_65D1820
    asm("loc_65D1820: mov 4(%esp),%eax;");
    asm("loc_65D1824: lea 4(%esp),%edx;");
    asm("loc_65D1828: add $4,%eax;");
    asm("loc_65D182B: push %edx;");
    asm("loc_65D182C: mov 0xC(%esp),%edx;");
    asm("loc_65D1830: mov (%eax),%ecx;");
    asm("loc_65D1832: push %edx;");
    asm("loc_65D1833: push %eax;");
    asm("loc_65D1834: calll *0x14(%ecx);");
    asm("loc_65D1837: ret $8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D1840() // _sub_65D1840
{
    __DEBUG_ASM(65D1840);
    // chunk 0x65D1840 _sub_65D1840
    asm("loc_65D1840: push %esi;");
    asm("loc_65D1841: push %edi;");
    asm("loc_65D1842: mov 0xC(%esp),%edi;");
    asm("loc_65D1846: cmpl $0xFFFFFFFF,4(%edi);");
    asm("loc_65D184A: je loc_65D18A9;");
    asm("loc_65D184C: mov 0x20(%edi),%eax;");
    asm("loc_65D184F: mov (%eax),%esi;");
    asm("loc_65D1851: cmp %eax,%esi;");
    asm("loc_65D1853: je loc_65D189F;");
    asm("loc_65D1855: mov 0x10(%esp),%ecx;");
    asm("loc_65D1859: mov 8(%esi),%eax;");
    asm("loc_65D185C: push %ebx;");
    asm("loc_65D185D: lea 8(%esi),%ebx;");
    asm("loc_65D1860: mov %eax,(%ecx);");
    asm("loc_65D1862: mov (%eax),%edx;");
    asm("loc_65D1864: push %eax;");
    asm("loc_65D1865: calll *4(%edx);");
    asm("loc_65D1868: mov 0xC(%esi),%eax;");
    asm("loc_65D186B: mov 0x18(%esp),%ecx;");
    asm("loc_65D186F: mov %eax,(%ecx);");
    asm("loc_65D1871: mov 4(%esi),%edx;");
    asm("loc_65D1874: mov (%esi),%eax;");
    asm("loc_65D1876: mov %eax,(%edx);");
    asm("loc_65D1878: mov (%esi),%ecx;");
    asm("loc_65D187A: mov 4(%esi),%edx;");
    asm("loc_65D187D: mov %edx,4(%ecx);");
    asm("loc_65D1880: mov %ebx,%ecx;");
    asm("loc_65D1882: call _sub_65D2630;");
    asm("loc_65D1887: push %esi;");
    asm("loc_65D1888: call _sub_65D6CB8;");
    asm("loc_65D188D: mov 0x24(%edi),%eax;");
    asm("loc_65D1890: add $4,%esp;");
    asm("loc_65D1893: dec %eax;");
    asm("loc_65D1894: mov %eax,0x24(%edi);");
    asm("loc_65D1897: pop %ebx;");
    asm("loc_65D1898: pop %edi;");
    asm("loc_65D1899: xor %eax,%eax;");
    asm("loc_65D189B: pop %esi;");
    asm("loc_65D189C: ret $0xC;");
    asm("loc_65D189F: mov 0x10(%esp),%eax;");
    asm("loc_65D18A3: movl $0,(%eax);");
    asm("loc_65D18A9: pop %edi;");
    asm("loc_65D18AA: or $0xFFFFFFFF,%eax;");
    asm("loc_65D18AD: pop %esi;");
    asm("loc_65D18AE: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D18C0() // _sub_65D18C0
{
    __DEBUG_ASM(65D18C0);
    // chunk 0x65D18C0 _sub_65D18C0
    asm("loc_65D18C0: mov 4(%esp),%eax;");
    asm("loc_65D18C4: mov 0xC(%esp),%ecx;");
    asm("loc_65D18C8: push %esi;");
    asm("loc_65D18C9: lea 0x28(%eax),%esi;");
    asm("loc_65D18CC: mov 0x28(%eax),%eax;");
    asm("loc_65D18CF: test %eax,%eax;");
    asm("loc_65D18D1: mov %eax,(%ecx);");
    asm("loc_65D18D3: je loc_65D18DB;");
    asm("loc_65D18D5: mov (%eax),%edx;");
    asm("loc_65D18D7: push %eax;");
    asm("loc_65D18D8: calll *4(%edx);");
    asm("loc_65D18DB: mov (%esi),%eax;");
    asm("loc_65D18DD: test %eax,%eax;");
    asm("loc_65D18DF: je loc_65D18ED;");
    asm("loc_65D18E1: mov (%eax),%ecx;");
    asm("loc_65D18E3: push %eax;");
    asm("loc_65D18E4: calll *8(%ecx);");
    asm("loc_65D18E7: movl $0,(%esi);");
    asm("loc_65D18ED: mov 0xC(%esp),%eax;");
    asm("loc_65D18F1: push %esi;");
    asm("loc_65D18F2: push $_data_65E3098;");
    asm("loc_65D18F7: push %eax;");
    asm("loc_65D18F8: mov (%eax),%edx;");
    asm("loc_65D18FA: calll *(%edx);");
    asm("loc_65D18FC: pop %esi;");
    asm("loc_65D18FD: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D1900() // ??0DNameNode@@IAE@XZ
{
    __DEBUG_ASM(65D1900);
    // chunk 0x65D1900 _sub_65D1900
    asm("loc_65D1900: mov %ecx,%eax;");
    asm("loc_65D1902: movl $_off_65E11F4,(%eax);");
    asm("loc_65D1908: movl $0,4(%eax);");
    asm("loc_65D190F: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D1910() // _sub_65D1910
{
    __DEBUG_ASM(65D1910);
    // chunk 0x65D1910 _sub_65D1910
    asm("loc_65D1910: push %esi;");
    asm("loc_65D1911: mov %ecx,%esi;");
    asm("loc_65D1913: call _sub_65D1930;");
    asm("loc_65D1918: testb $1,8(%esp);");
    asm("loc_65D191D: je loc_65D1928;");
    asm("loc_65D191F: push %esi;");
    asm("loc_65D1920: call _sub_65D6CB8;");
    asm("loc_65D1925: add $4,%esp;");
    asm("loc_65D1928: mov %esi,%eax;");
    asm("loc_65D192A: pop %esi;");
    asm("loc_65D192B: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D1930() // _sub_65D1930
{
    __DEBUG_ASM(65D1930);
    // chunk 0x65D1930 _sub_65D1930
    asm("loc_65D1930: push %ecx;");
    asm("loc_65D1931: movl $_off_65E11F4,(%ecx);");
    asm("loc_65D1937: call _sub_65D1A70;");
    asm("loc_65D193C: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D1940() // _sub_65D1940
{
    __DEBUG_ASM(65D1940);
    // chunk 0x65D1940 _sub_65D1940
    asm("loc_65D1940: mov %fs:0,%eax;");
    asm("loc_65D1946: push $0xFFFFFFFF;");
    asm("loc_65D1948: push $_sub_65DFEBB;");
    asm("loc_65D194D: push %eax;");
    asm("loc_65D194E: mov %esp,%fs:0;");
    asm("loc_65D1955: sub $0x10,%esp;");
    asm("loc_65D1958: push %ebx;");
    asm("loc_65D1959: mov 0x24(%esp),%ebx;");
    asm("loc_65D195D: push %esi;");
    asm("loc_65D195E: push %edi;");
    asm("loc_65D195F: mov 4(%ebx),%eax;");
    asm("loc_65D1962: test %eax,%eax;");
    asm("loc_65D1964: je loc_65D197D;");
    asm("loc_65D1966: pop %edi;");
    asm("loc_65D1967: pop %esi;");
    asm("loc_65D1968: or $0xFFFFFFFF,%eax;");
    asm("loc_65D196B: pop %ebx;");
    asm("loc_65D196C: mov 0x10(%esp),%ecx;");
    asm("loc_65D1970: mov %ecx,%fs:0;");
    asm("loc_65D1977: add $0x1C,%esp;");
    asm("loc_65D197A: ret $0xC;");
    asm("loc_65D197D: mov 0x30(%esp),%edi;");
    asm("loc_65D1981: xor %eax,%eax;");
    asm("loc_65D1983: mov %eax,0xC(%esp);");
    asm("loc_65D1987: push %edi;");
    asm("loc_65D1988: mov %eax,0x14(%esp);");
    asm("loc_65D198C: mov %eax,0x18(%esp);");
    asm("loc_65D1990: mov %eax,0x1C(%esp);");
    asm("loc_65D1994: call _sub_65D6C8E;");
    asm("loc_65D1999: mov %eax,%esi;");
    asm("loc_65D199B: cmp $0xFFFFFFFF,%esi;");
    asm("loc_65D199E: jne loc_65D19B1;");
    asm("loc_65D19A0: push %edi;");
    asm("loc_65D19A1: call _sub_65D6C88;");
    asm("loc_65D19A6: test %eax,%eax;");
    asm("loc_65D19A8: je loc_65D19DD;");
    asm("loc_65D19AA: mov 0xC(%eax),%ecx;");
    asm("loc_65D19AD: mov (%ecx),%edx;");
    asm("loc_65D19AF: mov (%edx),%esi;");
    asm("loc_65D19B1: mov 0x34(%esp),%eax;");
    asm("loc_65D19B5: movw $2,0xC(%esp);");
    asm("loc_65D19BC: push %eax;");
    asm("loc_65D19BD: call _sub_65D6C58;");
    asm("loc_65D19C2: push $6;");
    asm("loc_65D19C4: push $1;");
    asm("loc_65D19C6: push $2;");
    asm("loc_65D19C8: mov %ax,0x1A(%esp);");
    asm("loc_65D19CD: mov %esi,0x1C(%esp);");
    asm("loc_65D19D1: call _sub_65D6C64;");
    asm("loc_65D19D6: mov %eax,%esi;");
    asm("loc_65D19D8: cmp $0xFFFFFFFF,%esi;");
    asm("loc_65D19DB: jne loc_65D19F9;");
    asm("loc_65D19DD: call _sub_65D1330;");
    asm("loc_65D19E2: pop %edi;");
    asm("loc_65D19E3: pop %esi;");
    asm("loc_65D19E4: or $0xFFFFFFFF,%eax;");
    asm("loc_65D19E7: pop %ebx;");
    asm("loc_65D19E8: mov 0x10(%esp),%ecx;");
    asm("loc_65D19EC: mov %ecx,%fs:0;");
    asm("loc_65D19F3: add $0x1C,%esp;");
    asm("loc_65D19F6: ret $0xC;");
    asm("loc_65D19F9: lea 0xC(%esp),%ecx;");
    asm("loc_65D19FD: push $0x10;");
    asm("loc_65D19FF: push %ecx;");
    asm("loc_65D1A00: push %esi;");
    asm("loc_65D1A01: call _sub_65D6C82;");
    asm("loc_65D1A06: cmp $0xFFFFFFFF,%eax;");
    asm("loc_65D1A09: jne loc_65D1A2D;");
    asm("loc_65D1A0B: call _sub_65D1330;");
    asm("loc_65D1A10: push %esi;");
    asm("loc_65D1A11: call _sub_65D6C4C;");
    asm("loc_65D1A16: pop %edi;");
    asm("loc_65D1A17: pop %esi;");
    asm("loc_65D1A18: or $0xFFFFFFFF,%eax;");
    asm("loc_65D1A1B: pop %ebx;");
    asm("loc_65D1A1C: mov 0x10(%esp),%ecx;");
    asm("loc_65D1A20: mov %ecx,%fs:0;");
    asm("loc_65D1A27: add $0x1C,%esp;");
    asm("loc_65D1A2A: ret $0xC;");
    asm("loc_65D1A2D: push $0x3C;");
    asm("loc_65D1A2F: call _sub_65D6F71;");
    asm("loc_65D1A34: add $4,%esp;");
    asm("loc_65D1A37: mov %eax,0x2C(%esp);");
    asm("loc_65D1A3B: test %eax,%eax;");
    asm("loc_65D1A3D: movl $0,0x24(%esp);");
    asm("loc_65D1A45: je loc_65D1A51;");
    asm("loc_65D1A47: push %esi;");
    asm("loc_65D1A48: mov %eax,%ecx;");
    asm("loc_65D1A4A: call _sub_65D1B70;");
    asm("loc_65D1A4F: jmp loc_65D1A53;");
    asm("loc_65D1A51: xor %eax,%eax;");
    asm("loc_65D1A53: mov 0x1C(%esp),%ecx;");
    asm("loc_65D1A57: pop %edi;");
    asm("loc_65D1A58: mov %eax,4(%ebx);");
    asm("loc_65D1A5B: pop %esi;");
    asm("loc_65D1A5C: xor %eax,%eax;");
    asm("loc_65D1A5E: pop %ebx;");
    asm("loc_65D1A5F: mov %ecx,%fs:0;");
    asm("loc_65D1A66: add $0x1C,%esp;");
    asm("loc_65D1A69: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D1A70() // _sub_65D1A70
{
    __DEBUG_ASM(65D1A70);
    // chunk 0x65D1A70 _sub_65D1A70
    asm("loc_65D1A70: push %esi;");
    asm("loc_65D1A71: push %edi;");
    asm("loc_65D1A72: mov 0xC(%esp),%edi;");
    asm("loc_65D1A76: mov 4(%edi),%esi;");
    asm("loc_65D1A79: test %esi,%esi;");
    asm("loc_65D1A7B: je loc_65D1A94;");
    asm("loc_65D1A7D: mov %esi,%ecx;");
    asm("loc_65D1A7F: call _sub_65D1C20;");
    asm("loc_65D1A84: push %esi;");
    asm("loc_65D1A85: call _sub_65D6CB8;");
    asm("loc_65D1A8A: add $4,%esp;");
    asm("loc_65D1A8D: movl $0,4(%edi);");
    asm("loc_65D1A94: pop %edi;");
    asm("loc_65D1A95: xor %eax,%eax;");
    asm("loc_65D1A97: pop %esi;");
    asm("loc_65D1A98: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D1AA0() // _sub_65D1AA0
{
    __DEBUG_ASM(65D1AA0);
    // chunk 0x65D1AA0 _sub_65D1AA0
    asm("loc_65D1AA0: push %edi;");
    asm("loc_65D1AA1: mov 8(%esp),%edi;");
    asm("loc_65D1AA5: mov 4(%edi),%ecx;");
    asm("loc_65D1AA8: test %ecx,%ecx;");
    asm("loc_65D1AAA: jne loc_65D1AB3;");
    asm("loc_65D1AAC: or $0xFFFFFFFF,%eax;");
    asm("loc_65D1AAF: pop %edi;");
    asm("loc_65D1AB0: ret $4;");
    asm("loc_65D1AB3: push $1;");
    asm("loc_65D1AB5: call _sub_65D1EA0;");
    asm("loc_65D1ABA: test %al,%al;");
    asm("loc_65D1ABC: jne loc_65D1AE5;");
    asm("loc_65D1ABE: push %esi;");
    asm("loc_65D1ABF: mov 4(%edi),%esi;");
    asm("loc_65D1AC2: test %esi,%esi;");
    asm("loc_65D1AC4: je loc_65D1AD6;");
    asm("loc_65D1AC6: mov %esi,%ecx;");
    asm("loc_65D1AC8: call _sub_65D1C20;");
    asm("loc_65D1ACD: push %esi;");
    asm("loc_65D1ACE: call _sub_65D6CB8;");
    asm("loc_65D1AD3: add $4,%esp;");
    asm("loc_65D1AD6: movl $0,4(%edi);");
    asm("loc_65D1ADD: pop %esi;");
    asm("loc_65D1ADE: or $0xFFFFFFFF,%eax;");
    asm("loc_65D1AE1: pop %edi;");
    asm("loc_65D1AE2: ret $4;");
    asm("loc_65D1AE5: xor %eax,%eax;");
    asm("loc_65D1AE7: pop %edi;");
    asm("loc_65D1AE8: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D1AF0() // _sub_65D1AF0
{
    __DEBUG_ASM(65D1AF0);
    // chunk 0x65D1AF0 _sub_65D1AF0
    asm("loc_65D1AF0: push %edi;");
    asm("loc_65D1AF1: mov 8(%esp),%edi;");
    asm("loc_65D1AF5: mov 4(%edi),%ecx;");
    asm("loc_65D1AF8: test %ecx,%ecx;");
    asm("loc_65D1AFA: jne loc_65D1B03;");
    asm("loc_65D1AFC: or $0xFFFFFFFF,%eax;");
    asm("loc_65D1AFF: pop %edi;");
    asm("loc_65D1B00: ret $8;");
    asm("loc_65D1B03: mov 0xC(%esp),%eax;");
    asm("loc_65D1B07: push %eax;");
    asm("loc_65D1B08: call _sub_65D21E0;");
    asm("loc_65D1B0D: test %al,%al;");
    asm("loc_65D1B0F: jne loc_65D1B38;");
    asm("loc_65D1B11: push %esi;");
    asm("loc_65D1B12: mov 4(%edi),%esi;");
    asm("loc_65D1B15: test %esi,%esi;");
    asm("loc_65D1B17: je loc_65D1B29;");
    asm("loc_65D1B19: mov %esi,%ecx;");
    asm("loc_65D1B1B: call _sub_65D1C20;");
    asm("loc_65D1B20: push %esi;");
    asm("loc_65D1B21: call _sub_65D6CB8;");
    asm("loc_65D1B26: add $4,%esp;");
    asm("loc_65D1B29: movl $0,4(%edi);");
    asm("loc_65D1B30: pop %esi;");
    asm("loc_65D1B31: or $0xFFFFFFFF,%eax;");
    asm("loc_65D1B34: pop %edi;");
    asm("loc_65D1B35: ret $8;");
    asm("loc_65D1B38: xor %eax,%eax;");
    asm("loc_65D1B3A: pop %edi;");
    asm("loc_65D1B3B: ret $8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D1B40() // _sub_65D1B40
{
    __DEBUG_ASM(65D1B40);
    // chunk 0x65D1B40 _sub_65D1B40
    asm("loc_65D1B40: mov 4(%esp),%eax;");
    asm("loc_65D1B44: mov 4(%eax),%ecx;");
    asm("loc_65D1B47: test %ecx,%ecx;");
    asm("loc_65D1B49: jne loc_65D1B51;");
    asm("loc_65D1B4B: or $0xFFFFFFFF,%eax;");
    asm("loc_65D1B4E: ret $8;");
    asm("loc_65D1B51: mov 8(%esp),%edx;");
    asm("loc_65D1B55: push %edx;");
    asm("loc_65D1B56: call _sub_65D2170;");
    asm("loc_65D1B5B: neg %al;");
    asm("loc_65D1B5D: sbb %eax,%eax;");
    asm("loc_65D1B5F: neg %eax;");
    asm("loc_65D1B61: dec %eax;");
    asm("loc_65D1B62: ret $8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D1B70() // _sub_65D1B70
{
    __DEBUG_ASM(65D1B70);
    // chunk 0x65D1B70 _sub_65D1B70
    asm("loc_65D1B70: push $0xFFFFFFFF;");
    asm("loc_65D1B72: push $_sub_65DFEDB;");
    asm("loc_65D1B77: mov %fs:0,%eax;");
    asm("loc_65D1B7D: push %eax;");
    asm("loc_65D1B7E: mov %esp,%fs:0;");
    asm("loc_65D1B85: sub $8,%esp;");
    asm("loc_65D1B88: mov 0x18(%esp),%al;");
    asm("loc_65D1B8C: push %esi;");
    asm("loc_65D1B8D: mov %ecx,%esi;");
    asm("loc_65D1B8F: push $0xC;");
    asm("loc_65D1B91: mov %esi,0xC(%esp);");
    asm("loc_65D1B95: mov %al,4(%esi);");
    asm("loc_65D1B98: call _sub_65D6F71;");
    asm("loc_65D1B9D: mov %eax,(%eax);");
    asm("loc_65D1B9F: mov %eax,4(%eax);");
    asm("loc_65D1BA2: mov %eax,8(%esi);");
    asm("loc_65D1BA5: xor %eax,%eax;");
    asm("loc_65D1BA7: add $4,%esp;");
    asm("loc_65D1BAA: mov %eax,0xC(%esi);");
    asm("loc_65D1BAD: mov 0x1C(%esp),%ecx;");
    asm("loc_65D1BB1: mov %eax,0x18(%esi);");
    asm("loc_65D1BB4: mov %eax,0x1C(%esi);");
    asm("loc_65D1BB7: mov %ecx,(%esi);");
    asm("loc_65D1BB9: mov %eax,0x10(%esi);");
    asm("loc_65D1BBC: mov %eax,0x24(%esi);");
    asm("loc_65D1BBF: mov %eax,0x28(%esi);");
    asm("loc_65D1BC2: mov %eax,0x2C(%esi);");
    asm("loc_65D1BC5: mov %eax,0x30(%esi);");
    asm("loc_65D1BC8: mov %eax,0x34(%esi);");
    asm("loc_65D1BCB: mov %eax,0x38(%esi);");
    asm("loc_65D1BCE: mov _data_65E60E0,%edx;");
    asm("loc_65D1BD4: mov %edx,0x14(%esi);");
    asm("loc_65D1BD7: mov _data_65E60E0,%edx;");
    asm("loc_65D1BDD: mov %eax,0x14(%esp);");
    asm("loc_65D1BE1: inc %edx;");
    asm("loc_65D1BE2: lea 4(%esp),%eax;");
    asm("loc_65D1BE6: mov %edx,_data_65E60E0;");
    asm("loc_65D1BEC: mov (%esi),%ecx;");
    asm("loc_65D1BEE: push %eax;");
    asm("loc_65D1BEF: push $0x8004667E;");
    asm("loc_65D1BF4: push %ecx;");
    asm("loc_65D1BF5: movl $1,0x10(%esp);");
    asm("loc_65D1BFD: call _sub_65D6C94;");
    asm("loc_65D1C02: cmp $0xFFFFFFFF,%eax;");
    asm("loc_65D1C05: jne loc_65D1C0C;");
    asm("loc_65D1C07: call _sub_65D1330;");
    asm("loc_65D1C0C: mov 0xC(%esp),%ecx;");
    asm("loc_65D1C10: mov %esi,%eax;");
    asm("loc_65D1C12: pop %esi;");
    asm("loc_65D1C13: mov %ecx,%fs:0;");
    asm("loc_65D1C1A: add $0x14,%esp;");
    asm("loc_65D1C1D: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D1C20() // _sub_65D1C20
{
    __DEBUG_ASM(65D1C20);
    // chunk 0x65D1C20 _sub_65D1C20
    asm("loc_65D1C20: push $0xFFFFFFFF;");
    asm("loc_65D1C22: push $_sub_65DFEDB;");
    asm("loc_65D1C27: mov %fs:0,%eax;");
    asm("loc_65D1C2D: push %eax;");
    asm("loc_65D1C2E: mov %esp,%fs:0;");
    asm("loc_65D1C35: push %ecx;");
    asm("loc_65D1C36: push %ebx;");
    asm("loc_65D1C37: push %ebp;");
    asm("loc_65D1C38: push %esi;");
    asm("loc_65D1C39: push %edi;");
    asm("loc_65D1C3A: mov %ecx,%edi;");
    asm("loc_65D1C3C: mov %edi,0x10(%esp);");
    asm("loc_65D1C40: mov (%edi),%eax;");
    asm("loc_65D1C42: xor %esi,%esi;");
    asm("loc_65D1C44: cmp $0xFFFFFFFF,%eax;");
    asm("loc_65D1C47: mov %esi,0x1C(%esp);");
    asm("loc_65D1C4B: je loc_65D1C63;");
    asm("loc_65D1C4D: push %eax;");
    asm("loc_65D1C4E: call _sub_65D6C4C;");
    asm("loc_65D1C53: cmp $0xFFFFFFFF,%eax;");
    asm("loc_65D1C56: jne loc_65D1C5D;");
    asm("loc_65D1C58: call _sub_65D1330;");
    asm("loc_65D1C5D: movl $0xFFFFFFFF,(%edi);");
    asm("loc_65D1C63: mov 0x2C(%edi),%eax;");
    asm("loc_65D1C66: cmp %esi,%eax;");
    asm("loc_65D1C68: je loc_65D1C76;");
    asm("loc_65D1C6A: push %eax;");
    asm("loc_65D1C6B: call _sub_65D6CB8;");
    asm("loc_65D1C70: add $4,%esp;");
    asm("loc_65D1C73: mov %esi,0x2C(%edi);");
    asm("loc_65D1C76: mov 0x28(%edi),%eax;");
    asm("loc_65D1C79: cmp %esi,%eax;");
    asm("loc_65D1C7B: je loc_65D1C89;");
    asm("loc_65D1C7D: push %eax;");
    asm("loc_65D1C7E: call _sub_65D6CB8;");
    asm("loc_65D1C83: add $4,%esp;");
    asm("loc_65D1C86: mov %esi,0x28(%edi);");
    asm("loc_65D1C89: mov 0x34(%edi),%eax;");
    asm("loc_65D1C8C: cmp %esi,%eax;");
    asm("loc_65D1C8E: je loc_65D1C9C;");
    asm("loc_65D1C90: push %eax;");
    asm("loc_65D1C91: call _sub_65D6CB8;");
    asm("loc_65D1C96: add $4,%esp;");
    asm("loc_65D1C99: mov %esi,0x34(%edi);");
    asm("loc_65D1C9C: mov 8(%edi),%ebp;");
    asm("loc_65D1C9F: movl $0xFFFFFFFF,0x1C(%esp);");
    asm("loc_65D1CA7: mov (%ebp),%ebx;");
    asm("loc_65D1CAA: cmp %ebp,%ebx;");
    asm("loc_65D1CAC: je loc_65D1CDF;");
    asm("loc_65D1CAE: mov %ebx,%esi;");
    asm("loc_65D1CB0: mov (%ebx),%ebx;");
    asm("loc_65D1CB2: mov 4(%esi),%eax;");
    asm("loc_65D1CB5: mov (%esi),%ecx;");
    asm("loc_65D1CB7: mov %ecx,(%eax);");
    asm("loc_65D1CB9: mov (%esi),%edx;");
    asm("loc_65D1CBB: mov 4(%esi),%eax;");
    asm("loc_65D1CBE: lea 8(%esi),%ecx;");
    asm("loc_65D1CC1: mov %eax,4(%edx);");
    asm("loc_65D1CC4: call _sub_65D2630;");
    asm("loc_65D1CC9: push %esi;");
    asm("loc_65D1CCA: call _sub_65D6CB8;");
    asm("loc_65D1CCF: mov 0xC(%edi),%ecx;");
    asm("loc_65D1CD2: add $4,%esp;");
    asm("loc_65D1CD5: dec %ecx;");
    asm("loc_65D1CD6: cmp %ebp,%ebx;");
    asm("loc_65D1CD8: mov %ecx,0xC(%edi);");
    asm("loc_65D1CDB: jne loc_65D1CAE;");
    asm("loc_65D1CDD: xor %esi,%esi;");
    asm("loc_65D1CDF: mov 8(%edi),%ecx;");
    asm("loc_65D1CE2: push %ecx;");
    asm("loc_65D1CE3: call _sub_65D6CB8;");
    asm("loc_65D1CE8: mov 0x18(%esp),%ecx;");
    asm("loc_65D1CEC: add $4,%esp;");
    asm("loc_65D1CEF: mov %esi,8(%edi);");
    asm("loc_65D1CF2: mov %esi,0xC(%edi);");
    asm("loc_65D1CF5: pop %edi;");
    asm("loc_65D1CF6: pop %esi;");
    asm("loc_65D1CF7: pop %ebp;");
    asm("loc_65D1CF8: pop %ebx;");
    asm("loc_65D1CF9: mov %ecx,%fs:0;");
    asm("loc_65D1D00: add $0x10,%esp;");
    asm("loc_65D1D03: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D1D10() // _sub_65D1D10
{
    __DEBUG_ASM(65D1D10);
    // chunk 0x65D1D10 _sub_65D1D10
    asm("loc_65D1D10: push $0xFFFFFFFF;");
    asm("loc_65D1D12: push $_sub_65DFF00;");
    asm("loc_65D1D17: mov %fs:0,%eax;");
    asm("loc_65D1D1D: push %eax;");
    asm("loc_65D1D1E: mov %esp,%fs:0;");
    asm("loc_65D1D25: sub $0x14,%esp;");
    asm("loc_65D1D28: push %ebx;");
    asm("loc_65D1D29: push %esi;");
    asm("loc_65D1D2A: mov %ecx,%esi;");
    asm("loc_65D1D2C: xor %ebx,%ebx;");
    asm("loc_65D1D2E: mov %bl,0xB(%esp);");
    asm("loc_65D1D32: mov 0x28(%esi),%eax;");
    asm("loc_65D1D35: cmp %ebx,%eax;");
    asm("loc_65D1D37: je loc_65D1E5D;");
    asm("loc_65D1D3D: cmp %ebx,0x2C(%esi);");
    asm("loc_65D1D40: je loc_65D1E5D;");
    asm("loc_65D1D46: push %edi;");
    asm("loc_65D1D47: mov %ebx,0x10(%esp);");
    asm("loc_65D1D4B: mov _import_65E1004,%edi;");
    asm("loc_65D1D51: mov %ebx,0x28(%esp);");
    asm("loc_65D1D55: movl $8,0x18(%esp);");
    asm("loc_65D1D5D: mov %eax,0x1C(%esp);");
    asm("loc_65D1D61: call *%edi;");
    asm("loc_65D1D63: mov (%eax),%ecx;");
    asm("loc_65D1D65: lea 0x10(%esp),%edx;");
    asm("loc_65D1D69: push %edx;");
    asm("loc_65D1D6A: lea 0x1C(%esp),%edx;");
    asm("loc_65D1D6E: push %edx;");
    asm("loc_65D1D6F: push %eax;");
    asm("loc_65D1D70: calll *0xC(%ecx);");
    asm("loc_65D1D73: test %eax,%eax;");
    asm("loc_65D1D75: je loc_65D1DAD;");
    asm("loc_65D1D77: mov $8,%eax;");
    asm("loc_65D1D7C: mov $_data_65E30C8,%ecx;");
    asm("loc_65D1D81: mov %eax,0x18(%esp);");
    asm("loc_65D1D85: mov 0x10(%esp),%eax;");
    asm("loc_65D1D89: cmp %ebx,%eax;");
    asm("loc_65D1D8B: mov %ecx,0x1C(%esp);");
    asm("loc_65D1D8F: je loc_65D1D9B;");
    asm("loc_65D1D91: mov (%eax),%ecx;");
    asm("loc_65D1D93: push %eax;");
    asm("loc_65D1D94: calll *8(%ecx);");
    asm("loc_65D1D97: mov %ebx,0x10(%esp);");
    asm("loc_65D1D9B: call *%edi;");
    asm("loc_65D1D9D: mov (%eax),%edx;");
    asm("loc_65D1D9F: lea 0x10(%esp),%ecx;");
    asm("loc_65D1DA3: push %ecx;");
    asm("loc_65D1DA4: lea 0x1C(%esp),%ecx;");
    asm("loc_65D1DA8: push %ecx;");
    asm("loc_65D1DA9: push %eax;");
    asm("loc_65D1DAA: calll *0xC(%edx);");
    asm("loc_65D1DAD: mov 0x10(%esp),%eax;");
    asm("loc_65D1DB1: cmp %ebx,%eax;");
    asm("loc_65D1DB3: je loc_65D1E4A;");
    asm("loc_65D1DB9: mov %ebx,0x14(%esp);");
    asm("loc_65D1DBD: mov (%eax),%edx;");
    asm("loc_65D1DBF: lea 0x14(%esp),%ecx;");
    asm("loc_65D1DC3: push %ecx;");
    asm("loc_65D1DC4: push $_data_65E30B4;");
    asm("loc_65D1DC9: push %eax;");
    asm("loc_65D1DCA: movb $1,0x34(%esp);");
    asm("loc_65D1DCF: calll *(%edx);");
    asm("loc_65D1DD1: test %eax,%eax;");
    asm("loc_65D1DD3: jne loc_65D1E30;");
    asm("loc_65D1DD5: mov 0x14(%esp),%eax;");
    asm("loc_65D1DD9: xor %ecx,%ecx;");
    asm("loc_65D1DDB: mov 0x22(%esi),%cx;");
    asm("loc_65D1DDF: mov (%eax),%edx;");
    asm("loc_65D1DE1: push %ecx;");
    asm("loc_65D1DE2: mov 0x2C(%esi),%ecx;");
    asm("loc_65D1DE5: push %ecx;");
    asm("loc_65D1DE6: push %eax;");
    asm("loc_65D1DE7: calll *0x18(%edx);");
    asm("loc_65D1DEA: test %eax,%eax;");
    asm("loc_65D1DEC: jne loc_65D1E30;");
    asm("loc_65D1DEE: mov 8(%esi),%edi;");
    asm("loc_65D1DF1: push %ebp;");
    asm("loc_65D1DF2: push $0xC;");
    asm("loc_65D1DF4: mov 4(%edi),%ebp;");
    asm("loc_65D1DF7: call _sub_65D6F71;");
    asm("loc_65D1DFC: add $4,%esp;");
    asm("loc_65D1DFF: cmp %ebx,%ebp;");
    asm("loc_65D1E01: mov %edi,(%eax);");
    asm("loc_65D1E03: jne loc_65D1E07;");
    asm("loc_65D1E05: mov %eax,%ebp;");
    asm("loc_65D1E07: mov %ebp,4(%eax);");
    asm("loc_65D1E0A: mov %eax,4(%edi);");
    asm("loc_65D1E0D: mov 4(%eax),%ecx;");
    asm("loc_65D1E10: lea 0x18(%esp),%edx;");
    asm("loc_65D1E14: push %edx;");
    asm("loc_65D1E15: mov %eax,(%ecx);");
    asm("loc_65D1E17: add $8,%eax;");
    asm("loc_65D1E1A: push %eax;");
    asm("loc_65D1E1B: call _sub_65D2CB0;");
    asm("loc_65D1E20: mov 0xC(%esi),%eax;");
    asm("loc_65D1E23: add $8,%esp;");
    asm("loc_65D1E26: inc %eax;");
    asm("loc_65D1E27: movb $1,0x13(%esp);");
    asm("loc_65D1E2C: mov %eax,0xC(%esi);");
    asm("loc_65D1E2F: pop %ebp;");
    asm("loc_65D1E30: mov 0x14(%esp),%eax;");
    asm("loc_65D1E34: mov %bl,0x28(%esp);");
    asm("loc_65D1E38: cmp %ebx,%eax;");
    asm("loc_65D1E3A: je loc_65D1E46;");
    asm("loc_65D1E3C: mov (%eax),%ecx;");
    asm("loc_65D1E3E: push %eax;");
    asm("loc_65D1E3F: calll *8(%ecx);");
    asm("loc_65D1E42: mov %ebx,0x14(%esp);");
    asm("loc_65D1E46: mov 0x10(%esp),%eax;");
    asm("loc_65D1E4A: cmp %ebx,%eax;");
    asm("loc_65D1E4C: movl $0xFFFFFFFF,0x28(%esp);");
    asm("loc_65D1E54: pop %edi;");
    asm("loc_65D1E55: je loc_65D1E5D;");
    asm("loc_65D1E57: mov (%eax),%edx;");
    asm("loc_65D1E59: push %eax;");
    asm("loc_65D1E5A: calll *8(%edx);");
    asm("loc_65D1E5D: mov 0x28(%esi),%eax;");
    asm("loc_65D1E60: cmp %ebx,%eax;");
    asm("loc_65D1E62: je loc_65D1E70;");
    asm("loc_65D1E64: push %eax;");
    asm("loc_65D1E65: call _sub_65D6CB8;");
    asm("loc_65D1E6A: add $4,%esp;");
    asm("loc_65D1E6D: mov %ebx,0x28(%esi);");
    asm("loc_65D1E70: mov 0x2C(%esi),%eax;");
    asm("loc_65D1E73: cmp %ebx,%eax;");
    asm("loc_65D1E75: je loc_65D1E83;");
    asm("loc_65D1E77: push %eax;");
    asm("loc_65D1E78: call _sub_65D6CB8;");
    asm("loc_65D1E7D: add $4,%esp;");
    asm("loc_65D1E80: mov %ebx,0x2C(%esi);");
    asm("loc_65D1E83: mov 0x1C(%esp),%ecx;");
    asm("loc_65D1E87: mov 0xB(%esp),%al;");
    asm("loc_65D1E8B: pop %esi;");
    asm("loc_65D1E8C: pop %ebx;");
    asm("loc_65D1E8D: mov %ecx,%fs:0;");
    asm("loc_65D1E94: add $0x20,%esp;");
    asm("loc_65D1E97: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D1EA0() // _sub_65D1EA0
{
    __DEBUG_ASM(65D1EA0);
    // chunk 0x65D1EA0 _sub_65D1EA0
    asm("loc_65D1EA0: sub $0x28,%esp;");
    asm("loc_65D1EA3: push %ebx;");
    asm("loc_65D1EA4: push %esi;");
    asm("loc_65D1EA5: mov %ecx,%esi;");
    asm("loc_65D1EA7: push %edi;");
    asm("loc_65D1EA8: mov (%esi),%edx;");
    asm("loc_65D1EAA: cmp $0xFFFFFFFF,%edx;");
    asm("loc_65D1EAD: je loc_65D211F;");
    asm("loc_65D1EB3: mov 0x34(%esi),%ecx;");
    asm("loc_65D1EB6: xor %ebx,%ebx;");
    asm("loc_65D1EB8: cmp %ebx,%ecx;");
    asm("loc_65D1EBA: je loc_65D1F1A;");
    asm("loc_65D1EBC: mov 0x38(%esi),%eax;");
    asm("loc_65D1EBF: mov 0x30(%esi),%edi;");
    asm("loc_65D1EC2: sub %eax,%edi;");
    asm("loc_65D1EC4: push %ebx;");
    asm("loc_65D1EC5: add %ecx,%eax;");
    asm("loc_65D1EC7: push %edi;");
    asm("loc_65D1EC8: push %eax;");
    asm("loc_65D1EC9: push %edx;");
    asm("loc_65D1ECA: call _sub_65D6CA0;");
    asm("loc_65D1ECF: cmp $0xFFFFFFFF,%eax;");
    asm("loc_65D1ED2: jne loc_65D1EF4;");
    asm("loc_65D1ED4: call _sub_65D6C6A;");
    asm("loc_65D1ED9: cmp $0x2733,%eax;");
    asm("loc_65D1EDE: je loc_65D1F1A;");
    asm("loc_65D1EE0: push %eax;");
    asm("loc_65D1EE1: call _sub_65D1340;");
    asm("loc_65D1EE6: add $4,%esp;");
    asm("loc_65D1EE9: xor %al,%al;");
    asm("loc_65D1EEB: pop %edi;");
    asm("loc_65D1EEC: pop %esi;");
    asm("loc_65D1EED: pop %ebx;");
    asm("loc_65D1EEE: add $0x28,%esp;");
    asm("loc_65D1EF1: ret $4;");
    asm("loc_65D1EF4: mov 0x38(%esi),%edx;");
    asm("loc_65D1EF7: mov 0x30(%esi),%ecx;");
    asm("loc_65D1EFA: add %eax,%edx;");
    asm("loc_65D1EFC: mov %edx,%eax;");
    asm("loc_65D1EFE: mov %edx,0x38(%esi);");
    asm("loc_65D1F01: cmp %ecx,%eax;");
    asm("loc_65D1F03: jl loc_65D1F1A;");
    asm("loc_65D1F05: mov 0x34(%esi),%eax;");
    asm("loc_65D1F08: push %eax;");
    asm("loc_65D1F09: call _sub_65D6CB8;");
    asm("loc_65D1F0E: add $4,%esp;");
    asm("loc_65D1F11: mov %ebx,0x34(%esi);");
    asm("loc_65D1F14: mov %ebx,0x30(%esi);");
    asm("loc_65D1F17: mov %ebx,0x38(%esi);");
    asm("loc_65D1F1A: cmp %bl,0x38(%esp);");
    asm("loc_65D1F1E: jne loc_65D1F47;");
    asm("loc_65D1F20: mov (%esi),%edx;");
    asm("loc_65D1F22: push %ebx;");
    asm("loc_65D1F23: lea 0x10(%esp),%ecx;");
    asm("loc_65D1F27: push $0x28;");
    asm("loc_65D1F29: push %ecx;");
    asm("loc_65D1F2A: push %edx;");
    asm("loc_65D1F2B: call _sub_65D6C9A;");
    asm("loc_65D1F30: cmp $0xFFFFFFFF,%eax;");
    asm("loc_65D1F33: je loc_65D210A;");
    asm("loc_65D1F39: cmp %ebx,%eax;");
    asm("loc_65D1F3B: pop %edi;");
    asm("loc_65D1F3C: pop %esi;");
    asm("loc_65D1F3D: pop %ebx;");
    asm("loc_65D1F3E: setne %al;");
    asm("loc_65D1F41: add $0x28,%esp;");
    asm("loc_65D1F44: ret $4;");
    asm("loc_65D1F47: cmp %ebx,0x10(%esi);");
    asm("loc_65D1F4A: jne loc_65D1FF5;");
    asm("loc_65D1F50: lea 0x18(%esi),%edi;");
    asm("loc_65D1F53: mov (%esi),%eax;");
    asm("loc_65D1F55: push $2;");
    asm("loc_65D1F57: push $8;");
    asm("loc_65D1F59: push %edi;");
    asm("loc_65D1F5A: push %eax;");
    asm("loc_65D1F5B: call _sub_65D6C9A;");
    asm("loc_65D1F60: cmp $0xFFFFFFFF,%eax;");
    asm("loc_65D1F63: je loc_65D210A;");
    asm("loc_65D1F69: cmp $8,%eax;");
    asm("loc_65D1F6C: jb loc_65D1FED;");
    asm("loc_65D1F6E: cmpw $0xDEAD,(%edi);");
    asm("loc_65D1F73: jne loc_65D1FB9;");
    asm("loc_65D1F75: mov (%edi),%ecx;");
    asm("loc_65D1F77: mov 4(%edi),%eax;");
    asm("loc_65D1F7A: not %ecx;");
    asm("loc_65D1F7C: cmp %ecx,%eax;");
    asm("loc_65D1F7E: jne loc_65D1FB9;");
    asm("loc_65D1F80: mov (%esi),%edx;");
    asm("loc_65D1F82: push %ebx;");
    asm("loc_65D1F83: push $8;");
    asm("loc_65D1F85: push %edi;");
    asm("loc_65D1F86: push %edx;");
    asm("loc_65D1F87: call _sub_65D6C9A;");
    asm("loc_65D1F8C: cmp $0xFFFFFFFF,%eax;");
    asm("loc_65D1F8F: je loc_65D2041;");
    asm("loc_65D1F95: cmp $8,%eax;");
    asm("loc_65D1F98: jne loc_65D212E;");
    asm("loc_65D1F9E: cmpw $0xDEAD,(%edi);");
    asm("loc_65D1FA3: jne loc_65D1F53;");
    asm("loc_65D1FA5: mov (%edi),%eax;");
    asm("loc_65D1FA7: mov 4(%edi),%ecx;");
    asm("loc_65D1FAA: not %eax;");
    asm("loc_65D1FAC: cmp %eax,%ecx;");
    asm("loc_65D1FAE: jne loc_65D1F53;");
    asm("loc_65D1FB0: movl $1,0x10(%esi);");
    asm("loc_65D1FB7: jmp loc_65D1FF5;");
    asm("loc_65D1FB9: mov (%esi),%edx;");
    asm("loc_65D1FBB: push %ebx;");
    asm("loc_65D1FBC: lea 0x3C(%esp),%ecx;");
    asm("loc_65D1FC0: push $1;");
    asm("loc_65D1FC2: push %ecx;");
    asm("loc_65D1FC3: push %edx;");
    asm("loc_65D1FC4: call _sub_65D6C9A;");
    asm("loc_65D1FC9: cmp $0xFFFFFFFF,%eax;");
    asm("loc_65D1FCC: je loc_65D1FDD;");
    asm("loc_65D1FCE: cmp %ebx,%eax;");
    asm("loc_65D1FD0: jne loc_65D1F53;");
    asm("loc_65D1FD2: pop %edi;");
    asm("loc_65D1FD3: pop %esi;");
    asm("loc_65D1FD4: xor %al,%al;");
    asm("loc_65D1FD6: pop %ebx;");
    asm("loc_65D1FD7: add $0x28,%esp;");
    asm("loc_65D1FDA: ret $4;");
    asm("loc_65D1FDD: call _sub_65D1330;");
    asm("loc_65D1FE2: pop %edi;");
    asm("loc_65D1FE3: pop %esi;");
    asm("loc_65D1FE4: xor %al,%al;");
    asm("loc_65D1FE6: pop %ebx;");
    asm("loc_65D1FE7: add $0x28,%esp;");
    asm("loc_65D1FEA: ret $4;");
    asm("loc_65D1FED: cmp %ebx,%eax;");
    asm("loc_65D1FEF: je loc_65D211F;");
    asm("loc_65D1FF5: cmpl $1,0x10(%esi);");
    asm("loc_65D1FF9: jne loc_65D208F;");
    asm("loc_65D1FFF: cmpw $4,0x1A(%esi);");
    asm("loc_65D2004: jne loc_65D211F;");
    asm("loc_65D200A: mov (%esi),%eax;");
    asm("loc_65D200C: lea 0x20(%esi),%edi;");
    asm("loc_65D200F: push $2;");
    asm("loc_65D2011: push $4;");
    asm("loc_65D2013: push %edi;");
    asm("loc_65D2014: push %eax;");
    asm("loc_65D2015: call _sub_65D6C9A;");
    asm("loc_65D201A: cmp $0xFFFFFFFF,%eax;");
    asm("loc_65D201D: je loc_65D210A;");
    asm("loc_65D2023: cmp %ebx,%eax;");
    asm("loc_65D2025: je loc_65D211F;");
    asm("loc_65D202B: cmp $4,%eax;");
    asm("loc_65D202E: jb loc_65D208F;");
    asm("loc_65D2030: mov (%esi),%ecx;");
    asm("loc_65D2032: push %ebx;");
    asm("loc_65D2033: push $4;");
    asm("loc_65D2035: push %edi;");
    asm("loc_65D2036: push %ecx;");
    asm("loc_65D2037: call _sub_65D6C9A;");
    asm("loc_65D203C: cmp $0xFFFFFFFF,%eax;");
    asm("loc_65D203F: jne loc_65D205C;");
    asm("loc_65D2041: call _sub_65D6C6A;");
    asm("loc_65D2046: cmp $0x2733,%eax;");
    asm("loc_65D204B: jne loc_65D2116;");
    asm("loc_65D2051: pop %edi;");
    asm("loc_65D2052: pop %esi;");
    asm("loc_65D2053: xor %al,%al;");
    asm("loc_65D2055: pop %ebx;");
    asm("loc_65D2056: add $0x28,%esp;");
    asm("loc_65D2059: ret $4;");
    asm("loc_65D205C: cmp $4,%eax;");
    asm("loc_65D205F: jne loc_65D212E;");
    asm("loc_65D2065: xor %edx,%edx;");
    asm("loc_65D2067: mov (%edi),%dx;");
    asm("loc_65D206A: push %edx;");
    asm("loc_65D206B: call _sub_65D6F71;");
    asm("loc_65D2070: mov %eax,0x28(%esi);");
    asm("loc_65D2073: xor %eax,%eax;");
    asm("loc_65D2075: mov 0x22(%esi),%ax;");
    asm("loc_65D2079: push %eax;");
    asm("loc_65D207A: call _sub_65D6F71;");
    asm("loc_65D207F: add $8,%esp;");
    asm("loc_65D2082: mov %eax,0x2C(%esi);");
    asm("loc_65D2085: mov %ebx,0x24(%esi);");
    asm("loc_65D2088: movl $2,0x10(%esi);");
    asm("loc_65D208F: mov 0x10(%esi),%eax;");
    asm("loc_65D2092: mov $3,%edi;");
    asm("loc_65D2097: cmp $2,%eax;");
    asm("loc_65D209A: jne loc_65D20E5;");
    asm("loc_65D209C: mov 0x24(%esi),%eax;");
    asm("loc_65D209F: mov 0x28(%esi),%edx;");
    asm("loc_65D20A2: xor %ecx,%ecx;");
    asm("loc_65D20A4: push %ebx;");
    asm("loc_65D20A5: mov 0x20(%esi),%cx;");
    asm("loc_65D20A9: add %eax,%edx;");
    asm("loc_65D20AB: sub %eax,%ecx;");
    asm("loc_65D20AD: mov (%esi),%eax;");
    asm("loc_65D20AF: push %ecx;");
    asm("loc_65D20B0: push %edx;");
    asm("loc_65D20B1: push %eax;");
    asm("loc_65D20B2: call _sub_65D6C9A;");
    asm("loc_65D20B7: cmp $0xFFFFFFFF,%eax;");
    asm("loc_65D20BA: je loc_65D210A;");
    asm("loc_65D20BC: cmp %ebx,%eax;");
    asm("loc_65D20BE: jne loc_65D20CB;");
    asm("loc_65D20C0: pop %edi;");
    asm("loc_65D20C1: pop %esi;");
    asm("loc_65D20C2: xor %al,%al;");
    asm("loc_65D20C4: pop %ebx;");
    asm("loc_65D20C5: add $0x28,%esp;");
    asm("loc_65D20C8: ret $4;");
    asm("loc_65D20CB: mov 0x24(%esi),%ecx;");
    asm("loc_65D20CE: add %eax,%ecx;");
    asm("loc_65D20D0: mov %ecx,0x24(%esi);");
    asm("loc_65D20D3: mov %ecx,%eax;");
    asm("loc_65D20D5: xor %ecx,%ecx;");
    asm("loc_65D20D7: mov 0x20(%esi),%cx;");
    asm("loc_65D20DB: cmp %ecx,%eax;");
    asm("loc_65D20DD: jb loc_65D20E5;");
    asm("loc_65D20DF: mov %ebx,0x24(%esi);");
    asm("loc_65D20E2: mov %edi,0x10(%esi);");
    asm("loc_65D20E5: cmp %edi,0x10(%esi);");
    asm("loc_65D20E8: jne loc_65D2157;");
    asm("loc_65D20EA: mov 0x24(%esi),%eax;");
    asm("loc_65D20ED: mov 0x2C(%esi),%ecx;");
    asm("loc_65D20F0: xor %edx,%edx;");
    asm("loc_65D20F2: push %ebx;");
    asm("loc_65D20F3: mov 0x22(%esi),%dx;");
    asm("loc_65D20F7: add %eax,%ecx;");
    asm("loc_65D20F9: sub %eax,%edx;");
    asm("loc_65D20FB: push %edx;");
    asm("loc_65D20FC: mov (%esi),%edx;");
    asm("loc_65D20FE: push %ecx;");
    asm("loc_65D20FF: push %edx;");
    asm("loc_65D2100: call _sub_65D6C9A;");
    asm("loc_65D2105: cmp $0xFFFFFFFF,%eax;");
    asm("loc_65D2108: jne loc_65D212A;");
    asm("loc_65D210A: call _sub_65D6C6A;");
    asm("loc_65D210F: cmp $0x2733,%eax;");
    asm("loc_65D2114: je loc_65D2157;");
    asm("loc_65D2116: push %eax;");
    asm("loc_65D2117: call _sub_65D1340;");
    asm("loc_65D211C: add $4,%esp;");
    asm("loc_65D211F: pop %edi;");
    asm("loc_65D2120: pop %esi;");
    asm("loc_65D2121: xor %al,%al;");
    asm("loc_65D2123: pop %ebx;");
    asm("loc_65D2124: add $0x28,%esp;");
    asm("loc_65D2127: ret $4;");
    asm("loc_65D212A: cmp %ebx,%eax;");
    asm("loc_65D212C: jne loc_65D2139;");
    asm("loc_65D212E: pop %edi;");
    asm("loc_65D212F: pop %esi;");
    asm("loc_65D2130: xor %al,%al;");
    asm("loc_65D2132: pop %ebx;");
    asm("loc_65D2133: add $0x28,%esp;");
    asm("loc_65D2136: ret $4;");
    asm("loc_65D2139: mov 0x24(%esi),%edi;");
    asm("loc_65D213C: xor %ecx,%ecx;");
    asm("loc_65D213E: mov 0x22(%esi),%cx;");
    asm("loc_65D2142: add %eax,%edi;");
    asm("loc_65D2144: mov %edi,%eax;");
    asm("loc_65D2146: mov %edi,0x24(%esi);");
    asm("loc_65D2149: cmp %ecx,%eax;");
    asm("loc_65D214B: jne loc_65D2157;");
    asm("loc_65D214D: mov %esi,%ecx;");
    asm("loc_65D214F: call _sub_65D1D10;");
    asm("loc_65D2154: mov %ebx,0x10(%esi);");
    asm("loc_65D2157: pop %edi;");
    asm("loc_65D2158: pop %esi;");
    asm("loc_65D2159: mov $1,%al;");
    asm("loc_65D215B: pop %ebx;");
    asm("loc_65D215C: add $0x28,%esp;");
    asm("loc_65D215F: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D2170() // _sub_65D2170
{
    __DEBUG_ASM(65D2170);
    // chunk 0x65D2170 _sub_65D2170
    asm("loc_65D2170: push %esi;");
    asm("loc_65D2171: push %edi;");
    asm("loc_65D2172: mov %ecx,%edi;");
    asm("loc_65D2174: cmpl $0xFFFFFFFF,(%edi);");
    asm("loc_65D2177: je loc_65D21CB;");
    asm("loc_65D2179: mov 8(%edi),%eax;");
    asm("loc_65D217C: mov (%eax),%esi;");
    asm("loc_65D217E: cmp %eax,%esi;");
    asm("loc_65D2180: je loc_65D21CB;");
    asm("loc_65D2182: mov 0xC(%esp),%ecx;");
    asm("loc_65D2186: mov 8(%esi),%eax;");
    asm("loc_65D2189: push %eax;");
    asm("loc_65D218A: mov %eax,(%ecx);");
    asm("loc_65D218C: mov (%eax),%edx;");
    asm("loc_65D218E: calll *4(%edx);");
    asm("loc_65D2191: mov 4(%esi),%eax;");
    asm("loc_65D2194: mov (%esi),%ecx;");
    asm("loc_65D2196: mov %ecx,(%eax);");
    asm("loc_65D2198: mov (%esi),%edx;");
    asm("loc_65D219A: mov 4(%esi),%eax;");
    asm("loc_65D219D: mov %eax,4(%edx);");
    asm("loc_65D21A0: mov 8(%esi),%eax;");
    asm("loc_65D21A3: test %eax,%eax;");
    asm("loc_65D21A5: je loc_65D21B4;");
    asm("loc_65D21A7: mov (%eax),%ecx;");
    asm("loc_65D21A9: push %eax;");
    asm("loc_65D21AA: calll *8(%ecx);");
    asm("loc_65D21AD: movl $0,8(%esi);");
    asm("loc_65D21B4: push %esi;");
    asm("loc_65D21B5: call _sub_65D6CB8;");
    asm("loc_65D21BA: mov 0xC(%edi),%eax;");
    asm("loc_65D21BD: add $4,%esp;");
    asm("loc_65D21C0: dec %eax;");
    asm("loc_65D21C1: mov %eax,0xC(%edi);");
    asm("loc_65D21C4: pop %edi;");
    asm("loc_65D21C5: mov $1,%al;");
    asm("loc_65D21C7: pop %esi;");
    asm("loc_65D21C8: ret $4;");
    asm("loc_65D21CB: pop %edi;");
    asm("loc_65D21CC: xor %al,%al;");
    asm("loc_65D21CE: pop %esi;");
    asm("loc_65D21CF: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D21E0() // _sub_65D21E0
{
    __DEBUG_ASM(65D21E0);
    // chunk 0x65D21E0 _sub_65D21E0
    asm("loc_65D21E0: sub $0xC,%esp;");
    asm("loc_65D21E3: push %ebx;");
    asm("loc_65D21E4: push %ebp;");
    asm("loc_65D21E5: mov %ecx,%ebp;");
    asm("loc_65D21E7: push %esi;");
    asm("loc_65D21E8: push %edi;");
    asm("loc_65D21E9: cmpl $0xFFFFFFFF,(%ebp);");
    asm("loc_65D21ED: jne loc_65D21FB;");
    asm("loc_65D21EF: pop %edi;");
    asm("loc_65D21F0: pop %esi;");
    asm("loc_65D21F1: pop %ebp;");
    asm("loc_65D21F2: xor %al,%al;");
    asm("loc_65D21F4: pop %ebx;");
    asm("loc_65D21F5: add $0xC,%esp;");
    asm("loc_65D21F8: ret $4;");
    asm("loc_65D21FB: mov 0x34(%ebp),%eax;");
    asm("loc_65D21FE: test %eax,%eax;");
    asm("loc_65D2200: je loc_65D220E;");
    asm("loc_65D2202: pop %edi;");
    asm("loc_65D2203: pop %esi;");
    asm("loc_65D2204: pop %ebp;");
    asm("loc_65D2205: mov $1,%al;");
    asm("loc_65D2207: pop %ebx;");
    asm("loc_65D2208: add $0xC,%esp;");
    asm("loc_65D220B: ret $4;");
    asm("loc_65D220E: mov 0x20(%esp),%eax;");
    asm("loc_65D2212: push %eax;");
    asm("loc_65D2213: mov (%eax),%ecx;");
    asm("loc_65D2215: calll *0xC(%ecx);");
    asm("loc_65D2218: mov %eax,%esi;");
    asm("loc_65D221A: test %esi,%esi;");
    asm("loc_65D221C: jne loc_65D222A;");
    asm("loc_65D221E: pop %edi;");
    asm("loc_65D221F: pop %esi;");
    asm("loc_65D2220: pop %ebp;");
    asm("loc_65D2221: xor %al,%al;");
    asm("loc_65D2223: pop %ebx;");
    asm("loc_65D2224: add $0xC,%esp;");
    asm("loc_65D2227: ret $4;");
    asm("loc_65D222A: mov %esi,%edi;");
    asm("loc_65D222C: or $0xFFFFFFFF,%ecx;");
    asm("loc_65D222F: xor %eax,%eax;");
    asm("loc_65D2231: repne scas (%edi),%al;");
    asm("loc_65D2233: mov 0x20(%esp),%eax;");
    asm("loc_65D2237: not %ecx;");
    asm("loc_65D2239: mov (%eax),%edx;");
    asm("loc_65D223B: dec %ecx;");
    asm("loc_65D223C: mov %ecx,%ebx;");
    asm("loc_65D223E: lea 0x10(%esp),%ecx;");
    asm("loc_65D2242: push %ecx;");
    asm("loc_65D2243: push %eax;");
    asm("loc_65D2244: inc %ebx;");
    asm("loc_65D2245: calll *0x10(%edx);");
    asm("loc_65D2248: test %eax,%eax;");
    asm("loc_65D224A: je loc_65D2258;");
    asm("loc_65D224C: pop %edi;");
    asm("loc_65D224D: pop %esi;");
    asm("loc_65D224E: pop %ebp;");
    asm("loc_65D224F: xor %al,%al;");
    asm("loc_65D2251: pop %ebx;");
    asm("loc_65D2252: add $0xC,%esp;");
    asm("loc_65D2255: ret $4;");
    asm("loc_65D2258: mov 0x10(%esp),%edx;");
    asm("loc_65D225C: lea 0xC(%edx,%ebx),%eax;");
    asm("loc_65D2260: push %eax;");
    asm("loc_65D2261: mov %eax,0x30(%ebp);");
    asm("loc_65D2264: call _sub_65D6F71;");
    asm("loc_65D2269: mov %eax,0x34(%ebp);");
    asm("loc_65D226C: movl $0,0x38(%ebp);");
    asm("loc_65D2273: movw $0xDEAD,(%eax);");
    asm("loc_65D2278: movw $4,2(%eax);");
    asm("loc_65D227E: mov (%eax),%ecx;");
    asm("loc_65D2280: lea 0xC(%eax),%edi;");
    asm("loc_65D2283: not %ecx;");
    asm("loc_65D2285: mov %ecx,4(%eax);");
    asm("loc_65D2288: mov %bx,8(%eax);");
    asm("loc_65D228C: mov 0x14(%esp),%dx;");
    asm("loc_65D2291: mov %ebx,%ecx;");
    asm("loc_65D2293: mov %dx,0xA(%eax);");
    asm("loc_65D2297: mov %ecx,%edx;");
    asm("loc_65D2299: shr $2,%ecx;");
    asm("loc_65D229C: mov %edi,0x18(%esp);");
    asm("loc_65D22A0: add $4,%esp;");
    asm("loc_65D22A3: rep movsl (%esi),(%edi);");
    asm("loc_65D22A5: mov %edx,%ecx;");
    asm("loc_65D22A7: and $3,%ecx;");
    asm("loc_65D22AA: rep movsb (%esi),(%edi);");
    asm("loc_65D22AC: mov 0x20(%esp),%ecx;");
    asm("loc_65D22B0: lea 0x18(%esp),%esi;");
    asm("loc_65D22B4: push %esi;");
    asm("loc_65D22B5: xor %esi,%esi;");
    asm("loc_65D22B7: mov 0xA(%eax),%si;");
    asm("loc_65D22BB: mov 0x18(%esp),%eax;");
    asm("loc_65D22BF: mov (%ecx),%edx;");
    asm("loc_65D22C1: add %ebx,%eax;");
    asm("loc_65D22C3: push %esi;");
    asm("loc_65D22C4: push %eax;");
    asm("loc_65D22C5: push %ecx;");
    asm("loc_65D22C6: calll *0x14(%edx);");
    asm("loc_65D22C9: test %eax,%eax;");
    asm("loc_65D22CB: jne loc_65D2327;");
    asm("loc_65D22CD: mov 0x38(%ebp),%eax;");
    asm("loc_65D22D0: mov 0x30(%ebp),%ecx;");
    asm("loc_65D22D3: mov 0x34(%ebp),%edx;");
    asm("loc_65D22D6: xor %esi,%esi;");
    asm("loc_65D22D8: sub %eax,%ecx;");
    asm("loc_65D22DA: push %esi;");
    asm("loc_65D22DB: add %eax,%edx;");
    asm("loc_65D22DD: mov (%ebp),%eax;");
    asm("loc_65D22E0: push %ecx;");
    asm("loc_65D22E1: push %edx;");
    asm("loc_65D22E2: push %eax;");
    asm("loc_65D22E3: call _sub_65D6CA0;");
    asm("loc_65D22E8: cmp $0xFFFFFFFF,%eax;");
    asm("loc_65D22EB: jne loc_65D2312;");
    asm("loc_65D22ED: call _sub_65D6C6A;");
    asm("loc_65D22F2: cmp $0x2733,%eax;");
    asm("loc_65D22F7: jne loc_65D2305;");
    asm("loc_65D22F9: pop %edi;");
    asm("loc_65D22FA: pop %esi;");
    asm("loc_65D22FB: pop %ebp;");
    asm("loc_65D22FC: mov $1,%al;");
    asm("loc_65D22FE: pop %ebx;");
    asm("loc_65D22FF: add $0xC,%esp;");
    asm("loc_65D2302: ret $4;");
    asm("loc_65D2305: push %eax;");
    asm("loc_65D2306: call _sub_65D1340;");
    asm("loc_65D230B: add $4,%esp;");
    asm("loc_65D230E: xor %bl,%bl;");
    asm("loc_65D2310: jmp loc_65D232B;");
    asm("loc_65D2312: mov 0x38(%ebp),%edx;");
    asm("loc_65D2315: mov 0x30(%ebp),%ecx;");
    asm("loc_65D2318: add %eax,%edx;");
    asm("loc_65D231A: mov %edx,%eax;");
    asm("loc_65D231C: mov %edx,0x38(%ebp);");
    asm("loc_65D231F: cmp %ecx,%eax;");
    asm("loc_65D2321: jl loc_65D22F9;");
    asm("loc_65D2323: mov $1,%bl;");
    asm("loc_65D2325: jmp loc_65D232B;");
    asm("loc_65D2327: xor %bl,%bl;");
    asm("loc_65D2329: xor %esi,%esi;");
    asm("loc_65D232B: mov 0x34(%ebp),%ecx;");
    asm("loc_65D232E: push %ecx;");
    asm("loc_65D232F: call _sub_65D6CB8;");
    asm("loc_65D2334: add $4,%esp;");
    asm("loc_65D2337: mov %esi,0x34(%ebp);");
    asm("loc_65D233A: mov %esi,0x30(%ebp);");
    asm("loc_65D233D: mov %esi,0x38(%ebp);");
    asm("loc_65D2340: pop %edi;");
    asm("loc_65D2341: pop %esi;");
    asm("loc_65D2342: mov %bl,%al;");
    asm("loc_65D2344: pop %ebp;");
    asm("loc_65D2345: pop %ebx;");
    asm("loc_65D2346: add $0xC,%esp;");
    asm("loc_65D2349: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D2350() // _DllMain@12
{
    __DEBUG_ASM(65D2350);
    // chunk 0x65D2350 _sub_65D2350
    asm("loc_65D2350: mov 8(%esp),%eax;");
    asm("loc_65D2354: sub $0x590,%esp;");
    asm("loc_65D235A: sub $0,%eax;");
    asm("loc_65D235D: je loc_65D24AE;");
    asm("loc_65D2363: dec %eax;");
    asm("loc_65D2364: jne loc_65D24B3;");
    asm("loc_65D236A: lea (%esp),%eax;");
    asm("loc_65D236E: push %eax;");
    asm("loc_65D236F: push $0x101;");
    asm("loc_65D2374: call _sub_65D6CAC;");
    asm("loc_65D2379: test %eax,%eax;");
    asm("loc_65D237B: jne loc_65D2497;");
    asm("loc_65D2381: push %esi;");
    asm("loc_65D2382: lea 8(%esp),%ecx;");
    asm("loc_65D2386: push %edi;");
    asm("loc_65D2387: push %ecx;");
    asm("loc_65D2388: lea 0x19C(%esp),%edx;");
    asm("loc_65D238F: push $_data_65E311C;");
    asm("loc_65D2394: push %edx;");
    asm("loc_65D2395: call _sub_65D734E;");
    asm("loc_65D239A: lea 0x119(%esp),%eax;");
    asm("loc_65D23A1: lea 0x1A4(%esp),%ecx;");
    asm("loc_65D23A8: push %eax;");
    asm("loc_65D23A9: push $_data_65E30F4;");
    asm("loc_65D23AE: push %ecx;");
    asm("loc_65D23AF: call _sub_65D734E;");
    asm("loc_65D23B4: push $0xC;");
    asm("loc_65D23B6: call _sub_65D6F71;");
    asm("loc_65D23BB: add $0x1C,%esp;");
    asm("loc_65D23BE: test %eax,%eax;");
    asm("loc_65D23C0: je loc_65D23DA;");
    asm("loc_65D23C2: movl $1,4(%eax);");
    asm("loc_65D23C9: movl $_data_65E30E8,8(%eax);");
    asm("loc_65D23D0: movl $_off_65E1238,(%eax);");
    asm("loc_65D23D6: mov %eax,%esi;");
    asm("loc_65D23D8: jmp loc_65D23DC;");
    asm("loc_65D23DA: xor %esi,%esi;");
    asm("loc_65D23DC: mov _import_65E1004,%edi;");
    asm("loc_65D23E2: call *%edi;");
    asm("loc_65D23E4: mov (%eax),%edx;");
    asm("loc_65D23E6: push $0x40000000;");
    asm("loc_65D23EB: push $_data_65E30E8;");
    asm("loc_65D23F0: push %esi;");
    asm("loc_65D23F1: push %eax;");
    asm("loc_65D23F2: calll *0x10(%edx);");
    asm("loc_65D23F5: mov (%esi),%eax;");
    asm("loc_65D23F7: push %esi;");
    asm("loc_65D23F8: calll *8(%eax);");
    asm("loc_65D23FB: push $0xC;");
    asm("loc_65D23FD: call _sub_65D6F71;");
    asm("loc_65D2402: add $4,%esp;");
    asm("loc_65D2405: test %eax,%eax;");
    asm("loc_65D2407: je loc_65D2421;");
    asm("loc_65D2409: movl $1,4(%eax);");
    asm("loc_65D2410: movl $_data_65E30DC,8(%eax);");
    asm("loc_65D2417: movl $_off_65E1228,(%eax);");
    asm("loc_65D241D: mov %eax,%esi;");
    asm("loc_65D241F: jmp loc_65D2423;");
    asm("loc_65D2421: xor %esi,%esi;");
    asm("loc_65D2423: call *%edi;");
    asm("loc_65D2425: mov (%eax),%ecx;");
    asm("loc_65D2427: push $0x40000000;");
    asm("loc_65D242C: push $_data_65E30DC;");
    asm("loc_65D2431: push %esi;");
    asm("loc_65D2432: push %eax;");
    asm("loc_65D2433: calll *0x10(%ecx);");
    asm("loc_65D2436: mov (%esi),%edx;");
    asm("loc_65D2438: push %esi;");
    asm("loc_65D2439: calll *8(%edx);");
    asm("loc_65D243C: push $0xC;");
    asm("loc_65D243E: call _sub_65D6F71;");
    asm("loc_65D2443: add $4,%esp;");
    asm("loc_65D2446: test %eax,%eax;");
    asm("loc_65D2448: je loc_65D2462;");
    asm("loc_65D244A: movl $1,4(%eax);");
    asm("loc_65D2451: movl $_data_65E30C8,8(%eax);");
    asm("loc_65D2458: movl $_off_65E1218,(%eax);");
    asm("loc_65D245E: mov %eax,%esi;");
    asm("loc_65D2460: jmp loc_65D2464;");
    asm("loc_65D2462: xor %esi,%esi;");
    asm("loc_65D2464: call *%edi;");
    asm("loc_65D2466: mov (%eax),%ecx;");
    asm("loc_65D2468: push $0x40000000;");
    asm("loc_65D246D: push $_data_65E30C8;");
    asm("loc_65D2472: push %esi;");
    asm("loc_65D2473: push %eax;");
    asm("loc_65D2474: calll *0x10(%ecx);");
    asm("loc_65D2477: mov (%esi),%edx;");
    asm("loc_65D2479: push %esi;");
    asm("loc_65D247A: calll *8(%edx);");
    asm("loc_65D247D: call _sub_65D5A80;");
    asm("loc_65D2482: call _sub_65D2E80;");
    asm("loc_65D2487: pop %edi;");
    asm("loc_65D2488: pop %esi;");
    asm("loc_65D2489: mov $1,%eax;");
    asm("loc_65D248E: add $0x590,%esp;");
    asm("loc_65D2494: ret $0xC;");
    asm("loc_65D2497: push %eax;");
    asm("loc_65D2498: call _sub_65D1340;");
    asm("loc_65D249D: add $4,%esp;");
    asm("loc_65D24A0: mov $1,%eax;");
    asm("loc_65D24A5: add $0x590,%esp;");
    asm("loc_65D24AB: ret $0xC;");
    asm("loc_65D24AE: call _sub_65D6CA6;");
    asm("loc_65D24B3: mov $1,%eax;");
    asm("loc_65D24B8: add $0x590,%esp;");
    asm("loc_65D24BE: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D24D0() // _sub_65D24D0
{
    __DEBUG_ASM(65D24D0);
    // chunk 0x65D24D0 _sub_65D24D0
    asm("loc_65D24D0: push %ebx;");
    asm("loc_65D24D1: mov %ecx,%ebx;");
    asm("loc_65D24D3: push %ebp;");
    asm("loc_65D24D4: push %edi;");
    asm("loc_65D24D5: mov 4(%ebx),%ebp;");
    asm("loc_65D24D8: mov (%ebp),%edi;");
    asm("loc_65D24DB: cmp %ebp,%edi;");
    asm("loc_65D24DD: je loc_65D251C;");
    asm("loc_65D24DF: push %esi;");
    asm("loc_65D24E0: mov %edi,%esi;");
    asm("loc_65D24E2: mov (%edi),%edi;");
    asm("loc_65D24E4: mov 4(%esi),%eax;");
    asm("loc_65D24E7: mov (%esi),%ecx;");
    asm("loc_65D24E9: mov %ecx,(%eax);");
    asm("loc_65D24EB: mov (%esi),%edx;");
    asm("loc_65D24ED: mov 4(%esi),%eax;");
    asm("loc_65D24F0: mov %eax,4(%edx);");
    asm("loc_65D24F3: mov 8(%esi),%eax;");
    asm("loc_65D24F6: test %eax,%eax;");
    asm("loc_65D24F8: je loc_65D2507;");
    asm("loc_65D24FA: mov (%eax),%ecx;");
    asm("loc_65D24FC: push %eax;");
    asm("loc_65D24FD: calll *8(%ecx);");
    asm("loc_65D2500: movl $0,8(%esi);");
    asm("loc_65D2507: push %esi;");
    asm("loc_65D2508: call _sub_65D6CB8;");
    asm("loc_65D250D: mov 8(%ebx),%ecx;");
    asm("loc_65D2510: add $4,%esp;");
    asm("loc_65D2513: dec %ecx;");
    asm("loc_65D2514: cmp %ebp,%edi;");
    asm("loc_65D2516: mov %ecx,8(%ebx);");
    asm("loc_65D2519: jne loc_65D24E0;");
    asm("loc_65D251B: pop %esi;");
    asm("loc_65D251C: mov 4(%ebx),%edx;");
    asm("loc_65D251F: push %edx;");
    asm("loc_65D2520: call _sub_65D6CB8;");
    asm("loc_65D2525: add $4,%esp;");
    asm("loc_65D2528: xor %eax,%eax;");
    asm("loc_65D252A: mov %eax,4(%ebx);");
    asm("loc_65D252D: mov %eax,8(%ebx);");
    asm("loc_65D2530: pop %edi;");
    asm("loc_65D2531: pop %ebp;");
    asm("loc_65D2532: pop %ebx;");
    asm("loc_65D2533: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D2540() // _sub_65D2540
{
    __DEBUG_ASM(65D2540);
    // chunk 0x65D2540 _sub_65D2540
    asm("loc_65D2540: push %ebx;");
    asm("loc_65D2541: push %esi;");
    asm("loc_65D2542: push %edi;");
    asm("loc_65D2543: mov %ecx,%edi;");
    asm("loc_65D2545: mov 4(%edi),%ebx;");
    asm("loc_65D2548: mov (%ebx),%esi;");
    asm("loc_65D254A: cmp %ebx,%esi;");
    asm("loc_65D254C: je loc_65D2575;");
    asm("loc_65D254E: mov %esi,%eax;");
    asm("loc_65D2550: mov (%esi),%esi;");
    asm("loc_65D2552: push %eax;");
    asm("loc_65D2553: mov 4(%eax),%ecx;");
    asm("loc_65D2556: mov (%eax),%edx;");
    asm("loc_65D2558: mov %edx,(%ecx);");
    asm("loc_65D255A: mov (%eax),%ecx;");
    asm("loc_65D255C: mov 4(%eax),%edx;");
    asm("loc_65D255F: mov %edx,4(%ecx);");
    asm("loc_65D2562: call _sub_65D6CB8;");
    asm("loc_65D2567: mov 8(%edi),%ecx;");
    asm("loc_65D256A: add $4,%esp;");
    asm("loc_65D256D: dec %ecx;");
    asm("loc_65D256E: cmp %ebx,%esi;");
    asm("loc_65D2570: mov %ecx,8(%edi);");
    asm("loc_65D2573: jne loc_65D254E;");
    asm("loc_65D2575: mov 4(%edi),%eax;");
    asm("loc_65D2578: push %eax;");
    asm("loc_65D2579: call _sub_65D6CB8;");
    asm("loc_65D257E: add $4,%esp;");
    asm("loc_65D2581: xor %eax,%eax;");
    asm("loc_65D2583: mov %eax,4(%edi);");
    asm("loc_65D2586: mov %eax,8(%edi);");
    asm("loc_65D2589: pop %edi;");
    asm("loc_65D258A: pop %esi;");
    asm("loc_65D258B: pop %ebx;");
    asm("loc_65D258C: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D2590() // _sub_65D2590
{
    __DEBUG_ASM(65D2590);
    // chunk 0x65D2590 _sub_65D2590
    asm("loc_65D2590: push %ebx;");
    asm("loc_65D2591: mov %ecx,%ebx;");
    asm("loc_65D2593: push %ebp;");
    asm("loc_65D2594: push %edi;");
    asm("loc_65D2595: mov 4(%ebx),%ebp;");
    asm("loc_65D2598: mov (%ebp),%edi;");
    asm("loc_65D259B: cmp %ebp,%edi;");
    asm("loc_65D259D: je loc_65D25D0;");
    asm("loc_65D259F: push %esi;");
    asm("loc_65D25A0: mov %edi,%esi;");
    asm("loc_65D25A2: mov (%edi),%edi;");
    asm("loc_65D25A4: mov 4(%esi),%eax;");
    asm("loc_65D25A7: mov (%esi),%ecx;");
    asm("loc_65D25A9: mov %ecx,(%eax);");
    asm("loc_65D25AB: mov (%esi),%edx;");
    asm("loc_65D25AD: mov 4(%esi),%eax;");
    asm("loc_65D25B0: lea 8(%esi),%ecx;");
    asm("loc_65D25B3: mov %eax,4(%edx);");
    asm("loc_65D25B6: call _sub_65D2630;");
    asm("loc_65D25BB: push %esi;");
    asm("loc_65D25BC: call _sub_65D6CB8;");
    asm("loc_65D25C1: mov 8(%ebx),%ecx;");
    asm("loc_65D25C4: add $4,%esp;");
    asm("loc_65D25C7: dec %ecx;");
    asm("loc_65D25C8: cmp %ebp,%edi;");
    asm("loc_65D25CA: mov %ecx,8(%ebx);");
    asm("loc_65D25CD: jne loc_65D25A0;");
    asm("loc_65D25CF: pop %esi;");
    asm("loc_65D25D0: mov 4(%ebx),%ecx;");
    asm("loc_65D25D3: push %ecx;");
    asm("loc_65D25D4: call _sub_65D6CB8;");
    asm("loc_65D25D9: add $4,%esp;");
    asm("loc_65D25DC: xor %eax,%eax;");
    asm("loc_65D25DE: mov %eax,4(%ebx);");
    asm("loc_65D25E1: mov %eax,8(%ebx);");
    asm("loc_65D25E4: pop %edi;");
    asm("loc_65D25E5: pop %ebp;");
    asm("loc_65D25E6: pop %ebx;");
    asm("loc_65D25E7: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D25F0() // _sub_65D25F0
{
    __DEBUG_ASM(65D25F0);
    // chunk 0x65D25F0 _sub_65D25F0
    asm("loc_65D25F0: push %ebx;");
    asm("loc_65D25F1: push %esi;");
    asm("loc_65D25F2: mov 0x10(%esp),%esi;");
    asm("loc_65D25F6: push %edi;");
    asm("loc_65D25F7: mov %ecx,%edi;");
    asm("loc_65D25F9: mov 4(%esi),%eax;");
    asm("loc_65D25FC: mov (%esi),%ecx;");
    asm("loc_65D25FE: mov (%esi),%ebx;");
    asm("loc_65D2600: mov %ecx,(%eax);");
    asm("loc_65D2602: mov (%esi),%edx;");
    asm("loc_65D2604: mov 4(%esi),%eax;");
    asm("loc_65D2607: lea 8(%esi),%ecx;");
    asm("loc_65D260A: mov %eax,4(%edx);");
    asm("loc_65D260D: call _sub_65D2630;");
    asm("loc_65D2612: push %esi;");
    asm("loc_65D2613: call _sub_65D6CB8;");
    asm("loc_65D2618: mov 8(%edi),%eax;");
    asm("loc_65D261B: add $4,%esp;");
    asm("loc_65D261E: dec %eax;");
    asm("loc_65D261F: mov %eax,8(%edi);");
    asm("loc_65D2622: mov 0x10(%esp),%eax;");
    asm("loc_65D2626: pop %edi;");
    asm("loc_65D2627: pop %esi;");
    asm("loc_65D2628: mov %ebx,(%eax);");
    asm("loc_65D262A: pop %ebx;");
    asm("loc_65D262B: ret $8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D2630() // _sub_65D2630
{
    __DEBUG_ASM(65D2630);
    // chunk 0x65D2630 _sub_65D2630
    asm("loc_65D2630: push %esi;");
    asm("loc_65D2631: mov %ecx,%esi;");
    asm("loc_65D2633: mov (%esi),%eax;");
    asm("loc_65D2635: test %eax,%eax;");
    asm("loc_65D2637: je loc_65D2645;");
    asm("loc_65D2639: mov (%eax),%ecx;");
    asm("loc_65D263B: push %eax;");
    asm("loc_65D263C: calll *8(%ecx);");
    asm("loc_65D263F: movl $0,(%esi);");
    asm("loc_65D2645: pop %esi;");
    asm("loc_65D2646: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D2650() // _sub_65D2650
{
    __DEBUG_ASM(65D2650);
    // chunk 0x65D2650 _sub_65D2650
    asm("loc_65D2650: push %ebx;");
    asm("loc_65D2651: push %esi;");
    asm("loc_65D2652: mov 0x10(%esp),%esi;");
    asm("loc_65D2656: push %edi;");
    asm("loc_65D2657: push $0xC;");
    asm("loc_65D2659: mov %ecx,%ebx;");
    asm("loc_65D265B: mov 4(%esi),%edi;");
    asm("loc_65D265E: call _sub_65D6F71;");
    asm("loc_65D2663: add $4,%esp;");
    asm("loc_65D2666: mov %esi,(%eax);");
    asm("loc_65D2668: test %edi,%edi;");
    asm("loc_65D266A: jne loc_65D266E;");
    asm("loc_65D266C: mov %eax,%edi;");
    asm("loc_65D266E: mov %edi,4(%eax);");
    asm("loc_65D2671: mov %eax,4(%esi);");
    asm("loc_65D2674: mov 4(%eax),%ecx;");
    asm("loc_65D2677: mov %eax,(%ecx);");
    asm("loc_65D2679: lea 8(%eax),%ecx;");
    asm("loc_65D267C: test %ecx,%ecx;");
    asm("loc_65D267E: je loc_65D2688;");
    asm("loc_65D2680: mov 0x18(%esp),%edx;");
    asm("loc_65D2684: mov (%edx),%edx;");
    asm("loc_65D2686: mov %edx,(%ecx);");
    asm("loc_65D2688: mov 8(%ebx),%ecx;");
    asm("loc_65D268B: pop %edi;");
    asm("loc_65D268C: inc %ecx;");
    asm("loc_65D268D: pop %esi;");
    asm("loc_65D268E: mov %ecx,8(%ebx);");
    asm("loc_65D2691: mov 8(%esp),%ecx;");
    asm("loc_65D2695: pop %ebx;");
    asm("loc_65D2696: mov %eax,(%ecx);");
    asm("loc_65D2698: mov %ecx,%eax;");
    asm("loc_65D269A: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D26A0() // _sub_65D26A0
{
    __DEBUG_ASM(65D26A0);
    // chunk 0x65D26A0 _sub_65D26A0
    asm("loc_65D26A0: mov %fs:0,%eax;");
    asm("loc_65D26A6: push $0xFFFFFFFF;");
    asm("loc_65D26A8: push $_sub_65DFF1B;");
    asm("loc_65D26AD: push %eax;");
    asm("loc_65D26AE: mov 0x14(%esp),%eax;");
    asm("loc_65D26B2: mov %esp,%fs:0;");
    asm("loc_65D26B9: push %ebx;");
    asm("loc_65D26BA: push %esi;");
    asm("loc_65D26BB: mov (%eax),%ecx;");
    asm("loc_65D26BD: push %edi;");
    asm("loc_65D26BE: xor %edi,%edi;");
    asm("loc_65D26C0: cmp $8,%ecx;");
    asm("loc_65D26C3: jne loc_65D2765;");
    asm("loc_65D26C9: mov 0x1C(%esp),%ecx;");
    asm("loc_65D26CD: mov 4(%eax),%eax;");
    asm("loc_65D26D0: mov 8(%ecx),%esi;");
    asm("loc_65D26D3: mov (%eax),%dl;");
    asm("loc_65D26D5: mov (%esi),%bl;");
    asm("loc_65D26D7: mov %dl,%cl;");
    asm("loc_65D26D9: cmp %bl,%dl;");
    asm("loc_65D26DB: jne loc_65D26FB;");
    asm("loc_65D26DD: test %cl,%cl;");
    asm("loc_65D26DF: je loc_65D26F7;");
    asm("loc_65D26E1: mov 1(%eax),%dl;");
    asm("loc_65D26E4: mov 1(%esi),%bl;");
    asm("loc_65D26E7: mov %dl,%cl;");
    asm("loc_65D26E9: cmp %bl,%dl;");
    asm("loc_65D26EB: jne loc_65D26FB;");
    asm("loc_65D26ED: add $2,%eax;");
    asm("loc_65D26F0: add $2,%esi;");
    asm("loc_65D26F3: test %cl,%cl;");
    asm("loc_65D26F5: jne loc_65D26D3;");
    asm("loc_65D26F7: xor %eax,%eax;");
    asm("loc_65D26F9: jmp loc_65D2700;");
    asm("loc_65D26FB: sbb %eax,%eax;");
    asm("loc_65D26FD: sbb $0xFFFFFFFF,%eax;");
    asm("loc_65D2700: test %eax,%eax;");
    asm("loc_65D2702: jne loc_65D2765;");
    asm("loc_65D2704: push $0x34;");
    asm("loc_65D2706: call _sub_65D6F71;");
    asm("loc_65D270B: mov %eax,%esi;");
    asm("loc_65D270D: add $4,%esp;");
    asm("loc_65D2710: mov %esi,0x20(%esp);");
    asm("loc_65D2714: test %esi,%esi;");
    asm("loc_65D2716: movl $0,0x14(%esp);");
    asm("loc_65D271E: je loc_65D273D;");
    asm("loc_65D2720: mov %esi,%ecx;");
    asm("loc_65D2722: call _sub_65D1000;");
    asm("loc_65D2727: movl $_off_65E1264,(%esi);");
    asm("loc_65D272D: movl $_off_65E1248,4(%esi);");
    asm("loc_65D2734: movl $1,0x30(%esi);");
    asm("loc_65D273B: jmp loc_65D273F;");
    asm("loc_65D273D: xor %esi,%esi;");
    asm("loc_65D273F: mov 0x24(%esp),%ecx;");
    asm("loc_65D2743: mov %esi,%eax;");
    asm("loc_65D2745: neg %eax;");
    asm("loc_65D2747: sbb %eax,%eax;");
    asm("loc_65D2749: mov %esi,(%ecx);");
    asm("loc_65D274B: and $4,%eax;");
    asm("loc_65D274E: add $0xFFFFFFFC,%eax;");
    asm("loc_65D2751: mov 0xC(%esp),%ecx;");
    asm("loc_65D2755: mov %ecx,%fs:0;");
    asm("loc_65D275C: pop %edi;");
    asm("loc_65D275D: pop %esi;");
    asm("loc_65D275E: pop %ebx;");
    asm("loc_65D275F: add $0xC,%esp;");
    asm("loc_65D2762: ret $0xC;");
    asm("loc_65D2765: mov 0x24(%esp),%edx;");
    asm("loc_65D2769: mov 0xC(%esp),%ecx;");
    asm("loc_65D276D: mov $0xFFFFFFFD,%eax;");
    asm("loc_65D2772: mov %edi,(%edx);");
    asm("loc_65D2774: pop %edi;");
    asm("loc_65D2775: pop %esi;");
    asm("loc_65D2776: mov %ecx,%fs:0;");
    asm("loc_65D277D: pop %ebx;");
    asm("loc_65D277E: add $0xC,%esp;");
    asm("loc_65D2781: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D2790() // _sub_65D2790
{
    __DEBUG_ASM(65D2790);
    // chunk 0x65D2790 _sub_65D2790
    asm("loc_65D2790: mov 8(%esp),%eax;");
    asm("loc_65D2794: push %edi;");
    asm("loc_65D2795: xor %edi,%edi;");
    asm("loc_65D2797: cmpl $8,(%eax);");
    asm("loc_65D279A: jne loc_65D2817;");
    asm("loc_65D279C: mov 8(%esp),%ecx;");
    asm("loc_65D27A0: mov 4(%eax),%eax;");
    asm("loc_65D27A3: push %ebx;");
    asm("loc_65D27A4: push %esi;");
    asm("loc_65D27A5: mov 8(%ecx),%esi;");
    asm("loc_65D27A8: mov (%eax),%dl;");
    asm("loc_65D27AA: mov (%esi),%bl;");
    asm("loc_65D27AC: mov %dl,%cl;");
    asm("loc_65D27AE: cmp %bl,%dl;");
    asm("loc_65D27B0: jne loc_65D27D0;");
    asm("loc_65D27B2: test %cl,%cl;");
    asm("loc_65D27B4: je loc_65D27CC;");
    asm("loc_65D27B6: mov 1(%eax),%dl;");
    asm("loc_65D27B9: mov 1(%esi),%bl;");
    asm("loc_65D27BC: mov %dl,%cl;");
    asm("loc_65D27BE: cmp %bl,%dl;");
    asm("loc_65D27C0: jne loc_65D27D0;");
    asm("loc_65D27C2: add $2,%eax;");
    asm("loc_65D27C5: add $2,%esi;");
    asm("loc_65D27C8: test %cl,%cl;");
    asm("loc_65D27CA: jne loc_65D27A8;");
    asm("loc_65D27CC: xor %eax,%eax;");
    asm("loc_65D27CE: jmp loc_65D27D5;");
    asm("loc_65D27D0: sbb %eax,%eax;");
    asm("loc_65D27D2: sbb $0xFFFFFFFF,%eax;");
    asm("loc_65D27D5: pop %esi;");
    asm("loc_65D27D6: pop %ebx;");
    asm("loc_65D27D7: test %eax,%eax;");
    asm("loc_65D27D9: jne loc_65D2817;");
    asm("loc_65D27DB: push $0xC;");
    asm("loc_65D27DD: call _sub_65D6F71;");
    asm("loc_65D27E2: mov %eax,%ecx;");
    asm("loc_65D27E4: add $4,%esp;");
    asm("loc_65D27E7: test %ecx,%ecx;");
    asm("loc_65D27E9: je loc_65D27FF;");
    asm("loc_65D27EB: call _sub_65D1900;");
    asm("loc_65D27F0: movl $_off_65E128C,(%ecx);");
    asm("loc_65D27F6: movl $1,8(%ecx);");
    asm("loc_65D27FD: jmp loc_65D2801;");
    asm("loc_65D27FF: xor %ecx,%ecx;");
    asm("loc_65D2801: mov 0x10(%esp),%edx;");
    asm("loc_65D2805: mov %ecx,%eax;");
    asm("loc_65D2807: neg %eax;");
    asm("loc_65D2809: sbb %eax,%eax;");
    asm("loc_65D280B: mov %ecx,(%edx);");
    asm("loc_65D280D: and $4,%eax;");
    asm("loc_65D2810: pop %edi;");
    asm("loc_65D2811: add $0xFFFFFFFC,%eax;");
    asm("loc_65D2814: ret $0xC;");
    asm("loc_65D2817: mov 0x10(%esp),%ecx;");
    asm("loc_65D281B: mov $0xFFFFFFFD,%eax;");
    asm("loc_65D2820: mov %edi,(%ecx);");
    asm("loc_65D2822: pop %edi;");
    asm("loc_65D2823: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D2830() // _sub_65D2830
{
    __DEBUG_ASM(65D2830);
    // chunk 0x65D2830 _sub_65D2830
    asm("loc_65D2830: mov 4(%esp),%ecx;");
    asm("loc_65D2834: mov 4(%ecx),%eax;");
    asm("loc_65D2837: test %eax,%eax;");
    asm("loc_65D2839: jbe loc_65D283F;");
    asm("loc_65D283B: dec %eax;");
    asm("loc_65D283C: mov %eax,4(%ecx);");
    asm("loc_65D283F: mov 4(%ecx),%eax;");
    asm("loc_65D2842: test %eax,%eax;");
    asm("loc_65D2844: jne loc_65D2858;");
    asm("loc_65D2846: push %ecx;");
    asm("loc_65D2847: movl $1,4(%ecx);");
    asm("loc_65D284E: call _sub_65D6CB8;");
    asm("loc_65D2853: add $4,%esp;");
    asm("loc_65D2856: xor %eax,%eax;");
    asm("loc_65D2858: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D2860() // _sub_65D2860
{
    __DEBUG_ASM(65D2860);
    // chunk 0x65D2860 _sub_65D2860
    asm("loc_65D2860: mov 8(%esp),%eax;");
    asm("loc_65D2864: push %edi;");
    asm("loc_65D2865: xor %edi,%edi;");
    asm("loc_65D2867: cmpl $8,(%eax);");
    asm("loc_65D286A: jne loc_65D28EA;");
    asm("loc_65D286C: mov 8(%esp),%ecx;");
    asm("loc_65D2870: mov 4(%eax),%eax;");
    asm("loc_65D2873: push %esi;");
    asm("loc_65D2874: mov 8(%ecx),%esi;");
    asm("loc_65D2877: mov (%eax),%dl;");
    asm("loc_65D2879: mov %dl,%cl;");
    asm("loc_65D287B: cmp (%esi),%dl;");
    asm("loc_65D287D: jne loc_65D289B;");
    asm("loc_65D287F: test %cl,%cl;");
    asm("loc_65D2881: je loc_65D2897;");
    asm("loc_65D2883: mov 1(%eax),%dl;");
    asm("loc_65D2886: mov %dl,%cl;");
    asm("loc_65D2888: cmp 1(%esi),%dl;");
    asm("loc_65D288B: jne loc_65D289B;");
    asm("loc_65D288D: add $2,%eax;");
    asm("loc_65D2890: add $2,%esi;");
    asm("loc_65D2893: test %cl,%cl;");
    asm("loc_65D2895: jne loc_65D2877;");
    asm("loc_65D2897: xor %eax,%eax;");
    asm("loc_65D2899: jmp loc_65D28A0;");
    asm("loc_65D289B: sbb %eax,%eax;");
    asm("loc_65D289D: sbb $0xFFFFFFFF,%eax;");
    asm("loc_65D28A0: test %eax,%eax;");
    asm("loc_65D28A2: pop %esi;");
    asm("loc_65D28A3: jne loc_65D28EA;");
    asm("loc_65D28A5: push $0x10;");
    asm("loc_65D28A7: call _sub_65D6F71;");
    asm("loc_65D28AC: add $4,%esp;");
    asm("loc_65D28AF: test %eax,%eax;");
    asm("loc_65D28B1: je loc_65D28D2;");
    asm("loc_65D28B3: movl $0,4(%eax);");
    asm("loc_65D28BA: movl $0,8(%eax);");
    asm("loc_65D28C1: movl $_off_65E12B0,(%eax);");
    asm("loc_65D28C7: movl $1,0xC(%eax);");
    asm("loc_65D28CE: mov %eax,%ecx;");
    asm("loc_65D28D0: jmp loc_65D28D4;");
    asm("loc_65D28D2: xor %ecx,%ecx;");
    asm("loc_65D28D4: mov 0x10(%esp),%edx;");
    asm("loc_65D28D8: mov %ecx,%eax;");
    asm("loc_65D28DA: neg %eax;");
    asm("loc_65D28DC: sbb %eax,%eax;");
    asm("loc_65D28DE: mov %ecx,(%edx);");
    asm("loc_65D28E0: and $4,%eax;");
    asm("loc_65D28E3: pop %edi;");
    asm("loc_65D28E4: add $0xFFFFFFFC,%eax;");
    asm("loc_65D28E7: ret $0xC;");
    asm("loc_65D28EA: mov 0x10(%esp),%ecx;");
    asm("loc_65D28EE: mov $0xFFFFFFFD,%eax;");
    asm("loc_65D28F3: mov %edi,(%ecx);");
    asm("loc_65D28F5: pop %edi;");
    asm("loc_65D28F6: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D2900() // _sub_65D2900
{
    __DEBUG_ASM(65D2900);
    // chunk 0x65D2900 _sub_65D2900
    asm("loc_65D2900: mov $_data_65E30C8,%eax;");
    asm("loc_65D2905: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D2910() // _sub_65D2910
{
    __DEBUG_ASM(65D2910);
    // chunk 0x65D2910 _sub_65D2910
    asm("loc_65D2910: mov 4(%esp),%eax;");
    asm("loc_65D2914: mov 8(%esp),%edx;");
    asm("loc_65D2918: mov 8(%eax),%ecx;");
    asm("loc_65D291B: xor %eax,%eax;");
    asm("loc_65D291D: mov %ecx,(%edx);");
    asm("loc_65D291F: ret $8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D2930() // _sub_65D2930
{
    __DEBUG_ASM(65D2930);
    // chunk 0x65D2930 _sub_65D2930
    asm("loc_65D2930: mov 4(%esp),%eax;");
    asm("loc_65D2934: mov 0xC(%esp),%edx;");
    asm("loc_65D2938: mov 8(%eax),%ecx;");
    asm("loc_65D293B: cmp %ecx,%edx;");
    asm("loc_65D293D: jb loc_65D2966;");
    asm("loc_65D293F: push %esi;");
    asm("loc_65D2940: mov 4(%eax),%esi;");
    asm("loc_65D2943: mov %ecx,%edx;");
    asm("loc_65D2945: push %edi;");
    asm("loc_65D2946: mov 0x10(%esp),%edi;");
    asm("loc_65D294A: shr $2,%ecx;");
    asm("loc_65D294D: rep movsl (%esi),(%edi);");
    asm("loc_65D294F: mov %edx,%ecx;");
    asm("loc_65D2951: and $3,%ecx;");
    asm("loc_65D2954: rep movsb (%esi),(%edi);");
    asm("loc_65D2956: mov 0x18(%esp),%ecx;");
    asm("loc_65D295A: mov 8(%eax),%eax;");
    asm("loc_65D295D: pop %edi;");
    asm("loc_65D295E: pop %esi;");
    asm("loc_65D295F: mov %eax,(%ecx);");
    asm("loc_65D2961: xor %eax,%eax;");
    asm("loc_65D2963: ret $0x10;");
    asm("loc_65D2966: mov $0xFFFFFFFB,%eax;");
    asm("loc_65D296B: ret $0x10;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D2970() // _sub_65D2970
{
    __DEBUG_ASM(65D2970);
    // chunk 0x65D2970 _sub_65D2970
    asm("loc_65D2970: push %esi;");
    asm("loc_65D2971: mov 8(%esp),%esi;");
    asm("loc_65D2975: push %edi;");
    asm("loc_65D2976: mov 4(%esi),%eax;");
    asm("loc_65D2979: test %eax,%eax;");
    asm("loc_65D297B: je loc_65D298D;");
    asm("loc_65D297D: push %eax;");
    asm("loc_65D297E: call _sub_65D6CB8;");
    asm("loc_65D2983: add $4,%esp;");
    asm("loc_65D2986: movl $0,4(%esi);");
    asm("loc_65D298D: mov 0x14(%esp),%edi;");
    asm("loc_65D2991: movl $0,8(%esi);");
    asm("loc_65D2998: push %edi;");
    asm("loc_65D2999: call _sub_65D6F71;");
    asm("loc_65D299E: add $4,%esp;");
    asm("loc_65D29A1: mov %eax,4(%esi);");
    asm("loc_65D29A4: test %eax,%eax;");
    asm("loc_65D29A6: je loc_65D29C8;");
    asm("loc_65D29A8: mov %edi,8(%esi);");
    asm("loc_65D29AB: mov 0x10(%esp),%esi;");
    asm("loc_65D29AF: mov %edi,%ecx;");
    asm("loc_65D29B1: mov %eax,%edi;");
    asm("loc_65D29B3: mov %ecx,%eax;");
    asm("loc_65D29B5: shr $2,%ecx;");
    asm("loc_65D29B8: rep movsl (%esi),(%edi);");
    asm("loc_65D29BA: mov %eax,%ecx;");
    asm("loc_65D29BC: and $3,%ecx;");
    asm("loc_65D29BF: xor %eax,%eax;");
    asm("loc_65D29C1: rep movsb (%esi),(%edi);");
    asm("loc_65D29C3: pop %edi;");
    asm("loc_65D29C4: pop %esi;");
    asm("loc_65D29C5: ret $0xC;");
    asm("loc_65D29C8: pop %edi;");
    asm("loc_65D29C9: mov $0xFFFFFFFC,%eax;");
    asm("loc_65D29CE: pop %esi;");
    asm("loc_65D29CF: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D29E0() // _sub_65D29E0
{
    __DEBUG_ASM(65D29E0);
    // chunk 0x65D29E0 _sub_65D29E0
    asm("loc_65D29E0: mov _off_65E12D0,%eax;");
    asm("loc_65D29E5: push %ebx;");
    asm("loc_65D29E6: push %ebp;");
    asm("loc_65D29E7: push %esi;");
    asm("loc_65D29E8: push %edi;");
    asm("loc_65D29E9: xor %edi,%edi;");
    asm("loc_65D29EB: test %eax,%eax;");
    asm("loc_65D29ED: je loc_65D2A32;");
    asm("loc_65D29EF: mov 0x18(%esp),%ebp;");
    asm("loc_65D29F3: mov %ebp,%esi;");
    asm("loc_65D29F5: mov (%eax),%dl;");
    asm("loc_65D29F7: mov (%esi),%bl;");
    asm("loc_65D29F9: mov %dl,%cl;");
    asm("loc_65D29FB: cmp %bl,%dl;");
    asm("loc_65D29FD: jne loc_65D2A1D;");
    asm("loc_65D29FF: test %cl,%cl;");
    asm("loc_65D2A01: je loc_65D2A19;");
    asm("loc_65D2A03: mov 1(%eax),%dl;");
    asm("loc_65D2A06: mov 1(%esi),%bl;");
    asm("loc_65D2A09: mov %dl,%cl;");
    asm("loc_65D2A0B: cmp %bl,%dl;");
    asm("loc_65D2A0D: jne loc_65D2A1D;");
    asm("loc_65D2A0F: add $2,%eax;");
    asm("loc_65D2A12: add $2,%esi;");
    asm("loc_65D2A15: test %cl,%cl;");
    asm("loc_65D2A17: jne loc_65D29F5;");
    asm("loc_65D2A19: xor %eax,%eax;");
    asm("loc_65D2A1B: jmp loc_65D2A22;");
    asm("loc_65D2A1D: sbb %eax,%eax;");
    asm("loc_65D2A1F: sbb $0xFFFFFFFF,%eax;");
    asm("loc_65D2A22: test %eax,%eax;");
    asm("loc_65D2A24: je loc_65D2A48;");
    asm("loc_65D2A26: mov _off_65E12D8(,%edi,8),%eax;");
    asm("loc_65D2A2D: inc %edi;");
    asm("loc_65D2A2E: test %eax,%eax;");
    asm("loc_65D2A30: jne loc_65D29F3;");
    asm("loc_65D2A32: mov 0x1C(%esp),%edx;");
    asm("loc_65D2A36: pop %edi;");
    asm("loc_65D2A37: pop %esi;");
    asm("loc_65D2A38: pop %ebp;");
    asm("loc_65D2A39: movl $0,(%edx);");
    asm("loc_65D2A3F: mov $0xFFFFFFFD,%eax;");
    asm("loc_65D2A44: pop %ebx;");
    asm("loc_65D2A45: ret $0xC;");
    asm("loc_65D2A48: mov _data_65E12D4(,%edi,8),%eax;");
    asm("loc_65D2A4F: test %eax,%eax;");
    asm("loc_65D2A51: jns loc_65D2A74;");
    asm("loc_65D2A53: mov 0x14(%esp),%ecx;");
    asm("loc_65D2A57: and $0x7FFFFFFF,%eax;");
    asm("loc_65D2A5C: mov (%eax,%ecx),%esi;");
    asm("loc_65D2A5F: push %esi;");
    asm("loc_65D2A60: mov (%esi),%eax;");
    asm("loc_65D2A62: calll *4(%eax);");
    asm("loc_65D2A65: pop %edi;");
    asm("loc_65D2A66: xor %eax,%eax;");
    asm("loc_65D2A68: mov 0x18(%esp),%ecx;");
    asm("loc_65D2A6C: mov %esi,(%ecx);");
    asm("loc_65D2A6E: pop %esi;");
    asm("loc_65D2A6F: pop %ebp;");
    asm("loc_65D2A70: pop %ebx;");
    asm("loc_65D2A71: ret $0xC;");
    asm("loc_65D2A74: mov 0x14(%esp),%edx;");
    asm("loc_65D2A78: lea (%eax,%edx),%esi;");
    asm("loc_65D2A7B: push %esi;");
    asm("loc_65D2A7C: mov (%esi),%eax;");
    asm("loc_65D2A7E: calll *4(%eax);");
    asm("loc_65D2A81: pop %edi;");
    asm("loc_65D2A82: xor %eax,%eax;");
    asm("loc_65D2A84: mov 0x18(%esp),%ecx;");
    asm("loc_65D2A88: mov %esi,(%ecx);");
    asm("loc_65D2A8A: pop %esi;");
    asm("loc_65D2A8B: pop %ebp;");
    asm("loc_65D2A8C: pop %ebx;");
    asm("loc_65D2A8D: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D2A90() // _sub_65D2A90
{
    __DEBUG_ASM(65D2A90);
    // chunk 0x65D2A90 _sub_65D2A90
    asm("loc_65D2A90: mov 4(%esp),%eax;");
    asm("loc_65D2A94: mov 0x30(%eax),%ecx;");
    asm("loc_65D2A97: inc %ecx;");
    asm("loc_65D2A98: mov %ecx,0x30(%eax);");
    asm("loc_65D2A9B: mov %ecx,%eax;");
    asm("loc_65D2A9D: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D2AA0() // _sub_65D2AA0
{
    __DEBUG_ASM(65D2AA0);
    // chunk 0x65D2AA0 _sub_65D2AA0
    asm("loc_65D2AA0: mov 4(%esp),%ecx;");
    asm("loc_65D2AA4: mov 0x30(%ecx),%eax;");
    asm("loc_65D2AA7: test %eax,%eax;");
    asm("loc_65D2AA9: jbe loc_65D2AAF;");
    asm("loc_65D2AAB: dec %eax;");
    asm("loc_65D2AAC: mov %eax,0x30(%ecx);");
    asm("loc_65D2AAF: mov 0x30(%ecx),%eax;");
    asm("loc_65D2AB2: test %eax,%eax;");
    asm("loc_65D2AB4: jne loc_65D2AC6;");
    asm("loc_65D2AB6: movl $1,0x30(%ecx);");
    asm("loc_65D2ABD: mov (%ecx),%eax;");
    asm("loc_65D2ABF: push $1;");
    asm("loc_65D2AC1: calll *0x24(%eax);");
    asm("loc_65D2AC4: xor %eax,%eax;");
    asm("loc_65D2AC6: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D2AD0() // _sub_65D2AD0
{
    __DEBUG_ASM(65D2AD0);
    // chunk 0x65D2AD0 _sub_65D2AD0
    asm("loc_65D2AD0: mov _off_65E12E8,%eax;");
    asm("loc_65D2AD5: push %ebx;");
    asm("loc_65D2AD6: push %ebp;");
    asm("loc_65D2AD7: push %esi;");
    asm("loc_65D2AD8: push %edi;");
    asm("loc_65D2AD9: xor %edi,%edi;");
    asm("loc_65D2ADB: test %eax,%eax;");
    asm("loc_65D2ADD: je loc_65D2B22;");
    asm("loc_65D2ADF: mov 0x18(%esp),%ebp;");
    asm("loc_65D2AE3: mov %ebp,%esi;");
    asm("loc_65D2AE5: mov (%eax),%dl;");
    asm("loc_65D2AE7: mov (%esi),%bl;");
    asm("loc_65D2AE9: mov %dl,%cl;");
    asm("loc_65D2AEB: cmp %bl,%dl;");
    asm("loc_65D2AED: jne loc_65D2B0D;");
    asm("loc_65D2AEF: test %cl,%cl;");
    asm("loc_65D2AF1: je loc_65D2B09;");
    asm("loc_65D2AF3: mov 1(%eax),%dl;");
    asm("loc_65D2AF6: mov 1(%esi),%bl;");
    asm("loc_65D2AF9: mov %dl,%cl;");
    asm("loc_65D2AFB: cmp %bl,%dl;");
    asm("loc_65D2AFD: jne loc_65D2B0D;");
    asm("loc_65D2AFF: add $2,%eax;");
    asm("loc_65D2B02: add $2,%esi;");
    asm("loc_65D2B05: test %cl,%cl;");
    asm("loc_65D2B07: jne loc_65D2AE5;");
    asm("loc_65D2B09: xor %eax,%eax;");
    asm("loc_65D2B0B: jmp loc_65D2B12;");
    asm("loc_65D2B0D: sbb %eax,%eax;");
    asm("loc_65D2B0F: sbb $0xFFFFFFFF,%eax;");
    asm("loc_65D2B12: test %eax,%eax;");
    asm("loc_65D2B14: je loc_65D2B38;");
    asm("loc_65D2B16: mov _off_65E12F0(,%edi,8),%eax;");
    asm("loc_65D2B1D: inc %edi;");
    asm("loc_65D2B1E: test %eax,%eax;");
    asm("loc_65D2B20: jne loc_65D2AE3;");
    asm("loc_65D2B22: mov 0x1C(%esp),%edx;");
    asm("loc_65D2B26: pop %edi;");
    asm("loc_65D2B27: pop %esi;");
    asm("loc_65D2B28: pop %ebp;");
    asm("loc_65D2B29: movl $0,(%edx);");
    asm("loc_65D2B2F: mov $0xFFFFFFFD,%eax;");
    asm("loc_65D2B34: pop %ebx;");
    asm("loc_65D2B35: ret $0xC;");
    asm("loc_65D2B38: mov _data_65E12EC(,%edi,8),%eax;");
    asm("loc_65D2B3F: test %eax,%eax;");
    asm("loc_65D2B41: jns loc_65D2B64;");
    asm("loc_65D2B43: mov 0x14(%esp),%ecx;");
    asm("loc_65D2B47: and $0x7FFFFFFF,%eax;");
    asm("loc_65D2B4C: mov (%eax,%ecx),%esi;");
    asm("loc_65D2B4F: push %esi;");
    asm("loc_65D2B50: mov (%esi),%eax;");
    asm("loc_65D2B52: calll *4(%eax);");
    asm("loc_65D2B55: pop %edi;");
    asm("loc_65D2B56: xor %eax,%eax;");
    asm("loc_65D2B58: mov 0x18(%esp),%ecx;");
    asm("loc_65D2B5C: mov %esi,(%ecx);");
    asm("loc_65D2B5E: pop %esi;");
    asm("loc_65D2B5F: pop %ebp;");
    asm("loc_65D2B60: pop %ebx;");
    asm("loc_65D2B61: ret $0xC;");
    asm("loc_65D2B64: mov 0x14(%esp),%edx;");
    asm("loc_65D2B68: lea (%eax,%edx),%esi;");
    asm("loc_65D2B6B: push %esi;");
    asm("loc_65D2B6C: mov (%esi),%eax;");
    asm("loc_65D2B6E: calll *4(%eax);");
    asm("loc_65D2B71: pop %edi;");
    asm("loc_65D2B72: xor %eax,%eax;");
    asm("loc_65D2B74: mov 0x18(%esp),%ecx;");
    asm("loc_65D2B78: mov %esi,(%ecx);");
    asm("loc_65D2B7A: pop %esi;");
    asm("loc_65D2B7B: pop %ebp;");
    asm("loc_65D2B7C: pop %ebx;");
    asm("loc_65D2B7D: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D2B80() // _sub_65D2B80
{
    __DEBUG_ASM(65D2B80);
    // chunk 0x65D2B80 _sub_65D2B80
    asm("loc_65D2B80: mov 4(%esp),%eax;");
    asm("loc_65D2B84: mov 8(%eax),%ecx;");
    asm("loc_65D2B87: inc %ecx;");
    asm("loc_65D2B88: mov %ecx,8(%eax);");
    asm("loc_65D2B8B: mov %ecx,%eax;");
    asm("loc_65D2B8D: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D2B90() // _sub_65D2B90
{
    __DEBUG_ASM(65D2B90);
    // chunk 0x65D2B90 _sub_65D2B90
    asm("loc_65D2B90: mov 4(%esp),%ecx;");
    asm("loc_65D2B94: mov 8(%ecx),%eax;");
    asm("loc_65D2B97: test %eax,%eax;");
    asm("loc_65D2B99: jbe loc_65D2B9F;");
    asm("loc_65D2B9B: dec %eax;");
    asm("loc_65D2B9C: mov %eax,8(%ecx);");
    asm("loc_65D2B9F: mov 8(%ecx),%eax;");
    asm("loc_65D2BA2: test %eax,%eax;");
    asm("loc_65D2BA4: jne loc_65D2BB6;");
    asm("loc_65D2BA6: movl $1,8(%ecx);");
    asm("loc_65D2BAD: mov (%ecx),%eax;");
    asm("loc_65D2BAF: push $1;");
    asm("loc_65D2BB1: calll *0x20(%eax);");
    asm("loc_65D2BB4: xor %eax,%eax;");
    asm("loc_65D2BB6: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D2BC0() // _sub_65D2BC0
{
    __DEBUG_ASM(65D2BC0);
    // chunk 0x65D2BC0 _sub_65D2BC0
    asm("loc_65D2BC0: mov _off_65E1300,%eax;");
    asm("loc_65D2BC5: push %ebx;");
    asm("loc_65D2BC6: push %ebp;");
    asm("loc_65D2BC7: push %esi;");
    asm("loc_65D2BC8: push %edi;");
    asm("loc_65D2BC9: xor %edi,%edi;");
    asm("loc_65D2BCB: test %eax,%eax;");
    asm("loc_65D2BCD: je loc_65D2C12;");
    asm("loc_65D2BCF: mov 0x18(%esp),%ebp;");
    asm("loc_65D2BD3: mov %ebp,%esi;");
    asm("loc_65D2BD5: mov (%eax),%dl;");
    asm("loc_65D2BD7: mov (%esi),%bl;");
    asm("loc_65D2BD9: mov %dl,%cl;");
    asm("loc_65D2BDB: cmp %bl,%dl;");
    asm("loc_65D2BDD: jne loc_65D2BFD;");
    asm("loc_65D2BDF: test %cl,%cl;");
    asm("loc_65D2BE1: je loc_65D2BF9;");
    asm("loc_65D2BE3: mov 1(%eax),%dl;");
    asm("loc_65D2BE6: mov 1(%esi),%bl;");
    asm("loc_65D2BE9: mov %dl,%cl;");
    asm("loc_65D2BEB: cmp %bl,%dl;");
    asm("loc_65D2BED: jne loc_65D2BFD;");
    asm("loc_65D2BEF: add $2,%eax;");
    asm("loc_65D2BF2: add $2,%esi;");
    asm("loc_65D2BF5: test %cl,%cl;");
    asm("loc_65D2BF7: jne loc_65D2BD5;");
    asm("loc_65D2BF9: xor %eax,%eax;");
    asm("loc_65D2BFB: jmp loc_65D2C02;");
    asm("loc_65D2BFD: sbb %eax,%eax;");
    asm("loc_65D2BFF: sbb $0xFFFFFFFF,%eax;");
    asm("loc_65D2C02: test %eax,%eax;");
    asm("loc_65D2C04: je loc_65D2C28;");
    asm("loc_65D2C06: mov _off_65E1308(,%edi,8),%eax;");
    asm("loc_65D2C0D: inc %edi;");
    asm("loc_65D2C0E: test %eax,%eax;");
    asm("loc_65D2C10: jne loc_65D2BD3;");
    asm("loc_65D2C12: mov 0x1C(%esp),%edx;");
    asm("loc_65D2C16: pop %edi;");
    asm("loc_65D2C17: pop %esi;");
    asm("loc_65D2C18: pop %ebp;");
    asm("loc_65D2C19: movl $0,(%edx);");
    asm("loc_65D2C1F: mov $0xFFFFFFFD,%eax;");
    asm("loc_65D2C24: pop %ebx;");
    asm("loc_65D2C25: ret $0xC;");
    asm("loc_65D2C28: mov _data_65E1304(,%edi,8),%eax;");
    asm("loc_65D2C2F: test %eax,%eax;");
    asm("loc_65D2C31: jns loc_65D2C54;");
    asm("loc_65D2C33: mov 0x14(%esp),%ecx;");
    asm("loc_65D2C37: and $0x7FFFFFFF,%eax;");
    asm("loc_65D2C3C: mov (%eax,%ecx),%esi;");
    asm("loc_65D2C3F: push %esi;");
    asm("loc_65D2C40: mov (%esi),%eax;");
    asm("loc_65D2C42: calll *4(%eax);");
    asm("loc_65D2C45: pop %edi;");
    asm("loc_65D2C46: xor %eax,%eax;");
    asm("loc_65D2C48: mov 0x18(%esp),%ecx;");
    asm("loc_65D2C4C: mov %esi,(%ecx);");
    asm("loc_65D2C4E: pop %esi;");
    asm("loc_65D2C4F: pop %ebp;");
    asm("loc_65D2C50: pop %ebx;");
    asm("loc_65D2C51: ret $0xC;");
    asm("loc_65D2C54: mov 0x14(%esp),%edx;");
    asm("loc_65D2C58: lea (%eax,%edx),%esi;");
    asm("loc_65D2C5B: push %esi;");
    asm("loc_65D2C5C: mov (%esi),%eax;");
    asm("loc_65D2C5E: calll *4(%eax);");
    asm("loc_65D2C61: pop %edi;");
    asm("loc_65D2C62: xor %eax,%eax;");
    asm("loc_65D2C64: mov 0x18(%esp),%ecx;");
    asm("loc_65D2C68: mov %esi,(%ecx);");
    asm("loc_65D2C6A: pop %esi;");
    asm("loc_65D2C6B: pop %ebp;");
    asm("loc_65D2C6C: pop %ebx;");
    asm("loc_65D2C6D: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D2C70() // _sub_65D2C70
{
    __DEBUG_ASM(65D2C70);
    // chunk 0x65D2C70 _sub_65D2C70
    asm("loc_65D2C70: mov 4(%esp),%eax;");
    asm("loc_65D2C74: mov 0xC(%eax),%ecx;");
    asm("loc_65D2C77: inc %ecx;");
    asm("loc_65D2C78: mov %ecx,0xC(%eax);");
    asm("loc_65D2C7B: mov %ecx,%eax;");
    asm("loc_65D2C7D: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D2C80() // _sub_65D2C80
{
    __DEBUG_ASM(65D2C80);
    // chunk 0x65D2C80 _sub_65D2C80
    asm("loc_65D2C80: mov 4(%esp),%ecx;");
    asm("loc_65D2C84: mov 0xC(%ecx),%eax;");
    asm("loc_65D2C87: test %eax,%eax;");
    asm("loc_65D2C89: jbe loc_65D2C8F;");
    asm("loc_65D2C8B: dec %eax;");
    asm("loc_65D2C8C: mov %eax,0xC(%ecx);");
    asm("loc_65D2C8F: mov 0xC(%ecx),%eax;");
    asm("loc_65D2C92: test %eax,%eax;");
    asm("loc_65D2C94: jne loc_65D2CA6;");
    asm("loc_65D2C96: movl $1,0xC(%ecx);");
    asm("loc_65D2C9D: mov (%ecx),%eax;");
    asm("loc_65D2C9F: push $1;");
    asm("loc_65D2CA1: calll *0x1C(%eax);");
    asm("loc_65D2CA4: xor %eax,%eax;");
    asm("loc_65D2CA6: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D2CB0() // _sub_65D2CB0
{
    __DEBUG_ASM(65D2CB0);
    // chunk 0x65D2CB0 _sub_65D2CB0
    asm("loc_65D2CB0: push $0xFFFFFFFF;");
    asm("loc_65D2CB2: push $_sub_65DFF41;");
    asm("loc_65D2CB7: mov %fs:0,%eax;");
    asm("loc_65D2CBD: push %eax;");
    asm("loc_65D2CBE: mov %esp,%fs:0;");
    asm("loc_65D2CC5: push %ecx;");
    asm("loc_65D2CC6: mov 0x14(%esp),%ecx;");
    asm("loc_65D2CCA: mov %ecx,(%esp);");
    asm("loc_65D2CCE: test %ecx,%ecx;");
    asm("loc_65D2CD0: movl $0,0xC(%esp);");
    asm("loc_65D2CD8: je loc_65D2CEC;");
    asm("loc_65D2CDA: mov 0x18(%esp),%eax;");
    asm("loc_65D2CDE: mov (%eax),%eax;");
    asm("loc_65D2CE0: test %eax,%eax;");
    asm("loc_65D2CE2: mov %eax,(%ecx);");
    asm("loc_65D2CE4: je loc_65D2CEC;");
    asm("loc_65D2CE6: mov (%eax),%ecx;");
    asm("loc_65D2CE8: push %eax;");
    asm("loc_65D2CE9: calll *4(%ecx);");
    asm("loc_65D2CEC: mov 4(%esp),%ecx;");
    asm("loc_65D2CF0: mov %ecx,%fs:0;");
    asm("loc_65D2CF7: add $0x10,%esp;");
    asm("loc_65D2CFA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D2D00() // _sub_65D2D00
{
    __DEBUG_ASM(65D2D00);
    // chunk 0x65D2D00 _sub_65D2D00
    asm("loc_65D2D00: push $0xFFFFFFFF;");
    asm("loc_65D2D02: push $_sub_65DFF41;");
    asm("loc_65D2D07: mov %fs:0,%eax;");
    asm("loc_65D2D0D: push %eax;");
    asm("loc_65D2D0E: mov %esp,%fs:0;");
    asm("loc_65D2D15: push %ecx;");
    asm("loc_65D2D16: push %esi;");
    asm("loc_65D2D17: mov 0x18(%esp),%esi;");
    asm("loc_65D2D1B: mov %esi,4(%esp);");
    asm("loc_65D2D1F: test %esi,%esi;");
    asm("loc_65D2D21: movl $0,0x10(%esp);");
    asm("loc_65D2D29: je loc_65D2D45;");
    asm("loc_65D2D2B: push %edi;");
    asm("loc_65D2D2C: mov 0x20(%esp),%edi;");
    asm("loc_65D2D30: mov (%edi),%eax;");
    asm("loc_65D2D32: test %eax,%eax;");
    asm("loc_65D2D34: mov %eax,(%esi);");
    asm("loc_65D2D36: je loc_65D2D3E;");
    asm("loc_65D2D38: mov (%eax),%ecx;");
    asm("loc_65D2D3A: push %eax;");
    asm("loc_65D2D3B: calll *4(%ecx);");
    asm("loc_65D2D3E: mov 4(%edi),%edx;");
    asm("loc_65D2D41: pop %edi;");
    asm("loc_65D2D42: mov %edx,4(%esi);");
    asm("loc_65D2D45: mov 8(%esp),%ecx;");
    asm("loc_65D2D49: pop %esi;");
    asm("loc_65D2D4A: mov %ecx,%fs:0;");
    asm("loc_65D2D51: add $0x10,%esp;");
    asm("loc_65D2D54: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D2D60() // _sub_65D2D60
{
    __DEBUG_ASM(65D2D60);
    // chunk 0x65D2D60 _sub_65D2D60
    asm("loc_65D2D60: push %esi;");
    asm("loc_65D2D61: mov %ecx,%esi;");
    asm("loc_65D2D63: call _sub_65D2DC0;");
    asm("loc_65D2D68: testb $1,8(%esp);");
    asm("loc_65D2D6D: je loc_65D2D78;");
    asm("loc_65D2D6F: push %esi;");
    asm("loc_65D2D70: call _sub_65D6CB8;");
    asm("loc_65D2D75: add $4,%esp;");
    asm("loc_65D2D78: mov %esi,%eax;");
    asm("loc_65D2D7A: pop %esi;");
    asm("loc_65D2D7B: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D2D80() // _sub_65D2D80
{
    __DEBUG_ASM(65D2D80);
    // chunk 0x65D2D80 _sub_65D2D80
    asm("loc_65D2D80: push %esi;");
    asm("loc_65D2D81: mov %ecx,%esi;");
    asm("loc_65D2D83: call _sub_65D2DD0;");
    asm("loc_65D2D88: testb $1,8(%esp);");
    asm("loc_65D2D8D: je loc_65D2D98;");
    asm("loc_65D2D8F: push %esi;");
    asm("loc_65D2D90: call _sub_65D6CB8;");
    asm("loc_65D2D95: add $4,%esp;");
    asm("loc_65D2D98: mov %esi,%eax;");
    asm("loc_65D2D9A: pop %esi;");
    asm("loc_65D2D9B: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D2DA0() // _sub_65D2DA0
{
    __DEBUG_ASM(65D2DA0);
    // chunk 0x65D2DA0 _sub_65D2DA0
    asm("loc_65D2DA0: push %esi;");
    asm("loc_65D2DA1: mov %ecx,%esi;");
    asm("loc_65D2DA3: call _sub_65D2DE0;");
    asm("loc_65D2DA8: testb $1,8(%esp);");
    asm("loc_65D2DAD: je loc_65D2DB8;");
    asm("loc_65D2DAF: push %esi;");
    asm("loc_65D2DB0: call _sub_65D6CB8;");
    asm("loc_65D2DB5: add $4,%esp;");
    asm("loc_65D2DB8: mov %esi,%eax;");
    asm("loc_65D2DBA: pop %esi;");
    asm("loc_65D2DBB: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D2DC0() // _sub_65D2DC0
{
    __DEBUG_ASM(65D2DC0);
    // chunk 0x65D2DC0 _sub_65D2DC0
    asm("loc_65D2DC0: jmp _sub_65D10C0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D2DD0() // _sub_65D2DD0
{
    __DEBUG_ASM(65D2DD0);
    // chunk 0x65D2DD0 _sub_65D2DD0
    asm("loc_65D2DD0: jmp _sub_65D1930;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D2DE0() // _sub_65D2DE0
{
    __DEBUG_ASM(65D2DE0);
    // chunk 0x65D2DE0 _sub_65D2DE0
    asm("loc_65D2DE0: push %esi;");
    asm("loc_65D2DE1: mov %ecx,%esi;");
    asm("loc_65D2DE3: mov 4(%esi),%eax;");
    asm("loc_65D2DE6: movl $_off_65E1318,(%esi);");
    asm("loc_65D2DEC: test %eax,%eax;");
    asm("loc_65D2DEE: je loc_65D2E00;");
    asm("loc_65D2DF0: push %eax;");
    asm("loc_65D2DF1: call _sub_65D6CB8;");
    asm("loc_65D2DF6: add $4,%esp;");
    asm("loc_65D2DF9: movl $0,4(%esi);");
    asm("loc_65D2E00: movl $0,8(%esi);");
    asm("loc_65D2E07: pop %esi;");
    asm("loc_65D2E08: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D2E10() // _sub_65D2E10
{
    __DEBUG_ASM(65D2E10);
    // chunk 0x65D2E10 _sub_65D2E10
    asm("loc_65D2E10: push %esi;");
    asm("loc_65D2E11: mov %ecx,%esi;");
    asm("loc_65D2E13: mov 4(%esi),%eax;");
    asm("loc_65D2E16: movl $_off_65E1318,(%esi);");
    asm("loc_65D2E1C: test %eax,%eax;");
    asm("loc_65D2E1E: je loc_65D2E30;");
    asm("loc_65D2E20: push %eax;");
    asm("loc_65D2E21: call _sub_65D6CB8;");
    asm("loc_65D2E26: add $4,%esp;");
    asm("loc_65D2E29: movl $0,4(%esi);");
    asm("loc_65D2E30: mov 8(%esp),%al;");
    asm("loc_65D2E34: movl $0,8(%esi);");
    asm("loc_65D2E3B: test $1,%al;");
    asm("loc_65D2E3D: je loc_65D2E48;");
    asm("loc_65D2E3F: push %esi;");
    asm("loc_65D2E40: call _sub_65D6CB8;");
    asm("loc_65D2E45: add $4,%esp;");
    asm("loc_65D2E48: mov %esi,%eax;");
    asm("loc_65D2E4A: pop %esi;");
    asm("loc_65D2E4B: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D2E50() // _sub_65D2E50
{
    __DEBUG_ASM(65D2E50);
    // chunk 0x65D2E50 _sub_65D2E50
    asm("loc_65D2E50: subl $4,4(%esp);");
    asm("loc_65D2E55: jmp _sub_65D29E0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D2E60() // _sub_65D2E60
{
    __DEBUG_ASM(65D2E60);
    // chunk 0x65D2E60 _sub_65D2E60
    asm("loc_65D2E60: subl $4,4(%esp);");
    asm("loc_65D2E65: jmp _sub_65D2A90;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D2E70() // _sub_65D2E70
{
    __DEBUG_ASM(65D2E70);
    // chunk 0x65D2E70 _sub_65D2E70
    asm("loc_65D2E70: subl $4,4(%esp);");
    asm("loc_65D2E75: jmp _sub_65D2AA0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D2E80() // _sub_65D2E80
{
    __DEBUG_ASM(65D2E80);
    // chunk 0x65D2E80 _sub_65D2E80
    asm("loc_65D2E80: push %esi;");
    asm("loc_65D2E81: push %edi;");
    asm("loc_65D2E82: push $0xC;");
    asm("loc_65D2E84: call _sub_65D6F71;");
    asm("loc_65D2E89: add $4,%esp;");
    asm("loc_65D2E8C: test %eax,%eax;");
    asm("loc_65D2E8E: je loc_65D2EA8;");
    asm("loc_65D2E90: movl $1,4(%eax);");
    asm("loc_65D2E97: movl $_data_65E31B4,8(%eax);");
    asm("loc_65D2E9E: movl $_off_65E1348,(%eax);");
    asm("loc_65D2EA4: mov %eax,%esi;");
    asm("loc_65D2EA6: jmp loc_65D2EAA;");
    asm("loc_65D2EA8: xor %esi,%esi;");
    asm("loc_65D2EAA: mov _import_65E1004,%edi;");
    asm("loc_65D2EB0: call *%edi;");
    asm("loc_65D2EB2: mov (%eax),%ecx;");
    asm("loc_65D2EB4: push $0x40000000;");
    asm("loc_65D2EB9: push $_data_65E31B4;");
    asm("loc_65D2EBE: push %esi;");
    asm("loc_65D2EBF: push %eax;");
    asm("loc_65D2EC0: calll *0x10(%ecx);");
    asm("loc_65D2EC3: mov (%esi),%edx;");
    asm("loc_65D2EC5: push %esi;");
    asm("loc_65D2EC6: calll *8(%edx);");
    asm("loc_65D2EC9: push $0xC;");
    asm("loc_65D2ECB: call _sub_65D6F71;");
    asm("loc_65D2ED0: add $4,%esp;");
    asm("loc_65D2ED3: test %eax,%eax;");
    asm("loc_65D2ED5: je loc_65D2EEF;");
    asm("loc_65D2ED7: movl $1,4(%eax);");
    asm("loc_65D2EDE: movl $_data_65E31A8,8(%eax);");
    asm("loc_65D2EE5: movl $_off_65E1338,(%eax);");
    asm("loc_65D2EEB: mov %eax,%esi;");
    asm("loc_65D2EED: jmp loc_65D2EF1;");
    asm("loc_65D2EEF: xor %esi,%esi;");
    asm("loc_65D2EF1: call *%edi;");
    asm("loc_65D2EF3: mov (%eax),%ecx;");
    asm("loc_65D2EF5: push $0x40000000;");
    asm("loc_65D2EFA: push $_data_65E31A8;");
    asm("loc_65D2EFF: push %esi;");
    asm("loc_65D2F00: push %eax;");
    asm("loc_65D2F01: calll *0x10(%ecx);");
    asm("loc_65D2F04: mov (%esi),%edx;");
    asm("loc_65D2F06: push %esi;");
    asm("loc_65D2F07: calll *8(%edx);");
    asm("loc_65D2F0A: pop %edi;");
    asm("loc_65D2F0B: pop %esi;");
    asm("loc_65D2F0C: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D2F10() // _sub_65D2F10
{
    __DEBUG_ASM(65D2F10);
    // chunk 0x65D2F10 _sub_65D2F10
    asm("loc_65D2F10: push $0xFFFFFFFF;");
    asm("loc_65D2F12: push $_sub_65DFF87;");
    asm("loc_65D2F17: mov %fs:0,%eax;");
    asm("loc_65D2F1D: push %eax;");
    asm("loc_65D2F1E: mov %esp,%fs:0;");
    asm("loc_65D2F25: push %ecx;");
    asm("loc_65D2F26: mov 0x18(%esp),%eax;");
    asm("loc_65D2F2A: push %esi;");
    asm("loc_65D2F2B: push %edi;");
    asm("loc_65D2F2C: xor %edi,%edi;");
    asm("loc_65D2F2E: cmpl $8,(%eax);");
    asm("loc_65D2F31: jne loc_65D304A;");
    asm("loc_65D2F37: mov 0x1C(%esp),%ecx;");
    asm("loc_65D2F3B: mov 4(%eax),%eax;");
    asm("loc_65D2F3E: push %ebx;");
    asm("loc_65D2F3F: mov 8(%ecx),%esi;");
    asm("loc_65D2F42: mov (%eax),%dl;");
    asm("loc_65D2F44: mov (%esi),%bl;");
    asm("loc_65D2F46: mov %dl,%cl;");
    asm("loc_65D2F48: cmp %bl,%dl;");
    asm("loc_65D2F4A: jne loc_65D2F6A;");
    asm("loc_65D2F4C: test %cl,%cl;");
    asm("loc_65D2F4E: je loc_65D2F66;");
    asm("loc_65D2F50: mov 1(%eax),%dl;");
    asm("loc_65D2F53: mov 1(%esi),%bl;");
    asm("loc_65D2F56: mov %dl,%cl;");
    asm("loc_65D2F58: cmp %bl,%dl;");
    asm("loc_65D2F5A: jne loc_65D2F6A;");
    asm("loc_65D2F5C: add $2,%eax;");
    asm("loc_65D2F5F: add $2,%esi;");
    asm("loc_65D2F62: test %cl,%cl;");
    asm("loc_65D2F64: jne loc_65D2F42;");
    asm("loc_65D2F66: xor %eax,%eax;");
    asm("loc_65D2F68: jmp loc_65D2F6F;");
    asm("loc_65D2F6A: sbb %eax,%eax;");
    asm("loc_65D2F6C: sbb $0xFFFFFFFF,%eax;");
    asm("loc_65D2F6F: test %eax,%eax;");
    asm("loc_65D2F71: pop %ebx;");
    asm("loc_65D2F72: jne loc_65D304A;");
    asm("loc_65D2F78: push $0x58;");
    asm("loc_65D2F7A: call _sub_65D6F71;");
    asm("loc_65D2F7F: mov %eax,%esi;");
    asm("loc_65D2F81: add $4,%esp;");
    asm("loc_65D2F84: mov %esi,8(%esp);");
    asm("loc_65D2F88: test %esi,%esi;");
    asm("loc_65D2F8A: movl $0,0x14(%esp);");
    asm("loc_65D2F92: je loc_65D3023;");
    asm("loc_65D2F98: lea 0x20(%esp),%eax;");
    asm("loc_65D2F9C: lea 0x1C(%esp),%edx;");
    asm("loc_65D2FA0: push %eax;");
    asm("loc_65D2FA1: push $0;");
    asm("loc_65D2FA3: lea 4(%esi),%ecx;");
    asm("loc_65D2FA6: push %edx;");
    asm("loc_65D2FA7: movl $_off_65E1380,(%esi);");
    asm("loc_65D2FAD: call _sub_65D3C80;");
    asm("loc_65D2FB2: mov 0x24(%esp),%al;");
    asm("loc_65D2FB6: lea 0x18(%esi),%edi;");
    asm("loc_65D2FB9: push $0;");
    asm("loc_65D2FBB: push $0;");
    asm("loc_65D2FBD: mov %edi,%ecx;");
    asm("loc_65D2FBF: movb $1,0x1C(%esp);");
    asm("loc_65D2FC4: mov %al,(%edi);");
    asm("loc_65D2FC6: call _sub_65D64C0;");
    asm("loc_65D2FCB: mov %eax,4(%edi);");
    asm("loc_65D2FCE: movl $0,8(%edi);");
    asm("loc_65D2FD5: mov 0x24(%esp),%dl;");
    asm("loc_65D2FD9: lea 0x24(%esi),%ecx;");
    asm("loc_65D2FDC: push $0;");
    asm("loc_65D2FDE: movb $2,0x18(%esp);");
    asm("loc_65D2FE3: mov %dl,(%ecx);");
    asm("loc_65D2FE5: call _sub_65D3B40;");
    asm("loc_65D2FEA: mov 0x24(%esp),%al;");
    asm("loc_65D2FEE: lea 0x34(%esi),%ecx;");
    asm("loc_65D2FF1: push $0;");
    asm("loc_65D2FF3: movb $3,0x18(%esp);");
    asm("loc_65D2FF8: mov %al,(%ecx);");
    asm("loc_65D2FFA: call _sub_65D3B40;");
    asm("loc_65D2FFF: mov 0x24(%esp),%dl;");
    asm("loc_65D3003: lea 0x44(%esi),%ecx;");
    asm("loc_65D3006: push $0;");
    asm("loc_65D3008: movb $4,0x18(%esp);");
    asm("loc_65D300D: mov %dl,(%ecx);");
    asm("loc_65D300F: call _sub_65D3B40;");
    asm("loc_65D3014: movl $_off_65E1358,(%esi);");
    asm("loc_65D301A: movl $1,0x54(%esi);");
    asm("loc_65D3021: jmp loc_65D3025;");
    asm("loc_65D3023: xor %esi,%esi;");
    asm("loc_65D3025: mov 0x24(%esp),%ecx;");
    asm("loc_65D3029: mov %esi,%eax;");
    asm("loc_65D302B: neg %eax;");
    asm("loc_65D302D: sbb %eax,%eax;");
    asm("loc_65D302F: mov %esi,(%ecx);");
    asm("loc_65D3031: and $4,%eax;");
    asm("loc_65D3034: pop %edi;");
    asm("loc_65D3035: add $0xFFFFFFFC,%eax;");
    asm("loc_65D3038: pop %esi;");
    asm("loc_65D3039: mov 4(%esp),%ecx;");
    asm("loc_65D303D: mov %ecx,%fs:0;");
    asm("loc_65D3044: add $0x10,%esp;");
    asm("loc_65D3047: ret $0xC;");
    asm("loc_65D304A: mov 0x24(%esp),%edx;");
    asm("loc_65D304E: mov 0xC(%esp),%ecx;");
    asm("loc_65D3052: mov $0xFFFFFFFD,%eax;");
    asm("loc_65D3057: mov %edi,(%edx);");
    asm("loc_65D3059: pop %edi;");
    asm("loc_65D305A: pop %esi;");
    asm("loc_65D305B: mov %ecx,%fs:0;");
    asm("loc_65D3062: add $0x10,%esp;");
    asm("loc_65D3065: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D3070() // _sub_65D3070
{
    __DEBUG_ASM(65D3070);
    // chunk 0x65D3070 _sub_65D3070
    asm("loc_65D3070: push $0xFFFFFFFF;");
    asm("loc_65D3072: push $_sub_65DFFB9;");
    asm("loc_65D3077: mov %fs:0,%eax;");
    asm("loc_65D307D: push %eax;");
    asm("loc_65D307E: mov %esp,%fs:0;");
    asm("loc_65D3085: push %ecx;");
    asm("loc_65D3086: push %ebx;");
    asm("loc_65D3087: mov 0x1C(%esp),%ebx;");
    asm("loc_65D308B: test %ebx,%ebx;");
    asm("loc_65D308D: mov %ebx,0x1C(%esp);");
    asm("loc_65D3091: je loc_65D3099;");
    asm("loc_65D3093: mov (%ebx),%eax;");
    asm("loc_65D3095: push %ebx;");
    asm("loc_65D3096: calll *4(%eax);");
    asm("loc_65D3099: push %ebp;");
    asm("loc_65D309A: push %esi;");
    asm("loc_65D309B: push %edi;");
    asm("loc_65D309C: mov 0x24(%esp),%ebp;");
    asm("loc_65D30A0: push $0xC;");
    asm("loc_65D30A2: movl $0,0x20(%esp);");
    asm("loc_65D30AA: mov 0x1C(%ebp),%esi;");
    asm("loc_65D30AD: mov 4(%esi),%edi;");
    asm("loc_65D30B0: call _sub_65D6F71;");
    asm("loc_65D30B5: add $4,%esp;");
    asm("loc_65D30B8: mov %esi,(%eax);");
    asm("loc_65D30BA: test %edi,%edi;");
    asm("loc_65D30BC: jne loc_65D30C0;");
    asm("loc_65D30BE: mov %eax,%edi;");
    asm("loc_65D30C0: mov %edi,4(%eax);");
    asm("loc_65D30C3: mov %eax,4(%esi);");
    asm("loc_65D30C6: mov 4(%eax),%ecx;");
    asm("loc_65D30C9: mov %eax,(%ecx);");
    asm("loc_65D30CB: add $8,%eax;");
    asm("loc_65D30CE: mov %eax,0x24(%esp);");
    asm("loc_65D30D2: mov %eax,0x10(%esp);");
    asm("loc_65D30D6: test %eax,%eax;");
    asm("loc_65D30D8: movb $1,0x1C(%esp);");
    asm("loc_65D30DD: je loc_65D30EB;");
    asm("loc_65D30DF: test %ebx,%ebx;");
    asm("loc_65D30E1: mov %ebx,(%eax);");
    asm("loc_65D30E3: je loc_65D30EB;");
    asm("loc_65D30E5: mov (%ebx),%ecx;");
    asm("loc_65D30E7: push %ebx;");
    asm("loc_65D30E8: calll *4(%ecx);");
    asm("loc_65D30EB: mov 0x20(%ebp),%ecx;");
    asm("loc_65D30EE: pop %edi;");
    asm("loc_65D30EF: inc %ecx;");
    asm("loc_65D30F0: pop %esi;");
    asm("loc_65D30F1: mov %ecx,0x20(%ebp);");
    asm("loc_65D30F4: movl $0xFFFFFFFF,0x14(%esp);");
    asm("loc_65D30FC: test %ebx,%ebx;");
    asm("loc_65D30FE: pop %ebp;");
    asm("loc_65D30FF: je loc_65D3107;");
    asm("loc_65D3101: mov (%ebx),%edx;");
    asm("loc_65D3103: push %ebx;");
    asm("loc_65D3104: calll *8(%edx);");
    asm("loc_65D3107: mov 8(%esp),%ecx;");
    asm("loc_65D310B: xor %eax,%eax;");
    asm("loc_65D310D: pop %ebx;");
    asm("loc_65D310E: mov %ecx,%fs:0;");
    asm("loc_65D3115: add $0x10,%esp;");
    asm("loc_65D3118: ret $8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D3120() // _sub_65D3120
{
    __DEBUG_ASM(65D3120);
    // chunk 0x65D3120 _sub_65D3120
    asm("loc_65D3120: mov $0xFFFFFFF9,%eax;");
    asm("loc_65D3125: ret $8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D3130() // _sub_65D3130
{
    __DEBUG_ASM(65D3130);
    // chunk 0x65D3130 _sub_65D3130
    asm("loc_65D3130: push %ebx;");
    asm("loc_65D3131: push %ebp;");
    asm("loc_65D3132: push %esi;");
    asm("loc_65D3133: mov 0x14(%esp),%esi;");
    asm("loc_65D3137: push %edi;");
    asm("loc_65D3138: mov %esi,%edi;");
    asm("loc_65D313A: or $0xFFFFFFFF,%ecx;");
    asm("loc_65D313D: xor %eax,%eax;");
    asm("loc_65D313F: repne scas (%edi),%al;");
    asm("loc_65D3141: mov 0x14(%esp),%ebx;");
    asm("loc_65D3145: not %ecx;");
    asm("loc_65D3147: dec %ecx;");
    asm("loc_65D3148: lea 0x24(%ebx),%ebp;");
    asm("loc_65D314B: mov %ecx,%edi;");
    asm("loc_65D314D: cmp $0xFFFFFFFD,%edi;");
    asm("loc_65D3150: mov %edi,0x14(%esp);");
    asm("loc_65D3154: jbe loc_65D315B;");
    asm("loc_65D3156: call _sub_65D6CC3;");
    asm("loc_65D315B: mov 4(%ebp),%eax;");
    asm("loc_65D315E: test %eax,%eax;");
    asm("loc_65D3160: je loc_65D3181;");
    asm("loc_65D3162: mov -1(%eax),%cl;");
    asm("loc_65D3165: test %cl,%cl;");
    asm("loc_65D3167: je loc_65D3181;");
    asm("loc_65D3169: cmp $0xFF,%cl;");
    asm("loc_65D316C: je loc_65D3181;");
    asm("loc_65D316E: test %edi,%edi;");
    asm("loc_65D3170: jne loc_65D31A5;");
    asm("loc_65D3172: dec %cl;");
    asm("loc_65D3174: push %edi;");
    asm("loc_65D3175: mov %cl,-1(%eax);");
    asm("loc_65D3178: mov %ebp,%ecx;");
    asm("loc_65D317A: call _sub_65D3B40;");
    asm("loc_65D317F: jmp loc_65D31CE;");
    asm("loc_65D3181: test %edi,%edi;");
    asm("loc_65D3183: jne loc_65D3190;");
    asm("loc_65D3185: push $1;");
    asm("loc_65D3187: mov %ebp,%ecx;");
    asm("loc_65D3189: call _sub_65D3B40;");
    asm("loc_65D318E: jmp loc_65D31CE;");
    asm("loc_65D3190: mov 0xC(%ebp),%eax;");
    asm("loc_65D3193: cmp $0x1F,%eax;");
    asm("loc_65D3196: ja loc_65D319C;");
    asm("loc_65D3198: cmp %edi,%eax;");
    asm("loc_65D319A: jae loc_65D31AD;");
    asm("loc_65D319C: push $1;");
    asm("loc_65D319E: mov %ebp,%ecx;");
    asm("loc_65D31A0: call _sub_65D3B40;");
    asm("loc_65D31A5: mov %ebp,%ecx;");
    asm("loc_65D31A7: push %edi;");
    asm("loc_65D31A8: call _sub_65D4350;");
    asm("loc_65D31AD: mov %edi,%ecx;");
    asm("loc_65D31AF: mov 4(%ebp),%edi;");
    asm("loc_65D31B2: mov %ecx,%eax;");
    asm("loc_65D31B4: shr $2,%ecx;");
    asm("loc_65D31B7: rep movsl (%esi),(%edi);");
    asm("loc_65D31B9: mov %eax,%ecx;");
    asm("loc_65D31BB: mov 0x14(%esp),%eax;");
    asm("loc_65D31BF: and $3,%ecx;");
    asm("loc_65D31C2: rep movsb (%esi),(%edi);");
    asm("loc_65D31C4: mov 4(%ebp),%ecx;");
    asm("loc_65D31C7: mov %eax,8(%ebp);");
    asm("loc_65D31CA: movb $0,(%eax,%ecx);");
    asm("loc_65D31CE: mov $_data_65E31D8,%edi;");
    asm("loc_65D31D3: or $0xFFFFFFFF,%ecx;");
    asm("loc_65D31D6: xor %eax,%eax;");
    asm("loc_65D31D8: lea 0x34(%ebx),%esi;");
    asm("loc_65D31DB: repne scas (%edi),%al;");
    asm("loc_65D31DD: not %ecx;");
    asm("loc_65D31DF: dec %ecx;");
    asm("loc_65D31E0: push %ecx;");
    asm("loc_65D31E1: push $_data_65E31D8;");
    asm("loc_65D31E6: mov %esi,%ecx;");
    asm("loc_65D31E8: call _sub_65D3D50;");
    asm("loc_65D31ED: push $0xFFFFFFFF;");
    asm("loc_65D31EF: push $0;");
    asm("loc_65D31F1: push %ebp;");
    asm("loc_65D31F2: mov %esi,%ecx;");
    asm("loc_65D31F4: call _sub_65D39A0;");
    asm("loc_65D31F9: mov $_data_65E31D4,%edi;");
    asm("loc_65D31FE: or $0xFFFFFFFF,%ecx;");
    asm("loc_65D3201: xor %eax,%eax;");
    asm("loc_65D3203: repne scas (%edi),%al;");
    asm("loc_65D3205: not %ecx;");
    asm("loc_65D3207: dec %ecx;");
    asm("loc_65D3208: push %ecx;");
    asm("loc_65D3209: push $_data_65E31D4;");
    asm("loc_65D320E: mov %esi,%ecx;");
    asm("loc_65D3210: call _sub_65D3A80;");
    asm("loc_65D3215: lea 0x14(%esp),%edx;");
    asm("loc_65D3219: lea 4(%ebx),%ecx;");
    asm("loc_65D321C: push %edx;");
    asm("loc_65D321D: call _sub_65D3CF0;");
    asm("loc_65D3222: mov 8(%ebx),%ecx;");
    asm("loc_65D3225: mov 0x14(%esp),%eax;");
    asm("loc_65D3229: cmp %ecx,%eax;");
    asm("loc_65D322B: je loc_65D329B;");
    asm("loc_65D322D: push $0xFFFFFFFF;");
    asm("loc_65D322F: add $0xC,%eax;");
    asm("loc_65D3232: push $0;");
    asm("loc_65D3234: push %eax;");
    asm("loc_65D3235: mov %esi,%ecx;");
    asm("loc_65D3237: call _sub_65D39A0;");
    asm("loc_65D323C: mov $_data_65E31D0,%edi;");
    asm("loc_65D3241: or $0xFFFFFFFF,%ecx;");
    asm("loc_65D3244: xor %eax,%eax;");
    asm("loc_65D3246: repne scas (%edi),%al;");
    asm("loc_65D3248: not %ecx;");
    asm("loc_65D324A: dec %ecx;");
    asm("loc_65D324B: push %ecx;");
    asm("loc_65D324C: push $_data_65E31D0;");
    asm("loc_65D3251: mov %esi,%ecx;");
    asm("loc_65D3253: call _sub_65D3A80;");
    asm("loc_65D3258: push $0xFFFFFFFF;");
    asm("loc_65D325A: push $0;");
    asm("loc_65D325C: mov 0x1C(%esp),%eax;");
    asm("loc_65D3260: mov %esi,%ecx;");
    asm("loc_65D3262: add $0x1C,%eax;");
    asm("loc_65D3265: push %eax;");
    asm("loc_65D3266: call _sub_65D39A0;");
    asm("loc_65D326B: mov $_data_65E31CC,%edi;");
    asm("loc_65D3270: or $0xFFFFFFFF,%ecx;");
    asm("loc_65D3273: xor %eax,%eax;");
    asm("loc_65D3275: repne scas (%edi),%al;");
    asm("loc_65D3277: not %ecx;");
    asm("loc_65D3279: dec %ecx;");
    asm("loc_65D327A: push %ecx;");
    asm("loc_65D327B: push $_data_65E31CC;");
    asm("loc_65D3280: mov %esi,%ecx;");
    asm("loc_65D3282: call _sub_65D3A80;");
    asm("loc_65D3287: lea 0x14(%esp),%ecx;");
    asm("loc_65D328B: call _sub_65D3D00;");
    asm("loc_65D3290: mov 0x14(%esp),%eax;");
    asm("loc_65D3294: mov 8(%ebx),%ecx;");
    asm("loc_65D3297: cmp %ecx,%eax;");
    asm("loc_65D3299: jne loc_65D322D;");
    asm("loc_65D329B: mov $_data_65E31C8,%edi;");
    asm("loc_65D32A0: or $0xFFFFFFFF,%ecx;");
    asm("loc_65D32A3: xor %eax,%eax;");
    asm("loc_65D32A5: repne scas (%edi),%al;");
    asm("loc_65D32A7: not %ecx;");
    asm("loc_65D32A9: dec %ecx;");
    asm("loc_65D32AA: push %ecx;");
    asm("loc_65D32AB: push $_data_65E31C8;");
    asm("loc_65D32B0: mov %esi,%ecx;");
    asm("loc_65D32B2: call _sub_65D3A80;");
    asm("loc_65D32B7: mov $_data_65E31C4,%edi;");
    asm("loc_65D32BC: or $0xFFFFFFFF,%ecx;");
    asm("loc_65D32BF: xor %eax,%eax;");
    asm("loc_65D32C1: add $0x44,%ebx;");
    asm("loc_65D32C4: repne scas (%edi),%al;");
    asm("loc_65D32C6: not %ecx;");
    asm("loc_65D32C8: dec %ecx;");
    asm("loc_65D32C9: push $1;");
    asm("loc_65D32CB: mov %ecx,%esi;");
    asm("loc_65D32CD: mov %ebx,%ecx;");
    asm("loc_65D32CF: push %esi;");
    asm("loc_65D32D0: mov %esi,0x20(%esp);");
    asm("loc_65D32D4: call _sub_65D3E10;");
    asm("loc_65D32D9: test %al,%al;");
    asm("loc_65D32DB: je loc_65D32FF;");
    asm("loc_65D32DD: mov 4(%ebx),%edi;");
    asm("loc_65D32E0: mov %esi,%ecx;");
    asm("loc_65D32E2: mov %ecx,%edx;");
    asm("loc_65D32E4: mov $_data_65E31C4,%esi;");
    asm("loc_65D32E9: shr $2,%ecx;");
    asm("loc_65D32EC: rep movsl (%esi),(%edi);");
    asm("loc_65D32EE: mov %edx,%ecx;");
    asm("loc_65D32F0: mov %edx,%eax;");
    asm("loc_65D32F2: and $3,%ecx;");
    asm("loc_65D32F5: push %eax;");
    asm("loc_65D32F6: rep movsb (%esi),(%edi);");
    asm("loc_65D32F8: mov %ebx,%ecx;");
    asm("loc_65D32FA: call _sub_65D3DF0;");
    asm("loc_65D32FF: push $0xFFFFFFFF;");
    asm("loc_65D3301: push $0;");
    asm("loc_65D3303: push %ebp;");
    asm("loc_65D3304: mov %ebx,%ecx;");
    asm("loc_65D3306: call _sub_65D39A0;");
    asm("loc_65D330B: mov $_data_65E31C8,%edi;");
    asm("loc_65D3310: or $0xFFFFFFFF,%ecx;");
    asm("loc_65D3313: xor %eax,%eax;");
    asm("loc_65D3315: mov 8(%ebx),%edx;");
    asm("loc_65D3318: repne scas (%edi),%al;");
    asm("loc_65D331A: not %ecx;");
    asm("loc_65D331C: dec %ecx;");
    asm("loc_65D331D: mov %ecx,%esi;");
    asm("loc_65D331F: or $0xFFFFFFFF,%ecx;");
    asm("loc_65D3322: sub %edx,%ecx;");
    asm("loc_65D3324: cmp %esi,%ecx;");
    asm("loc_65D3326: ja loc_65D332D;");
    asm("loc_65D3328: call _sub_65D6CC3;");
    asm("loc_65D332D: test %esi,%esi;");
    asm("loc_65D332F: jbe loc_65D336B;");
    asm("loc_65D3331: mov 8(%ebx),%ebp;");
    asm("loc_65D3334: push $0;");
    asm("loc_65D3336: add %esi,%ebp;");
    asm("loc_65D3338: mov %ebx,%ecx;");
    asm("loc_65D333A: push %ebp;");
    asm("loc_65D333B: call _sub_65D3E10;");
    asm("loc_65D3340: test %al,%al;");
    asm("loc_65D3342: je loc_65D336B;");
    asm("loc_65D3344: mov 8(%ebx),%edi;");
    asm("loc_65D3347: mov 4(%ebx),%edx;");
    asm("loc_65D334A: mov %esi,%ecx;");
    asm("loc_65D334C: add %edx,%edi;");
    asm("loc_65D334E: mov %ecx,%edx;");
    asm("loc_65D3350: mov $_data_65E31C8,%esi;");
    asm("loc_65D3355: shr $2,%ecx;");
    asm("loc_65D3358: rep movsl (%esi),(%edi);");
    asm("loc_65D335A: mov %edx,%ecx;");
    asm("loc_65D335C: and $3,%ecx;");
    asm("loc_65D335F: rep movsb (%esi),(%edi);");
    asm("loc_65D3361: mov 4(%ebx),%eax;");
    asm("loc_65D3364: mov %ebp,8(%ebx);");
    asm("loc_65D3367: movb $0,(%eax,%ebp);");
    asm("loc_65D336B: pop %edi;");
    asm("loc_65D336C: pop %esi;");
    asm("loc_65D336D: pop %ebp;");
    asm("loc_65D336E: xor %eax,%eax;");
    asm("loc_65D3370: pop %ebx;");
    asm("loc_65D3371: ret $8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D3380() // _sub_65D3380
{
    __DEBUG_ASM(65D3380);
    // chunk 0x65D3380 _sub_65D3380
    asm("loc_65D3380: mov %fs:0,%eax;");
    asm("loc_65D3386: push $0xFFFFFFFF;");
    asm("loc_65D3388: push $_sub_65DFFF0;");
    asm("loc_65D338D: push %eax;");
    asm("loc_65D338E: mov %esp,%fs:0;");
    asm("loc_65D3395: sub $0x48,%esp;");
    asm("loc_65D3398: push %ebx;");
    asm("loc_65D3399: push %esi;");
    asm("loc_65D339A: mov 0x68(%esp),%esi;");
    asm("loc_65D339E: xor %ebx,%ebx;");
    asm("loc_65D33A0: cmp %ebx,%esi;");
    asm("loc_65D33A2: jne loc_65D33BC;");
    asm("loc_65D33A4: pop %esi;");
    asm("loc_65D33A5: mov $0xFFFFFFF9,%eax;");
    asm("loc_65D33AA: pop %ebx;");
    asm("loc_65D33AB: mov 0x48(%esp),%ecx;");
    asm("loc_65D33AF: mov %ecx,%fs:0;");
    asm("loc_65D33B6: add $0x54,%esp;");
    asm("loc_65D33B9: ret $0xC;");
    asm("loc_65D33BC: mov 0x68(%esp),%al;");
    asm("loc_65D33C0: mov 0x64(%esp),%edx;");
    asm("loc_65D33C4: push %ebp;");
    asm("loc_65D33C5: push %edi;");
    asm("loc_65D33C6: mov %al,0x18(%esp);");
    asm("loc_65D33CA: mov %edx,%edi;");
    asm("loc_65D33CC: or $0xFFFFFFFF,%ecx;");
    asm("loc_65D33CF: xor %eax,%eax;");
    asm("loc_65D33D1: repne scas (%edi),%al;");
    asm("loc_65D33D3: not %ecx;");
    asm("loc_65D33D5: dec %ecx;");
    asm("loc_65D33D6: mov %ebx,0x1C(%esp);");
    asm("loc_65D33DA: push %ecx;");
    asm("loc_65D33DB: push %edx;");
    asm("loc_65D33DC: lea 0x20(%esp),%ecx;");
    asm("loc_65D33E0: mov %ebx,0x28(%esp);");
    asm("loc_65D33E4: mov %ebx,0x2C(%esp);");
    asm("loc_65D33E8: call _sub_65D3D50;");
    asm("loc_65D33ED: mov 0x70(%esp),%cl;");
    asm("loc_65D33F1: push %ebx;");
    asm("loc_65D33F2: mov %cl,0x2C(%esp);");
    asm("loc_65D33F6: lea 0x2C(%esp),%ecx;");
    asm("loc_65D33FA: mov %ebx,0x64(%esp);");
    asm("loc_65D33FE: call _sub_65D3B40;");
    asm("loc_65D3403: lea 0x18(%esp),%edx;");
    asm("loc_65D3407: lea 0x38(%esp),%ecx;");
    asm("loc_65D340B: push %edx;");
    asm("loc_65D340C: movb $1,0x64(%esp);");
    asm("loc_65D3411: call _sub_65D37D0;");
    asm("loc_65D3416: lea 0x28(%esp),%eax;");
    asm("loc_65D341A: lea 0x48(%esp),%ecx;");
    asm("loc_65D341E: push %eax;");
    asm("loc_65D341F: movb $2,0x64(%esp);");
    asm("loc_65D3424: call _sub_65D37D0;");
    asm("loc_65D3429: mov 0x68(%esp),%ebp;");
    asm("loc_65D342D: lea 0x38(%esp),%edx;");
    asm("loc_65D3431: lea 0x10(%esp),%eax;");
    asm("loc_65D3435: push %edx;");
    asm("loc_65D3436: lea 4(%ebp),%ecx;");
    asm("loc_65D3439: push %eax;");
    asm("loc_65D343A: movb $3,0x68(%esp);");
    asm("loc_65D343F: call _sub_65D3B90;");
    asm("loc_65D3444: mov (%eax),%ebx;");
    asm("loc_65D3446: lea 0x38(%esp),%ecx;");
    asm("loc_65D344A: movb $1,0x60(%esp);");
    asm("loc_65D344F: call _sub_65D3930;");
    asm("loc_65D3454: push $1;");
    asm("loc_65D3456: lea 0x2C(%esp),%ecx;");
    asm("loc_65D345A: movb $0,0x64(%esp);");
    asm("loc_65D345F: call _sub_65D3B40;");
    asm("loc_65D3464: mov %esi,%edi;");
    asm("loc_65D3466: or $0xFFFFFFFF,%ecx;");
    asm("loc_65D3469: xor %eax,%eax;");
    asm("loc_65D346B: add $0x1C,%ebx;");
    asm("loc_65D346E: repne scas (%edi),%al;");
    asm("loc_65D3470: not %ecx;");
    asm("loc_65D3472: dec %ecx;");
    asm("loc_65D3473: push $1;");
    asm("loc_65D3475: mov %ecx,%edi;");
    asm("loc_65D3477: mov %ebx,%ecx;");
    asm("loc_65D3479: push %edi;");
    asm("loc_65D347A: mov %edi,0x74(%esp);");
    asm("loc_65D347E: call _sub_65D3E10;");
    asm("loc_65D3483: test %al,%al;");
    asm("loc_65D3485: je loc_65D34AD;");
    asm("loc_65D3487: mov 4(%ebx),%eax;");
    asm("loc_65D348A: mov 0x70(%esp),%esi;");
    asm("loc_65D348E: mov %edi,%ecx;");
    asm("loc_65D3490: mov %eax,%edi;");
    asm("loc_65D3492: mov %ecx,%edx;");
    asm("loc_65D3494: shr $2,%ecx;");
    asm("loc_65D3497: rep movsl (%esi),(%edi);");
    asm("loc_65D3499: mov %edx,%ecx;");
    asm("loc_65D349B: mov %edx,%eax;");
    asm("loc_65D349D: and $3,%ecx;");
    asm("loc_65D34A0: rep movsb (%esi),(%edi);");
    asm("loc_65D34A2: mov %eax,8(%ebx);");
    asm("loc_65D34A5: mov 4(%ebx),%ebx;");
    asm("loc_65D34A8: add %eax,%ebx;");
    asm("loc_65D34AA: movb $0,(%ebx);");
    asm("loc_65D34AD: mov 0x1C(%esp),%eax;");
    asm("loc_65D34B1: movl $0xFFFFFFFF,0x60(%esp);");
    asm("loc_65D34B9: test %eax,%eax;");
    asm("loc_65D34BB: je loc_65D34D9;");
    asm("loc_65D34BD: mov -1(%eax),%cl;");
    asm("loc_65D34C0: dec %eax;");
    asm("loc_65D34C1: test %cl,%cl;");
    asm("loc_65D34C3: je loc_65D34D0;");
    asm("loc_65D34C5: cmp $0xFF,%cl;");
    asm("loc_65D34C8: je loc_65D34D0;");
    asm("loc_65D34CA: dec %cl;");
    asm("loc_65D34CC: mov %cl,(%eax);");
    asm("loc_65D34CE: jmp loc_65D34D9;");
    asm("loc_65D34D0: push %eax;");
    asm("loc_65D34D1: call _sub_65D6CB8;");
    asm("loc_65D34D6: add $4,%esp;");
    asm("loc_65D34D9: mov $_data_65E31D8,%edi;");
    asm("loc_65D34DE: or $0xFFFFFFFF,%ecx;");
    asm("loc_65D34E1: xor %eax,%eax;");
    asm("loc_65D34E3: lea 0x34(%ebp),%esi;");
    asm("loc_65D34E6: repne scas (%edi),%al;");
    asm("loc_65D34E8: not %ecx;");
    asm("loc_65D34EA: dec %ecx;");
    asm("loc_65D34EB: push %ecx;");
    asm("loc_65D34EC: push $_data_65E31D8;");
    asm("loc_65D34F1: mov %esi,%ecx;");
    asm("loc_65D34F3: call _sub_65D3D50;");
    asm("loc_65D34F8: lea 0x24(%ebp),%ebx;");
    asm("loc_65D34FB: push $0xFFFFFFFF;");
    asm("loc_65D34FD: push $0;");
    asm("loc_65D34FF: push %ebx;");
    asm("loc_65D3500: mov %esi,%ecx;");
    asm("loc_65D3502: call _sub_65D39A0;");
    asm("loc_65D3507: mov $_data_65E31D4,%edi;");
    asm("loc_65D350C: or $0xFFFFFFFF,%ecx;");
    asm("loc_65D350F: xor %eax,%eax;");
    asm("loc_65D3511: repne scas (%edi),%al;");
    asm("loc_65D3513: not %ecx;");
    asm("loc_65D3515: dec %ecx;");
    asm("loc_65D3516: push %ecx;");
    asm("loc_65D3517: push $_data_65E31D4;");
    asm("loc_65D351C: mov %esi,%ecx;");
    asm("loc_65D351E: call _sub_65D3A80;");
    asm("loc_65D3523: lea 0x70(%esp),%eax;");
    asm("loc_65D3527: lea 4(%ebp),%ecx;");
    asm("loc_65D352A: push %eax;");
    asm("loc_65D352B: call _sub_65D3CF0;");
    asm("loc_65D3530: mov 8(%ebp),%ecx;");
    asm("loc_65D3533: mov 0x70(%esp),%eax;");
    asm("loc_65D3537: cmp %ecx,%eax;");
    asm("loc_65D3539: je loc_65D35A9;");
    asm("loc_65D353B: push $0xFFFFFFFF;");
    asm("loc_65D353D: add $0xC,%eax;");
    asm("loc_65D3540: push $0;");
    asm("loc_65D3542: push %eax;");
    asm("loc_65D3543: mov %esi,%ecx;");
    asm("loc_65D3545: call _sub_65D39A0;");
    asm("loc_65D354A: mov $_data_65E31D0,%edi;");
    asm("loc_65D354F: or $0xFFFFFFFF,%ecx;");
    asm("loc_65D3552: xor %eax,%eax;");
    asm("loc_65D3554: repne scas (%edi),%al;");
    asm("loc_65D3556: not %ecx;");
    asm("loc_65D3558: dec %ecx;");
    asm("loc_65D3559: push %ecx;");
    asm("loc_65D355A: push $_data_65E31D0;");
    asm("loc_65D355F: mov %esi,%ecx;");
    asm("loc_65D3561: call _sub_65D3A80;");
    asm("loc_65D3566: push $0xFFFFFFFF;");
    asm("loc_65D3568: push $0;");
    asm("loc_65D356A: mov 0x78(%esp),%ecx;");
    asm("loc_65D356E: add $0x1C,%ecx;");
    asm("loc_65D3571: push %ecx;");
    asm("loc_65D3572: mov %esi,%ecx;");
    asm("loc_65D3574: call _sub_65D39A0;");
    asm("loc_65D3579: mov $_data_65E31CC,%edi;");
    asm("loc_65D357E: or $0xFFFFFFFF,%ecx;");
    asm("loc_65D3581: xor %eax,%eax;");
    asm("loc_65D3583: repne scas (%edi),%al;");
    asm("loc_65D3585: not %ecx;");
    asm("loc_65D3587: dec %ecx;");
    asm("loc_65D3588: push %ecx;");
    asm("loc_65D3589: push $_data_65E31CC;");
    asm("loc_65D358E: mov %esi,%ecx;");
    asm("loc_65D3590: call _sub_65D3A80;");
    asm("loc_65D3595: lea 0x70(%esp),%ecx;");
    asm("loc_65D3599: call _sub_65D3D00;");
    asm("loc_65D359E: mov 0x70(%esp),%eax;");
    asm("loc_65D35A2: mov 8(%ebp),%ecx;");
    asm("loc_65D35A5: cmp %ecx,%eax;");
    asm("loc_65D35A7: jne loc_65D353B;");
    asm("loc_65D35A9: mov $_data_65E31C8,%edi;");
    asm("loc_65D35AE: or $0xFFFFFFFF,%ecx;");
    asm("loc_65D35B1: xor %eax,%eax;");
    asm("loc_65D35B3: repne scas (%edi),%al;");
    asm("loc_65D35B5: not %ecx;");
    asm("loc_65D35B7: dec %ecx;");
    asm("loc_65D35B8: push %ecx;");
    asm("loc_65D35B9: push $_data_65E31C8;");
    asm("loc_65D35BE: mov %esi,%ecx;");
    asm("loc_65D35C0: call _sub_65D3A80;");
    asm("loc_65D35C5: mov $_data_65E31C4,%edi;");
    asm("loc_65D35CA: or $0xFFFFFFFF,%ecx;");
    asm("loc_65D35CD: xor %eax,%eax;");
    asm("loc_65D35CF: add $0x44,%ebp;");
    asm("loc_65D35D2: repne scas (%edi),%al;");
    asm("loc_65D35D4: not %ecx;");
    asm("loc_65D35D6: dec %ecx;");
    asm("loc_65D35D7: push %ecx;");
    asm("loc_65D35D8: push $_data_65E31C4;");
    asm("loc_65D35DD: mov %ebp,%ecx;");
    asm("loc_65D35DF: call _sub_65D3D50;");
    asm("loc_65D35E4: push $0xFFFFFFFF;");
    asm("loc_65D35E6: push $0;");
    asm("loc_65D35E8: push %ebx;");
    asm("loc_65D35E9: mov %ebp,%ecx;");
    asm("loc_65D35EB: call _sub_65D39A0;");
    asm("loc_65D35F0: mov $_data_65E31C8,%edi;");
    asm("loc_65D35F5: or $0xFFFFFFFF,%ecx;");
    asm("loc_65D35F8: xor %eax,%eax;");
    asm("loc_65D35FA: repne scas (%edi),%al;");
    asm("loc_65D35FC: not %ecx;");
    asm("loc_65D35FE: dec %ecx;");
    asm("loc_65D35FF: push %ecx;");
    asm("loc_65D3600: push $_data_65E31C8;");
    asm("loc_65D3605: mov %ebp,%ecx;");
    asm("loc_65D3607: call _sub_65D3A80;");
    asm("loc_65D360C: pop %edi;");
    asm("loc_65D360D: pop %ebp;");
    asm("loc_65D360E: mov 0x50(%esp),%ecx;");
    asm("loc_65D3612: pop %esi;");
    asm("loc_65D3613: xor %eax,%eax;");
    asm("loc_65D3615: pop %ebx;");
    asm("loc_65D3616: mov %ecx,%fs:0;");
    asm("loc_65D361D: add $0x54,%esp;");
    asm("loc_65D3620: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D3630() // _sub_65D3630
{
    __DEBUG_ASM(65D3630);
    // chunk 0x65D3630 _sub_65D3630
    asm("loc_65D3630: push %ebx;");
    asm("loc_65D3631: push %esi;");
    asm("loc_65D3632: push %edi;");
    asm("loc_65D3633: mov 0x10(%esp),%edi;");
    asm("loc_65D3637: mov 0x38(%edi),%eax;");
    asm("loc_65D363A: mov 0x3C(%edi),%esi;");
    asm("loc_65D363D: test %eax,%eax;");
    asm("loc_65D363F: jne loc_65D3646;");
    asm("loc_65D3641: mov $_data_65E13A4,%eax;");
    asm("loc_65D3646: mov 0x14(%esp),%ebx;");
    asm("loc_65D364A: push %esi;");
    asm("loc_65D364B: push %eax;");
    asm("loc_65D364C: push %ebx;");
    asm("loc_65D364D: mov (%ebx),%ecx;");
    asm("loc_65D364F: calll *0x14(%ecx);");
    asm("loc_65D3652: cmp %esi,%eax;");
    asm("loc_65D3654: je loc_65D365F;");
    asm("loc_65D3656: pop %edi;");
    asm("loc_65D3657: pop %esi;");
    asm("loc_65D3658: or $0xFFFFFFFF,%eax;");
    asm("loc_65D365B: pop %ebx;");
    asm("loc_65D365C: ret $8;");
    asm("loc_65D365F: mov 0x1C(%edi),%eax;");
    asm("loc_65D3662: mov (%eax),%esi;");
    asm("loc_65D3664: cmp %eax,%esi;");
    asm("loc_65D3666: je loc_65D367F;");
    asm("loc_65D3668: mov 8(%esi),%eax;");
    asm("loc_65D366B: push %ebx;");
    asm("loc_65D366C: push %eax;");
    asm("loc_65D366D: mov (%eax),%edx;");
    asm("loc_65D366F: calll *0xC(%edx);");
    asm("loc_65D3672: test %eax,%eax;");
    asm("loc_65D3674: jne loc_65D36A0;");
    asm("loc_65D3676: mov (%esi),%esi;");
    asm("loc_65D3678: mov 0x1C(%edi),%eax;");
    asm("loc_65D367B: cmp %eax,%esi;");
    asm("loc_65D367D: jne loc_65D3668;");
    asm("loc_65D367F: mov 0x4C(%edi),%esi;");
    asm("loc_65D3682: mov 0x48(%edi),%edi;");
    asm("loc_65D3685: test %edi,%edi;");
    asm("loc_65D3687: jne loc_65D368E;");
    asm("loc_65D3689: mov $_data_65E13A4,%edi;");
    asm("loc_65D368E: mov (%ebx),%eax;");
    asm("loc_65D3690: push %esi;");
    asm("loc_65D3691: push %edi;");
    asm("loc_65D3692: push %ebx;");
    asm("loc_65D3693: calll *0x14(%eax);");
    asm("loc_65D3696: mov %eax,%ecx;");
    asm("loc_65D3698: mov %esi,%eax;");
    asm("loc_65D369A: sub %ecx,%eax;");
    asm("loc_65D369C: neg %eax;");
    asm("loc_65D369E: sbb %eax,%eax;");
    asm("loc_65D36A0: pop %edi;");
    asm("loc_65D36A1: pop %esi;");
    asm("loc_65D36A2: pop %ebx;");
    asm("loc_65D36A3: ret $8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D36B0() // _sub_65D36B0
{
    __DEBUG_ASM(65D36B0);
    // chunk 0x65D36B0 _sub_65D36B0
    asm("loc_65D36B0: push %ebx;");
    asm("loc_65D36B1: mov 8(%esp),%ebx;");
    asm("loc_65D36B5: push %esi;");
    asm("loc_65D36B6: push %edi;");
    asm("loc_65D36B7: mov 0x1C(%ebx),%eax;");
    asm("loc_65D36BA: mov 0x4C(%ebx),%edi;");
    asm("loc_65D36BD: mov 0x3C(%ebx),%edx;");
    asm("loc_65D36C0: mov (%eax),%esi;");
    asm("loc_65D36C2: add %edx,%edi;");
    asm("loc_65D36C4: cmp %eax,%esi;");
    asm("loc_65D36C6: je loc_65D36E9;");
    asm("loc_65D36C8: mov 8(%esi),%eax;");
    asm("loc_65D36CB: lea 0x10(%esp),%edx;");
    asm("loc_65D36CF: push %edx;");
    asm("loc_65D36D0: push %eax;");
    asm("loc_65D36D1: mov (%eax),%ecx;");
    asm("loc_65D36D3: calll *0x10(%ecx);");
    asm("loc_65D36D6: test %eax,%eax;");
    asm("loc_65D36D8: jne loc_65D36F1;");
    asm("loc_65D36DA: mov 0x10(%esp),%ecx;");
    asm("loc_65D36DE: mov (%esi),%esi;");
    asm("loc_65D36E0: mov 0x1C(%ebx),%eax;");
    asm("loc_65D36E3: add %ecx,%edi;");
    asm("loc_65D36E5: cmp %eax,%esi;");
    asm("loc_65D36E7: jne loc_65D36C8;");
    asm("loc_65D36E9: mov 0x14(%esp),%eax;");
    asm("loc_65D36ED: mov %edi,(%eax);");
    asm("loc_65D36EF: xor %eax,%eax;");
    asm("loc_65D36F1: pop %edi;");
    asm("loc_65D36F2: pop %esi;");
    asm("loc_65D36F3: pop %ebx;");
    asm("loc_65D36F4: ret $8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D3700() // _sub_65D3700
{
    __DEBUG_ASM(65D3700);
    // chunk 0x65D3700 _sub_65D3700
    asm("loc_65D3700: sub $0xC,%esp;");
    asm("loc_65D3703: push %ebx;");
    asm("loc_65D3704: push %ebp;");
    asm("loc_65D3705: push %esi;");
    asm("loc_65D3706: mov %ecx,%esi;");
    asm("loc_65D3708: push %edi;");
    asm("loc_65D3709: xor %ebp,%ebp;");
    asm("loc_65D370B: mov 4(%esi),%edi;");
    asm("loc_65D370E: mov 0x10(%esi),%ecx;");
    asm("loc_65D3711: cmp %ebp,%ecx;");
    asm("loc_65D3713: mov (%edi),%eax;");
    asm("loc_65D3715: mov %eax,0x10(%esp);");
    asm("loc_65D3719: je loc_65D377A;");
    asm("loc_65D371B: mov %eax,%ecx;");
    asm("loc_65D371D: cmp %ecx,%eax;");
    asm("loc_65D371F: jne loc_65D377A;");
    asm("loc_65D3721: mov 4(%edi),%ebx;");
    asm("loc_65D3724: mov 8(%esi),%eax;");
    asm("loc_65D3727: cmp %eax,%ebx;");
    asm("loc_65D3729: mov %ebx,%edi;");
    asm("loc_65D372B: je loc_65D3755;");
    asm("loc_65D372D: mov 8(%edi),%eax;");
    asm("loc_65D3730: mov %esi,%ecx;");
    asm("loc_65D3732: push %eax;");
    asm("loc_65D3733: call _sub_65D4310;");
    asm("loc_65D3738: mov (%edi),%edi;");
    asm("loc_65D373A: push %ebp;");
    asm("loc_65D373B: lea 0xC(%ebx),%ecx;");
    asm("loc_65D373E: call _sub_65D5000;");
    asm("loc_65D3743: push %ebx;");
    asm("loc_65D3744: call _sub_65D6CB8;");
    asm("loc_65D3749: mov 8(%esi),%eax;");
    asm("loc_65D374C: add $4,%esp;");
    asm("loc_65D374F: cmp %eax,%edi;");
    asm("loc_65D3751: mov %edi,%ebx;");
    asm("loc_65D3753: jne loc_65D372D;");
    asm("loc_65D3755: mov 4(%esi),%ecx;");
    asm("loc_65D3758: mov 8(%esi),%edx;");
    asm("loc_65D375B: mov %edx,4(%ecx);");
    asm("loc_65D375E: mov 4(%esi),%eax;");
    asm("loc_65D3761: mov %ebp,0x10(%esi);");
    asm("loc_65D3764: mov %esi,%ecx;");
    asm("loc_65D3766: mov %eax,(%eax);");
    asm("loc_65D3768: mov 4(%esi),%eax;");
    asm("loc_65D376B: mov %eax,8(%eax);");
    asm("loc_65D376E: lea 0x14(%esp),%eax;");
    asm("loc_65D3772: push %eax;");
    asm("loc_65D3773: call _sub_65D3CF0;");
    asm("loc_65D3778: jmp loc_65D379E;");
    asm("loc_65D377A: cmp %edi,%eax;");
    asm("loc_65D377C: je loc_65D379E;");
    asm("loc_65D377E: lea 0x10(%esp),%ecx;");
    asm("loc_65D3782: mov %eax,%ebx;");
    asm("loc_65D3784: call _sub_65D3D00;");
    asm("loc_65D3789: lea 0x18(%esp),%ecx;");
    asm("loc_65D378D: push %ebx;");
    asm("loc_65D378E: push %ecx;");
    asm("loc_65D378F: mov %esi,%ecx;");
    asm("loc_65D3791: call _sub_65D3F30;");
    asm("loc_65D3796: mov 0x10(%esp),%eax;");
    asm("loc_65D379A: cmp %edi,%eax;");
    asm("loc_65D379C: jne loc_65D377E;");
    asm("loc_65D379E: mov 4(%esi),%edx;");
    asm("loc_65D37A1: push %edx;");
    asm("loc_65D37A2: call _sub_65D6CB8;");
    asm("loc_65D37A7: mov 8(%esi),%eax;");
    asm("loc_65D37AA: mov %ebp,4(%esi);");
    asm("loc_65D37AD: push %eax;");
    asm("loc_65D37AE: mov %ebp,0x10(%esi);");
    asm("loc_65D37B1: call _sub_65D6CB8;");
    asm("loc_65D37B6: add $8,%esp;");
    asm("loc_65D37B9: mov %ebp,8(%esi);");
    asm("loc_65D37BC: pop %edi;");
    asm("loc_65D37BD: pop %esi;");
    asm("loc_65D37BE: pop %ebp;");
    asm("loc_65D37BF: pop %ebx;");
    asm("loc_65D37C0: add $0xC,%esp;");
    asm("loc_65D37C3: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D37D0() // _sub_65D37D0
{
    __DEBUG_ASM(65D37D0);
    // chunk 0x65D37D0 _sub_65D37D0
    asm("loc_65D37D0: push %ebx;");
    asm("loc_65D37D1: push %ebp;");
    asm("loc_65D37D2: push %esi;");
    asm("loc_65D37D3: push %edi;");
    asm("loc_65D37D4: mov 0x14(%esp),%edi;");
    asm("loc_65D37D8: mov %ecx,%ebx;");
    asm("loc_65D37DA: xor %esi,%esi;");
    asm("loc_65D37DC: mov (%edi),%al;");
    asm("loc_65D37DE: mov %esi,4(%ebx);");
    asm("loc_65D37E1: mov %al,(%ebx);");
    asm("loc_65D37E3: mov %esi,8(%ebx);");
    asm("loc_65D37E6: mov %esi,0xC(%ebx);");
    asm("loc_65D37E9: mov 8(%edi),%eax;");
    asm("loc_65D37EC: mov %eax,%ebp;");
    asm("loc_65D37EE: cmp $0xFFFFFFFF,%ebp;");
    asm("loc_65D37F1: jbe loc_65D37F6;");
    asm("loc_65D37F3: or $0xFFFFFFFF,%ebp;");
    asm("loc_65D37F6: cmp %edi,%ebx;");
    asm("loc_65D37F8: jne loc_65D385D;");
    asm("loc_65D37FA: or $0xFFFFFFFF,%edi;");
    asm("loc_65D37FD: cmp %esi,%ebp;");
    asm("loc_65D37FF: jbe loc_65D3806;");
    asm("loc_65D3801: call _sub_65D6E7A;");
    asm("loc_65D3806: mov %ebx,%ecx;");
    asm("loc_65D3808: call _sub_65D4460;");
    asm("loc_65D380D: mov 8(%ebx),%eax;");
    asm("loc_65D3810: sub %ebp,%eax;");
    asm("loc_65D3812: cmp $0xFFFFFFFF,%eax;");
    asm("loc_65D3815: jae loc_65D381D;");
    asm("loc_65D3817: mov %eax,%edi;");
    asm("loc_65D3819: cmp %esi,%edi;");
    asm("loc_65D381B: jbe loc_65D384D;");
    asm("loc_65D381D: mov 4(%ebx),%ecx;");
    asm("loc_65D3820: sub %edi,%eax;");
    asm("loc_65D3822: add %ebp,%ecx;");
    asm("loc_65D3824: push %eax;");
    asm("loc_65D3825: lea (%ecx,%edi),%edx;");
    asm("loc_65D3828: push %edx;");
    asm("loc_65D3829: push %ecx;");
    asm("loc_65D382A: call loc_65D73A0;");
    asm("loc_65D382F: mov 8(%ebx),%esi;");
    asm("loc_65D3832: add $0xC,%esp;");
    asm("loc_65D3835: sub %edi,%esi;");
    asm("loc_65D3837: mov %ebx,%ecx;");
    asm("loc_65D3839: push $0;");
    asm("loc_65D383B: push %esi;");
    asm("loc_65D383C: call _sub_65D3E10;");
    asm("loc_65D3841: test %al,%al;");
    asm("loc_65D3843: je loc_65D384D;");
    asm("loc_65D3845: push %esi;");
    asm("loc_65D3846: mov %ebx,%ecx;");
    asm("loc_65D3848: call _sub_65D3DF0;");
    asm("loc_65D384D: mov %ebx,%ecx;");
    asm("loc_65D384F: call _sub_65D4460;");
    asm("loc_65D3854: pop %edi;");
    asm("loc_65D3855: pop %esi;");
    asm("loc_65D3856: mov %ebx,%eax;");
    asm("loc_65D3858: pop %ebp;");
    asm("loc_65D3859: pop %ebx;");
    asm("loc_65D385A: ret $4;");
    asm("loc_65D385D: cmp %esi,%ebp;");
    asm("loc_65D385F: jbe loc_65D38AC;");
    asm("loc_65D3861: cmp %eax,%ebp;");
    asm("loc_65D3863: jne loc_65D38AC;");
    asm("loc_65D3865: mov 4(%edi),%eax;");
    asm("loc_65D3868: cmp %esi,%eax;");
    asm("loc_65D386A: jne loc_65D3871;");
    asm("loc_65D386C: mov $_data_65E13A4,%eax;");
    asm("loc_65D3871: cmpb $0xFE,-1(%eax);");
    asm("loc_65D3875: jae loc_65D38AC;");
    asm("loc_65D3877: mov %esi,4(%ebx);");
    asm("loc_65D387A: mov %esi,8(%ebx);");
    asm("loc_65D387D: mov %esi,0xC(%ebx);");
    asm("loc_65D3880: mov 4(%edi),%eax;");
    asm("loc_65D3883: cmp %esi,%eax;");
    asm("loc_65D3885: jne loc_65D388C;");
    asm("loc_65D3887: mov $_data_65E13A4,%eax;");
    asm("loc_65D388C: mov %eax,4(%ebx);");
    asm("loc_65D388F: mov 8(%edi),%ecx;");
    asm("loc_65D3892: mov %ecx,8(%ebx);");
    asm("loc_65D3895: mov 0xC(%edi),%edx;");
    asm("loc_65D3898: mov %edx,0xC(%ebx);");
    asm("loc_65D389B: mov -1(%eax),%cl;");
    asm("loc_65D389E: inc %cl;");
    asm("loc_65D38A0: pop %edi;");
    asm("loc_65D38A1: mov %cl,-1(%eax);");
    asm("loc_65D38A4: pop %esi;");
    asm("loc_65D38A5: mov %ebx,%eax;");
    asm("loc_65D38A7: pop %ebp;");
    asm("loc_65D38A8: pop %ebx;");
    asm("loc_65D38A9: ret $4;");
    asm("loc_65D38AC: push $1;");
    asm("loc_65D38AE: push %ebp;");
    asm("loc_65D38AF: mov %ebx,%ecx;");
    asm("loc_65D38B1: call _sub_65D3E10;");
    asm("loc_65D38B6: test %al,%al;");
    asm("loc_65D38B8: je loc_65D38E3;");
    asm("loc_65D38BA: mov 4(%edi),%edi;");
    asm("loc_65D38BD: mov $_data_65E13A4,%esi;");
    asm("loc_65D38C2: test %edi,%edi;");
    asm("loc_65D38C4: je loc_65D38C8;");
    asm("loc_65D38C6: mov %edi,%esi;");
    asm("loc_65D38C8: mov 4(%ebx),%edi;");
    asm("loc_65D38CB: mov %ebp,%ecx;");
    asm("loc_65D38CD: mov %ecx,%eax;");
    asm("loc_65D38CF: push %ebp;");
    asm("loc_65D38D0: shr $2,%ecx;");
    asm("loc_65D38D3: rep movsl (%esi),(%edi);");
    asm("loc_65D38D5: mov %eax,%ecx;");
    asm("loc_65D38D7: and $3,%ecx;");
    asm("loc_65D38DA: rep movsb (%esi),(%edi);");
    asm("loc_65D38DC: mov %ebx,%ecx;");
    asm("loc_65D38DE: call _sub_65D3DF0;");
    asm("loc_65D38E3: pop %edi;");
    asm("loc_65D38E4: pop %esi;");
    asm("loc_65D38E5: mov %ebx,%eax;");
    asm("loc_65D38E7: pop %ebp;");
    asm("loc_65D38E8: pop %ebx;");
    asm("loc_65D38E9: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D38F0() // _sub_65D38F0
{
    __DEBUG_ASM(65D38F0);
    // chunk 0x65D38F0 _sub_65D38F0
    asm("loc_65D38F0: push %esi;");
    asm("loc_65D38F1: mov %ecx,%esi;");
    asm("loc_65D38F3: mov 4(%esi),%eax;");
    asm("loc_65D38F6: test %eax,%eax;");
    asm("loc_65D38F8: je loc_65D3916;");
    asm("loc_65D38FA: mov -1(%eax),%cl;");
    asm("loc_65D38FD: dec %eax;");
    asm("loc_65D38FE: test %cl,%cl;");
    asm("loc_65D3900: je loc_65D390D;");
    asm("loc_65D3902: cmp $0xFF,%cl;");
    asm("loc_65D3905: je loc_65D390D;");
    asm("loc_65D3907: dec %cl;");
    asm("loc_65D3909: mov %cl,(%eax);");
    asm("loc_65D390B: jmp loc_65D3916;");
    asm("loc_65D390D: push %eax;");
    asm("loc_65D390E: call _sub_65D6CB8;");
    asm("loc_65D3913: add $4,%esp;");
    asm("loc_65D3916: movl $0,4(%esi);");
    asm("loc_65D391D: movl $0,8(%esi);");
    asm("loc_65D3924: movl $0,0xC(%esi);");
    asm("loc_65D392B: pop %esi;");
    asm("loc_65D392C: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D3930() // _sub_65D3930
{
    __DEBUG_ASM(65D3930);
    // chunk 0x65D3930 _sub_65D3930
    asm("loc_65D3930: push %ebx;");
    asm("loc_65D3931: push %esi;");
    asm("loc_65D3932: mov %ecx,%esi;");
    asm("loc_65D3934: xor %ebx,%ebx;");
    asm("loc_65D3936: mov 0x14(%esi),%eax;");
    asm("loc_65D3939: cmp %ebx,%eax;");
    asm("loc_65D393B: je loc_65D3959;");
    asm("loc_65D393D: mov -1(%eax),%cl;");
    asm("loc_65D3940: dec %eax;");
    asm("loc_65D3941: cmp %bl,%cl;");
    asm("loc_65D3943: je loc_65D3950;");
    asm("loc_65D3945: cmp $0xFF,%cl;");
    asm("loc_65D3948: je loc_65D3950;");
    asm("loc_65D394A: dec %cl;");
    asm("loc_65D394C: mov %cl,(%eax);");
    asm("loc_65D394E: jmp loc_65D3959;");
    asm("loc_65D3950: push %eax;");
    asm("loc_65D3951: call _sub_65D6CB8;");
    asm("loc_65D3956: add $4,%esp;");
    asm("loc_65D3959: mov %ebx,0x14(%esi);");
    asm("loc_65D395C: mov %ebx,0x18(%esi);");
    asm("loc_65D395F: mov %ebx,0x1C(%esi);");
    asm("loc_65D3962: mov 4(%esi),%eax;");
    asm("loc_65D3965: cmp %ebx,%eax;");
    asm("loc_65D3967: je loc_65D398F;");
    asm("loc_65D3969: mov -1(%eax),%cl;");
    asm("loc_65D396C: dec %eax;");
    asm("loc_65D396D: cmp %bl,%cl;");
    asm("loc_65D396F: je loc_65D3986;");
    asm("loc_65D3971: cmp $0xFF,%cl;");
    asm("loc_65D3974: je loc_65D3986;");
    asm("loc_65D3976: dec %cl;");
    asm("loc_65D3978: mov %cl,(%eax);");
    asm("loc_65D397A: mov %ebx,4(%esi);");
    asm("loc_65D397D: mov %ebx,8(%esi);");
    asm("loc_65D3980: mov %ebx,0xC(%esi);");
    asm("loc_65D3983: pop %esi;");
    asm("loc_65D3984: pop %ebx;");
    asm("loc_65D3985: ret;");
    asm("loc_65D3986: push %eax;");
    asm("loc_65D3987: call _sub_65D6CB8;");
    asm("loc_65D398C: add $4,%esp;");
    asm("loc_65D398F: mov %ebx,4(%esi);");
    asm("loc_65D3992: mov %ebx,8(%esi);");
    asm("loc_65D3995: mov %ebx,0xC(%esi);");
    asm("loc_65D3998: pop %esi;");
    asm("loc_65D3999: pop %ebx;");
    asm("loc_65D399A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D39A0() // _sub_65D39A0
{
    __DEBUG_ASM(65D39A0);
    // chunk 0x65D39A0 _sub_65D39A0
    asm("loc_65D39A0: push %ebx;");
    asm("loc_65D39A1: push %ebp;");
    asm("loc_65D39A2: push %esi;");
    asm("loc_65D39A3: mov 0x14(%esp),%esi;");
    asm("loc_65D39A7: push %edi;");
    asm("loc_65D39A8: mov 0x14(%esp),%edi;");
    asm("loc_65D39AC: mov %ecx,%ebx;");
    asm("loc_65D39AE: cmp %esi,8(%edi);");
    asm("loc_65D39B1: jae loc_65D39B8;");
    asm("loc_65D39B3: call _sub_65D6E7A;");
    asm("loc_65D39B8: mov 8(%edi),%eax;");
    asm("loc_65D39BB: sub %esi,%eax;");
    asm("loc_65D39BD: mov 0x1C(%esp),%esi;");
    asm("loc_65D39C1: cmp %esi,%eax;");
    asm("loc_65D39C3: jae loc_65D39C7;");
    asm("loc_65D39C5: mov %eax,%esi;");
    asm("loc_65D39C7: mov 8(%ebx),%edx;");
    asm("loc_65D39CA: or $0xFFFFFFFF,%eax;");
    asm("loc_65D39CD: sub %edx,%eax;");
    asm("loc_65D39CF: cmp %esi,%eax;");
    asm("loc_65D39D1: ja loc_65D39D8;");
    asm("loc_65D39D3: call _sub_65D6CC3;");
    asm("loc_65D39D8: test %esi,%esi;");
    asm("loc_65D39DA: jbe loc_65D3A75;");
    asm("loc_65D39E0: mov 8(%ebx),%ebp;");
    asm("loc_65D39E3: add %esi,%ebp;");
    asm("loc_65D39E5: cmp $0xFFFFFFFD,%ebp;");
    asm("loc_65D39E8: jbe loc_65D39EF;");
    asm("loc_65D39EA: call _sub_65D6CC3;");
    asm("loc_65D39EF: mov 4(%ebx),%eax;");
    asm("loc_65D39F2: test %eax,%eax;");
    asm("loc_65D39F4: je loc_65D3A1C;");
    asm("loc_65D39F6: mov -1(%eax),%cl;");
    asm("loc_65D39F9: test %cl,%cl;");
    asm("loc_65D39FB: je loc_65D3A1C;");
    asm("loc_65D39FD: cmp $0xFF,%cl;");
    asm("loc_65D3A00: je loc_65D3A1C;");
    asm("loc_65D3A02: test %ebp,%ebp;");
    asm("loc_65D3A04: jne loc_65D3A38;");
    asm("loc_65D3A06: dec %cl;");
    asm("loc_65D3A08: push %ebp;");
    asm("loc_65D3A09: mov %cl,-1(%eax);");
    asm("loc_65D3A0C: mov %ebx,%ecx;");
    asm("loc_65D3A0E: call _sub_65D3B40;");
    asm("loc_65D3A13: pop %edi;");
    asm("loc_65D3A14: pop %esi;");
    asm("loc_65D3A15: mov %ebx,%eax;");
    asm("loc_65D3A17: pop %ebp;");
    asm("loc_65D3A18: pop %ebx;");
    asm("loc_65D3A19: ret $0xC;");
    asm("loc_65D3A1C: test %ebp,%ebp;");
    asm("loc_65D3A1E: jne loc_65D3A33;");
    asm("loc_65D3A20: test %eax,%eax;");
    asm("loc_65D3A22: je loc_65D3A75;");
    asm("loc_65D3A24: mov %ebp,8(%ebx);");
    asm("loc_65D3A27: pop %edi;");
    asm("loc_65D3A28: movb $0,(%eax);");
    asm("loc_65D3A2B: pop %esi;");
    asm("loc_65D3A2C: mov %ebx,%eax;");
    asm("loc_65D3A2E: pop %ebp;");
    asm("loc_65D3A2F: pop %ebx;");
    asm("loc_65D3A30: ret $0xC;");
    asm("loc_65D3A33: cmp %ebp,0xC(%ebx);");
    asm("loc_65D3A36: jae loc_65D3A40;");
    asm("loc_65D3A38: mov %ebx,%ecx;");
    asm("loc_65D3A3A: push %ebp;");
    asm("loc_65D3A3B: call _sub_65D4350;");
    asm("loc_65D3A40: mov 4(%edi),%eax;");
    asm("loc_65D3A43: test %eax,%eax;");
    asm("loc_65D3A45: jne loc_65D3A4C;");
    asm("loc_65D3A47: mov $_data_65E13A4,%eax;");
    asm("loc_65D3A4C: mov 0x18(%esp),%edx;");
    asm("loc_65D3A50: mov 8(%ebx),%edi;");
    asm("loc_65D3A53: mov %esi,%ecx;");
    asm("loc_65D3A55: lea (%eax,%edx),%esi;");
    asm("loc_65D3A58: mov 4(%ebx),%eax;");
    asm("loc_65D3A5B: add %eax,%edi;");
    asm("loc_65D3A5D: mov %ecx,%eax;");
    asm("loc_65D3A5F: shr $2,%ecx;");
    asm("loc_65D3A62: rep movsl (%esi),(%edi);");
    asm("loc_65D3A64: mov %eax,%ecx;");
    asm("loc_65D3A66: and $3,%ecx;");
    asm("loc_65D3A69: rep movsb (%esi),(%edi);");
    asm("loc_65D3A6B: mov 4(%ebx),%ecx;");
    asm("loc_65D3A6E: mov %ebp,8(%ebx);");
    asm("loc_65D3A71: movb $0,(%ecx,%ebp);");
    asm("loc_65D3A75: pop %edi;");
    asm("loc_65D3A76: pop %esi;");
    asm("loc_65D3A77: mov %ebx,%eax;");
    asm("loc_65D3A79: pop %ebp;");
    asm("loc_65D3A7A: pop %ebx;");
    asm("loc_65D3A7B: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D3A80() // _sub_65D3A80
{
    __DEBUG_ASM(65D3A80);
    // chunk 0x65D3A80 _sub_65D3A80
    asm("loc_65D3A80: push %ebx;");
    asm("loc_65D3A81: push %ebp;");
    asm("loc_65D3A82: mov %ecx,%ebp;");
    asm("loc_65D3A84: or $0xFFFFFFFF,%eax;");
    asm("loc_65D3A87: push %esi;");
    asm("loc_65D3A88: mov 0x14(%esp),%esi;");
    asm("loc_65D3A8C: mov 8(%ebp),%edx;");
    asm("loc_65D3A8F: push %edi;");
    asm("loc_65D3A90: sub %edx,%eax;");
    asm("loc_65D3A92: cmp %esi,%eax;");
    asm("loc_65D3A94: ja loc_65D3A9B;");
    asm("loc_65D3A96: call _sub_65D6CC3;");
    asm("loc_65D3A9B: xor %edi,%edi;");
    asm("loc_65D3A9D: cmp %edi,%esi;");
    asm("loc_65D3A9F: jbe loc_65D3B2E;");
    asm("loc_65D3AA5: mov 8(%ebp),%ebx;");
    asm("loc_65D3AA8: add %esi,%ebx;");
    asm("loc_65D3AAA: cmp $0xFFFFFFFD,%ebx;");
    asm("loc_65D3AAD: jbe loc_65D3AB4;");
    asm("loc_65D3AAF: call _sub_65D6CC3;");
    asm("loc_65D3AB4: mov 4(%ebp),%eax;");
    asm("loc_65D3AB7: cmp %edi,%eax;");
    asm("loc_65D3AB9: je loc_65D3AE2;");
    asm("loc_65D3ABB: mov -1(%eax),%cl;");
    asm("loc_65D3ABE: test %cl,%cl;");
    asm("loc_65D3AC0: je loc_65D3AE2;");
    asm("loc_65D3AC2: cmp $0xFF,%cl;");
    asm("loc_65D3AC5: je loc_65D3AE2;");
    asm("loc_65D3AC7: cmp %edi,%ebx;");
    asm("loc_65D3AC9: jne loc_65D3B00;");
    asm("loc_65D3ACB: dec %cl;");
    asm("loc_65D3ACD: mov %cl,-1(%eax);");
    asm("loc_65D3AD0: mov %edi,4(%ebp);");
    asm("loc_65D3AD3: mov %edi,8(%ebp);");
    asm("loc_65D3AD6: mov %edi,0xC(%ebp);");
    asm("loc_65D3AD9: pop %edi;");
    asm("loc_65D3ADA: mov %ebp,%eax;");
    asm("loc_65D3ADC: pop %esi;");
    asm("loc_65D3ADD: pop %ebp;");
    asm("loc_65D3ADE: pop %ebx;");
    asm("loc_65D3ADF: ret $8;");
    asm("loc_65D3AE2: cmp %edi,%ebx;");
    asm("loc_65D3AE4: jne loc_65D3AFB;");
    asm("loc_65D3AE6: cmp %edi,%eax;");
    asm("loc_65D3AE8: je loc_65D3B2E;");
    asm("loc_65D3AEA: push %edi;");
    asm("loc_65D3AEB: mov %ebp,%ecx;");
    asm("loc_65D3AED: call _sub_65D3DF0;");
    asm("loc_65D3AF2: pop %edi;");
    asm("loc_65D3AF3: mov %ebp,%eax;");
    asm("loc_65D3AF5: pop %esi;");
    asm("loc_65D3AF6: pop %ebp;");
    asm("loc_65D3AF7: pop %ebx;");
    asm("loc_65D3AF8: ret $8;");
    asm("loc_65D3AFB: cmp %ebx,0xC(%ebp);");
    asm("loc_65D3AFE: jae loc_65D3B08;");
    asm("loc_65D3B00: mov %ebp,%ecx;");
    asm("loc_65D3B02: push %ebx;");
    asm("loc_65D3B03: call _sub_65D4350;");
    asm("loc_65D3B08: mov 4(%ebp),%edi;");
    asm("loc_65D3B0B: mov 8(%ebp),%edx;");
    asm("loc_65D3B0E: mov %esi,%ecx;");
    asm("loc_65D3B10: mov 0x14(%esp),%esi;");
    asm("loc_65D3B14: add %edx,%edi;");
    asm("loc_65D3B16: mov %ecx,%edx;");
    asm("loc_65D3B18: shr $2,%ecx;");
    asm("loc_65D3B1B: rep movsl (%esi),(%edi);");
    asm("loc_65D3B1D: mov %edx,%ecx;");
    asm("loc_65D3B1F: and $3,%ecx;");
    asm("loc_65D3B22: rep movsb (%esi),(%edi);");
    asm("loc_65D3B24: mov 4(%ebp),%eax;");
    asm("loc_65D3B27: mov %ebx,8(%ebp);");
    asm("loc_65D3B2A: movb $0,(%ebx,%eax);");
    asm("loc_65D3B2E: pop %edi;");
    asm("loc_65D3B2F: mov %ebp,%eax;");
    asm("loc_65D3B31: pop %esi;");
    asm("loc_65D3B32: pop %ebp;");
    asm("loc_65D3B33: pop %ebx;");
    asm("loc_65D3B34: ret $8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D3B40() // _sub_65D3B40
{
    __DEBUG_ASM(65D3B40);
    // chunk 0x65D3B40 _sub_65D3B40
    asm("loc_65D3B40: mov 4(%esp),%al;");
    asm("loc_65D3B44: push %esi;");
    asm("loc_65D3B45: test %al,%al;");
    asm("loc_65D3B47: mov %ecx,%esi;");
    asm("loc_65D3B49: je loc_65D3B6E;");
    asm("loc_65D3B4B: mov 4(%esi),%eax;");
    asm("loc_65D3B4E: test %eax,%eax;");
    asm("loc_65D3B50: je loc_65D3B6E;");
    asm("loc_65D3B52: mov -1(%eax),%cl;");
    asm("loc_65D3B55: dec %eax;");
    asm("loc_65D3B56: test %cl,%cl;");
    asm("loc_65D3B58: je loc_65D3B65;");
    asm("loc_65D3B5A: cmp $0xFF,%cl;");
    asm("loc_65D3B5D: je loc_65D3B65;");
    asm("loc_65D3B5F: dec %cl;");
    asm("loc_65D3B61: mov %cl,(%eax);");
    asm("loc_65D3B63: jmp loc_65D3B6E;");
    asm("loc_65D3B65: push %eax;");
    asm("loc_65D3B66: call _sub_65D6CB8;");
    asm("loc_65D3B6B: add $4,%esp;");
    asm("loc_65D3B6E: movl $0,4(%esi);");
    asm("loc_65D3B75: movl $0,8(%esi);");
    asm("loc_65D3B7C: movl $0,0xC(%esi);");
    asm("loc_65D3B83: pop %esi;");
    asm("loc_65D3B84: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D3B90() // _sub_65D3B90
{
    __DEBUG_ASM(65D3B90);
    // chunk 0x65D3B90 _sub_65D3B90
    asm("loc_65D3B90: push %ecx;");
    asm("loc_65D3B91: push %ebx;");
    asm("loc_65D3B92: push %ebp;");
    asm("loc_65D3B93: push %esi;");
    asm("loc_65D3B94: push %edi;");
    asm("loc_65D3B95: mov %ecx,%edi;");
    asm("loc_65D3B97: mov 0x1C(%esp),%ebp;");
    asm("loc_65D3B9B: mov $1,%al;");
    asm("loc_65D3B9D: mov 4(%edi),%ebx;");
    asm("loc_65D3BA0: mov 8(%edi),%ecx;");
    asm("loc_65D3BA3: mov 4(%ebx),%esi;");
    asm("loc_65D3BA6: cmp %ecx,%esi;");
    asm("loc_65D3BA8: je loc_65D3BCC;");
    asm("loc_65D3BAA: lea 0xC(%esi),%eax;");
    asm("loc_65D3BAD: mov %ebp,%ecx;");
    asm("loc_65D3BAF: push %eax;");
    asm("loc_65D3BB0: mov %esi,%ebx;");
    asm("loc_65D3BB2: call _sub_65D5020;");
    asm("loc_65D3BB7: test %eax,%eax;");
    asm("loc_65D3BB9: setl %al;");
    asm("loc_65D3BBC: test %al,%al;");
    asm("loc_65D3BBE: je loc_65D3BC4;");
    asm("loc_65D3BC0: mov (%esi),%esi;");
    asm("loc_65D3BC2: jmp loc_65D3BC7;");
    asm("loc_65D3BC4: mov 8(%esi),%esi;");
    asm("loc_65D3BC7: cmp 8(%edi),%esi;");
    asm("loc_65D3BCA: jne loc_65D3BAA;");
    asm("loc_65D3BCC: mov 0xC(%edi),%cl;");
    asm("loc_65D3BCF: test %cl,%cl;");
    asm("loc_65D3BD1: je loc_65D3BF7;");
    asm("loc_65D3BD3: push %ebp;");
    asm("loc_65D3BD4: push %ebx;");
    asm("loc_65D3BD5: lea 0x18(%esp),%ecx;");
    asm("loc_65D3BD9: push %esi;");
    asm("loc_65D3BDA: push %ecx;");
    asm("loc_65D3BDB: mov %edi,%ecx;");
    asm("loc_65D3BDD: call _sub_65D4540;");
    asm("loc_65D3BE2: mov (%eax),%ecx;");
    asm("loc_65D3BE4: mov 0x18(%esp),%eax;");
    asm("loc_65D3BE8: pop %edi;");
    asm("loc_65D3BE9: mov $1,%dl;");
    asm("loc_65D3BEB: pop %esi;");
    asm("loc_65D3BEC: pop %ebp;");
    asm("loc_65D3BED: mov %ecx,(%eax);");
    asm("loc_65D3BEF: mov %dl,4(%eax);");
    asm("loc_65D3BF2: pop %ebx;");
    asm("loc_65D3BF3: pop %ecx;");
    asm("loc_65D3BF4: ret $8;");
    asm("loc_65D3BF7: test %al,%al;");
    asm("loc_65D3BF9: mov %ebx,0x1C(%esp);");
    asm("loc_65D3BFD: je loc_65D3C33;");
    asm("loc_65D3BFF: mov 4(%edi),%edx;");
    asm("loc_65D3C02: cmp (%edx),%ebx;");
    asm("loc_65D3C04: jne loc_65D3C2A;");
    asm("loc_65D3C06: push %ebp;");
    asm("loc_65D3C07: push %ebx;");
    asm("loc_65D3C08: lea 0x18(%esp),%eax;");
    asm("loc_65D3C0C: push %esi;");
    asm("loc_65D3C0D: push %eax;");
    asm("loc_65D3C0E: mov %edi,%ecx;");
    asm("loc_65D3C10: call _sub_65D4540;");
    asm("loc_65D3C15: mov (%eax),%ecx;");
    asm("loc_65D3C17: mov 0x18(%esp),%eax;");
    asm("loc_65D3C1B: pop %edi;");
    asm("loc_65D3C1C: mov $1,%dl;");
    asm("loc_65D3C1E: pop %esi;");
    asm("loc_65D3C1F: pop %ebp;");
    asm("loc_65D3C20: mov %ecx,(%eax);");
    asm("loc_65D3C22: mov %dl,4(%eax);");
    asm("loc_65D3C25: pop %ebx;");
    asm("loc_65D3C26: pop %ecx;");
    asm("loc_65D3C27: ret $8;");
    asm("loc_65D3C2A: lea 0x1C(%esp),%ecx;");
    asm("loc_65D3C2E: call _sub_65D4790;");
    asm("loc_65D3C33: mov 0x1C(%esp),%ecx;");
    asm("loc_65D3C37: push %ebp;");
    asm("loc_65D3C38: add $0xC,%ecx;");
    asm("loc_65D3C3B: call _sub_65D5020;");
    asm("loc_65D3C40: test %eax,%eax;");
    asm("loc_65D3C42: jge loc_65D3C68;");
    asm("loc_65D3C44: push %ebp;");
    asm("loc_65D3C45: push %ebx;");
    asm("loc_65D3C46: lea 0x18(%esp),%edx;");
    asm("loc_65D3C4A: push %esi;");
    asm("loc_65D3C4B: push %edx;");
    asm("loc_65D3C4C: mov %edi,%ecx;");
    asm("loc_65D3C4E: call _sub_65D4540;");
    asm("loc_65D3C53: mov (%eax),%ecx;");
    asm("loc_65D3C55: mov 0x18(%esp),%eax;");
    asm("loc_65D3C59: pop %edi;");
    asm("loc_65D3C5A: mov $1,%dl;");
    asm("loc_65D3C5C: pop %esi;");
    asm("loc_65D3C5D: pop %ebp;");
    asm("loc_65D3C5E: mov %ecx,(%eax);");
    asm("loc_65D3C60: mov %dl,4(%eax);");
    asm("loc_65D3C63: pop %ebx;");
    asm("loc_65D3C64: pop %ecx;");
    asm("loc_65D3C65: ret $8;");
    asm("loc_65D3C68: mov 0x18(%esp),%eax;");
    asm("loc_65D3C6C: mov 0x1C(%esp),%ecx;");
    asm("loc_65D3C70: pop %edi;");
    asm("loc_65D3C71: xor %dl,%dl;");
    asm("loc_65D3C73: pop %esi;");
    asm("loc_65D3C74: pop %ebp;");
    asm("loc_65D3C75: mov %ecx,(%eax);");
    asm("loc_65D3C77: mov %dl,4(%eax);");
    asm("loc_65D3C7A: pop %ebx;");
    asm("loc_65D3C7B: pop %ecx;");
    asm("loc_65D3C7C: ret $8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D3C80() // _sub_65D3C80
{
    __DEBUG_ASM(65D3C80);
    // chunk 0x65D3C80 _sub_65D3C80
    asm("loc_65D3C80: mov 0xC(%esp),%eax;");
    asm("loc_65D3C84: mov 4(%esp),%edx;");
    asm("loc_65D3C88: push %ebx;");
    asm("loc_65D3C89: push %esi;");
    asm("loc_65D3C8A: mov %ecx,%esi;");
    asm("loc_65D3C8C: mov (%eax),%cl;");
    asm("loc_65D3C8E: push %edi;");
    asm("loc_65D3C8F: push $0x30;");
    asm("loc_65D3C91: mov %cl,(%esi);");
    asm("loc_65D3C93: mov (%edx),%al;");
    asm("loc_65D3C95: mov 0x18(%esp),%cl;");
    asm("loc_65D3C99: mov %al,1(%esi);");
    asm("loc_65D3C9C: mov %cl,0xC(%esi);");
    asm("loc_65D3C9F: call _sub_65D6F71;");
    asm("loc_65D3CA4: xor %ebx,%ebx;");
    asm("loc_65D3CA6: mov $1,%cl;");
    asm("loc_65D3CA8: mov %ebx,4(%eax);");
    asm("loc_65D3CAB: mov %cl,0x2C(%eax);");
    asm("loc_65D3CAE: mov %bl,0x2D(%eax);");
    asm("loc_65D3CB1: mov %eax,8(%esi);");
    asm("loc_65D3CB4: mov %cl,0x2D(%eax);");
    asm("loc_65D3CB7: mov 8(%esi),%edx;");
    asm("loc_65D3CBA: push $0x30;");
    asm("loc_65D3CBC: mov %ebx,(%edx);");
    asm("loc_65D3CBE: mov 8(%esi),%eax;");
    asm("loc_65D3CC1: mov %ebx,8(%eax);");
    asm("loc_65D3CC4: mov 8(%esi),%edi;");
    asm("loc_65D3CC7: call _sub_65D6F71;");
    asm("loc_65D3CCC: mov %edi,4(%eax);");
    asm("loc_65D3CCF: mov %bl,0x2C(%eax);");
    asm("loc_65D3CD2: mov %bl,0x2D(%eax);");
    asm("loc_65D3CD5: mov %eax,4(%esi);");
    asm("loc_65D3CD8: mov %eax,(%eax);");
    asm("loc_65D3CDA: mov 4(%esi),%eax;");
    asm("loc_65D3CDD: add $8,%esp;");
    asm("loc_65D3CE0: mov %eax,8(%eax);");
    asm("loc_65D3CE3: mov %ebx,0x10(%esi);");
    asm("loc_65D3CE6: mov %esi,%eax;");
    asm("loc_65D3CE8: pop %edi;");
    asm("loc_65D3CE9: pop %esi;");
    asm("loc_65D3CEA: pop %ebx;");
    asm("loc_65D3CEB: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D3CF0() // _sub_65D3CF0
{
    __DEBUG_ASM(65D3CF0);
    // chunk 0x65D3CF0 _sub_65D3CF0
    asm("loc_65D3CF0: mov 4(%ecx),%eax;");
    asm("loc_65D3CF3: mov (%eax),%ecx;");
    asm("loc_65D3CF5: mov 4(%esp),%eax;");
    asm("loc_65D3CF9: mov %ecx,(%eax);");
    asm("loc_65D3CFB: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D3D00() // _sub_65D3D00
{
    __DEBUG_ASM(65D3D00);
    // chunk 0x65D3D00 _sub_65D3D00
    asm("loc_65D3D00: mov (%ecx),%eax;");
    asm("loc_65D3D02: push %ebx;");
    asm("loc_65D3D03: mov 8(%eax),%edx;");
    asm("loc_65D3D06: mov 0x2D(%edx),%bl;");
    asm("loc_65D3D09: test %bl,%bl;");
    asm("loc_65D3D0B: jne loc_65D3D25;");
    asm("loc_65D3D0D: mov (%edx),%eax;");
    asm("loc_65D3D0F: mov 0x2D(%eax),%bl;");
    asm("loc_65D3D12: test %bl,%bl;");
    asm("loc_65D3D14: jne loc_65D3D21;");
    asm("loc_65D3D16: mov %eax,%edx;");
    asm("loc_65D3D18: mov (%edx),%eax;");
    asm("loc_65D3D1A: mov 0x2D(%eax),%bl;");
    asm("loc_65D3D1D: test %bl,%bl;");
    asm("loc_65D3D1F: je loc_65D3D16;");
    asm("loc_65D3D21: mov %edx,(%ecx);");
    asm("loc_65D3D23: pop %ebx;");
    asm("loc_65D3D24: ret;");
    asm("loc_65D3D25: mov 4(%eax),%eax;");
    asm("loc_65D3D28: mov (%ecx),%edx;");
    asm("loc_65D3D2A: cmp 8(%eax),%edx;");
    asm("loc_65D3D2D: jne loc_65D3D3B;");
    asm("loc_65D3D2F: mov %eax,(%ecx);");
    asm("loc_65D3D31: mov 4(%eax),%eax;");
    asm("loc_65D3D34: mov (%ecx),%edx;");
    asm("loc_65D3D36: cmp 8(%eax),%edx;");
    asm("loc_65D3D39: je loc_65D3D2F;");
    asm("loc_65D3D3B: mov (%ecx),%edx;");
    asm("loc_65D3D3D: cmp %eax,8(%edx);");
    asm("loc_65D3D40: je loc_65D3D44;");
    asm("loc_65D3D42: mov %eax,(%ecx);");
    asm("loc_65D3D44: pop %ebx;");
    asm("loc_65D3D45: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D3D50() // _sub_65D3D50
{
    __DEBUG_ASM(65D3D50);
    // chunk 0x65D3D50 _sub_65D3D50
    asm("loc_65D3D50: push %ebx;");
    asm("loc_65D3D51: mov 0xC(%esp),%ebx;");
    asm("loc_65D3D55: push %ebp;");
    asm("loc_65D3D56: cmp $0xFFFFFFFD,%ebx;");
    asm("loc_65D3D59: mov %ecx,%ebp;");
    asm("loc_65D3D5B: jbe loc_65D3D62;");
    asm("loc_65D3D5D: call _sub_65D6CC3;");
    asm("loc_65D3D62: mov 4(%ebp),%eax;");
    asm("loc_65D3D65: xor %edx,%edx;");
    asm("loc_65D3D67: cmp %edx,%eax;");
    asm("loc_65D3D69: je loc_65D3D90;");
    asm("loc_65D3D6B: mov -1(%eax),%cl;");
    asm("loc_65D3D6E: test %cl,%cl;");
    asm("loc_65D3D70: je loc_65D3D90;");
    asm("loc_65D3D72: cmp $0xFF,%cl;");
    asm("loc_65D3D75: je loc_65D3D90;");
    asm("loc_65D3D77: cmp %edx,%ebx;");
    asm("loc_65D3D79: jne loc_65D3DB9;");
    asm("loc_65D3D7B: dec %cl;");
    asm("loc_65D3D7D: mov %cl,-1(%eax);");
    asm("loc_65D3D80: mov %edx,4(%ebp);");
    asm("loc_65D3D83: mov %edx,8(%ebp);");
    asm("loc_65D3D86: mov %edx,0xC(%ebp);");
    asm("loc_65D3D89: mov %ebp,%eax;");
    asm("loc_65D3D8B: pop %ebp;");
    asm("loc_65D3D8C: pop %ebx;");
    asm("loc_65D3D8D: ret $8;");
    asm("loc_65D3D90: cmp %edx,%ebx;");
    asm("loc_65D3D92: jne loc_65D3DA4;");
    asm("loc_65D3D94: push $1;");
    asm("loc_65D3D96: mov %ebp,%ecx;");
    asm("loc_65D3D98: call _sub_65D3B40;");
    asm("loc_65D3D9D: mov %ebp,%eax;");
    asm("loc_65D3D9F: pop %ebp;");
    asm("loc_65D3DA0: pop %ebx;");
    asm("loc_65D3DA1: ret $8;");
    asm("loc_65D3DA4: mov 0xC(%ebp),%eax;");
    asm("loc_65D3DA7: cmp $0x1F,%eax;");
    asm("loc_65D3DAA: ja loc_65D3DB0;");
    asm("loc_65D3DAC: cmp %ebx,%eax;");
    asm("loc_65D3DAE: jae loc_65D3DC1;");
    asm("loc_65D3DB0: push $1;");
    asm("loc_65D3DB2: mov %ebp,%ecx;");
    asm("loc_65D3DB4: call _sub_65D3B40;");
    asm("loc_65D3DB9: mov %ebp,%ecx;");
    asm("loc_65D3DBB: push %ebx;");
    asm("loc_65D3DBC: call _sub_65D4350;");
    asm("loc_65D3DC1: mov %ebx,%ecx;");
    asm("loc_65D3DC3: push %esi;");
    asm("loc_65D3DC4: mov 0x10(%esp),%esi;");
    asm("loc_65D3DC8: mov %ecx,%eax;");
    asm("loc_65D3DCA: push %edi;");
    asm("loc_65D3DCB: mov 4(%ebp),%edi;");
    asm("loc_65D3DCE: shr $2,%ecx;");
    asm("loc_65D3DD1: rep movsl (%esi),(%edi);");
    asm("loc_65D3DD3: mov %eax,%ecx;");
    asm("loc_65D3DD5: mov %ebp,%eax;");
    asm("loc_65D3DD7: and $3,%ecx;");
    asm("loc_65D3DDA: rep movsb (%esi),(%edi);");
    asm("loc_65D3DDC: mov 4(%ebp),%ecx;");
    asm("loc_65D3DDF: pop %edi;");
    asm("loc_65D3DE0: mov %ebx,8(%ebp);");
    asm("loc_65D3DE3: pop %esi;");
    asm("loc_65D3DE4: movb $0,(%ebx,%ecx);");
    asm("loc_65D3DE8: pop %ebp;");
    asm("loc_65D3DE9: pop %ebx;");
    asm("loc_65D3DEA: ret $8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D3DF0() // _sub_65D3DF0
{
    __DEBUG_ASM(65D3DF0);
    // chunk 0x65D3DF0 _sub_65D3DF0
    asm("loc_65D3DF0: mov 4(%esp),%eax;");
    asm("loc_65D3DF4: mov %eax,8(%ecx);");
    asm("loc_65D3DF7: mov 4(%ecx),%ecx;");
    asm("loc_65D3DFA: movb $0,(%eax,%ecx);");
    asm("loc_65D3DFE: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D3E10() // _sub_65D3E10
{
    __DEBUG_ASM(65D3E10);
    // chunk 0x65D3E10 _sub_65D3E10
    asm("loc_65D3E10: push %ebx;");
    asm("loc_65D3E11: push %esi;");
    asm("loc_65D3E12: push %edi;");
    asm("loc_65D3E13: mov 0x10(%esp),%edi;");
    asm("loc_65D3E17: cmp $0xFFFFFFFD,%edi;");
    asm("loc_65D3E1A: mov %ecx,%esi;");
    asm("loc_65D3E1C: jbe loc_65D3E23;");
    asm("loc_65D3E1E: call _sub_65D6CC3;");
    asm("loc_65D3E23: mov 4(%esi),%eax;");
    asm("loc_65D3E26: xor %ebx,%ebx;");
    asm("loc_65D3E28: cmp %ebx,%eax;");
    asm("loc_65D3E2A: je loc_65D3E56;");
    asm("loc_65D3E2C: mov -1(%eax),%cl;");
    asm("loc_65D3E2F: cmp %bl,%cl;");
    asm("loc_65D3E31: je loc_65D3E56;");
    asm("loc_65D3E33: cmp $0xFF,%cl;");
    asm("loc_65D3E36: je loc_65D3E56;");
    asm("loc_65D3E38: cmp %ebx,%edi;");
    asm("loc_65D3E3A: jne loc_65D3F18;");
    asm("loc_65D3E40: dec %cl;");
    asm("loc_65D3E42: pop %edi;");
    asm("loc_65D3E43: mov %cl,-1(%eax);");
    asm("loc_65D3E46: mov %ebx,4(%esi);");
    asm("loc_65D3E49: mov %ebx,8(%esi);");
    asm("loc_65D3E4C: mov %ebx,0xC(%esi);");
    asm("loc_65D3E4F: pop %esi;");
    asm("loc_65D3E50: xor %al,%al;");
    asm("loc_65D3E52: pop %ebx;");
    asm("loc_65D3E53: ret $8;");
    asm("loc_65D3E56: mov 0x14(%esp),%cl;");
    asm("loc_65D3E5A: cmp %ebx,%edi;");
    asm("loc_65D3E5C: jne loc_65D3EB3;");
    asm("loc_65D3E5E: cmp %bl,%cl;");
    asm("loc_65D3E60: je loc_65D3EA2;");
    asm("loc_65D3E62: cmp %ebx,%eax;");
    asm("loc_65D3E64: je loc_65D3E91;");
    asm("loc_65D3E66: mov -1(%eax),%cl;");
    asm("loc_65D3E69: dec %eax;");
    asm("loc_65D3E6A: cmp %bl,%cl;");
    asm("loc_65D3E6C: je loc_65D3E88;");
    asm("loc_65D3E6E: cmp $0xFF,%cl;");
    asm("loc_65D3E71: je loc_65D3E88;");
    asm("loc_65D3E73: dec %cl;");
    asm("loc_65D3E75: pop %edi;");
    asm("loc_65D3E76: mov %cl,(%eax);");
    asm("loc_65D3E78: mov %ebx,4(%esi);");
    asm("loc_65D3E7B: mov %ebx,8(%esi);");
    asm("loc_65D3E7E: mov %ebx,0xC(%esi);");
    asm("loc_65D3E81: pop %esi;");
    asm("loc_65D3E82: xor %al,%al;");
    asm("loc_65D3E84: pop %ebx;");
    asm("loc_65D3E85: ret $8;");
    asm("loc_65D3E88: push %eax;");
    asm("loc_65D3E89: call _sub_65D6CB8;");
    asm("loc_65D3E8E: add $4,%esp;");
    asm("loc_65D3E91: mov %ebx,4(%esi);");
    asm("loc_65D3E94: mov %ebx,8(%esi);");
    asm("loc_65D3E97: mov %ebx,0xC(%esi);");
    asm("loc_65D3E9A: pop %edi;");
    asm("loc_65D3E9B: pop %esi;");
    asm("loc_65D3E9C: xor %al,%al;");
    asm("loc_65D3E9E: pop %ebx;");
    asm("loc_65D3E9F: ret $8;");
    asm("loc_65D3EA2: cmp %ebx,%eax;");
    asm("loc_65D3EA4: je loc_65D3EAB;");
    asm("loc_65D3EA6: mov %ebx,8(%esi);");
    asm("loc_65D3EA9: mov %bl,(%eax);");
    asm("loc_65D3EAB: pop %edi;");
    asm("loc_65D3EAC: pop %esi;");
    asm("loc_65D3EAD: xor %al,%al;");
    asm("loc_65D3EAF: pop %ebx;");
    asm("loc_65D3EB0: ret $8;");
    asm("loc_65D3EB3: cmp %bl,%cl;");
    asm("loc_65D3EB5: je loc_65D3F13;");
    asm("loc_65D3EB7: mov 0xC(%esi),%ecx;");
    asm("loc_65D3EBA: cmp $0x1F,%ecx;");
    asm("loc_65D3EBD: ja loc_65D3EC3;");
    asm("loc_65D3EBF: cmp %edi,%ecx;");
    asm("loc_65D3EC1: jae loc_65D3F20;");
    asm("loc_65D3EC3: cmp %ebx,%eax;");
    asm("loc_65D3EC5: je loc_65D3EFA;");
    asm("loc_65D3EC7: mov -1(%eax),%cl;");
    asm("loc_65D3ECA: dec %eax;");
    asm("loc_65D3ECB: cmp %bl,%cl;");
    asm("loc_65D3ECD: je loc_65D3EF1;");
    asm("loc_65D3ECF: cmp $0xFF,%cl;");
    asm("loc_65D3ED2: je loc_65D3EF1;");
    asm("loc_65D3ED4: dec %cl;");
    asm("loc_65D3ED6: push %edi;");
    asm("loc_65D3ED7: mov %cl,(%eax);");
    asm("loc_65D3ED9: mov %esi,%ecx;");
    asm("loc_65D3EDB: mov %ebx,4(%esi);");
    asm("loc_65D3EDE: mov %ebx,8(%esi);");
    asm("loc_65D3EE1: mov %ebx,0xC(%esi);");
    asm("loc_65D3EE4: call _sub_65D4350;");
    asm("loc_65D3EE9: pop %edi;");
    asm("loc_65D3EEA: pop %esi;");
    asm("loc_65D3EEB: mov $1,%al;");
    asm("loc_65D3EED: pop %ebx;");
    asm("loc_65D3EEE: ret $8;");
    asm("loc_65D3EF1: push %eax;");
    asm("loc_65D3EF2: call _sub_65D6CB8;");
    asm("loc_65D3EF7: add $4,%esp;");
    asm("loc_65D3EFA: mov %esi,%ecx;");
    asm("loc_65D3EFC: push %edi;");
    asm("loc_65D3EFD: mov %ebx,4(%esi);");
    asm("loc_65D3F00: mov %ebx,8(%esi);");
    asm("loc_65D3F03: mov %ebx,0xC(%esi);");
    asm("loc_65D3F06: call _sub_65D4350;");
    asm("loc_65D3F0B: pop %edi;");
    asm("loc_65D3F0C: pop %esi;");
    asm("loc_65D3F0D: mov $1,%al;");
    asm("loc_65D3F0F: pop %ebx;");
    asm("loc_65D3F10: ret $8;");
    asm("loc_65D3F13: cmp %edi,0xC(%esi);");
    asm("loc_65D3F16: jae loc_65D3F20;");
    asm("loc_65D3F18: mov %esi,%ecx;");
    asm("loc_65D3F1A: push %edi;");
    asm("loc_65D3F1B: call _sub_65D4350;");
    asm("loc_65D3F20: pop %edi;");
    asm("loc_65D3F21: pop %esi;");
    asm("loc_65D3F22: mov $1,%al;");
    asm("loc_65D3F24: pop %ebx;");
    asm("loc_65D3F25: ret $8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D3F30() // _sub_65D3F30
{
    __DEBUG_ASM(65D3F30);
    // chunk 0x65D3F30 _sub_65D3F30
    asm("loc_65D3F30: push %ecx;");
    asm("loc_65D3F31: push %ebx;");
    asm("loc_65D3F32: push %ebp;");
    asm("loc_65D3F33: push %esi;");
    asm("loc_65D3F34: mov 0x18(%esp),%esi;");
    asm("loc_65D3F38: push %edi;");
    asm("loc_65D3F39: mov %ecx,%edi;");
    asm("loc_65D3F3B: lea 0x1C(%esp),%ecx;");
    asm("loc_65D3F3F: call _sub_65D3D00;");
    asm("loc_65D3F44: mov (%esi),%edx;");
    asm("loc_65D3F46: mov 8(%edi),%eax;");
    asm("loc_65D3F49: cmp %eax,%edx;");
    asm("loc_65D3F4B: mov %esi,0x10(%esp);");
    asm("loc_65D3F4F: jne loc_65D3F72;");
    asm("loc_65D3F51: mov 8(%esi),%eax;");
    asm("loc_65D3F54: mov 0x10(%esp),%ecx;");
    asm("loc_65D3F58: mov 4(%ecx),%edx;");
    asm("loc_65D3F5B: mov %edx,4(%eax);");
    asm("loc_65D3F5E: mov 4(%edi),%ecx;");
    asm("loc_65D3F61: cmp %esi,4(%ecx);");
    asm("loc_65D3F64: jne loc_65D3FF9;");
    asm("loc_65D3F6A: mov %eax,4(%ecx);");
    asm("loc_65D3F6D: jmp loc_65D4007;");
    asm("loc_65D3F72: mov 8(%esi),%ecx;");
    asm("loc_65D3F75: cmp %eax,%ecx;");
    asm("loc_65D3F77: jne loc_65D3F7D;");
    asm("loc_65D3F79: mov %edx,%eax;");
    asm("loc_65D3F7B: jmp loc_65D3F54;");
    asm("loc_65D3F7D: mov (%ecx),%eax;");
    asm("loc_65D3F7F: mov 0x2D(%eax),%bl;");
    asm("loc_65D3F82: test %bl,%bl;");
    asm("loc_65D3F84: jne loc_65D3F91;");
    asm("loc_65D3F86: mov %eax,%ecx;");
    asm("loc_65D3F88: mov (%ecx),%eax;");
    asm("loc_65D3F8A: mov 0x2D(%eax),%bl;");
    asm("loc_65D3F8D: test %bl,%bl;");
    asm("loc_65D3F8F: je loc_65D3F86;");
    asm("loc_65D3F91: mov 8(%ecx),%eax;");
    asm("loc_65D3F94: cmp %esi,%ecx;");
    asm("loc_65D3F96: mov %ecx,0x10(%esp);");
    asm("loc_65D3F9A: je loc_65D3F54;");
    asm("loc_65D3F9C: mov %ecx,4(%edx);");
    asm("loc_65D3F9F: mov (%esi),%edx;");
    asm("loc_65D3FA1: mov %edx,(%ecx);");
    asm("loc_65D3FA3: mov 8(%esi),%edx;");
    asm("loc_65D3FA6: cmp %edx,%ecx;");
    asm("loc_65D3FA8: jne loc_65D3FAF;");
    asm("loc_65D3FAA: mov %ecx,4(%eax);");
    asm("loc_65D3FAD: jmp loc_65D3FC6;");
    asm("loc_65D3FAF: mov 4(%ecx),%edx;");
    asm("loc_65D3FB2: mov %edx,4(%eax);");
    asm("loc_65D3FB5: mov 4(%ecx),%edx;");
    asm("loc_65D3FB8: mov %eax,(%edx);");
    asm("loc_65D3FBA: mov 8(%esi),%edx;");
    asm("loc_65D3FBD: mov %edx,8(%ecx);");
    asm("loc_65D3FC0: mov 8(%esi),%edx;");
    asm("loc_65D3FC3: mov %ecx,4(%edx);");
    asm("loc_65D3FC6: mov 4(%edi),%edx;");
    asm("loc_65D3FC9: cmp %esi,4(%edx);");
    asm("loc_65D3FCC: jne loc_65D3FD3;");
    asm("loc_65D3FCE: mov %ecx,4(%edx);");
    asm("loc_65D3FD1: jmp loc_65D3FE1;");
    asm("loc_65D3FD3: mov 4(%esi),%edx;");
    asm("loc_65D3FD6: cmp %esi,(%edx);");
    asm("loc_65D3FD8: jne loc_65D3FDE;");
    asm("loc_65D3FDA: mov %ecx,(%edx);");
    asm("loc_65D3FDC: jmp loc_65D3FE1;");
    asm("loc_65D3FDE: mov %ecx,8(%edx);");
    asm("loc_65D3FE1: mov 4(%esi),%edx;");
    asm("loc_65D3FE4: mov %esi,0x10(%esp);");
    asm("loc_65D3FE8: mov %edx,4(%ecx);");
    asm("loc_65D3FEB: mov 0x2C(%esi),%bl;");
    asm("loc_65D3FEE: mov 0x2C(%ecx),%dl;");
    asm("loc_65D3FF1: mov %bl,0x2C(%ecx);");
    asm("loc_65D3FF4: mov %dl,0x2C(%esi);");
    asm("loc_65D3FF7: jmp loc_65D4068;");
    asm("loc_65D3FF9: mov 4(%esi),%ecx;");
    asm("loc_65D3FFC: cmp %esi,(%ecx);");
    asm("loc_65D3FFE: jne loc_65D4004;");
    asm("loc_65D4000: mov %eax,(%ecx);");
    asm("loc_65D4002: jmp loc_65D4007;");
    asm("loc_65D4004: mov %eax,8(%ecx);");
    asm("loc_65D4007: mov 4(%edi),%ebp;");
    asm("loc_65D400A: cmp %esi,(%ebp);");
    asm("loc_65D400D: jne loc_65D4037;");
    asm("loc_65D400F: mov 8(%esi),%ecx;");
    asm("loc_65D4012: mov 8(%edi),%edx;");
    asm("loc_65D4015: cmp %edx,%ecx;");
    asm("loc_65D4017: jne loc_65D401E;");
    asm("loc_65D4019: mov 4(%esi),%edx;");
    asm("loc_65D401C: jmp loc_65D4034;");
    asm("loc_65D401E: mov (%eax),%ecx;");
    asm("loc_65D4020: mov %eax,%edx;");
    asm("loc_65D4022: mov 0x2D(%ecx),%bl;");
    asm("loc_65D4025: test %bl,%bl;");
    asm("loc_65D4027: jne loc_65D4034;");
    asm("loc_65D4029: mov %ecx,%edx;");
    asm("loc_65D402B: mov (%edx),%ecx;");
    asm("loc_65D402D: mov 0x2D(%ecx),%bl;");
    asm("loc_65D4030: test %bl,%bl;");
    asm("loc_65D4032: je loc_65D4029;");
    asm("loc_65D4034: mov %edx,(%ebp);");
    asm("loc_65D4037: mov 4(%edi),%ebp;");
    asm("loc_65D403A: cmp %esi,8(%ebp);");
    asm("loc_65D403D: jne loc_65D4068;");
    asm("loc_65D403F: mov (%esi),%ecx;");
    asm("loc_65D4041: mov 8(%edi),%edx;");
    asm("loc_65D4044: cmp %edx,%ecx;");
    asm("loc_65D4046: jne loc_65D404D;");
    asm("loc_65D4048: mov 4(%esi),%edx;");
    asm("loc_65D404B: jmp loc_65D4065;");
    asm("loc_65D404D: mov 8(%eax),%ecx;");
    asm("loc_65D4050: mov %eax,%edx;");
    asm("loc_65D4052: mov 0x2D(%ecx),%bl;");
    asm("loc_65D4055: test %bl,%bl;");
    asm("loc_65D4057: jne loc_65D4065;");
    asm("loc_65D4059: mov %ecx,%edx;");
    asm("loc_65D405B: mov 8(%edx),%ecx;");
    asm("loc_65D405E: mov 0x2D(%ecx),%bl;");
    asm("loc_65D4061: test %bl,%bl;");
    asm("loc_65D4063: je loc_65D4059;");
    asm("loc_65D4065: mov %edx,8(%ebp);");
    asm("loc_65D4068: mov 0x10(%esp),%esi;");
    asm("loc_65D406C: mov $1,%bl;");
    asm("loc_65D406E: cmp %bl,0x2C(%esi);");
    asm("loc_65D4071: jne loc_65D42E1;");
    asm("loc_65D4077: mov 4(%edi),%ecx;");
    asm("loc_65D407A: cmp 4(%ecx),%eax;");
    asm("loc_65D407D: je loc_65D42DA;");
    asm("loc_65D4083: cmp %bl,0x2C(%eax);");
    asm("loc_65D4086: jne loc_65D42DA;");
    asm("loc_65D408C: mov 4(%eax),%edx;");
    asm("loc_65D408F: mov (%edx),%ecx;");
    asm("loc_65D4091: cmp %ecx,%eax;");
    asm("loc_65D4093: jne loc_65D4142;");
    asm("loc_65D4099: mov 8(%edx),%ecx;");
    asm("loc_65D409C: mov 0x2C(%ecx),%dl;");
    asm("loc_65D409F: test %dl,%dl;");
    asm("loc_65D40A1: jne loc_65D40EE;");
    asm("loc_65D40A3: mov %bl,0x2C(%ecx);");
    asm("loc_65D40A6: mov 4(%eax),%edx;");
    asm("loc_65D40A9: movb $0,0x2C(%edx);");
    asm("loc_65D40AD: mov 4(%eax),%ecx;");
    asm("loc_65D40B0: mov 8(%ecx),%edx;");
    asm("loc_65D40B3: mov (%edx),%esi;");
    asm("loc_65D40B5: mov %esi,8(%ecx);");
    asm("loc_65D40B8: mov (%edx),%esi;");
    asm("loc_65D40BA: cmp 8(%edi),%esi;");
    asm("loc_65D40BD: je loc_65D40C2;");
    asm("loc_65D40BF: mov %ecx,4(%esi);");
    asm("loc_65D40C2: mov 4(%ecx),%esi;");
    asm("loc_65D40C5: mov %esi,4(%edx);");
    asm("loc_65D40C8: mov 4(%edi),%esi;");
    asm("loc_65D40CB: cmp 4(%esi),%ecx;");
    asm("loc_65D40CE: jne loc_65D40D5;");
    asm("loc_65D40D0: mov %edx,4(%esi);");
    asm("loc_65D40D3: jmp loc_65D40E3;");
    asm("loc_65D40D5: mov 4(%ecx),%esi;");
    asm("loc_65D40D8: cmp (%esi),%ecx;");
    asm("loc_65D40DA: jne loc_65D40E0;");
    asm("loc_65D40DC: mov %edx,(%esi);");
    asm("loc_65D40DE: jmp loc_65D40E3;");
    asm("loc_65D40E0: mov %edx,8(%esi);");
    asm("loc_65D40E3: mov %ecx,(%edx);");
    asm("loc_65D40E5: mov %edx,4(%ecx);");
    asm("loc_65D40E8: mov 4(%eax),%ecx;");
    asm("loc_65D40EB: mov 8(%ecx),%ecx;");
    asm("loc_65D40EE: mov (%ecx),%edx;");
    asm("loc_65D40F0: cmp %bl,0x2C(%edx);");
    asm("loc_65D40F3: jne loc_65D4101;");
    asm("loc_65D40F5: mov 8(%ecx),%edx;");
    asm("loc_65D40F8: cmp %bl,0x2C(%edx);");
    asm("loc_65D40FB: je loc_65D41AC;");
    asm("loc_65D4101: mov 8(%ecx),%edx;");
    asm("loc_65D4104: cmp %bl,0x2C(%edx);");
    asm("loc_65D4107: jne loc_65D41DF;");
    asm("loc_65D410D: mov (%ecx),%edx;");
    asm("loc_65D410F: mov %bl,0x2C(%edx);");
    asm("loc_65D4112: mov (%ecx),%edx;");
    asm("loc_65D4114: movb $0,0x2C(%ecx);");
    asm("loc_65D4118: mov 8(%edx),%esi;");
    asm("loc_65D411B: mov %esi,(%ecx);");
    asm("loc_65D411D: mov 8(%edx),%esi;");
    asm("loc_65D4120: cmp 8(%edi),%esi;");
    asm("loc_65D4123: je loc_65D4128;");
    asm("loc_65D4125: mov %ecx,4(%esi);");
    asm("loc_65D4128: mov 4(%ecx),%esi;");
    asm("loc_65D412B: mov %esi,4(%edx);");
    asm("loc_65D412E: mov 4(%edi),%esi;");
    asm("loc_65D4131: cmp 4(%esi),%ecx;");
    asm("loc_65D4134: jne loc_65D41C4;");
    asm("loc_65D413A: mov %edx,4(%esi);");
    asm("loc_65D413D: jmp loc_65D41D3;");
    asm("loc_65D4142: mov 0x2C(%ecx),%dl;");
    asm("loc_65D4145: test %dl,%dl;");
    asm("loc_65D4147: jne loc_65D4195;");
    asm("loc_65D4149: mov %bl,0x2C(%ecx);");
    asm("loc_65D414C: mov 4(%eax),%ecx;");
    asm("loc_65D414F: movb $0,0x2C(%ecx);");
    asm("loc_65D4153: mov 4(%eax),%ecx;");
    asm("loc_65D4156: mov (%ecx),%edx;");
    asm("loc_65D4158: mov 8(%edx),%esi;");
    asm("loc_65D415B: mov %esi,(%ecx);");
    asm("loc_65D415D: mov 8(%edx),%esi;");
    asm("loc_65D4160: cmp 8(%edi),%esi;");
    asm("loc_65D4163: je loc_65D4168;");
    asm("loc_65D4165: mov %ecx,4(%esi);");
    asm("loc_65D4168: mov 4(%ecx),%esi;");
    asm("loc_65D416B: mov %esi,4(%edx);");
    asm("loc_65D416E: mov 4(%edi),%esi;");
    asm("loc_65D4171: cmp 4(%esi),%ecx;");
    asm("loc_65D4174: jne loc_65D417B;");
    asm("loc_65D4176: mov %edx,4(%esi);");
    asm("loc_65D4179: jmp loc_65D418A;");
    asm("loc_65D417B: mov 4(%ecx),%esi;");
    asm("loc_65D417E: cmp 8(%esi),%ecx;");
    asm("loc_65D4181: jne loc_65D4188;");
    asm("loc_65D4183: mov %edx,8(%esi);");
    asm("loc_65D4186: jmp loc_65D418A;");
    asm("loc_65D4188: mov %edx,(%esi);");
    asm("loc_65D418A: mov %ecx,8(%edx);");
    asm("loc_65D418D: mov %edx,4(%ecx);");
    asm("loc_65D4190: mov 4(%eax),%edx;");
    asm("loc_65D4193: mov (%edx),%ecx;");
    asm("loc_65D4195: mov 8(%ecx),%edx;");
    asm("loc_65D4198: cmp %bl,0x2C(%edx);");
    asm("loc_65D419B: jne loc_65D423B;");
    asm("loc_65D41A1: mov (%ecx),%edx;");
    asm("loc_65D41A3: cmp %bl,0x2C(%edx);");
    asm("loc_65D41A6: jne loc_65D423B;");
    asm("loc_65D41AC: movb $0,0x2C(%ecx);");
    asm("loc_65D41B0: mov 4(%edi),%ecx;");
    asm("loc_65D41B3: mov 4(%eax),%eax;");
    asm("loc_65D41B6: cmp 4(%ecx),%eax;");
    asm("loc_65D41B9: jne loc_65D4083;");
    asm("loc_65D41BF: jmp loc_65D42DA;");
    asm("loc_65D41C4: mov 4(%ecx),%esi;");
    asm("loc_65D41C7: cmp 8(%esi),%ecx;");
    asm("loc_65D41CA: jne loc_65D41D1;");
    asm("loc_65D41CC: mov %edx,8(%esi);");
    asm("loc_65D41CF: jmp loc_65D41D3;");
    asm("loc_65D41D1: mov %edx,(%esi);");
    asm("loc_65D41D3: mov %ecx,8(%edx);");
    asm("loc_65D41D6: mov %edx,4(%ecx);");
    asm("loc_65D41D9: mov 4(%eax),%ecx;");
    asm("loc_65D41DC: mov 8(%ecx),%ecx;");
    asm("loc_65D41DF: mov 4(%eax),%edx;");
    asm("loc_65D41E2: mov 0x2C(%edx),%dl;");
    asm("loc_65D41E5: mov %dl,0x2C(%ecx);");
    asm("loc_65D41E8: mov 4(%eax),%edx;");
    asm("loc_65D41EB: mov %bl,0x2C(%edx);");
    asm("loc_65D41EE: mov 8(%ecx),%ecx;");
    asm("loc_65D41F1: mov %bl,0x2C(%ecx);");
    asm("loc_65D41F4: mov 4(%eax),%ecx;");
    asm("loc_65D41F7: mov 8(%ecx),%edx;");
    asm("loc_65D41FA: mov (%edx),%esi;");
    asm("loc_65D41FC: mov %esi,8(%ecx);");
    asm("loc_65D41FF: mov (%edx),%esi;");
    asm("loc_65D4201: cmp 8(%edi),%esi;");
    asm("loc_65D4204: je loc_65D4209;");
    asm("loc_65D4206: mov %ecx,4(%esi);");
    asm("loc_65D4209: mov 4(%ecx),%esi;");
    asm("loc_65D420C: mov %esi,4(%edx);");
    asm("loc_65D420F: mov 4(%edi),%esi;");
    asm("loc_65D4212: cmp 4(%esi),%ecx;");
    asm("loc_65D4215: jne loc_65D4221;");
    asm("loc_65D4217: mov %edx,4(%esi);");
    asm("loc_65D421A: mov %ecx,(%edx);");
    asm("loc_65D421C: jmp loc_65D42D7;");
    asm("loc_65D4221: mov 4(%ecx),%esi;");
    asm("loc_65D4224: cmp (%esi),%ecx;");
    asm("loc_65D4226: jne loc_65D4231;");
    asm("loc_65D4228: mov %edx,(%esi);");
    asm("loc_65D422A: mov %ecx,(%edx);");
    asm("loc_65D422C: jmp loc_65D42D7;");
    asm("loc_65D4231: mov %edx,8(%esi);");
    asm("loc_65D4234: mov %ecx,(%edx);");
    asm("loc_65D4236: jmp loc_65D42D7;");
    asm("loc_65D423B: mov (%ecx),%edx;");
    asm("loc_65D423D: cmp %bl,0x2C(%edx);");
    asm("loc_65D4240: jne loc_65D4289;");
    asm("loc_65D4242: mov 8(%ecx),%edx;");
    asm("loc_65D4245: mov %bl,0x2C(%edx);");
    asm("loc_65D4248: mov 8(%ecx),%edx;");
    asm("loc_65D424B: movb $0,0x2C(%ecx);");
    asm("loc_65D424F: mov (%edx),%esi;");
    asm("loc_65D4251: mov %esi,8(%ecx);");
    asm("loc_65D4254: mov (%edx),%esi;");
    asm("loc_65D4256: cmp 8(%edi),%esi;");
    asm("loc_65D4259: je loc_65D425E;");
    asm("loc_65D425B: mov %ecx,4(%esi);");
    asm("loc_65D425E: mov 4(%ecx),%esi;");
    asm("loc_65D4261: mov %esi,4(%edx);");
    asm("loc_65D4264: mov 4(%edi),%esi;");
    asm("loc_65D4267: cmp 4(%esi),%ecx;");
    asm("loc_65D426A: jne loc_65D4271;");
    asm("loc_65D426C: mov %edx,4(%esi);");
    asm("loc_65D426F: jmp loc_65D427F;");
    asm("loc_65D4271: mov 4(%ecx),%esi;");
    asm("loc_65D4274: cmp (%esi),%ecx;");
    asm("loc_65D4276: jne loc_65D427C;");
    asm("loc_65D4278: mov %edx,(%esi);");
    asm("loc_65D427A: jmp loc_65D427F;");
    asm("loc_65D427C: mov %edx,8(%esi);");
    asm("loc_65D427F: mov %ecx,(%edx);");
    asm("loc_65D4281: mov %edx,4(%ecx);");
    asm("loc_65D4284: mov 4(%eax),%ecx;");
    asm("loc_65D4287: mov (%ecx),%ecx;");
    asm("loc_65D4289: mov 4(%eax),%edx;");
    asm("loc_65D428C: mov 0x2C(%edx),%dl;");
    asm("loc_65D428F: mov %dl,0x2C(%ecx);");
    asm("loc_65D4292: mov 4(%eax),%edx;");
    asm("loc_65D4295: mov %bl,0x2C(%edx);");
    asm("loc_65D4298: mov (%ecx),%ecx;");
    asm("loc_65D429A: mov %bl,0x2C(%ecx);");
    asm("loc_65D429D: mov 4(%eax),%ecx;");
    asm("loc_65D42A0: mov (%ecx),%edx;");
    asm("loc_65D42A2: mov 8(%edx),%esi;");
    asm("loc_65D42A5: mov %esi,(%ecx);");
    asm("loc_65D42A7: mov 8(%edx),%esi;");
    asm("loc_65D42AA: cmp 8(%edi),%esi;");
    asm("loc_65D42AD: je loc_65D42B2;");
    asm("loc_65D42AF: mov %ecx,4(%esi);");
    asm("loc_65D42B2: mov 4(%ecx),%esi;");
    asm("loc_65D42B5: mov %esi,4(%edx);");
    asm("loc_65D42B8: mov 4(%edi),%esi;");
    asm("loc_65D42BB: cmp 4(%esi),%ecx;");
    asm("loc_65D42BE: jne loc_65D42C5;");
    asm("loc_65D42C0: mov %edx,4(%esi);");
    asm("loc_65D42C3: jmp loc_65D42D4;");
    asm("loc_65D42C5: mov 4(%ecx),%esi;");
    asm("loc_65D42C8: cmp 8(%esi),%ecx;");
    asm("loc_65D42CB: jne loc_65D42D2;");
    asm("loc_65D42CD: mov %edx,8(%esi);");
    asm("loc_65D42D0: jmp loc_65D42D4;");
    asm("loc_65D42D2: mov %edx,(%esi);");
    asm("loc_65D42D4: mov %ecx,8(%edx);");
    asm("loc_65D42D7: mov %edx,4(%ecx);");
    asm("loc_65D42DA: mov 0x10(%esp),%esi;");
    asm("loc_65D42DE: mov %bl,0x2C(%eax);");
    asm("loc_65D42E1: lea 0xC(%esi),%ecx;");
    asm("loc_65D42E4: call _sub_65D3930;");
    asm("loc_65D42E9: push %esi;");
    asm("loc_65D42EA: call _sub_65D6CB8;");
    asm("loc_65D42EF: mov 0x10(%edi),%eax;");
    asm("loc_65D42F2: mov 0x20(%esp),%edx;");
    asm("loc_65D42F6: add $4,%esp;");
    asm("loc_65D42F9: dec %eax;");
    asm("loc_65D42FA: mov %eax,0x10(%edi);");
    asm("loc_65D42FD: mov 0x18(%esp),%eax;");
    asm("loc_65D4301: pop %edi;");
    asm("loc_65D4302: pop %esi;");
    asm("loc_65D4303: pop %ebp;");
    asm("loc_65D4304: mov %edx,(%eax);");
    asm("loc_65D4306: pop %ebx;");
    asm("loc_65D4307: pop %ecx;");
    asm("loc_65D4308: ret $8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D4310() // _sub_65D4310
{
    __DEBUG_ASM(65D4310);
    // chunk 0x65D4310 _sub_65D4310
    asm("loc_65D4310: push %ebx;");
    asm("loc_65D4311: mov %ecx,%ebx;");
    asm("loc_65D4313: push %esi;");
    asm("loc_65D4314: push %edi;");
    asm("loc_65D4315: mov 0x10(%esp),%edi;");
    asm("loc_65D4319: mov 8(%ebx),%eax;");
    asm("loc_65D431C: cmp %eax,%edi;");
    asm("loc_65D431E: mov %edi,%esi;");
    asm("loc_65D4320: je loc_65D4349;");
    asm("loc_65D4322: mov 8(%esi),%eax;");
    asm("loc_65D4325: mov %ebx,%ecx;");
    asm("loc_65D4327: push %eax;");
    asm("loc_65D4328: call _sub_65D4310;");
    asm("loc_65D432D: mov (%esi),%esi;");
    asm("loc_65D432F: lea 0xC(%edi),%ecx;");
    asm("loc_65D4332: call _sub_65D3930;");
    asm("loc_65D4337: push %edi;");
    asm("loc_65D4338: call _sub_65D6CB8;");
    asm("loc_65D433D: mov 8(%ebx),%eax;");
    asm("loc_65D4340: add $4,%esp;");
    asm("loc_65D4343: cmp %eax,%esi;");
    asm("loc_65D4345: mov %esi,%edi;");
    asm("loc_65D4347: jne loc_65D4322;");
    asm("loc_65D4349: pop %edi;");
    asm("loc_65D434A: pop %esi;");
    asm("loc_65D434B: pop %ebx;");
    asm("loc_65D434C: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D4350() // _sub_65D4350
{
    __DEBUG_ASM(65D4350);
    // chunk 0x65D4350 _sub_65D4350
    asm("loc_65D4350: push %ebp;");
    asm("loc_65D4351: mov %esp,%ebp;");
    asm("loc_65D4353: push $0xFFFFFFFF;");
    asm("loc_65D4355: push $_sub_65E0000;");
    asm("loc_65D435A: mov %fs:0,%eax;");
    asm("loc_65D4360: push %eax;");
    asm("loc_65D4361: mov %esp,%fs:0;");
    asm("loc_65D4368: sub $0xC,%esp;");
    asm("loc_65D436B: mov 8(%ebp),%eax;");
    asm("loc_65D436E: push %ebx;");
    asm("loc_65D436F: push %esi;");
    asm("loc_65D4370: mov %eax,%esi;");
    asm("loc_65D4372: or $0x1F,%esi;");
    asm("loc_65D4375: push %edi;");
    asm("loc_65D4376: mov %ecx,%ebx;");
    asm("loc_65D4378: cmp $0xFFFFFFFD,%esi;");
    asm("loc_65D437B: mov %esp,-0x10(%ebp);");
    asm("loc_65D437E: mov %ebx,-0x18(%ebp);");
    asm("loc_65D4381: mov %esi,-0x14(%ebp);");
    asm("loc_65D4384: jbe loc_65D438B;");
    asm("loc_65D4386: mov %eax,-0x14(%ebp);");
    asm("loc_65D4389: mov %eax,%esi;");
    asm("loc_65D438B: lea 2(%esi),%eax;");
    asm("loc_65D438E: movl $0,-4(%ebp);");
    asm("loc_65D4395: test %eax,%eax;");
    asm("loc_65D4397: jge loc_65D439B;");
    asm("loc_65D4399: xor %eax,%eax;");
    asm("loc_65D439B: push %eax;");
    asm("loc_65D439C: call _sub_65D6F71;");
    asm("loc_65D43A1: add $4,%esp;");
    asm("loc_65D43A4: mov %eax,8(%ebp);");
    asm("loc_65D43A7: jmp loc_65D43D0;");
    asm("loc_65D43A9: mov 8(%ebp),%eax;");
    asm("loc_65D43AC: mov %eax,-0x14(%ebp);");
    asm("loc_65D43AF: add $2,%eax;");
    asm("loc_65D43B2: test %eax,%eax;");
    asm("loc_65D43B4: jge loc_65D43B8;");
    asm("loc_65D43B6: xor %eax,%eax;");
    asm("loc_65D43B8: push %eax;");
    asm("loc_65D43B9: call _sub_65D6F71;");
    asm("loc_65D43BE: mov %eax,8(%ebp);");
    asm("loc_65D43C1: add $4,%esp;");
    asm("loc_65D43C4: mov $loc_65D43CA,%eax;");
    asm("loc_65D43C9: ret;");
    asm("loc_65D43CA: mov -0x18(%ebp),%ebx;");
    asm("loc_65D43CD: mov -0x14(%ebp),%esi;");
    asm("loc_65D43D0: mov 8(%ebx),%eax;");
    asm("loc_65D43D3: test %eax,%eax;");
    asm("loc_65D43D5: jbe loc_65D43F9;");
    asm("loc_65D43D7: cmp %esi,%eax;");
    asm("loc_65D43D9: jbe loc_65D43DD;");
    asm("loc_65D43DB: mov %esi,%eax;");
    asm("loc_65D43DD: mov 4(%ebx),%esi;");
    asm("loc_65D43E0: mov %eax,%ecx;");
    asm("loc_65D43E2: mov 8(%ebp),%eax;");
    asm("loc_65D43E5: mov %ecx,%edx;");
    asm("loc_65D43E7: shr $2,%ecx;");
    asm("loc_65D43EA: lea 1(%eax),%edi;");
    asm("loc_65D43ED: rep movsl (%esi),(%edi);");
    asm("loc_65D43EF: mov %edx,%ecx;");
    asm("loc_65D43F1: and $3,%ecx;");
    asm("loc_65D43F4: rep movsb (%esi),(%edi);");
    asm("loc_65D43F6: mov -0x14(%ebp),%esi;");
    asm("loc_65D43F9: mov 4(%ebx),%eax;");
    asm("loc_65D43FC: mov 8(%ebx),%edi;");
    asm("loc_65D43FF: test %eax,%eax;");
    asm("loc_65D4401: je loc_65D441F;");
    asm("loc_65D4403: mov -1(%eax),%cl;");
    asm("loc_65D4406: dec %eax;");
    asm("loc_65D4407: test %cl,%cl;");
    asm("loc_65D4409: je loc_65D4416;");
    asm("loc_65D440B: cmp $0xFF,%cl;");
    asm("loc_65D440E: je loc_65D4416;");
    asm("loc_65D4410: dec %cl;");
    asm("loc_65D4412: mov %cl,(%eax);");
    asm("loc_65D4414: jmp loc_65D441F;");
    asm("loc_65D4416: push %eax;");
    asm("loc_65D4417: call _sub_65D6CB8;");
    asm("loc_65D441C: add $4,%esp;");
    asm("loc_65D441F: mov 8(%ebp),%eax;");
    asm("loc_65D4422: movl $0,8(%ebx);");
    asm("loc_65D4429: inc %eax;");
    asm("loc_65D442A: cmp %esi,%edi;");
    asm("loc_65D442C: mov %eax,4(%ebx);");
    asm("loc_65D442F: movb $0,-1(%eax);");
    asm("loc_65D4433: mov %esi,0xC(%ebx);");
    asm("loc_65D4436: ja loc_65D443A;");
    asm("loc_65D4438: mov %edi,%esi;");
    asm("loc_65D443A: mov 4(%ebx),%ecx;");
    asm("loc_65D443D: mov %esi,8(%ebx);");
    asm("loc_65D4440: pop %edi;");
    asm("loc_65D4441: movb $0,(%esi,%ecx);");
    asm("loc_65D4445: mov -0xC(%ebp),%ecx;");
    asm("loc_65D4448: pop %esi;");
    asm("loc_65D4449: mov %ecx,%fs:0;");
    asm("loc_65D4450: pop %ebx;");
    asm("loc_65D4451: mov %ebp,%esp;");
    asm("loc_65D4453: pop %ebp;");
    asm("loc_65D4454: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D4460() // _sub_65D4460
{
    __DEBUG_ASM(65D4460);
    // chunk 0x65D4460 _sub_65D4460
    asm("loc_65D4460: push %ecx;");
    asm("loc_65D4461: push %ebx;");
    asm("loc_65D4462: push %ebp;");
    asm("loc_65D4463: mov %ecx,%ebp;");
    asm("loc_65D4465: push %esi;");
    asm("loc_65D4466: xor %esi,%esi;");
    asm("loc_65D4468: push %edi;");
    asm("loc_65D4469: mov 4(%ebp),%eax;");
    asm("loc_65D446C: cmp %esi,%eax;");
    asm("loc_65D446E: je loc_65D452F;");
    asm("loc_65D4474: mov -1(%eax),%cl;");
    asm("loc_65D4477: test %cl,%cl;");
    asm("loc_65D4479: je loc_65D452F;");
    asm("loc_65D447F: cmp $0xFF,%cl;");
    asm("loc_65D4482: je loc_65D452F;");
    asm("loc_65D4488: mov %cl,%bl;");
    asm("loc_65D448A: mov %eax,%edi;");
    asm("loc_65D448C: dec %bl;");
    asm("loc_65D448E: or $0xFFFFFFFF,%ecx;");
    asm("loc_65D4491: mov %bl,-1(%eax);");
    asm("loc_65D4494: xor %eax,%eax;");
    asm("loc_65D4496: mov %edi,0x10(%esp);");
    asm("loc_65D449A: mov %esi,4(%ebp);");
    asm("loc_65D449D: mov %esi,8(%ebp);");
    asm("loc_65D44A0: mov %esi,0xC(%ebp);");
    asm("loc_65D44A3: repne scas (%edi),%al;");
    asm("loc_65D44A5: not %ecx;");
    asm("loc_65D44A7: dec %ecx;");
    asm("loc_65D44A8: mov %ecx,%ebx;");
    asm("loc_65D44AA: cmp $0xFFFFFFFD,%ebx;");
    asm("loc_65D44AD: jbe loc_65D44B4;");
    asm("loc_65D44AF: call _sub_65D6CC3;");
    asm("loc_65D44B4: mov 4(%ebp),%eax;");
    asm("loc_65D44B7: cmp %esi,%eax;");
    asm("loc_65D44B9: je loc_65D44DE;");
    asm("loc_65D44BB: mov -1(%eax),%cl;");
    asm("loc_65D44BE: test %cl,%cl;");
    asm("loc_65D44C0: je loc_65D44DE;");
    asm("loc_65D44C2: cmp $0xFF,%cl;");
    asm("loc_65D44C5: je loc_65D44DE;");
    asm("loc_65D44C7: cmp %esi,%ebx;");
    asm("loc_65D44C9: jne loc_65D4506;");
    asm("loc_65D44CB: dec %cl;");
    asm("loc_65D44CD: push %esi;");
    asm("loc_65D44CE: mov %cl,-1(%eax);");
    asm("loc_65D44D1: mov %ebp,%ecx;");
    asm("loc_65D44D3: call _sub_65D3B40;");
    asm("loc_65D44D8: pop %edi;");
    asm("loc_65D44D9: pop %esi;");
    asm("loc_65D44DA: pop %ebp;");
    asm("loc_65D44DB: pop %ebx;");
    asm("loc_65D44DC: pop %ecx;");
    asm("loc_65D44DD: ret;");
    asm("loc_65D44DE: cmp %esi,%ebx;");
    asm("loc_65D44E0: jne loc_65D44F1;");
    asm("loc_65D44E2: push $1;");
    asm("loc_65D44E4: mov %ebp,%ecx;");
    asm("loc_65D44E6: call _sub_65D3B40;");
    asm("loc_65D44EB: pop %edi;");
    asm("loc_65D44EC: pop %esi;");
    asm("loc_65D44ED: pop %ebp;");
    asm("loc_65D44EE: pop %ebx;");
    asm("loc_65D44EF: pop %ecx;");
    asm("loc_65D44F0: ret;");
    asm("loc_65D44F1: mov 0xC(%ebp),%eax;");
    asm("loc_65D44F4: cmp $0x1F,%eax;");
    asm("loc_65D44F7: ja loc_65D44FD;");
    asm("loc_65D44F9: cmp %ebx,%eax;");
    asm("loc_65D44FB: jae loc_65D450E;");
    asm("loc_65D44FD: push $1;");
    asm("loc_65D44FF: mov %ebp,%ecx;");
    asm("loc_65D4501: call _sub_65D3B40;");
    asm("loc_65D4506: mov %ebp,%ecx;");
    asm("loc_65D4508: push %ebx;");
    asm("loc_65D4509: call _sub_65D4350;");
    asm("loc_65D450E: mov 0x10(%esp),%esi;");
    asm("loc_65D4512: mov 4(%ebp),%edi;");
    asm("loc_65D4515: mov %ebx,%ecx;");
    asm("loc_65D4517: mov %ecx,%eax;");
    asm("loc_65D4519: shr $2,%ecx;");
    asm("loc_65D451C: rep movsl (%esi),(%edi);");
    asm("loc_65D451E: mov %eax,%ecx;");
    asm("loc_65D4520: and $3,%ecx;");
    asm("loc_65D4523: rep movsb (%esi),(%edi);");
    asm("loc_65D4525: mov 4(%ebp),%ecx;");
    asm("loc_65D4528: mov %ebx,8(%ebp);");
    asm("loc_65D452B: movb $0,(%ebx,%ecx);");
    asm("loc_65D452F: pop %edi;");
    asm("loc_65D4530: pop %esi;");
    asm("loc_65D4531: pop %ebp;");
    asm("loc_65D4532: pop %ebx;");
    asm("loc_65D4533: pop %ecx;");
    asm("loc_65D4534: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D4540() // _sub_65D4540
{
    __DEBUG_ASM(65D4540);
    // chunk 0x65D4540 _sub_65D4540
    asm("loc_65D4540: push %ebx;");
    asm("loc_65D4541: push %ebp;");
    asm("loc_65D4542: push %esi;");
    asm("loc_65D4543: push %edi;");
    asm("loc_65D4544: push $0x30;");
    asm("loc_65D4546: mov %ecx,%esi;");
    asm("loc_65D4548: call _sub_65D6F71;");
    asm("loc_65D454D: mov 0x20(%esp),%edi;");
    asm("loc_65D4551: mov 0x24(%esp),%ebp;");
    asm("loc_65D4555: mov %eax,%ebx;");
    asm("loc_65D4557: push %ebp;");
    asm("loc_65D4558: mov %edi,4(%ebx);");
    asm("loc_65D455B: movb $0,0x2C(%ebx);");
    asm("loc_65D455F: movb $0,0x2D(%ebx);");
    asm("loc_65D4563: mov 8(%esi),%eax;");
    asm("loc_65D4566: mov %eax,(%ebx);");
    asm("loc_65D4568: mov 8(%esi),%ecx;");
    asm("loc_65D456B: lea 0xC(%ebx),%edx;");
    asm("loc_65D456E: mov %ecx,8(%ebx);");
    asm("loc_65D4571: push %edx;");
    asm("loc_65D4572: call _sub_65D4B80;");
    asm("loc_65D4577: mov 0x10(%esi),%ecx;");
    asm("loc_65D457A: mov 4(%esi),%eax;");
    asm("loc_65D457D: add $0xC,%esp;");
    asm("loc_65D4580: inc %ecx;");
    asm("loc_65D4581: cmp %eax,%edi;");
    asm("loc_65D4583: mov %ecx,0x10(%esi);");
    asm("loc_65D4586: je loc_65D45B2;");
    asm("loc_65D4588: mov 0x18(%esp),%eax;");
    asm("loc_65D458C: mov 8(%esi),%ecx;");
    asm("loc_65D458F: cmp %ecx,%eax;");
    asm("loc_65D4591: jne loc_65D45B2;");
    asm("loc_65D4593: lea 0xC(%edi),%ecx;");
    asm("loc_65D4596: push %ecx;");
    asm("loc_65D4597: mov %ebp,%ecx;");
    asm("loc_65D4599: call _sub_65D5020;");
    asm("loc_65D459E: test %eax,%eax;");
    asm("loc_65D45A0: jl loc_65D45B2;");
    asm("loc_65D45A2: mov %ebx,8(%edi);");
    asm("loc_65D45A5: mov 4(%esi),%eax;");
    asm("loc_65D45A8: cmp 8(%eax),%edi;");
    asm("loc_65D45AB: jne loc_65D45CC;");
    asm("loc_65D45AD: mov %ebx,8(%eax);");
    asm("loc_65D45B0: jmp loc_65D45CC;");
    asm("loc_65D45B2: mov %ebx,(%edi);");
    asm("loc_65D45B4: mov 4(%esi),%eax;");
    asm("loc_65D45B7: cmp %eax,%edi;");
    asm("loc_65D45B9: jne loc_65D45C6;");
    asm("loc_65D45BB: mov %ebx,4(%eax);");
    asm("loc_65D45BE: mov 4(%esi),%edx;");
    asm("loc_65D45C1: mov %ebx,8(%edx);");
    asm("loc_65D45C4: jmp loc_65D45CC;");
    asm("loc_65D45C6: cmp (%eax),%edi;");
    asm("loc_65D45C8: jne loc_65D45CC;");
    asm("loc_65D45CA: mov %ebx,(%eax);");
    asm("loc_65D45CC: mov 4(%esi),%ecx;");
    asm("loc_65D45CF: mov %ebx,%eax;");
    asm("loc_65D45D1: cmp 4(%ecx),%ebx;");
    asm("loc_65D45D4: je loc_65D4777;");
    asm("loc_65D45DA: mov 4(%eax),%ecx;");
    asm("loc_65D45DD: mov 0x2C(%ecx),%dl;");
    asm("loc_65D45E0: test %dl,%dl;");
    asm("loc_65D45E2: jne loc_65D4777;");
    asm("loc_65D45E8: mov 4(%ecx),%edi;");
    asm("loc_65D45EB: mov (%edi),%edx;");
    asm("loc_65D45ED: cmp %edx,%ecx;");
    asm("loc_65D45EF: jne loc_65D46B9;");
    asm("loc_65D45F5: mov 8(%edi),%edx;");
    asm("loc_65D45F8: cmpb $0,0x2C(%edx);");
    asm("loc_65D45FC: jne loc_65D461B;");
    asm("loc_65D45FE: movb $1,0x2C(%ecx);");
    asm("loc_65D4602: movb $1,0x2C(%edx);");
    asm("loc_65D4606: mov 4(%eax),%edx;");
    asm("loc_65D4609: mov 4(%edx),%ecx;");
    asm("loc_65D460C: movb $0,0x2C(%ecx);");
    asm("loc_65D4610: mov 4(%eax),%edx;");
    asm("loc_65D4613: mov 4(%edx),%eax;");
    asm("loc_65D4616: jmp loc_65D476B;");
    asm("loc_65D461B: cmp 8(%ecx),%eax;");
    asm("loc_65D461E: jne loc_65D465A;");
    asm("loc_65D4620: mov %ecx,%eax;");
    asm("loc_65D4622: mov 8(%eax),%ecx;");
    asm("loc_65D4625: mov (%ecx),%edx;");
    asm("loc_65D4627: mov %edx,8(%eax);");
    asm("loc_65D462A: mov (%ecx),%edx;");
    asm("loc_65D462C: cmp 8(%esi),%edx;");
    asm("loc_65D462F: je loc_65D4634;");
    asm("loc_65D4631: mov %eax,4(%edx);");
    asm("loc_65D4634: mov 4(%eax),%edx;");
    asm("loc_65D4637: mov %edx,4(%ecx);");
    asm("loc_65D463A: mov 4(%esi),%edx;");
    asm("loc_65D463D: cmp 4(%edx),%eax;");
    asm("loc_65D4640: jne loc_65D4647;");
    asm("loc_65D4642: mov %ecx,4(%edx);");
    asm("loc_65D4645: jmp loc_65D4655;");
    asm("loc_65D4647: mov 4(%eax),%edx;");
    asm("loc_65D464A: cmp (%edx),%eax;");
    asm("loc_65D464C: jne loc_65D4652;");
    asm("loc_65D464E: mov %ecx,(%edx);");
    asm("loc_65D4650: jmp loc_65D4655;");
    asm("loc_65D4652: mov %ecx,8(%edx);");
    asm("loc_65D4655: mov %eax,(%ecx);");
    asm("loc_65D4657: mov %ecx,4(%eax);");
    asm("loc_65D465A: mov 4(%eax),%ecx;");
    asm("loc_65D465D: movb $1,0x2C(%ecx);");
    asm("loc_65D4661: mov 4(%eax),%edx;");
    asm("loc_65D4664: mov 4(%edx),%ecx;");
    asm("loc_65D4667: movb $0,0x2C(%ecx);");
    asm("loc_65D466B: mov 4(%eax),%edx;");
    asm("loc_65D466E: mov 4(%edx),%ecx;");
    asm("loc_65D4671: mov (%ecx),%edx;");
    asm("loc_65D4673: mov 8(%edx),%edi;");
    asm("loc_65D4676: mov %edi,(%ecx);");
    asm("loc_65D4678: mov 8(%edx),%edi;");
    asm("loc_65D467B: cmp 8(%esi),%edi;");
    asm("loc_65D467E: je loc_65D4683;");
    asm("loc_65D4680: mov %ecx,4(%edi);");
    asm("loc_65D4683: mov 4(%ecx),%edi;");
    asm("loc_65D4686: mov %edi,4(%edx);");
    asm("loc_65D4689: mov 4(%esi),%edi;");
    asm("loc_65D468C: cmp 4(%edi),%ecx;");
    asm("loc_65D468F: jne loc_65D469C;");
    asm("loc_65D4691: mov %edx,4(%edi);");
    asm("loc_65D4694: mov %ecx,8(%edx);");
    asm("loc_65D4697: jmp loc_65D4768;");
    asm("loc_65D469C: mov 4(%ecx),%edi;");
    asm("loc_65D469F: cmp 8(%edi),%ecx;");
    asm("loc_65D46A2: jne loc_65D46AF;");
    asm("loc_65D46A4: mov %edx,8(%edi);");
    asm("loc_65D46A7: mov %ecx,8(%edx);");
    asm("loc_65D46AA: jmp loc_65D4768;");
    asm("loc_65D46AF: mov %edx,(%edi);");
    asm("loc_65D46B1: mov %ecx,8(%edx);");
    asm("loc_65D46B4: jmp loc_65D4768;");
    asm("loc_65D46B9: cmpb $0,0x2C(%edx);");
    asm("loc_65D46BD: jne loc_65D46DC;");
    asm("loc_65D46BF: movb $1,0x2C(%ecx);");
    asm("loc_65D46C3: movb $1,0x2C(%edx);");
    asm("loc_65D46C7: mov 4(%eax),%ecx;");
    asm("loc_65D46CA: mov 4(%ecx),%edx;");
    asm("loc_65D46CD: movb $0,0x2C(%edx);");
    asm("loc_65D46D1: mov 4(%eax),%eax;");
    asm("loc_65D46D4: mov 4(%eax),%eax;");
    asm("loc_65D46D7: jmp loc_65D476B;");
    asm("loc_65D46DC: cmp (%ecx),%eax;");
    asm("loc_65D46DE: jne loc_65D471C;");
    asm("loc_65D46E0: mov %ecx,%eax;");
    asm("loc_65D46E2: mov (%eax),%ecx;");
    asm("loc_65D46E4: mov 8(%ecx),%edx;");
    asm("loc_65D46E7: mov %edx,(%eax);");
    asm("loc_65D46E9: mov 8(%ecx),%edx;");
    asm("loc_65D46EC: cmp 8(%esi),%edx;");
    asm("loc_65D46EF: je loc_65D46F4;");
    asm("loc_65D46F1: mov %eax,4(%edx);");
    asm("loc_65D46F4: mov 4(%eax),%edx;");
    asm("loc_65D46F7: mov %edx,4(%ecx);");
    asm("loc_65D46FA: mov 4(%esi),%edx;");
    asm("loc_65D46FD: cmp 4(%edx),%eax;");
    asm("loc_65D4700: jne loc_65D4707;");
    asm("loc_65D4702: mov %ecx,4(%edx);");
    asm("loc_65D4705: jmp loc_65D4716;");
    asm("loc_65D4707: mov 4(%eax),%edx;");
    asm("loc_65D470A: cmp 8(%edx),%eax;");
    asm("loc_65D470D: jne loc_65D4714;");
    asm("loc_65D470F: mov %ecx,8(%edx);");
    asm("loc_65D4712: jmp loc_65D4716;");
    asm("loc_65D4714: mov %ecx,(%edx);");
    asm("loc_65D4716: mov %eax,8(%ecx);");
    asm("loc_65D4719: mov %ecx,4(%eax);");
    asm("loc_65D471C: mov 4(%eax),%ecx;");
    asm("loc_65D471F: movb $1,0x2C(%ecx);");
    asm("loc_65D4723: mov 4(%eax),%edx;");
    asm("loc_65D4726: mov 4(%edx),%ecx;");
    asm("loc_65D4729: movb $0,0x2C(%ecx);");
    asm("loc_65D472D: mov 4(%eax),%edx;");
    asm("loc_65D4730: mov 4(%edx),%ecx;");
    asm("loc_65D4733: mov 8(%ecx),%edx;");
    asm("loc_65D4736: mov (%edx),%edi;");
    asm("loc_65D4738: mov %edi,8(%ecx);");
    asm("loc_65D473B: mov (%edx),%edi;");
    asm("loc_65D473D: cmp 8(%esi),%edi;");
    asm("loc_65D4740: je loc_65D4745;");
    asm("loc_65D4742: mov %ecx,4(%edi);");
    asm("loc_65D4745: mov 4(%ecx),%edi;");
    asm("loc_65D4748: mov %edi,4(%edx);");
    asm("loc_65D474B: mov 4(%esi),%edi;");
    asm("loc_65D474E: cmp 4(%edi),%ecx;");
    asm("loc_65D4751: jne loc_65D4758;");
    asm("loc_65D4753: mov %edx,4(%edi);");
    asm("loc_65D4756: jmp loc_65D4766;");
    asm("loc_65D4758: mov 4(%ecx),%edi;");
    asm("loc_65D475B: cmp (%edi),%ecx;");
    asm("loc_65D475D: jne loc_65D4763;");
    asm("loc_65D475F: mov %edx,(%edi);");
    asm("loc_65D4761: jmp loc_65D4766;");
    asm("loc_65D4763: mov %edx,8(%edi);");
    asm("loc_65D4766: mov %ecx,(%edx);");
    asm("loc_65D4768: mov %edx,4(%ecx);");
    asm("loc_65D476B: mov 4(%esi),%ecx;");
    asm("loc_65D476E: cmp 4(%ecx),%eax;");
    asm("loc_65D4771: jne loc_65D45DA;");
    asm("loc_65D4777: mov 4(%esi),%edx;");
    asm("loc_65D477A: pop %edi;");
    asm("loc_65D477B: pop %esi;");
    asm("loc_65D477C: pop %ebp;");
    asm("loc_65D477D: mov 4(%edx),%eax;");
    asm("loc_65D4780: movb $1,0x2C(%eax);");
    asm("loc_65D4784: mov 8(%esp),%eax;");
    asm("loc_65D4788: mov %ebx,(%eax);");
    asm("loc_65D478A: pop %ebx;");
    asm("loc_65D478B: ret $0x10;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D4790() // _sub_65D4790
{
    __DEBUG_ASM(65D4790);
    // chunk 0x65D4790 _sub_65D4790
    asm("loc_65D4790: mov (%ecx),%eax;");
    asm("loc_65D4792: push %ebx;");
    asm("loc_65D4793: mov 0x2C(%eax),%dl;");
    asm("loc_65D4796: test %dl,%dl;");
    asm("loc_65D4798: jne loc_65D47A9;");
    asm("loc_65D479A: mov 4(%eax),%edx;");
    asm("loc_65D479D: cmp %eax,4(%edx);");
    asm("loc_65D47A0: jne loc_65D47A9;");
    asm("loc_65D47A2: mov 8(%eax),%eax;");
    asm("loc_65D47A5: mov %eax,(%ecx);");
    asm("loc_65D47A7: pop %ebx;");
    asm("loc_65D47A8: ret;");
    asm("loc_65D47A9: mov (%eax),%edx;");
    asm("loc_65D47AB: mov 0x2D(%edx),%bl;");
    asm("loc_65D47AE: test %bl,%bl;");
    asm("loc_65D47B0: jne loc_65D47CC;");
    asm("loc_65D47B2: mov 8(%edx),%eax;");
    asm("loc_65D47B5: mov 0x2D(%eax),%bl;");
    asm("loc_65D47B8: test %bl,%bl;");
    asm("loc_65D47BA: jne loc_65D47C8;");
    asm("loc_65D47BC: mov %eax,%edx;");
    asm("loc_65D47BE: mov 8(%edx),%eax;");
    asm("loc_65D47C1: mov 0x2D(%eax),%bl;");
    asm("loc_65D47C4: test %bl,%bl;");
    asm("loc_65D47C6: je loc_65D47BC;");
    asm("loc_65D47C8: mov %edx,(%ecx);");
    asm("loc_65D47CA: pop %ebx;");
    asm("loc_65D47CB: ret;");
    asm("loc_65D47CC: mov 4(%eax),%eax;");
    asm("loc_65D47CF: mov (%ecx),%edx;");
    asm("loc_65D47D1: cmp (%eax),%edx;");
    asm("loc_65D47D3: jne loc_65D47E0;");
    asm("loc_65D47D5: mov %eax,(%ecx);");
    asm("loc_65D47D7: mov 4(%eax),%eax;");
    asm("loc_65D47DA: mov (%ecx),%edx;");
    asm("loc_65D47DC: cmp (%eax),%edx;");
    asm("loc_65D47DE: je loc_65D47D5;");
    asm("loc_65D47E0: mov %eax,(%ecx);");
    asm("loc_65D47E2: pop %ebx;");
    asm("loc_65D47E3: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D47F0() // _sub_65D47F0
{
    __DEBUG_ASM(65D47F0);
    // chunk 0x65D47F0 _sub_65D47F0
    asm("loc_65D47F0: mov 8(%esp),%eax;");
    asm("loc_65D47F4: push %edi;");
    asm("loc_65D47F5: xor %edi,%edi;");
    asm("loc_65D47F7: cmpl $8,(%eax);");
    asm("loc_65D47FA: jne loc_65D488C;");
    asm("loc_65D4800: mov 8(%esp),%ecx;");
    asm("loc_65D4804: mov 4(%eax),%eax;");
    asm("loc_65D4807: push %esi;");
    asm("loc_65D4808: mov 8(%ecx),%esi;");
    asm("loc_65D480B: mov (%eax),%dl;");
    asm("loc_65D480D: mov %dl,%cl;");
    asm("loc_65D480F: cmp (%esi),%dl;");
    asm("loc_65D4811: jne loc_65D482F;");
    asm("loc_65D4813: test %cl,%cl;");
    asm("loc_65D4815: je loc_65D482B;");
    asm("loc_65D4817: mov 1(%eax),%dl;");
    asm("loc_65D481A: mov %dl,%cl;");
    asm("loc_65D481C: cmp 1(%esi),%dl;");
    asm("loc_65D481F: jne loc_65D482F;");
    asm("loc_65D4821: add $2,%eax;");
    asm("loc_65D4824: add $2,%esi;");
    asm("loc_65D4827: test %cl,%cl;");
    asm("loc_65D4829: jne loc_65D480B;");
    asm("loc_65D482B: xor %eax,%eax;");
    asm("loc_65D482D: jmp loc_65D4834;");
    asm("loc_65D482F: sbb %eax,%eax;");
    asm("loc_65D4831: sbb $0xFFFFFFFF,%eax;");
    asm("loc_65D4834: test %eax,%eax;");
    asm("loc_65D4836: pop %esi;");
    asm("loc_65D4837: jne loc_65D488C;");
    asm("loc_65D4839: push $0x18;");
    asm("loc_65D483B: call _sub_65D6F71;");
    asm("loc_65D4840: add $4,%esp;");
    asm("loc_65D4843: test %eax,%eax;");
    asm("loc_65D4845: je loc_65D4874;");
    asm("loc_65D4847: mov 0x10(%esp),%cl;");
    asm("loc_65D484B: movl $0,8(%eax);");
    asm("loc_65D4852: mov %cl,4(%eax);");
    asm("loc_65D4855: movl $0,0xC(%eax);");
    asm("loc_65D485C: movl $0,0x10(%eax);");
    asm("loc_65D4863: movl $_off_65E13A8,(%eax);");
    asm("loc_65D4869: movl $1,0x14(%eax);");
    asm("loc_65D4870: mov %eax,%ecx;");
    asm("loc_65D4872: jmp loc_65D4876;");
    asm("loc_65D4874: xor %ecx,%ecx;");
    asm("loc_65D4876: mov 0x10(%esp),%edx;");
    asm("loc_65D487A: mov %ecx,%eax;");
    asm("loc_65D487C: neg %eax;");
    asm("loc_65D487E: sbb %eax,%eax;");
    asm("loc_65D4880: mov %ecx,(%edx);");
    asm("loc_65D4882: and $4,%eax;");
    asm("loc_65D4885: pop %edi;");
    asm("loc_65D4886: add $0xFFFFFFFC,%eax;");
    asm("loc_65D4889: ret $0xC;");
    asm("loc_65D488C: mov 0x10(%esp),%ecx;");
    asm("loc_65D4890: mov $0xFFFFFFFD,%eax;");
    asm("loc_65D4895: mov %edi,(%ecx);");
    asm("loc_65D4897: pop %edi;");
    asm("loc_65D4898: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D48A0() // _sub_65D48A0
{
    __DEBUG_ASM(65D48A0);
    // chunk 0x65D48A0 _sub_65D48A0
    asm("loc_65D48A0: mov 4(%esp),%eax;");
    asm("loc_65D48A4: push %ebx;");
    asm("loc_65D48A5: push %ebp;");
    asm("loc_65D48A6: push %esi;");
    asm("loc_65D48A7: mov 0x14(%esp),%esi;");
    asm("loc_65D48AB: push %edi;");
    asm("loc_65D48AC: lea 4(%eax),%ebp;");
    asm("loc_65D48AF: mov %esi,%edi;");
    asm("loc_65D48B1: or $0xFFFFFFFF,%ecx;");
    asm("loc_65D48B4: xor %eax,%eax;");
    asm("loc_65D48B6: repne scas (%edi),%al;");
    asm("loc_65D48B8: not %ecx;");
    asm("loc_65D48BA: dec %ecx;");
    asm("loc_65D48BB: mov %ecx,%ebx;");
    asm("loc_65D48BD: cmp $0xFFFFFFFD,%ebx;");
    asm("loc_65D48C0: jbe loc_65D48C7;");
    asm("loc_65D48C2: call _sub_65D6CC3;");
    asm("loc_65D48C7: mov 4(%ebp),%eax;");
    asm("loc_65D48CA: xor %edx,%edx;");
    asm("loc_65D48CC: cmp %edx,%eax;");
    asm("loc_65D48CE: je loc_65D48F7;");
    asm("loc_65D48D0: mov -1(%eax),%cl;");
    asm("loc_65D48D3: test %cl,%cl;");
    asm("loc_65D48D5: je loc_65D48F7;");
    asm("loc_65D48D7: cmp $0xFF,%cl;");
    asm("loc_65D48DA: je loc_65D48F7;");
    asm("loc_65D48DC: cmp %edx,%ebx;");
    asm("loc_65D48DE: jne loc_65D4922;");
    asm("loc_65D48E0: dec %cl;");
    asm("loc_65D48E2: pop %edi;");
    asm("loc_65D48E3: mov %cl,-1(%eax);");
    asm("loc_65D48E6: mov %edx,4(%ebp);");
    asm("loc_65D48E9: mov %edx,8(%ebp);");
    asm("loc_65D48EC: mov %edx,0xC(%ebp);");
    asm("loc_65D48EF: pop %esi;");
    asm("loc_65D48F0: pop %ebp;");
    asm("loc_65D48F1: xor %eax,%eax;");
    asm("loc_65D48F3: pop %ebx;");
    asm("loc_65D48F4: ret $8;");
    asm("loc_65D48F7: cmp %edx,%ebx;");
    asm("loc_65D48F9: jne loc_65D490D;");
    asm("loc_65D48FB: push $1;");
    asm("loc_65D48FD: mov %ebp,%ecx;");
    asm("loc_65D48FF: call _sub_65D3B40;");
    asm("loc_65D4904: pop %edi;");
    asm("loc_65D4905: pop %esi;");
    asm("loc_65D4906: pop %ebp;");
    asm("loc_65D4907: xor %eax,%eax;");
    asm("loc_65D4909: pop %ebx;");
    asm("loc_65D490A: ret $8;");
    asm("loc_65D490D: mov 0xC(%ebp),%eax;");
    asm("loc_65D4910: cmp $0x1F,%eax;");
    asm("loc_65D4913: ja loc_65D4919;");
    asm("loc_65D4915: cmp %ebx,%eax;");
    asm("loc_65D4917: jae loc_65D492A;");
    asm("loc_65D4919: push $1;");
    asm("loc_65D491B: mov %ebp,%ecx;");
    asm("loc_65D491D: call _sub_65D3B40;");
    asm("loc_65D4922: mov %ebp,%ecx;");
    asm("loc_65D4924: push %ebx;");
    asm("loc_65D4925: call _sub_65D4350;");
    asm("loc_65D492A: mov 4(%ebp),%edi;");
    asm("loc_65D492D: mov %ebx,%ecx;");
    asm("loc_65D492F: mov %ecx,%edx;");
    asm("loc_65D4931: shr $2,%ecx;");
    asm("loc_65D4934: rep movsl (%esi),(%edi);");
    asm("loc_65D4936: mov %edx,%ecx;");
    asm("loc_65D4938: and $3,%ecx;");
    asm("loc_65D493B: rep movsb (%esi),(%edi);");
    asm("loc_65D493D: mov 4(%ebp),%eax;");
    asm("loc_65D4940: pop %edi;");
    asm("loc_65D4941: mov %ebx,8(%ebp);");
    asm("loc_65D4944: pop %esi;");
    asm("loc_65D4945: movb $0,(%ebx,%eax);");
    asm("loc_65D4949: pop %ebp;");
    asm("loc_65D494A: xor %eax,%eax;");
    asm("loc_65D494C: pop %ebx;");
    asm("loc_65D494D: ret $8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D4950() // _sub_65D4950
{
    __DEBUG_ASM(65D4950);
    // chunk 0x65D4950 _sub_65D4950
    asm("loc_65D4950: mov 4(%esp),%eax;");
    asm("loc_65D4954: push %esi;");
    asm("loc_65D4955: mov 0xC(%eax),%esi;");
    asm("loc_65D4958: mov 8(%eax),%eax;");
    asm("loc_65D495B: test %eax,%eax;");
    asm("loc_65D495D: jne loc_65D4964;");
    asm("loc_65D495F: mov $_data_65E13A4,%eax;");
    asm("loc_65D4964: mov 0xC(%esp),%ecx;");
    asm("loc_65D4968: push %esi;");
    asm("loc_65D4969: push %eax;");
    asm("loc_65D496A: push %ecx;");
    asm("loc_65D496B: mov (%ecx),%edx;");
    asm("loc_65D496D: calll *0x14(%edx);");
    asm("loc_65D4970: sub %esi,%eax;");
    asm("loc_65D4972: pop %esi;");
    asm("loc_65D4973: neg %eax;");
    asm("loc_65D4975: sbb %eax,%eax;");
    asm("loc_65D4977: ret $8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D4980() // _sub_65D4980
{
    __DEBUG_ASM(65D4980);
    // chunk 0x65D4980 _sub_65D4980
    asm("loc_65D4980: mov 4(%esp),%eax;");
    asm("loc_65D4984: mov 8(%esp),%edx;");
    asm("loc_65D4988: mov 0xC(%eax),%ecx;");
    asm("loc_65D498B: xor %eax,%eax;");
    asm("loc_65D498D: mov %ecx,(%edx);");
    asm("loc_65D498F: ret $8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D49A0() // _sub_65D49A0
{
    __DEBUG_ASM(65D49A0);
    // chunk 0x65D49A0 _sub_65D49A0
    asm("loc_65D49A0: mov _off_65E13C4,%eax;");
    asm("loc_65D49A5: push %ebx;");
    asm("loc_65D49A6: push %ebp;");
    asm("loc_65D49A7: push %esi;");
    asm("loc_65D49A8: push %edi;");
    asm("loc_65D49A9: xor %edi,%edi;");
    asm("loc_65D49AB: test %eax,%eax;");
    asm("loc_65D49AD: je loc_65D49F2;");
    asm("loc_65D49AF: mov 0x18(%esp),%ebp;");
    asm("loc_65D49B3: mov %ebp,%esi;");
    asm("loc_65D49B5: mov (%eax),%dl;");
    asm("loc_65D49B7: mov (%esi),%bl;");
    asm("loc_65D49B9: mov %dl,%cl;");
    asm("loc_65D49BB: cmp %bl,%dl;");
    asm("loc_65D49BD: jne loc_65D49DD;");
    asm("loc_65D49BF: test %cl,%cl;");
    asm("loc_65D49C1: je loc_65D49D9;");
    asm("loc_65D49C3: mov 1(%eax),%dl;");
    asm("loc_65D49C6: mov 1(%esi),%bl;");
    asm("loc_65D49C9: mov %dl,%cl;");
    asm("loc_65D49CB: cmp %bl,%dl;");
    asm("loc_65D49CD: jne loc_65D49DD;");
    asm("loc_65D49CF: add $2,%eax;");
    asm("loc_65D49D2: add $2,%esi;");
    asm("loc_65D49D5: test %cl,%cl;");
    asm("loc_65D49D7: jne loc_65D49B5;");
    asm("loc_65D49D9: xor %eax,%eax;");
    asm("loc_65D49DB: jmp loc_65D49E2;");
    asm("loc_65D49DD: sbb %eax,%eax;");
    asm("loc_65D49DF: sbb $0xFFFFFFFF,%eax;");
    asm("loc_65D49E2: test %eax,%eax;");
    asm("loc_65D49E4: je loc_65D4A08;");
    asm("loc_65D49E6: mov _off_65E13CC(,%edi,8),%eax;");
    asm("loc_65D49ED: inc %edi;");
    asm("loc_65D49EE: test %eax,%eax;");
    asm("loc_65D49F0: jne loc_65D49B3;");
    asm("loc_65D49F2: mov 0x1C(%esp),%edx;");
    asm("loc_65D49F6: pop %edi;");
    asm("loc_65D49F7: pop %esi;");
    asm("loc_65D49F8: pop %ebp;");
    asm("loc_65D49F9: movl $0,(%edx);");
    asm("loc_65D49FF: mov $0xFFFFFFFD,%eax;");
    asm("loc_65D4A04: pop %ebx;");
    asm("loc_65D4A05: ret $0xC;");
    asm("loc_65D4A08: mov _data_65E13C8(,%edi,8),%eax;");
    asm("loc_65D4A0F: test %eax,%eax;");
    asm("loc_65D4A11: jns loc_65D4A34;");
    asm("loc_65D4A13: mov 0x14(%esp),%ecx;");
    asm("loc_65D4A17: and $0x7FFFFFFF,%eax;");
    asm("loc_65D4A1C: mov (%eax,%ecx),%esi;");
    asm("loc_65D4A1F: push %esi;");
    asm("loc_65D4A20: mov (%esi),%eax;");
    asm("loc_65D4A22: calll *4(%eax);");
    asm("loc_65D4A25: pop %edi;");
    asm("loc_65D4A26: xor %eax,%eax;");
    asm("loc_65D4A28: mov 0x18(%esp),%ecx;");
    asm("loc_65D4A2C: mov %esi,(%ecx);");
    asm("loc_65D4A2E: pop %esi;");
    asm("loc_65D4A2F: pop %ebp;");
    asm("loc_65D4A30: pop %ebx;");
    asm("loc_65D4A31: ret $0xC;");
    asm("loc_65D4A34: mov 0x14(%esp),%edx;");
    asm("loc_65D4A38: lea (%eax,%edx),%esi;");
    asm("loc_65D4A3B: push %esi;");
    asm("loc_65D4A3C: mov (%esi),%eax;");
    asm("loc_65D4A3E: calll *4(%eax);");
    asm("loc_65D4A41: pop %edi;");
    asm("loc_65D4A42: xor %eax,%eax;");
    asm("loc_65D4A44: mov 0x18(%esp),%ecx;");
    asm("loc_65D4A48: mov %esi,(%ecx);");
    asm("loc_65D4A4A: pop %esi;");
    asm("loc_65D4A4B: pop %ebp;");
    asm("loc_65D4A4C: pop %ebx;");
    asm("loc_65D4A4D: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D4A50() // _sub_65D4A50
{
    __DEBUG_ASM(65D4A50);
    // chunk 0x65D4A50 _sub_65D4A50
    asm("loc_65D4A50: mov 4(%esp),%eax;");
    asm("loc_65D4A54: mov 0x54(%eax),%ecx;");
    asm("loc_65D4A57: inc %ecx;");
    asm("loc_65D4A58: mov %ecx,0x54(%eax);");
    asm("loc_65D4A5B: mov %ecx,%eax;");
    asm("loc_65D4A5D: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D4A60() // _sub_65D4A60
{
    __DEBUG_ASM(65D4A60);
    // chunk 0x65D4A60 _sub_65D4A60
    asm("loc_65D4A60: mov 4(%esp),%ecx;");
    asm("loc_65D4A64: mov 0x54(%ecx),%eax;");
    asm("loc_65D4A67: test %eax,%eax;");
    asm("loc_65D4A69: jbe loc_65D4A6F;");
    asm("loc_65D4A6B: dec %eax;");
    asm("loc_65D4A6C: mov %eax,0x54(%ecx);");
    asm("loc_65D4A6F: mov 0x54(%ecx),%eax;");
    asm("loc_65D4A72: test %eax,%eax;");
    asm("loc_65D4A74: jne loc_65D4A86;");
    asm("loc_65D4A76: movl $1,0x54(%ecx);");
    asm("loc_65D4A7D: mov (%ecx),%eax;");
    asm("loc_65D4A7F: push $1;");
    asm("loc_65D4A81: calll *0x24(%eax);");
    asm("loc_65D4A84: xor %eax,%eax;");
    asm("loc_65D4A86: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D4A90() // _sub_65D4A90
{
    __DEBUG_ASM(65D4A90);
    // chunk 0x65D4A90 _sub_65D4A90
    asm("loc_65D4A90: mov _off_65E13E4,%eax;");
    asm("loc_65D4A95: push %ebx;");
    asm("loc_65D4A96: push %ebp;");
    asm("loc_65D4A97: push %esi;");
    asm("loc_65D4A98: push %edi;");
    asm("loc_65D4A99: xor %edi,%edi;");
    asm("loc_65D4A9B: test %eax,%eax;");
    asm("loc_65D4A9D: je loc_65D4AE2;");
    asm("loc_65D4A9F: mov 0x18(%esp),%ebp;");
    asm("loc_65D4AA3: mov %ebp,%esi;");
    asm("loc_65D4AA5: mov (%eax),%dl;");
    asm("loc_65D4AA7: mov (%esi),%bl;");
    asm("loc_65D4AA9: mov %dl,%cl;");
    asm("loc_65D4AAB: cmp %bl,%dl;");
    asm("loc_65D4AAD: jne loc_65D4ACD;");
    asm("loc_65D4AAF: test %cl,%cl;");
    asm("loc_65D4AB1: je loc_65D4AC9;");
    asm("loc_65D4AB3: mov 1(%eax),%dl;");
    asm("loc_65D4AB6: mov 1(%esi),%bl;");
    asm("loc_65D4AB9: mov %dl,%cl;");
    asm("loc_65D4ABB: cmp %bl,%dl;");
    asm("loc_65D4ABD: jne loc_65D4ACD;");
    asm("loc_65D4ABF: add $2,%eax;");
    asm("loc_65D4AC2: add $2,%esi;");
    asm("loc_65D4AC5: test %cl,%cl;");
    asm("loc_65D4AC7: jne loc_65D4AA5;");
    asm("loc_65D4AC9: xor %eax,%eax;");
    asm("loc_65D4ACB: jmp loc_65D4AD2;");
    asm("loc_65D4ACD: sbb %eax,%eax;");
    asm("loc_65D4ACF: sbb $0xFFFFFFFF,%eax;");
    asm("loc_65D4AD2: test %eax,%eax;");
    asm("loc_65D4AD4: je loc_65D4AF8;");
    asm("loc_65D4AD6: mov _off_65E13EC(,%edi,8),%eax;");
    asm("loc_65D4ADD: inc %edi;");
    asm("loc_65D4ADE: test %eax,%eax;");
    asm("loc_65D4AE0: jne loc_65D4AA3;");
    asm("loc_65D4AE2: mov 0x1C(%esp),%edx;");
    asm("loc_65D4AE6: pop %edi;");
    asm("loc_65D4AE7: pop %esi;");
    asm("loc_65D4AE8: pop %ebp;");
    asm("loc_65D4AE9: movl $0,(%edx);");
    asm("loc_65D4AEF: mov $0xFFFFFFFD,%eax;");
    asm("loc_65D4AF4: pop %ebx;");
    asm("loc_65D4AF5: ret $0xC;");
    asm("loc_65D4AF8: mov _data_65E13E8(,%edi,8),%eax;");
    asm("loc_65D4AFF: test %eax,%eax;");
    asm("loc_65D4B01: jns loc_65D4B24;");
    asm("loc_65D4B03: mov 0x14(%esp),%ecx;");
    asm("loc_65D4B07: and $0x7FFFFFFF,%eax;");
    asm("loc_65D4B0C: mov (%eax,%ecx),%esi;");
    asm("loc_65D4B0F: push %esi;");
    asm("loc_65D4B10: mov (%esi),%eax;");
    asm("loc_65D4B12: calll *4(%eax);");
    asm("loc_65D4B15: pop %edi;");
    asm("loc_65D4B16: xor %eax,%eax;");
    asm("loc_65D4B18: mov 0x18(%esp),%ecx;");
    asm("loc_65D4B1C: mov %esi,(%ecx);");
    asm("loc_65D4B1E: pop %esi;");
    asm("loc_65D4B1F: pop %ebp;");
    asm("loc_65D4B20: pop %ebx;");
    asm("loc_65D4B21: ret $0xC;");
    asm("loc_65D4B24: mov 0x14(%esp),%edx;");
    asm("loc_65D4B28: lea (%eax,%edx),%esi;");
    asm("loc_65D4B2B: push %esi;");
    asm("loc_65D4B2C: mov (%esi),%eax;");
    asm("loc_65D4B2E: calll *4(%eax);");
    asm("loc_65D4B31: pop %edi;");
    asm("loc_65D4B32: xor %eax,%eax;");
    asm("loc_65D4B34: mov 0x18(%esp),%ecx;");
    asm("loc_65D4B38: mov %esi,(%ecx);");
    asm("loc_65D4B3A: pop %esi;");
    asm("loc_65D4B3B: pop %ebp;");
    asm("loc_65D4B3C: pop %ebx;");
    asm("loc_65D4B3D: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D4B40() // _sub_65D4B40
{
    __DEBUG_ASM(65D4B40);
    // chunk 0x65D4B40 _sub_65D4B40
    asm("loc_65D4B40: mov 4(%esp),%eax;");
    asm("loc_65D4B44: mov 0x14(%eax),%ecx;");
    asm("loc_65D4B47: inc %ecx;");
    asm("loc_65D4B48: mov %ecx,0x14(%eax);");
    asm("loc_65D4B4B: mov %ecx,%eax;");
    asm("loc_65D4B4D: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D4B50() // _sub_65D4B50
{
    __DEBUG_ASM(65D4B50);
    // chunk 0x65D4B50 _sub_65D4B50
    asm("loc_65D4B50: mov 4(%esp),%ecx;");
    asm("loc_65D4B54: mov 0x14(%ecx),%eax;");
    asm("loc_65D4B57: test %eax,%eax;");
    asm("loc_65D4B59: jbe loc_65D4B5F;");
    asm("loc_65D4B5B: dec %eax;");
    asm("loc_65D4B5C: mov %eax,0x14(%ecx);");
    asm("loc_65D4B5F: mov 0x14(%ecx),%eax;");
    asm("loc_65D4B62: test %eax,%eax;");
    asm("loc_65D4B64: jne loc_65D4B76;");
    asm("loc_65D4B66: movl $1,0x14(%ecx);");
    asm("loc_65D4B6D: mov (%ecx),%eax;");
    asm("loc_65D4B6F: push $1;");
    asm("loc_65D4B71: calll *0x18(%eax);");
    asm("loc_65D4B74: xor %eax,%eax;");
    asm("loc_65D4B76: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D4B80() // _sub_65D4B80
{
    __DEBUG_ASM(65D4B80);
    // chunk 0x65D4B80 _sub_65D4B80
    asm("loc_65D4B80: push $0xFFFFFFFF;");
    asm("loc_65D4B82: push $_sub_65E0029;");
    asm("loc_65D4B87: mov %fs:0,%eax;");
    asm("loc_65D4B8D: push %eax;");
    asm("loc_65D4B8E: mov %esp,%fs:0;");
    asm("loc_65D4B95: push %ecx;");
    asm("loc_65D4B96: push %ebx;");
    asm("loc_65D4B97: push %ebp;");
    asm("loc_65D4B98: push %esi;");
    asm("loc_65D4B99: mov 0x20(%esp),%esi;");
    asm("loc_65D4B9D: push %edi;");
    asm("loc_65D4B9E: mov %esi,0x10(%esp);");
    asm("loc_65D4BA2: xor %ebp,%ebp;");
    asm("loc_65D4BA4: cmp %ebp,%esi;");
    asm("loc_65D4BA6: mov %ebp,0x1C(%esp);");
    asm("loc_65D4BAA: je loc_65D4CB0;");
    asm("loc_65D4BB0: mov 0x28(%esp),%edi;");
    asm("loc_65D4BB4: push $0xFFFFFFFF;");
    asm("loc_65D4BB6: push %ebp;");
    asm("loc_65D4BB7: push %edi;");
    asm("loc_65D4BB8: mov (%edi),%al;");
    asm("loc_65D4BBA: mov %esi,%ecx;");
    asm("loc_65D4BBC: mov %al,(%esi);");
    asm("loc_65D4BBE: mov %ebp,4(%esi);");
    asm("loc_65D4BC1: mov %ebp,8(%esi);");
    asm("loc_65D4BC4: mov %ebp,0xC(%esi);");
    asm("loc_65D4BC7: call _sub_65D4CD0;");
    asm("loc_65D4BCC: mov 0x10(%edi),%cl;");
    asm("loc_65D4BCF: add $0x10,%edi;");
    asm("loc_65D4BD2: lea 0x10(%esi),%ebx;");
    asm("loc_65D4BD5: movb $1,0x1C(%esp);");
    asm("loc_65D4BDA: mov %cl,(%ebx);");
    asm("loc_65D4BDC: mov %ebp,4(%ebx);");
    asm("loc_65D4BDF: mov %ebp,8(%ebx);");
    asm("loc_65D4BE2: mov %ebp,0xC(%ebx);");
    asm("loc_65D4BE5: mov 8(%edi),%eax;");
    asm("loc_65D4BE8: mov %eax,%ebp;");
    asm("loc_65D4BEA: cmp $0xFFFFFFFF,%ebp;");
    asm("loc_65D4BED: jbe loc_65D4BF2;");
    asm("loc_65D4BEF: or $0xFFFFFFFF,%ebp;");
    asm("loc_65D4BF2: cmp %edi,%ebx;");
    asm("loc_65D4BF4: jne loc_65D4C1E;");
    asm("loc_65D4BF6: push $0xFFFFFFFF;");
    asm("loc_65D4BF8: push %ebp;");
    asm("loc_65D4BF9: mov %ebx,%ecx;");
    asm("loc_65D4BFB: call _sub_65D4ED0;");
    asm("loc_65D4C00: push $0;");
    asm("loc_65D4C02: push $0;");
    asm("loc_65D4C04: mov %ebx,%ecx;");
    asm("loc_65D4C06: call _sub_65D4ED0;");
    asm("loc_65D4C0B: pop %edi;");
    asm("loc_65D4C0C: pop %esi;");
    asm("loc_65D4C0D: pop %ebp;");
    asm("loc_65D4C0E: pop %ebx;");
    asm("loc_65D4C0F: mov 4(%esp),%ecx;");
    asm("loc_65D4C13: mov %ecx,%fs:0;");
    asm("loc_65D4C1A: add $0x10,%esp;");
    asm("loc_65D4C1D: ret;");
    asm("loc_65D4C1E: xor %ecx,%ecx;");
    asm("loc_65D4C20: cmp %ecx,%ebp;");
    asm("loc_65D4C22: jbe loc_65D4C79;");
    asm("loc_65D4C24: cmp %eax,%ebp;");
    asm("loc_65D4C26: jne loc_65D4C79;");
    asm("loc_65D4C28: mov 4(%edi),%eax;");
    asm("loc_65D4C2B: cmp %ecx,%eax;");
    asm("loc_65D4C2D: jne loc_65D4C34;");
    asm("loc_65D4C2F: mov $_data_65E13A4,%eax;");
    asm("loc_65D4C34: cmpb $0xFE,-1(%eax);");
    asm("loc_65D4C38: jae loc_65D4C79;");
    asm("loc_65D4C3A: mov %ecx,4(%ebx);");
    asm("loc_65D4C3D: mov %ecx,8(%ebx);");
    asm("loc_65D4C40: mov %ecx,0xC(%ebx);");
    asm("loc_65D4C43: mov 4(%edi),%eax;");
    asm("loc_65D4C46: cmp %ecx,%eax;");
    asm("loc_65D4C48: jne loc_65D4C4F;");
    asm("loc_65D4C4A: mov $_data_65E13A4,%eax;");
    asm("loc_65D4C4F: mov %eax,4(%ebx);");
    asm("loc_65D4C52: mov 8(%edi),%edx;");
    asm("loc_65D4C55: mov %edx,8(%ebx);");
    asm("loc_65D4C58: mov 0xC(%edi),%ecx;");
    asm("loc_65D4C5B: mov %ecx,0xC(%ebx);");
    asm("loc_65D4C5E: mov -1(%eax),%cl;");
    asm("loc_65D4C61: pop %edi;");
    asm("loc_65D4C62: inc %cl;");
    asm("loc_65D4C64: pop %esi;");
    asm("loc_65D4C65: pop %ebp;");
    asm("loc_65D4C66: mov %cl,-1(%eax);");
    asm("loc_65D4C69: pop %ebx;");
    asm("loc_65D4C6A: mov 4(%esp),%ecx;");
    asm("loc_65D4C6E: mov %ecx,%fs:0;");
    asm("loc_65D4C75: add $0x10,%esp;");
    asm("loc_65D4C78: ret;");
    asm("loc_65D4C79: push $1;");
    asm("loc_65D4C7B: push %ebp;");
    asm("loc_65D4C7C: mov %ebx,%ecx;");
    asm("loc_65D4C7E: call _sub_65D3E10;");
    asm("loc_65D4C83: test %al,%al;");
    asm("loc_65D4C85: je loc_65D4CB0;");
    asm("loc_65D4C87: mov 4(%edi),%edi;");
    asm("loc_65D4C8A: mov $_data_65E13A4,%esi;");
    asm("loc_65D4C8F: test %edi,%edi;");
    asm("loc_65D4C91: je loc_65D4C95;");
    asm("loc_65D4C93: mov %edi,%esi;");
    asm("loc_65D4C95: mov 4(%ebx),%edi;");
    asm("loc_65D4C98: mov %ebp,%ecx;");
    asm("loc_65D4C9A: mov %ecx,%edx;");
    asm("loc_65D4C9C: push %ebp;");
    asm("loc_65D4C9D: shr $2,%ecx;");
    asm("loc_65D4CA0: rep movsl (%esi),(%edi);");
    asm("loc_65D4CA2: mov %edx,%ecx;");
    asm("loc_65D4CA4: and $3,%ecx;");
    asm("loc_65D4CA7: rep movsb (%esi),(%edi);");
    asm("loc_65D4CA9: mov %ebx,%ecx;");
    asm("loc_65D4CAB: call _sub_65D3DF0;");
    asm("loc_65D4CB0: mov 0x14(%esp),%ecx;");
    asm("loc_65D4CB4: pop %edi;");
    asm("loc_65D4CB5: pop %esi;");
    asm("loc_65D4CB6: pop %ebp;");
    asm("loc_65D4CB7: pop %ebx;");
    asm("loc_65D4CB8: mov %ecx,%fs:0;");
    asm("loc_65D4CBF: add $0x10,%esp;");
    asm("loc_65D4CC2: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D4CD0() // _sub_65D4CD0
{
    __DEBUG_ASM(65D4CD0);
    // chunk 0x65D4CD0 _sub_65D4CD0
    asm("loc_65D4CD0: push %ebx;");
    asm("loc_65D4CD1: push %ebp;");
    asm("loc_65D4CD2: push %esi;");
    asm("loc_65D4CD3: mov 0x14(%esp),%esi;");
    asm("loc_65D4CD7: push %edi;");
    asm("loc_65D4CD8: mov 0x14(%esp),%edi;");
    asm("loc_65D4CDC: mov %ecx,%ebp;");
    asm("loc_65D4CDE: cmp %esi,8(%edi);");
    asm("loc_65D4CE1: jae loc_65D4CE8;");
    asm("loc_65D4CE3: call _sub_65D6E7A;");
    asm("loc_65D4CE8: mov 8(%edi),%eax;");
    asm("loc_65D4CEB: mov 0x1C(%esp),%ecx;");
    asm("loc_65D4CEF: mov %eax,%ebx;");
    asm("loc_65D4CF1: sub %esi,%ebx;");
    asm("loc_65D4CF3: cmp %ebx,%ecx;");
    asm("loc_65D4CF5: jae loc_65D4CF9;");
    asm("loc_65D4CF7: mov %ecx,%ebx;");
    asm("loc_65D4CF9: cmp %edi,%ebp;");
    asm("loc_65D4CFB: jne loc_65D4DB4;");
    asm("loc_65D4D01: mov 8(%ebp),%eax;");
    asm("loc_65D4D04: add %esi,%ebx;");
    asm("loc_65D4D06: or $0xFFFFFFFF,%edi;");
    asm("loc_65D4D09: cmp %ebx,%eax;");
    asm("loc_65D4D0B: jae loc_65D4D12;");
    asm("loc_65D4D0D: call _sub_65D6E7A;");
    asm("loc_65D4D12: mov %ebp,%ecx;");
    asm("loc_65D4D14: call _sub_65D4460;");
    asm("loc_65D4D19: mov 8(%ebp),%eax;");
    asm("loc_65D4D1C: sub %ebx,%eax;");
    asm("loc_65D4D1E: cmp $0xFFFFFFFF,%eax;");
    asm("loc_65D4D21: jae loc_65D4D29;");
    asm("loc_65D4D23: mov %eax,%edi;");
    asm("loc_65D4D25: test %edi,%edi;");
    asm("loc_65D4D27: jbe loc_65D4D5F;");
    asm("loc_65D4D29: mov 4(%ebp),%ecx;");
    asm("loc_65D4D2C: sub %edi,%eax;");
    asm("loc_65D4D2E: add %ebx,%ecx;");
    asm("loc_65D4D30: push %eax;");
    asm("loc_65D4D31: lea (%ecx,%edi),%edx;");
    asm("loc_65D4D34: push %edx;");
    asm("loc_65D4D35: push %ecx;");
    asm("loc_65D4D36: call loc_65D73A0;");
    asm("loc_65D4D3B: mov 8(%ebp),%esi;");
    asm("loc_65D4D3E: add $0xC,%esp;");
    asm("loc_65D4D41: sub %edi,%esi;");
    asm("loc_65D4D43: mov %ebp,%ecx;");
    asm("loc_65D4D45: push $0;");
    asm("loc_65D4D47: push %esi;");
    asm("loc_65D4D48: call _sub_65D3E10;");
    asm("loc_65D4D4D: test %al,%al;");
    asm("loc_65D4D4F: je loc_65D4D5B;");
    asm("loc_65D4D51: mov 4(%ebp),%eax;");
    asm("loc_65D4D54: mov %esi,8(%ebp);");
    asm("loc_65D4D57: movb $0,(%esi,%eax);");
    asm("loc_65D4D5B: mov 0x18(%esp),%esi;");
    asm("loc_65D4D5F: mov %ebp,%ecx;");
    asm("loc_65D4D61: mov %esi,%edi;");
    asm("loc_65D4D63: call _sub_65D4460;");
    asm("loc_65D4D68: mov 8(%ebp),%eax;");
    asm("loc_65D4D6B: cmp %esi,%eax;");
    asm("loc_65D4D6D: jae loc_65D4D71;");
    asm("loc_65D4D6F: mov %eax,%edi;");
    asm("loc_65D4D71: test %edi,%edi;");
    asm("loc_65D4D73: jbe loc_65D4EC5;");
    asm("loc_65D4D79: mov 4(%ebp),%ecx;");
    asm("loc_65D4D7C: sub %edi,%eax;");
    asm("loc_65D4D7E: push %eax;");
    asm("loc_65D4D7F: lea (%ecx,%edi),%edx;");
    asm("loc_65D4D82: push %edx;");
    asm("loc_65D4D83: push %ecx;");
    asm("loc_65D4D84: call loc_65D73A0;");
    asm("loc_65D4D89: mov 8(%ebp),%esi;");
    asm("loc_65D4D8C: add $0xC,%esp;");
    asm("loc_65D4D8F: sub %edi,%esi;");
    asm("loc_65D4D91: mov %ebp,%ecx;");
    asm("loc_65D4D93: push $0;");
    asm("loc_65D4D95: push %esi;");
    asm("loc_65D4D96: call _sub_65D3E10;");
    asm("loc_65D4D9B: test %al,%al;");
    asm("loc_65D4D9D: je loc_65D4EC5;");
    asm("loc_65D4DA3: push %esi;");
    asm("loc_65D4DA4: mov %ebp,%ecx;");
    asm("loc_65D4DA6: call _sub_65D3DF0;");
    asm("loc_65D4DAB: pop %edi;");
    asm("loc_65D4DAC: mov %ebp,%eax;");
    asm("loc_65D4DAE: pop %esi;");
    asm("loc_65D4DAF: pop %ebp;");
    asm("loc_65D4DB0: pop %ebx;");
    asm("loc_65D4DB1: ret $0xC;");
    asm("loc_65D4DB4: xor %edx,%edx;");
    asm("loc_65D4DB6: cmp %edx,%ebx;");
    asm("loc_65D4DB8: jbe loc_65D4E2A;");
    asm("loc_65D4DBA: cmp %eax,%ebx;");
    asm("loc_65D4DBC: jne loc_65D4E2A;");
    asm("loc_65D4DBE: mov 4(%edi),%eax;");
    asm("loc_65D4DC1: cmp %edx,%eax;");
    asm("loc_65D4DC3: jne loc_65D4DCA;");
    asm("loc_65D4DC5: mov $_data_65E13A4,%eax;");
    asm("loc_65D4DCA: cmpb $0xFE,-1(%eax);");
    asm("loc_65D4DCE: jae loc_65D4E2A;");
    asm("loc_65D4DD0: mov 4(%ebp),%eax;");
    asm("loc_65D4DD3: cmp %edx,%eax;");
    asm("loc_65D4DD5: je loc_65D4DF5;");
    asm("loc_65D4DD7: mov -1(%eax),%cl;");
    asm("loc_65D4DDA: dec %eax;");
    asm("loc_65D4DDB: test %cl,%cl;");
    asm("loc_65D4DDD: je loc_65D4DEA;");
    asm("loc_65D4DDF: cmp $0xFF,%cl;");
    asm("loc_65D4DE2: je loc_65D4DEA;");
    asm("loc_65D4DE4: dec %cl;");
    asm("loc_65D4DE6: mov %cl,(%eax);");
    asm("loc_65D4DE8: jmp loc_65D4DF5;");
    asm("loc_65D4DEA: push %eax;");
    asm("loc_65D4DEB: call _sub_65D6CB8;");
    asm("loc_65D4DF0: add $4,%esp;");
    asm("loc_65D4DF3: xor %edx,%edx;");
    asm("loc_65D4DF5: mov %edx,4(%ebp);");
    asm("loc_65D4DF8: mov %edx,8(%ebp);");
    asm("loc_65D4DFB: mov %edx,0xC(%ebp);");
    asm("loc_65D4DFE: mov 4(%edi),%eax;");
    asm("loc_65D4E01: cmp %edx,%eax;");
    asm("loc_65D4E03: jne loc_65D4E0A;");
    asm("loc_65D4E05: mov $_data_65E13A4,%eax;");
    asm("loc_65D4E0A: mov %eax,4(%ebp);");
    asm("loc_65D4E0D: mov 8(%edi),%ecx;");
    asm("loc_65D4E10: mov %ecx,8(%ebp);");
    asm("loc_65D4E13: mov 0xC(%edi),%edx;");
    asm("loc_65D4E16: mov %edx,0xC(%ebp);");
    asm("loc_65D4E19: mov -1(%eax),%cl;");
    asm("loc_65D4E1C: inc %cl;");
    asm("loc_65D4E1E: pop %edi;");
    asm("loc_65D4E1F: mov %cl,-1(%eax);");
    asm("loc_65D4E22: mov %ebp,%eax;");
    asm("loc_65D4E24: pop %esi;");
    asm("loc_65D4E25: pop %ebp;");
    asm("loc_65D4E26: pop %ebx;");
    asm("loc_65D4E27: ret $0xC;");
    asm("loc_65D4E2A: mov %ebp,%ecx;");
    asm("loc_65D4E2C: call _sub_65D4FF0;");
    asm("loc_65D4E31: cmp %ebx,%eax;");
    asm("loc_65D4E33: jae loc_65D4E3A;");
    asm("loc_65D4E35: call _sub_65D6CC3;");
    asm("loc_65D4E3A: mov 4(%ebp),%eax;");
    asm("loc_65D4E3D: test %eax,%eax;");
    asm("loc_65D4E3F: je loc_65D4E67;");
    asm("loc_65D4E41: mov -1(%eax),%cl;");
    asm("loc_65D4E44: test %cl,%cl;");
    asm("loc_65D4E46: je loc_65D4E67;");
    asm("loc_65D4E48: cmp $0xFF,%cl;");
    asm("loc_65D4E4B: je loc_65D4E67;");
    asm("loc_65D4E4D: test %ebx,%ebx;");
    asm("loc_65D4E4F: jne loc_65D4E92;");
    asm("loc_65D4E51: dec %cl;");
    asm("loc_65D4E53: push %ebx;");
    asm("loc_65D4E54: mov %cl,-1(%eax);");
    asm("loc_65D4E57: mov %ebp,%ecx;");
    asm("loc_65D4E59: call _sub_65D3B40;");
    asm("loc_65D4E5E: pop %edi;");
    asm("loc_65D4E5F: mov %ebp,%eax;");
    asm("loc_65D4E61: pop %esi;");
    asm("loc_65D4E62: pop %ebp;");
    asm("loc_65D4E63: pop %ebx;");
    asm("loc_65D4E64: ret $0xC;");
    asm("loc_65D4E67: test %ebx,%ebx;");
    asm("loc_65D4E69: jne loc_65D4E7D;");
    asm("loc_65D4E6B: push $1;");
    asm("loc_65D4E6D: mov %ebp,%ecx;");
    asm("loc_65D4E6F: call _sub_65D3B40;");
    asm("loc_65D4E74: pop %edi;");
    asm("loc_65D4E75: mov %ebp,%eax;");
    asm("loc_65D4E77: pop %esi;");
    asm("loc_65D4E78: pop %ebp;");
    asm("loc_65D4E79: pop %ebx;");
    asm("loc_65D4E7A: ret $0xC;");
    asm("loc_65D4E7D: mov 0xC(%ebp),%eax;");
    asm("loc_65D4E80: cmp $0x1F,%eax;");
    asm("loc_65D4E83: ja loc_65D4E89;");
    asm("loc_65D4E85: cmp %ebx,%eax;");
    asm("loc_65D4E87: jae loc_65D4E9A;");
    asm("loc_65D4E89: push $1;");
    asm("loc_65D4E8B: mov %ebp,%ecx;");
    asm("loc_65D4E8D: call _sub_65D3B40;");
    asm("loc_65D4E92: mov %ebp,%ecx;");
    asm("loc_65D4E94: push %ebx;");
    asm("loc_65D4E95: call _sub_65D4350;");
    asm("loc_65D4E9A: mov 4(%edi),%eax;");
    asm("loc_65D4E9D: test %eax,%eax;");
    asm("loc_65D4E9F: jne loc_65D4EA6;");
    asm("loc_65D4EA1: mov $_data_65E13A4,%eax;");
    asm("loc_65D4EA6: mov 4(%ebp),%edi;");
    asm("loc_65D4EA9: mov %ebx,%ecx;");
    asm("loc_65D4EAB: add %eax,%esi;");
    asm("loc_65D4EAD: mov %ecx,%eax;");
    asm("loc_65D4EAF: shr $2,%ecx;");
    asm("loc_65D4EB2: rep movsl (%esi),(%edi);");
    asm("loc_65D4EB4: mov %eax,%ecx;");
    asm("loc_65D4EB6: and $3,%ecx;");
    asm("loc_65D4EB9: rep movsb (%esi),(%edi);");
    asm("loc_65D4EBB: mov 4(%ebp),%ecx;");
    asm("loc_65D4EBE: mov %ebx,8(%ebp);");
    asm("loc_65D4EC1: movb $0,(%ebx,%ecx);");
    asm("loc_65D4EC5: pop %edi;");
    asm("loc_65D4EC6: mov %ebp,%eax;");
    asm("loc_65D4EC8: pop %esi;");
    asm("loc_65D4EC9: pop %ebp;");
    asm("loc_65D4ECA: pop %ebx;");
    asm("loc_65D4ECB: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D4ED0() // _sub_65D4ED0
{
    __DEBUG_ASM(65D4ED0);
    // chunk 0x65D4ED0 _sub_65D4ED0
    asm("loc_65D4ED0: push %ebx;");
    asm("loc_65D4ED1: push %ebp;");
    asm("loc_65D4ED2: mov %ecx,%ebp;");
    asm("loc_65D4ED4: mov 0xC(%esp),%ecx;");
    asm("loc_65D4ED8: push %esi;");
    asm("loc_65D4ED9: push %edi;");
    asm("loc_65D4EDA: mov 8(%ebp),%eax;");
    asm("loc_65D4EDD: cmp %ecx,%eax;");
    asm("loc_65D4EDF: jae loc_65D4EE6;");
    asm("loc_65D4EE1: call _sub_65D6E7A;");
    asm("loc_65D4EE6: mov 4(%ebp),%esi;");
    asm("loc_65D4EE9: xor %ebx,%ebx;");
    asm("loc_65D4EEB: cmp %ebx,%esi;");
    asm("loc_65D4EED: je loc_65D4F43;");
    asm("loc_65D4EEF: mov -1(%esi),%al;");
    asm("loc_65D4EF2: test %al,%al;");
    asm("loc_65D4EF4: je loc_65D4F43;");
    asm("loc_65D4EF6: cmp $0xFF,%al;");
    asm("loc_65D4EF8: je loc_65D4F43;");
    asm("loc_65D4EFA: mov %al,%cl;");
    asm("loc_65D4EFC: mov %esi,%edi;");
    asm("loc_65D4EFE: dec %cl;");
    asm("loc_65D4F00: xor %eax,%eax;");
    asm("loc_65D4F02: mov %cl,-1(%esi);");
    asm("loc_65D4F05: or $0xFFFFFFFF,%ecx;");
    asm("loc_65D4F08: mov %ebx,4(%ebp);");
    asm("loc_65D4F0B: mov %ebx,8(%ebp);");
    asm("loc_65D4F0E: mov %ebx,0xC(%ebp);");
    asm("loc_65D4F11: push $1;");
    asm("loc_65D4F13: repne scas (%edi),%al;");
    asm("loc_65D4F15: not %ecx;");
    asm("loc_65D4F17: dec %ecx;");
    asm("loc_65D4F18: mov %ecx,%ebx;");
    asm("loc_65D4F1A: mov %ebp,%ecx;");
    asm("loc_65D4F1C: push %ebx;");
    asm("loc_65D4F1D: call _sub_65D3E10;");
    asm("loc_65D4F22: test %al,%al;");
    asm("loc_65D4F24: je loc_65D4F41;");
    asm("loc_65D4F26: mov 4(%ebp),%edi;");
    asm("loc_65D4F29: mov %ebx,%ecx;");
    asm("loc_65D4F2B: mov %ecx,%edx;");
    asm("loc_65D4F2D: push %ebx;");
    asm("loc_65D4F2E: shr $2,%ecx;");
    asm("loc_65D4F31: rep movsl (%esi),(%edi);");
    asm("loc_65D4F33: mov %edx,%ecx;");
    asm("loc_65D4F35: and $3,%ecx;");
    asm("loc_65D4F38: rep movsb (%esi),(%edi);");
    asm("loc_65D4F3A: mov %ebp,%ecx;");
    asm("loc_65D4F3C: call _sub_65D3DF0;");
    asm("loc_65D4F41: xor %ebx,%ebx;");
    asm("loc_65D4F43: mov 8(%ebp),%eax;");
    asm("loc_65D4F46: mov 0x14(%esp),%edx;");
    asm("loc_65D4F4A: mov 0x18(%esp),%edi;");
    asm("loc_65D4F4E: sub %edx,%eax;");
    asm("loc_65D4F50: cmp %edi,%eax;");
    asm("loc_65D4F52: jae loc_65D4F56;");
    asm("loc_65D4F54: mov %eax,%edi;");
    asm("loc_65D4F56: cmp %ebx,%edi;");
    asm("loc_65D4F58: jbe loc_65D4FE1;");
    asm("loc_65D4F5E: mov 4(%ebp),%ecx;");
    asm("loc_65D4F61: mov 0x14(%esp),%edx;");
    asm("loc_65D4F65: add %edx,%ecx;");
    asm("loc_65D4F67: sub %edi,%eax;");
    asm("loc_65D4F69: push %eax;");
    asm("loc_65D4F6A: lea (%ecx,%edi),%eax;");
    asm("loc_65D4F6D: push %eax;");
    asm("loc_65D4F6E: push %ecx;");
    asm("loc_65D4F6F: call loc_65D73A0;");
    asm("loc_65D4F74: mov 8(%ebp),%esi;");
    asm("loc_65D4F77: add $0xC,%esp;");
    asm("loc_65D4F7A: sub %edi,%esi;");
    asm("loc_65D4F7C: cmp $0xFFFFFFFD,%esi;");
    asm("loc_65D4F7F: jbe loc_65D4F86;");
    asm("loc_65D4F81: call _sub_65D6CC3;");
    asm("loc_65D4F86: mov 4(%ebp),%eax;");
    asm("loc_65D4F89: cmp %ebx,%eax;");
    asm("loc_65D4F8B: je loc_65D4FB3;");
    asm("loc_65D4F8D: mov -1(%eax),%cl;");
    asm("loc_65D4F90: test %cl,%cl;");
    asm("loc_65D4F92: je loc_65D4FB3;");
    asm("loc_65D4F94: cmp $0xFF,%cl;");
    asm("loc_65D4F97: je loc_65D4FB3;");
    asm("loc_65D4F99: cmp %ebx,%esi;");
    asm("loc_65D4F9B: jne loc_65D4FCF;");
    asm("loc_65D4F9D: dec %cl;");
    asm("loc_65D4F9F: push %ebx;");
    asm("loc_65D4FA0: mov %cl,-1(%eax);");
    asm("loc_65D4FA3: mov %ebp,%ecx;");
    asm("loc_65D4FA5: call _sub_65D3B40;");
    asm("loc_65D4FAA: pop %edi;");
    asm("loc_65D4FAB: mov %ebp,%eax;");
    asm("loc_65D4FAD: pop %esi;");
    asm("loc_65D4FAE: pop %ebp;");
    asm("loc_65D4FAF: pop %ebx;");
    asm("loc_65D4FB0: ret $8;");
    asm("loc_65D4FB3: cmp %ebx,%esi;");
    asm("loc_65D4FB5: jne loc_65D4FCA;");
    asm("loc_65D4FB7: cmp %ebx,%eax;");
    asm("loc_65D4FB9: je loc_65D4FE1;");
    asm("loc_65D4FBB: mov %ebx,8(%ebp);");
    asm("loc_65D4FBE: movb $0,(%eax);");
    asm("loc_65D4FC1: pop %edi;");
    asm("loc_65D4FC2: mov %ebp,%eax;");
    asm("loc_65D4FC4: pop %esi;");
    asm("loc_65D4FC5: pop %ebp;");
    asm("loc_65D4FC6: pop %ebx;");
    asm("loc_65D4FC7: ret $8;");
    asm("loc_65D4FCA: cmp %esi,0xC(%ebp);");
    asm("loc_65D4FCD: jae loc_65D4FD7;");
    asm("loc_65D4FCF: mov %ebp,%ecx;");
    asm("loc_65D4FD1: push %esi;");
    asm("loc_65D4FD2: call _sub_65D4350;");
    asm("loc_65D4FD7: mov 4(%ebp),%ecx;");
    asm("loc_65D4FDA: mov %esi,8(%ebp);");
    asm("loc_65D4FDD: movb $0,(%esi,%ecx);");
    asm("loc_65D4FE1: pop %edi;");
    asm("loc_65D4FE2: mov %ebp,%eax;");
    asm("loc_65D4FE4: pop %esi;");
    asm("loc_65D4FE5: pop %ebp;");
    asm("loc_65D4FE6: pop %ebx;");
    asm("loc_65D4FE7: ret $8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D4FF0() // ?max_size@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QBEIXZ
{
    __DEBUG_ASM(65D4FF0);
    // chunk 0x65D4FF0 _sub_65D4FF0
    asm("loc_65D4FF0: mov $0xFFFFFFFD,%eax;");
    asm("loc_65D4FF5: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D5000() // _sub_65D5000
{
    __DEBUG_ASM(65D5000);
    // chunk 0x65D5000 _sub_65D5000
    asm("loc_65D5000: push %esi;");
    asm("loc_65D5001: mov %ecx,%esi;");
    asm("loc_65D5003: call _sub_65D3930;");
    asm("loc_65D5008: testb $1,8(%esp);");
    asm("loc_65D500D: je loc_65D5018;");
    asm("loc_65D500F: push %esi;");
    asm("loc_65D5010: call _sub_65D6CB8;");
    asm("loc_65D5015: add $4,%esp;");
    asm("loc_65D5018: mov %esi,%eax;");
    asm("loc_65D501A: pop %esi;");
    asm("loc_65D501B: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D5020() // _sub_65D5020
{
    __DEBUG_ASM(65D5020);
    // chunk 0x65D5020 _sub_65D5020
    asm("loc_65D5020: mov 4(%esp),%eax;");
    asm("loc_65D5024: push %ebx;");
    asm("loc_65D5025: push %esi;");
    asm("loc_65D5026: mov %ecx,%esi;");
    asm("loc_65D5028: mov 8(%eax),%ebx;");
    asm("loc_65D502B: mov 4(%eax),%eax;");
    asm("loc_65D502E: test %eax,%eax;");
    asm("loc_65D5030: jne loc_65D5037;");
    asm("loc_65D5032: mov $_data_65E13A4,%eax;");
    asm("loc_65D5037: mov 8(%esi),%edx;");
    asm("loc_65D503A: cmp %ebx,%edx;");
    asm("loc_65D503C: mov %edx,%ecx;");
    asm("loc_65D503E: jb loc_65D5042;");
    asm("loc_65D5040: mov %ebx,%ecx;");
    asm("loc_65D5042: mov 4(%esi),%esi;");
    asm("loc_65D5045: push %edi;");
    asm("loc_65D5046: mov %eax,%edi;");
    asm("loc_65D5048: xor %eax,%eax;");
    asm("loc_65D504A: repe cmpsb (%edi),(%esi);");
    asm("loc_65D504C: pop %edi;");
    asm("loc_65D504D: je loc_65D5054;");
    asm("loc_65D504F: sbb %eax,%eax;");
    asm("loc_65D5051: sbb $0xFFFFFFFF,%eax;");
    asm("loc_65D5054: test %eax,%eax;");
    asm("loc_65D5056: jne loc_65D506B;");
    asm("loc_65D5058: cmp %ebx,%edx;");
    asm("loc_65D505A: jae loc_65D5064;");
    asm("loc_65D505C: pop %esi;");
    asm("loc_65D505D: or $0xFFFFFFFF,%eax;");
    asm("loc_65D5060: pop %ebx;");
    asm("loc_65D5061: ret $4;");
    asm("loc_65D5064: xor %eax,%eax;");
    asm("loc_65D5066: cmp %ebx,%edx;");
    asm("loc_65D5068: setne %al;");
    asm("loc_65D506B: pop %esi;");
    asm("loc_65D506C: pop %ebx;");
    asm("loc_65D506D: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D5070() // _sub_65D5070
{
    __DEBUG_ASM(65D5070);
    // chunk 0x65D5070 _sub_65D5070
    asm("loc_65D5070: push %esi;");
    asm("loc_65D5071: mov %ecx,%esi;");
    asm("loc_65D5073: call _sub_65D50B0;");
    asm("loc_65D5078: testb $1,8(%esp);");
    asm("loc_65D507D: je loc_65D5088;");
    asm("loc_65D507F: push %esi;");
    asm("loc_65D5080: call _sub_65D6CB8;");
    asm("loc_65D5085: add $4,%esp;");
    asm("loc_65D5088: mov %esi,%eax;");
    asm("loc_65D508A: pop %esi;");
    asm("loc_65D508B: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D5090() // _sub_65D5090
{
    __DEBUG_ASM(65D5090);
    // chunk 0x65D5090 _sub_65D5090
    asm("loc_65D5090: push %esi;");
    asm("loc_65D5091: mov %ecx,%esi;");
    asm("loc_65D5093: call _sub_65D5470;");
    asm("loc_65D5098: testb $1,8(%esp);");
    asm("loc_65D509D: je loc_65D50A8;");
    asm("loc_65D509F: push %esi;");
    asm("loc_65D50A0: call _sub_65D6CB8;");
    asm("loc_65D50A5: add $4,%esp;");
    asm("loc_65D50A8: mov %esi,%eax;");
    asm("loc_65D50AA: pop %esi;");
    asm("loc_65D50AB: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D50B0() // _sub_65D50B0
{
    __DEBUG_ASM(65D50B0);
    // chunk 0x65D50B0 _sub_65D50B0
    asm("loc_65D50B0: push $0xFFFFFFFF;");
    asm("loc_65D50B2: push $_sub_65E004B;");
    asm("loc_65D50B7: mov %fs:0,%eax;");
    asm("loc_65D50BD: push %eax;");
    asm("loc_65D50BE: mov %esp,%fs:0;");
    asm("loc_65D50C5: sub $0x10,%esp;");
    asm("loc_65D50C8: push %ebx;");
    asm("loc_65D50C9: push %ebp;");
    asm("loc_65D50CA: push %esi;");
    asm("loc_65D50CB: mov %ecx,%esi;");
    asm("loc_65D50CD: push %edi;");
    asm("loc_65D50CE: mov %esi,0x14(%esp);");
    asm("loc_65D50D2: movl $_off_65E1404,(%esi);");
    asm("loc_65D50D8: mov 0x48(%esi),%eax;");
    asm("loc_65D50DB: xor %ebx,%ebx;");
    asm("loc_65D50DD: cmp %ebx,%eax;");
    asm("loc_65D50DF: mov %ebx,0x28(%esp);");
    asm("loc_65D50E3: je loc_65D5101;");
    asm("loc_65D50E5: mov -1(%eax),%cl;");
    asm("loc_65D50E8: dec %eax;");
    asm("loc_65D50E9: cmp %bl,%cl;");
    asm("loc_65D50EB: je loc_65D50F8;");
    asm("loc_65D50ED: cmp $0xFF,%cl;");
    asm("loc_65D50F0: je loc_65D50F8;");
    asm("loc_65D50F2: dec %cl;");
    asm("loc_65D50F4: mov %cl,(%eax);");
    asm("loc_65D50F6: jmp loc_65D5101;");
    asm("loc_65D50F8: push %eax;");
    asm("loc_65D50F9: call _sub_65D6CB8;");
    asm("loc_65D50FE: add $4,%esp;");
    asm("loc_65D5101: mov %ebx,0x48(%esi);");
    asm("loc_65D5104: mov %ebx,0x4C(%esi);");
    asm("loc_65D5107: mov %ebx,0x50(%esi);");
    asm("loc_65D510A: mov 0x38(%esi),%eax;");
    asm("loc_65D510D: cmp %ebx,%eax;");
    asm("loc_65D510F: je loc_65D512D;");
    asm("loc_65D5111: mov -1(%eax),%cl;");
    asm("loc_65D5114: dec %eax;");
    asm("loc_65D5115: cmp %bl,%cl;");
    asm("loc_65D5117: je loc_65D5124;");
    asm("loc_65D5119: cmp $0xFF,%cl;");
    asm("loc_65D511C: je loc_65D5124;");
    asm("loc_65D511E: dec %cl;");
    asm("loc_65D5120: mov %cl,(%eax);");
    asm("loc_65D5122: jmp loc_65D512D;");
    asm("loc_65D5124: push %eax;");
    asm("loc_65D5125: call _sub_65D6CB8;");
    asm("loc_65D512A: add $4,%esp;");
    asm("loc_65D512D: mov %ebx,0x38(%esi);");
    asm("loc_65D5130: mov %ebx,0x3C(%esi);");
    asm("loc_65D5133: mov %ebx,0x40(%esi);");
    asm("loc_65D5136: mov 0x28(%esi),%eax;");
    asm("loc_65D5139: cmp %ebx,%eax;");
    asm("loc_65D513B: je loc_65D5159;");
    asm("loc_65D513D: mov -1(%eax),%cl;");
    asm("loc_65D5140: dec %eax;");
    asm("loc_65D5141: cmp %bl,%cl;");
    asm("loc_65D5143: je loc_65D5150;");
    asm("loc_65D5145: cmp $0xFF,%cl;");
    asm("loc_65D5148: je loc_65D5150;");
    asm("loc_65D514A: dec %cl;");
    asm("loc_65D514C: mov %cl,(%eax);");
    asm("loc_65D514E: jmp loc_65D5159;");
    asm("loc_65D5150: push %eax;");
    asm("loc_65D5151: call _sub_65D6CB8;");
    asm("loc_65D5156: add $4,%esp;");
    asm("loc_65D5159: lea 0x18(%esi),%edi;");
    asm("loc_65D515C: mov %ebx,0x28(%esi);");
    asm("loc_65D515F: mov %ebx,0x2C(%esi);");
    asm("loc_65D5162: mov %ebx,0x30(%esi);");
    asm("loc_65D5165: mov 4(%edi),%ebp;");
    asm("loc_65D5168: mov (%ebp),%eax;");
    asm("loc_65D516B: cmp %ebp,%eax;");
    asm("loc_65D516D: mov %eax,0x10(%esp);");
    asm("loc_65D5171: je loc_65D5197;");
    asm("loc_65D5173: lea 0x18(%esp),%eax;");
    asm("loc_65D5177: push %ebx;");
    asm("loc_65D5178: push %eax;");
    asm("loc_65D5179: lea 0x18(%esp),%ecx;");
    asm("loc_65D517D: call _sub_65D5460;");
    asm("loc_65D5182: mov (%eax),%ecx;");
    asm("loc_65D5184: lea 0x1C(%esp),%edx;");
    asm("loc_65D5188: push %ecx;");
    asm("loc_65D5189: push %edx;");
    asm("loc_65D518A: mov %edi,%ecx;");
    asm("loc_65D518C: call _sub_65D5410;");
    asm("loc_65D5191: cmp %ebp,0x10(%esp);");
    asm("loc_65D5195: jne loc_65D5173;");
    asm("loc_65D5197: mov 4(%edi),%eax;");
    asm("loc_65D519A: push %eax;");
    asm("loc_65D519B: call _sub_65D6CB8;");
    asm("loc_65D51A0: add $4,%esi;");
    asm("loc_65D51A3: mov %ebx,4(%edi);");
    asm("loc_65D51A6: mov %ebx,8(%edi);");
    asm("loc_65D51A9: add $4,%esp;");
    asm("loc_65D51AC: mov 4(%esi),%eax;");
    asm("loc_65D51AF: movl $0xFFFFFFFF,0x28(%esp);");
    asm("loc_65D51B7: push %eax;");
    asm("loc_65D51B8: mov (%eax),%ecx;");
    asm("loc_65D51BA: lea 0x20(%esp),%eax;");
    asm("loc_65D51BE: push %ecx;");
    asm("loc_65D51BF: push %eax;");
    asm("loc_65D51C0: mov %esi,%ecx;");
    asm("loc_65D51C2: call _sub_65D5360;");
    asm("loc_65D51C7: mov 4(%esi),%ecx;");
    asm("loc_65D51CA: push %ecx;");
    asm("loc_65D51CB: call _sub_65D6CB8;");
    asm("loc_65D51D0: mov 8(%esi),%edx;");
    asm("loc_65D51D3: mov %ebx,4(%esi);");
    asm("loc_65D51D6: push %edx;");
    asm("loc_65D51D7: mov %ebx,0x10(%esi);");
    asm("loc_65D51DA: call _sub_65D6CB8;");
    asm("loc_65D51DF: mov 0x28(%esp),%ecx;");
    asm("loc_65D51E3: add $8,%esp;");
    asm("loc_65D51E6: mov %ebx,8(%esi);");
    asm("loc_65D51E9: mov %ecx,%fs:0;");
    asm("loc_65D51F0: pop %edi;");
    asm("loc_65D51F1: pop %esi;");
    asm("loc_65D51F2: pop %ebp;");
    asm("loc_65D51F3: pop %ebx;");
    asm("loc_65D51F4: add $0x1C,%esp;");
    asm("loc_65D51F7: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D5200() // _sub_65D5200
{
    __DEBUG_ASM(65D5200);
    // chunk 0x65D5200 _sub_65D5200
    asm("loc_65D5200: push %esi;");
    asm("loc_65D5201: mov %ecx,%esi;");
    asm("loc_65D5203: call _sub_65D5220;");
    asm("loc_65D5208: testb $1,8(%esp);");
    asm("loc_65D520D: je loc_65D5218;");
    asm("loc_65D520F: push %esi;");
    asm("loc_65D5210: call _sub_65D6CB8;");
    asm("loc_65D5215: add $4,%esp;");
    asm("loc_65D5218: mov %esi,%eax;");
    asm("loc_65D521A: pop %esi;");
    asm("loc_65D521B: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D5220() // _sub_65D5220
{
    __DEBUG_ASM(65D5220);
    // chunk 0x65D5220 _sub_65D5220
    asm("loc_65D5220: push $0xFFFFFFFF;");
    asm("loc_65D5222: push $_sub_65E006B;");
    asm("loc_65D5227: mov %fs:0,%eax;");
    asm("loc_65D522D: push %eax;");
    asm("loc_65D522E: mov %esp,%fs:0;");
    asm("loc_65D5235: sub $0xC,%esp;");
    asm("loc_65D5238: push %ebx;");
    asm("loc_65D5239: push %ebp;");
    asm("loc_65D523A: push %esi;");
    asm("loc_65D523B: mov %ecx,%esi;");
    asm("loc_65D523D: push %edi;");
    asm("loc_65D523E: mov %esi,0x14(%esp);");
    asm("loc_65D5242: movl $_off_65E1404,(%esi);");
    asm("loc_65D5248: mov 0x48(%esi),%eax;");
    asm("loc_65D524B: xor %ebx,%ebx;");
    asm("loc_65D524D: cmp %ebx,%eax;");
    asm("loc_65D524F: mov %ebx,0x24(%esp);");
    asm("loc_65D5253: je loc_65D5271;");
    asm("loc_65D5255: mov -1(%eax),%cl;");
    asm("loc_65D5258: dec %eax;");
    asm("loc_65D5259: cmp %bl,%cl;");
    asm("loc_65D525B: je loc_65D5268;");
    asm("loc_65D525D: cmp $0xFF,%cl;");
    asm("loc_65D5260: je loc_65D5268;");
    asm("loc_65D5262: dec %cl;");
    asm("loc_65D5264: mov %cl,(%eax);");
    asm("loc_65D5266: jmp loc_65D5271;");
    asm("loc_65D5268: push %eax;");
    asm("loc_65D5269: call _sub_65D6CB8;");
    asm("loc_65D526E: add $4,%esp;");
    asm("loc_65D5271: mov %ebx,0x48(%esi);");
    asm("loc_65D5274: mov %ebx,0x4C(%esi);");
    asm("loc_65D5277: mov %ebx,0x50(%esi);");
    asm("loc_65D527A: mov 0x38(%esi),%eax;");
    asm("loc_65D527D: cmp %ebx,%eax;");
    asm("loc_65D527F: je loc_65D529D;");
    asm("loc_65D5281: mov -1(%eax),%cl;");
    asm("loc_65D5284: dec %eax;");
    asm("loc_65D5285: cmp %bl,%cl;");
    asm("loc_65D5287: je loc_65D5294;");
    asm("loc_65D5289: cmp $0xFF,%cl;");
    asm("loc_65D528C: je loc_65D5294;");
    asm("loc_65D528E: dec %cl;");
    asm("loc_65D5290: mov %cl,(%eax);");
    asm("loc_65D5292: jmp loc_65D529D;");
    asm("loc_65D5294: push %eax;");
    asm("loc_65D5295: call _sub_65D6CB8;");
    asm("loc_65D529A: add $4,%esp;");
    asm("loc_65D529D: mov %ebx,0x38(%esi);");
    asm("loc_65D52A0: mov %ebx,0x3C(%esi);");
    asm("loc_65D52A3: mov %ebx,0x40(%esi);");
    asm("loc_65D52A6: mov 0x28(%esi),%eax;");
    asm("loc_65D52A9: cmp %ebx,%eax;");
    asm("loc_65D52AB: je loc_65D52C9;");
    asm("loc_65D52AD: mov -1(%eax),%cl;");
    asm("loc_65D52B0: dec %eax;");
    asm("loc_65D52B1: cmp %bl,%cl;");
    asm("loc_65D52B3: je loc_65D52C0;");
    asm("loc_65D52B5: cmp $0xFF,%cl;");
    asm("loc_65D52B8: je loc_65D52C0;");
    asm("loc_65D52BA: dec %cl;");
    asm("loc_65D52BC: mov %cl,(%eax);");
    asm("loc_65D52BE: jmp loc_65D52C9;");
    asm("loc_65D52C0: push %eax;");
    asm("loc_65D52C1: call _sub_65D6CB8;");
    asm("loc_65D52C6: add $4,%esp;");
    asm("loc_65D52C9: lea 0x18(%esi),%ebp;");
    asm("loc_65D52CC: mov %ebx,0x28(%esi);");
    asm("loc_65D52CF: mov %ebx,0x2C(%esi);");
    asm("loc_65D52D2: mov %ebx,0x30(%esi);");
    asm("loc_65D52D5: mov 4(%ebp),%eax;");
    asm("loc_65D52D8: mov %eax,0x10(%esp);");
    asm("loc_65D52DC: mov (%eax),%edi;");
    asm("loc_65D52DE: cmp %eax,%edi;");
    asm("loc_65D52E0: je loc_65D52F9;");
    asm("loc_65D52E2: mov %edi,%eax;");
    asm("loc_65D52E4: mov (%edi),%edi;");
    asm("loc_65D52E6: push %eax;");
    asm("loc_65D52E7: lea 0x1C(%esp),%eax;");
    asm("loc_65D52EB: push %eax;");
    asm("loc_65D52EC: mov %ebp,%ecx;");
    asm("loc_65D52EE: call _sub_65D5410;");
    asm("loc_65D52F3: cmp 0x10(%esp),%edi;");
    asm("loc_65D52F7: jne loc_65D52E2;");
    asm("loc_65D52F9: mov 4(%ebp),%eax;");
    asm("loc_65D52FC: push %eax;");
    asm("loc_65D52FD: call _sub_65D6CB8;");
    asm("loc_65D5302: add $4,%esi;");
    asm("loc_65D5305: mov %ebx,4(%ebp);");
    asm("loc_65D5308: mov %ebx,8(%ebp);");
    asm("loc_65D530B: add $4,%esp;");
    asm("loc_65D530E: mov 4(%esi),%eax;");
    asm("loc_65D5311: movl $0xFFFFFFFF,0x24(%esp);");
    asm("loc_65D5319: push %eax;");
    asm("loc_65D531A: mov (%eax),%ecx;");
    asm("loc_65D531C: push %ecx;");
    asm("loc_65D531D: lea 0x20(%esp),%ecx;");
    asm("loc_65D5321: push %ecx;");
    asm("loc_65D5322: mov %esi,%ecx;");
    asm("loc_65D5324: call _sub_65D5360;");
    asm("loc_65D5329: mov 4(%esi),%edx;");
    asm("loc_65D532C: push %edx;");
    asm("loc_65D532D: call _sub_65D6CB8;");
    asm("loc_65D5332: mov 8(%esi),%eax;");
    asm("loc_65D5335: mov %ebx,4(%esi);");
    asm("loc_65D5338: push %eax;");
    asm("loc_65D5339: mov %ebx,0x10(%esi);");
    asm("loc_65D533C: call _sub_65D6CB8;");
    asm("loc_65D5341: mov 0x24(%esp),%ecx;");
    asm("loc_65D5345: add $8,%esp;");
    asm("loc_65D5348: mov %ebx,8(%esi);");
    asm("loc_65D534B: mov %ecx,%fs:0;");
    asm("loc_65D5352: pop %edi;");
    asm("loc_65D5353: pop %esi;");
    asm("loc_65D5354: pop %ebp;");
    asm("loc_65D5355: pop %ebx;");
    asm("loc_65D5356: add $0x18,%esp;");
    asm("loc_65D5359: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D5360() // _sub_65D5360
{
    __DEBUG_ASM(65D5360);
    // chunk 0x65D5360 _sub_65D5360
    asm("loc_65D5360: push %ebx;");
    asm("loc_65D5361: mov 0x10(%esp),%ebx;");
    asm("loc_65D5365: push %esi;");
    asm("loc_65D5366: mov %ecx,%esi;");
    asm("loc_65D5368: mov 0x10(%esp),%ecx;");
    asm("loc_65D536C: push %edi;");
    asm("loc_65D536D: mov 0x10(%esi),%eax;");
    asm("loc_65D5370: test %eax,%eax;");
    asm("loc_65D5372: je loc_65D53DE;");
    asm("loc_65D5374: mov 4(%esi),%eax;");
    asm("loc_65D5377: cmp (%eax),%ecx;");
    asm("loc_65D5379: jne loc_65D53DE;");
    asm("loc_65D537B: cmp %eax,%ebx;");
    asm("loc_65D537D: jne loc_65D53DE;");
    asm("loc_65D537F: mov 4(%eax),%ebx;");
    asm("loc_65D5382: mov 8(%esi),%eax;");
    asm("loc_65D5385: cmp %eax,%ebx;");
    asm("loc_65D5387: mov %ebx,%edi;");
    asm("loc_65D5389: je loc_65D53B2;");
    asm("loc_65D538B: mov 8(%edi),%eax;");
    asm("loc_65D538E: mov %esi,%ecx;");
    asm("loc_65D5390: push %eax;");
    asm("loc_65D5391: call _sub_65D4310;");
    asm("loc_65D5396: mov (%edi),%edi;");
    asm("loc_65D5398: lea 0xC(%ebx),%ecx;");
    asm("loc_65D539B: call _sub_65D3930;");
    asm("loc_65D53A0: push %ebx;");
    asm("loc_65D53A1: call _sub_65D6CB8;");
    asm("loc_65D53A6: mov 8(%esi),%eax;");
    asm("loc_65D53A9: add $4,%esp;");
    asm("loc_65D53AC: cmp %eax,%edi;");
    asm("loc_65D53AE: mov %edi,%ebx;");
    asm("loc_65D53B0: jne loc_65D538B;");
    asm("loc_65D53B2: mov 4(%esi),%ecx;");
    asm("loc_65D53B5: mov 8(%esi),%edx;");
    asm("loc_65D53B8: pop %edi;");
    asm("loc_65D53B9: mov %edx,4(%ecx);");
    asm("loc_65D53BC: mov 4(%esi),%eax;");
    asm("loc_65D53BF: movl $0,0x10(%esi);");
    asm("loc_65D53C6: mov %eax,(%eax);");
    asm("loc_65D53C8: mov 4(%esi),%eax;");
    asm("loc_65D53CB: mov %eax,8(%eax);");
    asm("loc_65D53CE: mov 4(%esi),%eax;");
    asm("loc_65D53D1: pop %esi;");
    asm("loc_65D53D2: pop %ebx;");
    asm("loc_65D53D3: mov (%eax),%ecx;");
    asm("loc_65D53D5: mov 4(%esp),%eax;");
    asm("loc_65D53D9: mov %ecx,(%eax);");
    asm("loc_65D53DB: ret $0xC;");
    asm("loc_65D53DE: cmp %ebx,%ecx;");
    asm("loc_65D53E0: je loc_65D5402;");
    asm("loc_65D53E2: mov %ecx,%edi;");
    asm("loc_65D53E4: lea 0x14(%esp),%ecx;");
    asm("loc_65D53E8: call _sub_65D3D00;");
    asm("loc_65D53ED: lea 0x18(%esp),%edx;");
    asm("loc_65D53F1: push %edi;");
    asm("loc_65D53F2: push %edx;");
    asm("loc_65D53F3: mov %esi,%ecx;");
    asm("loc_65D53F5: call _sub_65D3F30;");
    asm("loc_65D53FA: mov 0x14(%esp),%ecx;");
    asm("loc_65D53FE: cmp %ebx,%ecx;");
    asm("loc_65D5400: jne loc_65D53E2;");
    asm("loc_65D5402: mov 0x10(%esp),%eax;");
    asm("loc_65D5406: pop %edi;");
    asm("loc_65D5407: pop %esi;");
    asm("loc_65D5408: pop %ebx;");
    asm("loc_65D5409: mov %ecx,(%eax);");
    asm("loc_65D540B: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D5410() // _sub_65D5410
{
    __DEBUG_ASM(65D5410);
    // chunk 0x65D5410 _sub_65D5410
    asm("loc_65D5410: push %ebx;");
    asm("loc_65D5411: push %esi;");
    asm("loc_65D5412: mov 0x10(%esp),%esi;");
    asm("loc_65D5416: push %edi;");
    asm("loc_65D5417: mov %ecx,%edi;");
    asm("loc_65D5419: mov 4(%esi),%eax;");
    asm("loc_65D541C: mov (%esi),%ecx;");
    asm("loc_65D541E: mov (%esi),%ebx;");
    asm("loc_65D5420: mov %ecx,(%eax);");
    asm("loc_65D5422: mov (%esi),%edx;");
    asm("loc_65D5424: mov 4(%esi),%eax;");
    asm("loc_65D5427: mov %eax,4(%edx);");
    asm("loc_65D542A: mov 8(%esi),%eax;");
    asm("loc_65D542D: test %eax,%eax;");
    asm("loc_65D542F: je loc_65D543E;");
    asm("loc_65D5431: mov (%eax),%ecx;");
    asm("loc_65D5433: push %eax;");
    asm("loc_65D5434: calll *8(%ecx);");
    asm("loc_65D5437: movl $0,8(%esi);");
    asm("loc_65D543E: push %esi;");
    asm("loc_65D543F: call _sub_65D6CB8;");
    asm("loc_65D5444: mov 8(%edi),%eax;");
    asm("loc_65D5447: add $4,%esp;");
    asm("loc_65D544A: dec %eax;");
    asm("loc_65D544B: mov %eax,8(%edi);");
    asm("loc_65D544E: mov 0x10(%esp),%eax;");
    asm("loc_65D5452: pop %edi;");
    asm("loc_65D5453: pop %esi;");
    asm("loc_65D5454: mov %ebx,(%eax);");
    asm("loc_65D5456: pop %ebx;");
    asm("loc_65D5457: ret $8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D5460() // _sub_65D5460
{
    __DEBUG_ASM(65D5460);
    // chunk 0x65D5460 _sub_65D5460
    asm("loc_65D5460: mov (%ecx),%edx;");
    asm("loc_65D5462: mov (%edx),%eax;");
    asm("loc_65D5464: mov %eax,(%ecx);");
    asm("loc_65D5466: mov 4(%esp),%eax;");
    asm("loc_65D546A: mov %edx,(%eax);");
    asm("loc_65D546C: ret $8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D5470() // _sub_65D5470
{
    __DEBUG_ASM(65D5470);
    // chunk 0x65D5470 _sub_65D5470
    asm("loc_65D5470: push %esi;");
    asm("loc_65D5471: mov %ecx,%esi;");
    asm("loc_65D5473: movl $_off_65E142C,(%esi);");
    asm("loc_65D5479: mov 8(%esi),%eax;");
    asm("loc_65D547C: test %eax,%eax;");
    asm("loc_65D547E: je loc_65D549C;");
    asm("loc_65D5480: mov -1(%eax),%cl;");
    asm("loc_65D5483: dec %eax;");
    asm("loc_65D5484: test %cl,%cl;");
    asm("loc_65D5486: je loc_65D5493;");
    asm("loc_65D5488: cmp $0xFF,%cl;");
    asm("loc_65D548B: je loc_65D5493;");
    asm("loc_65D548D: dec %cl;");
    asm("loc_65D548F: mov %cl,(%eax);");
    asm("loc_65D5491: jmp loc_65D549C;");
    asm("loc_65D5493: push %eax;");
    asm("loc_65D5494: call _sub_65D6CB8;");
    asm("loc_65D5499: add $4,%esp;");
    asm("loc_65D549C: movl $0,8(%esi);");
    asm("loc_65D54A3: movl $0,0xC(%esi);");
    asm("loc_65D54AA: movl $0,0x10(%esi);");
    asm("loc_65D54B1: pop %esi;");
    asm("loc_65D54B2: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D54C0() // _unknown_libname_1
{
    __DEBUG_ASM(65D54C0);
    // chunk 0x65D54C0 _sub_65D54C0
    asm("loc_65D54C0: mov _data_65E66BF,%cl;");
    asm("loc_65D54C6: mov $1,%al;");
    asm("loc_65D54C8: test %cl,%al;");
    asm("loc_65D54CA: jne loc_65D54D4;");
    asm("loc_65D54CC: or %al,%cl;");
    asm("loc_65D54CE: mov %cl,_data_65E66BF;");
    asm("loc_65D54D4: jmp loc_65D54E0;");
    asm("loc_65D54D9: nop;");
    asm("loc_65D54DA: nop;");
    asm("loc_65D54DB: nop;");
    asm("loc_65D54DC: nop;");
    asm("loc_65D54DD: nop;");
    asm("loc_65D54DE: nop;");
    asm("loc_65D54DF: nop;");
    asm("loc_65D54E0: push $_sub_65D54F0;");
    asm("loc_65D54E5: call _sub_65D7753;");
    asm("loc_65D54EA: pop %ecx;");
    asm("loc_65D54EB: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D54F0() // _nullsub_1
{
    __DEBUG_ASM(65D54F0);
    // chunk 0x65D54F0 _sub_65D54F0
    asm("loc_65D54F0: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D5500() // _sub_65D5500
{
    __DEBUG_ASM(65D5500);
    // chunk 0x65D5500 _sub_65D5500
    asm("loc_65D5500: push %esi;");
    asm("loc_65D5501: mov %ecx,%esi;");
    asm("loc_65D5503: call _sub_65D5540;");
    asm("loc_65D5508: mov 8(%esp),%eax;");
    asm("loc_65D550C: mov %eax,4(%esi);");
    asm("loc_65D550F: pop %esi;");
    asm("loc_65D5510: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D5520() // _sub_65D5520
{
    __DEBUG_ASM(65D5520);
    // chunk 0x65D5520 _sub_65D5520
    asm("loc_65D5520: push %esi;");
    asm("loc_65D5521: mov %ecx,%esi;");
    asm("loc_65D5523: mov 4(%esi),%eax;");
    asm("loc_65D5526: cmp $0xFFFFFFFF,%eax;");
    asm("loc_65D5529: je loc_65D5531;");
    asm("loc_65D552B: push %eax;");
    asm("loc_65D552C: call _sub_65D6C4C;");
    asm("loc_65D5531: movl $0xFFFFFFFF,4(%esi);");
    asm("loc_65D5538: pop %esi;");
    asm("loc_65D5539: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D5540() // _sub_65D5540
{
    __DEBUG_ASM(65D5540);
    // chunk 0x65D5540 _sub_65D5540
    asm("loc_65D5540: xor %eax,%eax;");
    asm("loc_65D5542: movl $0xFFFFFFFF,4(%ecx);");
    asm("loc_65D5549: mov %eax,0x100C(%ecx);");
    asm("loc_65D554F: mov %eax,0x1008(%ecx);");
    asm("loc_65D5555: mov %eax,0x2014(%ecx);");
    asm("loc_65D555B: mov %eax,0x2010(%ecx);");
    asm("loc_65D5561: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D5570() // _sub_65D5570
{
    __DEBUG_ASM(65D5570);
    // chunk 0x65D5570 _sub_65D5570
    asm("loc_65D5570: sub $0x314,%esp;");
    asm("loc_65D5576: push %esi;");
    asm("loc_65D5577: mov %ecx,%esi;");
    asm("loc_65D5579: mov 4(%esi),%eax;");
    asm("loc_65D557C: cmp $0xFFFFFFFF,%eax;");
    asm("loc_65D557F: je loc_65D5669;");
    asm("loc_65D5585: mov $1,%ecx;");
    asm("loc_65D558A: mov %eax,0x114(%esp);");
    asm("loc_65D5591: mov %eax,0x218(%esp);");
    asm("loc_65D5598: mov %eax,0x10(%esp);");
    asm("loc_65D559C: mov %ecx,0x110(%esp);");
    asm("loc_65D55A3: mov %ecx,0x214(%esp);");
    asm("loc_65D55AA: mov %ecx,0xC(%esp);");
    asm("loc_65D55AE: lea 4(%esp),%eax;");
    asm("loc_65D55B2: lea 0xC(%esp),%ecx;");
    asm("loc_65D55B6: push %eax;");
    asm("loc_65D55B7: lea 0x218(%esp),%edx;");
    asm("loc_65D55BE: push %ecx;");
    asm("loc_65D55BF: lea 0x118(%esp),%eax;");
    asm("loc_65D55C6: push %edx;");
    asm("loc_65D55C7: push %eax;");
    asm("loc_65D55C8: push $0;");
    asm("loc_65D55CA: movl $0,0x18(%esp);");
    asm("loc_65D55D2: movl $0,0x1C(%esp);");
    asm("loc_65D55DA: call _sub_65D6C7C;");
    asm("loc_65D55DF: cmp $0xFFFFFFFF,%eax;");
    asm("loc_65D55E2: jne loc_65D55EE;");
    asm("loc_65D55E4: or %eax,%eax;");
    asm("loc_65D55E6: pop %esi;");
    asm("loc_65D55E7: add $0x314,%esp;");
    asm("loc_65D55ED: ret;");
    asm("loc_65D55EE: test %eax,%eax;");
    asm("loc_65D55F0: je loc_65D5669;");
    asm("loc_65D55F2: mov 4(%esi),%edx;");
    asm("loc_65D55F5: lea 0xC(%esp),%ecx;");
    asm("loc_65D55F9: push %ecx;");
    asm("loc_65D55FA: push %edx;");
    asm("loc_65D55FB: call _sub_65D6CB2;");
    asm("loc_65D5600: test %eax,%eax;");
    asm("loc_65D5602: je loc_65D5618;");
    asm("loc_65D5604: mov %esi,%ecx;");
    asm("loc_65D5606: call _sub_65D5520;");
    asm("loc_65D560B: mov $0xFFFFFFFE,%eax;");
    asm("loc_65D5610: pop %esi;");
    asm("loc_65D5611: add $0x314,%esp;");
    asm("loc_65D5617: ret;");
    asm("loc_65D5618: mov 4(%esi),%ecx;");
    asm("loc_65D561B: lea 0x110(%esp),%eax;");
    asm("loc_65D5622: push %eax;");
    asm("loc_65D5623: push %ecx;");
    asm("loc_65D5624: call _sub_65D6CB2;");
    asm("loc_65D5629: test %eax,%eax;");
    asm("loc_65D562B: je loc_65D563E;");
    asm("loc_65D562D: mov %esi,%ecx;");
    asm("loc_65D562F: call _sub_65D5680;");
    asm("loc_65D5634: cmp $0xFFFFFFFE,%eax;");
    asm("loc_65D5637: je loc_65D566B;");
    asm("loc_65D5639: cmp $0xFFFFFFFF,%eax;");
    asm("loc_65D563C: je loc_65D566B;");
    asm("loc_65D563E: mov 4(%esi),%eax;");
    asm("loc_65D5641: lea 0x214(%esp),%edx;");
    asm("loc_65D5648: push %edx;");
    asm("loc_65D5649: push %eax;");
    asm("loc_65D564A: call _sub_65D6CB2;");
    asm("loc_65D564F: test %eax,%eax;");
    asm("loc_65D5651: je loc_65D5669;");
    asm("loc_65D5653: mov %esi,%ecx;");
    asm("loc_65D5655: call _sub_65D5700;");
    asm("loc_65D565A: cmp $0xFFFFFFFF,%eax;");
    asm("loc_65D565D: jne loc_65D5669;");
    asm("loc_65D565F: or %eax,%eax;");
    asm("loc_65D5661: pop %esi;");
    asm("loc_65D5662: add $0x314,%esp;");
    asm("loc_65D5668: ret;");
    asm("loc_65D5669: xor %eax,%eax;");
    asm("loc_65D566B: pop %esi;");
    asm("loc_65D566C: add $0x314,%esp;");
    asm("loc_65D5672: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D5680() // _sub_65D5680
{
    __DEBUG_ASM(65D5680);
    // chunk 0x65D5680 _sub_65D5680
    asm("loc_65D5680: push %esi;");
    asm("loc_65D5681: mov %ecx,%esi;");
    asm("loc_65D5683: mov 0x1008(%esi),%ecx;");
    asm("loc_65D5689: mov 0x100C(%esi),%eax;");
    asm("loc_65D568F: cmp %eax,%ecx;");
    asm("loc_65D5691: lea 8(%ecx,%esi),%edx;");
    asm("loc_65D5695: jl loc_65D569C;");
    asm("loc_65D5697: mov $0x1000,%eax;");
    asm("loc_65D569C: sub %ecx,%eax;");
    asm("loc_65D569E: test %eax,%eax;");
    asm("loc_65D56A0: jne loc_65D56A9;");
    asm("loc_65D56A2: mov $0xFFFFFFFD,%eax;");
    asm("loc_65D56A7: pop %esi;");
    asm("loc_65D56A8: ret;");
    asm("loc_65D56A9: push $0;");
    asm("loc_65D56AB: push %eax;");
    asm("loc_65D56AC: mov 4(%esi),%eax;");
    asm("loc_65D56AF: push %edx;");
    asm("loc_65D56B0: push %eax;");
    asm("loc_65D56B1: call _sub_65D6C9A;");
    asm("loc_65D56B6: cmp $0xFFFFFFFF,%eax;");
    asm("loc_65D56B9: jne loc_65D56BF;");
    asm("loc_65D56BB: or %eax,%eax;");
    asm("loc_65D56BD: pop %esi;");
    asm("loc_65D56BE: ret;");
    asm("loc_65D56BF: test %eax,%eax;");
    asm("loc_65D56C1: jne loc_65D56D1;");
    asm("loc_65D56C3: mov %esi,%ecx;");
    asm("loc_65D56C5: call _sub_65D5520;");
    asm("loc_65D56CA: mov $0xFFFFFFFE,%eax;");
    asm("loc_65D56CF: pop %esi;");
    asm("loc_65D56D0: ret;");
    asm("loc_65D56D1: mov 0x1008(%esi),%ecx;");
    asm("loc_65D56D7: add %eax,%ecx;");
    asm("loc_65D56D9: cmp $0x1000,%ecx;");
    asm("loc_65D56DF: mov %ecx,0x1008(%esi);");
    asm("loc_65D56E5: jl loc_65D56FB;");
    asm("loc_65D56E7: sub $0x1000,%ecx;");
    asm("loc_65D56ED: cmp $0x1000,%ecx;");
    asm("loc_65D56F3: jge loc_65D56E7;");
    asm("loc_65D56F5: mov %ecx,0x1008(%esi);");
    asm("loc_65D56FB: pop %esi;");
    asm("loc_65D56FC: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D5700() // _sub_65D5700
{
    __DEBUG_ASM(65D5700);
    // chunk 0x65D5700 _sub_65D5700
    asm("loc_65D5700: push %esi;");
    asm("loc_65D5701: mov %ecx,%esi;");
    asm("loc_65D5703: mov 0x2014(%esi),%ecx;");
    asm("loc_65D5709: mov 0x2010(%esi),%eax;");
    asm("loc_65D570F: cmp %eax,%ecx;");
    asm("loc_65D5711: lea 0x1010(%ecx,%esi),%edx;");
    asm("loc_65D5718: jle loc_65D571F;");
    asm("loc_65D571A: mov $0x1000,%eax;");
    asm("loc_65D571F: sub %ecx,%eax;");
    asm("loc_65D5721: test %eax,%eax;");
    asm("loc_65D5723: jne loc_65D572C;");
    asm("loc_65D5725: mov $0xFFFFFFFA,%eax;");
    asm("loc_65D572A: pop %esi;");
    asm("loc_65D572B: ret;");
    asm("loc_65D572C: push $0;");
    asm("loc_65D572E: push %eax;");
    asm("loc_65D572F: mov 4(%esi),%eax;");
    asm("loc_65D5732: push %edx;");
    asm("loc_65D5733: push %eax;");
    asm("loc_65D5734: call _sub_65D6CA0;");
    asm("loc_65D5739: cmp $0xFFFFFFFF,%eax;");
    asm("loc_65D573C: jne loc_65D5742;");
    asm("loc_65D573E: or %eax,%eax;");
    asm("loc_65D5740: pop %esi;");
    asm("loc_65D5741: ret;");
    asm("loc_65D5742: mov 0x2014(%esi),%ecx;");
    asm("loc_65D5748: add %eax,%ecx;");
    asm("loc_65D574A: cmp $0x1000,%ecx;");
    asm("loc_65D5750: mov %ecx,0x2014(%esi);");
    asm("loc_65D5756: jl loc_65D576C;");
    asm("loc_65D5758: sub $0x1000,%ecx;");
    asm("loc_65D575E: cmp $0x1000,%ecx;");
    asm("loc_65D5764: jge loc_65D5758;");
    asm("loc_65D5766: mov %ecx,0x2014(%esi);");
    asm("loc_65D576C: pop %esi;");
    asm("loc_65D576D: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D5770() // _sub_65D5770
{
    __DEBUG_ASM(65D5770);
    // chunk 0x65D5770 _sub_65D5770
    asm("loc_65D5770: push %ecx;");
    asm("loc_65D5771: push %ebx;");
    asm("loc_65D5772: push %esi;");
    asm("loc_65D5773: mov 0x10(%esp),%esi;");
    asm("loc_65D5777: push %edi;");
    asm("loc_65D5778: mov %esi,%ecx;");
    asm("loc_65D577A: call _sub_65D5570;");
    asm("loc_65D577F: test %eax,%eax;");
    asm("loc_65D5781: je loc_65D578D;");
    asm("loc_65D5783: pop %edi;");
    asm("loc_65D5784: pop %esi;");
    asm("loc_65D5785: or $0xFFFFFFFF,%eax;");
    asm("loc_65D5788: pop %ebx;");
    asm("loc_65D5789: pop %ecx;");
    asm("loc_65D578A: ret $0xC;");
    asm("loc_65D578D: mov 0x100C(%esi),%eax;");
    asm("loc_65D5793: mov 0x1008(%esi),%ecx;");
    asm("loc_65D5799: lea 8(%esi),%edx;");
    asm("loc_65D579C: xor %ebx,%ebx;");
    asm("loc_65D579E: cmp %ecx,%eax;");
    asm("loc_65D57A0: lea (%eax,%edx),%esi;");
    asm("loc_65D57A3: jg loc_65D57B3;");
    asm("loc_65D57A5: sub %eax,%ecx;");
    asm("loc_65D57A7: mov %ebx,0x14(%esp);");
    asm("loc_65D57AB: mov %ecx,%edi;");
    asm("loc_65D57AD: mov %ebx,0xC(%esp);");
    asm("loc_65D57B1: jmp loc_65D57C2;");
    asm("loc_65D57B3: mov $0x1000,%edi;");
    asm("loc_65D57B8: mov %edx,0x14(%esp);");
    asm("loc_65D57BC: sub %eax,%edi;");
    asm("loc_65D57BE: mov %ecx,0xC(%esp);");
    asm("loc_65D57C2: cmp %ebx,%edi;");
    asm("loc_65D57C4: jne loc_65D57CF;");
    asm("loc_65D57C6: pop %edi;");
    asm("loc_65D57C7: pop %esi;");
    asm("loc_65D57C8: xor %eax,%eax;");
    asm("loc_65D57CA: pop %ebx;");
    asm("loc_65D57CB: pop %ecx;");
    asm("loc_65D57CC: ret $0xC;");
    asm("loc_65D57CF: mov 0x1C(%esp),%ebx;");
    asm("loc_65D57D3: mov %edi,%eax;");
    asm("loc_65D57D5: cmp %ebx,%edi;");
    asm("loc_65D57D7: jl loc_65D57DB;");
    asm("loc_65D57D9: mov %ebx,%eax;");
    asm("loc_65D57DB: mov 0x18(%esp),%edi;");
    asm("loc_65D57DF: mov %eax,%ecx;");
    asm("loc_65D57E1: push %ebp;");
    asm("loc_65D57E2: mov %ecx,%ebp;");
    asm("loc_65D57E4: shr $2,%ecx;");
    asm("loc_65D57E7: rep movsl (%esi),(%edi);");
    asm("loc_65D57E9: mov %ebp,%ecx;");
    asm("loc_65D57EB: sub %eax,%ebx;");
    asm("loc_65D57ED: and $3,%ecx;");
    asm("loc_65D57F0: test %ebx,%ebx;");
    asm("loc_65D57F2: rep movsb (%esi),(%edi);");
    asm("loc_65D57F4: jle loc_65D5820;");
    asm("loc_65D57F6: mov 0x18(%esp),%edi;");
    asm("loc_65D57FA: test %edi,%edi;");
    asm("loc_65D57FC: je loc_65D5820;");
    asm("loc_65D57FE: mov 0x10(%esp),%ecx;");
    asm("loc_65D5802: cmp %ebx,%ecx;");
    asm("loc_65D5804: jge loc_65D5808;");
    asm("loc_65D5806: mov %ecx,%ebx;");
    asm("loc_65D5808: mov 0x1C(%esp),%esi;");
    asm("loc_65D580C: mov %ebx,%ecx;");
    asm("loc_65D580E: mov %ecx,%ebp;");
    asm("loc_65D5810: add %eax,%esi;");
    asm("loc_65D5812: shr $2,%ecx;");
    asm("loc_65D5815: rep movsl (%esi),(%edi);");
    asm("loc_65D5817: mov %ebp,%ecx;");
    asm("loc_65D5819: and $3,%ecx;");
    asm("loc_65D581C: add %ebx,%eax;");
    asm("loc_65D581E: rep movsb (%esi),(%edi);");
    asm("loc_65D5820: mov 0x1004(%edx),%edi;");
    asm("loc_65D5826: pop %ebp;");
    asm("loc_65D5827: add %eax,%edi;");
    asm("loc_65D5829: mov %edi,%ecx;");
    asm("loc_65D582B: mov %edi,0x1004(%edx);");
    asm("loc_65D5831: cmp $0x1000,%ecx;");
    asm("loc_65D5837: jl loc_65D584D;");
    asm("loc_65D5839: sub $0x1000,%ecx;");
    asm("loc_65D583F: cmp $0x1000,%ecx;");
    asm("loc_65D5845: jge loc_65D5839;");
    asm("loc_65D5847: mov %ecx,0x1004(%edx);");
    asm("loc_65D584D: pop %edi;");
    asm("loc_65D584E: pop %esi;");
    asm("loc_65D584F: pop %ebx;");
    asm("loc_65D5850: pop %ecx;");
    asm("loc_65D5851: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D5860() // _sub_65D5860
{
    __DEBUG_ASM(65D5860);
    // chunk 0x65D5860 _sub_65D5860
    asm("loc_65D5860: mov 4(%esp),%eax;");
    asm("loc_65D5864: push %ebx;");
    asm("loc_65D5865: push %ebp;");
    asm("loc_65D5866: push %esi;");
    asm("loc_65D5867: mov 0x100C(%eax),%ecx;");
    asm("loc_65D586D: lea 8(%eax),%edx;");
    asm("loc_65D5870: push %edi;");
    asm("loc_65D5871: mov 0x1000(%edx),%eax;");
    asm("loc_65D5877: lea (%ecx,%edx),%edi;");
    asm("loc_65D587A: cmp %eax,%ecx;");
    asm("loc_65D587C: jg loc_65D5888;");
    asm("loc_65D587E: sub %ecx,%eax;");
    asm("loc_65D5880: xor %ebx,%ebx;");
    asm("loc_65D5882: mov %eax,%esi;");
    asm("loc_65D5884: xor %ebp,%ebp;");
    asm("loc_65D5886: jmp loc_65D5893;");
    asm("loc_65D5888: mov $0x1000,%esi;");
    asm("loc_65D588D: mov %edx,%ebx;");
    asm("loc_65D588F: sub %ecx,%esi;");
    asm("loc_65D5891: mov %eax,%ebp;");
    asm("loc_65D5893: test %esi,%esi;");
    asm("loc_65D5895: jne loc_65D58A0;");
    asm("loc_65D5897: pop %edi;");
    asm("loc_65D5898: pop %esi;");
    asm("loc_65D5899: pop %ebp;");
    asm("loc_65D589A: xor %eax,%eax;");
    asm("loc_65D589C: pop %ebx;");
    asm("loc_65D589D: ret $0xC;");
    asm("loc_65D58A0: push %esi;");
    asm("loc_65D58A1: push $0xA;");
    asm("loc_65D58A3: push %edi;");
    asm("loc_65D58A4: call _sub_65D77A0;");
    asm("loc_65D58A9: add $0xC,%esp;");
    asm("loc_65D58AC: test %eax,%eax;");
    asm("loc_65D58AE: jne loc_65D58D8;");
    asm("loc_65D58B0: test %ebp,%ebp;");
    asm("loc_65D58B2: jne loc_65D58BB;");
    asm("loc_65D58B4: pop %edi;");
    asm("loc_65D58B5: pop %esi;");
    asm("loc_65D58B6: pop %ebp;");
    asm("loc_65D58B7: pop %ebx;");
    asm("loc_65D58B8: ret $0xC;");
    asm("loc_65D58BB: push %ebp;");
    asm("loc_65D58BC: push $0xA;");
    asm("loc_65D58BE: push %ebx;");
    asm("loc_65D58BF: call _sub_65D77A0;");
    asm("loc_65D58C4: add $0xC,%esp;");
    asm("loc_65D58C7: test %eax,%eax;");
    asm("loc_65D58C9: jne loc_65D58D2;");
    asm("loc_65D58CB: pop %edi;");
    asm("loc_65D58CC: pop %esi;");
    asm("loc_65D58CD: pop %ebp;");
    asm("loc_65D58CE: pop %ebx;");
    asm("loc_65D58CF: ret $0xC;");
    asm("loc_65D58D2: sub %ebx,%eax;");
    asm("loc_65D58D4: add %esi,%eax;");
    asm("loc_65D58D6: jmp loc_65D58DA;");
    asm("loc_65D58D8: sub %edi,%eax;");
    asm("loc_65D58DA: mov %eax,%esi;");
    asm("loc_65D58DC: mov 0x1C(%esp),%eax;");
    asm("loc_65D58E0: cmp %eax,%esi;");
    asm("loc_65D58E2: jle loc_65D58EE;");
    asm("loc_65D58E4: pop %edi;");
    asm("loc_65D58E5: pop %esi;");
    asm("loc_65D58E6: pop %ebp;");
    asm("loc_65D58E7: or $0xFFFFFFFF,%eax;");
    asm("loc_65D58EA: pop %ebx;");
    asm("loc_65D58EB: ret $0xC;");
    asm("loc_65D58EE: mov 0x14(%esp),%eax;");
    asm("loc_65D58F2: mov 0x18(%esp),%ebx;");
    asm("loc_65D58F6: lea 1(%esi),%edi;");
    asm("loc_65D58F9: mov (%eax),%ecx;");
    asm("loc_65D58FB: push %edi;");
    asm("loc_65D58FC: push %ebx;");
    asm("loc_65D58FD: push %eax;");
    asm("loc_65D58FE: calll *0xC(%ecx);");
    asm("loc_65D5901: mov %edi,%eax;");
    asm("loc_65D5903: movb $0,1(%esi,%ebx);");
    asm("loc_65D5908: pop %edi;");
    asm("loc_65D5909: pop %esi;");
    asm("loc_65D590A: pop %ebp;");
    asm("loc_65D590B: pop %ebx;");
    asm("loc_65D590C: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D5910() // _sub_65D5910
{
    __DEBUG_ASM(65D5910);
    // chunk 0x65D5910 _sub_65D5910
    asm("loc_65D5910: mov 4(%esp),%eax;");
    asm("loc_65D5914: sub $8,%esp;");
    asm("loc_65D5917: mov 0x2014(%eax),%ecx;");
    asm("loc_65D591D: lea 0x1010(%eax),%edx;");
    asm("loc_65D5923: push %ebx;");
    asm("loc_65D5924: push %ebp;");
    asm("loc_65D5925: mov 0x1000(%edx),%eax;");
    asm("loc_65D592B: push %esi;");
    asm("loc_65D592C: xor %ebx,%ebx;");
    asm("loc_65D592E: push %edi;");
    asm("loc_65D592F: cmp %ecx,%eax;");
    asm("loc_65D5931: lea (%eax,%edx),%edi;");
    asm("loc_65D5934: jge loc_65D5944;");
    asm("loc_65D5936: sub %eax,%ecx;");
    asm("loc_65D5938: mov %ebx,0x10(%esp);");
    asm("loc_65D593C: mov %ecx,%esi;");
    asm("loc_65D593E: mov %ebx,0x14(%esp);");
    asm("loc_65D5942: jmp loc_65D5953;");
    asm("loc_65D5944: mov $0x1000,%esi;");
    asm("loc_65D5949: mov %edx,0x10(%esp);");
    asm("loc_65D594D: sub %eax,%esi;");
    asm("loc_65D594F: mov %ecx,0x14(%esp);");
    asm("loc_65D5953: cmp %ebx,%esi;");
    asm("loc_65D5955: jne loc_65D5963;");
    asm("loc_65D5957: pop %edi;");
    asm("loc_65D5958: pop %esi;");
    asm("loc_65D5959: pop %ebp;");
    asm("loc_65D595A: xor %eax,%eax;");
    asm("loc_65D595C: pop %ebx;");
    asm("loc_65D595D: add $8,%esp;");
    asm("loc_65D5960: ret $0xC;");
    asm("loc_65D5963: mov 0x24(%esp),%ebx;");
    asm("loc_65D5967: mov %esi,%eax;");
    asm("loc_65D5969: cmp %ebx,%esi;");
    asm("loc_65D596B: jl loc_65D596F;");
    asm("loc_65D596D: mov %ebx,%eax;");
    asm("loc_65D596F: mov 0x20(%esp),%esi;");
    asm("loc_65D5973: mov %eax,%ecx;");
    asm("loc_65D5975: mov %ecx,%ebp;");
    asm("loc_65D5977: sub %eax,%ebx;");
    asm("loc_65D5979: shr $2,%ecx;");
    asm("loc_65D597C: rep movsl (%esi),(%edi);");
    asm("loc_65D597E: mov %ebp,%ecx;");
    asm("loc_65D5980: and $3,%ecx;");
    asm("loc_65D5983: test %ebx,%ebx;");
    asm("loc_65D5985: rep movsb (%esi),(%edi);");
    asm("loc_65D5987: jle loc_65D59B4;");
    asm("loc_65D5989: mov 0x10(%esp),%edi;");
    asm("loc_65D598D: test %edi,%edi;");
    asm("loc_65D598F: je loc_65D59B4;");
    asm("loc_65D5991: mov 0x14(%esp),%eax;");
    asm("loc_65D5995: cmp %ebx,%eax;");
    asm("loc_65D5997: jge loc_65D599B;");
    asm("loc_65D5999: mov %eax,%ebx;");
    asm("loc_65D599B: mov 0x20(%esp),%eax;");
    asm("loc_65D599F: mov %ebx,%ecx;");
    asm("loc_65D59A1: lea (%eax,%ebp),%esi;");
    asm("loc_65D59A4: mov %ecx,%eax;");
    asm("loc_65D59A6: shr $2,%ecx;");
    asm("loc_65D59A9: rep movsl (%esi),(%edi);");
    asm("loc_65D59AB: mov %eax,%ecx;");
    asm("loc_65D59AD: and $3,%ecx;");
    asm("loc_65D59B0: add %ebx,%ebp;");
    asm("loc_65D59B2: rep movsb (%esi),(%edi);");
    asm("loc_65D59B4: mov 0x1000(%edx),%esi;");
    asm("loc_65D59BA: add %ebp,%esi;");
    asm("loc_65D59BC: mov %esi,%eax;");
    asm("loc_65D59BE: mov %esi,0x1000(%edx);");
    asm("loc_65D59C4: cmp $0x1000,%eax;");
    asm("loc_65D59C9: jl loc_65D59DD;");
    asm("loc_65D59CB: sub $0x1000,%eax;");
    asm("loc_65D59D0: cmp $0x1000,%eax;");
    asm("loc_65D59D5: jge loc_65D59CB;");
    asm("loc_65D59D7: mov %eax,0x1000(%edx);");
    asm("loc_65D59DD: mov 0x1C(%esp),%ecx;");
    asm("loc_65D59E1: call _sub_65D5570;");
    asm("loc_65D59E6: test %eax,%eax;");
    asm("loc_65D59E8: je loc_65D59F7;");
    asm("loc_65D59EA: pop %edi;");
    asm("loc_65D59EB: pop %esi;");
    asm("loc_65D59EC: pop %ebp;");
    asm("loc_65D59ED: or $0xFFFFFFFF,%eax;");
    asm("loc_65D59F0: pop %ebx;");
    asm("loc_65D59F1: add $8,%esp;");
    asm("loc_65D59F4: ret $0xC;");
    asm("loc_65D59F7: pop %edi;");
    asm("loc_65D59F8: mov %ebp,%eax;");
    asm("loc_65D59FA: pop %esi;");
    asm("loc_65D59FB: pop %ebp;");
    asm("loc_65D59FC: pop %ebx;");
    asm("loc_65D59FD: add $8,%esp;");
    asm("loc_65D5A00: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D5A10() // _sub_65D5A10
{
    __DEBUG_ASM(65D5A10);
    // chunk 0x65D5A10 _sub_65D5A10
    asm("loc_65D5A10: push %ebx;");
    asm("loc_65D5A11: mov 0xC(%esp),%ebx;");
    asm("loc_65D5A15: push %esi;");
    asm("loc_65D5A16: push %edi;");
    asm("loc_65D5A17: mov %ebx,%edi;");
    asm("loc_65D5A19: or $0xFFFFFFFF,%ecx;");
    asm("loc_65D5A1C: xor %eax,%eax;");
    asm("loc_65D5A1E: mov 0x10(%esp),%esi;");
    asm("loc_65D5A22: repne scas (%edi),%al;");
    asm("loc_65D5A24: mov 0x2010(%esi),%eax;");
    asm("loc_65D5A2A: mov 0x2014(%esi),%edx;");
    asm("loc_65D5A30: not %ecx;");
    asm("loc_65D5A32: dec %ecx;");
    asm("loc_65D5A33: cmp %edx,%eax;");
    asm("loc_65D5A35: jge loc_65D5A40;");
    asm("loc_65D5A37: sub %edx,%eax;");
    asm("loc_65D5A39: add $0x1000,%eax;");
    asm("loc_65D5A3E: jmp loc_65D5A42;");
    asm("loc_65D5A40: sub %edx,%eax;");
    asm("loc_65D5A42: mov $0x1000,%edx;");
    asm("loc_65D5A47: lea 2(%ecx),%edi;");
    asm("loc_65D5A4A: sub %eax,%edx;");
    asm("loc_65D5A4C: cmp %edi,%edx;");
    asm("loc_65D5A4E: jge loc_65D5A58;");
    asm("loc_65D5A50: pop %edi;");
    asm("loc_65D5A51: pop %esi;");
    asm("loc_65D5A52: xor %eax,%eax;");
    asm("loc_65D5A54: pop %ebx;");
    asm("loc_65D5A55: ret $8;");
    asm("loc_65D5A58: mov (%esi),%eax;");
    asm("loc_65D5A5A: push %ecx;");
    asm("loc_65D5A5B: push %ebx;");
    asm("loc_65D5A5C: push %esi;");
    asm("loc_65D5A5D: calll *0x14(%eax);");
    asm("loc_65D5A60: mov (%esi),%ecx;");
    asm("loc_65D5A62: push $2;");
    asm("loc_65D5A64: push $_data_65E320C;");
    asm("loc_65D5A69: push %esi;");
    asm("loc_65D5A6A: calll *0x14(%ecx);");
    asm("loc_65D5A6D: mov %edi,%eax;");
    asm("loc_65D5A6F: pop %edi;");
    asm("loc_65D5A70: pop %esi;");
    asm("loc_65D5A71: pop %ebx;");
    asm("loc_65D5A72: ret $8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D5A80() // _sub_65D5A80
{
    __DEBUG_ASM(65D5A80);
    // chunk 0x65D5A80 _sub_65D5A80
    asm("loc_65D5A80: push %esi;");
    asm("loc_65D5A81: push %edi;");
    asm("loc_65D5A82: push $0xC;");
    asm("loc_65D5A84: call _sub_65D6F71;");
    asm("loc_65D5A89: add $4,%esp;");
    asm("loc_65D5A8C: test %eax,%eax;");
    asm("loc_65D5A8E: je loc_65D5AA8;");
    asm("loc_65D5A90: movl $1,4(%eax);");
    asm("loc_65D5A97: movl $_data_65E3224,8(%eax);");
    asm("loc_65D5A9E: movl $_off_65E1474,(%eax);");
    asm("loc_65D5AA4: mov %eax,%esi;");
    asm("loc_65D5AA6: jmp loc_65D5AAA;");
    asm("loc_65D5AA8: xor %esi,%esi;");
    asm("loc_65D5AAA: mov _import_65E1004,%edi;");
    asm("loc_65D5AB0: call *%edi;");
    asm("loc_65D5AB2: mov (%eax),%ecx;");
    asm("loc_65D5AB4: push $0x40000000;");
    asm("loc_65D5AB9: push $_data_65E3224;");
    asm("loc_65D5ABE: push %esi;");
    asm("loc_65D5ABF: push %eax;");
    asm("loc_65D5AC0: calll *0x10(%ecx);");
    asm("loc_65D5AC3: mov (%esi),%edx;");
    asm("loc_65D5AC5: push %esi;");
    asm("loc_65D5AC6: calll *8(%edx);");
    asm("loc_65D5AC9: push $0xC;");
    asm("loc_65D5ACB: call _sub_65D6F71;");
    asm("loc_65D5AD0: add $4,%esp;");
    asm("loc_65D5AD3: test %eax,%eax;");
    asm("loc_65D5AD5: je loc_65D5AEF;");
    asm("loc_65D5AD7: movl $1,4(%eax);");
    asm("loc_65D5ADE: movl $_data_65E3210,8(%eax);");
    asm("loc_65D5AE5: movl $_off_65E1464,(%eax);");
    asm("loc_65D5AEB: mov %eax,%esi;");
    asm("loc_65D5AED: jmp loc_65D5AF1;");
    asm("loc_65D5AEF: xor %esi,%esi;");
    asm("loc_65D5AF1: call *%edi;");
    asm("loc_65D5AF3: mov (%eax),%ecx;");
    asm("loc_65D5AF5: push $0x40000000;");
    asm("loc_65D5AFA: push $_data_65E3210;");
    asm("loc_65D5AFF: push %esi;");
    asm("loc_65D5B00: push %eax;");
    asm("loc_65D5B01: calll *0x10(%ecx);");
    asm("loc_65D5B04: mov (%esi),%edx;");
    asm("loc_65D5B06: push %esi;");
    asm("loc_65D5B07: calll *8(%edx);");
    asm("loc_65D5B0A: pop %edi;");
    asm("loc_65D5B0B: pop %esi;");
    asm("loc_65D5B0C: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D5B10() // _sub_65D5B10
{
    __DEBUG_ASM(65D5B10);
    // chunk 0x65D5B10 _sub_65D5B10
    asm("loc_65D5B10: mov 0xC(%esp),%edx;");
    asm("loc_65D5B14: push %esi;");
    asm("loc_65D5B15: mov 0xC(%esp),%esi;");
    asm("loc_65D5B19: push %edi;");
    asm("loc_65D5B1A: mov $_data_65E3140,%edi;");
    asm("loc_65D5B1F: mov $0x17,%ecx;");
    asm("loc_65D5B24: xor %eax,%eax;");
    asm("loc_65D5B26: movl $0,(%edx);");
    asm("loc_65D5B2C: repe cmpsb (%edi),(%esi);");
    asm("loc_65D5B2E: pop %edi;");
    asm("loc_65D5B2F: pop %esi;");
    asm("loc_65D5B30: je loc_65D5B3A;");
    asm("loc_65D5B32: mov $0xFFFFFFFD,%eax;");
    asm("loc_65D5B37: ret $0xC;");
    asm("loc_65D5B3A: mov 4(%esp),%eax;");
    asm("loc_65D5B3E: mov %eax,(%edx);");
    asm("loc_65D5B40: push %eax;");
    asm("loc_65D5B41: mov (%eax),%ecx;");
    asm("loc_65D5B43: calll *4(%ecx);");
    asm("loc_65D5B46: xor %eax,%eax;");
    asm("loc_65D5B48: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D5B50() // _sub_65D5B50
{
    __DEBUG_ASM(65D5B50);
    // chunk 0x65D5B50 _sub_65D5B50
    asm("loc_65D5B50: mov %fs:0,%eax;");
    asm("loc_65D5B56: push $0xFFFFFFFF;");
    asm("loc_65D5B58: push $_sub_65E0096;");
    asm("loc_65D5B5D: push %eax;");
    asm("loc_65D5B5E: mov 0x14(%esp),%eax;");
    asm("loc_65D5B62: mov %esp,%fs:0;");
    asm("loc_65D5B69: push %ebx;");
    asm("loc_65D5B6A: push %esi;");
    asm("loc_65D5B6B: mov (%eax),%ecx;");
    asm("loc_65D5B6D: push %edi;");
    asm("loc_65D5B6E: xor %edi,%edi;");
    asm("loc_65D5B70: cmp $8,%ecx;");
    asm("loc_65D5B73: jne loc_65D5C62;");
    asm("loc_65D5B79: mov 0x1C(%esp),%ecx;");
    asm("loc_65D5B7D: mov 4(%eax),%eax;");
    asm("loc_65D5B80: mov 8(%ecx),%esi;");
    asm("loc_65D5B83: mov (%eax),%dl;");
    asm("loc_65D5B85: mov (%esi),%bl;");
    asm("loc_65D5B87: mov %dl,%cl;");
    asm("loc_65D5B89: cmp %bl,%dl;");
    asm("loc_65D5B8B: jne loc_65D5BAB;");
    asm("loc_65D5B8D: test %cl,%cl;");
    asm("loc_65D5B8F: je loc_65D5BA7;");
    asm("loc_65D5B91: mov 1(%eax),%dl;");
    asm("loc_65D5B94: mov 1(%esi),%bl;");
    asm("loc_65D5B97: mov %dl,%cl;");
    asm("loc_65D5B99: cmp %bl,%dl;");
    asm("loc_65D5B9B: jne loc_65D5BAB;");
    asm("loc_65D5B9D: add $2,%eax;");
    asm("loc_65D5BA0: add $2,%esi;");
    asm("loc_65D5BA3: test %cl,%cl;");
    asm("loc_65D5BA5: jne loc_65D5B83;");
    asm("loc_65D5BA7: xor %eax,%eax;");
    asm("loc_65D5BA9: jmp loc_65D5BB0;");
    asm("loc_65D5BAB: sbb %eax,%eax;");
    asm("loc_65D5BAD: sbb $0xFFFFFFFF,%eax;");
    asm("loc_65D5BB0: test %eax,%eax;");
    asm("loc_65D5BB2: jne loc_65D5C62;");
    asm("loc_65D5BB8: push $0x28;");
    asm("loc_65D5BBA: call _sub_65D6F71;");
    asm("loc_65D5BBF: mov %eax,%esi;");
    asm("loc_65D5BC1: add $4,%esp;");
    asm("loc_65D5BC4: mov %esi,0x20(%esp);");
    asm("loc_65D5BC8: test %esi,%esi;");
    asm("loc_65D5BCA: movl $0,0x14(%esp);");
    asm("loc_65D5BD2: je loc_65D5C3A;");
    asm("loc_65D5BD4: mov 0x24(%esp),%al;");
    asm("loc_65D5BD8: lea 8(%esi),%edi;");
    asm("loc_65D5BDB: push $0;");
    asm("loc_65D5BDD: movl $_off_65E14A8,(%esi);");
    asm("loc_65D5BE3: push $0;");
    asm("loc_65D5BE5: mov %edi,%ecx;");
    asm("loc_65D5BE7: mov %al,(%edi);");
    asm("loc_65D5BE9: call _sub_65D64C0;");
    asm("loc_65D5BEE: mov %eax,4(%edi);");
    asm("loc_65D5BF1: movl $0,8(%edi);");
    asm("loc_65D5BF8: mov 0x24(%esp),%cl;");
    asm("loc_65D5BFC: push $0x14;");
    asm("loc_65D5BFE: movb $1,0x18(%esp);");
    asm("loc_65D5C03: mov %cl,0x14(%esi);");
    asm("loc_65D5C06: call _sub_65D6F71;");
    asm("loc_65D5C0B: mov %eax,(%eax);");
    asm("loc_65D5C0D: mov %eax,4(%eax);");
    asm("loc_65D5C10: mov %eax,0x18(%esi);");
    asm("loc_65D5C13: movl $0,0x1C(%esi);");
    asm("loc_65D5C1A: add $4,%esp;");
    asm("loc_65D5C1D: movl $0xFFFFFFFF,4(%esi);");
    asm("loc_65D5C24: movl $1,0x20(%esi);");
    asm("loc_65D5C2B: movl $_off_65E1484,(%esi);");
    asm("loc_65D5C31: movl $1,0x24(%esi);");
    asm("loc_65D5C38: jmp loc_65D5C3C;");
    asm("loc_65D5C3A: xor %esi,%esi;");
    asm("loc_65D5C3C: mov 0x24(%esp),%edx;");
    asm("loc_65D5C40: mov %esi,%eax;");
    asm("loc_65D5C42: neg %eax;");
    asm("loc_65D5C44: sbb %eax,%eax;");
    asm("loc_65D5C46: mov %esi,(%edx);");
    asm("loc_65D5C48: and $4,%eax;");
    asm("loc_65D5C4B: add $0xFFFFFFFC,%eax;");
    asm("loc_65D5C4E: mov 0xC(%esp),%ecx;");
    asm("loc_65D5C52: mov %ecx,%fs:0;");
    asm("loc_65D5C59: pop %edi;");
    asm("loc_65D5C5A: pop %esi;");
    asm("loc_65D5C5B: pop %ebx;");
    asm("loc_65D5C5C: add $0xC,%esp;");
    asm("loc_65D5C5F: ret $0xC;");
    asm("loc_65D5C62: mov 0x24(%esp),%ecx;");
    asm("loc_65D5C66: mov $0xFFFFFFFD,%eax;");
    asm("loc_65D5C6B: mov %edi,(%ecx);");
    asm("loc_65D5C6D: mov 0xC(%esp),%ecx;");
    asm("loc_65D5C71: pop %edi;");
    asm("loc_65D5C72: pop %esi;");
    asm("loc_65D5C73: mov %ecx,%fs:0;");
    asm("loc_65D5C7A: pop %ebx;");
    asm("loc_65D5C7B: add $0xC,%esp;");
    asm("loc_65D5C7E: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D5C90() // _sub_65D5C90
{
    __DEBUG_ASM(65D5C90);
    // chunk 0x65D5C90 _sub_65D5C90
    asm("loc_65D5C90: sub $0x10,%esp;");
    asm("loc_65D5C93: push %esi;");
    asm("loc_65D5C94: mov 0x18(%esp),%esi;");
    asm("loc_65D5C98: cmpl $0xFFFFFFFF,4(%esi);");
    asm("loc_65D5C9C: je loc_65D5CA8;");
    asm("loc_65D5C9E: or $0xFFFFFFFF,%eax;");
    asm("loc_65D5CA1: pop %esi;");
    asm("loc_65D5CA2: add $0x10,%esp;");
    asm("loc_65D5CA5: ret $8;");
    asm("loc_65D5CA8: push $0;");
    asm("loc_65D5CAA: push $1;");
    asm("loc_65D5CAC: push $2;");
    asm("loc_65D5CAE: call _sub_65D6C64;");
    asm("loc_65D5CB3: cmp $0xFFFFFFFF,%eax;");
    asm("loc_65D5CB6: mov %eax,4(%esi);");
    asm("loc_65D5CB9: jne loc_65D5CC4;");
    asm("loc_65D5CBB: or %eax,%eax;");
    asm("loc_65D5CBD: pop %esi;");
    asm("loc_65D5CBE: add $0x10,%esp;");
    asm("loc_65D5CC1: ret $8;");
    asm("loc_65D5CC4: mov 0x1C(%esp),%eax;");
    asm("loc_65D5CC8: test %eax,%eax;");
    asm("loc_65D5CCA: jne loc_65D5CD1;");
    asm("loc_65D5CCC: mov $0x50,%eax;");
    asm("loc_65D5CD1: xor %ecx,%ecx;");
    asm("loc_65D5CD3: push %eax;");
    asm("loc_65D5CD4: mov %ecx,8(%esp);");
    asm("loc_65D5CD8: movw $2,8(%esp);");
    asm("loc_65D5CDF: mov %ecx,0xC(%esp);");
    asm("loc_65D5CE3: mov %ecx,0x10(%esp);");
    asm("loc_65D5CE7: mov %ecx,0x14(%esp);");
    asm("loc_65D5CEB: call _sub_65D6C58;");
    asm("loc_65D5CF0: lea 4(%esp),%edx;");
    asm("loc_65D5CF4: push $0x10;");
    asm("loc_65D5CF6: mov %ax,0xA(%esp);");
    asm("loc_65D5CFB: mov 4(%esi),%eax;");
    asm("loc_65D5CFE: push %edx;");
    asm("loc_65D5CFF: push %eax;");
    asm("loc_65D5D00: call _sub_65D6C52;");
    asm("loc_65D5D05: test %eax,%eax;");
    asm("loc_65D5D07: jge loc_65D5D1C;");
    asm("loc_65D5D09: mov 4(%esi),%ecx;");
    asm("loc_65D5D0C: push %ecx;");
    asm("loc_65D5D0D: call _sub_65D6C4C;");
    asm("loc_65D5D12: or $0xFFFFFFFF,%eax;");
    asm("loc_65D5D15: pop %esi;");
    asm("loc_65D5D16: add $0x10,%esp;");
    asm("loc_65D5D19: ret $8;");
    asm("loc_65D5D1C: mov 4(%esi),%edx;");
    asm("loc_65D5D1F: push $5;");
    asm("loc_65D5D21: push %edx;");
    asm("loc_65D5D22: call _sub_65D6C46;");
    asm("loc_65D5D27: test %eax,%eax;");
    asm("loc_65D5D29: jge loc_65D5D3E;");
    asm("loc_65D5D2B: mov 4(%esi),%eax;");
    asm("loc_65D5D2E: push %eax;");
    asm("loc_65D5D2F: call _sub_65D6C4C;");
    asm("loc_65D5D34: or $0xFFFFFFFF,%eax;");
    asm("loc_65D5D37: pop %esi;");
    asm("loc_65D5D38: add $0x10,%esp;");
    asm("loc_65D5D3B: ret $8;");
    asm("loc_65D5D3E: xor %eax,%eax;");
    asm("loc_65D5D40: pop %esi;");
    asm("loc_65D5D41: add $0x10,%esp;");
    asm("loc_65D5D44: ret $8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D5D50() // _sub_65D5D50
{
    __DEBUG_ASM(65D5D50);
    // chunk 0x65D5D50 _sub_65D5D50
    asm("loc_65D5D50: mov %fs:0,%eax;");
    asm("loc_65D5D56: push $0xFFFFFFFF;");
    asm("loc_65D5D58: push $_sub_65E00B9;");
    asm("loc_65D5D5D: push %eax;");
    asm("loc_65D5D5E: mov %esp,%fs:0;");
    asm("loc_65D5D65: sub $0x434,%esp;");
    asm("loc_65D5D6B: push %ebx;");
    asm("loc_65D5D6C: mov 0x448(%esp),%ebx;");
    asm("loc_65D5D73: push %ebp;");
    asm("loc_65D5D74: push %esi;");
    asm("loc_65D5D75: mov 4(%ebx),%eax;");
    asm("loc_65D5D78: push %edi;");
    asm("loc_65D5D79: cmp $0xFFFFFFFF,%eax;");
    asm("loc_65D5D7C: jne loc_65D5D85;");
    asm("loc_65D5D7E: or %eax,%eax;");
    asm("loc_65D5D80: jmp loc_65D6173;");
    asm("loc_65D5D85: mov $1,%ecx;");
    asm("loc_65D5D8A: mov %eax,0x240(%esp);");
    asm("loc_65D5D91: mov %eax,0x13C(%esp);");
    asm("loc_65D5D98: mov %ecx,0x23C(%esp);");
    asm("loc_65D5D9F: mov %ecx,0x138(%esp);");
    asm("loc_65D5DA6: lea 0x20(%esp),%eax;");
    asm("loc_65D5DAA: lea 0x138(%esp),%ecx;");
    asm("loc_65D5DB1: push %eax;");
    asm("loc_65D5DB2: lea 0x344(%esp),%edx;");
    asm("loc_65D5DB9: push %ecx;");
    asm("loc_65D5DBA: lea 0x244(%esp),%eax;");
    asm("loc_65D5DC1: xor %ebp,%ebp;");
    asm("loc_65D5DC3: push %edx;");
    asm("loc_65D5DC4: push %eax;");
    asm("loc_65D5DC5: push %ebp;");
    asm("loc_65D5DC6: mov %ebp,0x354(%esp);");
    asm("loc_65D5DCD: mov %ebp,0x34(%esp);");
    asm("loc_65D5DD1: mov %ebp,0x38(%esp);");
    asm("loc_65D5DD5: call _sub_65D6C7C;");
    asm("loc_65D5DDA: cmp $0xFFFFFFFF,%eax;");
    asm("loc_65D5DDD: jne loc_65D5DE6;");
    asm("loc_65D5DDF: or %eax,%eax;");
    asm("loc_65D5DE1: jmp loc_65D6173;");
    asm("loc_65D5DE6: cmp %ebp,%eax;");
    asm("loc_65D5DE8: je loc_65D5EDD;");
    asm("loc_65D5DEE: mov 4(%ebx),%edx;");
    asm("loc_65D5DF1: lea 0x138(%esp),%ecx;");
    asm("loc_65D5DF8: push %ecx;");
    asm("loc_65D5DF9: push %edx;");
    asm("loc_65D5DFA: call _sub_65D6CB2;");
    asm("loc_65D5DFF: test %eax,%eax;");
    asm("loc_65D5E01: je loc_65D5E0B;");
    asm("loc_65D5E03: or $0xFFFFFFFF,%eax;");
    asm("loc_65D5E06: jmp loc_65D6173;");
    asm("loc_65D5E0B: mov 4(%ebx),%ecx;");
    asm("loc_65D5E0E: lea 0x23C(%esp),%eax;");
    asm("loc_65D5E15: push %eax;");
    asm("loc_65D5E16: push %ecx;");
    asm("loc_65D5E17: call _sub_65D6CB2;");
    asm("loc_65D5E1C: test %eax,%eax;");
    asm("loc_65D5E1E: je loc_65D5EDD;");
    asm("loc_65D5E24: mov 4(%ebx),%ecx;");
    asm("loc_65D5E27: lea 0x18(%esp),%edx;");
    asm("loc_65D5E2B: lea 0x28(%esp),%eax;");
    asm("loc_65D5E2F: push %edx;");
    asm("loc_65D5E30: push %eax;");
    asm("loc_65D5E31: push %ecx;");
    asm("loc_65D5E32: movl $0x10,0x24(%esp);");
    asm("loc_65D5E3A: call _sub_65D6C76;");
    asm("loc_65D5E3F: mov %eax,%edi;");
    asm("loc_65D5E41: cmp $0xFFFFFFFF,%edi;");
    asm("loc_65D5E44: je loc_65D5EDD;");
    asm("loc_65D5E4A: push $0x2524;");
    asm("loc_65D5E4F: call _sub_65D6F71;");
    asm("loc_65D5E54: mov %eax,%esi;");
    asm("loc_65D5E56: add $4,%esp;");
    asm("loc_65D5E59: mov %esi,0x1C(%esp);");
    asm("loc_65D5E5D: cmp %ebp,%esi;");
    asm("loc_65D5E5F: mov %ebp,0x44C(%esp);");
    asm("loc_65D5E66: je loc_65D5E83;");
    asm("loc_65D5E68: mov %esi,%ecx;");
    asm("loc_65D5E6A: call _sub_65D64F0;");
    asm("loc_65D5E6F: movl $_off_65E14CC,(%esi);");
    asm("loc_65D5E75: movl $1,0x2520(%esi);");
    asm("loc_65D5E7F: mov %esi,%eax;");
    asm("loc_65D5E81: jmp loc_65D5E85;");
    asm("loc_65D5E83: xor %eax,%eax;");
    asm("loc_65D5E85: or $0xFFFFFFFF,%esi;");
    asm("loc_65D5E88: cmp %ebp,%eax;");
    asm("loc_65D5E8A: mov %esi,0x44C(%esp);");
    asm("loc_65D5E91: mov %eax,0x14(%esp);");
    asm("loc_65D5E95: je loc_65D5E9D;");
    asm("loc_65D5E97: mov (%eax),%edx;");
    asm("loc_65D5E99: push %eax;");
    asm("loc_65D5E9A: calll *4(%edx);");
    asm("loc_65D5E9D: mov 0x14(%esp),%ecx;");
    asm("loc_65D5EA1: push %edi;");
    asm("loc_65D5EA2: movl $1,0x450(%esp);");
    asm("loc_65D5EAD: call _sub_65D5500;");
    asm("loc_65D5EB2: mov 0xC(%ebx),%eax;");
    asm("loc_65D5EB5: lea 8(%ebx),%ecx;");
    asm("loc_65D5EB8: lea 0x14(%esp),%edx;");
    asm("loc_65D5EBC: push %edx;");
    asm("loc_65D5EBD: push %eax;");
    asm("loc_65D5EBE: lea 0x24(%esp),%eax;");
    asm("loc_65D5EC2: push %eax;");
    asm("loc_65D5EC3: call _sub_65D6460;");
    asm("loc_65D5EC8: mov %esi,0x44C(%esp);");
    asm("loc_65D5ECF: mov 0x14(%esp),%eax;");
    asm("loc_65D5ED3: cmp %ebp,%eax;");
    asm("loc_65D5ED5: je loc_65D5EDD;");
    asm("loc_65D5ED7: mov (%eax),%ecx;");
    asm("loc_65D5ED9: push %eax;");
    asm("loc_65D5EDA: calll *8(%ecx);");
    asm("loc_65D5EDD: mov 0xC(%ebx),%eax;");
    asm("loc_65D5EE0: mov (%eax),%edi;");
    asm("loc_65D5EE2: cmp %eax,%edi;");
    asm("loc_65D5EE4: je loc_65D6171;");
    asm("loc_65D5EEA: mov 8(%edi),%esi;");
    asm("loc_65D5EED: lea 8(%edi),%ebp;");
    asm("loc_65D5EF0: mov %esi,%ecx;");
    asm("loc_65D5EF2: call _sub_65D5570;");
    asm("loc_65D5EF7: mov (%esi),%edx;");
    asm("loc_65D5EF9: lea 0x38(%esp),%eax;");
    asm("loc_65D5EFD: push $0xFF;");
    asm("loc_65D5F02: push %eax;");
    asm("loc_65D5F03: push %esi;");
    asm("loc_65D5F04: calll *0x10(%edx);");
    asm("loc_65D5F07: cmp $0xFFFFFFFF,%eax;");
    asm("loc_65D5F0A: jne loc_65D5F3B;");
    asm("loc_65D5F0C: mov (%esi),%ecx;");
    asm("loc_65D5F0E: push $_data_65E3298;");
    asm("loc_65D5F13: push %esi;");
    asm("loc_65D5F14: calll *0x18(%ecx);");
    asm("loc_65D5F17: mov %esi,%ecx;");
    asm("loc_65D5F19: call _sub_65D5520;");
    asm("loc_65D5F1E: mov %esi,%ecx;");
    asm("loc_65D5F20: call _sub_65D5540;");
    asm("loc_65D5F25: mov 4(%edi),%edx;");
    asm("loc_65D5F28: mov (%edi),%esi;");
    asm("loc_65D5F2A: mov %esi,(%edx);");
    asm("loc_65D5F2C: mov (%edi),%eax;");
    asm("loc_65D5F2E: mov 4(%edi),%ecx;");
    asm("loc_65D5F31: mov %ecx,4(%eax);");
    asm("loc_65D5F34: mov %ebp,%ecx;");
    asm("loc_65D5F36: jmp loc_65D6058;");
    asm("loc_65D5F3B: test %eax,%eax;");
    asm("loc_65D5F3D: jle loc_65D6166;");
    asm("loc_65D5F43: lea 0x38(%esp),%edx;");
    asm("loc_65D5F47: push $0xA;");
    asm("loc_65D5F49: push %edx;");
    asm("loc_65D5F4A: call _sub_65D7990;");
    asm("loc_65D5F4F: add $8,%esp;");
    asm("loc_65D5F52: test %eax,%eax;");
    asm("loc_65D5F54: je loc_65D6022;");
    asm("loc_65D5F5A: movb $0,(%eax);");
    asm("loc_65D5F5D: lea 0x38(%esp),%eax;");
    asm("loc_65D5F61: push $0x20;");
    asm("loc_65D5F63: push %eax;");
    asm("loc_65D5F64: call _sub_65D7990;");
    asm("loc_65D5F69: mov %eax,%ebp;");
    asm("loc_65D5F6B: add $8,%esp;");
    asm("loc_65D5F6E: test %ebp,%ebp;");
    asm("loc_65D5F70: je loc_65D607D;");
    asm("loc_65D5F76: lea 1(%ebp),%eax;");
    asm("loc_65D5F79: push $0x20;");
    asm("loc_65D5F7B: push %eax;");
    asm("loc_65D5F7C: call _sub_65D7990;");
    asm("loc_65D5F81: mov %eax,%ebx;");
    asm("loc_65D5F83: add $8,%esp;");
    asm("loc_65D5F86: test %ebx,%ebx;");
    asm("loc_65D5F88: je loc_65D6076;");
    asm("loc_65D5F8E: mov %ebp,%ecx;");
    asm("loc_65D5F90: lea 0x38(%esp),%edx;");
    asm("loc_65D5F94: sub %edx,%ecx;");
    asm("loc_65D5F96: lea 0x2018(%esi),%eax;");
    asm("loc_65D5F9C: push %ecx;");
    asm("loc_65D5F9D: lea 0x3C(%esp),%ecx;");
    asm("loc_65D5FA1: push %ecx;");
    asm("loc_65D5FA2: push %eax;");
    asm("loc_65D5FA3: call _sub_65D7880;");
    asm("loc_65D5FA8: mov %ebx,%eax;");
    asm("loc_65D5FAA: mov %esi,%edx;");
    asm("loc_65D5FAC: sub %ebp,%eax;");
    asm("loc_65D5FAE: sub %ebp,%edx;");
    asm("loc_65D5FB0: dec %eax;");
    asm("loc_65D5FB1: lea 0x2117(%esi),%ecx;");
    asm("loc_65D5FB7: push %eax;");
    asm("loc_65D5FB8: lea 1(%ebp),%eax;");
    asm("loc_65D5FBB: push %eax;");
    asm("loc_65D5FBC: push %ecx;");
    asm("loc_65D5FBD: movb $0,0x2068(%esp,%edx);");
    asm("loc_65D5FC5: call _sub_65D7880;");
    asm("loc_65D5FCA: sub %ebx,%ebp;");
    asm("loc_65D5FCC: lea 0x2518(%esi),%eax;");
    asm("loc_65D5FD2: inc %ebx;");
    asm("loc_65D5FD3: movb $0,0x2118(%esi,%ebp);");
    asm("loc_65D5FDB: lea 0x251C(%esi),%ebp;");
    asm("loc_65D5FE1: push %ebp;");
    asm("loc_65D5FE2: push %eax;");
    asm("loc_65D5FE3: push $_data_65E328C;");
    asm("loc_65D5FE8: push %ebx;");
    asm("loc_65D5FE9: call _sub_65D7845;");
    asm("loc_65D5FEE: add $0x28,%esp;");
    asm("loc_65D5FF1: cmp $2,%eax;");
    asm("loc_65D5FF4: je loc_65D601B;");
    asm("loc_65D5FF6: lea 0x2018(%esi),%eax;");
    asm("loc_65D5FFC: push $_data_65E3288;");
    asm("loc_65D6001: push %eax;");
    asm("loc_65D6002: call _sub_65D6C40;");
    asm("loc_65D6007: add $8,%esp;");
    asm("loc_65D600A: test %eax,%eax;");
    asm("loc_65D600C: jne loc_65D6076;");
    asm("loc_65D600E: mov %eax,0x2518(%esi);");
    asm("loc_65D6014: movl $9,(%ebp);");
    asm("loc_65D601B: mov 0x454(%esp),%ebx;");
    asm("loc_65D6022: mov 0x2518(%esi),%eax;");
    asm("loc_65D6028: cmp $1,%eax;");
    asm("loc_65D602B: jle loc_65D60A7;");
    asm("loc_65D602D: mov (%esi),%eax;");
    asm("loc_65D602F: push $_data_65E3268;");
    asm("loc_65D6034: push %esi;");
    asm("loc_65D6035: calll *0x18(%eax);");
    asm("loc_65D6038: mov %esi,%ecx;");
    asm("loc_65D603A: call _sub_65D5520;");
    asm("loc_65D603F: mov %esi,%ecx;");
    asm("loc_65D6041: call _sub_65D5540;");
    asm("loc_65D6046: mov 4(%edi),%ecx;");
    asm("loc_65D6049: mov (%edi),%esi;");
    asm("loc_65D604B: mov %esi,(%ecx);");
    asm("loc_65D604D: mov (%edi),%edx;");
    asm("loc_65D604F: mov 4(%edi),%eax;");
    asm("loc_65D6052: mov %eax,4(%edx);");
    asm("loc_65D6055: lea 8(%edi),%ecx;");
    asm("loc_65D6058: push $0;");
    asm("loc_65D605A: call _sub_65D6A30;");
    asm("loc_65D605F: push %edi;");
    asm("loc_65D6060: call _sub_65D6CB8;");
    asm("loc_65D6065: mov 0x10(%ebx),%eax;");
    asm("loc_65D6068: add $4,%esp;");
    asm("loc_65D606B: dec %eax;");
    asm("loc_65D606C: mov %esi,%edi;");
    asm("loc_65D606E: mov %eax,0x10(%ebx);");
    asm("loc_65D6071: jmp loc_65D6168;");
    asm("loc_65D6076: mov 0x454(%esp),%ebx;");
    asm("loc_65D607D: mov (%esi),%edx;");
    asm("loc_65D607F: push $_data_65E324C;");
    asm("loc_65D6084: push %esi;");
    asm("loc_65D6085: calll *0x18(%edx);");
    asm("loc_65D6088: mov %esi,%ecx;");
    asm("loc_65D608A: call _sub_65D5520;");
    asm("loc_65D608F: mov %esi,%ecx;");
    asm("loc_65D6091: call _sub_65D5540;");
    asm("loc_65D6096: mov 4(%edi),%eax;");
    asm("loc_65D6099: mov (%edi),%esi;");
    asm("loc_65D609B: mov %esi,(%eax);");
    asm("loc_65D609D: mov (%edi),%ecx;");
    asm("loc_65D609F: mov 4(%edi),%edx;");
    asm("loc_65D60A2: mov %edx,4(%ecx);");
    asm("loc_65D60A5: jmp loc_65D6055;");
    asm("loc_65D60A7: cmp $1,%eax;");
    asm("loc_65D60AA: movl $0,0x14(%esp);");
    asm("loc_65D60B2: jne loc_65D60BC;");
    asm("loc_65D60B4: movl $4,0x14(%esp);");
    asm("loc_65D60BC: mov 0x18(%ebx),%ebp;");
    asm("loc_65D60BF: movb $0,0x13(%esp);");
    asm("loc_65D60C4: cmp (%ebp),%ebp;");
    asm("loc_65D60C7: je loc_65D6131;");
    asm("loc_65D60C9: mov 0x13(%esp),%al;");
    asm("loc_65D60CD: test %al,%al;");
    asm("loc_65D60CF: jne loc_65D613C;");
    asm("loc_65D60D1: mov 4(%ebp),%eax;");
    asm("loc_65D60D4: add $8,%eax;");
    asm("loc_65D60D7: mov (%eax),%eax;");
    asm("loc_65D60D9: test %eax,%eax;");
    asm("loc_65D60DB: je loc_65D611F;");
    asm("loc_65D60DD: mov 0x14(%esp),%ecx;");
    asm("loc_65D60E1: mov (%eax),%edx;");
    asm("loc_65D60E3: lea 0x38(%esp,%ecx),%ecx;");
    asm("loc_65D60E7: push %ecx;");
    asm("loc_65D60E8: push %eax;");
    asm("loc_65D60E9: calll *0x10(%edx);");
    asm("loc_65D60EC: test %eax,%eax;");
    asm("loc_65D60EE: setne %al;");
    asm("loc_65D60F1: test %al,%al;");
    asm("loc_65D60F3: je loc_65D611F;");
    asm("loc_65D60F5: mov 4(%ebp),%eax;");
    asm("loc_65D60F8: mov 0x14(%esp),%ecx;");
    asm("loc_65D60FC: movb $1,0x13(%esp);");
    asm("loc_65D6101: mov 0xC(%eax),%eax;");
    asm("loc_65D6104: lea 0x38(%esp,%ecx),%ecx;");
    asm("loc_65D6108: push %ecx;");
    asm("loc_65D6109: push %esi;");
    asm("loc_65D610A: mov (%eax),%edx;");
    asm("loc_65D610C: push %eax;");
    asm("loc_65D610D: calll *0xC(%edx);");
    asm("loc_65D6110: test %eax,%eax;");
    asm("loc_65D6112: je loc_65D611F;");
    asm("loc_65D6114: mov (%esi),%edx;");
    asm("loc_65D6116: push $_data_65E3230;");
    asm("loc_65D611B: push %esi;");
    asm("loc_65D611C: calll *0x18(%edx);");
    asm("loc_65D611F: mov 0x18(%ebx),%eax;");
    asm("loc_65D6122: mov 4(%ebp),%ebp;");
    asm("loc_65D6125: cmp (%eax),%ebp;");
    asm("loc_65D6127: jne loc_65D60C9;");
    asm("loc_65D6129: mov 0x13(%esp),%al;");
    asm("loc_65D612D: test %al,%al;");
    asm("loc_65D612F: jne loc_65D613C;");
    asm("loc_65D6131: mov (%esi),%ecx;");
    asm("loc_65D6133: push $_data_65E3230;");
    asm("loc_65D6138: push %esi;");
    asm("loc_65D6139: calll *0x18(%ecx);");
    asm("loc_65D613C: mov %esi,%ecx;");
    asm("loc_65D613E: call _sub_65D5520;");
    asm("loc_65D6143: mov %esi,%ecx;");
    asm("loc_65D6145: call _sub_65D5540;");
    asm("loc_65D614A: mov 4(%edi),%edx;");
    asm("loc_65D614D: mov (%edi),%esi;");
    asm("loc_65D614F: mov %esi,(%edx);");
    asm("loc_65D6151: mov (%edi),%eax;");
    asm("loc_65D6153: mov 4(%edi),%ecx;");
    asm("loc_65D6156: mov %ecx,4(%eax);");
    asm("loc_65D6159: lea 8(%edi),%ecx;");
    asm("loc_65D615C: call _sub_65D2630;");
    asm("loc_65D6161: jmp loc_65D605F;");
    asm("loc_65D6166: mov (%edi),%edi;");
    asm("loc_65D6168: cmp 0xC(%ebx),%edi;");
    asm("loc_65D616B: jne loc_65D5EEA;");
    asm("loc_65D6171: xor %eax,%eax;");
    asm("loc_65D6173: mov 0x444(%esp),%ecx;");
    asm("loc_65D617A: pop %edi;");
    asm("loc_65D617B: pop %esi;");
    asm("loc_65D617C: pop %ebp;");
    asm("loc_65D617D: pop %ebx;");
    asm("loc_65D617E: mov %ecx,%fs:0;");
    asm("loc_65D6185: add $0x440,%esp;");
    asm("loc_65D618B: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D6190() // _sub_65D6190
{
    __DEBUG_ASM(65D6190);
    // chunk 0x65D6190 _sub_65D6190
    asm("loc_65D6190: push %ebx;");
    asm("loc_65D6191: mov 8(%esp),%ebx;");
    asm("loc_65D6195: push %esi;");
    asm("loc_65D6196: mov 0xC(%ebx),%eax;");
    asm("loc_65D6199: mov (%eax),%esi;");
    asm("loc_65D619B: cmp %eax,%esi;");
    asm("loc_65D619D: je loc_65D61ED;");
    asm("loc_65D619F: push %edi;");
    asm("loc_65D61A0: mov 8(%esi),%ecx;");
    asm("loc_65D61A3: call _sub_65D5520;");
    asm("loc_65D61A8: mov 8(%esi),%ecx;");
    asm("loc_65D61AB: call _sub_65D5540;");
    asm("loc_65D61B0: mov 4(%esi),%eax;");
    asm("loc_65D61B3: mov (%esi),%edi;");
    asm("loc_65D61B5: mov %edi,(%eax);");
    asm("loc_65D61B7: mov (%esi),%ecx;");
    asm("loc_65D61B9: mov 4(%esi),%edx;");
    asm("loc_65D61BC: mov %edx,4(%ecx);");
    asm("loc_65D61BF: mov 8(%esi),%eax;");
    asm("loc_65D61C2: test %eax,%eax;");
    asm("loc_65D61C4: je loc_65D61D3;");
    asm("loc_65D61C6: mov (%eax),%ecx;");
    asm("loc_65D61C8: push %eax;");
    asm("loc_65D61C9: calll *8(%ecx);");
    asm("loc_65D61CC: movl $0,8(%esi);");
    asm("loc_65D61D3: push %esi;");
    asm("loc_65D61D4: call _sub_65D6CB8;");
    asm("loc_65D61D9: mov 0x10(%ebx),%ecx;");
    asm("loc_65D61DC: add $4,%esp;");
    asm("loc_65D61DF: dec %ecx;");
    asm("loc_65D61E0: mov %edi,%esi;");
    asm("loc_65D61E2: mov %ecx,0x10(%ebx);");
    asm("loc_65D61E5: mov 0xC(%ebx),%eax;");
    asm("loc_65D61E8: cmp %eax,%edi;");
    asm("loc_65D61EA: jne loc_65D61A0;");
    asm("loc_65D61EC: pop %edi;");
    asm("loc_65D61ED: mov 4(%ebx),%eax;");
    asm("loc_65D61F0: cmp $0xFFFFFFFF,%eax;");
    asm("loc_65D61F3: je loc_65D6202;");
    asm("loc_65D61F5: push %eax;");
    asm("loc_65D61F6: call _sub_65D6C4C;");
    asm("loc_65D61FB: movl $0xFFFFFFFF,4(%ebx);");
    asm("loc_65D6202: pop %esi;");
    asm("loc_65D6203: xor %eax,%eax;");
    asm("loc_65D6205: pop %ebx;");
    asm("loc_65D6206: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D6210() // _sub_65D6210
{
    __DEBUG_ASM(65D6210);
    // chunk 0x65D6210 _sub_65D6210
    asm("loc_65D6210: push $0xFFFFFFFF;");
    asm("loc_65D6212: push $_sub_65E00E0;");
    asm("loc_65D6217: mov %fs:0,%eax;");
    asm("loc_65D621D: push %eax;");
    asm("loc_65D621E: mov %esp,%fs:0;");
    asm("loc_65D6225: sub $0x14,%esp;");
    asm("loc_65D6228: push %ebx;");
    asm("loc_65D6229: push %ebp;");
    asm("loc_65D622A: xor %ebp,%ebp;");
    asm("loc_65D622C: push %esi;");
    asm("loc_65D622D: push %edi;");
    asm("loc_65D622E: mov %ebp,0x18(%esp);");
    asm("loc_65D6232: mov %ebp,0x1C(%esp);");
    asm("loc_65D6236: mov 0x34(%esp),%esi;");
    asm("loc_65D623A: mov %ebp,0x2C(%esp);");
    asm("loc_65D623E: movl $8,0x10(%esp);");
    asm("loc_65D6246: movl $_data_65E32BC,0x14(%esp);");
    asm("loc_65D624E: mov 0x20(%esi),%ebx;");
    asm("loc_65D6251: calll *_import_65E1004;");
    asm("loc_65D6257: mov (%eax),%ecx;");
    asm("loc_65D6259: lea 0x18(%esp),%edx;");
    asm("loc_65D625D: push %edx;");
    asm("loc_65D625E: lea 0x14(%esp),%edx;");
    asm("loc_65D6262: push %edx;");
    asm("loc_65D6263: push %eax;");
    asm("loc_65D6264: calll *0xC(%ecx);");
    asm("loc_65D6267: test %eax,%eax;");
    asm("loc_65D6269: jne loc_65D62A2;");
    asm("loc_65D626B: mov 0x18(%esp),%eax;");
    asm("loc_65D626F: mov 0x38(%esp),%edx;");
    asm("loc_65D6273: push %edx;");
    asm("loc_65D6274: push %eax;");
    asm("loc_65D6275: mov (%eax),%ecx;");
    asm("loc_65D6277: calll *0xC(%ecx);");
    asm("loc_65D627A: mov 0x1C(%esp),%eax;");
    asm("loc_65D627E: mov 0x3C(%esp),%edi;");
    asm("loc_65D6282: cmp %edi,%eax;");
    asm("loc_65D6284: je loc_65D629E;");
    asm("loc_65D6286: cmp %ebp,%eax;");
    asm("loc_65D6288: je loc_65D6290;");
    asm("loc_65D628A: mov (%eax),%ecx;");
    asm("loc_65D628C: push %eax;");
    asm("loc_65D628D: calll *8(%ecx);");
    asm("loc_65D6290: cmp %ebp,%edi;");
    asm("loc_65D6292: mov %edi,0x1C(%esp);");
    asm("loc_65D6296: je loc_65D629E;");
    asm("loc_65D6298: mov (%edi),%edx;");
    asm("loc_65D629A: push %edi;");
    asm("loc_65D629B: calll *4(%edx);");
    asm("loc_65D629E: mov %ebx,0x20(%esp);");
    asm("loc_65D62A2: mov 0x18(%esi),%edi;");
    asm("loc_65D62A5: push $0x14;");
    asm("loc_65D62A7: mov 4(%edi),%ebx;");
    asm("loc_65D62AA: call _sub_65D6F71;");
    asm("loc_65D62AF: add $4,%esp;");
    asm("loc_65D62B2: cmp %ebp,%ebx;");
    asm("loc_65D62B4: mov %edi,(%eax);");
    asm("loc_65D62B6: jne loc_65D62BA;");
    asm("loc_65D62B8: mov %eax,%ebx;");
    asm("loc_65D62BA: mov %ebx,4(%eax);");
    asm("loc_65D62BD: mov %eax,4(%edi);");
    asm("loc_65D62C0: mov 4(%eax),%ecx;");
    asm("loc_65D62C3: mov %eax,(%ecx);");
    asm("loc_65D62C5: lea 0x18(%esp),%ecx;");
    asm("loc_65D62C9: add $8,%eax;");
    asm("loc_65D62CC: push %ecx;");
    asm("loc_65D62CD: push %eax;");
    asm("loc_65D62CE: call _sub_65D6990;");
    asm("loc_65D62D3: mov 0x1C(%esi),%edi;");
    asm("loc_65D62D6: mov 0x48(%esp),%eax;");
    asm("loc_65D62DA: add $8,%esp;");
    asm("loc_65D62DD: inc %edi;");
    asm("loc_65D62DE: mov %edi,0x1C(%esi);");
    asm("loc_65D62E1: mov 0x20(%esi),%edx;");
    asm("loc_65D62E4: mov %edx,(%eax);");
    asm("loc_65D62E6: mov 0x20(%esi),%edx;");
    asm("loc_65D62E9: inc %edx;");
    asm("loc_65D62EA: mov %edx,0x20(%esi);");
    asm("loc_65D62ED: mov 0x1C(%esp),%eax;");
    asm("loc_65D62F1: movl $1,0x2C(%esp);");
    asm("loc_65D62F9: cmp %ebp,%eax;");
    asm("loc_65D62FB: je loc_65D6307;");
    asm("loc_65D62FD: mov (%eax),%ecx;");
    asm("loc_65D62FF: push %eax;");
    asm("loc_65D6300: calll *8(%ecx);");
    asm("loc_65D6303: mov %ebp,0x1C(%esp);");
    asm("loc_65D6307: mov 0x18(%esp),%eax;");
    asm("loc_65D630B: pop %edi;");
    asm("loc_65D630C: cmp %ebp,%eax;");
    asm("loc_65D630E: pop %esi;");
    asm("loc_65D630F: pop %ebp;");
    asm("loc_65D6310: movl $0xFFFFFFFF,0x20(%esp);");
    asm("loc_65D6318: pop %ebx;");
    asm("loc_65D6319: je loc_65D6321;");
    asm("loc_65D631B: mov (%eax),%edx;");
    asm("loc_65D631D: push %eax;");
    asm("loc_65D631E: calll *8(%edx);");
    asm("loc_65D6321: mov 0x14(%esp),%ecx;");
    asm("loc_65D6325: xor %eax,%eax;");
    asm("loc_65D6327: mov %ecx,%fs:0;");
    asm("loc_65D632E: add $0x20,%esp;");
    asm("loc_65D6331: ret $0x10;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D6340() // _sub_65D6340
{
    __DEBUG_ASM(65D6340);
    // chunk 0x65D6340 _sub_65D6340
    asm("loc_65D6340: push $0xFFFFFFFF;");
    asm("loc_65D6342: push $_sub_65E00F8;");
    asm("loc_65D6347: mov %fs:0,%eax;");
    asm("loc_65D634D: push %eax;");
    asm("loc_65D634E: mov %esp,%fs:0;");
    asm("loc_65D6355: push %ecx;");
    asm("loc_65D6356: push %esi;");
    asm("loc_65D6357: mov %ecx,%esi;");
    asm("loc_65D6359: mov %esi,4(%esp);");
    asm("loc_65D635D: mov 4(%esi),%eax;");
    asm("loc_65D6360: movl $0,0x10(%esp);");
    asm("loc_65D6368: test %eax,%eax;");
    asm("loc_65D636A: je loc_65D6379;");
    asm("loc_65D636C: mov (%eax),%ecx;");
    asm("loc_65D636E: push %eax;");
    asm("loc_65D636F: calll *8(%ecx);");
    asm("loc_65D6372: movl $0,4(%esi);");
    asm("loc_65D6379: mov (%esi),%eax;");
    asm("loc_65D637B: movl $0xFFFFFFFF,0x10(%esp);");
    asm("loc_65D6383: test %eax,%eax;");
    asm("loc_65D6385: je loc_65D6393;");
    asm("loc_65D6387: mov (%eax),%edx;");
    asm("loc_65D6389: push %eax;");
    asm("loc_65D638A: calll *8(%edx);");
    asm("loc_65D638D: movl $0,(%esi);");
    asm("loc_65D6393: mov 8(%esp),%ecx;");
    asm("loc_65D6397: pop %esi;");
    asm("loc_65D6398: mov %ecx,%fs:0;");
    asm("loc_65D639F: add $0x10,%esp;");
    asm("loc_65D63A2: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D63B0() // _sub_65D63B0
{
    __DEBUG_ASM(65D63B0);
    // chunk 0x65D63B0 _sub_65D63B0
    asm("loc_65D63B0: push %esi;");
    asm("loc_65D63B1: push %edi;");
    asm("loc_65D63B2: mov 0xC(%esp),%edi;");
    asm("loc_65D63B6: mov 0x18(%edi),%eax;");
    asm("loc_65D63B9: mov (%eax),%esi;");
    asm("loc_65D63BB: cmp %eax,%esi;");
    asm("loc_65D63BD: je loc_65D63CE;");
    asm("loc_65D63BF: mov 0x10(%esp),%ecx;");
    asm("loc_65D63C3: cmp %ecx,0x10(%esi);");
    asm("loc_65D63C6: je loc_65D63D6;");
    asm("loc_65D63C8: mov (%esi),%esi;");
    asm("loc_65D63CA: cmp %eax,%esi;");
    asm("loc_65D63CC: jne loc_65D63C3;");
    asm("loc_65D63CE: pop %edi;");
    asm("loc_65D63CF: or $0xFFFFFFFF,%eax;");
    asm("loc_65D63D2: pop %esi;");
    asm("loc_65D63D3: ret $8;");
    asm("loc_65D63D6: mov 4(%esi),%eax;");
    asm("loc_65D63D9: mov (%esi),%ecx;");
    asm("loc_65D63DB: mov %ecx,(%eax);");
    asm("loc_65D63DD: mov (%esi),%edx;");
    asm("loc_65D63DF: mov 4(%esi),%eax;");
    asm("loc_65D63E2: lea 8(%esi),%ecx;");
    asm("loc_65D63E5: mov %eax,4(%edx);");
    asm("loc_65D63E8: call _sub_65D6340;");
    asm("loc_65D63ED: push %esi;");
    asm("loc_65D63EE: call _sub_65D6CB8;");
    asm("loc_65D63F3: mov 0x1C(%edi),%eax;");
    asm("loc_65D63F6: add $4,%esp;");
    asm("loc_65D63F9: dec %eax;");
    asm("loc_65D63FA: mov %eax,0x1C(%edi);");
    asm("loc_65D63FD: pop %edi;");
    asm("loc_65D63FE: xor %eax,%eax;");
    asm("loc_65D6400: pop %esi;");
    asm("loc_65D6401: ret $8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D6410() // _sub_65D6410
{
    __DEBUG_ASM(65D6410);
    // chunk 0x65D6410 _sub_65D6410
    asm("loc_65D6410: push %ebx;");
    asm("loc_65D6411: mov 8(%esp),%ebx;");
    asm("loc_65D6415: push %esi;");
    asm("loc_65D6416: mov 0x18(%ebx),%eax;");
    asm("loc_65D6419: mov (%eax),%esi;");
    asm("loc_65D641B: cmp %eax,%esi;");
    asm("loc_65D641D: je loc_65D6451;");
    asm("loc_65D641F: push %edi;");
    asm("loc_65D6420: mov 4(%esi),%eax;");
    asm("loc_65D6423: mov (%esi),%edi;");
    asm("loc_65D6425: mov %edi,(%eax);");
    asm("loc_65D6427: mov (%esi),%ecx;");
    asm("loc_65D6429: mov 4(%esi),%edx;");
    asm("loc_65D642C: mov %edx,4(%ecx);");
    asm("loc_65D642F: lea 8(%esi),%ecx;");
    asm("loc_65D6432: call _sub_65D6340;");
    asm("loc_65D6437: push %esi;");
    asm("loc_65D6438: call _sub_65D6CB8;");
    asm("loc_65D643D: mov 0x1C(%ebx),%ecx;");
    asm("loc_65D6440: add $4,%esp;");
    asm("loc_65D6443: dec %ecx;");
    asm("loc_65D6444: mov %edi,%esi;");
    asm("loc_65D6446: mov %ecx,0x1C(%ebx);");
    asm("loc_65D6449: mov 0x18(%ebx),%eax;");
    asm("loc_65D644C: cmp %eax,%edi;");
    asm("loc_65D644E: jne loc_65D6420;");
    asm("loc_65D6450: pop %edi;");
    asm("loc_65D6451: pop %esi;");
    asm("loc_65D6452: xor %eax,%eax;");
    asm("loc_65D6454: pop %ebx;");
    asm("loc_65D6455: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D6460() // _sub_65D6460
{
    __DEBUG_ASM(65D6460);
    // chunk 0x65D6460 _sub_65D6460
    asm("loc_65D6460: push %ebx;");
    asm("loc_65D6461: mov 0xC(%esp),%ebx;");
    asm("loc_65D6465: push %ebp;");
    asm("loc_65D6466: push %esi;");
    asm("loc_65D6467: mov 4(%ebx),%ebp;");
    asm("loc_65D646A: push %edi;");
    asm("loc_65D646B: push $0xC;");
    asm("loc_65D646D: mov %ecx,%edi;");
    asm("loc_65D646F: call _sub_65D6F71;");
    asm("loc_65D6474: mov %eax,%esi;");
    asm("loc_65D6476: add $4,%esp;");
    asm("loc_65D6479: test %ebp,%ebp;");
    asm("loc_65D647B: mov %ebx,(%esi);");
    asm("loc_65D647D: jne loc_65D6481;");
    asm("loc_65D647F: mov %esi,%ebp;");
    asm("loc_65D6481: mov 0x1C(%esp),%ecx;");
    asm("loc_65D6485: mov %ebp,4(%esi);");
    asm("loc_65D6488: mov %esi,4(%ebx);");
    asm("loc_65D648B: mov 4(%esi),%eax;");
    asm("loc_65D648E: lea 8(%esi),%edx;");
    asm("loc_65D6491: push %ecx;");
    asm("loc_65D6492: push %edx;");
    asm("loc_65D6493: mov %esi,(%eax);");
    asm("loc_65D6495: call _sub_65D6940;");
    asm("loc_65D649A: mov 8(%edi),%eax;");
    asm("loc_65D649D: add $8,%esp;");
    asm("loc_65D64A0: inc %eax;");
    asm("loc_65D64A1: mov %eax,8(%edi);");
    asm("loc_65D64A4: mov 0x14(%esp),%eax;");
    asm("loc_65D64A8: pop %edi;");
    asm("loc_65D64A9: mov %esi,(%eax);");
    asm("loc_65D64AB: pop %esi;");
    asm("loc_65D64AC: pop %ebp;");
    asm("loc_65D64AD: pop %ebx;");
    asm("loc_65D64AE: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D64C0() // _sub_65D64C0
{
    __DEBUG_ASM(65D64C0);
    // chunk 0x65D64C0 _sub_65D64C0
    asm("loc_65D64C0: push $0xC;");
    asm("loc_65D64C2: call _sub_65D6F71;");
    asm("loc_65D64C7: mov 8(%esp),%ecx;");
    asm("loc_65D64CB: add $4,%esp;");
    asm("loc_65D64CE: test %ecx,%ecx;");
    asm("loc_65D64D0: jne loc_65D64D4;");
    asm("loc_65D64D2: mov %eax,%ecx;");
    asm("loc_65D64D4: mov %ecx,(%eax);");
    asm("loc_65D64D6: mov 8(%esp),%ecx;");
    asm("loc_65D64DA: test %ecx,%ecx;");
    asm("loc_65D64DC: je loc_65D64E4;");
    asm("loc_65D64DE: mov %ecx,4(%eax);");
    asm("loc_65D64E1: ret $8;");
    asm("loc_65D64E4: mov %eax,4(%eax);");
    asm("loc_65D64E7: ret $8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D64F0() // _sub_65D64F0
{
    __DEBUG_ASM(65D64F0);
    // chunk 0x65D64F0 _sub_65D64F0
    asm("loc_65D64F0: push %esi;");
    asm("loc_65D64F1: mov %ecx,%esi;");
    asm("loc_65D64F3: xor %eax,%eax;");
    asm("loc_65D64F5: mov %eax,0x100C(%esi);");
    asm("loc_65D64FB: mov %eax,0x1008(%esi);");
    asm("loc_65D6501: mov %eax,0x2014(%esi);");
    asm("loc_65D6507: mov %eax,0x2010(%esi);");
    asm("loc_65D650D: movl $_off_65E1448,(%esi);");
    asm("loc_65D6513: call _sub_65D5540;");
    asm("loc_65D6518: mov %esi,%eax;");
    asm("loc_65D651A: pop %esi;");
    asm("loc_65D651B: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D6520() // _sub_65D6520
{
    __DEBUG_ASM(65D6520);
    // chunk 0x65D6520 _sub_65D6520
    asm("loc_65D6520: mov _off_65E14E8,%eax;");
    asm("loc_65D6525: push %ebx;");
    asm("loc_65D6526: push %ebp;");
    asm("loc_65D6527: push %esi;");
    asm("loc_65D6528: push %edi;");
    asm("loc_65D6529: xor %edi,%edi;");
    asm("loc_65D652B: test %eax,%eax;");
    asm("loc_65D652D: je loc_65D6572;");
    asm("loc_65D652F: mov 0x18(%esp),%ebp;");
    asm("loc_65D6533: mov %ebp,%esi;");
    asm("loc_65D6535: mov (%eax),%dl;");
    asm("loc_65D6537: mov (%esi),%bl;");
    asm("loc_65D6539: mov %dl,%cl;");
    asm("loc_65D653B: cmp %bl,%dl;");
    asm("loc_65D653D: jne loc_65D655D;");
    asm("loc_65D653F: test %cl,%cl;");
    asm("loc_65D6541: je loc_65D6559;");
    asm("loc_65D6543: mov 1(%eax),%dl;");
    asm("loc_65D6546: mov 1(%esi),%bl;");
    asm("loc_65D6549: mov %dl,%cl;");
    asm("loc_65D654B: cmp %bl,%dl;");
    asm("loc_65D654D: jne loc_65D655D;");
    asm("loc_65D654F: add $2,%eax;");
    asm("loc_65D6552: add $2,%esi;");
    asm("loc_65D6555: test %cl,%cl;");
    asm("loc_65D6557: jne loc_65D6535;");
    asm("loc_65D6559: xor %eax,%eax;");
    asm("loc_65D655B: jmp loc_65D6562;");
    asm("loc_65D655D: sbb %eax,%eax;");
    asm("loc_65D655F: sbb $0xFFFFFFFF,%eax;");
    asm("loc_65D6562: test %eax,%eax;");
    asm("loc_65D6564: je loc_65D6588;");
    asm("loc_65D6566: mov _off_65E14F0(,%edi,8),%eax;");
    asm("loc_65D656D: inc %edi;");
    asm("loc_65D656E: test %eax,%eax;");
    asm("loc_65D6570: jne loc_65D6533;");
    asm("loc_65D6572: mov 0x1C(%esp),%edx;");
    asm("loc_65D6576: pop %edi;");
    asm("loc_65D6577: pop %esi;");
    asm("loc_65D6578: pop %ebp;");
    asm("loc_65D6579: movl $0,(%edx);");
    asm("loc_65D657F: mov $0xFFFFFFFD,%eax;");
    asm("loc_65D6584: pop %ebx;");
    asm("loc_65D6585: ret $0xC;");
    asm("loc_65D6588: mov _data_65E14EC(,%edi,8),%eax;");
    asm("loc_65D658F: test %eax,%eax;");
    asm("loc_65D6591: jns loc_65D65B4;");
    asm("loc_65D6593: mov 0x14(%esp),%ecx;");
    asm("loc_65D6597: and $0x7FFFFFFF,%eax;");
    asm("loc_65D659C: mov (%eax,%ecx),%esi;");
    asm("loc_65D659F: push %esi;");
    asm("loc_65D65A0: mov (%esi),%eax;");
    asm("loc_65D65A2: calll *4(%eax);");
    asm("loc_65D65A5: pop %edi;");
    asm("loc_65D65A6: xor %eax,%eax;");
    asm("loc_65D65A8: mov 0x18(%esp),%ecx;");
    asm("loc_65D65AC: mov %esi,(%ecx);");
    asm("loc_65D65AE: pop %esi;");
    asm("loc_65D65AF: pop %ebp;");
    asm("loc_65D65B0: pop %ebx;");
    asm("loc_65D65B1: ret $0xC;");
    asm("loc_65D65B4: mov 0x14(%esp),%edx;");
    asm("loc_65D65B8: lea (%eax,%edx),%esi;");
    asm("loc_65D65BB: push %esi;");
    asm("loc_65D65BC: mov (%esi),%eax;");
    asm("loc_65D65BE: calll *4(%eax);");
    asm("loc_65D65C1: pop %edi;");
    asm("loc_65D65C2: xor %eax,%eax;");
    asm("loc_65D65C4: mov 0x18(%esp),%ecx;");
    asm("loc_65D65C8: mov %esi,(%ecx);");
    asm("loc_65D65CA: pop %esi;");
    asm("loc_65D65CB: pop %ebp;");
    asm("loc_65D65CC: pop %ebx;");
    asm("loc_65D65CD: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D65D0() // _sub_65D65D0
{
    __DEBUG_ASM(65D65D0);
    // chunk 0x65D65D0 _sub_65D65D0
    asm("loc_65D65D0: mov 4(%esp),%eax;");
    asm("loc_65D65D4: mov 0x2520(%eax),%ecx;");
    asm("loc_65D65DA: inc %ecx;");
    asm("loc_65D65DB: mov %ecx,0x2520(%eax);");
    asm("loc_65D65E1: mov %ecx,%eax;");
    asm("loc_65D65E3: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D65F0() // _sub_65D65F0
{
    __DEBUG_ASM(65D65F0);
    // chunk 0x65D65F0 _sub_65D65F0
    asm("loc_65D65F0: push %esi;");
    asm("loc_65D65F1: mov 8(%esp),%esi;");
    asm("loc_65D65F5: mov 0x2520(%esi),%eax;");
    asm("loc_65D65FB: test %eax,%eax;");
    asm("loc_65D65FD: jbe loc_65D6606;");
    asm("loc_65D65FF: dec %eax;");
    asm("loc_65D6600: mov %eax,0x2520(%esi);");
    asm("loc_65D6606: mov 0x2520(%esi),%eax;");
    asm("loc_65D660C: test %eax,%eax;");
    asm("loc_65D660E: jne loc_65D662C;");
    asm("loc_65D6610: mov %esi,%ecx;");
    asm("loc_65D6612: movl $1,0x2520(%esi);");
    asm("loc_65D661C: call _sub_65D6A60;");
    asm("loc_65D6621: push %esi;");
    asm("loc_65D6622: call _sub_65D6CB8;");
    asm("loc_65D6627: add $4,%esp;");
    asm("loc_65D662A: xor %eax,%eax;");
    asm("loc_65D662C: pop %esi;");
    asm("loc_65D662D: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D6630() // _sub_65D6630
{
    __DEBUG_ASM(65D6630);
    // chunk 0x65D6630 _sub_65D6630
    asm("loc_65D6630: mov 4(%esp),%eax;");
    asm("loc_65D6634: mov 4(%eax),%ecx;");
    asm("loc_65D6637: inc %ecx;");
    asm("loc_65D6638: mov %ecx,4(%eax);");
    asm("loc_65D663B: mov %ecx,%eax;");
    asm("loc_65D663D: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D6640() // _sub_65D6640
{
    __DEBUG_ASM(65D6640);
    // chunk 0x65D6640 _sub_65D6640
    asm("loc_65D6640: mov 8(%esp),%eax;");
    asm("loc_65D6644: push %edi;");
    asm("loc_65D6645: xor %edi,%edi;");
    asm("loc_65D6647: cmpl $8,(%eax);");
    asm("loc_65D664A: jne loc_65D66C2;");
    asm("loc_65D664C: mov 8(%esp),%ecx;");
    asm("loc_65D6650: mov 4(%eax),%eax;");
    asm("loc_65D6653: push %ebx;");
    asm("loc_65D6654: push %esi;");
    asm("loc_65D6655: mov 8(%ecx),%esi;");
    asm("loc_65D6658: mov (%eax),%dl;");
    asm("loc_65D665A: mov (%esi),%bl;");
    asm("loc_65D665C: mov %dl,%cl;");
    asm("loc_65D665E: cmp %bl,%dl;");
    asm("loc_65D6660: jne loc_65D6680;");
    asm("loc_65D6662: test %cl,%cl;");
    asm("loc_65D6664: je loc_65D667C;");
    asm("loc_65D6666: mov 1(%eax),%dl;");
    asm("loc_65D6669: mov 1(%esi),%bl;");
    asm("loc_65D666C: mov %dl,%cl;");
    asm("loc_65D666E: cmp %bl,%dl;");
    asm("loc_65D6670: jne loc_65D6680;");
    asm("loc_65D6672: add $2,%eax;");
    asm("loc_65D6675: add $2,%esi;");
    asm("loc_65D6678: test %cl,%cl;");
    asm("loc_65D667A: jne loc_65D6658;");
    asm("loc_65D667C: xor %eax,%eax;");
    asm("loc_65D667E: jmp loc_65D6685;");
    asm("loc_65D6680: sbb %eax,%eax;");
    asm("loc_65D6682: sbb $0xFFFFFFFF,%eax;");
    asm("loc_65D6685: pop %esi;");
    asm("loc_65D6686: pop %ebx;");
    asm("loc_65D6687: test %eax,%eax;");
    asm("loc_65D6689: jne loc_65D66C2;");
    asm("loc_65D668B: push $8;");
    asm("loc_65D668D: call _sub_65D6F71;");
    asm("loc_65D6692: add $4,%esp;");
    asm("loc_65D6695: test %eax,%eax;");
    asm("loc_65D6697: je loc_65D66AA;");
    asm("loc_65D6699: movl $_off_65E1500,(%eax);");
    asm("loc_65D669F: movl $1,4(%eax);");
    asm("loc_65D66A6: mov %eax,%ecx;");
    asm("loc_65D66A8: jmp loc_65D66AC;");
    asm("loc_65D66AA: xor %ecx,%ecx;");
    asm("loc_65D66AC: mov 0x10(%esp),%edx;");
    asm("loc_65D66B0: mov %ecx,%eax;");
    asm("loc_65D66B2: neg %eax;");
    asm("loc_65D66B4: sbb %eax,%eax;");
    asm("loc_65D66B6: mov %ecx,(%edx);");
    asm("loc_65D66B8: and $4,%eax;");
    asm("loc_65D66BB: pop %edi;");
    asm("loc_65D66BC: add $0xFFFFFFFC,%eax;");
    asm("loc_65D66BF: ret $0xC;");
    asm("loc_65D66C2: mov 0x10(%esp),%ecx;");
    asm("loc_65D66C6: mov $0xFFFFFFFD,%eax;");
    asm("loc_65D66CB: mov %edi,(%ecx);");
    asm("loc_65D66CD: pop %edi;");
    asm("loc_65D66CE: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D66E0() // _sub_65D66E0
{
    __DEBUG_ASM(65D66E0);
    // chunk 0x65D66E0 _sub_65D66E0
    asm("loc_65D66E0: push %ecx;");
    asm("loc_65D66E1: push %esi;");
    asm("loc_65D66E2: lea 4(%esp),%eax;");
    asm("loc_65D66E6: push %edi;");
    asm("loc_65D66E7: push %eax;");
    asm("loc_65D66E8: call _sub_65D7C9E;");
    asm("loc_65D66ED: lea 0xC(%esp),%ecx;");
    asm("loc_65D66F1: push %ecx;");
    asm("loc_65D66F2: call _sub_65D7B3E;");
    asm("loc_65D66F7: push %eax;");
    asm("loc_65D66F8: call _sub_65D7A4C;");
    asm("loc_65D66FD: push %eax;");
    asm("loc_65D66FE: push $_data_65E3314;");
    asm("loc_65D6703: push $_data_65E64C0;");
    asm("loc_65D6708: call _sub_65D734E;");
    asm("loc_65D670D: mov 0x2C(%esp),%esi;");
    asm("loc_65D6711: add $0x18,%esp;");
    asm("loc_65D6714: mov (%esi),%edx;");
    asm("loc_65D6716: push $_data_65E3304;");
    asm("loc_65D671B: push %esi;");
    asm("loc_65D671C: calll *0x18(%edx);");
    asm("loc_65D671F: mov $_data_65E64C0,%edi;");
    asm("loc_65D6724: or $0xFFFFFFFF,%ecx;");
    asm("loc_65D6727: xor %eax,%eax;");
    asm("loc_65D6729: repne scas (%edi),%al;");
    asm("loc_65D672B: not %ecx;");
    asm("loc_65D672D: dec %ecx;");
    asm("loc_65D672E: push %ecx;");
    asm("loc_65D672F: push $_data_65E32F0;");
    asm("loc_65D6734: push $_data_65E65C0;");
    asm("loc_65D6739: call _sub_65D734E;");
    asm("loc_65D673E: mov (%esi),%eax;");
    asm("loc_65D6740: add $0xC,%esp;");
    asm("loc_65D6743: push $_data_65E65C0;");
    asm("loc_65D6748: push %esi;");
    asm("loc_65D6749: calll *0x18(%eax);");
    asm("loc_65D674C: mov (%esi),%ecx;");
    asm("loc_65D674E: push $_data_65E32D8;");
    asm("loc_65D6753: push %esi;");
    asm("loc_65D6754: calll *0x18(%ecx);");
    asm("loc_65D6757: mov (%esi),%edx;");
    asm("loc_65D6759: push $_data_65E60E4;");
    asm("loc_65D675E: push %esi;");
    asm("loc_65D675F: calll *0x18(%edx);");
    asm("loc_65D6762: mov $_data_65E64C0,%edi;");
    asm("loc_65D6767: or $0xFFFFFFFF,%ecx;");
    asm("loc_65D676A: xor %eax,%eax;");
    asm("loc_65D676C: mov (%esi),%edx;");
    asm("loc_65D676E: repne scas (%edi),%al;");
    asm("loc_65D6770: not %ecx;");
    asm("loc_65D6772: dec %ecx;");
    asm("loc_65D6773: push %ecx;");
    asm("loc_65D6774: push $_data_65E64C0;");
    asm("loc_65D6779: push %esi;");
    asm("loc_65D677A: calll *0x14(%edx);");
    asm("loc_65D677D: pop %edi;");
    asm("loc_65D677E: xor %eax,%eax;");
    asm("loc_65D6780: pop %esi;");
    asm("loc_65D6781: pop %ecx;");
    asm("loc_65D6782: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D6790() // _sub_65D6790
{
    __DEBUG_ASM(65D6790);
    // chunk 0x65D6790 _sub_65D6790
    asm("loc_65D6790: mov _off_65E1510,%eax;");
    asm("loc_65D6795: push %ebx;");
    asm("loc_65D6796: push %ebp;");
    asm("loc_65D6797: push %esi;");
    asm("loc_65D6798: push %edi;");
    asm("loc_65D6799: xor %edi,%edi;");
    asm("loc_65D679B: test %eax,%eax;");
    asm("loc_65D679D: je loc_65D67E2;");
    asm("loc_65D679F: mov 0x18(%esp),%ebp;");
    asm("loc_65D67A3: mov %ebp,%esi;");
    asm("loc_65D67A5: mov (%eax),%dl;");
    asm("loc_65D67A7: mov (%esi),%bl;");
    asm("loc_65D67A9: mov %dl,%cl;");
    asm("loc_65D67AB: cmp %bl,%dl;");
    asm("loc_65D67AD: jne loc_65D67CD;");
    asm("loc_65D67AF: test %cl,%cl;");
    asm("loc_65D67B1: je loc_65D67C9;");
    asm("loc_65D67B3: mov 1(%eax),%dl;");
    asm("loc_65D67B6: mov 1(%esi),%bl;");
    asm("loc_65D67B9: mov %dl,%cl;");
    asm("loc_65D67BB: cmp %bl,%dl;");
    asm("loc_65D67BD: jne loc_65D67CD;");
    asm("loc_65D67BF: add $2,%eax;");
    asm("loc_65D67C2: add $2,%esi;");
    asm("loc_65D67C5: test %cl,%cl;");
    asm("loc_65D67C7: jne loc_65D67A5;");
    asm("loc_65D67C9: xor %eax,%eax;");
    asm("loc_65D67CB: jmp loc_65D67D2;");
    asm("loc_65D67CD: sbb %eax,%eax;");
    asm("loc_65D67CF: sbb $0xFFFFFFFF,%eax;");
    asm("loc_65D67D2: test %eax,%eax;");
    asm("loc_65D67D4: je loc_65D67F8;");
    asm("loc_65D67D6: mov _off_65E1518(,%edi,8),%eax;");
    asm("loc_65D67DD: inc %edi;");
    asm("loc_65D67DE: test %eax,%eax;");
    asm("loc_65D67E0: jne loc_65D67A3;");
    asm("loc_65D67E2: mov 0x1C(%esp),%edx;");
    asm("loc_65D67E6: pop %edi;");
    asm("loc_65D67E7: pop %esi;");
    asm("loc_65D67E8: pop %ebp;");
    asm("loc_65D67E9: movl $0,(%edx);");
    asm("loc_65D67EF: mov $0xFFFFFFFD,%eax;");
    asm("loc_65D67F4: pop %ebx;");
    asm("loc_65D67F5: ret $0xC;");
    asm("loc_65D67F8: mov _data_65E1514(,%edi,8),%eax;");
    asm("loc_65D67FF: test %eax,%eax;");
    asm("loc_65D6801: jns loc_65D6824;");
    asm("loc_65D6803: mov 0x14(%esp),%ecx;");
    asm("loc_65D6807: and $0x7FFFFFFF,%eax;");
    asm("loc_65D680C: mov (%eax,%ecx),%esi;");
    asm("loc_65D680F: push %esi;");
    asm("loc_65D6810: mov (%esi),%eax;");
    asm("loc_65D6812: calll *4(%eax);");
    asm("loc_65D6815: pop %edi;");
    asm("loc_65D6816: xor %eax,%eax;");
    asm("loc_65D6818: mov 0x18(%esp),%ecx;");
    asm("loc_65D681C: mov %esi,(%ecx);");
    asm("loc_65D681E: pop %esi;");
    asm("loc_65D681F: pop %ebp;");
    asm("loc_65D6820: pop %ebx;");
    asm("loc_65D6821: ret $0xC;");
    asm("loc_65D6824: mov 0x14(%esp),%edx;");
    asm("loc_65D6828: lea (%eax,%edx),%esi;");
    asm("loc_65D682B: push %esi;");
    asm("loc_65D682C: mov (%esi),%eax;");
    asm("loc_65D682E: calll *4(%eax);");
    asm("loc_65D6831: pop %edi;");
    asm("loc_65D6832: xor %eax,%eax;");
    asm("loc_65D6834: mov 0x18(%esp),%ecx;");
    asm("loc_65D6838: mov %esi,(%ecx);");
    asm("loc_65D683A: pop %esi;");
    asm("loc_65D683B: pop %ebp;");
    asm("loc_65D683C: pop %ebx;");
    asm("loc_65D683D: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D6840() // _sub_65D6840
{
    __DEBUG_ASM(65D6840);
    // chunk 0x65D6840 _sub_65D6840
    asm("loc_65D6840: mov 4(%esp),%eax;");
    asm("loc_65D6844: mov 0x24(%eax),%ecx;");
    asm("loc_65D6847: inc %ecx;");
    asm("loc_65D6848: mov %ecx,0x24(%eax);");
    asm("loc_65D684B: mov %ecx,%eax;");
    asm("loc_65D684D: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D6850() // _sub_65D6850
{
    __DEBUG_ASM(65D6850);
    // chunk 0x65D6850 _sub_65D6850
    asm("loc_65D6850: push %esi;");
    asm("loc_65D6851: mov 8(%esp),%esi;");
    asm("loc_65D6855: mov 0x24(%esi),%eax;");
    asm("loc_65D6858: test %eax,%eax;");
    asm("loc_65D685A: jbe loc_65D6860;");
    asm("loc_65D685C: dec %eax;");
    asm("loc_65D685D: mov %eax,0x24(%esi);");
    asm("loc_65D6860: mov 0x24(%esi),%eax;");
    asm("loc_65D6863: test %eax,%eax;");
    asm("loc_65D6865: jne loc_65D6880;");
    asm("loc_65D6867: mov %esi,%ecx;");
    asm("loc_65D6869: movl $1,0x24(%esi);");
    asm("loc_65D6870: call _sub_65D6A80;");
    asm("loc_65D6875: push %esi;");
    asm("loc_65D6876: call _sub_65D6CB8;");
    asm("loc_65D687B: add $4,%esp;");
    asm("loc_65D687E: xor %eax,%eax;");
    asm("loc_65D6880: pop %esi;");
    asm("loc_65D6881: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D6890() // _sub_65D6890
{
    __DEBUG_ASM(65D6890);
    // chunk 0x65D6890 _sub_65D6890
    asm("loc_65D6890: mov _off_65E1528,%eax;");
    asm("loc_65D6895: push %ebx;");
    asm("loc_65D6896: push %ebp;");
    asm("loc_65D6897: push %esi;");
    asm("loc_65D6898: push %edi;");
    asm("loc_65D6899: xor %edi,%edi;");
    asm("loc_65D689B: test %eax,%eax;");
    asm("loc_65D689D: je loc_65D68E2;");
    asm("loc_65D689F: mov 0x18(%esp),%ebp;");
    asm("loc_65D68A3: mov %ebp,%esi;");
    asm("loc_65D68A5: mov (%eax),%dl;");
    asm("loc_65D68A7: mov (%esi),%bl;");
    asm("loc_65D68A9: mov %dl,%cl;");
    asm("loc_65D68AB: cmp %bl,%dl;");
    asm("loc_65D68AD: jne loc_65D68CD;");
    asm("loc_65D68AF: test %cl,%cl;");
    asm("loc_65D68B1: je loc_65D68C9;");
    asm("loc_65D68B3: mov 1(%eax),%dl;");
    asm("loc_65D68B6: mov 1(%esi),%bl;");
    asm("loc_65D68B9: mov %dl,%cl;");
    asm("loc_65D68BB: cmp %bl,%dl;");
    asm("loc_65D68BD: jne loc_65D68CD;");
    asm("loc_65D68BF: add $2,%eax;");
    asm("loc_65D68C2: add $2,%esi;");
    asm("loc_65D68C5: test %cl,%cl;");
    asm("loc_65D68C7: jne loc_65D68A5;");
    asm("loc_65D68C9: xor %eax,%eax;");
    asm("loc_65D68CB: jmp loc_65D68D2;");
    asm("loc_65D68CD: sbb %eax,%eax;");
    asm("loc_65D68CF: sbb $0xFFFFFFFF,%eax;");
    asm("loc_65D68D2: test %eax,%eax;");
    asm("loc_65D68D4: je loc_65D68F8;");
    asm("loc_65D68D6: mov _off_65E1530(,%edi,8),%eax;");
    asm("loc_65D68DD: inc %edi;");
    asm("loc_65D68DE: test %eax,%eax;");
    asm("loc_65D68E0: jne loc_65D68A3;");
    asm("loc_65D68E2: mov 0x1C(%esp),%edx;");
    asm("loc_65D68E6: pop %edi;");
    asm("loc_65D68E7: pop %esi;");
    asm("loc_65D68E8: pop %ebp;");
    asm("loc_65D68E9: movl $0,(%edx);");
    asm("loc_65D68EF: mov $0xFFFFFFFD,%eax;");
    asm("loc_65D68F4: pop %ebx;");
    asm("loc_65D68F5: ret $0xC;");
    asm("loc_65D68F8: mov _data_65E152C(,%edi,8),%eax;");
    asm("loc_65D68FF: test %eax,%eax;");
    asm("loc_65D6901: jns loc_65D6924;");
    asm("loc_65D6903: mov 0x14(%esp),%ecx;");
    asm("loc_65D6907: and $0x7FFFFFFF,%eax;");
    asm("loc_65D690C: mov (%eax,%ecx),%esi;");
    asm("loc_65D690F: push %esi;");
    asm("loc_65D6910: mov (%esi),%eax;");
    asm("loc_65D6912: calll *4(%eax);");
    asm("loc_65D6915: pop %edi;");
    asm("loc_65D6916: xor %eax,%eax;");
    asm("loc_65D6918: mov 0x18(%esp),%ecx;");
    asm("loc_65D691C: mov %esi,(%ecx);");
    asm("loc_65D691E: pop %esi;");
    asm("loc_65D691F: pop %ebp;");
    asm("loc_65D6920: pop %ebx;");
    asm("loc_65D6921: ret $0xC;");
    asm("loc_65D6924: mov 0x14(%esp),%edx;");
    asm("loc_65D6928: lea (%eax,%edx),%esi;");
    asm("loc_65D692B: push %esi;");
    asm("loc_65D692C: mov (%esi),%eax;");
    asm("loc_65D692E: calll *4(%eax);");
    asm("loc_65D6931: pop %edi;");
    asm("loc_65D6932: xor %eax,%eax;");
    asm("loc_65D6934: mov 0x18(%esp),%ecx;");
    asm("loc_65D6938: mov %esi,(%ecx);");
    asm("loc_65D693A: pop %esi;");
    asm("loc_65D693B: pop %ebp;");
    asm("loc_65D693C: pop %ebx;");
    asm("loc_65D693D: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D6940() // _sub_65D6940
{
    __DEBUG_ASM(65D6940);
    // chunk 0x65D6940 _sub_65D6940
    asm("loc_65D6940: push $0xFFFFFFFF;");
    asm("loc_65D6942: push $_sub_65E0121;");
    asm("loc_65D6947: mov %fs:0,%eax;");
    asm("loc_65D694D: push %eax;");
    asm("loc_65D694E: mov %esp,%fs:0;");
    asm("loc_65D6955: push %ecx;");
    asm("loc_65D6956: mov 0x14(%esp),%ecx;");
    asm("loc_65D695A: mov %ecx,(%esp);");
    asm("loc_65D695E: test %ecx,%ecx;");
    asm("loc_65D6960: movl $0,0xC(%esp);");
    asm("loc_65D6968: je loc_65D697C;");
    asm("loc_65D696A: mov 0x18(%esp),%eax;");
    asm("loc_65D696E: mov (%eax),%eax;");
    asm("loc_65D6970: test %eax,%eax;");
    asm("loc_65D6972: mov %eax,(%ecx);");
    asm("loc_65D6974: je loc_65D697C;");
    asm("loc_65D6976: mov (%eax),%ecx;");
    asm("loc_65D6978: push %eax;");
    asm("loc_65D6979: calll *4(%ecx);");
    asm("loc_65D697C: mov 4(%esp),%ecx;");
    asm("loc_65D6980: mov %ecx,%fs:0;");
    asm("loc_65D6987: add $0x10,%esp;");
    asm("loc_65D698A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D6990() // _sub_65D6990
{
    __DEBUG_ASM(65D6990);
    // chunk 0x65D6990 _sub_65D6990
    asm("loc_65D6990: push $0xFFFFFFFF;");
    asm("loc_65D6992: push $_sub_65E0154;");
    asm("loc_65D6997: mov %fs:0,%eax;");
    asm("loc_65D699D: push %eax;");
    asm("loc_65D699E: mov %esp,%fs:0;");
    asm("loc_65D69A5: push %ecx;");
    asm("loc_65D69A6: push %esi;");
    asm("loc_65D69A7: mov 0x18(%esp),%esi;");
    asm("loc_65D69AB: mov %esi,4(%esp);");
    asm("loc_65D69AF: test %esi,%esi;");
    asm("loc_65D69B1: movl $0,0x10(%esp);");
    asm("loc_65D69B9: je loc_65D6A1D;");
    asm("loc_65D69BB: movl $0,(%esi);");
    asm("loc_65D69C1: movl $0,4(%esi);");
    asm("loc_65D69C8: mov (%esi),%eax;");
    asm("loc_65D69CA: movb $2,0x10(%esp);");
    asm("loc_65D69CF: test %eax,%eax;");
    asm("loc_65D69D1: je loc_65D69DF;");
    asm("loc_65D69D3: mov (%eax),%ecx;");
    asm("loc_65D69D5: push %eax;");
    asm("loc_65D69D6: calll *8(%ecx);");
    asm("loc_65D69D9: movl $0,(%esi);");
    asm("loc_65D69DF: push %edi;");
    asm("loc_65D69E0: mov 0x20(%esp),%edi;");
    asm("loc_65D69E4: mov (%edi),%eax;");
    asm("loc_65D69E6: test %eax,%eax;");
    asm("loc_65D69E8: mov %eax,(%esi);");
    asm("loc_65D69EA: je loc_65D69F2;");
    asm("loc_65D69EC: mov (%eax),%edx;");
    asm("loc_65D69EE: push %eax;");
    asm("loc_65D69EF: calll *4(%edx);");
    asm("loc_65D69F2: mov 4(%esi),%eax;");
    asm("loc_65D69F5: test %eax,%eax;");
    asm("loc_65D69F7: je loc_65D6A06;");
    asm("loc_65D69F9: mov (%eax),%ecx;");
    asm("loc_65D69FB: push %eax;");
    asm("loc_65D69FC: calll *8(%ecx);");
    asm("loc_65D69FF: movl $0,4(%esi);");
    asm("loc_65D6A06: mov 4(%edi),%eax;");
    asm("loc_65D6A09: test %eax,%eax;");
    asm("loc_65D6A0B: mov %eax,4(%esi);");
    asm("loc_65D6A0E: je loc_65D6A16;");
    asm("loc_65D6A10: mov (%eax),%edx;");
    asm("loc_65D6A12: push %eax;");
    asm("loc_65D6A13: calll *4(%edx);");
    asm("loc_65D6A16: mov 8(%edi),%eax;");
    asm("loc_65D6A19: pop %edi;");
    asm("loc_65D6A1A: mov %eax,8(%esi);");
    asm("loc_65D6A1D: mov 8(%esp),%ecx;");
    asm("loc_65D6A21: pop %esi;");
    asm("loc_65D6A22: mov %ecx,%fs:0;");
    asm("loc_65D6A29: add $0x10,%esp;");
    asm("loc_65D6A2C: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D6A30() // _sub_65D6A30
{
    __DEBUG_ASM(65D6A30);
    // chunk 0x65D6A30 _sub_65D6A30
    asm("loc_65D6A30: push %esi;");
    asm("loc_65D6A31: mov %ecx,%esi;");
    asm("loc_65D6A33: mov (%esi),%eax;");
    asm("loc_65D6A35: test %eax,%eax;");
    asm("loc_65D6A37: je loc_65D6A45;");
    asm("loc_65D6A39: mov (%eax),%ecx;");
    asm("loc_65D6A3B: push %eax;");
    asm("loc_65D6A3C: calll *8(%ecx);");
    asm("loc_65D6A3F: movl $0,(%esi);");
    asm("loc_65D6A45: testb $1,8(%esp);");
    asm("loc_65D6A4A: je loc_65D6A55;");
    asm("loc_65D6A4C: push %esi;");
    asm("loc_65D6A4D: call _sub_65D6CB8;");
    asm("loc_65D6A52: add $4,%esp;");
    asm("loc_65D6A55: mov %esi,%eax;");
    asm("loc_65D6A57: pop %esi;");
    asm("loc_65D6A58: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D6A60() // _sub_65D6A60
{
    __DEBUG_ASM(65D6A60);
    // chunk 0x65D6A60 _sub_65D6A60
    asm("loc_65D6A60: mov 4(%ecx),%eax;");
    asm("loc_65D6A63: movl $_off_65E1448,(%ecx);");
    asm("loc_65D6A69: cmp $0xFFFFFFFF,%eax;");
    asm("loc_65D6A6C: je loc_65D6A73;");
    asm("loc_65D6A6E: jmp _sub_65D5520;");
    asm("loc_65D6A73: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D6A80() // _sub_65D6A80
{
    __DEBUG_ASM(65D6A80);
    // chunk 0x65D6A80 _sub_65D6A80
    asm("loc_65D6A80: push $0xFFFFFFFF;");
    asm("loc_65D6A82: push $_sub_65E0176;");
    asm("loc_65D6A87: mov %fs:0,%eax;");
    asm("loc_65D6A8D: push %eax;");
    asm("loc_65D6A8E: mov %esp,%fs:0;");
    asm("loc_65D6A95: sub $8,%esp;");
    asm("loc_65D6A98: push %ebx;");
    asm("loc_65D6A99: push %ebp;");
    asm("loc_65D6A9A: push %esi;");
    asm("loc_65D6A9B: push %edi;");
    asm("loc_65D6A9C: mov %ecx,%edi;");
    asm("loc_65D6A9E: mov %edi,0x10(%esp);");
    asm("loc_65D6AA2: movl $_off_65E1540,(%edi);");
    asm("loc_65D6AA8: mov 0xC(%edi),%eax;");
    asm("loc_65D6AAB: movl $1,0x20(%esp);");
    asm("loc_65D6AB3: mov (%eax),%esi;");
    asm("loc_65D6AB5: cmp %eax,%esi;");
    asm("loc_65D6AB7: je loc_65D6AFD;");
    asm("loc_65D6AB9: mov 8(%esi),%ecx;");
    asm("loc_65D6ABC: lea 8(%esi),%ebp;");
    asm("loc_65D6ABF: call _sub_65D5520;");
    asm("loc_65D6AC4: mov (%ebp),%ecx;");
    asm("loc_65D6AC7: call _sub_65D5540;");
    asm("loc_65D6ACC: mov 4(%esi),%eax;");
    asm("loc_65D6ACF: mov (%esi),%ebx;");
    asm("loc_65D6AD1: push $0;");
    asm("loc_65D6AD3: mov %ebx,(%eax);");
    asm("loc_65D6AD5: mov (%esi),%eax;");
    asm("loc_65D6AD7: mov 4(%esi),%ecx;");
    asm("loc_65D6ADA: mov %ecx,4(%eax);");
    asm("loc_65D6ADD: mov %ebp,%ecx;");
    asm("loc_65D6ADF: call _sub_65D6A30;");
    asm("loc_65D6AE4: push %esi;");
    asm("loc_65D6AE5: call _sub_65D6CB8;");
    asm("loc_65D6AEA: mov 0x10(%edi),%ecx;");
    asm("loc_65D6AED: add $4,%esp;");
    asm("loc_65D6AF0: dec %ecx;");
    asm("loc_65D6AF1: mov %ebx,%esi;");
    asm("loc_65D6AF3: mov %ecx,0x10(%edi);");
    asm("loc_65D6AF6: mov 0xC(%edi),%eax;");
    asm("loc_65D6AF9: cmp %eax,%ebx;");
    asm("loc_65D6AFB: jne loc_65D6AB9;");
    asm("loc_65D6AFD: mov 4(%edi),%eax;");
    asm("loc_65D6B00: cmp $0xFFFFFFFF,%eax;");
    asm("loc_65D6B03: je loc_65D6B12;");
    asm("loc_65D6B05: push %eax;");
    asm("loc_65D6B06: call _sub_65D6C4C;");
    asm("loc_65D6B0B: movl $0xFFFFFFFF,4(%edi);");
    asm("loc_65D6B12: mov 0x18(%edi),%ebp;");
    asm("loc_65D6B15: lea 0x14(%edi),%ebx;");
    asm("loc_65D6B18: movb $0,0x20(%esp);");
    asm("loc_65D6B1D: mov (%ebp),%esi;");
    asm("loc_65D6B20: cmp %ebp,%esi;");
    asm("loc_65D6B22: je loc_65D6B39;");
    asm("loc_65D6B24: mov %esi,%eax;");
    asm("loc_65D6B26: mov (%esi),%esi;");
    asm("loc_65D6B28: lea 0x14(%esp),%edx;");
    asm("loc_65D6B2C: push %eax;");
    asm("loc_65D6B2D: push %edx;");
    asm("loc_65D6B2E: mov %ebx,%ecx;");
    asm("loc_65D6B30: call _sub_65D6C00;");
    asm("loc_65D6B35: cmp %ebp,%esi;");
    asm("loc_65D6B37: jne loc_65D6B24;");
    asm("loc_65D6B39: mov 4(%ebx),%eax;");
    asm("loc_65D6B3C: push %eax;");
    asm("loc_65D6B3D: call _sub_65D6CB8;");
    asm("loc_65D6B42: xor %ebp,%ebp;");
    asm("loc_65D6B44: add $8,%edi;");
    asm("loc_65D6B47: mov %ebp,4(%ebx);");
    asm("loc_65D6B4A: mov %ebp,8(%ebx);");
    asm("loc_65D6B4D: mov 4(%edi),%ebx;");
    asm("loc_65D6B50: add $4,%esp;");
    asm("loc_65D6B53: movl $0xFFFFFFFF,0x20(%esp);");
    asm("loc_65D6B5B: mov (%ebx),%esi;");
    asm("loc_65D6B5D: cmp %ebx,%esi;");
    asm("loc_65D6B5F: je loc_65D6B76;");
    asm("loc_65D6B61: mov %esi,%eax;");
    asm("loc_65D6B63: mov (%esi),%esi;");
    asm("loc_65D6B65: push %eax;");
    asm("loc_65D6B66: lea 0x18(%esp),%eax;");
    asm("loc_65D6B6A: push %eax;");
    asm("loc_65D6B6B: mov %edi,%ecx;");
    asm("loc_65D6B6D: call _sub_65D5410;");
    asm("loc_65D6B72: cmp %ebx,%esi;");
    asm("loc_65D6B74: jne loc_65D6B61;");
    asm("loc_65D6B76: mov 4(%edi),%ecx;");
    asm("loc_65D6B79: push %ecx;");
    asm("loc_65D6B7A: call _sub_65D6CB8;");
    asm("loc_65D6B7F: mov 0x1C(%esp),%ecx;");
    asm("loc_65D6B83: add $4,%esp;");
    asm("loc_65D6B86: mov %ebp,4(%edi);");
    asm("loc_65D6B89: mov %ebp,8(%edi);");
    asm("loc_65D6B8C: pop %edi;");
    asm("loc_65D6B8D: pop %esi;");
    asm("loc_65D6B8E: pop %ebp;");
    asm("loc_65D6B8F: pop %ebx;");
    asm("loc_65D6B90: mov %ecx,%fs:0;");
    asm("loc_65D6B97: add $0x14,%esp;");
    asm("loc_65D6B9A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D6BA0() // _sub_65D6BA0
{
    __DEBUG_ASM(65D6BA0);
    // chunk 0x65D6BA0 _sub_65D6BA0
    asm("loc_65D6BA0: push %ebx;");
    asm("loc_65D6BA1: mov %ecx,%ebx;");
    asm("loc_65D6BA3: push %ebp;");
    asm("loc_65D6BA4: push %edi;");
    asm("loc_65D6BA5: mov 4(%ebx),%ebp;");
    asm("loc_65D6BA8: mov (%ebp),%edi;");
    asm("loc_65D6BAB: cmp %ebp,%edi;");
    asm("loc_65D6BAD: je loc_65D6BE0;");
    asm("loc_65D6BAF: push %esi;");
    asm("loc_65D6BB0: mov %edi,%esi;");
    asm("loc_65D6BB2: mov (%edi),%edi;");
    asm("loc_65D6BB4: mov 4(%esi),%eax;");
    asm("loc_65D6BB7: mov (%esi),%ecx;");
    asm("loc_65D6BB9: mov %ecx,(%eax);");
    asm("loc_65D6BBB: mov (%esi),%edx;");
    asm("loc_65D6BBD: mov 4(%esi),%eax;");
    asm("loc_65D6BC0: lea 8(%esi),%ecx;");
    asm("loc_65D6BC3: mov %eax,4(%edx);");
    asm("loc_65D6BC6: call _sub_65D6340;");
    asm("loc_65D6BCB: push %esi;");
    asm("loc_65D6BCC: call _sub_65D6CB8;");
    asm("loc_65D6BD1: mov 8(%ebx),%ecx;");
    asm("loc_65D6BD4: add $4,%esp;");
    asm("loc_65D6BD7: dec %ecx;");
    asm("loc_65D6BD8: cmp %ebp,%edi;");
    asm("loc_65D6BDA: mov %ecx,8(%ebx);");
    asm("loc_65D6BDD: jne loc_65D6BB0;");
    asm("loc_65D6BDF: pop %esi;");
    asm("loc_65D6BE0: mov 4(%ebx),%ecx;");
    asm("loc_65D6BE3: push %ecx;");
    asm("loc_65D6BE4: call _sub_65D6CB8;");
    asm("loc_65D6BE9: add $4,%esp;");
    asm("loc_65D6BEC: xor %eax,%eax;");
    asm("loc_65D6BEE: mov %eax,4(%ebx);");
    asm("loc_65D6BF1: mov %eax,8(%ebx);");
    asm("loc_65D6BF4: pop %edi;");
    asm("loc_65D6BF5: pop %ebp;");
    asm("loc_65D6BF6: pop %ebx;");
    asm("loc_65D6BF7: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D6C00() // _sub_65D6C00
{
    __DEBUG_ASM(65D6C00);
    // chunk 0x65D6C00 _sub_65D6C00
    asm("loc_65D6C00: push %ebx;");
    asm("loc_65D6C01: push %esi;");
    asm("loc_65D6C02: mov 0x10(%esp),%esi;");
    asm("loc_65D6C06: push %edi;");
    asm("loc_65D6C07: mov %ecx,%edi;");
    asm("loc_65D6C09: mov 4(%esi),%eax;");
    asm("loc_65D6C0C: mov (%esi),%ecx;");
    asm("loc_65D6C0E: mov (%esi),%ebx;");
    asm("loc_65D6C10: mov %ecx,(%eax);");
    asm("loc_65D6C12: mov (%esi),%edx;");
    asm("loc_65D6C14: mov 4(%esi),%eax;");
    asm("loc_65D6C17: lea 8(%esi),%ecx;");
    asm("loc_65D6C1A: mov %eax,4(%edx);");
    asm("loc_65D6C1D: call _sub_65D6340;");
    asm("loc_65D6C22: push %esi;");
    asm("loc_65D6C23: call _sub_65D6CB8;");
    asm("loc_65D6C28: mov 8(%edi),%eax;");
    asm("loc_65D6C2B: add $4,%esp;");
    asm("loc_65D6C2E: dec %eax;");
    asm("loc_65D6C2F: mov %eax,8(%edi);");
    asm("loc_65D6C32: mov 0x10(%esp),%eax;");
    asm("loc_65D6C36: pop %edi;");
    asm("loc_65D6C37: pop %esi;");
    asm("loc_65D6C38: mov %ebx,(%eax);");
    asm("loc_65D6C3A: pop %ebx;");
    asm("loc_65D6C3B: ret $8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D6C40() // _stricmp
{
    __DEBUG_ASM(65D6C40);
    // chunk 0x65D6C40 _sub_65D6C40
    asm("loc_65D6C40: jmpl *_import_65E1000;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D6C46() // _listen
{
    __DEBUG_ASM(65D6C46);
    // chunk 0x65D6C46 _sub_65D6C46
    asm("loc_65D6C46: jmpl *_import_65E111C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D6C4C() // _closesocket
{
    __DEBUG_ASM(65D6C4C);
    // chunk 0x65D6C4C _sub_65D6C4C
    asm("loc_65D6C4C: jmpl *_import_65E1164;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D6C52() // _bind
{
    __DEBUG_ASM(65D6C52);
    // chunk 0x65D6C52 _sub_65D6C52
    asm("loc_65D6C52: jmpl *_import_65E1160;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D6C58() // _htons
{
    __DEBUG_ASM(65D6C58);
    // chunk 0x65D6C58 _sub_65D6C58
    asm("loc_65D6C58: jmpl *_import_65E115C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D6C5E() // _setsockopt
{
    __DEBUG_ASM(65D6C5E);
    // chunk 0x65D6C5E _sub_65D6C5E
    asm("loc_65D6C5E: jmpl *_import_65E1158;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D6C64() // _socket
{
    __DEBUG_ASM(65D6C64);
    // chunk 0x65D6C64 _sub_65D6C64
    asm("loc_65D6C64: jmpl *_import_65E1154;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D6C6A() // _WSAGetLastError
{
    __DEBUG_ASM(65D6C6A);
    // chunk 0x65D6C6A _sub_65D6C6A
    asm("loc_65D6C6A: jmpl *_import_65E1150;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D6C70() // _inet_ntoa
{
    __DEBUG_ASM(65D6C70);
    // chunk 0x65D6C70 _sub_65D6C70
    asm("loc_65D6C70: jmpl *_import_65E114C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D6C76() // _accept
{
    __DEBUG_ASM(65D6C76);
    // chunk 0x65D6C76 _sub_65D6C76
    asm("loc_65D6C76: jmpl *_import_65E1148;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D6C7C() // _select
{
    __DEBUG_ASM(65D6C7C);
    // chunk 0x65D6C7C _sub_65D6C7C
    asm("loc_65D6C7C: jmpl *_import_65E1144;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D6C82() // _connect
{
    __DEBUG_ASM(65D6C82);
    // chunk 0x65D6C82 _sub_65D6C82
    asm("loc_65D6C82: jmpl *_import_65E1140;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D6C88() // _gethostbyname
{
    __DEBUG_ASM(65D6C88);
    // chunk 0x65D6C88 _sub_65D6C88
    asm("loc_65D6C88: jmpl *_import_65E113C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D6C8E() // _inet_addr
{
    __DEBUG_ASM(65D6C8E);
    // chunk 0x65D6C8E _sub_65D6C8E
    asm("loc_65D6C8E: jmpl *_import_65E1138;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D6C94() // _ioctlsocket
{
    __DEBUG_ASM(65D6C94);
    // chunk 0x65D6C94 _sub_65D6C94
    asm("loc_65D6C94: jmpl *_import_65E1134;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D6C9A() // _recv
{
    __DEBUG_ASM(65D6C9A);
    // chunk 0x65D6C9A _sub_65D6C9A
    asm("loc_65D6C9A: jmpl *_import_65E1130;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D6CA0() // _send
{
    __DEBUG_ASM(65D6CA0);
    // chunk 0x65D6CA0 _sub_65D6CA0
    asm("loc_65D6CA0: jmpl *_import_65E112C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D6CA6() // _WSACleanup
{
    __DEBUG_ASM(65D6CA6);
    // chunk 0x65D6CA6 _sub_65D6CA6
    asm("loc_65D6CA6: jmpl *_import_65E1128;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D6CAC() // _WSAStartup
{
    __DEBUG_ASM(65D6CAC);
    // chunk 0x65D6CAC _sub_65D6CAC
    asm("loc_65D6CAC: jmpl *_import_65E1124;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D6CB2() // __WSAFDIsSet
{
    __DEBUG_ASM(65D6CB2);
    // chunk 0x65D6CB2 _sub_65D6CB2
    asm("loc_65D6CB2: jmpl *_import_65E1120;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D6CB8() // _sub_65D6CB8
{
    __DEBUG_ASM(65D6CB8);
    // chunk 0x65D6CB8 _sub_65D6CB8
    asm("loc_65D6CB8: pushl 4(%esp);");
    asm("loc_65D6CBC: call _sub_65D7F23;");
    asm("loc_65D6CC1: pop %ecx;");
    asm("loc_65D6CC2: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D6CC3() // ?_Xlen@std@@YAXXZ
{
    __DEBUG_ASM(65D6CC3);
    // chunk 0x65D6CC3 _sub_65D6CC3
    asm("loc_65D6CC3: mov $_sub_65E019C,%eax;");
    asm("loc_65D6CC8: call _sub_65D819C;");
    asm("loc_65D6CCD: sub $0x30,%esp;");
    asm("loc_65D6CD0: mov -0xD(%ebp),%al;");
    asm("loc_65D6CD3: push %esi;");
    asm("loc_65D6CD4: push $0;");
    asm("loc_65D6CD6: lea -0x20(%ebp),%ecx;");
    asm("loc_65D6CD9: mov %al,-0x20(%ebp);");
    asm("loc_65D6CDC: call _sub_65D3B40;");
    asm("loc_65D6CE1: mov $_data_65E1574,%esi;");
    asm("loc_65D6CE6: push %esi;");
    asm("loc_65D6CE7: call _sub_65D8120;");
    asm("loc_65D6CEC: pop %ecx;");
    asm("loc_65D6CED: push %eax;");
    asm("loc_65D6CEE: push %esi;");
    asm("loc_65D6CEF: lea -0x20(%ebp),%ecx;");
    asm("loc_65D6CF2: call _sub_65D3D50;");
    asm("loc_65D6CF7: andl $0,-4(%ebp);");
    asm("loc_65D6CFB: lea -0x20(%ebp),%eax;");
    asm("loc_65D6CFE: push %eax;");
    asm("loc_65D6CFF: lea -0x3C(%ebp),%ecx;");
    asm("loc_65D6D02: call _sub_65D6D1D;");
    asm("loc_65D6D07: lea -0x3C(%ebp),%eax;");
    asm("loc_65D6D0A: push $_data_65E22B0;");
    asm("loc_65D6D0F: push %eax;");
    asm("loc_65D6D10: movl $_off_65E1568,-0x3C(%ebp);");
    asm("loc_65D6D17: call _sub_65D81BB;");
    asm("loc_65D6D1C: pop %esi;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D6D1D() // _sub_65D6D1D
{
    __DEBUG_ASM(65D6D1D);
    // chunk 0x65D6D1D _sub_65D6D1D
    asm("loc_65D6D1D: mov $_sub_65E0188,%eax;");
    asm("loc_65D6D22: call _sub_65D819C;");
    asm("loc_65D6D27: push %ecx;");
    asm("loc_65D6D28: push %ecx;");
    asm("loc_65D6D29: push %ebx;");
    asm("loc_65D6D2A: push %esi;");
    asm("loc_65D6D2B: lea -0x10(%ebp),%eax;");
    asm("loc_65D6D2E: push %edi;");
    asm("loc_65D6D2F: mov %ecx,%esi;");
    asm("loc_65D6D31: push %eax;");
    asm("loc_65D6D32: mov %esi,-0x14(%ebp);");
    asm("loc_65D6D35: movl $_data_65E60E4,-0x10(%ebp);");
    asm("loc_65D6D3C: call _sub_65D8028;");
    asm("loc_65D6D41: mov 8(%ebp),%ebx;");
    asm("loc_65D6D44: andl $0,-4(%ebp);");
    asm("loc_65D6D48: lea 0xC(%esi),%edi;");
    asm("loc_65D6D4B: push $0;");
    asm("loc_65D6D4D: mov (%ebx),%al;");
    asm("loc_65D6D4F: mov %edi,%ecx;");
    asm("loc_65D6D51: mov %al,(%edi);");
    asm("loc_65D6D53: call _sub_65D3B40;");
    asm("loc_65D6D58: pushl _data_65E1594;");
    asm("loc_65D6D5E: mov %edi,%ecx;");
    asm("loc_65D6D60: push $0;");
    asm("loc_65D6D62: push %ebx;");
    asm("loc_65D6D63: call _sub_65D4CD0;");
    asm("loc_65D6D68: mov -0xC(%ebp),%ecx;");
    asm("loc_65D6D6B: movl $_off_65E1588,(%esi);");
    asm("loc_65D6D71: mov %esi,%eax;");
    asm("loc_65D6D73: pop %edi;");
    asm("loc_65D6D74: pop %esi;");
    asm("loc_65D6D75: pop %ebx;");
    asm("loc_65D6D76: mov %ecx,%fs:0;");
    asm("loc_65D6D7D: leave;");
    asm("loc_65D6D7E: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D6D81() // _sub_65D6D81
{
    __DEBUG_ASM(65D6D81);
    // chunk 0x65D6D81 _sub_65D6D81
    asm("loc_65D6D81: mov 0x10(%ecx),%eax;");
    asm("loc_65D6D84: test %eax,%eax;");
    asm("loc_65D6D86: jne loc_65D6D8D;");
    asm("loc_65D6D88: mov $_data_65E13A4,%eax;");
    asm("loc_65D6D8D: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D6D8E() // _sub_65D6D8E
{
    __DEBUG_ASM(65D6D8E);
    // chunk 0x65D6D8E _sub_65D6D8E
    asm("loc_65D6D8E: push %ebp;");
    asm("loc_65D6D8F: mov %esp,%ebp;");
    asm("loc_65D6D91: sub $0x1C,%esp;");
    asm("loc_65D6D94: push %ecx;");
    asm("loc_65D6D95: lea -0x1C(%ebp),%ecx;");
    asm("loc_65D6D98: call _sub_65D6DAB;");
    asm("loc_65D6D9D: lea -0x1C(%ebp),%eax;");
    asm("loc_65D6DA0: push $_data_65E2320;");
    asm("loc_65D6DA5: push %eax;");
    asm("loc_65D6DA6: call _sub_65D81BB;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D6DAB() // _sub_65D6DAB
{
    __DEBUG_ASM(65D6DAB);
    // chunk 0x65D6DAB _sub_65D6DAB
    asm("loc_65D6DAB: mov $loc_65E01B0,%eax;");
    asm("loc_65D6DB0: call _sub_65D819C;");
    asm("loc_65D6DB5: push %ecx;");
    asm("loc_65D6DB6: push %ebx;");
    asm("loc_65D6DB7: mov 8(%ebp),%ebx;");
    asm("loc_65D6DBA: push %esi;");
    asm("loc_65D6DBB: push %edi;");
    asm("loc_65D6DBC: mov %ecx,%esi;");
    asm("loc_65D6DBE: push %ebx;");
    asm("loc_65D6DBF: mov %esi,-0x10(%ebp);");
    asm("loc_65D6DC2: call _sub_65D8065;");
    asm("loc_65D6DC7: mov 0xC(%ebx),%al;");
    asm("loc_65D6DCA: andl $0,-4(%ebp);");
    asm("loc_65D6DCE: add $0xC,%ebx;");
    asm("loc_65D6DD1: lea 0xC(%esi),%edi;");
    asm("loc_65D6DD4: push $0;");
    asm("loc_65D6DD6: mov %edi,%ecx;");
    asm("loc_65D6DD8: mov %al,(%edi);");
    asm("loc_65D6DDA: call _sub_65D3B40;");
    asm("loc_65D6DDF: pushl _data_65E1594;");
    asm("loc_65D6DE5: mov %edi,%ecx;");
    asm("loc_65D6DE7: push $0;");
    asm("loc_65D6DE9: push %ebx;");
    asm("loc_65D6DEA: call _sub_65D4CD0;");
    asm("loc_65D6DEF: mov -0xC(%ebp),%ecx;");
    asm("loc_65D6DF2: movl $_off_65E1588,(%esi);");
    asm("loc_65D6DF8: mov %esi,%eax;");
    asm("loc_65D6DFA: pop %edi;");
    asm("loc_65D6DFB: pop %esi;");
    asm("loc_65D6DFC: pop %ebx;");
    asm("loc_65D6DFD: mov %ecx,%fs:0;");
    asm("loc_65D6E04: leave;");
    asm("loc_65D6E05: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D6E08() // _unknown_libname_2
{
    __DEBUG_ASM(65D6E08);
    // chunk 0x65D6E08 _sub_65D6E08
    asm("loc_65D6E08: mov $loc_65E01B0,%eax;");
    asm("loc_65D6E0D: call _sub_65D819C;");
    asm("loc_65D6E12: push %ecx;");
    asm("loc_65D6E13: push %esi;");
    asm("loc_65D6E14: mov %ecx,%esi;");
    asm("loc_65D6E16: mov %esi,-0x10(%ebp);");
    asm("loc_65D6E19: movl $_off_65E1588,(%esi);");
    asm("loc_65D6E1F: andl $0,-4(%ebp);");
    asm("loc_65D6E23: push $1;");
    asm("loc_65D6E25: lea 0xC(%esi),%ecx;");
    asm("loc_65D6E28: call _sub_65D3B40;");
    asm("loc_65D6E2D: orl $0xFFFFFFFF,-4(%ebp);");
    asm("loc_65D6E31: mov %esi,%ecx;");
    asm("loc_65D6E33: call _sub_65D80AF;");
    asm("loc_65D6E38: mov -0xC(%ebp),%ecx;");
    asm("loc_65D6E3B: pop %esi;");
    asm("loc_65D6E3C: mov %ecx,%fs:0;");
    asm("loc_65D6E43: leave;");
    asm("loc_65D6E44: ret;");
    // chunk 0x65E01A8 _sub_65E01A8
    asm("loc_65E01A8: mov -0x10(%ebp),%ecx;");
    asm("loc_65E01AB: jmp _sub_65D80AF;");
    asm("loc_65E01B0: mov $_data_65E2410,%eax;");
    asm("loc_65E01B5: jmp _sub_65D7009;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D6E45() // _sub_65D6E45
{
    __DEBUG_ASM(65D6E45);
    // chunk 0x65D6E45 _sub_65D6E45
    asm("loc_65D6E45: push %ebp;");
    asm("loc_65D6E46: mov %esp,%ebp;");
    asm("loc_65D6E48: sub $0x1C,%esp;");
    asm("loc_65D6E4B: push %ecx;");
    asm("loc_65D6E4C: lea -0x1C(%ebp),%ecx;");
    asm("loc_65D6E4F: call _sub_65D6E62;");
    asm("loc_65D6E54: lea -0x1C(%ebp),%eax;");
    asm("loc_65D6E57: push $_data_65E22B0;");
    asm("loc_65D6E5C: push %eax;");
    asm("loc_65D6E5D: call _sub_65D81BB;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D6E62() // _sub_65D6E62
{
    __DEBUG_ASM(65D6E62);
    // chunk 0x65D6E62 _sub_65D6E62
    asm("loc_65D6E62: push %esi;");
    asm("loc_65D6E63: mov %ecx,%esi;");
    asm("loc_65D6E65: pushl 8(%esp);");
    asm("loc_65D6E69: call _sub_65D6DAB;");
    asm("loc_65D6E6E: movl $_off_65E1568,(%esi);");
    asm("loc_65D6E74: mov %esi,%eax;");
    asm("loc_65D6E76: pop %esi;");
    asm("loc_65D6E77: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D6E7A() // ?_Xran@std@@YAXXZ
{
    __DEBUG_ASM(65D6E7A);
    // chunk 0x65D6E7A _sub_65D6E7A
    asm("loc_65D6E7A: mov $_sub_65E019C,%eax;");
    asm("loc_65D6E7F: call _sub_65D819C;");
    asm("loc_65D6E84: sub $0x30,%esp;");
    asm("loc_65D6E87: mov -0xD(%ebp),%al;");
    asm("loc_65D6E8A: push %esi;");
    asm("loc_65D6E8B: push $0;");
    asm("loc_65D6E8D: lea -0x20(%ebp),%ecx;");
    asm("loc_65D6E90: mov %al,-0x20(%ebp);");
    asm("loc_65D6E93: call _sub_65D3B40;");
    asm("loc_65D6E98: mov $_data_65E15A8,%esi;");
    asm("loc_65D6E9D: push %esi;");
    asm("loc_65D6E9E: call _sub_65D8120;");
    asm("loc_65D6EA3: pop %ecx;");
    asm("loc_65D6EA4: push %eax;");
    asm("loc_65D6EA5: push %esi;");
    asm("loc_65D6EA6: lea -0x20(%ebp),%ecx;");
    asm("loc_65D6EA9: call _sub_65D3D50;");
    asm("loc_65D6EAE: andl $0,-4(%ebp);");
    asm("loc_65D6EB2: lea -0x20(%ebp),%eax;");
    asm("loc_65D6EB5: push %eax;");
    asm("loc_65D6EB6: lea -0x3C(%ebp),%ecx;");
    asm("loc_65D6EB9: call _sub_65D6D1D;");
    asm("loc_65D6EBE: lea -0x3C(%ebp),%eax;");
    asm("loc_65D6EC1: push $_data_65E23D8;");
    asm("loc_65D6EC6: push %eax;");
    asm("loc_65D6EC7: movl $_off_65E159C,-0x3C(%ebp);");
    asm("loc_65D6ECE: call _sub_65D81BB;");
    asm("loc_65D6ED3: pop %esi;");
    asm("loc_65D6ED4: push %ebp;");
    asm("loc_65D6ED5: mov %esp,%ebp;");
    asm("loc_65D6ED7: sub $0x1C,%esp;");
    asm("loc_65D6EDA: push %ecx;");
    asm("loc_65D6EDB: lea -0x1C(%ebp),%ecx;");
    asm("loc_65D6EDE: call _sub_65D6F0D;");
    asm("loc_65D6EE3: lea -0x1C(%ebp),%eax;");
    asm("loc_65D6EE6: push $_data_65E23D8;");
    asm("loc_65D6EEB: push %eax;");
    asm("loc_65D6EEC: call _sub_65D81BB;");
    asm("loc_65D6EF1: push %esi;");
    asm("loc_65D6EF2: mov %ecx,%esi;");
    asm("loc_65D6EF4: call _sub_65D6E08;");
    asm("loc_65D6EF9: testb $1,8(%esp);");
    asm("loc_65D6EFE: je loc_65D6F07;");
    asm("loc_65D6F00: push %esi;");
    asm("loc_65D6F01: call _sub_65D6CB8;");
    asm("loc_65D6F06: pop %ecx;");
    asm("loc_65D6F07: mov %esi,%eax;");
    asm("loc_65D6F09: pop %esi;");
    asm("loc_65D6F0A: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D6F0D() // _sub_65D6F0D
{
    __DEBUG_ASM(65D6F0D);
    // chunk 0x65D6F0D _sub_65D6F0D
    asm("loc_65D6F0D: push %esi;");
    asm("loc_65D6F0E: mov %ecx,%esi;");
    asm("loc_65D6F10: pushl 8(%esp);");
    asm("loc_65D6F14: call _sub_65D6DAB;");
    asm("loc_65D6F19: movl $_off_65E159C,(%esi);");
    asm("loc_65D6F1F: mov %esi,%eax;");
    asm("loc_65D6F21: pop %esi;");
    asm("loc_65D6F22: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D6F25() // _unknown_libname_3
{
    __DEBUG_ASM(65D6F25);
    // chunk 0x65D6F25 _sub_65D6F25
    asm("loc_65D6F25: testb $1,_data_65E66BF;");
    asm("loc_65D6F2C: jne loc_65D6F35;");
    asm("loc_65D6F2E: orb $1,_data_65E66BF;");
    asm("loc_65D6F35: call _sub_65D6F4F;");
    asm("loc_65D6F3A: testb $1,_data_65E66C0;");
    asm("loc_65D6F41: jne loc_65D6F4A;");
    asm("loc_65D6F43: orb $1,_data_65E66C0;");
    asm("loc_65D6F4A: jmp _sub_65D6F5B;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D6F4F() // _sub_65D6F4F
{
    __DEBUG_ASM(65D6F4F);
    // chunk 0x65D6F4F _sub_65D6F4F
    asm("loc_65D6F4F: push $_sub_65D54F0;");
    asm("loc_65D6F54: call _sub_65D7753;");
    asm("loc_65D6F59: pop %ecx;");
    asm("loc_65D6F5A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D6F5B() // _sub_65D6F5B
{
    __DEBUG_ASM(65D6F5B);
    // chunk 0x65D6F5B _sub_65D6F5B
    asm("loc_65D6F5B: push $_sub_65D6F67;");
    asm("loc_65D6F60: call _sub_65D7753;");
    asm("loc_65D6F65: pop %ecx;");
    asm("loc_65D6F66: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D6F67() // _nullsub_2
{
    __DEBUG_ASM(65D6F67);
    // chunk 0x65D6F67 _sub_65D6F67
    asm("loc_65D6F67: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D6F68() // __purecall
{
    __DEBUG_ASM(65D6F68);
    // chunk 0x65D6F68 _sub_65D6F68
    asm("loc_65D6F68: push $0x19;");
    asm("loc_65D6F6A: call _sub_65D7EF0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D6F71() // ??2@YAPAXI@Z
{
    __DEBUG_ASM(65D6F71);
    // chunk 0x65D6F71 _sub_65D6F71
    asm("loc_65D6F71: push $1;");
    asm("loc_65D6F73: pushl 8(%esp);");
    asm("loc_65D6F77: call _sub_65D8547;");
    asm("loc_65D6F7C: pop %ecx;");
    asm("loc_65D6F7D: pop %ecx;");
    asm("loc_65D6F7E: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D6F7F() // ?_JumpToContinuation@@YGXPAXPAUEHRegistrationNode@@@Z
{
    __DEBUG_ASM(65D6F7F);
    // chunk 0x65D6F7F _sub_65D6F7F
    asm("loc_65D6F7F: push %ebp;");
    asm("loc_65D6F80: mov %esp,%ebp;");
    asm("loc_65D6F82: push %ecx;");
    asm("loc_65D6F83: push %ebx;");
    asm("loc_65D6F84: push %esi;");
    asm("loc_65D6F85: push %edi;");
    asm("loc_65D6F86: mov 0xC(%ebp),%eax;");
    asm("loc_65D6F89: add $0xC,%eax;");
    asm("loc_65D6F8C: mov %eax,-4(%ebp);");
    asm("loc_65D6F8F: mov %fs:0,%ebx;");
    asm("loc_65D6F96: mov (%ebx),%eax;");
    asm("loc_65D6F98: mov %eax,%fs:0;");
    asm("loc_65D6F9E: mov 8(%ebp),%eax;");
    asm("loc_65D6FA1: mov 0xC(%ebp),%ebx;");
    asm("loc_65D6FA4: mov -4(%ebx),%esp;");
    asm("loc_65D6FA7: mov -4(%ebp),%ebp;");
    asm("loc_65D6FAA: jmp *%eax;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D6FAC() // _sub_65D6FAC
{
    __DEBUG_ASM(65D6FAC);
    // chunk 0x65D6FAC _sub_65D6FAC
    asm("loc_65D6FAC: pop %edi;");
    asm("loc_65D6FAD: pop %esi;");
    asm("loc_65D6FAE: pop %ebx;");
    asm("loc_65D6FAF: leave;");
    asm("loc_65D6FB0: ret $8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D6FB3() // _sub_65D6FB3
{
    __DEBUG_ASM(65D6FB3);
    // chunk 0x65D6FB3 _sub_65D6FB3
    asm("loc_65D6FB3: pop %eax;");
    asm("loc_65D6FB4: pop %ecx;");
    asm("loc_65D6FB5: xchg %eax,(%esp);");
    asm("loc_65D6FB8: jmp *%eax;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D6FBA() // ?_UnwindNestedFrames@@YGXPAUEHRegistrationNode@@PAUEHExceptionRecord@@@Z
{
    __DEBUG_ASM(65D6FBA);
    // chunk 0x65D6FBA _sub_65D6FBA
    asm("loc_65D6FBA: push %ebp;");
    asm("loc_65D6FBB: mov %esp,%ebp;");
    asm("loc_65D6FBD: push %ecx;");
    asm("loc_65D6FBE: push %ecx;");
    asm("loc_65D6FBF: push %ebx;");
    asm("loc_65D6FC0: push %esi;");
    asm("loc_65D6FC1: push %edi;");
    asm("loc_65D6FC2: mov %fs:0,%eax;");
    asm("loc_65D6FC8: mov %eax,-8(%ebp);");
    asm("loc_65D6FCB: movl $loc_65D6FE2,-4(%ebp);");
    asm("loc_65D6FD2: push $0;");
    asm("loc_65D6FD4: pushl 0xC(%ebp);");
    asm("loc_65D6FD7: pushl -4(%ebp);");
    asm("loc_65D6FDA: pushl 8(%ebp);");
    asm("loc_65D6FDD: call _sub_65DFE1E;");
    asm("loc_65D6FE2: mov 0xC(%ebp),%eax;");
    asm("loc_65D6FE5: mov 4(%eax),%eax;");
    asm("loc_65D6FE8: and $0xFD,%al;");
    asm("loc_65D6FEA: mov 0xC(%ebp),%ecx;");
    asm("loc_65D6FED: mov %eax,4(%ecx);");
    asm("loc_65D6FF0: mov %fs:0,%eax;");
    asm("loc_65D6FF6: mov -8(%ebp),%ebx;");
    asm("loc_65D6FF9: mov %eax,(%ebx);");
    asm("loc_65D6FFB: mov %ebx,%fs:0;");
    asm("loc_65D7002: pop %edi;");
    asm("loc_65D7003: pop %esi;");
    asm("loc_65D7004: pop %ebx;");
    asm("loc_65D7005: leave;");
    asm("loc_65D7006: ret $8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D7009() // ___CxxFrameHandler
{
    __DEBUG_ASM(65D7009);
    // chunk 0x65D7009 _sub_65D7009
    asm("loc_65D7009: push %ebp;");
    asm("loc_65D700A: mov %esp,%ebp;");
    asm("loc_65D700C: sub $4,%esp;");
    asm("loc_65D700F: push %ebx;");
    asm("loc_65D7010: push %esi;");
    asm("loc_65D7011: push %edi;");
    asm("loc_65D7012: cld;");
    asm("loc_65D7013: mov %eax,-4(%ebp);");
    asm("loc_65D7016: xor %eax,%eax;");
    asm("loc_65D7018: push %eax;");
    asm("loc_65D7019: push %eax;");
    asm("loc_65D701A: push %eax;");
    asm("loc_65D701B: pushl -4(%ebp);");
    asm("loc_65D701E: pushl 0x14(%ebp);");
    asm("loc_65D7021: pushl 0x10(%ebp);");
    asm("loc_65D7024: pushl 0xC(%ebp);");
    asm("loc_65D7027: pushl 8(%ebp);");
    asm("loc_65D702A: call _sub_65D866F;");
    asm("loc_65D702F: add $0x20,%esp;");
    asm("loc_65D7032: mov %eax,0x14(%ebp);");
    asm("loc_65D7035: pop %edi;");
    asm("loc_65D7036: pop %esi;");
    asm("loc_65D7037: pop %ebx;");
    asm("loc_65D7038: mov 0x14(%ebp),%eax;");
    asm("loc_65D703B: mov %ebp,%esp;");
    asm("loc_65D703D: pop %ebp;");
    asm("loc_65D703E: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D703F() // ?_CallCatchBlock2@@YAPAXPAUEHRegistrationNode@@PBU_s_FuncInfo@@PAXHK@Z
{
    __DEBUG_ASM(65D703F);
    // chunk 0x65D703F _sub_65D703F
    asm("loc_65D703F: push %ebp;");
    asm("loc_65D7040: mov %esp,%ebp;");
    asm("loc_65D7042: sub $0x14,%esp;");
    asm("loc_65D7045: mov 0xC(%ebp),%eax;");
    asm("loc_65D7048: andl $0,-0x14(%ebp);");
    asm("loc_65D704C: mov 8(%ebp),%ecx;");
    asm("loc_65D704F: mov %eax,-0xC(%ebp);");
    asm("loc_65D7052: mov 0x14(%ebp),%eax;");
    asm("loc_65D7055: movl $_sub_65D7093,-0x10(%ebp);");
    asm("loc_65D705C: inc %eax;");
    asm("loc_65D705D: mov %ecx,-8(%ebp);");
    asm("loc_65D7060: mov %eax,-4(%ebp);");
    asm("loc_65D7063: mov %fs:0,%eax;");
    asm("loc_65D7069: mov %eax,-0x14(%ebp);");
    asm("loc_65D706C: lea -0x14(%ebp),%eax;");
    asm("loc_65D7072: mov %eax,%fs:0;");
    asm("loc_65D7078: pushl 0x18(%ebp);");
    asm("loc_65D707B: push %ecx;");
    asm("loc_65D707C: pushl 0x10(%ebp);");
    asm("loc_65D707F: call _sub_65D8E90;");
    asm("loc_65D7084: mov %eax,%ecx;");
    asm("loc_65D7086: mov -0x14(%ebp),%eax;");
    asm("loc_65D7089: mov %eax,%fs:0;");
    asm("loc_65D708F: mov %ecx,%eax;");
    asm("loc_65D7091: leave;");
    asm("loc_65D7092: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D7093() // ?CatchGuardHandler@@YA?AW4_EXCEPTION_DISPOSITION@@PAUEHExceptionRecord@@PAUCatchGuardRN@@PAX2@Z
{
    __DEBUG_ASM(65D7093);
    // chunk 0x65D7093 _sub_65D7093
    asm("loc_65D7093: push %ebp;");
    asm("loc_65D7094: mov %esp,%ebp;");
    asm("loc_65D7096: cld;");
    asm("loc_65D7097: mov 0xC(%ebp),%eax;");
    asm("loc_65D709A: push $0;");
    asm("loc_65D709C: push %eax;");
    asm("loc_65D709D: pushl 0x10(%eax);");
    asm("loc_65D70A0: pushl 8(%eax);");
    asm("loc_65D70A3: push $0;");
    asm("loc_65D70A5: pushl 0x10(%ebp);");
    asm("loc_65D70A8: pushl 0xC(%eax);");
    asm("loc_65D70AB: pushl 8(%ebp);");
    asm("loc_65D70AE: call _sub_65D866F;");
    asm("loc_65D70B3: add $0x20,%esp;");
    asm("loc_65D70B6: pop %ebp;");
    asm("loc_65D70B7: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D70B8() // ?_CallSETranslator@@YAHPAUEHExceptionRecord@@PAUEHRegistrationNode@@PAX2PBU_s_FuncInfo@@H1@Z
{
    __DEBUG_ASM(65D70B8);
    // chunk 0x65D70B8 _sub_65D70B8
    asm("loc_65D70B8: push %ebp;");
    asm("loc_65D70B9: mov %esp,%ebp;");
    asm("loc_65D70BB: sub $0x34,%esp;");
    asm("loc_65D70BE: push %ebx;");
    asm("loc_65D70BF: push %esi;");
    asm("loc_65D70C0: push %edi;");
    asm("loc_65D70C1: andl $0,-0x28(%ebp);");
    asm("loc_65D70C5: movl $_sub_65D716E,-0x24(%ebp);");
    asm("loc_65D70CC: mov 0x18(%ebp),%eax;");
    asm("loc_65D70CF: mov %eax,-0x20(%ebp);");
    asm("loc_65D70D2: mov 0xC(%ebp),%eax;");
    asm("loc_65D70D5: mov %eax,-0x1C(%ebp);");
    asm("loc_65D70D8: mov 0x1C(%ebp),%eax;");
    asm("loc_65D70DB: mov %eax,-0x18(%ebp);");
    asm("loc_65D70DE: mov 0x20(%ebp),%eax;");
    asm("loc_65D70E1: mov %eax,-0x14(%ebp);");
    asm("loc_65D70E4: andl $0,-0x10(%ebp);");
    asm("loc_65D70E8: andl $0,-0xC(%ebp);");
    asm("loc_65D70EC: andl $0,-8(%ebp);");
    asm("loc_65D70F0: andl $0,-4(%ebp);");
    asm("loc_65D70F4: movl $loc_65D7140,-0x10(%ebp);");
    asm("loc_65D70FB: mov %esp,-0xC(%ebp);");
    asm("loc_65D70FE: mov %ebp,-8(%ebp);");
    asm("loc_65D7101: mov %fs:0,%eax;");
    asm("loc_65D7107: mov %eax,-0x28(%ebp);");
    asm("loc_65D710A: lea -0x28(%ebp),%eax;");
    asm("loc_65D7110: mov %eax,%fs:0;");
    asm("loc_65D7116: movl $1,-0x34(%ebp);");
    asm("loc_65D711D: mov 8(%ebp),%eax;");
    asm("loc_65D7120: mov %eax,-0x30(%ebp);");
    asm("loc_65D7123: mov 0x10(%ebp),%eax;");
    asm("loc_65D7126: mov %eax,-0x2C(%ebp);");
    asm("loc_65D7129: lea -0x30(%ebp),%eax;");
    asm("loc_65D712C: push %eax;");
    asm("loc_65D712D: mov 8(%ebp),%eax;");
    asm("loc_65D7130: pushl (%eax);");
    asm("loc_65D7132: call _sub_65D8F61;");
    asm("loc_65D7137: calll *0x68(%eax);");
    asm("loc_65D713A: pop %ecx;");
    asm("loc_65D713B: pop %ecx;");
    asm("loc_65D713C: andl $0,-0x34(%ebp);");
    asm("loc_65D7140: cmpl $0,-4(%ebp);");
    asm("loc_65D7144: je loc_65D715D;");
    asm("loc_65D7146: mov %fs:0,%ebx;");
    asm("loc_65D714D: mov (%ebx),%eax;");
    asm("loc_65D714F: mov -0x28(%ebp),%ebx;");
    asm("loc_65D7152: mov %eax,(%ebx);");
    asm("loc_65D7154: mov %ebx,%fs:0;");
    asm("loc_65D715B: jmp loc_65D7166;");
    asm("loc_65D715D: mov -0x28(%ebp),%eax;");
    asm("loc_65D7160: mov %eax,%fs:0;");
    asm("loc_65D7166: mov -0x34(%ebp),%eax;");
    asm("loc_65D7169: pop %edi;");
    asm("loc_65D716A: pop %esi;");
    asm("loc_65D716B: pop %ebx;");
    asm("loc_65D716C: leave;");
    asm("loc_65D716D: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D716E() // ?TranslatorGuardHandler@@YA?AW4_EXCEPTION_DISPOSITION@@PAUEHExceptionRecord@@PAUTranslatorGuardRN@@PAX2@Z
{
    __DEBUG_ASM(65D716E);
    // chunk 0x65D716E _sub_65D716E
    asm("loc_65D716E: push %ebp;");
    asm("loc_65D716F: mov %esp,%ebp;");
    asm("loc_65D7171: push %ebx;");
    asm("loc_65D7172: push %esi;");
    asm("loc_65D7173: push %edi;");
    asm("loc_65D7174: cld;");
    asm("loc_65D7175: mov 8(%ebp),%eax;");
    asm("loc_65D7178: mov 4(%eax),%eax;");
    asm("loc_65D717B: and $0x66,%eax;");
    asm("loc_65D717E: test %eax,%eax;");
    asm("loc_65D7180: je loc_65D7191;");
    asm("loc_65D7182: mov 0xC(%ebp),%eax;");
    asm("loc_65D7185: movl $1,0x24(%eax);");
    asm("loc_65D718C: push $1;");
    asm("loc_65D718E: pop %eax;");
    asm("loc_65D718F: jmp loc_65D71DE;");
    asm("loc_65D7191: push $1;");
    asm("loc_65D7193: mov 0xC(%ebp),%eax;");
    asm("loc_65D7196: pushl 0x14(%eax);");
    asm("loc_65D7199: mov 0xC(%ebp),%eax;");
    asm("loc_65D719C: pushl 0x10(%eax);");
    asm("loc_65D719F: mov 0xC(%ebp),%eax;");
    asm("loc_65D71A2: pushl 8(%eax);");
    asm("loc_65D71A5: push $0;");
    asm("loc_65D71A7: pushl 0x10(%ebp);");
    asm("loc_65D71AA: mov 0xC(%ebp),%eax;");
    asm("loc_65D71AD: pushl 0xC(%eax);");
    asm("loc_65D71B0: pushl 8(%ebp);");
    asm("loc_65D71B3: call _sub_65D866F;");
    asm("loc_65D71B8: add $0x20,%esp;");
    asm("loc_65D71BB: mov 0xC(%ebp),%eax;");
    asm("loc_65D71BE: cmpl $0,0x24(%eax);");
    asm("loc_65D71C2: jne loc_65D71CF;");
    asm("loc_65D71C4: pushl 8(%ebp);");
    asm("loc_65D71C7: pushl 0xC(%ebp);");
    asm("loc_65D71CA: call _sub_65D6FBA;");
    asm("loc_65D71CF: mov 0xC(%ebp),%ebx;");
    asm("loc_65D71D2: mov 0x1C(%ebx),%esp;");
    asm("loc_65D71D5: mov 0x20(%ebx),%ebp;");
    asm("loc_65D71D8: jmpl *0x18(%ebx);");
    asm("loc_65D71DB: push $1;");
    asm("loc_65D71DD: pop %eax;");
    asm("loc_65D71DE: pop %edi;");
    asm("loc_65D71DF: pop %esi;");
    asm("loc_65D71E0: pop %ebx;");
    asm("loc_65D71E1: pop %ebp;");
    asm("loc_65D71E2: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D71E3() // ?_GetRangeOfTrysToCheck@@YAPBU_s_TryBlockMapEntry@@PBU_s_FuncInfo@@HHPAI1@Z
{
    __DEBUG_ASM(65D71E3);
    // chunk 0x65D71E3 _sub_65D71E3
    asm("loc_65D71E3: push %ebp;");
    asm("loc_65D71E4: mov %esp,%ebp;");
    asm("loc_65D71E6: push %ecx;");
    asm("loc_65D71E7: push %ebx;");
    asm("loc_65D71E8: push %esi;");
    asm("loc_65D71E9: cmpl $0,0xC(%ebp);");
    asm("loc_65D71ED: push %edi;");
    asm("loc_65D71EE: mov 8(%ebp),%edi;");
    asm("loc_65D71F1: mov 0xC(%edi),%esi;");
    asm("loc_65D71F4: mov 0x10(%edi),%ebx;");
    asm("loc_65D71F7: mov %esi,%eax;");
    asm("loc_65D71F9: mov %esi,8(%ebp);");
    asm("loc_65D71FC: mov %eax,-4(%ebp);");
    asm("loc_65D71FF: jl loc_65D723A;");
    asm("loc_65D7201: cmp $0xFFFFFFFF,%esi;");
    asm("loc_65D7204: jne loc_65D720B;");
    asm("loc_65D7206: call _sub_65D90C9;");
    asm("loc_65D720B: mov 0x10(%ebp),%ecx;");
    asm("loc_65D720E: dec %esi;");
    asm("loc_65D720F: lea (%esi,%esi,4),%eax;");
    asm("loc_65D7212: cmp %ecx,4(%ebx,%eax,4);");
    asm("loc_65D7216: lea (%ebx,%eax,4),%eax;");
    asm("loc_65D7219: jge loc_65D7220;");
    asm("loc_65D721B: cmp 8(%eax),%ecx;");
    asm("loc_65D721E: jle loc_65D7225;");
    asm("loc_65D7220: cmp $0xFFFFFFFF,%esi;");
    asm("loc_65D7223: jne loc_65D7231;");
    asm("loc_65D7225: mov 8(%ebp),%eax;");
    asm("loc_65D7228: decl 0xC(%ebp);");
    asm("loc_65D722B: mov %eax,-4(%ebp);");
    asm("loc_65D722E: mov %esi,8(%ebp);");
    asm("loc_65D7231: cmpl $0,0xC(%ebp);");
    asm("loc_65D7235: jge loc_65D7201;");
    asm("loc_65D7237: mov -4(%ebp),%eax;");
    asm("loc_65D723A: mov 0x14(%ebp),%ecx;");
    asm("loc_65D723D: inc %esi;");
    asm("loc_65D723E: mov %esi,(%ecx);");
    asm("loc_65D7240: mov 0x18(%ebp),%ecx;");
    asm("loc_65D7243: mov %eax,(%ecx);");
    asm("loc_65D7245: cmp 0xC(%edi),%eax;");
    asm("loc_65D7248: ja loc_65D724E;");
    asm("loc_65D724A: cmp %eax,%esi;");
    asm("loc_65D724C: jbe loc_65D7253;");
    asm("loc_65D724E: call _sub_65D90C9;");
    asm("loc_65D7253: lea (%esi,%esi,4),%eax;");
    asm("loc_65D7256: pop %edi;");
    asm("loc_65D7257: pop %esi;");
    asm("loc_65D7258: lea (%ebx,%eax,4),%eax;");
    asm("loc_65D725B: pop %ebx;");
    asm("loc_65D725C: leave;");
    asm("loc_65D725D: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D7260() // __global_unwind2
{
    __DEBUG_ASM(65D7260);
    // chunk 0x65D7260 _sub_65D7260
    asm("loc_65D7260: push %ebp;");
    asm("loc_65D7261: mov %esp,%ebp;");
    asm("loc_65D7263: push %ebx;");
    asm("loc_65D7264: push %esi;");
    asm("loc_65D7265: push %edi;");
    asm("loc_65D7266: push %ebp;");
    asm("loc_65D7267: push $0;");
    asm("loc_65D7269: push $0;");
    asm("loc_65D726B: push $loc_65D7278;");
    asm("loc_65D7270: pushl 8(%ebp);");
    asm("loc_65D7273: call _sub_65DFE1E;");
    asm("loc_65D7278: pop %ebp;");
    asm("loc_65D7279: pop %edi;");
    asm("loc_65D727A: pop %esi;");
    asm("loc_65D727B: pop %ebx;");
    asm("loc_65D727C: mov %ebp,%esp;");
    asm("loc_65D727E: pop %ebp;");
    asm("loc_65D727F: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D7280() // __unwind_handler
{
    __DEBUG_ASM(65D7280);
    // chunk 0x65D7280 _sub_65D7280
    asm("loc_65D7280: mov 4(%esp),%ecx;");
    asm("loc_65D7284: testl $6,4(%ecx);");
    asm("loc_65D728B: mov $1,%eax;");
    asm("loc_65D7290: je loc_65D72A1;");
    asm("loc_65D7292: mov 8(%esp),%eax;");
    asm("loc_65D7296: mov 0x10(%esp),%edx;");
    asm("loc_65D729A: mov %eax,(%edx);");
    asm("loc_65D729C: mov $3,%eax;");
    asm("loc_65D72A1: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D72A2() // __local_unwind2
{
    __DEBUG_ASM(65D72A2);
    // chunk 0x65D72A2 _sub_65D72A2
    asm("loc_65D72A2: push %ebx;");
    asm("loc_65D72A3: push %esi;");
    asm("loc_65D72A4: push %edi;");
    asm("loc_65D72A5: mov 0x10(%esp),%eax;");
    asm("loc_65D72A9: push %eax;");
    asm("loc_65D72AA: push $0xFFFFFFFE;");
    asm("loc_65D72AC: push $_sub_65D7280;");
    asm("loc_65D72B1: pushl %fs:0;");
    asm("loc_65D72B8: mov %esp,%fs:0;");
    asm("loc_65D72BF: mov 0x20(%esp),%eax;");
    asm("loc_65D72C3: mov 8(%eax),%ebx;");
    asm("loc_65D72C6: mov 0xC(%eax),%esi;");
    asm("loc_65D72C9: cmp $0xFFFFFFFF,%esi;");
    asm("loc_65D72CC: je loc_65D72FC;");
    asm("loc_65D72CE: cmp 0x24(%esp),%esi;");
    asm("loc_65D72D2: je loc_65D72FC;");
    asm("loc_65D72D4: lea (%esi,%esi,2),%esi;");
    asm("loc_65D72D7: mov (%ebx,%esi,4),%ecx;");
    asm("loc_65D72DA: mov %ecx,8(%esp);");
    asm("loc_65D72DE: mov %ecx,0xC(%eax);");
    asm("loc_65D72E1: cmpl $0,4(%ebx,%esi,4);");
    asm("loc_65D72E6: jne loc_65D72FA;");
    asm("loc_65D72E8: push $0x101;");
    asm("loc_65D72ED: mov 8(%ebx,%esi,4),%eax;");
    asm("loc_65D72F1: call _sub_65D7336;");
    asm("loc_65D72F6: calll *8(%ebx,%esi,4);");
    asm("loc_65D72FA: jmp loc_65D72BF;");
    asm("loc_65D72FC: popl %fs:0;");
    asm("loc_65D7303: add $0xC,%esp;");
    asm("loc_65D7306: pop %edi;");
    asm("loc_65D7307: pop %esi;");
    asm("loc_65D7308: pop %ebx;");
    asm("loc_65D7309: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D730A() // __abnormal_termination
{
    __DEBUG_ASM(65D730A);
    // chunk 0x65D730A _sub_65D730A
    asm("loc_65D730A: xor %eax,%eax;");
    asm("loc_65D730C: mov %fs:0,%ecx;");
    asm("loc_65D7313: cmpl $_sub_65D7280,4(%ecx);");
    asm("loc_65D731A: jne loc_65D732C;");
    asm("loc_65D731C: mov 0xC(%ecx),%edx;");
    asm("loc_65D731F: mov 0xC(%edx),%edx;");
    asm("loc_65D7322: cmp %edx,8(%ecx);");
    asm("loc_65D7325: jne loc_65D732C;");
    asm("loc_65D7327: mov $1,%eax;");
    asm("loc_65D732C: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D7336() // __NLG_Notify
{
    __DEBUG_ASM(65D7336);
    // chunk 0x65D7336 _sub_65D7336
    asm("loc_65D7336: push %ebx;");
    asm("loc_65D7337: push %ecx;");
    asm("loc_65D7338: mov $_data_65E33E8,%ebx;");
    asm("loc_65D733D: mov 8(%ebp),%ecx;");
    asm("loc_65D7340: mov %ecx,8(%ebx);");
    asm("loc_65D7343: mov %eax,4(%ebx);");
    asm("loc_65D7346: mov %ebp,0xC(%ebx);");
    asm("loc_65D7349: pop %ecx;");
    asm("loc_65D734A: pop %ebx;");
    asm("loc_65D734B: ret $4;");
    // chunk 0x65D732D _sub_65D732D
    asm("loc_65D732D: push %ebx;");
    asm("loc_65D732E: push %ecx;");
    asm("loc_65D732F: mov $_data_65E33E8,%ebx;");
    asm("loc_65D7334: jmp loc_65D7340;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D734E() // _sprintf
{
    __DEBUG_ASM(65D734E);
    // chunk 0x65D734E _sub_65D734E
    asm("loc_65D734E: push %ebp;");
    asm("loc_65D734F: mov %esp,%ebp;");
    asm("loc_65D7351: sub $0x20,%esp;");
    asm("loc_65D7354: mov 8(%ebp),%eax;");
    asm("loc_65D7357: push %esi;");
    asm("loc_65D7358: mov %eax,-0x18(%ebp);");
    asm("loc_65D735B: mov %eax,-0x20(%ebp);");
    asm("loc_65D735E: lea 0x10(%ebp),%eax;");
    asm("loc_65D7361: movl $0x42,-0x14(%ebp);");
    asm("loc_65D7368: push %eax;");
    asm("loc_65D7369: lea -0x20(%ebp),%eax;");
    asm("loc_65D736C: pushl 0xC(%ebp);");
    asm("loc_65D736F: movl $0x7FFFFFFF,-0x1C(%ebp);");
    asm("loc_65D7376: push %eax;");
    asm("loc_65D7377: call _sub_65D9237;");
    asm("loc_65D737C: add $0xC,%esp;");
    asm("loc_65D737F: decl -0x1C(%ebp);");
    asm("loc_65D7382: mov %eax,%esi;");
    asm("loc_65D7384: js loc_65D738E;");
    asm("loc_65D7386: mov -0x20(%ebp),%eax;");
    asm("loc_65D7389: andb $0,(%eax);");
    asm("loc_65D738C: jmp loc_65D739B;");
    asm("loc_65D738E: lea -0x20(%ebp),%eax;");
    asm("loc_65D7391: push %eax;");
    asm("loc_65D7392: push $0;");
    asm("loc_65D7394: call _sub_65D911F;");
    asm("loc_65D7399: pop %ecx;");
    asm("loc_65D739A: pop %ecx;");
    asm("loc_65D739B: mov %esi,%eax;");
    asm("loc_65D739D: pop %esi;");
    asm("loc_65D739E: leave;");
    asm("loc_65D739F: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D76D5() // __onexit
{
    __DEBUG_ASM(65D76D5);
    asm("int3;"); // not exported
    asm("mov $0xBEEFBEEF, %eax;");
    asm("mov (%eax), %eax;");
}
_naked _weak void _sub_65D7753() // _atexit
{
    __DEBUG_ASM(65D7753);
    // chunk 0x65D7753 _sub_65D7753
    asm("loc_65D7753: pushl 4(%esp);");
    asm("loc_65D7757: call _sub_65D76D5;");
    asm("loc_65D775C: neg %eax;");
    asm("loc_65D775E: sbb %eax,%eax;");
    asm("loc_65D7760: pop %ecx;");
    asm("loc_65D7761: neg %eax;");
    asm("loc_65D7763: dec %eax;");
    asm("loc_65D7764: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D7765() // ___onexitinit
{
    __DEBUG_ASM(65D7765);
    // chunk 0x65D7765 _sub_65D7765
    asm("loc_65D7765: push $0x80;");
    asm("loc_65D776A: call _sub_65D8535;");
    asm("loc_65D776F: test %eax,%eax;");
    asm("loc_65D7771: pop %ecx;");
    asm("loc_65D7772: mov %eax,_data_65E7A50;");
    asm("loc_65D7777: jne loc_65D7786;");
    asm("loc_65D7779: push $0x18;");
    asm("loc_65D777B: call _sub_65D7EF0;");
    asm("loc_65D7780: mov _data_65E7A50,%eax;");
    asm("loc_65D7785: pop %ecx;");
    asm("loc_65D7786: andl $0,(%eax);");
    asm("loc_65D7789: mov _data_65E7A50,%eax;");
    asm("loc_65D778E: mov %eax,_data_65E7A4C;");
    asm("loc_65D7793: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D77A0() // _memchr
{
    __DEBUG_ASM(65D77A0);
    // chunk 0x65D77A0 _sub_65D77A0
    asm("loc_65D77A0: mov 0xC(%esp),%eax;");
    asm("loc_65D77A4: push %ebx;");
    asm("loc_65D77A5: test %eax,%eax;");
    asm("loc_65D77A7: je loc_65D77F3;");
    asm("loc_65D77A9: mov 8(%esp),%edx;");
    asm("loc_65D77AD: xor %ebx,%ebx;");
    asm("loc_65D77AF: mov 0xC(%esp),%bl;");
    asm("loc_65D77B3: test $3,%edx;");
    asm("loc_65D77B9: je loc_65D77CD;");
    asm("loc_65D77BB: mov (%edx),%cl;");
    asm("loc_65D77BD: inc %edx;");
    asm("loc_65D77BE: xor %bl,%cl;");
    asm("loc_65D77C0: je loc_65D782E;");
    asm("loc_65D77C2: dec %eax;");
    asm("loc_65D77C3: je loc_65D77F3;");
    asm("loc_65D77C5: test $3,%edx;");
    asm("loc_65D77CB: jne loc_65D77BB;");
    asm("loc_65D77CD: sub $4,%eax;");
    asm("loc_65D77D0: jb loc_65D77E4;");
    asm("loc_65D77D2: push %edi;");
    asm("loc_65D77D3: mov %ebx,%edi;");
    asm("loc_65D77D5: shl $8,%ebx;");
    asm("loc_65D77D8: add %edi,%ebx;");
    asm("loc_65D77DA: mov %ebx,%edi;");
    asm("loc_65D77DC: shl $0x10,%ebx;");
    asm("loc_65D77DF: add %edi,%ebx;");
    asm("loc_65D77E1: jmp loc_65D77FA;");
    asm("loc_65D77E3: pop %edi;");
    asm("loc_65D77E4: add $4,%eax;");
    asm("loc_65D77E7: je loc_65D77F3;");
    asm("loc_65D77E9: mov (%edx),%cl;");
    asm("loc_65D77EB: inc %edx;");
    asm("loc_65D77EC: xor %bl,%cl;");
    asm("loc_65D77EE: je loc_65D782E;");
    asm("loc_65D77F0: dec %eax;");
    asm("loc_65D77F1: jne loc_65D77E9;");
    asm("loc_65D77F3: pop %ebx;");
    asm("loc_65D77F4: ret;");
    asm("loc_65D77F5: sub $4,%eax;");
    asm("loc_65D77F8: jb loc_65D77E3;");
    asm("loc_65D77FA: mov (%edx),%ecx;");
    asm("loc_65D77FC: xor %ebx,%ecx;");
    asm("loc_65D77FE: mov $0x7EFEFEFF,%edi;");
    asm("loc_65D7803: add %ecx,%edi;");
    asm("loc_65D7805: xor $0xFFFFFFFF,%ecx;");
    asm("loc_65D7808: xor %edi,%ecx;");
    asm("loc_65D780A: add $4,%edx;");
    asm("loc_65D780D: and $0x81010100,%ecx;");
    asm("loc_65D7813: je loc_65D77F5;");
    asm("loc_65D7815: mov -4(%edx),%ecx;");
    asm("loc_65D7818: xor %bl,%cl;");
    asm("loc_65D781A: je loc_65D783F;");
    asm("loc_65D781C: xor %bl,%ch;");
    asm("loc_65D781E: je loc_65D7839;");
    asm("loc_65D7820: shr $0x10,%ecx;");
    asm("loc_65D7823: xor %bl,%cl;");
    asm("loc_65D7825: je loc_65D7833;");
    asm("loc_65D7827: xor %bl,%ch;");
    asm("loc_65D7829: je loc_65D782D;");
    asm("loc_65D782B: jmp loc_65D77F5;");
    asm("loc_65D782D: pop %edi;");
    asm("loc_65D782E: lea -1(%edx),%eax;");
    asm("loc_65D7831: pop %ebx;");
    asm("loc_65D7832: ret;");
    asm("loc_65D7833: lea -2(%edx),%eax;");
    asm("loc_65D7836: pop %edi;");
    asm("loc_65D7837: pop %ebx;");
    asm("loc_65D7838: ret;");
    asm("loc_65D7839: lea -3(%edx),%eax;");
    asm("loc_65D783C: pop %edi;");
    asm("loc_65D783D: pop %ebx;");
    asm("loc_65D783E: ret;");
    asm("loc_65D783F: lea -4(%edx),%eax;");
    asm("loc_65D7842: pop %edi;");
    asm("loc_65D7843: pop %ebx;");
    asm("loc_65D7844: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D7845() // _sscanf
{
    __DEBUG_ASM(65D7845);
    // chunk 0x65D7845 _sub_65D7845
    asm("loc_65D7845: push %ebp;");
    asm("loc_65D7846: mov %esp,%ebp;");
    asm("loc_65D7848: sub $0x20,%esp;");
    asm("loc_65D784B: mov 8(%ebp),%eax;");
    asm("loc_65D784E: movl $0x49,-0x14(%ebp);");
    asm("loc_65D7855: push %eax;");
    asm("loc_65D7856: mov %eax,-0x18(%ebp);");
    asm("loc_65D7859: mov %eax,-0x20(%ebp);");
    asm("loc_65D785C: call _sub_65D8120;");
    asm("loc_65D7861: mov %eax,-0x1C(%ebp);");
    asm("loc_65D7864: lea 0x10(%ebp),%eax;");
    asm("loc_65D7867: push %eax;");
    asm("loc_65D7868: lea -0x20(%ebp),%eax;");
    asm("loc_65D786B: pushl 0xC(%ebp);");
    asm("loc_65D786E: push %eax;");
    asm("loc_65D786F: call _sub_65D9F75;");
    asm("loc_65D7874: add $0x10,%esp;");
    asm("loc_65D7877: leave;");
    asm("loc_65D7878: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D7880() // _strncpy
{
    __DEBUG_ASM(65D7880);
    // chunk 0x65D7880 _sub_65D7880
    asm("loc_65D7880: mov 0xC(%esp),%ecx;");
    asm("loc_65D7884: push %edi;");
    asm("loc_65D7885: test %ecx,%ecx;");
    asm("loc_65D7887: je loc_65D7903;");
    asm("loc_65D7889: push %esi;");
    asm("loc_65D788A: push %ebx;");
    asm("loc_65D788B: mov %ecx,%ebx;");
    asm("loc_65D788D: mov 0x14(%esp),%esi;");
    asm("loc_65D7891: test $3,%esi;");
    asm("loc_65D7897: mov 0x10(%esp),%edi;");
    asm("loc_65D789B: jne loc_65D78A4;");
    asm("loc_65D789D: shr $2,%ecx;");
    asm("loc_65D78A0: jne loc_65D7911;");
    asm("loc_65D78A2: jmp loc_65D78C5;");
    asm("loc_65D78A4: mov (%esi),%al;");
    asm("loc_65D78A6: inc %esi;");
    asm("loc_65D78A7: mov %al,(%edi);");
    asm("loc_65D78A9: inc %edi;");
    asm("loc_65D78AA: dec %ecx;");
    asm("loc_65D78AB: je loc_65D78D2;");
    asm("loc_65D78AD: test %al,%al;");
    asm("loc_65D78AF: je loc_65D78DA;");
    asm("loc_65D78B1: test $3,%esi;");
    asm("loc_65D78B7: jne loc_65D78A4;");
    asm("loc_65D78B9: mov %ecx,%ebx;");
    asm("loc_65D78BB: shr $2,%ecx;");
    asm("loc_65D78BE: jne loc_65D7911;");
    asm("loc_65D78C0: and $3,%ebx;");
    asm("loc_65D78C3: je loc_65D78D2;");
    asm("loc_65D78C5: mov (%esi),%al;");
    asm("loc_65D78C7: inc %esi;");
    asm("loc_65D78C8: mov %al,(%edi);");
    asm("loc_65D78CA: inc %edi;");
    asm("loc_65D78CB: test %al,%al;");
    asm("loc_65D78CD: je loc_65D78FE;");
    asm("loc_65D78CF: dec %ebx;");
    asm("loc_65D78D0: jne loc_65D78C5;");
    asm("loc_65D78D2: mov 0x10(%esp),%eax;");
    asm("loc_65D78D6: pop %ebx;");
    asm("loc_65D78D7: pop %esi;");
    asm("loc_65D78D8: pop %edi;");
    asm("loc_65D78D9: ret;");
    asm("loc_65D78DA: test $3,%edi;");
    asm("loc_65D78E0: je loc_65D78F4;");
    asm("loc_65D78E2: mov %al,(%edi);");
    asm("loc_65D78E4: inc %edi;");
    asm("loc_65D78E5: dec %ecx;");
    asm("loc_65D78E6: je loc_65D7976;");
    asm("loc_65D78EC: test $3,%edi;");
    asm("loc_65D78F2: jne loc_65D78E2;");
    asm("loc_65D78F4: mov %ecx,%ebx;");
    asm("loc_65D78F6: shr $2,%ecx;");
    asm("loc_65D78F9: jne loc_65D7967;");
    asm("loc_65D78FB: mov %al,(%edi);");
    asm("loc_65D78FD: inc %edi;");
    asm("loc_65D78FE: dec %ebx;");
    asm("loc_65D78FF: jne loc_65D78FB;");
    asm("loc_65D7901: pop %ebx;");
    asm("loc_65D7902: pop %esi;");
    asm("loc_65D7903: mov 8(%esp),%eax;");
    asm("loc_65D7907: pop %edi;");
    asm("loc_65D7908: ret;");
    asm("loc_65D7909: mov %edx,(%edi);");
    asm("loc_65D790B: add $4,%edi;");
    asm("loc_65D790E: dec %ecx;");
    asm("loc_65D790F: je loc_65D78C0;");
    asm("loc_65D7911: mov $0x7EFEFEFF,%edx;");
    asm("loc_65D7916: mov (%esi),%eax;");
    asm("loc_65D7918: add %eax,%edx;");
    asm("loc_65D791A: xor $0xFFFFFFFF,%eax;");
    asm("loc_65D791D: xor %edx,%eax;");
    asm("loc_65D791F: mov (%esi),%edx;");
    asm("loc_65D7921: add $4,%esi;");
    asm("loc_65D7924: test $0x81010100,%eax;");
    asm("loc_65D7929: je loc_65D7909;");
    asm("loc_65D792B: test %dl,%dl;");
    asm("loc_65D792D: je loc_65D795B;");
    asm("loc_65D792F: test %dh,%dh;");
    asm("loc_65D7931: je loc_65D7951;");
    asm("loc_65D7933: test $0xFF0000,%edx;");
    asm("loc_65D7939: je loc_65D7947;");
    asm("loc_65D793B: test $0xFF000000,%edx;");
    asm("loc_65D7941: jne loc_65D7909;");
    asm("loc_65D7943: mov %edx,(%edi);");
    asm("loc_65D7945: jmp loc_65D795F;");
    asm("loc_65D7947: and $0xFFFF,%edx;");
    asm("loc_65D794D: mov %edx,(%edi);");
    asm("loc_65D794F: jmp loc_65D795F;");
    asm("loc_65D7951: and $0xFF,%edx;");
    asm("loc_65D7957: mov %edx,(%edi);");
    asm("loc_65D7959: jmp loc_65D795F;");
    asm("loc_65D795B: xor %edx,%edx;");
    asm("loc_65D795D: mov %edx,(%edi);");
    asm("loc_65D795F: add $4,%edi;");
    asm("loc_65D7962: xor %eax,%eax;");
    asm("loc_65D7964: dec %ecx;");
    asm("loc_65D7965: je loc_65D7971;");
    asm("loc_65D7967: xor %eax,%eax;");
    asm("loc_65D7969: mov %eax,(%edi);");
    asm("loc_65D796B: add $4,%edi;");
    asm("loc_65D796E: dec %ecx;");
    asm("loc_65D796F: jne loc_65D7969;");
    asm("loc_65D7971: and $3,%ebx;");
    asm("loc_65D7974: jne loc_65D78FB;");
    asm("loc_65D7976: mov 0x10(%esp),%eax;");
    asm("loc_65D797A: pop %ebx;");
    asm("loc_65D797B: pop %esi;");
    asm("loc_65D797C: pop %edi;");
    asm("loc_65D797D: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D7980() // _found_bx
{
    __DEBUG_ASM(65D7980);
    // chunk 0x65D7980 _sub_65D7980
    asm("loc_65D7980: lea -1(%edx),%eax;");
    asm("loc_65D7983: pop %ebx;");
    asm("loc_65D7984: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D7990() // _strchr
{
    __DEBUG_ASM(65D7990);
    // chunk 0x65D7990 _sub_65D7990
    asm("loc_65D7990: xor %eax,%eax;");
    asm("loc_65D7992: mov 8(%esp),%al;");
    asm("loc_65D7996: push %ebx;");
    asm("loc_65D7997: mov %eax,%ebx;");
    asm("loc_65D7999: shl $8,%eax;");
    asm("loc_65D799C: mov 8(%esp),%edx;");
    asm("loc_65D79A0: test $3,%edx;");
    asm("loc_65D79A6: je loc_65D79BB;");
    asm("loc_65D79A8: mov (%edx),%cl;");
    asm("loc_65D79AA: inc %edx;");
    asm("loc_65D79AB: cmp %bl,%cl;");
    asm("loc_65D79AD: je _sub_65D7980;");
    asm("loc_65D79AF: test %cl,%cl;");
    asm("loc_65D79B1: je loc_65D7A04;");
    asm("loc_65D79B3: test $3,%edx;");
    asm("loc_65D79B9: jne loc_65D79A8;");
    asm("loc_65D79BB: or %eax,%ebx;");
    asm("loc_65D79BD: push %edi;");
    asm("loc_65D79BE: mov %ebx,%eax;");
    asm("loc_65D79C0: shl $0x10,%ebx;");
    asm("loc_65D79C3: push %esi;");
    asm("loc_65D79C4: or %eax,%ebx;");
    asm("loc_65D79C6: mov (%edx),%ecx;");
    asm("loc_65D79C8: mov $0x7EFEFEFF,%edi;");
    asm("loc_65D79CD: mov %ecx,%eax;");
    asm("loc_65D79CF: mov %edi,%esi;");
    asm("loc_65D79D1: xor %ebx,%ecx;");
    asm("loc_65D79D3: add %eax,%esi;");
    asm("loc_65D79D5: add %ecx,%edi;");
    asm("loc_65D79D7: xor $0xFFFFFFFF,%ecx;");
    asm("loc_65D79DA: xor $0xFFFFFFFF,%eax;");
    asm("loc_65D79DD: xor %edi,%ecx;");
    asm("loc_65D79DF: xor %esi,%eax;");
    asm("loc_65D79E1: add $4,%edx;");
    asm("loc_65D79E4: and $0x81010100,%ecx;");
    asm("loc_65D79EA: jne loc_65D7A08;");
    asm("loc_65D79EC: and $0x81010100,%eax;");
    asm("loc_65D79F1: je loc_65D79C6;");
    asm("loc_65D79F3: and $0x1010100,%eax;");
    asm("loc_65D79F8: jne loc_65D7A02;");
    asm("loc_65D79FA: and $0x80000000,%esi;");
    asm("loc_65D7A00: jne loc_65D79C6;");
    asm("loc_65D7A02: pop %esi;");
    asm("loc_65D7A03: pop %edi;");
    asm("loc_65D7A04: pop %ebx;");
    asm("loc_65D7A05: xor %eax,%eax;");
    asm("loc_65D7A07: ret;");
    asm("loc_65D7A08: mov -4(%edx),%eax;");
    asm("loc_65D7A0B: cmp %bl,%al;");
    asm("loc_65D7A0D: je loc_65D7A45;");
    asm("loc_65D7A0F: test %al,%al;");
    asm("loc_65D7A11: je loc_65D7A02;");
    asm("loc_65D7A13: cmp %bl,%ah;");
    asm("loc_65D7A15: je loc_65D7A3E;");
    asm("loc_65D7A17: test %ah,%ah;");
    asm("loc_65D7A19: je loc_65D7A02;");
    asm("loc_65D7A1B: shr $0x10,%eax;");
    asm("loc_65D7A1E: cmp %bl,%al;");
    asm("loc_65D7A20: je loc_65D7A37;");
    asm("loc_65D7A22: test %al,%al;");
    asm("loc_65D7A24: je loc_65D7A02;");
    asm("loc_65D7A26: cmp %bl,%ah;");
    asm("loc_65D7A28: je loc_65D7A30;");
    asm("loc_65D7A2A: test %ah,%ah;");
    asm("loc_65D7A2C: je loc_65D7A02;");
    asm("loc_65D7A2E: jmp loc_65D79C6;");
    asm("loc_65D7A30: pop %esi;");
    asm("loc_65D7A31: pop %edi;");
    asm("loc_65D7A32: lea -1(%edx),%eax;");
    asm("loc_65D7A35: pop %ebx;");
    asm("loc_65D7A36: ret;");
    asm("loc_65D7A37: lea -2(%edx),%eax;");
    asm("loc_65D7A3A: pop %esi;");
    asm("loc_65D7A3B: pop %edi;");
    asm("loc_65D7A3C: pop %ebx;");
    asm("loc_65D7A3D: ret;");
    asm("loc_65D7A3E: lea -3(%edx),%eax;");
    asm("loc_65D7A41: pop %esi;");
    asm("loc_65D7A42: pop %edi;");
    asm("loc_65D7A43: pop %ebx;");
    asm("loc_65D7A44: ret;");
    asm("loc_65D7A45: lea -4(%edx),%eax;");
    asm("loc_65D7A48: pop %esi;");
    asm("loc_65D7A49: pop %edi;");
    asm("loc_65D7A4A: pop %ebx;");
    asm("loc_65D7A4B: ret;");
    // chunk 0x65DE4E0 _sub_65DE4E0
    asm("loc_65DE4E0: mov 8(%esp),%ecx;");
    asm("loc_65DE4E4: push %edi;");
    asm("loc_65DE4E5: push %ebx;");
    asm("loc_65DE4E6: push %esi;");
    asm("loc_65DE4E7: mov (%ecx),%dl;");
    asm("loc_65DE4E9: mov 0x10(%esp),%edi;");
    asm("loc_65DE4ED: test %dl,%dl;");
    asm("loc_65DE4EF: je loc_65DE55A;");
    asm("loc_65DE4F1: mov 1(%ecx),%dh;");
    asm("loc_65DE4F4: test %dh,%dh;");
    asm("loc_65DE4F6: je loc_65DE547;");
    asm("loc_65DE4F8: mov %edi,%esi;");
    asm("loc_65DE4FA: mov 0x14(%esp),%ecx;");
    asm("loc_65DE4FE: mov (%edi),%al;");
    asm("loc_65DE500: inc %esi;");
    asm("loc_65DE501: cmp %dl,%al;");
    asm("loc_65DE503: je loc_65DE51A;");
    asm("loc_65DE505: test %al,%al;");
    asm("loc_65DE507: je loc_65DE514;");
    asm("loc_65DE509: mov (%esi),%al;");
    asm("loc_65DE50B: inc %esi;");
    asm("loc_65DE50C: cmp %dl,%al;");
    asm("loc_65DE50E: je loc_65DE51A;");
    asm("loc_65DE510: test %al,%al;");
    asm("loc_65DE512: jne loc_65DE509;");
    asm("loc_65DE514: pop %esi;");
    asm("loc_65DE515: pop %ebx;");
    asm("loc_65DE516: pop %edi;");
    asm("loc_65DE517: xor %eax,%eax;");
    asm("loc_65DE519: ret;");
    asm("loc_65DE51A: mov (%esi),%al;");
    asm("loc_65DE51C: inc %esi;");
    asm("loc_65DE51D: cmp %dh,%al;");
    asm("loc_65DE51F: jne loc_65DE50C;");
    asm("loc_65DE521: lea -1(%esi),%edi;");
    asm("loc_65DE524: mov 2(%ecx),%ah;");
    asm("loc_65DE527: test %ah,%ah;");
    asm("loc_65DE529: je loc_65DE553;");
    asm("loc_65DE52B: mov (%esi),%al;");
    asm("loc_65DE52D: add $2,%esi;");
    asm("loc_65DE530: cmp %ah,%al;");
    asm("loc_65DE532: jne loc_65DE4F8;");
    asm("loc_65DE534: mov 3(%ecx),%al;");
    asm("loc_65DE537: test %al,%al;");
    asm("loc_65DE539: je loc_65DE553;");
    asm("loc_65DE53B: mov -1(%esi),%ah;");
    asm("loc_65DE53E: add $2,%ecx;");
    asm("loc_65DE541: cmp %ah,%al;");
    asm("loc_65DE543: je loc_65DE524;");
    asm("loc_65DE545: jmp loc_65DE4F8;");
    asm("loc_65DE547: xor %eax,%eax;");
    asm("loc_65DE549: pop %esi;");
    asm("loc_65DE54A: pop %ebx;");
    asm("loc_65DE54B: pop %edi;");
    asm("loc_65DE54C: mov %dl,%al;");
    asm("loc_65DE54E: jmp loc_65D7996;");
    asm("loc_65DE553: lea -1(%edi),%eax;");
    asm("loc_65DE556: pop %esi;");
    asm("loc_65DE557: pop %ebx;");
    asm("loc_65DE558: pop %edi;");
    asm("loc_65DE559: ret;");
    asm("loc_65DE55A: mov %edi,%eax;");
    asm("loc_65DE55C: pop %esi;");
    asm("loc_65DE55D: pop %ebx;");
    asm("loc_65DE55E: pop %edi;");
    asm("loc_65DE55F: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D7A4C() // _asctime
{
    __DEBUG_ASM(65D7A4C);
    // chunk 0x65D7A4C _sub_65D7A4C
    asm("loc_65D7A4C: push %ebx;");
    asm("loc_65D7A4D: push %ebp;");
    asm("loc_65D7A4E: push %esi;");
    asm("loc_65D7A4F: push %edi;");
    asm("loc_65D7A50: call _sub_65D8F61;");
    asm("loc_65D7A55: mov %eax,%esi;");
    asm("loc_65D7A57: cmpl $0,0x38(%esi);");
    asm("loc_65D7A5B: jne loc_65D7A71;");
    asm("loc_65D7A5D: push $0x1A;");
    asm("loc_65D7A5F: call _sub_65D8535;");
    asm("loc_65D7A64: mov %eax,0x38(%esi);");
    asm("loc_65D7A67: pop %ecx;");
    asm("loc_65D7A68: test %eax,%eax;");
    asm("loc_65D7A6A: mov $_data_65E60E8,%eax;");
    asm("loc_65D7A6F: je loc_65D7A74;");
    asm("loc_65D7A71: mov 0x38(%esi),%eax;");
    asm("loc_65D7A74: mov 0x14(%esp),%esi;");
    asm("loc_65D7A78: mov %eax,%ebx;");
    asm("loc_65D7A7A: mov 0x18(%esi),%ecx;");
    asm("loc_65D7A7D: lea (%ecx,%ecx,2),%edi;");
    asm("loc_65D7A80: mov 0x10(%esi),%ecx;");
    asm("loc_65D7A83: lea (%ecx,%ecx,2),%ebp;");
    asm("loc_65D7A86: xor %ecx,%ecx;");
    asm("loc_65D7A88: mov _data_65E1758(%edi,%ecx),%dl;");
    asm("loc_65D7A8F: inc %ecx;");
    asm("loc_65D7A90: mov %dl,(%eax);");
    asm("loc_65D7A92: mov _data_65E176F(%ecx,%ebp),%dl;");
    asm("loc_65D7A99: mov %dl,4(%eax);");
    asm("loc_65D7A9C: inc %eax;");
    asm("loc_65D7A9D: cmp $3,%ecx;");
    asm("loc_65D7AA0: jl loc_65D7A88;");
    asm("loc_65D7AA2: movb $0x20,(%eax);");
    asm("loc_65D7AA5: add $4,%eax;");
    asm("loc_65D7AA8: movb $0x20,(%eax);");
    asm("loc_65D7AAB: pushl 0xC(%esi);");
    asm("loc_65D7AAE: inc %eax;");
    asm("loc_65D7AAF: push %eax;");
    asm("loc_65D7AB0: call _sub_65D7B16;");
    asm("loc_65D7AB5: movb $0x20,(%eax);");
    asm("loc_65D7AB8: pushl 8(%esi);");
    asm("loc_65D7ABB: inc %eax;");
    asm("loc_65D7ABC: push %eax;");
    asm("loc_65D7ABD: call _sub_65D7B16;");
    asm("loc_65D7AC2: movb $0x3A,(%eax);");
    asm("loc_65D7AC5: pushl 4(%esi);");
    asm("loc_65D7AC8: inc %eax;");
    asm("loc_65D7AC9: push %eax;");
    asm("loc_65D7ACA: call _sub_65D7B16;");
    asm("loc_65D7ACF: movb $0x3A,(%eax);");
    asm("loc_65D7AD2: pushl (%esi);");
    asm("loc_65D7AD4: inc %eax;");
    asm("loc_65D7AD5: push %eax;");
    asm("loc_65D7AD6: call _sub_65D7B16;");
    asm("loc_65D7ADB: mov %eax,%ecx;");
    asm("loc_65D7ADD: push $0x64;");
    asm("loc_65D7ADF: pop %edi;");
    asm("loc_65D7AE0: movb $0x20,(%ecx);");
    asm("loc_65D7AE3: mov 0x14(%esi),%eax;");
    asm("loc_65D7AE6: cltd;");
    asm("loc_65D7AE7: idiv %edi;");
    asm("loc_65D7AE9: add $0x13,%eax;");
    asm("loc_65D7AEC: inc %ecx;");
    asm("loc_65D7AED: push %eax;");
    asm("loc_65D7AEE: push %ecx;");
    asm("loc_65D7AEF: call _sub_65D7B16;");
    asm("loc_65D7AF4: mov %eax,%ecx;");
    asm("loc_65D7AF6: mov 0x14(%esi),%eax;");
    asm("loc_65D7AF9: push %edi;");
    asm("loc_65D7AFA: cltd;");
    asm("loc_65D7AFB: pop %esi;");
    asm("loc_65D7AFC: idiv %esi;");
    asm("loc_65D7AFE: push %edx;");
    asm("loc_65D7AFF: push %ecx;");
    asm("loc_65D7B00: call _sub_65D7B16;");
    asm("loc_65D7B05: add $0x30,%esp;");
    asm("loc_65D7B08: movb $0xA,(%eax);");
    asm("loc_65D7B0B: andb $0,1(%eax);");
    asm("loc_65D7B0F: mov %ebx,%eax;");
    asm("loc_65D7B11: pop %edi;");
    asm("loc_65D7B12: pop %esi;");
    asm("loc_65D7B13: pop %ebp;");
    asm("loc_65D7B14: pop %ebx;");
    asm("loc_65D7B15: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D7B16() // _store_dt
{
    __DEBUG_ASM(65D7B16);
    // chunk 0x65D7B16 _sub_65D7B16
    asm("loc_65D7B16: mov 8(%esp),%eax;");
    asm("loc_65D7B1A: push %esi;");
    asm("loc_65D7B1B: push $0xA;");
    asm("loc_65D7B1D: cltd;");
    asm("loc_65D7B1E: pop %ecx;");
    asm("loc_65D7B1F: idiv %ecx;");
    asm("loc_65D7B21: mov 8(%esp),%ecx;");
    asm("loc_65D7B25: push $0xA;");
    asm("loc_65D7B27: pop %esi;");
    asm("loc_65D7B28: add $0x30,%al;");
    asm("loc_65D7B2A: mov %al,(%ecx);");
    asm("loc_65D7B2C: mov 0xC(%esp),%eax;");
    asm("loc_65D7B30: cltd;");
    asm("loc_65D7B31: idiv %esi;");
    asm("loc_65D7B33: inc %ecx;");
    asm("loc_65D7B34: pop %esi;");
    asm("loc_65D7B35: lea 1(%ecx),%eax;");
    asm("loc_65D7B38: add $0x30,%dl;");
    asm("loc_65D7B3B: mov %dl,(%ecx);");
    asm("loc_65D7B3D: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D7B3E() // _localtime
{
    __DEBUG_ASM(65D7B3E);
    // chunk 0x65D7B3E _sub_65D7B3E
    asm("loc_65D7B3E: push %ebp;");
    asm("loc_65D7B3F: mov %esp,%ebp;");
    asm("loc_65D7B41: push %esi;");
    asm("loc_65D7B42: mov 8(%ebp),%esi;");
    asm("loc_65D7B45: cmpl $0,(%esi);");
    asm("loc_65D7B48: jge loc_65D7B51;");
    asm("loc_65D7B4A: xor %eax,%eax;");
    asm("loc_65D7B4C: jmp loc_65D7C63;");
    asm("loc_65D7B51: call _sub_65DAA26;");
    asm("loc_65D7B56: mov (%esi),%eax;");
    asm("loc_65D7B58: cmp $0x3F480,%eax;");
    asm("loc_65D7B5D: jle loc_65D7BB7;");
    asm("loc_65D7B5F: cmp $0x7FFC0B7F,%eax;");
    asm("loc_65D7B64: jge loc_65D7BB7;");
    asm("loc_65D7B66: sub _data_65E345C,%eax;");
    asm("loc_65D7B6C: mov %eax,8(%ebp);");
    asm("loc_65D7B6F: lea 8(%ebp),%eax;");
    asm("loc_65D7B72: push %eax;");
    asm("loc_65D7B73: call _sub_65DAFE8;");
    asm("loc_65D7B78: cmpl $0,_data_65E3460;");
    asm("loc_65D7B7F: pop %ecx;");
    asm("loc_65D7B80: mov %eax,%esi;");
    asm("loc_65D7B82: je loc_65D7C61;");
    asm("loc_65D7B88: push %esi;");
    asm("loc_65D7B89: call _sub_65DACDB;");
    asm("loc_65D7B8E: test %eax,%eax;");
    asm("loc_65D7B90: pop %ecx;");
    asm("loc_65D7B91: je loc_65D7C61;");
    asm("loc_65D7B97: mov _data_65E3464,%eax;");
    asm("loc_65D7B9C: sub %eax,8(%ebp);");
    asm("loc_65D7B9F: lea 8(%ebp),%eax;");
    asm("loc_65D7BA2: push %eax;");
    asm("loc_65D7BA3: call _sub_65DAFE8;");
    asm("loc_65D7BA8: mov %eax,%esi;");
    asm("loc_65D7BAA: pop %ecx;");
    asm("loc_65D7BAB: movl $1,0x20(%esi);");
    asm("loc_65D7BB2: jmp loc_65D7C61;");
    asm("loc_65D7BB7: push %esi;");
    asm("loc_65D7BB8: call _sub_65DAFE8;");
    asm("loc_65D7BBD: mov %eax,%esi;");
    asm("loc_65D7BBF: push %esi;");
    asm("loc_65D7BC0: call _sub_65DACDB;");
    asm("loc_65D7BC5: pop %ecx;");
    asm("loc_65D7BC6: test %eax,%eax;");
    asm("loc_65D7BC8: mov (%esi),%eax;");
    asm("loc_65D7BCA: pop %ecx;");
    asm("loc_65D7BCB: je loc_65D7BD3;");
    asm("loc_65D7BCD: sub _data_65E3464,%eax;");
    asm("loc_65D7BD3: sub _data_65E345C,%eax;");
    asm("loc_65D7BD9: push %edi;");
    asm("loc_65D7BDA: push $0x3C;");
    asm("loc_65D7BDC: mov %eax,8(%ebp);");
    asm("loc_65D7BDF: pop %ecx;");
    asm("loc_65D7BE0: cltd;");
    asm("loc_65D7BE1: mov %ecx,%edi;");
    asm("loc_65D7BE3: idiv %edi;");
    asm("loc_65D7BE5: test %edx,%edx;");
    asm("loc_65D7BE7: mov %edx,(%esi);");
    asm("loc_65D7BE9: jge loc_65D7BF2;");
    asm("loc_65D7BEB: add %ecx,%edx;");
    asm("loc_65D7BED: mov %edx,(%esi);");
    asm("loc_65D7BEF: sub %ecx,8(%ebp);");
    asm("loc_65D7BF2: mov 8(%ebp),%eax;");
    asm("loc_65D7BF5: mov %ecx,%edi;");
    asm("loc_65D7BF7: cltd;");
    asm("loc_65D7BF8: idiv %edi;");
    asm("loc_65D7BFA: add 4(%esi),%eax;");
    asm("loc_65D7BFD: mov %eax,8(%ebp);");
    asm("loc_65D7C00: cltd;");
    asm("loc_65D7C01: idiv %edi;");
    asm("loc_65D7C03: pop %edi;");
    asm("loc_65D7C04: test %edx,%edx;");
    asm("loc_65D7C06: mov %edx,4(%esi);");
    asm("loc_65D7C09: jge loc_65D7C14;");
    asm("loc_65D7C0B: add $0x3C,%edx;");
    asm("loc_65D7C0E: mov %edx,4(%esi);");
    asm("loc_65D7C11: sub %ecx,8(%ebp);");
    asm("loc_65D7C14: mov 8(%ebp),%eax;");
    asm("loc_65D7C17: push $0x18;");
    asm("loc_65D7C19: cltd;");
    asm("loc_65D7C1A: idiv %ecx;");
    asm("loc_65D7C1C: pop %ecx;");
    asm("loc_65D7C1D: add 8(%esi),%eax;");
    asm("loc_65D7C20: mov %eax,8(%ebp);");
    asm("loc_65D7C23: cltd;");
    asm("loc_65D7C24: idiv %ecx;");
    asm("loc_65D7C26: test %edx,%edx;");
    asm("loc_65D7C28: mov %edx,8(%esi);");
    asm("loc_65D7C2B: jge loc_65D7C35;");
    asm("loc_65D7C2D: add %ecx,%edx;");
    asm("loc_65D7C2F: mov %edx,8(%esi);");
    asm("loc_65D7C32: sub %ecx,8(%ebp);");
    asm("loc_65D7C35: mov 8(%ebp),%eax;");
    asm("loc_65D7C38: push $0x18;");
    asm("loc_65D7C3A: cltd;");
    asm("loc_65D7C3B: pop %ecx;");
    asm("loc_65D7C3C: idiv %ecx;");
    asm("loc_65D7C3E: mov %eax,%ecx;");
    asm("loc_65D7C40: test %ecx,%ecx;");
    asm("loc_65D7C42: mov %ecx,8(%ebp);");
    asm("loc_65D7C45: jle loc_65D7C66;");
    asm("loc_65D7C47: mov 0x18(%esi),%eax;");
    asm("loc_65D7C4A: push $7;");
    asm("loc_65D7C4C: add %ecx,%eax;");
    asm("loc_65D7C4E: pop %ecx;");
    asm("loc_65D7C4F: cltd;");
    asm("loc_65D7C50: idiv %ecx;");
    asm("loc_65D7C52: mov %edx,0x18(%esi);");
    asm("loc_65D7C55: mov 8(%ebp),%eax;");
    asm("loc_65D7C58: add %eax,0xC(%esi);");
    asm("loc_65D7C5B: mov 8(%ebp),%eax;");
    asm("loc_65D7C5E: add %eax,0x1C(%esi);");
    asm("loc_65D7C61: mov %esi,%eax;");
    asm("loc_65D7C63: pop %esi;");
    asm("loc_65D7C64: pop %ebp;");
    asm("loc_65D7C65: ret;");
    asm("loc_65D7C66: jge loc_65D7C61;");
    asm("loc_65D7C68: mov 0x18(%esi),%eax;");
    asm("loc_65D7C6B: push $7;");
    asm("loc_65D7C6D: lea 7(%eax,%ecx),%eax;");
    asm("loc_65D7C71: pop %ecx;");
    asm("loc_65D7C72: cltd;");
    asm("loc_65D7C73: idiv %ecx;");
    asm("loc_65D7C75: mov %edx,0x18(%esi);");
    asm("loc_65D7C78: mov 8(%ebp),%eax;");
    asm("loc_65D7C7B: add %eax,0xC(%esi);");
    asm("loc_65D7C7E: mov 0xC(%esi),%eax;");
    asm("loc_65D7C81: test %eax,%eax;");
    asm("loc_65D7C83: jg loc_65D7C5B;");
    asm("loc_65D7C85: add $0x1F,%eax;");
    asm("loc_65D7C88: decl 0x14(%esi);");
    asm("loc_65D7C8B: mov %eax,0xC(%esi);");
    asm("loc_65D7C8E: movl $0x16C,0x1C(%esi);");
    asm("loc_65D7C95: movl $0xB,0x10(%esi);");
    asm("loc_65D7C9C: jmp loc_65D7C61;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D7C9E() // _time
{
    __DEBUG_ASM(65D7C9E);
    // chunk 0x65D7C9E _sub_65D7C9E
    asm("loc_65D7C9E: push %ebp;");
    asm("loc_65D7C9F: mov %esp,%ebp;");
    asm("loc_65D7CA1: sub $0xCC,%esp;");
    asm("loc_65D7CA7: lea -0x10(%ebp),%eax;");
    asm("loc_65D7CAA: push %eax;");
    asm("loc_65D7CAB: calll *_import_65E104C;");
    asm("loc_65D7CB1: lea -0x20(%ebp),%eax;");
    asm("loc_65D7CB4: push %eax;");
    asm("loc_65D7CB5: calll *_import_65E1048;");
    asm("loc_65D7CBB: mov -0x16(%ebp),%ax;");
    asm("loc_65D7CBF: cmp _data_65E611A,%ax;");
    asm("loc_65D7CC6: jne loc_65D7D03;");
    asm("loc_65D7CC8: mov -0x18(%ebp),%ax;");
    asm("loc_65D7CCC: cmp _data_65E6118,%ax;");
    asm("loc_65D7CD3: jne loc_65D7D03;");
    asm("loc_65D7CD5: mov -0x1A(%ebp),%ax;");
    asm("loc_65D7CD9: cmp _data_65E6116,%ax;");
    asm("loc_65D7CE0: jne loc_65D7D03;");
    asm("loc_65D7CE2: mov -0x1E(%ebp),%ax;");
    asm("loc_65D7CE6: cmp _data_65E6112,%ax;");
    asm("loc_65D7CED: jne loc_65D7D03;");
    asm("loc_65D7CEF: mov -0x20(%ebp),%ax;");
    asm("loc_65D7CF3: cmp _data_65E6110,%ax;");
    asm("loc_65D7CFA: jne loc_65D7D03;");
    asm("loc_65D7CFC: mov _data_65E6108,%eax;");
    asm("loc_65D7D01: jmp loc_65D7D48;");
    asm("loc_65D7D03: lea -0xCC(%ebp),%eax;");
    asm("loc_65D7D09: push %eax;");
    asm("loc_65D7D0A: calll *_import_65E1044;");
    asm("loc_65D7D10: cmp $0xFFFFFFFF,%eax;");
    asm("loc_65D7D13: je loc_65D7D30;");
    asm("loc_65D7D15: cmp $2,%eax;");
    asm("loc_65D7D18: jne loc_65D7D2C;");
    asm("loc_65D7D1A: cmpw $0,-0x32(%ebp);");
    asm("loc_65D7D1F: je loc_65D7D2C;");
    asm("loc_65D7D21: cmpl $0,-0x24(%ebp);");
    asm("loc_65D7D25: je loc_65D7D2C;");
    asm("loc_65D7D27: push $1;");
    asm("loc_65D7D29: pop %eax;");
    asm("loc_65D7D2A: jmp loc_65D7D33;");
    asm("loc_65D7D2C: xor %eax,%eax;");
    asm("loc_65D7D2E: jmp loc_65D7D33;");
    asm("loc_65D7D30: or $0xFFFFFFFF,%eax;");
    asm("loc_65D7D33: push %esi;");
    asm("loc_65D7D34: push %edi;");
    asm("loc_65D7D35: lea -0x20(%ebp),%esi;");
    asm("loc_65D7D38: mov $_data_65E6110,%edi;");
    asm("loc_65D7D3D: movsl (%esi),(%edi);");
    asm("loc_65D7D3E: movsl (%esi),(%edi);");
    asm("loc_65D7D3F: movsl (%esi),(%edi);");
    asm("loc_65D7D40: movsl (%esi),(%edi);");
    asm("loc_65D7D41: pop %edi;");
    asm("loc_65D7D42: mov %eax,_data_65E6108;");
    asm("loc_65D7D47: pop %esi;");
    asm("loc_65D7D48: push %eax;");
    asm("loc_65D7D49: movzwl -4(%ebp),%eax;");
    asm("loc_65D7D4D: push %eax;");
    asm("loc_65D7D4E: movzwl -6(%ebp),%eax;");
    asm("loc_65D7D52: push %eax;");
    asm("loc_65D7D53: movzwl -8(%ebp),%eax;");
    asm("loc_65D7D57: push %eax;");
    asm("loc_65D7D58: movzwl -0xA(%ebp),%eax;");
    asm("loc_65D7D5C: push %eax;");
    asm("loc_65D7D5D: movzwl -0xE(%ebp),%eax;");
    asm("loc_65D7D61: push %eax;");
    asm("loc_65D7D62: movzwl -0x10(%ebp),%eax;");
    asm("loc_65D7D66: push %eax;");
    asm("loc_65D7D67: call _sub_65DB0F2;");
    asm("loc_65D7D6C: mov 8(%ebp),%ecx;");
    asm("loc_65D7D6F: add $0x1C,%esp;");
    asm("loc_65D7D72: test %ecx,%ecx;");
    asm("loc_65D7D74: je loc_65D7D78;");
    asm("loc_65D7D76: mov %eax,(%ecx);");
    asm("loc_65D7D78: leave;");
    asm("loc_65D7D79: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D7D7A() // __CRT_INIT@12
{
    __DEBUG_ASM(65D7D7A);
    // chunk 0x65D7D7A _sub_65D7D7A
    asm("loc_65D7D7A: mov 8(%esp),%eax;");
    asm("loc_65D7D7E: cmp $1,%eax;");
    asm("loc_65D7D81: jne loc_65D7E0F;");
    asm("loc_65D7D87: calll *_import_65E1054;");
    asm("loc_65D7D8D: push $1;");
    asm("loc_65D7D8F: mov %eax,_data_65E6138;");
    asm("loc_65D7D94: call _sub_65DB971;");
    asm("loc_65D7D99: test %eax,%eax;");
    asm("loc_65D7D9B: pop %ecx;");
    asm("loc_65D7D9C: je loc_65D7DDA;");
    asm("loc_65D7D9E: mov _data_65E6138,%eax;");
    asm("loc_65D7DA3: xor %ecx,%ecx;");
    asm("loc_65D7DA5: mov _data_65E6138+1,%cl;");
    asm("loc_65D7DAB: and $0xFF,%eax;");
    asm("loc_65D7DB0: shrl $0x10,_data_65E6138;");
    asm("loc_65D7DB7: mov %eax,_data_65E6140;");
    asm("loc_65D7DBC: mov %ecx,_data_65E6144;");
    asm("loc_65D7DC2: shl $8,%eax;");
    asm("loc_65D7DC5: add %ecx,%eax;");
    asm("loc_65D7DC7: mov %eax,_data_65E613C;");
    asm("loc_65D7DCC: call _sub_65D8EDC;");
    asm("loc_65D7DD1: test %eax,%eax;");
    asm("loc_65D7DD3: jne loc_65D7DDE;");
    asm("loc_65D7DD5: call _sub_65DB9CE;");
    asm("loc_65D7DDA: xor %eax,%eax;");
    asm("loc_65D7DDC: jmp loc_65D7E50;");
    asm("loc_65D7DDE: calll *_import_65E1050;");
    asm("loc_65D7DE4: mov %eax,_data_65E7A58;");
    asm("loc_65D7DE9: call _sub_65DB6CA;");
    asm("loc_65D7DEE: mov %eax,_data_65E6124;");
    asm("loc_65D7DF3: call _sub_65DB1B4;");
    asm("loc_65D7DF8: call _sub_65DB47D;");
    asm("loc_65D7DFD: call _sub_65DB3C4;");
    asm("loc_65D7E02: call _sub_65D9A41;");
    asm("loc_65D7E07: incl _data_65E6120;");
    asm("loc_65D7E0D: jmp loc_65D7E4D;");
    asm("loc_65D7E0F: xor %ecx,%ecx;");
    asm("loc_65D7E11: cmp %ecx,%eax;");
    asm("loc_65D7E13: jne loc_65D7E41;");
    asm("loc_65D7E15: cmp %ecx,_data_65E6120;");
    asm("loc_65D7E1B: jle loc_65D7DDA;");
    asm("loc_65D7E1D: decl _data_65E6120;");
    asm("loc_65D7E23: cmp %ecx,_data_65E6170;");
    asm("loc_65D7E29: jne loc_65D7E30;");
    asm("loc_65D7E2B: call _sub_65D9A7F;");
    asm("loc_65D7E30: call _sub_65DB370;");
    asm("loc_65D7E35: call _sub_65D8F30;");
    asm("loc_65D7E3A: call _sub_65DB9CE;");
    asm("loc_65D7E3F: jmp loc_65D7E4D;");
    asm("loc_65D7E41: cmp $3,%eax;");
    asm("loc_65D7E44: jne loc_65D7E4D;");
    asm("loc_65D7E46: push %ecx;");
    asm("loc_65D7E47: call _sub_65D8FC8;");
    asm("loc_65D7E4C: pop %ecx;");
    asm("loc_65D7E4D: push $1;");
    asm("loc_65D7E4F: pop %eax;");
    asm("loc_65D7E50: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D7E53() // _DllEntryPoint
{
    __DEBUG_ASM(65D7E53);
    // chunk 0x65D7E53 _sub_65D7E53
    asm("loc_65D7E53: push %ebp;");
    asm("loc_65D7E54: mov %esp,%ebp;");
    asm("loc_65D7E56: push %ebx;");
    asm("loc_65D7E57: mov 8(%ebp),%ebx;");
    asm("loc_65D7E5A: push %esi;");
    asm("loc_65D7E5B: mov 0xC(%ebp),%esi;");
    asm("loc_65D7E5E: push %edi;");
    asm("loc_65D7E5F: mov 0x10(%ebp),%edi;");
    asm("loc_65D7E62: test %esi,%esi;");
    asm("loc_65D7E64: jne loc_65D7E6F;");
    asm("loc_65D7E66: cmpl $0,_data_65E6120;");
    asm("loc_65D7E6D: jmp loc_65D7E95;");
    asm("loc_65D7E6F: cmp $1,%esi;");
    asm("loc_65D7E72: je loc_65D7E79;");
    asm("loc_65D7E74: cmp $2,%esi;");
    asm("loc_65D7E77: jne loc_65D7E9B;");
    asm("loc_65D7E79: mov _data_65E7A5C,%eax;");
    asm("loc_65D7E7E: test %eax,%eax;");
    asm("loc_65D7E80: je loc_65D7E8B;");
    asm("loc_65D7E82: push %edi;");
    asm("loc_65D7E83: push %esi;");
    asm("loc_65D7E84: push %ebx;");
    asm("loc_65D7E85: call *%eax;");
    asm("loc_65D7E87: test %eax,%eax;");
    asm("loc_65D7E89: je loc_65D7E97;");
    asm("loc_65D7E8B: push %edi;");
    asm("loc_65D7E8C: push %esi;");
    asm("loc_65D7E8D: push %ebx;");
    asm("loc_65D7E8E: call _sub_65D7D7A;");
    asm("loc_65D7E93: test %eax,%eax;");
    asm("loc_65D7E95: jne loc_65D7E9B;");
    asm("loc_65D7E97: xor %eax,%eax;");
    asm("loc_65D7E99: jmp loc_65D7EE9;");
    asm("loc_65D7E9B: push %edi;");
    asm("loc_65D7E9C: push %esi;");
    asm("loc_65D7E9D: push %ebx;");
    asm("loc_65D7E9E: call _sub_65D2350;");
    asm("loc_65D7EA3: cmp $1,%esi;");
    asm("loc_65D7EA6: mov %eax,0xC(%ebp);");
    asm("loc_65D7EA9: jne loc_65D7EB7;");
    asm("loc_65D7EAB: test %eax,%eax;");
    asm("loc_65D7EAD: jne loc_65D7EE6;");
    asm("loc_65D7EAF: push %edi;");
    asm("loc_65D7EB0: push %eax;");
    asm("loc_65D7EB1: push %ebx;");
    asm("loc_65D7EB2: call _sub_65D7D7A;");
    asm("loc_65D7EB7: test %esi,%esi;");
    asm("loc_65D7EB9: je loc_65D7EC0;");
    asm("loc_65D7EBB: cmp $3,%esi;");
    asm("loc_65D7EBE: jne loc_65D7EE6;");
    asm("loc_65D7EC0: push %edi;");
    asm("loc_65D7EC1: push %esi;");
    asm("loc_65D7EC2: push %ebx;");
    asm("loc_65D7EC3: call _sub_65D7D7A;");
    asm("loc_65D7EC8: test %eax,%eax;");
    asm("loc_65D7ECA: jne loc_65D7ECF;");
    asm("loc_65D7ECC: and %eax,0xC(%ebp);");
    asm("loc_65D7ECF: cmpl $0,0xC(%ebp);");
    asm("loc_65D7ED3: je loc_65D7EE6;");
    asm("loc_65D7ED5: mov _data_65E7A5C,%eax;");
    asm("loc_65D7EDA: test %eax,%eax;");
    asm("loc_65D7EDC: je loc_65D7EE6;");
    asm("loc_65D7EDE: push %edi;");
    asm("loc_65D7EDF: push %esi;");
    asm("loc_65D7EE0: push %ebx;");
    asm("loc_65D7EE1: call *%eax;");
    asm("loc_65D7EE3: mov %eax,0xC(%ebp);");
    asm("loc_65D7EE6: mov 0xC(%ebp),%eax;");
    asm("loc_65D7EE9: pop %edi;");
    asm("loc_65D7EEA: pop %esi;");
    asm("loc_65D7EEB: pop %ebx;");
    asm("loc_65D7EEC: pop %ebp;");
    asm("loc_65D7EED: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D7EF0() // __amsg_exit
{
    __DEBUG_ASM(65D7EF0);
    // chunk 0x65D7EF0 _sub_65D7EF0
    asm("loc_65D7EF0: mov _data_65E612C,%eax;");
    asm("loc_65D7EF5: cmp $1,%eax;");
    asm("loc_65D7EF8: je loc_65D7F07;");
    asm("loc_65D7EFA: test %eax,%eax;");
    asm("loc_65D7EFC: jne loc_65D7F0C;");
    asm("loc_65D7EFE: cmpl $1,_data_65E6130;");
    asm("loc_65D7F05: jne loc_65D7F0C;");
    asm("loc_65D7F07: call _sub_65DBA76;");
    asm("loc_65D7F0C: pushl 4(%esp);");
    asm("loc_65D7F10: call _sub_65DBAAF;");
    asm("loc_65D7F15: push $0xFF;");
    asm("loc_65D7F1A: calll *_off_65E3400;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D7F23() // _sub_65D7F23
{
    __DEBUG_ASM(65D7F23);
    // chunk 0x65D7F23 _sub_65D7F23
    asm("loc_65D7F23: push %ebp;");
    asm("loc_65D7F24: mov %esp,%ebp;");
    asm("loc_65D7F26: push $0xFFFFFFFF;");
    asm("loc_65D7F28: push $_data_65E15C0;");
    asm("loc_65D7F2D: push $_sub_65DCF2C;");
    asm("loc_65D7F32: mov %fs:0,%eax;");
    asm("loc_65D7F38: push %eax;");
    asm("loc_65D7F39: mov %esp,%fs:0;");
    asm("loc_65D7F40: sub $0x18,%esp;");
    asm("loc_65D7F43: push %ebx;");
    asm("loc_65D7F44: push %esi;");
    asm("loc_65D7F45: push %edi;");
    asm("loc_65D7F46: mov 8(%ebp),%esi;");
    asm("loc_65D7F49: test %esi,%esi;");
    asm("loc_65D7F4B: je loc_65D7FFD;");
    asm("loc_65D7F51: mov _data_65E7924,%eax;");
    asm("loc_65D7F56: cmp $3,%eax;");
    asm("loc_65D7F59: jne loc_65D7F96;");
    asm("loc_65D7F5B: push $9;");
    asm("loc_65D7F5D: call _sub_65DCEAB;");
    asm("loc_65D7F62: pop %ecx;");
    asm("loc_65D7F63: andl $0,-4(%ebp);");
    asm("loc_65D7F67: push %esi;");
    asm("loc_65D7F68: call _sub_65DBC4A;");
    asm("loc_65D7F6D: pop %ecx;");
    asm("loc_65D7F6E: mov %eax,-0x1C(%ebp);");
    asm("loc_65D7F71: test %eax,%eax;");
    asm("loc_65D7F73: je loc_65D7F7E;");
    asm("loc_65D7F75: push %esi;");
    asm("loc_65D7F76: push %eax;");
    asm("loc_65D7F77: call _sub_65DBC75;");
    asm("loc_65D7F7C: pop %ecx;");
    asm("loc_65D7F7D: pop %ecx;");
    asm("loc_65D7F7E: orl $0xFFFFFFFF,-4(%ebp);");
    asm("loc_65D7F82: call loc_65D7F8D;");
    asm("loc_65D7F87: cmpl $0,-0x1C(%ebp);");
    asm("loc_65D7F8B: jmp loc_65D7FDE;");
    asm("loc_65D7F8D: push $9;");
    asm("loc_65D7F8F: call _sub_65DCF0C;");
    asm("loc_65D7F94: pop %ecx;");
    asm("loc_65D7F95: ret;");
    asm("loc_65D7F96: cmp $2,%eax;");
    asm("loc_65D7F99: jne loc_65D7FEE;");
    asm("loc_65D7F9B: push $9;");
    asm("loc_65D7F9D: call _sub_65DCEAB;");
    asm("loc_65D7FA2: pop %ecx;");
    asm("loc_65D7FA3: movl $1,-4(%ebp);");
    asm("loc_65D7FAA: lea -0x20(%ebp),%eax;");
    asm("loc_65D7FAD: push %eax;");
    asm("loc_65D7FAE: lea -0x28(%ebp),%eax;");
    asm("loc_65D7FB1: push %eax;");
    asm("loc_65D7FB2: push %esi;");
    asm("loc_65D7FB3: call _sub_65DC9A5;");
    asm("loc_65D7FB8: add $0xC,%esp;");
    asm("loc_65D7FBB: mov %eax,-0x24(%ebp);");
    asm("loc_65D7FBE: test %eax,%eax;");
    asm("loc_65D7FC0: je loc_65D7FD1;");
    asm("loc_65D7FC2: push %eax;");
    asm("loc_65D7FC3: pushl -0x20(%ebp);");
    asm("loc_65D7FC6: pushl -0x28(%ebp);");
    asm("loc_65D7FC9: call _sub_65DC9FC;");
    asm("loc_65D7FCE: add $0xC,%esp;");
    asm("loc_65D7FD1: orl $0xFFFFFFFF,-4(%ebp);");
    asm("loc_65D7FD5: call loc_65D7FE5;");
    asm("loc_65D7FDA: cmpl $0,-0x24(%ebp);");
    asm("loc_65D7FDE: jne loc_65D7FFD;");
    asm("loc_65D7FE0: pushl 8(%ebp);");
    asm("loc_65D7FE3: jmp loc_65D7FEF;");
    asm("loc_65D7FE5: push $9;");
    asm("loc_65D7FE7: call _sub_65DCF0C;");
    asm("loc_65D7FEC: pop %ecx;");
    asm("loc_65D7FED: ret;");
    asm("loc_65D7FEE: push %esi;");
    asm("loc_65D7FEF: push $0;");
    asm("loc_65D7FF1: pushl _data_65E7920;");
    asm("loc_65D7FF7: calll *_import_65E1058;");
    asm("loc_65D7FFD: mov -0x10(%ebp),%ecx;");
    asm("loc_65D8000: mov %ecx,%fs:0;");
    asm("loc_65D8007: pop %edi;");
    asm("loc_65D8008: pop %esi;");
    asm("loc_65D8009: pop %ebx;");
    asm("loc_65D800A: leave;");
    asm("loc_65D800B: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D800C() // _sub_65D800C
{
    __DEBUG_ASM(65D800C);
    // chunk 0x65D800C _sub_65D800C
    asm("loc_65D800C: push %esi;");
    asm("loc_65D800D: mov %ecx,%esi;");
    asm("loc_65D800F: call _sub_65D80AF;");
    asm("loc_65D8014: testb $1,8(%esp);");
    asm("loc_65D8019: je loc_65D8022;");
    asm("loc_65D801B: push %esi;");
    asm("loc_65D801C: call _sub_65D6CB8;");
    asm("loc_65D8021: pop %ecx;");
    asm("loc_65D8022: mov %esi,%eax;");
    asm("loc_65D8024: pop %esi;");
    asm("loc_65D8025: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D8028() // ??0exception@@QAE@ABQBD@Z
{
    __DEBUG_ASM(65D8028);
    // chunk 0x65D8028 _sub_65D8028
    asm("loc_65D8028: push %esi;");
    asm("loc_65D8029: push %edi;");
    asm("loc_65D802A: mov 0xC(%esp),%edi;");
    asm("loc_65D802E: mov %ecx,%esi;");
    asm("loc_65D8030: movl $_off_65E15DC,(%esi);");
    asm("loc_65D8036: pushl (%edi);");
    asm("loc_65D8038: call _sub_65D8120;");
    asm("loc_65D803D: inc %eax;");
    asm("loc_65D803E: push %eax;");
    asm("loc_65D803F: call _sub_65D6F71;");
    asm("loc_65D8044: pop %ecx;");
    asm("loc_65D8045: mov %eax,4(%esi);");
    asm("loc_65D8048: test %eax,%eax;");
    asm("loc_65D804A: pop %ecx;");
    asm("loc_65D804B: je loc_65D8057;");
    asm("loc_65D804D: pushl (%edi);");
    asm("loc_65D804F: push %eax;");
    asm("loc_65D8050: call loc_65DD010;");
    asm("loc_65D8055: pop %ecx;");
    asm("loc_65D8056: pop %ecx;");
    asm("loc_65D8057: movl $1,8(%esi);");
    asm("loc_65D805E: mov %esi,%eax;");
    asm("loc_65D8060: pop %edi;");
    asm("loc_65D8061: pop %esi;");
    asm("loc_65D8062: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D8065() // ??0exception@@QAE@ABV0@@Z
{
    __DEBUG_ASM(65D8065);
    // chunk 0x65D8065 _sub_65D8065
    asm("loc_65D8065: push %esi;");
    asm("loc_65D8066: push %edi;");
    asm("loc_65D8067: mov 0xC(%esp),%edi;");
    asm("loc_65D806B: mov %ecx,%esi;");
    asm("loc_65D806D: movl $_off_65E15DC,(%esi);");
    asm("loc_65D8073: mov 8(%edi),%eax;");
    asm("loc_65D8076: test %eax,%eax;");
    asm("loc_65D8078: mov %eax,8(%esi);");
    asm("loc_65D807B: je loc_65D80A2;");
    asm("loc_65D807D: pushl 4(%edi);");
    asm("loc_65D8080: call _sub_65D8120;");
    asm("loc_65D8085: inc %eax;");
    asm("loc_65D8086: push %eax;");
    asm("loc_65D8087: call _sub_65D6F71;");
    asm("loc_65D808C: pop %ecx;");
    asm("loc_65D808D: mov %eax,4(%esi);");
    asm("loc_65D8090: test %eax,%eax;");
    asm("loc_65D8092: pop %ecx;");
    asm("loc_65D8093: je loc_65D80A8;");
    asm("loc_65D8095: pushl 4(%edi);");
    asm("loc_65D8098: push %eax;");
    asm("loc_65D8099: call loc_65DD010;");
    asm("loc_65D809E: pop %ecx;");
    asm("loc_65D809F: pop %ecx;");
    asm("loc_65D80A0: jmp loc_65D80A8;");
    asm("loc_65D80A2: mov 4(%edi),%eax;");
    asm("loc_65D80A5: mov %eax,4(%esi);");
    asm("loc_65D80A8: mov %esi,%eax;");
    asm("loc_65D80AA: pop %edi;");
    asm("loc_65D80AB: pop %esi;");
    asm("loc_65D80AC: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D80AF() // _sub_65D80AF
{
    __DEBUG_ASM(65D80AF);
    // chunk 0x65D80AF _sub_65D80AF
    asm("loc_65D80AF: cmpl $0,8(%ecx);");
    asm("loc_65D80B3: movl $_off_65E15DC,(%ecx);");
    asm("loc_65D80B9: je loc_65D80C4;");
    asm("loc_65D80BB: pushl 4(%ecx);");
    asm("loc_65D80BE: call _sub_65D6CB8;");
    asm("loc_65D80C3: pop %ecx;");
    asm("loc_65D80C4: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D80C5() // ?what@exception@@UBEPBDXZ
{
    __DEBUG_ASM(65D80C5);
    // chunk 0x65D80C5 _sub_65D80C5
    asm("loc_65D80C5: mov 4(%ecx),%eax;");
    asm("loc_65D80C8: test %eax,%eax;");
    asm("loc_65D80CA: jne loc_65D80D1;");
    asm("loc_65D80CC: mov $_data_65E15E4,%eax;");
    asm("loc_65D80D1: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D80D2() // ??1type_info@@UAE@XZ
{
    __DEBUG_ASM(65D80D2);
    // chunk 0x65D80D2 _sub_65D80D2
    asm("loc_65D80D2: push %esi;");
    asm("loc_65D80D3: mov %ecx,%esi;");
    asm("loc_65D80D5: push $0x1B;");
    asm("loc_65D80D7: movl $_off_65E15FC,(%esi);");
    asm("loc_65D80DD: call _sub_65DCEAB;");
    asm("loc_65D80E2: mov 4(%esi),%esi;");
    asm("loc_65D80E5: pop %ecx;");
    asm("loc_65D80E6: test %esi,%esi;");
    asm("loc_65D80E8: je loc_65D80F1;");
    asm("loc_65D80EA: push %esi;");
    asm("loc_65D80EB: call _sub_65D7F23;");
    asm("loc_65D80F0: pop %ecx;");
    asm("loc_65D80F1: push $0x1B;");
    asm("loc_65D80F3: call _sub_65DCF0C;");
    asm("loc_65D80F8: pop %ecx;");
    asm("loc_65D80F9: pop %esi;");
    asm("loc_65D80FA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D80FB() // ??_Gtype_info@@UAEPAXI@Z
{
    __DEBUG_ASM(65D80FB);
    // chunk 0x65D80FB _sub_65D80FB
    asm("loc_65D80FB: push %esi;");
    asm("loc_65D80FC: mov %ecx,%esi;");
    asm("loc_65D80FE: call _sub_65D80D2;");
    asm("loc_65D8103: testb $1,8(%esp);");
    asm("loc_65D8108: je loc_65D8111;");
    asm("loc_65D810A: push %esi;");
    asm("loc_65D810B: call _sub_65D6CB8;");
    asm("loc_65D8110: pop %ecx;");
    asm("loc_65D8111: mov %esi,%eax;");
    asm("loc_65D8113: pop %esi;");
    asm("loc_65D8114: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D8120() // _strlen
{
    __DEBUG_ASM(65D8120);
    // chunk 0x65D8120 _sub_65D8120
    asm("loc_65D8120: mov 4(%esp),%ecx;");
    asm("loc_65D8124: test $3,%ecx;");
    asm("loc_65D812A: je loc_65D8140;");
    asm("loc_65D812C: mov (%ecx),%al;");
    asm("loc_65D812E: inc %ecx;");
    asm("loc_65D812F: test %al,%al;");
    asm("loc_65D8131: je loc_65D8173;");
    asm("loc_65D8133: test $3,%ecx;");
    asm("loc_65D8139: jne loc_65D812C;");
    asm("loc_65D813B: add $0,%eax;");
    asm("loc_65D8140: mov (%ecx),%eax;");
    asm("loc_65D8142: mov $0x7EFEFEFF,%edx;");
    asm("loc_65D8147: add %eax,%edx;");
    asm("loc_65D8149: xor $0xFFFFFFFF,%eax;");
    asm("loc_65D814C: xor %edx,%eax;");
    asm("loc_65D814E: add $4,%ecx;");
    asm("loc_65D8151: test $0x81010100,%eax;");
    asm("loc_65D8156: je loc_65D8140;");
    asm("loc_65D8158: mov -4(%ecx),%eax;");
    asm("loc_65D815B: test %al,%al;");
    asm("loc_65D815D: je loc_65D8191;");
    asm("loc_65D815F: test %ah,%ah;");
    asm("loc_65D8161: je loc_65D8187;");
    asm("loc_65D8163: test $0xFF0000,%eax;");
    asm("loc_65D8168: je loc_65D817D;");
    asm("loc_65D816A: test $0xFF000000,%eax;");
    asm("loc_65D816F: je loc_65D8173;");
    asm("loc_65D8171: jmp loc_65D8140;");
    asm("loc_65D8173: lea -1(%ecx),%eax;");
    asm("loc_65D8176: mov 4(%esp),%ecx;");
    asm("loc_65D817A: sub %ecx,%eax;");
    asm("loc_65D817C: ret;");
    asm("loc_65D817D: lea -2(%ecx),%eax;");
    asm("loc_65D8180: mov 4(%esp),%ecx;");
    asm("loc_65D8184: sub %ecx,%eax;");
    asm("loc_65D8186: ret;");
    asm("loc_65D8187: lea -3(%ecx),%eax;");
    asm("loc_65D818A: mov 4(%esp),%ecx;");
    asm("loc_65D818E: sub %ecx,%eax;");
    asm("loc_65D8190: ret;");
    asm("loc_65D8191: lea -4(%ecx),%eax;");
    asm("loc_65D8194: mov 4(%esp),%ecx;");
    asm("loc_65D8198: sub %ecx,%eax;");
    asm("loc_65D819A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D819C() // __EH_prolog
{
    __DEBUG_ASM(65D819C);
    // chunk 0x65D819C _sub_65D819C
    asm("loc_65D819C: push $0xFFFFFFFF;");
    asm("loc_65D819E: push %eax;");
    asm("loc_65D819F: mov %fs:0,%eax;");
    asm("loc_65D81A5: push %eax;");
    asm("loc_65D81A6: mov 0xC(%esp),%eax;");
    asm("loc_65D81AA: mov %esp,%fs:0;");
    asm("loc_65D81B1: mov %ebp,0xC(%esp);");
    asm("loc_65D81B5: lea 0xC(%esp),%ebp;");
    asm("loc_65D81B9: push %eax;");
    asm("loc_65D81BA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D81BB() // __CxxThrowException@8
{
    __DEBUG_ASM(65D81BB);
    asm("int3;"); // not exported
    asm("mov $0xBEEFBEEF, %eax;");
    asm("mov (%eax), %eax;");
}
_naked _weak void _sub_65D8535() // _malloc
{
    __DEBUG_ASM(65D8535);
    // chunk 0x65D8535 _sub_65D8535
    asm("loc_65D8535: pushl _data_65E63D4;");
    asm("loc_65D853B: pushl 8(%esp);");
    asm("loc_65D853F: call _sub_65D8547;");
    asm("loc_65D8544: pop %ecx;");
    asm("loc_65D8545: pop %ecx;");
    asm("loc_65D8546: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D8547() // __nh_malloc
{
    __DEBUG_ASM(65D8547);
    // chunk 0x65D8547 _sub_65D8547
    asm("loc_65D8547: cmpl $0xFFFFFFE0,4(%esp);");
    asm("loc_65D854C: ja loc_65D8570;");
    asm("loc_65D854E: pushl 4(%esp);");
    asm("loc_65D8552: call _sub_65D8573;");
    asm("loc_65D8557: test %eax,%eax;");
    asm("loc_65D8559: pop %ecx;");
    asm("loc_65D855A: jne loc_65D8572;");
    asm("loc_65D855C: cmp %eax,8(%esp);");
    asm("loc_65D8560: je loc_65D8572;");
    asm("loc_65D8562: pushl 4(%esp);");
    asm("loc_65D8566: call _sub_65DD1E8;");
    asm("loc_65D856B: test %eax,%eax;");
    asm("loc_65D856D: pop %ecx;");
    asm("loc_65D856E: jne loc_65D854E;");
    asm("loc_65D8570: xor %eax,%eax;");
    asm("loc_65D8572: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D8573() // _sub_65D8573
{
    __DEBUG_ASM(65D8573);
    // chunk 0x65D8573 _sub_65D8573
    asm("loc_65D8573: push %ebp;");
    asm("loc_65D8574: mov %esp,%ebp;");
    asm("loc_65D8576: push $0xFFFFFFFF;");
    asm("loc_65D8578: push $_data_65E1620;");
    asm("loc_65D857D: push $_sub_65DCF2C;");
    asm("loc_65D8582: mov %fs:0,%eax;");
    asm("loc_65D8588: push %eax;");
    asm("loc_65D8589: mov %esp,%fs:0;");
    asm("loc_65D8590: sub $0xC,%esp;");
    asm("loc_65D8593: push %ebx;");
    asm("loc_65D8594: push %esi;");
    asm("loc_65D8595: push %edi;");
    asm("loc_65D8596: mov _data_65E7924,%eax;");
    asm("loc_65D859B: cmp $3,%eax;");
    asm("loc_65D859E: jne loc_65D85E3;");
    asm("loc_65D85A0: mov 8(%ebp),%esi;");
    asm("loc_65D85A3: cmp _data_65E791C,%esi;");
    asm("loc_65D85A9: ja loc_65D8642;");
    asm("loc_65D85AF: push $9;");
    asm("loc_65D85B1: call _sub_65DCEAB;");
    asm("loc_65D85B6: pop %ecx;");
    asm("loc_65D85B7: andl $0,-4(%ebp);");
    asm("loc_65D85BB: push %esi;");
    asm("loc_65D85BC: call _sub_65DBF9E;");
    asm("loc_65D85C1: pop %ecx;");
    asm("loc_65D85C2: mov %eax,-0x1C(%ebp);");
    asm("loc_65D85C5: orl $0xFFFFFFFF,-4(%ebp);");
    asm("loc_65D85C9: call loc_65D85DA;");
    asm("loc_65D85CE: mov -0x1C(%ebp),%eax;");
    asm("loc_65D85D1: test %eax,%eax;");
    asm("loc_65D85D3: je loc_65D8642;");
    asm("loc_65D85D5: jmp loc_65D8660;");
    asm("loc_65D85DA: push $9;");
    asm("loc_65D85DC: call _sub_65DCF0C;");
    asm("loc_65D85E1: pop %ecx;");
    asm("loc_65D85E2: ret;");
    asm("loc_65D85E3: cmp $2,%eax;");
    asm("loc_65D85E6: jne loc_65D8642;");
    asm("loc_65D85E8: mov 8(%ebp),%eax;");
    asm("loc_65D85EB: test %eax,%eax;");
    asm("loc_65D85ED: je loc_65D85F7;");
    asm("loc_65D85EF: lea 0xF(%eax),%esi;");
    asm("loc_65D85F2: and $0xFFFFFFF0,%esi;");
    asm("loc_65D85F5: jmp loc_65D85FA;");
    asm("loc_65D85F7: push $0x10;");
    asm("loc_65D85F9: pop %esi;");
    asm("loc_65D85FA: mov %esi,8(%ebp);");
    asm("loc_65D85FD: cmp _data_65E55EC,%esi;");
    asm("loc_65D8603: ja loc_65D8633;");
    asm("loc_65D8605: push $9;");
    asm("loc_65D8607: call _sub_65DCEAB;");
    asm("loc_65D860C: pop %ecx;");
    asm("loc_65D860D: movl $1,-4(%ebp);");
    asm("loc_65D8614: mov %esi,%eax;");
    asm("loc_65D8616: shr $4,%eax;");
    asm("loc_65D8619: push %eax;");
    asm("loc_65D861A: call _sub_65DCA41;");
    asm("loc_65D861F: pop %ecx;");
    asm("loc_65D8620: mov %eax,-0x1C(%ebp);");
    asm("loc_65D8623: orl $0xFFFFFFFF,-4(%ebp);");
    asm("loc_65D8627: call loc_65D8639;");
    asm("loc_65D862C: mov -0x1C(%ebp),%eax;");
    asm("loc_65D862F: test %eax,%eax;");
    asm("loc_65D8631: jne loc_65D8660;");
    asm("loc_65D8633: push %esi;");
    asm("loc_65D8634: jmp loc_65D8652;");
    asm("loc_65D8636: mov 8(%ebp),%esi;");
    asm("loc_65D8639: push $9;");
    asm("loc_65D863B: call _sub_65DCF0C;");
    asm("loc_65D8640: pop %ecx;");
    asm("loc_65D8641: ret;");
    asm("loc_65D8642: mov 8(%ebp),%eax;");
    asm("loc_65D8645: test %eax,%eax;");
    asm("loc_65D8647: jne loc_65D864C;");
    asm("loc_65D8649: push $1;");
    asm("loc_65D864B: pop %eax;");
    asm("loc_65D864C: add $0xF,%eax;");
    asm("loc_65D864F: and $0xF0,%al;");
    asm("loc_65D8651: push %eax;");
    asm("loc_65D8652: push $0;");
    asm("loc_65D8654: pushl _data_65E7920;");
    asm("loc_65D865A: calll *_import_65E1060;");
    asm("loc_65D8660: mov -0x10(%ebp),%ecx;");
    asm("loc_65D8663: mov %ecx,%fs:0;");
    asm("loc_65D866A: pop %edi;");
    asm("loc_65D866B: pop %esi;");
    asm("loc_65D866C: pop %ebx;");
    asm("loc_65D866D: leave;");
    asm("loc_65D866E: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D866F() // ___InternalCxxFrameHandler
{
    __DEBUG_ASM(65D866F);
    // chunk 0x65D866F _sub_65D866F
    asm("loc_65D866F: push %ebp;");
    asm("loc_65D8670: mov %esp,%ebp;");
    asm("loc_65D8672: push %esi;");
    asm("loc_65D8673: mov 0x18(%ebp),%esi;");
    asm("loc_65D8676: push %edi;");
    asm("loc_65D8677: mov $0x19930520,%edi;");
    asm("loc_65D867C: cmp %edi,(%esi);");
    asm("loc_65D867E: je loc_65D8685;");
    asm("loc_65D8680: call _sub_65D90C9;");
    asm("loc_65D8685: mov 8(%ebp),%eax;");
    asm("loc_65D8688: testb $0x66,4(%eax);");
    asm("loc_65D868C: je loc_65D86AD;");
    asm("loc_65D868E: cmpl $0,4(%esi);");
    asm("loc_65D8692: je loc_65D8703;");
    asm("loc_65D8694: cmpl $0,0x1C(%ebp);");
    asm("loc_65D8698: jne loc_65D8703;");
    asm("loc_65D869A: push $0xFFFFFFFF;");
    asm("loc_65D869C: push %esi;");
    asm("loc_65D869D: pushl 0x14(%ebp);");
    asm("loc_65D86A0: pushl 0xC(%ebp);");
    asm("loc_65D86A3: call _sub_65D89C4;");
    asm("loc_65D86A8: add $0x10,%esp;");
    asm("loc_65D86AB: jmp loc_65D8703;");
    asm("loc_65D86AD: cmpl $0,0xC(%esi);");
    asm("loc_65D86B1: je loc_65D8703;");
    asm("loc_65D86B3: cmpl $0xE06D7363,(%eax);");
    asm("loc_65D86B9: jne loc_65D86E7;");
    asm("loc_65D86BB: cmp %edi,0x14(%eax);");
    asm("loc_65D86BE: jbe loc_65D86E7;");
    asm("loc_65D86C0: mov 0x1C(%eax),%ecx;");
    asm("loc_65D86C3: mov 8(%ecx),%ecx;");
    asm("loc_65D86C6: test %ecx,%ecx;");
    asm("loc_65D86C8: je loc_65D86E7;");
    asm("loc_65D86CA: movzbl 0x24(%ebp),%edx;");
    asm("loc_65D86CE: push %edx;");
    asm("loc_65D86CF: pushl 0x20(%ebp);");
    asm("loc_65D86D2: pushl 0x1C(%ebp);");
    asm("loc_65D86D5: push %esi;");
    asm("loc_65D86D6: pushl 0x14(%ebp);");
    asm("loc_65D86D9: pushl 0x10(%ebp);");
    asm("loc_65D86DC: pushl 0xC(%ebp);");
    asm("loc_65D86DF: push %eax;");
    asm("loc_65D86E0: call *%ecx;");
    asm("loc_65D86E2: add $0x20,%esp;");
    asm("loc_65D86E5: jmp loc_65D8706;");
    asm("loc_65D86E7: pushl 0x20(%ebp);");
    asm("loc_65D86EA: pushl 0x1C(%ebp);");
    asm("loc_65D86ED: pushl 0x24(%ebp);");
    asm("loc_65D86F0: push %esi;");
    asm("loc_65D86F1: pushl 0x14(%ebp);");
    asm("loc_65D86F4: pushl 0x10(%ebp);");
    asm("loc_65D86F7: pushl 0xC(%ebp);");
    asm("loc_65D86FA: push %eax;");
    asm("loc_65D86FB: call _sub_65D870A;");
    asm("loc_65D8700: add $0x20,%esp;");
    asm("loc_65D8703: push $1;");
    asm("loc_65D8705: pop %eax;");
    asm("loc_65D8706: pop %edi;");
    asm("loc_65D8707: pop %esi;");
    asm("loc_65D8708: pop %ebp;");
    asm("loc_65D8709: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D870A() // ?FindHandler@@YAXPAUEHExceptionRecord@@PAUEHRegistrationNode@@PAU_CONTEXT@@PAXPBU_s_FuncInfo@@EH1@Z
{
    __DEBUG_ASM(65D870A);
    // chunk 0x65D870A _sub_65D870A
    asm("loc_65D870A: push %ebp;");
    asm("loc_65D870B: mov %esp,%ebp;");
    asm("loc_65D870D: sub $0x18,%esp;");
    asm("loc_65D8710: mov 0xC(%ebp),%eax;");
    asm("loc_65D8713: andb $0,-0x14(%ebp);");
    asm("loc_65D8717: mov 8(%eax),%eax;");
    asm("loc_65D871A: cmp $0xFFFFFFFF,%eax;");
    asm("loc_65D871D: mov %eax,-0x10(%ebp);");
    asm("loc_65D8720: jl loc_65D872A;");
    asm("loc_65D8722: mov 0x18(%ebp),%ecx;");
    asm("loc_65D8725: cmp 4(%ecx),%eax;");
    asm("loc_65D8728: jl loc_65D872F;");
    asm("loc_65D872A: call _sub_65D90C9;");
    asm("loc_65D872F: push %ebx;");
    asm("loc_65D8730: push %esi;");
    asm("loc_65D8731: mov 8(%ebp),%esi;");
    asm("loc_65D8734: mov $0xE06D7363,%ebx;");
    asm("loc_65D8739: push %edi;");
    asm("loc_65D873A: mov $0x19930520,%edi;");
    asm("loc_65D873F: cmp %ebx,(%esi);");
    asm("loc_65D8741: jne loc_65D8892;");
    asm("loc_65D8747: cmpl $3,0x10(%esi);");
    asm("loc_65D874B: jne loc_65D87AF;");
    asm("loc_65D874D: cmp %edi,0x14(%esi);");
    asm("loc_65D8750: jne loc_65D87AF;");
    asm("loc_65D8752: cmpl $0,0x1C(%esi);");
    asm("loc_65D8756: jne loc_65D87AF;");
    asm("loc_65D8758: call _sub_65D8F61;");
    asm("loc_65D875D: cmpl $0,0x6C(%eax);");
    asm("loc_65D8761: je loc_65D888D;");
    asm("loc_65D8767: call _sub_65D8F61;");
    asm("loc_65D876C: mov 0x6C(%eax),%esi;");
    asm("loc_65D876F: call _sub_65D8F61;");
    asm("loc_65D8774: mov 0x70(%eax),%eax;");
    asm("loc_65D8777: push $1;");
    asm("loc_65D8779: push %esi;");
    asm("loc_65D877A: mov %eax,0x10(%ebp);");
    asm("loc_65D877D: movb $1,-0x14(%ebp);");
    asm("loc_65D8781: call _sub_65DD203;");
    asm("loc_65D8786: pop %ecx;");
    asm("loc_65D8787: test %eax,%eax;");
    asm("loc_65D8789: pop %ecx;");
    asm("loc_65D878A: jne loc_65D8791;");
    asm("loc_65D878C: call _sub_65D90C9;");
    asm("loc_65D8791: cmp %ebx,(%esi);");
    asm("loc_65D8793: jne loc_65D8892;");
    asm("loc_65D8799: cmpl $3,0x10(%esi);");
    asm("loc_65D879D: jne loc_65D87AF;");
    asm("loc_65D879F: cmp %edi,0x14(%esi);");
    asm("loc_65D87A2: jne loc_65D87AF;");
    asm("loc_65D87A4: cmpl $0,0x1C(%esi);");
    asm("loc_65D87A8: jne loc_65D87AF;");
    asm("loc_65D87AA: call _sub_65D90C9;");
    asm("loc_65D87AF: cmp %ebx,(%esi);");
    asm("loc_65D87B1: jne loc_65D8892;");
    asm("loc_65D87B7: cmpl $3,0x10(%esi);");
    asm("loc_65D87BB: jne loc_65D8892;");
    asm("loc_65D87C1: cmp %edi,0x14(%esi);");
    asm("loc_65D87C4: jne loc_65D8892;");
    asm("loc_65D87CA: mov -0x10(%ebp),%edi;");
    asm("loc_65D87CD: lea -0x18(%ebp),%eax;");
    asm("loc_65D87D0: push %eax;");
    asm("loc_65D87D1: lea -4(%ebp),%eax;");
    asm("loc_65D87D4: push %eax;");
    asm("loc_65D87D5: push %edi;");
    asm("loc_65D87D6: pushl 0x20(%ebp);");
    asm("loc_65D87D9: pushl 0x18(%ebp);");
    asm("loc_65D87DC: call _sub_65D71E3;");
    asm("loc_65D87E1: add $0x14,%esp;");
    asm("loc_65D87E4: mov %eax,%ebx;");
    asm("loc_65D87E6: mov -4(%ebp),%eax;");
    asm("loc_65D87E9: cmp -0x18(%ebp),%eax;");
    asm("loc_65D87EC: jae loc_65D887D;");
    asm("loc_65D87F2: cmp %edi,(%ebx);");
    asm("loc_65D87F4: jg loc_65D8872;");
    asm("loc_65D87F6: cmp 4(%ebx),%edi;");
    asm("loc_65D87F9: jg loc_65D8872;");
    asm("loc_65D87FB: mov 0x10(%ebx),%eax;");
    asm("loc_65D87FE: mov %eax,8(%ebp);");
    asm("loc_65D8801: mov 0xC(%ebx),%eax;");
    asm("loc_65D8804: test %eax,%eax;");
    asm("loc_65D8806: mov %eax,-0xC(%ebp);");
    asm("loc_65D8809: jle loc_65D886F;");
    asm("loc_65D880B: mov 0x1C(%esi),%eax;");
    asm("loc_65D880E: mov 0xC(%eax),%eax;");
    asm("loc_65D8811: lea 4(%eax),%edi;");
    asm("loc_65D8814: mov (%eax),%eax;");
    asm("loc_65D8816: test %eax,%eax;");
    asm("loc_65D8818: mov %eax,-8(%ebp);");
    asm("loc_65D881B: jle loc_65D883C;");
    asm("loc_65D881D: pushl 0x1C(%esi);");
    asm("loc_65D8820: pushl (%edi);");
    asm("loc_65D8822: pushl 8(%ebp);");
    asm("loc_65D8825: call _sub_65D8967;");
    asm("loc_65D882A: add $0xC,%esp;");
    asm("loc_65D882D: test %eax,%eax;");
    asm("loc_65D882F: jne loc_65D884B;");
    asm("loc_65D8831: decl -8(%ebp);");
    asm("loc_65D8834: add $4,%edi;");
    asm("loc_65D8837: cmp %eax,-8(%ebp);");
    asm("loc_65D883A: jg loc_65D881D;");
    asm("loc_65D883C: decl -0xC(%ebp);");
    asm("loc_65D883F: addl $0x10,8(%ebp);");
    asm("loc_65D8843: cmpl $0,-0xC(%ebp);");
    asm("loc_65D8847: jg loc_65D880B;");
    asm("loc_65D8849: jmp loc_65D886F;");
    asm("loc_65D884B: pushl -0x14(%ebp);");
    asm("loc_65D884E: pushl 0x24(%ebp);");
    asm("loc_65D8851: pushl 0x20(%ebp);");
    asm("loc_65D8854: push %ebx;");
    asm("loc_65D8855: pushl (%edi);");
    asm("loc_65D8857: pushl 8(%ebp);");
    asm("loc_65D885A: pushl 0x18(%ebp);");
    asm("loc_65D885D: pushl 0x14(%ebp);");
    asm("loc_65D8860: pushl 0x10(%ebp);");
    asm("loc_65D8863: pushl 0xC(%ebp);");
    asm("loc_65D8866: push %esi;");
    asm("loc_65D8867: call _sub_65D8A78;");
    asm("loc_65D886C: add $0x2C,%esp;");
    asm("loc_65D886F: mov -0x10(%ebp),%edi;");
    asm("loc_65D8872: incl -4(%ebp);");
    asm("loc_65D8875: add $0x14,%ebx;");
    asm("loc_65D8878: jmp loc_65D87E6;");
    asm("loc_65D887D: cmpb $0,0x1C(%ebp);");
    asm("loc_65D8881: je loc_65D888D;");
    asm("loc_65D8883: push $1;");
    asm("loc_65D8885: push %esi;");
    asm("loc_65D8886: call _sub_65D8DFC;");
    asm("loc_65D888B: pop %ecx;");
    asm("loc_65D888C: pop %ecx;");
    asm("loc_65D888D: pop %edi;");
    asm("loc_65D888E: pop %esi;");
    asm("loc_65D888F: pop %ebx;");
    asm("loc_65D8890: leave;");
    asm("loc_65D8891: ret;");
    asm("loc_65D8892: cmpb $0,0x1C(%ebp);");
    asm("loc_65D8896: jne loc_65D88B8;");
    asm("loc_65D8898: pushl 0x24(%ebp);");
    asm("loc_65D889B: pushl 0x20(%ebp);");
    asm("loc_65D889E: pushl -0x10(%ebp);");
    asm("loc_65D88A1: pushl 0x18(%ebp);");
    asm("loc_65D88A4: pushl 0x14(%ebp);");
    asm("loc_65D88A7: pushl 0x10(%ebp);");
    asm("loc_65D88AA: pushl 0xC(%ebp);");
    asm("loc_65D88AD: push %esi;");
    asm("loc_65D88AE: call _sub_65D88BD;");
    asm("loc_65D88B3: add $0x20,%esp;");
    asm("loc_65D88B6: jmp loc_65D888D;");
    asm("loc_65D88B8: jmp _sub_65D9068;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D88BD() // ?FindHandlerForForeignException@@YAXPAUEHExceptionRecord@@PAUEHRegistrationNode@@PAU_CONTEXT@@PAXPBU_s_FuncInfo@@HH1@Z
{
    __DEBUG_ASM(65D88BD);
    // chunk 0x65D88BD _sub_65D88BD
    asm("loc_65D88BD: push %ebp;");
    asm("loc_65D88BE: mov %esp,%ebp;");
    asm("loc_65D88C0: push %ecx;");
    asm("loc_65D88C1: push %ecx;");
    asm("loc_65D88C2: push %esi;");
    asm("loc_65D88C3: push %edi;");
    asm("loc_65D88C4: call _sub_65D8F61;");
    asm("loc_65D88C9: cmpl $0,0x68(%eax);");
    asm("loc_65D88CD: je loc_65D88F0;");
    asm("loc_65D88CF: pushl 0x24(%ebp);");
    asm("loc_65D88D2: pushl 0x20(%ebp);");
    asm("loc_65D88D5: pushl 0x18(%ebp);");
    asm("loc_65D88D8: pushl 0x14(%ebp);");
    asm("loc_65D88DB: pushl 0x10(%ebp);");
    asm("loc_65D88DE: pushl 0xC(%ebp);");
    asm("loc_65D88E1: pushl 8(%ebp);");
    asm("loc_65D88E4: call _sub_65D70B8;");
    asm("loc_65D88E9: add $0x1C,%esp;");
    asm("loc_65D88EC: test %eax,%eax;");
    asm("loc_65D88EE: jne loc_65D8963;");
    asm("loc_65D88F0: mov 0x1C(%ebp),%edi;");
    asm("loc_65D88F3: lea -8(%ebp),%eax;");
    asm("loc_65D88F6: push %eax;");
    asm("loc_65D88F7: lea -4(%ebp),%eax;");
    asm("loc_65D88FA: push %eax;");
    asm("loc_65D88FB: push %edi;");
    asm("loc_65D88FC: pushl 0x20(%ebp);");
    asm("loc_65D88FF: pushl 0x18(%ebp);");
    asm("loc_65D8902: call _sub_65D71E3;");
    asm("loc_65D8907: add $0x14,%esp;");
    asm("loc_65D890A: mov %eax,%esi;");
    asm("loc_65D890C: mov -4(%ebp),%eax;");
    asm("loc_65D890F: cmp -8(%ebp),%eax;");
    asm("loc_65D8912: jae loc_65D8963;");
    asm("loc_65D8914: cmp (%esi),%edi;");
    asm("loc_65D8916: jl loc_65D895B;");
    asm("loc_65D8918: cmp 4(%esi),%edi;");
    asm("loc_65D891B: jg loc_65D895B;");
    asm("loc_65D891D: mov 0xC(%esi),%eax;");
    asm("loc_65D8920: mov 0x10(%esi),%ecx;");
    asm("loc_65D8923: shl $4,%eax;");
    asm("loc_65D8926: add %ecx,%eax;");
    asm("loc_65D8928: mov -0xC(%eax),%ecx;");
    asm("loc_65D892B: test %ecx,%ecx;");
    asm("loc_65D892D: je loc_65D8935;");
    asm("loc_65D892F: cmpb $0,8(%ecx);");
    asm("loc_65D8933: jne loc_65D895B;");
    asm("loc_65D8935: push $1;");
    asm("loc_65D8937: add $0xFFFFFFF0,%eax;");
    asm("loc_65D893A: pushl 0x24(%ebp);");
    asm("loc_65D893D: pushl 0x20(%ebp);");
    asm("loc_65D8940: push %esi;");
    asm("loc_65D8941: push $0;");
    asm("loc_65D8943: push %eax;");
    asm("loc_65D8944: pushl 0x18(%ebp);");
    asm("loc_65D8947: pushl 0x14(%ebp);");
    asm("loc_65D894A: pushl 0x10(%ebp);");
    asm("loc_65D894D: pushl 0xC(%ebp);");
    asm("loc_65D8950: pushl 8(%ebp);");
    asm("loc_65D8953: call _sub_65D8A78;");
    asm("loc_65D8958: add $0x2C,%esp;");
    asm("loc_65D895B: incl -4(%ebp);");
    asm("loc_65D895E: add $0x14,%esi;");
    asm("loc_65D8961: jmp loc_65D890C;");
    asm("loc_65D8963: pop %edi;");
    asm("loc_65D8964: pop %esi;");
    asm("loc_65D8965: leave;");
    asm("loc_65D8966: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D8967() // ?TypeMatch@@YAHPBU_s_HandlerType@@PBU_s_CatchableType@@PBU_s_ThrowInfo@@@Z
{
    __DEBUG_ASM(65D8967);
    // chunk 0x65D8967 _sub_65D8967
    asm("loc_65D8967: push %esi;");
    asm("loc_65D8968: push %edi;");
    asm("loc_65D8969: mov 0xC(%esp),%edi;");
    asm("loc_65D896D: mov 4(%edi),%eax;");
    asm("loc_65D8970: test %eax,%eax;");
    asm("loc_65D8972: je loc_65D89BE;");
    asm("loc_65D8974: cmpb $0,8(%eax);");
    asm("loc_65D8978: lea 8(%eax),%edx;");
    asm("loc_65D897B: je loc_65D89BE;");
    asm("loc_65D897D: mov 0x10(%esp),%esi;");
    asm("loc_65D8981: mov 4(%esi),%ecx;");
    asm("loc_65D8984: cmp %ecx,%eax;");
    asm("loc_65D8986: je loc_65D8998;");
    asm("loc_65D8988: add $8,%ecx;");
    asm("loc_65D898B: push %ecx;");
    asm("loc_65D898C: push %edx;");
    asm("loc_65D898D: call _sub_65DD100;");
    asm("loc_65D8992: pop %ecx;");
    asm("loc_65D8993: test %eax,%eax;");
    asm("loc_65D8995: pop %ecx;");
    asm("loc_65D8996: jne loc_65D89BA;");
    asm("loc_65D8998: testb $2,(%esi);");
    asm("loc_65D899B: je loc_65D89A2;");
    asm("loc_65D899D: testb $8,(%edi);");
    asm("loc_65D89A0: je loc_65D89BA;");
    asm("loc_65D89A2: mov 0x14(%esp),%eax;");
    asm("loc_65D89A6: mov (%eax),%eax;");
    asm("loc_65D89A8: test $1,%al;");
    asm("loc_65D89AA: je loc_65D89B1;");
    asm("loc_65D89AC: testb $1,(%edi);");
    asm("loc_65D89AF: je loc_65D89BA;");
    asm("loc_65D89B1: test $2,%al;");
    asm("loc_65D89B3: je loc_65D89BE;");
    asm("loc_65D89B5: testb $2,(%edi);");
    asm("loc_65D89B8: jne loc_65D89BE;");
    asm("loc_65D89BA: xor %eax,%eax;");
    asm("loc_65D89BC: jmp loc_65D89C1;");
    asm("loc_65D89BE: push $1;");
    asm("loc_65D89C0: pop %eax;");
    asm("loc_65D89C1: pop %edi;");
    asm("loc_65D89C2: pop %esi;");
    asm("loc_65D89C3: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D89C4() // ___FrameUnwindToState
{
    __DEBUG_ASM(65D89C4);
    // chunk 0x65D89C4 _sub_65D89C4
    asm("loc_65D89C4: push %ebp;");
    asm("loc_65D89C5: mov %esp,%ebp;");
    asm("loc_65D89C7: push $0xFFFFFFFF;");
    asm("loc_65D89C9: push $_data_65E1638;");
    asm("loc_65D89CE: push $_sub_65DCF2C;");
    asm("loc_65D89D3: mov %fs:0,%eax;");
    asm("loc_65D89D9: push %eax;");
    asm("loc_65D89DA: mov %esp,%fs:0;");
    asm("loc_65D89E1: sub $0xC,%esp;");
    asm("loc_65D89E4: push %ebx;");
    asm("loc_65D89E5: push %esi;");
    asm("loc_65D89E6: push %edi;");
    asm("loc_65D89E7: mov %esp,-0x18(%ebp);");
    asm("loc_65D89EA: mov 8(%ebp),%ebx;");
    asm("loc_65D89ED: mov 8(%ebx),%esi;");
    asm("loc_65D89F0: mov %esi,-0x1C(%ebp);");
    asm("loc_65D89F3: mov 0x10(%ebp),%edi;");
    asm("loc_65D89F6: cmp 0x14(%ebp),%esi;");
    asm("loc_65D89F9: je loc_65D8A50;");
    asm("loc_65D89FB: cmp $0xFFFFFFFF,%esi;");
    asm("loc_65D89FE: jle loc_65D8A05;");
    asm("loc_65D8A00: cmp 4(%edi),%esi;");
    asm("loc_65D8A03: jl loc_65D8A0A;");
    asm("loc_65D8A05: call _sub_65D90C9;");
    asm("loc_65D8A0A: andl $0,-4(%ebp);");
    asm("loc_65D8A0E: mov 8(%edi),%eax;");
    asm("loc_65D8A11: mov 4(%eax,%esi,8),%eax;");
    asm("loc_65D8A15: test %eax,%eax;");
    asm("loc_65D8A17: je loc_65D8A25;");
    asm("loc_65D8A19: push $0x103;");
    asm("loc_65D8A1E: push %ebx;");
    asm("loc_65D8A1F: push %eax;");
    asm("loc_65D8A20: call _sub_65D8E90;");
    asm("loc_65D8A25: orl $0xFFFFFFFF,-4(%ebp);");
    asm("loc_65D8A29: jmp loc_65D8A45;");
    asm("loc_65D8A2B: pushl -0x14(%ebp);");
    asm("loc_65D8A2E: call _sub_65D8A62;");
    asm("loc_65D8A33: pop %ecx;");
    asm("loc_65D8A34: ret;");
    asm("loc_65D8A35: mov -0x18(%ebp),%esp;");
    asm("loc_65D8A38: orl $0xFFFFFFFF,-4(%ebp);");
    asm("loc_65D8A3C: mov 0x10(%ebp),%edi;");
    asm("loc_65D8A3F: mov 8(%ebp),%ebx;");
    asm("loc_65D8A42: mov -0x1C(%ebp),%esi;");
    asm("loc_65D8A45: mov 8(%edi),%eax;");
    asm("loc_65D8A48: mov (%eax,%esi,8),%esi;");
    asm("loc_65D8A4B: mov %esi,-0x1C(%ebp);");
    asm("loc_65D8A4E: jmp loc_65D89F6;");
    asm("loc_65D8A50: mov %esi,8(%ebx);");
    asm("loc_65D8A53: mov -0x10(%ebp),%ecx;");
    asm("loc_65D8A56: mov %ecx,%fs:0;");
    asm("loc_65D8A5D: pop %edi;");
    asm("loc_65D8A5E: pop %esi;");
    asm("loc_65D8A5F: pop %ebx;");
    asm("loc_65D8A60: leave;");
    asm("loc_65D8A61: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D8A62() // _unknown_libname_4
{
    __DEBUG_ASM(65D8A62);
    // chunk 0x65D8A62 _sub_65D8A62
    asm("loc_65D8A62: mov 4(%esp),%eax;");
    asm("loc_65D8A66: mov (%eax),%eax;");
    asm("loc_65D8A68: cmpl $0xE06D7363,(%eax);");
    asm("loc_65D8A6E: je loc_65D8A73;");
    asm("loc_65D8A70: xor %eax,%eax;");
    asm("loc_65D8A72: ret;");
    asm("loc_65D8A73: jmp _sub_65D9068;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D8A78() // ?CatchIt@@YAXPAUEHExceptionRecord@@PAUEHRegistrationNode@@PAU_CONTEXT@@PAXPBU_s_FuncInfo@@PBU_s_HandlerType@@PBU_s_CatchableType@@PBU_s_TryBlockMapEntry@@H1E@Z
{
    __DEBUG_ASM(65D8A78);
    // chunk 0x65D8A78 _sub_65D8A78
    asm("loc_65D8A78: push %ebp;");
    asm("loc_65D8A79: mov %esp,%ebp;");
    asm("loc_65D8A7B: cmpl $0,0x20(%ebp);");
    asm("loc_65D8A7F: push %ebx;");
    asm("loc_65D8A80: mov 0x1C(%ebp),%ebx;");
    asm("loc_65D8A83: push %esi;");
    asm("loc_65D8A84: push %edi;");
    asm("loc_65D8A85: mov 0xC(%ebp),%edi;");
    asm("loc_65D8A88: je loc_65D8A9A;");
    asm("loc_65D8A8A: pushl 0x20(%ebp);");
    asm("loc_65D8A8D: push %ebx;");
    asm("loc_65D8A8E: push %edi;");
    asm("loc_65D8A8F: pushl 8(%ebp);");
    asm("loc_65D8A92: call _sub_65D8C38;");
    asm("loc_65D8A97: add $0x10,%esp;");
    asm("loc_65D8A9A: cmpl $0,0x2C(%ebp);");
    asm("loc_65D8A9E: pushl 8(%ebp);");
    asm("loc_65D8AA1: jne loc_65D8AA6;");
    asm("loc_65D8AA3: push %edi;");
    asm("loc_65D8AA4: jmp loc_65D8AA9;");
    asm("loc_65D8AA6: pushl 0x2C(%ebp);");
    asm("loc_65D8AA9: call _sub_65D6FBA;");
    asm("loc_65D8AAE: mov 0x24(%ebp),%esi;");
    asm("loc_65D8AB1: pushl (%esi);");
    asm("loc_65D8AB3: pushl 0x18(%ebp);");
    asm("loc_65D8AB6: pushl 0x14(%ebp);");
    asm("loc_65D8AB9: push %edi;");
    asm("loc_65D8ABA: call _sub_65D89C4;");
    asm("loc_65D8ABF: mov 4(%esi),%eax;");
    asm("loc_65D8AC2: push $0x100;");
    asm("loc_65D8AC7: pushl 0x28(%ebp);");
    asm("loc_65D8ACA: inc %eax;");
    asm("loc_65D8ACB: mov %eax,8(%edi);");
    asm("loc_65D8ACE: pushl 0xC(%ebx);");
    asm("loc_65D8AD1: pushl 0x18(%ebp);");
    asm("loc_65D8AD4: pushl 0x10(%ebp);");
    asm("loc_65D8AD7: push %edi;");
    asm("loc_65D8AD8: pushl 8(%ebp);");
    asm("loc_65D8ADB: call _sub_65D8AF3;");
    asm("loc_65D8AE0: add $0x2C,%esp;");
    asm("loc_65D8AE3: test %eax,%eax;");
    asm("loc_65D8AE5: je loc_65D8AEE;");
    asm("loc_65D8AE7: push %edi;");
    asm("loc_65D8AE8: push %eax;");
    asm("loc_65D8AE9: call _sub_65D6F7F;");
    asm("loc_65D8AEE: pop %edi;");
    asm("loc_65D8AEF: pop %esi;");
    asm("loc_65D8AF0: pop %ebx;");
    asm("loc_65D8AF1: pop %ebp;");
    asm("loc_65D8AF2: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D8AF3() // ?CallCatchBlock@@YAPAXPAUEHExceptionRecord@@PAUEHRegistrationNode@@PAU_CONTEXT@@PBU_s_FuncInfo@@PAXHK@Z
{
    __DEBUG_ASM(65D8AF3);
    // chunk 0x65D8AF3 _sub_65D8AF3
    asm("loc_65D8AF3: push %ebp;");
    asm("loc_65D8AF4: mov %esp,%ebp;");
    asm("loc_65D8AF6: push $0xFFFFFFFF;");
    asm("loc_65D8AF8: push $_data_65E1648;");
    asm("loc_65D8AFD: push $_sub_65DCF2C;");
    asm("loc_65D8B02: mov %fs:0,%eax;");
    asm("loc_65D8B08: push %eax;");
    asm("loc_65D8B09: mov %esp,%fs:0;");
    asm("loc_65D8B10: sub $0x1C,%esp;");
    asm("loc_65D8B13: push %ebx;");
    asm("loc_65D8B14: push %esi;");
    asm("loc_65D8B15: push %edi;");
    asm("loc_65D8B16: mov %esp,-0x18(%ebp);");
    asm("loc_65D8B19: mov 0x18(%ebp),%ebx;");
    asm("loc_65D8B1C: mov %ebx,-0x2C(%ebp);");
    asm("loc_65D8B1F: andl $0,-0x24(%ebp);");
    asm("loc_65D8B23: mov 0xC(%ebp),%esi;");
    asm("loc_65D8B26: mov -4(%esi),%eax;");
    asm("loc_65D8B29: mov %eax,-0x28(%ebp);");
    asm("loc_65D8B2C: call _sub_65D8F61;");
    asm("loc_65D8B31: mov 0x6C(%eax),%eax;");
    asm("loc_65D8B34: mov %eax,-0x1C(%ebp);");
    asm("loc_65D8B37: call _sub_65D8F61;");
    asm("loc_65D8B3C: mov 0x70(%eax),%eax;");
    asm("loc_65D8B3F: mov %eax,-0x20(%ebp);");
    asm("loc_65D8B42: call _sub_65D8F61;");
    asm("loc_65D8B47: mov 8(%ebp),%edi;");
    asm("loc_65D8B4A: mov %edi,0x6C(%eax);");
    asm("loc_65D8B4D: call _sub_65D8F61;");
    asm("loc_65D8B52: mov 0x10(%ebp),%ecx;");
    asm("loc_65D8B55: mov %ecx,0x70(%eax);");
    asm("loc_65D8B58: andl $0,-4(%ebp);");
    asm("loc_65D8B5C: movl $1,-4(%ebp);");
    asm("loc_65D8B63: pushl 0x20(%ebp);");
    asm("loc_65D8B66: pushl 0x1C(%ebp);");
    asm("loc_65D8B69: push %ebx;");
    asm("loc_65D8B6A: pushl 0x14(%ebp);");
    asm("loc_65D8B6D: push %esi;");
    asm("loc_65D8B6E: call _sub_65D703F;");
    asm("loc_65D8B73: add $0x14,%esp;");
    asm("loc_65D8B76: mov %eax,-0x2C(%ebp);");
    asm("loc_65D8B79: andl $0,-4(%ebp);");
    asm("loc_65D8B7D: orl $0xFFFFFFFF,-4(%ebp);");
    asm("loc_65D8B81: call loc_65D8BC0;");
    asm("loc_65D8B86: mov -0x2C(%ebp),%eax;");
    asm("loc_65D8B89: mov -0x10(%ebp),%ecx;");
    asm("loc_65D8B8C: mov %ecx,%fs:0;");
    asm("loc_65D8B93: pop %edi;");
    asm("loc_65D8B94: pop %esi;");
    asm("loc_65D8B95: pop %ebx;");
    asm("loc_65D8B96: leave;");
    asm("loc_65D8B97: ret;");
    asm("loc_65D8B98: pushl -0x14(%ebp);");
    asm("loc_65D8B9B: call _sub_65D8C0E;");
    asm("loc_65D8BA0: pop %ecx;");
    asm("loc_65D8BA1: ret;");
    asm("loc_65D8BA2: mov -0x18(%ebp),%esp;");
    asm("loc_65D8BA5: andl $0,-0x2C(%ebp);");
    asm("loc_65D8BA9: push $0xFFFFFFFF;");
    asm("loc_65D8BAB: lea -0x10(%ebp),%eax;");
    asm("loc_65D8BAE: push %eax;");
    asm("loc_65D8BAF: call _sub_65D72A2;");
    asm("loc_65D8BB4: pop %ecx;");
    asm("loc_65D8BB5: pop %ecx;");
    asm("loc_65D8BB6: xor %eax,%eax;");
    asm("loc_65D8BB8: jmp loc_65D8B89;");
    asm("loc_65D8BBA: mov 0xC(%ebp),%esi;");
    asm("loc_65D8BBD: mov 8(%ebp),%edi;");
    asm("loc_65D8BC0: mov -0x28(%ebp),%eax;");
    asm("loc_65D8BC3: mov %eax,-4(%esi);");
    asm("loc_65D8BC6: call _sub_65D8F61;");
    asm("loc_65D8BCB: mov -0x1C(%ebp),%ecx;");
    asm("loc_65D8BCE: mov %ecx,0x6C(%eax);");
    asm("loc_65D8BD1: call _sub_65D8F61;");
    asm("loc_65D8BD6: mov -0x20(%ebp),%ecx;");
    asm("loc_65D8BD9: mov %ecx,0x70(%eax);");
    asm("loc_65D8BDC: cmpl $0xE06D7363,(%edi);");
    asm("loc_65D8BE2: jne loc_65D8C0D;");
    asm("loc_65D8BE4: cmpl $3,0x10(%edi);");
    asm("loc_65D8BE8: jne loc_65D8C0D;");
    asm("loc_65D8BEA: cmpl $0x19930520,0x14(%edi);");
    asm("loc_65D8BF1: jne loc_65D8C0D;");
    asm("loc_65D8BF3: cmpl $0,-0x24(%ebp);");
    asm("loc_65D8BF7: jne loc_65D8C0D;");
    asm("loc_65D8BF9: cmpl $0,-0x2C(%ebp);");
    asm("loc_65D8BFD: je loc_65D8C0D;");
    asm("loc_65D8BFF: call _sub_65D730A;");
    asm("loc_65D8C04: push %eax;");
    asm("loc_65D8C05: push %edi;");
    asm("loc_65D8C06: call _sub_65D8DFC;");
    asm("loc_65D8C0B: pop %ecx;");
    asm("loc_65D8C0C: pop %ecx;");
    asm("loc_65D8C0D: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D8C0E() // ?ExFilterRethrow@@YAHPAU_EXCEPTION_POINTERS@@@Z
{
    __DEBUG_ASM(65D8C0E);
    // chunk 0x65D8C0E _sub_65D8C0E
    asm("loc_65D8C0E: mov 4(%esp),%eax;");
    asm("loc_65D8C12: mov (%eax),%eax;");
    asm("loc_65D8C14: cmpl $0xE06D7363,(%eax);");
    asm("loc_65D8C1A: jne loc_65D8C35;");
    asm("loc_65D8C1C: cmpl $3,0x10(%eax);");
    asm("loc_65D8C20: jne loc_65D8C35;");
    asm("loc_65D8C22: cmpl $0x19930520,0x14(%eax);");
    asm("loc_65D8C29: jne loc_65D8C35;");
    asm("loc_65D8C2B: cmpl $0,0x1C(%eax);");
    asm("loc_65D8C2F: jne loc_65D8C35;");
    asm("loc_65D8C31: push $1;");
    asm("loc_65D8C33: pop %eax;");
    asm("loc_65D8C34: ret;");
    asm("loc_65D8C35: xor %eax,%eax;");
    asm("loc_65D8C37: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D8C38() // ?BuildCatchObject@@YAXPAUEHExceptionRecord@@PAUEHRegistrationNode@@PBU_s_HandlerType@@PBU_s_CatchableType@@@Z
{
    __DEBUG_ASM(65D8C38);
    // chunk 0x65D8C38 _sub_65D8C38
    asm("loc_65D8C38: push %ebp;");
    asm("loc_65D8C39: mov %esp,%ebp;");
    asm("loc_65D8C3B: push $0xFFFFFFFF;");
    asm("loc_65D8C3D: push $_data_65E1660;");
    asm("loc_65D8C42: push $_sub_65DCF2C;");
    asm("loc_65D8C47: mov %fs:0,%eax;");
    asm("loc_65D8C4D: push %eax;");
    asm("loc_65D8C4E: mov %esp,%fs:0;");
    asm("loc_65D8C55: sub $0xC,%esp;");
    asm("loc_65D8C58: push %ebx;");
    asm("loc_65D8C59: push %esi;");
    asm("loc_65D8C5A: push %edi;");
    asm("loc_65D8C5B: mov %esp,-0x18(%ebp);");
    asm("loc_65D8C5E: mov 0x10(%ebp),%ecx;");
    asm("loc_65D8C61: mov 4(%ecx),%eax;");
    asm("loc_65D8C64: test %eax,%eax;");
    asm("loc_65D8C66: je loc_65D8DE1;");
    asm("loc_65D8C6C: cmpb $0,8(%eax);");
    asm("loc_65D8C70: je loc_65D8DE1;");
    asm("loc_65D8C76: mov 8(%ecx),%eax;");
    asm("loc_65D8C79: test %eax,%eax;");
    asm("loc_65D8C7B: je loc_65D8DE1;");
    asm("loc_65D8C81: mov 0xC(%ebp),%edx;");
    asm("loc_65D8C84: lea 0xC(%eax,%edx),%edi;");
    asm("loc_65D8C88: andl $0,-4(%ebp);");
    asm("loc_65D8C8C: testb $8,(%ecx);");
    asm("loc_65D8C8F: je loc_65D8CD5;");
    asm("loc_65D8C91: mov 8(%ebp),%esi;");
    asm("loc_65D8C94: push $1;");
    asm("loc_65D8C96: pushl 0x18(%esi);");
    asm("loc_65D8C99: call _sub_65DD203;");
    asm("loc_65D8C9E: pop %ecx;");
    asm("loc_65D8C9F: pop %ecx;");
    asm("loc_65D8CA0: test %eax,%eax;");
    asm("loc_65D8CA2: je loc_65D8DD8;");
    asm("loc_65D8CA8: push $1;");
    asm("loc_65D8CAA: push %edi;");
    asm("loc_65D8CAB: call _sub_65DD21F;");
    asm("loc_65D8CB0: pop %ecx;");
    asm("loc_65D8CB1: pop %ecx;");
    asm("loc_65D8CB2: test %eax,%eax;");
    asm("loc_65D8CB4: je loc_65D8DD8;");
    asm("loc_65D8CBA: mov 0x18(%esi),%eax;");
    asm("loc_65D8CBD: mov %eax,(%edi);");
    asm("loc_65D8CBF: mov 0x14(%ebp),%ecx;");
    asm("loc_65D8CC2: add $8,%ecx;");
    asm("loc_65D8CC5: push %ecx;");
    asm("loc_65D8CC6: push %eax;");
    asm("loc_65D8CC7: call _sub_65D8E63;");
    asm("loc_65D8CCC: pop %ecx;");
    asm("loc_65D8CCD: pop %ecx;");
    asm("loc_65D8CCE: mov %eax,(%edi);");
    asm("loc_65D8CD0: jmp loc_65D8DDD;");
    asm("loc_65D8CD5: mov 0x14(%ebp),%esi;");
    asm("loc_65D8CD8: testb $1,(%esi);");
    asm("loc_65D8CDB: je loc_65D8D2F;");
    asm("loc_65D8CDD: mov 8(%ebp),%ebx;");
    asm("loc_65D8CE0: push $1;");
    asm("loc_65D8CE2: pushl 0x18(%ebx);");
    asm("loc_65D8CE5: call _sub_65DD203;");
    asm("loc_65D8CEA: pop %ecx;");
    asm("loc_65D8CEB: pop %ecx;");
    asm("loc_65D8CEC: test %eax,%eax;");
    asm("loc_65D8CEE: je loc_65D8DD8;");
    asm("loc_65D8CF4: push $1;");
    asm("loc_65D8CF6: push %edi;");
    asm("loc_65D8CF7: call _sub_65DD21F;");
    asm("loc_65D8CFC: pop %ecx;");
    asm("loc_65D8CFD: pop %ecx;");
    asm("loc_65D8CFE: test %eax,%eax;");
    asm("loc_65D8D00: je loc_65D8DD8;");
    asm("loc_65D8D06: pushl 0x14(%esi);");
    asm("loc_65D8D09: pushl 0x18(%ebx);");
    asm("loc_65D8D0C: push %edi;");
    asm("loc_65D8D0D: call loc_65D73A0;");
    asm("loc_65D8D12: add $0xC,%esp;");
    asm("loc_65D8D15: cmpl $4,0x14(%esi);");
    asm("loc_65D8D19: jne loc_65D8DDD;");
    asm("loc_65D8D1F: mov (%edi),%eax;");
    asm("loc_65D8D21: test %eax,%eax;");
    asm("loc_65D8D23: je loc_65D8DDD;");
    asm("loc_65D8D29: add $8,%esi;");
    asm("loc_65D8D2C: push %esi;");
    asm("loc_65D8D2D: jmp loc_65D8CC6;");
    asm("loc_65D8D2F: cmpl $0,0x18(%esi);");
    asm("loc_65D8D33: mov 8(%ebp),%ebx;");
    asm("loc_65D8D36: push $1;");
    asm("loc_65D8D38: pushl 0x18(%ebx);");
    asm("loc_65D8D3B: jne loc_65D8D77;");
    asm("loc_65D8D3D: call _sub_65DD203;");
    asm("loc_65D8D42: pop %ecx;");
    asm("loc_65D8D43: pop %ecx;");
    asm("loc_65D8D44: test %eax,%eax;");
    asm("loc_65D8D46: je loc_65D8DD8;");
    asm("loc_65D8D4C: push $1;");
    asm("loc_65D8D4E: push %edi;");
    asm("loc_65D8D4F: call _sub_65DD21F;");
    asm("loc_65D8D54: pop %ecx;");
    asm("loc_65D8D55: pop %ecx;");
    asm("loc_65D8D56: test %eax,%eax;");
    asm("loc_65D8D58: je loc_65D8DD8;");
    asm("loc_65D8D5A: pushl 0x14(%esi);");
    asm("loc_65D8D5D: add $8,%esi;");
    asm("loc_65D8D60: push %esi;");
    asm("loc_65D8D61: pushl 0x18(%ebx);");
    asm("loc_65D8D64: call _sub_65D8E63;");
    asm("loc_65D8D69: pop %ecx;");
    asm("loc_65D8D6A: pop %ecx;");
    asm("loc_65D8D6B: push %eax;");
    asm("loc_65D8D6C: push %edi;");
    asm("loc_65D8D6D: call loc_65D73A0;");
    asm("loc_65D8D72: add $0xC,%esp;");
    asm("loc_65D8D75: jmp loc_65D8DDD;");
    asm("loc_65D8D77: call _sub_65DD203;");
    asm("loc_65D8D7C: pop %ecx;");
    asm("loc_65D8D7D: pop %ecx;");
    asm("loc_65D8D7E: test %eax,%eax;");
    asm("loc_65D8D80: je loc_65D8DD8;");
    asm("loc_65D8D82: push $1;");
    asm("loc_65D8D84: push %edi;");
    asm("loc_65D8D85: call _sub_65DD21F;");
    asm("loc_65D8D8A: pop %ecx;");
    asm("loc_65D8D8B: pop %ecx;");
    asm("loc_65D8D8C: test %eax,%eax;");
    asm("loc_65D8D8E: je loc_65D8DD8;");
    asm("loc_65D8D90: pushl 0x18(%esi);");
    asm("loc_65D8D93: call _sub_65DD23B;");
    asm("loc_65D8D98: pop %ecx;");
    asm("loc_65D8D99: test %eax,%eax;");
    asm("loc_65D8D9B: je loc_65D8DD8;");
    asm("loc_65D8D9D: testb $4,(%esi);");
    asm("loc_65D8DA0: je loc_65D8DBE;");
    asm("loc_65D8DA2: push $1;");
    asm("loc_65D8DA4: lea 8(%esi),%eax;");
    asm("loc_65D8DA7: push %eax;");
    asm("loc_65D8DA8: pushl 0x18(%ebx);");
    asm("loc_65D8DAB: call _sub_65D8E63;");
    asm("loc_65D8DB0: pop %ecx;");
    asm("loc_65D8DB1: pop %ecx;");
    asm("loc_65D8DB2: push %eax;");
    asm("loc_65D8DB3: pushl 0x18(%esi);");
    asm("loc_65D8DB6: push %edi;");
    asm("loc_65D8DB7: call _sub_65D6FB3;");
    asm("loc_65D8DBC: jmp loc_65D8DDD;");
    asm("loc_65D8DBE: lea 8(%esi),%eax;");
    asm("loc_65D8DC1: push %eax;");
    asm("loc_65D8DC2: pushl 0x18(%ebx);");
    asm("loc_65D8DC5: call _sub_65D8E63;");
    asm("loc_65D8DCA: pop %ecx;");
    asm("loc_65D8DCB: pop %ecx;");
    asm("loc_65D8DCC: push %eax;");
    asm("loc_65D8DCD: pushl 0x18(%esi);");
    asm("loc_65D8DD0: push %edi;");
    asm("loc_65D8DD1: call _sub_65D6FB3;");
    asm("loc_65D8DD6: jmp loc_65D8DDD;");
    asm("loc_65D8DD8: call _sub_65D90C9;");
    asm("loc_65D8DDD: orl $0xFFFFFFFF,-4(%ebp);");
    asm("loc_65D8DE1: mov -0x10(%ebp),%ecx;");
    asm("loc_65D8DE4: mov %ecx,%fs:0;");
    asm("loc_65D8DEB: pop %edi;");
    asm("loc_65D8DEC: pop %esi;");
    asm("loc_65D8DED: pop %ebx;");
    asm("loc_65D8DEE: leave;");
    asm("loc_65D8DEF: ret;");
    asm("loc_65D8DF0: push $1;");
    asm("loc_65D8DF2: pop %eax;");
    asm("loc_65D8DF3: ret;");
    asm("loc_65D8DF4: mov -0x18(%ebp),%esp;");
    asm("loc_65D8DF7: jmp _sub_65D9068;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D8DFC() // _unknown_libname_5
{
    __DEBUG_ASM(65D8DFC);
    // chunk 0x65D8DFC _sub_65D8DFC
    asm("loc_65D8DFC: push %ebp;");
    asm("loc_65D8DFD: mov %esp,%ebp;");
    asm("loc_65D8DFF: push $0xFFFFFFFF;");
    asm("loc_65D8E01: push $_data_65E1670;");
    asm("loc_65D8E06: push $_sub_65DCF2C;");
    asm("loc_65D8E0B: mov %fs:0,%eax;");
    asm("loc_65D8E11: push %eax;");
    asm("loc_65D8E12: mov %esp,%fs:0;");
    asm("loc_65D8E19: push %ecx;");
    asm("loc_65D8E1A: push %ecx;");
    asm("loc_65D8E1B: push %ebx;");
    asm("loc_65D8E1C: push %esi;");
    asm("loc_65D8E1D: push %edi;");
    asm("loc_65D8E1E: mov %esp,-0x18(%ebp);");
    asm("loc_65D8E21: mov 8(%ebp),%eax;");
    asm("loc_65D8E24: test %eax,%eax;");
    asm("loc_65D8E26: je loc_65D8E43;");
    asm("loc_65D8E28: mov 0x1C(%eax),%ecx;");
    asm("loc_65D8E2B: mov 4(%ecx),%ecx;");
    asm("loc_65D8E2E: test %ecx,%ecx;");
    asm("loc_65D8E30: je loc_65D8E43;");
    asm("loc_65D8E32: andl $0,-4(%ebp);");
    asm("loc_65D8E36: push %ecx;");
    asm("loc_65D8E37: pushl 0x18(%eax);");
    asm("loc_65D8E3A: call _sub_65D6FB3;");
    asm("loc_65D8E3F: orl $0xFFFFFFFF,-4(%ebp);");
    asm("loc_65D8E43: mov -0x10(%ebp),%ecx;");
    asm("loc_65D8E46: mov %ecx,%fs:0;");
    asm("loc_65D8E4D: pop %edi;");
    asm("loc_65D8E4E: pop %esi;");
    asm("loc_65D8E4F: pop %ebx;");
    asm("loc_65D8E50: leave;");
    asm("loc_65D8E51: ret;");
    asm("loc_65D8E52: xor %eax,%eax;");
    asm("loc_65D8E54: cmp %al,0xC(%ebp);");
    asm("loc_65D8E57: setne %al;");
    asm("loc_65D8E5A: ret;");
    asm("loc_65D8E5B: mov -0x18(%ebp),%esp;");
    asm("loc_65D8E5E: jmp _sub_65D9068;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D8E63() // ?AdjustPointer@@YAPAXPAXABUPMD@@@Z
{
    __DEBUG_ASM(65D8E63);
    // chunk 0x65D8E63 _sub_65D8E63
    asm("loc_65D8E63: mov 8(%esp),%ecx;");
    asm("loc_65D8E67: push %esi;");
    asm("loc_65D8E68: mov 8(%esp),%esi;");
    asm("loc_65D8E6C: mov (%ecx),%eax;");
    asm("loc_65D8E6E: mov 4(%ecx),%edx;");
    asm("loc_65D8E71: add %esi,%eax;");
    asm("loc_65D8E73: test %edx,%edx;");
    asm("loc_65D8E75: jl loc_65D8E84;");
    asm("loc_65D8E77: mov (%edx,%esi),%esi;");
    asm("loc_65D8E7A: mov 8(%ecx),%ecx;");
    asm("loc_65D8E7D: mov (%esi,%ecx),%ecx;");
    asm("loc_65D8E80: add %edx,%ecx;");
    asm("loc_65D8E82: add %ecx,%eax;");
    asm("loc_65D8E84: pop %esi;");
    asm("loc_65D8E85: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D8E90() // __CallSettingFrame@12
{
    __DEBUG_ASM(65D8E90);
    // chunk 0x65D8E90 _sub_65D8E90
    asm("loc_65D8E90: push %ebp;");
    asm("loc_65D8E91: mov %esp,%ebp;");
    asm("loc_65D8E93: sub $4,%esp;");
    asm("loc_65D8E96: push %ebx;");
    asm("loc_65D8E97: push %ecx;");
    asm("loc_65D8E98: mov 0xC(%ebp),%eax;");
    asm("loc_65D8E9B: add $0xC,%eax;");
    asm("loc_65D8E9E: mov %eax,-4(%ebp);");
    asm("loc_65D8EA1: mov 8(%ebp),%eax;");
    asm("loc_65D8EA4: push %ebp;");
    asm("loc_65D8EA5: pushl 0x10(%ebp);");
    asm("loc_65D8EA8: mov 0x10(%ebp),%ecx;");
    asm("loc_65D8EAB: mov -4(%ebp),%ebp;");
    asm("loc_65D8EAE: call loc_65D732D;");
    asm("loc_65D8EB3: push %esi;");
    asm("loc_65D8EB4: push %edi;");
    asm("loc_65D8EB5: call *%eax;");
    asm("loc_65D8EB7: pop %edi;");
    asm("loc_65D8EB8: pop %esi;");
    asm("loc_65D8EB9: mov %ebp,%ebx;");
    asm("loc_65D8EBB: pop %ebp;");
    asm("loc_65D8EBC: mov 0x10(%ebp),%ecx;");
    asm("loc_65D8EBF: push %ebp;");
    asm("loc_65D8EC0: mov %ebx,%ebp;");
    asm("loc_65D8EC2: cmp $0x100,%ecx;");
    asm("loc_65D8EC8: jne loc_65D8ECF;");
    asm("loc_65D8ECA: mov $2,%ecx;");
    asm("loc_65D8ECF: push %ecx;");
    asm("loc_65D8ED0: call loc_65D732D;");
    asm("loc_65D8ED5: pop %ebp;");
    asm("loc_65D8ED6: pop %ecx;");
    asm("loc_65D8ED7: pop %ebx;");
    asm("loc_65D8ED8: leave;");
    asm("loc_65D8ED9: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D8EDC() // __mtinit
{
    __DEBUG_ASM(65D8EDC);
    // chunk 0x65D8EDC _sub_65D8EDC
    asm("loc_65D8EDC: push %esi;");
    asm("loc_65D8EDD: call _sub_65DCE16;");
    asm("loc_65D8EE2: calll *_import_65E106C;");
    asm("loc_65D8EE8: cmp $0xFFFFFFFF,%eax;");
    asm("loc_65D8EEB: mov %eax,_data_65E3440;");
    asm("loc_65D8EF0: je loc_65D8F2C;");
    asm("loc_65D8EF2: push $0x74;");
    asm("loc_65D8EF4: push $1;");
    asm("loc_65D8EF6: call _sub_65DD253;");
    asm("loc_65D8EFB: mov %eax,%esi;");
    asm("loc_65D8EFD: pop %ecx;");
    asm("loc_65D8EFE: test %esi,%esi;");
    asm("loc_65D8F00: pop %ecx;");
    asm("loc_65D8F01: je loc_65D8F2C;");
    asm("loc_65D8F03: push %esi;");
    asm("loc_65D8F04: pushl _data_65E3440;");
    asm("loc_65D8F0A: calll *_import_65E1068;");
    asm("loc_65D8F10: test %eax,%eax;");
    asm("loc_65D8F12: je loc_65D8F2C;");
    asm("loc_65D8F14: push %esi;");
    asm("loc_65D8F15: call _sub_65D8F4E;");
    asm("loc_65D8F1A: pop %ecx;");
    asm("loc_65D8F1B: calll *_import_65E1064;");
    asm("loc_65D8F21: orl $0xFFFFFFFF,4(%esi);");
    asm("loc_65D8F25: push $1;");
    asm("loc_65D8F27: mov %eax,(%esi);");
    asm("loc_65D8F29: pop %eax;");
    asm("loc_65D8F2A: pop %esi;");
    asm("loc_65D8F2B: ret;");
    asm("loc_65D8F2C: xor %eax,%eax;");
    asm("loc_65D8F2E: pop %esi;");
    asm("loc_65D8F2F: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D8F30() // __mtterm
{
    __DEBUG_ASM(65D8F30);
    // chunk 0x65D8F30 _sub_65D8F30
    asm("loc_65D8F30: call _sub_65DCE3F;");
    asm("loc_65D8F35: mov _data_65E3440,%eax;");
    asm("loc_65D8F3A: cmp $0xFFFFFFFF,%eax;");
    asm("loc_65D8F3D: je loc_65D8F4D;");
    asm("loc_65D8F3F: push %eax;");
    asm("loc_65D8F40: calll *_import_65E1070;");
    asm("loc_65D8F46: orl $0xFFFFFFFF,_data_65E3440;");
    asm("loc_65D8F4D: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D8F4E() // __initptd
{
    __DEBUG_ASM(65D8F4E);
    // chunk 0x65D8F4E _sub_65D8F4E
    asm("loc_65D8F4E: mov 4(%esp),%eax;");
    asm("loc_65D8F52: movl $_data_65E56B0,0x50(%eax);");
    asm("loc_65D8F59: movl $1,0x14(%eax);");
    asm("loc_65D8F60: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D8F61() // __getptd
{
    __DEBUG_ASM(65D8F61);
    // chunk 0x65D8F61 _sub_65D8F61
    asm("loc_65D8F61: push %esi;");
    asm("loc_65D8F62: push %edi;");
    asm("loc_65D8F63: calll *_import_65E107C;");
    asm("loc_65D8F69: pushl _data_65E3440;");
    asm("loc_65D8F6F: mov %eax,%edi;");
    asm("loc_65D8F71: calll *_import_65E1078;");
    asm("loc_65D8F77: mov %eax,%esi;");
    asm("loc_65D8F79: test %esi,%esi;");
    asm("loc_65D8F7B: jne loc_65D8FBC;");
    asm("loc_65D8F7D: push $0x74;");
    asm("loc_65D8F7F: push $1;");
    asm("loc_65D8F81: call _sub_65DD253;");
    asm("loc_65D8F86: mov %eax,%esi;");
    asm("loc_65D8F88: pop %ecx;");
    asm("loc_65D8F89: test %esi,%esi;");
    asm("loc_65D8F8B: pop %ecx;");
    asm("loc_65D8F8C: je loc_65D8FB4;");
    asm("loc_65D8F8E: push %esi;");
    asm("loc_65D8F8F: pushl _data_65E3440;");
    asm("loc_65D8F95: calll *_import_65E1068;");
    asm("loc_65D8F9B: test %eax,%eax;");
    asm("loc_65D8F9D: je loc_65D8FB4;");
    asm("loc_65D8F9F: push %esi;");
    asm("loc_65D8FA0: call _sub_65D8F4E;");
    asm("loc_65D8FA5: pop %ecx;");
    asm("loc_65D8FA6: calll *_import_65E1064;");
    asm("loc_65D8FAC: orl $0xFFFFFFFF,4(%esi);");
    asm("loc_65D8FB0: mov %eax,(%esi);");
    asm("loc_65D8FB2: jmp loc_65D8FBC;");
    asm("loc_65D8FB4: push $0x10;");
    asm("loc_65D8FB6: call _sub_65D7EF0;");
    asm("loc_65D8FBB: pop %ecx;");
    asm("loc_65D8FBC: push %edi;");
    asm("loc_65D8FBD: calll *_import_65E1074;");
    asm("loc_65D8FC3: mov %esi,%eax;");
    asm("loc_65D8FC5: pop %edi;");
    asm("loc_65D8FC6: pop %esi;");
    asm("loc_65D8FC7: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D8FC8() // __freeptd
{
    __DEBUG_ASM(65D8FC8);
    // chunk 0x65D8FC8 _sub_65D8FC8
    asm("loc_65D8FC8: mov _data_65E3440,%eax;");
    asm("loc_65D8FCD: cmp $0xFFFFFFFF,%eax;");
    asm("loc_65D8FD0: je loc_65D9067;");
    asm("loc_65D8FD6: push %esi;");
    asm("loc_65D8FD7: mov 8(%esp),%esi;");
    asm("loc_65D8FDB: test %esi,%esi;");
    asm("loc_65D8FDD: jne loc_65D8FEC;");
    asm("loc_65D8FDF: push %eax;");
    asm("loc_65D8FE0: calll *_import_65E1078;");
    asm("loc_65D8FE6: mov %eax,%esi;");
    asm("loc_65D8FE8: test %esi,%esi;");
    asm("loc_65D8FEA: je loc_65D9058;");
    asm("loc_65D8FEC: mov 0x24(%esi),%eax;");
    asm("loc_65D8FEF: test %eax,%eax;");
    asm("loc_65D8FF1: je loc_65D8FFA;");
    asm("loc_65D8FF3: push %eax;");
    asm("loc_65D8FF4: call _sub_65D7F23;");
    asm("loc_65D8FF9: pop %ecx;");
    asm("loc_65D8FFA: mov 0x28(%esi),%eax;");
    asm("loc_65D8FFD: test %eax,%eax;");
    asm("loc_65D8FFF: je loc_65D9008;");
    asm("loc_65D9001: push %eax;");
    asm("loc_65D9002: call _sub_65D7F23;");
    asm("loc_65D9007: pop %ecx;");
    asm("loc_65D9008: mov 0x30(%esi),%eax;");
    asm("loc_65D900B: test %eax,%eax;");
    asm("loc_65D900D: je loc_65D9016;");
    asm("loc_65D900F: push %eax;");
    asm("loc_65D9010: call _sub_65D7F23;");
    asm("loc_65D9015: pop %ecx;");
    asm("loc_65D9016: mov 0x38(%esi),%eax;");
    asm("loc_65D9019: test %eax,%eax;");
    asm("loc_65D901B: je loc_65D9024;");
    asm("loc_65D901D: push %eax;");
    asm("loc_65D901E: call _sub_65D7F23;");
    asm("loc_65D9023: pop %ecx;");
    asm("loc_65D9024: mov 0x40(%esi),%eax;");
    asm("loc_65D9027: test %eax,%eax;");
    asm("loc_65D9029: je loc_65D9032;");
    asm("loc_65D902B: push %eax;");
    asm("loc_65D902C: call _sub_65D7F23;");
    asm("loc_65D9031: pop %ecx;");
    asm("loc_65D9032: mov 0x44(%esi),%eax;");
    asm("loc_65D9035: test %eax,%eax;");
    asm("loc_65D9037: je loc_65D9040;");
    asm("loc_65D9039: push %eax;");
    asm("loc_65D903A: call _sub_65D7F23;");
    asm("loc_65D903F: pop %ecx;");
    asm("loc_65D9040: mov 0x50(%esi),%eax;");
    asm("loc_65D9043: cmp $_data_65E56B0,%eax;");
    asm("loc_65D9048: je loc_65D9051;");
    asm("loc_65D904A: push %eax;");
    asm("loc_65D904B: call _sub_65D7F23;");
    asm("loc_65D9050: pop %ecx;");
    asm("loc_65D9051: push %esi;");
    asm("loc_65D9052: call _sub_65D7F23;");
    asm("loc_65D9057: pop %ecx;");
    asm("loc_65D9058: push $0;");
    asm("loc_65D905A: pushl _data_65E3440;");
    asm("loc_65D9060: calll *_import_65E1068;");
    asm("loc_65D9066: pop %esi;");
    asm("loc_65D9067: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D9068() // ?terminate@@YAXXZ
{
    __DEBUG_ASM(65D9068);
    // chunk 0x65D9068 _sub_65D9068
    asm("loc_65D9068: push %ebp;");
    asm("loc_65D9069: mov %esp,%ebp;");
    asm("loc_65D906B: push $0xFFFFFFFF;");
    asm("loc_65D906D: push $_data_65E1680;");
    asm("loc_65D9072: push $_sub_65DCF2C;");
    asm("loc_65D9077: mov %fs:0,%eax;");
    asm("loc_65D907D: push %eax;");
    asm("loc_65D907E: mov %esp,%fs:0;");
    asm("loc_65D9085: push %ecx;");
    asm("loc_65D9086: push %ecx;");
    asm("loc_65D9087: push %ebx;");
    asm("loc_65D9088: push %esi;");
    asm("loc_65D9089: push %edi;");
    asm("loc_65D908A: mov %esp,-0x18(%ebp);");
    asm("loc_65D908D: xor %esi,%esi;");
    asm("loc_65D908F: mov %esi,-4(%ebp);");
    asm("loc_65D9092: call _sub_65D8F61;");
    asm("loc_65D9097: cmp %esi,0x60(%eax);");
    asm("loc_65D909A: je loc_65D90BB;");
    asm("loc_65D909C: movl $1,-4(%ebp);");
    asm("loc_65D90A3: call _sub_65D8F61;");
    asm("loc_65D90A8: calll *0x60(%eax);");
    asm("loc_65D90AB: mov %esi,-4(%ebp);");
    asm("loc_65D90AE: jmp loc_65D90BB;");
    asm("loc_65D90B0: push $1;");
    asm("loc_65D90B2: pop %eax;");
    asm("loc_65D90B3: ret;");
    asm("loc_65D90B4: mov -0x18(%ebp),%esp;");
    asm("loc_65D90B7: andl $0,-4(%ebp);");
    asm("loc_65D90BB: orl $0xFFFFFFFF,-4(%ebp);");
    asm("loc_65D90BF: call loc_65D90C4;");
    asm("loc_65D90C4: jmp loc_65DD390;");
    // chunk 0x65DD390 _sub_65DD390
    asm("loc_65DD390: push $0xA;");
    asm("loc_65DD392: call _sub_65DBAAF;");
    asm("loc_65DD397: push $0x16;");
    asm("loc_65DD399: call _sub_65DE658;");
    asm("loc_65DD39E: pop %ecx;");
    asm("loc_65DD39F: pop %ecx;");
    asm("loc_65DD3A0: push $3;");
    asm("loc_65DD3A2: call _sub_65D9A6E;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D90C9() // _sub_65D90C9
{
    __DEBUG_ASM(65D90C9);
    // chunk 0x65D90C9 _sub_65D90C9
    asm("loc_65D90C9: push %ebp;");
    asm("loc_65D90CA: mov %esp,%ebp;");
    asm("loc_65D90CC: push $0xFFFFFFFF;");
    asm("loc_65D90CE: push $_data_65E1698;");
    asm("loc_65D90D3: push $_sub_65DCF2C;");
    asm("loc_65D90D8: mov %fs:0,%eax;");
    asm("loc_65D90DE: push %eax;");
    asm("loc_65D90DF: mov %esp,%fs:0;");
    asm("loc_65D90E6: push %ecx;");
    asm("loc_65D90E7: push %ecx;");
    asm("loc_65D90E8: push %ebx;");
    asm("loc_65D90E9: push %esi;");
    asm("loc_65D90EA: push %edi;");
    asm("loc_65D90EB: mov %esp,-0x18(%ebp);");
    asm("loc_65D90EE: andl $0,-4(%ebp);");
    asm("loc_65D90F2: mov _off_65E3444,%eax;");
    asm("loc_65D90F7: test %eax,%eax;");
    asm("loc_65D90F9: je loc_65D9111;");
    asm("loc_65D90FB: movl $1,-4(%ebp);");
    asm("loc_65D9102: call *%eax;");
    asm("loc_65D9104: jmp loc_65D910D;");
    asm("loc_65D9106: push $1;");
    asm("loc_65D9108: pop %eax;");
    asm("loc_65D9109: ret;");
    asm("loc_65D910A: mov -0x18(%ebp),%esp;");
    asm("loc_65D910D: andl $0,-4(%ebp);");
    asm("loc_65D9111: orl $0xFFFFFFFF,-4(%ebp);");
    asm("loc_65D9115: call loc_65D911A;");
    asm("loc_65D911A: jmp _sub_65D9068;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D911F() // __flsbuf
{
    __DEBUG_ASM(65D911F);
    // chunk 0x65D911F _sub_65D911F
    asm("loc_65D911F: push %ebp;");
    asm("loc_65D9120: mov %esp,%ebp;");
    asm("loc_65D9122: push %ebx;");
    asm("loc_65D9123: push %esi;");
    asm("loc_65D9124: mov 0xC(%ebp),%esi;");
    asm("loc_65D9127: mov 0xC(%esi),%eax;");
    asm("loc_65D912A: mov 0x10(%esi),%ebx;");
    asm("loc_65D912D: test $0x82,%al;");
    asm("loc_65D912F: je loc_65D922B;");
    asm("loc_65D9135: test $0x40,%al;");
    asm("loc_65D9137: jne loc_65D922B;");
    asm("loc_65D913D: test $1,%al;");
    asm("loc_65D913F: je loc_65D9157;");
    asm("loc_65D9141: andl $0,4(%esi);");
    asm("loc_65D9145: test $0x10,%al;");
    asm("loc_65D9147: je loc_65D922B;");
    asm("loc_65D914D: mov 8(%esi),%ecx;");
    asm("loc_65D9150: and $0xFE,%al;");
    asm("loc_65D9152: mov %ecx,(%esi);");
    asm("loc_65D9154: mov %eax,0xC(%esi);");
    asm("loc_65D9157: mov 0xC(%esi),%eax;");
    asm("loc_65D915A: andl $0,4(%esi);");
    asm("loc_65D915E: andl $0,0xC(%ebp);");
    asm("loc_65D9162: and $0xEF,%al;");
    asm("loc_65D9164: or $2,%al;");
    asm("loc_65D9166: test $0x10C,%ax;");
    asm("loc_65D916A: mov %eax,0xC(%esi);");
    asm("loc_65D916D: jne loc_65D9191;");
    asm("loc_65D916F: cmp $_data_65E5758,%esi;");
    asm("loc_65D9175: je loc_65D917F;");
    asm("loc_65D9177: cmp $_data_65E5778,%esi;");
    asm("loc_65D917D: jne loc_65D918A;");
    asm("loc_65D917F: push %ebx;");
    asm("loc_65D9180: call _sub_65DD6B3;");
    asm("loc_65D9185: test %eax,%eax;");
    asm("loc_65D9187: pop %ecx;");
    asm("loc_65D9188: jne loc_65D9191;");
    asm("loc_65D918A: push %esi;");
    asm("loc_65D918B: call _sub_65DD66F;");
    asm("loc_65D9190: pop %ecx;");
    asm("loc_65D9191: testw $0x108,0xC(%esi);");
    asm("loc_65D9197: push %edi;");
    asm("loc_65D9198: je loc_65D9201;");
    asm("loc_65D919A: mov 8(%esi),%eax;");
    asm("loc_65D919D: mov (%esi),%edi;");
    asm("loc_65D919F: sub %eax,%edi;");
    asm("loc_65D91A1: lea 1(%eax),%ecx;");
    asm("loc_65D91A4: mov %ecx,(%esi);");
    asm("loc_65D91A6: mov 0x18(%esi),%ecx;");
    asm("loc_65D91A9: dec %ecx;");
    asm("loc_65D91AA: test %edi,%edi;");
    asm("loc_65D91AC: mov %ecx,4(%esi);");
    asm("loc_65D91AF: jle loc_65D91C1;");
    asm("loc_65D91B1: push %edi;");
    asm("loc_65D91B2: push %eax;");
    asm("loc_65D91B3: push %ebx;");
    asm("loc_65D91B4: call _sub_65DD47F;");
    asm("loc_65D91B9: add $0xC,%esp;");
    asm("loc_65D91BC: mov %eax,0xC(%ebp);");
    asm("loc_65D91BF: jmp loc_65D91F7;");
    asm("loc_65D91C1: cmp $0xFFFFFFFF,%ebx;");
    asm("loc_65D91C4: je loc_65D91DF;");
    asm("loc_65D91C6: mov %ebx,%ecx;");
    asm("loc_65D91C8: mov %ebx,%eax;");
    asm("loc_65D91CA: sar $5,%ecx;");
    asm("loc_65D91CD: and $0x1F,%eax;");
    asm("loc_65D91D0: mov _data_65E7940(,%ecx,4),%ecx;");
    asm("loc_65D91D7: lea (%eax,%eax,8),%eax;");
    asm("loc_65D91DA: lea (%ecx,%eax,4),%eax;");
    asm("loc_65D91DD: jmp loc_65D91E4;");
    asm("loc_65D91DF: mov $_data_65E3510,%eax;");
    asm("loc_65D91E4: testb $0x20,4(%eax);");
    asm("loc_65D91E8: je loc_65D91F7;");
    asm("loc_65D91EA: push $2;");
    asm("loc_65D91EC: push $0;");
    asm("loc_65D91EE: push %ebx;");
    asm("loc_65D91EF: call _sub_65DD3A7;");
    asm("loc_65D91F4: add $0xC,%esp;");
    asm("loc_65D91F7: mov 8(%esi),%eax;");
    asm("loc_65D91FA: mov 8(%ebp),%cl;");
    asm("loc_65D91FD: mov %cl,(%eax);");
    asm("loc_65D91FF: jmp loc_65D9215;");
    asm("loc_65D9201: push $1;");
    asm("loc_65D9203: lea 8(%ebp),%eax;");
    asm("loc_65D9206: pop %edi;");
    asm("loc_65D9207: push %edi;");
    asm("loc_65D9208: push %eax;");
    asm("loc_65D9209: push %ebx;");
    asm("loc_65D920A: call _sub_65DD47F;");
    asm("loc_65D920F: add $0xC,%esp;");
    asm("loc_65D9212: mov %eax,0xC(%ebp);");
    asm("loc_65D9215: cmp %edi,0xC(%ebp);");
    asm("loc_65D9218: pop %edi;");
    asm("loc_65D9219: je loc_65D9221;");
    asm("loc_65D921B: orl $0x20,0xC(%esi);");
    asm("loc_65D921F: jmp loc_65D9230;");
    asm("loc_65D9221: mov 8(%ebp),%eax;");
    asm("loc_65D9224: and $0xFF,%eax;");
    asm("loc_65D9229: jmp loc_65D9233;");
    asm("loc_65D922B: or $0x20,%al;");
    asm("loc_65D922D: mov %eax,0xC(%esi);");
    asm("loc_65D9230: or $0xFFFFFFFF,%eax;");
    asm("loc_65D9233: pop %esi;");
    asm("loc_65D9234: pop %ebx;");
    asm("loc_65D9235: pop %ebp;");
    asm("loc_65D9236: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D9237() // __output
{
    asm("jmp dgb_65D9237;"); // jumptable skip
    asm(".long _jmp_65D9958;"); // jumptable address
    __DEBUG_ASM(65D9237);
    // chunk 0x65D9237 _sub_65D9237
    asm("loc_65D9237: push %ebp;");
    asm("loc_65D9238: mov %esp,%ebp;");
    asm("loc_65D923A: sub $0x248,%esp;");
    asm("loc_65D9240: push %ebx;");
    asm("loc_65D9241: push %esi;");
    asm("loc_65D9242: push %edi;");
    asm("loc_65D9243: mov 0xC(%ebp),%edi;");
    asm("loc_65D9246: xor %esi,%esi;");
    asm("loc_65D9248: mov (%edi),%bl;");
    asm("loc_65D924A: inc %edi;");
    asm("loc_65D924B: test %bl,%bl;");
    asm("loc_65D924D: mov %esi,-0xC(%ebp);");
    asm("loc_65D9250: mov %esi,-0x14(%ebp);");
    asm("loc_65D9253: mov %edi,0xC(%ebp);");
    asm("loc_65D9256: je loc_65D9950;");
    asm("loc_65D925C: mov -0x10(%ebp),%ecx;");
    asm("loc_65D925F: xor %edx,%edx;");
    asm("loc_65D9261: jmp loc_65D926B;");
    asm("loc_65D9263: mov -0x10(%ebp),%ecx;");
    asm("loc_65D9266: mov -0x30(%ebp),%esi;");
    asm("loc_65D9269: xor %edx,%edx;");
    asm("loc_65D926B: cmp %edx,-0x14(%ebp);");
    asm("loc_65D926E: jl loc_65D9950;");
    asm("loc_65D9274: cmp $0x20,%bl;");
    asm("loc_65D9277: jl loc_65D928C;");
    asm("loc_65D9279: cmp $0x78,%bl;");
    asm("loc_65D927C: jg loc_65D928C;");
    asm("loc_65D927E: movsbl %bl,%eax;");
    asm("loc_65D9281: mov _off_65E1690(%eax),%al;");
    asm("loc_65D9287: and $0xF,%eax;");
    asm("loc_65D928A: jmp loc_65D928E;");
    asm("loc_65D928C: xor %eax,%eax;");
    asm("loc_65D928E: movsbl _data_65E16B0(%esi,%eax,8),%eax;");
    asm("loc_65D9296: sar $4,%eax;");
    asm("loc_65D9299: cmp $7,%eax;");
    asm("loc_65D929C: mov %eax,-0x30(%ebp);");
    asm("loc_65D929F: ja loc_65D993F;");
    asm("loc_65D92A5: jmpl *_jmp_65D9958(,%eax,4);");
    asm("loc_65D92AC: orl $0xFFFFFFFF,-0x10(%ebp);");
    asm("loc_65D92B0: mov %edx,-0x34(%ebp);");
    asm("loc_65D92B3: mov %edx,-0x28(%ebp);");
    asm("loc_65D92B6: mov %edx,-0x20(%ebp);");
    asm("loc_65D92B9: mov %edx,-0x1C(%ebp);");
    asm("loc_65D92BC: mov %edx,-4(%ebp);");
    asm("loc_65D92BF: mov %edx,-0x24(%ebp);");
    asm("loc_65D92C2: jmp loc_65D993F;");
    asm("loc_65D92C7: movsbl %bl,%eax;");
    asm("loc_65D92CA: sub $0x20,%eax;");
    asm("loc_65D92CD: je loc_65D930A;");
    asm("loc_65D92CF: sub $3,%eax;");
    asm("loc_65D92D2: je loc_65D9301;");
    asm("loc_65D92D4: sub $8,%eax;");
    asm("loc_65D92D7: je loc_65D92F8;");
    asm("loc_65D92D9: dec %eax;");
    asm("loc_65D92DA: dec %eax;");
    asm("loc_65D92DB: je loc_65D92EF;");
    asm("loc_65D92DD: sub $3,%eax;");
    asm("loc_65D92E0: jne loc_65D993F;");
    asm("loc_65D92E6: orl $8,-4(%ebp);");
    asm("loc_65D92EA: jmp loc_65D993F;");
    asm("loc_65D92EF: orl $4,-4(%ebp);");
    asm("loc_65D92F3: jmp loc_65D993F;");
    asm("loc_65D92F8: orl $1,-4(%ebp);");
    asm("loc_65D92FC: jmp loc_65D993F;");
    asm("loc_65D9301: orb $0x80,-4(%ebp);");
    asm("loc_65D9305: jmp loc_65D993F;");
    asm("loc_65D930A: orl $2,-4(%ebp);");
    asm("loc_65D930E: jmp loc_65D993F;");
    asm("loc_65D9313: cmp $0x2A,%bl;");
    asm("loc_65D9316: jne loc_65D933B;");
    asm("loc_65D9318: lea 0x10(%ebp),%eax;");
    asm("loc_65D931B: push %eax;");
    asm("loc_65D931C: call _sub_65D9A16;");
    asm("loc_65D9321: test %eax,%eax;");
    asm("loc_65D9323: pop %ecx;");
    asm("loc_65D9324: mov %eax,-0x20(%ebp);");
    asm("loc_65D9327: jge loc_65D993F;");
    asm("loc_65D932D: orl $4,-4(%ebp);");
    asm("loc_65D9331: neg %eax;");
    asm("loc_65D9333: mov %eax,-0x20(%ebp);");
    asm("loc_65D9336: jmp loc_65D993F;");
    asm("loc_65D933B: mov -0x20(%ebp),%eax;");
    asm("loc_65D933E: movsbl %bl,%ecx;");
    asm("loc_65D9341: lea (%eax,%eax,4),%eax;");
    asm("loc_65D9344: lea -0x30(%ecx,%eax,2),%eax;");
    asm("loc_65D9348: jmp loc_65D9333;");
    asm("loc_65D934A: mov %edx,-0x10(%ebp);");
    asm("loc_65D934D: jmp loc_65D993F;");
    asm("loc_65D9352: cmp $0x2A,%bl;");
    asm("loc_65D9355: jne loc_65D9375;");
    asm("loc_65D9357: lea 0x10(%ebp),%eax;");
    asm("loc_65D935A: push %eax;");
    asm("loc_65D935B: call _sub_65D9A16;");
    asm("loc_65D9360: test %eax,%eax;");
    asm("loc_65D9362: pop %ecx;");
    asm("loc_65D9363: mov %eax,-0x10(%ebp);");
    asm("loc_65D9366: jge loc_65D993F;");
    asm("loc_65D936C: orl $0xFFFFFFFF,-0x10(%ebp);");
    asm("loc_65D9370: jmp loc_65D993F;");
    asm("loc_65D9375: lea (%ecx,%ecx,4),%eax;");
    asm("loc_65D9378: movsbl %bl,%ecx;");
    asm("loc_65D937B: lea -0x30(%ecx,%eax,2),%eax;");
    asm("loc_65D937F: mov %eax,-0x10(%ebp);");
    asm("loc_65D9382: jmp loc_65D993F;");
    asm("loc_65D9387: cmp $0x49,%bl;");
    asm("loc_65D938A: je loc_65D93BA;");
    asm("loc_65D938C: cmp $0x68,%bl;");
    asm("loc_65D938F: je loc_65D93B1;");
    asm("loc_65D9391: cmp $0x6C,%bl;");
    asm("loc_65D9394: je loc_65D93A8;");
    asm("loc_65D9396: cmp $0x77,%bl;");
    asm("loc_65D9399: jne loc_65D993F;");
    asm("loc_65D939F: orb $8,-3(%ebp);");
    asm("loc_65D93A3: jmp loc_65D993F;");
    asm("loc_65D93A8: orl $0x10,-4(%ebp);");
    asm("loc_65D93AC: jmp loc_65D993F;");
    asm("loc_65D93B1: orl $0x20,-4(%ebp);");
    asm("loc_65D93B5: jmp loc_65D993F;");
    asm("loc_65D93BA: cmpb $0x36,(%edi);");
    asm("loc_65D93BD: jne loc_65D93D3;");
    asm("loc_65D93BF: cmpb $0x34,1(%edi);");
    asm("loc_65D93C3: jne loc_65D93D3;");
    asm("loc_65D93C5: inc %edi;");
    asm("loc_65D93C6: inc %edi;");
    asm("loc_65D93C7: orb $0x80,-3(%ebp);");
    asm("loc_65D93CB: mov %edi,0xC(%ebp);");
    asm("loc_65D93CE: jmp loc_65D993F;");
    asm("loc_65D93D3: mov %edx,-0x30(%ebp);");
    asm("loc_65D93D6: mov _off_65E59D0,%ecx;");
    asm("loc_65D93DC: mov %edx,-0x24(%ebp);");
    asm("loc_65D93DF: movzbl %bl,%eax;");
    asm("loc_65D93E2: testb $0x80,1(%ecx,%eax,2);");
    asm("loc_65D93E7: je loc_65D9402;");
    asm("loc_65D93E9: lea -0x14(%ebp),%eax;");
    asm("loc_65D93EC: push %eax;");
    asm("loc_65D93ED: pushl 8(%ebp);");
    asm("loc_65D93F0: movsbl %bl,%eax;");
    asm("loc_65D93F3: push %eax;");
    asm("loc_65D93F4: call _sub_65D9978;");
    asm("loc_65D93F9: mov (%edi),%bl;");
    asm("loc_65D93FB: add $0xC,%esp;");
    asm("loc_65D93FE: inc %edi;");
    asm("loc_65D93FF: mov %edi,0xC(%ebp);");
    asm("loc_65D9402: lea -0x14(%ebp),%eax;");
    asm("loc_65D9405: push %eax;");
    asm("loc_65D9406: pushl 8(%ebp);");
    asm("loc_65D9409: movsbl %bl,%eax;");
    asm("loc_65D940C: push %eax;");
    asm("loc_65D940D: call _sub_65D9978;");
    asm("loc_65D9412: add $0xC,%esp;");
    asm("loc_65D9415: jmp loc_65D993F;");
    asm("loc_65D941A: movsbl %bl,%eax;");
    asm("loc_65D941D: cmp $0x67,%eax;");
    asm("loc_65D9420: jg loc_65D9642;");
    asm("loc_65D9426: cmp $0x65,%eax;");
    asm("loc_65D9429: jge loc_65D94C5;");
    asm("loc_65D942F: cmp $0x58,%eax;");
    asm("loc_65D9432: jg loc_65D9523;");
    asm("loc_65D9438: je loc_65D96B6;");
    asm("loc_65D943E: sub $0x43,%eax;");
    asm("loc_65D9441: je loc_65D94E6;");
    asm("loc_65D9447: dec %eax;");
    asm("loc_65D9448: dec %eax;");
    asm("loc_65D9449: je loc_65D94BB;");
    asm("loc_65D944B: dec %eax;");
    asm("loc_65D944C: dec %eax;");
    asm("loc_65D944D: je loc_65D94BB;");
    asm("loc_65D944F: sub $0xC,%eax;");
    asm("loc_65D9452: jne loc_65D9841;");
    asm("loc_65D9458: testw $0x830,-4(%ebp);");
    asm("loc_65D945E: jne loc_65D9464;");
    asm("loc_65D9460: orb $8,-3(%ebp);");
    asm("loc_65D9464: mov -0x10(%ebp),%esi;");
    asm("loc_65D9467: cmp $0xFFFFFFFF,%esi;");
    asm("loc_65D946A: jne loc_65D9471;");
    asm("loc_65D946C: mov $0x7FFFFFFF,%esi;");
    asm("loc_65D9471: lea 0x10(%ebp),%eax;");
    asm("loc_65D9474: push %eax;");
    asm("loc_65D9475: call _sub_65D9A16;");
    asm("loc_65D947A: testw $0x810,-4(%ebp);");
    asm("loc_65D9480: pop %ecx;");
    asm("loc_65D9481: mov %eax,%ecx;");
    asm("loc_65D9483: mov %ecx,-8(%ebp);");
    asm("loc_65D9486: je loc_65D968A;");
    asm("loc_65D948C: test %ecx,%ecx;");
    asm("loc_65D948E: jne loc_65D9499;");
    asm("loc_65D9490: mov _off_65E344C,%ecx;");
    asm("loc_65D9496: mov %ecx,-8(%ebp);");
    asm("loc_65D9499: movl $1,-0x24(%ebp);");
    asm("loc_65D94A0: mov %ecx,%eax;");
    asm("loc_65D94A2: mov %esi,%edx;");
    asm("loc_65D94A4: dec %esi;");
    asm("loc_65D94A5: test %edx,%edx;");
    asm("loc_65D94A7: je loc_65D9681;");
    asm("loc_65D94AD: cmpw $0,(%eax);");
    asm("loc_65D94B1: je loc_65D9681;");
    asm("loc_65D94B7: inc %eax;");
    asm("loc_65D94B8: inc %eax;");
    asm("loc_65D94B9: jmp loc_65D94A2;");
    asm("loc_65D94BB: movl $1,-0x34(%ebp);");
    asm("loc_65D94C2: add $0x20,%bl;");
    asm("loc_65D94C5: orl $0x40,-4(%ebp);");
    asm("loc_65D94C9: lea -0x248(%ebp),%edi;");
    asm("loc_65D94CF: cmp %edx,%ecx;");
    asm("loc_65D94D1: mov %edi,-8(%ebp);");
    asm("loc_65D94D4: jge loc_65D95A9;");
    asm("loc_65D94DA: movl $6,-0x10(%ebp);");
    asm("loc_65D94E1: jmp loc_65D95B7;");
    asm("loc_65D94E6: testw $0x830,-4(%ebp);");
    asm("loc_65D94EC: jne loc_65D94F2;");
    asm("loc_65D94EE: orb $8,-3(%ebp);");
    asm("loc_65D94F2: testw $0x810,-4(%ebp);");
    asm("loc_65D94F8: lea 0x10(%ebp),%eax;");
    asm("loc_65D94FB: push %eax;");
    asm("loc_65D94FC: je loc_65D9539;");
    asm("loc_65D94FE: call _sub_65D9A33;");
    asm("loc_65D9503: push %eax;");
    asm("loc_65D9504: lea -0x248(%ebp),%eax;");
    asm("loc_65D950A: push %eax;");
    asm("loc_65D950B: call _sub_65DD83C;");
    asm("loc_65D9510: add $0xC,%esp;");
    asm("loc_65D9513: mov %eax,-0xC(%ebp);");
    asm("loc_65D9516: test %eax,%eax;");
    asm("loc_65D9518: jge loc_65D954C;");
    asm("loc_65D951A: movl $1,-0x28(%ebp);");
    asm("loc_65D9521: jmp loc_65D954C;");
    asm("loc_65D9523: sub $0x5A,%eax;");
    asm("loc_65D9526: je loc_65D955A;");
    asm("loc_65D9528: sub $9,%eax;");
    asm("loc_65D952B: je loc_65D94F2;");
    asm("loc_65D952D: dec %eax;");
    asm("loc_65D952E: je loc_65D971C;");
    asm("loc_65D9534: jmp loc_65D9841;");
    asm("loc_65D9539: call _sub_65D9A16;");
    asm("loc_65D953E: pop %ecx;");
    asm("loc_65D953F: mov %al,-0x248(%ebp);");
    asm("loc_65D9545: movl $1,-0xC(%ebp);");
    asm("loc_65D954C: lea -0x248(%ebp),%eax;");
    asm("loc_65D9552: mov %eax,-8(%ebp);");
    asm("loc_65D9555: jmp loc_65D9841;");
    asm("loc_65D955A: lea 0x10(%ebp),%eax;");
    asm("loc_65D955D: push %eax;");
    asm("loc_65D955E: call _sub_65D9A16;");
    asm("loc_65D9563: test %eax,%eax;");
    asm("loc_65D9565: pop %ecx;");
    asm("loc_65D9566: je loc_65D959B;");
    asm("loc_65D9568: mov 4(%eax),%ecx;");
    asm("loc_65D956B: test %ecx,%ecx;");
    asm("loc_65D956D: je loc_65D959B;");
    asm("loc_65D956F: testb $8,-3(%ebp);");
    asm("loc_65D9573: je loc_65D958C;");
    asm("loc_65D9575: movswl (%eax),%eax;");
    asm("loc_65D9578: shr $1,%eax;");
    asm("loc_65D957A: mov %ecx,-8(%ebp);");
    asm("loc_65D957D: mov %eax,-0xC(%ebp);");
    asm("loc_65D9580: movl $1,-0x24(%ebp);");
    asm("loc_65D9587: jmp loc_65D9841;");
    asm("loc_65D958C: andl $0,-0x24(%ebp);");
    asm("loc_65D9590: mov %ecx,-8(%ebp);");
    asm("loc_65D9593: movswl (%eax),%eax;");
    asm("loc_65D9596: jmp loc_65D983E;");
    asm("loc_65D959B: mov _off_65E3448,%eax;");
    asm("loc_65D95A0: mov %eax,-8(%ebp);");
    asm("loc_65D95A3: push %eax;");
    asm("loc_65D95A4: jmp loc_65D9637;");
    asm("loc_65D95A9: jne loc_65D95B7;");
    asm("loc_65D95AB: cmp $0x67,%bl;");
    asm("loc_65D95AE: jne loc_65D95B7;");
    asm("loc_65D95B0: movl $1,-0x10(%ebp);");
    asm("loc_65D95B7: mov 0x10(%ebp),%eax;");
    asm("loc_65D95BA: pushl -0x34(%ebp);");
    asm("loc_65D95BD: add $8,%eax;");
    asm("loc_65D95C0: mov %eax,0x10(%ebp);");
    asm("loc_65D95C3: pushl -0x10(%ebp);");
    asm("loc_65D95C6: mov -8(%eax),%ecx;");
    asm("loc_65D95C9: mov %ecx,-0x48(%ebp);");
    asm("loc_65D95CC: mov -4(%eax),%eax;");
    asm("loc_65D95CF: mov %eax,-0x44(%ebp);");
    asm("loc_65D95D2: movsbl %bl,%eax;");
    asm("loc_65D95D5: push %eax;");
    asm("loc_65D95D6: lea -0x248(%ebp),%eax;");
    asm("loc_65D95DC: push %eax;");
    asm("loc_65D95DD: lea -0x48(%ebp),%eax;");
    asm("loc_65D95E0: push %eax;");
    asm("loc_65D95E1: calll *_off_65E59B8;");
    asm("loc_65D95E7: mov -4(%ebp),%esi;");
    asm("loc_65D95EA: add $0x14,%esp;");
    asm("loc_65D95ED: and $0x80,%esi;");
    asm("loc_65D95F3: je loc_65D9609;");
    asm("loc_65D95F5: cmpl $0,-0x10(%ebp);");
    asm("loc_65D95F9: jne loc_65D9609;");
    asm("loc_65D95FB: lea -0x248(%ebp),%eax;");
    asm("loc_65D9601: push %eax;");
    asm("loc_65D9602: calll *_off_65E59C4;");
    asm("loc_65D9608: pop %ecx;");
    asm("loc_65D9609: cmp $0x67,%bl;");
    asm("loc_65D960C: jne loc_65D9620;");
    asm("loc_65D960E: test %esi,%esi;");
    asm("loc_65D9610: jne loc_65D9620;");
    asm("loc_65D9612: lea -0x248(%ebp),%eax;");
    asm("loc_65D9618: push %eax;");
    asm("loc_65D9619: calll *_off_65E59BC;");
    asm("loc_65D961F: pop %ecx;");
    asm("loc_65D9620: cmpb $0x2D,-0x248(%ebp);");
    asm("loc_65D9627: jne loc_65D9636;");
    asm("loc_65D9629: orb $1,-3(%ebp);");
    asm("loc_65D962D: lea -0x247(%ebp),%edi;");
    asm("loc_65D9633: mov %edi,-8(%ebp);");
    asm("loc_65D9636: push %edi;");
    asm("loc_65D9637: call _sub_65D8120;");
    asm("loc_65D963C: pop %ecx;");
    asm("loc_65D963D: jmp loc_65D983E;");
    asm("loc_65D9642: sub $0x69,%eax;");
    asm("loc_65D9645: je loc_65D971C;");
    asm("loc_65D964B: sub $5,%eax;");
    asm("loc_65D964E: je loc_65D96F2;");
    asm("loc_65D9654: dec %eax;");
    asm("loc_65D9655: je loc_65D96DF;");
    asm("loc_65D965B: dec %eax;");
    asm("loc_65D965C: je loc_65D96AF;");
    asm("loc_65D965E: sub $3,%eax;");
    asm("loc_65D9661: je loc_65D9464;");
    asm("loc_65D9667: dec %eax;");
    asm("loc_65D9668: dec %eax;");
    asm("loc_65D9669: je loc_65D9720;");
    asm("loc_65D966F: sub $3,%eax;");
    asm("loc_65D9672: jne loc_65D9841;");
    asm("loc_65D9678: movl $0x27,-0x2C(%ebp);");
    asm("loc_65D967F: jmp loc_65D96BD;");
    asm("loc_65D9681: sub %ecx,%eax;");
    asm("loc_65D9683: sar $1,%eax;");
    asm("loc_65D9685: jmp loc_65D983E;");
    asm("loc_65D968A: test %ecx,%ecx;");
    asm("loc_65D968C: jne loc_65D9697;");
    asm("loc_65D968E: mov _off_65E3448,%ecx;");
    asm("loc_65D9694: mov %ecx,-8(%ebp);");
    asm("loc_65D9697: mov %ecx,%eax;");
    asm("loc_65D9699: mov %esi,%edx;");
    asm("loc_65D969B: dec %esi;");
    asm("loc_65D969C: test %edx,%edx;");
    asm("loc_65D969E: je loc_65D96A8;");
    asm("loc_65D96A0: cmpb $0,(%eax);");
    asm("loc_65D96A3: je loc_65D96A8;");
    asm("loc_65D96A5: inc %eax;");
    asm("loc_65D96A6: jmp loc_65D9699;");
    asm("loc_65D96A8: sub %ecx,%eax;");
    asm("loc_65D96AA: jmp loc_65D983E;");
    asm("loc_65D96AF: movl $8,-0x10(%ebp);");
    asm("loc_65D96B6: movl $7,-0x2C(%ebp);");
    asm("loc_65D96BD: testb $0x80,-4(%ebp);");
    asm("loc_65D96C1: movl $0x10,-0xC(%ebp);");
    asm("loc_65D96C8: je loc_65D9727;");
    asm("loc_65D96CA: mov -0x2C(%ebp),%al;");
    asm("loc_65D96CD: movb $0x30,-0x16(%ebp);");
    asm("loc_65D96D1: add $0x51,%al;");
    asm("loc_65D96D3: movl $2,-0x1C(%ebp);");
    asm("loc_65D96DA: mov %al,-0x15(%ebp);");
    asm("loc_65D96DD: jmp loc_65D9727;");
    asm("loc_65D96DF: testb $0x80,-4(%ebp);");
    asm("loc_65D96E3: movl $8,-0xC(%ebp);");
    asm("loc_65D96EA: je loc_65D9727;");
    asm("loc_65D96EC: orb $2,-3(%ebp);");
    asm("loc_65D96F0: jmp loc_65D9727;");
    asm("loc_65D96F2: lea 0x10(%ebp),%eax;");
    asm("loc_65D96F5: push %eax;");
    asm("loc_65D96F6: call _sub_65D9A16;");
    asm("loc_65D96FB: testb $0x20,-4(%ebp);");
    asm("loc_65D96FF: pop %ecx;");
    asm("loc_65D9700: je loc_65D970B;");
    asm("loc_65D9702: mov -0x14(%ebp),%cx;");
    asm("loc_65D9706: mov %cx,(%eax);");
    asm("loc_65D9709: jmp loc_65D9710;");
    asm("loc_65D970B: mov -0x14(%ebp),%ecx;");
    asm("loc_65D970E: mov %ecx,(%eax);");
    asm("loc_65D9710: movl $1,-0x28(%ebp);");
    asm("loc_65D9717: jmp loc_65D993F;");
    asm("loc_65D971C: orl $0x40,-4(%ebp);");
    asm("loc_65D9720: movl $0xA,-0xC(%ebp);");
    asm("loc_65D9727: testb $0x80,-3(%ebp);");
    asm("loc_65D972B: je loc_65D9739;");
    asm("loc_65D972D: lea 0x10(%ebp),%eax;");
    asm("loc_65D9730: push %eax;");
    asm("loc_65D9731: call _sub_65D9A23;");
    asm("loc_65D9736: pop %ecx;");
    asm("loc_65D9737: jmp loc_65D977A;");
    asm("loc_65D9739: testb $0x20,-4(%ebp);");
    asm("loc_65D973D: je loc_65D9760;");
    asm("loc_65D973F: testb $0x40,-4(%ebp);");
    asm("loc_65D9743: lea 0x10(%ebp),%eax;");
    asm("loc_65D9746: push %eax;");
    asm("loc_65D9747: je loc_65D9755;");
    asm("loc_65D9749: call _sub_65D9A16;");
    asm("loc_65D974E: pop %ecx;");
    asm("loc_65D974F: movswl %ax,%eax;");
    asm("loc_65D9752: cltd;");
    asm("loc_65D9753: jmp loc_65D977A;");
    asm("loc_65D9755: call _sub_65D9A16;");
    asm("loc_65D975A: pop %ecx;");
    asm("loc_65D975B: movzwl %ax,%eax;");
    asm("loc_65D975E: jmp loc_65D9752;");
    asm("loc_65D9760: testb $0x40,-4(%ebp);");
    asm("loc_65D9764: lea 0x10(%ebp),%eax;");
    asm("loc_65D9767: push %eax;");
    asm("loc_65D9768: je loc_65D9772;");
    asm("loc_65D976A: call _sub_65D9A16;");
    asm("loc_65D976F: pop %ecx;");
    asm("loc_65D9770: jmp loc_65D9752;");
    asm("loc_65D9772: call _sub_65D9A16;");
    asm("loc_65D9777: pop %ecx;");
    asm("loc_65D9778: xor %edx,%edx;");
    asm("loc_65D977A: testb $0x40,-4(%ebp);");
    asm("loc_65D977E: je loc_65D979B;");
    asm("loc_65D9780: test %edx,%edx;");
    asm("loc_65D9782: jg loc_65D979B;");
    asm("loc_65D9784: jl loc_65D978A;");
    asm("loc_65D9786: test %eax,%eax;");
    asm("loc_65D9788: jae loc_65D979B;");
    asm("loc_65D978A: neg %eax;");
    asm("loc_65D978C: adc $0,%edx;");
    asm("loc_65D978F: mov %eax,%esi;");
    asm("loc_65D9791: neg %edx;");
    asm("loc_65D9793: orb $1,-3(%ebp);");
    asm("loc_65D9797: mov %edx,%edi;");
    asm("loc_65D9799: jmp loc_65D979F;");
    asm("loc_65D979B: mov %eax,%esi;");
    asm("loc_65D979D: mov %edx,%edi;");
    asm("loc_65D979F: testb $0x80,-3(%ebp);");
    asm("loc_65D97A3: jne loc_65D97A8;");
    asm("loc_65D97A5: and $0,%edi;");
    asm("loc_65D97A8: cmpl $0,-0x10(%ebp);");
    asm("loc_65D97AC: jge loc_65D97B7;");
    asm("loc_65D97AE: movl $1,-0x10(%ebp);");
    asm("loc_65D97B5: jmp loc_65D97BB;");
    asm("loc_65D97B7: andl $0xFFFFFFF7,-4(%ebp);");
    asm("loc_65D97BB: mov %esi,%eax;");
    asm("loc_65D97BD: or %edi,%eax;");
    asm("loc_65D97BF: jne loc_65D97C5;");
    asm("loc_65D97C1: andl $0,-0x1C(%ebp);");
    asm("loc_65D97C5: lea -0x49(%ebp),%eax;");
    asm("loc_65D97C8: mov %eax,-8(%ebp);");
    asm("loc_65D97CB: mov -0x10(%ebp),%eax;");
    asm("loc_65D97CE: decl -0x10(%ebp);");
    asm("loc_65D97D1: test %eax,%eax;");
    asm("loc_65D97D3: jg loc_65D97DB;");
    asm("loc_65D97D5: mov %esi,%eax;");
    asm("loc_65D97D7: or %edi,%eax;");
    asm("loc_65D97D9: je loc_65D9816;");
    asm("loc_65D97DB: mov -0xC(%ebp),%eax;");
    asm("loc_65D97DE: cltd;");
    asm("loc_65D97DF: push %edx;");
    asm("loc_65D97E0: push %eax;");
    asm("loc_65D97E1: push %edi;");
    asm("loc_65D97E2: push %esi;");
    asm("loc_65D97E3: mov %eax,-0x40(%ebp);");
    asm("loc_65D97E6: mov %edx,-0x3C(%ebp);");
    asm("loc_65D97E9: call _sub_65DD970;");
    asm("loc_65D97EE: pushl -0x3C(%ebp);");
    asm("loc_65D97F1: mov %eax,%ebx;");
    asm("loc_65D97F3: add $0x30,%ebx;");
    asm("loc_65D97F6: pushl -0x40(%ebp);");
    asm("loc_65D97F9: push %edi;");
    asm("loc_65D97FA: push %esi;");
    asm("loc_65D97FB: call _sub_65DD900;");
    asm("loc_65D9800: cmp $0x39,%ebx;");
    asm("loc_65D9803: mov %eax,%esi;");
    asm("loc_65D9805: mov %edx,%edi;");
    asm("loc_65D9807: jle loc_65D980C;");
    asm("loc_65D9809: add -0x2C(%ebp),%ebx;");
    asm("loc_65D980C: mov -8(%ebp),%eax;");
    asm("loc_65D980F: decl -8(%ebp);");
    asm("loc_65D9812: mov %bl,(%eax);");
    asm("loc_65D9814: jmp loc_65D97CB;");
    asm("loc_65D9816: lea -0x49(%ebp),%eax;");
    asm("loc_65D9819: sub -8(%ebp),%eax;");
    asm("loc_65D981C: incl -8(%ebp);");
    asm("loc_65D981F: testb $2,-3(%ebp);");
    asm("loc_65D9823: mov %eax,-0xC(%ebp);");
    asm("loc_65D9826: je loc_65D9841;");
    asm("loc_65D9828: mov -8(%ebp),%ecx;");
    asm("loc_65D982B: cmpb $0x30,(%ecx);");
    asm("loc_65D982E: jne loc_65D9834;");
    asm("loc_65D9830: test %eax,%eax;");
    asm("loc_65D9832: jne loc_65D9841;");
    asm("loc_65D9834: decl -8(%ebp);");
    asm("loc_65D9837: inc %eax;");
    asm("loc_65D9838: mov -8(%ebp),%ecx;");
    asm("loc_65D983B: movb $0x30,(%ecx);");
    asm("loc_65D983E: mov %eax,-0xC(%ebp);");
    asm("loc_65D9841: cmpl $0,-0x28(%ebp);");
    asm("loc_65D9845: jne loc_65D993F;");
    asm("loc_65D984B: mov -4(%ebp),%ebx;");
    asm("loc_65D984E: test $0x40,%bl;");
    asm("loc_65D9851: je loc_65D9879;");
    asm("loc_65D9853: test $1,%bh;");
    asm("loc_65D9856: je loc_65D985E;");
    asm("loc_65D9858: movb $0x2D,-0x16(%ebp);");
    asm("loc_65D985C: jmp loc_65D9872;");
    asm("loc_65D985E: test $1,%bl;");
    asm("loc_65D9861: je loc_65D9869;");
    asm("loc_65D9863: movb $0x2B,-0x16(%ebp);");
    asm("loc_65D9867: jmp loc_65D9872;");
    asm("loc_65D9869: test $2,%bl;");
    asm("loc_65D986C: je loc_65D9879;");
    asm("loc_65D986E: movb $0x20,-0x16(%ebp);");
    asm("loc_65D9872: movl $1,-0x1C(%ebp);");
    asm("loc_65D9879: mov -0x20(%ebp),%esi;");
    asm("loc_65D987C: sub -0x1C(%ebp),%esi;");
    asm("loc_65D987F: sub -0xC(%ebp),%esi;");
    asm("loc_65D9882: test $0xC,%bl;");
    asm("loc_65D9885: jne loc_65D9899;");
    asm("loc_65D9887: lea -0x14(%ebp),%eax;");
    asm("loc_65D988A: push %eax;");
    asm("loc_65D988B: pushl 8(%ebp);");
    asm("loc_65D988E: push %esi;");
    asm("loc_65D988F: push $0x20;");
    asm("loc_65D9891: call _sub_65D99AD;");
    asm("loc_65D9896: add $0x10,%esp;");
    asm("loc_65D9899: lea -0x14(%ebp),%eax;");
    asm("loc_65D989C: push %eax;");
    asm("loc_65D989D: lea -0x16(%ebp),%eax;");
    asm("loc_65D98A0: pushl 8(%ebp);");
    asm("loc_65D98A3: pushl -0x1C(%ebp);");
    asm("loc_65D98A6: push %eax;");
    asm("loc_65D98A7: call _sub_65D99DE;");
    asm("loc_65D98AC: add $0x10,%esp;");
    asm("loc_65D98AF: test $8,%bl;");
    asm("loc_65D98B2: je loc_65D98CB;");
    asm("loc_65D98B4: test $4,%bl;");
    asm("loc_65D98B7: jne loc_65D98CB;");
    asm("loc_65D98B9: lea -0x14(%ebp),%eax;");
    asm("loc_65D98BC: push %eax;");
    asm("loc_65D98BD: pushl 8(%ebp);");
    asm("loc_65D98C0: push %esi;");
    asm("loc_65D98C1: push $0x30;");
    asm("loc_65D98C3: call _sub_65D99AD;");
    asm("loc_65D98C8: add $0x10,%esp;");
    asm("loc_65D98CB: cmpl $0,-0x24(%ebp);");
    asm("loc_65D98CF: je loc_65D9912;");
    asm("loc_65D98D1: cmpl $0,-0xC(%ebp);");
    asm("loc_65D98D5: jle loc_65D9912;");
    asm("loc_65D98D7: mov -0xC(%ebp),%eax;");
    asm("loc_65D98DA: mov -8(%ebp),%ebx;");
    asm("loc_65D98DD: lea -1(%eax),%edi;");
    asm("loc_65D98E0: mov (%ebx),%ax;");
    asm("loc_65D98E3: inc %ebx;");
    asm("loc_65D98E4: push %eax;");
    asm("loc_65D98E5: lea -0x38(%ebp),%eax;");
    asm("loc_65D98E8: push %eax;");
    asm("loc_65D98E9: inc %ebx;");
    asm("loc_65D98EA: call _sub_65DD83C;");
    asm("loc_65D98EF: pop %ecx;");
    asm("loc_65D98F0: test %eax,%eax;");
    asm("loc_65D98F2: pop %ecx;");
    asm("loc_65D98F3: jle loc_65D9927;");
    asm("loc_65D98F5: lea -0x14(%ebp),%ecx;");
    asm("loc_65D98F8: push %ecx;");
    asm("loc_65D98F9: pushl 8(%ebp);");
    asm("loc_65D98FC: push %eax;");
    asm("loc_65D98FD: lea -0x38(%ebp),%eax;");
    asm("loc_65D9900: push %eax;");
    asm("loc_65D9901: call _sub_65D99DE;");
    asm("loc_65D9906: add $0x10,%esp;");
    asm("loc_65D9909: mov %edi,%eax;");
    asm("loc_65D990B: dec %edi;");
    asm("loc_65D990C: test %eax,%eax;");
    asm("loc_65D990E: jne loc_65D98E0;");
    asm("loc_65D9910: jmp loc_65D9927;");
    asm("loc_65D9912: lea -0x14(%ebp),%eax;");
    asm("loc_65D9915: push %eax;");
    asm("loc_65D9916: pushl 8(%ebp);");
    asm("loc_65D9919: pushl -0xC(%ebp);");
    asm("loc_65D991C: pushl -8(%ebp);");
    asm("loc_65D991F: call _sub_65D99DE;");
    asm("loc_65D9924: add $0x10,%esp;");
    asm("loc_65D9927: testb $4,-4(%ebp);");
    asm("loc_65D992B: je loc_65D993F;");
    asm("loc_65D992D: lea -0x14(%ebp),%eax;");
    asm("loc_65D9930: push %eax;");
    asm("loc_65D9931: pushl 8(%ebp);");
    asm("loc_65D9934: push %esi;");
    asm("loc_65D9935: push $0x20;");
    asm("loc_65D9937: call _sub_65D99AD;");
    asm("loc_65D993C: add $0x10,%esp;");
    asm("loc_65D993F: mov 0xC(%ebp),%edi;");
    asm("loc_65D9942: mov (%edi),%bl;");
    asm("loc_65D9944: inc %edi;");
    asm("loc_65D9945: test %bl,%bl;");
    asm("loc_65D9947: mov %edi,0xC(%ebp);");
    asm("loc_65D994A: jne loc_65D9263;");
    asm("loc_65D9950: mov -0x14(%ebp),%eax;");
    asm("loc_65D9953: pop %edi;");
    asm("loc_65D9954: pop %esi;");
    asm("loc_65D9955: pop %ebx;");
    asm("loc_65D9956: leave;");
    asm("loc_65D9957: ret;");
    asm("int3;"); // unreachable
    asm("_jmp_65D9958: .long loc_65D93D6;");
    asm(".long loc_65D92AC;");
    asm(".long loc_65D92C7;");
    asm(".long loc_65D9313;");
    asm(".long loc_65D934A;");
    asm(".long loc_65D9352;");
    asm(".long loc_65D9387;");
    asm(".long loc_65D941A;");
    asm(".long 0xCCCCCCCC;");
}
FIXUP_JUMP_TABLE(_sub_65D9237);
_naked _weak void _sub_65D9978() // _write_char
{
    __DEBUG_ASM(65D9978);
    // chunk 0x65D9978 _sub_65D9978
    asm("loc_65D9978: push %ebp;");
    asm("loc_65D9979: mov %esp,%ebp;");
    asm("loc_65D997B: mov 0xC(%ebp),%ecx;");
    asm("loc_65D997E: decl 4(%ecx);");
    asm("loc_65D9981: js loc_65D9991;");
    asm("loc_65D9983: mov (%ecx),%edx;");
    asm("loc_65D9985: mov 8(%ebp),%al;");
    asm("loc_65D9988: mov %al,(%edx);");
    asm("loc_65D998A: incl (%ecx);");
    asm("loc_65D998C: movzbl %al,%eax;");
    asm("loc_65D998F: jmp loc_65D999C;");
    asm("loc_65D9991: push %ecx;");
    asm("loc_65D9992: pushl 8(%ebp);");
    asm("loc_65D9995: call _sub_65D911F;");
    asm("loc_65D999A: pop %ecx;");
    asm("loc_65D999B: pop %ecx;");
    asm("loc_65D999C: cmp $0xFFFFFFFF,%eax;");
    asm("loc_65D999F: mov 0x10(%ebp),%eax;");
    asm("loc_65D99A2: jne loc_65D99A9;");
    asm("loc_65D99A4: orl $0xFFFFFFFF,(%eax);");
    asm("loc_65D99A7: pop %ebp;");
    asm("loc_65D99A8: ret;");
    asm("loc_65D99A9: incl (%eax);");
    asm("loc_65D99AB: pop %ebp;");
    asm("loc_65D99AC: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D99AD() // _write_multi_char
{
    __DEBUG_ASM(65D99AD);
    // chunk 0x65D99AD _sub_65D99AD
    asm("loc_65D99AD: push %esi;");
    asm("loc_65D99AE: push %edi;");
    asm("loc_65D99AF: mov 0x10(%esp),%edi;");
    asm("loc_65D99B3: mov %edi,%eax;");
    asm("loc_65D99B5: dec %edi;");
    asm("loc_65D99B6: test %eax,%eax;");
    asm("loc_65D99B8: jle loc_65D99DB;");
    asm("loc_65D99BA: mov 0x18(%esp),%esi;");
    asm("loc_65D99BE: push %esi;");
    asm("loc_65D99BF: pushl 0x18(%esp);");
    asm("loc_65D99C3: pushl 0x14(%esp);");
    asm("loc_65D99C7: call _sub_65D9978;");
    asm("loc_65D99CC: add $0xC,%esp;");
    asm("loc_65D99CF: cmpl $0xFFFFFFFF,(%esi);");
    asm("loc_65D99D2: je loc_65D99DB;");
    asm("loc_65D99D4: mov %edi,%eax;");
    asm("loc_65D99D6: dec %edi;");
    asm("loc_65D99D7: test %eax,%eax;");
    asm("loc_65D99D9: jg loc_65D99BE;");
    asm("loc_65D99DB: pop %edi;");
    asm("loc_65D99DC: pop %esi;");
    asm("loc_65D99DD: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D99DE() // _write_string
{
    __DEBUG_ASM(65D99DE);
    // chunk 0x65D99DE _sub_65D99DE
    asm("loc_65D99DE: push %ebx;");
    asm("loc_65D99DF: mov 0xC(%esp),%ebx;");
    asm("loc_65D99E3: mov %ebx,%eax;");
    asm("loc_65D99E5: dec %ebx;");
    asm("loc_65D99E6: push %esi;");
    asm("loc_65D99E7: push %edi;");
    asm("loc_65D99E8: test %eax,%eax;");
    asm("loc_65D99EA: jle loc_65D9A12;");
    asm("loc_65D99EC: mov 0x1C(%esp),%edi;");
    asm("loc_65D99F0: mov 0x10(%esp),%esi;");
    asm("loc_65D99F4: movsbl (%esi),%eax;");
    asm("loc_65D99F7: push %edi;");
    asm("loc_65D99F8: inc %esi;");
    asm("loc_65D99F9: pushl 0x1C(%esp);");
    asm("loc_65D99FD: push %eax;");
    asm("loc_65D99FE: call _sub_65D9978;");
    asm("loc_65D9A03: add $0xC,%esp;");
    asm("loc_65D9A06: cmpl $0xFFFFFFFF,(%edi);");
    asm("loc_65D9A09: je loc_65D9A12;");
    asm("loc_65D9A0B: mov %ebx,%eax;");
    asm("loc_65D9A0D: dec %ebx;");
    asm("loc_65D9A0E: test %eax,%eax;");
    asm("loc_65D9A10: jg loc_65D99F4;");
    asm("loc_65D9A12: pop %edi;");
    asm("loc_65D9A13: pop %esi;");
    asm("loc_65D9A14: pop %ebx;");
    asm("loc_65D9A15: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D9A16() // _get_int_arg
{
    __DEBUG_ASM(65D9A16);
    // chunk 0x65D9A16 _sub_65D9A16
    asm("loc_65D9A16: mov 4(%esp),%eax;");
    asm("loc_65D9A1A: addl $4,(%eax);");
    asm("loc_65D9A1D: mov (%eax),%eax;");
    asm("loc_65D9A1F: mov -4(%eax),%eax;");
    asm("loc_65D9A22: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D9A23() // _get_int64_arg
{
    __DEBUG_ASM(65D9A23);
    // chunk 0x65D9A23 _sub_65D9A23
    asm("loc_65D9A23: mov 4(%esp),%eax;");
    asm("loc_65D9A27: addl $8,(%eax);");
    asm("loc_65D9A2A: mov (%eax),%ecx;");
    asm("loc_65D9A2C: mov -8(%ecx),%eax;");
    asm("loc_65D9A2F: mov -4(%ecx),%edx;");
    asm("loc_65D9A32: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D9A33() // _get_short_arg
{
    __DEBUG_ASM(65D9A33);
    // chunk 0x65D9A33 _sub_65D9A33
    asm("loc_65D9A33: mov 4(%esp),%eax;");
    asm("loc_65D9A37: addl $4,(%eax);");
    asm("loc_65D9A3A: mov (%eax),%eax;");
    asm("loc_65D9A3C: mov -4(%eax),%ax;");
    asm("loc_65D9A40: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D9A41() // __cinit
{
    __DEBUG_ASM(65D9A41);
    // chunk 0x65D9A41 _sub_65D9A41
    asm("loc_65D9A41: mov _data_65E7A54,%eax;");
    asm("loc_65D9A46: test %eax,%eax;");
    asm("loc_65D9A48: je loc_65D9A4C;");
    asm("loc_65D9A4A: call *%eax;");
    asm("loc_65D9A4C: push $_data_65E3024;");
    asm("loc_65D9A51: push $_data_65E3010;");
    asm("loc_65D9A56: call _sub_65D9B45;");
    asm("loc_65D9A5B: push $_data_65E300C;");
    asm("loc_65D9A60: push $_data_65E3000;");
    asm("loc_65D9A65: call _sub_65D9B45;");
    asm("loc_65D9A6A: add $0x10,%esp;");
    asm("loc_65D9A6D: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D9A6E() // __exit
{
    __DEBUG_ASM(65D9A6E);
    // chunk 0x65D9A6E _sub_65D9A6E
    asm("loc_65D9A6E: push $0;");
    asm("loc_65D9A70: push $1;");
    asm("loc_65D9A72: pushl 0xC(%esp);");
    asm("loc_65D9A76: call _sub_65D9A8E;");
    asm("loc_65D9A7B: add $0xC,%esp;");
    asm("loc_65D9A7E: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D9A7F() // __cexit
{
    __DEBUG_ASM(65D9A7F);
    // chunk 0x65D9A7F _sub_65D9A7F
    asm("loc_65D9A7F: push $1;");
    asm("loc_65D9A81: push $0;");
    asm("loc_65D9A83: push $0;");
    asm("loc_65D9A85: call _sub_65D9A8E;");
    asm("loc_65D9A8A: add $0xC,%esp;");
    asm("loc_65D9A8D: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D9A8E() // _doexit
{
    __DEBUG_ASM(65D9A8E);
    // chunk 0x65D9A8E _sub_65D9A8E
    asm("loc_65D9A8E: push %edi;");
    asm("loc_65D9A8F: call _sub_65D9B33;");
    asm("loc_65D9A94: push $1;");
    asm("loc_65D9A96: pop %edi;");
    asm("loc_65D9A97: cmp %edi,_data_65E6174;");
    asm("loc_65D9A9D: jne loc_65D9AB0;");
    asm("loc_65D9A9F: pushl 8(%esp);");
    asm("loc_65D9AA3: calll *_import_65E1088;");
    asm("loc_65D9AA9: push %eax;");
    asm("loc_65D9AAA: calll *_import_65E1084;");
    asm("loc_65D9AB0: cmpl $0,0xC(%esp);");
    asm("loc_65D9AB5: push %ebx;");
    asm("loc_65D9AB6: mov 0x14(%esp),%ebx;");
    asm("loc_65D9ABA: mov %edi,_data_65E6170;");
    asm("loc_65D9AC0: mov %bl,_data_65E616C;");
    asm("loc_65D9AC6: jne loc_65D9B04;");
    asm("loc_65D9AC8: mov _data_65E7A50,%eax;");
    asm("loc_65D9ACD: test %eax,%eax;");
    asm("loc_65D9ACF: je loc_65D9AF3;");
    asm("loc_65D9AD1: mov _data_65E7A4C,%ecx;");
    asm("loc_65D9AD7: push %esi;");
    asm("loc_65D9AD8: lea -4(%ecx),%esi;");
    asm("loc_65D9ADB: cmp %eax,%esi;");
    asm("loc_65D9ADD: jb loc_65D9AF2;");
    asm("loc_65D9ADF: mov (%esi),%eax;");
    asm("loc_65D9AE1: test %eax,%eax;");
    asm("loc_65D9AE3: je loc_65D9AE7;");
    asm("loc_65D9AE5: call *%eax;");
    asm("loc_65D9AE7: sub $4,%esi;");
    asm("loc_65D9AEA: cmp _data_65E7A50,%esi;");
    asm("loc_65D9AF0: jae loc_65D9ADF;");
    asm("loc_65D9AF2: pop %esi;");
    asm("loc_65D9AF3: push $_data_65E3030;");
    asm("loc_65D9AF8: push $_data_65E3028;");
    asm("loc_65D9AFD: call _sub_65D9B45;");
    asm("loc_65D9B02: pop %ecx;");
    asm("loc_65D9B03: pop %ecx;");
    asm("loc_65D9B04: push $_data_65E303C;");
    asm("loc_65D9B09: push $_data_65E3034;");
    asm("loc_65D9B0E: call _sub_65D9B45;");
    asm("loc_65D9B13: pop %ecx;");
    asm("loc_65D9B14: pop %ecx;");
    asm("loc_65D9B15: test %ebx,%ebx;");
    asm("loc_65D9B17: pop %ebx;");
    asm("loc_65D9B18: je loc_65D9B21;");
    asm("loc_65D9B1A: call _sub_65D9B3C;");
    asm("loc_65D9B1F: pop %edi;");
    asm("loc_65D9B20: ret;");
    asm("loc_65D9B21: pushl 8(%esp);");
    asm("loc_65D9B25: mov %edi,_data_65E6174;");
    asm("loc_65D9B2B: calll *_import_65E1080;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D9B31() // _sub_65D9B31
{
    __DEBUG_ASM(65D9B31);
    // chunk 0x65D9B31 _sub_65D9B31
    asm("loc_65D9B31: pop %edi;");
    asm("loc_65D9B32: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D9B33() // __lockexit
{
    __DEBUG_ASM(65D9B33);
    // chunk 0x65D9B33 _sub_65D9B33
    asm("loc_65D9B33: push $0xD;");
    asm("loc_65D9B35: call _sub_65DCEAB;");
    asm("loc_65D9B3A: pop %ecx;");
    asm("loc_65D9B3B: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D9B3C() // __unlockexit
{
    __DEBUG_ASM(65D9B3C);
    // chunk 0x65D9B3C _sub_65D9B3C
    asm("loc_65D9B3C: push $0xD;");
    asm("loc_65D9B3E: call _sub_65DCF0C;");
    asm("loc_65D9B43: pop %ecx;");
    asm("loc_65D9B44: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D9B45() // __initterm
{
    __DEBUG_ASM(65D9B45);
    // chunk 0x65D9B45 _sub_65D9B45
    asm("loc_65D9B45: push %esi;");
    asm("loc_65D9B46: mov 8(%esp),%esi;");
    asm("loc_65D9B4A: cmp 0xC(%esp),%esi;");
    asm("loc_65D9B4E: jae loc_65D9B5D;");
    asm("loc_65D9B50: mov (%esi),%eax;");
    asm("loc_65D9B52: test %eax,%eax;");
    asm("loc_65D9B54: je loc_65D9B58;");
    asm("loc_65D9B56: call *%eax;");
    asm("loc_65D9B58: add $4,%esi;");
    asm("loc_65D9B5B: jmp loc_65D9B4A;");
    asm("loc_65D9B5D: pop %esi;");
    asm("loc_65D9B5E: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D9B5F() // _sub_65D9B5F
{
    __DEBUG_ASM(65D9B5F);
    // chunk 0x65D9B5F _sub_65D9B5F
    asm("loc_65D9B5F: push %ebp;");
    asm("loc_65D9B60: mov %esp,%ebp;");
    asm("loc_65D9B62: push $0xFFFFFFFF;");
    asm("loc_65D9B64: push $_data_65E1728;");
    asm("loc_65D9B69: push $_sub_65DCF2C;");
    asm("loc_65D9B6E: mov %fs:0,%eax;");
    asm("loc_65D9B74: push %eax;");
    asm("loc_65D9B75: mov %esp,%fs:0;");
    asm("loc_65D9B7C: sub $0x28,%esp;");
    asm("loc_65D9B7F: push %ebx;");
    asm("loc_65D9B80: push %esi;");
    asm("loc_65D9B81: push %edi;");
    asm("loc_65D9B82: mov 8(%ebp),%ebx;");
    asm("loc_65D9B85: xor %edi,%edi;");
    asm("loc_65D9B87: cmp %edi,%ebx;");
    asm("loc_65D9B89: jne loc_65D9B99;");
    asm("loc_65D9B8B: pushl 0xC(%ebp);");
    asm("loc_65D9B8E: call _sub_65D8535;");
    asm("loc_65D9B93: pop %ecx;");
    asm("loc_65D9B94: jmp loc_65D9E78;");
    asm("loc_65D9B99: mov 0xC(%ebp),%esi;");
    asm("loc_65D9B9C: cmp %edi,%esi;");
    asm("loc_65D9B9E: jne loc_65D9BAC;");
    asm("loc_65D9BA0: push %ebx;");
    asm("loc_65D9BA1: call _sub_65D7F23;");
    asm("loc_65D9BA6: pop %ecx;");
    asm("loc_65D9BA7: jmp loc_65D9E76;");
    asm("loc_65D9BAC: mov _data_65E7924,%eax;");
    asm("loc_65D9BB1: cmp $3,%eax;");
    asm("loc_65D9BB4: jne loc_65D9CEC;");
    asm("loc_65D9BBA: mov %edi,-0x24(%ebp);");
    asm("loc_65D9BBD: cmp $0xFFFFFFE0,%esi;");
    asm("loc_65D9BC0: ja loc_65D9CB0;");
    asm("loc_65D9BC6: push $9;");
    asm("loc_65D9BC8: call _sub_65DCEAB;");
    asm("loc_65D9BCD: pop %ecx;");
    asm("loc_65D9BCE: mov %edi,-4(%ebp);");
    asm("loc_65D9BD1: push %ebx;");
    asm("loc_65D9BD2: call _sub_65DBC4A;");
    asm("loc_65D9BD7: pop %ecx;");
    asm("loc_65D9BD8: mov %eax,-0x28(%ebp);");
    asm("loc_65D9BDB: cmp %edi,%eax;");
    asm("loc_65D9BDD: je loc_65D9C80;");
    asm("loc_65D9BE3: cmp _data_65E791C,%esi;");
    asm("loc_65D9BE9: ja loc_65D9C30;");
    asm("loc_65D9BEB: push %esi;");
    asm("loc_65D9BEC: push %ebx;");
    asm("loc_65D9BED: push %eax;");
    asm("loc_65D9BEE: call _sub_65DC453;");
    asm("loc_65D9BF3: add $0xC,%esp;");
    asm("loc_65D9BF6: test %eax,%eax;");
    asm("loc_65D9BF8: je loc_65D9BFF;");
    asm("loc_65D9BFA: mov %ebx,-0x24(%ebp);");
    asm("loc_65D9BFD: jmp loc_65D9C30;");
    asm("loc_65D9BFF: push %esi;");
    asm("loc_65D9C00: call _sub_65DBF9E;");
    asm("loc_65D9C05: pop %ecx;");
    asm("loc_65D9C06: mov %eax,-0x24(%ebp);");
    asm("loc_65D9C09: cmp %edi,%eax;");
    asm("loc_65D9C0B: je loc_65D9C30;");
    asm("loc_65D9C0D: mov -4(%ebx),%eax;");
    asm("loc_65D9C10: dec %eax;");
    asm("loc_65D9C11: mov %eax,-0x20(%ebp);");
    asm("loc_65D9C14: cmp %esi,%eax;");
    asm("loc_65D9C16: jb loc_65D9C1A;");
    asm("loc_65D9C18: mov %esi,%eax;");
    asm("loc_65D9C1A: push %eax;");
    asm("loc_65D9C1B: push %ebx;");
    asm("loc_65D9C1C: pushl -0x24(%ebp);");
    asm("loc_65D9C1F: call loc_65D8200;");
    asm("loc_65D9C24: push %ebx;");
    asm("loc_65D9C25: pushl -0x28(%ebp);");
    asm("loc_65D9C28: call _sub_65DBC75;");
    asm("loc_65D9C2D: add $0x14,%esp;");
    asm("loc_65D9C30: cmp %edi,-0x24(%ebp);");
    asm("loc_65D9C33: jne loc_65D9C80;");
    asm("loc_65D9C35: cmp %edi,%esi;");
    asm("loc_65D9C37: jne loc_65D9C3F;");
    asm("loc_65D9C39: push $1;");
    asm("loc_65D9C3B: pop %esi;");
    asm("loc_65D9C3C: mov %esi,0xC(%ebp);");
    asm("loc_65D9C3F: add $0xF,%esi;");
    asm("loc_65D9C42: and $0xFFFFFFF0,%esi;");
    asm("loc_65D9C45: mov %esi,0xC(%ebp);");
    asm("loc_65D9C48: push %esi;");
    asm("loc_65D9C49: push %edi;");
    asm("loc_65D9C4A: pushl _data_65E7920;");
    asm("loc_65D9C50: calll *_import_65E1060;");
    asm("loc_65D9C56: mov %eax,-0x24(%ebp);");
    asm("loc_65D9C59: cmp %edi,%eax;");
    asm("loc_65D9C5B: je loc_65D9C80;");
    asm("loc_65D9C5D: mov -4(%ebx),%eax;");
    asm("loc_65D9C60: dec %eax;");
    asm("loc_65D9C61: mov %eax,-0x20(%ebp);");
    asm("loc_65D9C64: cmp %esi,%eax;");
    asm("loc_65D9C66: jb loc_65D9C6A;");
    asm("loc_65D9C68: mov %esi,%eax;");
    asm("loc_65D9C6A: push %eax;");
    asm("loc_65D9C6B: push %ebx;");
    asm("loc_65D9C6C: pushl -0x24(%ebp);");
    asm("loc_65D9C6F: call loc_65D8200;");
    asm("loc_65D9C74: push %ebx;");
    asm("loc_65D9C75: pushl -0x28(%ebp);");
    asm("loc_65D9C78: call _sub_65DBC75;");
    asm("loc_65D9C7D: add $0x14,%esp;");
    asm("loc_65D9C80: orl $0xFFFFFFFF,-4(%ebp);");
    asm("loc_65D9C84: call loc_65D9CE3;");
    asm("loc_65D9C89: cmp %edi,-0x28(%ebp);");
    asm("loc_65D9C8C: jne loc_65D9CB0;");
    asm("loc_65D9C8E: cmp %edi,%esi;");
    asm("loc_65D9C90: jne loc_65D9C95;");
    asm("loc_65D9C92: push $1;");
    asm("loc_65D9C94: pop %esi;");
    asm("loc_65D9C95: add $0xF,%esi;");
    asm("loc_65D9C98: and $0xFFFFFFF0,%esi;");
    asm("loc_65D9C9B: mov %esi,0xC(%ebp);");
    asm("loc_65D9C9E: push %esi;");
    asm("loc_65D9C9F: push %ebx;");
    asm("loc_65D9CA0: push %edi;");
    asm("loc_65D9CA1: pushl _data_65E7920;");
    asm("loc_65D9CA7: calll *_import_65E108C;");
    asm("loc_65D9CAD: mov %eax,-0x24(%ebp);");
    asm("loc_65D9CB0: mov -0x24(%ebp),%eax;");
    asm("loc_65D9CB3: cmp %edi,%eax;");
    asm("loc_65D9CB5: jne loc_65D9E78;");
    asm("loc_65D9CBB: cmp %edi,_data_65E63D4;");
    asm("loc_65D9CC1: je loc_65D9E78;");
    asm("loc_65D9CC7: push %esi;");
    asm("loc_65D9CC8: call _sub_65DD1E8;");
    asm("loc_65D9CCD: pop %ecx;");
    asm("loc_65D9CCE: test %eax,%eax;");
    asm("loc_65D9CD0: jne loc_65D9BBA;");
    asm("loc_65D9CD6: jmp loc_65D9E76;");
    asm("loc_65D9CDB: mov 0xC(%ebp),%esi;");
    asm("loc_65D9CDE: mov 8(%ebp),%ebx;");
    asm("loc_65D9CE1: xor %edi,%edi;");
    asm("loc_65D9CE3: push $9;");
    asm("loc_65D9CE5: call _sub_65DCF0C;");
    asm("loc_65D9CEA: pop %ecx;");
    asm("loc_65D9CEB: ret;");
    asm("loc_65D9CEC: cmp $2,%eax;");
    asm("loc_65D9CEF: jne loc_65D9E3C;");
    asm("loc_65D9CF5: cmp $0xFFFFFFE0,%esi;");
    asm("loc_65D9CF8: ja loc_65D9D0C;");
    asm("loc_65D9CFA: cmp %edi,%esi;");
    asm("loc_65D9CFC: jbe loc_65D9D06;");
    asm("loc_65D9CFE: add $0xF,%esi;");
    asm("loc_65D9D01: and $0xFFFFFFF0,%esi;");
    asm("loc_65D9D04: jmp loc_65D9D09;");
    asm("loc_65D9D06: push $0x10;");
    asm("loc_65D9D08: pop %esi;");
    asm("loc_65D9D09: mov %esi,0xC(%ebp);");
    asm("loc_65D9D0C: mov %edi,-0x24(%ebp);");
    asm("loc_65D9D0F: cmp $0xFFFFFFE0,%esi;");
    asm("loc_65D9D12: ja loc_65D9E0B;");
    asm("loc_65D9D18: push $9;");
    asm("loc_65D9D1A: call _sub_65DCEAB;");
    asm("loc_65D9D1F: pop %ecx;");
    asm("loc_65D9D20: movl $1,-4(%ebp);");
    asm("loc_65D9D27: lea -0x2C(%ebp),%eax;");
    asm("loc_65D9D2A: push %eax;");
    asm("loc_65D9D2B: lea -0x38(%ebp),%eax;");
    asm("loc_65D9D2E: push %eax;");
    asm("loc_65D9D2F: push %ebx;");
    asm("loc_65D9D30: call _sub_65DC9A5;");
    asm("loc_65D9D35: add $0xC,%esp;");
    asm("loc_65D9D38: mov %eax,%edi;");
    asm("loc_65D9D3A: mov %edi,-0x30(%ebp);");
    asm("loc_65D9D3D: test %edi,%edi;");
    asm("loc_65D9D3F: je loc_65D9DEF;");
    asm("loc_65D9D45: cmp _data_65E55EC,%esi;");
    asm("loc_65D9D4B: jae loc_65D9DA9;");
    asm("loc_65D9D4D: mov %esi,%ebx;");
    asm("loc_65D9D4F: shr $4,%ebx;");
    asm("loc_65D9D52: push %ebx;");
    asm("loc_65D9D53: push %edi;");
    asm("loc_65D9D54: pushl -0x2C(%ebp);");
    asm("loc_65D9D57: pushl -0x38(%ebp);");
    asm("loc_65D9D5A: call _sub_65DCD6D;");
    asm("loc_65D9D5F: add $0x10,%esp;");
    asm("loc_65D9D62: test %eax,%eax;");
    asm("loc_65D9D64: je loc_65D9D6E;");
    asm("loc_65D9D66: mov 8(%ebp),%eax;");
    asm("loc_65D9D69: mov %eax,-0x24(%ebp);");
    asm("loc_65D9D6C: jmp loc_65D9DA6;");
    asm("loc_65D9D6E: push %ebx;");
    asm("loc_65D9D6F: call _sub_65DCA41;");
    asm("loc_65D9D74: pop %ecx;");
    asm("loc_65D9D75: mov %eax,-0x24(%ebp);");
    asm("loc_65D9D78: test %eax,%eax;");
    asm("loc_65D9D7A: je loc_65D9DA6;");
    asm("loc_65D9D7C: movzbl (%edi),%eax;");
    asm("loc_65D9D7F: shl $4,%eax;");
    asm("loc_65D9D82: mov %eax,-0x34(%ebp);");
    asm("loc_65D9D85: cmp %esi,%eax;");
    asm("loc_65D9D87: jb loc_65D9D8B;");
    asm("loc_65D9D89: mov %esi,%eax;");
    asm("loc_65D9D8B: push %eax;");
    asm("loc_65D9D8C: pushl 8(%ebp);");
    asm("loc_65D9D8F: pushl -0x24(%ebp);");
    asm("loc_65D9D92: call loc_65D8200;");
    asm("loc_65D9D97: push %edi;");
    asm("loc_65D9D98: pushl -0x2C(%ebp);");
    asm("loc_65D9D9B: pushl -0x38(%ebp);");
    asm("loc_65D9D9E: call _sub_65DC9FC;");
    asm("loc_65D9DA3: add $0x18,%esp;");
    asm("loc_65D9DA6: mov 8(%ebp),%ebx;");
    asm("loc_65D9DA9: cmpl $0,-0x24(%ebp);");
    asm("loc_65D9DAD: jne loc_65D9E02;");
    asm("loc_65D9DAF: push %esi;");
    asm("loc_65D9DB0: push $0;");
    asm("loc_65D9DB2: pushl _data_65E7920;");
    asm("loc_65D9DB8: calll *_import_65E1060;");
    asm("loc_65D9DBE: mov %eax,-0x24(%ebp);");
    asm("loc_65D9DC1: test %eax,%eax;");
    asm("loc_65D9DC3: je loc_65D9E02;");
    asm("loc_65D9DC5: movzbl (%edi),%eax;");
    asm("loc_65D9DC8: shl $4,%eax;");
    asm("loc_65D9DCB: mov %eax,-0x34(%ebp);");
    asm("loc_65D9DCE: cmp %esi,%eax;");
    asm("loc_65D9DD0: jb loc_65D9DD4;");
    asm("loc_65D9DD2: mov %esi,%eax;");
    asm("loc_65D9DD4: push %eax;");
    asm("loc_65D9DD5: push %ebx;");
    asm("loc_65D9DD6: pushl -0x24(%ebp);");
    asm("loc_65D9DD9: call loc_65D8200;");
    asm("loc_65D9DDE: push %edi;");
    asm("loc_65D9DDF: pushl -0x2C(%ebp);");
    asm("loc_65D9DE2: pushl -0x38(%ebp);");
    asm("loc_65D9DE5: call _sub_65DC9FC;");
    asm("loc_65D9DEA: add $0x18,%esp;");
    asm("loc_65D9DED: jmp loc_65D9E02;");
    asm("loc_65D9DEF: push %esi;");
    asm("loc_65D9DF0: push %ebx;");
    asm("loc_65D9DF1: push $0;");
    asm("loc_65D9DF3: pushl _data_65E7920;");
    asm("loc_65D9DF9: calll *_import_65E108C;");
    asm("loc_65D9DFF: mov %eax,-0x24(%ebp);");
    asm("loc_65D9E02: orl $0xFFFFFFFF,-4(%ebp);");
    asm("loc_65D9E06: call loc_65D9E31;");
    asm("loc_65D9E0B: mov -0x24(%ebp),%eax;");
    asm("loc_65D9E0E: cmp %edi,%eax;");
    asm("loc_65D9E10: jne loc_65D9E78;");
    asm("loc_65D9E12: cmp %edi,_data_65E63D4;");
    asm("loc_65D9E18: je loc_65D9E78;");
    asm("loc_65D9E1A: push %esi;");
    asm("loc_65D9E1B: call _sub_65DD1E8;");
    asm("loc_65D9E20: pop %ecx;");
    asm("loc_65D9E21: test %eax,%eax;");
    asm("loc_65D9E23: jne loc_65D9D0C;");
    asm("loc_65D9E29: jmp loc_65D9E76;");
    asm("loc_65D9E2B: mov 0xC(%ebp),%esi;");
    asm("loc_65D9E2E: mov 8(%ebp),%ebx;");
    asm("loc_65D9E31: push $9;");
    asm("loc_65D9E33: call _sub_65DCF0C;");
    asm("loc_65D9E38: pop %ecx;");
    asm("loc_65D9E39: xor %edi,%edi;");
    asm("loc_65D9E3B: ret;");
    asm("loc_65D9E3C: xor %eax,%eax;");
    asm("loc_65D9E3E: cmp $0xFFFFFFE0,%esi;");
    asm("loc_65D9E41: ja loc_65D9E5F;");
    asm("loc_65D9E43: cmp %edi,%esi;");
    asm("loc_65D9E45: jne loc_65D9E4A;");
    asm("loc_65D9E47: push $1;");
    asm("loc_65D9E49: pop %esi;");
    asm("loc_65D9E4A: add $0xF,%esi;");
    asm("loc_65D9E4D: and $0xFFFFFFF0,%esi;");
    asm("loc_65D9E50: push %esi;");
    asm("loc_65D9E51: push %ebx;");
    asm("loc_65D9E52: push %edi;");
    asm("loc_65D9E53: pushl _data_65E7920;");
    asm("loc_65D9E59: calll *_import_65E108C;");
    asm("loc_65D9E5F: cmp %edi,%eax;");
    asm("loc_65D9E61: jne loc_65D9E78;");
    asm("loc_65D9E63: cmp %edi,_data_65E63D4;");
    asm("loc_65D9E69: je loc_65D9E78;");
    asm("loc_65D9E6B: push %esi;");
    asm("loc_65D9E6C: call _sub_65DD1E8;");
    asm("loc_65D9E71: pop %ecx;");
    asm("loc_65D9E72: test %eax,%eax;");
    asm("loc_65D9E74: jne loc_65D9E3C;");
    asm("loc_65D9E76: xor %eax,%eax;");
    asm("loc_65D9E78: mov -0x10(%ebp),%ecx;");
    asm("loc_65D9E7B: mov %ecx,%fs:0;");
    asm("loc_65D9E82: pop %edi;");
    asm("loc_65D9E83: pop %esi;");
    asm("loc_65D9E84: pop %ebx;");
    asm("loc_65D9E85: leave;");
    asm("loc_65D9E86: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D9E87() // _sub_65D9E87
{
    __DEBUG_ASM(65D9E87);
    // chunk 0x65D9E87 _sub_65D9E87
    asm("loc_65D9E87: push %ebp;");
    asm("loc_65D9E88: mov %esp,%ebp;");
    asm("loc_65D9E8A: push $0xFFFFFFFF;");
    asm("loc_65D9E8C: push $_data_65E1740;");
    asm("loc_65D9E91: push $_sub_65DCF2C;");
    asm("loc_65D9E96: mov %fs:0,%eax;");
    asm("loc_65D9E9C: push %eax;");
    asm("loc_65D9E9D: mov %esp,%fs:0;");
    asm("loc_65D9EA4: sub $0x1C,%esp;");
    asm("loc_65D9EA7: push %ebx;");
    asm("loc_65D9EA8: push %esi;");
    asm("loc_65D9EA9: push %edi;");
    asm("loc_65D9EAA: mov _data_65E7924,%eax;");
    asm("loc_65D9EAF: cmp $3,%eax;");
    asm("loc_65D9EB2: jne loc_65D9EFA;");
    asm("loc_65D9EB4: push $9;");
    asm("loc_65D9EB6: call _sub_65DCEAB;");
    asm("loc_65D9EBB: pop %ecx;");
    asm("loc_65D9EBC: andl $0,-4(%ebp);");
    asm("loc_65D9EC0: mov 8(%ebp),%esi;");
    asm("loc_65D9EC3: push %esi;");
    asm("loc_65D9EC4: call _sub_65DBC4A;");
    asm("loc_65D9EC9: pop %ecx;");
    asm("loc_65D9ECA: mov %eax,-0x1C(%ebp);");
    asm("loc_65D9ECD: test %eax,%eax;");
    asm("loc_65D9ECF: je loc_65D9EDC;");
    asm("loc_65D9ED1: mov -4(%esi),%esi;");
    asm("loc_65D9ED4: sub $9,%esi;");
    asm("loc_65D9ED7: mov %esi,-0x20(%ebp);");
    asm("loc_65D9EDA: jmp loc_65D9EDF;");
    asm("loc_65D9EDC: mov -0x20(%ebp),%esi;");
    asm("loc_65D9EDF: orl $0xFFFFFFFF,-4(%ebp);");
    asm("loc_65D9EE3: call loc_65D9EF1;");
    asm("loc_65D9EE8: cmpl $0,-0x1C(%ebp);");
    asm("loc_65D9EEC: jmp loc_65D9F43;");
    asm("loc_65D9EEE: mov -0x20(%ebp),%esi;");
    asm("loc_65D9EF1: push $9;");
    asm("loc_65D9EF3: call _sub_65DCF0C;");
    asm("loc_65D9EF8: pop %ecx;");
    asm("loc_65D9EF9: ret;");
    asm("loc_65D9EFA: cmp $2,%eax;");
    asm("loc_65D9EFD: jne loc_65D9F45;");
    asm("loc_65D9EFF: push $9;");
    asm("loc_65D9F01: call _sub_65DCEAB;");
    asm("loc_65D9F06: pop %ecx;");
    asm("loc_65D9F07: movl $1,-4(%ebp);");
    asm("loc_65D9F0E: lea -0x24(%ebp),%eax;");
    asm("loc_65D9F11: push %eax;");
    asm("loc_65D9F12: lea -0x2C(%ebp),%eax;");
    asm("loc_65D9F15: push %eax;");
    asm("loc_65D9F16: pushl 8(%ebp);");
    asm("loc_65D9F19: call _sub_65DC9A5;");
    asm("loc_65D9F1E: add $0xC,%esp;");
    asm("loc_65D9F21: mov %eax,-0x28(%ebp);");
    asm("loc_65D9F24: test %eax,%eax;");
    asm("loc_65D9F26: je loc_65D9F33;");
    asm("loc_65D9F28: movzbl (%eax),%esi;");
    asm("loc_65D9F2B: shl $4,%esi;");
    asm("loc_65D9F2E: mov %esi,-0x20(%ebp);");
    asm("loc_65D9F31: jmp loc_65D9F36;");
    asm("loc_65D9F33: mov -0x20(%ebp),%esi;");
    asm("loc_65D9F36: orl $0xFFFFFFFF,-4(%ebp);");
    asm("loc_65D9F3A: call loc_65D9F6C;");
    asm("loc_65D9F3F: cmpl $0,-0x28(%ebp);");
    asm("loc_65D9F43: jne loc_65D9F58;");
    asm("loc_65D9F45: pushl 8(%ebp);");
    asm("loc_65D9F48: push $0;");
    asm("loc_65D9F4A: pushl _data_65E7920;");
    asm("loc_65D9F50: calll *_import_65E1090;");
    asm("loc_65D9F56: mov %eax,%esi;");
    asm("loc_65D9F58: mov %esi,%eax;");
    asm("loc_65D9F5A: mov -0x10(%ebp),%ecx;");
    asm("loc_65D9F5D: mov %ecx,%fs:0;");
    asm("loc_65D9F64: pop %edi;");
    asm("loc_65D9F65: pop %esi;");
    asm("loc_65D9F66: pop %ebx;");
    asm("loc_65D9F67: leave;");
    asm("loc_65D9F68: ret;");
    asm("loc_65D9F69: mov -0x20(%ebp),%esi;");
    asm("loc_65D9F6C: push $9;");
    asm("loc_65D9F6E: call _sub_65DCF0C;");
    asm("loc_65D9F73: pop %ecx;");
    asm("loc_65D9F74: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65D9F75() // __input
{
    __DEBUG_ASM(65D9F75);
    // chunk 0x65D9F75 _sub_65D9F75
    asm("loc_65D9F75: push %ebp;");
    asm("loc_65D9F76: mov %esp,%ebp;");
    asm("loc_65D9F78: sub $0x1C4,%esp;");
    asm("loc_65D9F7E: andb $0,-0x15(%ebp);");
    asm("loc_65D9F82: push %ebx;");
    asm("loc_65D9F83: push %esi;");
    asm("loc_65D9F84: mov 0xC(%ebp),%esi;");
    asm("loc_65D9F87: xor %ebx,%ebx;");
    asm("loc_65D9F89: push %edi;");
    asm("loc_65D9F8A: mov (%esi),%al;");
    asm("loc_65D9F8C: mov %ebx,-4(%ebp);");
    asm("loc_65D9F8F: test %al,%al;");
    asm("loc_65D9F91: mov %ebx,-0x34(%ebp);");
    asm("loc_65D9F94: je loc_65DA97B;");
    asm("loc_65D9F9A: mov 8(%ebp),%edi;");
    asm("loc_65D9F9D: jmp loc_65D9FA4;");
    asm("loc_65D9F9F: mov 8(%ebp),%edi;");
    asm("loc_65D9FA2: xor %ebx,%ebx;");
    asm("loc_65D9FA4: cmpl $1,_data_65E5BE0;");
    asm("loc_65D9FAB: jle loc_65D9FBC;");
    asm("loc_65D9FAD: movzbl %al,%eax;");
    asm("loc_65D9FB0: push $8;");
    asm("loc_65D9FB2: push %eax;");
    asm("loc_65D9FB3: call _sub_65DDB90;");
    asm("loc_65D9FB8: pop %ecx;");
    asm("loc_65D9FB9: pop %ecx;");
    asm("loc_65D9FBA: jmp loc_65D9FCB;");
    asm("loc_65D9FBC: mov _off_65E59D0,%ecx;");
    asm("loc_65D9FC2: movzbl %al,%eax;");
    asm("loc_65D9FC5: mov (%ecx,%eax,2),%al;");
    asm("loc_65D9FC8: and $8,%eax;");
    asm("loc_65D9FCB: cmp %ebx,%eax;");
    asm("loc_65D9FCD: je loc_65DA005;");
    asm("loc_65D9FCF: decl -4(%ebp);");
    asm("loc_65D9FD2: push %edi;");
    asm("loc_65D9FD3: lea -4(%ebp),%eax;");
    asm("loc_65D9FD6: push %edi;");
    asm("loc_65D9FD7: push %eax;");
    asm("loc_65D9FD8: call _sub_65DAA02;");
    asm("loc_65D9FDD: pop %ecx;");
    asm("loc_65D9FDE: pop %ecx;");
    asm("loc_65D9FDF: push %eax;");
    asm("loc_65D9FE0: call _sub_65DA9EB;");
    asm("loc_65D9FE5: movzbl 1(%esi),%eax;");
    asm("loc_65D9FE9: inc %esi;");
    asm("loc_65D9FEA: push %eax;");
    asm("loc_65D9FEB: call _sub_65DDB68;");
    asm("loc_65D9FF0: add $0xC,%esp;");
    asm("loc_65D9FF3: test %eax,%eax;");
    asm("loc_65D9FF5: je loc_65DA005;");
    asm("loc_65D9FF7: movzbl 1(%esi),%eax;");
    asm("loc_65D9FFB: inc %esi;");
    asm("loc_65D9FFC: push %eax;");
    asm("loc_65D9FFD: call _sub_65DDB68;");
    asm("loc_65DA002: pop %ecx;");
    asm("loc_65DA003: jmp loc_65D9FF3;");
    asm("loc_65DA005: cmpb $0x25,(%esi);");
    asm("loc_65DA008: jne loc_65DA8E7;");
    asm("loc_65DA00E: andb $0,-0x35(%ebp);");
    asm("loc_65DA012: andb $0,-0x18(%ebp);");
    asm("loc_65DA016: andb $0,-0x17(%ebp);");
    asm("loc_65DA01A: andb $0,-0xE(%ebp);");
    asm("loc_65DA01E: andb $0,-0xF(%ebp);");
    asm("loc_65DA022: andb $0,-0x16(%ebp);");
    asm("loc_65DA026: xor %edi,%edi;");
    asm("loc_65DA028: andb $0,-5(%ebp);");
    asm("loc_65DA02C: mov %ebx,-0x1C(%ebp);");
    asm("loc_65DA02F: mov %ebx,-0x20(%ebp);");
    asm("loc_65DA032: mov %ebx,-0xC(%ebp);");
    asm("loc_65DA035: movb $1,-0xD(%ebp);");
    asm("loc_65DA039: mov %ebx,-0x30(%ebp);");
    asm("loc_65DA03C: movzbl 1(%esi),%ebx;");
    asm("loc_65DA040: inc %esi;");
    asm("loc_65DA041: cmpl $1,_data_65E5BE0;");
    asm("loc_65DA048: jle loc_65DA059;");
    asm("loc_65DA04A: movzbl %bl,%eax;");
    asm("loc_65DA04D: push $4;");
    asm("loc_65DA04F: push %eax;");
    asm("loc_65DA050: call _sub_65DDB90;");
    asm("loc_65DA055: pop %ecx;");
    asm("loc_65DA056: pop %ecx;");
    asm("loc_65DA057: jmp loc_65DA068;");
    asm("loc_65DA059: mov _off_65E59D0,%ecx;");
    asm("loc_65DA05F: movzbl %bl,%eax;");
    asm("loc_65DA062: mov (%ecx,%eax,2),%al;");
    asm("loc_65DA065: and $4,%eax;");
    asm("loc_65DA068: test %eax,%eax;");
    asm("loc_65DA06A: je loc_65DA07E;");
    asm("loc_65DA06C: mov -0xC(%ebp),%eax;");
    asm("loc_65DA06F: incl -0x20(%ebp);");
    asm("loc_65DA072: lea (%eax,%eax,4),%eax;");
    asm("loc_65DA075: lea -0x30(%ebx,%eax,2),%eax;");
    asm("loc_65DA079: mov %eax,-0xC(%ebp);");
    asm("loc_65DA07C: jmp loc_65DA0E3;");
    asm("loc_65DA07E: cmp $0x4E,%ebx;");
    asm("loc_65DA081: jg loc_65DA0C1;");
    asm("loc_65DA083: je loc_65DA0E3;");
    asm("loc_65DA085: cmp $0x2A,%ebx;");
    asm("loc_65DA088: je loc_65DA0BC;");
    asm("loc_65DA08A: cmp $0x46,%ebx;");
    asm("loc_65DA08D: je loc_65DA0E3;");
    asm("loc_65DA08F: cmp $0x49,%ebx;");
    asm("loc_65DA092: je loc_65DA09E;");
    asm("loc_65DA094: cmp $0x4C,%ebx;");
    asm("loc_65DA097: jne loc_65DA0D0;");
    asm("loc_65DA099: incb -0xD(%ebp);");
    asm("loc_65DA09C: jmp loc_65DA0E3;");
    asm("loc_65DA09E: cmpb $0x36,1(%esi);");
    asm("loc_65DA0A2: jne loc_65DA0D0;");
    asm("loc_65DA0A4: cmpb $0x34,2(%esi);");
    asm("loc_65DA0A8: lea 2(%esi),%eax;");
    asm("loc_65DA0AB: jne loc_65DA0D0;");
    asm("loc_65DA0AD: incl -0x30(%ebp);");
    asm("loc_65DA0B0: andl $0,-0x28(%ebp);");
    asm("loc_65DA0B4: andl $0,-0x24(%ebp);");
    asm("loc_65DA0B8: mov %eax,%esi;");
    asm("loc_65DA0BA: jmp loc_65DA0E3;");
    asm("loc_65DA0BC: incb -0xE(%ebp);");
    asm("loc_65DA0BF: jmp loc_65DA0E3;");
    asm("loc_65DA0C1: cmp $0x68,%ebx;");
    asm("loc_65DA0C4: je loc_65DA0DD;");
    asm("loc_65DA0C6: cmp $0x6C,%ebx;");
    asm("loc_65DA0C9: je loc_65DA0D5;");
    asm("loc_65DA0CB: cmp $0x77,%ebx;");
    asm("loc_65DA0CE: je loc_65DA0D8;");
    asm("loc_65DA0D0: incb -0xF(%ebp);");
    asm("loc_65DA0D3: jmp loc_65DA0E3;");
    asm("loc_65DA0D5: incb -0xD(%ebp);");
    asm("loc_65DA0D8: incb -5(%ebp);");
    asm("loc_65DA0DB: jmp loc_65DA0E3;");
    asm("loc_65DA0DD: decb -0xD(%ebp);");
    asm("loc_65DA0E0: decb -5(%ebp);");
    asm("loc_65DA0E3: cmpb $0,-0xF(%ebp);");
    asm("loc_65DA0E7: je loc_65DA03C;");
    asm("loc_65DA0ED: cmpb $0,-0xE(%ebp);");
    asm("loc_65DA0F1: mov %esi,0xC(%ebp);");
    asm("loc_65DA0F4: jne loc_65DA108;");
    asm("loc_65DA0F6: mov 0x10(%ebp),%eax;");
    asm("loc_65DA0F9: mov %eax,-0x44(%ebp);");
    asm("loc_65DA0FC: add $4,%eax;");
    asm("loc_65DA0FF: mov %eax,0x10(%ebp);");
    asm("loc_65DA102: mov -4(%eax),%eax;");
    asm("loc_65DA105: mov %eax,-0x2C(%ebp);");
    asm("loc_65DA108: andb $0,-0xF(%ebp);");
    asm("loc_65DA10C: cmpb $0,-5(%ebp);");
    asm("loc_65DA110: jne loc_65DA126;");
    asm("loc_65DA112: mov (%esi),%al;");
    asm("loc_65DA114: cmp $0x53,%al;");
    asm("loc_65DA116: je loc_65DA122;");
    asm("loc_65DA118: cmp $0x43,%al;");
    asm("loc_65DA11A: je loc_65DA122;");
    asm("loc_65DA11C: orb $0xFF,-5(%ebp);");
    asm("loc_65DA120: jmp loc_65DA126;");
    asm("loc_65DA122: movb $1,-5(%ebp);");
    asm("loc_65DA126: mov 0xC(%ebp),%ebx;");
    asm("loc_65DA129: movzbl (%ebx),%esi;");
    asm("loc_65DA12C: or $0x20,%esi;");
    asm("loc_65DA12F: cmp $0x6E,%esi;");
    asm("loc_65DA132: mov %esi,-0x3C(%ebp);");
    asm("loc_65DA135: je loc_65DA15F;");
    asm("loc_65DA137: cmp $0x63,%esi;");
    asm("loc_65DA13A: je loc_65DA150;");
    asm("loc_65DA13C: cmp $0x7B,%esi;");
    asm("loc_65DA13F: je loc_65DA150;");
    asm("loc_65DA141: pushl 8(%ebp);");
    asm("loc_65DA144: lea -4(%ebp),%eax;");
    asm("loc_65DA147: push %eax;");
    asm("loc_65DA148: call _sub_65DAA02;");
    asm("loc_65DA14D: pop %ecx;");
    asm("loc_65DA14E: jmp loc_65DA15B;");
    asm("loc_65DA150: pushl 8(%ebp);");
    asm("loc_65DA153: incl -4(%ebp);");
    asm("loc_65DA156: call _sub_65DA9D1;");
    asm("loc_65DA15B: pop %ecx;");
    asm("loc_65DA15C: mov %eax,-0x14(%ebp);");
    asm("loc_65DA15F: xor %eax,%eax;");
    asm("loc_65DA161: cmp %eax,-0x20(%ebp);");
    asm("loc_65DA164: je loc_65DA16F;");
    asm("loc_65DA166: cmp %eax,-0xC(%ebp);");
    asm("loc_65DA169: je loc_65DA94B;");
    asm("loc_65DA16F: cmp $0x6F,%esi;");
    asm("loc_65DA172: jg loc_65DA3D6;");
    asm("loc_65DA178: je loc_65DA688;");
    asm("loc_65DA17E: cmp $0x63,%esi;");
    asm("loc_65DA181: je loc_65DA3B3;");
    asm("loc_65DA187: cmp $0x64,%esi;");
    asm("loc_65DA18A: je loc_65DA688;");
    asm("loc_65DA190: jle loc_65DA400;");
    asm("loc_65DA196: cmp $0x67,%esi;");
    asm("loc_65DA199: jle loc_65DA1D3;");
    asm("loc_65DA19B: cmp $0x69,%esi;");
    asm("loc_65DA19E: je loc_65DA1BB;");
    asm("loc_65DA1A0: cmp $0x6E,%esi;");
    asm("loc_65DA1A3: jne loc_65DA400;");
    asm("loc_65DA1A9: cmpb $0,-0xE(%ebp);");
    asm("loc_65DA1AD: mov -4(%ebp),%edi;");
    asm("loc_65DA1B0: je loc_65DA8B6;");
    asm("loc_65DA1B6: jmp loc_65DA8DC;");
    asm("loc_65DA1BB: push $0x64;");
    asm("loc_65DA1BD: pop %esi;");
    asm("loc_65DA1BE: mov -0x14(%ebp),%ebx;");
    asm("loc_65DA1C1: cmp $0x2D,%ebx;");
    asm("loc_65DA1C4: jne loc_65DA448;");
    asm("loc_65DA1CA: movb $1,-0x17(%ebp);");
    asm("loc_65DA1CE: jmp loc_65DA44D;");
    asm("loc_65DA1D3: mov -0x14(%ebp),%ebx;");
    asm("loc_65DA1D6: lea -0x1C4(%ebp),%esi;");
    asm("loc_65DA1DC: cmp $0x2D,%ebx;");
    asm("loc_65DA1DF: jne loc_65DA1EF;");
    asm("loc_65DA1E1: mov %bl,-0x1C4(%ebp);");
    asm("loc_65DA1E7: lea -0x1C3(%ebp),%esi;");
    asm("loc_65DA1ED: jmp loc_65DA1F4;");
    asm("loc_65DA1EF: cmp $0x2B,%ebx;");
    asm("loc_65DA1F2: jne loc_65DA20B;");
    asm("loc_65DA1F4: mov 8(%ebp),%edi;");
    asm("loc_65DA1F7: decl -0xC(%ebp);");
    asm("loc_65DA1FA: incl -4(%ebp);");
    asm("loc_65DA1FD: push %edi;");
    asm("loc_65DA1FE: call _sub_65DA9D1;");
    asm("loc_65DA203: mov %eax,%ebx;");
    asm("loc_65DA205: pop %ecx;");
    asm("loc_65DA206: mov %ebx,-0x14(%ebp);");
    asm("loc_65DA209: jmp loc_65DA20E;");
    asm("loc_65DA20B: mov 8(%ebp),%edi;");
    asm("loc_65DA20E: cmpl $0,-0x20(%ebp);");
    asm("loc_65DA212: je loc_65DA21D;");
    asm("loc_65DA214: cmpl $0x15D,-0xC(%ebp);");
    asm("loc_65DA21B: jle loc_65DA224;");
    asm("loc_65DA21D: movl $0x15D,-0xC(%ebp);");
    asm("loc_65DA224: cmpl $1,_data_65E5BE0;");
    asm("loc_65DA22B: jle loc_65DA239;");
    asm("loc_65DA22D: push $4;");
    asm("loc_65DA22F: push %ebx;");
    asm("loc_65DA230: call _sub_65DDB90;");
    asm("loc_65DA235: pop %ecx;");
    asm("loc_65DA236: pop %ecx;");
    asm("loc_65DA237: jmp loc_65DA244;");
    asm("loc_65DA239: mov _off_65E59D0,%eax;");
    asm("loc_65DA23E: mov (%eax,%ebx,2),%al;");
    asm("loc_65DA241: and $4,%eax;");
    asm("loc_65DA244: test %eax,%eax;");
    asm("loc_65DA246: je loc_65DA269;");
    asm("loc_65DA248: mov -0xC(%ebp),%eax;");
    asm("loc_65DA24B: decl -0xC(%ebp);");
    asm("loc_65DA24E: test %eax,%eax;");
    asm("loc_65DA250: je loc_65DA269;");
    asm("loc_65DA252: incl -0x1C(%ebp);");
    asm("loc_65DA255: mov %bl,(%esi);");
    asm("loc_65DA257: inc %esi;");
    asm("loc_65DA258: incl -4(%ebp);");
    asm("loc_65DA25B: push %edi;");
    asm("loc_65DA25C: call _sub_65DA9D1;");
    asm("loc_65DA261: mov %eax,%ebx;");
    asm("loc_65DA263: pop %ecx;");
    asm("loc_65DA264: mov %ebx,-0x14(%ebp);");
    asm("loc_65DA267: jmp loc_65DA224;");
    asm("loc_65DA269: cmp %bl,_data_65E5BE4;");
    asm("loc_65DA26F: jne loc_65DA2D7;");
    asm("loc_65DA271: mov -0xC(%ebp),%eax;");
    asm("loc_65DA274: decl -0xC(%ebp);");
    asm("loc_65DA277: test %eax,%eax;");
    asm("loc_65DA279: je loc_65DA2D7;");
    asm("loc_65DA27B: incl -4(%ebp);");
    asm("loc_65DA27E: push %edi;");
    asm("loc_65DA27F: call _sub_65DA9D1;");
    asm("loc_65DA284: mov %eax,%ebx;");
    asm("loc_65DA286: mov _data_65E5BE4,%al;");
    asm("loc_65DA28B: mov %al,(%esi);");
    asm("loc_65DA28D: pop %ecx;");
    asm("loc_65DA28E: mov %ebx,-0x14(%ebp);");
    asm("loc_65DA291: inc %esi;");
    asm("loc_65DA292: cmpl $1,_data_65E5BE0;");
    asm("loc_65DA299: jle loc_65DA2A7;");
    asm("loc_65DA29B: push $4;");
    asm("loc_65DA29D: push %ebx;");
    asm("loc_65DA29E: call _sub_65DDB90;");
    asm("loc_65DA2A3: pop %ecx;");
    asm("loc_65DA2A4: pop %ecx;");
    asm("loc_65DA2A5: jmp loc_65DA2B2;");
    asm("loc_65DA2A7: mov _off_65E59D0,%eax;");
    asm("loc_65DA2AC: mov (%eax,%ebx,2),%al;");
    asm("loc_65DA2AF: and $4,%eax;");
    asm("loc_65DA2B2: test %eax,%eax;");
    asm("loc_65DA2B4: je loc_65DA2D7;");
    asm("loc_65DA2B6: mov -0xC(%ebp),%eax;");
    asm("loc_65DA2B9: decl -0xC(%ebp);");
    asm("loc_65DA2BC: test %eax,%eax;");
    asm("loc_65DA2BE: je loc_65DA2D7;");
    asm("loc_65DA2C0: incl -0x1C(%ebp);");
    asm("loc_65DA2C3: mov %bl,(%esi);");
    asm("loc_65DA2C5: inc %esi;");
    asm("loc_65DA2C6: incl -4(%ebp);");
    asm("loc_65DA2C9: push %edi;");
    asm("loc_65DA2CA: call _sub_65DA9D1;");
    asm("loc_65DA2CF: mov %eax,%ebx;");
    asm("loc_65DA2D1: pop %ecx;");
    asm("loc_65DA2D2: mov %ebx,-0x14(%ebp);");
    asm("loc_65DA2D5: jmp loc_65DA292;");
    asm("loc_65DA2D7: cmpl $0,-0x1C(%ebp);");
    asm("loc_65DA2DB: je loc_65DA36F;");
    asm("loc_65DA2E1: cmp $0x65,%ebx;");
    asm("loc_65DA2E4: je loc_65DA2EF;");
    asm("loc_65DA2E6: cmp $0x45,%ebx;");
    asm("loc_65DA2E9: jne loc_65DA36F;");
    asm("loc_65DA2EF: mov -0xC(%ebp),%eax;");
    asm("loc_65DA2F2: decl -0xC(%ebp);");
    asm("loc_65DA2F5: test %eax,%eax;");
    asm("loc_65DA2F7: je loc_65DA36F;");
    asm("loc_65DA2F9: movb $0x65,(%esi);");
    asm("loc_65DA2FC: inc %esi;");
    asm("loc_65DA2FD: incl -4(%ebp);");
    asm("loc_65DA300: push %edi;");
    asm("loc_65DA301: call _sub_65DA9D1;");
    asm("loc_65DA306: mov %eax,%ebx;");
    asm("loc_65DA308: pop %ecx;");
    asm("loc_65DA309: cmp $0x2D,%ebx;");
    asm("loc_65DA30C: mov %ebx,-0x14(%ebp);");
    asm("loc_65DA30F: jne loc_65DA316;");
    asm("loc_65DA311: mov %al,(%esi);");
    asm("loc_65DA313: inc %esi;");
    asm("loc_65DA314: jmp loc_65DA31B;");
    asm("loc_65DA316: cmp $0x2B,%ebx;");
    asm("loc_65DA319: jne loc_65DA339;");
    asm("loc_65DA31B: mov -0xC(%ebp),%eax;");
    asm("loc_65DA31E: decl -0xC(%ebp);");
    asm("loc_65DA321: test %eax,%eax;");
    asm("loc_65DA323: jne loc_65DA32A;");
    asm("loc_65DA325: and %eax,-0xC(%ebp);");
    asm("loc_65DA328: jmp loc_65DA339;");
    asm("loc_65DA32A: incl -4(%ebp);");
    asm("loc_65DA32D: push %edi;");
    asm("loc_65DA32E: call _sub_65DA9D1;");
    asm("loc_65DA333: mov %eax,%ebx;");
    asm("loc_65DA335: pop %ecx;");
    asm("loc_65DA336: mov %ebx,-0x14(%ebp);");
    asm("loc_65DA339: cmpl $1,_data_65E5BE0;");
    asm("loc_65DA340: jle loc_65DA34E;");
    asm("loc_65DA342: push $4;");
    asm("loc_65DA344: push %ebx;");
    asm("loc_65DA345: call _sub_65DDB90;");
    asm("loc_65DA34A: pop %ecx;");
    asm("loc_65DA34B: pop %ecx;");
    asm("loc_65DA34C: jmp loc_65DA359;");
    asm("loc_65DA34E: mov _off_65E59D0,%eax;");
    asm("loc_65DA353: mov (%eax,%ebx,2),%al;");
    asm("loc_65DA356: and $4,%eax;");
    asm("loc_65DA359: test %eax,%eax;");
    asm("loc_65DA35B: je loc_65DA36F;");
    asm("loc_65DA35D: mov -0xC(%ebp),%eax;");
    asm("loc_65DA360: decl -0xC(%ebp);");
    asm("loc_65DA363: test %eax,%eax;");
    asm("loc_65DA365: je loc_65DA36F;");
    asm("loc_65DA367: incl -0x1C(%ebp);");
    asm("loc_65DA36A: mov %bl,(%esi);");
    asm("loc_65DA36C: inc %esi;");
    asm("loc_65DA36D: jmp loc_65DA32A;");
    asm("loc_65DA36F: decl -4(%ebp);");
    asm("loc_65DA372: push %edi;");
    asm("loc_65DA373: push %ebx;");
    asm("loc_65DA374: call _sub_65DA9EB;");
    asm("loc_65DA379: cmpl $0,-0x1C(%ebp);");
    asm("loc_65DA37D: pop %ecx;");
    asm("loc_65DA37E: pop %ecx;");
    asm("loc_65DA37F: je loc_65DA97B;");
    asm("loc_65DA385: cmpb $0,-0xE(%ebp);");
    asm("loc_65DA389: jne loc_65DA8DC;");
    asm("loc_65DA38F: incl -0x34(%ebp);");
    asm("loc_65DA392: andb $0,(%esi);");
    asm("loc_65DA395: lea -0x1C4(%ebp),%eax;");
    asm("loc_65DA39B: push %eax;");
    asm("loc_65DA39C: movsbl -0xD(%ebp),%eax;");
    asm("loc_65DA3A0: pushl -0x2C(%ebp);");
    asm("loc_65DA3A3: dec %eax;");
    asm("loc_65DA3A4: push %eax;");
    asm("loc_65DA3A5: calll *_off_65E59C0;");
    asm("loc_65DA3AB: add $0xC,%esp;");
    asm("loc_65DA3AE: jmp loc_65DA8DC;");
    asm("loc_65DA3B3: cmp %eax,-0x20(%ebp);");
    asm("loc_65DA3B6: jne loc_65DA3C2;");
    asm("loc_65DA3B8: incl -0xC(%ebp);");
    asm("loc_65DA3BB: movl $1,-0x20(%ebp);");
    asm("loc_65DA3C2: cmpb $0,-5(%ebp);");
    asm("loc_65DA3C6: jle loc_65DA3CC;");
    asm("loc_65DA3C8: movb $1,-0x16(%ebp);");
    asm("loc_65DA3CC: mov $_data_65E3458,%edi;");
    asm("loc_65DA3D1: jmp loc_65DA4E1;");
    asm("loc_65DA3D6: mov %esi,%eax;");
    asm("loc_65DA3D8: sub $0x70,%eax;");
    asm("loc_65DA3DB: je loc_65DA684;");
    asm("loc_65DA3E1: sub $3,%eax;");
    asm("loc_65DA3E4: je loc_65DA4D2;");
    asm("loc_65DA3EA: dec %eax;");
    asm("loc_65DA3EB: dec %eax;");
    asm("loc_65DA3EC: je loc_65DA688;");
    asm("loc_65DA3F2: sub $3,%eax;");
    asm("loc_65DA3F5: je loc_65DA1BE;");
    asm("loc_65DA3FB: sub $3,%eax;");
    asm("loc_65DA3FE: je loc_65DA424;");
    asm("loc_65DA400: movzbl (%ebx),%eax;");
    asm("loc_65DA403: cmp -0x14(%ebp),%eax;");
    asm("loc_65DA406: jne loc_65DA94B;");
    asm("loc_65DA40C: decb -0x15(%ebp);");
    asm("loc_65DA40F: cmpb $0,-0xE(%ebp);");
    asm("loc_65DA413: jne loc_65DA8DC;");
    asm("loc_65DA419: mov -0x44(%ebp),%eax;");
    asm("loc_65DA41C: mov %eax,0x10(%ebp);");
    asm("loc_65DA41F: jmp loc_65DA8DC;");
    asm("loc_65DA424: cmpb $0,-5(%ebp);");
    asm("loc_65DA428: jle loc_65DA42E;");
    asm("loc_65DA42A: movb $1,-0x16(%ebp);");
    asm("loc_65DA42E: mov 0xC(%ebp),%edi;");
    asm("loc_65DA431: inc %edi;");
    asm("loc_65DA432: mov %edi,0xC(%ebp);");
    asm("loc_65DA435: cmpb $0x5E,(%edi);");
    asm("loc_65DA438: jne loc_65DA4E5;");
    asm("loc_65DA43E: mov %edi,%eax;");
    asm("loc_65DA440: lea 1(%eax),%edi;");
    asm("loc_65DA443: jmp loc_65DA4E1;");
    asm("loc_65DA448: cmp $0x2B,%ebx;");
    asm("loc_65DA44B: jne loc_65DA46F;");
    asm("loc_65DA44D: decl -0xC(%ebp);");
    asm("loc_65DA450: jne loc_65DA45E;");
    asm("loc_65DA452: cmpl $0,-0x20(%ebp);");
    asm("loc_65DA456: je loc_65DA45E;");
    asm("loc_65DA458: movb $1,-0xF(%ebp);");
    asm("loc_65DA45C: jmp loc_65DA46F;");
    asm("loc_65DA45E: pushl 8(%ebp);");
    asm("loc_65DA461: incl -4(%ebp);");
    asm("loc_65DA464: call _sub_65DA9D1;");
    asm("loc_65DA469: mov %eax,%ebx;");
    asm("loc_65DA46B: pop %ecx;");
    asm("loc_65DA46C: mov %ebx,-0x14(%ebp);");
    asm("loc_65DA46F: cmp $0x30,%ebx;");
    asm("loc_65DA472: jne loc_65DA6BD;");
    asm("loc_65DA478: pushl 8(%ebp);");
    asm("loc_65DA47B: incl -4(%ebp);");
    asm("loc_65DA47E: call _sub_65DA9D1;");
    asm("loc_65DA483: mov %eax,%ebx;");
    asm("loc_65DA485: pop %ecx;");
    asm("loc_65DA486: cmp $0x78,%bl;");
    asm("loc_65DA489: mov %ebx,-0x14(%ebp);");
    asm("loc_65DA48C: je loc_65DA4BD;");
    asm("loc_65DA48E: cmp $0x58,%bl;");
    asm("loc_65DA491: je loc_65DA4BD;");
    asm("loc_65DA493: cmp $0x78,%esi;");
    asm("loc_65DA496: movl $1,-0x1C(%ebp);");
    asm("loc_65DA49D: je loc_65DA4A7;");
    asm("loc_65DA49F: push $0x6F;");
    asm("loc_65DA4A1: pop %esi;");
    asm("loc_65DA4A2: jmp loc_65DA6BD;");
    asm("loc_65DA4A7: pushl 8(%ebp);");
    asm("loc_65DA4AA: decl -4(%ebp);");
    asm("loc_65DA4AD: push %ebx;");
    asm("loc_65DA4AE: call _sub_65DA9EB;");
    asm("loc_65DA4B3: pop %ecx;");
    asm("loc_65DA4B4: pop %ecx;");
    asm("loc_65DA4B5: push $0x30;");
    asm("loc_65DA4B7: pop %ebx;");
    asm("loc_65DA4B8: jmp loc_65DA6BA;");
    asm("loc_65DA4BD: pushl 8(%ebp);");
    asm("loc_65DA4C0: incl -4(%ebp);");
    asm("loc_65DA4C3: call _sub_65DA9D1;");
    asm("loc_65DA4C8: pop %ecx;");
    asm("loc_65DA4C9: mov %eax,%ebx;");
    asm("loc_65DA4CB: mov %ebx,-0x14(%ebp);");
    asm("loc_65DA4CE: push $0x78;");
    asm("loc_65DA4D0: jmp loc_65DA4A1;");
    asm("loc_65DA4D2: cmpb $0,-5(%ebp);");
    asm("loc_65DA4D6: jle loc_65DA4DC;");
    asm("loc_65DA4D8: movb $1,-0x16(%ebp);");
    asm("loc_65DA4DC: mov $_data_65E3450,%edi;");
    asm("loc_65DA4E1: orb $0xFF,-0x18(%ebp);");
    asm("loc_65DA4E5: push $0x20;");
    asm("loc_65DA4E7: lea -0x64(%ebp),%eax;");
    asm("loc_65DA4EA: push $0;");
    asm("loc_65DA4EC: push %eax;");
    asm("loc_65DA4ED: call _sub_65DDB10;");
    asm("loc_65DA4F2: add $0xC,%esp;");
    asm("loc_65DA4F5: cmpl $0x7B,-0x3C(%ebp);");
    asm("loc_65DA4F9: jne loc_65DA509;");
    asm("loc_65DA4FB: cmpb $0x5D,(%edi);");
    asm("loc_65DA4FE: jne loc_65DA509;");
    asm("loc_65DA500: mov $0x5D,%dl;");
    asm("loc_65DA502: inc %edi;");
    asm("loc_65DA503: movb $0x20,-0x59(%ebp);");
    asm("loc_65DA507: jmp loc_65DA50C;");
    asm("loc_65DA509: mov -0x35(%ebp),%dl;");
    asm("loc_65DA50C: mov (%edi),%al;");
    asm("loc_65DA50E: cmp $0x5D,%al;");
    asm("loc_65DA510: je loc_65DA571;");
    asm("loc_65DA512: inc %edi;");
    asm("loc_65DA513: cmp $0x2D,%al;");
    asm("loc_65DA515: jne loc_65DA558;");
    asm("loc_65DA517: test %dl,%dl;");
    asm("loc_65DA519: je loc_65DA558;");
    asm("loc_65DA51B: mov (%edi),%cl;");
    asm("loc_65DA51D: cmp $0x5D,%cl;");
    asm("loc_65DA520: je loc_65DA558;");
    asm("loc_65DA522: inc %edi;");
    asm("loc_65DA523: cmp %cl,%dl;");
    asm("loc_65DA525: jae loc_65DA52B;");
    asm("loc_65DA527: mov %cl,%al;");
    asm("loc_65DA529: jmp loc_65DA52F;");
    asm("loc_65DA52B: mov %dl,%al;");
    asm("loc_65DA52D: mov %cl,%dl;");
    asm("loc_65DA52F: cmp %al,%dl;");
    asm("loc_65DA531: ja loc_65DA554;");
    asm("loc_65DA533: movzbl %dl,%edx;");
    asm("loc_65DA536: movzbl %al,%esi;");
    asm("loc_65DA539: sub %edx,%esi;");
    asm("loc_65DA53B: inc %esi;");
    asm("loc_65DA53C: mov %edx,%ecx;");
    asm("loc_65DA53E: mov %edx,%eax;");
    asm("loc_65DA540: and $7,%ecx;");
    asm("loc_65DA543: mov $1,%bl;");
    asm("loc_65DA545: shr $3,%eax;");
    asm("loc_65DA548: shl %cl,%bl;");
    asm("loc_65DA54A: lea -0x64(%ebp,%eax),%eax;");
    asm("loc_65DA54E: or %bl,(%eax);");
    asm("loc_65DA550: inc %edx;");
    asm("loc_65DA551: dec %esi;");
    asm("loc_65DA552: jne loc_65DA53C;");
    asm("loc_65DA554: xor %dl,%dl;");
    asm("loc_65DA556: jmp loc_65DA50C;");
    asm("loc_65DA558: movzbl %al,%ecx;");
    asm("loc_65DA55B: mov %al,%dl;");
    asm("loc_65DA55D: mov %ecx,%eax;");
    asm("loc_65DA55F: and $7,%ecx;");
    asm("loc_65DA562: mov $1,%bl;");
    asm("loc_65DA564: shr $3,%eax;");
    asm("loc_65DA567: shl %cl,%bl;");
    asm("loc_65DA569: lea -0x64(%ebp,%eax),%eax;");
    asm("loc_65DA56D: or %bl,(%eax);");
    asm("loc_65DA56F: jmp loc_65DA50C;");
    asm("loc_65DA571: cmpb $0,(%edi);");
    asm("loc_65DA574: je loc_65DA97B;");
    asm("loc_65DA57A: cmpl $0x7B,-0x3C(%ebp);");
    asm("loc_65DA57E: jne loc_65DA583;");
    asm("loc_65DA580: mov %edi,0xC(%ebp);");
    asm("loc_65DA583: mov 8(%ebp),%edi;");
    asm("loc_65DA586: mov -0x2C(%ebp),%esi;");
    asm("loc_65DA589: decl -4(%ebp);");
    asm("loc_65DA58C: push %edi;");
    asm("loc_65DA58D: pushl -0x14(%ebp);");
    asm("loc_65DA590: mov %esi,-0x30(%ebp);");
    asm("loc_65DA593: call _sub_65DA9EB;");
    asm("loc_65DA598: pop %ecx;");
    asm("loc_65DA599: pop %ecx;");
    asm("loc_65DA59A: cmpl $0,-0x20(%ebp);");
    asm("loc_65DA59E: je loc_65DA5AE;");
    asm("loc_65DA5A0: mov -0xC(%ebp),%eax;");
    asm("loc_65DA5A3: decl -0xC(%ebp);");
    asm("loc_65DA5A6: test %eax,%eax;");
    asm("loc_65DA5A8: je loc_65DA64A;");
    asm("loc_65DA5AE: incl -4(%ebp);");
    asm("loc_65DA5B1: push %edi;");
    asm("loc_65DA5B2: call _sub_65DA9D1;");
    asm("loc_65DA5B7: cmp $0xFFFFFFFF,%eax;");
    asm("loc_65DA5BA: pop %ecx;");
    asm("loc_65DA5BB: mov %eax,-0x14(%ebp);");
    asm("loc_65DA5BE: je loc_65DA63E;");
    asm("loc_65DA5C0: mov %eax,%ecx;");
    asm("loc_65DA5C2: push $1;");
    asm("loc_65DA5C4: and $7,%ecx;");
    asm("loc_65DA5C7: pop %edx;");
    asm("loc_65DA5C8: movsbl -0x18(%ebp),%ebx;");
    asm("loc_65DA5CC: shl %cl,%edx;");
    asm("loc_65DA5CE: mov %eax,%ecx;");
    asm("loc_65DA5D0: sar $3,%ecx;");
    asm("loc_65DA5D3: movsbl -0x64(%ebp,%ecx),%ecx;");
    asm("loc_65DA5D8: xor %ebx,%ecx;");
    asm("loc_65DA5DA: test %edx,%ecx;");
    asm("loc_65DA5DC: je loc_65DA63E;");
    asm("loc_65DA5DE: cmpb $0,-0xE(%ebp);");
    asm("loc_65DA5E2: jne loc_65DA636;");
    asm("loc_65DA5E4: cmpb $0,-0x16(%ebp);");
    asm("loc_65DA5E8: je loc_65DA62B;");
    asm("loc_65DA5EA: mov _off_65E59D0,%ecx;");
    asm("loc_65DA5F0: mov %al,-0x38(%ebp);");
    asm("loc_65DA5F3: movzbl %al,%eax;");
    asm("loc_65DA5F6: testb $0x80,1(%ecx,%eax,2);");
    asm("loc_65DA5FB: je loc_65DA60A;");
    asm("loc_65DA5FD: incl -4(%ebp);");
    asm("loc_65DA600: push %edi;");
    asm("loc_65DA601: call _sub_65DA9D1;");
    asm("loc_65DA606: pop %ecx;");
    asm("loc_65DA607: mov %al,-0x37(%ebp);");
    asm("loc_65DA60A: pushl _data_65E5BE0;");
    asm("loc_65DA610: lea -0x38(%ebp),%eax;");
    asm("loc_65DA613: push %eax;");
    asm("loc_65DA614: lea -0x3E(%ebp),%eax;");
    asm("loc_65DA617: push %eax;");
    asm("loc_65DA618: call _sub_65DD9E5;");
    asm("loc_65DA61D: mov -0x3E(%ebp),%ax;");
    asm("loc_65DA621: add $0xC,%esp;");
    asm("loc_65DA624: mov %ax,(%esi);");
    asm("loc_65DA627: inc %esi;");
    asm("loc_65DA628: inc %esi;");
    asm("loc_65DA629: jmp loc_65DA62E;");
    asm("loc_65DA62B: mov %al,(%esi);");
    asm("loc_65DA62D: inc %esi;");
    asm("loc_65DA62E: mov %esi,-0x2C(%ebp);");
    asm("loc_65DA631: jmp loc_65DA59A;");
    asm("loc_65DA636: incl -0x30(%ebp);");
    asm("loc_65DA639: jmp loc_65DA59A;");
    asm("loc_65DA63E: decl -4(%ebp);");
    asm("loc_65DA641: push %edi;");
    asm("loc_65DA642: push %eax;");
    asm("loc_65DA643: call _sub_65DA9EB;");
    asm("loc_65DA648: pop %ecx;");
    asm("loc_65DA649: pop %ecx;");
    asm("loc_65DA64A: cmp %esi,-0x30(%ebp);");
    asm("loc_65DA64D: je loc_65DA97B;");
    asm("loc_65DA653: cmpb $0,-0xE(%ebp);");
    asm("loc_65DA657: jne loc_65DA8DC;");
    asm("loc_65DA65D: incl -0x34(%ebp);");
    asm("loc_65DA660: cmpl $0x63,-0x3C(%ebp);");
    asm("loc_65DA664: je loc_65DA8DC;");
    asm("loc_65DA66A: cmpb $0,-0x16(%ebp);");
    asm("loc_65DA66E: mov -0x2C(%ebp),%eax;");
    asm("loc_65DA671: je loc_65DA67C;");
    asm("loc_65DA673: andw $0,(%eax);");
    asm("loc_65DA677: jmp loc_65DA8DC;");
    asm("loc_65DA67C: andb $0,(%eax);");
    asm("loc_65DA67F: jmp loc_65DA8DC;");
    asm("loc_65DA684: movb $1,-0xD(%ebp);");
    asm("loc_65DA688: mov -0x14(%ebp),%ebx;");
    asm("loc_65DA68B: cmp $0x2D,%ebx;");
    asm("loc_65DA68E: jne loc_65DA696;");
    asm("loc_65DA690: movb $1,-0x17(%ebp);");
    asm("loc_65DA694: jmp loc_65DA69B;");
    asm("loc_65DA696: cmp $0x2B,%ebx;");
    asm("loc_65DA699: jne loc_65DA6BD;");
    asm("loc_65DA69B: decl -0xC(%ebp);");
    asm("loc_65DA69E: jne loc_65DA6AC;");
    asm("loc_65DA6A0: cmpl $0,-0x20(%ebp);");
    asm("loc_65DA6A4: je loc_65DA6AC;");
    asm("loc_65DA6A6: movb $1,-0xF(%ebp);");
    asm("loc_65DA6AA: jmp loc_65DA6BD;");
    asm("loc_65DA6AC: pushl 8(%ebp);");
    asm("loc_65DA6AF: incl -4(%ebp);");
    asm("loc_65DA6B2: call _sub_65DA9D1;");
    asm("loc_65DA6B7: pop %ecx;");
    asm("loc_65DA6B8: mov %eax,%ebx;");
    asm("loc_65DA6BA: mov %ebx,-0x14(%ebp);");
    asm("loc_65DA6BD: cmpl $0,-0x30(%ebp);");
    asm("loc_65DA6C1: je loc_65DA7D6;");
    asm("loc_65DA6C7: cmpb $0,-0xF(%ebp);");
    asm("loc_65DA6CB: jne loc_65DA7B4;");
    asm("loc_65DA6D1: cmp $0x78,%esi;");
    asm("loc_65DA6D4: jne loc_65DA725;");
    asm("loc_65DA6D6: cmpl $1,_data_65E5BE0;");
    asm("loc_65DA6DD: jle loc_65DA6EE;");
    asm("loc_65DA6DF: push $0x80;");
    asm("loc_65DA6E4: push %ebx;");
    asm("loc_65DA6E5: call _sub_65DDB90;");
    asm("loc_65DA6EA: pop %ecx;");
    asm("loc_65DA6EB: pop %ecx;");
    asm("loc_65DA6EC: jmp loc_65DA6FB;");
    asm("loc_65DA6EE: mov _off_65E59D0,%eax;");
    asm("loc_65DA6F3: mov (%eax,%ebx,2),%al;");
    asm("loc_65DA6F6: and $0x80,%eax;");
    asm("loc_65DA6FB: test %eax,%eax;");
    asm("loc_65DA6FD: je loc_65DA7A6;");
    asm("loc_65DA703: mov -0x28(%ebp),%eax;");
    asm("loc_65DA706: mov -0x24(%ebp),%edx;");
    asm("loc_65DA709: push $4;");
    asm("loc_65DA70B: pop %ecx;");
    asm("loc_65DA70C: call _sub_65DDC50;");
    asm("loc_65DA711: push %ebx;");
    asm("loc_65DA712: mov %eax,-0x28(%ebp);");
    asm("loc_65DA715: mov %edx,-0x24(%ebp);");
    asm("loc_65DA718: call _sub_65DA99A;");
    asm("loc_65DA71D: mov %eax,%ebx;");
    asm("loc_65DA71F: pop %ecx;");
    asm("loc_65DA720: mov %ebx,-0x14(%ebp);");
    asm("loc_65DA723: jmp loc_65DA778;");
    asm("loc_65DA725: cmpl $1,_data_65E5BE0;");
    asm("loc_65DA72C: jle loc_65DA73A;");
    asm("loc_65DA72E: push $4;");
    asm("loc_65DA730: push %ebx;");
    asm("loc_65DA731: call _sub_65DDB90;");
    asm("loc_65DA736: pop %ecx;");
    asm("loc_65DA737: pop %ecx;");
    asm("loc_65DA738: jmp loc_65DA745;");
    asm("loc_65DA73A: mov _off_65E59D0,%eax;");
    asm("loc_65DA73F: mov (%eax,%ebx,2),%al;");
    asm("loc_65DA742: and $4,%eax;");
    asm("loc_65DA745: test %eax,%eax;");
    asm("loc_65DA747: je loc_65DA7A6;");
    asm("loc_65DA749: cmp $0x6F,%esi;");
    asm("loc_65DA74C: jne loc_65DA763;");
    asm("loc_65DA74E: cmp $0x38,%ebx;");
    asm("loc_65DA751: jge loc_65DA7A6;");
    asm("loc_65DA753: mov -0x28(%ebp),%eax;");
    asm("loc_65DA756: mov -0x24(%ebp),%edx;");
    asm("loc_65DA759: push $3;");
    asm("loc_65DA75B: pop %ecx;");
    asm("loc_65DA75C: call _sub_65DDC50;");
    asm("loc_65DA761: jmp loc_65DA772;");
    asm("loc_65DA763: push $0;");
    asm("loc_65DA765: push $0xA;");
    asm("loc_65DA767: pushl -0x24(%ebp);");
    asm("loc_65DA76A: pushl -0x28(%ebp);");
    asm("loc_65DA76D: call _sub_65DDC10;");
    asm("loc_65DA772: mov %eax,-0x28(%ebp);");
    asm("loc_65DA775: mov %edx,-0x24(%ebp);");
    asm("loc_65DA778: incl -0x1C(%ebp);");
    asm("loc_65DA77B: lea -0x30(%ebx),%eax;");
    asm("loc_65DA77E: cltd;");
    asm("loc_65DA77F: add %eax,-0x28(%ebp);");
    asm("loc_65DA782: adc %edx,-0x24(%ebp);");
    asm("loc_65DA785: cmpl $0,-0x20(%ebp);");
    asm("loc_65DA789: je loc_65DA790;");
    asm("loc_65DA78B: decl -0xC(%ebp);");
    asm("loc_65DA78E: je loc_65DA7B4;");
    asm("loc_65DA790: pushl 8(%ebp);");
    asm("loc_65DA793: incl -4(%ebp);");
    asm("loc_65DA796: call _sub_65DA9D1;");
    asm("loc_65DA79B: mov %eax,%ebx;");
    asm("loc_65DA79D: pop %ecx;");
    asm("loc_65DA79E: mov %ebx,-0x14(%ebp);");
    asm("loc_65DA7A1: jmp loc_65DA6D1;");
    asm("loc_65DA7A6: pushl 8(%ebp);");
    asm("loc_65DA7A9: decl -4(%ebp);");
    asm("loc_65DA7AC: push %ebx;");
    asm("loc_65DA7AD: call _sub_65DA9EB;");
    asm("loc_65DA7B2: pop %ecx;");
    asm("loc_65DA7B3: pop %ecx;");
    asm("loc_65DA7B4: cmpb $0,-0x17(%ebp);");
    asm("loc_65DA7B8: je loc_65DA89A;");
    asm("loc_65DA7BE: mov -0x28(%ebp),%eax;");
    asm("loc_65DA7C1: mov -0x24(%ebp),%ecx;");
    asm("loc_65DA7C4: neg %eax;");
    asm("loc_65DA7C6: adc $0,%ecx;");
    asm("loc_65DA7C9: mov %eax,-0x28(%ebp);");
    asm("loc_65DA7CC: neg %ecx;");
    asm("loc_65DA7CE: mov %ecx,-0x24(%ebp);");
    asm("loc_65DA7D1: jmp loc_65DA89A;");
    asm("loc_65DA7D6: cmpb $0,-0xF(%ebp);");
    asm("loc_65DA7DA: jne loc_65DA892;");
    asm("loc_65DA7E0: cmp $0x78,%esi;");
    asm("loc_65DA7E3: je loc_65DA824;");
    asm("loc_65DA7E5: cmp $0x70,%esi;");
    asm("loc_65DA7E8: je loc_65DA824;");
    asm("loc_65DA7EA: cmpl $1,_data_65E5BE0;");
    asm("loc_65DA7F1: jle loc_65DA7FF;");
    asm("loc_65DA7F3: push $4;");
    asm("loc_65DA7F5: push %ebx;");
    asm("loc_65DA7F6: call _sub_65DDB90;");
    asm("loc_65DA7FB: pop %ecx;");
    asm("loc_65DA7FC: pop %ecx;");
    asm("loc_65DA7FD: jmp loc_65DA80A;");
    asm("loc_65DA7FF: mov _off_65E59D0,%eax;");
    asm("loc_65DA804: mov (%eax,%ebx,2),%al;");
    asm("loc_65DA807: and $4,%eax;");
    asm("loc_65DA80A: test %eax,%eax;");
    asm("loc_65DA80C: je loc_65DA884;");
    asm("loc_65DA80E: cmp $0x6F,%esi;");
    asm("loc_65DA811: jne loc_65DA81D;");
    asm("loc_65DA813: cmp $0x38,%ebx;");
    asm("loc_65DA816: jge loc_65DA884;");
    asm("loc_65DA818: shl $3,%edi;");
    asm("loc_65DA81B: jmp loc_65DA85C;");
    asm("loc_65DA81D: lea (%edi,%edi,4),%edi;");
    asm("loc_65DA820: shl $1,%edi;");
    asm("loc_65DA822: jmp loc_65DA85C;");
    asm("loc_65DA824: cmpl $1,_data_65E5BE0;");
    asm("loc_65DA82B: jle loc_65DA83C;");
    asm("loc_65DA82D: push $0x80;");
    asm("loc_65DA832: push %ebx;");
    asm("loc_65DA833: call _sub_65DDB90;");
    asm("loc_65DA838: pop %ecx;");
    asm("loc_65DA839: pop %ecx;");
    asm("loc_65DA83A: jmp loc_65DA849;");
    asm("loc_65DA83C: mov _off_65E59D0,%eax;");
    asm("loc_65DA841: mov (%eax,%ebx,2),%al;");
    asm("loc_65DA844: and $0x80,%eax;");
    asm("loc_65DA849: test %eax,%eax;");
    asm("loc_65DA84B: je loc_65DA884;");
    asm("loc_65DA84D: push %ebx;");
    asm("loc_65DA84E: shl $4,%edi;");
    asm("loc_65DA851: call _sub_65DA99A;");
    asm("loc_65DA856: mov %eax,%ebx;");
    asm("loc_65DA858: pop %ecx;");
    asm("loc_65DA859: mov %ebx,-0x14(%ebp);");
    asm("loc_65DA85C: incl -0x1C(%ebp);");
    asm("loc_65DA85F: cmpl $0,-0x20(%ebp);");
    asm("loc_65DA863: lea -0x30(%edi,%ebx),%edi;");
    asm("loc_65DA867: je loc_65DA86E;");
    asm("loc_65DA869: decl -0xC(%ebp);");
    asm("loc_65DA86C: je loc_65DA892;");
    asm("loc_65DA86E: pushl 8(%ebp);");
    asm("loc_65DA871: incl -4(%ebp);");
    asm("loc_65DA874: call _sub_65DA9D1;");
    asm("loc_65DA879: mov %eax,%ebx;");
    asm("loc_65DA87B: pop %ecx;");
    asm("loc_65DA87C: mov %ebx,-0x14(%ebp);");
    asm("loc_65DA87F: jmp loc_65DA7E0;");
    asm("loc_65DA884: pushl 8(%ebp);");
    asm("loc_65DA887: decl -4(%ebp);");
    asm("loc_65DA88A: push %ebx;");
    asm("loc_65DA88B: call _sub_65DA9EB;");
    asm("loc_65DA890: pop %ecx;");
    asm("loc_65DA891: pop %ecx;");
    asm("loc_65DA892: cmpb $0,-0x17(%ebp);");
    asm("loc_65DA896: je loc_65DA89A;");
    asm("loc_65DA898: neg %edi;");
    asm("loc_65DA89A: cmp $0x46,%esi;");
    asm("loc_65DA89D: jne loc_65DA8A3;");
    asm("loc_65DA89F: andl $0,-0x1C(%ebp);");
    asm("loc_65DA8A3: cmpl $0,-0x1C(%ebp);");
    asm("loc_65DA8A7: je loc_65DA97B;");
    asm("loc_65DA8AD: cmpb $0,-0xE(%ebp);");
    asm("loc_65DA8B1: jne loc_65DA8DC;");
    asm("loc_65DA8B3: incl -0x34(%ebp);");
    asm("loc_65DA8B6: cmpl $0,-0x30(%ebp);");
    asm("loc_65DA8BA: je loc_65DA8CC;");
    asm("loc_65DA8BC: mov -0x2C(%ebp),%eax;");
    asm("loc_65DA8BF: mov -0x28(%ebp),%ecx;");
    asm("loc_65DA8C2: mov %ecx,(%eax);");
    asm("loc_65DA8C4: mov -0x24(%ebp),%ecx;");
    asm("loc_65DA8C7: mov %ecx,4(%eax);");
    asm("loc_65DA8CA: jmp loc_65DA8DC;");
    asm("loc_65DA8CC: cmpb $0,-0xD(%ebp);");
    asm("loc_65DA8D0: mov -0x2C(%ebp),%eax;");
    asm("loc_65DA8D3: je loc_65DA8D9;");
    asm("loc_65DA8D5: mov %edi,(%eax);");
    asm("loc_65DA8D7: jmp loc_65DA8DC;");
    asm("loc_65DA8D9: mov %di,(%eax);");
    asm("loc_65DA8DC: incb -0x15(%ebp);");
    asm("loc_65DA8DF: incl 0xC(%ebp);");
    asm("loc_65DA8E2: mov 0xC(%ebp),%esi;");
    asm("loc_65DA8E5: jmp loc_65DA929;");
    asm("loc_65DA8E7: incl -4(%ebp);");
    asm("loc_65DA8EA: push %edi;");
    asm("loc_65DA8EB: call _sub_65DA9D1;");
    asm("loc_65DA8F0: mov %eax,%ebx;");
    asm("loc_65DA8F2: pop %ecx;");
    asm("loc_65DA8F3: movzbl (%esi),%eax;");
    asm("loc_65DA8F6: inc %esi;");
    asm("loc_65DA8F7: cmp %ebx,%eax;");
    asm("loc_65DA8F9: mov %ebx,-0x14(%ebp);");
    asm("loc_65DA8FC: mov %esi,0xC(%ebp);");
    asm("loc_65DA8FF: jne loc_65DA956;");
    asm("loc_65DA901: mov _off_65E59D0,%ecx;");
    asm("loc_65DA907: movzbl %bl,%eax;");
    asm("loc_65DA90A: testb $0x80,1(%ecx,%eax,2);");
    asm("loc_65DA90F: je loc_65DA929;");
    asm("loc_65DA911: incl -4(%ebp);");
    asm("loc_65DA914: push %edi;");
    asm("loc_65DA915: call _sub_65DA9D1;");
    asm("loc_65DA91A: pop %ecx;");
    asm("loc_65DA91B: movzbl (%esi),%ecx;");
    asm("loc_65DA91E: inc %esi;");
    asm("loc_65DA91F: cmp %eax,%ecx;");
    asm("loc_65DA921: mov %esi,0xC(%ebp);");
    asm("loc_65DA924: jne loc_65DA964;");
    asm("loc_65DA926: decl -4(%ebp);");
    asm("loc_65DA929: cmpl $0xFFFFFFFF,-0x14(%ebp);");
    asm("loc_65DA92D: jne loc_65DA93F;");
    asm("loc_65DA92F: cmpb $0x25,(%esi);");
    asm("loc_65DA932: jne loc_65DA981;");
    asm("loc_65DA934: mov 0xC(%ebp),%eax;");
    asm("loc_65DA937: cmpb $0x6E,1(%eax);");
    asm("loc_65DA93B: jne loc_65DA981;");
    asm("loc_65DA93D: mov %eax,%esi;");
    asm("loc_65DA93F: mov (%esi),%al;");
    asm("loc_65DA941: test %al,%al;");
    asm("loc_65DA943: jne loc_65D9F9F;");
    asm("loc_65DA949: jmp loc_65DA97B;");
    asm("loc_65DA94B: pushl 8(%ebp);");
    asm("loc_65DA94E: decl -4(%ebp);");
    asm("loc_65DA951: pushl -0x14(%ebp);");
    asm("loc_65DA954: jmp loc_65DA95B;");
    asm("loc_65DA956: decl -4(%ebp);");
    asm("loc_65DA959: push %edi;");
    asm("loc_65DA95A: push %ebx;");
    asm("loc_65DA95B: call _sub_65DA9EB;");
    asm("loc_65DA960: pop %ecx;");
    asm("loc_65DA961: pop %ecx;");
    asm("loc_65DA962: jmp loc_65DA97B;");
    asm("loc_65DA964: decl -4(%ebp);");
    asm("loc_65DA967: push %edi;");
    asm("loc_65DA968: push %eax;");
    asm("loc_65DA969: call _sub_65DA9EB;");
    asm("loc_65DA96E: decl -4(%ebp);");
    asm("loc_65DA971: push %edi;");
    asm("loc_65DA972: push %ebx;");
    asm("loc_65DA973: call _sub_65DA9EB;");
    asm("loc_65DA978: add $0x10,%esp;");
    asm("loc_65DA97B: cmpl $0xFFFFFFFF,-0x14(%ebp);");
    asm("loc_65DA97F: jne loc_65DA992;");
    asm("loc_65DA981: mov -0x34(%ebp),%eax;");
    asm("loc_65DA984: test %eax,%eax;");
    asm("loc_65DA986: jne loc_65DA995;");
    asm("loc_65DA988: cmp %al,-0x15(%ebp);");
    asm("loc_65DA98B: jne loc_65DA995;");
    asm("loc_65DA98D: or $0xFFFFFFFF,%eax;");
    asm("loc_65DA990: jmp loc_65DA995;");
    asm("loc_65DA992: mov -0x34(%ebp),%eax;");
    asm("loc_65DA995: pop %edi;");
    asm("loc_65DA996: pop %esi;");
    asm("loc_65DA997: pop %ebx;");
    asm("loc_65DA998: leave;");
    asm("loc_65DA999: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65DA99A() // __hextodec
{
    __DEBUG_ASM(65DA99A);
    // chunk 0x65DA99A _sub_65DA99A
    asm("loc_65DA99A: cmpl $1,_data_65E5BE0;");
    asm("loc_65DA9A1: push %esi;");
    asm("loc_65DA9A2: jle loc_65DA9B4;");
    asm("loc_65DA9A4: mov 8(%esp),%esi;");
    asm("loc_65DA9A8: push $4;");
    asm("loc_65DA9AA: push %esi;");
    asm("loc_65DA9AB: call _sub_65DDB90;");
    asm("loc_65DA9B0: pop %ecx;");
    asm("loc_65DA9B1: pop %ecx;");
    asm("loc_65DA9B2: jmp loc_65DA9C3;");
    asm("loc_65DA9B4: mov 8(%esp),%esi;");
    asm("loc_65DA9B8: mov _off_65E59D0,%eax;");
    asm("loc_65DA9BD: mov (%eax,%esi,2),%al;");
    asm("loc_65DA9C0: and $4,%eax;");
    asm("loc_65DA9C3: test %eax,%eax;");
    asm("loc_65DA9C5: jne loc_65DA9CD;");
    asm("loc_65DA9C7: and $0xFFFFFFDF,%esi;");
    asm("loc_65DA9CA: sub $7,%esi;");
    asm("loc_65DA9CD: mov %esi,%eax;");
    asm("loc_65DA9CF: pop %esi;");
    asm("loc_65DA9D0: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65DA9D1() // _fgetc
{
    __DEBUG_ASM(65DA9D1);
    // chunk 0x65DA9D1 _sub_65DA9D1
    asm("loc_65DA9D1: mov 4(%esp),%edx;");
    asm("loc_65DA9D5: decl 4(%edx);");
    asm("loc_65DA9D8: js loc_65DA9E3;");
    asm("loc_65DA9DA: mov (%edx),%ecx;");
    asm("loc_65DA9DC: movzbl (%ecx),%eax;");
    asm("loc_65DA9DF: inc %ecx;");
    asm("loc_65DA9E0: mov %ecx,(%edx);");
    asm("loc_65DA9E2: ret;");
    asm("loc_65DA9E3: push %edx;");
    asm("loc_65DA9E4: call _sub_65DDC6F;");
    asm("loc_65DA9E9: pop %ecx;");
    asm("loc_65DA9EA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65DA9EB() // __un_inc
{
    __DEBUG_ASM(65DA9EB);
    // chunk 0x65DA9EB _sub_65DA9EB
    asm("loc_65DA9EB: cmpl $0xFFFFFFFF,4(%esp);");
    asm("loc_65DA9F0: je loc_65DAA01;");
    asm("loc_65DA9F2: pushl 8(%esp);");
    asm("loc_65DA9F6: pushl 8(%esp);");
    asm("loc_65DA9FA: call _sub_65DDD4B;");
    asm("loc_65DA9FF: pop %ecx;");
    asm("loc_65DAA00: pop %ecx;");
    asm("loc_65DAA01: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65DAA02() // __whiteout
{
    __DEBUG_ASM(65DAA02);
    // chunk 0x65DAA02 _sub_65DAA02
    asm("loc_65DAA02: push %esi;");
    asm("loc_65DAA03: mov 8(%esp),%esi;");
    asm("loc_65DAA07: push %edi;");
    asm("loc_65DAA08: pushl 0x10(%esp);");
    asm("loc_65DAA0C: incl (%esi);");
    asm("loc_65DAA0E: call _sub_65DA9D1;");
    asm("loc_65DAA13: mov %eax,%edi;");
    asm("loc_65DAA15: push %edi;");
    asm("loc_65DAA16: call _sub_65DDB68;");
    asm("loc_65DAA1B: pop %ecx;");
    asm("loc_65DAA1C: test %eax,%eax;");
    asm("loc_65DAA1E: pop %ecx;");
    asm("loc_65DAA1F: jne loc_65DAA08;");
    asm("loc_65DAA21: mov %edi,%eax;");
    asm("loc_65DAA23: pop %edi;");
    asm("loc_65DAA24: pop %esi;");
    asm("loc_65DAA25: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65DAA26() // ___tzset
{
    __DEBUG_ASM(65DAA26);
    // chunk 0x65DAA26 _sub_65DAA26
    asm("loc_65DAA26: cmpl $0,_data_65E6230;");
    asm("loc_65DAA2D: jne loc_65DAA53;");
    asm("loc_65DAA2F: push $0xB;");
    asm("loc_65DAA31: call _sub_65DCEAB;");
    asm("loc_65DAA36: cmpl $0,_data_65E6230;");
    asm("loc_65DAA3D: pop %ecx;");
    asm("loc_65DAA3E: jne loc_65DAA4B;");
    asm("loc_65DAA40: call _sub_65DAA54;");
    asm("loc_65DAA45: incl _data_65E6230;");
    asm("loc_65DAA4B: push $0xB;");
    asm("loc_65DAA4D: call _sub_65DCF0C;");
    asm("loc_65DAA52: pop %ecx;");
    asm("loc_65DAA53: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65DAA54() // __tzset_lk
{
    __DEBUG_ASM(65DAA54);
    // chunk 0x65DAA54 _sub_65DAA54
    asm("loc_65DAA54: push %ebp;");
    asm("loc_65DAA55: mov %esp,%ebp;");
    asm("loc_65DAA57: push %ecx;");
    asm("loc_65DAA58: push %ecx;");
    asm("loc_65DAA59: push %ebx;");
    asm("loc_65DAA5A: push %esi;");
    asm("loc_65DAA5B: push %edi;");
    asm("loc_65DAA5C: push $0xC;");
    asm("loc_65DAA5E: pop %edi;");
    asm("loc_65DAA5F: xor %ebx,%ebx;");
    asm("loc_65DAA61: push %edi;");
    asm("loc_65DAA62: mov %ebx,-8(%ebp);");
    asm("loc_65DAA65: call _sub_65DCEAB;");
    asm("loc_65DAA6A: orl $0xFFFFFFFF,_data_65E3500;");
    asm("loc_65DAA71: orl $0xFFFFFFFF,_data_65E34F0;");
    asm("loc_65DAA78: mov %ebx,_data_65E6178;");
    asm("loc_65DAA7E: movl $_data_65E1798,(%esp);");
    asm("loc_65DAA85: call _sub_65DDE44;");
    asm("loc_65DAA8A: mov %eax,%esi;");
    asm("loc_65DAA8C: pop %ecx;");
    asm("loc_65DAA8D: cmp %ebx,%esi;");
    asm("loc_65DAA8F: jne loc_65DAB92;");
    asm("loc_65DAA95: push %edi;");
    asm("loc_65DAA96: call _sub_65DCF0C;");
    asm("loc_65DAA9B: movl $_data_65E6180,(%esp);");
    asm("loc_65DAAA2: calll *_import_65E1044;");
    asm("loc_65DAAA8: cmp $0xFFFFFFFF,%eax;");
    asm("loc_65DAAAB: je loc_65DACD6;");
    asm("loc_65DAAB1: mov _data_65E6180,%eax;");
    asm("loc_65DAAB6: mov _data_65E6180+0x54,%ecx;");
    asm("loc_65DAABC: imul $0x3C,%eax;");
    asm("loc_65DAABF: cmp %bx,_data_65E6180+0x46;");
    asm("loc_65DAAC6: push $1;");
    asm("loc_65DAAC8: pop %edx;");
    asm("loc_65DAAC9: mov %eax,_data_65E345C;");
    asm("loc_65DAACE: mov %edx,_data_65E6178;");
    asm("loc_65DAAD4: je loc_65DAAE2;");
    asm("loc_65DAAD6: mov %ecx,%esi;");
    asm("loc_65DAAD8: imul $0x3C,%esi;");
    asm("loc_65DAADB: add %esi,%eax;");
    asm("loc_65DAADD: mov %eax,_data_65E345C;");
    asm("loc_65DAAE2: cmp %bx,_data_65E6180+0x9A;");
    asm("loc_65DAAE9: je loc_65DAB06;");
    asm("loc_65DAAEB: mov _data_65E6180+0xA8,%eax;");
    asm("loc_65DAAF0: cmp %ebx,%eax;");
    asm("loc_65DAAF2: je loc_65DAB06;");
    asm("loc_65DAAF4: sub %ecx,%eax;");
    asm("loc_65DAAF6: mov %edx,_data_65E3460;");
    asm("loc_65DAAFC: imul $0x3C,%eax;");
    asm("loc_65DAAFF: mov %eax,_data_65E3464;");
    asm("loc_65DAB04: jmp loc_65DAB12;");
    asm("loc_65DAB06: mov %ebx,_data_65E3460;");
    asm("loc_65DAB0C: mov %ebx,_data_65E3464;");
    asm("loc_65DAB12: lea -4(%ebp),%eax;");
    asm("loc_65DAB15: mov _import_65E1094,%esi;");
    asm("loc_65DAB1B: push %eax;");
    asm("loc_65DAB1C: push %ebx;");
    asm("loc_65DAB1D: push $0x3F;");
    asm("loc_65DAB1F: mov $0x220,%edi;");
    asm("loc_65DAB24: pushl _off_65E34E8;");
    asm("loc_65DAB2A: push $0xFFFFFFFF;");
    asm("loc_65DAB2C: push $_data_65E6180+4;");
    asm("loc_65DAB31: push %edi;");
    asm("loc_65DAB32: pushl _data_65E63F8;");
    asm("loc_65DAB38: call *%esi;");
    asm("loc_65DAB3A: test %eax,%eax;");
    asm("loc_65DAB3C: je loc_65DAB4E;");
    asm("loc_65DAB3E: cmp %ebx,-4(%ebp);");
    asm("loc_65DAB41: jne loc_65DAB4E;");
    asm("loc_65DAB43: mov _off_65E34E8,%eax;");
    asm("loc_65DAB48: andb $0,0x3F(%eax);");
    asm("loc_65DAB4C: jmp loc_65DAB56;");
    asm("loc_65DAB4E: mov _off_65E34E8,%eax;");
    asm("loc_65DAB53: andb $0,(%eax);");
    asm("loc_65DAB56: lea -4(%ebp),%eax;");
    asm("loc_65DAB59: push %eax;");
    asm("loc_65DAB5A: push %ebx;");
    asm("loc_65DAB5B: push $0x3F;");
    asm("loc_65DAB5D: pushl _off_65E34EC;");
    asm("loc_65DAB63: push $0xFFFFFFFF;");
    asm("loc_65DAB65: push $_data_65E6180+0x58;");
    asm("loc_65DAB6A: push %edi;");
    asm("loc_65DAB6B: pushl _data_65E63F8;");
    asm("loc_65DAB71: call *%esi;");
    asm("loc_65DAB73: test %eax,%eax;");
    asm("loc_65DAB75: je loc_65DACC5;");
    asm("loc_65DAB7B: cmp %ebx,-4(%ebp);");
    asm("loc_65DAB7E: jne loc_65DACC5;");
    asm("loc_65DAB84: mov _off_65E34EC,%eax;");
    asm("loc_65DAB89: andb $0,0x3F(%eax);");
    asm("loc_65DAB8D: jmp loc_65DACD6;");
    asm("loc_65DAB92: cmpb $0,(%esi);");
    asm("loc_65DAB95: je loc_65DACCF;");
    asm("loc_65DAB9B: mov _data_65E622C,%eax;");
    asm("loc_65DABA0: cmp %ebx,%eax;");
    asm("loc_65DABA2: je loc_65DABB5;");
    asm("loc_65DABA4: push %eax;");
    asm("loc_65DABA5: push %esi;");
    asm("loc_65DABA6: call _sub_65DD100;");
    asm("loc_65DABAB: pop %ecx;");
    asm("loc_65DABAC: test %eax,%eax;");
    asm("loc_65DABAE: pop %ecx;");
    asm("loc_65DABAF: je loc_65DACCF;");
    asm("loc_65DABB5: pushl _data_65E622C;");
    asm("loc_65DABBB: call _sub_65D7F23;");
    asm("loc_65DABC0: push %esi;");
    asm("loc_65DABC1: call _sub_65D8120;");
    asm("loc_65DABC6: inc %eax;");
    asm("loc_65DABC7: push %eax;");
    asm("loc_65DABC8: call _sub_65D8535;");
    asm("loc_65DABCD: add $0xC,%esp;");
    asm("loc_65DABD0: cmp %ebx,%eax;");
    asm("loc_65DABD2: mov %eax,_data_65E622C;");
    asm("loc_65DABD7: je loc_65DACCF;");
    asm("loc_65DABDD: push %esi;");
    asm("loc_65DABDE: push %eax;");
    asm("loc_65DABDF: call loc_65DD010;");
    asm("loc_65DABE4: push %edi;");
    asm("loc_65DABE5: call _sub_65DCF0C;");
    asm("loc_65DABEA: push $3;");
    asm("loc_65DABEC: push %esi;");
    asm("loc_65DABED: pushl _off_65E34E8;");
    asm("loc_65DABF3: call _sub_65D7880;");
    asm("loc_65DABF8: mov _off_65E34E8,%eax;");
    asm("loc_65DABFD: add $3,%esi;");
    asm("loc_65DAC00: add $0x18,%esp;");
    asm("loc_65DAC03: andb $0,3(%eax);");
    asm("loc_65DAC07: cmpb $0x2D,(%esi);");
    asm("loc_65DAC0A: jne loc_65DAC14;");
    asm("loc_65DAC0C: movl $1,-8(%ebp);");
    asm("loc_65DAC13: inc %esi;");
    asm("loc_65DAC14: push %esi;");
    asm("loc_65DAC15: call _sub_65DDDB9;");
    asm("loc_65DAC1A: pop %ecx;");
    asm("loc_65DAC1B: mov $0x30,%bl;");
    asm("loc_65DAC1D: mov %eax,%ecx;");
    asm("loc_65DAC1F: imul $0xE10,%ecx;");
    asm("loc_65DAC25: mov %ecx,_data_65E345C;");
    asm("loc_65DAC2B: mov (%esi),%al;");
    asm("loc_65DAC2D: cmp $0x2B,%al;");
    asm("loc_65DAC2F: je loc_65DAC39;");
    asm("loc_65DAC31: cmp %bl,%al;");
    asm("loc_65DAC33: jl loc_65DAC3C;");
    asm("loc_65DAC35: cmp $0x39,%al;");
    asm("loc_65DAC37: jg loc_65DAC3C;");
    asm("loc_65DAC39: inc %esi;");
    asm("loc_65DAC3A: jmp loc_65DAC2B;");
    asm("loc_65DAC3C: cmpb $0x3A,(%esi);");
    asm("loc_65DAC3F: jne loc_65DAC8F;");
    asm("loc_65DAC41: inc %esi;");
    asm("loc_65DAC42: push %esi;");
    asm("loc_65DAC43: call _sub_65DDDB9;");
    asm("loc_65DAC48: imul $0x3C,%eax;");
    asm("loc_65DAC4B: pop %ecx;");
    asm("loc_65DAC4C: mov _data_65E345C,%ecx;");
    asm("loc_65DAC52: add %eax,%ecx;");
    asm("loc_65DAC54: mov %ecx,_data_65E345C;");
    asm("loc_65DAC5A: mov (%esi),%al;");
    asm("loc_65DAC5C: cmp %bl,%al;");
    asm("loc_65DAC5E: jl loc_65DAC67;");
    asm("loc_65DAC60: cmp $0x39,%al;");
    asm("loc_65DAC62: jg loc_65DAC67;");
    asm("loc_65DAC64: inc %esi;");
    asm("loc_65DAC65: jmp loc_65DAC5A;");
    asm("loc_65DAC67: cmpb $0x3A,(%esi);");
    asm("loc_65DAC6A: jne loc_65DAC8F;");
    asm("loc_65DAC6C: inc %esi;");
    asm("loc_65DAC6D: push %esi;");
    asm("loc_65DAC6E: call _sub_65DDDB9;");
    asm("loc_65DAC73: pop %ecx;");
    asm("loc_65DAC74: mov _data_65E345C,%ecx;");
    asm("loc_65DAC7A: add %eax,%ecx;");
    asm("loc_65DAC7C: mov %ecx,_data_65E345C;");
    asm("loc_65DAC82: mov (%esi),%al;");
    asm("loc_65DAC84: cmp %bl,%al;");
    asm("loc_65DAC86: jl loc_65DAC8F;");
    asm("loc_65DAC88: cmp $0x39,%al;");
    asm("loc_65DAC8A: jg loc_65DAC8F;");
    asm("loc_65DAC8C: inc %esi;");
    asm("loc_65DAC8D: jmp loc_65DAC82;");
    asm("loc_65DAC8F: cmpl $0,-8(%ebp);");
    asm("loc_65DAC93: je loc_65DAC9D;");
    asm("loc_65DAC95: neg %ecx;");
    asm("loc_65DAC97: mov %ecx,_data_65E345C;");
    asm("loc_65DAC9D: movsbl (%esi),%eax;");
    asm("loc_65DACA0: test %eax,%eax;");
    asm("loc_65DACA2: mov %eax,_data_65E3460;");
    asm("loc_65DACA7: je loc_65DACC5;");
    asm("loc_65DACA9: push $3;");
    asm("loc_65DACAB: push %esi;");
    asm("loc_65DACAC: pushl _off_65E34EC;");
    asm("loc_65DACB2: call _sub_65D7880;");
    asm("loc_65DACB7: mov _off_65E34EC,%eax;");
    asm("loc_65DACBC: add $0xC,%esp;");
    asm("loc_65DACBF: andb $0,3(%eax);");
    asm("loc_65DACC3: jmp loc_65DACD6;");
    asm("loc_65DACC5: mov _off_65E34EC,%eax;");
    asm("loc_65DACCA: andb $0,(%eax);");
    asm("loc_65DACCD: jmp loc_65DACD6;");
    asm("loc_65DACCF: push %edi;");
    asm("loc_65DACD0: call _sub_65DCF0C;");
    asm("loc_65DACD5: pop %ecx;");
    asm("loc_65DACD6: pop %edi;");
    asm("loc_65DACD7: pop %esi;");
    asm("loc_65DACD8: pop %ebx;");
    asm("loc_65DACD9: leave;");
    asm("loc_65DACDA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65DACDB() // __isindst
{
    __DEBUG_ASM(65DACDB);
    // chunk 0x65DACDB _sub_65DACDB
    asm("loc_65DACDB: push %esi;");
    asm("loc_65DACDC: push $0xB;");
    asm("loc_65DACDE: call _sub_65DCEAB;");
    asm("loc_65DACE3: pushl 0xC(%esp);");
    asm("loc_65DACE7: call _sub_65DACFC;");
    asm("loc_65DACEC: push $0xB;");
    asm("loc_65DACEE: mov %eax,%esi;");
    asm("loc_65DACF0: call _sub_65DCF0C;");
    asm("loc_65DACF5: add $0xC,%esp;");
    asm("loc_65DACF8: mov %esi,%eax;");
    asm("loc_65DACFA: pop %esi;");
    asm("loc_65DACFB: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65DACFC() // __isindst_0
{
    __DEBUG_ASM(65DACFC);
    // chunk 0x65DACFC _sub_65DACFC
    asm("loc_65DACFC: push %ebx;");
    asm("loc_65DACFD: push %esi;");
    asm("loc_65DACFE: push %edi;");
    asm("loc_65DACFF: xor %edi,%edi;");
    asm("loc_65DAD01: cmp %edi,_data_65E3460;");
    asm("loc_65DAD07: jne loc_65DAD10;");
    asm("loc_65DAD09: xor %eax,%eax;");
    asm("loc_65DAD0B: jmp loc_65DAE5C;");
    asm("loc_65DAD10: mov 0x10(%esp),%esi;");
    asm("loc_65DAD14: push $1;");
    asm("loc_65DAD16: pop %ebx;");
    asm("loc_65DAD17: mov 0x14(%esi),%eax;");
    asm("loc_65DAD1A: cmp _data_65E34F0,%eax;");
    asm("loc_65DAD20: jne loc_65DAD2E;");
    asm("loc_65DAD22: cmp _data_65E3500,%eax;");
    asm("loc_65DAD28: je loc_65DAE30;");
    asm("loc_65DAD2E: cmp %edi,_data_65E6178;");
    asm("loc_65DAD34: je loc_65DAE06;");
    asm("loc_65DAD3A: movzwl _data_65E6180+0xA6,%ecx;");
    asm("loc_65DAD41: push %ecx;");
    asm("loc_65DAD42: cmp %di,_data_65E6180+0x98;");
    asm("loc_65DAD49: movzwl _data_65E6180+0xA4,%ecx;");
    asm("loc_65DAD50: push %ecx;");
    asm("loc_65DAD51: movzwl _data_65E6180+0xA2,%ecx;");
    asm("loc_65DAD58: push %ecx;");
    asm("loc_65DAD59: movzwl _data_65E6180+0xA0,%ecx;");
    asm("loc_65DAD60: push %ecx;");
    asm("loc_65DAD61: jne loc_65DAD80;");
    asm("loc_65DAD63: movzwl _data_65E6180+0x9C,%ecx;");
    asm("loc_65DAD6A: push %edi;");
    asm("loc_65DAD6B: push %ecx;");
    asm("loc_65DAD6C: movzwl _data_65E6180+0x9E,%ecx;");
    asm("loc_65DAD73: push %ecx;");
    asm("loc_65DAD74: movzwl _data_65E6180+0x9A,%ecx;");
    asm("loc_65DAD7B: push %ecx;");
    asm("loc_65DAD7C: push %eax;");
    asm("loc_65DAD7D: push %ebx;");
    asm("loc_65DAD7E: jmp loc_65DAD94;");
    asm("loc_65DAD80: movzwl _data_65E6180+0x9E,%ecx;");
    asm("loc_65DAD87: push %ecx;");
    asm("loc_65DAD88: push %edi;");
    asm("loc_65DAD89: movzwl _data_65E6180+0x9A,%ecx;");
    asm("loc_65DAD90: push %edi;");
    asm("loc_65DAD91: push %ecx;");
    asm("loc_65DAD92: push %eax;");
    asm("loc_65DAD93: push %edi;");
    asm("loc_65DAD94: push %ebx;");
    asm("loc_65DAD95: call _sub_65DAEA8;");
    asm("loc_65DAD9A: movzwl _data_65E6180+0x52,%eax;");
    asm("loc_65DADA1: add $0x2C,%esp;");
    asm("loc_65DADA4: cmp %di,_data_65E6180+0x44;");
    asm("loc_65DADAB: push %eax;");
    asm("loc_65DADAC: movzwl _data_65E6180+0x50,%eax;");
    asm("loc_65DADB3: push %eax;");
    asm("loc_65DADB4: movzwl _data_65E6180+0x4E,%eax;");
    asm("loc_65DADBB: push %eax;");
    asm("loc_65DADBC: movzwl _data_65E6180+0x4C,%eax;");
    asm("loc_65DADC3: push %eax;");
    asm("loc_65DADC4: jne loc_65DADEE;");
    asm("loc_65DADC6: movzwl _data_65E6180+0x48,%eax;");
    asm("loc_65DADCD: push %edi;");
    asm("loc_65DADCE: push %eax;");
    asm("loc_65DADCF: movzwl _data_65E6180+0x4A,%eax;");
    asm("loc_65DADD6: push %eax;");
    asm("loc_65DADD7: movzwl _data_65E6180+0x46,%eax;");
    asm("loc_65DADDE: push %eax;");
    asm("loc_65DADDF: pushl 0x14(%esi);");
    asm("loc_65DADE2: push %ebx;");
    asm("loc_65DADE3: push %edi;");
    asm("loc_65DADE4: call _sub_65DAEA8;");
    asm("loc_65DADE9: add $0x2C,%esp;");
    asm("loc_65DADEC: jmp loc_65DAE30;");
    asm("loc_65DADEE: movzwl _data_65E6180+0x4A,%eax;");
    asm("loc_65DADF5: push %eax;");
    asm("loc_65DADF6: push %edi;");
    asm("loc_65DADF7: movzwl _data_65E6180+0x46,%eax;");
    asm("loc_65DADFE: push %edi;");
    asm("loc_65DADFF: push %eax;");
    asm("loc_65DAE00: pushl 0x14(%esi);");
    asm("loc_65DAE03: push %edi;");
    asm("loc_65DAE04: jmp loc_65DADE3;");
    asm("loc_65DAE06: push %edi;");
    asm("loc_65DAE07: push %edi;");
    asm("loc_65DAE08: push %edi;");
    asm("loc_65DAE09: push $2;");
    asm("loc_65DAE0B: push %edi;");
    asm("loc_65DAE0C: push %edi;");
    asm("loc_65DAE0D: push %ebx;");
    asm("loc_65DAE0E: push $4;");
    asm("loc_65DAE10: push %eax;");
    asm("loc_65DAE11: push %ebx;");
    asm("loc_65DAE12: push %ebx;");
    asm("loc_65DAE13: call _sub_65DAEA8;");
    asm("loc_65DAE18: push %edi;");
    asm("loc_65DAE19: push %edi;");
    asm("loc_65DAE1A: push %edi;");
    asm("loc_65DAE1B: push $2;");
    asm("loc_65DAE1D: push %edi;");
    asm("loc_65DAE1E: push %edi;");
    asm("loc_65DAE1F: push $5;");
    asm("loc_65DAE21: push $0xA;");
    asm("loc_65DAE23: pushl 0x14(%esi);");
    asm("loc_65DAE26: push %ebx;");
    asm("loc_65DAE27: push %edi;");
    asm("loc_65DAE28: call _sub_65DAEA8;");
    asm("loc_65DAE2D: add $0x58,%esp;");
    asm("loc_65DAE30: mov _data_65E34F4,%edx;");
    asm("loc_65DAE36: mov _data_65E3504,%eax;");
    asm("loc_65DAE3B: mov 0x1C(%esi),%ecx;");
    asm("loc_65DAE3E: cmp %eax,%edx;");
    asm("loc_65DAE40: jge loc_65DAE60;");
    asm("loc_65DAE42: cmp %edx,%ecx;");
    asm("loc_65DAE44: jl loc_65DAD09;");
    asm("loc_65DAE4A: cmp %eax,%ecx;");
    asm("loc_65DAE4C: jg loc_65DAD09;");
    asm("loc_65DAE52: cmp %edx,%ecx;");
    asm("loc_65DAE54: jle loc_65DAE74;");
    asm("loc_65DAE56: cmp %eax,%ecx;");
    asm("loc_65DAE58: jge loc_65DAE74;");
    asm("loc_65DAE5A: mov %ebx,%eax;");
    asm("loc_65DAE5C: pop %edi;");
    asm("loc_65DAE5D: pop %esi;");
    asm("loc_65DAE5E: pop %ebx;");
    asm("loc_65DAE5F: ret;");
    asm("loc_65DAE60: cmp %eax,%ecx;");
    asm("loc_65DAE62: jl loc_65DAE5A;");
    asm("loc_65DAE64: cmp %edx,%ecx;");
    asm("loc_65DAE66: jg loc_65DAE5A;");
    asm("loc_65DAE68: cmp %eax,%ecx;");
    asm("loc_65DAE6A: jle loc_65DAE74;");
    asm("loc_65DAE6C: cmp %edx,%ecx;");
    asm("loc_65DAE6E: jl loc_65DAD09;");
    asm("loc_65DAE74: mov 8(%esi),%eax;");
    asm("loc_65DAE77: imul $0x3C,%eax;");
    asm("loc_65DAE7A: add 4(%esi),%eax;");
    asm("loc_65DAE7D: imul $0x3C,%eax;");
    asm("loc_65DAE80: add (%esi),%eax;");
    asm("loc_65DAE82: imul $0x3E8,%eax;");
    asm("loc_65DAE88: cmp %edx,%ecx;");
    asm("loc_65DAE8A: jne loc_65DAE9B;");
    asm("loc_65DAE8C: xor %ecx,%ecx;");
    asm("loc_65DAE8E: cmp _data_65E34F8,%eax;");
    asm("loc_65DAE94: setge %cl;");
    asm("loc_65DAE97: mov %ecx,%eax;");
    asm("loc_65DAE99: jmp loc_65DAE5C;");
    asm("loc_65DAE9B: xor %ecx,%ecx;");
    asm("loc_65DAE9D: cmp _data_65E3508,%eax;");
    asm("loc_65DAEA3: setl %cl;");
    asm("loc_65DAEA6: jmp loc_65DAE97;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65DAEA8() // _cvtdate
{
    __DEBUG_ASM(65DAEA8);
    // chunk 0x65DAEA8 _sub_65DAEA8
    asm("loc_65DAEA8: push %ebp;");
    asm("loc_65DAEA9: mov %esp,%ebp;");
    asm("loc_65DAEAB: cmpl $1,0xC(%ebp);");
    asm("loc_65DAEAF: push %ebx;");
    asm("loc_65DAEB0: mov 0x10(%ebp),%ebx;");
    asm("loc_65DAEB3: push %esi;");
    asm("loc_65DAEB4: jne loc_65DAF43;");
    asm("loc_65DAEBA: mov 0x14(%ebp),%eax;");
    asm("loc_65DAEBD: mov %ebx,0x10(%ebp);");
    asm("loc_65DAEC0: andl $3,0x10(%ebp);");
    asm("loc_65DAEC4: mov %eax,%esi;");
    asm("loc_65DAEC6: jne loc_65DAED3;");
    asm("loc_65DAEC8: shl $2,%esi;");
    asm("loc_65DAECB: mov _data_65E5BEC(%esi),%eax;");
    asm("loc_65DAED1: jmp loc_65DAEDC;");
    asm("loc_65DAED3: shl $2,%esi;");
    asm("loc_65DAED6: mov _data_65E5C20(%esi),%eax;");
    asm("loc_65DAEDC: mov %ebx,%edx;");
    asm("loc_65DAEDE: lea 1(%eax),%ecx;");
    asm("loc_65DAEE1: imul $0x16D,%edx;");
    asm("loc_65DAEE7: lea -1(%ebx),%eax;");
    asm("loc_65DAEEA: push %edi;");
    asm("loc_65DAEEB: sar $2,%eax;");
    asm("loc_65DAEEE: mov %ecx,%edi;");
    asm("loc_65DAEF0: push $7;");
    asm("loc_65DAEF2: add %eax,%edi;");
    asm("loc_65DAEF4: lea -0x63DB(%edx,%edi),%eax;");
    asm("loc_65DAEFB: pop %edi;");
    asm("loc_65DAEFC: cltd;");
    asm("loc_65DAEFD: idiv %edi;");
    asm("loc_65DAEFF: mov 0x18(%ebp),%eax;");
    asm("loc_65DAF02: pop %edi;");
    asm("loc_65DAF03: cmp 0x1C(%ebp),%edx;");
    asm("loc_65DAF06: jg loc_65DAF16;");
    asm("loc_65DAF08: imul $7,%eax;");
    asm("loc_65DAF0B: sub %edx,%eax;");
    asm("loc_65DAF0D: add 0x1C(%ebp),%eax;");
    asm("loc_65DAF10: lea -7(%ecx,%eax),%ecx;");
    asm("loc_65DAF14: jmp loc_65DAF20;");
    asm("loc_65DAF16: imul $7,%eax;");
    asm("loc_65DAF19: sub %edx,%eax;");
    asm("loc_65DAF1B: add 0x1C(%ebp),%eax;");
    asm("loc_65DAF1E: add %eax,%ecx;");
    asm("loc_65DAF20: cmpl $5,0x18(%ebp);");
    asm("loc_65DAF24: jne loc_65DAF5E;");
    asm("loc_65DAF26: cmpl $0,0x10(%ebp);");
    asm("loc_65DAF2A: jne loc_65DAF34;");
    asm("loc_65DAF2C: mov _data_65E5BF0(%esi),%esi;");
    asm("loc_65DAF32: jmp loc_65DAF3A;");
    asm("loc_65DAF34: mov _data_65E5C24(%esi),%esi;");
    asm("loc_65DAF3A: cmp %esi,%ecx;");
    asm("loc_65DAF3C: jle loc_65DAF5E;");
    asm("loc_65DAF3E: sub $7,%ecx;");
    asm("loc_65DAF41: jmp loc_65DAF5E;");
    asm("loc_65DAF43: mov 0x14(%ebp),%eax;");
    asm("loc_65DAF46: test $3,%bl;");
    asm("loc_65DAF49: jne loc_65DAF54;");
    asm("loc_65DAF4B: mov _data_65E5BEC(,%eax,4),%ecx;");
    asm("loc_65DAF52: jmp loc_65DAF5B;");
    asm("loc_65DAF54: mov _data_65E5C20(,%eax,4),%ecx;");
    asm("loc_65DAF5B: add 0x20(%ebp),%ecx;");
    asm("loc_65DAF5E: cmpl $1,8(%ebp);");
    asm("loc_65DAF62: jne loc_65DAF8F;");
    asm("loc_65DAF64: mov 0x24(%ebp),%eax;");
    asm("loc_65DAF67: mov %ecx,_data_65E34F4;");
    asm("loc_65DAF6D: imul $0x3C,%eax;");
    asm("loc_65DAF70: add 0x28(%ebp),%eax;");
    asm("loc_65DAF73: mov %ebx,_data_65E34F0;");
    asm("loc_65DAF79: imul $0x3C,%eax;");
    asm("loc_65DAF7C: add 0x2C(%ebp),%eax;");
    asm("loc_65DAF7F: imul $0x3E8,%eax;");
    asm("loc_65DAF85: add 0x30(%ebp),%eax;");
    asm("loc_65DAF88: mov %eax,_data_65E34F8;");
    asm("loc_65DAF8D: jmp loc_65DAFE4;");
    asm("loc_65DAF8F: mov 0x24(%ebp),%eax;");
    asm("loc_65DAF92: mov %ecx,_data_65E3504;");
    asm("loc_65DAF98: imul $0x3C,%eax;");
    asm("loc_65DAF9B: add 0x28(%ebp),%eax;");
    asm("loc_65DAF9E: imul $0x3C,%eax;");
    asm("loc_65DAFA1: add _data_65E3464,%eax;");
    asm("loc_65DAFA7: add 0x2C(%ebp),%eax;");
    asm("loc_65DAFAA: imul $0x3E8,%eax;");
    asm("loc_65DAFB0: add 0x30(%ebp),%eax;");
    asm("loc_65DAFB3: mov %eax,_data_65E3508;");
    asm("loc_65DAFB8: jns loc_65DAFC7;");
    asm("loc_65DAFBA: add $0x5265C00,%eax;");
    asm("loc_65DAFBF: dec %ecx;");
    asm("loc_65DAFC0: mov %eax,_data_65E3508;");
    asm("loc_65DAFC5: jmp loc_65DAFD8;");
    asm("loc_65DAFC7: mov $0x5265C00,%edx;");
    asm("loc_65DAFCC: cmp %edx,%eax;");
    asm("loc_65DAFCE: jl loc_65DAFDE;");
    asm("loc_65DAFD0: sub %edx,%eax;");
    asm("loc_65DAFD2: inc %ecx;");
    asm("loc_65DAFD3: mov %eax,_data_65E3508;");
    asm("loc_65DAFD8: mov %ecx,_data_65E3504;");
    asm("loc_65DAFDE: mov %ebx,_data_65E3500;");
    asm("loc_65DAFE4: pop %esi;");
    asm("loc_65DAFE5: pop %ebx;");
    asm("loc_65DAFE6: pop %ebp;");
    asm("loc_65DAFE7: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65DAFE8() // _gmtime
{
    __DEBUG_ASM(65DAFE8);
    // chunk 0x65DAFE8 _sub_65DAFE8
    asm("loc_65DAFE8: mov 4(%esp),%eax;");
    asm("loc_65DAFEC: push %ebx;");
    asm("loc_65DAFED: push %esi;");
    asm("loc_65DAFEE: push %edi;");
    asm("loc_65DAFEF: mov (%eax),%esi;");
    asm("loc_65DAFF1: xor %ebx,%ebx;");
    asm("loc_65DAFF3: call _sub_65D8F61;");
    asm("loc_65DAFF8: test %esi,%esi;");
    asm("loc_65DAFFA: mov %eax,%edi;");
    asm("loc_65DAFFC: jge loc_65DB005;");
    asm("loc_65DAFFE: xor %eax,%eax;");
    asm("loc_65DB000: jmp loc_65DB0EE;");
    asm("loc_65DB005: cmpl $0,0x40(%edi);");
    asm("loc_65DB009: jne loc_65DB01F;");
    asm("loc_65DB00B: push $0x24;");
    asm("loc_65DB00D: call _sub_65D8535;");
    asm("loc_65DB012: pop %ecx;");
    asm("loc_65DB013: mov %eax,0x40(%edi);");
    asm("loc_65DB016: test %eax,%eax;");
    asm("loc_65DB018: mov $_data_65E6238,%ecx;");
    asm("loc_65DB01D: je loc_65DB022;");
    asm("loc_65DB01F: mov 0x40(%edi),%ecx;");
    asm("loc_65DB022: mov %esi,%eax;");
    asm("loc_65DB024: mov $0x7861F80,%edi;");
    asm("loc_65DB029: cltd;");
    asm("loc_65DB02A: idiv %edi;");
    asm("loc_65DB02C: mov %eax,%edx;");
    asm("loc_65DB02E: imul $0xF879E080,%edx;");
    asm("loc_65DB034: add %edx,%esi;");
    asm("loc_65DB036: lea 0x46(,%eax,4),%edx;");
    asm("loc_65DB03D: mov $0x1E13380,%eax;");
    asm("loc_65DB042: cmp %eax,%esi;");
    asm("loc_65DB044: jl loc_65DB061;");
    asm("loc_65DB046: sub %eax,%esi;");
    asm("loc_65DB048: inc %edx;");
    asm("loc_65DB049: cmp %eax,%esi;");
    asm("loc_65DB04B: jl loc_65DB061;");
    asm("loc_65DB04D: sub %eax,%esi;");
    asm("loc_65DB04F: mov $0x1E28500,%eax;");
    asm("loc_65DB054: inc %edx;");
    asm("loc_65DB055: cmp %eax,%esi;");
    asm("loc_65DB057: jl loc_65DB05E;");
    asm("loc_65DB059: inc %edx;");
    asm("loc_65DB05A: sub %eax,%esi;");
    asm("loc_65DB05C: jmp loc_65DB061;");
    asm("loc_65DB05E: push $1;");
    asm("loc_65DB060: pop %ebx;");
    asm("loc_65DB061: mov %esi,%eax;");
    asm("loc_65DB063: mov %edx,0x14(%ecx);");
    asm("loc_65DB066: cltd;");
    asm("loc_65DB067: mov $0x15180,%edi;");
    asm("loc_65DB06C: idiv %edi;");
    asm("loc_65DB06E: mov $_data_65E5BF0,%edi;");
    asm("loc_65DB073: mov %eax,0x1C(%ecx);");
    asm("loc_65DB076: imul $0xFFFEAE80,%eax;");
    asm("loc_65DB07C: add %eax,%esi;");
    asm("loc_65DB07E: test %ebx,%ebx;");
    asm("loc_65DB080: jne loc_65DB087;");
    asm("loc_65DB082: mov $_data_65E5C24,%edi;");
    asm("loc_65DB087: mov 0x1C(%ecx),%edx;");
    asm("loc_65DB08A: push $1;");
    asm("loc_65DB08C: pop %eax;");
    asm("loc_65DB08D: lea 4(%edi),%ebx;");
    asm("loc_65DB090: cmp %edx,(%ebx);");
    asm("loc_65DB092: jge loc_65DB09A;");
    asm("loc_65DB094: inc %eax;");
    asm("loc_65DB095: add $4,%ebx;");
    asm("loc_65DB098: jmp loc_65DB090;");
    asm("loc_65DB09A: mov 0x1C(%ecx),%edx;");
    asm("loc_65DB09D: dec %eax;");
    asm("loc_65DB09E: mov %eax,0x10(%ecx);");
    asm("loc_65DB0A1: push $7;");
    asm("loc_65DB0A3: sub (%edi,%eax,4),%edx;");
    asm("loc_65DB0A6: mov 0x14(%esp),%eax;");
    asm("loc_65DB0AA: mov $0x15180,%edi;");
    asm("loc_65DB0AF: mov %edx,0xC(%ecx);");
    asm("loc_65DB0B2: mov (%eax),%eax;");
    asm("loc_65DB0B4: cltd;");
    asm("loc_65DB0B5: idiv %edi;");
    asm("loc_65DB0B7: pop %edi;");
    asm("loc_65DB0B8: push $0x3C;");
    asm("loc_65DB0BA: add $4,%eax;");
    asm("loc_65DB0BD: cltd;");
    asm("loc_65DB0BE: idiv %edi;");
    asm("loc_65DB0C0: mov %esi,%eax;");
    asm("loc_65DB0C2: mov $0xE10,%edi;");
    asm("loc_65DB0C7: mov %edx,0x18(%ecx);");
    asm("loc_65DB0CA: cltd;");
    asm("loc_65DB0CB: idiv %edi;");
    asm("loc_65DB0CD: pop %edi;");
    asm("loc_65DB0CE: mov %eax,8(%ecx);");
    asm("loc_65DB0D1: imul $0xFFFFF1F0,%eax;");
    asm("loc_65DB0D7: add %eax,%esi;");
    asm("loc_65DB0D9: mov %esi,%eax;");
    asm("loc_65DB0DB: cltd;");
    asm("loc_65DB0DC: idiv %edi;");
    asm("loc_65DB0DE: mov %eax,4(%ecx);");
    asm("loc_65DB0E1: imul $0x3C,%eax;");
    asm("loc_65DB0E4: sub %eax,%esi;");
    asm("loc_65DB0E6: andl $0,0x20(%ecx);");
    asm("loc_65DB0EA: mov %esi,(%ecx);");
    asm("loc_65DB0EC: mov %ecx,%eax;");
    asm("loc_65DB0EE: pop %edi;");
    asm("loc_65DB0EF: pop %esi;");
    asm("loc_65DB0F0: pop %ebx;");
    asm("loc_65DB0F1: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65DB0F2() // ___loctotime_t
{
    __DEBUG_ASM(65DB0F2);
    // chunk 0x65DB0F2 _sub_65DB0F2
    asm("loc_65DB0F2: push %ebp;");
    asm("loc_65DB0F3: mov %esp,%ebp;");
    asm("loc_65DB0F5: sub $0x24,%esp;");
    asm("loc_65DB0F8: push %ebx;");
    asm("loc_65DB0F9: mov 8(%ebp),%ebx;");
    asm("loc_65DB0FC: sub $0x76C,%ebx;");
    asm("loc_65DB102: cmp $0x46,%ebx;");
    asm("loc_65DB105: jl loc_65DB1AE;");
    asm("loc_65DB10B: cmp $0x8A,%ebx;");
    asm("loc_65DB111: jg loc_65DB1AE;");
    asm("loc_65DB117: push %esi;");
    asm("loc_65DB118: push %edi;");
    asm("loc_65DB119: mov 0xC(%ebp),%edi;");
    asm("loc_65DB11C: mov _data_65E5C20(,%edi,4),%esi;");
    asm("loc_65DB123: add 0x10(%ebp),%esi;");
    asm("loc_65DB126: test $3,%bl;");
    asm("loc_65DB129: jne loc_65DB131;");
    asm("loc_65DB12B: cmp $2,%edi;");
    asm("loc_65DB12E: jle loc_65DB131;");
    asm("loc_65DB130: inc %esi;");
    asm("loc_65DB131: call _sub_65DAA26;");
    asm("loc_65DB136: mov %ebx,%eax;");
    asm("loc_65DB138: lea -1(%ebx),%ecx;");
    asm("loc_65DB13B: imul $0x16D,%eax;");
    asm("loc_65DB141: sar $2,%ecx;");
    asm("loc_65DB144: mov %esi,%edx;");
    asm("loc_65DB146: mov %esi,-8(%ebp);");
    asm("loc_65DB149: add %ecx,%edx;");
    asm("loc_65DB14B: mov %ebx,-0x10(%ebp);");
    asm("loc_65DB14E: add %edx,%eax;");
    asm("loc_65DB150: mov 0x1C(%ebp),%edx;");
    asm("loc_65DB153: lea (%eax,%eax,2),%ecx;");
    asm("loc_65DB156: mov 0x14(%ebp),%eax;");
    asm("loc_65DB159: mov %eax,-0x1C(%ebp);");
    asm("loc_65DB15C: lea (%eax,%ecx,8),%ecx;");
    asm("loc_65DB15F: imul $0x3C,%ecx;");
    asm("loc_65DB162: add 0x18(%ebp),%ecx;");
    asm("loc_65DB165: imul $0x3C,%ecx;");
    asm("loc_65DB168: add _data_65E345C,%ecx;");
    asm("loc_65DB16E: dec %edi;");
    asm("loc_65DB16F: cmpl $1,0x20(%ebp);");
    asm("loc_65DB173: mov %edi,-0x14(%ebp);");
    asm("loc_65DB176: pop %edi;");
    asm("loc_65DB177: pop %esi;");
    asm("loc_65DB178: lea 0x7C558180(%ecx,%edx),%ecx;");
    asm("loc_65DB17F: mov %ecx,8(%ebp);");
    asm("loc_65DB182: je loc_65DB1A4;");
    asm("loc_65DB184: cmpl $0xFFFFFFFF,0x20(%ebp);");
    asm("loc_65DB188: jne loc_65DB1AA;");
    asm("loc_65DB18A: cmpl $0,_data_65E3460;");
    asm("loc_65DB191: je loc_65DB1AA;");
    asm("loc_65DB193: lea -0x24(%ebp),%eax;");
    asm("loc_65DB196: push %eax;");
    asm("loc_65DB197: call _sub_65DACDB;");
    asm("loc_65DB19C: pop %ecx;");
    asm("loc_65DB19D: mov 8(%ebp),%ecx;");
    asm("loc_65DB1A0: test %eax,%eax;");
    asm("loc_65DB1A2: je loc_65DB1AA;");
    asm("loc_65DB1A4: add _data_65E3464,%ecx;");
    asm("loc_65DB1AA: mov %ecx,%eax;");
    asm("loc_65DB1AC: jmp loc_65DB1B1;");
    asm("loc_65DB1AE: or $0xFFFFFFFF,%eax;");
    asm("loc_65DB1B1: pop %ebx;");
    asm("loc_65DB1B2: leave;");
    asm("loc_65DB1B3: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65DB1B4() // __ioinit
{
    __DEBUG_ASM(65DB1B4);
    // chunk 0x65DB1B4 _sub_65DB1B4
    asm("loc_65DB1B4: push %ebp;");
    asm("loc_65DB1B5: mov %esp,%ebp;");
    asm("loc_65DB1B7: sub $0x48,%esp;");
    asm("loc_65DB1BA: push %ebx;");
    asm("loc_65DB1BB: push %esi;");
    asm("loc_65DB1BC: push %edi;");
    asm("loc_65DB1BD: push $0x480;");
    asm("loc_65DB1C2: call _sub_65D8535;");
    asm("loc_65DB1C7: mov %eax,%esi;");
    asm("loc_65DB1C9: pop %ecx;");
    asm("loc_65DB1CA: test %esi,%esi;");
    asm("loc_65DB1CC: jne loc_65DB1D6;");
    asm("loc_65DB1CE: push $0x1B;");
    asm("loc_65DB1D0: call _sub_65D7EF0;");
    asm("loc_65DB1D5: pop %ecx;");
    asm("loc_65DB1D6: mov %esi,_data_65E7940;");
    asm("loc_65DB1DC: movl $0x20,_data_65E7A40;");
    asm("loc_65DB1E6: lea 0x480(%esi),%eax;");
    asm("loc_65DB1EC: cmp %eax,%esi;");
    asm("loc_65DB1EE: jae loc_65DB20E;");
    asm("loc_65DB1F0: andb $0,4(%esi);");
    asm("loc_65DB1F4: orl $0xFFFFFFFF,(%esi);");
    asm("loc_65DB1F7: andl $0,8(%esi);");
    asm("loc_65DB1FB: movb $0xA,5(%esi);");
    asm("loc_65DB1FF: mov _data_65E7940,%eax;");
    asm("loc_65DB204: add $0x24,%esi;");
    asm("loc_65DB207: add $0x480,%eax;");
    asm("loc_65DB20C: jmp loc_65DB1EC;");
    asm("loc_65DB20E: lea -0x48(%ebp),%eax;");
    asm("loc_65DB211: push %eax;");
    asm("loc_65DB212: calll *_import_65E10A4;");
    asm("loc_65DB218: cmpw $0,-0x16(%ebp);");
    asm("loc_65DB21D: je loc_65DB2F4;");
    asm("loc_65DB223: mov -0x14(%ebp),%eax;");
    asm("loc_65DB226: test %eax,%eax;");
    asm("loc_65DB228: je loc_65DB2F4;");
    asm("loc_65DB22E: mov (%eax),%edi;");
    asm("loc_65DB230: lea 4(%eax),%ebx;");
    asm("loc_65DB233: lea (%ebx,%edi),%eax;");
    asm("loc_65DB236: mov %eax,-4(%ebp);");
    asm("loc_65DB239: mov $0x800,%eax;");
    asm("loc_65DB23E: cmp %eax,%edi;");
    asm("loc_65DB240: jl loc_65DB244;");
    asm("loc_65DB242: mov %eax,%edi;");
    asm("loc_65DB244: cmp %edi,_data_65E7A40;");
    asm("loc_65DB24A: jge loc_65DB2A2;");
    asm("loc_65DB24C: mov $_data_65E7944,%esi;");
    asm("loc_65DB251: push $0x480;");
    asm("loc_65DB256: call _sub_65D8535;");
    asm("loc_65DB25B: test %eax,%eax;");
    asm("loc_65DB25D: pop %ecx;");
    asm("loc_65DB25E: je loc_65DB29C;");
    asm("loc_65DB260: addl $0x20,_data_65E7A40;");
    asm("loc_65DB267: mov %eax,(%esi);");
    asm("loc_65DB269: lea 0x480(%eax),%ecx;");
    asm("loc_65DB26F: cmp %ecx,%eax;");
    asm("loc_65DB271: jae loc_65DB28F;");
    asm("loc_65DB273: andb $0,4(%eax);");
    asm("loc_65DB277: orl $0xFFFFFFFF,(%eax);");
    asm("loc_65DB27A: andl $0,8(%eax);");
    asm("loc_65DB27E: movb $0xA,5(%eax);");
    asm("loc_65DB282: mov (%esi),%ecx;");
    asm("loc_65DB284: add $0x24,%eax;");
    asm("loc_65DB287: add $0x480,%ecx;");
    asm("loc_65DB28D: jmp loc_65DB26F;");
    asm("loc_65DB28F: add $4,%esi;");
    asm("loc_65DB292: cmp %edi,_data_65E7A40;");
    asm("loc_65DB298: jl loc_65DB251;");
    asm("loc_65DB29A: jmp loc_65DB2A2;");
    asm("loc_65DB29C: mov _data_65E7A40,%edi;");
    asm("loc_65DB2A2: xor %esi,%esi;");
    asm("loc_65DB2A4: test %edi,%edi;");
    asm("loc_65DB2A6: jle loc_65DB2F4;");
    asm("loc_65DB2A8: mov -4(%ebp),%eax;");
    asm("loc_65DB2AB: mov (%eax),%ecx;");
    asm("loc_65DB2AD: cmp $0xFFFFFFFF,%ecx;");
    asm("loc_65DB2B0: je loc_65DB2EA;");
    asm("loc_65DB2B2: mov (%ebx),%al;");
    asm("loc_65DB2B4: test $1,%al;");
    asm("loc_65DB2B6: je loc_65DB2EA;");
    asm("loc_65DB2B8: test $8,%al;");
    asm("loc_65DB2BA: jne loc_65DB2C7;");
    asm("loc_65DB2BC: push %ecx;");
    asm("loc_65DB2BD: calll *_import_65E10A0;");
    asm("loc_65DB2C3: test %eax,%eax;");
    asm("loc_65DB2C5: je loc_65DB2EA;");
    asm("loc_65DB2C7: mov %esi,%ecx;");
    asm("loc_65DB2C9: mov %esi,%eax;");
    asm("loc_65DB2CB: sar $5,%ecx;");
    asm("loc_65DB2CE: and $0x1F,%eax;");
    asm("loc_65DB2D1: mov _data_65E7940(,%ecx,4),%ecx;");
    asm("loc_65DB2D8: lea (%eax,%eax,8),%eax;");
    asm("loc_65DB2DB: lea (%ecx,%eax,4),%eax;");
    asm("loc_65DB2DE: mov -4(%ebp),%ecx;");
    asm("loc_65DB2E1: mov (%ecx),%ecx;");
    asm("loc_65DB2E3: mov %ecx,(%eax);");
    asm("loc_65DB2E5: mov (%ebx),%cl;");
    asm("loc_65DB2E7: mov %cl,4(%eax);");
    asm("loc_65DB2EA: addl $4,-4(%ebp);");
    asm("loc_65DB2EE: inc %esi;");
    asm("loc_65DB2EF: inc %ebx;");
    asm("loc_65DB2F0: cmp %edi,%esi;");
    asm("loc_65DB2F2: jl loc_65DB2A8;");
    asm("loc_65DB2F4: xor %ebx,%ebx;");
    asm("loc_65DB2F6: mov _data_65E7940,%ecx;");
    asm("loc_65DB2FC: lea (%ebx,%ebx,8),%eax;");
    asm("loc_65DB2FF: cmpl $0xFFFFFFFF,(%ecx,%eax,4);");
    asm("loc_65DB303: lea (%ecx,%eax,4),%esi;");
    asm("loc_65DB306: jne loc_65DB355;");
    asm("loc_65DB308: test %ebx,%ebx;");
    asm("loc_65DB30A: movb $0x81,4(%esi);");
    asm("loc_65DB30E: jne loc_65DB315;");
    asm("loc_65DB310: push $0xFFFFFFF6;");
    asm("loc_65DB312: pop %eax;");
    asm("loc_65DB313: jmp loc_65DB31F;");
    asm("loc_65DB315: mov %ebx,%eax;");
    asm("loc_65DB317: dec %eax;");
    asm("loc_65DB318: neg %eax;");
    asm("loc_65DB31A: sbb %eax,%eax;");
    asm("loc_65DB31C: add $0xFFFFFFF5,%eax;");
    asm("loc_65DB31F: push %eax;");
    asm("loc_65DB320: calll *_import_65E109C;");
    asm("loc_65DB326: mov %eax,%edi;");
    asm("loc_65DB328: cmp $0xFFFFFFFF,%edi;");
    asm("loc_65DB32B: je loc_65DB344;");
    asm("loc_65DB32D: push %edi;");
    asm("loc_65DB32E: calll *_import_65E10A0;");
    asm("loc_65DB334: test %eax,%eax;");
    asm("loc_65DB336: je loc_65DB344;");
    asm("loc_65DB338: and $0xFF,%eax;");
    asm("loc_65DB33D: mov %edi,(%esi);");
    asm("loc_65DB33F: cmp $2,%eax;");
    asm("loc_65DB342: jne loc_65DB34A;");
    asm("loc_65DB344: orb $0x40,4(%esi);");
    asm("loc_65DB348: jmp loc_65DB359;");
    asm("loc_65DB34A: cmp $3,%eax;");
    asm("loc_65DB34D: jne loc_65DB359;");
    asm("loc_65DB34F: orb $8,4(%esi);");
    asm("loc_65DB353: jmp loc_65DB359;");
    asm("loc_65DB355: orb $0x80,4(%esi);");
    asm("loc_65DB359: inc %ebx;");
    asm("loc_65DB35A: cmp $3,%ebx;");
    asm("loc_65DB35D: jl loc_65DB2F6;");
    asm("loc_65DB35F: pushl _data_65E7A40;");
    asm("loc_65DB365: calll *_import_65E1098;");
    asm("loc_65DB36B: pop %edi;");
    asm("loc_65DB36C: pop %esi;");
    asm("loc_65DB36D: pop %ebx;");
    asm("loc_65DB36E: leave;");
    asm("loc_65DB36F: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65DB370() // __ioterm
{
    __DEBUG_ASM(65DB370);
    // chunk 0x65DB370 _sub_65DB370
    asm("loc_65DB370: push %ebx;");
    asm("loc_65DB371: push %esi;");
    asm("loc_65DB372: push %edi;");
    asm("loc_65DB373: mov $_data_65E7940,%esi;");
    asm("loc_65DB378: mov (%esi),%eax;");
    asm("loc_65DB37A: test %eax,%eax;");
    asm("loc_65DB37C: je loc_65DB3B5;");
    asm("loc_65DB37E: mov %eax,%edi;");
    asm("loc_65DB380: add $0x480,%eax;");
    asm("loc_65DB385: cmp %eax,%edi;");
    asm("loc_65DB387: jae loc_65DB3AA;");
    asm("loc_65DB389: lea 0xC(%edi),%ebx;");
    asm("loc_65DB38C: cmpl $0,-4(%ebx);");
    asm("loc_65DB390: je loc_65DB399;");
    asm("loc_65DB392: push %ebx;");
    asm("loc_65DB393: calll *_import_65E10A8;");
    asm("loc_65DB399: mov (%esi),%eax;");
    asm("loc_65DB39B: add $0x24,%edi;");
    asm("loc_65DB39E: add $0x480,%eax;");
    asm("loc_65DB3A3: add $0x24,%ebx;");
    asm("loc_65DB3A6: cmp %eax,%edi;");
    asm("loc_65DB3A8: jb loc_65DB38C;");
    asm("loc_65DB3AA: pushl (%esi);");
    asm("loc_65DB3AC: call _sub_65D7F23;");
    asm("loc_65DB3B1: andl $0,(%esi);");
    asm("loc_65DB3B4: pop %ecx;");
    asm("loc_65DB3B5: add $4,%esi;");
    asm("loc_65DB3B8: cmp $_data_65E7A40,%esi;");
    asm("loc_65DB3BE: jl loc_65DB378;");
    asm("loc_65DB3C0: pop %edi;");
    asm("loc_65DB3C1: pop %esi;");
    asm("loc_65DB3C2: pop %ebx;");
    asm("loc_65DB3C3: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65DB3C4() // __setenvp
{
    __DEBUG_ASM(65DB3C4);
    // chunk 0x65DB3C4 _sub_65DB3C4
    asm("loc_65DB3C4: push %ebx;");
    asm("loc_65DB3C5: xor %ebx,%ebx;");
    asm("loc_65DB3C7: cmp %ebx,_data_65E7A48;");
    asm("loc_65DB3CD: push %esi;");
    asm("loc_65DB3CE: push %edi;");
    asm("loc_65DB3CF: jne loc_65DB3D6;");
    asm("loc_65DB3D1: call _sub_65DE299;");
    asm("loc_65DB3D6: mov _data_65E6124,%esi;");
    asm("loc_65DB3DC: xor %edi,%edi;");
    asm("loc_65DB3DE: mov (%esi),%al;");
    asm("loc_65DB3E0: cmp %bl,%al;");
    asm("loc_65DB3E2: je loc_65DB3F6;");
    asm("loc_65DB3E4: cmp $0x3D,%al;");
    asm("loc_65DB3E6: je loc_65DB3E9;");
    asm("loc_65DB3E8: inc %edi;");
    asm("loc_65DB3E9: push %esi;");
    asm("loc_65DB3EA: call _sub_65D8120;");
    asm("loc_65DB3EF: pop %ecx;");
    asm("loc_65DB3F0: lea 1(%esi,%eax),%esi;");
    asm("loc_65DB3F4: jmp loc_65DB3DE;");
    asm("loc_65DB3F6: lea 4(,%edi,4),%eax;");
    asm("loc_65DB3FD: push %eax;");
    asm("loc_65DB3FE: call _sub_65D8535;");
    asm("loc_65DB403: mov %eax,%esi;");
    asm("loc_65DB405: pop %ecx;");
    asm("loc_65DB406: cmp %ebx,%esi;");
    asm("loc_65DB408: mov %esi,_data_65E6154;");
    asm("loc_65DB40E: jne loc_65DB418;");
    asm("loc_65DB410: push $9;");
    asm("loc_65DB412: call _sub_65D7EF0;");
    asm("loc_65DB417: pop %ecx;");
    asm("loc_65DB418: mov _data_65E6124,%edi;");
    asm("loc_65DB41E: cmp %bl,(%edi);");
    asm("loc_65DB420: je loc_65DB45B;");
    asm("loc_65DB422: push %ebp;");
    asm("loc_65DB423: push %edi;");
    asm("loc_65DB424: call _sub_65D8120;");
    asm("loc_65DB429: mov %eax,%ebp;");
    asm("loc_65DB42B: pop %ecx;");
    asm("loc_65DB42C: inc %ebp;");
    asm("loc_65DB42D: cmpb $0x3D,(%edi);");
    asm("loc_65DB430: je loc_65DB454;");
    asm("loc_65DB432: push %ebp;");
    asm("loc_65DB433: call _sub_65D8535;");
    asm("loc_65DB438: cmp %ebx,%eax;");
    asm("loc_65DB43A: pop %ecx;");
    asm("loc_65DB43B: mov %eax,(%esi);");
    asm("loc_65DB43D: jne loc_65DB447;");
    asm("loc_65DB43F: push $9;");
    asm("loc_65DB441: call _sub_65D7EF0;");
    asm("loc_65DB446: pop %ecx;");
    asm("loc_65DB447: push %edi;");
    asm("loc_65DB448: pushl (%esi);");
    asm("loc_65DB44A: call loc_65DD010;");
    asm("loc_65DB44F: pop %ecx;");
    asm("loc_65DB450: add $4,%esi;");
    asm("loc_65DB453: pop %ecx;");
    asm("loc_65DB454: add %ebp,%edi;");
    asm("loc_65DB456: cmp %bl,(%edi);");
    asm("loc_65DB458: jne loc_65DB423;");
    asm("loc_65DB45A: pop %ebp;");
    asm("loc_65DB45B: pushl _data_65E6124;");
    asm("loc_65DB461: call _sub_65D7F23;");
    asm("loc_65DB466: pop %ecx;");
    asm("loc_65DB467: mov %ebx,_data_65E6124;");
    asm("loc_65DB46D: mov %ebx,(%esi);");
    asm("loc_65DB46F: pop %edi;");
    asm("loc_65DB470: pop %esi;");
    asm("loc_65DB471: movl $1,_data_65E7A44;");
    asm("loc_65DB47B: pop %ebx;");
    asm("loc_65DB47C: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65DB47D() // __setargv
{
    __DEBUG_ASM(65DB47D);
    // chunk 0x65DB47D _sub_65DB47D
    asm("loc_65DB47D: push %ebp;");
    asm("loc_65DB47E: mov %esp,%ebp;");
    asm("loc_65DB480: push %ecx;");
    asm("loc_65DB481: push %ecx;");
    asm("loc_65DB482: push %ebx;");
    asm("loc_65DB483: xor %ebx,%ebx;");
    asm("loc_65DB485: cmp %ebx,_data_65E7A48;");
    asm("loc_65DB48B: push %esi;");
    asm("loc_65DB48C: push %edi;");
    asm("loc_65DB48D: jne loc_65DB494;");
    asm("loc_65DB48F: call _sub_65DE299;");
    asm("loc_65DB494: mov $_data_65E625C,%esi;");
    asm("loc_65DB499: push $0x104;");
    asm("loc_65DB49E: push %esi;");
    asm("loc_65DB49F: push %ebx;");
    asm("loc_65DB4A0: calll *_import_65E100C;");
    asm("loc_65DB4A6: mov _data_65E7A58,%eax;");
    asm("loc_65DB4AB: mov %esi,_data_65E6164;");
    asm("loc_65DB4B1: mov %esi,%edi;");
    asm("loc_65DB4B3: cmp %bl,(%eax);");
    asm("loc_65DB4B5: je loc_65DB4B9;");
    asm("loc_65DB4B7: mov %eax,%edi;");
    asm("loc_65DB4B9: lea -8(%ebp),%eax;");
    asm("loc_65DB4BC: push %eax;");
    asm("loc_65DB4BD: lea -4(%ebp),%eax;");
    asm("loc_65DB4C0: push %eax;");
    asm("loc_65DB4C1: push %ebx;");
    asm("loc_65DB4C2: push %ebx;");
    asm("loc_65DB4C3: push %edi;");
    asm("loc_65DB4C4: call _sub_65DB516;");
    asm("loc_65DB4C9: mov -8(%ebp),%eax;");
    asm("loc_65DB4CC: mov -4(%ebp),%ecx;");
    asm("loc_65DB4CF: lea (%eax,%ecx,4),%eax;");
    asm("loc_65DB4D2: push %eax;");
    asm("loc_65DB4D3: call _sub_65D8535;");
    asm("loc_65DB4D8: mov %eax,%esi;");
    asm("loc_65DB4DA: add $0x18,%esp;");
    asm("loc_65DB4DD: cmp %ebx,%esi;");
    asm("loc_65DB4DF: jne loc_65DB4E9;");
    asm("loc_65DB4E1: push $8;");
    asm("loc_65DB4E3: call _sub_65D7EF0;");
    asm("loc_65DB4E8: pop %ecx;");
    asm("loc_65DB4E9: lea -8(%ebp),%eax;");
    asm("loc_65DB4EC: push %eax;");
    asm("loc_65DB4ED: lea -4(%ebp),%eax;");
    asm("loc_65DB4F0: push %eax;");
    asm("loc_65DB4F1: mov -4(%ebp),%eax;");
    asm("loc_65DB4F4: lea (%esi,%eax,4),%eax;");
    asm("loc_65DB4F7: push %eax;");
    asm("loc_65DB4F8: push %esi;");
    asm("loc_65DB4F9: push %edi;");
    asm("loc_65DB4FA: call _sub_65DB516;");
    asm("loc_65DB4FF: mov -4(%ebp),%eax;");
    asm("loc_65DB502: add $0x14,%esp;");
    asm("loc_65DB505: dec %eax;");
    asm("loc_65DB506: mov %esi,_data_65E614C;");
    asm("loc_65DB50C: pop %edi;");
    asm("loc_65DB50D: pop %esi;");
    asm("loc_65DB50E: mov %eax,_data_65E6148;");
    asm("loc_65DB513: pop %ebx;");
    asm("loc_65DB514: leave;");
    asm("loc_65DB515: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65DB516() // _parse_cmdline
{
    __DEBUG_ASM(65DB516);
    // chunk 0x65DB516 _sub_65DB516
    asm("loc_65DB516: push %ebp;");
    asm("loc_65DB517: mov %esp,%ebp;");
    asm("loc_65DB519: mov 0x18(%ebp),%ecx;");
    asm("loc_65DB51C: mov 0x14(%ebp),%eax;");
    asm("loc_65DB51F: push %ebx;");
    asm("loc_65DB520: push %esi;");
    asm("loc_65DB521: andl $0,(%ecx);");
    asm("loc_65DB524: mov 0x10(%ebp),%esi;");
    asm("loc_65DB527: push %edi;");
    asm("loc_65DB528: mov 0xC(%ebp),%edi;");
    asm("loc_65DB52B: movl $1,(%eax);");
    asm("loc_65DB531: mov 8(%ebp),%eax;");
    asm("loc_65DB534: test %edi,%edi;");
    asm("loc_65DB536: je loc_65DB540;");
    asm("loc_65DB538: mov %esi,(%edi);");
    asm("loc_65DB53A: add $4,%edi;");
    asm("loc_65DB53D: mov %edi,0xC(%ebp);");
    asm("loc_65DB540: cmpb $0x22,(%eax);");
    asm("loc_65DB543: jne loc_65DB589;");
    asm("loc_65DB545: mov 1(%eax),%dl;");
    asm("loc_65DB548: inc %eax;");
    asm("loc_65DB549: cmp $0x22,%dl;");
    asm("loc_65DB54C: je loc_65DB577;");
    asm("loc_65DB54E: test %dl,%dl;");
    asm("loc_65DB550: je loc_65DB577;");
    asm("loc_65DB552: movzbl %dl,%edx;");
    asm("loc_65DB555: testb $4,_data_65E67E1(%edx);");
    asm("loc_65DB55C: je loc_65DB56A;");
    asm("loc_65DB55E: incl (%ecx);");
    asm("loc_65DB560: test %esi,%esi;");
    asm("loc_65DB562: je loc_65DB56A;");
    asm("loc_65DB564: mov (%eax),%dl;");
    asm("loc_65DB566: mov %dl,(%esi);");
    asm("loc_65DB568: inc %esi;");
    asm("loc_65DB569: inc %eax;");
    asm("loc_65DB56A: incl (%ecx);");
    asm("loc_65DB56C: test %esi,%esi;");
    asm("loc_65DB56E: je loc_65DB545;");
    asm("loc_65DB570: mov (%eax),%dl;");
    asm("loc_65DB572: mov %dl,(%esi);");
    asm("loc_65DB574: inc %esi;");
    asm("loc_65DB575: jmp loc_65DB545;");
    asm("loc_65DB577: incl (%ecx);");
    asm("loc_65DB579: test %esi,%esi;");
    asm("loc_65DB57B: je loc_65DB581;");
    asm("loc_65DB57D: andb $0,(%esi);");
    asm("loc_65DB580: inc %esi;");
    asm("loc_65DB581: cmpb $0x22,(%eax);");
    asm("loc_65DB584: jne loc_65DB5CC;");
    asm("loc_65DB586: inc %eax;");
    asm("loc_65DB587: jmp loc_65DB5CC;");
    asm("loc_65DB589: incl (%ecx);");
    asm("loc_65DB58B: test %esi,%esi;");
    asm("loc_65DB58D: je loc_65DB594;");
    asm("loc_65DB58F: mov (%eax),%dl;");
    asm("loc_65DB591: mov %dl,(%esi);");
    asm("loc_65DB593: inc %esi;");
    asm("loc_65DB594: mov (%eax),%dl;");
    asm("loc_65DB596: inc %eax;");
    asm("loc_65DB597: movzbl %dl,%ebx;");
    asm("loc_65DB59A: testb $4,_data_65E67E1(%ebx);");
    asm("loc_65DB5A1: je loc_65DB5AF;");
    asm("loc_65DB5A3: incl (%ecx);");
    asm("loc_65DB5A5: test %esi,%esi;");
    asm("loc_65DB5A7: je loc_65DB5AE;");
    asm("loc_65DB5A9: mov (%eax),%bl;");
    asm("loc_65DB5AB: mov %bl,(%esi);");
    asm("loc_65DB5AD: inc %esi;");
    asm("loc_65DB5AE: inc %eax;");
    asm("loc_65DB5AF: cmp $0x20,%dl;");
    asm("loc_65DB5B2: je loc_65DB5BD;");
    asm("loc_65DB5B4: test %dl,%dl;");
    asm("loc_65DB5B6: je loc_65DB5C1;");
    asm("loc_65DB5B8: cmp $9,%dl;");
    asm("loc_65DB5BB: jne loc_65DB589;");
    asm("loc_65DB5BD: test %dl,%dl;");
    asm("loc_65DB5BF: jne loc_65DB5C4;");
    asm("loc_65DB5C1: dec %eax;");
    asm("loc_65DB5C2: jmp loc_65DB5CC;");
    asm("loc_65DB5C4: test %esi,%esi;");
    asm("loc_65DB5C6: je loc_65DB5CC;");
    asm("loc_65DB5C8: andb $0,-1(%esi);");
    asm("loc_65DB5CC: andl $0,0x18(%ebp);");
    asm("loc_65DB5D0: cmpb $0,(%eax);");
    asm("loc_65DB5D3: je loc_65DB6B9;");
    asm("loc_65DB5D9: mov (%eax),%dl;");
    asm("loc_65DB5DB: cmp $0x20,%dl;");
    asm("loc_65DB5DE: je loc_65DB5E5;");
    asm("loc_65DB5E0: cmp $9,%dl;");
    asm("loc_65DB5E3: jne loc_65DB5E8;");
    asm("loc_65DB5E5: inc %eax;");
    asm("loc_65DB5E6: jmp loc_65DB5D9;");
    asm("loc_65DB5E8: cmpb $0,(%eax);");
    asm("loc_65DB5EB: je loc_65DB6B9;");
    asm("loc_65DB5F1: test %edi,%edi;");
    asm("loc_65DB5F3: je loc_65DB5FD;");
    asm("loc_65DB5F5: mov %esi,(%edi);");
    asm("loc_65DB5F7: add $4,%edi;");
    asm("loc_65DB5FA: mov %edi,0xC(%ebp);");
    asm("loc_65DB5FD: mov 0x14(%ebp),%edx;");
    asm("loc_65DB600: incl (%edx);");
    asm("loc_65DB602: movl $1,8(%ebp);");
    asm("loc_65DB609: xor %ebx,%ebx;");
    asm("loc_65DB60B: cmpb $0x5C,(%eax);");
    asm("loc_65DB60E: jne loc_65DB614;");
    asm("loc_65DB610: inc %eax;");
    asm("loc_65DB611: inc %ebx;");
    asm("loc_65DB612: jmp loc_65DB60B;");
    asm("loc_65DB614: cmpb $0x22,(%eax);");
    asm("loc_65DB617: jne loc_65DB645;");
    asm("loc_65DB619: test $1,%bl;");
    asm("loc_65DB61C: jne loc_65DB643;");
    asm("loc_65DB61E: xor %edi,%edi;");
    asm("loc_65DB620: cmp %edi,0x18(%ebp);");
    asm("loc_65DB623: je loc_65DB632;");
    asm("loc_65DB625: cmpb $0x22,1(%eax);");
    asm("loc_65DB629: lea 1(%eax),%edx;");
    asm("loc_65DB62C: jne loc_65DB632;");
    asm("loc_65DB62E: mov %edx,%eax;");
    asm("loc_65DB630: jmp loc_65DB635;");
    asm("loc_65DB632: mov %edi,8(%ebp);");
    asm("loc_65DB635: mov 0xC(%ebp),%edi;");
    asm("loc_65DB638: xor %edx,%edx;");
    asm("loc_65DB63A: cmp %edx,0x18(%ebp);");
    asm("loc_65DB63D: sete %dl;");
    asm("loc_65DB640: mov %edx,0x18(%ebp);");
    asm("loc_65DB643: shr $1,%ebx;");
    asm("loc_65DB645: mov %ebx,%edx;");
    asm("loc_65DB647: dec %ebx;");
    asm("loc_65DB648: test %edx,%edx;");
    asm("loc_65DB64A: je loc_65DB65A;");
    asm("loc_65DB64C: inc %ebx;");
    asm("loc_65DB64D: test %esi,%esi;");
    asm("loc_65DB64F: je loc_65DB655;");
    asm("loc_65DB651: movb $0x5C,(%esi);");
    asm("loc_65DB654: inc %esi;");
    asm("loc_65DB655: incl (%ecx);");
    asm("loc_65DB657: dec %ebx;");
    asm("loc_65DB658: jne loc_65DB64D;");
    asm("loc_65DB65A: mov (%eax),%dl;");
    asm("loc_65DB65C: test %dl,%dl;");
    asm("loc_65DB65E: je loc_65DB6AA;");
    asm("loc_65DB660: cmpl $0,0x18(%ebp);");
    asm("loc_65DB664: jne loc_65DB670;");
    asm("loc_65DB666: cmp $0x20,%dl;");
    asm("loc_65DB669: je loc_65DB6AA;");
    asm("loc_65DB66B: cmp $9,%dl;");
    asm("loc_65DB66E: je loc_65DB6AA;");
    asm("loc_65DB670: cmpl $0,8(%ebp);");
    asm("loc_65DB674: je loc_65DB6A4;");
    asm("loc_65DB676: test %esi,%esi;");
    asm("loc_65DB678: je loc_65DB693;");
    asm("loc_65DB67A: movzbl %dl,%ebx;");
    asm("loc_65DB67D: testb $4,_data_65E67E1(%ebx);");
    asm("loc_65DB684: je loc_65DB68C;");
    asm("loc_65DB686: mov %dl,(%esi);");
    asm("loc_65DB688: inc %esi;");
    asm("loc_65DB689: inc %eax;");
    asm("loc_65DB68A: incl (%ecx);");
    asm("loc_65DB68C: mov (%eax),%dl;");
    asm("loc_65DB68E: mov %dl,(%esi);");
    asm("loc_65DB690: inc %esi;");
    asm("loc_65DB691: jmp loc_65DB6A2;");
    asm("loc_65DB693: movzbl %dl,%edx;");
    asm("loc_65DB696: testb $4,_data_65E67E1(%edx);");
    asm("loc_65DB69D: je loc_65DB6A2;");
    asm("loc_65DB69F: inc %eax;");
    asm("loc_65DB6A0: incl (%ecx);");
    asm("loc_65DB6A2: incl (%ecx);");
    asm("loc_65DB6A4: inc %eax;");
    asm("loc_65DB6A5: jmp loc_65DB602;");
    asm("loc_65DB6AA: test %esi,%esi;");
    asm("loc_65DB6AC: je loc_65DB6B2;");
    asm("loc_65DB6AE: andb $0,(%esi);");
    asm("loc_65DB6B1: inc %esi;");
    asm("loc_65DB6B2: incl (%ecx);");
    asm("loc_65DB6B4: jmp loc_65DB5D0;");
    asm("loc_65DB6B9: test %edi,%edi;");
    asm("loc_65DB6BB: je loc_65DB6C0;");
    asm("loc_65DB6BD: andl $0,(%edi);");
    asm("loc_65DB6C0: mov 0x14(%ebp),%eax;");
    asm("loc_65DB6C3: pop %edi;");
    asm("loc_65DB6C4: pop %esi;");
    asm("loc_65DB6C5: pop %ebx;");
    asm("loc_65DB6C6: incl (%eax);");
    asm("loc_65DB6C8: pop %ebp;");
    asm("loc_65DB6C9: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65DB6CA() // ___crtGetEnvironmentStringsA
{
    __DEBUG_ASM(65DB6CA);
    // chunk 0x65DB6CA _sub_65DB6CA
    asm("loc_65DB6CA: push %ecx;");
    asm("loc_65DB6CB: push %ecx;");
    asm("loc_65DB6CC: mov _data_65E6360,%eax;");
    asm("loc_65DB6D1: push %ebx;");
    asm("loc_65DB6D2: push %ebp;");
    asm("loc_65DB6D3: mov _import_65E10B4,%ebp;");
    asm("loc_65DB6D9: push %esi;");
    asm("loc_65DB6DA: push %edi;");
    asm("loc_65DB6DB: xor %ebx,%ebx;");
    asm("loc_65DB6DD: xor %esi,%esi;");
    asm("loc_65DB6DF: xor %edi,%edi;");
    asm("loc_65DB6E1: cmp %ebx,%eax;");
    asm("loc_65DB6E3: jne loc_65DB718;");
    asm("loc_65DB6E5: call *%ebp;");
    asm("loc_65DB6E7: mov %eax,%esi;");
    asm("loc_65DB6E9: cmp %ebx,%esi;");
    asm("loc_65DB6EB: je loc_65DB6F9;");
    asm("loc_65DB6ED: movl $1,_data_65E6360;");
    asm("loc_65DB6F7: jmp loc_65DB721;");
    asm("loc_65DB6F9: calll *_import_65E10B0;");
    asm("loc_65DB6FF: mov %eax,%edi;");
    asm("loc_65DB701: cmp %ebx,%edi;");
    asm("loc_65DB703: je loc_65DB7F3;");
    asm("loc_65DB709: movl $2,_data_65E6360;");
    asm("loc_65DB713: jmp loc_65DB7A7;");
    asm("loc_65DB718: cmp $1,%eax;");
    asm("loc_65DB71B: jne loc_65DB7A2;");
    asm("loc_65DB721: cmp %ebx,%esi;");
    asm("loc_65DB723: jne loc_65DB731;");
    asm("loc_65DB725: call *%ebp;");
    asm("loc_65DB727: mov %eax,%esi;");
    asm("loc_65DB729: cmp %ebx,%esi;");
    asm("loc_65DB72B: je loc_65DB7F3;");
    asm("loc_65DB731: cmp %bx,(%esi);");
    asm("loc_65DB734: mov %esi,%eax;");
    asm("loc_65DB736: je loc_65DB746;");
    asm("loc_65DB738: inc %eax;");
    asm("loc_65DB739: inc %eax;");
    asm("loc_65DB73A: cmp %bx,(%eax);");
    asm("loc_65DB73D: jne loc_65DB738;");
    asm("loc_65DB73F: inc %eax;");
    asm("loc_65DB740: inc %eax;");
    asm("loc_65DB741: cmp %bx,(%eax);");
    asm("loc_65DB744: jne loc_65DB738;");
    asm("loc_65DB746: sub %esi,%eax;");
    asm("loc_65DB748: mov _import_65E1094,%edi;");
    asm("loc_65DB74E: sar $1,%eax;");
    asm("loc_65DB750: push %ebx;");
    asm("loc_65DB751: push %ebx;");
    asm("loc_65DB752: inc %eax;");
    asm("loc_65DB753: push %ebx;");
    asm("loc_65DB754: push %ebx;");
    asm("loc_65DB755: push %eax;");
    asm("loc_65DB756: push %esi;");
    asm("loc_65DB757: push %ebx;");
    asm("loc_65DB758: push %ebx;");
    asm("loc_65DB759: mov %eax,0x34(%esp);");
    asm("loc_65DB75D: call *%edi;");
    asm("loc_65DB75F: mov %eax,%ebp;");
    asm("loc_65DB761: cmp %ebx,%ebp;");
    asm("loc_65DB763: je loc_65DB797;");
    asm("loc_65DB765: push %ebp;");
    asm("loc_65DB766: call _sub_65D8535;");
    asm("loc_65DB76B: cmp %ebx,%eax;");
    asm("loc_65DB76D: pop %ecx;");
    asm("loc_65DB76E: mov %eax,0x10(%esp);");
    asm("loc_65DB772: je loc_65DB797;");
    asm("loc_65DB774: push %ebx;");
    asm("loc_65DB775: push %ebx;");
    asm("loc_65DB776: push %ebp;");
    asm("loc_65DB777: push %eax;");
    asm("loc_65DB778: pushl 0x24(%esp);");
    asm("loc_65DB77C: push %esi;");
    asm("loc_65DB77D: push %ebx;");
    asm("loc_65DB77E: push %ebx;");
    asm("loc_65DB77F: call *%edi;");
    asm("loc_65DB781: test %eax,%eax;");
    asm("loc_65DB783: jne loc_65DB793;");
    asm("loc_65DB785: pushl 0x10(%esp);");
    asm("loc_65DB789: call _sub_65D7F23;");
    asm("loc_65DB78E: pop %ecx;");
    asm("loc_65DB78F: mov %ebx,0x10(%esp);");
    asm("loc_65DB793: mov 0x10(%esp),%ebx;");
    asm("loc_65DB797: push %esi;");
    asm("loc_65DB798: calll *_import_65E1010;");
    asm("loc_65DB79E: mov %ebx,%eax;");
    asm("loc_65DB7A0: jmp loc_65DB7F5;");
    asm("loc_65DB7A2: cmp $2,%eax;");
    asm("loc_65DB7A5: jne loc_65DB7F3;");
    asm("loc_65DB7A7: cmp %ebx,%edi;");
    asm("loc_65DB7A9: jne loc_65DB7B7;");
    asm("loc_65DB7AB: calll *_import_65E10B0;");
    asm("loc_65DB7B1: mov %eax,%edi;");
    asm("loc_65DB7B3: cmp %ebx,%edi;");
    asm("loc_65DB7B5: je loc_65DB7F3;");
    asm("loc_65DB7B7: cmp %bl,(%edi);");
    asm("loc_65DB7B9: mov %edi,%eax;");
    asm("loc_65DB7BB: je loc_65DB7C7;");
    asm("loc_65DB7BD: inc %eax;");
    asm("loc_65DB7BE: cmp %bl,(%eax);");
    asm("loc_65DB7C0: jne loc_65DB7BD;");
    asm("loc_65DB7C2: inc %eax;");
    asm("loc_65DB7C3: cmp %bl,(%eax);");
    asm("loc_65DB7C5: jne loc_65DB7BD;");
    asm("loc_65DB7C7: sub %edi,%eax;");
    asm("loc_65DB7C9: inc %eax;");
    asm("loc_65DB7CA: mov %eax,%ebp;");
    asm("loc_65DB7CC: push %ebp;");
    asm("loc_65DB7CD: call _sub_65D8535;");
    asm("loc_65DB7D2: mov %eax,%esi;");
    asm("loc_65DB7D4: pop %ecx;");
    asm("loc_65DB7D5: cmp %ebx,%esi;");
    asm("loc_65DB7D7: jne loc_65DB7DD;");
    asm("loc_65DB7D9: xor %esi,%esi;");
    asm("loc_65DB7DB: jmp loc_65DB7E8;");
    asm("loc_65DB7DD: push %ebp;");
    asm("loc_65DB7DE: push %edi;");
    asm("loc_65DB7DF: push %esi;");
    asm("loc_65DB7E0: call loc_65D8200;");
    asm("loc_65DB7E5: add $0xC,%esp;");
    asm("loc_65DB7E8: push %edi;");
    asm("loc_65DB7E9: calll *_import_65E1014;");
    asm("loc_65DB7EF: mov %esi,%eax;");
    asm("loc_65DB7F1: jmp loc_65DB7F5;");
    asm("loc_65DB7F3: xor %eax,%eax;");
    asm("loc_65DB7F5: pop %edi;");
    asm("loc_65DB7F6: pop %esi;");
    asm("loc_65DB7F7: pop %ebp;");
    asm("loc_65DB7F8: pop %ebx;");
    asm("loc_65DB7F9: pop %ecx;");
    asm("loc_65DB7FA: pop %ecx;");
    asm("loc_65DB7FB: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65DB7FC() // _sub_65DB7FC
{
    __DEBUG_ASM(65DB7FC);
    // chunk 0x65DB7FC _sub_65DB7FC
    asm("loc_65DB7FC: push %esi;");
    asm("loc_65DB7FD: mov 8(%esp),%esi;");
    asm("loc_65DB801: push $0;");
    asm("loc_65DB803: andl $0,(%esi);");
    asm("loc_65DB806: calll *_import_65E10B8;");
    asm("loc_65DB80C: cmpw $0x5A4D,(%eax);");
    asm("loc_65DB811: jne loc_65DB827;");
    asm("loc_65DB813: mov 0x3C(%eax),%ecx;");
    asm("loc_65DB816: test %ecx,%ecx;");
    asm("loc_65DB818: je loc_65DB827;");
    asm("loc_65DB81A: add %ecx,%eax;");
    asm("loc_65DB81C: mov 0x1A(%eax),%cl;");
    asm("loc_65DB81F: mov %cl,(%esi);");
    asm("loc_65DB821: mov 0x1B(%eax),%al;");
    asm("loc_65DB824: mov %al,1(%esi);");
    asm("loc_65DB827: pop %esi;");
    asm("loc_65DB828: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65DB829() // _sub_65DB829
{
    __DEBUG_ASM(65DB829);
    // chunk 0x65DB829 _sub_65DB829
    asm("loc_65DB829: push %ebp;");
    asm("loc_65DB82A: mov %esp,%ebp;");
    asm("loc_65DB82C: mov $0x122C,%eax;");
    asm("loc_65DB831: call _sub_65DE5A0;");
    asm("loc_65DB836: lea -0x98(%ebp),%eax;");
    asm("loc_65DB83C: push %ebx;");
    asm("loc_65DB83D: push %eax;");
    asm("loc_65DB83E: movl $0x94,-0x98(%ebp);");
    asm("loc_65DB848: calll *_import_65E10C0;");
    asm("loc_65DB84E: test %eax,%eax;");
    asm("loc_65DB850: je loc_65DB86C;");
    asm("loc_65DB852: cmpl $2,-0x88(%ebp);");
    asm("loc_65DB859: jne loc_65DB86C;");
    asm("loc_65DB85B: cmpl $5,-0x94(%ebp);");
    asm("loc_65DB862: jb loc_65DB86C;");
    asm("loc_65DB864: push $1;");
    asm("loc_65DB866: pop %eax;");
    asm("loc_65DB867: jmp loc_65DB96E;");
    asm("loc_65DB86C: lea -0x122C(%ebp),%eax;");
    asm("loc_65DB872: push $0x1090;");
    asm("loc_65DB877: push %eax;");
    asm("loc_65DB878: push $_data_65E17B4;");
    asm("loc_65DB87D: calll *_import_65E10BC;");
    asm("loc_65DB883: test %eax,%eax;");
    asm("loc_65DB885: je loc_65DB95B;");
    asm("loc_65DB88B: xor %ebx,%ebx;");
    asm("loc_65DB88D: lea -0x122C(%ebp),%ecx;");
    asm("loc_65DB893: cmp %bl,-0x122C(%ebp);");
    asm("loc_65DB899: je loc_65DB8AE;");
    asm("loc_65DB89B: mov (%ecx),%al;");
    asm("loc_65DB89D: cmp $0x61,%al;");
    asm("loc_65DB89F: jl loc_65DB8A9;");
    asm("loc_65DB8A1: cmp $0x7A,%al;");
    asm("loc_65DB8A3: jg loc_65DB8A9;");
    asm("loc_65DB8A5: sub $0x20,%al;");
    asm("loc_65DB8A7: mov %al,(%ecx);");
    asm("loc_65DB8A9: inc %ecx;");
    asm("loc_65DB8AA: cmp %bl,(%ecx);");
    asm("loc_65DB8AC: jne loc_65DB89B;");
    asm("loc_65DB8AE: lea -0x122C(%ebp),%eax;");
    asm("loc_65DB8B4: push $0x16;");
    asm("loc_65DB8B6: push %eax;");
    asm("loc_65DB8B7: push $_data_65E179C;");
    asm("loc_65DB8BC: call _sub_65DE560;");
    asm("loc_65DB8C1: add $0xC,%esp;");
    asm("loc_65DB8C4: test %eax,%eax;");
    asm("loc_65DB8C6: jne loc_65DB8D0;");
    asm("loc_65DB8C8: lea -0x122C(%ebp),%eax;");
    asm("loc_65DB8CE: jmp loc_65DB919;");
    asm("loc_65DB8D0: lea -0x19C(%ebp),%eax;");
    asm("loc_65DB8D6: push $0x104;");
    asm("loc_65DB8DB: push %eax;");
    asm("loc_65DB8DC: push %ebx;");
    asm("loc_65DB8DD: calll *_import_65E100C;");
    asm("loc_65DB8E3: cmp %bl,-0x19C(%ebp);");
    asm("loc_65DB8E9: lea -0x19C(%ebp),%ecx;");
    asm("loc_65DB8EF: je loc_65DB904;");
    asm("loc_65DB8F1: mov (%ecx),%al;");
    asm("loc_65DB8F3: cmp $0x61,%al;");
    asm("loc_65DB8F5: jl loc_65DB8FF;");
    asm("loc_65DB8F7: cmp $0x7A,%al;");
    asm("loc_65DB8F9: jg loc_65DB8FF;");
    asm("loc_65DB8FB: sub $0x20,%al;");
    asm("loc_65DB8FD: mov %al,(%ecx);");
    asm("loc_65DB8FF: inc %ecx;");
    asm("loc_65DB900: cmp %bl,(%ecx);");
    asm("loc_65DB902: jne loc_65DB8F1;");
    asm("loc_65DB904: lea -0x19C(%ebp),%eax;");
    asm("loc_65DB90A: push %eax;");
    asm("loc_65DB90B: lea -0x122C(%ebp),%eax;");
    asm("loc_65DB911: push %eax;");
    asm("loc_65DB912: call loc_65DE4E0;");
    asm("loc_65DB917: pop %ecx;");
    asm("loc_65DB918: pop %ecx;");
    asm("loc_65DB919: cmp %ebx,%eax;");
    asm("loc_65DB91B: je loc_65DB95B;");
    asm("loc_65DB91D: push $0x2C;");
    asm("loc_65DB91F: push %eax;");
    asm("loc_65DB920: call _sub_65D7990;");
    asm("loc_65DB925: pop %ecx;");
    asm("loc_65DB926: cmp %ebx,%eax;");
    asm("loc_65DB928: pop %ecx;");
    asm("loc_65DB929: je loc_65DB95B;");
    asm("loc_65DB92B: inc %eax;");
    asm("loc_65DB92C: mov %eax,%ecx;");
    asm("loc_65DB92E: cmp %bl,(%eax);");
    asm("loc_65DB930: je loc_65DB940;");
    asm("loc_65DB932: cmpb $0x3B,(%ecx);");
    asm("loc_65DB935: jne loc_65DB93B;");
    asm("loc_65DB937: mov %bl,(%ecx);");
    asm("loc_65DB939: jmp loc_65DB93C;");
    asm("loc_65DB93B: inc %ecx;");
    asm("loc_65DB93C: cmp %bl,(%ecx);");
    asm("loc_65DB93E: jne loc_65DB932;");
    asm("loc_65DB940: push $0xA;");
    asm("loc_65DB942: push %ebx;");
    asm("loc_65DB943: push %eax;");
    asm("loc_65DB944: call _sub_65DE2B5;");
    asm("loc_65DB949: add $0xC,%esp;");
    asm("loc_65DB94C: cmp $2,%eax;");
    asm("loc_65DB94F: je loc_65DB96E;");
    asm("loc_65DB951: cmp $3,%eax;");
    asm("loc_65DB954: je loc_65DB96E;");
    asm("loc_65DB956: cmp $1,%eax;");
    asm("loc_65DB959: je loc_65DB96E;");
    asm("loc_65DB95B: lea -4(%ebp),%eax;");
    asm("loc_65DB95E: push %eax;");
    asm("loc_65DB95F: call _sub_65DB7FC;");
    asm("loc_65DB964: cmpb $6,-4(%ebp);");
    asm("loc_65DB968: pop %ecx;");
    asm("loc_65DB969: sbb %eax,%eax;");
    asm("loc_65DB96B: add $3,%eax;");
    asm("loc_65DB96E: pop %ebx;");
    asm("loc_65DB96F: leave;");
    asm("loc_65DB970: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65DB971() // _sub_65DB971
{
    __DEBUG_ASM(65DB971);
    // chunk 0x65DB971 _sub_65DB971
    asm("loc_65DB971: xor %eax,%eax;");
    asm("loc_65DB973: push $0;");
    asm("loc_65DB975: cmp %eax,8(%esp);");
    asm("loc_65DB979: push $0x1000;");
    asm("loc_65DB97E: sete %al;");
    asm("loc_65DB981: push %eax;");
    asm("loc_65DB982: calll *_import_65E10C8;");
    asm("loc_65DB988: test %eax,%eax;");
    asm("loc_65DB98A: mov %eax,_data_65E7920;");
    asm("loc_65DB98F: je loc_65DB9C7;");
    asm("loc_65DB991: call _sub_65DB829;");
    asm("loc_65DB996: cmp $3,%eax;");
    asm("loc_65DB999: mov %eax,_data_65E7924;");
    asm("loc_65DB99E: jne loc_65DB9AD;");
    asm("loc_65DB9A0: push $0x3F8;");
    asm("loc_65DB9A5: call _sub_65DBC02;");
    asm("loc_65DB9AA: pop %ecx;");
    asm("loc_65DB9AB: jmp loc_65DB9B7;");
    asm("loc_65DB9AD: cmp $2,%eax;");
    asm("loc_65DB9B0: jne loc_65DB9CA;");
    asm("loc_65DB9B2: call _sub_65DC749;");
    asm("loc_65DB9B7: test %eax,%eax;");
    asm("loc_65DB9B9: jne loc_65DB9CA;");
    asm("loc_65DB9BB: pushl _data_65E7920;");
    asm("loc_65DB9C1: calll *_import_65E10C4;");
    asm("loc_65DB9C7: xor %eax,%eax;");
    asm("loc_65DB9C9: ret;");
    asm("loc_65DB9CA: push $1;");
    asm("loc_65DB9CC: pop %eax;");
    asm("loc_65DB9CD: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65DB9CE() // _sub_65DB9CE
{
    __DEBUG_ASM(65DB9CE);
    // chunk 0x65DB9CE _sub_65DB9CE
    asm("loc_65DB9CE: mov _data_65E7924,%eax;");
    asm("loc_65DB9D3: push %esi;");
    asm("loc_65DB9D4: cmp $3,%eax;");
    asm("loc_65DB9D7: push %edi;");
    asm("loc_65DB9D8: jne loc_65DBA40;");
    asm("loc_65DB9DA: push %ebx;");
    asm("loc_65DB9DB: xor %ebx,%ebx;");
    asm("loc_65DB9DD: cmp %ebx,_data_65E7914;");
    asm("loc_65DB9E3: push %ebp;");
    asm("loc_65DB9E4: mov _import_65E1058,%ebp;");
    asm("loc_65DB9EA: jle loc_65DBA2C;");
    asm("loc_65DB9EC: mov _data_65E7918,%eax;");
    asm("loc_65DB9F1: mov _import_65E10CC,%edi;");
    asm("loc_65DB9F7: lea 0xC(%eax),%esi;");
    asm("loc_65DB9FA: push $0x4000;");
    asm("loc_65DB9FF: push $0x100000;");
    asm("loc_65DBA04: pushl (%esi);");
    asm("loc_65DBA06: call *%edi;");
    asm("loc_65DBA08: push $0x8000;");
    asm("loc_65DBA0D: push $0;");
    asm("loc_65DBA0F: pushl (%esi);");
    asm("loc_65DBA11: call *%edi;");
    asm("loc_65DBA13: pushl 4(%esi);");
    asm("loc_65DBA16: push $0;");
    asm("loc_65DBA18: pushl _data_65E7920;");
    asm("loc_65DBA1E: call *%ebp;");
    asm("loc_65DBA20: add $0x14,%esi;");
    asm("loc_65DBA23: inc %ebx;");
    asm("loc_65DBA24: cmp _data_65E7914,%ebx;");
    asm("loc_65DBA2A: jl loc_65DB9FA;");
    asm("loc_65DBA2C: pushl _data_65E7918;");
    asm("loc_65DBA32: push $0;");
    asm("loc_65DBA34: pushl _data_65E7920;");
    asm("loc_65DBA3A: call *%ebp;");
    asm("loc_65DBA3C: pop %ebp;");
    asm("loc_65DBA3D: pop %ebx;");
    asm("loc_65DBA3E: jmp loc_65DBA67;");
    asm("loc_65DBA40: cmp $2,%eax;");
    asm("loc_65DBA43: jne loc_65DBA67;");
    asm("loc_65DBA45: mov $_off_65E35C8,%edi;");
    asm("loc_65DBA4A: mov %edi,%esi;");
    asm("loc_65DBA4C: mov 0x10(%esi),%eax;");
    asm("loc_65DBA4F: test %eax,%eax;");
    asm("loc_65DBA51: je loc_65DBA61;");
    asm("loc_65DBA53: push $0x8000;");
    asm("loc_65DBA58: push $0;");
    asm("loc_65DBA5A: push %eax;");
    asm("loc_65DBA5B: calll *_import_65E10CC;");
    asm("loc_65DBA61: mov (%esi),%esi;");
    asm("loc_65DBA63: cmp %edi,%esi;");
    asm("loc_65DBA65: jne loc_65DBA4C;");
    asm("loc_65DBA67: pushl _data_65E7920;");
    asm("loc_65DBA6D: calll *_import_65E10C4;");
    asm("loc_65DBA73: pop %edi;");
    asm("loc_65DBA74: pop %esi;");
    asm("loc_65DBA75: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65DBA76() // __FF_MSGBANNER
{
    __DEBUG_ASM(65DBA76);
    // chunk 0x65DBA76 _sub_65DBA76
    asm("loc_65DBA76: mov _data_65E612C,%eax;");
    asm("loc_65DBA7B: cmp $1,%eax;");
    asm("loc_65DBA7E: je loc_65DBA8D;");
    asm("loc_65DBA80: test %eax,%eax;");
    asm("loc_65DBA82: jne loc_65DBAAE;");
    asm("loc_65DBA84: cmpl $1,_data_65E6130;");
    asm("loc_65DBA8B: jne loc_65DBAAE;");
    asm("loc_65DBA8D: push $0xFC;");
    asm("loc_65DBA92: call _sub_65DBAAF;");
    asm("loc_65DBA97: mov _data_65E6364,%eax;");
    asm("loc_65DBA9C: pop %ecx;");
    asm("loc_65DBA9D: test %eax,%eax;");
    asm("loc_65DBA9F: je loc_65DBAA3;");
    asm("loc_65DBAA1: call *%eax;");
    asm("loc_65DBAA3: push $0xFF;");
    asm("loc_65DBAA8: call _sub_65DBAAF;");
    asm("loc_65DBAAD: pop %ecx;");
    asm("loc_65DBAAE: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65DBAAF() // __NMSG_WRITE
{
    __DEBUG_ASM(65DBAAF);
    // chunk 0x65DBAAF _sub_65DBAAF
    asm("loc_65DBAAF: push %ebp;");
    asm("loc_65DBAB0: mov %esp,%ebp;");
    asm("loc_65DBAB2: sub $0x1A4,%esp;");
    asm("loc_65DBAB8: mov 8(%ebp),%edx;");
    asm("loc_65DBABB: xor %ecx,%ecx;");
    asm("loc_65DBABD: mov $_data_65E3538,%eax;");
    asm("loc_65DBAC2: cmp (%eax),%edx;");
    asm("loc_65DBAC4: je loc_65DBAD1;");
    asm("loc_65DBAC6: add $8,%eax;");
    asm("loc_65DBAC9: inc %ecx;");
    asm("loc_65DBACA: cmp $_off_65E35C8,%eax;");
    asm("loc_65DBACF: jl loc_65DBAC2;");
    asm("loc_65DBAD1: push %esi;");
    asm("loc_65DBAD2: mov %ecx,%esi;");
    asm("loc_65DBAD4: shl $3,%esi;");
    asm("loc_65DBAD7: cmp _data_65E3538(%esi),%edx;");
    asm("loc_65DBADD: jne loc_65DBBFF;");
    asm("loc_65DBAE3: mov _data_65E612C,%eax;");
    asm("loc_65DBAE8: cmp $1,%eax;");
    asm("loc_65DBAEB: je loc_65DBBD9;");
    asm("loc_65DBAF1: test %eax,%eax;");
    asm("loc_65DBAF3: jne loc_65DBB02;");
    asm("loc_65DBAF5: cmpl $1,_data_65E6130;");
    asm("loc_65DBAFC: je loc_65DBBD9;");
    asm("loc_65DBB02: cmp $0xFC,%edx;");
    asm("loc_65DBB08: je loc_65DBBFF;");
    asm("loc_65DBB0E: lea -0x1A4(%ebp),%eax;");
    asm("loc_65DBB14: push $0x104;");
    asm("loc_65DBB19: push %eax;");
    asm("loc_65DBB1A: push $0;");
    asm("loc_65DBB1C: calll *_import_65E100C;");
    asm("loc_65DBB22: test %eax,%eax;");
    asm("loc_65DBB24: jne loc_65DBB39;");
    asm("loc_65DBB26: lea -0x1A4(%ebp),%eax;");
    asm("loc_65DBB2C: push $_data_65E1AA0;");
    asm("loc_65DBB31: push %eax;");
    asm("loc_65DBB32: call loc_65DD010;");
    asm("loc_65DBB37: pop %ecx;");
    asm("loc_65DBB38: pop %ecx;");
    asm("loc_65DBB39: lea -0x1A4(%ebp),%eax;");
    asm("loc_65DBB3F: push %edi;");
    asm("loc_65DBB40: push %eax;");
    asm("loc_65DBB41: lea -0x1A4(%ebp),%edi;");
    asm("loc_65DBB47: call _sub_65D8120;");
    asm("loc_65DBB4C: inc %eax;");
    asm("loc_65DBB4D: pop %ecx;");
    asm("loc_65DBB4E: cmp $0x3C,%eax;");
    asm("loc_65DBB51: jbe loc_65DBB7C;");
    asm("loc_65DBB53: lea -0x1A4(%ebp),%eax;");
    asm("loc_65DBB59: push %eax;");
    asm("loc_65DBB5A: call _sub_65D8120;");
    asm("loc_65DBB5F: mov %eax,%edi;");
    asm("loc_65DBB61: lea -0x1A4(%ebp),%eax;");
    asm("loc_65DBB67: sub $0x3B,%eax;");
    asm("loc_65DBB6A: push $3;");
    asm("loc_65DBB6C: add %eax,%edi;");
    asm("loc_65DBB6E: push $_data_65E1A9C;");
    asm("loc_65DBB73: push %edi;");
    asm("loc_65DBB74: call _sub_65D7880;");
    asm("loc_65DBB79: add $0x10,%esp;");
    asm("loc_65DBB7C: lea -0xA0(%ebp),%eax;");
    asm("loc_65DBB82: push $_data_65E1A80;");
    asm("loc_65DBB87: push %eax;");
    asm("loc_65DBB88: call loc_65DD010;");
    asm("loc_65DBB8D: lea -0xA0(%ebp),%eax;");
    asm("loc_65DBB93: push %edi;");
    asm("loc_65DBB94: push %eax;");
    asm("loc_65DBB95: call _sub_65DD020;");
    asm("loc_65DBB9A: lea -0xA0(%ebp),%eax;");
    asm("loc_65DBBA0: push $_data_65E1A7C;");
    asm("loc_65DBBA5: push %eax;");
    asm("loc_65DBBA6: call _sub_65DD020;");
    asm("loc_65DBBAB: pushl _off_65E353C(%esi);");
    asm("loc_65DBBB1: lea -0xA0(%ebp),%eax;");
    asm("loc_65DBBB7: push %eax;");
    asm("loc_65DBBB8: call _sub_65DD020;");
    asm("loc_65DBBBD: push $0x12010;");
    asm("loc_65DBBC2: lea -0xA0(%ebp),%eax;");
    asm("loc_65DBBC8: push $_data_65E1A54;");
    asm("loc_65DBBCD: push %eax;");
    asm("loc_65DBBCE: call _sub_65DE5CF;");
    asm("loc_65DBBD3: add $0x2C,%esp;");
    asm("loc_65DBBD6: pop %edi;");
    asm("loc_65DBBD7: jmp loc_65DBBFF;");
    asm("loc_65DBBD9: lea 8(%ebp),%eax;");
    asm("loc_65DBBDC: lea _off_65E353C(%esi),%esi;");
    asm("loc_65DBBE2: push $0;");
    asm("loc_65DBBE4: push %eax;");
    asm("loc_65DBBE5: pushl (%esi);");
    asm("loc_65DBBE7: call _sub_65D8120;");
    asm("loc_65DBBEC: pop %ecx;");
    asm("loc_65DBBED: push %eax;");
    asm("loc_65DBBEE: pushl (%esi);");
    asm("loc_65DBBF0: push $0xFFFFFFF4;");
    asm("loc_65DBBF2: calll *_import_65E109C;");
    asm("loc_65DBBF8: push %eax;");
    asm("loc_65DBBF9: calll *_import_65E10D0;");
    asm("loc_65DBBFF: pop %esi;");
    asm("loc_65DBC00: leave;");
    asm("loc_65DBC01: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65DBC02() // ___sbh_heap_init
{
    __DEBUG_ASM(65DBC02);
    // chunk 0x65DBC02 _sub_65DBC02
    asm("loc_65DBC02: push $0x140;");
    asm("loc_65DBC07: push $0;");
    asm("loc_65DBC09: pushl _data_65E7920;");
    asm("loc_65DBC0F: calll *_import_65E1060;");
    asm("loc_65DBC15: test %eax,%eax;");
    asm("loc_65DBC17: mov %eax,_data_65E7918;");
    asm("loc_65DBC1C: jne loc_65DBC1F;");
    asm("loc_65DBC1E: ret;");
    asm("loc_65DBC1F: mov 4(%esp),%ecx;");
    asm("loc_65DBC23: andl $0,_data_65E7910;");
    asm("loc_65DBC2A: andl $0,_data_65E7914;");
    asm("loc_65DBC31: push $1;");
    asm("loc_65DBC33: mov %eax,_data_65E790C;");
    asm("loc_65DBC38: mov %ecx,_data_65E791C;");
    asm("loc_65DBC3E: movl $0x10,_data_65E7904;");
    asm("loc_65DBC48: pop %eax;");
    asm("loc_65DBC49: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65DBC4A() // ___sbh_find_block
{
    __DEBUG_ASM(65DBC4A);
    // chunk 0x65DBC4A _sub_65DBC4A
    asm("loc_65DBC4A: mov _data_65E7914,%eax;");
    asm("loc_65DBC4F: lea (%eax,%eax,4),%ecx;");
    asm("loc_65DBC52: mov _data_65E7918,%eax;");
    asm("loc_65DBC57: lea (%eax,%ecx,4),%ecx;");
    asm("loc_65DBC5A: cmp %ecx,%eax;");
    asm("loc_65DBC5C: jae loc_65DBC72;");
    asm("loc_65DBC5E: mov 4(%esp),%edx;");
    asm("loc_65DBC62: sub 0xC(%eax),%edx;");
    asm("loc_65DBC65: cmp $0x100000,%edx;");
    asm("loc_65DBC6B: jb loc_65DBC74;");
    asm("loc_65DBC6D: add $0x14,%eax;");
    asm("loc_65DBC70: jmp loc_65DBC5A;");
    asm("loc_65DBC72: xor %eax,%eax;");
    asm("loc_65DBC74: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65DBC75() // _sub_65DBC75
{
    __DEBUG_ASM(65DBC75);
    // chunk 0x65DBC75 _sub_65DBC75
    asm("loc_65DBC75: push %ebp;");
    asm("loc_65DBC76: mov %esp,%ebp;");
    asm("loc_65DBC78: sub $0x10,%esp;");
    asm("loc_65DBC7B: mov 8(%ebp),%ecx;");
    asm("loc_65DBC7E: push %ebx;");
    asm("loc_65DBC7F: push %esi;");
    asm("loc_65DBC80: mov 0xC(%ebp),%esi;");
    asm("loc_65DBC83: mov 0x10(%ecx),%eax;");
    asm("loc_65DBC86: push %edi;");
    asm("loc_65DBC87: mov %esi,%edi;");
    asm("loc_65DBC89: add $0xFFFFFFFC,%esi;");
    asm("loc_65DBC8C: sub 0xC(%ecx),%edi;");
    asm("loc_65DBC8F: shr $0xF,%edi;");
    asm("loc_65DBC92: mov %edi,%ecx;");
    asm("loc_65DBC94: imul $0x204,%ecx;");
    asm("loc_65DBC9A: lea 0x144(%ecx,%eax),%ecx;");
    asm("loc_65DBCA1: mov %ecx,-0x10(%ebp);");
    asm("loc_65DBCA4: mov (%esi),%ecx;");
    asm("loc_65DBCA6: dec %ecx;");
    asm("loc_65DBCA7: test $1,%cl;");
    asm("loc_65DBCAA: mov %ecx,-4(%ebp);");
    asm("loc_65DBCAD: jne loc_65DBF99;");
    asm("loc_65DBCB3: mov (%ecx,%esi),%edx;");
    asm("loc_65DBCB6: lea (%ecx,%esi),%ebx;");
    asm("loc_65DBCB9: mov %edx,-0xC(%ebp);");
    asm("loc_65DBCBC: mov -4(%esi),%edx;");
    asm("loc_65DBCBF: mov %edx,-8(%ebp);");
    asm("loc_65DBCC2: mov -0xC(%ebp),%edx;");
    asm("loc_65DBCC5: test $1,%dl;");
    asm("loc_65DBCC8: mov %ebx,0xC(%ebp);");
    asm("loc_65DBCCB: jne loc_65DBD4B;");
    asm("loc_65DBCCD: sar $4,%edx;");
    asm("loc_65DBCD0: dec %edx;");
    asm("loc_65DBCD1: cmp $0x3F,%edx;");
    asm("loc_65DBCD4: jbe loc_65DBCD9;");
    asm("loc_65DBCD6: push $0x3F;");
    asm("loc_65DBCD8: pop %edx;");
    asm("loc_65DBCD9: mov 4(%ebx),%ecx;");
    asm("loc_65DBCDC: cmp 8(%ebx),%ecx;");
    asm("loc_65DBCDF: jne loc_65DBD2D;");
    asm("loc_65DBCE1: cmp $0x20,%edx;");
    asm("loc_65DBCE4: jae loc_65DBD04;");
    asm("loc_65DBCE6: mov $0x80000000,%ebx;");
    asm("loc_65DBCEB: mov %edx,%ecx;");
    asm("loc_65DBCED: shr %cl,%ebx;");
    asm("loc_65DBCEF: lea 4(%edx,%eax),%ecx;");
    asm("loc_65DBCF3: not %ebx;");
    asm("loc_65DBCF5: and %ebx,0x44(%eax,%edi,4);");
    asm("loc_65DBCF9: decb (%ecx);");
    asm("loc_65DBCFB: jne loc_65DBD25;");
    asm("loc_65DBCFD: mov 8(%ebp),%ecx;");
    asm("loc_65DBD00: and %ebx,(%ecx);");
    asm("loc_65DBD02: jmp loc_65DBD25;");
    asm("loc_65DBD04: lea -0x20(%edx),%ecx;");
    asm("loc_65DBD07: mov $0x80000000,%ebx;");
    asm("loc_65DBD0C: shr %cl,%ebx;");
    asm("loc_65DBD0E: lea 4(%edx,%eax),%ecx;");
    asm("loc_65DBD12: not %ebx;");
    asm("loc_65DBD14: and %ebx,0xC4(%eax,%edi,4);");
    asm("loc_65DBD1B: decb (%ecx);");
    asm("loc_65DBD1D: jne loc_65DBD25;");
    asm("loc_65DBD1F: mov 8(%ebp),%ecx;");
    asm("loc_65DBD22: and %ebx,4(%ecx);");
    asm("loc_65DBD25: mov -4(%ebp),%ecx;");
    asm("loc_65DBD28: mov 0xC(%ebp),%ebx;");
    asm("loc_65DBD2B: jmp loc_65DBD30;");
    asm("loc_65DBD2D: mov -4(%ebp),%ecx;");
    asm("loc_65DBD30: mov 8(%ebx),%edx;");
    asm("loc_65DBD33: mov 4(%ebx),%ebx;");
    asm("loc_65DBD36: add -0xC(%ebp),%ecx;");
    asm("loc_65DBD39: mov %ebx,4(%edx);");
    asm("loc_65DBD3C: mov 0xC(%ebp),%edx;");
    asm("loc_65DBD3F: mov %ecx,-4(%ebp);");
    asm("loc_65DBD42: mov 4(%edx),%ebx;");
    asm("loc_65DBD45: mov 8(%edx),%edx;");
    asm("loc_65DBD48: mov %edx,8(%ebx);");
    asm("loc_65DBD4B: mov %ecx,%edx;");
    asm("loc_65DBD4D: sar $4,%edx;");
    asm("loc_65DBD50: dec %edx;");
    asm("loc_65DBD51: cmp $0x3F,%edx;");
    asm("loc_65DBD54: jbe loc_65DBD59;");
    asm("loc_65DBD56: push $0x3F;");
    asm("loc_65DBD58: pop %edx;");
    asm("loc_65DBD59: mov -8(%ebp),%ebx;");
    asm("loc_65DBD5C: and $1,%ebx;");
    asm("loc_65DBD5F: mov %ebx,-0xC(%ebp);");
    asm("loc_65DBD62: jne loc_65DBDFC;");
    asm("loc_65DBD68: sub -8(%ebp),%esi;");
    asm("loc_65DBD6B: mov -8(%ebp),%ebx;");
    asm("loc_65DBD6E: sar $4,%ebx;");
    asm("loc_65DBD71: push $0x3F;");
    asm("loc_65DBD73: mov %esi,0xC(%ebp);");
    asm("loc_65DBD76: dec %ebx;");
    asm("loc_65DBD77: pop %esi;");
    asm("loc_65DBD78: cmp %esi,%ebx;");
    asm("loc_65DBD7A: jbe loc_65DBD7E;");
    asm("loc_65DBD7C: mov %esi,%ebx;");
    asm("loc_65DBD7E: add -8(%ebp),%ecx;");
    asm("loc_65DBD81: mov %ecx,%edx;");
    asm("loc_65DBD83: mov %ecx,-4(%ebp);");
    asm("loc_65DBD86: sar $4,%edx;");
    asm("loc_65DBD89: dec %edx;");
    asm("loc_65DBD8A: cmp %esi,%edx;");
    asm("loc_65DBD8C: jbe loc_65DBD90;");
    asm("loc_65DBD8E: mov %esi,%edx;");
    asm("loc_65DBD90: cmp %edx,%ebx;");
    asm("loc_65DBD92: je loc_65DBDF7;");
    asm("loc_65DBD94: mov 0xC(%ebp),%ecx;");
    asm("loc_65DBD97: mov 4(%ecx),%esi;");
    asm("loc_65DBD9A: cmp 8(%ecx),%esi;");
    asm("loc_65DBD9D: jne loc_65DBDDF;");
    asm("loc_65DBD9F: cmp $0x20,%ebx;");
    asm("loc_65DBDA2: jae loc_65DBDC0;");
    asm("loc_65DBDA4: mov $0x80000000,%esi;");
    asm("loc_65DBDA9: mov %ebx,%ecx;");
    asm("loc_65DBDAB: shr %cl,%esi;");
    asm("loc_65DBDAD: not %esi;");
    asm("loc_65DBDAF: and %esi,0x44(%eax,%edi,4);");
    asm("loc_65DBDB3: decb 4(%ebx,%eax);");
    asm("loc_65DBDB7: jne loc_65DBDDF;");
    asm("loc_65DBDB9: mov 8(%ebp),%ecx;");
    asm("loc_65DBDBC: and %esi,(%ecx);");
    asm("loc_65DBDBE: jmp loc_65DBDDF;");
    asm("loc_65DBDC0: lea -0x20(%ebx),%ecx;");
    asm("loc_65DBDC3: mov $0x80000000,%esi;");
    asm("loc_65DBDC8: shr %cl,%esi;");
    asm("loc_65DBDCA: not %esi;");
    asm("loc_65DBDCC: and %esi,0xC4(%eax,%edi,4);");
    asm("loc_65DBDD3: decb 4(%ebx,%eax);");
    asm("loc_65DBDD7: jne loc_65DBDDF;");
    asm("loc_65DBDD9: mov 8(%ebp),%ecx;");
    asm("loc_65DBDDC: and %esi,4(%ecx);");
    asm("loc_65DBDDF: mov 0xC(%ebp),%ecx;");
    asm("loc_65DBDE2: mov 8(%ecx),%esi;");
    asm("loc_65DBDE5: mov 4(%ecx),%ecx;");
    asm("loc_65DBDE8: mov %ecx,4(%esi);");
    asm("loc_65DBDEB: mov 0xC(%ebp),%ecx;");
    asm("loc_65DBDEE: mov 4(%ecx),%esi;");
    asm("loc_65DBDF1: mov 8(%ecx),%ecx;");
    asm("loc_65DBDF4: mov %ecx,8(%esi);");
    asm("loc_65DBDF7: mov 0xC(%ebp),%esi;");
    asm("loc_65DBDFA: jmp loc_65DBDFF;");
    asm("loc_65DBDFC: mov 8(%ebp),%ebx;");
    asm("loc_65DBDFF: cmpl $0,-0xC(%ebp);");
    asm("loc_65DBE03: jne loc_65DBE0D;");
    asm("loc_65DBE05: cmp %edx,%ebx;");
    asm("loc_65DBE07: je loc_65DBE8E;");
    asm("loc_65DBE0D: mov -0x10(%ebp),%ecx;");
    asm("loc_65DBE10: mov 4(%ecx,%edx,8),%ebx;");
    asm("loc_65DBE14: lea (%ecx,%edx,8),%ecx;");
    asm("loc_65DBE17: mov %ebx,4(%esi);");
    asm("loc_65DBE1A: mov %ecx,8(%esi);");
    asm("loc_65DBE1D: mov %esi,4(%ecx);");
    asm("loc_65DBE20: mov 4(%esi),%ecx;");
    asm("loc_65DBE23: mov %esi,8(%ecx);");
    asm("loc_65DBE26: mov 4(%esi),%ecx;");
    asm("loc_65DBE29: cmp 8(%esi),%ecx;");
    asm("loc_65DBE2C: jne loc_65DBE8E;");
    asm("loc_65DBE2E: mov 4(%edx,%eax),%cl;");
    asm("loc_65DBE32: cmp $0x20,%edx;");
    asm("loc_65DBE35: mov %cl,0xF(%ebp);");
    asm("loc_65DBE38: inc %cl;");
    asm("loc_65DBE3A: mov %cl,4(%edx,%eax);");
    asm("loc_65DBE3E: jae loc_65DBE65;");
    asm("loc_65DBE40: cmpb $0,0xF(%ebp);");
    asm("loc_65DBE44: jne loc_65DBE54;");
    asm("loc_65DBE46: mov $0x80000000,%ebx;");
    asm("loc_65DBE4B: mov %edx,%ecx;");
    asm("loc_65DBE4D: shr %cl,%ebx;");
    asm("loc_65DBE4F: mov 8(%ebp),%ecx;");
    asm("loc_65DBE52: or %ebx,(%ecx);");
    asm("loc_65DBE54: mov $0x80000000,%ebx;");
    asm("loc_65DBE59: mov %edx,%ecx;");
    asm("loc_65DBE5B: shr %cl,%ebx;");
    asm("loc_65DBE5D: lea 0x44(%eax,%edi,4),%eax;");
    asm("loc_65DBE61: or %ebx,(%eax);");
    asm("loc_65DBE63: jmp loc_65DBE8E;");
    asm("loc_65DBE65: cmpb $0,0xF(%ebp);");
    asm("loc_65DBE69: jne loc_65DBE7B;");
    asm("loc_65DBE6B: lea -0x20(%edx),%ecx;");
    asm("loc_65DBE6E: mov $0x80000000,%ebx;");
    asm("loc_65DBE73: shr %cl,%ebx;");
    asm("loc_65DBE75: mov 8(%ebp),%ecx;");
    asm("loc_65DBE78: or %ebx,4(%ecx);");
    asm("loc_65DBE7B: lea -0x20(%edx),%ecx;");
    asm("loc_65DBE7E: mov $0x80000000,%edx;");
    asm("loc_65DBE83: shr %cl,%edx;");
    asm("loc_65DBE85: lea 0xC4(%eax,%edi,4),%eax;");
    asm("loc_65DBE8C: or %edx,(%eax);");
    asm("loc_65DBE8E: mov -4(%ebp),%eax;");
    asm("loc_65DBE91: mov %eax,(%esi);");
    asm("loc_65DBE93: mov %eax,-4(%eax,%esi);");
    asm("loc_65DBE97: mov -0x10(%ebp),%eax;");
    asm("loc_65DBE9A: decl (%eax);");
    asm("loc_65DBE9C: jne loc_65DBF99;");
    asm("loc_65DBEA2: mov _data_65E7910,%eax;");
    asm("loc_65DBEA7: test %eax,%eax;");
    asm("loc_65DBEA9: je loc_65DBF8B;");
    asm("loc_65DBEAF: mov _data_65E7908,%ecx;");
    asm("loc_65DBEB5: mov _import_65E10CC,%esi;");
    asm("loc_65DBEBB: shl $0xF,%ecx;");
    asm("loc_65DBEBE: add 0xC(%eax),%ecx;");
    asm("loc_65DBEC1: mov $0x8000,%ebx;");
    asm("loc_65DBEC6: push $0x4000;");
    asm("loc_65DBECB: push %ebx;");
    asm("loc_65DBECC: push %ecx;");
    asm("loc_65DBECD: call *%esi;");
    asm("loc_65DBECF: mov _data_65E7908,%ecx;");
    asm("loc_65DBED5: mov _data_65E7910,%eax;");
    asm("loc_65DBEDA: mov $0x80000000,%edx;");
    asm("loc_65DBEDF: shr %cl,%edx;");
    asm("loc_65DBEE1: or %edx,8(%eax);");
    asm("loc_65DBEE4: mov _data_65E7910,%eax;");
    asm("loc_65DBEE9: mov _data_65E7908,%ecx;");
    asm("loc_65DBEEF: mov 0x10(%eax),%eax;");
    asm("loc_65DBEF2: andl $0,0xC4(%eax,%ecx,4);");
    asm("loc_65DBEFA: mov _data_65E7910,%eax;");
    asm("loc_65DBEFF: mov 0x10(%eax),%eax;");
    asm("loc_65DBF02: decb 0x43(%eax);");
    asm("loc_65DBF05: mov _data_65E7910,%eax;");
    asm("loc_65DBF0A: mov 0x10(%eax),%ecx;");
    asm("loc_65DBF0D: cmpb $0,0x43(%ecx);");
    asm("loc_65DBF11: jne loc_65DBF1C;");
    asm("loc_65DBF13: andl $0xFFFFFFFE,4(%eax);");
    asm("loc_65DBF17: mov _data_65E7910,%eax;");
    asm("loc_65DBF1C: cmpl $0xFFFFFFFF,8(%eax);");
    asm("loc_65DBF20: jne loc_65DBF8B;");
    asm("loc_65DBF22: push %ebx;");
    asm("loc_65DBF23: push $0;");
    asm("loc_65DBF25: pushl 0xC(%eax);");
    asm("loc_65DBF28: call *%esi;");
    asm("loc_65DBF2A: mov _data_65E7910,%eax;");
    asm("loc_65DBF2F: pushl 0x10(%eax);");
    asm("loc_65DBF32: push $0;");
    asm("loc_65DBF34: pushl _data_65E7920;");
    asm("loc_65DBF3A: calll *_import_65E1058;");
    asm("loc_65DBF40: mov _data_65E7914,%eax;");
    asm("loc_65DBF45: mov _data_65E7918,%edx;");
    asm("loc_65DBF4B: lea (%eax,%eax,4),%eax;");
    asm("loc_65DBF4E: shl $2,%eax;");
    asm("loc_65DBF51: mov %eax,%ecx;");
    asm("loc_65DBF53: mov _data_65E7910,%eax;");
    asm("loc_65DBF58: sub %eax,%ecx;");
    asm("loc_65DBF5A: lea -0x14(%ecx,%edx),%ecx;");
    asm("loc_65DBF5E: push %ecx;");
    asm("loc_65DBF5F: lea 0x14(%eax),%ecx;");
    asm("loc_65DBF62: push %ecx;");
    asm("loc_65DBF63: push %eax;");
    asm("loc_65DBF64: call loc_65D73A0;");
    asm("loc_65DBF69: mov 8(%ebp),%eax;");
    asm("loc_65DBF6C: add $0xC,%esp;");
    asm("loc_65DBF6F: decl _data_65E7914;");
    asm("loc_65DBF75: cmp _data_65E7910,%eax;");
    asm("loc_65DBF7B: jbe loc_65DBF81;");
    asm("loc_65DBF7D: subl $0x14,8(%ebp);");
    asm("loc_65DBF81: mov _data_65E7918,%eax;");
    asm("loc_65DBF86: mov %eax,_data_65E790C;");
    asm("loc_65DBF8B: mov 8(%ebp),%eax;");
    asm("loc_65DBF8E: mov %edi,_data_65E7908;");
    asm("loc_65DBF94: mov %eax,_data_65E7910;");
    asm("loc_65DBF99: pop %edi;");
    asm("loc_65DBF9A: pop %esi;");
    asm("loc_65DBF9B: pop %ebx;");
    asm("loc_65DBF9C: leave;");
    asm("loc_65DBF9D: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65DBF9E() // ___sbh_alloc_block
{
    __DEBUG_ASM(65DBF9E);
    // chunk 0x65DBF9E _sub_65DBF9E
    asm("loc_65DBF9E: push %ebp;");
    asm("loc_65DBF9F: mov %esp,%ebp;");
    asm("loc_65DBFA1: sub $0x14,%esp;");
    asm("loc_65DBFA4: mov _data_65E7914,%eax;");
    asm("loc_65DBFA9: mov _data_65E7918,%edx;");
    asm("loc_65DBFAF: push %ebx;");
    asm("loc_65DBFB0: push %esi;");
    asm("loc_65DBFB1: lea (%eax,%eax,4),%eax;");
    asm("loc_65DBFB4: push %edi;");
    asm("loc_65DBFB5: lea (%edx,%eax,4),%edi;");
    asm("loc_65DBFB8: mov 8(%ebp),%eax;");
    asm("loc_65DBFBB: mov %edi,-4(%ebp);");
    asm("loc_65DBFBE: lea 0x17(%eax),%ecx;");
    asm("loc_65DBFC1: and $0xFFFFFFF0,%ecx;");
    asm("loc_65DBFC4: mov %ecx,-0x10(%ebp);");
    asm("loc_65DBFC7: sar $4,%ecx;");
    asm("loc_65DBFCA: dec %ecx;");
    asm("loc_65DBFCB: cmp $0x20,%ecx;");
    asm("loc_65DBFCE: jge loc_65DBFDE;");
    asm("loc_65DBFD0: or $0xFFFFFFFF,%esi;");
    asm("loc_65DBFD3: shr %cl,%esi;");
    asm("loc_65DBFD5: orl $0xFFFFFFFF,-8(%ebp);");
    asm("loc_65DBFD9: mov %esi,-0xC(%ebp);");
    asm("loc_65DBFDC: jmp loc_65DBFEE;");
    asm("loc_65DBFDE: add $0xFFFFFFE0,%ecx;");
    asm("loc_65DBFE1: or $0xFFFFFFFF,%eax;");
    asm("loc_65DBFE4: xor %esi,%esi;");
    asm("loc_65DBFE6: shr %cl,%eax;");
    asm("loc_65DBFE8: mov %esi,-0xC(%ebp);");
    asm("loc_65DBFEB: mov %eax,-8(%ebp);");
    asm("loc_65DBFEE: mov _data_65E790C,%eax;");
    asm("loc_65DBFF3: mov %eax,%ebx;");
    asm("loc_65DBFF5: cmp %edi,%ebx;");
    asm("loc_65DBFF7: mov %ebx,8(%ebp);");
    asm("loc_65DBFFA: jae loc_65DC015;");
    asm("loc_65DBFFC: mov 4(%ebx),%ecx;");
    asm("loc_65DBFFF: mov (%ebx),%edi;");
    asm("loc_65DC001: and -8(%ebp),%ecx;");
    asm("loc_65DC004: and %esi,%edi;");
    asm("loc_65DC006: or %edi,%ecx;");
    asm("loc_65DC008: jne loc_65DC015;");
    asm("loc_65DC00A: add $0x14,%ebx;");
    asm("loc_65DC00D: cmp -4(%ebp),%ebx;");
    asm("loc_65DC010: mov %ebx,8(%ebp);");
    asm("loc_65DC013: jb loc_65DBFFC;");
    asm("loc_65DC015: cmp -4(%ebp),%ebx;");
    asm("loc_65DC018: jne loc_65DC093;");
    asm("loc_65DC01A: mov %edx,%ebx;");
    asm("loc_65DC01C: cmp %eax,%ebx;");
    asm("loc_65DC01E: mov %ebx,8(%ebp);");
    asm("loc_65DC021: jae loc_65DC038;");
    asm("loc_65DC023: mov 4(%ebx),%ecx;");
    asm("loc_65DC026: mov (%ebx),%edi;");
    asm("loc_65DC028: and -8(%ebp),%ecx;");
    asm("loc_65DC02B: and %esi,%edi;");
    asm("loc_65DC02D: or %edi,%ecx;");
    asm("loc_65DC02F: jne loc_65DC036;");
    asm("loc_65DC031: add $0x14,%ebx;");
    asm("loc_65DC034: jmp loc_65DC01C;");
    asm("loc_65DC036: cmp %eax,%ebx;");
    asm("loc_65DC038: jne loc_65DC093;");
    asm("loc_65DC03A: cmp -4(%ebp),%ebx;");
    asm("loc_65DC03D: jae loc_65DC050;");
    asm("loc_65DC03F: cmpl $0,8(%ebx);");
    asm("loc_65DC043: jne loc_65DC04D;");
    asm("loc_65DC045: add $0x14,%ebx;");
    asm("loc_65DC048: mov %ebx,8(%ebp);");
    asm("loc_65DC04B: jmp loc_65DC03A;");
    asm("loc_65DC04D: cmp -4(%ebp),%ebx;");
    asm("loc_65DC050: jne loc_65DC078;");
    asm("loc_65DC052: mov %edx,%ebx;");
    asm("loc_65DC054: cmp %eax,%ebx;");
    asm("loc_65DC056: mov %ebx,8(%ebp);");
    asm("loc_65DC059: jae loc_65DC068;");
    asm("loc_65DC05B: cmpl $0,8(%ebx);");
    asm("loc_65DC05F: jne loc_65DC066;");
    asm("loc_65DC061: add $0x14,%ebx;");
    asm("loc_65DC064: jmp loc_65DC054;");
    asm("loc_65DC066: cmp %eax,%ebx;");
    asm("loc_65DC068: jne loc_65DC078;");
    asm("loc_65DC06A: call _sub_65DC2A7;");
    asm("loc_65DC06F: mov %eax,%ebx;");
    asm("loc_65DC071: test %ebx,%ebx;");
    asm("loc_65DC073: mov %ebx,8(%ebp);");
    asm("loc_65DC076: je loc_65DC08C;");
    asm("loc_65DC078: push %ebx;");
    asm("loc_65DC079: call _sub_65DC358;");
    asm("loc_65DC07E: pop %ecx;");
    asm("loc_65DC07F: mov 0x10(%ebx),%ecx;");
    asm("loc_65DC082: mov %eax,(%ecx);");
    asm("loc_65DC084: mov 0x10(%ebx),%eax;");
    asm("loc_65DC087: cmpl $0xFFFFFFFF,(%eax);");
    asm("loc_65DC08A: jne loc_65DC093;");
    asm("loc_65DC08C: xor %eax,%eax;");
    asm("loc_65DC08E: jmp loc_65DC2A2;");
    asm("loc_65DC093: mov %ebx,_data_65E790C;");
    asm("loc_65DC099: mov 0x10(%ebx),%eax;");
    asm("loc_65DC09C: mov (%eax),%edx;");
    asm("loc_65DC09E: cmp $0xFFFFFFFF,%edx;");
    asm("loc_65DC0A1: mov %edx,-4(%ebp);");
    asm("loc_65DC0A4: je loc_65DC0BA;");
    asm("loc_65DC0A6: mov 0xC4(%eax,%edx,4),%ecx;");
    asm("loc_65DC0AD: mov 0x44(%eax,%edx,4),%edi;");
    asm("loc_65DC0B1: and -8(%ebp),%ecx;");
    asm("loc_65DC0B4: and %esi,%edi;");
    asm("loc_65DC0B6: or %edi,%ecx;");
    asm("loc_65DC0B8: jne loc_65DC0F1;");
    asm("loc_65DC0BA: mov 0xC4(%eax),%edx;");
    asm("loc_65DC0C0: mov 0x44(%eax),%esi;");
    asm("loc_65DC0C3: and -8(%ebp),%edx;");
    asm("loc_65DC0C6: and -0xC(%ebp),%esi;");
    asm("loc_65DC0C9: andl $0,-4(%ebp);");
    asm("loc_65DC0CD: lea 0x44(%eax),%ecx;");
    asm("loc_65DC0D0: or %esi,%edx;");
    asm("loc_65DC0D2: mov -0xC(%ebp),%esi;");
    asm("loc_65DC0D5: jne loc_65DC0EE;");
    asm("loc_65DC0D7: mov 0x84(%ecx),%edx;");
    asm("loc_65DC0DD: incl -4(%ebp);");
    asm("loc_65DC0E0: and -8(%ebp),%edx;");
    asm("loc_65DC0E3: add $4,%ecx;");
    asm("loc_65DC0E6: mov %esi,%edi;");
    asm("loc_65DC0E8: and (%ecx),%edi;");
    asm("loc_65DC0EA: or %edi,%edx;");
    asm("loc_65DC0EC: je loc_65DC0D7;");
    asm("loc_65DC0EE: mov -4(%ebp),%edx;");
    asm("loc_65DC0F1: mov %edx,%ecx;");
    asm("loc_65DC0F3: xor %edi,%edi;");
    asm("loc_65DC0F5: imul $0x204,%ecx;");
    asm("loc_65DC0FB: lea 0x144(%ecx,%eax),%ecx;");
    asm("loc_65DC102: mov %ecx,-0xC(%ebp);");
    asm("loc_65DC105: mov 0x44(%eax,%edx,4),%ecx;");
    asm("loc_65DC109: and %esi,%ecx;");
    asm("loc_65DC10B: jne loc_65DC11A;");
    asm("loc_65DC10D: mov 0xC4(%eax,%edx,4),%ecx;");
    asm("loc_65DC114: push $0x20;");
    asm("loc_65DC116: and -8(%ebp),%ecx;");
    asm("loc_65DC119: pop %edi;");
    asm("loc_65DC11A: test %ecx,%ecx;");
    asm("loc_65DC11C: jl loc_65DC123;");
    asm("loc_65DC11E: shl $1,%ecx;");
    asm("loc_65DC120: inc %edi;");
    asm("loc_65DC121: jmp loc_65DC11A;");
    asm("loc_65DC123: mov -0xC(%ebp),%ecx;");
    asm("loc_65DC126: mov 4(%ecx,%edi,8),%edx;");
    asm("loc_65DC12A: mov (%edx),%ecx;");
    asm("loc_65DC12C: sub -0x10(%ebp),%ecx;");
    asm("loc_65DC12F: mov %ecx,%esi;");
    asm("loc_65DC131: mov %ecx,-8(%ebp);");
    asm("loc_65DC134: sar $4,%esi;");
    asm("loc_65DC137: dec %esi;");
    asm("loc_65DC138: cmp $0x3F,%esi;");
    asm("loc_65DC13B: jle loc_65DC140;");
    asm("loc_65DC13D: push $0x3F;");
    asm("loc_65DC13F: pop %esi;");
    asm("loc_65DC140: cmp %edi,%esi;");
    asm("loc_65DC142: je loc_65DC255;");
    asm("loc_65DC148: mov 4(%edx),%ecx;");
    asm("loc_65DC14B: cmp 8(%edx),%ecx;");
    asm("loc_65DC14E: jne loc_65DC1B1;");
    asm("loc_65DC150: cmp $0x20,%edi;");
    asm("loc_65DC153: jge loc_65DC180;");
    asm("loc_65DC155: mov $0x80000000,%ebx;");
    asm("loc_65DC15A: mov %edi,%ecx;");
    asm("loc_65DC15C: shr %cl,%ebx;");
    asm("loc_65DC15E: mov -4(%ebp),%ecx;");
    asm("loc_65DC161: lea 4(%eax,%edi),%edi;");
    asm("loc_65DC165: not %ebx;");
    asm("loc_65DC167: mov %ebx,-0x14(%ebp);");
    asm("loc_65DC16A: and 0x44(%eax,%ecx,4),%ebx;");
    asm("loc_65DC16E: mov %ebx,0x44(%eax,%ecx,4);");
    asm("loc_65DC172: decb (%edi);");
    asm("loc_65DC174: jne loc_65DC1AE;");
    asm("loc_65DC176: mov 8(%ebp),%ebx;");
    asm("loc_65DC179: mov -0x14(%ebp),%ecx;");
    asm("loc_65DC17C: and %ecx,(%ebx);");
    asm("loc_65DC17E: jmp loc_65DC1B1;");
    asm("loc_65DC180: lea -0x20(%edi),%ecx;");
    asm("loc_65DC183: mov $0x80000000,%ebx;");
    asm("loc_65DC188: shr %cl,%ebx;");
    asm("loc_65DC18A: mov -4(%ebp),%ecx;");
    asm("loc_65DC18D: lea 4(%eax,%edi),%edi;");
    asm("loc_65DC191: lea 0xC4(%eax,%ecx,4),%ecx;");
    asm("loc_65DC198: not %ebx;");
    asm("loc_65DC19A: and %ebx,(%ecx);");
    asm("loc_65DC19C: decb (%edi);");
    asm("loc_65DC19E: mov %ebx,-0x14(%ebp);");
    asm("loc_65DC1A1: jne loc_65DC1AE;");
    asm("loc_65DC1A3: mov 8(%ebp),%ebx;");
    asm("loc_65DC1A6: mov -0x14(%ebp),%ecx;");
    asm("loc_65DC1A9: and %ecx,4(%ebx);");
    asm("loc_65DC1AC: jmp loc_65DC1B1;");
    asm("loc_65DC1AE: mov 8(%ebp),%ebx;");
    asm("loc_65DC1B1: mov 8(%edx),%ecx;");
    asm("loc_65DC1B4: mov 4(%edx),%edi;");
    asm("loc_65DC1B7: cmpl $0,-8(%ebp);");
    asm("loc_65DC1BB: mov %edi,4(%ecx);");
    asm("loc_65DC1BE: mov 4(%edx),%ecx;");
    asm("loc_65DC1C1: mov 8(%edx),%edi;");
    asm("loc_65DC1C4: mov %edi,8(%ecx);");
    asm("loc_65DC1C7: je loc_65DC261;");
    asm("loc_65DC1CD: mov -0xC(%ebp),%ecx;");
    asm("loc_65DC1D0: mov 4(%ecx,%esi,8),%edi;");
    asm("loc_65DC1D4: lea (%ecx,%esi,8),%ecx;");
    asm("loc_65DC1D7: mov %edi,4(%edx);");
    asm("loc_65DC1DA: mov %ecx,8(%edx);");
    asm("loc_65DC1DD: mov %edx,4(%ecx);");
    asm("loc_65DC1E0: mov 4(%edx),%ecx;");
    asm("loc_65DC1E3: mov %edx,8(%ecx);");
    asm("loc_65DC1E6: mov 4(%edx),%ecx;");
    asm("loc_65DC1E9: cmp 8(%edx),%ecx;");
    asm("loc_65DC1EC: jne loc_65DC252;");
    asm("loc_65DC1EE: mov 4(%esi,%eax),%cl;");
    asm("loc_65DC1F2: cmp $0x20,%esi;");
    asm("loc_65DC1F5: mov %cl,0xB(%ebp);");
    asm("loc_65DC1F8: jge loc_65DC223;");
    asm("loc_65DC1FA: inc %cl;");
    asm("loc_65DC1FC: cmpb $0,0xB(%ebp);");
    asm("loc_65DC200: mov %cl,4(%esi,%eax);");
    asm("loc_65DC204: jne loc_65DC211;");
    asm("loc_65DC206: mov $0x80000000,%edi;");
    asm("loc_65DC20B: mov %esi,%ecx;");
    asm("loc_65DC20D: shr %cl,%edi;");
    asm("loc_65DC20F: or %edi,(%ebx);");
    asm("loc_65DC211: mov $0x80000000,%edi;");
    asm("loc_65DC216: mov %esi,%ecx;");
    asm("loc_65DC218: shr %cl,%edi;");
    asm("loc_65DC21A: mov -4(%ebp),%ecx;");
    asm("loc_65DC21D: or %edi,0x44(%eax,%ecx,4);");
    asm("loc_65DC221: jmp loc_65DC252;");
    asm("loc_65DC223: inc %cl;");
    asm("loc_65DC225: cmpb $0,0xB(%ebp);");
    asm("loc_65DC229: mov %cl,4(%esi,%eax);");
    asm("loc_65DC22D: jne loc_65DC23C;");
    asm("loc_65DC22F: lea -0x20(%esi),%ecx;");
    asm("loc_65DC232: mov $0x80000000,%edi;");
    asm("loc_65DC237: shr %cl,%edi;");
    asm("loc_65DC239: or %edi,4(%ebx);");
    asm("loc_65DC23C: mov -4(%ebp),%ecx;");
    asm("loc_65DC23F: lea 0xC4(%eax,%ecx,4),%edi;");
    asm("loc_65DC246: lea -0x20(%esi),%ecx;");
    asm("loc_65DC249: mov $0x80000000,%esi;");
    asm("loc_65DC24E: shr %cl,%esi;");
    asm("loc_65DC250: or %esi,(%edi);");
    asm("loc_65DC252: mov -8(%ebp),%ecx;");
    asm("loc_65DC255: test %ecx,%ecx;");
    asm("loc_65DC257: je loc_65DC264;");
    asm("loc_65DC259: mov %ecx,(%edx);");
    asm("loc_65DC25B: mov %ecx,-4(%ecx,%edx);");
    asm("loc_65DC25F: jmp loc_65DC264;");
    asm("loc_65DC261: mov -8(%ebp),%ecx;");
    asm("loc_65DC264: mov -0x10(%ebp),%esi;");
    asm("loc_65DC267: add %ecx,%edx;");
    asm("loc_65DC269: lea 1(%esi),%ecx;");
    asm("loc_65DC26C: mov %ecx,(%edx);");
    asm("loc_65DC26E: mov %ecx,-4(%edx,%esi);");
    asm("loc_65DC272: mov -0xC(%ebp),%esi;");
    asm("loc_65DC275: mov (%esi),%ecx;");
    asm("loc_65DC277: test %ecx,%ecx;");
    asm("loc_65DC279: lea 1(%ecx),%edi;");
    asm("loc_65DC27C: mov %edi,(%esi);");
    asm("loc_65DC27E: jne loc_65DC29A;");
    asm("loc_65DC280: cmp _data_65E7910,%ebx;");
    asm("loc_65DC286: jne loc_65DC29A;");
    asm("loc_65DC288: mov -4(%ebp),%ecx;");
    asm("loc_65DC28B: cmp _data_65E7908,%ecx;");
    asm("loc_65DC291: jne loc_65DC29A;");
    asm("loc_65DC293: andl $0,_data_65E7910;");
    asm("loc_65DC29A: mov -4(%ebp),%ecx;");
    asm("loc_65DC29D: mov %ecx,(%eax);");
    asm("loc_65DC29F: lea 4(%edx),%eax;");
    asm("loc_65DC2A2: pop %edi;");
    asm("loc_65DC2A3: pop %esi;");
    asm("loc_65DC2A4: pop %ebx;");
    asm("loc_65DC2A5: leave;");
    asm("loc_65DC2A6: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65DC2A7() // ___sbh_alloc_new_region
{
    __DEBUG_ASM(65DC2A7);
    // chunk 0x65DC2A7 _sub_65DC2A7
    asm("loc_65DC2A7: mov _data_65E7914,%eax;");
    asm("loc_65DC2AC: mov _data_65E7904,%ecx;");
    asm("loc_65DC2B2: push %esi;");
    asm("loc_65DC2B3: push %edi;");
    asm("loc_65DC2B4: xor %edi,%edi;");
    asm("loc_65DC2B6: cmp %ecx,%eax;");
    asm("loc_65DC2B8: jne loc_65DC2EA;");
    asm("loc_65DC2BA: lea 0x50(%ecx,%ecx,4),%eax;");
    asm("loc_65DC2BE: shl $2,%eax;");
    asm("loc_65DC2C1: push %eax;");
    asm("loc_65DC2C2: pushl _data_65E7918;");
    asm("loc_65DC2C8: push %edi;");
    asm("loc_65DC2C9: pushl _data_65E7920;");
    asm("loc_65DC2CF: calll *_import_65E108C;");
    asm("loc_65DC2D5: cmp %edi,%eax;");
    asm("loc_65DC2D7: je loc_65DC33A;");
    asm("loc_65DC2D9: addl $0x10,_data_65E7904;");
    asm("loc_65DC2E0: mov %eax,_data_65E7918;");
    asm("loc_65DC2E5: mov _data_65E7914,%eax;");
    asm("loc_65DC2EA: mov _data_65E7918,%ecx;");
    asm("loc_65DC2F0: push $0x41C4;");
    asm("loc_65DC2F5: push $8;");
    asm("loc_65DC2F7: lea (%eax,%eax,4),%eax;");
    asm("loc_65DC2FA: pushl _data_65E7920;");
    asm("loc_65DC300: lea (%ecx,%eax,4),%esi;");
    asm("loc_65DC303: calll *_import_65E1060;");
    asm("loc_65DC309: cmp %edi,%eax;");
    asm("loc_65DC30B: mov %eax,0x10(%esi);");
    asm("loc_65DC30E: je loc_65DC33A;");
    asm("loc_65DC310: push $4;");
    asm("loc_65DC312: push $0x2000;");
    asm("loc_65DC317: push $0x100000;");
    asm("loc_65DC31C: push %edi;");
    asm("loc_65DC31D: calll *_import_65E10D4;");
    asm("loc_65DC323: cmp %edi,%eax;");
    asm("loc_65DC325: mov %eax,0xC(%esi);");
    asm("loc_65DC328: jne loc_65DC33E;");
    asm("loc_65DC32A: pushl 0x10(%esi);");
    asm("loc_65DC32D: push %edi;");
    asm("loc_65DC32E: pushl _data_65E7920;");
    asm("loc_65DC334: calll *_import_65E1058;");
    asm("loc_65DC33A: xor %eax,%eax;");
    asm("loc_65DC33C: jmp loc_65DC355;");
    asm("loc_65DC33E: orl $0xFFFFFFFF,8(%esi);");
    asm("loc_65DC342: mov %edi,(%esi);");
    asm("loc_65DC344: mov %edi,4(%esi);");
    asm("loc_65DC347: incl _data_65E7914;");
    asm("loc_65DC34D: mov 0x10(%esi),%eax;");
    asm("loc_65DC350: orl $0xFFFFFFFF,(%eax);");
    asm("loc_65DC353: mov %esi,%eax;");
    asm("loc_65DC355: pop %edi;");
    asm("loc_65DC356: pop %esi;");
    asm("loc_65DC357: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65DC358() // ___sbh_alloc_new_group
{
    __DEBUG_ASM(65DC358);
    // chunk 0x65DC358 _sub_65DC358
    asm("loc_65DC358: push %ebp;");
    asm("loc_65DC359: mov %esp,%ebp;");
    asm("loc_65DC35B: push %ecx;");
    asm("loc_65DC35C: mov 8(%ebp),%ecx;");
    asm("loc_65DC35F: push %ebx;");
    asm("loc_65DC360: push %esi;");
    asm("loc_65DC361: push %edi;");
    asm("loc_65DC362: mov 0x10(%ecx),%esi;");
    asm("loc_65DC365: mov 8(%ecx),%eax;");
    asm("loc_65DC368: xor %ebx,%ebx;");
    asm("loc_65DC36A: test %eax,%eax;");
    asm("loc_65DC36C: jl loc_65DC373;");
    asm("loc_65DC36E: shl $1,%eax;");
    asm("loc_65DC370: inc %ebx;");
    asm("loc_65DC371: jmp loc_65DC36A;");
    asm("loc_65DC373: mov %ebx,%eax;");
    asm("loc_65DC375: push $0x3F;");
    asm("loc_65DC377: imul $0x204,%eax;");
    asm("loc_65DC37D: pop %edx;");
    asm("loc_65DC37E: lea 0x144(%eax,%esi),%eax;");
    asm("loc_65DC385: mov %eax,-4(%ebp);");
    asm("loc_65DC388: mov %eax,8(%eax);");
    asm("loc_65DC38B: mov %eax,4(%eax);");
    asm("loc_65DC38E: add $8,%eax;");
    asm("loc_65DC391: dec %edx;");
    asm("loc_65DC392: jne loc_65DC388;");
    asm("loc_65DC394: mov %ebx,%edi;");
    asm("loc_65DC396: push $4;");
    asm("loc_65DC398: shl $0xF,%edi;");
    asm("loc_65DC39B: add 0xC(%ecx),%edi;");
    asm("loc_65DC39E: push $0x1000;");
    asm("loc_65DC3A3: push $0x8000;");
    asm("loc_65DC3A8: push %edi;");
    asm("loc_65DC3A9: calll *_import_65E10D4;");
    asm("loc_65DC3AF: test %eax,%eax;");
    asm("loc_65DC3B1: jne loc_65DC3BB;");
    asm("loc_65DC3B3: or $0xFFFFFFFF,%eax;");
    asm("loc_65DC3B6: jmp loc_65DC44E;");
    asm("loc_65DC3BB: lea 0x7000(%edi),%edx;");
    asm("loc_65DC3C1: cmp %edx,%edi;");
    asm("loc_65DC3C3: ja loc_65DC401;");
    asm("loc_65DC3C5: lea 0x10(%edi),%eax;");
    asm("loc_65DC3C8: orl $0xFFFFFFFF,-8(%eax);");
    asm("loc_65DC3CC: orl $0xFFFFFFFF,0xFEC(%eax);");
    asm("loc_65DC3D3: lea 0xFFC(%eax),%ecx;");
    asm("loc_65DC3D9: movl $0xFF0,-4(%eax);");
    asm("loc_65DC3E0: mov %ecx,(%eax);");
    asm("loc_65DC3E2: lea -0x1004(%eax),%ecx;");
    asm("loc_65DC3E8: mov %ecx,4(%eax);");
    asm("loc_65DC3EB: movl $0xFF0,0xFE8(%eax);");
    asm("loc_65DC3F5: add $0x1000,%eax;");
    asm("loc_65DC3FA: lea -0x10(%eax),%ecx;");
    asm("loc_65DC3FD: cmp %edx,%ecx;");
    asm("loc_65DC3FF: jbe loc_65DC3C8;");
    asm("loc_65DC401: mov -4(%ebp),%eax;");
    asm("loc_65DC404: lea 0xC(%edi),%ecx;");
    asm("loc_65DC407: add $0x1F8,%eax;");
    asm("loc_65DC40C: push $1;");
    asm("loc_65DC40E: pop %edi;");
    asm("loc_65DC40F: mov %ecx,4(%eax);");
    asm("loc_65DC412: mov %eax,8(%ecx);");
    asm("loc_65DC415: lea 0xC(%edx),%ecx;");
    asm("loc_65DC418: mov %ecx,8(%eax);");
    asm("loc_65DC41B: mov %eax,4(%ecx);");
    asm("loc_65DC41E: andl $0,0x44(%esi,%ebx,4);");
    asm("loc_65DC423: mov %edi,0xC4(%esi,%ebx,4);");
    asm("loc_65DC42A: mov 0x43(%esi),%al;");
    asm("loc_65DC42D: mov %al,%cl;");
    asm("loc_65DC42F: inc %cl;");
    asm("loc_65DC431: test %al,%al;");
    asm("loc_65DC433: mov 8(%ebp),%eax;");
    asm("loc_65DC436: mov %cl,0x43(%esi);");
    asm("loc_65DC439: jne loc_65DC43E;");
    asm("loc_65DC43B: or %edi,4(%eax);");
    asm("loc_65DC43E: mov $0x80000000,%edx;");
    asm("loc_65DC443: mov %ebx,%ecx;");
    asm("loc_65DC445: shr %cl,%edx;");
    asm("loc_65DC447: not %edx;");
    asm("loc_65DC449: and %edx,8(%eax);");
    asm("loc_65DC44C: mov %ebx,%eax;");
    asm("loc_65DC44E: pop %edi;");
    asm("loc_65DC44F: pop %esi;");
    asm("loc_65DC450: pop %ebx;");
    asm("loc_65DC451: leave;");
    asm("loc_65DC452: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65DC453() // ___sbh_resize_block
{
    __DEBUG_ASM(65DC453);
    // chunk 0x65DC453 _sub_65DC453
    asm("loc_65DC453: push %ebp;");
    asm("loc_65DC454: mov %esp,%ebp;");
    asm("loc_65DC456: sub $0xC,%esp;");
    asm("loc_65DC459: mov 8(%ebp),%ecx;");
    asm("loc_65DC45C: mov 0x10(%ebp),%eax;");
    asm("loc_65DC45F: push %ebx;");
    asm("loc_65DC460: push %esi;");
    asm("loc_65DC461: push %edi;");
    asm("loc_65DC462: mov 0xC(%ebp),%edi;");
    asm("loc_65DC465: mov %edi,%edx;");
    asm("loc_65DC467: lea 0x17(%eax),%esi;");
    asm("loc_65DC46A: sub 0xC(%ecx),%edx;");
    asm("loc_65DC46D: mov 0x10(%ecx),%eax;");
    asm("loc_65DC470: and $0xFFFFFFF0,%esi;");
    asm("loc_65DC473: shr $0xF,%edx;");
    asm("loc_65DC476: mov %edx,%ecx;");
    asm("loc_65DC478: imul $0x204,%ecx;");
    asm("loc_65DC47E: lea 0x144(%ecx,%eax),%ecx;");
    asm("loc_65DC485: mov %ecx,-0xC(%ebp);");
    asm("loc_65DC488: mov -4(%edi),%ecx;");
    asm("loc_65DC48B: dec %ecx;");
    asm("loc_65DC48C: cmp %ecx,%esi;");
    asm("loc_65DC48E: mov %ecx,0x10(%ebp);");
    asm("loc_65DC491: mov -4(%ecx,%edi),%ebx;");
    asm("loc_65DC495: lea -4(%ecx,%edi),%edi;");
    asm("loc_65DC499: mov %ebx,-4(%ebp);");
    asm("loc_65DC49C: jle loc_65DC601;");
    asm("loc_65DC4A2: test $1,%bl;");
    asm("loc_65DC4A5: jne loc_65DC5FA;");
    asm("loc_65DC4AB: add %ecx,%ebx;");
    asm("loc_65DC4AD: cmp %ebx,%esi;");
    asm("loc_65DC4AF: jg loc_65DC5FA;");
    asm("loc_65DC4B5: mov -4(%ebp),%ecx;");
    asm("loc_65DC4B8: sar $4,%ecx;");
    asm("loc_65DC4BB: dec %ecx;");
    asm("loc_65DC4BC: cmp $0x3F,%ecx;");
    asm("loc_65DC4BF: mov %ecx,-8(%ebp);");
    asm("loc_65DC4C2: jbe loc_65DC4CA;");
    asm("loc_65DC4C4: push $0x3F;");
    asm("loc_65DC4C6: pop %ecx;");
    asm("loc_65DC4C7: mov %ecx,-8(%ebp);");
    asm("loc_65DC4CA: mov 4(%edi),%ebx;");
    asm("loc_65DC4CD: cmp 8(%edi),%ebx;");
    asm("loc_65DC4D0: jne loc_65DC51A;");
    asm("loc_65DC4D2: cmp $0x20,%ecx;");
    asm("loc_65DC4D5: jae loc_65DC4F6;");
    asm("loc_65DC4D7: mov $0x80000000,%ebx;");
    asm("loc_65DC4DC: shr %cl,%ebx;");
    asm("loc_65DC4DE: mov -8(%ebp),%ecx;");
    asm("loc_65DC4E1: lea 4(%ecx,%eax),%ecx;");
    asm("loc_65DC4E5: not %ebx;");
    asm("loc_65DC4E7: and %ebx,0x44(%eax,%edx,4);");
    asm("loc_65DC4EB: decb (%ecx);");
    asm("loc_65DC4ED: jne loc_65DC51A;");
    asm("loc_65DC4EF: mov 8(%ebp),%ecx;");
    asm("loc_65DC4F2: and %ebx,(%ecx);");
    asm("loc_65DC4F4: jmp loc_65DC51A;");
    asm("loc_65DC4F6: add $0xFFFFFFE0,%ecx;");
    asm("loc_65DC4F9: mov $0x80000000,%ebx;");
    asm("loc_65DC4FE: shr %cl,%ebx;");
    asm("loc_65DC500: mov -8(%ebp),%ecx;");
    asm("loc_65DC503: lea 4(%ecx,%eax),%ecx;");
    asm("loc_65DC507: not %ebx;");
    asm("loc_65DC509: and %ebx,0xC4(%eax,%edx,4);");
    asm("loc_65DC510: decb (%ecx);");
    asm("loc_65DC512: jne loc_65DC51A;");
    asm("loc_65DC514: mov 8(%ebp),%ecx;");
    asm("loc_65DC517: and %ebx,4(%ecx);");
    asm("loc_65DC51A: mov 8(%edi),%ecx;");
    asm("loc_65DC51D: mov 4(%edi),%ebx;");
    asm("loc_65DC520: mov %ebx,4(%ecx);");
    asm("loc_65DC523: mov 4(%edi),%ecx;");
    asm("loc_65DC526: mov 8(%edi),%edi;");
    asm("loc_65DC529: mov %edi,8(%ecx);");
    asm("loc_65DC52C: mov 0x10(%ebp),%ecx;");
    asm("loc_65DC52F: sub %esi,%ecx;");
    asm("loc_65DC531: add %ecx,-4(%ebp);");
    asm("loc_65DC534: cmpl $0,-4(%ebp);");
    asm("loc_65DC538: jle loc_65DC5E8;");
    asm("loc_65DC53E: mov -4(%ebp),%edi;");
    asm("loc_65DC541: mov 0xC(%ebp),%ecx;");
    asm("loc_65DC544: sar $4,%edi;");
    asm("loc_65DC547: dec %edi;");
    asm("loc_65DC548: lea -4(%ecx,%esi),%ecx;");
    asm("loc_65DC54C: cmp $0x3F,%edi;");
    asm("loc_65DC54F: jbe loc_65DC554;");
    asm("loc_65DC551: push $0x3F;");
    asm("loc_65DC553: pop %edi;");
    asm("loc_65DC554: mov -0xC(%ebp),%ebx;");
    asm("loc_65DC557: lea (%ebx,%edi,8),%ebx;");
    asm("loc_65DC55A: mov %ebx,0x10(%ebp);");
    asm("loc_65DC55D: mov 4(%ebx),%ebx;");
    asm("loc_65DC560: mov %ebx,4(%ecx);");
    asm("loc_65DC563: mov 0x10(%ebp),%ebx;");
    asm("loc_65DC566: mov %ebx,8(%ecx);");
    asm("loc_65DC569: mov %ecx,4(%ebx);");
    asm("loc_65DC56C: mov 4(%ecx),%ebx;");
    asm("loc_65DC56F: mov %ecx,8(%ebx);");
    asm("loc_65DC572: mov 4(%ecx),%ebx;");
    asm("loc_65DC575: cmp 8(%ecx),%ebx;");
    asm("loc_65DC578: jne loc_65DC5D6;");
    asm("loc_65DC57A: mov 4(%edi,%eax),%cl;");
    asm("loc_65DC57E: cmp $0x20,%edi;");
    asm("loc_65DC581: mov %cl,0x13(%ebp);");
    asm("loc_65DC584: inc %cl;");
    asm("loc_65DC586: mov %cl,4(%edi,%eax);");
    asm("loc_65DC58A: jae loc_65DC5AD;");
    asm("loc_65DC58C: cmpb $0,0x13(%ebp);");
    asm("loc_65DC590: jne loc_65DC5A0;");
    asm("loc_65DC592: mov $0x80000000,%ebx;");
    asm("loc_65DC597: mov %edi,%ecx;");
    asm("loc_65DC599: shr %cl,%ebx;");
    asm("loc_65DC59B: mov 8(%ebp),%ecx;");
    asm("loc_65DC59E: or %ebx,(%ecx);");
    asm("loc_65DC5A0: lea 0x44(%eax,%edx,4),%eax;");
    asm("loc_65DC5A4: mov $0x80000000,%edx;");
    asm("loc_65DC5A9: mov %edi,%ecx;");
    asm("loc_65DC5AB: jmp loc_65DC5D2;");
    asm("loc_65DC5AD: cmpb $0,0x13(%ebp);");
    asm("loc_65DC5B1: jne loc_65DC5C3;");
    asm("loc_65DC5B3: lea -0x20(%edi),%ecx;");
    asm("loc_65DC5B6: mov $0x80000000,%ebx;");
    asm("loc_65DC5BB: shr %cl,%ebx;");
    asm("loc_65DC5BD: mov 8(%ebp),%ecx;");
    asm("loc_65DC5C0: or %ebx,4(%ecx);");
    asm("loc_65DC5C3: lea 0xC4(%eax,%edx,4),%eax;");
    asm("loc_65DC5CA: lea -0x20(%edi),%ecx;");
    asm("loc_65DC5CD: mov $0x80000000,%edx;");
    asm("loc_65DC5D2: shr %cl,%edx;");
    asm("loc_65DC5D4: or %edx,(%eax);");
    asm("loc_65DC5D6: mov 0xC(%ebp),%edx;");
    asm("loc_65DC5D9: mov -4(%ebp),%ecx;");
    asm("loc_65DC5DC: lea -4(%edx,%esi),%eax;");
    asm("loc_65DC5E0: mov %ecx,(%eax);");
    asm("loc_65DC5E2: mov %ecx,-4(%ecx,%eax);");
    asm("loc_65DC5E6: jmp loc_65DC5EB;");
    asm("loc_65DC5E8: mov 0xC(%ebp),%edx;");
    asm("loc_65DC5EB: lea 1(%esi),%eax;");
    asm("loc_65DC5EE: mov %eax,-4(%edx);");
    asm("loc_65DC5F1: mov %eax,-8(%edx,%esi);");
    asm("loc_65DC5F5: jmp loc_65DC741;");
    asm("loc_65DC5FA: xor %eax,%eax;");
    asm("loc_65DC5FC: jmp loc_65DC744;");
    asm("loc_65DC601: jge loc_65DC741;");
    asm("loc_65DC607: mov 0xC(%ebp),%ebx;");
    asm("loc_65DC60A: sub %esi,0x10(%ebp);");
    asm("loc_65DC60D: lea 1(%esi),%ecx;");
    asm("loc_65DC610: mov %ecx,-4(%ebx);");
    asm("loc_65DC613: lea -4(%ebx,%esi),%ebx;");
    asm("loc_65DC617: mov 0x10(%ebp),%esi;");
    asm("loc_65DC61A: mov %ebx,0xC(%ebp);");
    asm("loc_65DC61D: sar $4,%esi;");
    asm("loc_65DC620: dec %esi;");
    asm("loc_65DC621: mov %ecx,-4(%ebx);");
    asm("loc_65DC624: cmp $0x3F,%esi;");
    asm("loc_65DC627: jbe loc_65DC62C;");
    asm("loc_65DC629: push $0x3F;");
    asm("loc_65DC62B: pop %esi;");
    asm("loc_65DC62C: testb $1,-4(%ebp);");
    asm("loc_65DC630: jne loc_65DC6BB;");
    asm("loc_65DC636: mov -4(%ebp),%esi;");
    asm("loc_65DC639: sar $4,%esi;");
    asm("loc_65DC63C: dec %esi;");
    asm("loc_65DC63D: cmp $0x3F,%esi;");
    asm("loc_65DC640: jbe loc_65DC645;");
    asm("loc_65DC642: push $0x3F;");
    asm("loc_65DC644: pop %esi;");
    asm("loc_65DC645: mov 4(%edi),%ecx;");
    asm("loc_65DC648: cmp 8(%edi),%ecx;");
    asm("loc_65DC64B: jne loc_65DC694;");
    asm("loc_65DC64D: cmp $0x20,%esi;");
    asm("loc_65DC650: jae loc_65DC670;");
    asm("loc_65DC652: mov $0x80000000,%ebx;");
    asm("loc_65DC657: mov %esi,%ecx;");
    asm("loc_65DC659: shr %cl,%ebx;");
    asm("loc_65DC65B: lea 4(%esi,%eax),%esi;");
    asm("loc_65DC65F: not %ebx;");
    asm("loc_65DC661: and %ebx,0x44(%eax,%edx,4);");
    asm("loc_65DC665: decb (%esi);");
    asm("loc_65DC667: jne loc_65DC691;");
    asm("loc_65DC669: mov 8(%ebp),%ecx;");
    asm("loc_65DC66C: and %ebx,(%ecx);");
    asm("loc_65DC66E: jmp loc_65DC691;");
    asm("loc_65DC670: lea -0x20(%esi),%ecx;");
    asm("loc_65DC673: mov $0x80000000,%ebx;");
    asm("loc_65DC678: shr %cl,%ebx;");
    asm("loc_65DC67A: lea 4(%esi,%eax),%ecx;");
    asm("loc_65DC67E: not %ebx;");
    asm("loc_65DC680: and %ebx,0xC4(%eax,%edx,4);");
    asm("loc_65DC687: decb (%ecx);");
    asm("loc_65DC689: jne loc_65DC691;");
    asm("loc_65DC68B: mov 8(%ebp),%ecx;");
    asm("loc_65DC68E: and %ebx,4(%ecx);");
    asm("loc_65DC691: mov 0xC(%ebp),%ebx;");
    asm("loc_65DC694: mov 8(%edi),%ecx;");
    asm("loc_65DC697: mov 4(%edi),%esi;");
    asm("loc_65DC69A: mov %esi,4(%ecx);");
    asm("loc_65DC69D: mov 4(%edi),%ecx;");
    asm("loc_65DC6A0: mov 8(%edi),%esi;");
    asm("loc_65DC6A3: mov %esi,8(%ecx);");
    asm("loc_65DC6A6: mov 0x10(%ebp),%esi;");
    asm("loc_65DC6A9: add -4(%ebp),%esi;");
    asm("loc_65DC6AC: mov %esi,0x10(%ebp);");
    asm("loc_65DC6AF: sar $4,%esi;");
    asm("loc_65DC6B2: dec %esi;");
    asm("loc_65DC6B3: cmp $0x3F,%esi;");
    asm("loc_65DC6B6: jbe loc_65DC6BB;");
    asm("loc_65DC6B8: push $0x3F;");
    asm("loc_65DC6BA: pop %esi;");
    asm("loc_65DC6BB: mov -0xC(%ebp),%ecx;");
    asm("loc_65DC6BE: mov 4(%ecx,%esi,8),%edi;");
    asm("loc_65DC6C2: lea (%ecx,%esi,8),%ecx;");
    asm("loc_65DC6C5: mov %edi,4(%ebx);");
    asm("loc_65DC6C8: mov %ecx,8(%ebx);");
    asm("loc_65DC6CB: mov %ebx,4(%ecx);");
    asm("loc_65DC6CE: mov 4(%ebx),%ecx;");
    asm("loc_65DC6D1: mov %ebx,8(%ecx);");
    asm("loc_65DC6D4: mov 4(%ebx),%ecx;");
    asm("loc_65DC6D7: cmp 8(%ebx),%ecx;");
    asm("loc_65DC6DA: jne loc_65DC738;");
    asm("loc_65DC6DC: mov 4(%esi,%eax),%cl;");
    asm("loc_65DC6E0: cmp $0x20,%esi;");
    asm("loc_65DC6E3: mov %cl,0xF(%ebp);");
    asm("loc_65DC6E6: inc %cl;");
    asm("loc_65DC6E8: mov %cl,4(%esi,%eax);");
    asm("loc_65DC6EC: jae loc_65DC70F;");
    asm("loc_65DC6EE: cmpb $0,0xF(%ebp);");
    asm("loc_65DC6F2: jne loc_65DC702;");
    asm("loc_65DC6F4: mov $0x80000000,%edi;");
    asm("loc_65DC6F9: mov %esi,%ecx;");
    asm("loc_65DC6FB: shr %cl,%edi;");
    asm("loc_65DC6FD: mov 8(%ebp),%ecx;");
    asm("loc_65DC700: or %edi,(%ecx);");
    asm("loc_65DC702: lea 0x44(%eax,%edx,4),%eax;");
    asm("loc_65DC706: mov $0x80000000,%edx;");
    asm("loc_65DC70B: mov %esi,%ecx;");
    asm("loc_65DC70D: jmp loc_65DC734;");
    asm("loc_65DC70F: cmpb $0,0xF(%ebp);");
    asm("loc_65DC713: jne loc_65DC725;");
    asm("loc_65DC715: lea -0x20(%esi),%ecx;");
    asm("loc_65DC718: mov $0x80000000,%edi;");
    asm("loc_65DC71D: shr %cl,%edi;");
    asm("loc_65DC71F: mov 8(%ebp),%ecx;");
    asm("loc_65DC722: or %edi,4(%ecx);");
    asm("loc_65DC725: lea 0xC4(%eax,%edx,4),%eax;");
    asm("loc_65DC72C: lea -0x20(%esi),%ecx;");
    asm("loc_65DC72F: mov $0x80000000,%edx;");
    asm("loc_65DC734: shr %cl,%edx;");
    asm("loc_65DC736: or %edx,(%eax);");
    asm("loc_65DC738: mov 0x10(%ebp),%eax;");
    asm("loc_65DC73B: mov %eax,(%ebx);");
    asm("loc_65DC73D: mov %eax,-4(%eax,%ebx);");
    asm("loc_65DC741: push $1;");
    asm("loc_65DC743: pop %eax;");
    asm("loc_65DC744: pop %edi;");
    asm("loc_65DC745: pop %esi;");
    asm("loc_65DC746: pop %ebx;");
    asm("loc_65DC747: leave;");
    asm("loc_65DC748: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65DC749() // _sub_65DC749
{
    __DEBUG_ASM(65DC749);
    // chunk 0x65DC749 _sub_65DC749
    asm("loc_65DC749: cmpl $0xFFFFFFFF,_data_65E35D8;");
    asm("loc_65DC750: push %ebx;");
    asm("loc_65DC751: push %ebp;");
    asm("loc_65DC752: push %esi;");
    asm("loc_65DC753: push %edi;");
    asm("loc_65DC754: jne loc_65DC75D;");
    asm("loc_65DC756: mov $_off_65E35C8,%esi;");
    asm("loc_65DC75B: jmp loc_65DC77A;");
    asm("loc_65DC75D: push $0x2020;");
    asm("loc_65DC762: push $0;");
    asm("loc_65DC764: pushl _data_65E7920;");
    asm("loc_65DC76A: calll *_import_65E1060;");
    asm("loc_65DC770: mov %eax,%esi;");
    asm("loc_65DC772: test %esi,%esi;");
    asm("loc_65DC774: je loc_65DC886;");
    asm("loc_65DC77A: mov _import_65E10D4,%ebp;");
    asm("loc_65DC780: push $4;");
    asm("loc_65DC782: push $0x2000;");
    asm("loc_65DC787: push $0x400000;");
    asm("loc_65DC78C: push $0;");
    asm("loc_65DC78E: call *%ebp;");
    asm("loc_65DC790: mov %eax,%edi;");
    asm("loc_65DC792: test %edi,%edi;");
    asm("loc_65DC794: je loc_65DC86F;");
    asm("loc_65DC79A: push $4;");
    asm("loc_65DC79C: mov $0x10000,%ebx;");
    asm("loc_65DC7A1: push $0x1000;");
    asm("loc_65DC7A6: push %ebx;");
    asm("loc_65DC7A7: push %edi;");
    asm("loc_65DC7A8: call *%ebp;");
    asm("loc_65DC7AA: test %eax,%eax;");
    asm("loc_65DC7AC: je loc_65DC861;");
    asm("loc_65DC7B2: mov $_off_65E35C8,%eax;");
    asm("loc_65DC7B7: cmp %eax,%esi;");
    asm("loc_65DC7B9: jne loc_65DC7D9;");
    asm("loc_65DC7BB: cmpl $0,_off_65E35C8;");
    asm("loc_65DC7C2: jne loc_65DC7C9;");
    asm("loc_65DC7C4: mov %eax,_off_65E35C8;");
    asm("loc_65DC7C9: cmpl $0,_off_65E35CC;");
    asm("loc_65DC7D0: jne loc_65DC7EE;");
    asm("loc_65DC7D2: mov %eax,_off_65E35CC;");
    asm("loc_65DC7D7: jmp loc_65DC7EE;");
    asm("loc_65DC7D9: mov %eax,(%esi);");
    asm("loc_65DC7DB: mov _off_65E35CC,%eax;");
    asm("loc_65DC7E0: mov %eax,4(%esi);");
    asm("loc_65DC7E3: mov %esi,_off_65E35CC;");
    asm("loc_65DC7E9: mov 4(%esi),%eax;");
    asm("loc_65DC7EC: mov %esi,(%eax);");
    asm("loc_65DC7EE: lea 0x400000(%edi),%eax;");
    asm("loc_65DC7F4: lea 0x98(%esi),%ecx;");
    asm("loc_65DC7FA: mov %eax,0x14(%esi);");
    asm("loc_65DC7FD: lea 0x18(%esi),%eax;");
    asm("loc_65DC800: mov %ecx,0xC(%esi);");
    asm("loc_65DC803: mov %edi,0x10(%esi);");
    asm("loc_65DC806: mov %eax,8(%esi);");
    asm("loc_65DC809: xor %ebp,%ebp;");
    asm("loc_65DC80B: mov $0xF1,%ecx;");
    asm("loc_65DC810: xor %edx,%edx;");
    asm("loc_65DC812: cmp $0x10,%ebp;");
    asm("loc_65DC815: setge %dl;");
    asm("loc_65DC818: dec %edx;");
    asm("loc_65DC819: and %ecx,%edx;");
    asm("loc_65DC81B: dec %edx;");
    asm("loc_65DC81C: inc %ebp;");
    asm("loc_65DC81D: mov %edx,(%eax);");
    asm("loc_65DC81F: mov %ecx,4(%eax);");
    asm("loc_65DC822: add $8,%eax;");
    asm("loc_65DC825: cmp $0x400,%ebp;");
    asm("loc_65DC82B: jl loc_65DC810;");
    asm("loc_65DC82D: push %ebx;");
    asm("loc_65DC82E: push $0;");
    asm("loc_65DC830: push %edi;");
    asm("loc_65DC831: call _sub_65DDB10;");
    asm("loc_65DC836: add $0xC,%esp;");
    asm("loc_65DC839: mov 0x10(%esi),%eax;");
    asm("loc_65DC83C: add %ebx,%eax;");
    asm("loc_65DC83E: cmp %eax,%edi;");
    asm("loc_65DC840: jae loc_65DC85D;");
    asm("loc_65DC842: orb $0xFF,0xF8(%edi);");
    asm("loc_65DC849: lea 8(%edi),%eax;");
    asm("loc_65DC84C: mov %eax,(%edi);");
    asm("loc_65DC84E: movl $0xF0,4(%edi);");
    asm("loc_65DC855: add $0x1000,%edi;");
    asm("loc_65DC85B: jmp loc_65DC839;");
    asm("loc_65DC85D: mov %esi,%eax;");
    asm("loc_65DC85F: jmp loc_65DC888;");
    asm("loc_65DC861: push $0x8000;");
    asm("loc_65DC866: push $0;");
    asm("loc_65DC868: push %edi;");
    asm("loc_65DC869: calll *_import_65E10CC;");
    asm("loc_65DC86F: cmp $_off_65E35C8,%esi;");
    asm("loc_65DC875: je loc_65DC886;");
    asm("loc_65DC877: push %esi;");
    asm("loc_65DC878: push $0;");
    asm("loc_65DC87A: pushl _data_65E7920;");
    asm("loc_65DC880: calll *_import_65E1058;");
    asm("loc_65DC886: xor %eax,%eax;");
    asm("loc_65DC888: pop %edi;");
    asm("loc_65DC889: pop %esi;");
    asm("loc_65DC88A: pop %ebp;");
    asm("loc_65DC88B: pop %ebx;");
    asm("loc_65DC88C: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65DC88D() // _sub_65DC88D
{
    __DEBUG_ASM(65DC88D);
    // chunk 0x65DC88D _sub_65DC88D
    asm("loc_65DC88D: push %esi;");
    asm("loc_65DC88E: mov 8(%esp),%esi;");
    asm("loc_65DC892: push $0x8000;");
    asm("loc_65DC897: push $0;");
    asm("loc_65DC899: pushl 0x10(%esi);");
    asm("loc_65DC89C: calll *_import_65E10CC;");
    asm("loc_65DC8A2: cmp %esi,_off_65E55E8;");
    asm("loc_65DC8A8: jne loc_65DC8B2;");
    asm("loc_65DC8AA: mov 4(%esi),%eax;");
    asm("loc_65DC8AD: mov %eax,_off_65E55E8;");
    asm("loc_65DC8B2: cmp $_off_65E35C8,%esi;");
    asm("loc_65DC8B8: je loc_65DC8DA;");
    asm("loc_65DC8BA: mov 4(%esi),%eax;");
    asm("loc_65DC8BD: mov (%esi),%ecx;");
    asm("loc_65DC8BF: push %esi;");
    asm("loc_65DC8C0: push $0;");
    asm("loc_65DC8C2: mov %ecx,(%eax);");
    asm("loc_65DC8C4: mov (%esi),%eax;");
    asm("loc_65DC8C6: mov 4(%esi),%ecx;");
    asm("loc_65DC8C9: mov %ecx,4(%eax);");
    asm("loc_65DC8CC: pushl _data_65E7920;");
    asm("loc_65DC8D2: calll *_import_65E1058;");
    asm("loc_65DC8D8: pop %esi;");
    asm("loc_65DC8D9: ret;");
    asm("loc_65DC8DA: orl $0xFFFFFFFF,_data_65E35D8;");
    asm("loc_65DC8E1: pop %esi;");
    asm("loc_65DC8E2: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65DC8E3() // _sub_65DC8E3
{
    __DEBUG_ASM(65DC8E3);
    // chunk 0x65DC8E3 _sub_65DC8E3
    asm("loc_65DC8E3: push %ebp;");
    asm("loc_65DC8E4: mov %esp,%ebp;");
    asm("loc_65DC8E6: push %ecx;");
    asm("loc_65DC8E7: push %ebx;");
    asm("loc_65DC8E8: push %esi;");
    asm("loc_65DC8E9: mov _off_65E35CC,%esi;");
    asm("loc_65DC8EF: push %edi;");
    asm("loc_65DC8F0: cmpl $0xFFFFFFFF,0x10(%esi);");
    asm("loc_65DC8F4: je loc_65DC98E;");
    asm("loc_65DC8FA: andl $0,-4(%ebp);");
    asm("loc_65DC8FE: lea 0x2010(%esi),%edi;");
    asm("loc_65DC904: mov $0x3FF000,%ebx;");
    asm("loc_65DC909: cmpl $0xF0,(%edi);");
    asm("loc_65DC90F: jne loc_65DC94A;");
    asm("loc_65DC911: mov %ebx,%eax;");
    asm("loc_65DC913: push $0x4000;");
    asm("loc_65DC918: add 0x10(%esi),%eax;");
    asm("loc_65DC91B: push $0x1000;");
    asm("loc_65DC920: push %eax;");
    asm("loc_65DC921: calll *_import_65E10CC;");
    asm("loc_65DC927: test %eax,%eax;");
    asm("loc_65DC929: je loc_65DC94A;");
    asm("loc_65DC92B: orl $0xFFFFFFFF,(%edi);");
    asm("loc_65DC92E: decl _data_65E6368;");
    asm("loc_65DC934: mov 0xC(%esi),%eax;");
    asm("loc_65DC937: test %eax,%eax;");
    asm("loc_65DC939: je loc_65DC93F;");
    asm("loc_65DC93B: cmp %edi,%eax;");
    asm("loc_65DC93D: jbe loc_65DC942;");
    asm("loc_65DC93F: mov %edi,0xC(%esi);");
    asm("loc_65DC942: incl -4(%ebp);");
    asm("loc_65DC945: decl 8(%ebp);");
    asm("loc_65DC948: je loc_65DC957;");
    asm("loc_65DC94A: sub $0x1000,%ebx;");
    asm("loc_65DC950: sub $8,%edi;");
    asm("loc_65DC953: test %ebx,%ebx;");
    asm("loc_65DC955: jge loc_65DC909;");
    asm("loc_65DC957: cmpl $0,-4(%ebp);");
    asm("loc_65DC95B: mov %esi,%ecx;");
    asm("loc_65DC95D: mov 4(%esi),%esi;");
    asm("loc_65DC960: je loc_65DC98E;");
    asm("loc_65DC962: cmpl $0xFFFFFFFF,0x18(%ecx);");
    asm("loc_65DC966: jne loc_65DC98E;");
    asm("loc_65DC968: push $1;");
    asm("loc_65DC96A: lea 0x20(%ecx),%eax;");
    asm("loc_65DC96D: pop %edx;");
    asm("loc_65DC96E: cmpl $0xFFFFFFFF,(%eax);");
    asm("loc_65DC971: jne loc_65DC97F;");
    asm("loc_65DC973: inc %edx;");
    asm("loc_65DC974: add $8,%eax;");
    asm("loc_65DC977: cmp $0x400,%edx;");
    asm("loc_65DC97D: jl loc_65DC96E;");
    asm("loc_65DC97F: cmp $0x400,%edx;");
    asm("loc_65DC985: jne loc_65DC98E;");
    asm("loc_65DC987: push %ecx;");
    asm("loc_65DC988: call _sub_65DC88D;");
    asm("loc_65DC98D: pop %ecx;");
    asm("loc_65DC98E: cmp _off_65E35CC,%esi;");
    asm("loc_65DC994: je loc_65DC9A0;");
    asm("loc_65DC996: cmpl $0,8(%ebp);");
    asm("loc_65DC99A: jg loc_65DC8F0;");
    asm("loc_65DC9A0: pop %edi;");
    asm("loc_65DC9A1: pop %esi;");
    asm("loc_65DC9A2: pop %ebx;");
    asm("loc_65DC9A3: leave;");
    asm("loc_65DC9A4: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65DC9A5() // _sub_65DC9A5
{
    __DEBUG_ASM(65DC9A5);
    // chunk 0x65DC9A5 _sub_65DC9A5
    asm("loc_65DC9A5: mov 4(%esp),%eax;");
    asm("loc_65DC9A9: mov $_off_65E35C8,%edx;");
    asm("loc_65DC9AE: push %esi;");
    asm("loc_65DC9AF: mov %edx,%ecx;");
    asm("loc_65DC9B1: cmp 0x10(%ecx),%eax;");
    asm("loc_65DC9B4: jbe loc_65DC9BB;");
    asm("loc_65DC9B6: cmp 0x14(%ecx),%eax;");
    asm("loc_65DC9B9: jb loc_65DC9C3;");
    asm("loc_65DC9BB: mov (%ecx),%ecx;");
    asm("loc_65DC9BD: cmp %edx,%ecx;");
    asm("loc_65DC9BF: je loc_65DC9F8;");
    asm("loc_65DC9C1: jmp loc_65DC9B1;");
    asm("loc_65DC9C3: test $0xF,%al;");
    asm("loc_65DC9C5: jne loc_65DC9F8;");
    asm("loc_65DC9C7: mov %eax,%esi;");
    asm("loc_65DC9C9: mov $0x100,%edx;");
    asm("loc_65DC9CE: and $0xFFF,%esi;");
    asm("loc_65DC9D4: cmp %edx,%esi;");
    asm("loc_65DC9D6: jb loc_65DC9F8;");
    asm("loc_65DC9D8: mov 0xC(%esp),%esi;");
    asm("loc_65DC9DC: mov %ecx,(%esi);");
    asm("loc_65DC9DE: mov 0x10(%esp),%esi;");
    asm("loc_65DC9E2: mov %eax,%ecx;");
    asm("loc_65DC9E4: and $0xF000,%cx;");
    asm("loc_65DC9E9: sub %ecx,%eax;");
    asm("loc_65DC9EB: mov %ecx,(%esi);");
    asm("loc_65DC9ED: sub %edx,%eax;");
    asm("loc_65DC9EF: pop %esi;");
    asm("loc_65DC9F0: sar $4,%eax;");
    asm("loc_65DC9F3: lea 8(%eax,%ecx),%eax;");
    asm("loc_65DC9F7: ret;");
    asm("loc_65DC9F8: xor %eax,%eax;");
    asm("loc_65DC9FA: pop %esi;");
    asm("loc_65DC9FB: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65DC9FC() // _sub_65DC9FC
{
    __DEBUG_ASM(65DC9FC);
    // chunk 0x65DC9FC _sub_65DC9FC
    asm("loc_65DC9FC: mov 4(%esp),%eax;");
    asm("loc_65DCA00: mov 8(%esp),%ecx;");
    asm("loc_65DCA04: sub 0x10(%eax),%ecx;");
    asm("loc_65DCA07: sar $0xC,%ecx;");
    asm("loc_65DCA0A: lea 0x18(%eax,%ecx,8),%eax;");
    asm("loc_65DCA0E: mov 0xC(%esp),%ecx;");
    asm("loc_65DCA12: movzbl (%ecx),%edx;");
    asm("loc_65DCA15: add %edx,(%eax);");
    asm("loc_65DCA17: andb $0,(%ecx);");
    asm("loc_65DCA1A: cmpl $0xF0,(%eax);");
    asm("loc_65DCA20: movl $0xF1,4(%eax);");
    asm("loc_65DCA27: jne loc_65DCA40;");
    asm("loc_65DCA29: incl _data_65E6368;");
    asm("loc_65DCA2F: cmpl $0x20,_data_65E6368;");
    asm("loc_65DCA36: jne loc_65DCA40;");
    asm("loc_65DCA38: push $0x10;");
    asm("loc_65DCA3A: call _sub_65DC8E3;");
    asm("loc_65DCA3F: pop %ecx;");
    asm("loc_65DCA40: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65DCA41() // _sub_65DCA41
{
    __DEBUG_ASM(65DCA41);
    // chunk 0x65DCA41 _sub_65DCA41
    asm("loc_65DCA41: push %ebp;");
    asm("loc_65DCA42: mov %esp,%ebp;");
    asm("loc_65DCA44: push %ecx;");
    asm("loc_65DCA45: push %ecx;");
    asm("loc_65DCA46: push %ebx;");
    asm("loc_65DCA47: push %esi;");
    asm("loc_65DCA48: mov _off_65E55E8,%esi;");
    asm("loc_65DCA4E: push %edi;");
    asm("loc_65DCA4F: mov 0x10(%esi),%edx;");
    asm("loc_65DCA52: cmp $0xFFFFFFFF,%edx;");
    asm("loc_65DCA55: je loc_65DCAFA;");
    asm("loc_65DCA5B: mov 8(%esi),%edi;");
    asm("loc_65DCA5E: lea 0x2018(%esi),%ecx;");
    asm("loc_65DCA64: mov %edi,%eax;");
    asm("loc_65DCA66: sub %esi,%eax;");
    asm("loc_65DCA68: sub $0x18,%eax;");
    asm("loc_65DCA6B: sar $3,%eax;");
    asm("loc_65DCA6E: shl $0xC,%eax;");
    asm("loc_65DCA71: add %edx,%eax;");
    asm("loc_65DCA73: cmp %ecx,%edi;");
    asm("loc_65DCA75: mov %eax,-4(%ebp);");
    asm("loc_65DCA78: jae loc_65DCAB4;");
    asm("loc_65DCA7A: mov (%edi),%ecx;");
    asm("loc_65DCA7C: mov 8(%ebp),%ebx;");
    asm("loc_65DCA7F: cmp %ebx,%ecx;");
    asm("loc_65DCA81: jl loc_65DCA9D;");
    asm("loc_65DCA83: cmp %ebx,4(%edi);");
    asm("loc_65DCA86: jbe loc_65DCA9D;");
    asm("loc_65DCA88: push %ebx;");
    asm("loc_65DCA89: push %ecx;");
    asm("loc_65DCA8A: push %eax;");
    asm("loc_65DCA8B: call _sub_65DCC49;");
    asm("loc_65DCA90: add $0xC,%esp;");
    asm("loc_65DCA93: test %eax,%eax;");
    asm("loc_65DCA95: jne loc_65DCB0C;");
    asm("loc_65DCA97: mov -4(%ebp),%eax;");
    asm("loc_65DCA9A: mov %ebx,4(%edi);");
    asm("loc_65DCA9D: add $8,%edi;");
    asm("loc_65DCAA0: lea 0x2018(%esi),%ecx;");
    asm("loc_65DCAA6: add $0x1000,%eax;");
    asm("loc_65DCAAB: cmp %ecx,%edi;");
    asm("loc_65DCAAD: mov %eax,-4(%ebp);");
    asm("loc_65DCAB0: jb loc_65DCA7A;");
    asm("loc_65DCAB2: jmp loc_65DCAB7;");
    asm("loc_65DCAB4: mov 8(%ebp),%ebx;");
    asm("loc_65DCAB7: mov 8(%esi),%eax;");
    asm("loc_65DCABA: mov 0x10(%esi),%ecx;");
    asm("loc_65DCABD: lea 0x18(%esi),%edi;");
    asm("loc_65DCAC0: mov %eax,-8(%ebp);");
    asm("loc_65DCAC3: cmp %eax,%edi;");
    asm("loc_65DCAC5: mov %ecx,-4(%ebp);");
    asm("loc_65DCAC8: jae loc_65DCAFD;");
    asm("loc_65DCACA: mov (%edi),%eax;");
    asm("loc_65DCACC: cmp %ebx,%eax;");
    asm("loc_65DCACE: jl loc_65DCAE9;");
    asm("loc_65DCAD0: cmp %ebx,4(%edi);");
    asm("loc_65DCAD3: jbe loc_65DCAE9;");
    asm("loc_65DCAD5: push %ebx;");
    asm("loc_65DCAD6: push %eax;");
    asm("loc_65DCAD7: pushl -4(%ebp);");
    asm("loc_65DCADA: call _sub_65DCC49;");
    asm("loc_65DCADF: add $0xC,%esp;");
    asm("loc_65DCAE2: test %eax,%eax;");
    asm("loc_65DCAE4: jne loc_65DCB0C;");
    asm("loc_65DCAE6: mov %ebx,4(%edi);");
    asm("loc_65DCAE9: addl $0x1000,-4(%ebp);");
    asm("loc_65DCAF0: add $8,%edi;");
    asm("loc_65DCAF3: cmp -8(%ebp),%edi;");
    asm("loc_65DCAF6: jb loc_65DCACA;");
    asm("loc_65DCAF8: jmp loc_65DCAFD;");
    asm("loc_65DCAFA: mov 8(%ebp),%ebx;");
    asm("loc_65DCAFD: mov (%esi),%esi;");
    asm("loc_65DCAFF: cmp _off_65E55E8,%esi;");
    asm("loc_65DCB05: je loc_65DCB1C;");
    asm("loc_65DCB07: jmp loc_65DCA4F;");
    asm("loc_65DCB0C: mov %esi,_off_65E55E8;");
    asm("loc_65DCB12: sub %ebx,(%edi);");
    asm("loc_65DCB14: mov %edi,8(%esi);");
    asm("loc_65DCB17: jmp loc_65DCC44;");
    asm("loc_65DCB1C: mov $_off_65E35C8,%eax;");
    asm("loc_65DCB21: mov %eax,%edi;");
    asm("loc_65DCB23: cmpl $0xFFFFFFFF,0x10(%edi);");
    asm("loc_65DCB27: je loc_65DCB2F;");
    asm("loc_65DCB29: cmpl $0,0xC(%edi);");
    asm("loc_65DCB2D: jne loc_65DCB3B;");
    asm("loc_65DCB2F: mov (%edi),%edi;");
    asm("loc_65DCB31: cmp %eax,%edi;");
    asm("loc_65DCB33: je loc_65DCC10;");
    asm("loc_65DCB39: jmp loc_65DCB23;");
    asm("loc_65DCB3B: mov 0xC(%edi),%ebx;");
    asm("loc_65DCB3E: andl $0,-4(%ebp);");
    asm("loc_65DCB42: mov %ebx,%esi;");
    asm("loc_65DCB44: mov %ebx,%eax;");
    asm("loc_65DCB46: sub %edi,%esi;");
    asm("loc_65DCB48: sub $0x18,%esi;");
    asm("loc_65DCB4B: sar $3,%esi;");
    asm("loc_65DCB4E: shl $0xC,%esi;");
    asm("loc_65DCB51: add 0x10(%edi),%esi;");
    asm("loc_65DCB54: cmpl $0xFFFFFFFF,(%ebx);");
    asm("loc_65DCB57: jne loc_65DCB6A;");
    asm("loc_65DCB59: cmpl $0x10,-4(%ebp);");
    asm("loc_65DCB5D: jge loc_65DCB6A;");
    asm("loc_65DCB5F: add $8,%eax;");
    asm("loc_65DCB62: incl -4(%ebp);");
    asm("loc_65DCB65: cmpl $0xFFFFFFFF,(%eax);");
    asm("loc_65DCB68: je loc_65DCB59;");
    asm("loc_65DCB6A: mov -4(%ebp),%eax;");
    asm("loc_65DCB6D: push $4;");
    asm("loc_65DCB6F: shl $0xC,%eax;");
    asm("loc_65DCB72: push $0x1000;");
    asm("loc_65DCB77: push %eax;");
    asm("loc_65DCB78: push %esi;");
    asm("loc_65DCB79: mov %eax,-8(%ebp);");
    asm("loc_65DCB7C: calll *_import_65E10D4;");
    asm("loc_65DCB82: cmp %esi,%eax;");
    asm("loc_65DCB84: jne loc_65DCC42;");
    asm("loc_65DCB8A: push $0;");
    asm("loc_65DCB8C: pushl -8(%ebp);");
    asm("loc_65DCB8F: push %esi;");
    asm("loc_65DCB90: call _sub_65DDB10;");
    asm("loc_65DCB95: mov -4(%ebp),%edx;");
    asm("loc_65DCB98: add $0xC,%esp;");
    asm("loc_65DCB9B: test %edx,%edx;");
    asm("loc_65DCB9D: mov %ebx,%ecx;");
    asm("loc_65DCB9F: jle loc_65DCBD1;");
    asm("loc_65DCBA1: lea 4(%esi),%eax;");
    asm("loc_65DCBA4: mov %edx,-4(%ebp);");
    asm("loc_65DCBA7: orb $0xFF,0xF4(%eax);");
    asm("loc_65DCBAE: lea 4(%eax),%edx;");
    asm("loc_65DCBB1: mov %edx,-4(%eax);");
    asm("loc_65DCBB4: mov $0xF0,%edx;");
    asm("loc_65DCBB9: mov %edx,(%eax);");
    asm("loc_65DCBBB: mov %edx,(%ecx);");
    asm("loc_65DCBBD: movl $0xF1,4(%ecx);");
    asm("loc_65DCBC4: add $0x1000,%eax;");
    asm("loc_65DCBC9: add $8,%ecx;");
    asm("loc_65DCBCC: decl -4(%ebp);");
    asm("loc_65DCBCF: jne loc_65DCBA7;");
    asm("loc_65DCBD1: mov %edi,_off_65E55E8;");
    asm("loc_65DCBD7: lea 0x2018(%edi),%eax;");
    asm("loc_65DCBDD: cmp %eax,%ecx;");
    asm("loc_65DCBDF: jae loc_65DCBED;");
    asm("loc_65DCBE1: cmpl $0xFFFFFFFF,(%ecx);");
    asm("loc_65DCBE4: je loc_65DCBEB;");
    asm("loc_65DCBE6: add $8,%ecx;");
    asm("loc_65DCBE9: jmp loc_65DCBDD;");
    asm("loc_65DCBEB: cmp %eax,%ecx;");
    asm("loc_65DCBED: sbb %eax,%eax;");
    asm("loc_65DCBEF: and %ecx,%eax;");
    asm("loc_65DCBF1: mov %eax,0xC(%edi);");
    asm("loc_65DCBF4: mov 8(%ebp),%eax;");
    asm("loc_65DCBF7: mov %al,8(%esi);");
    asm("loc_65DCBFA: mov %ebx,8(%edi);");
    asm("loc_65DCBFD: sub %eax,(%ebx);");
    asm("loc_65DCBFF: sub %eax,4(%esi);");
    asm("loc_65DCC02: lea 8(%esi,%eax),%ecx;");
    asm("loc_65DCC06: lea 0x100(%esi),%eax;");
    asm("loc_65DCC0C: mov %ecx,(%esi);");
    asm("loc_65DCC0E: jmp loc_65DCC44;");
    asm("loc_65DCC10: call _sub_65DC749;");
    asm("loc_65DCC15: test %eax,%eax;");
    asm("loc_65DCC17: je loc_65DCC42;");
    asm("loc_65DCC19: mov 0x10(%eax),%ecx;");
    asm("loc_65DCC1C: mov %bl,8(%ecx);");
    asm("loc_65DCC1F: lea 8(%ecx,%ebx),%edx;");
    asm("loc_65DCC23: mov %eax,_off_65E55E8;");
    asm("loc_65DCC28: mov %edx,(%ecx);");
    asm("loc_65DCC2A: mov $0xF0,%edx;");
    asm("loc_65DCC2F: sub %ebx,%edx;");
    asm("loc_65DCC31: mov %edx,4(%ecx);");
    asm("loc_65DCC34: movzbl %bl,%edx;");
    asm("loc_65DCC37: sub %edx,0x18(%eax);");
    asm("loc_65DCC3A: lea 0x100(%ecx),%eax;");
    asm("loc_65DCC40: jmp loc_65DCC44;");
    asm("loc_65DCC42: xor %eax,%eax;");
    asm("loc_65DCC44: pop %edi;");
    asm("loc_65DCC45: pop %esi;");
    asm("loc_65DCC46: pop %ebx;");
    asm("loc_65DCC47: leave;");
    asm("loc_65DCC48: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65DCC49() // _sub_65DCC49
{
    __DEBUG_ASM(65DCC49);
    // chunk 0x65DCC49 _sub_65DCC49
    asm("loc_65DCC49: push %ebp;");
    asm("loc_65DCC4A: mov %esp,%ebp;");
    asm("loc_65DCC4C: push %ecx;");
    asm("loc_65DCC4D: mov 8(%ebp),%ecx;");
    asm("loc_65DCC50: mov 0x10(%ebp),%edx;");
    asm("loc_65DCC53: push %ebx;");
    asm("loc_65DCC54: push %esi;");
    asm("loc_65DCC55: mov 4(%ecx),%esi;");
    asm("loc_65DCC58: push %edi;");
    asm("loc_65DCC59: mov (%ecx),%edi;");
    asm("loc_65DCC5B: lea 0xF8(%ecx),%ebx;");
    asm("loc_65DCC61: cmp %edx,%esi;");
    asm("loc_65DCC63: mov %edi,-4(%ebp);");
    asm("loc_65DCC66: mov %edi,%eax;");
    asm("loc_65DCC68: mov %ebx,8(%ebp);");
    asm("loc_65DCC6B: jb loc_65DCC8E;");
    asm("loc_65DCC6D: lea (%edi,%edx),%eax;");
    asm("loc_65DCC70: mov %dl,(%edi);");
    asm("loc_65DCC72: cmp %ebx,%eax;");
    asm("loc_65DCC74: jae loc_65DCC7D;");
    asm("loc_65DCC76: add %edx,(%ecx);");
    asm("loc_65DCC78: sub %edx,4(%ecx);");
    asm("loc_65DCC7B: jmp loc_65DCC86;");
    asm("loc_65DCC7D: andl $0,4(%ecx);");
    asm("loc_65DCC81: lea 8(%ecx),%eax;");
    asm("loc_65DCC84: mov %eax,(%ecx);");
    asm("loc_65DCC86: lea 8(%edi),%eax;");
    asm("loc_65DCC89: jmp loc_65DCD5C;");
    asm("loc_65DCC8E: add %edi,%esi;");
    asm("loc_65DCC90: cmpb $0,(%esi);");
    asm("loc_65DCC93: je loc_65DCC97;");
    asm("loc_65DCC95: mov %esi,%eax;");
    asm("loc_65DCC97: lea (%eax,%edx),%esi;");
    asm("loc_65DCC9A: cmp %ebx,%esi;");
    asm("loc_65DCC9C: jae loc_65DCCE1;");
    asm("loc_65DCC9E: mov (%eax),%bl;");
    asm("loc_65DCCA0: test %bl,%bl;");
    asm("loc_65DCCA2: jne loc_65DCCD4;");
    asm("loc_65DCCA4: push $1;");
    asm("loc_65DCCA6: lea 1(%eax),%ebx;");
    asm("loc_65DCCA9: pop %esi;");
    asm("loc_65DCCAA: cmpb $0,(%ebx);");
    asm("loc_65DCCAD: jne loc_65DCCB3;");
    asm("loc_65DCCAF: inc %ebx;");
    asm("loc_65DCCB0: inc %esi;");
    asm("loc_65DCCB1: jmp loc_65DCCAA;");
    asm("loc_65DCCB3: cmp %edx,%esi;");
    asm("loc_65DCCB5: jae loc_65DCD05;");
    asm("loc_65DCCB7: cmp -4(%ebp),%eax;");
    asm("loc_65DCCBA: jne loc_65DCCC1;");
    asm("loc_65DCCBC: mov %esi,4(%ecx);");
    asm("loc_65DCCBF: jmp loc_65DCCCD;");
    asm("loc_65DCCC1: sub %esi,0xC(%ebp);");
    asm("loc_65DCCC4: cmp %edx,0xC(%ebp);");
    asm("loc_65DCCC7: jb loc_65DCD66;");
    asm("loc_65DCCCD: mov -4(%ebp),%edi;");
    asm("loc_65DCCD0: mov %ebx,%eax;");
    asm("loc_65DCCD2: jmp loc_65DCCD9;");
    asm("loc_65DCCD4: movzbl %bl,%esi;");
    asm("loc_65DCCD7: add %esi,%eax;");
    asm("loc_65DCCD9: lea (%eax,%edx),%esi;");
    asm("loc_65DCCDC: cmp 8(%ebp),%esi;");
    asm("loc_65DCCDF: jb loc_65DCC9E;");
    asm("loc_65DCCE1: lea 8(%ecx),%esi;");
    asm("loc_65DCCE4: cmp %edi,%esi;");
    asm("loc_65DCCE6: jae loc_65DCD66;");
    asm("loc_65DCCE8: lea (%esi,%edx),%eax;");
    asm("loc_65DCCEB: cmp 8(%ebp),%eax;");
    asm("loc_65DCCEE: jae loc_65DCD66;");
    asm("loc_65DCCF0: mov (%esi),%al;");
    asm("loc_65DCCF2: test %al,%al;");
    asm("loc_65DCCF4: jne loc_65DCD36;");
    asm("loc_65DCCF6: push $1;");
    asm("loc_65DCCF8: lea 1(%esi),%ebx;");
    asm("loc_65DCCFB: pop %eax;");
    asm("loc_65DCCFC: cmpb $0,(%ebx);");
    asm("loc_65DCCFF: jne loc_65DCD26;");
    asm("loc_65DCD01: inc %ebx;");
    asm("loc_65DCD02: inc %eax;");
    asm("loc_65DCD03: jmp loc_65DCCFC;");
    asm("loc_65DCD05: lea (%eax,%edx),%ebx;");
    asm("loc_65DCD08: cmp 8(%ebp),%ebx;");
    asm("loc_65DCD0B: jae loc_65DCD16;");
    asm("loc_65DCD0D: sub %edx,%esi;");
    asm("loc_65DCD0F: mov %ebx,(%ecx);");
    asm("loc_65DCD11: mov %esi,4(%ecx);");
    asm("loc_65DCD14: jmp loc_65DCD1F;");
    asm("loc_65DCD16: andl $0,4(%ecx);");
    asm("loc_65DCD1A: lea 8(%ecx),%esi;");
    asm("loc_65DCD1D: mov %esi,(%ecx);");
    asm("loc_65DCD1F: mov %dl,(%eax);");
    asm("loc_65DCD21: add $8,%eax;");
    asm("loc_65DCD24: jmp loc_65DCD5C;");
    asm("loc_65DCD26: cmp %edx,%eax;");
    asm("loc_65DCD28: jae loc_65DCD3D;");
    asm("loc_65DCD2A: sub %eax,0xC(%ebp);");
    asm("loc_65DCD2D: cmp %edx,0xC(%ebp);");
    asm("loc_65DCD30: jb loc_65DCD66;");
    asm("loc_65DCD32: mov %ebx,%esi;");
    asm("loc_65DCD34: jmp loc_65DCCE4;");
    asm("loc_65DCD36: movzbl %al,%eax;");
    asm("loc_65DCD39: add %eax,%esi;");
    asm("loc_65DCD3B: jmp loc_65DCCE4;");
    asm("loc_65DCD3D: lea (%esi,%edx),%ebx;");
    asm("loc_65DCD40: cmp 8(%ebp),%ebx;");
    asm("loc_65DCD43: jae loc_65DCD4E;");
    asm("loc_65DCD45: sub %edx,%eax;");
    asm("loc_65DCD47: mov %ebx,(%ecx);");
    asm("loc_65DCD49: mov %eax,4(%ecx);");
    asm("loc_65DCD4C: jmp loc_65DCD57;");
    asm("loc_65DCD4E: andl $0,4(%ecx);");
    asm("loc_65DCD52: lea 8(%ecx),%eax;");
    asm("loc_65DCD55: mov %eax,(%ecx);");
    asm("loc_65DCD57: mov %dl,(%esi);");
    asm("loc_65DCD59: lea 8(%esi),%eax;");
    asm("loc_65DCD5C: imul $0xF,%ecx;");
    asm("loc_65DCD5F: shl $4,%eax;");
    asm("loc_65DCD62: sub %ecx,%eax;");
    asm("loc_65DCD64: jmp loc_65DCD68;");
    asm("loc_65DCD66: xor %eax,%eax;");
    asm("loc_65DCD68: pop %edi;");
    asm("loc_65DCD69: pop %esi;");
    asm("loc_65DCD6A: pop %ebx;");
    asm("loc_65DCD6B: leave;");
    asm("loc_65DCD6C: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65DCD6D() // _sub_65DCD6D
{
    __DEBUG_ASM(65DCD6D);
    // chunk 0x65DCD6D _sub_65DCD6D
    asm("loc_65DCD6D: push %ebp;");
    asm("loc_65DCD6E: mov %esp,%ebp;");
    asm("loc_65DCD70: push %ecx;");
    asm("loc_65DCD71: mov 0x10(%ebp),%edx;");
    asm("loc_65DCD74: push %ebx;");
    asm("loc_65DCD75: mov 0xC(%ebp),%ebx;");
    asm("loc_65DCD78: push %esi;");
    asm("loc_65DCD79: movzbl (%edx),%ecx;");
    asm("loc_65DCD7C: push %edi;");
    asm("loc_65DCD7D: mov 8(%ebp),%edi;");
    asm("loc_65DCD80: andl $0,-4(%ebp);");
    asm("loc_65DCD84: mov %ebx,%eax;");
    asm("loc_65DCD86: sub 0x10(%edi),%eax;");
    asm("loc_65DCD89: sar $0xC,%eax;");
    asm("loc_65DCD8C: cmp 0x14(%ebp),%ecx;");
    asm("loc_65DCD8F: lea 0x18(%edi,%eax,8),%edi;");
    asm("loc_65DCD93: jbe loc_65DCDA7;");
    asm("loc_65DCD95: mov 0x14(%ebp),%eax;");
    asm("loc_65DCD98: sub %eax,%ecx;");
    asm("loc_65DCD9A: mov %al,(%edx);");
    asm("loc_65DCD9C: add %ecx,(%edi);");
    asm("loc_65DCD9E: movl $0xF1,4(%edi);");
    asm("loc_65DCDA5: jmp loc_65DCE07;");
    asm("loc_65DCDA7: jae loc_65DCE0E;");
    asm("loc_65DCDA9: mov 0x14(%ebp),%eax;");
    asm("loc_65DCDAC: lea (%edx,%eax),%esi;");
    asm("loc_65DCDAF: lea 0xF8(%ebx),%eax;");
    asm("loc_65DCDB5: cmp %eax,%esi;");
    asm("loc_65DCDB7: ja loc_65DCE0E;");
    asm("loc_65DCDB9: lea (%ecx,%edx),%eax;");
    asm("loc_65DCDBC: cmp %esi,%eax;");
    asm("loc_65DCDBE: jae loc_65DCDCA;");
    asm("loc_65DCDC0: cmpb $0,(%eax);");
    asm("loc_65DCDC3: jne loc_65DCDC8;");
    asm("loc_65DCDC5: inc %eax;");
    asm("loc_65DCDC6: jmp loc_65DCDBC;");
    asm("loc_65DCDC8: cmp %esi,%eax;");
    asm("loc_65DCDCA: jne loc_65DCE0E;");
    asm("loc_65DCDCC: mov 0x14(%ebp),%al;");
    asm("loc_65DCDCF: mov %al,(%edx);");
    asm("loc_65DCDD1: mov (%ebx),%eax;");
    asm("loc_65DCDD3: cmp %eax,%edx;");
    asm("loc_65DCDD5: ja loc_65DCE02;");
    asm("loc_65DCDD7: cmp %eax,%esi;");
    asm("loc_65DCDD9: jbe loc_65DCE02;");
    asm("loc_65DCDDB: lea 0xF8(%ebx),%eax;");
    asm("loc_65DCDE1: cmp %eax,%esi;");
    asm("loc_65DCDE3: jae loc_65DCDF9;");
    asm("loc_65DCDE5: xor %eax,%eax;");
    asm("loc_65DCDE7: mov %esi,(%ebx);");
    asm("loc_65DCDE9: cmp %al,(%esi);");
    asm("loc_65DCDEB: jne loc_65DCDF4;");
    asm("loc_65DCDED: inc %eax;");
    asm("loc_65DCDEE: cmpb $0,(%esi,%eax);");
    asm("loc_65DCDF2: je loc_65DCDED;");
    asm("loc_65DCDF4: mov %eax,4(%ebx);");
    asm("loc_65DCDF7: jmp loc_65DCE02;");
    asm("loc_65DCDF9: andl $0,4(%ebx);");
    asm("loc_65DCDFD: lea 8(%ebx),%eax;");
    asm("loc_65DCE00: mov %eax,(%ebx);");
    asm("loc_65DCE02: sub 0x14(%ebp),%ecx;");
    asm("loc_65DCE05: add %ecx,(%edi);");
    asm("loc_65DCE07: movl $1,-4(%ebp);");
    asm("loc_65DCE0E: mov -4(%ebp),%eax;");
    asm("loc_65DCE11: pop %edi;");
    asm("loc_65DCE12: pop %esi;");
    asm("loc_65DCE13: pop %ebx;");
    asm("loc_65DCE14: leave;");
    asm("loc_65DCE15: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65DCE16() // __mtinitlocks
{
    __DEBUG_ASM(65DCE16);
    // chunk 0x65DCE16 _sub_65DCE16
    asm("loc_65DCE16: push %esi;");
    asm("loc_65DCE17: mov _import_65E10DC,%esi;");
    asm("loc_65DCE1D: pushl _off_65E5634;");
    asm("loc_65DCE23: call *%esi;");
    asm("loc_65DCE25: pushl _off_65E5624;");
    asm("loc_65DCE2B: call *%esi;");
    asm("loc_65DCE2D: pushl _off_65E5614;");
    asm("loc_65DCE33: call *%esi;");
    asm("loc_65DCE35: pushl _off_65E55F4;");
    asm("loc_65DCE3B: call *%esi;");
    asm("loc_65DCE3D: pop %esi;");
    asm("loc_65DCE3E: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65DCE3F() // __mtdeletelocks
{
    __DEBUG_ASM(65DCE3F);
    // chunk 0x65DCE3F _sub_65DCE3F
    asm("loc_65DCE3F: push %esi;");
    asm("loc_65DCE40: push %edi;");
    asm("loc_65DCE41: mov _import_65E10A8,%edi;");
    asm("loc_65DCE47: mov $_data_65E55F0,%esi;");
    asm("loc_65DCE4C: mov (%esi),%eax;");
    asm("loc_65DCE4E: test %eax,%eax;");
    asm("loc_65DCE50: je loc_65DCE7D;");
    asm("loc_65DCE52: cmp $_off_65E5634,%esi;");
    asm("loc_65DCE58: je loc_65DCE7D;");
    asm("loc_65DCE5A: cmp $_off_65E5624,%esi;");
    asm("loc_65DCE60: je loc_65DCE7D;");
    asm("loc_65DCE62: cmp $_off_65E5614,%esi;");
    asm("loc_65DCE68: je loc_65DCE7D;");
    asm("loc_65DCE6A: cmp $_off_65E55F4,%esi;");
    asm("loc_65DCE70: je loc_65DCE7D;");
    asm("loc_65DCE72: push %eax;");
    asm("loc_65DCE73: call *%edi;");
    asm("loc_65DCE75: pushl (%esi);");
    asm("loc_65DCE77: call _sub_65D7F23;");
    asm("loc_65DCE7C: pop %ecx;");
    asm("loc_65DCE7D: add $4,%esi;");
    asm("loc_65DCE80: cmp $_data_65E56B0,%esi;");
    asm("loc_65DCE86: jl loc_65DCE4C;");
    asm("loc_65DCE88: pushl _off_65E5614;");
    asm("loc_65DCE8E: call *%edi;");
    asm("loc_65DCE90: pushl _off_65E5624;");
    asm("loc_65DCE96: call *%edi;");
    asm("loc_65DCE98: pushl _off_65E5634;");
    asm("loc_65DCE9E: call *%edi;");
    asm("loc_65DCEA0: pushl _off_65E55F4;");
    asm("loc_65DCEA6: call *%edi;");
    asm("loc_65DCEA8: pop %edi;");
    asm("loc_65DCEA9: pop %esi;");
    asm("loc_65DCEAA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65DCEAB() // __lock
{
    __DEBUG_ASM(65DCEAB);
    // chunk 0x65DCEAB _sub_65DCEAB
    asm("loc_65DCEAB: push %ebp;");
    asm("loc_65DCEAC: mov %esp,%ebp;");
    asm("loc_65DCEAE: mov 8(%ebp),%eax;");
    asm("loc_65DCEB1: push %esi;");
    asm("loc_65DCEB2: cmpl $0,_data_65E55F0(,%eax,4);");
    asm("loc_65DCEBA: lea _data_65E55F0(,%eax,4),%esi;");
    asm("loc_65DCEC1: jne loc_65DCF01;");
    asm("loc_65DCEC3: push %edi;");
    asm("loc_65DCEC4: push $0x18;");
    asm("loc_65DCEC6: call _sub_65D8535;");
    asm("loc_65DCECB: mov %eax,%edi;");
    asm("loc_65DCECD: pop %ecx;");
    asm("loc_65DCECE: test %edi,%edi;");
    asm("loc_65DCED0: jne loc_65DCEDA;");
    asm("loc_65DCED2: push $0x11;");
    asm("loc_65DCED4: call _sub_65D7EF0;");
    asm("loc_65DCED9: pop %ecx;");
    asm("loc_65DCEDA: push $0x11;");
    asm("loc_65DCEDC: call _sub_65DCEAB;");
    asm("loc_65DCEE1: cmpl $0,(%esi);");
    asm("loc_65DCEE4: pop %ecx;");
    asm("loc_65DCEE5: push %edi;");
    asm("loc_65DCEE6: jne loc_65DCEF2;");
    asm("loc_65DCEE8: calll *_import_65E10DC;");
    asm("loc_65DCEEE: mov %edi,(%esi);");
    asm("loc_65DCEF0: jmp loc_65DCEF8;");
    asm("loc_65DCEF2: call _sub_65D7F23;");
    asm("loc_65DCEF7: pop %ecx;");
    asm("loc_65DCEF8: push $0x11;");
    asm("loc_65DCEFA: call _sub_65DCF0C;");
    asm("loc_65DCEFF: pop %ecx;");
    asm("loc_65DCF00: pop %edi;");
    asm("loc_65DCF01: pushl (%esi);");
    asm("loc_65DCF03: calll *_import_65E10E0;");
    asm("loc_65DCF09: pop %esi;");
    asm("loc_65DCF0A: pop %ebp;");
    asm("loc_65DCF0B: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65DCF0C() // __unlock
{
    __DEBUG_ASM(65DCF0C);
    // chunk 0x65DCF0C _sub_65DCF0C
    asm("loc_65DCF0C: push %ebp;");
    asm("loc_65DCF0D: mov %esp,%ebp;");
    asm("loc_65DCF0F: mov 8(%ebp),%eax;");
    asm("loc_65DCF12: pushl _data_65E55F0(,%eax,4);");
    asm("loc_65DCF19: calll *_import_65E10AC;");
    asm("loc_65DCF1F: pop %ebp;");
    asm("loc_65DCF20: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65DCF24() // _sub_65DCF24
{
    __DEBUG_ASM(65DCF24);
    // chunk 0x65DCF24 _sub_65DCF24
    asm("loc_65DCF24: push %esi;");
    asm("loc_65DCF25: inc %ebx;");
    asm("loc_65DCF26: xor (%eax),%dh;");
    asm("loc_65DCF28: pop %eax;");
    asm("loc_65DCF29: inc %ebx;");
    asm("loc_65DCF2A: xor %dh,(%eax);");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65DCF2C() // __except_handler3
{
    __DEBUG_ASM(65DCF2C);
    // chunk 0x65DCF2C _sub_65DCF2C
    asm("loc_65DCF2C: push %ebp;");
    asm("loc_65DCF2D: mov %esp,%ebp;");
    asm("loc_65DCF2F: sub $8,%esp;");
    asm("loc_65DCF32: push %ebx;");
    asm("loc_65DCF33: push %esi;");
    asm("loc_65DCF34: push %edi;");
    asm("loc_65DCF35: push %ebp;");
    asm("loc_65DCF36: cld;");
    asm("loc_65DCF37: mov 0xC(%ebp),%ebx;");
    asm("loc_65DCF3A: mov 8(%ebp),%eax;");
    asm("loc_65DCF3D: testl $6,4(%eax);");
    asm("loc_65DCF44: jne loc_65DCFCC;");
    asm("loc_65DCF4A: mov %eax,-8(%ebp);");
    asm("loc_65DCF4D: mov 0x10(%ebp),%eax;");
    asm("loc_65DCF50: mov %eax,-4(%ebp);");
    asm("loc_65DCF53: lea -8(%ebp),%eax;");
    asm("loc_65DCF56: mov %eax,-4(%ebx);");
    asm("loc_65DCF59: mov 0xC(%ebx),%esi;");
    asm("loc_65DCF5C: mov 8(%ebx),%edi;");
    asm("loc_65DCF5F: cmp $0xFFFFFFFF,%esi;");
    asm("loc_65DCF62: je loc_65DCFC5;");
    asm("loc_65DCF64: lea (%esi,%esi,2),%ecx;");
    asm("loc_65DCF67: cmpl $0,4(%edi,%ecx,4);");
    asm("loc_65DCF6C: je loc_65DCFB3;");
    asm("loc_65DCF6E: push %esi;");
    asm("loc_65DCF6F: push %ebp;");
    asm("loc_65DCF70: lea 0x10(%ebx),%ebp;");
    asm("loc_65DCF73: calll *4(%edi,%ecx,4);");
    asm("loc_65DCF77: pop %ebp;");
    asm("loc_65DCF78: pop %esi;");
    asm("loc_65DCF79: mov 0xC(%ebp),%ebx;");
    asm("loc_65DCF7C: or %eax,%eax;");
    asm("loc_65DCF7E: je loc_65DCFB3;");
    asm("loc_65DCF80: js loc_65DCFBE;");
    asm("loc_65DCF82: mov 8(%ebx),%edi;");
    asm("loc_65DCF85: push %ebx;");
    asm("loc_65DCF86: call _sub_65D7260;");
    asm("loc_65DCF8B: add $4,%esp;");
    asm("loc_65DCF8E: lea 0x10(%ebx),%ebp;");
    asm("loc_65DCF91: push %esi;");
    asm("loc_65DCF92: push %ebx;");
    asm("loc_65DCF93: call _sub_65D72A2;");
    asm("loc_65DCF98: add $8,%esp;");
    asm("loc_65DCF9B: lea (%esi,%esi,2),%ecx;");
    asm("loc_65DCF9E: push $1;");
    asm("loc_65DCFA0: mov 8(%edi,%ecx,4),%eax;");
    asm("loc_65DCFA4: call _sub_65D7336;");
    asm("loc_65DCFA9: mov (%edi,%ecx,4),%eax;");
    asm("loc_65DCFAC: mov %eax,0xC(%ebx);");
    asm("loc_65DCFAF: calll *8(%edi,%ecx,4);");
    asm("loc_65DCFB3: mov 8(%ebx),%edi;");
    asm("loc_65DCFB6: lea (%esi,%esi,2),%ecx;");
    asm("loc_65DCFB9: mov (%edi,%ecx,4),%esi;");
    asm("loc_65DCFBC: jmp loc_65DCF5F;");
    asm("loc_65DCFBE: mov $0,%eax;");
    asm("loc_65DCFC3: jmp loc_65DCFE1;");
    asm("loc_65DCFC5: mov $1,%eax;");
    asm("loc_65DCFCA: jmp loc_65DCFE1;");
    asm("loc_65DCFCC: push %ebp;");
    asm("loc_65DCFCD: lea 0x10(%ebx),%ebp;");
    asm("loc_65DCFD0: push $0xFFFFFFFF;");
    asm("loc_65DCFD2: push %ebx;");
    asm("loc_65DCFD3: call _sub_65D72A2;");
    asm("loc_65DCFD8: add $8,%esp;");
    asm("loc_65DCFDB: pop %ebp;");
    asm("loc_65DCFDC: mov $1,%eax;");
    asm("loc_65DCFE1: pop %ebp;");
    asm("loc_65DCFE2: pop %edi;");
    asm("loc_65DCFE3: pop %esi;");
    asm("loc_65DCFE4: pop %ebx;");
    asm("loc_65DCFE5: mov %ebp,%esp;");
    asm("loc_65DCFE7: pop %ebp;");
    asm("loc_65DCFE8: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65DCFE9() // __seh_longjmp_unwind@4
{
    __DEBUG_ASM(65DCFE9);
    // chunk 0x65DCFE9 _sub_65DCFE9
    asm("loc_65DCFE9: push %ebp;");
    asm("loc_65DCFEA: mov 8(%esp),%ecx;");
    asm("loc_65DCFEE: mov (%ecx),%ebp;");
    asm("loc_65DCFF0: mov 0x1C(%ecx),%eax;");
    asm("loc_65DCFF3: push %eax;");
    asm("loc_65DCFF4: mov 0x18(%ecx),%eax;");
    asm("loc_65DCFF7: push %eax;");
    asm("loc_65DCFF8: call _sub_65D72A2;");
    asm("loc_65DCFFD: add $8,%esp;");
    asm("loc_65DD000: pop %ebp;");
    asm("loc_65DD001: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65DD020() // _strcat
{
    __DEBUG_ASM(65DD020);
    // chunk 0x65DD020 _sub_65DD020
    asm("loc_65DD020: mov 4(%esp),%ecx;");
    asm("loc_65DD024: push %edi;");
    asm("loc_65DD025: test $3,%ecx;");
    asm("loc_65DD02B: je loc_65DD03C;");
    asm("loc_65DD02D: mov (%ecx),%al;");
    asm("loc_65DD02F: inc %ecx;");
    asm("loc_65DD030: test %al,%al;");
    asm("loc_65DD032: je loc_65DD06F;");
    asm("loc_65DD034: test $3,%ecx;");
    asm("loc_65DD03A: jne loc_65DD02D;");
    asm("loc_65DD03C: mov (%ecx),%eax;");
    asm("loc_65DD03E: mov $0x7EFEFEFF,%edx;");
    asm("loc_65DD043: add %eax,%edx;");
    asm("loc_65DD045: xor $0xFFFFFFFF,%eax;");
    asm("loc_65DD048: xor %edx,%eax;");
    asm("loc_65DD04A: add $4,%ecx;");
    asm("loc_65DD04D: test $0x81010100,%eax;");
    asm("loc_65DD052: je loc_65DD03C;");
    asm("loc_65DD054: mov -4(%ecx),%eax;");
    asm("loc_65DD057: test %al,%al;");
    asm("loc_65DD059: je loc_65DD07E;");
    asm("loc_65DD05B: test %ah,%ah;");
    asm("loc_65DD05D: je loc_65DD079;");
    asm("loc_65DD05F: test $0xFF0000,%eax;");
    asm("loc_65DD064: je loc_65DD074;");
    asm("loc_65DD066: test $0xFF000000,%eax;");
    asm("loc_65DD06B: je loc_65DD06F;");
    asm("loc_65DD06D: jmp loc_65DD03C;");
    asm("loc_65DD06F: lea -1(%ecx),%edi;");
    asm("loc_65DD072: jmp loc_65DD081;");
    asm("loc_65DD074: lea -2(%ecx),%edi;");
    asm("loc_65DD077: jmp loc_65DD081;");
    asm("loc_65DD079: lea -3(%ecx),%edi;");
    asm("loc_65DD07C: jmp loc_65DD081;");
    asm("loc_65DD07E: lea -4(%ecx),%edi;");
    asm("loc_65DD081: mov 0xC(%esp),%ecx;");
    asm("loc_65DD085: test $3,%ecx;");
    asm("loc_65DD08B: je loc_65DD0A6;");
    asm("loc_65DD08D: mov (%ecx),%dl;");
    asm("loc_65DD08F: inc %ecx;");
    asm("loc_65DD090: test %dl,%dl;");
    asm("loc_65DD092: je loc_65DD0F8;");
    asm("loc_65DD094: mov %dl,(%edi);");
    asm("loc_65DD096: inc %edi;");
    asm("loc_65DD097: test $3,%ecx;");
    asm("loc_65DD09D: jne loc_65DD08D;");
    asm("loc_65DD09F: jmp loc_65DD0A6;");
    asm("loc_65DD0A1: mov %edx,(%edi);");
    asm("loc_65DD0A3: add $4,%edi;");
    asm("loc_65DD0A6: mov $0x7EFEFEFF,%edx;");
    asm("loc_65DD0AB: mov (%ecx),%eax;");
    asm("loc_65DD0AD: add %eax,%edx;");
    asm("loc_65DD0AF: xor $0xFFFFFFFF,%eax;");
    asm("loc_65DD0B2: xor %edx,%eax;");
    asm("loc_65DD0B4: mov (%ecx),%edx;");
    asm("loc_65DD0B6: add $4,%ecx;");
    asm("loc_65DD0B9: test $0x81010100,%eax;");
    asm("loc_65DD0BE: je loc_65DD0A1;");
    asm("loc_65DD0C0: test %dl,%dl;");
    asm("loc_65DD0C2: je loc_65DD0F8;");
    asm("loc_65DD0C4: test %dh,%dh;");
    asm("loc_65DD0C6: je loc_65DD0EF;");
    asm("loc_65DD0C8: test $0xFF0000,%edx;");
    asm("loc_65DD0CE: je loc_65DD0E2;");
    asm("loc_65DD0D0: test $0xFF000000,%edx;");
    asm("loc_65DD0D6: je loc_65DD0DA;");
    asm("loc_65DD0D8: jmp loc_65DD0A1;");
    asm("loc_65DD0DA: mov %edx,(%edi);");
    asm("loc_65DD0DC: mov 8(%esp),%eax;");
    asm("loc_65DD0E0: pop %edi;");
    asm("loc_65DD0E1: ret;");
    asm("loc_65DD0E2: mov %dx,(%edi);");
    asm("loc_65DD0E5: mov 8(%esp),%eax;");
    asm("loc_65DD0E9: movb $0,2(%edi);");
    asm("loc_65DD0ED: pop %edi;");
    asm("loc_65DD0EE: ret;");
    asm("loc_65DD0EF: mov %dx,(%edi);");
    asm("loc_65DD0F2: mov 8(%esp),%eax;");
    asm("loc_65DD0F6: pop %edi;");
    asm("loc_65DD0F7: ret;");
    asm("loc_65DD0F8: mov %dl,(%edi);");
    asm("loc_65DD0FA: mov 8(%esp),%eax;");
    asm("loc_65DD0FE: pop %edi;");
    asm("loc_65DD0FF: ret;");
    // chunk 0x65DD010 _sub_65DD010
    asm("loc_65DD010: push %edi;");
    asm("loc_65DD011: mov 8(%esp),%edi;");
    asm("loc_65DD015: jmp loc_65DD081;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65DD100() // _strcmp
{
    __DEBUG_ASM(65DD100);
    // chunk 0x65DD100 _sub_65DD100
    asm("loc_65DD100: mov 4(%esp),%edx;");
    asm("loc_65DD104: mov 8(%esp),%ecx;");
    asm("loc_65DD108: test $3,%edx;");
    asm("loc_65DD10E: jne loc_65DD14C;");
    asm("loc_65DD110: mov (%edx),%eax;");
    asm("loc_65DD112: cmp (%ecx),%al;");
    asm("loc_65DD114: jne loc_65DD144;");
    asm("loc_65DD116: or %al,%al;");
    asm("loc_65DD118: je loc_65DD140;");
    asm("loc_65DD11A: cmp 1(%ecx),%ah;");
    asm("loc_65DD11D: jne loc_65DD144;");
    asm("loc_65DD11F: or %ah,%ah;");
    asm("loc_65DD121: je loc_65DD140;");
    asm("loc_65DD123: shr $0x10,%eax;");
    asm("loc_65DD126: cmp 2(%ecx),%al;");
    asm("loc_65DD129: jne loc_65DD144;");
    asm("loc_65DD12B: or %al,%al;");
    asm("loc_65DD12D: je loc_65DD140;");
    asm("loc_65DD12F: cmp 3(%ecx),%ah;");
    asm("loc_65DD132: jne loc_65DD144;");
    asm("loc_65DD134: add $4,%ecx;");
    asm("loc_65DD137: add $4,%edx;");
    asm("loc_65DD13A: or %ah,%ah;");
    asm("loc_65DD13C: jne loc_65DD110;");
    asm("loc_65DD13E: mov %edi,%edi;");
    asm("loc_65DD140: xor %eax,%eax;");
    asm("loc_65DD142: ret;");
    asm("loc_65DD143: nop;");
    asm("loc_65DD144: sbb %eax,%eax;");
    asm("loc_65DD146: shl $1,%eax;");
    asm("loc_65DD148: inc %eax;");
    asm("loc_65DD149: ret;");
    asm("loc_65DD14A: mov %edi,%edi;");
    asm("loc_65DD14C: test $1,%edx;");
    asm("loc_65DD152: je loc_65DD168;");
    asm("loc_65DD154: mov (%edx),%al;");
    asm("loc_65DD156: inc %edx;");
    asm("loc_65DD157: cmp (%ecx),%al;");
    asm("loc_65DD159: jne loc_65DD144;");
    asm("loc_65DD15B: inc %ecx;");
    asm("loc_65DD15C: or %al,%al;");
    asm("loc_65DD15E: je loc_65DD140;");
    asm("loc_65DD160: test $2,%edx;");
    asm("loc_65DD166: je loc_65DD110;");
    asm("loc_65DD168: mov (%edx),%ax;");
    asm("loc_65DD16B: add $2,%edx;");
    asm("loc_65DD16E: cmp (%ecx),%al;");
    asm("loc_65DD170: jne loc_65DD144;");
    asm("loc_65DD172: or %al,%al;");
    asm("loc_65DD174: je loc_65DD140;");
    asm("loc_65DD176: cmp 1(%ecx),%ah;");
    asm("loc_65DD179: jne loc_65DD144;");
    asm("loc_65DD17B: or %ah,%ah;");
    asm("loc_65DD17D: je loc_65DD140;");
    asm("loc_65DD17F: add $2,%ecx;");
    asm("loc_65DD182: jmp loc_65DD110;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65DD184() // ?__CxxUnhandledExceptionFilter@@YGJPAU_EXCEPTION_POINTERS@@@Z
{
    __DEBUG_ASM(65DD184);
    // chunk 0x65DD184 _sub_65DD184
    asm("loc_65DD184: push %esi;");
    asm("loc_65DD185: mov 8(%esp),%esi;");
    asm("loc_65DD189: mov (%esi),%eax;");
    asm("loc_65DD18B: cmpl $0xE06D7363,(%eax);");
    asm("loc_65DD191: jne loc_65DD1A7;");
    asm("loc_65DD193: cmpl $3,0x10(%eax);");
    asm("loc_65DD197: jne loc_65DD1A7;");
    asm("loc_65DD199: cmpl $0x19930520,0x14(%eax);");
    asm("loc_65DD1A0: jne loc_65DD1A7;");
    asm("loc_65DD1A2: jmp _sub_65D9068;");
    asm("loc_65DD1A7: mov _data_65E63D0,%eax;");
    asm("loc_65DD1AC: test %eax,%eax;");
    asm("loc_65DD1AE: je loc_65DD1C4;");
    asm("loc_65DD1B0: push %eax;");
    asm("loc_65DD1B1: call _sub_65DD23B;");
    asm("loc_65DD1B6: test %eax,%eax;");
    asm("loc_65DD1B8: pop %ecx;");
    asm("loc_65DD1B9: je loc_65DD1C4;");
    asm("loc_65DD1BB: push %esi;");
    asm("loc_65DD1BC: calll *_data_65E63D0;");
    asm("loc_65DD1C2: jmp loc_65DD1C6;");
    asm("loc_65DD1C4: xor %eax,%eax;");
    asm("loc_65DD1C6: pop %esi;");
    asm("loc_65DD1C7: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65DD1CA() // _sub_65DD1CA
{
    __DEBUG_ASM(65DD1CA);
    // chunk 0x65DD1CA _sub_65DD1CA
    asm("loc_65DD1CA: push $_sub_65DD184;");
    asm("loc_65DD1CF: calll *_import_65E10EC;");
    asm("loc_65DD1D5: mov %eax,_data_65E63D0;");
    asm("loc_65DD1DA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65DD1DB() // _sub_65DD1DB
{
    __DEBUG_ASM(65DD1DB);
    // chunk 0x65DD1DB _sub_65DD1DB
    asm("loc_65DD1DB: pushl _data_65E63D0;");
    asm("loc_65DD1E1: calll *_import_65E10EC;");
    asm("loc_65DD1E7: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65DD1E8() // __callnewh
{
    __DEBUG_ASM(65DD1E8);
    // chunk 0x65DD1E8 _sub_65DD1E8
    asm("loc_65DD1E8: mov _data_65E63D8,%eax;");
    asm("loc_65DD1ED: test %eax,%eax;");
    asm("loc_65DD1EF: je loc_65DD200;");
    asm("loc_65DD1F1: pushl 4(%esp);");
    asm("loc_65DD1F5: call *%eax;");
    asm("loc_65DD1F7: test %eax,%eax;");
    asm("loc_65DD1F9: pop %ecx;");
    asm("loc_65DD1FA: je loc_65DD200;");
    asm("loc_65DD1FC: push $1;");
    asm("loc_65DD1FE: pop %eax;");
    asm("loc_65DD1FF: ret;");
    asm("loc_65DD200: xor %eax,%eax;");
    asm("loc_65DD202: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65DD203() // ?_ValidateRead@@YAHPBXI@Z
{
    __DEBUG_ASM(65DD203);
    // chunk 0x65DD203 _sub_65DD203
    asm("loc_65DD203: push %esi;");
    asm("loc_65DD204: push $1;");
    asm("loc_65DD206: pop %esi;");
    asm("loc_65DD207: pushl 0xC(%esp);");
    asm("loc_65DD20B: pushl 0xC(%esp);");
    asm("loc_65DD20F: calll *_import_65E10F0;");
    asm("loc_65DD215: test %eax,%eax;");
    asm("loc_65DD217: je loc_65DD21B;");
    asm("loc_65DD219: xor %esi,%esi;");
    asm("loc_65DD21B: mov %esi,%eax;");
    asm("loc_65DD21D: pop %esi;");
    asm("loc_65DD21E: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65DD21F() // ?_ValidateWrite@@YAHPAXI@Z
{
    __DEBUG_ASM(65DD21F);
    // chunk 0x65DD21F _sub_65DD21F
    asm("loc_65DD21F: push %esi;");
    asm("loc_65DD220: push $1;");
    asm("loc_65DD222: pop %esi;");
    asm("loc_65DD223: pushl 0xC(%esp);");
    asm("loc_65DD227: pushl 0xC(%esp);");
    asm("loc_65DD22B: calll *_import_65E10D8;");
    asm("loc_65DD231: test %eax,%eax;");
    asm("loc_65DD233: je loc_65DD237;");
    asm("loc_65DD235: xor %esi,%esi;");
    asm("loc_65DD237: mov %esi,%eax;");
    asm("loc_65DD239: pop %esi;");
    asm("loc_65DD23A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65DD23B() // ?_ValidateExecute@@YAHP6GHXZ@Z
{
    __DEBUG_ASM(65DD23B);
    // chunk 0x65DD23B _sub_65DD23B
    asm("loc_65DD23B: push %esi;");
    asm("loc_65DD23C: push $1;");
    asm("loc_65DD23E: pop %esi;");
    asm("loc_65DD23F: pushl 8(%esp);");
    asm("loc_65DD243: calll *_import_65E10F4;");
    asm("loc_65DD249: test %eax,%eax;");
    asm("loc_65DD24B: je loc_65DD24F;");
    asm("loc_65DD24D: xor %esi,%esi;");
    asm("loc_65DD24F: mov %esi,%eax;");
    asm("loc_65DD251: pop %esi;");
    asm("loc_65DD252: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65DD253() // _sub_65DD253
{
    __DEBUG_ASM(65DD253);
    // chunk 0x65DD253 _sub_65DD253
    asm("loc_65DD253: push %ebp;");
    asm("loc_65DD254: mov %esp,%ebp;");
    asm("loc_65DD256: push $0xFFFFFFFF;");
    asm("loc_65DD258: push $_data_65E1AB8;");
    asm("loc_65DD25D: push $_sub_65DCF2C;");
    asm("loc_65DD262: mov %fs:0,%eax;");
    asm("loc_65DD268: push %eax;");
    asm("loc_65DD269: mov %esp,%fs:0;");
    asm("loc_65DD270: sub $0x18,%esp;");
    asm("loc_65DD273: push %ebx;");
    asm("loc_65DD274: push %esi;");
    asm("loc_65DD275: push %edi;");
    asm("loc_65DD276: mov 8(%ebp),%esi;");
    asm("loc_65DD279: imul 0xC(%ebp),%esi;");
    asm("loc_65DD27D: mov %esi,0xC(%ebp);");
    asm("loc_65DD280: mov %esi,-0x1C(%ebp);");
    asm("loc_65DD283: cmp $0xFFFFFFE0,%esi;");
    asm("loc_65DD286: ja loc_65DD29C;");
    asm("loc_65DD288: xor %ebx,%ebx;");
    asm("loc_65DD28A: cmp %ebx,%esi;");
    asm("loc_65DD28C: jne loc_65DD291;");
    asm("loc_65DD28E: push $1;");
    asm("loc_65DD290: pop %esi;");
    asm("loc_65DD291: add $0xF,%esi;");
    asm("loc_65DD294: and $0xFFFFFFF0,%esi;");
    asm("loc_65DD297: mov %esi,0xC(%ebp);");
    asm("loc_65DD29A: jmp loc_65DD29E;");
    asm("loc_65DD29C: xor %ebx,%ebx;");
    asm("loc_65DD29E: mov %ebx,-0x20(%ebp);");
    asm("loc_65DD2A1: cmp $0xFFFFFFE0,%esi;");
    asm("loc_65DD2A4: ja loc_65DD352;");
    asm("loc_65DD2AA: mov _data_65E7924,%eax;");
    asm("loc_65DD2AF: cmp $3,%eax;");
    asm("loc_65DD2B2: jne loc_65DD2F5;");
    asm("loc_65DD2B4: mov -0x1C(%ebp),%edi;");
    asm("loc_65DD2B7: cmp _data_65E791C,%edi;");
    asm("loc_65DD2BD: ja loc_65DD33B;");
    asm("loc_65DD2BF: push $9;");
    asm("loc_65DD2C1: call _sub_65DCEAB;");
    asm("loc_65DD2C6: pop %ecx;");
    asm("loc_65DD2C7: mov %ebx,-4(%ebp);");
    asm("loc_65DD2CA: push %edi;");
    asm("loc_65DD2CB: call _sub_65DBF9E;");
    asm("loc_65DD2D0: pop %ecx;");
    asm("loc_65DD2D1: mov %eax,-0x20(%ebp);");
    asm("loc_65DD2D4: orl $0xFFFFFFFF,-4(%ebp);");
    asm("loc_65DD2D8: call loc_65DD2EC;");
    asm("loc_65DD2DD: cmp %ebx,-0x20(%ebp);");
    asm("loc_65DD2E0: je loc_65DD340;");
    asm("loc_65DD2E2: pushl -0x1C(%ebp);");
    asm("loc_65DD2E5: jmp loc_65DD32F;");
    asm("loc_65DD2E7: xor %ebx,%ebx;");
    asm("loc_65DD2E9: mov 0xC(%ebp),%esi;");
    asm("loc_65DD2EC: push $9;");
    asm("loc_65DD2EE: call _sub_65DCF0C;");
    asm("loc_65DD2F3: pop %ecx;");
    asm("loc_65DD2F4: ret;");
    asm("loc_65DD2F5: cmp $2,%eax;");
    asm("loc_65DD2F8: jne loc_65DD33B;");
    asm("loc_65DD2FA: cmp _data_65E55EC,%esi;");
    asm("loc_65DD300: ja loc_65DD33B;");
    asm("loc_65DD302: push $9;");
    asm("loc_65DD304: call _sub_65DCEAB;");
    asm("loc_65DD309: pop %ecx;");
    asm("loc_65DD30A: movl $1,-4(%ebp);");
    asm("loc_65DD311: mov %esi,%eax;");
    asm("loc_65DD313: shr $4,%eax;");
    asm("loc_65DD316: push %eax;");
    asm("loc_65DD317: call _sub_65DCA41;");
    asm("loc_65DD31C: pop %ecx;");
    asm("loc_65DD31D: mov %eax,-0x20(%ebp);");
    asm("loc_65DD320: orl $0xFFFFFFFF,-4(%ebp);");
    asm("loc_65DD324: call loc_65DD375;");
    asm("loc_65DD329: cmp %ebx,-0x20(%ebp);");
    asm("loc_65DD32C: je loc_65DD340;");
    asm("loc_65DD32E: push %esi;");
    asm("loc_65DD32F: push %ebx;");
    asm("loc_65DD330: pushl -0x20(%ebp);");
    asm("loc_65DD333: call _sub_65DDB10;");
    asm("loc_65DD338: add $0xC,%esp;");
    asm("loc_65DD33B: cmp %ebx,-0x20(%ebp);");
    asm("loc_65DD33E: jne loc_65DD37E;");
    asm("loc_65DD340: push %esi;");
    asm("loc_65DD341: push $8;");
    asm("loc_65DD343: pushl _data_65E7920;");
    asm("loc_65DD349: calll *_import_65E1060;");
    asm("loc_65DD34F: mov %eax,-0x20(%ebp);");
    asm("loc_65DD352: cmp %ebx,-0x20(%ebp);");
    asm("loc_65DD355: jne loc_65DD37E;");
    asm("loc_65DD357: cmp %ebx,_data_65E63D4;");
    asm("loc_65DD35D: je loc_65DD37E;");
    asm("loc_65DD35F: push %esi;");
    asm("loc_65DD360: call _sub_65DD1E8;");
    asm("loc_65DD365: pop %ecx;");
    asm("loc_65DD366: test %eax,%eax;");
    asm("loc_65DD368: jne loc_65DD29E;");
    asm("loc_65DD36E: jmp loc_65DD381;");
    asm("loc_65DD370: xor %ebx,%ebx;");
    asm("loc_65DD372: mov 0xC(%ebp),%esi;");
    asm("loc_65DD375: push $9;");
    asm("loc_65DD377: call _sub_65DCF0C;");
    asm("loc_65DD37C: pop %ecx;");
    asm("loc_65DD37D: ret;");
    asm("loc_65DD37E: mov -0x20(%ebp),%eax;");
    asm("loc_65DD381: mov -0x10(%ebp),%ecx;");
    asm("loc_65DD384: mov %ecx,%fs:0;");
    asm("loc_65DD38B: pop %edi;");
    asm("loc_65DD38C: pop %esi;");
    asm("loc_65DD38D: pop %ebx;");
    asm("loc_65DD38E: leave;");
    asm("loc_65DD38F: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65DD3A7() // __lseek
{
    __DEBUG_ASM(65DD3A7);
    // chunk 0x65DD3A7 _sub_65DD3A7
    asm("loc_65DD3A7: push %esi;");
    asm("loc_65DD3A8: mov 8(%esp),%esi;");
    asm("loc_65DD3AC: cmp _data_65E7A40,%esi;");
    asm("loc_65DD3B2: jae loc_65DD3F4;");
    asm("loc_65DD3B4: mov %esi,%ecx;");
    asm("loc_65DD3B6: mov %esi,%eax;");
    asm("loc_65DD3B8: sar $5,%ecx;");
    asm("loc_65DD3BB: and $0x1F,%eax;");
    asm("loc_65DD3BE: mov _data_65E7940(,%ecx,4),%ecx;");
    asm("loc_65DD3C5: lea (%eax,%eax,8),%eax;");
    asm("loc_65DD3C8: testb $1,4(%ecx,%eax,4);");
    asm("loc_65DD3CD: je loc_65DD3F4;");
    asm("loc_65DD3CF: push %edi;");
    asm("loc_65DD3D0: push %esi;");
    asm("loc_65DD3D1: call _sub_65DE95D;");
    asm("loc_65DD3D6: pushl 0x18(%esp);");
    asm("loc_65DD3DA: pushl 0x18(%esp);");
    asm("loc_65DD3DE: push %esi;");
    asm("loc_65DD3DF: call _sub_65DD40C;");
    asm("loc_65DD3E4: push %esi;");
    asm("loc_65DD3E5: mov %eax,%edi;");
    asm("loc_65DD3E7: call _sub_65DE9BC;");
    asm("loc_65DD3EC: add $0x14,%esp;");
    asm("loc_65DD3EF: mov %edi,%eax;");
    asm("loc_65DD3F1: pop %edi;");
    asm("loc_65DD3F2: pop %esi;");
    asm("loc_65DD3F3: ret;");
    asm("loc_65DD3F4: call _sub_65DE88A;");
    asm("loc_65DD3F9: movl $9,(%eax);");
    asm("loc_65DD3FF: call _sub_65DE893;");
    asm("loc_65DD404: andl $0,(%eax);");
    asm("loc_65DD407: or $0xFFFFFFFF,%eax;");
    asm("loc_65DD40A: pop %esi;");
    asm("loc_65DD40B: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65DD40C() // __lseek_lk
{
    __DEBUG_ASM(65DD40C);
    // chunk 0x65DD40C _sub_65DD40C
    asm("loc_65DD40C: push %esi;");
    asm("loc_65DD40D: mov 8(%esp),%esi;");
    asm("loc_65DD411: push %edi;");
    asm("loc_65DD412: push %esi;");
    asm("loc_65DD413: call _sub_65DE91B;");
    asm("loc_65DD418: cmp $0xFFFFFFFF,%eax;");
    asm("loc_65DD41B: pop %ecx;");
    asm("loc_65DD41C: jne loc_65DD42B;");
    asm("loc_65DD41E: call _sub_65DE88A;");
    asm("loc_65DD423: movl $9,(%eax);");
    asm("loc_65DD429: jmp loc_65DD458;");
    asm("loc_65DD42B: pushl 0x14(%esp);");
    asm("loc_65DD42F: push $0;");
    asm("loc_65DD431: pushl 0x18(%esp);");
    asm("loc_65DD435: push %eax;");
    asm("loc_65DD436: calll *_import_65E10F8;");
    asm("loc_65DD43C: mov %eax,%edi;");
    asm("loc_65DD43E: cmp $0xFFFFFFFF,%edi;");
    asm("loc_65DD441: jne loc_65DD44B;");
    asm("loc_65DD443: calll *_import_65E107C;");
    asm("loc_65DD449: jmp loc_65DD44D;");
    asm("loc_65DD44B: xor %eax,%eax;");
    asm("loc_65DD44D: test %eax,%eax;");
    asm("loc_65DD44F: je loc_65DD45D;");
    asm("loc_65DD451: push %eax;");
    asm("loc_65DD452: call _sub_65DE817;");
    asm("loc_65DD457: pop %ecx;");
    asm("loc_65DD458: or $0xFFFFFFFF,%eax;");
    asm("loc_65DD45B: jmp loc_65DD47C;");
    asm("loc_65DD45D: mov %esi,%ecx;");
    asm("loc_65DD45F: and $0x1F,%esi;");
    asm("loc_65DD462: sar $5,%ecx;");
    asm("loc_65DD465: mov %esi,%eax;");
    asm("loc_65DD467: mov _data_65E7940(,%ecx,4),%ecx;");
    asm("loc_65DD46E: lea (%eax,%eax,8),%eax;");
    asm("loc_65DD471: andb $0xFD,4(%ecx,%eax,4);");
    asm("loc_65DD476: lea 4(%ecx,%eax,4),%eax;");
    asm("loc_65DD47A: mov %edi,%eax;");
    asm("loc_65DD47C: pop %edi;");
    asm("loc_65DD47D: pop %esi;");
    asm("loc_65DD47E: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65DD47F() // __write
{
    __DEBUG_ASM(65DD47F);
    // chunk 0x65DD47F _sub_65DD47F
    asm("loc_65DD47F: push %esi;");
    asm("loc_65DD480: mov 8(%esp),%esi;");
    asm("loc_65DD484: cmp _data_65E7A40,%esi;");
    asm("loc_65DD48A: jae loc_65DD4CC;");
    asm("loc_65DD48C: mov %esi,%ecx;");
    asm("loc_65DD48E: mov %esi,%eax;");
    asm("loc_65DD490: sar $5,%ecx;");
    asm("loc_65DD493: and $0x1F,%eax;");
    asm("loc_65DD496: mov _data_65E7940(,%ecx,4),%ecx;");
    asm("loc_65DD49D: lea (%eax,%eax,8),%eax;");
    asm("loc_65DD4A0: testb $1,4(%ecx,%eax,4);");
    asm("loc_65DD4A5: je loc_65DD4CC;");
    asm("loc_65DD4A7: push %edi;");
    asm("loc_65DD4A8: push %esi;");
    asm("loc_65DD4A9: call _sub_65DE95D;");
    asm("loc_65DD4AE: pushl 0x18(%esp);");
    asm("loc_65DD4B2: pushl 0x18(%esp);");
    asm("loc_65DD4B6: push %esi;");
    asm("loc_65DD4B7: call _sub_65DD4E4;");
    asm("loc_65DD4BC: push %esi;");
    asm("loc_65DD4BD: mov %eax,%edi;");
    asm("loc_65DD4BF: call _sub_65DE9BC;");
    asm("loc_65DD4C4: add $0x14,%esp;");
    asm("loc_65DD4C7: mov %edi,%eax;");
    asm("loc_65DD4C9: pop %edi;");
    asm("loc_65DD4CA: pop %esi;");
    asm("loc_65DD4CB: ret;");
    asm("loc_65DD4CC: call _sub_65DE88A;");
    asm("loc_65DD4D1: movl $9,(%eax);");
    asm("loc_65DD4D7: call _sub_65DE893;");
    asm("loc_65DD4DC: andl $0,(%eax);");
    asm("loc_65DD4DF: or $0xFFFFFFFF,%eax;");
    asm("loc_65DD4E2: pop %esi;");
    asm("loc_65DD4E3: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65DD4E4() // __write_lk
{
    __DEBUG_ASM(65DD4E4);
    // chunk 0x65DD4E4 _sub_65DD4E4
    asm("loc_65DD4E4: push %ebp;");
    asm("loc_65DD4E5: mov %esp,%ebp;");
    asm("loc_65DD4E7: sub $0x414,%esp;");
    asm("loc_65DD4ED: push %ebx;");
    asm("loc_65DD4EE: push %esi;");
    asm("loc_65DD4EF: push %edi;");
    asm("loc_65DD4F0: xor %edi,%edi;");
    asm("loc_65DD4F2: cmp %edi,0x10(%ebp);");
    asm("loc_65DD4F5: mov %edi,-8(%ebp);");
    asm("loc_65DD4F8: mov %edi,-0x10(%ebp);");
    asm("loc_65DD4FB: jne loc_65DD504;");
    asm("loc_65DD4FD: xor %eax,%eax;");
    asm("loc_65DD4FF: jmp loc_65DD66A;");
    asm("loc_65DD504: mov 8(%ebp),%eax;");
    asm("loc_65DD507: sar $5,%eax;");
    asm("loc_65DD50A: lea _data_65E7940(,%eax,4),%ebx;");
    asm("loc_65DD511: mov 8(%ebp),%eax;");
    asm("loc_65DD514: and $0x1F,%eax;");
    asm("loc_65DD517: lea (%eax,%eax,8),%esi;");
    asm("loc_65DD51A: mov (%ebx),%eax;");
    asm("loc_65DD51C: shl $2,%esi;");
    asm("loc_65DD51F: testb $0x20,4(%eax,%esi);");
    asm("loc_65DD524: je loc_65DD534;");
    asm("loc_65DD526: push $2;");
    asm("loc_65DD528: push %edi;");
    asm("loc_65DD529: pushl 8(%ebp);");
    asm("loc_65DD52C: call _sub_65DD40C;");
    asm("loc_65DD531: add $0xC,%esp;");
    asm("loc_65DD534: mov (%ebx),%eax;");
    asm("loc_65DD536: add %esi,%eax;");
    asm("loc_65DD538: testb $0x80,4(%eax);");
    asm("loc_65DD53C: je loc_65DD603;");
    asm("loc_65DD542: mov 0xC(%ebp),%eax;");
    asm("loc_65DD545: cmp %edi,0x10(%ebp);");
    asm("loc_65DD548: mov %eax,-4(%ebp);");
    asm("loc_65DD54B: mov %edi,8(%ebp);");
    asm("loc_65DD54E: jbe loc_65DD63E;");
    asm("loc_65DD554: lea -0x414(%ebp),%eax;");
    asm("loc_65DD55A: mov -4(%ebp),%ecx;");
    asm("loc_65DD55D: sub 0xC(%ebp),%ecx;");
    asm("loc_65DD560: cmp 0x10(%ebp),%ecx;");
    asm("loc_65DD563: jae loc_65DD58E;");
    asm("loc_65DD565: mov -4(%ebp),%ecx;");
    asm("loc_65DD568: incl -4(%ebp);");
    asm("loc_65DD56B: mov (%ecx),%cl;");
    asm("loc_65DD56D: cmp $0xA,%cl;");
    asm("loc_65DD570: jne loc_65DD579;");
    asm("loc_65DD572: incl -0x10(%ebp);");
    asm("loc_65DD575: movb $0xD,(%eax);");
    asm("loc_65DD578: inc %eax;");
    asm("loc_65DD579: mov %cl,(%eax);");
    asm("loc_65DD57B: inc %eax;");
    asm("loc_65DD57C: mov %eax,%ecx;");
    asm("loc_65DD57E: lea -0x414(%ebp),%edx;");
    asm("loc_65DD584: sub %edx,%ecx;");
    asm("loc_65DD586: cmp $0x400,%ecx;");
    asm("loc_65DD58C: jl loc_65DD55A;");
    asm("loc_65DD58E: mov %eax,%edi;");
    asm("loc_65DD590: lea -0x414(%ebp),%eax;");
    asm("loc_65DD596: sub %eax,%edi;");
    asm("loc_65DD598: lea -0xC(%ebp),%eax;");
    asm("loc_65DD59B: push $0;");
    asm("loc_65DD59D: push %eax;");
    asm("loc_65DD59E: lea -0x414(%ebp),%eax;");
    asm("loc_65DD5A4: push %edi;");
    asm("loc_65DD5A5: push %eax;");
    asm("loc_65DD5A6: mov (%ebx),%eax;");
    asm("loc_65DD5A8: pushl (%eax,%esi);");
    asm("loc_65DD5AB: calll *_import_65E10D0;");
    asm("loc_65DD5B1: test %eax,%eax;");
    asm("loc_65DD5B3: je loc_65DD5F8;");
    asm("loc_65DD5B5: mov -0xC(%ebp),%eax;");
    asm("loc_65DD5B8: add %eax,-8(%ebp);");
    asm("loc_65DD5BB: cmp %edi,%eax;");
    asm("loc_65DD5BD: jl loc_65DD5CA;");
    asm("loc_65DD5BF: mov -4(%ebp),%eax;");
    asm("loc_65DD5C2: sub 0xC(%ebp),%eax;");
    asm("loc_65DD5C5: cmp 0x10(%ebp),%eax;");
    asm("loc_65DD5C8: jb loc_65DD554;");
    asm("loc_65DD5CA: xor %edi,%edi;");
    asm("loc_65DD5CC: mov -8(%ebp),%eax;");
    asm("loc_65DD5CF: cmp %edi,%eax;");
    asm("loc_65DD5D1: jne loc_65DD667;");
    asm("loc_65DD5D7: cmp %edi,8(%ebp);");
    asm("loc_65DD5DA: je loc_65DD63E;");
    asm("loc_65DD5DC: push $5;");
    asm("loc_65DD5DE: pop %esi;");
    asm("loc_65DD5DF: cmp %esi,8(%ebp);");
    asm("loc_65DD5E2: jne loc_65DD630;");
    asm("loc_65DD5E4: call _sub_65DE88A;");
    asm("loc_65DD5E9: movl $9,(%eax);");
    asm("loc_65DD5EF: call _sub_65DE893;");
    asm("loc_65DD5F4: mov %esi,(%eax);");
    asm("loc_65DD5F6: jmp loc_65DD639;");
    asm("loc_65DD5F8: calll *_import_65E107C;");
    asm("loc_65DD5FE: mov %eax,8(%ebp);");
    asm("loc_65DD601: jmp loc_65DD5CA;");
    asm("loc_65DD603: lea -0xC(%ebp),%ecx;");
    asm("loc_65DD606: push %edi;");
    asm("loc_65DD607: push %ecx;");
    asm("loc_65DD608: pushl 0x10(%ebp);");
    asm("loc_65DD60B: pushl 0xC(%ebp);");
    asm("loc_65DD60E: pushl (%eax);");
    asm("loc_65DD610: calll *_import_65E10D0;");
    asm("loc_65DD616: test %eax,%eax;");
    asm("loc_65DD618: je loc_65DD625;");
    asm("loc_65DD61A: mov -0xC(%ebp),%eax;");
    asm("loc_65DD61D: mov %edi,8(%ebp);");
    asm("loc_65DD620: mov %eax,-8(%ebp);");
    asm("loc_65DD623: jmp loc_65DD5CC;");
    asm("loc_65DD625: calll *_import_65E107C;");
    asm("loc_65DD62B: mov %eax,8(%ebp);");
    asm("loc_65DD62E: jmp loc_65DD5CC;");
    asm("loc_65DD630: pushl 8(%ebp);");
    asm("loc_65DD633: call _sub_65DE817;");
    asm("loc_65DD638: pop %ecx;");
    asm("loc_65DD639: or $0xFFFFFFFF,%eax;");
    asm("loc_65DD63C: jmp loc_65DD66A;");
    asm("loc_65DD63E: mov (%ebx),%eax;");
    asm("loc_65DD640: testb $0x40,4(%eax,%esi);");
    asm("loc_65DD645: je loc_65DD653;");
    asm("loc_65DD647: mov 0xC(%ebp),%eax;");
    asm("loc_65DD64A: cmpb $0x1A,(%eax);");
    asm("loc_65DD64D: je loc_65DD4FD;");
    asm("loc_65DD653: call _sub_65DE88A;");
    asm("loc_65DD658: movl $0x1C,(%eax);");
    asm("loc_65DD65E: call _sub_65DE893;");
    asm("loc_65DD663: mov %edi,(%eax);");
    asm("loc_65DD665: jmp loc_65DD639;");
    asm("loc_65DD667: sub -0x10(%ebp),%eax;");
    asm("loc_65DD66A: pop %edi;");
    asm("loc_65DD66B: pop %esi;");
    asm("loc_65DD66C: pop %ebx;");
    asm("loc_65DD66D: leave;");
    asm("loc_65DD66E: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65DD66F() // __getbuf
{
    __DEBUG_ASM(65DD66F);
    // chunk 0x65DD66F _sub_65DD66F
    asm("loc_65DD66F: incl _data_65E63DC;");
    asm("loc_65DD675: push $0x1000;");
    asm("loc_65DD67A: call _sub_65D8535;");
    asm("loc_65DD67F: pop %ecx;");
    asm("loc_65DD680: mov 4(%esp),%ecx;");
    asm("loc_65DD684: test %eax,%eax;");
    asm("loc_65DD686: mov %eax,8(%ecx);");
    asm("loc_65DD689: je loc_65DD698;");
    asm("loc_65DD68B: orl $8,0xC(%ecx);");
    asm("loc_65DD68F: movl $0x1000,0x18(%ecx);");
    asm("loc_65DD696: jmp loc_65DD6A9;");
    asm("loc_65DD698: orl $4,0xC(%ecx);");
    asm("loc_65DD69C: lea 0x14(%ecx),%eax;");
    asm("loc_65DD69F: mov %eax,8(%ecx);");
    asm("loc_65DD6A2: movl $2,0x18(%ecx);");
    asm("loc_65DD6A9: mov 8(%ecx),%eax;");
    asm("loc_65DD6AC: andl $0,4(%ecx);");
    asm("loc_65DD6B0: mov %eax,(%ecx);");
    asm("loc_65DD6B2: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65DD6B3() // __isatty
{
    __DEBUG_ASM(65DD6B3);
    // chunk 0x65DD6B3 _sub_65DD6B3
    asm("loc_65DD6B3: mov 4(%esp),%eax;");
    asm("loc_65DD6B7: cmp _data_65E7A40,%eax;");
    asm("loc_65DD6BD: jb loc_65DD6C2;");
    asm("loc_65DD6BF: xor %eax,%eax;");
    asm("loc_65DD6C1: ret;");
    asm("loc_65DD6C2: mov %eax,%ecx;");
    asm("loc_65DD6C4: and $0x1F,%eax;");
    asm("loc_65DD6C7: sar $5,%ecx;");
    asm("loc_65DD6CA: lea (%eax,%eax,8),%eax;");
    asm("loc_65DD6CD: mov _data_65E7940(,%ecx,4),%ecx;");
    asm("loc_65DD6D4: mov 4(%ecx,%eax,4),%al;");
    asm("loc_65DD6D8: and $0x40,%eax;");
    asm("loc_65DD6DB: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65DD6DC() // ___initstdio
{
    __DEBUG_ASM(65DD6DC);
    // chunk 0x65DD6DC _sub_65DD6DC
    asm("loc_65DD6DC: mov _data_65E7900,%eax;");
    asm("loc_65DD6E1: push %esi;");
    asm("loc_65DD6E2: push $0x14;");
    asm("loc_65DD6E4: test %eax,%eax;");
    asm("loc_65DD6E6: pop %esi;");
    asm("loc_65DD6E7: jne loc_65DD6F0;");
    asm("loc_65DD6E9: mov $0x200,%eax;");
    asm("loc_65DD6EE: jmp loc_65DD6F6;");
    asm("loc_65DD6F0: cmp %esi,%eax;");
    asm("loc_65DD6F2: jge loc_65DD6FB;");
    asm("loc_65DD6F4: mov %esi,%eax;");
    asm("loc_65DD6F6: mov %eax,_data_65E7900;");
    asm("loc_65DD6FB: push $4;");
    asm("loc_65DD6FD: push %eax;");
    asm("loc_65DD6FE: call _sub_65DD253;");
    asm("loc_65DD703: pop %ecx;");
    asm("loc_65DD704: mov %eax,_data_65E68E8;");
    asm("loc_65DD709: test %eax,%eax;");
    asm("loc_65DD70B: pop %ecx;");
    asm("loc_65DD70C: jne loc_65DD72F;");
    asm("loc_65DD70E: push $4;");
    asm("loc_65DD710: push %esi;");
    asm("loc_65DD711: mov %esi,_data_65E7900;");
    asm("loc_65DD717: call _sub_65DD253;");
    asm("loc_65DD71C: pop %ecx;");
    asm("loc_65DD71D: mov %eax,_data_65E68E8;");
    asm("loc_65DD722: test %eax,%eax;");
    asm("loc_65DD724: pop %ecx;");
    asm("loc_65DD725: jne loc_65DD72F;");
    asm("loc_65DD727: push $0x1A;");
    asm("loc_65DD729: call _sub_65D7EF0;");
    asm("loc_65DD72E: pop %ecx;");
    asm("loc_65DD72F: xor %ecx,%ecx;");
    asm("loc_65DD731: mov $_off_65E5738,%eax;");
    asm("loc_65DD736: mov _data_65E68E8,%edx;");
    asm("loc_65DD73C: mov %eax,(%ecx,%edx);");
    asm("loc_65DD73F: add $0x20,%eax;");
    asm("loc_65DD742: add $4,%ecx;");
    asm("loc_65DD745: cmp $_off_65E59B8,%eax;");
    asm("loc_65DD74A: jl loc_65DD736;");
    asm("loc_65DD74C: xor %ecx,%ecx;");
    asm("loc_65DD74E: mov $_data_65E5748,%edx;");
    asm("loc_65DD753: mov %ecx,%esi;");
    asm("loc_65DD755: mov %ecx,%eax;");
    asm("loc_65DD757: sar $5,%esi;");
    asm("loc_65DD75A: and $0x1F,%eax;");
    asm("loc_65DD75D: mov _data_65E7940(,%esi,4),%esi;");
    asm("loc_65DD764: lea (%eax,%eax,8),%eax;");
    asm("loc_65DD767: mov (%esi,%eax,4),%eax;");
    asm("loc_65DD76A: cmp $0xFFFFFFFF,%eax;");
    asm("loc_65DD76D: je loc_65DD773;");
    asm("loc_65DD76F: test %eax,%eax;");
    asm("loc_65DD771: jne loc_65DD776;");
    asm("loc_65DD773: orl $0xFFFFFFFF,(%edx);");
    asm("loc_65DD776: add $0x20,%edx;");
    asm("loc_65DD779: inc %ecx;");
    asm("loc_65DD77A: cmp $_data_65E57A8,%edx;");
    asm("loc_65DD780: jl loc_65DD753;");
    asm("loc_65DD782: pop %esi;");
    asm("loc_65DD783: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65DD784() // ___endstdio
{
    __DEBUG_ASM(65DD784);
    // chunk 0x65DD784 _sub_65DD784
    asm("loc_65DD784: call _sub_65DEAE9;");
    asm("loc_65DD789: cmpb $0,_data_65E616C;");
    asm("loc_65DD790: je loc_65DD797;");
    asm("loc_65DD792: jmp _sub_65DE9DE;");
    asm("loc_65DD797: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65DD798() // __lock_file
{
    __DEBUG_ASM(65DD798);
    // chunk 0x65DD798 _sub_65DD798
    asm("loc_65DD798: mov 4(%esp),%eax;");
    asm("loc_65DD79C: mov $_off_65E5738,%ecx;");
    asm("loc_65DD7A1: cmp %ecx,%eax;");
    asm("loc_65DD7A3: jb loc_65DD7BC;");
    asm("loc_65DD7A5: cmp $_data_65E5998,%eax;");
    asm("loc_65DD7AA: ja loc_65DD7BC;");
    asm("loc_65DD7AC: sub %ecx,%eax;");
    asm("loc_65DD7AE: sar $5,%eax;");
    asm("loc_65DD7B1: add $0x1C,%eax;");
    asm("loc_65DD7B4: push %eax;");
    asm("loc_65DD7B5: call _sub_65DCEAB;");
    asm("loc_65DD7BA: pop %ecx;");
    asm("loc_65DD7BB: ret;");
    asm("loc_65DD7BC: add $0x20,%eax;");
    asm("loc_65DD7BF: push %eax;");
    asm("loc_65DD7C0: calll *_import_65E10E0;");
    asm("loc_65DD7C6: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65DD7C7() // __lock_file2
{
    __DEBUG_ASM(65DD7C7);
    // chunk 0x65DD7C7 _sub_65DD7C7
    asm("loc_65DD7C7: mov 4(%esp),%eax;");
    asm("loc_65DD7CB: cmp $0x14,%eax;");
    asm("loc_65DD7CE: jge loc_65DD7DB;");
    asm("loc_65DD7D0: add $0x1C,%eax;");
    asm("loc_65DD7D3: push %eax;");
    asm("loc_65DD7D4: call _sub_65DCEAB;");
    asm("loc_65DD7D9: pop %ecx;");
    asm("loc_65DD7DA: ret;");
    asm("loc_65DD7DB: mov 8(%esp),%eax;");
    asm("loc_65DD7DF: add $0x20,%eax;");
    asm("loc_65DD7E2: push %eax;");
    asm("loc_65DD7E3: calll *_import_65E10E0;");
    asm("loc_65DD7E9: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65DD7EA() // __unlock_file
{
    __DEBUG_ASM(65DD7EA);
    // chunk 0x65DD7EA _sub_65DD7EA
    asm("loc_65DD7EA: mov 4(%esp),%eax;");
    asm("loc_65DD7EE: mov $_off_65E5738,%ecx;");
    asm("loc_65DD7F3: cmp %ecx,%eax;");
    asm("loc_65DD7F5: jb loc_65DD80E;");
    asm("loc_65DD7F7: cmp $_data_65E5998,%eax;");
    asm("loc_65DD7FC: ja loc_65DD80E;");
    asm("loc_65DD7FE: sub %ecx,%eax;");
    asm("loc_65DD800: sar $5,%eax;");
    asm("loc_65DD803: add $0x1C,%eax;");
    asm("loc_65DD806: push %eax;");
    asm("loc_65DD807: call _sub_65DCF0C;");
    asm("loc_65DD80C: pop %ecx;");
    asm("loc_65DD80D: ret;");
    asm("loc_65DD80E: add $0x20,%eax;");
    asm("loc_65DD811: push %eax;");
    asm("loc_65DD812: calll *_import_65E10AC;");
    asm("loc_65DD818: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65DD819() // __unlock_file2
{
    __DEBUG_ASM(65DD819);
    // chunk 0x65DD819 _sub_65DD819
    asm("loc_65DD819: mov 4(%esp),%eax;");
    asm("loc_65DD81D: cmp $0x14,%eax;");
    asm("loc_65DD820: jge loc_65DD82D;");
    asm("loc_65DD822: add $0x1C,%eax;");
    asm("loc_65DD825: push %eax;");
    asm("loc_65DD826: call _sub_65DCF0C;");
    asm("loc_65DD82B: pop %ecx;");
    asm("loc_65DD82C: ret;");
    asm("loc_65DD82D: mov 8(%esp),%eax;");
    asm("loc_65DD831: add $0x20,%eax;");
    asm("loc_65DD834: push %eax;");
    asm("loc_65DD835: calll *_import_65E10AC;");
    asm("loc_65DD83B: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65DD83C() // _wctomb
{
    __DEBUG_ASM(65DD83C);
    // chunk 0x65DD83C _sub_65DD83C
    asm("loc_65DD83C: push %ebp;");
    asm("loc_65DD83D: mov %esp,%ebp;");
    asm("loc_65DD83F: push %ebx;");
    asm("loc_65DD840: push %esi;");
    asm("loc_65DD841: mov $_data_65E66C8,%esi;");
    asm("loc_65DD846: push %edi;");
    asm("loc_65DD847: push %esi;");
    asm("loc_65DD848: calll *_import_65E10E4;");
    asm("loc_65DD84E: mov _import_65E10FC,%edi;");
    asm("loc_65DD854: xor %ebx,%ebx;");
    asm("loc_65DD856: cmp %ebx,_data_65E66C4;");
    asm("loc_65DD85C: je loc_65DD86C;");
    asm("loc_65DD85E: push %esi;");
    asm("loc_65DD85F: call *%edi;");
    asm("loc_65DD861: push $0x13;");
    asm("loc_65DD863: call _sub_65DCEAB;");
    asm("loc_65DD868: pop %ecx;");
    asm("loc_65DD869: push $1;");
    asm("loc_65DD86B: pop %ebx;");
    asm("loc_65DD86C: pushl 0xC(%ebp);");
    asm("loc_65DD86F: pushl 8(%ebp);");
    asm("loc_65DD872: call _sub_65DD895;");
    asm("loc_65DD877: pop %ecx;");
    asm("loc_65DD878: mov %eax,0xC(%ebp);");
    asm("loc_65DD87B: test %ebx,%ebx;");
    asm("loc_65DD87D: pop %ecx;");
    asm("loc_65DD87E: je loc_65DD88A;");
    asm("loc_65DD880: push $0x13;");
    asm("loc_65DD882: call _sub_65DCF0C;");
    asm("loc_65DD887: pop %ecx;");
    asm("loc_65DD888: jmp loc_65DD88D;");
    asm("loc_65DD88A: push %esi;");
    asm("loc_65DD88B: call *%edi;");
    asm("loc_65DD88D: mov 0xC(%ebp),%eax;");
    asm("loc_65DD890: pop %edi;");
    asm("loc_65DD891: pop %esi;");
    asm("loc_65DD892: pop %ebx;");
    asm("loc_65DD893: pop %ebp;");
    asm("loc_65DD894: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65DD895() // __wctomb_lk
{
    __DEBUG_ASM(65DD895);
    // chunk 0x65DD895 _sub_65DD895
    asm("loc_65DD895: push %ebp;");
    asm("loc_65DD896: mov %esp,%ebp;");
    asm("loc_65DD898: mov 8(%ebp),%eax;");
    asm("loc_65DD89B: test %eax,%eax;");
    asm("loc_65DD89D: jne loc_65DD8A1;");
    asm("loc_65DD89F: pop %ebp;");
    asm("loc_65DD8A0: ret;");
    asm("loc_65DD8A1: cmpl $0,_data_65E63E8;");
    asm("loc_65DD8A8: jne loc_65DD8BC;");
    asm("loc_65DD8AA: mov 0xC(%ebp),%cx;");
    asm("loc_65DD8AE: cmp $0xFF,%cx;");
    asm("loc_65DD8B3: ja loc_65DD8EE;");
    asm("loc_65DD8B5: push $1;");
    asm("loc_65DD8B7: mov %cl,(%eax);");
    asm("loc_65DD8B9: pop %eax;");
    asm("loc_65DD8BA: pop %ebp;");
    asm("loc_65DD8BB: ret;");
    asm("loc_65DD8BC: lea 8(%ebp),%ecx;");
    asm("loc_65DD8BF: andl $0,8(%ebp);");
    asm("loc_65DD8C3: push %ecx;");
    asm("loc_65DD8C4: push $0;");
    asm("loc_65DD8C6: pushl _data_65E5BE0;");
    asm("loc_65DD8CC: push %eax;");
    asm("loc_65DD8CD: lea 0xC(%ebp),%eax;");
    asm("loc_65DD8D0: push $1;");
    asm("loc_65DD8D2: push %eax;");
    asm("loc_65DD8D3: push $0x220;");
    asm("loc_65DD8D8: pushl _data_65E63F8;");
    asm("loc_65DD8DE: calll *_import_65E1094;");
    asm("loc_65DD8E4: test %eax,%eax;");
    asm("loc_65DD8E6: je loc_65DD8EE;");
    asm("loc_65DD8E8: cmpl $0,8(%ebp);");
    asm("loc_65DD8EC: je loc_65DD8FC;");
    asm("loc_65DD8EE: call _sub_65DE88A;");
    asm("loc_65DD8F3: movl $0x2A,(%eax);");
    asm("loc_65DD8F9: or $0xFFFFFFFF,%eax;");
    asm("loc_65DD8FC: pop %ebp;");
    asm("loc_65DD8FD: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65DD900() // __aulldiv
{
    __DEBUG_ASM(65DD900);
    // chunk 0x65DD900 _sub_65DD900
    asm("loc_65DD900: push %ebx;");
    asm("loc_65DD901: push %esi;");
    asm("loc_65DD902: mov 0x18(%esp),%eax;");
    asm("loc_65DD906: or %eax,%eax;");
    asm("loc_65DD908: jne loc_65DD922;");
    asm("loc_65DD90A: mov 0x14(%esp),%ecx;");
    asm("loc_65DD90E: mov 0x10(%esp),%eax;");
    asm("loc_65DD912: xor %edx,%edx;");
    asm("loc_65DD914: div %ecx;");
    asm("loc_65DD916: mov %eax,%ebx;");
    asm("loc_65DD918: mov 0xC(%esp),%eax;");
    asm("loc_65DD91C: div %ecx;");
    asm("loc_65DD91E: mov %ebx,%edx;");
    asm("loc_65DD920: jmp loc_65DD963;");
    asm("loc_65DD922: mov %eax,%ecx;");
    asm("loc_65DD924: mov 0x14(%esp),%ebx;");
    asm("loc_65DD928: mov 0x10(%esp),%edx;");
    asm("loc_65DD92C: mov 0xC(%esp),%eax;");
    asm("loc_65DD930: shr $1,%ecx;");
    asm("loc_65DD932: rcr $1,%ebx;");
    asm("loc_65DD934: shr $1,%edx;");
    asm("loc_65DD936: rcr $1,%eax;");
    asm("loc_65DD938: or %ecx,%ecx;");
    asm("loc_65DD93A: jne loc_65DD930;");
    asm("loc_65DD93C: div %ebx;");
    asm("loc_65DD93E: mov %eax,%esi;");
    asm("loc_65DD940: mull 0x18(%esp);");
    asm("loc_65DD944: mov %eax,%ecx;");
    asm("loc_65DD946: mov 0x14(%esp),%eax;");
    asm("loc_65DD94A: mul %esi;");
    asm("loc_65DD94C: add %ecx,%edx;");
    asm("loc_65DD94E: jb loc_65DD95E;");
    asm("loc_65DD950: cmp 0x10(%esp),%edx;");
    asm("loc_65DD954: ja loc_65DD95E;");
    asm("loc_65DD956: jb loc_65DD95F;");
    asm("loc_65DD958: cmp 0xC(%esp),%eax;");
    asm("loc_65DD95C: jbe loc_65DD95F;");
    asm("loc_65DD95E: dec %esi;");
    asm("loc_65DD95F: xor %edx,%edx;");
    asm("loc_65DD961: mov %esi,%eax;");
    asm("loc_65DD963: pop %esi;");
    asm("loc_65DD964: pop %ebx;");
    asm("loc_65DD965: ret $0x10;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65DD970() // __aullrem
{
    __DEBUG_ASM(65DD970);
    // chunk 0x65DD970 _sub_65DD970
    asm("loc_65DD970: push %ebx;");
    asm("loc_65DD971: mov 0x14(%esp),%eax;");
    asm("loc_65DD975: or %eax,%eax;");
    asm("loc_65DD977: jne loc_65DD991;");
    asm("loc_65DD979: mov 0x10(%esp),%ecx;");
    asm("loc_65DD97D: mov 0xC(%esp),%eax;");
    asm("loc_65DD981: xor %edx,%edx;");
    asm("loc_65DD983: div %ecx;");
    asm("loc_65DD985: mov 8(%esp),%eax;");
    asm("loc_65DD989: div %ecx;");
    asm("loc_65DD98B: mov %edx,%eax;");
    asm("loc_65DD98D: xor %edx,%edx;");
    asm("loc_65DD98F: jmp loc_65DD9E1;");
    asm("loc_65DD991: mov %eax,%ecx;");
    asm("loc_65DD993: mov 0x10(%esp),%ebx;");
    asm("loc_65DD997: mov 0xC(%esp),%edx;");
    asm("loc_65DD99B: mov 8(%esp),%eax;");
    asm("loc_65DD99F: shr $1,%ecx;");
    asm("loc_65DD9A1: rcr $1,%ebx;");
    asm("loc_65DD9A3: shr $1,%edx;");
    asm("loc_65DD9A5: rcr $1,%eax;");
    asm("loc_65DD9A7: or %ecx,%ecx;");
    asm("loc_65DD9A9: jne loc_65DD99F;");
    asm("loc_65DD9AB: div %ebx;");
    asm("loc_65DD9AD: mov %eax,%ecx;");
    asm("loc_65DD9AF: mull 0x14(%esp);");
    asm("loc_65DD9B3: xchg %eax,%ecx;");
    asm("loc_65DD9B4: mull 0x10(%esp);");
    asm("loc_65DD9B8: add %ecx,%edx;");
    asm("loc_65DD9BA: jb loc_65DD9CA;");
    asm("loc_65DD9BC: cmp 0xC(%esp),%edx;");
    asm("loc_65DD9C0: ja loc_65DD9CA;");
    asm("loc_65DD9C2: jb loc_65DD9D2;");
    asm("loc_65DD9C4: cmp 8(%esp),%eax;");
    asm("loc_65DD9C8: jbe loc_65DD9D2;");
    asm("loc_65DD9CA: sub 0x10(%esp),%eax;");
    asm("loc_65DD9CE: sbb 0x14(%esp),%edx;");
    asm("loc_65DD9D2: sub 8(%esp),%eax;");
    asm("loc_65DD9D6: sbb 0xC(%esp),%edx;");
    asm("loc_65DD9DA: neg %edx;");
    asm("loc_65DD9DC: neg %eax;");
    asm("loc_65DD9DE: sbb $0,%edx;");
    asm("loc_65DD9E1: pop %ebx;");
    asm("loc_65DD9E2: ret $0x10;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65DD9E5() // _mbtowc
{
    __DEBUG_ASM(65DD9E5);
    // chunk 0x65DD9E5 _sub_65DD9E5
    asm("loc_65DD9E5: push %ebp;");
    asm("loc_65DD9E6: mov %esp,%ebp;");
    asm("loc_65DD9E8: push %ebx;");
    asm("loc_65DD9E9: push %esi;");
    asm("loc_65DD9EA: mov $_data_65E66C8,%esi;");
    asm("loc_65DD9EF: push %edi;");
    asm("loc_65DD9F0: push %esi;");
    asm("loc_65DD9F1: calll *_import_65E10E4;");
    asm("loc_65DD9F7: mov _import_65E10FC,%edi;");
    asm("loc_65DD9FD: xor %ebx,%ebx;");
    asm("loc_65DD9FF: cmp %ebx,_data_65E66C4;");
    asm("loc_65DDA05: je loc_65DDA15;");
    asm("loc_65DDA07: push %esi;");
    asm("loc_65DDA08: call *%edi;");
    asm("loc_65DDA0A: push $0x13;");
    asm("loc_65DDA0C: call _sub_65DCEAB;");
    asm("loc_65DDA11: pop %ecx;");
    asm("loc_65DDA12: push $1;");
    asm("loc_65DDA14: pop %ebx;");
    asm("loc_65DDA15: pushl 0x10(%ebp);");
    asm("loc_65DDA18: pushl 0xC(%ebp);");
    asm("loc_65DDA1B: pushl 8(%ebp);");
    asm("loc_65DDA1E: call _sub_65DDA42;");
    asm("loc_65DDA23: add $0xC,%esp;");
    asm("loc_65DDA26: mov %eax,0x10(%ebp);");
    asm("loc_65DDA29: test %ebx,%ebx;");
    asm("loc_65DDA2B: je loc_65DDA37;");
    asm("loc_65DDA2D: push $0x13;");
    asm("loc_65DDA2F: call _sub_65DCF0C;");
    asm("loc_65DDA34: pop %ecx;");
    asm("loc_65DDA35: jmp loc_65DDA3A;");
    asm("loc_65DDA37: push %esi;");
    asm("loc_65DDA38: call *%edi;");
    asm("loc_65DDA3A: mov 0x10(%ebp),%eax;");
    asm("loc_65DDA3D: pop %edi;");
    asm("loc_65DDA3E: pop %esi;");
    asm("loc_65DDA3F: pop %ebx;");
    asm("loc_65DDA40: pop %ebp;");
    asm("loc_65DDA41: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65DDA42() // __mbtowc_lk
{
    __DEBUG_ASM(65DDA42);
    // chunk 0x65DDA42 _sub_65DDA42
    asm("loc_65DDA42: push %ebp;");
    asm("loc_65DDA43: mov %esp,%ebp;");
    asm("loc_65DDA45: push %ebx;");
    asm("loc_65DDA46: push %esi;");
    asm("loc_65DDA47: mov 0xC(%ebp),%esi;");
    asm("loc_65DDA4A: xor %ebx,%ebx;");
    asm("loc_65DDA4C: cmp %ebx,%esi;");
    asm("loc_65DDA4E: je loc_65DDA65;");
    asm("loc_65DDA50: cmp %ebx,0x10(%ebp);");
    asm("loc_65DDA53: je loc_65DDA65;");
    asm("loc_65DDA55: mov (%esi),%al;");
    asm("loc_65DDA57: cmp %bl,%al;");
    asm("loc_65DDA59: jne loc_65DDA6B;");
    asm("loc_65DDA5B: mov 8(%ebp),%eax;");
    asm("loc_65DDA5E: cmp %ebx,%eax;");
    asm("loc_65DDA60: je loc_65DDA65;");
    asm("loc_65DDA62: mov %bx,(%eax);");
    asm("loc_65DDA65: xor %eax,%eax;");
    asm("loc_65DDA67: pop %esi;");
    asm("loc_65DDA68: pop %ebx;");
    asm("loc_65DDA69: pop %ebp;");
    asm("loc_65DDA6A: ret;");
    asm("loc_65DDA6B: cmp %ebx,_data_65E63E8;");
    asm("loc_65DDA71: jne loc_65DDA86;");
    asm("loc_65DDA73: mov 8(%ebp),%ecx;");
    asm("loc_65DDA76: cmp %ebx,%ecx;");
    asm("loc_65DDA78: je loc_65DDA81;");
    asm("loc_65DDA7A: movzbw %al,%ax;");
    asm("loc_65DDA7E: mov %ax,(%ecx);");
    asm("loc_65DDA81: push $1;");
    asm("loc_65DDA83: pop %eax;");
    asm("loc_65DDA84: jmp loc_65DDA67;");
    asm("loc_65DDA86: mov _off_65E59D0,%ecx;");
    asm("loc_65DDA8C: movzbl %al,%eax;");
    asm("loc_65DDA8F: testb $0x80,1(%ecx,%eax,2);");
    asm("loc_65DDA94: je loc_65DDAE4;");
    asm("loc_65DDA96: mov _data_65E5BE0,%eax;");
    asm("loc_65DDA9B: cmp $1,%eax;");
    asm("loc_65DDA9E: jle loc_65DDACA;");
    asm("loc_65DDAA0: cmp %eax,0x10(%ebp);");
    asm("loc_65DDAA3: jl loc_65DDAD4;");
    asm("loc_65DDAA5: xor %ecx,%ecx;");
    asm("loc_65DDAA7: cmp %ebx,8(%ebp);");
    asm("loc_65DDAAA: setne %cl;");
    asm("loc_65DDAAD: push %ecx;");
    asm("loc_65DDAAE: pushl 8(%ebp);");
    asm("loc_65DDAB1: push %eax;");
    asm("loc_65DDAB2: push %esi;");
    asm("loc_65DDAB3: push $9;");
    asm("loc_65DDAB5: pushl _data_65E63F8;");
    asm("loc_65DDABB: calll *_import_65E10E8;");
    asm("loc_65DDAC1: test %eax,%eax;");
    asm("loc_65DDAC3: mov _data_65E5BE0,%eax;");
    asm("loc_65DDAC8: jne loc_65DDA67;");
    asm("loc_65DDACA: cmp %eax,0x10(%ebp);");
    asm("loc_65DDACD: jb loc_65DDAD4;");
    asm("loc_65DDACF: cmp %bl,1(%esi);");
    asm("loc_65DDAD2: jne loc_65DDA67;");
    asm("loc_65DDAD4: call _sub_65DE88A;");
    asm("loc_65DDAD9: movl $0x2A,(%eax);");
    asm("loc_65DDADF: or $0xFFFFFFFF,%eax;");
    asm("loc_65DDAE2: jmp loc_65DDA67;");
    asm("loc_65DDAE4: xor %eax,%eax;");
    asm("loc_65DDAE6: cmp %ebx,8(%ebp);");
    asm("loc_65DDAE9: setne %al;");
    asm("loc_65DDAEC: push %eax;");
    asm("loc_65DDAED: pushl 8(%ebp);");
    asm("loc_65DDAF0: push $1;");
    asm("loc_65DDAF2: push %esi;");
    asm("loc_65DDAF3: push $9;");
    asm("loc_65DDAF5: pushl _data_65E63F8;");
    asm("loc_65DDAFB: calll *_import_65E10E8;");
    asm("loc_65DDB01: test %eax,%eax;");
    asm("loc_65DDB03: jne loc_65DDA81;");
    asm("loc_65DDB09: jmp loc_65DDAD4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65DDB10() // _memset
{
    __DEBUG_ASM(65DDB10);
    // chunk 0x65DDB10 _sub_65DDB10
    asm("loc_65DDB10: mov 0xC(%esp),%edx;");
    asm("loc_65DDB14: mov 4(%esp),%ecx;");
    asm("loc_65DDB18: test %edx,%edx;");
    asm("loc_65DDB1A: je loc_65DDB63;");
    asm("loc_65DDB1C: xor %eax,%eax;");
    asm("loc_65DDB1E: mov 8(%esp),%al;");
    asm("loc_65DDB22: push %edi;");
    asm("loc_65DDB23: mov %ecx,%edi;");
    asm("loc_65DDB25: cmp $4,%edx;");
    asm("loc_65DDB28: jb loc_65DDB57;");
    asm("loc_65DDB2A: neg %ecx;");
    asm("loc_65DDB2C: and $3,%ecx;");
    asm("loc_65DDB2F: je loc_65DDB39;");
    asm("loc_65DDB31: sub %ecx,%edx;");
    asm("loc_65DDB33: mov %al,(%edi);");
    asm("loc_65DDB35: inc %edi;");
    asm("loc_65DDB36: dec %ecx;");
    asm("loc_65DDB37: jne loc_65DDB33;");
    asm("loc_65DDB39: mov %eax,%ecx;");
    asm("loc_65DDB3B: shl $8,%eax;");
    asm("loc_65DDB3E: add %ecx,%eax;");
    asm("loc_65DDB40: mov %eax,%ecx;");
    asm("loc_65DDB42: shl $0x10,%eax;");
    asm("loc_65DDB45: add %ecx,%eax;");
    asm("loc_65DDB47: mov %edx,%ecx;");
    asm("loc_65DDB49: and $3,%edx;");
    asm("loc_65DDB4C: shr $2,%ecx;");
    asm("loc_65DDB4F: je loc_65DDB57;");
    asm("loc_65DDB51: rep stos %eax,(%edi);");
    asm("loc_65DDB53: test %edx,%edx;");
    asm("loc_65DDB55: je loc_65DDB5D;");
    asm("loc_65DDB57: mov %al,(%edi);");
    asm("loc_65DDB59: inc %edi;");
    asm("loc_65DDB5A: dec %edx;");
    asm("loc_65DDB5B: jne loc_65DDB57;");
    asm("loc_65DDB5D: mov 8(%esp),%eax;");
    asm("loc_65DDB61: pop %edi;");
    asm("loc_65DDB62: ret;");
    asm("loc_65DDB63: mov 4(%esp),%eax;");
    asm("loc_65DDB67: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65DDB68() // _isspace
{
    __DEBUG_ASM(65DDB68);
    // chunk 0x65DDB68 _sub_65DDB68
    asm("loc_65DDB68: cmpl $1,_data_65E5BE0;");
    asm("loc_65DDB6F: jle loc_65DDB7F;");
    asm("loc_65DDB71: push $8;");
    asm("loc_65DDB73: pushl 8(%esp);");
    asm("loc_65DDB77: call _sub_65DDB90;");
    asm("loc_65DDB7C: pop %ecx;");
    asm("loc_65DDB7D: pop %ecx;");
    asm("loc_65DDB7E: ret;");
    asm("loc_65DDB7F: mov 4(%esp),%eax;");
    asm("loc_65DDB83: mov _off_65E59D0,%ecx;");
    asm("loc_65DDB89: mov (%ecx,%eax,2),%al;");
    asm("loc_65DDB8C: and $8,%eax;");
    asm("loc_65DDB8F: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65DDB90() // __isctype
{
    __DEBUG_ASM(65DDB90);
    // chunk 0x65DDB90 _sub_65DDB90
    asm("loc_65DDB90: push %ebp;");
    asm("loc_65DDB91: mov %esp,%ebp;");
    asm("loc_65DDB93: push %ecx;");
    asm("loc_65DDB94: mov 8(%ebp),%eax;");
    asm("loc_65DDB97: lea 1(%eax),%ecx;");
    asm("loc_65DDB9A: cmp $0x100,%ecx;");
    asm("loc_65DDBA0: ja loc_65DDBAE;");
    asm("loc_65DDBA2: mov _off_65E59D0,%ecx;");
    asm("loc_65DDBA8: movzwl (%ecx,%eax,2),%eax;");
    asm("loc_65DDBAC: jmp loc_65DDC00;");
    asm("loc_65DDBAE: mov %eax,%ecx;");
    asm("loc_65DDBB0: push %esi;");
    asm("loc_65DDBB1: mov _off_65E59D0,%esi;");
    asm("loc_65DDBB7: sar $8,%ecx;");
    asm("loc_65DDBBA: movzbl %cl,%edx;");
    asm("loc_65DDBBD: testb $0x80,1(%esi,%edx,2);");
    asm("loc_65DDBC2: pop %esi;");
    asm("loc_65DDBC3: je loc_65DDBD3;");
    asm("loc_65DDBC5: andb $0,-2(%ebp);");
    asm("loc_65DDBC9: mov %cl,-4(%ebp);");
    asm("loc_65DDBCC: mov %al,-3(%ebp);");
    asm("loc_65DDBCF: push $2;");
    asm("loc_65DDBD1: jmp loc_65DDBDC;");
    asm("loc_65DDBD3: andb $0,-3(%ebp);");
    asm("loc_65DDBD7: mov %al,-4(%ebp);");
    asm("loc_65DDBDA: push $1;");
    asm("loc_65DDBDC: pop %eax;");
    asm("loc_65DDBDD: lea 0xA(%ebp),%ecx;");
    asm("loc_65DDBE0: push $1;");
    asm("loc_65DDBE2: push $0;");
    asm("loc_65DDBE4: push $0;");
    asm("loc_65DDBE6: push %ecx;");
    asm("loc_65DDBE7: push %eax;");
    asm("loc_65DDBE8: lea -4(%ebp),%eax;");
    asm("loc_65DDBEB: push %eax;");
    asm("loc_65DDBEC: push $1;");
    asm("loc_65DDBEE: call _sub_65DEB9F;");
    asm("loc_65DDBF3: add $0x1C,%esp;");
    asm("loc_65DDBF6: test %eax,%eax;");
    asm("loc_65DDBF8: jne loc_65DDBFC;");
    asm("loc_65DDBFA: leave;");
    asm("loc_65DDBFB: ret;");
    asm("loc_65DDBFC: movzwl 0xA(%ebp),%eax;");
    asm("loc_65DDC00: and 0xC(%ebp),%eax;");
    asm("loc_65DDC03: leave;");
    asm("loc_65DDC04: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65DDC10() // __allmul
{
    __DEBUG_ASM(65DDC10);
    // chunk 0x65DDC10 _sub_65DDC10
    asm("loc_65DDC10: mov 8(%esp),%eax;");
    asm("loc_65DDC14: mov 0x10(%esp),%ecx;");
    asm("loc_65DDC18: or %eax,%ecx;");
    asm("loc_65DDC1A: mov 0xC(%esp),%ecx;");
    asm("loc_65DDC1E: jne loc_65DDC29;");
    asm("loc_65DDC20: mov 4(%esp),%eax;");
    asm("loc_65DDC24: mul %ecx;");
    asm("loc_65DDC26: ret $0x10;");
    asm("loc_65DDC29: push %ebx;");
    asm("loc_65DDC2A: mul %ecx;");
    asm("loc_65DDC2C: mov %eax,%ebx;");
    asm("loc_65DDC2E: mov 8(%esp),%eax;");
    asm("loc_65DDC32: mull 0x14(%esp);");
    asm("loc_65DDC36: add %eax,%ebx;");
    asm("loc_65DDC38: mov 8(%esp),%eax;");
    asm("loc_65DDC3C: mul %ecx;");
    asm("loc_65DDC3E: add %ebx,%edx;");
    asm("loc_65DDC40: pop %ebx;");
    asm("loc_65DDC41: ret $0x10;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65DDC50() // __allshl
{
    __DEBUG_ASM(65DDC50);
    // chunk 0x65DDC50 _sub_65DDC50
    asm("loc_65DDC50: cmp $0x40,%cl;");
    asm("loc_65DDC53: jae loc_65DDC6A;");
    asm("loc_65DDC55: cmp $0x20,%cl;");
    asm("loc_65DDC58: jae loc_65DDC60;");
    asm("loc_65DDC5A: shld %cl,%eax,%edx;");
    asm("loc_65DDC5D: shl %cl,%eax;");
    asm("loc_65DDC5F: ret;");
    asm("loc_65DDC60: mov %eax,%edx;");
    asm("loc_65DDC62: xor %eax,%eax;");
    asm("loc_65DDC64: and $0x1F,%cl;");
    asm("loc_65DDC67: shl %cl,%edx;");
    asm("loc_65DDC69: ret;");
    asm("loc_65DDC6A: xor %eax,%eax;");
    asm("loc_65DDC6C: xor %edx,%edx;");
    asm("loc_65DDC6E: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65DDC6F() // __filbuf
{
    __DEBUG_ASM(65DDC6F);
    // chunk 0x65DDC6F _sub_65DDC6F
    asm("loc_65DDC6F: push %esi;");
    asm("loc_65DDC70: mov 8(%esp),%esi;");
    asm("loc_65DDC74: mov 0xC(%esi),%eax;");
    asm("loc_65DDC77: test $0x83,%al;");
    asm("loc_65DDC79: je loc_65DDD46;");
    asm("loc_65DDC7F: test $0x40,%al;");
    asm("loc_65DDC81: jne loc_65DDD46;");
    asm("loc_65DDC87: test $2,%al;");
    asm("loc_65DDC89: je loc_65DDC95;");
    asm("loc_65DDC8B: or $0x20,%al;");
    asm("loc_65DDC8D: mov %eax,0xC(%esi);");
    asm("loc_65DDC90: jmp loc_65DDD46;");
    asm("loc_65DDC95: or $1,%al;");
    asm("loc_65DDC97: test $0x10C,%ax;");
    asm("loc_65DDC9B: mov %eax,0xC(%esi);");
    asm("loc_65DDC9E: jne loc_65DDCA9;");
    asm("loc_65DDCA0: push %esi;");
    asm("loc_65DDCA1: call _sub_65DD66F;");
    asm("loc_65DDCA6: pop %ecx;");
    asm("loc_65DDCA7: jmp loc_65DDCAE;");
    asm("loc_65DDCA9: mov 8(%esi),%eax;");
    asm("loc_65DDCAC: mov %eax,(%esi);");
    asm("loc_65DDCAE: pushl 0x18(%esi);");
    asm("loc_65DDCB1: pushl 8(%esi);");
    asm("loc_65DDCB4: pushl 0x10(%esi);");
    asm("loc_65DDCB7: call _sub_65DECE8;");
    asm("loc_65DDCBC: add $0xC,%esp;");
    asm("loc_65DDCBF: mov %eax,4(%esi);");
    asm("loc_65DDCC2: test %eax,%eax;");
    asm("loc_65DDCC4: je loc_65DDD35;");
    asm("loc_65DDCC6: cmp $0xFFFFFFFF,%eax;");
    asm("loc_65DDCC9: je loc_65DDD35;");
    asm("loc_65DDCCB: mov 0xC(%esi),%edx;");
    asm("loc_65DDCCE: test $0x82,%dl;");
    asm("loc_65DDCD1: jne loc_65DDD0A;");
    asm("loc_65DDCD3: mov 0x10(%esi),%ecx;");
    asm("loc_65DDCD6: push %edi;");
    asm("loc_65DDCD7: cmp $0xFFFFFFFF,%ecx;");
    asm("loc_65DDCDA: je loc_65DDCF3;");
    asm("loc_65DDCDC: mov %ecx,%edi;");
    asm("loc_65DDCDE: sar $5,%edi;");
    asm("loc_65DDCE1: and $0x1F,%ecx;");
    asm("loc_65DDCE4: mov _data_65E7940(,%edi,4),%edi;");
    asm("loc_65DDCEB: lea (%ecx,%ecx,8),%ecx;");
    asm("loc_65DDCEE: lea (%edi,%ecx,4),%edi;");
    asm("loc_65DDCF1: jmp loc_65DDCF8;");
    asm("loc_65DDCF3: mov $_data_65E3510,%edi;");
    asm("loc_65DDCF8: mov 4(%edi),%cl;");
    asm("loc_65DDCFB: pop %edi;");
    asm("loc_65DDCFC: and $0x82,%cl;");
    asm("loc_65DDCFF: cmp $0x82,%cl;");
    asm("loc_65DDD02: jne loc_65DDD0A;");
    asm("loc_65DDD04: or $0x20,%dh;");
    asm("loc_65DDD07: mov %edx,0xC(%esi);");
    asm("loc_65DDD0A: cmpl $0x200,0x18(%esi);");
    asm("loc_65DDD11: jne loc_65DDD27;");
    asm("loc_65DDD13: mov 0xC(%esi),%ecx;");
    asm("loc_65DDD16: test $8,%cl;");
    asm("loc_65DDD19: je loc_65DDD27;");
    asm("loc_65DDD1B: test $4,%ch;");
    asm("loc_65DDD1E: jne loc_65DDD27;");
    asm("loc_65DDD20: movl $0x1000,0x18(%esi);");
    asm("loc_65DDD27: mov (%esi),%ecx;");
    asm("loc_65DDD29: dec %eax;");
    asm("loc_65DDD2A: mov %eax,4(%esi);");
    asm("loc_65DDD2D: movzbl (%ecx),%eax;");
    asm("loc_65DDD30: inc %ecx;");
    asm("loc_65DDD31: mov %ecx,(%esi);");
    asm("loc_65DDD33: pop %esi;");
    asm("loc_65DDD34: ret;");
    asm("loc_65DDD35: neg %eax;");
    asm("loc_65DDD37: sbb %eax,%eax;");
    asm("loc_65DDD39: and $0x10,%eax;");
    asm("loc_65DDD3C: add $0x10,%eax;");
    asm("loc_65DDD3F: or %eax,0xC(%esi);");
    asm("loc_65DDD42: andl $0,4(%esi);");
    asm("loc_65DDD46: or $0xFFFFFFFF,%eax;");
    asm("loc_65DDD49: pop %esi;");
    asm("loc_65DDD4A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65DDD4B() // _ungetc
{
    __DEBUG_ASM(65DDD4B);
    // chunk 0x65DDD4B _sub_65DDD4B
    asm("loc_65DDD4B: push %ebx;");
    asm("loc_65DDD4C: mov 8(%esp),%ebx;");
    asm("loc_65DDD50: cmp $0xFFFFFFFF,%ebx;");
    asm("loc_65DDD53: push %esi;");
    asm("loc_65DDD54: je loc_65DDD97;");
    asm("loc_65DDD56: mov 0x10(%esp),%esi;");
    asm("loc_65DDD5A: mov 0xC(%esi),%eax;");
    asm("loc_65DDD5D: test $1,%al;");
    asm("loc_65DDD5F: jne loc_65DDD69;");
    asm("loc_65DDD61: test $0x80,%al;");
    asm("loc_65DDD63: je loc_65DDD97;");
    asm("loc_65DDD65: test $2,%al;");
    asm("loc_65DDD67: jne loc_65DDD97;");
    asm("loc_65DDD69: cmpl $0,8(%esi);");
    asm("loc_65DDD6D: jne loc_65DDD76;");
    asm("loc_65DDD6F: push %esi;");
    asm("loc_65DDD70: call _sub_65DD66F;");
    asm("loc_65DDD75: pop %ecx;");
    asm("loc_65DDD76: mov (%esi),%eax;");
    asm("loc_65DDD78: cmp 8(%esi),%eax;");
    asm("loc_65DDD7B: jne loc_65DDD86;");
    asm("loc_65DDD7D: cmpl $0,4(%esi);");
    asm("loc_65DDD81: jne loc_65DDD97;");
    asm("loc_65DDD83: inc %eax;");
    asm("loc_65DDD84: mov %eax,(%esi);");
    asm("loc_65DDD86: testb $0x40,0xC(%esi);");
    asm("loc_65DDD8A: je loc_65DDD9D;");
    asm("loc_65DDD8C: decl (%esi);");
    asm("loc_65DDD8E: mov (%esi),%eax;");
    asm("loc_65DDD90: cmp %bl,(%eax);");
    asm("loc_65DDD92: je loc_65DDDA3;");
    asm("loc_65DDD94: inc %eax;");
    asm("loc_65DDD95: mov %eax,(%esi);");
    asm("loc_65DDD97: or $0xFFFFFFFF,%eax;");
    asm("loc_65DDD9A: pop %esi;");
    asm("loc_65DDD9B: pop %ebx;");
    asm("loc_65DDD9C: ret;");
    asm("loc_65DDD9D: decl (%esi);");
    asm("loc_65DDD9F: mov (%esi),%eax;");
    asm("loc_65DDDA1: mov %bl,(%eax);");
    asm("loc_65DDDA3: mov 0xC(%esi),%eax;");
    asm("loc_65DDDA6: incl 4(%esi);");
    asm("loc_65DDDA9: and $0xEF,%al;");
    asm("loc_65DDDAB: or $1,%al;");
    asm("loc_65DDDAD: mov %eax,0xC(%esi);");
    asm("loc_65DDDB0: mov %ebx,%eax;");
    asm("loc_65DDDB2: and $0xFF,%eax;");
    asm("loc_65DDDB7: jmp loc_65DDD9A;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65DDDB9() // _atol
{
    __DEBUG_ASM(65DDDB9);
    // chunk 0x65DDDB9 _sub_65DDDB9
    asm("loc_65DDDB9: push %ebx;");
    asm("loc_65DDDBA: push %ebp;");
    asm("loc_65DDDBB: push %esi;");
    asm("loc_65DDDBC: push %edi;");
    asm("loc_65DDDBD: mov 0x14(%esp),%edi;");
    asm("loc_65DDDC1: cmpl $1,_data_65E5BE0;");
    asm("loc_65DDDC8: jle loc_65DDDD9;");
    asm("loc_65DDDCA: movzbl (%edi),%eax;");
    asm("loc_65DDDCD: push $8;");
    asm("loc_65DDDCF: push %eax;");
    asm("loc_65DDDD0: call _sub_65DDB90;");
    asm("loc_65DDDD5: pop %ecx;");
    asm("loc_65DDDD6: pop %ecx;");
    asm("loc_65DDDD7: jmp loc_65DDDE8;");
    asm("loc_65DDDD9: movzbl (%edi),%eax;");
    asm("loc_65DDDDC: mov _off_65E59D0,%ecx;");
    asm("loc_65DDDE2: mov (%ecx,%eax,2),%al;");
    asm("loc_65DDDE5: and $8,%eax;");
    asm("loc_65DDDE8: test %eax,%eax;");
    asm("loc_65DDDEA: je loc_65DDDEF;");
    asm("loc_65DDDEC: inc %edi;");
    asm("loc_65DDDED: jmp loc_65DDDC1;");
    asm("loc_65DDDEF: movzbl (%edi),%esi;");
    asm("loc_65DDDF2: inc %edi;");
    asm("loc_65DDDF3: cmp $0x2D,%esi;");
    asm("loc_65DDDF6: mov %esi,%ebp;");
    asm("loc_65DDDF8: je loc_65DDDFF;");
    asm("loc_65DDDFA: cmp $0x2B,%esi;");
    asm("loc_65DDDFD: jne loc_65DDE03;");
    asm("loc_65DDDFF: movzbl (%edi),%esi;");
    asm("loc_65DDE02: inc %edi;");
    asm("loc_65DDE03: xor %ebx,%ebx;");
    asm("loc_65DDE05: cmpl $1,_data_65E5BE0;");
    asm("loc_65DDE0C: jle loc_65DDE1A;");
    asm("loc_65DDE0E: push $4;");
    asm("loc_65DDE10: push %esi;");
    asm("loc_65DDE11: call _sub_65DDB90;");
    asm("loc_65DDE16: pop %ecx;");
    asm("loc_65DDE17: pop %ecx;");
    asm("loc_65DDE18: jmp loc_65DDE25;");
    asm("loc_65DDE1A: mov _off_65E59D0,%eax;");
    asm("loc_65DDE1F: mov (%eax,%esi,2),%al;");
    asm("loc_65DDE22: and $4,%eax;");
    asm("loc_65DDE25: test %eax,%eax;");
    asm("loc_65DDE27: je loc_65DDE36;");
    asm("loc_65DDE29: lea (%ebx,%ebx,4),%eax;");
    asm("loc_65DDE2C: lea -0x30(%esi,%eax,2),%ebx;");
    asm("loc_65DDE30: movzbl (%edi),%esi;");
    asm("loc_65DDE33: inc %edi;");
    asm("loc_65DDE34: jmp loc_65DDE05;");
    asm("loc_65DDE36: cmp $0x2D,%ebp;");
    asm("loc_65DDE39: mov %ebx,%eax;");
    asm("loc_65DDE3B: jne loc_65DDE3F;");
    asm("loc_65DDE3D: neg %eax;");
    asm("loc_65DDE3F: pop %edi;");
    asm("loc_65DDE40: pop %esi;");
    asm("loc_65DDE41: pop %ebp;");
    asm("loc_65DDE42: pop %ebx;");
    asm("loc_65DDE43: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65DDE44() // _getenv
{
    __DEBUG_ASM(65DDE44);
    // chunk 0x65DDE44 _sub_65DDE44
    asm("loc_65DDE44: cmpl $0,_data_65E7A44;");
    asm("loc_65DDE4B: push %ebx;");
    asm("loc_65DDE4C: push %esi;");
    asm("loc_65DDE4D: mov _data_65E6154,%esi;");
    asm("loc_65DDE53: push %edi;");
    asm("loc_65DDE54: je loc_65DDEBB;");
    asm("loc_65DDE56: test %esi,%esi;");
    asm("loc_65DDE58: jne loc_65DDE75;");
    asm("loc_65DDE5A: cmp %esi,_data_65E615C;");
    asm("loc_65DDE60: je loc_65DDEBB;");
    asm("loc_65DDE62: call _sub_65DEF65;");
    asm("loc_65DDE67: test %eax,%eax;");
    asm("loc_65DDE69: jne loc_65DDEBB;");
    asm("loc_65DDE6B: mov _data_65E6154,%esi;");
    asm("loc_65DDE71: test %esi,%esi;");
    asm("loc_65DDE73: je loc_65DDEBB;");
    asm("loc_65DDE75: mov 0x10(%esp),%ebx;");
    asm("loc_65DDE79: test %ebx,%ebx;");
    asm("loc_65DDE7B: je loc_65DDEBB;");
    asm("loc_65DDE7D: push %ebx;");
    asm("loc_65DDE7E: call _sub_65D8120;");
    asm("loc_65DDE83: pop %ecx;");
    asm("loc_65DDE84: mov %eax,%edi;");
    asm("loc_65DDE86: mov (%esi),%eax;");
    asm("loc_65DDE88: test %eax,%eax;");
    asm("loc_65DDE8A: je loc_65DDEBB;");
    asm("loc_65DDE8C: push %eax;");
    asm("loc_65DDE8D: call _sub_65D8120;");
    asm("loc_65DDE92: cmp %edi,%eax;");
    asm("loc_65DDE94: pop %ecx;");
    asm("loc_65DDE95: jbe loc_65DDEAE;");
    asm("loc_65DDE97: mov (%esi),%eax;");
    asm("loc_65DDE99: cmpb $0x3D,(%eax,%edi);");
    asm("loc_65DDE9D: jne loc_65DDEAE;");
    asm("loc_65DDE9F: push %edi;");
    asm("loc_65DDEA0: push %ebx;");
    asm("loc_65DDEA1: push %eax;");
    asm("loc_65DDEA2: call _sub_65DEF26;");
    asm("loc_65DDEA7: add $0xC,%esp;");
    asm("loc_65DDEAA: test %eax,%eax;");
    asm("loc_65DDEAC: je loc_65DDEB3;");
    asm("loc_65DDEAE: add $4,%esi;");
    asm("loc_65DDEB1: jmp loc_65DDE86;");
    asm("loc_65DDEB3: mov (%esi),%eax;");
    asm("loc_65DDEB5: lea 1(%eax,%edi),%eax;");
    asm("loc_65DDEB9: jmp loc_65DDEBD;");
    asm("loc_65DDEBB: xor %eax,%eax;");
    asm("loc_65DDEBD: pop %edi;");
    asm("loc_65DDEBE: pop %esi;");
    asm("loc_65DDEBF: pop %ebx;");
    asm("loc_65DDEC0: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65DDEC1() // __setmbcp
{
    __DEBUG_ASM(65DDEC1);
    // chunk 0x65DDEC1 _sub_65DDEC1
    asm("loc_65DDEC1: push %ebp;");
    asm("loc_65DDEC2: mov %esp,%ebp;");
    asm("loc_65DDEC4: sub $0x18,%esp;");
    asm("loc_65DDEC7: push %ebx;");
    asm("loc_65DDEC8: push %esi;");
    asm("loc_65DDEC9: push %edi;");
    asm("loc_65DDECA: push $0x19;");
    asm("loc_65DDECC: call _sub_65DCEAB;");
    asm("loc_65DDED1: pushl 8(%ebp);");
    asm("loc_65DDED4: call _sub_65DE06E;");
    asm("loc_65DDED9: mov %eax,%ebx;");
    asm("loc_65DDEDB: pop %ecx;");
    asm("loc_65DDEDC: cmp _data_65E66CC,%ebx;");
    asm("loc_65DDEE2: pop %ecx;");
    asm("loc_65DDEE3: mov %ebx,8(%ebp);");
    asm("loc_65DDEE6: jne loc_65DDEEF;");
    asm("loc_65DDEE8: xor %esi,%esi;");
    asm("loc_65DDEEA: jmp loc_65DE05F;");
    asm("loc_65DDEEF: test %ebx,%ebx;");
    asm("loc_65DDEF1: je loc_65DE04D;");
    asm("loc_65DDEF7: xor %edx,%edx;");
    asm("loc_65DDEF9: mov $_data_65E5C60,%eax;");
    asm("loc_65DDEFE: cmp %ebx,(%eax);");
    asm("loc_65DDF00: je loc_65DDF76;");
    asm("loc_65DDF02: add $0x30,%eax;");
    asm("loc_65DDF05: inc %edx;");
    asm("loc_65DDF06: cmp $_data_65E5D50,%eax;");
    asm("loc_65DDF0B: jl loc_65DDEFE;");
    asm("loc_65DDF0D: lea -0x18(%ebp),%eax;");
    asm("loc_65DDF10: push %eax;");
    asm("loc_65DDF11: push %ebx;");
    asm("loc_65DDF12: calll *_import_65E1104;");
    asm("loc_65DDF18: push $1;");
    asm("loc_65DDF1A: pop %esi;");
    asm("loc_65DDF1B: cmp %esi,%eax;");
    asm("loc_65DDF1D: jne loc_65DE044;");
    asm("loc_65DDF23: push $0x40;");
    asm("loc_65DDF25: andl $0,_data_65E68E4;");
    asm("loc_65DDF2C: pop %ecx;");
    asm("loc_65DDF2D: xor %eax,%eax;");
    asm("loc_65DDF2F: mov $_data_65E67E0,%edi;");
    asm("loc_65DDF34: cmp %esi,-0x18(%ebp);");
    asm("loc_65DDF37: rep stos %eax,(%edi);");
    asm("loc_65DDF39: stos %al,(%edi);");
    asm("loc_65DDF3A: mov %ebx,_data_65E66CC;");
    asm("loc_65DDF40: jbe loc_65DE031;");
    asm("loc_65DDF46: cmpb $0,-0x12(%ebp);");
    asm("loc_65DDF4A: je loc_65DE00C;");
    asm("loc_65DDF50: lea -0x11(%ebp),%ecx;");
    asm("loc_65DDF53: mov (%ecx),%dl;");
    asm("loc_65DDF55: test %dl,%dl;");
    asm("loc_65DDF57: je loc_65DE00C;");
    asm("loc_65DDF5D: movzbl -1(%ecx),%eax;");
    asm("loc_65DDF61: movzbl %dl,%edx;");
    asm("loc_65DDF64: cmp %edx,%eax;");
    asm("loc_65DDF66: ja loc_65DE000;");
    asm("loc_65DDF6C: orb $4,_data_65E67E1(%eax);");
    asm("loc_65DDF73: inc %eax;");
    asm("loc_65DDF74: jmp loc_65DDF64;");
    asm("loc_65DDF76: andl $0,-4(%ebp);");
    asm("loc_65DDF7A: push $0x40;");
    asm("loc_65DDF7C: pop %ecx;");
    asm("loc_65DDF7D: xor %eax,%eax;");
    asm("loc_65DDF7F: mov $_data_65E67E0,%edi;");
    asm("loc_65DDF84: lea (%edx,%edx,2),%esi;");
    asm("loc_65DDF87: rep stos %eax,(%edi);");
    asm("loc_65DDF89: shl $4,%esi;");
    asm("loc_65DDF8C: stos %al,(%edi);");
    asm("loc_65DDF8D: lea _data_65E5C70(%esi),%ebx;");
    asm("loc_65DDF93: cmpb $0,(%ebx);");
    asm("loc_65DDF96: mov %ebx,%ecx;");
    asm("loc_65DDF98: je loc_65DDFC6;");
    asm("loc_65DDF9A: mov 1(%ecx),%dl;");
    asm("loc_65DDF9D: test %dl,%dl;");
    asm("loc_65DDF9F: je loc_65DDFC6;");
    asm("loc_65DDFA1: movzbl (%ecx),%eax;");
    asm("loc_65DDFA4: movzbl %dl,%edi;");
    asm("loc_65DDFA7: cmp %edi,%eax;");
    asm("loc_65DDFA9: ja loc_65DDFBF;");
    asm("loc_65DDFAB: mov -4(%ebp),%edx;");
    asm("loc_65DDFAE: mov _data_65E5C58(%edx),%dl;");
    asm("loc_65DDFB4: or %dl,_data_65E67E1(%eax);");
    asm("loc_65DDFBA: inc %eax;");
    asm("loc_65DDFBB: cmp %edi,%eax;");
    asm("loc_65DDFBD: jbe loc_65DDFB4;");
    asm("loc_65DDFBF: inc %ecx;");
    asm("loc_65DDFC0: inc %ecx;");
    asm("loc_65DDFC1: cmpb $0,(%ecx);");
    asm("loc_65DDFC4: jne loc_65DDF9A;");
    asm("loc_65DDFC6: incl -4(%ebp);");
    asm("loc_65DDFC9: add $8,%ebx;");
    asm("loc_65DDFCC: cmpl $4,-4(%ebp);");
    asm("loc_65DDFD0: jb loc_65DDF93;");
    asm("loc_65DDFD2: mov 8(%ebp),%eax;");
    asm("loc_65DDFD5: movl $1,_data_65E66DC;");
    asm("loc_65DDFDF: push %eax;");
    asm("loc_65DDFE0: mov %eax,_data_65E66CC;");
    asm("loc_65DDFE5: call _sub_65DE0B8;");
    asm("loc_65DDFEA: lea _data_65E5C64(%esi),%esi;");
    asm("loc_65DDFF0: mov $_data_65E66D0,%edi;");
    asm("loc_65DDFF5: movsl (%esi),(%edi);");
    asm("loc_65DDFF6: movsl (%esi),(%edi);");
    asm("loc_65DDFF7: pop %ecx;");
    asm("loc_65DDFF8: mov %eax,_data_65E68E4;");
    asm("loc_65DDFFD: movsl (%esi),(%edi);");
    asm("loc_65DDFFE: jmp loc_65DE052;");
    asm("loc_65DE000: inc %ecx;");
    asm("loc_65DE001: inc %ecx;");
    asm("loc_65DE002: cmpb $0,-1(%ecx);");
    asm("loc_65DE006: jne loc_65DDF53;");
    asm("loc_65DE00C: mov %esi,%eax;");
    asm("loc_65DE00E: orb $8,_data_65E67E1(%eax);");
    asm("loc_65DE015: inc %eax;");
    asm("loc_65DE016: cmp $0xFF,%eax;");
    asm("loc_65DE01B: jb loc_65DE00E;");
    asm("loc_65DE01D: push %ebx;");
    asm("loc_65DE01E: call _sub_65DE0B8;");
    asm("loc_65DE023: pop %ecx;");
    asm("loc_65DE024: mov %eax,_data_65E68E4;");
    asm("loc_65DE029: mov %esi,_data_65E66DC;");
    asm("loc_65DE02F: jmp loc_65DE038;");
    asm("loc_65DE031: andl $0,_data_65E66DC;");
    asm("loc_65DE038: xor %eax,%eax;");
    asm("loc_65DE03A: mov $_data_65E66D0,%edi;");
    asm("loc_65DE03F: stos %eax,(%edi);");
    asm("loc_65DE040: stos %eax,(%edi);");
    asm("loc_65DE041: stos %eax,(%edi);");
    asm("loc_65DE042: jmp loc_65DE052;");
    asm("loc_65DE044: cmpl $0,_data_65E6400;");
    asm("loc_65DE04B: je loc_65DE05C;");
    asm("loc_65DE04D: call _sub_65DE0EB;");
    asm("loc_65DE052: call _sub_65DE114;");
    asm("loc_65DE057: jmp loc_65DDEE8;");
    asm("loc_65DE05C: or $0xFFFFFFFF,%esi;");
    asm("loc_65DE05F: push $0x19;");
    asm("loc_65DE061: call _sub_65DCF0C;");
    asm("loc_65DE066: pop %ecx;");
    asm("loc_65DE067: mov %esi,%eax;");
    asm("loc_65DE069: pop %edi;");
    asm("loc_65DE06A: pop %esi;");
    asm("loc_65DE06B: pop %ebx;");
    asm("loc_65DE06C: leave;");
    asm("loc_65DE06D: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65DE06E() // _getSystemCP
{
    __DEBUG_ASM(65DE06E);
    // chunk 0x65DE06E _sub_65DE06E
    asm("loc_65DE06E: mov 4(%esp),%eax;");
    asm("loc_65DE072: andl $0,_data_65E6400;");
    asm("loc_65DE079: cmp $0xFFFFFFFE,%eax;");
    asm("loc_65DE07C: jne loc_65DE08E;");
    asm("loc_65DE07E: movl $1,_data_65E6400;");
    asm("loc_65DE088: jmpl *_import_65E1100;");
    asm("loc_65DE08E: cmp $0xFFFFFFFD,%eax;");
    asm("loc_65DE091: jne loc_65DE0A3;");
    asm("loc_65DE093: movl $1,_data_65E6400;");
    asm("loc_65DE09D: jmpl *_import_65E1108;");
    asm("loc_65DE0A3: cmp $0xFFFFFFFC,%eax;");
    asm("loc_65DE0A6: jne loc_65DE0B7;");
    asm("loc_65DE0A8: mov _data_65E63F8,%eax;");
    asm("loc_65DE0AD: movl $1,_data_65E6400;");
    asm("loc_65DE0B7: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65DE0B8() // _CPtoLCID
{
    __DEBUG_ASM(65DE0B8);
    // chunk 0x65DE0B8 _sub_65DE0B8
    asm("loc_65DE0B8: mov 4(%esp),%eax;");
    asm("loc_65DE0BC: sub $0x3A4,%eax;");
    asm("loc_65DE0C1: je loc_65DE0E5;");
    asm("loc_65DE0C3: sub $4,%eax;");
    asm("loc_65DE0C6: je loc_65DE0DF;");
    asm("loc_65DE0C8: sub $0xD,%eax;");
    asm("loc_65DE0CB: je loc_65DE0D9;");
    asm("loc_65DE0CD: dec %eax;");
    asm("loc_65DE0CE: je loc_65DE0D3;");
    asm("loc_65DE0D0: xor %eax,%eax;");
    asm("loc_65DE0D2: ret;");
    asm("loc_65DE0D3: mov $0x404,%eax;");
    asm("loc_65DE0D8: ret;");
    asm("loc_65DE0D9: mov $0x412,%eax;");
    asm("loc_65DE0DE: ret;");
    asm("loc_65DE0DF: mov $0x804,%eax;");
    asm("loc_65DE0E4: ret;");
    asm("loc_65DE0E5: mov $0x411,%eax;");
    asm("loc_65DE0EA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65DE0EB() // _setSBCS
{
    __DEBUG_ASM(65DE0EB);
    // chunk 0x65DE0EB _sub_65DE0EB
    asm("loc_65DE0EB: push %edi;");
    asm("loc_65DE0EC: push $0x40;");
    asm("loc_65DE0EE: pop %ecx;");
    asm("loc_65DE0EF: xor %eax,%eax;");
    asm("loc_65DE0F1: mov $_data_65E67E0,%edi;");
    asm("loc_65DE0F6: rep stos %eax,(%edi);");
    asm("loc_65DE0F8: stos %al,(%edi);");
    asm("loc_65DE0F9: xor %eax,%eax;");
    asm("loc_65DE0FB: mov $_data_65E66D0,%edi;");
    asm("loc_65DE100: mov %eax,_data_65E66CC;");
    asm("loc_65DE105: mov %eax,_data_65E66DC;");
    asm("loc_65DE10A: mov %eax,_data_65E68E4;");
    asm("loc_65DE10F: stos %eax,(%edi);");
    asm("loc_65DE110: stos %eax,(%edi);");
    asm("loc_65DE111: stos %eax,(%edi);");
    asm("loc_65DE112: pop %edi;");
    asm("loc_65DE113: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65DE114() // _setSBUpLow
{
    __DEBUG_ASM(65DE114);
    // chunk 0x65DE114 _sub_65DE114
    asm("loc_65DE114: push %ebp;");
    asm("loc_65DE115: mov %esp,%ebp;");
    asm("loc_65DE117: sub $0x514,%esp;");
    asm("loc_65DE11D: lea -0x14(%ebp),%eax;");
    asm("loc_65DE120: push %esi;");
    asm("loc_65DE121: push %eax;");
    asm("loc_65DE122: pushl _data_65E66CC;");
    asm("loc_65DE128: calll *_import_65E1104;");
    asm("loc_65DE12E: cmp $1,%eax;");
    asm("loc_65DE131: jne loc_65DE24D;");
    asm("loc_65DE137: xor %eax,%eax;");
    asm("loc_65DE139: mov $0x100,%esi;");
    asm("loc_65DE13E: mov %al,-0x114(%ebp,%eax);");
    asm("loc_65DE145: inc %eax;");
    asm("loc_65DE146: cmp %esi,%eax;");
    asm("loc_65DE148: jb loc_65DE13E;");
    asm("loc_65DE14A: mov -0xE(%ebp),%al;");
    asm("loc_65DE14D: movb $0x20,-0x114(%ebp);");
    asm("loc_65DE154: test %al,%al;");
    asm("loc_65DE156: je loc_65DE18F;");
    asm("loc_65DE158: push %ebx;");
    asm("loc_65DE159: push %edi;");
    asm("loc_65DE15A: lea -0xD(%ebp),%edx;");
    asm("loc_65DE15D: movzbl (%edx),%ecx;");
    asm("loc_65DE160: movzbl %al,%eax;");
    asm("loc_65DE163: cmp %ecx,%eax;");
    asm("loc_65DE165: ja loc_65DE184;");
    asm("loc_65DE167: sub %eax,%ecx;");
    asm("loc_65DE169: lea -0x114(%ebp,%eax),%edi;");
    asm("loc_65DE170: inc %ecx;");
    asm("loc_65DE171: mov $0x20202020,%eax;");
    asm("loc_65DE176: mov %ecx,%ebx;");
    asm("loc_65DE178: shr $2,%ecx;");
    asm("loc_65DE17B: rep stos %eax,(%edi);");
    asm("loc_65DE17D: mov %ebx,%ecx;");
    asm("loc_65DE17F: and $3,%ecx;");
    asm("loc_65DE182: rep stos %al,(%edi);");
    asm("loc_65DE184: inc %edx;");
    asm("loc_65DE185: inc %edx;");
    asm("loc_65DE186: mov -1(%edx),%al;");
    asm("loc_65DE189: test %al,%al;");
    asm("loc_65DE18B: jne loc_65DE15D;");
    asm("loc_65DE18D: pop %edi;");
    asm("loc_65DE18E: pop %ebx;");
    asm("loc_65DE18F: push $0;");
    asm("loc_65DE191: lea -0x514(%ebp),%eax;");
    asm("loc_65DE197: pushl _data_65E68E4;");
    asm("loc_65DE19D: pushl _data_65E66CC;");
    asm("loc_65DE1A3: push %eax;");
    asm("loc_65DE1A4: lea -0x114(%ebp),%eax;");
    asm("loc_65DE1AA: push %esi;");
    asm("loc_65DE1AB: push %eax;");
    asm("loc_65DE1AC: push $1;");
    asm("loc_65DE1AE: call _sub_65DEB9F;");
    asm("loc_65DE1B3: push $0;");
    asm("loc_65DE1B5: lea -0x214(%ebp),%eax;");
    asm("loc_65DE1BB: pushl _data_65E66CC;");
    asm("loc_65DE1C1: push %esi;");
    asm("loc_65DE1C2: push %eax;");
    asm("loc_65DE1C3: lea -0x114(%ebp),%eax;");
    asm("loc_65DE1C9: push %esi;");
    asm("loc_65DE1CA: push %eax;");
    asm("loc_65DE1CB: push %esi;");
    asm("loc_65DE1CC: pushl _data_65E68E4;");
    asm("loc_65DE1D2: call _sub_65DEFD3;");
    asm("loc_65DE1D7: push $0;");
    asm("loc_65DE1D9: lea -0x314(%ebp),%eax;");
    asm("loc_65DE1DF: pushl _data_65E66CC;");
    asm("loc_65DE1E5: push %esi;");
    asm("loc_65DE1E6: push %eax;");
    asm("loc_65DE1E7: lea -0x114(%ebp),%eax;");
    asm("loc_65DE1ED: push %esi;");
    asm("loc_65DE1EE: push %eax;");
    asm("loc_65DE1EF: push $0x200;");
    asm("loc_65DE1F4: pushl _data_65E68E4;");
    asm("loc_65DE1FA: call _sub_65DEFD3;");
    asm("loc_65DE1FF: add $0x5C,%esp;");
    asm("loc_65DE202: xor %eax,%eax;");
    asm("loc_65DE204: lea -0x514(%ebp),%ecx;");
    asm("loc_65DE20A: mov (%ecx),%dx;");
    asm("loc_65DE20D: test $1,%dl;");
    asm("loc_65DE210: je loc_65DE228;");
    asm("loc_65DE212: orb $0x10,_data_65E67E1(%eax);");
    asm("loc_65DE219: mov -0x214(%ebp,%eax),%dl;");
    asm("loc_65DE220: mov %dl,_data_65E66E0(%eax);");
    asm("loc_65DE226: jmp loc_65DE244;");
    asm("loc_65DE228: test $2,%dl;");
    asm("loc_65DE22B: je loc_65DE23D;");
    asm("loc_65DE22D: orb $0x20,_data_65E67E1(%eax);");
    asm("loc_65DE234: mov -0x314(%ebp,%eax),%dl;");
    asm("loc_65DE23B: jmp loc_65DE220;");
    asm("loc_65DE23D: andb $0,_data_65E66E0(%eax);");
    asm("loc_65DE244: inc %eax;");
    asm("loc_65DE245: inc %ecx;");
    asm("loc_65DE246: inc %ecx;");
    asm("loc_65DE247: cmp %esi,%eax;");
    asm("loc_65DE249: jb loc_65DE20A;");
    asm("loc_65DE24B: jmp loc_65DE296;");
    asm("loc_65DE24D: xor %eax,%eax;");
    asm("loc_65DE24F: mov $0x100,%esi;");
    asm("loc_65DE254: cmp $0x41,%eax;");
    asm("loc_65DE257: jb loc_65DE272;");
    asm("loc_65DE259: cmp $0x5A,%eax;");
    asm("loc_65DE25C: ja loc_65DE272;");
    asm("loc_65DE25E: orb $0x10,_data_65E67E1(%eax);");
    asm("loc_65DE265: mov %al,%cl;");
    asm("loc_65DE267: add $0x20,%cl;");
    asm("loc_65DE26A: mov %cl,_data_65E66E0(%eax);");
    asm("loc_65DE270: jmp loc_65DE291;");
    asm("loc_65DE272: cmp $0x61,%eax;");
    asm("loc_65DE275: jb loc_65DE28A;");
    asm("loc_65DE277: cmp $0x7A,%eax;");
    asm("loc_65DE27A: ja loc_65DE28A;");
    asm("loc_65DE27C: orb $0x20,_data_65E67E1(%eax);");
    asm("loc_65DE283: mov %al,%cl;");
    asm("loc_65DE285: sub $0x20,%cl;");
    asm("loc_65DE288: jmp loc_65DE26A;");
    asm("loc_65DE28A: andb $0,_data_65E66E0(%eax);");
    asm("loc_65DE291: inc %eax;");
    asm("loc_65DE292: cmp %esi,%eax;");
    asm("loc_65DE294: jb loc_65DE254;");
    asm("loc_65DE296: pop %esi;");
    asm("loc_65DE297: leave;");
    asm("loc_65DE298: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65DE299() // ___initmbctable
{
    __DEBUG_ASM(65DE299);
    // chunk 0x65DE299 _sub_65DE299
    asm("loc_65DE299: cmpl $0,_data_65E7A48;");
    asm("loc_65DE2A0: jne loc_65DE2B4;");
    asm("loc_65DE2A2: push $0xFFFFFFFD;");
    asm("loc_65DE2A4: call _sub_65DDEC1;");
    asm("loc_65DE2A9: pop %ecx;");
    asm("loc_65DE2AA: movl $1,_data_65E7A48;");
    asm("loc_65DE2B4: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65DE2B5() // _strtol
{
    __DEBUG_ASM(65DE2B5);
    // chunk 0x65DE2B5 _sub_65DE2B5
    asm("loc_65DE2B5: push $0;");
    asm("loc_65DE2B7: pushl 0x10(%esp);");
    asm("loc_65DE2BB: pushl 0x10(%esp);");
    asm("loc_65DE2BF: pushl 0x10(%esp);");
    asm("loc_65DE2C3: call _sub_65DE2CC;");
    asm("loc_65DE2C8: add $0x10,%esp;");
    asm("loc_65DE2CB: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65DE2CC() // _strtoxl
{
    __DEBUG_ASM(65DE2CC);
    // chunk 0x65DE2CC _sub_65DE2CC
    asm("loc_65DE2CC: push %ebp;");
    asm("loc_65DE2CD: mov %esp,%ebp;");
    asm("loc_65DE2CF: sub $0xC,%esp;");
    asm("loc_65DE2D2: push %ebx;");
    asm("loc_65DE2D3: andl $0,-8(%ebp);");
    asm("loc_65DE2D7: push %esi;");
    asm("loc_65DE2D8: push %edi;");
    asm("loc_65DE2D9: mov 8(%ebp),%edi;");
    asm("loc_65DE2DC: mov (%edi),%bl;");
    asm("loc_65DE2DE: lea 1(%edi),%esi;");
    asm("loc_65DE2E1: mov %esi,-4(%ebp);");
    asm("loc_65DE2E4: cmpl $1,_data_65E5BE0;");
    asm("loc_65DE2EB: jle loc_65DE2FC;");
    asm("loc_65DE2ED: movzbl %bl,%eax;");
    asm("loc_65DE2F0: push $8;");
    asm("loc_65DE2F2: push %eax;");
    asm("loc_65DE2F3: call _sub_65DDB90;");
    asm("loc_65DE2F8: pop %ecx;");
    asm("loc_65DE2F9: pop %ecx;");
    asm("loc_65DE2FA: jmp loc_65DE30B;");
    asm("loc_65DE2FC: mov _off_65E59D0,%ecx;");
    asm("loc_65DE302: movzbl %bl,%eax;");
    asm("loc_65DE305: mov (%ecx,%eax,2),%al;");
    asm("loc_65DE308: and $8,%eax;");
    asm("loc_65DE30B: test %eax,%eax;");
    asm("loc_65DE30D: je loc_65DE314;");
    asm("loc_65DE30F: mov (%esi),%bl;");
    asm("loc_65DE311: inc %esi;");
    asm("loc_65DE312: jmp loc_65DE2E4;");
    asm("loc_65DE314: cmp $0x2D,%bl;");
    asm("loc_65DE317: mov %esi,-4(%ebp);");
    asm("loc_65DE31A: jne loc_65DE322;");
    asm("loc_65DE31C: orl $2,0x14(%ebp);");
    asm("loc_65DE320: jmp loc_65DE327;");
    asm("loc_65DE322: cmp $0x2B,%bl;");
    asm("loc_65DE325: jne loc_65DE32D;");
    asm("loc_65DE327: mov (%esi),%bl;");
    asm("loc_65DE329: inc %esi;");
    asm("loc_65DE32A: mov %esi,-4(%ebp);");
    asm("loc_65DE32D: mov 0x10(%ebp),%eax;");
    asm("loc_65DE330: test %eax,%eax;");
    asm("loc_65DE332: jl loc_65DE4C1;");
    asm("loc_65DE338: cmp $1,%eax;");
    asm("loc_65DE33B: je loc_65DE4C1;");
    asm("loc_65DE341: cmp $0x24,%eax;");
    asm("loc_65DE344: jg loc_65DE4C1;");
    asm("loc_65DE34A: push $0x10;");
    asm("loc_65DE34C: test %eax,%eax;");
    asm("loc_65DE34E: pop %ecx;");
    asm("loc_65DE34F: jne loc_65DE375;");
    asm("loc_65DE351: cmp $0x30,%bl;");
    asm("loc_65DE354: je loc_65DE35F;");
    asm("loc_65DE356: movl $0xA,0x10(%ebp);");
    asm("loc_65DE35D: jmp loc_65DE391;");
    asm("loc_65DE35F: mov (%esi),%al;");
    asm("loc_65DE361: cmp $0x78,%al;");
    asm("loc_65DE363: je loc_65DE372;");
    asm("loc_65DE365: cmp $0x58,%al;");
    asm("loc_65DE367: je loc_65DE372;");
    asm("loc_65DE369: movl $8,0x10(%ebp);");
    asm("loc_65DE370: jmp loc_65DE391;");
    asm("loc_65DE372: mov %ecx,0x10(%ebp);");
    asm("loc_65DE375: cmp %ecx,0x10(%ebp);");
    asm("loc_65DE378: jne loc_65DE391;");
    asm("loc_65DE37A: cmp $0x30,%bl;");
    asm("loc_65DE37D: jne loc_65DE391;");
    asm("loc_65DE37F: mov (%esi),%al;");
    asm("loc_65DE381: cmp $0x78,%al;");
    asm("loc_65DE383: je loc_65DE389;");
    asm("loc_65DE385: cmp $0x58,%al;");
    asm("loc_65DE387: jne loc_65DE391;");
    asm("loc_65DE389: mov 1(%esi),%bl;");
    asm("loc_65DE38C: inc %esi;");
    asm("loc_65DE38D: inc %esi;");
    asm("loc_65DE38E: mov %esi,-4(%ebp);");
    asm("loc_65DE391: or $0xFFFFFFFF,%eax;");
    asm("loc_65DE394: xor %edx,%edx;");
    asm("loc_65DE396: divl 0x10(%ebp);");
    asm("loc_65DE399: mov $0x103,%edi;");
    asm("loc_65DE39E: mov %eax,-0xC(%ebp);");
    asm("loc_65DE3A1: cmpl $1,_data_65E5BE0;");
    asm("loc_65DE3A8: movzbl %bl,%esi;");
    asm("loc_65DE3AB: jle loc_65DE3B9;");
    asm("loc_65DE3AD: push $4;");
    asm("loc_65DE3AF: push %esi;");
    asm("loc_65DE3B0: call _sub_65DDB90;");
    asm("loc_65DE3B5: pop %ecx;");
    asm("loc_65DE3B6: pop %ecx;");
    asm("loc_65DE3B7: jmp loc_65DE3C4;");
    asm("loc_65DE3B9: mov _off_65E59D0,%eax;");
    asm("loc_65DE3BE: mov (%eax,%esi,2),%al;");
    asm("loc_65DE3C1: and $4,%eax;");
    asm("loc_65DE3C4: test %eax,%eax;");
    asm("loc_65DE3C6: je loc_65DE3D0;");
    asm("loc_65DE3C8: movsbl %bl,%ecx;");
    asm("loc_65DE3CB: sub $0x30,%ecx;");
    asm("loc_65DE3CE: jmp loc_65DE402;");
    asm("loc_65DE3D0: cmpl $1,_data_65E5BE0;");
    asm("loc_65DE3D7: jle loc_65DE3E4;");
    asm("loc_65DE3D9: push %edi;");
    asm("loc_65DE3DA: push %esi;");
    asm("loc_65DE3DB: call _sub_65DDB90;");
    asm("loc_65DE3E0: pop %ecx;");
    asm("loc_65DE3E1: pop %ecx;");
    asm("loc_65DE3E2: jmp loc_65DE3EF;");
    asm("loc_65DE3E4: mov _off_65E59D0,%eax;");
    asm("loc_65DE3E9: mov (%eax,%esi,2),%ax;");
    asm("loc_65DE3ED: and %edi,%eax;");
    asm("loc_65DE3EF: test %eax,%eax;");
    asm("loc_65DE3F1: je loc_65DE43D;");
    asm("loc_65DE3F3: movsbl %bl,%eax;");
    asm("loc_65DE3F6: push %eax;");
    asm("loc_65DE3F7: call _sub_65DF222;");
    asm("loc_65DE3FC: pop %ecx;");
    asm("loc_65DE3FD: mov %eax,%ecx;");
    asm("loc_65DE3FF: sub $0x37,%ecx;");
    asm("loc_65DE402: cmp 0x10(%ebp),%ecx;");
    asm("loc_65DE405: jae loc_65DE43D;");
    asm("loc_65DE407: mov -8(%ebp),%esi;");
    asm("loc_65DE40A: orl $8,0x14(%ebp);");
    asm("loc_65DE40E: cmp -0xC(%ebp),%esi;");
    asm("loc_65DE411: jb loc_65DE427;");
    asm("loc_65DE413: jne loc_65DE421;");
    asm("loc_65DE415: or $0xFFFFFFFF,%eax;");
    asm("loc_65DE418: xor %edx,%edx;");
    asm("loc_65DE41A: divl 0x10(%ebp);");
    asm("loc_65DE41D: cmp %edx,%ecx;");
    asm("loc_65DE41F: jbe loc_65DE427;");
    asm("loc_65DE421: orl $4,0x14(%ebp);");
    asm("loc_65DE425: jmp loc_65DE430;");
    asm("loc_65DE427: imul 0x10(%ebp),%esi;");
    asm("loc_65DE42B: add %ecx,%esi;");
    asm("loc_65DE42D: mov %esi,-8(%ebp);");
    asm("loc_65DE430: mov -4(%ebp),%eax;");
    asm("loc_65DE433: incl -4(%ebp);");
    asm("loc_65DE436: mov (%eax),%bl;");
    asm("loc_65DE438: jmp loc_65DE3A1;");
    asm("loc_65DE43D: mov 0x14(%ebp),%eax;");
    asm("loc_65DE440: decl -4(%ebp);");
    asm("loc_65DE443: mov 0xC(%ebp),%ebx;");
    asm("loc_65DE446: test $8,%al;");
    asm("loc_65DE448: jne loc_65DE45A;");
    asm("loc_65DE44A: test %ebx,%ebx;");
    asm("loc_65DE44C: je loc_65DE454;");
    asm("loc_65DE44E: mov 8(%ebp),%eax;");
    asm("loc_65DE451: mov %eax,-4(%ebp);");
    asm("loc_65DE454: andl $0,-8(%ebp);");
    asm("loc_65DE458: jmp loc_65DE4A5;");
    asm("loc_65DE45A: test $4,%al;");
    asm("loc_65DE45C: mov $0x7FFFFFFF,%esi;");
    asm("loc_65DE461: jne loc_65DE47E;");
    asm("loc_65DE463: test $1,%al;");
    asm("loc_65DE465: jne loc_65DE4A5;");
    asm("loc_65DE467: and $2,%eax;");
    asm("loc_65DE46A: je loc_65DE475;");
    asm("loc_65DE46C: cmpl $0x80000000,-8(%ebp);");
    asm("loc_65DE473: ja loc_65DE47E;");
    asm("loc_65DE475: test %eax,%eax;");
    asm("loc_65DE477: jne loc_65DE4A5;");
    asm("loc_65DE479: cmp %esi,-8(%ebp);");
    asm("loc_65DE47C: jbe loc_65DE4A5;");
    asm("loc_65DE47E: call _sub_65DE88A;");
    asm("loc_65DE483: testb $1,0x14(%ebp);");
    asm("loc_65DE487: movl $0x22,(%eax);");
    asm("loc_65DE48D: je loc_65DE495;");
    asm("loc_65DE48F: orl $0xFFFFFFFF,-8(%ebp);");
    asm("loc_65DE493: jmp loc_65DE4A5;");
    asm("loc_65DE495: mov 0x14(%ebp),%eax;");
    asm("loc_65DE498: and $2,%al;");
    asm("loc_65DE49A: neg %al;");
    asm("loc_65DE49C: sbb %eax,%eax;");
    asm("loc_65DE49E: neg %eax;");
    asm("loc_65DE4A0: add %esi,%eax;");
    asm("loc_65DE4A2: mov %eax,-8(%ebp);");
    asm("loc_65DE4A5: test %ebx,%ebx;");
    asm("loc_65DE4A7: je loc_65DE4AE;");
    asm("loc_65DE4A9: mov -4(%ebp),%eax;");
    asm("loc_65DE4AC: mov %eax,(%ebx);");
    asm("loc_65DE4AE: testb $2,0x14(%ebp);");
    asm("loc_65DE4B2: je loc_65DE4BC;");
    asm("loc_65DE4B4: mov -8(%ebp),%eax;");
    asm("loc_65DE4B7: neg %eax;");
    asm("loc_65DE4B9: mov %eax,-8(%ebp);");
    asm("loc_65DE4BC: mov -8(%ebp),%eax;");
    asm("loc_65DE4BF: jmp loc_65DE4CC;");
    asm("loc_65DE4C1: mov 0xC(%ebp),%eax;");
    asm("loc_65DE4C4: test %eax,%eax;");
    asm("loc_65DE4C6: je loc_65DE4CA;");
    asm("loc_65DE4C8: mov %edi,(%eax);");
    asm("loc_65DE4CA: xor %eax,%eax;");
    asm("loc_65DE4CC: pop %edi;");
    asm("loc_65DE4CD: pop %esi;");
    asm("loc_65DE4CE: pop %ebx;");
    asm("loc_65DE4CF: leave;");
    asm("loc_65DE4D0: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65DE560() // _strncmp
{
    __DEBUG_ASM(65DE560);
    // chunk 0x65DE560 _sub_65DE560
    asm("loc_65DE560: push %ebp;");
    asm("loc_65DE561: mov %esp,%ebp;");
    asm("loc_65DE563: push %edi;");
    asm("loc_65DE564: push %esi;");
    asm("loc_65DE565: push %ebx;");
    asm("loc_65DE566: mov 0x10(%ebp),%ecx;");
    asm("loc_65DE569: jecxz loc_65DE591;");
    asm("loc_65DE56B: mov %ecx,%ebx;");
    asm("loc_65DE56D: mov 8(%ebp),%edi;");
    asm("loc_65DE570: mov %edi,%esi;");
    asm("loc_65DE572: xor %eax,%eax;");
    asm("loc_65DE574: repne scas (%edi),%al;");
    asm("loc_65DE576: neg %ecx;");
    asm("loc_65DE578: add %ebx,%ecx;");
    asm("loc_65DE57A: mov %esi,%edi;");
    asm("loc_65DE57C: mov 0xC(%ebp),%esi;");
    asm("loc_65DE57F: repe cmpsb (%edi),(%esi);");
    asm("loc_65DE581: mov -1(%esi),%al;");
    asm("loc_65DE584: xor %ecx,%ecx;");
    asm("loc_65DE586: cmp -1(%edi),%al;");
    asm("loc_65DE589: ja loc_65DE58F;");
    asm("loc_65DE58B: je loc_65DE591;");
    asm("loc_65DE58D: dec %ecx;");
    asm("loc_65DE58E: dec %ecx;");
    asm("loc_65DE58F: not %ecx;");
    asm("loc_65DE591: mov %ecx,%eax;");
    asm("loc_65DE593: pop %ebx;");
    asm("loc_65DE594: pop %esi;");
    asm("loc_65DE595: pop %edi;");
    asm("loc_65DE596: leave;");
    asm("loc_65DE597: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65DE5A0() // __alloca_probe
{
    __DEBUG_ASM(65DE5A0);
    // chunk 0x65DE5A0 _sub_65DE5A0
    asm("loc_65DE5A0: push %ecx;");
    asm("loc_65DE5A1: cmp $0x1000,%eax;");
    asm("loc_65DE5A6: lea 8(%esp),%ecx;");
    asm("loc_65DE5AA: jb loc_65DE5C0;");
    asm("loc_65DE5AC: sub $0x1000,%ecx;");
    asm("loc_65DE5B2: sub $0x1000,%eax;");
    asm("loc_65DE5B7: test %eax,(%ecx);");
    asm("loc_65DE5B9: cmp $0x1000,%eax;");
    asm("loc_65DE5BE: jae loc_65DE5AC;");
    asm("loc_65DE5C0: sub %eax,%ecx;");
    asm("loc_65DE5C2: mov %esp,%eax;");
    asm("loc_65DE5C4: test %eax,(%ecx);");
    asm("loc_65DE5C6: mov %ecx,%esp;");
    asm("loc_65DE5C8: mov (%eax),%ecx;");
    asm("loc_65DE5CA: mov 4(%eax),%eax;");
    asm("loc_65DE5CD: push %eax;");
    asm("loc_65DE5CE: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65DE5CF() // ___crtMessageBoxA
{
    __DEBUG_ASM(65DE5CF);
    // chunk 0x65DE5CF _sub_65DE5CF
    asm("loc_65DE5CF: push %ebx;");
    asm("loc_65DE5D0: xor %ebx,%ebx;");
    asm("loc_65DE5D2: cmp %ebx,_data_65E6404;");
    asm("loc_65DE5D8: push %esi;");
    asm("loc_65DE5D9: push %edi;");
    asm("loc_65DE5DA: jne loc_65DE61E;");
    asm("loc_65DE5DC: push $_data_65E1B00;");
    asm("loc_65DE5E1: calll *_import_65E1110;");
    asm("loc_65DE5E7: mov %eax,%edi;");
    asm("loc_65DE5E9: cmp %ebx,%edi;");
    asm("loc_65DE5EB: je loc_65DE654;");
    asm("loc_65DE5ED: mov _import_65E110C,%esi;");
    asm("loc_65DE5F3: push $_data_65E1AF4;");
    asm("loc_65DE5F8: push %edi;");
    asm("loc_65DE5F9: call *%esi;");
    asm("loc_65DE5FB: test %eax,%eax;");
    asm("loc_65DE5FD: mov %eax,_data_65E6404;");
    asm("loc_65DE602: je loc_65DE654;");
    asm("loc_65DE604: push $_data_65E1AE4;");
    asm("loc_65DE609: push %edi;");
    asm("loc_65DE60A: call *%esi;");
    asm("loc_65DE60C: push $_data_65E1AD0;");
    asm("loc_65DE611: push %edi;");
    asm("loc_65DE612: mov %eax,_data_65E6408;");
    asm("loc_65DE617: call *%esi;");
    asm("loc_65DE619: mov %eax,_data_65E640C;");
    asm("loc_65DE61E: mov _data_65E6408,%eax;");
    asm("loc_65DE623: test %eax,%eax;");
    asm("loc_65DE625: je loc_65DE63D;");
    asm("loc_65DE627: call *%eax;");
    asm("loc_65DE629: mov %eax,%ebx;");
    asm("loc_65DE62B: test %ebx,%ebx;");
    asm("loc_65DE62D: je loc_65DE63D;");
    asm("loc_65DE62F: mov _data_65E640C,%eax;");
    asm("loc_65DE634: test %eax,%eax;");
    asm("loc_65DE636: je loc_65DE63D;");
    asm("loc_65DE638: push %ebx;");
    asm("loc_65DE639: call *%eax;");
    asm("loc_65DE63B: mov %eax,%ebx;");
    asm("loc_65DE63D: pushl 0x18(%esp);");
    asm("loc_65DE641: pushl 0x18(%esp);");
    asm("loc_65DE645: pushl 0x18(%esp);");
    asm("loc_65DE649: push %ebx;");
    asm("loc_65DE64A: calll *_data_65E6404;");
    asm("loc_65DE650: pop %edi;");
    asm("loc_65DE651: pop %esi;");
    asm("loc_65DE652: pop %ebx;");
    asm("loc_65DE653: ret;");
    asm("loc_65DE654: xor %eax,%eax;");
    asm("loc_65DE656: jmp loc_65DE650;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65DE658() // _raise
{
    __DEBUG_ASM(65DE658);
    // chunk 0x65DE658 _sub_65DE658
    asm("loc_65DE658: push %ebp;");
    asm("loc_65DE659: mov %esp,%ebp;");
    asm("loc_65DE65B: sub $0xC,%esp;");
    asm("loc_65DE65E: mov 8(%ebp),%eax;");
    asm("loc_65DE661: andl $0,-4(%ebp);");
    asm("loc_65DE665: dec %eax;");
    asm("loc_65DE666: push %ebx;");
    asm("loc_65DE667: push %esi;");
    asm("loc_65DE668: dec %eax;");
    asm("loc_65DE669: push %edi;");
    asm("loc_65DE66A: je loc_65DE6D3;");
    asm("loc_65DE66C: dec %eax;");
    asm("loc_65DE66D: dec %eax;");
    asm("loc_65DE66E: je loc_65DE6B6;");
    asm("loc_65DE670: sub $4,%eax;");
    asm("loc_65DE673: je loc_65DE6B6;");
    asm("loc_65DE675: sub $3,%eax;");
    asm("loc_65DE678: je loc_65DE6B6;");
    asm("loc_65DE67A: sub $4,%eax;");
    asm("loc_65DE67D: je loc_65DE6A9;");
    asm("loc_65DE67F: sub $6,%eax;");
    asm("loc_65DE682: je loc_65DE69C;");
    asm("loc_65DE684: dec %eax;");
    asm("loc_65DE685: je loc_65DE68F;");
    asm("loc_65DE687: or $0xFFFFFFFF,%eax;");
    asm("loc_65DE68A: jmp loc_65DE7D5;");
    asm("loc_65DE68F: mov _data_65E6418,%ebx;");
    asm("loc_65DE695: mov $_data_65E6418,%edi;");
    asm("loc_65DE69A: jmp loc_65DE6DE;");
    asm("loc_65DE69C: mov _data_65E6414,%ebx;");
    asm("loc_65DE6A2: mov $_data_65E6414,%edi;");
    asm("loc_65DE6A7: jmp loc_65DE6DE;");
    asm("loc_65DE6A9: mov _data_65E641C,%ebx;");
    asm("loc_65DE6AF: mov $_data_65E641C,%edi;");
    asm("loc_65DE6B4: jmp loc_65DE6DE;");
    asm("loc_65DE6B6: call _sub_65D8F61;");
    asm("loc_65DE6BB: mov %eax,%esi;");
    asm("loc_65DE6BD: pushl 0x50(%esi);");
    asm("loc_65DE6C0: pushl 8(%ebp);");
    asm("loc_65DE6C3: call _sub_65DE7DA;");
    asm("loc_65DE6C8: mov %eax,%edi;");
    asm("loc_65DE6CA: pop %ecx;");
    asm("loc_65DE6CB: add $8,%edi;");
    asm("loc_65DE6CE: pop %ecx;");
    asm("loc_65DE6CF: mov (%edi),%ebx;");
    asm("loc_65DE6D1: jmp loc_65DE6F0;");
    asm("loc_65DE6D3: mov _data_65E6410,%ebx;");
    asm("loc_65DE6D9: mov $_data_65E6410,%edi;");
    asm("loc_65DE6DE: push $1;");
    asm("loc_65DE6E0: movl $1,-4(%ebp);");
    asm("loc_65DE6E7: call _sub_65DCEAB;");
    asm("loc_65DE6EC: mov 8(%ebp),%esi;");
    asm("loc_65DE6EF: pop %ecx;");
    asm("loc_65DE6F0: cmp $1,%ebx;");
    asm("loc_65DE6F3: jne loc_65DE70B;");
    asm("loc_65DE6F5: cmpl $0,-4(%ebp);");
    asm("loc_65DE6F9: je loc_65DE7D3;");
    asm("loc_65DE6FF: push %ebx;");
    asm("loc_65DE700: call _sub_65DCF0C;");
    asm("loc_65DE705: pop %ecx;");
    asm("loc_65DE706: jmp loc_65DE7D3;");
    asm("loc_65DE70B: xor %ecx,%ecx;");
    asm("loc_65DE70D: cmp %ecx,%ebx;");
    asm("loc_65DE70F: jne loc_65DE725;");
    asm("loc_65DE711: cmp %ecx,-4(%ebp);");
    asm("loc_65DE714: je loc_65DE71E;");
    asm("loc_65DE716: push $1;");
    asm("loc_65DE718: call _sub_65DCF0C;");
    asm("loc_65DE71D: pop %ecx;");
    asm("loc_65DE71E: push $3;");
    asm("loc_65DE720: call _sub_65D9A6E;");
    asm("loc_65DE725: mov 8(%ebp),%eax;");
    asm("loc_65DE728: cmp $8,%eax;");
    asm("loc_65DE72B: je loc_65DE737;");
    asm("loc_65DE72D: cmp $0xB,%eax;");
    asm("loc_65DE730: je loc_65DE737;");
    asm("loc_65DE732: cmp $4,%eax;");
    asm("loc_65DE735: jne loc_65DE752;");
    asm("loc_65DE737: mov 0x54(%esi),%edx;");
    asm("loc_65DE73A: cmp $8,%eax;");
    asm("loc_65DE73D: mov %edx,-8(%ebp);");
    asm("loc_65DE740: mov %ecx,0x54(%esi);");
    asm("loc_65DE743: jne loc_65DE78E;");
    asm("loc_65DE745: mov 0x58(%esi),%edx;");
    asm("loc_65DE748: movl $0x8C,0x58(%esi);");
    asm("loc_65DE74F: mov %edx,-0xC(%ebp);");
    asm("loc_65DE752: cmp $8,%eax;");
    asm("loc_65DE755: jne loc_65DE78E;");
    asm("loc_65DE757: mov _data_65E5728,%ecx;");
    asm("loc_65DE75D: mov _data_65E572C,%eax;");
    asm("loc_65DE762: add %ecx,%eax;");
    asm("loc_65DE764: cmp %eax,%ecx;");
    asm("loc_65DE766: jge loc_65DE790;");
    asm("loc_65DE768: lea (%ecx,%ecx,2),%eax;");
    asm("loc_65DE76B: shl $2,%eax;");
    asm("loc_65DE76E: mov 0x50(%esi),%edx;");
    asm("loc_65DE771: add $0xC,%eax;");
    asm("loc_65DE774: andl $0,-4(%edx,%eax);");
    asm("loc_65DE779: mov _data_65E5728,%edx;");
    asm("loc_65DE77F: mov _data_65E572C,%edi;");
    asm("loc_65DE785: inc %ecx;");
    asm("loc_65DE786: add %edx,%edi;");
    asm("loc_65DE788: cmp %edi,%ecx;");
    asm("loc_65DE78A: jl loc_65DE76E;");
    asm("loc_65DE78C: jmp loc_65DE790;");
    asm("loc_65DE78E: mov %ecx,(%edi);");
    asm("loc_65DE790: cmpl $0,-4(%ebp);");
    asm("loc_65DE794: je loc_65DE79E;");
    asm("loc_65DE796: push $1;");
    asm("loc_65DE798: call _sub_65DCF0C;");
    asm("loc_65DE79D: pop %ecx;");
    asm("loc_65DE79E: cmpl $8,8(%ebp);");
    asm("loc_65DE7A2: jne loc_65DE7AF;");
    asm("loc_65DE7A4: pushl 0x58(%esi);");
    asm("loc_65DE7A7: push $8;");
    asm("loc_65DE7A9: call *%ebx;");
    asm("loc_65DE7AB: pop %ecx;");
    asm("loc_65DE7AC: pop %ecx;");
    asm("loc_65DE7AD: jmp loc_65DE7C1;");
    asm("loc_65DE7AF: pushl 8(%ebp);");
    asm("loc_65DE7B2: call *%ebx;");
    asm("loc_65DE7B4: cmpl $0xB,8(%ebp);");
    asm("loc_65DE7B8: pop %ecx;");
    asm("loc_65DE7B9: je loc_65DE7C1;");
    asm("loc_65DE7BB: cmpl $4,8(%ebp);");
    asm("loc_65DE7BF: jne loc_65DE7D3;");
    asm("loc_65DE7C1: mov -8(%ebp),%eax;");
    asm("loc_65DE7C4: cmpl $8,8(%ebp);");
    asm("loc_65DE7C8: mov %eax,0x54(%esi);");
    asm("loc_65DE7CB: jne loc_65DE7D3;");
    asm("loc_65DE7CD: mov -0xC(%ebp),%eax;");
    asm("loc_65DE7D0: mov %eax,0x58(%esi);");
    asm("loc_65DE7D3: xor %eax,%eax;");
    asm("loc_65DE7D5: pop %edi;");
    asm("loc_65DE7D6: pop %esi;");
    asm("loc_65DE7D7: pop %ebx;");
    asm("loc_65DE7D8: leave;");
    asm("loc_65DE7D9: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65DE7DA() // _siglookup
{
    __DEBUG_ASM(65DE7DA);
    // chunk 0x65DE7DA _sub_65DE7DA
    asm("loc_65DE7DA: mov 8(%esp),%edx;");
    asm("loc_65DE7DE: mov _data_65E5734,%ecx;");
    asm("loc_65DE7E4: push %esi;");
    asm("loc_65DE7E5: mov 8(%esp),%esi;");
    asm("loc_65DE7E9: cmp %esi,4(%edx);");
    asm("loc_65DE7EC: push %edi;");
    asm("loc_65DE7ED: mov %edx,%eax;");
    asm("loc_65DE7EF: je loc_65DE803;");
    asm("loc_65DE7F1: lea (%ecx,%ecx,2),%edi;");
    asm("loc_65DE7F4: lea (%edx,%edi,4),%edi;");
    asm("loc_65DE7F7: add $0xC,%eax;");
    asm("loc_65DE7FA: cmp %edi,%eax;");
    asm("loc_65DE7FC: jae loc_65DE803;");
    asm("loc_65DE7FE: cmp %esi,4(%eax);");
    asm("loc_65DE801: jne loc_65DE7F7;");
    asm("loc_65DE803: lea (%ecx,%ecx,2),%ecx;");
    asm("loc_65DE806: lea (%edx,%ecx,4),%ecx;");
    asm("loc_65DE809: cmp %ecx,%eax;");
    asm("loc_65DE80B: jae loc_65DE812;");
    asm("loc_65DE80D: cmp %esi,4(%eax);");
    asm("loc_65DE810: je loc_65DE814;");
    asm("loc_65DE812: xor %eax,%eax;");
    asm("loc_65DE814: pop %edi;");
    asm("loc_65DE815: pop %esi;");
    asm("loc_65DE816: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65DE817() // __dosmaperr
{
    __DEBUG_ASM(65DE817);
    // chunk 0x65DE817 _sub_65DE817
    asm("loc_65DE817: push %esi;");
    asm("loc_65DE818: call _sub_65DE893;");
    asm("loc_65DE81D: mov 8(%esp),%ecx;");
    asm("loc_65DE821: xor %esi,%esi;");
    asm("loc_65DE823: mov %ecx,(%eax);");
    asm("loc_65DE825: mov $_data_65E5D50,%eax;");
    asm("loc_65DE82A: cmp (%eax),%ecx;");
    asm("loc_65DE82C: je loc_65DE850;");
    asm("loc_65DE82E: add $8,%eax;");
    asm("loc_65DE831: inc %esi;");
    asm("loc_65DE832: cmp $_data_65E5EB8,%eax;");
    asm("loc_65DE837: jl loc_65DE82A;");
    asm("loc_65DE839: cmp $0x13,%ecx;");
    asm("loc_65DE83C: jb loc_65DE860;");
    asm("loc_65DE83E: cmp $0x24,%ecx;");
    asm("loc_65DE841: ja loc_65DE860;");
    asm("loc_65DE843: call _sub_65DE88A;");
    asm("loc_65DE848: movl $0xD,(%eax);");
    asm("loc_65DE84E: pop %esi;");
    asm("loc_65DE84F: ret;");
    asm("loc_65DE850: call _sub_65DE88A;");
    asm("loc_65DE855: mov _data_65E5D54(,%esi,8),%ecx;");
    asm("loc_65DE85C: pop %esi;");
    asm("loc_65DE85D: mov %ecx,(%eax);");
    asm("loc_65DE85F: ret;");
    asm("loc_65DE860: cmp $0xBC,%ecx;");
    asm("loc_65DE866: jb loc_65DE87D;");
    asm("loc_65DE868: cmp $0xCA,%ecx;");
    asm("loc_65DE86E: ja loc_65DE87D;");
    asm("loc_65DE870: call _sub_65DE88A;");
    asm("loc_65DE875: movl $8,(%eax);");
    asm("loc_65DE87B: pop %esi;");
    asm("loc_65DE87C: ret;");
    asm("loc_65DE87D: call _sub_65DE88A;");
    asm("loc_65DE882: movl $0x16,(%eax);");
    asm("loc_65DE888: pop %esi;");
    asm("loc_65DE889: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65DE88A() // __errno
{
    __DEBUG_ASM(65DE88A);
    // chunk 0x65DE88A _sub_65DE88A
    asm("loc_65DE88A: call _sub_65D8F61;");
    asm("loc_65DE88F: add $8,%eax;");
    asm("loc_65DE892: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65DE893() // ___doserrno
{
    __DEBUG_ASM(65DE893);
    // chunk 0x65DE893 _sub_65DE893
    asm("loc_65DE893: call _sub_65D8F61;");
    asm("loc_65DE898: add $0xC,%eax;");
    asm("loc_65DE89B: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65DE89C() // __free_osfhnd
{
    __DEBUG_ASM(65DE89C);
    // chunk 0x65DE89C _sub_65DE89C
    asm("loc_65DE89C: mov 4(%esp),%ecx;");
    asm("loc_65DE8A0: push %esi;");
    asm("loc_65DE8A1: cmp _data_65E7A40,%ecx;");
    asm("loc_65DE8A7: push %edi;");
    asm("loc_65DE8A8: jae loc_65DE902;");
    asm("loc_65DE8AA: mov %ecx,%eax;");
    asm("loc_65DE8AC: sar $5,%eax;");
    asm("loc_65DE8AF: lea _data_65E7940(,%eax,4),%edi;");
    asm("loc_65DE8B6: mov %ecx,%eax;");
    asm("loc_65DE8B8: and $0x1F,%eax;");
    asm("loc_65DE8BB: lea (%eax,%eax,8),%esi;");
    asm("loc_65DE8BE: mov (%edi),%eax;");
    asm("loc_65DE8C0: shl $2,%esi;");
    asm("loc_65DE8C3: add %esi,%eax;");
    asm("loc_65DE8C5: testb $1,4(%eax);");
    asm("loc_65DE8C9: je loc_65DE902;");
    asm("loc_65DE8CB: cmpl $0xFFFFFFFF,(%eax);");
    asm("loc_65DE8CE: je loc_65DE902;");
    asm("loc_65DE8D0: cmpl $1,_data_65E6130;");
    asm("loc_65DE8D7: jne loc_65DE8F8;");
    asm("loc_65DE8D9: xor %eax,%eax;");
    asm("loc_65DE8DB: sub %eax,%ecx;");
    asm("loc_65DE8DD: je loc_65DE8EF;");
    asm("loc_65DE8DF: dec %ecx;");
    asm("loc_65DE8E0: je loc_65DE8EA;");
    asm("loc_65DE8E2: dec %ecx;");
    asm("loc_65DE8E3: jne loc_65DE8F8;");
    asm("loc_65DE8E5: push %eax;");
    asm("loc_65DE8E6: push $0xFFFFFFF4;");
    asm("loc_65DE8E8: jmp loc_65DE8F2;");
    asm("loc_65DE8EA: push %eax;");
    asm("loc_65DE8EB: push $0xFFFFFFF5;");
    asm("loc_65DE8ED: jmp loc_65DE8F2;");
    asm("loc_65DE8EF: push %eax;");
    asm("loc_65DE8F0: push $0xFFFFFFF6;");
    asm("loc_65DE8F2: calll *_import_65E1114;");
    asm("loc_65DE8F8: mov (%edi),%eax;");
    asm("loc_65DE8FA: orl $0xFFFFFFFF,(%eax,%esi);");
    asm("loc_65DE8FE: xor %eax,%eax;");
    asm("loc_65DE900: jmp loc_65DE918;");
    asm("loc_65DE902: call _sub_65DE88A;");
    asm("loc_65DE907: movl $9,(%eax);");
    asm("loc_65DE90D: call _sub_65DE893;");
    asm("loc_65DE912: andl $0,(%eax);");
    asm("loc_65DE915: or $0xFFFFFFFF,%eax;");
    asm("loc_65DE918: pop %edi;");
    asm("loc_65DE919: pop %esi;");
    asm("loc_65DE91A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65DE91B() // __get_osfhandle
{
    __DEBUG_ASM(65DE91B);
    // chunk 0x65DE91B _sub_65DE91B
    asm("loc_65DE91B: mov 4(%esp),%eax;");
    asm("loc_65DE91F: cmp _data_65E7A40,%eax;");
    asm("loc_65DE925: jae loc_65DE946;");
    asm("loc_65DE927: mov %eax,%ecx;");
    asm("loc_65DE929: and $0x1F,%eax;");
    asm("loc_65DE92C: sar $5,%ecx;");
    asm("loc_65DE92F: lea (%eax,%eax,8),%eax;");
    asm("loc_65DE932: mov _data_65E7940(,%ecx,4),%ecx;");
    asm("loc_65DE939: testb $1,4(%ecx,%eax,4);");
    asm("loc_65DE93E: lea (%ecx,%eax,4),%eax;");
    asm("loc_65DE941: je loc_65DE946;");
    asm("loc_65DE943: mov (%eax),%eax;");
    asm("loc_65DE945: ret;");
    asm("loc_65DE946: call _sub_65DE88A;");
    asm("loc_65DE94B: movl $9,(%eax);");
    asm("loc_65DE951: call _sub_65DE893;");
    asm("loc_65DE956: andl $0,(%eax);");
    asm("loc_65DE959: or $0xFFFFFFFF,%eax;");
    asm("loc_65DE95C: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65DE95D() // __lock_fhandle
{
    __DEBUG_ASM(65DE95D);
    // chunk 0x65DE95D _sub_65DE95D
    asm("loc_65DE95D: mov 4(%esp),%eax;");
    asm("loc_65DE961: push %ebx;");
    asm("loc_65DE962: mov %eax,%ecx;");
    asm("loc_65DE964: and $0x1F,%eax;");
    asm("loc_65DE967: sar $5,%ecx;");
    asm("loc_65DE96A: push %esi;");
    asm("loc_65DE96B: push %edi;");
    asm("loc_65DE96C: mov _data_65E7940(,%ecx,4),%esi;");
    asm("loc_65DE973: lea _data_65E7940(,%ecx,4),%ebx;");
    asm("loc_65DE97A: lea (%eax,%eax,8),%edi;");
    asm("loc_65DE97D: shl $2,%edi;");
    asm("loc_65DE980: add %edi,%esi;");
    asm("loc_65DE982: cmpl $0,8(%esi);");
    asm("loc_65DE986: jne loc_65DE9AB;");
    asm("loc_65DE988: push $0x11;");
    asm("loc_65DE98A: call _sub_65DCEAB;");
    asm("loc_65DE98F: cmpl $0,8(%esi);");
    asm("loc_65DE993: pop %ecx;");
    asm("loc_65DE994: jne loc_65DE9A3;");
    asm("loc_65DE996: lea 0xC(%esi),%eax;");
    asm("loc_65DE999: push %eax;");
    asm("loc_65DE99A: calll *_import_65E10DC;");
    asm("loc_65DE9A0: incl 8(%esi);");
    asm("loc_65DE9A3: push $0x11;");
    asm("loc_65DE9A5: call _sub_65DCF0C;");
    asm("loc_65DE9AA: pop %ecx;");
    asm("loc_65DE9AB: mov (%ebx),%eax;");
    asm("loc_65DE9AD: lea 0xC(%eax,%edi),%eax;");
    asm("loc_65DE9B1: push %eax;");
    asm("loc_65DE9B2: calll *_import_65E10E0;");
    asm("loc_65DE9B8: pop %edi;");
    asm("loc_65DE9B9: pop %esi;");
    asm("loc_65DE9BA: pop %ebx;");
    asm("loc_65DE9BB: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65DE9BC() // __unlock_fhandle
{
    __DEBUG_ASM(65DE9BC);
    // chunk 0x65DE9BC _sub_65DE9BC
    asm("loc_65DE9BC: mov 4(%esp),%eax;");
    asm("loc_65DE9C0: mov %eax,%ecx;");
    asm("loc_65DE9C2: and $0x1F,%eax;");
    asm("loc_65DE9C5: sar $5,%ecx;");
    asm("loc_65DE9C8: lea (%eax,%eax,8),%eax;");
    asm("loc_65DE9CB: mov _data_65E7940(,%ecx,4),%ecx;");
    asm("loc_65DE9D2: lea 0xC(%ecx,%eax,4),%eax;");
    asm("loc_65DE9D6: push %eax;");
    asm("loc_65DE9D7: calll *_import_65E10AC;");
    asm("loc_65DE9DD: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65DE9DE() // __fcloseall
{
    __DEBUG_ASM(65DE9DE);
    // chunk 0x65DE9DE _sub_65DE9DE
    asm("loc_65DE9DE: push %ebx;");
    asm("loc_65DE9DF: push %edi;");
    asm("loc_65DE9E0: push $2;");
    asm("loc_65DE9E2: xor %ebx,%ebx;");
    asm("loc_65DE9E4: call _sub_65DCEAB;");
    asm("loc_65DE9E9: pop %ecx;");
    asm("loc_65DE9EA: push $3;");
    asm("loc_65DE9EC: pop %edi;");
    asm("loc_65DE9ED: cmp %edi,_data_65E7900;");
    asm("loc_65DE9F3: jle loc_65DEA52;");
    asm("loc_65DE9F5: push %esi;");
    asm("loc_65DE9F6: mov _data_65E68E8,%eax;");
    asm("loc_65DE9FB: mov %edi,%esi;");
    asm("loc_65DE9FD: shl $2,%esi;");
    asm("loc_65DEA00: mov (%esi,%eax),%eax;");
    asm("loc_65DEA03: test %eax,%eax;");
    asm("loc_65DEA05: je loc_65DEA48;");
    asm("loc_65DEA07: testb $0x83,0xC(%eax);");
    asm("loc_65DEA0B: je loc_65DEA1A;");
    asm("loc_65DEA0D: push %eax;");
    asm("loc_65DEA0E: call _sub_65DF35D;");
    asm("loc_65DEA13: cmp $0xFFFFFFFF,%eax;");
    asm("loc_65DEA16: pop %ecx;");
    asm("loc_65DEA17: je loc_65DEA1A;");
    asm("loc_65DEA19: inc %ebx;");
    asm("loc_65DEA1A: cmp $0x14,%edi;");
    asm("loc_65DEA1D: jl loc_65DEA48;");
    asm("loc_65DEA1F: mov _data_65E68E8,%eax;");
    asm("loc_65DEA24: mov (%esi,%eax),%eax;");
    asm("loc_65DEA27: add $0x20,%eax;");
    asm("loc_65DEA2A: push %eax;");
    asm("loc_65DEA2B: calll *_import_65E10A8;");
    asm("loc_65DEA31: mov _data_65E68E8,%eax;");
    asm("loc_65DEA36: pushl (%esi,%eax);");
    asm("loc_65DEA39: call _sub_65D7F23;");
    asm("loc_65DEA3E: mov _data_65E68E8,%eax;");
    asm("loc_65DEA43: pop %ecx;");
    asm("loc_65DEA44: andl $0,(%esi,%eax);");
    asm("loc_65DEA48: inc %edi;");
    asm("loc_65DEA49: cmp _data_65E7900,%edi;");
    asm("loc_65DEA4F: jl loc_65DE9F6;");
    asm("loc_65DEA51: pop %esi;");
    asm("loc_65DEA52: push $2;");
    asm("loc_65DEA54: call _sub_65DCF0C;");
    asm("loc_65DEA59: pop %ecx;");
    asm("loc_65DEA5A: mov %ebx,%eax;");
    asm("loc_65DEA5C: pop %edi;");
    asm("loc_65DEA5D: pop %ebx;");
    asm("loc_65DEA5E: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65DEA5F() // __fflush_lk
{
    __DEBUG_ASM(65DEA5F);
    // chunk 0x65DEA5F _sub_65DEA5F
    asm("loc_65DEA5F: push %esi;");
    asm("loc_65DEA60: mov 8(%esp),%esi;");
    asm("loc_65DEA64: push %esi;");
    asm("loc_65DEA65: call _sub_65DEA8D;");
    asm("loc_65DEA6A: test %eax,%eax;");
    asm("loc_65DEA6C: pop %ecx;");
    asm("loc_65DEA6D: je loc_65DEA74;");
    asm("loc_65DEA6F: or $0xFFFFFFFF,%eax;");
    asm("loc_65DEA72: pop %esi;");
    asm("loc_65DEA73: ret;");
    asm("loc_65DEA74: testb $0x40,0xD(%esi);");
    asm("loc_65DEA78: je loc_65DEA89;");
    asm("loc_65DEA7A: pushl 0x10(%esi);");
    asm("loc_65DEA7D: call _sub_65DF3DA;");
    asm("loc_65DEA82: neg %eax;");
    asm("loc_65DEA84: pop %ecx;");
    asm("loc_65DEA85: pop %esi;");
    asm("loc_65DEA86: sbb %eax,%eax;");
    asm("loc_65DEA88: ret;");
    asm("loc_65DEA89: xor %eax,%eax;");
    asm("loc_65DEA8B: pop %esi;");
    asm("loc_65DEA8C: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65DEA8D() // __flush
{
    __DEBUG_ASM(65DEA8D);
    // chunk 0x65DEA8D _sub_65DEA8D
    asm("loc_65DEA8D: push %ebx;");
    asm("loc_65DEA8E: push %esi;");
    asm("loc_65DEA8F: mov 0xC(%esp),%esi;");
    asm("loc_65DEA93: xor %ebx,%ebx;");
    asm("loc_65DEA95: push %edi;");
    asm("loc_65DEA96: mov 0xC(%esi),%eax;");
    asm("loc_65DEA99: mov %eax,%ecx;");
    asm("loc_65DEA9B: and $3,%ecx;");
    asm("loc_65DEA9E: cmp $2,%cl;");
    asm("loc_65DEAA1: jne loc_65DEADA;");
    asm("loc_65DEAA3: test $0x108,%ax;");
    asm("loc_65DEAA7: je loc_65DEADA;");
    asm("loc_65DEAA9: mov 8(%esi),%eax;");
    asm("loc_65DEAAC: mov (%esi),%edi;");
    asm("loc_65DEAAE: sub %eax,%edi;");
    asm("loc_65DEAB0: test %edi,%edi;");
    asm("loc_65DEAB2: jle loc_65DEADA;");
    asm("loc_65DEAB4: push %edi;");
    asm("loc_65DEAB5: push %eax;");
    asm("loc_65DEAB6: pushl 0x10(%esi);");
    asm("loc_65DEAB9: call _sub_65DD47F;");
    asm("loc_65DEABE: add $0xC,%esp;");
    asm("loc_65DEAC1: cmp %edi,%eax;");
    asm("loc_65DEAC3: jne loc_65DEAD3;");
    asm("loc_65DEAC5: mov 0xC(%esi),%eax;");
    asm("loc_65DEAC8: test $0x80,%al;");
    asm("loc_65DEACA: je loc_65DEADA;");
    asm("loc_65DEACC: and $0xFD,%al;");
    asm("loc_65DEACE: mov %eax,0xC(%esi);");
    asm("loc_65DEAD1: jmp loc_65DEADA;");
    asm("loc_65DEAD3: orl $0x20,0xC(%esi);");
    asm("loc_65DEAD7: or $0xFFFFFFFF,%ebx;");
    asm("loc_65DEADA: mov 8(%esi),%eax;");
    asm("loc_65DEADD: andl $0,4(%esi);");
    asm("loc_65DEAE1: mov %eax,(%esi);");
    asm("loc_65DEAE3: pop %edi;");
    asm("loc_65DEAE4: mov %ebx,%eax;");
    asm("loc_65DEAE6: pop %esi;");
    asm("loc_65DEAE7: pop %ebx;");
    asm("loc_65DEAE8: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65DEAE9() // _sub_65DEAE9
{
    __DEBUG_ASM(65DEAE9);
    // chunk 0x65DEAE9 _sub_65DEAE9
    asm("loc_65DEAE9: push $1;");
    asm("loc_65DEAEB: call _sub_65DEAF2;");
    asm("loc_65DEAF0: pop %ecx;");
    asm("loc_65DEAF1: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65DEAF2() // _flsall
{
    __DEBUG_ASM(65DEAF2);
    // chunk 0x65DEAF2 _sub_65DEAF2
    asm("loc_65DEAF2: push %ebx;");
    asm("loc_65DEAF3: push %esi;");
    asm("loc_65DEAF4: push %edi;");
    asm("loc_65DEAF5: push $2;");
    asm("loc_65DEAF7: xor %ebx,%ebx;");
    asm("loc_65DEAF9: xor %edi,%edi;");
    asm("loc_65DEAFB: call _sub_65DCEAB;");
    asm("loc_65DEB00: xor %esi,%esi;");
    asm("loc_65DEB02: pop %ecx;");
    asm("loc_65DEB03: cmp %esi,_data_65E7900;");
    asm("loc_65DEB09: jle loc_65DEB7F;");
    asm("loc_65DEB0B: mov _data_65E68E8,%eax;");
    asm("loc_65DEB10: mov (%eax,%esi,4),%eax;");
    asm("loc_65DEB13: test %eax,%eax;");
    asm("loc_65DEB15: je loc_65DEB76;");
    asm("loc_65DEB17: testb $0x83,0xC(%eax);");
    asm("loc_65DEB1B: je loc_65DEB76;");
    asm("loc_65DEB1D: push %eax;");
    asm("loc_65DEB1E: push %esi;");
    asm("loc_65DEB1F: call _sub_65DD7C7;");
    asm("loc_65DEB24: mov _data_65E68E8,%eax;");
    asm("loc_65DEB29: pop %ecx;");
    asm("loc_65DEB2A: pop %ecx;");
    asm("loc_65DEB2B: mov (%eax,%esi,4),%eax;");
    asm("loc_65DEB2E: mov 0xC(%eax),%ecx;");
    asm("loc_65DEB31: test $0x83,%cl;");
    asm("loc_65DEB34: je loc_65DEB66;");
    asm("loc_65DEB36: cmpl $1,0x10(%esp);");
    asm("loc_65DEB3B: jne loc_65DEB4C;");
    asm("loc_65DEB3D: push %eax;");
    asm("loc_65DEB3E: call _sub_65DEA5F;");
    asm("loc_65DEB43: cmp $0xFFFFFFFF,%eax;");
    asm("loc_65DEB46: pop %ecx;");
    asm("loc_65DEB47: je loc_65DEB66;");
    asm("loc_65DEB49: inc %ebx;");
    asm("loc_65DEB4A: jmp loc_65DEB66;");
    asm("loc_65DEB4C: cmpl $0,0x10(%esp);");
    asm("loc_65DEB51: jne loc_65DEB66;");
    asm("loc_65DEB53: test $2,%cl;");
    asm("loc_65DEB56: je loc_65DEB66;");
    asm("loc_65DEB58: push %eax;");
    asm("loc_65DEB59: call _sub_65DEA5F;");
    asm("loc_65DEB5E: cmp $0xFFFFFFFF,%eax;");
    asm("loc_65DEB61: pop %ecx;");
    asm("loc_65DEB62: jne loc_65DEB66;");
    asm("loc_65DEB64: or %eax,%edi;");
    asm("loc_65DEB66: mov _data_65E68E8,%eax;");
    asm("loc_65DEB6B: pushl (%eax,%esi,4);");
    asm("loc_65DEB6E: push %esi;");
    asm("loc_65DEB6F: call _sub_65DD819;");
    asm("loc_65DEB74: pop %ecx;");
    asm("loc_65DEB75: pop %ecx;");
    asm("loc_65DEB76: inc %esi;");
    asm("loc_65DEB77: cmp _data_65E7900,%esi;");
    asm("loc_65DEB7D: jl loc_65DEB0B;");
    asm("loc_65DEB7F: push $2;");
    asm("loc_65DEB81: call _sub_65DCF0C;");
    asm("loc_65DEB86: cmpl $1,0x14(%esp);");
    asm("loc_65DEB8B: pop %ecx;");
    asm("loc_65DEB8C: mov %ebx,%eax;");
    asm("loc_65DEB8E: je loc_65DEB92;");
    asm("loc_65DEB90: mov %edi,%eax;");
    asm("loc_65DEB92: pop %edi;");
    asm("loc_65DEB93: pop %esi;");
    asm("loc_65DEB94: pop %ebx;");
    asm("loc_65DEB95: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65DEB96() // __fptrap
{
    __DEBUG_ASM(65DEB96);
    // chunk 0x65DEB96 _sub_65DEB96
    asm("loc_65DEB96: push $2;");
    asm("loc_65DEB98: call _sub_65D7EF0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65DEB9F() // ___crtGetStringTypeA
{
    __DEBUG_ASM(65DEB9F);
    // chunk 0x65DEB9F _sub_65DEB9F
    asm("loc_65DEB9F: push %ebp;");
    asm("loc_65DEBA0: mov %esp,%ebp;");
    asm("loc_65DEBA2: push $0xFFFFFFFF;");
    asm("loc_65DEBA4: push $_data_65E1B18;");
    asm("loc_65DEBA9: push $_sub_65DCF2C;");
    asm("loc_65DEBAE: mov %fs:0,%eax;");
    asm("loc_65DEBB4: push %eax;");
    asm("loc_65DEBB5: mov %esp,%fs:0;");
    asm("loc_65DEBBC: sub $0x18,%esp;");
    asm("loc_65DEBBF: push %ebx;");
    asm("loc_65DEBC0: push %esi;");
    asm("loc_65DEBC1: push %edi;");
    asm("loc_65DEBC2: mov %esp,-0x18(%ebp);");
    asm("loc_65DEBC5: mov _data_65E6430,%eax;");
    asm("loc_65DEBCA: xor %ebx,%ebx;");
    asm("loc_65DEBCC: cmp %ebx,%eax;");
    asm("loc_65DEBCE: jne loc_65DEC0E;");
    asm("loc_65DEBD0: lea -0x1C(%ebp),%eax;");
    asm("loc_65DEBD3: push %eax;");
    asm("loc_65DEBD4: push $1;");
    asm("loc_65DEBD6: pop %esi;");
    asm("loc_65DEBD7: push %esi;");
    asm("loc_65DEBD8: push $_data_65E1B10;");
    asm("loc_65DEBDD: push %esi;");
    asm("loc_65DEBDE: calll *_import_65E1038;");
    asm("loc_65DEBE4: test %eax,%eax;");
    asm("loc_65DEBE6: je loc_65DEBEC;");
    asm("loc_65DEBE8: mov %esi,%eax;");
    asm("loc_65DEBEA: jmp loc_65DEC09;");
    asm("loc_65DEBEC: lea -0x1C(%ebp),%eax;");
    asm("loc_65DEBEF: push %eax;");
    asm("loc_65DEBF0: push %esi;");
    asm("loc_65DEBF1: push $_data_65E1B0C;");
    asm("loc_65DEBF6: push %esi;");
    asm("loc_65DEBF7: push %ebx;");
    asm("loc_65DEBF8: calll *_import_65E103C;");
    asm("loc_65DEBFE: test %eax,%eax;");
    asm("loc_65DEC00: je loc_65DECD4;");
    asm("loc_65DEC06: push $2;");
    asm("loc_65DEC08: pop %eax;");
    asm("loc_65DEC09: mov %eax,_data_65E6430;");
    asm("loc_65DEC0E: cmp $2,%eax;");
    asm("loc_65DEC11: jne loc_65DEC37;");
    asm("loc_65DEC13: mov 0x1C(%ebp),%eax;");
    asm("loc_65DEC16: cmp %ebx,%eax;");
    asm("loc_65DEC18: jne loc_65DEC1F;");
    asm("loc_65DEC1A: mov _data_65E63E8,%eax;");
    asm("loc_65DEC1F: pushl 0x14(%ebp);");
    asm("loc_65DEC22: pushl 0x10(%ebp);");
    asm("loc_65DEC25: pushl 0xC(%ebp);");
    asm("loc_65DEC28: pushl 8(%ebp);");
    asm("loc_65DEC2B: push %eax;");
    asm("loc_65DEC2C: calll *_import_65E103C;");
    asm("loc_65DEC32: jmp loc_65DECD6;");
    asm("loc_65DEC37: cmp $1,%eax;");
    asm("loc_65DEC3A: jne loc_65DECD4;");
    asm("loc_65DEC40: cmp %ebx,0x18(%ebp);");
    asm("loc_65DEC43: jne loc_65DEC4D;");
    asm("loc_65DEC45: mov _data_65E63F8,%eax;");
    asm("loc_65DEC4A: mov %eax,0x18(%ebp);");
    asm("loc_65DEC4D: push %ebx;");
    asm("loc_65DEC4E: push %ebx;");
    asm("loc_65DEC4F: pushl 0x10(%ebp);");
    asm("loc_65DEC52: pushl 0xC(%ebp);");
    asm("loc_65DEC55: mov 0x20(%ebp),%eax;");
    asm("loc_65DEC58: neg %eax;");
    asm("loc_65DEC5A: sbb %eax,%eax;");
    asm("loc_65DEC5C: and $8,%eax;");
    asm("loc_65DEC5F: inc %eax;");
    asm("loc_65DEC60: push %eax;");
    asm("loc_65DEC61: pushl 0x18(%ebp);");
    asm("loc_65DEC64: calll *_import_65E10E8;");
    asm("loc_65DEC6A: mov %eax,-0x20(%ebp);");
    asm("loc_65DEC6D: cmp %ebx,%eax;");
    asm("loc_65DEC6F: je loc_65DECD4;");
    asm("loc_65DEC71: mov %ebx,-4(%ebp);");
    asm("loc_65DEC74: lea (%eax,%eax),%edi;");
    asm("loc_65DEC77: mov %edi,%eax;");
    asm("loc_65DEC79: add $3,%eax;");
    asm("loc_65DEC7C: and $0xFC,%al;");
    asm("loc_65DEC7E: call _sub_65DE5A0;");
    asm("loc_65DEC83: mov %esp,-0x18(%ebp);");
    asm("loc_65DEC86: mov %esp,%esi;");
    asm("loc_65DEC88: mov %esi,-0x24(%ebp);");
    asm("loc_65DEC8B: push %edi;");
    asm("loc_65DEC8C: push %ebx;");
    asm("loc_65DEC8D: push %esi;");
    asm("loc_65DEC8E: call _sub_65DDB10;");
    asm("loc_65DEC93: add $0xC,%esp;");
    asm("loc_65DEC96: jmp loc_65DECA3;");
    asm("loc_65DEC98: push $1;");
    asm("loc_65DEC9A: pop %eax;");
    asm("loc_65DEC9B: ret;");
    asm("loc_65DEC9C: mov -0x18(%ebp),%esp;");
    asm("loc_65DEC9F: xor %ebx,%ebx;");
    asm("loc_65DECA1: xor %esi,%esi;");
    asm("loc_65DECA3: orl $0xFFFFFFFF,-4(%ebp);");
    asm("loc_65DECA7: cmp %ebx,%esi;");
    asm("loc_65DECA9: je loc_65DECD4;");
    asm("loc_65DECAB: pushl -0x20(%ebp);");
    asm("loc_65DECAE: push %esi;");
    asm("loc_65DECAF: pushl 0x10(%ebp);");
    asm("loc_65DECB2: pushl 0xC(%ebp);");
    asm("loc_65DECB5: push $1;");
    asm("loc_65DECB7: pushl 0x18(%ebp);");
    asm("loc_65DECBA: calll *_import_65E10E8;");
    asm("loc_65DECC0: cmp %ebx,%eax;");
    asm("loc_65DECC2: je loc_65DECD4;");
    asm("loc_65DECC4: pushl 0x14(%ebp);");
    asm("loc_65DECC7: push %eax;");
    asm("loc_65DECC8: push %esi;");
    asm("loc_65DECC9: pushl 8(%ebp);");
    asm("loc_65DECCC: calll *_import_65E1038;");
    asm("loc_65DECD2: jmp loc_65DECD6;");
    asm("loc_65DECD4: xor %eax,%eax;");
    asm("loc_65DECD6: lea -0x34(%ebp),%esp;");
    asm("loc_65DECD9: mov -0x10(%ebp),%ecx;");
    asm("loc_65DECDC: mov %ecx,%fs:0;");
    asm("loc_65DECE3: pop %edi;");
    asm("loc_65DECE4: pop %esi;");
    asm("loc_65DECE5: pop %ebx;");
    asm("loc_65DECE6: leave;");
    asm("loc_65DECE7: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65DECE8() // __read
{
    __DEBUG_ASM(65DECE8);
    // chunk 0x65DECE8 _sub_65DECE8
    asm("loc_65DECE8: push %esi;");
    asm("loc_65DECE9: mov 8(%esp),%esi;");
    asm("loc_65DECED: cmp _data_65E7A40,%esi;");
    asm("loc_65DECF3: jae loc_65DED35;");
    asm("loc_65DECF5: mov %esi,%ecx;");
    asm("loc_65DECF7: mov %esi,%eax;");
    asm("loc_65DECF9: sar $5,%ecx;");
    asm("loc_65DECFC: and $0x1F,%eax;");
    asm("loc_65DECFF: mov _data_65E7940(,%ecx,4),%ecx;");
    asm("loc_65DED06: lea (%eax,%eax,8),%eax;");
    asm("loc_65DED09: testb $1,4(%ecx,%eax,4);");
    asm("loc_65DED0E: je loc_65DED35;");
    asm("loc_65DED10: push %edi;");
    asm("loc_65DED11: push %esi;");
    asm("loc_65DED12: call _sub_65DE95D;");
    asm("loc_65DED17: pushl 0x18(%esp);");
    asm("loc_65DED1B: pushl 0x18(%esp);");
    asm("loc_65DED1F: push %esi;");
    asm("loc_65DED20: call _sub_65DED4D;");
    asm("loc_65DED25: push %esi;");
    asm("loc_65DED26: mov %eax,%edi;");
    asm("loc_65DED28: call _sub_65DE9BC;");
    asm("loc_65DED2D: add $0x14,%esp;");
    asm("loc_65DED30: mov %edi,%eax;");
    asm("loc_65DED32: pop %edi;");
    asm("loc_65DED33: pop %esi;");
    asm("loc_65DED34: ret;");
    asm("loc_65DED35: call _sub_65DE88A;");
    asm("loc_65DED3A: movl $9,(%eax);");
    asm("loc_65DED40: call _sub_65DE893;");
    asm("loc_65DED45: andl $0,(%eax);");
    asm("loc_65DED48: or $0xFFFFFFFF,%eax;");
    asm("loc_65DED4B: pop %esi;");
    asm("loc_65DED4C: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65DED4D() // __read_lk
{
    __DEBUG_ASM(65DED4D);
    // chunk 0x65DED4D _sub_65DED4D
    asm("loc_65DED4D: push %ebp;");
    asm("loc_65DED4E: mov %esp,%ebp;");
    asm("loc_65DED50: sub $0xC,%esp;");
    asm("loc_65DED53: andl $0,-8(%ebp);");
    asm("loc_65DED57: cmpl $0,0x10(%ebp);");
    asm("loc_65DED5B: push %ebx;");
    asm("loc_65DED5C: mov 0xC(%ebp),%ebx;");
    asm("loc_65DED5F: push %esi;");
    asm("loc_65DED60: push %edi;");
    asm("loc_65DED61: mov %ebx,%edx;");
    asm("loc_65DED63: je loc_65DEF1F;");
    asm("loc_65DED69: mov 8(%ebp),%eax;");
    asm("loc_65DED6C: mov %eax,%ecx;");
    asm("loc_65DED6E: and $0x1F,%eax;");
    asm("loc_65DED71: sar $5,%ecx;");
    asm("loc_65DED74: lea (%eax,%eax,8),%esi;");
    asm("loc_65DED77: mov _data_65E7940(,%ecx,4),%eax;");
    asm("loc_65DED7E: lea _data_65E7940(,%ecx,4),%edi;");
    asm("loc_65DED85: shl $2,%esi;");
    asm("loc_65DED88: add %esi,%eax;");
    asm("loc_65DED8A: mov 4(%eax),%cl;");
    asm("loc_65DED8D: test $2,%cl;");
    asm("loc_65DED90: jne loc_65DEF1F;");
    asm("loc_65DED96: test $0x48,%cl;");
    asm("loc_65DED99: je loc_65DEDB8;");
    asm("loc_65DED9B: mov 5(%eax),%al;");
    asm("loc_65DED9E: cmp $0xA,%al;");
    asm("loc_65DEDA0: je loc_65DEDB8;");
    asm("loc_65DEDA2: decl 0x10(%ebp);");
    asm("loc_65DEDA5: mov %al,(%ebx);");
    asm("loc_65DEDA7: mov (%edi),%eax;");
    asm("loc_65DEDA9: lea 1(%ebx),%edx;");
    asm("loc_65DEDAC: movl $1,-8(%ebp);");
    asm("loc_65DEDB3: movb $0xA,5(%eax,%esi);");
    asm("loc_65DEDB8: lea -0xC(%ebp),%eax;");
    asm("loc_65DEDBB: push $0;");
    asm("loc_65DEDBD: push %eax;");
    asm("loc_65DEDBE: mov (%edi),%eax;");
    asm("loc_65DEDC0: pushl 0x10(%ebp);");
    asm("loc_65DEDC3: push %edx;");
    asm("loc_65DEDC4: pushl (%eax,%esi);");
    asm("loc_65DEDC7: calll *_import_65E1034;");
    asm("loc_65DEDCD: test %eax,%eax;");
    asm("loc_65DEDCF: jne loc_65DEE0A;");
    asm("loc_65DEDD1: calll *_import_65E107C;");
    asm("loc_65DEDD7: push $5;");
    asm("loc_65DEDD9: pop %esi;");
    asm("loc_65DEDDA: cmp %esi,%eax;");
    asm("loc_65DEDDC: jne loc_65DEDF2;");
    asm("loc_65DEDDE: call _sub_65DE88A;");
    asm("loc_65DEDE3: movl $9,(%eax);");
    asm("loc_65DEDE9: call _sub_65DE893;");
    asm("loc_65DEDEE: mov %esi,(%eax);");
    asm("loc_65DEDF0: jmp loc_65DEE02;");
    asm("loc_65DEDF2: cmp $0x6D,%eax;");
    asm("loc_65DEDF5: je loc_65DEF1F;");
    asm("loc_65DEDFB: push %eax;");
    asm("loc_65DEDFC: call _sub_65DE817;");
    asm("loc_65DEE01: pop %ecx;");
    asm("loc_65DEE02: or $0xFFFFFFFF,%eax;");
    asm("loc_65DEE05: jmp loc_65DEF21;");
    asm("loc_65DEE0A: mov (%edi),%eax;");
    asm("loc_65DEE0C: mov -0xC(%ebp),%edx;");
    asm("loc_65DEE0F: add %edx,-8(%ebp);");
    asm("loc_65DEE12: lea 4(%eax,%esi),%ecx;");
    asm("loc_65DEE16: mov 4(%eax,%esi),%al;");
    asm("loc_65DEE1A: test $0x80,%al;");
    asm("loc_65DEE1C: je loc_65DEF1A;");
    asm("loc_65DEE22: test %edx,%edx;");
    asm("loc_65DEE24: je loc_65DEE2F;");
    asm("loc_65DEE26: cmpb $0xA,(%ebx);");
    asm("loc_65DEE29: jne loc_65DEE2F;");
    asm("loc_65DEE2B: or $4,%al;");
    asm("loc_65DEE2D: jmp loc_65DEE31;");
    asm("loc_65DEE2F: and $0xFB,%al;");
    asm("loc_65DEE31: mov %al,(%ecx);");
    asm("loc_65DEE33: mov 0xC(%ebp),%eax;");
    asm("loc_65DEE36: mov -8(%ebp),%ecx;");
    asm("loc_65DEE39: mov %eax,0x10(%ebp);");
    asm("loc_65DEE3C: add %eax,%ecx;");
    asm("loc_65DEE3E: cmp %ecx,%eax;");
    asm("loc_65DEE40: mov %ecx,-8(%ebp);");
    asm("loc_65DEE43: jae loc_65DEF14;");
    asm("loc_65DEE49: mov 0x10(%ebp),%eax;");
    asm("loc_65DEE4C: mov (%eax),%al;");
    asm("loc_65DEE4E: cmp $0x1A,%al;");
    asm("loc_65DEE50: je loc_65DEF04;");
    asm("loc_65DEE56: cmp $0xD,%al;");
    asm("loc_65DEE58: je loc_65DEE65;");
    asm("loc_65DEE5A: mov %al,(%ebx);");
    asm("loc_65DEE5C: inc %ebx;");
    asm("loc_65DEE5D: incl 0x10(%ebp);");
    asm("loc_65DEE60: jmp loc_65DEEF6;");
    asm("loc_65DEE65: dec %ecx;");
    asm("loc_65DEE66: cmp %ecx,0x10(%ebp);");
    asm("loc_65DEE69: jae loc_65DEE83;");
    asm("loc_65DEE6B: mov 0x10(%ebp),%eax;");
    asm("loc_65DEE6E: inc %eax;");
    asm("loc_65DEE6F: cmpb $0xA,(%eax);");
    asm("loc_65DEE72: jne loc_65DEE7A;");
    asm("loc_65DEE74: addl $2,0x10(%ebp);");
    asm("loc_65DEE78: jmp loc_65DEED8;");
    asm("loc_65DEE7A: movb $0xD,(%ebx);");
    asm("loc_65DEE7D: inc %ebx;");
    asm("loc_65DEE7E: mov %eax,0x10(%ebp);");
    asm("loc_65DEE81: jmp loc_65DEEF6;");
    asm("loc_65DEE83: lea -0xC(%ebp),%eax;");
    asm("loc_65DEE86: push $0;");
    asm("loc_65DEE88: push %eax;");
    asm("loc_65DEE89: incl 0x10(%ebp);");
    asm("loc_65DEE8C: lea -1(%ebp),%eax;");
    asm("loc_65DEE8F: push $1;");
    asm("loc_65DEE91: push %eax;");
    asm("loc_65DEE92: mov (%edi),%eax;");
    asm("loc_65DEE94: pushl (%eax,%esi);");
    asm("loc_65DEE97: calll *_import_65E1034;");
    asm("loc_65DEE9D: test %eax,%eax;");
    asm("loc_65DEE9F: jne loc_65DEEAB;");
    asm("loc_65DEEA1: calll *_import_65E107C;");
    asm("loc_65DEEA7: test %eax,%eax;");
    asm("loc_65DEEA9: jne loc_65DEEF2;");
    asm("loc_65DEEAB: cmpl $0,-0xC(%ebp);");
    asm("loc_65DEEAF: je loc_65DEEF2;");
    asm("loc_65DEEB1: mov (%edi),%eax;");
    asm("loc_65DEEB3: testb $0x48,4(%eax,%esi);");
    asm("loc_65DEEB8: je loc_65DEECD;");
    asm("loc_65DEEBA: mov -1(%ebp),%al;");
    asm("loc_65DEEBD: cmp $0xA,%al;");
    asm("loc_65DEEBF: je loc_65DEED8;");
    asm("loc_65DEEC1: movb $0xD,(%ebx);");
    asm("loc_65DEEC4: mov (%edi),%ecx;");
    asm("loc_65DEEC6: inc %ebx;");
    asm("loc_65DEEC7: mov %al,5(%ecx,%esi);");
    asm("loc_65DEECB: jmp loc_65DEEF6;");
    asm("loc_65DEECD: cmp 0xC(%ebp),%ebx;");
    asm("loc_65DEED0: jne loc_65DEEDD;");
    asm("loc_65DEED2: cmpb $0xA,-1(%ebp);");
    asm("loc_65DEED6: jne loc_65DEEDD;");
    asm("loc_65DEED8: movb $0xA,(%ebx);");
    asm("loc_65DEEDB: jmp loc_65DEEF5;");
    asm("loc_65DEEDD: push $1;");
    asm("loc_65DEEDF: push $0xFFFFFFFF;");
    asm("loc_65DEEE1: pushl 8(%ebp);");
    asm("loc_65DEEE4: call _sub_65DD40C;");
    asm("loc_65DEEE9: add $0xC,%esp;");
    asm("loc_65DEEEC: cmpb $0xA,-1(%ebp);");
    asm("loc_65DEEF0: je loc_65DEEF6;");
    asm("loc_65DEEF2: movb $0xD,(%ebx);");
    asm("loc_65DEEF5: inc %ebx;");
    asm("loc_65DEEF6: mov -8(%ebp),%ecx;");
    asm("loc_65DEEF9: cmp %ecx,0x10(%ebp);");
    asm("loc_65DEEFC: jb loc_65DEE49;");
    asm("loc_65DEF02: jmp loc_65DEF14;");
    asm("loc_65DEF04: mov (%edi),%eax;");
    asm("loc_65DEF06: lea 4(%eax,%esi),%esi;");
    asm("loc_65DEF0A: mov (%esi),%al;");
    asm("loc_65DEF0C: test $0x40,%al;");
    asm("loc_65DEF0E: jne loc_65DEF14;");
    asm("loc_65DEF10: or $2,%al;");
    asm("loc_65DEF12: mov %al,(%esi);");
    asm("loc_65DEF14: sub 0xC(%ebp),%ebx;");
    asm("loc_65DEF17: mov %ebx,-8(%ebp);");
    asm("loc_65DEF1A: mov -8(%ebp),%eax;");
    asm("loc_65DEF1D: jmp loc_65DEF21;");
    asm("loc_65DEF1F: xor %eax,%eax;");
    asm("loc_65DEF21: pop %edi;");
    asm("loc_65DEF22: pop %esi;");
    asm("loc_65DEF23: pop %ebx;");
    asm("loc_65DEF24: leave;");
    asm("loc_65DEF25: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65DEF26() // __mbsnbicoll
{
    __DEBUG_ASM(65DEF26);
    // chunk 0x65DEF26 _sub_65DEF26
    asm("loc_65DEF26: push %ebp;");
    asm("loc_65DEF27: mov %esp,%ebp;");
    asm("loc_65DEF29: cmpl $0,0x10(%ebp);");
    asm("loc_65DEF2D: jne loc_65DEF33;");
    asm("loc_65DEF2F: xor %eax,%eax;");
    asm("loc_65DEF31: pop %ebp;");
    asm("loc_65DEF32: ret;");
    asm("loc_65DEF33: pushl _data_65E66CC;");
    asm("loc_65DEF39: pushl 0x10(%ebp);");
    asm("loc_65DEF3C: pushl 0xC(%ebp);");
    asm("loc_65DEF3F: pushl 0x10(%ebp);");
    asm("loc_65DEF42: pushl 8(%ebp);");
    asm("loc_65DEF45: push $1;");
    asm("loc_65DEF47: pushl _data_65E68E4;");
    asm("loc_65DEF4D: call _sub_65DF4EA;");
    asm("loc_65DEF52: add $0x1C,%esp;");
    asm("loc_65DEF55: test %eax,%eax;");
    asm("loc_65DEF57: jne loc_65DEF60;");
    asm("loc_65DEF59: mov $0x7FFFFFFF,%eax;");
    asm("loc_65DEF5E: pop %ebp;");
    asm("loc_65DEF5F: ret;");
    asm("loc_65DEF60: add $0xFFFFFFFE,%eax;");
    asm("loc_65DEF63: pop %ebp;");
    asm("loc_65DEF64: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65DEF65() // ___wtomb_environ
{
    __DEBUG_ASM(65DEF65);
    // chunk 0x65DEF65 _sub_65DEF65
    asm("loc_65DEF65: push %ecx;");
    asm("loc_65DEF66: push %ebx;");
    asm("loc_65DEF67: push %ebp;");
    asm("loc_65DEF68: push %esi;");
    asm("loc_65DEF69: mov _data_65E615C,%esi;");
    asm("loc_65DEF6F: push %edi;");
    asm("loc_65DEF70: xor %edi,%edi;");
    asm("loc_65DEF72: mov (%esi),%eax;");
    asm("loc_65DEF74: cmp %edi,%eax;");
    asm("loc_65DEF76: je loc_65DEFC6;");
    asm("loc_65DEF78: mov _import_65E1094,%ebx;");
    asm("loc_65DEF7E: push %edi;");
    asm("loc_65DEF7F: push %edi;");
    asm("loc_65DEF80: push %edi;");
    asm("loc_65DEF81: push %edi;");
    asm("loc_65DEF82: push $0xFFFFFFFF;");
    asm("loc_65DEF84: push %eax;");
    asm("loc_65DEF85: push %edi;");
    asm("loc_65DEF86: push $1;");
    asm("loc_65DEF88: call *%ebx;");
    asm("loc_65DEF8A: mov %eax,%ebp;");
    asm("loc_65DEF8C: cmp %edi,%ebp;");
    asm("loc_65DEF8E: je loc_65DEFCE;");
    asm("loc_65DEF90: push %ebp;");
    asm("loc_65DEF91: call _sub_65D8535;");
    asm("loc_65DEF96: cmp %edi,%eax;");
    asm("loc_65DEF98: pop %ecx;");
    asm("loc_65DEF99: mov %eax,0x10(%esp);");
    asm("loc_65DEF9D: je loc_65DEFCE;");
    asm("loc_65DEF9F: push %edi;");
    asm("loc_65DEFA0: push %edi;");
    asm("loc_65DEFA1: push %ebp;");
    asm("loc_65DEFA2: push %eax;");
    asm("loc_65DEFA3: push $0xFFFFFFFF;");
    asm("loc_65DEFA5: pushl (%esi);");
    asm("loc_65DEFA7: push %edi;");
    asm("loc_65DEFA8: push $1;");
    asm("loc_65DEFAA: call *%ebx;");
    asm("loc_65DEFAC: test %eax,%eax;");
    asm("loc_65DEFAE: je loc_65DEFCE;");
    asm("loc_65DEFB0: push %edi;");
    asm("loc_65DEFB1: pushl 0x14(%esp);");
    asm("loc_65DEFB5: call _sub_65DF767;");
    asm("loc_65DEFBA: mov 4(%esi),%eax;");
    asm("loc_65DEFBD: add $4,%esi;");
    asm("loc_65DEFC0: pop %ecx;");
    asm("loc_65DEFC1: cmp %edi,%eax;");
    asm("loc_65DEFC3: pop %ecx;");
    asm("loc_65DEFC4: jne loc_65DEF7E;");
    asm("loc_65DEFC6: xor %eax,%eax;");
    asm("loc_65DEFC8: pop %edi;");
    asm("loc_65DEFC9: pop %esi;");
    asm("loc_65DEFCA: pop %ebp;");
    asm("loc_65DEFCB: pop %ebx;");
    asm("loc_65DEFCC: pop %ecx;");
    asm("loc_65DEFCD: ret;");
    asm("loc_65DEFCE: or $0xFFFFFFFF,%eax;");
    asm("loc_65DEFD1: jmp loc_65DEFC8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65DEFD3() // ___crtLCMapStringA
{
    __DEBUG_ASM(65DEFD3);
    // chunk 0x65DEFD3 _sub_65DEFD3
    asm("loc_65DEFD3: push %ebp;");
    asm("loc_65DEFD4: mov %esp,%ebp;");
    asm("loc_65DEFD6: push $0xFFFFFFFF;");
    asm("loc_65DEFD8: push $_data_65E1B28;");
    asm("loc_65DEFDD: push $_sub_65DCF2C;");
    asm("loc_65DEFE2: mov %fs:0,%eax;");
    asm("loc_65DEFE8: push %eax;");
    asm("loc_65DEFE9: mov %esp,%fs:0;");
    asm("loc_65DEFF0: sub $0x1C,%esp;");
    asm("loc_65DEFF3: push %ebx;");
    asm("loc_65DEFF4: push %esi;");
    asm("loc_65DEFF5: push %edi;");
    asm("loc_65DEFF6: mov %esp,-0x18(%ebp);");
    asm("loc_65DEFF9: xor %edi,%edi;");
    asm("loc_65DEFFB: cmp %edi,_data_65E6434;");
    asm("loc_65DF001: jne loc_65DF049;");
    asm("loc_65DF003: push %edi;");
    asm("loc_65DF004: push %edi;");
    asm("loc_65DF005: push $1;");
    asm("loc_65DF007: pop %ebx;");
    asm("loc_65DF008: push %ebx;");
    asm("loc_65DF009: push $_data_65E1B10;");
    asm("loc_65DF00E: mov $0x100,%esi;");
    asm("loc_65DF013: push %esi;");
    asm("loc_65DF014: push %edi;");
    asm("loc_65DF015: calll *_import_65E102C;");
    asm("loc_65DF01B: test %eax,%eax;");
    asm("loc_65DF01D: je loc_65DF027;");
    asm("loc_65DF01F: mov %ebx,_data_65E6434;");
    asm("loc_65DF025: jmp loc_65DF049;");
    asm("loc_65DF027: push %edi;");
    asm("loc_65DF028: push %edi;");
    asm("loc_65DF029: push %ebx;");
    asm("loc_65DF02A: push $_data_65E1B0C;");
    asm("loc_65DF02F: push %esi;");
    asm("loc_65DF030: push %edi;");
    asm("loc_65DF031: calll *_import_65E1030;");
    asm("loc_65DF037: test %eax,%eax;");
    asm("loc_65DF039: je loc_65DF161;");
    asm("loc_65DF03F: movl $2,_data_65E6434;");
    asm("loc_65DF049: cmp %edi,0x14(%ebp);");
    asm("loc_65DF04C: jle loc_65DF05E;");
    asm("loc_65DF04E: pushl 0x14(%ebp);");
    asm("loc_65DF051: pushl 0x10(%ebp);");
    asm("loc_65DF054: call _sub_65DF1F7;");
    asm("loc_65DF059: pop %ecx;");
    asm("loc_65DF05A: pop %ecx;");
    asm("loc_65DF05B: mov %eax,0x14(%ebp);");
    asm("loc_65DF05E: mov _data_65E6434,%eax;");
    asm("loc_65DF063: cmp $2,%eax;");
    asm("loc_65DF066: jne loc_65DF085;");
    asm("loc_65DF068: pushl 0x1C(%ebp);");
    asm("loc_65DF06B: pushl 0x18(%ebp);");
    asm("loc_65DF06E: pushl 0x14(%ebp);");
    asm("loc_65DF071: pushl 0x10(%ebp);");
    asm("loc_65DF074: pushl 0xC(%ebp);");
    asm("loc_65DF077: pushl 8(%ebp);");
    asm("loc_65DF07A: calll *_import_65E1030;");
    asm("loc_65DF080: jmp loc_65DF163;");
    asm("loc_65DF085: cmp $1,%eax;");
    asm("loc_65DF088: jne loc_65DF161;");
    asm("loc_65DF08E: cmp %edi,0x20(%ebp);");
    asm("loc_65DF091: jne loc_65DF09B;");
    asm("loc_65DF093: mov _data_65E63F8,%eax;");
    asm("loc_65DF098: mov %eax,0x20(%ebp);");
    asm("loc_65DF09B: push %edi;");
    asm("loc_65DF09C: push %edi;");
    asm("loc_65DF09D: pushl 0x14(%ebp);");
    asm("loc_65DF0A0: pushl 0x10(%ebp);");
    asm("loc_65DF0A3: mov 0x24(%ebp),%eax;");
    asm("loc_65DF0A6: neg %eax;");
    asm("loc_65DF0A8: sbb %eax,%eax;");
    asm("loc_65DF0AA: and $8,%eax;");
    asm("loc_65DF0AD: inc %eax;");
    asm("loc_65DF0AE: push %eax;");
    asm("loc_65DF0AF: pushl 0x20(%ebp);");
    asm("loc_65DF0B2: calll *_import_65E10E8;");
    asm("loc_65DF0B8: mov %eax,%ebx;");
    asm("loc_65DF0BA: mov %ebx,-0x1C(%ebp);");
    asm("loc_65DF0BD: cmp %edi,%ebx;");
    asm("loc_65DF0BF: je loc_65DF161;");
    asm("loc_65DF0C5: mov %edi,-4(%ebp);");
    asm("loc_65DF0C8: lea (%ebx,%ebx),%eax;");
    asm("loc_65DF0CB: add $3,%eax;");
    asm("loc_65DF0CE: and $0xFC,%al;");
    asm("loc_65DF0D0: call _sub_65DE5A0;");
    asm("loc_65DF0D5: mov %esp,-0x18(%ebp);");
    asm("loc_65DF0D8: mov %esp,%eax;");
    asm("loc_65DF0DA: mov %eax,-0x24(%ebp);");
    asm("loc_65DF0DD: orl $0xFFFFFFFF,-4(%ebp);");
    asm("loc_65DF0E1: jmp loc_65DF0F6;");
    asm("loc_65DF0E3: push $1;");
    asm("loc_65DF0E5: pop %eax;");
    asm("loc_65DF0E6: ret;");
    asm("loc_65DF0E7: mov -0x18(%ebp),%esp;");
    asm("loc_65DF0EA: xor %edi,%edi;");
    asm("loc_65DF0EC: mov %edi,-0x24(%ebp);");
    asm("loc_65DF0EF: orl $0xFFFFFFFF,-4(%ebp);");
    asm("loc_65DF0F3: mov -0x1C(%ebp),%ebx;");
    asm("loc_65DF0F6: cmp %edi,-0x24(%ebp);");
    asm("loc_65DF0F9: je loc_65DF161;");
    asm("loc_65DF0FB: push %ebx;");
    asm("loc_65DF0FC: pushl -0x24(%ebp);");
    asm("loc_65DF0FF: pushl 0x14(%ebp);");
    asm("loc_65DF102: pushl 0x10(%ebp);");
    asm("loc_65DF105: push $1;");
    asm("loc_65DF107: pushl 0x20(%ebp);");
    asm("loc_65DF10A: calll *_import_65E10E8;");
    asm("loc_65DF110: test %eax,%eax;");
    asm("loc_65DF112: je loc_65DF161;");
    asm("loc_65DF114: push %edi;");
    asm("loc_65DF115: push %edi;");
    asm("loc_65DF116: push %ebx;");
    asm("loc_65DF117: pushl -0x24(%ebp);");
    asm("loc_65DF11A: pushl 0xC(%ebp);");
    asm("loc_65DF11D: pushl 8(%ebp);");
    asm("loc_65DF120: calll *_import_65E102C;");
    asm("loc_65DF126: mov %eax,%esi;");
    asm("loc_65DF128: mov %esi,-0x28(%ebp);");
    asm("loc_65DF12B: cmp %edi,%esi;");
    asm("loc_65DF12D: je loc_65DF161;");
    asm("loc_65DF12F: testb $4,0xD(%ebp);");
    asm("loc_65DF133: je loc_65DF175;");
    asm("loc_65DF135: cmp %edi,0x1C(%ebp);");
    asm("loc_65DF138: je loc_65DF1F0;");
    asm("loc_65DF13E: cmp 0x1C(%ebp),%esi;");
    asm("loc_65DF141: jg loc_65DF161;");
    asm("loc_65DF143: pushl 0x1C(%ebp);");
    asm("loc_65DF146: pushl 0x18(%ebp);");
    asm("loc_65DF149: push %ebx;");
    asm("loc_65DF14A: pushl -0x24(%ebp);");
    asm("loc_65DF14D: pushl 0xC(%ebp);");
    asm("loc_65DF150: pushl 8(%ebp);");
    asm("loc_65DF153: calll *_import_65E102C;");
    asm("loc_65DF159: test %eax,%eax;");
    asm("loc_65DF15B: jne loc_65DF1F0;");
    asm("loc_65DF161: xor %eax,%eax;");
    asm("loc_65DF163: lea -0x38(%ebp),%esp;");
    asm("loc_65DF166: mov -0x10(%ebp),%ecx;");
    asm("loc_65DF169: mov %ecx,%fs:0;");
    asm("loc_65DF170: pop %edi;");
    asm("loc_65DF171: pop %esi;");
    asm("loc_65DF172: pop %ebx;");
    asm("loc_65DF173: leave;");
    asm("loc_65DF174: ret;");
    asm("loc_65DF175: movl $1,-4(%ebp);");
    asm("loc_65DF17C: lea (%esi,%esi),%eax;");
    asm("loc_65DF17F: add $3,%eax;");
    asm("loc_65DF182: and $0xFC,%al;");
    asm("loc_65DF184: call _sub_65DE5A0;");
    asm("loc_65DF189: mov %esp,-0x18(%ebp);");
    asm("loc_65DF18C: mov %esp,%ebx;");
    asm("loc_65DF18E: mov %ebx,-0x20(%ebp);");
    asm("loc_65DF191: orl $0xFFFFFFFF,-4(%ebp);");
    asm("loc_65DF195: jmp loc_65DF1A9;");
    asm("loc_65DF197: push $1;");
    asm("loc_65DF199: pop %eax;");
    asm("loc_65DF19A: ret;");
    asm("loc_65DF19B: mov -0x18(%ebp),%esp;");
    asm("loc_65DF19E: xor %edi,%edi;");
    asm("loc_65DF1A0: xor %ebx,%ebx;");
    asm("loc_65DF1A2: orl $0xFFFFFFFF,-4(%ebp);");
    asm("loc_65DF1A6: mov -0x28(%ebp),%esi;");
    asm("loc_65DF1A9: cmp %edi,%ebx;");
    asm("loc_65DF1AB: je loc_65DF161;");
    asm("loc_65DF1AD: push %esi;");
    asm("loc_65DF1AE: push %ebx;");
    asm("loc_65DF1AF: pushl -0x1C(%ebp);");
    asm("loc_65DF1B2: pushl -0x24(%ebp);");
    asm("loc_65DF1B5: pushl 0xC(%ebp);");
    asm("loc_65DF1B8: pushl 8(%ebp);");
    asm("loc_65DF1BB: calll *_import_65E102C;");
    asm("loc_65DF1C1: test %eax,%eax;");
    asm("loc_65DF1C3: je loc_65DF161;");
    asm("loc_65DF1C5: cmp %edi,0x1C(%ebp);");
    asm("loc_65DF1C8: push %edi;");
    asm("loc_65DF1C9: push %edi;");
    asm("loc_65DF1CA: jne loc_65DF1D0;");
    asm("loc_65DF1CC: push %edi;");
    asm("loc_65DF1CD: push %edi;");
    asm("loc_65DF1CE: jmp loc_65DF1D6;");
    asm("loc_65DF1D0: pushl 0x1C(%ebp);");
    asm("loc_65DF1D3: pushl 0x18(%ebp);");
    asm("loc_65DF1D6: push %esi;");
    asm("loc_65DF1D7: push %ebx;");
    asm("loc_65DF1D8: push $0x220;");
    asm("loc_65DF1DD: pushl 0x20(%ebp);");
    asm("loc_65DF1E0: calll *_import_65E1094;");
    asm("loc_65DF1E6: mov %eax,%esi;");
    asm("loc_65DF1E8: cmp %edi,%esi;");
    asm("loc_65DF1EA: je loc_65DF161;");
    asm("loc_65DF1F0: mov %esi,%eax;");
    asm("loc_65DF1F2: jmp loc_65DF163;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65DF1F7() // _strncnt
{
    __DEBUG_ASM(65DF1F7);
    // chunk 0x65DF1F7 _sub_65DF1F7
    asm("loc_65DF1F7: mov 8(%esp),%edx;");
    asm("loc_65DF1FB: mov 4(%esp),%eax;");
    asm("loc_65DF1FF: test %edx,%edx;");
    asm("loc_65DF201: push %esi;");
    asm("loc_65DF202: lea -1(%edx),%ecx;");
    asm("loc_65DF205: je loc_65DF214;");
    asm("loc_65DF207: cmpb $0,(%eax);");
    asm("loc_65DF20A: je loc_65DF214;");
    asm("loc_65DF20C: inc %eax;");
    asm("loc_65DF20D: mov %ecx,%esi;");
    asm("loc_65DF20F: dec %ecx;");
    asm("loc_65DF210: test %esi,%esi;");
    asm("loc_65DF212: jne loc_65DF207;");
    asm("loc_65DF214: cmpb $0,(%eax);");
    asm("loc_65DF217: pop %esi;");
    asm("loc_65DF218: jne loc_65DF21F;");
    asm("loc_65DF21A: sub 4(%esp),%eax;");
    asm("loc_65DF21E: ret;");
    asm("loc_65DF21F: mov %edx,%eax;");
    asm("loc_65DF221: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65DF222() // _toupper
{
    __DEBUG_ASM(65DF222);
    // chunk 0x65DF222 _sub_65DF222
    asm("loc_65DF222: push %ebx;");
    asm("loc_65DF223: xor %ebx,%ebx;");
    asm("loc_65DF225: cmp %ebx,_data_65E63E8;");
    asm("loc_65DF22B: jne loc_65DF240;");
    asm("loc_65DF22D: mov 8(%esp),%eax;");
    asm("loc_65DF231: cmp $0x61,%eax;");
    asm("loc_65DF234: jl loc_65DF28F;");
    asm("loc_65DF236: cmp $0x7A,%eax;");
    asm("loc_65DF239: jg loc_65DF28F;");
    asm("loc_65DF23B: sub $0x20,%eax;");
    asm("loc_65DF23E: pop %ebx;");
    asm("loc_65DF23F: ret;");
    asm("loc_65DF240: push %esi;");
    asm("loc_65DF241: mov $_data_65E66C8,%esi;");
    asm("loc_65DF246: push %edi;");
    asm("loc_65DF247: push %esi;");
    asm("loc_65DF248: calll *_import_65E10E4;");
    asm("loc_65DF24E: cmp %ebx,_data_65E66C4;");
    asm("loc_65DF254: mov _import_65E10FC,%edi;");
    asm("loc_65DF25A: je loc_65DF26A;");
    asm("loc_65DF25C: push %esi;");
    asm("loc_65DF25D: call *%edi;");
    asm("loc_65DF25F: push $0x13;");
    asm("loc_65DF261: call _sub_65DCEAB;");
    asm("loc_65DF266: pop %ecx;");
    asm("loc_65DF267: push $1;");
    asm("loc_65DF269: pop %ebx;");
    asm("loc_65DF26A: pushl 0x10(%esp);");
    asm("loc_65DF26E: call _sub_65DF291;");
    asm("loc_65DF273: test %ebx,%ebx;");
    asm("loc_65DF275: pop %ecx;");
    asm("loc_65DF276: mov %eax,0x10(%esp);");
    asm("loc_65DF27A: je loc_65DF286;");
    asm("loc_65DF27C: push $0x13;");
    asm("loc_65DF27E: call _sub_65DCF0C;");
    asm("loc_65DF283: pop %ecx;");
    asm("loc_65DF284: jmp loc_65DF289;");
    asm("loc_65DF286: push %esi;");
    asm("loc_65DF287: call *%edi;");
    asm("loc_65DF289: mov 0x10(%esp),%eax;");
    asm("loc_65DF28D: pop %edi;");
    asm("loc_65DF28E: pop %esi;");
    asm("loc_65DF28F: pop %ebx;");
    asm("loc_65DF290: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65DF291() // _toupper_0
{
    __DEBUG_ASM(65DF291);
    // chunk 0x65DF291 _sub_65DF291
    asm("loc_65DF291: push %ebp;");
    asm("loc_65DF292: mov %esp,%ebp;");
    asm("loc_65DF294: push %ecx;");
    asm("loc_65DF295: cmpl $0,_data_65E63E8;");
    asm("loc_65DF29C: push %ebx;");
    asm("loc_65DF29D: jne loc_65DF2BC;");
    asm("loc_65DF29F: mov 8(%ebp),%eax;");
    asm("loc_65DF2A2: cmp $0x61,%eax;");
    asm("loc_65DF2A5: jl loc_65DF35A;");
    asm("loc_65DF2AB: cmp $0x7A,%eax;");
    asm("loc_65DF2AE: jg loc_65DF35A;");
    asm("loc_65DF2B4: sub $0x20,%eax;");
    asm("loc_65DF2B7: jmp loc_65DF35A;");
    asm("loc_65DF2BC: mov 8(%ebp),%ebx;");
    asm("loc_65DF2BF: cmp $0x100,%ebx;");
    asm("loc_65DF2C5: jge loc_65DF2EF;");
    asm("loc_65DF2C7: cmpl $1,_data_65E5BE0;");
    asm("loc_65DF2CE: jle loc_65DF2DC;");
    asm("loc_65DF2D0: push $2;");
    asm("loc_65DF2D2: push %ebx;");
    asm("loc_65DF2D3: call _sub_65DDB90;");
    asm("loc_65DF2D8: pop %ecx;");
    asm("loc_65DF2D9: pop %ecx;");
    asm("loc_65DF2DA: jmp loc_65DF2E7;");
    asm("loc_65DF2DC: mov _off_65E59D0,%eax;");
    asm("loc_65DF2E1: mov (%eax,%ebx,2),%al;");
    asm("loc_65DF2E4: and $2,%eax;");
    asm("loc_65DF2E7: test %eax,%eax;");
    asm("loc_65DF2E9: jne loc_65DF2EF;");
    asm("loc_65DF2EB: mov %ebx,%eax;");
    asm("loc_65DF2ED: jmp loc_65DF35A;");
    asm("loc_65DF2EF: mov _off_65E59D0,%edx;");
    asm("loc_65DF2F5: mov %ebx,%eax;");
    asm("loc_65DF2F7: sar $8,%eax;");
    asm("loc_65DF2FA: movzbl %al,%ecx;");
    asm("loc_65DF2FD: testb $0x80,1(%edx,%ecx,2);");
    asm("loc_65DF302: je loc_65DF312;");
    asm("loc_65DF304: andb $0,0xA(%ebp);");
    asm("loc_65DF308: mov %al,8(%ebp);");
    asm("loc_65DF30B: mov %bl,9(%ebp);");
    asm("loc_65DF30E: push $2;");
    asm("loc_65DF310: jmp loc_65DF31B;");
    asm("loc_65DF312: andb $0,9(%ebp);");
    asm("loc_65DF316: mov %bl,8(%ebp);");
    asm("loc_65DF319: push $1;");
    asm("loc_65DF31B: pop %eax;");
    asm("loc_65DF31C: lea -4(%ebp),%ecx;");
    asm("loc_65DF31F: push $1;");
    asm("loc_65DF321: push $0;");
    asm("loc_65DF323: push $3;");
    asm("loc_65DF325: push %ecx;");
    asm("loc_65DF326: push %eax;");
    asm("loc_65DF327: lea 8(%ebp),%eax;");
    asm("loc_65DF32A: push %eax;");
    asm("loc_65DF32B: push $0x200;");
    asm("loc_65DF330: pushl _data_65E63E8;");
    asm("loc_65DF336: call _sub_65DEFD3;");
    asm("loc_65DF33B: add $0x20,%esp;");
    asm("loc_65DF33E: test %eax,%eax;");
    asm("loc_65DF340: je loc_65DF2EB;");
    asm("loc_65DF342: cmp $1,%eax;");
    asm("loc_65DF345: jne loc_65DF34D;");
    asm("loc_65DF347: movzbl -4(%ebp),%eax;");
    asm("loc_65DF34B: jmp loc_65DF35A;");
    asm("loc_65DF34D: movzbl -3(%ebp),%eax;");
    asm("loc_65DF351: movzbl -4(%ebp),%ecx;");
    asm("loc_65DF355: shl $8,%eax;");
    asm("loc_65DF358: or %ecx,%eax;");
    asm("loc_65DF35A: pop %ebx;");
    asm("loc_65DF35B: leave;");
    asm("loc_65DF35C: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65DF35D() // _fclose
{
    __DEBUG_ASM(65DF35D);
    // chunk 0x65DF35D _sub_65DF35D
    asm("loc_65DF35D: push %esi;");
    asm("loc_65DF35E: mov 8(%esp),%esi;");
    asm("loc_65DF362: push %edi;");
    asm("loc_65DF363: or $0xFFFFFFFF,%edi;");
    asm("loc_65DF366: testb $0x40,0xC(%esi);");
    asm("loc_65DF36A: je loc_65DF372;");
    asm("loc_65DF36C: andl $0,0xC(%esi);");
    asm("loc_65DF370: jmp loc_65DF389;");
    asm("loc_65DF372: push %esi;");
    asm("loc_65DF373: call _sub_65DD798;");
    asm("loc_65DF378: push %esi;");
    asm("loc_65DF379: call _sub_65DF38E;");
    asm("loc_65DF37E: push %esi;");
    asm("loc_65DF37F: mov %eax,%edi;");
    asm("loc_65DF381: call _sub_65DD7EA;");
    asm("loc_65DF386: add $0xC,%esp;");
    asm("loc_65DF389: mov %edi,%eax;");
    asm("loc_65DF38B: pop %edi;");
    asm("loc_65DF38C: pop %esi;");
    asm("loc_65DF38D: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65DF38E() // __fclose_lk
{
    __DEBUG_ASM(65DF38E);
    // chunk 0x65DF38E _sub_65DF38E
    asm("loc_65DF38E: push %esi;");
    asm("loc_65DF38F: mov 8(%esp),%esi;");
    asm("loc_65DF393: push %edi;");
    asm("loc_65DF394: or $0xFFFFFFFF,%edi;");
    asm("loc_65DF397: testb $0x83,0xC(%esi);");
    asm("loc_65DF39B: je loc_65DF3D1;");
    asm("loc_65DF39D: push %esi;");
    asm("loc_65DF39E: call _sub_65DEA8D;");
    asm("loc_65DF3A3: push %esi;");
    asm("loc_65DF3A4: mov %eax,%edi;");
    asm("loc_65DF3A6: call _sub_65DFA8D;");
    asm("loc_65DF3AB: pushl 0x10(%esi);");
    asm("loc_65DF3AE: call _sub_65DF9AD;");
    asm("loc_65DF3B3: add $0xC,%esp;");
    asm("loc_65DF3B6: test %eax,%eax;");
    asm("loc_65DF3B8: jge loc_65DF3BF;");
    asm("loc_65DF3BA: or $0xFFFFFFFF,%edi;");
    asm("loc_65DF3BD: jmp loc_65DF3D1;");
    asm("loc_65DF3BF: mov 0x1C(%esi),%eax;");
    asm("loc_65DF3C2: test %eax,%eax;");
    asm("loc_65DF3C4: je loc_65DF3D1;");
    asm("loc_65DF3C6: push %eax;");
    asm("loc_65DF3C7: call _sub_65D7F23;");
    asm("loc_65DF3CC: andl $0,0x1C(%esi);");
    asm("loc_65DF3D0: pop %ecx;");
    asm("loc_65DF3D1: andl $0,0xC(%esi);");
    asm("loc_65DF3D5: mov %edi,%eax;");
    asm("loc_65DF3D7: pop %edi;");
    asm("loc_65DF3D8: pop %esi;");
    asm("loc_65DF3D9: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65DF3DA() // __commit
{
    __DEBUG_ASM(65DF3DA);
    // chunk 0x65DF3DA _sub_65DF3DA
    asm("loc_65DF3DA: push %ebx;");
    asm("loc_65DF3DB: mov 8(%esp),%ebx;");
    asm("loc_65DF3DF: cmp _data_65E7A40,%ebx;");
    asm("loc_65DF3E5: push %esi;");
    asm("loc_65DF3E6: push %edi;");
    asm("loc_65DF3E7: jae loc_65DF45B;");
    asm("loc_65DF3E9: mov %ebx,%eax;");
    asm("loc_65DF3EB: sar $5,%eax;");
    asm("loc_65DF3EE: lea _data_65E7940(,%eax,4),%edi;");
    asm("loc_65DF3F5: mov %ebx,%eax;");
    asm("loc_65DF3F7: and $0x1F,%eax;");
    asm("loc_65DF3FA: lea (%eax,%eax,8),%esi;");
    asm("loc_65DF3FD: mov (%edi),%eax;");
    asm("loc_65DF3FF: shl $2,%esi;");
    asm("loc_65DF402: testb $1,4(%eax,%esi);");
    asm("loc_65DF407: je loc_65DF45B;");
    asm("loc_65DF409: push %ebx;");
    asm("loc_65DF40A: call _sub_65DE95D;");
    asm("loc_65DF40F: mov (%edi),%eax;");
    asm("loc_65DF411: pop %ecx;");
    asm("loc_65DF412: testb $1,4(%eax,%esi);");
    asm("loc_65DF417: je loc_65DF442;");
    asm("loc_65DF419: push %ebx;");
    asm("loc_65DF41A: call _sub_65DE91B;");
    asm("loc_65DF41F: pop %ecx;");
    asm("loc_65DF420: push %eax;");
    asm("loc_65DF421: calll *_import_65E1028;");
    asm("loc_65DF427: test %eax,%eax;");
    asm("loc_65DF429: jne loc_65DF435;");
    asm("loc_65DF42B: calll *_import_65E107C;");
    asm("loc_65DF431: mov %eax,%esi;");
    asm("loc_65DF433: jmp loc_65DF437;");
    asm("loc_65DF435: xor %esi,%esi;");
    asm("loc_65DF437: test %esi,%esi;");
    asm("loc_65DF439: je loc_65DF450;");
    asm("loc_65DF43B: call _sub_65DE893;");
    asm("loc_65DF440: mov %esi,(%eax);");
    asm("loc_65DF442: call _sub_65DE88A;");
    asm("loc_65DF447: movl $9,(%eax);");
    asm("loc_65DF44D: or $0xFFFFFFFF,%esi;");
    asm("loc_65DF450: push %ebx;");
    asm("loc_65DF451: call _sub_65DE9BC;");
    asm("loc_65DF456: pop %ecx;");
    asm("loc_65DF457: mov %esi,%eax;");
    asm("loc_65DF459: jmp loc_65DF469;");
    asm("loc_65DF45B: call _sub_65DE88A;");
    asm("loc_65DF460: movl $9,(%eax);");
    asm("loc_65DF466: or $0xFFFFFFFF,%eax;");
    asm("loc_65DF469: pop %edi;");
    asm("loc_65DF46A: pop %esi;");
    asm("loc_65DF46B: pop %ebx;");
    asm("loc_65DF46C: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65DF470() // _strcspn
{
    __DEBUG_ASM(65DF470);
    // chunk 0x65DF470 _sub_65DF470
    asm("loc_65DF470: push %ebp;");
    asm("loc_65DF471: mov %esp,%ebp;");
    asm("loc_65DF473: push %esi;");
    asm("loc_65DF474: xor %eax,%eax;");
    asm("loc_65DF476: push %eax;");
    asm("loc_65DF477: push %eax;");
    asm("loc_65DF478: push %eax;");
    asm("loc_65DF479: push %eax;");
    asm("loc_65DF47A: push %eax;");
    asm("loc_65DF47B: push %eax;");
    asm("loc_65DF47C: push %eax;");
    asm("loc_65DF47D: push %eax;");
    asm("loc_65DF47E: mov 0xC(%ebp),%edx;");
    asm("loc_65DF481: lea (%ecx),%ecx;");
    asm("loc_65DF484: mov (%edx),%al;");
    asm("loc_65DF486: or %al,%al;");
    asm("loc_65DF488: je loc_65DF491;");
    asm("loc_65DF48A: inc %edx;");
    asm("loc_65DF48B: bts %eax,(%esp);");
    asm("loc_65DF48F: jmp loc_65DF484;");
    asm("loc_65DF491: mov 8(%ebp),%esi;");
    asm("loc_65DF494: or $0xFFFFFFFF,%ecx;");
    asm("loc_65DF497: nop;");
    asm("loc_65DF498: inc %ecx;");
    asm("loc_65DF499: mov (%esi),%al;");
    asm("loc_65DF49B: or %al,%al;");
    asm("loc_65DF49D: je loc_65DF4A6;");
    asm("loc_65DF49F: inc %esi;");
    asm("loc_65DF4A0: bt %eax,(%esp);");
    asm("loc_65DF4A4: jae loc_65DF498;");
    asm("loc_65DF4A6: mov %ecx,%eax;");
    asm("loc_65DF4A8: add $0x20,%esp;");
    asm("loc_65DF4AB: pop %esi;");
    asm("loc_65DF4AC: leave;");
    asm("loc_65DF4AD: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65DF4B0() // _strpbrk
{
    __DEBUG_ASM(65DF4B0);
    // chunk 0x65DF4B0 _sub_65DF4B0
    asm("loc_65DF4B0: push %ebp;");
    asm("loc_65DF4B1: mov %esp,%ebp;");
    asm("loc_65DF4B3: push %esi;");
    asm("loc_65DF4B4: xor %eax,%eax;");
    asm("loc_65DF4B6: push %eax;");
    asm("loc_65DF4B7: push %eax;");
    asm("loc_65DF4B8: push %eax;");
    asm("loc_65DF4B9: push %eax;");
    asm("loc_65DF4BA: push %eax;");
    asm("loc_65DF4BB: push %eax;");
    asm("loc_65DF4BC: push %eax;");
    asm("loc_65DF4BD: push %eax;");
    asm("loc_65DF4BE: mov 0xC(%ebp),%edx;");
    asm("loc_65DF4C1: lea (%ecx),%ecx;");
    asm("loc_65DF4C4: mov (%edx),%al;");
    asm("loc_65DF4C6: or %al,%al;");
    asm("loc_65DF4C8: je loc_65DF4D1;");
    asm("loc_65DF4CA: inc %edx;");
    asm("loc_65DF4CB: bts %eax,(%esp);");
    asm("loc_65DF4CF: jmp loc_65DF4C4;");
    asm("loc_65DF4D1: mov 8(%ebp),%esi;");
    asm("loc_65DF4D4: mov (%esi),%al;");
    asm("loc_65DF4D6: or %al,%al;");
    asm("loc_65DF4D8: je loc_65DF4E4;");
    asm("loc_65DF4DA: inc %esi;");
    asm("loc_65DF4DB: bt %eax,(%esp);");
    asm("loc_65DF4DF: jae loc_65DF4D4;");
    asm("loc_65DF4E1: lea -1(%esi),%eax;");
    asm("loc_65DF4E4: add $0x20,%esp;");
    asm("loc_65DF4E7: pop %esi;");
    asm("loc_65DF4E8: leave;");
    asm("loc_65DF4E9: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65DF4EA() // ___crtCompareStringA
{
    __DEBUG_ASM(65DF4EA);
    // chunk 0x65DF4EA _sub_65DF4EA
    asm("loc_65DF4EA: push %ebp;");
    asm("loc_65DF4EB: mov %esp,%ebp;");
    asm("loc_65DF4ED: push $0xFFFFFFFF;");
    asm("loc_65DF4EF: push $_data_65E1B40;");
    asm("loc_65DF4F4: push $_sub_65DCF2C;");
    asm("loc_65DF4F9: mov %fs:0,%eax;");
    asm("loc_65DF4FF: push %eax;");
    asm("loc_65DF500: mov %esp,%fs:0;");
    asm("loc_65DF507: sub $0x30,%esp;");
    asm("loc_65DF50A: push %ebx;");
    asm("loc_65DF50B: push %esi;");
    asm("loc_65DF50C: push %edi;");
    asm("loc_65DF50D: mov %esp,-0x18(%ebp);");
    asm("loc_65DF510: xor %ebx,%ebx;");
    asm("loc_65DF512: cmp %ebx,_data_65E649C;");
    asm("loc_65DF518: push $1;");
    asm("loc_65DF51A: pop %edi;");
    asm("loc_65DF51B: jne loc_65DF55D;");
    asm("loc_65DF51D: push %edi;");
    asm("loc_65DF51E: mov $_data_65E1B10,%eax;");
    asm("loc_65DF523: push %eax;");
    asm("loc_65DF524: push %edi;");
    asm("loc_65DF525: push %eax;");
    asm("loc_65DF526: push %ebx;");
    asm("loc_65DF527: push %ebx;");
    asm("loc_65DF528: calll *_import_65E1020;");
    asm("loc_65DF52E: test %eax,%eax;");
    asm("loc_65DF530: je loc_65DF53A;");
    asm("loc_65DF532: mov %edi,_data_65E649C;");
    asm("loc_65DF538: jmp loc_65DF55D;");
    asm("loc_65DF53A: push %edi;");
    asm("loc_65DF53B: mov $_data_65E1B0C,%eax;");
    asm("loc_65DF540: push %eax;");
    asm("loc_65DF541: push %edi;");
    asm("loc_65DF542: push %eax;");
    asm("loc_65DF543: push %ebx;");
    asm("loc_65DF544: push %ebx;");
    asm("loc_65DF545: calll *_import_65E1024;");
    asm("loc_65DF54B: test %eax,%eax;");
    asm("loc_65DF54D: je loc_65DF753;");
    asm("loc_65DF553: movl $2,_data_65E649C;");
    asm("loc_65DF55D: mov 0x14(%ebp),%esi;");
    asm("loc_65DF560: cmp %ebx,%esi;");
    asm("loc_65DF562: jle loc_65DF574;");
    asm("loc_65DF564: push %esi;");
    asm("loc_65DF565: pushl 0x10(%ebp);");
    asm("loc_65DF568: call _sub_65DF1F7;");
    asm("loc_65DF56D: pop %ecx;");
    asm("loc_65DF56E: pop %ecx;");
    asm("loc_65DF56F: mov %eax,%esi;");
    asm("loc_65DF571: mov %esi,0x14(%ebp);");
    asm("loc_65DF574: cmp %ebx,0x1C(%ebp);");
    asm("loc_65DF577: jle loc_65DF589;");
    asm("loc_65DF579: pushl 0x1C(%ebp);");
    asm("loc_65DF57C: pushl 0x18(%ebp);");
    asm("loc_65DF57F: call _sub_65DF1F7;");
    asm("loc_65DF584: pop %ecx;");
    asm("loc_65DF585: pop %ecx;");
    asm("loc_65DF586: mov %eax,0x1C(%ebp);");
    asm("loc_65DF589: mov _data_65E649C,%eax;");
    asm("loc_65DF58E: cmp $2,%eax;");
    asm("loc_65DF591: jne loc_65DF5AE;");
    asm("loc_65DF593: pushl 0x1C(%ebp);");
    asm("loc_65DF596: pushl 0x18(%ebp);");
    asm("loc_65DF599: push %esi;");
    asm("loc_65DF59A: pushl 0x10(%ebp);");
    asm("loc_65DF59D: pushl 0xC(%ebp);");
    asm("loc_65DF5A0: pushl 8(%ebp);");
    asm("loc_65DF5A3: calll *_import_65E1024;");
    asm("loc_65DF5A9: jmp loc_65DF755;");
    asm("loc_65DF5AE: cmp %edi,%eax;");
    asm("loc_65DF5B0: jne loc_65DF753;");
    asm("loc_65DF5B6: cmp %ebx,0x20(%ebp);");
    asm("loc_65DF5B9: jne loc_65DF5C3;");
    asm("loc_65DF5BB: mov _data_65E63F8,%eax;");
    asm("loc_65DF5C0: mov %eax,0x20(%ebp);");
    asm("loc_65DF5C3: cmp %ebx,%esi;");
    asm("loc_65DF5C5: je loc_65DF5D0;");
    asm("loc_65DF5C7: cmp %ebx,0x1C(%ebp);");
    asm("loc_65DF5CA: jne loc_65DF668;");
    asm("loc_65DF5D0: cmp 0x1C(%ebp),%esi;");
    asm("loc_65DF5D3: jne loc_65DF5DD;");
    asm("loc_65DF5D5: push $2;");
    asm("loc_65DF5D7: pop %eax;");
    asm("loc_65DF5D8: jmp loc_65DF755;");
    asm("loc_65DF5DD: cmp %edi,0x1C(%ebp);");
    asm("loc_65DF5E0: jle loc_65DF5E9;");
    asm("loc_65DF5E2: mov %edi,%eax;");
    asm("loc_65DF5E4: jmp loc_65DF755;");
    asm("loc_65DF5E9: cmp %edi,%esi;");
    asm("loc_65DF5EB: jg loc_65DF62E;");
    asm("loc_65DF5ED: lea -0x3C(%ebp),%eax;");
    asm("loc_65DF5F0: push %eax;");
    asm("loc_65DF5F1: pushl 0x20(%ebp);");
    asm("loc_65DF5F4: calll *_import_65E1104;");
    asm("loc_65DF5FA: test %eax,%eax;");
    asm("loc_65DF5FC: je loc_65DF753;");
    asm("loc_65DF602: cmp %ebx,%esi;");
    asm("loc_65DF604: jle loc_65DF632;");
    asm("loc_65DF606: cmpl $2,-0x3C(%ebp);");
    asm("loc_65DF60A: jb loc_65DF62E;");
    asm("loc_65DF60C: lea -0x36(%ebp),%eax;");
    asm("loc_65DF60F: cmp %bl,-0x36(%ebp);");
    asm("loc_65DF612: je loc_65DF62E;");
    asm("loc_65DF614: mov 1(%eax),%dl;");
    asm("loc_65DF617: cmp %bl,%dl;");
    asm("loc_65DF619: je loc_65DF62E;");
    asm("loc_65DF61B: mov 0x10(%ebp),%ecx;");
    asm("loc_65DF61E: mov (%ecx),%cl;");
    asm("loc_65DF620: cmp (%eax),%cl;");
    asm("loc_65DF622: jb loc_65DF628;");
    asm("loc_65DF624: cmp %dl,%cl;");
    asm("loc_65DF626: jbe loc_65DF5D5;");
    asm("loc_65DF628: inc %eax;");
    asm("loc_65DF629: inc %eax;");
    asm("loc_65DF62A: cmp %bl,(%eax);");
    asm("loc_65DF62C: jne loc_65DF614;");
    asm("loc_65DF62E: push $3;");
    asm("loc_65DF630: jmp loc_65DF5D7;");
    asm("loc_65DF632: cmp %ebx,0x1C(%ebp);");
    asm("loc_65DF635: jle loc_65DF668;");
    asm("loc_65DF637: cmpl $2,-0x3C(%ebp);");
    asm("loc_65DF63B: jb loc_65DF5E2;");
    asm("loc_65DF63D: lea -0x36(%ebp),%eax;");
    asm("loc_65DF640: cmp %bl,-0x36(%ebp);");
    asm("loc_65DF643: je loc_65DF5E2;");
    asm("loc_65DF645: mov 1(%eax),%dl;");
    asm("loc_65DF648: cmp %bl,%dl;");
    asm("loc_65DF64A: je loc_65DF5E2;");
    asm("loc_65DF64C: mov 0x18(%ebp),%ecx;");
    asm("loc_65DF64F: mov (%ecx),%cl;");
    asm("loc_65DF651: cmp (%eax),%cl;");
    asm("loc_65DF653: jb loc_65DF65D;");
    asm("loc_65DF655: cmp %dl,%cl;");
    asm("loc_65DF657: jbe loc_65DF5D5;");
    asm("loc_65DF65D: inc %eax;");
    asm("loc_65DF65E: inc %eax;");
    asm("loc_65DF65F: cmp %bl,(%eax);");
    asm("loc_65DF661: jne loc_65DF645;");
    asm("loc_65DF663: jmp loc_65DF5E2;");
    asm("loc_65DF668: push %ebx;");
    asm("loc_65DF669: push %ebx;");
    asm("loc_65DF66A: push %esi;");
    asm("loc_65DF66B: pushl 0x10(%ebp);");
    asm("loc_65DF66E: push $9;");
    asm("loc_65DF670: pushl 0x20(%ebp);");
    asm("loc_65DF673: calll *_import_65E10E8;");
    asm("loc_65DF679: mov %eax,-0x1C(%ebp);");
    asm("loc_65DF67C: cmp %ebx,%eax;");
    asm("loc_65DF67E: je loc_65DF753;");
    asm("loc_65DF684: mov %ebx,-4(%ebp);");
    asm("loc_65DF687: add %eax,%eax;");
    asm("loc_65DF689: add $3,%eax;");
    asm("loc_65DF68C: and $0xFC,%al;");
    asm("loc_65DF68E: call _sub_65DE5A0;");
    asm("loc_65DF693: mov %esp,-0x18(%ebp);");
    asm("loc_65DF696: mov %esp,%eax;");
    asm("loc_65DF698: mov %eax,-0x24(%ebp);");
    asm("loc_65DF69B: orl $0xFFFFFFFF,-4(%ebp);");
    asm("loc_65DF69F: jmp loc_65DF6B7;");
    asm("loc_65DF6A1: push $1;");
    asm("loc_65DF6A3: pop %eax;");
    asm("loc_65DF6A4: ret;");
    asm("loc_65DF6A5: mov -0x18(%ebp),%esp;");
    asm("loc_65DF6A8: xor %ebx,%ebx;");
    asm("loc_65DF6AA: mov %ebx,-0x24(%ebp);");
    asm("loc_65DF6AD: orl $0xFFFFFFFF,-4(%ebp);");
    asm("loc_65DF6B1: mov 0x14(%ebp),%esi;");
    asm("loc_65DF6B4: push $1;");
    asm("loc_65DF6B6: pop %edi;");
    asm("loc_65DF6B7: cmp %ebx,-0x24(%ebp);");
    asm("loc_65DF6BA: je loc_65DF753;");
    asm("loc_65DF6C0: pushl -0x1C(%ebp);");
    asm("loc_65DF6C3: pushl -0x24(%ebp);");
    asm("loc_65DF6C6: push %esi;");
    asm("loc_65DF6C7: pushl 0x10(%ebp);");
    asm("loc_65DF6CA: push %edi;");
    asm("loc_65DF6CB: pushl 0x20(%ebp);");
    asm("loc_65DF6CE: mov _import_65E10E8,%esi;");
    asm("loc_65DF6D4: call *%esi;");
    asm("loc_65DF6D6: test %eax,%eax;");
    asm("loc_65DF6D8: je loc_65DF753;");
    asm("loc_65DF6DA: push %ebx;");
    asm("loc_65DF6DB: push %ebx;");
    asm("loc_65DF6DC: pushl 0x1C(%ebp);");
    asm("loc_65DF6DF: pushl 0x18(%ebp);");
    asm("loc_65DF6E2: push $9;");
    asm("loc_65DF6E4: pushl 0x20(%ebp);");
    asm("loc_65DF6E7: call *%esi;");
    asm("loc_65DF6E9: mov %eax,%esi;");
    asm("loc_65DF6EB: mov %esi,-0x20(%ebp);");
    asm("loc_65DF6EE: cmp %ebx,%esi;");
    asm("loc_65DF6F0: je loc_65DF753;");
    asm("loc_65DF6F2: mov %edi,-4(%ebp);");
    asm("loc_65DF6F5: lea (%esi,%esi),%eax;");
    asm("loc_65DF6F8: add $3,%eax;");
    asm("loc_65DF6FB: and $0xFC,%al;");
    asm("loc_65DF6FD: call _sub_65DE5A0;");
    asm("loc_65DF702: mov %esp,-0x18(%ebp);");
    asm("loc_65DF705: mov %esp,%edi;");
    asm("loc_65DF707: mov %edi,-0x28(%ebp);");
    asm("loc_65DF70A: orl $0xFFFFFFFF,-4(%ebp);");
    asm("loc_65DF70E: jmp loc_65DF722;");
    asm("loc_65DF710: push $1;");
    asm("loc_65DF712: pop %eax;");
    asm("loc_65DF713: ret;");
    asm("loc_65DF714: mov -0x18(%ebp),%esp;");
    asm("loc_65DF717: xor %ebx,%ebx;");
    asm("loc_65DF719: xor %edi,%edi;");
    asm("loc_65DF71B: orl $0xFFFFFFFF,-4(%ebp);");
    asm("loc_65DF71F: mov -0x20(%ebp),%esi;");
    asm("loc_65DF722: cmp %ebx,%edi;");
    asm("loc_65DF724: je loc_65DF753;");
    asm("loc_65DF726: push %esi;");
    asm("loc_65DF727: push %edi;");
    asm("loc_65DF728: pushl 0x1C(%ebp);");
    asm("loc_65DF72B: pushl 0x18(%ebp);");
    asm("loc_65DF72E: push $1;");
    asm("loc_65DF730: pushl 0x20(%ebp);");
    asm("loc_65DF733: calll *_import_65E10E8;");
    asm("loc_65DF739: test %eax,%eax;");
    asm("loc_65DF73B: je loc_65DF753;");
    asm("loc_65DF73D: push %esi;");
    asm("loc_65DF73E: push %edi;");
    asm("loc_65DF73F: pushl -0x1C(%ebp);");
    asm("loc_65DF742: pushl -0x24(%ebp);");
    asm("loc_65DF745: pushl 0xC(%ebp);");
    asm("loc_65DF748: pushl 8(%ebp);");
    asm("loc_65DF74B: calll *_import_65E1020;");
    asm("loc_65DF751: jmp loc_65DF755;");
    asm("loc_65DF753: xor %eax,%eax;");
    asm("loc_65DF755: lea -0x4C(%ebp),%esp;");
    asm("loc_65DF758: mov -0x10(%ebp),%ecx;");
    asm("loc_65DF75B: mov %ecx,%fs:0;");
    asm("loc_65DF762: pop %edi;");
    asm("loc_65DF763: pop %esi;");
    asm("loc_65DF764: pop %ebx;");
    asm("loc_65DF765: leave;");
    asm("loc_65DF766: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65DF767() // ___crtsetenv
{
    __DEBUG_ASM(65DF767);
    // chunk 0x65DF767 _sub_65DF767
    asm("loc_65DF767: push %ebp;");
    asm("loc_65DF768: mov %esp,%ebp;");
    asm("loc_65DF76A: push %ecx;");
    asm("loc_65DF76B: push %ecx;");
    asm("loc_65DF76C: push %ebx;");
    asm("loc_65DF76D: push %esi;");
    asm("loc_65DF76E: push %edi;");
    asm("loc_65DF76F: xor %edi,%edi;");
    asm("loc_65DF771: cmp %edi,8(%ebp);");
    asm("loc_65DF774: je loc_65DF7CB;");
    asm("loc_65DF776: push $0x3D;");
    asm("loc_65DF778: pushl 8(%ebp);");
    asm("loc_65DF77B: call _sub_65DFC91;");
    asm("loc_65DF780: mov %eax,%esi;");
    asm("loc_65DF782: pop %ecx;");
    asm("loc_65DF783: cmp %edi,%esi;");
    asm("loc_65DF785: pop %ecx;");
    asm("loc_65DF786: mov %esi,-8(%ebp);");
    asm("loc_65DF789: je loc_65DF7CB;");
    asm("loc_65DF78B: cmp %esi,8(%ebp);");
    asm("loc_65DF78E: je loc_65DF7CB;");
    asm("loc_65DF790: mov _data_65E6154,%eax;");
    asm("loc_65DF795: xor %ebx,%ebx;");
    asm("loc_65DF797: cmp %bl,1(%esi);");
    asm("loc_65DF79A: sete %bl;");
    asm("loc_65DF79D: cmp _data_65E6158,%eax;");
    asm("loc_65DF7A3: jne loc_65DF7B1;");
    asm("loc_65DF7A5: push %eax;");
    asm("loc_65DF7A6: call _sub_65DF946;");
    asm("loc_65DF7AB: pop %ecx;");
    asm("loc_65DF7AC: mov %eax,_data_65E6154;");
    asm("loc_65DF7B1: cmp %edi,%eax;");
    asm("loc_65DF7B3: jne loc_65DF809;");
    asm("loc_65DF7B5: cmp %edi,0xC(%ebp);");
    asm("loc_65DF7B8: je loc_65DF7D3;");
    asm("loc_65DF7BA: cmp %edi,_data_65E615C;");
    asm("loc_65DF7C0: je loc_65DF7D3;");
    asm("loc_65DF7C2: call _sub_65DEF65;");
    asm("loc_65DF7C7: test %eax,%eax;");
    asm("loc_65DF7C9: je loc_65DF809;");
    asm("loc_65DF7CB: or $0xFFFFFFFF,%eax;");
    asm("loc_65DF7CE: pop %edi;");
    asm("loc_65DF7CF: pop %esi;");
    asm("loc_65DF7D0: pop %ebx;");
    asm("loc_65DF7D1: leave;");
    asm("loc_65DF7D2: ret;");
    asm("loc_65DF7D3: cmp %edi,%ebx;");
    asm("loc_65DF7D5: jne loc_65DF8E7;");
    asm("loc_65DF7DB: push $4;");
    asm("loc_65DF7DD: call _sub_65D8535;");
    asm("loc_65DF7E2: cmp %edi,%eax;");
    asm("loc_65DF7E4: pop %ecx;");
    asm("loc_65DF7E5: mov %eax,_data_65E6154;");
    asm("loc_65DF7EA: je loc_65DF7CB;");
    asm("loc_65DF7EC: mov %edi,(%eax);");
    asm("loc_65DF7EE: cmp %edi,_data_65E615C;");
    asm("loc_65DF7F4: jne loc_65DF809;");
    asm("loc_65DF7F6: push $4;");
    asm("loc_65DF7F8: call _sub_65D8535;");
    asm("loc_65DF7FD: cmp %edi,%eax;");
    asm("loc_65DF7FF: pop %ecx;");
    asm("loc_65DF800: mov %eax,_data_65E615C;");
    asm("loc_65DF805: je loc_65DF7CB;");
    asm("loc_65DF807: mov %edi,(%eax);");
    asm("loc_65DF809: sub 8(%ebp),%esi;");
    asm("loc_65DF80C: mov _data_65E6154,%edi;");
    asm("loc_65DF812: mov %edi,-4(%ebp);");
    asm("loc_65DF815: push %esi;");
    asm("loc_65DF816: pushl 8(%ebp);");
    asm("loc_65DF819: call _sub_65DF8EE;");
    asm("loc_65DF81E: mov %eax,%esi;");
    asm("loc_65DF820: pop %ecx;");
    asm("loc_65DF821: test %esi,%esi;");
    asm("loc_65DF823: pop %ecx;");
    asm("loc_65DF824: jl loc_65DF869;");
    asm("loc_65DF826: cmpl $0,(%edi);");
    asm("loc_65DF829: je loc_65DF869;");
    asm("loc_65DF82B: test %ebx,%ebx;");
    asm("loc_65DF82D: je loc_65DF861;");
    asm("loc_65DF82F: pushl (%edi,%esi,4);");
    asm("loc_65DF832: lea (%edi,%esi,4),%edi;");
    asm("loc_65DF835: call _sub_65D7F23;");
    asm("loc_65DF83A: pop %ecx;");
    asm("loc_65DF83B: cmpl $0,(%edi);");
    asm("loc_65DF83E: je loc_65DF84B;");
    asm("loc_65DF840: mov 4(%edi),%eax;");
    asm("loc_65DF843: inc %esi;");
    asm("loc_65DF844: mov %eax,(%edi);");
    asm("loc_65DF846: add $4,%edi;");
    asm("loc_65DF849: jmp loc_65DF83B;");
    asm("loc_65DF84B: mov %esi,%eax;");
    asm("loc_65DF84D: shl $2,%eax;");
    asm("loc_65DF850: push %eax;");
    asm("loc_65DF851: pushl -4(%ebp);");
    asm("loc_65DF854: call _sub_65D9B5F;");
    asm("loc_65DF859: pop %ecx;");
    asm("loc_65DF85A: test %eax,%eax;");
    asm("loc_65DF85C: pop %ecx;");
    asm("loc_65DF85D: je loc_65DF89B;");
    asm("loc_65DF85F: jmp loc_65DF896;");
    asm("loc_65DF861: mov 8(%ebp),%eax;");
    asm("loc_65DF864: mov %eax,(%edi,%esi,4);");
    asm("loc_65DF867: jmp loc_65DF89B;");
    asm("loc_65DF869: test %ebx,%ebx;");
    asm("loc_65DF86B: jne loc_65DF8E7;");
    asm("loc_65DF86D: test %esi,%esi;");
    asm("loc_65DF86F: jge loc_65DF873;");
    asm("loc_65DF871: neg %esi;");
    asm("loc_65DF873: lea 8(,%esi,4),%eax;");
    asm("loc_65DF87A: push %eax;");
    asm("loc_65DF87B: push %edi;");
    asm("loc_65DF87C: call _sub_65D9B5F;");
    asm("loc_65DF881: pop %ecx;");
    asm("loc_65DF882: test %eax,%eax;");
    asm("loc_65DF884: pop %ecx;");
    asm("loc_65DF885: je loc_65DF7CB;");
    asm("loc_65DF88B: mov 8(%ebp),%ecx;");
    asm("loc_65DF88E: mov %ecx,(%eax,%esi,4);");
    asm("loc_65DF891: andl $0,4(%eax,%esi,4);");
    asm("loc_65DF896: mov %eax,_data_65E6154;");
    asm("loc_65DF89B: cmpl $0,0xC(%ebp);");
    asm("loc_65DF89F: je loc_65DF8E7;");
    asm("loc_65DF8A1: pushl 8(%ebp);");
    asm("loc_65DF8A4: call _sub_65D8120;");
    asm("loc_65DF8A9: inc %eax;");
    asm("loc_65DF8AA: inc %eax;");
    asm("loc_65DF8AB: push %eax;");
    asm("loc_65DF8AC: call _sub_65D8535;");
    asm("loc_65DF8B1: mov %eax,%esi;");
    asm("loc_65DF8B3: pop %ecx;");
    asm("loc_65DF8B4: test %esi,%esi;");
    asm("loc_65DF8B6: pop %ecx;");
    asm("loc_65DF8B7: je loc_65DF8E7;");
    asm("loc_65DF8B9: pushl 8(%ebp);");
    asm("loc_65DF8BC: push %esi;");
    asm("loc_65DF8BD: call loc_65DD010;");
    asm("loc_65DF8C2: mov %esi,%eax;");
    asm("loc_65DF8C4: pop %ecx;");
    asm("loc_65DF8C5: sub 8(%ebp),%eax;");
    asm("loc_65DF8C8: pop %ecx;");
    asm("loc_65DF8C9: add -8(%ebp),%eax;");
    asm("loc_65DF8CC: andb $0,(%eax);");
    asm("loc_65DF8CF: inc %eax;");
    asm("loc_65DF8D0: neg %ebx;");
    asm("loc_65DF8D2: sbb %ebx,%ebx;");
    asm("loc_65DF8D4: not %ebx;");
    asm("loc_65DF8D6: and %eax,%ebx;");
    asm("loc_65DF8D8: push %ebx;");
    asm("loc_65DF8D9: push %esi;");
    asm("loc_65DF8DA: calll *_import_65E101C;");
    asm("loc_65DF8E0: push %esi;");
    asm("loc_65DF8E1: call _sub_65D7F23;");
    asm("loc_65DF8E6: pop %ecx;");
    asm("loc_65DF8E7: xor %eax,%eax;");
    asm("loc_65DF8E9: jmp loc_65DF7CE;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65DF8EE() // _findenv
{
    __DEBUG_ASM(65DF8EE);
    // chunk 0x65DF8EE _sub_65DF8EE
    asm("loc_65DF8EE: push %esi;");
    asm("loc_65DF8EF: mov _data_65E6154,%esi;");
    asm("loc_65DF8F5: push %edi;");
    asm("loc_65DF8F6: mov (%esi),%eax;");
    asm("loc_65DF8F8: test %eax,%eax;");
    asm("loc_65DF8FA: je loc_65DF929;");
    asm("loc_65DF8FC: mov 0x10(%esp),%edi;");
    asm("loc_65DF900: push %edi;");
    asm("loc_65DF901: push %eax;");
    asm("loc_65DF902: pushl 0x14(%esp);");
    asm("loc_65DF906: call _sub_65DEF26;");
    asm("loc_65DF90B: add $0xC,%esp;");
    asm("loc_65DF90E: test %eax,%eax;");
    asm("loc_65DF910: jne loc_65DF91F;");
    asm("loc_65DF912: mov (%esi),%eax;");
    asm("loc_65DF914: mov (%eax,%edi),%al;");
    asm("loc_65DF917: cmp $0x3D,%al;");
    asm("loc_65DF919: je loc_65DF939;");
    asm("loc_65DF91B: test %al,%al;");
    asm("loc_65DF91D: je loc_65DF939;");
    asm("loc_65DF91F: mov 4(%esi),%eax;");
    asm("loc_65DF922: add $4,%esi;");
    asm("loc_65DF925: test %eax,%eax;");
    asm("loc_65DF927: jne loc_65DF900;");
    asm("loc_65DF929: mov %esi,%eax;");
    asm("loc_65DF92B: sub _data_65E6154,%eax;");
    asm("loc_65DF931: sar $2,%eax;");
    asm("loc_65DF934: neg %eax;");
    asm("loc_65DF936: pop %edi;");
    asm("loc_65DF937: pop %esi;");
    asm("loc_65DF938: ret;");
    asm("loc_65DF939: mov %esi,%eax;");
    asm("loc_65DF93B: sub _data_65E6154,%eax;");
    asm("loc_65DF941: sar $2,%eax;");
    asm("loc_65DF944: jmp loc_65DF936;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65DF946() // _copy_environ
{
    __DEBUG_ASM(65DF946);
    // chunk 0x65DF946 _sub_65DF946
    asm("loc_65DF946: push %edi;");
    asm("loc_65DF947: mov 8(%esp),%edi;");
    asm("loc_65DF94B: xor %ecx,%ecx;");
    asm("loc_65DF94D: test %edi,%edi;");
    asm("loc_65DF94F: jne loc_65DF955;");
    asm("loc_65DF951: xor %eax,%eax;");
    asm("loc_65DF953: pop %edi;");
    asm("loc_65DF954: ret;");
    asm("loc_65DF955: cmpl $0,(%edi);");
    asm("loc_65DF958: lea 4(%edi),%eax;");
    asm("loc_65DF95B: je loc_65DF967;");
    asm("loc_65DF95D: mov (%eax),%edx;");
    asm("loc_65DF95F: inc %ecx;");
    asm("loc_65DF960: add $4,%eax;");
    asm("loc_65DF963: test %edx,%edx;");
    asm("loc_65DF965: jne loc_65DF95D;");
    asm("loc_65DF967: push %ebx;");
    asm("loc_65DF968: push %ebp;");
    asm("loc_65DF969: lea 4(,%ecx,4),%eax;");
    asm("loc_65DF970: push %esi;");
    asm("loc_65DF971: push %eax;");
    asm("loc_65DF972: call _sub_65D8535;");
    asm("loc_65DF977: mov %eax,%esi;");
    asm("loc_65DF979: pop %ecx;");
    asm("loc_65DF97A: test %esi,%esi;");
    asm("loc_65DF97C: mov %esi,%ebp;");
    asm("loc_65DF97E: jne loc_65DF988;");
    asm("loc_65DF980: push $9;");
    asm("loc_65DF982: call _sub_65D7EF0;");
    asm("loc_65DF987: pop %ecx;");
    asm("loc_65DF988: mov (%edi),%eax;");
    asm("loc_65DF98A: mov %edi,%ebx;");
    asm("loc_65DF98C: test %eax,%eax;");
    asm("loc_65DF98E: je loc_65DF9A3;");
    asm("loc_65DF990: push %eax;");
    asm("loc_65DF991: add $4,%ebx;");
    asm("loc_65DF994: call _sub_65DFD28;");
    asm("loc_65DF999: mov %eax,(%esi);");
    asm("loc_65DF99B: mov (%ebx),%eax;");
    asm("loc_65DF99D: pop %ecx;");
    asm("loc_65DF99E: add $4,%esi;");
    asm("loc_65DF9A1: jmp loc_65DF98C;");
    asm("loc_65DF9A3: andl $0,(%esi);");
    asm("loc_65DF9A6: mov %ebp,%eax;");
    asm("loc_65DF9A8: pop %esi;");
    asm("loc_65DF9A9: pop %ebp;");
    asm("loc_65DF9AA: pop %ebx;");
    asm("loc_65DF9AB: pop %edi;");
    asm("loc_65DF9AC: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65DF9AD() // __close
{
    __DEBUG_ASM(65DF9AD);
    // chunk 0x65DF9AD _sub_65DF9AD
    asm("loc_65DF9AD: push %esi;");
    asm("loc_65DF9AE: mov 8(%esp),%esi;");
    asm("loc_65DF9B2: cmp _data_65E7A40,%esi;");
    asm("loc_65DF9B8: jae loc_65DF9F2;");
    asm("loc_65DF9BA: mov %esi,%ecx;");
    asm("loc_65DF9BC: mov %esi,%eax;");
    asm("loc_65DF9BE: sar $5,%ecx;");
    asm("loc_65DF9C1: and $0x1F,%eax;");
    asm("loc_65DF9C4: mov _data_65E7940(,%ecx,4),%ecx;");
    asm("loc_65DF9CB: lea (%eax,%eax,8),%eax;");
    asm("loc_65DF9CE: testb $1,4(%ecx,%eax,4);");
    asm("loc_65DF9D3: je loc_65DF9F2;");
    asm("loc_65DF9D5: push %edi;");
    asm("loc_65DF9D6: push %esi;");
    asm("loc_65DF9D7: call _sub_65DE95D;");
    asm("loc_65DF9DC: push %esi;");
    asm("loc_65DF9DD: call _sub_65DFA0A;");
    asm("loc_65DF9E2: push %esi;");
    asm("loc_65DF9E3: mov %eax,%edi;");
    asm("loc_65DF9E5: call _sub_65DE9BC;");
    asm("loc_65DF9EA: add $0xC,%esp;");
    asm("loc_65DF9ED: mov %edi,%eax;");
    asm("loc_65DF9EF: pop %edi;");
    asm("loc_65DF9F0: pop %esi;");
    asm("loc_65DF9F1: ret;");
    asm("loc_65DF9F2: call _sub_65DE88A;");
    asm("loc_65DF9F7: movl $9,(%eax);");
    asm("loc_65DF9FD: call _sub_65DE893;");
    asm("loc_65DFA02: andl $0,(%eax);");
    asm("loc_65DFA05: or $0xFFFFFFFF,%eax;");
    asm("loc_65DFA08: pop %esi;");
    asm("loc_65DFA09: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65DFA0A() // __close_lk
{
    __DEBUG_ASM(65DFA0A);
    // chunk 0x65DFA0A _sub_65DFA0A
    asm("loc_65DFA0A: push %esi;");
    asm("loc_65DFA0B: mov 8(%esp),%esi;");
    asm("loc_65DFA0F: push %edi;");
    asm("loc_65DFA10: push %esi;");
    asm("loc_65DFA11: call _sub_65DE91B;");
    asm("loc_65DFA16: cmp $0xFFFFFFFF,%eax;");
    asm("loc_65DFA19: pop %ecx;");
    asm("loc_65DFA1A: je loc_65DFA58;");
    asm("loc_65DFA1C: cmp $1,%esi;");
    asm("loc_65DFA1F: je loc_65DFA26;");
    asm("loc_65DFA21: cmp $2,%esi;");
    asm("loc_65DFA24: jne loc_65DFA3C;");
    asm("loc_65DFA26: push $2;");
    asm("loc_65DFA28: call _sub_65DE91B;");
    asm("loc_65DFA2D: push $1;");
    asm("loc_65DFA2F: mov %eax,%edi;");
    asm("loc_65DFA31: call _sub_65DE91B;");
    asm("loc_65DFA36: pop %ecx;");
    asm("loc_65DFA37: cmp %edi,%eax;");
    asm("loc_65DFA39: pop %ecx;");
    asm("loc_65DFA3A: je loc_65DFA58;");
    asm("loc_65DFA3C: push %esi;");
    asm("loc_65DFA3D: call _sub_65DE91B;");
    asm("loc_65DFA42: pop %ecx;");
    asm("loc_65DFA43: push %eax;");
    asm("loc_65DFA44: calll *_import_65E1018;");
    asm("loc_65DFA4A: test %eax,%eax;");
    asm("loc_65DFA4C: jne loc_65DFA58;");
    asm("loc_65DFA4E: calll *_import_65E107C;");
    asm("loc_65DFA54: mov %eax,%edi;");
    asm("loc_65DFA56: jmp loc_65DFA5A;");
    asm("loc_65DFA58: xor %edi,%edi;");
    asm("loc_65DFA5A: push %esi;");
    asm("loc_65DFA5B: call _sub_65DE89C;");
    asm("loc_65DFA60: mov %esi,%eax;");
    asm("loc_65DFA62: and $0x1F,%esi;");
    asm("loc_65DFA65: sar $5,%eax;");
    asm("loc_65DFA68: pop %ecx;");
    asm("loc_65DFA69: mov _data_65E7940(,%eax,4),%eax;");
    asm("loc_65DFA70: lea (%esi,%esi,8),%ecx;");
    asm("loc_65DFA73: andb $0,4(%eax,%ecx,4);");
    asm("loc_65DFA78: test %edi,%edi;");
    asm("loc_65DFA7A: je loc_65DFA88;");
    asm("loc_65DFA7C: push %edi;");
    asm("loc_65DFA7D: call _sub_65DE817;");
    asm("loc_65DFA82: pop %ecx;");
    asm("loc_65DFA83: or $0xFFFFFFFF,%eax;");
    asm("loc_65DFA86: jmp loc_65DFA8A;");
    asm("loc_65DFA88: xor %eax,%eax;");
    asm("loc_65DFA8A: pop %edi;");
    asm("loc_65DFA8B: pop %esi;");
    asm("loc_65DFA8C: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65DFA8D() // __freebuf
{
    __DEBUG_ASM(65DFA8D);
    // chunk 0x65DFA8D _sub_65DFA8D
    asm("loc_65DFA8D: push %esi;");
    asm("loc_65DFA8E: mov 8(%esp),%esi;");
    asm("loc_65DFA92: mov 0xC(%esi),%eax;");
    asm("loc_65DFA95: test $0x83,%al;");
    asm("loc_65DFA97: je loc_65DFAB6;");
    asm("loc_65DFA99: test $8,%al;");
    asm("loc_65DFA9B: je loc_65DFAB6;");
    asm("loc_65DFA9D: pushl 8(%esi);");
    asm("loc_65DFAA0: call _sub_65D7F23;");
    asm("loc_65DFAA5: andw $0xFBF7,0xC(%esi);");
    asm("loc_65DFAAB: xor %eax,%eax;");
    asm("loc_65DFAAD: pop %ecx;");
    asm("loc_65DFAAE: mov %eax,(%esi);");
    asm("loc_65DFAB0: mov %eax,8(%esi);");
    asm("loc_65DFAB3: mov %eax,4(%esi);");
    asm("loc_65DFAB6: pop %esi;");
    asm("loc_65DFAB7: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65DFAC0() // __strcmpi
{
    __DEBUG_ASM(65DFAC0);
    // chunk 0x65DFAC0 _sub_65DFAC0
    asm("loc_65DFAC0: push %ebp;");
    asm("loc_65DFAC1: mov %esp,%ebp;");
    asm("loc_65DFAC3: push %edi;");
    asm("loc_65DFAC4: push %esi;");
    asm("loc_65DFAC5: push %ebx;");
    asm("loc_65DFAC6: mov 0xC(%ebp),%esi;");
    asm("loc_65DFAC9: mov 8(%ebp),%edi;");
    asm("loc_65DFACC: lea _data_65E63E0,%eax;");
    asm("loc_65DFAD2: cmpl $0,8(%eax);");
    asm("loc_65DFAD6: jne loc_65DFB13;");
    asm("loc_65DFAD8: mov $0xFF,%al;");
    asm("loc_65DFADA: mov %edi,%edi;");
    asm("loc_65DFADC: or %al,%al;");
    asm("loc_65DFADE: je loc_65DFB0E;");
    asm("loc_65DFAE0: mov (%esi),%al;");
    asm("loc_65DFAE2: inc %esi;");
    asm("loc_65DFAE3: mov (%edi),%ah;");
    asm("loc_65DFAE5: inc %edi;");
    asm("loc_65DFAE6: cmp %al,%ah;");
    asm("loc_65DFAE8: je loc_65DFADC;");
    asm("loc_65DFAEA: sub $0x41,%al;");
    asm("loc_65DFAEC: cmp $0x1A,%al;");
    asm("loc_65DFAEE: sbb %cl,%cl;");
    asm("loc_65DFAF0: and $0x20,%cl;");
    asm("loc_65DFAF3: add %cl,%al;");
    asm("loc_65DFAF5: add $0x41,%al;");
    asm("loc_65DFAF7: xchg %ah,%al;");
    asm("loc_65DFAF9: sub $0x41,%al;");
    asm("loc_65DFAFB: cmp $0x1A,%al;");
    asm("loc_65DFAFD: sbb %cl,%cl;");
    asm("loc_65DFAFF: and $0x20,%cl;");
    asm("loc_65DFB02: add %cl,%al;");
    asm("loc_65DFB04: add $0x41,%al;");
    asm("loc_65DFB06: cmp %ah,%al;");
    asm("loc_65DFB08: je loc_65DFADC;");
    asm("loc_65DFB0A: sbb %al,%al;");
    asm("loc_65DFB0C: sbb $0xFF,%al;");
    asm("loc_65DFB0E: movsbl %al,%eax;");
    asm("loc_65DFB11: jmp loc_65DFB8B;");
    asm("loc_65DFB13: lock incl _data_65E66C8;");
    asm("loc_65DFB1A: cmpl $0,_data_65E66C4;");
    asm("loc_65DFB21: jg loc_65DFB27;");
    asm("loc_65DFB23: push $0;");
    asm("loc_65DFB25: jmp loc_65DFB3C;");
    asm("loc_65DFB27: lock decl _data_65E66C8;");
    asm("loc_65DFB2E: push $0x13;");
    asm("loc_65DFB30: call _sub_65DCEAB;");
    asm("loc_65DFB35: movl $1,(%esp);");
    asm("loc_65DFB3C: mov $0xFF,%eax;");
    asm("loc_65DFB41: xor %ebx,%ebx;");
    asm("loc_65DFB43: nop;");
    asm("loc_65DFB44: or %al,%al;");
    asm("loc_65DFB46: je loc_65DFB6F;");
    asm("loc_65DFB48: mov (%esi),%al;");
    asm("loc_65DFB4A: inc %esi;");
    asm("loc_65DFB4B: mov (%edi),%bl;");
    asm("loc_65DFB4D: inc %edi;");
    asm("loc_65DFB4E: cmp %bl,%al;");
    asm("loc_65DFB50: je loc_65DFB44;");
    asm("loc_65DFB52: push %eax;");
    asm("loc_65DFB53: push %ebx;");
    asm("loc_65DFB54: call _sub_65DFD53;");
    asm("loc_65DFB59: mov %eax,%ebx;");
    asm("loc_65DFB5B: add $4,%esp;");
    asm("loc_65DFB5E: call _sub_65DFD53;");
    asm("loc_65DFB63: add $4,%esp;");
    asm("loc_65DFB66: cmp %al,%bl;");
    asm("loc_65DFB68: je loc_65DFB44;");
    asm("loc_65DFB6A: sbb %eax,%eax;");
    asm("loc_65DFB6C: sbb $0xFFFFFFFF,%eax;");
    asm("loc_65DFB6F: mov %eax,%ebx;");
    asm("loc_65DFB71: pop %eax;");
    asm("loc_65DFB72: or %eax,%eax;");
    asm("loc_65DFB74: jne loc_65DFB7F;");
    asm("loc_65DFB76: lock decl _data_65E66C8;");
    asm("loc_65DFB7D: jmp loc_65DFB89;");
    asm("loc_65DFB7F: push $0x13;");
    asm("loc_65DFB81: call _sub_65DCF0C;");
    asm("loc_65DFB86: add $4,%esp;");
    asm("loc_65DFB89: mov %ebx,%eax;");
    asm("loc_65DFB8B: pop %ebx;");
    asm("loc_65DFB8C: pop %esi;");
    asm("loc_65DFB8D: pop %edi;");
    asm("loc_65DFB8E: leave;");
    asm("loc_65DFB8F: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65DFB90() // __strnicmp
{
    __DEBUG_ASM(65DFB90);
    // chunk 0x65DFB90 _sub_65DFB90
    asm("loc_65DFB90: push %ebp;");
    asm("loc_65DFB91: mov %esp,%ebp;");
    asm("loc_65DFB93: push %edi;");
    asm("loc_65DFB94: push %esi;");
    asm("loc_65DFB95: push %ebx;");
    asm("loc_65DFB96: mov 0x10(%ebp),%ecx;");
    asm("loc_65DFB99: or %ecx,%ecx;");
    asm("loc_65DFB9B: je loc_65DFC8A;");
    asm("loc_65DFBA1: mov 8(%ebp),%esi;");
    asm("loc_65DFBA4: mov 0xC(%ebp),%edi;");
    asm("loc_65DFBA7: lea _data_65E63E0,%eax;");
    asm("loc_65DFBAD: cmpl $0,8(%eax);");
    asm("loc_65DFBB1: jne loc_65DFC01;");
    asm("loc_65DFBB3: mov $0x41,%bh;");
    asm("loc_65DFBB5: mov $0x5A,%bl;");
    asm("loc_65DFBB7: mov $0x20,%dh;");
    asm("loc_65DFBB9: lea (%ecx),%ecx;");
    asm("loc_65DFBBC: mov (%esi),%ah;");
    asm("loc_65DFBBE: or %ah,%ah;");
    asm("loc_65DFBC0: mov (%edi),%al;");
    asm("loc_65DFBC2: je loc_65DFBE5;");
    asm("loc_65DFBC4: or %al,%al;");
    asm("loc_65DFBC6: je loc_65DFBE5;");
    asm("loc_65DFBC8: inc %esi;");
    asm("loc_65DFBC9: inc %edi;");
    asm("loc_65DFBCA: cmp %bh,%ah;");
    asm("loc_65DFBCC: jb loc_65DFBD4;");
    asm("loc_65DFBCE: cmp %bl,%ah;");
    asm("loc_65DFBD0: ja loc_65DFBD4;");
    asm("loc_65DFBD2: add %dh,%ah;");
    asm("loc_65DFBD4: cmp %bh,%al;");
    asm("loc_65DFBD6: jb loc_65DFBDE;");
    asm("loc_65DFBD8: cmp %bl,%al;");
    asm("loc_65DFBDA: ja loc_65DFBDE;");
    asm("loc_65DFBDC: add %dh,%al;");
    asm("loc_65DFBDE: cmp %al,%ah;");
    asm("loc_65DFBE0: jne loc_65DFBEF;");
    asm("loc_65DFBE2: dec %ecx;");
    asm("loc_65DFBE3: jne loc_65DFBBC;");
    asm("loc_65DFBE5: xor %ecx,%ecx;");
    asm("loc_65DFBE7: cmp %al,%ah;");
    asm("loc_65DFBE9: je loc_65DFC8A;");
    asm("loc_65DFBEF: mov $0xFFFFFFFF,%ecx;");
    asm("loc_65DFBF4: jb loc_65DFC8A;");
    asm("loc_65DFBFA: neg %ecx;");
    asm("loc_65DFBFC: jmp loc_65DFC8A;");
    asm("loc_65DFC01: lock incl _data_65E66C8;");
    asm("loc_65DFC08: cmpl $0,_data_65E66C4;");
    asm("loc_65DFC0F: jg loc_65DFC15;");
    asm("loc_65DFC11: push $0;");
    asm("loc_65DFC13: jmp loc_65DFC2E;");
    asm("loc_65DFC15: lock decl _data_65E66C8;");
    asm("loc_65DFC1C: mov %ecx,%ebx;");
    asm("loc_65DFC1E: push $0x13;");
    asm("loc_65DFC20: call _sub_65DCEAB;");
    asm("loc_65DFC25: movl $1,(%esp);");
    asm("loc_65DFC2C: mov %ebx,%ecx;");
    asm("loc_65DFC2E: xor %eax,%eax;");
    asm("loc_65DFC30: xor %ebx,%ebx;");
    asm("loc_65DFC32: mov %edi,%edi;");
    asm("loc_65DFC34: mov (%esi),%al;");
    asm("loc_65DFC36: or %eax,%eax;");
    asm("loc_65DFC38: mov (%edi),%bl;");
    asm("loc_65DFC3A: je loc_65DFC5F;");
    asm("loc_65DFC3C: or %ebx,%ebx;");
    asm("loc_65DFC3E: je loc_65DFC5F;");
    asm("loc_65DFC40: inc %esi;");
    asm("loc_65DFC41: inc %edi;");
    asm("loc_65DFC42: push %ecx;");
    asm("loc_65DFC43: push %eax;");
    asm("loc_65DFC44: push %ebx;");
    asm("loc_65DFC45: call _sub_65DFD53;");
    asm("loc_65DFC4A: mov %eax,%ebx;");
    asm("loc_65DFC4C: add $4,%esp;");
    asm("loc_65DFC4F: call _sub_65DFD53;");
    asm("loc_65DFC54: add $4,%esp;");
    asm("loc_65DFC57: pop %ecx;");
    asm("loc_65DFC58: cmp %ebx,%eax;");
    asm("loc_65DFC5A: jne loc_65DFC65;");
    asm("loc_65DFC5C: dec %ecx;");
    asm("loc_65DFC5D: jne loc_65DFC34;");
    asm("loc_65DFC5F: xor %ecx,%ecx;");
    asm("loc_65DFC61: cmp %ebx,%eax;");
    asm("loc_65DFC63: je loc_65DFC6E;");
    asm("loc_65DFC65: mov $0xFFFFFFFF,%ecx;");
    asm("loc_65DFC6A: jb loc_65DFC6E;");
    asm("loc_65DFC6C: neg %ecx;");
    asm("loc_65DFC6E: pop %eax;");
    asm("loc_65DFC6F: or %eax,%eax;");
    asm("loc_65DFC71: jne loc_65DFC7C;");
    asm("loc_65DFC73: lock decl _data_65E66C8;");
    asm("loc_65DFC7A: jmp loc_65DFC8A;");
    asm("loc_65DFC7C: mov %ecx,%ebx;");
    asm("loc_65DFC7E: push $0x13;");
    asm("loc_65DFC80: call _sub_65DCF0C;");
    asm("loc_65DFC85: add $4,%esp;");
    asm("loc_65DFC88: mov %ebx,%ecx;");
    asm("loc_65DFC8A: mov %ecx,%eax;");
    asm("loc_65DFC8C: pop %ebx;");
    asm("loc_65DFC8D: pop %esi;");
    asm("loc_65DFC8E: pop %edi;");
    asm("loc_65DFC8F: leave;");
    asm("loc_65DFC90: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65DFC91() // __mbschr
{
    __DEBUG_ASM(65DFC91);
    // chunk 0x65DFC91 _sub_65DFC91
    asm("loc_65DFC91: push %ebp;");
    asm("loc_65DFC92: mov %esp,%ebp;");
    asm("loc_65DFC94: cmpl $0,_data_65E66DC;");
    asm("loc_65DFC9B: push %ebx;");
    asm("loc_65DFC9C: push %esi;");
    asm("loc_65DFC9D: jne loc_65DFCAE;");
    asm("loc_65DFC9F: pushl 0xC(%ebp);");
    asm("loc_65DFCA2: pushl 8(%ebp);");
    asm("loc_65DFCA5: call _sub_65D7990;");
    asm("loc_65DFCAA: pop %ecx;");
    asm("loc_65DFCAB: pop %ecx;");
    asm("loc_65DFCAC: jmp loc_65DFD24;");
    asm("loc_65DFCAE: push $0x19;");
    asm("loc_65DFCB0: call _sub_65DCEAB;");
    asm("loc_65DFCB5: mov 8(%ebp),%esi;");
    asm("loc_65DFCB8: pop %ecx;");
    asm("loc_65DFCB9: movzbw (%esi),%bx;");
    asm("loc_65DFCBD: test %bx,%bx;");
    asm("loc_65DFCC0: je loc_65DFD0C;");
    asm("loc_65DFCC2: movzbl %bl,%eax;");
    asm("loc_65DFCC5: testb $4,_data_65E67E1(%eax);");
    asm("loc_65DFCCC: je loc_65DFCE8;");
    asm("loc_65DFCCE: mov 1(%esi),%al;");
    asm("loc_65DFCD1: inc %esi;");
    asm("loc_65DFCD2: test %al,%al;");
    asm("loc_65DFCD4: je loc_65DFCF3;");
    asm("loc_65DFCD6: movzwl %bx,%ecx;");
    asm("loc_65DFCD9: movzbl %al,%eax;");
    asm("loc_65DFCDC: shl $8,%ecx;");
    asm("loc_65DFCDF: or %eax,%ecx;");
    asm("loc_65DFCE1: cmp %ecx,0xC(%ebp);");
    asm("loc_65DFCE4: je loc_65DFCFF;");
    asm("loc_65DFCE6: jmp loc_65DFCF0;");
    asm("loc_65DFCE8: movzwl %bx,%eax;");
    asm("loc_65DFCEB: cmp %eax,0xC(%ebp);");
    asm("loc_65DFCEE: je loc_65DFD0C;");
    asm("loc_65DFCF0: inc %esi;");
    asm("loc_65DFCF1: jmp loc_65DFCB9;");
    asm("loc_65DFCF3: push $0x19;");
    asm("loc_65DFCF5: call _sub_65DCF0C;");
    asm("loc_65DFCFA: pop %ecx;");
    asm("loc_65DFCFB: xor %eax,%eax;");
    asm("loc_65DFCFD: jmp loc_65DFD24;");
    asm("loc_65DFCFF: push $0x19;");
    asm("loc_65DFD01: call _sub_65DCF0C;");
    asm("loc_65DFD06: pop %ecx;");
    asm("loc_65DFD07: lea -1(%esi),%eax;");
    asm("loc_65DFD0A: jmp loc_65DFD24;");
    asm("loc_65DFD0C: push $0x19;");
    asm("loc_65DFD0E: call _sub_65DCF0C;");
    asm("loc_65DFD13: mov 0xC(%ebp),%eax;");
    asm("loc_65DFD16: pop %ecx;");
    asm("loc_65DFD17: movzwl %bx,%ecx;");
    asm("loc_65DFD1A: sub %ecx,%eax;");
    asm("loc_65DFD1C: neg %eax;");
    asm("loc_65DFD1E: sbb %eax,%eax;");
    asm("loc_65DFD20: not %eax;");
    asm("loc_65DFD22: and %esi,%eax;");
    asm("loc_65DFD24: pop %esi;");
    asm("loc_65DFD25: pop %ebx;");
    asm("loc_65DFD26: pop %ebp;");
    asm("loc_65DFD27: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65DFD28() // __strdup
{
    __DEBUG_ASM(65DFD28);
    // chunk 0x65DFD28 _sub_65DFD28
    asm("loc_65DFD28: push %esi;");
    asm("loc_65DFD29: mov 8(%esp),%esi;");
    asm("loc_65DFD2D: test %esi,%esi;");
    asm("loc_65DFD2F: je loc_65DFD4F;");
    asm("loc_65DFD31: push %esi;");
    asm("loc_65DFD32: call _sub_65D8120;");
    asm("loc_65DFD37: inc %eax;");
    asm("loc_65DFD38: push %eax;");
    asm("loc_65DFD39: call _sub_65D8535;");
    asm("loc_65DFD3E: pop %ecx;");
    asm("loc_65DFD3F: test %eax,%eax;");
    asm("loc_65DFD41: pop %ecx;");
    asm("loc_65DFD42: je loc_65DFD4F;");
    asm("loc_65DFD44: push %esi;");
    asm("loc_65DFD45: push %eax;");
    asm("loc_65DFD46: call loc_65DD010;");
    asm("loc_65DFD4B: pop %ecx;");
    asm("loc_65DFD4C: pop %ecx;");
    asm("loc_65DFD4D: pop %esi;");
    asm("loc_65DFD4E: ret;");
    asm("loc_65DFD4F: xor %eax,%eax;");
    asm("loc_65DFD51: pop %esi;");
    asm("loc_65DFD52: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65DFD53() // _tolower
{
    __DEBUG_ASM(65DFD53);
    // chunk 0x65DFD53 _sub_65DFD53
    asm("loc_65DFD53: push %ebp;");
    asm("loc_65DFD54: mov %esp,%ebp;");
    asm("loc_65DFD56: push %ecx;");
    asm("loc_65DFD57: cmpl $0,_data_65E63E8;");
    asm("loc_65DFD5E: push %ebx;");
    asm("loc_65DFD5F: push %esi;");
    asm("loc_65DFD60: push %edi;");
    asm("loc_65DFD61: jne loc_65DFD80;");
    asm("loc_65DFD63: mov 8(%ebp),%eax;");
    asm("loc_65DFD66: cmp $0x41,%eax;");
    asm("loc_65DFD69: jl loc_65DFE19;");
    asm("loc_65DFD6F: cmp $0x5A,%eax;");
    asm("loc_65DFD72: jg loc_65DFE19;");
    asm("loc_65DFD78: add $0x20,%eax;");
    asm("loc_65DFD7B: jmp loc_65DFE19;");
    asm("loc_65DFD80: mov 8(%ebp),%ebx;");
    asm("loc_65DFD83: mov $0x100,%edi;");
    asm("loc_65DFD88: push $1;");
    asm("loc_65DFD8A: cmp %edi,%ebx;");
    asm("loc_65DFD8C: pop %esi;");
    asm("loc_65DFD8D: jge loc_65DFDB4;");
    asm("loc_65DFD8F: cmp %esi,_data_65E5BE0;");
    asm("loc_65DFD95: jle loc_65DFDA2;");
    asm("loc_65DFD97: push %esi;");
    asm("loc_65DFD98: push %ebx;");
    asm("loc_65DFD99: call _sub_65DDB90;");
    asm("loc_65DFD9E: pop %ecx;");
    asm("loc_65DFD9F: pop %ecx;");
    asm("loc_65DFDA0: jmp loc_65DFDAC;");
    asm("loc_65DFDA2: mov _off_65E59D0,%eax;");
    asm("loc_65DFDA7: mov (%eax,%ebx,2),%al;");
    asm("loc_65DFDAA: and %esi,%eax;");
    asm("loc_65DFDAC: test %eax,%eax;");
    asm("loc_65DFDAE: jne loc_65DFDB4;");
    asm("loc_65DFDB0: mov %ebx,%eax;");
    asm("loc_65DFDB2: jmp loc_65DFE19;");
    asm("loc_65DFDB4: mov _off_65E59D0,%edx;");
    asm("loc_65DFDBA: mov %ebx,%eax;");
    asm("loc_65DFDBC: sar $8,%eax;");
    asm("loc_65DFDBF: movzbl %al,%ecx;");
    asm("loc_65DFDC2: testb $0x80,1(%edx,%ecx,2);");
    asm("loc_65DFDC7: je loc_65DFDD8;");
    asm("loc_65DFDC9: andb $0,0xA(%ebp);");
    asm("loc_65DFDCD: push $2;");
    asm("loc_65DFDCF: mov %al,8(%ebp);");
    asm("loc_65DFDD2: mov %bl,9(%ebp);");
    asm("loc_65DFDD5: pop %eax;");
    asm("loc_65DFDD6: jmp loc_65DFDE1;");
    asm("loc_65DFDD8: andb $0,9(%ebp);");
    asm("loc_65DFDDC: mov %bl,8(%ebp);");
    asm("loc_65DFDDF: mov %esi,%eax;");
    asm("loc_65DFDE1: push %esi;");
    asm("loc_65DFDE2: push $0;");
    asm("loc_65DFDE4: lea -4(%ebp),%ecx;");
    asm("loc_65DFDE7: push $3;");
    asm("loc_65DFDE9: push %ecx;");
    asm("loc_65DFDEA: push %eax;");
    asm("loc_65DFDEB: lea 8(%ebp),%eax;");
    asm("loc_65DFDEE: push %eax;");
    asm("loc_65DFDEF: push %edi;");
    asm("loc_65DFDF0: pushl _data_65E63E8;");
    asm("loc_65DFDF6: call _sub_65DEFD3;");
    asm("loc_65DFDFB: add $0x20,%esp;");
    asm("loc_65DFDFE: test %eax,%eax;");
    asm("loc_65DFE00: je loc_65DFDB0;");
    asm("loc_65DFE02: cmp %esi,%eax;");
    asm("loc_65DFE04: jne loc_65DFE0C;");
    asm("loc_65DFE06: movzbl -4(%ebp),%eax;");
    asm("loc_65DFE0A: jmp loc_65DFE19;");
    asm("loc_65DFE0C: movzbl -3(%ebp),%eax;");
    asm("loc_65DFE10: movzbl -4(%ebp),%ecx;");
    asm("loc_65DFE14: shl $8,%eax;");
    asm("loc_65DFE17: or %ecx,%eax;");
    asm("loc_65DFE19: pop %edi;");
    asm("loc_65DFE1A: pop %esi;");
    asm("loc_65DFE1B: pop %ebx;");
    asm("loc_65DFE1C: leave;");
    asm("loc_65DFE1D: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65DFE1E() // _RtlUnwind
{
    __DEBUG_ASM(65DFE1E);
    // chunk 0x65DFE1E _sub_65DFE1E
    asm("loc_65DFE1E: jmpl *_import_65E1040;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65DFE30() // _sub_65DFE30
{
    __DEBUG_ASM(65DFE30);
    // chunk 0x65DFE30 _sub_65DFE30
    asm("loc_65DFE30: mov -0x10(%ebp),%ecx;");
    asm("loc_65DFE33: add $0xC,%ecx;");
    asm("loc_65DFE36: jmp _sub_65D2540;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65DFE3B() // _SEH_65D1000
{
    __DEBUG_ASM(65DFE3B);
    // chunk 0x65DFE3B _sub_65DFE3B
    asm("loc_65DFE3B: mov $_data_65E1E08,%eax;");
    asm("loc_65DFE40: jmp _sub_65D7009;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65DFE50() // _sub_65DFE50
{
    __DEBUG_ASM(65DFE50);
    // chunk 0x65DFE50 _sub_65DFE50
    asm("loc_65DFE50: mov -0x14(%ebp),%ecx;");
    asm("loc_65DFE53: add $0xC,%ecx;");
    asm("loc_65DFE56: jmp _sub_65D2540;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65DFE5B() // _sub_65DFE5B
{
    __DEBUG_ASM(65DFE5B);
    // chunk 0x65DFE5B _sub_65DFE5B
    asm("loc_65DFE5B: mov -0x14(%ebp),%ecx;");
    asm("loc_65DFE5E: add $0x20,%ecx;");
    asm("loc_65DFE61: jmp _sub_65D2590;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65DFE66() // _sub_65DFE66
{
    __DEBUG_ASM(65DFE66);
    // chunk 0x65DFE66 _sub_65DFE66
    asm("loc_65DFE66: mov -0x14(%ebp),%ecx;");
    asm("loc_65DFE69: add $0x2C,%ecx;");
    asm("loc_65DFE6C: jmp _sub_65D2630;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65DFE71() // _SEH_65D10C0
{
    __DEBUG_ASM(65DFE71);
    // chunk 0x65DFE71 _sub_65DFE71
    asm("loc_65DFE71: mov $_data_65E1E3C,%eax;");
    asm("loc_65DFE76: jmp _sub_65D7009;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65DFE80() // _sub_65DFE80
{
    __DEBUG_ASM(65DFE80);
    // chunk 0x65DFE80 _sub_65DFE80
    asm("loc_65DFE80: mov -0x53C(%ebp),%eax;");
    asm("loc_65DFE86: push %eax;");
    asm("loc_65DFE87: call _sub_65D6CB8;");
    asm("loc_65DFE8C: pop %ecx;");
    asm("loc_65DFE8D: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65DFE8E() // _sub_65DFE8E
{
    __DEBUG_ASM(65DFE8E);
    // chunk 0x65DFE8E _sub_65DFE8E
    asm("loc_65DFE8E: lea -0x53C(%ebp),%ecx;");
    asm("loc_65DFE94: jmp _sub_65D2630;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65DFE99() // _sub_65DFE99
{
    __DEBUG_ASM(65DFE99);
    // chunk 0x65DFE99 _sub_65DFE99
    asm("loc_65DFE99: lea -0x534(%ebp),%ecx;");
    asm("loc_65DFE9F: jmp _sub_65D2630;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65DFEA4() // _SEH_65D1470
{
    __DEBUG_ASM(65DFEA4);
    // chunk 0x65DFEA4 _sub_65DFEA4
    asm("loc_65DFEA4: mov $_data_65E1E70,%eax;");
    asm("loc_65DFEA9: jmp _sub_65D7009;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65DFEB0() // _sub_65DFEB0
{
    __DEBUG_ASM(65DFEB0);
    // chunk 0x65DFEB0 _sub_65DFEB0
    asm("loc_65DFEB0: mov 4(%ebp),%eax;");
    asm("loc_65DFEB3: push %eax;");
    asm("loc_65DFEB4: call _sub_65D6CB8;");
    asm("loc_65DFEB9: pop %ecx;");
    asm("loc_65DFEBA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65DFEBB() // _SEH_65D1940
{
    __DEBUG_ASM(65DFEBB);
    // chunk 0x65DFEBB _sub_65DFEBB
    asm("loc_65DFEBB: mov $_data_65E1E94,%eax;");
    asm("loc_65DFEC0: jmp _sub_65D7009;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65DFED0() // _sub_65DFED0
{
    __DEBUG_ASM(65DFED0);
    // chunk 0x65DFED0 _sub_65DFED0
    asm("loc_65DFED0: mov -0x10(%ebp),%ecx;");
    asm("loc_65DFED3: add $4,%ecx;");
    asm("loc_65DFED6: jmp _sub_65D24D0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65DFEDB() // _SEH_65D1B70
{
    __DEBUG_ASM(65DFEDB);
    // chunk 0x65DFEDB _sub_65DFEDB
    asm("loc_65DFEDB: mov $_data_65E1EB8,%eax;");
    asm("loc_65DFEE0: jmp _sub_65D7009;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65DFEF0() // _sub_65DFEF0
{
    __DEBUG_ASM(65DFEF0);
    // chunk 0x65DFEF0 _sub_65DFEF0
    asm("loc_65DFEF0: lea -0x1C(%ebp),%ecx;");
    asm("loc_65DFEF3: jmp _sub_65D2630;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65DFEF8() // _sub_65DFEF8
{
    __DEBUG_ASM(65DFEF8);
    // chunk 0x65DFEF8 _sub_65DFEF8
    asm("loc_65DFEF8: lea -0x18(%ebp),%ecx;");
    asm("loc_65DFEFB: jmp _sub_65D2630;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65DFF00() // _SEH_65D1D10
{
    __DEBUG_ASM(65DFF00);
    // chunk 0x65DFF00 _sub_65DFF00
    asm("loc_65DFF00: mov $_data_65E1F08,%eax;");
    asm("loc_65DFF05: jmp _sub_65D7009;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65DFF10() // _sub_65DFF10
{
    __DEBUG_ASM(65DFF10);
    // chunk 0x65DFF10 _sub_65DFF10
    asm("loc_65DFF10: mov 8(%ebp),%eax;");
    asm("loc_65DFF13: push %eax;");
    asm("loc_65DFF14: call _sub_65D6CB8;");
    asm("loc_65DFF19: pop %ecx;");
    asm("loc_65DFF1A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65DFF1B() // _SEH_65D26A0
{
    __DEBUG_ASM(65DFF1B);
    // chunk 0x65DFF1B _sub_65DFF1B
    asm("loc_65DFF1B: mov $_data_65E1F2C,%eax;");
    asm("loc_65DFF20: jmp _sub_65D7009;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65DFF30() // _sub_65DFF30
{
    __DEBUG_ASM(65DFF30);
    // chunk 0x65DFF30 _sub_65DFF30
    asm("loc_65DFF30: mov 4(%ebp),%eax;");
    asm("loc_65DFF33: push %eax;");
    asm("loc_65DFF34: mov -0x10(%ebp),%ecx;");
    asm("loc_65DFF37: push %ecx;");
    asm("loc_65DFF38: call _sub_65D54F0;");
    asm("loc_65DFF3D: add $8,%esp;");
    asm("loc_65DFF40: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65DFF41() // _SEH_65D2D00
{
    __DEBUG_ASM(65DFF41);
    // chunk 0x65DFF41 _sub_65DFF41
    asm("loc_65DFF41: mov $_data_65E1F50,%eax;");
    asm("loc_65DFF46: jmp _sub_65D7009;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65DFF50() // _sub_65DFF50
{
    __DEBUG_ASM(65DFF50);
    // chunk 0x65DFF50 _sub_65DFF50
    asm("loc_65DFF50: mov -0x10(%ebp),%eax;");
    asm("loc_65DFF53: push %eax;");
    asm("loc_65DFF54: call _sub_65D6CB8;");
    asm("loc_65DFF59: pop %ecx;");
    asm("loc_65DFF5A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65DFF5B() // _sub_65DFF5B
{
    __DEBUG_ASM(65DFF5B);
    // chunk 0x65DFF5B _sub_65DFF5B
    asm("loc_65DFF5B: mov -0x10(%ebp),%ecx;");
    asm("loc_65DFF5E: add $4,%ecx;");
    asm("loc_65DFF61: jmp _sub_65D3700;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65DFF66() // _sub_65DFF66
{
    __DEBUG_ASM(65DFF66);
    // chunk 0x65DFF66 _sub_65DFF66
    asm("loc_65DFF66: mov -0x10(%ebp),%ecx;");
    asm("loc_65DFF69: add $0x18,%ecx;");
    asm("loc_65DFF6C: jmp _sub_65D24D0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65DFF71() // _sub_65DFF71
{
    __DEBUG_ASM(65DFF71);
    // chunk 0x65DFF71 _sub_65DFF71
    asm("loc_65DFF71: mov -0x10(%ebp),%ecx;");
    asm("loc_65DFF74: add $0x24,%ecx;");
    asm("loc_65DFF77: jmp _sub_65D38F0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65DFF7C() // _sub_65DFF7C
{
    __DEBUG_ASM(65DFF7C);
    // chunk 0x65DFF7C _sub_65DFF7C
    asm("loc_65DFF7C: mov -0x10(%ebp),%ecx;");
    asm("loc_65DFF7F: add $0x34,%ecx;");
    asm("loc_65DFF82: jmp _sub_65D38F0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65DFF87() // _SEH_65D2F10
{
    __DEBUG_ASM(65DFF87);
    // chunk 0x65DFF87 _sub_65DFF87
    asm("loc_65DFF87: mov $_data_65E1FB8,%eax;");
    asm("loc_65DFF8C: jmp _sub_65D7009;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65DFFA0() // _sub_65DFFA0
{
    __DEBUG_ASM(65DFFA0);
    // chunk 0x65DFFA0 _sub_65DFFA0
    asm("loc_65DFFA0: lea 8(%ebp),%ecx;");
    asm("loc_65DFFA3: jmp _sub_65D2630;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65DFFA8() // _sub_65DFFA8
{
    __DEBUG_ASM(65DFFA8);
    // chunk 0x65DFFA8 _sub_65DFFA8
    asm("loc_65DFFA8: mov 4(%ebp),%eax;");
    asm("loc_65DFFAB: push %eax;");
    asm("loc_65DFFAC: mov -0x10(%ebp),%ecx;");
    asm("loc_65DFFAF: push %ecx;");
    asm("loc_65DFFB0: call _sub_65D54F0;");
    asm("loc_65DFFB5: add $8,%esp;");
    asm("loc_65DFFB8: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65DFFB9() // _SEH_65D3070
{
    __DEBUG_ASM(65DFFB9);
    // chunk 0x65DFFB9 _sub_65DFFB9
    asm("loc_65DFFB9: mov $_data_65E1FE4,%eax;");
    asm("loc_65DFFBE: jmp _sub_65D7009;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65DFFD0() // _sub_65DFFD0
{
    __DEBUG_ASM(65DFFD0);
    // chunk 0x65DFFD0 _sub_65DFFD0
    asm("loc_65DFFD0: lea -0x4C(%ebp),%ecx;");
    asm("loc_65DFFD3: jmp _sub_65D38F0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65DFFD8() // _sub_65DFFD8
{
    __DEBUG_ASM(65DFFD8);
    // chunk 0x65DFFD8 _sub_65DFFD8
    asm("loc_65DFFD8: lea -0x3C(%ebp),%ecx;");
    asm("loc_65DFFDB: jmp _sub_65D38F0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65DFFE0() // _sub_65DFFE0
{
    __DEBUG_ASM(65DFFE0);
    // chunk 0x65DFFE0 _sub_65DFFE0
    asm("loc_65DFFE0: lea -0x2C(%ebp),%ecx;");
    asm("loc_65DFFE3: jmp _sub_65D38F0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65DFFE8() // _sub_65DFFE8
{
    __DEBUG_ASM(65DFFE8);
    // chunk 0x65DFFE8 _sub_65DFFE8
    asm("loc_65DFFE8: lea -0x2C(%ebp),%ecx;");
    asm("loc_65DFFEB: jmp _sub_65D3930;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65DFFF0() // _SEH_65D3380
{
    __DEBUG_ASM(65DFFF0);
    // chunk 0x65DFFF0 _sub_65DFFF0
    asm("loc_65DFFF0: mov $_data_65E2020,%eax;");
    asm("loc_65DFFF5: jmp _sub_65D7009;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65E0000() // _SEH_65D4350
{
    __DEBUG_ASM(65E0000);
    // chunk 0x65E0000 _sub_65E0000
    asm("loc_65E0000: mov $_data_65E2070,%eax;");
    asm("loc_65E0005: jmp _sub_65D7009;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65E0010() // _sub_65E0010
{
    __DEBUG_ASM(65E0010);
    // chunk 0x65E0010 _sub_65E0010
    asm("loc_65E0010: mov 4(%ebp),%eax;");
    asm("loc_65E0013: push %eax;");
    asm("loc_65E0014: mov -0x10(%ebp),%ecx;");
    asm("loc_65E0017: push %ecx;");
    asm("loc_65E0018: call _sub_65D54F0;");
    asm("loc_65E001D: add $8,%esp;");
    asm("loc_65E0020: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65E0021() // _sub_65E0021
{
    __DEBUG_ASM(65E0021);
    // chunk 0x65E0021 _sub_65E0021
    asm("loc_65E0021: mov -0x10(%ebp),%ecx;");
    asm("loc_65E0024: jmp _sub_65D38F0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65E0029() // _SEH_65D4B80
{
    __DEBUG_ASM(65E0029);
    // chunk 0x65E0029 _sub_65E0029
    asm("loc_65E0029: mov $_data_65E209C,%eax;");
    asm("loc_65E002E: jmp _sub_65D7009;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65E0040() // _sub_65E0040
{
    __DEBUG_ASM(65E0040);
    // chunk 0x65E0040 _sub_65E0040
    asm("loc_65E0040: mov -0x18(%ebp),%ecx;");
    asm("loc_65E0043: add $4,%ecx;");
    asm("loc_65E0046: jmp _sub_65D3700;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65E004B() // _SEH_65D50B0
{
    __DEBUG_ASM(65E004B);
    // chunk 0x65E004B _sub_65E004B
    asm("loc_65E004B: mov $_data_65E20C0,%eax;");
    asm("loc_65E0050: jmp _sub_65D7009;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65E0060() // _sub_65E0060
{
    __DEBUG_ASM(65E0060);
    // chunk 0x65E0060 _sub_65E0060
    asm("loc_65E0060: mov -0x14(%ebp),%ecx;");
    asm("loc_65E0063: add $4,%ecx;");
    asm("loc_65E0066: jmp _sub_65D3700;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65E006B() // _SEH_65D5220
{
    __DEBUG_ASM(65E006B);
    // chunk 0x65E006B _sub_65E006B
    asm("loc_65E006B: mov $_data_65E20E4,%eax;");
    asm("loc_65E0070: jmp _sub_65D7009;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65E0080() // _sub_65E0080
{
    __DEBUG_ASM(65E0080);
    // chunk 0x65E0080 _sub_65E0080
    asm("loc_65E0080: mov 8(%ebp),%eax;");
    asm("loc_65E0083: push %eax;");
    asm("loc_65E0084: call _sub_65D6CB8;");
    asm("loc_65E0089: pop %ecx;");
    asm("loc_65E008A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65E008B() // _sub_65E008B
{
    __DEBUG_ASM(65E008B);
    // chunk 0x65E008B _sub_65E008B
    asm("loc_65E008B: mov 8(%ebp),%ecx;");
    asm("loc_65E008E: add $8,%ecx;");
    asm("loc_65E0091: jmp _sub_65D24D0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65E0096() // _SEH_65D5B50
{
    __DEBUG_ASM(65E0096);
    // chunk 0x65E0096 _sub_65E0096
    asm("loc_65E0096: mov $_data_65E2120,%eax;");
    asm("loc_65E009B: jmp _sub_65D7009;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65E00A0() // _sub_65E00A0
{
    __DEBUG_ASM(65E00A0);
    // chunk 0x65E00A0 _sub_65E00A0
    asm("loc_65E00A0: mov -0x434(%ebp),%eax;");
    asm("loc_65E00A6: push %eax;");
    asm("loc_65E00A7: call _sub_65D6CB8;");
    asm("loc_65E00AC: pop %ecx;");
    asm("loc_65E00AD: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65E00AE() // _sub_65E00AE
{
    __DEBUG_ASM(65E00AE);
    // chunk 0x65E00AE _sub_65E00AE
    asm("loc_65E00AE: lea -0x43C(%ebp),%ecx;");
    asm("loc_65E00B4: jmp _sub_65D2630;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65E00B9() // _SEH_65D5D50
{
    __DEBUG_ASM(65E00B9);
    // chunk 0x65E00B9 _sub_65E00B9
    asm("loc_65E00B9: mov $_data_65E214C,%eax;");
    asm("loc_65E00BE: jmp _sub_65D7009;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65E00D0() // _sub_65E00D0
{
    __DEBUG_ASM(65E00D0);
    // chunk 0x65E00D0 _sub_65E00D0
    asm("loc_65E00D0: lea -0x18(%ebp),%ecx;");
    asm("loc_65E00D3: jmp _sub_65D6340;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65E00D8() // _sub_65E00D8
{
    __DEBUG_ASM(65E00D8);
    // chunk 0x65E00D8 _sub_65E00D8
    asm("loc_65E00D8: lea -0x18(%ebp),%ecx;");
    asm("loc_65E00DB: jmp _sub_65D2630;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65E00E0() // _SEH_65D6210
{
    __DEBUG_ASM(65E00E0);
    // chunk 0x65E00E0 _sub_65E00E0
    asm("loc_65E00E0: mov $_data_65E2178,%eax;");
    asm("loc_65E00E5: jmp _sub_65D7009;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65E00F0() // _sub_65E00F0
{
    __DEBUG_ASM(65E00F0);
    // chunk 0x65E00F0 _sub_65E00F0
    asm("loc_65E00F0: mov -0x10(%ebp),%ecx;");
    asm("loc_65E00F3: jmp _sub_65D2630;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65E00F8() // _SEH_65D6340
{
    __DEBUG_ASM(65E00F8);
    // chunk 0x65E00F8 _sub_65E00F8
    asm("loc_65E00F8: mov $_data_65E219C,%eax;");
    asm("loc_65E00FD: jmp _sub_65D7009;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65E0110() // _sub_65E0110
{
    __DEBUG_ASM(65E0110);
    // chunk 0x65E0110 _sub_65E0110
    asm("loc_65E0110: mov 4(%ebp),%eax;");
    asm("loc_65E0113: push %eax;");
    asm("loc_65E0114: mov -0x10(%ebp),%ecx;");
    asm("loc_65E0117: push %ecx;");
    asm("loc_65E0118: call _sub_65D54F0;");
    asm("loc_65E011D: add $8,%esp;");
    asm("loc_65E0120: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65E0121() // _SEH_65D6940
{
    __DEBUG_ASM(65E0121);
    // chunk 0x65E0121 _sub_65E0121
    asm("loc_65E0121: mov $_data_65E21C0,%eax;");
    asm("loc_65E0126: jmp _sub_65D7009;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65E0130() // _sub_65E0130
{
    __DEBUG_ASM(65E0130);
    // chunk 0x65E0130 _sub_65E0130
    asm("loc_65E0130: mov 4(%ebp),%eax;");
    asm("loc_65E0133: push %eax;");
    asm("loc_65E0134: mov -0x10(%ebp),%ecx;");
    asm("loc_65E0137: push %ecx;");
    asm("loc_65E0138: call _sub_65D54F0;");
    asm("loc_65E013D: add $8,%esp;");
    asm("loc_65E0140: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65E0141() // _sub_65E0141
{
    __DEBUG_ASM(65E0141);
    // chunk 0x65E0141 _sub_65E0141
    asm("loc_65E0141: mov -0x10(%ebp),%ecx;");
    asm("loc_65E0144: jmp _sub_65D2630;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65E0149() // _sub_65E0149
{
    __DEBUG_ASM(65E0149);
    // chunk 0x65E0149 _sub_65E0149
    asm("loc_65E0149: mov -0x10(%ebp),%ecx;");
    asm("loc_65E014C: add $4,%ecx;");
    asm("loc_65E014F: jmp _sub_65D2630;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65E0154() // _SEH_65D6990
{
    __DEBUG_ASM(65E0154);
    // chunk 0x65E0154 _sub_65E0154
    asm("loc_65E0154: mov $_data_65E21F4,%eax;");
    asm("loc_65E0159: jmp _sub_65D7009;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65E0160() // _sub_65E0160
{
    __DEBUG_ASM(65E0160);
    // chunk 0x65E0160 _sub_65E0160
    asm("loc_65E0160: mov -0x14(%ebp),%ecx;");
    asm("loc_65E0163: add $8,%ecx;");
    asm("loc_65E0166: jmp _sub_65D24D0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65E016B() // _sub_65E016B
{
    __DEBUG_ASM(65E016B);
    // chunk 0x65E016B _sub_65E016B
    asm("loc_65E016B: mov -0x14(%ebp),%ecx;");
    asm("loc_65E016E: add $0x14,%ecx;");
    asm("loc_65E0171: jmp _sub_65D6BA0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65E0176() // _SEH_65D6A80
{
    __DEBUG_ASM(65E0176);
    // chunk 0x65E0176 _sub_65E0176
    asm("loc_65E0176: mov $_data_65E2220,%eax;");
    asm("loc_65E017B: jmp _sub_65D7009;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65E0180() // _sub_65E0180
{
    __DEBUG_ASM(65E0180);
    // chunk 0x65E0180 _sub_65E0180
    asm("loc_65E0180: mov -0x14(%ebp),%ecx;");
    asm("loc_65E0183: jmp _sub_65D80AF;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65E0188() // _sub_65E0188
{
    __DEBUG_ASM(65E0188);
    // chunk 0x65E0188 _sub_65E0188
    asm("loc_65E0188: mov $_data_65E22E8,%eax;");
    asm("loc_65E018D: jmp _sub_65D7009;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65E0194() // _sub_65E0194
{
    __DEBUG_ASM(65E0194);
    // chunk 0x65E0194 _sub_65E0194
    asm("loc_65E0194: lea -0x20(%ebp),%ecx;");
    asm("loc_65E0197: jmp _sub_65D38F0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_65E019C() // _sub_65E019C
{
    __DEBUG_ASM(65E019C);
    // chunk 0x65E019C _sub_65E019C
    asm("loc_65E019C: mov $_data_65E23E8,%eax;");
    asm("loc_65E01A1: jmp _sub_65D7009;");
    asm("int3;"); // unreachable
}
#ifdef __cplusplus
}
#endif // __cplusplus
#endif // __INTELLISENSE__
