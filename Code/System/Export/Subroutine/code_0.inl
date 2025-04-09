#ifndef __INTELLISENSE__
// clang-format off
#include "..\..\PCH.h"
#pragma init_seg(lib)
#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

_naked _weak void _sub_6F11000() // _DAComponentInner_SystemContainer_QueryInterface
{
    __DEBUG_ASM(6F11000);
    // chunk 0x6F11000 _sub_6F11000
    asm("loc_6F11000: mov _off_6F1205C,%eax;");
    asm("loc_6F11005: push %ebx;");
    asm("loc_6F11006: push %ebp;");
    asm("loc_6F11007: mov 0x10(%esp),%ebp;");
    asm("loc_6F1100B: push %esi;");
    asm("loc_6F1100C: push %edi;");
    asm("loc_6F1100D: xor %edi,%edi;");
    asm("loc_6F1100F: test %eax,%eax;");
    asm("loc_6F11011: je loc_6F11052;");
    asm("loc_6F11013: mov %ebp,%esi;");
    asm("loc_6F11015: mov (%eax),%dl;");
    asm("loc_6F11017: mov (%esi),%bl;");
    asm("loc_6F11019: mov %dl,%cl;");
    asm("loc_6F1101B: cmp %bl,%dl;");
    asm("loc_6F1101D: jne loc_6F1103D;");
    asm("loc_6F1101F: test %cl,%cl;");
    asm("loc_6F11021: je loc_6F11039;");
    asm("loc_6F11023: mov 1(%eax),%dl;");
    asm("loc_6F11026: mov 1(%esi),%bl;");
    asm("loc_6F11029: mov %dl,%cl;");
    asm("loc_6F1102B: cmp %bl,%dl;");
    asm("loc_6F1102D: jne loc_6F1103D;");
    asm("loc_6F1102F: add $2,%eax;");
    asm("loc_6F11032: add $2,%esi;");
    asm("loc_6F11035: test %cl,%cl;");
    asm("loc_6F11037: jne loc_6F11015;");
    asm("loc_6F11039: xor %eax,%eax;");
    asm("loc_6F1103B: jmp loc_6F11042;");
    asm("loc_6F1103D: sbb %eax,%eax;");
    asm("loc_6F1103F: sbb $0xFFFFFFFF,%eax;");
    asm("loc_6F11042: test %eax,%eax;");
    asm("loc_6F11044: je loc_6F1105E;");
    asm("loc_6F11046: mov _off_6F12064(,%edi,8),%eax;");
    asm("loc_6F1104D: inc %edi;");
    asm("loc_6F1104E: test %eax,%eax;");
    asm("loc_6F11050: jne loc_6F11013;");
    asm("loc_6F11052: mov 0x1C(%esp),%edi;");
    asm("loc_6F11056: movl $0,(%edi);");
    asm("loc_6F1105C: jmp loc_6F110A8;");
    asm("loc_6F1105E: mov _data_6F12060(,%edi,8),%eax;");
    asm("loc_6F11065: test %eax,%eax;");
    asm("loc_6F11067: mov 0x14(%esp),%ecx;");
    asm("loc_6F1106B: jns loc_6F1108D;");
    asm("loc_6F1106D: mov 8(%ecx),%edx;");
    asm("loc_6F11070: and $0x7FFFFFFF,%eax;");
    asm("loc_6F11075: mov (%eax,%edx),%esi;");
    asm("loc_6F11078: mov (%esi),%edx;");
    asm("loc_6F1107A: push %esi;");
    asm("loc_6F1107B: calll *4(%edx);");
    asm("loc_6F1107E: mov 0x1C(%esp),%eax;");
    asm("loc_6F11082: pop %edi;");
    asm("loc_6F11083: mov %esi,(%eax);");
    asm("loc_6F11085: pop %esi;");
    asm("loc_6F11086: pop %ebp;");
    asm("loc_6F11087: xor %eax,%eax;");
    asm("loc_6F11089: pop %ebx;");
    asm("loc_6F1108A: ret $0xC;");
    asm("loc_6F1108D: mov 8(%ecx),%esi;");
    asm("loc_6F11090: mov (%esi,%eax),%edx;");
    asm("loc_6F11093: add %eax,%esi;");
    asm("loc_6F11095: push %esi;");
    asm("loc_6F11096: calll *4(%edx);");
    asm("loc_6F11099: mov 0x1C(%esp),%eax;");
    asm("loc_6F1109D: pop %edi;");
    asm("loc_6F1109E: mov %esi,(%eax);");
    asm("loc_6F110A0: pop %esi;");
    asm("loc_6F110A1: pop %ebp;");
    asm("loc_6F110A2: xor %eax,%eax;");
    asm("loc_6F110A4: pop %ebx;");
    asm("loc_6F110A5: ret $0xC;");
    asm("loc_6F110A8: mov 0x14(%esp),%ecx;");
    asm("loc_6F110AC: mov 8(%ecx),%edx;");
    asm("loc_6F110AF: mov 8(%edx),%esi;");
    asm("loc_6F110B2: test %esi,%esi;");
    asm("loc_6F110B4: je loc_6F110CA;");
    asm("loc_6F110B6: mov 4(%esi),%eax;");
    asm("loc_6F110B9: mov (%eax),%ecx;");
    asm("loc_6F110BB: push %edi;");
    asm("loc_6F110BC: push %ebp;");
    asm("loc_6F110BD: push %eax;");
    asm("loc_6F110BE: calll *(%ecx);");
    asm("loc_6F110C0: test %eax,%eax;");
    asm("loc_6F110C2: je loc_6F110CF;");
    asm("loc_6F110C4: mov (%esi),%esi;");
    asm("loc_6F110C6: test %esi,%esi;");
    asm("loc_6F110C8: jne loc_6F110B6;");
    asm("loc_6F110CA: mov $0xFFFFFFFD,%eax;");
    asm("loc_6F110CF: pop %edi;");
    asm("loc_6F110D0: pop %esi;");
    asm("loc_6F110D1: pop %ebp;");
    asm("loc_6F110D2: pop %ebx;");
    asm("loc_6F110D3: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6F110E0() // _SystemContainer_init
{
    __DEBUG_ASM(6F110E0);
    // chunk 0x6F110E0 _sub_6F110E0
    asm("loc_6F110E0: mov 4(%esp),%edx;");
    asm("loc_6F110E4: push %esi;");
    asm("loc_6F110E5: mov 0x10(%edx),%esi;");
    asm("loc_6F110E8: test %esi,%esi;");
    asm("loc_6F110EA: mov %ecx,%eax;");
    asm("loc_6F110EC: je loc_6F11109;");
    asm("loc_6F110EE: push %ebx;");
    asm("loc_6F110EF: push %edi;");
    asm("loc_6F110F0: xor %ebx,%ebx;");
    asm("loc_6F110F2: mov $_data_6F13080,%edi;");
    asm("loc_6F110F7: mov $0x10,%ecx;");
    asm("loc_6F110FC: repe cmpsb (%edi),(%esi);");
    asm("loc_6F110FE: pop %edi;");
    asm("loc_6F110FF: pop %ebx;");
    asm("loc_6F11100: jne loc_6F11109;");
    asm("loc_6F11102: or $0xFFFFFFFF,%eax;");
    asm("loc_6F11105: pop %esi;");
    asm("loc_6F11106: ret $4;");
    asm("loc_6F11109: mov 8(%edx),%ecx;");
    asm("loc_6F1110C: test %ecx,%ecx;");
    asm("loc_6F1110E: je loc_6F11122;");
    asm("loc_6F11110: mov %ecx,0x1C(%eax);");
    asm("loc_6F11113: mov 0xC(%edx),%edx;");
    asm("loc_6F11116: lea 0x10(%eax),%ecx;");
    asm("loc_6F11119: mov %ecx,(%edx);");
    asm("loc_6F1111B: movl $1,0x20(%eax);");
    asm("loc_6F11122: xor %eax,%eax;");
    asm("loc_6F11124: pop %esi;");
    asm("loc_6F11125: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6F11130() // _SystemContainer__destructor
{
    __DEBUG_ASM(6F11130);
    // chunk 0x6F11130 _sub_6F11130
    asm("loc_6F11130: push %esi;");
    asm("loc_6F11131: mov %ecx,%esi;");
    asm("loc_6F11133: mov 0x1C(%esi),%eax;");
    asm("loc_6F11136: movl $_off_6F12098,(%esi);");
    asm("loc_6F1113C: movl $_off_6F12084,4(%esi);");
    asm("loc_6F11143: mov (%eax),%ecx;");
    asm("loc_6F11145: push %eax;");
    asm("loc_6F11146: calll *4(%ecx);");
    asm("loc_6F11149: push %esi;");
    asm("loc_6F1114A: call _sub_6F11190;");
    asm("loc_6F1114F: pop %esi;");
    asm("loc_6F11150: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6F11160() // _SystemContainer_QueryInterface
{
    __DEBUG_ASM(6F11160);
    // chunk 0x6F11160 _sub_6F11160
    asm("loc_6F11160: mov 4(%esp),%eax;");
    asm("loc_6F11164: mov 0x1C(%eax),%eax;");
    asm("loc_6F11167: mov (%eax),%ecx;");
    asm("loc_6F11169: mov %eax,4(%esp);");
    asm("loc_6F1116D: jmpl *(%ecx);");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6F11170() // _SystemContainer_AddRef
{
    __DEBUG_ASM(6F11170);
    // chunk 0x6F11170 _sub_6F11170
    asm("loc_6F11170: mov 4(%esp),%eax;");
    asm("loc_6F11174: mov 0x1C(%eax),%eax;");
    asm("loc_6F11177: mov (%eax),%ecx;");
    asm("loc_6F11179: mov %eax,4(%esp);");
    asm("loc_6F1117D: jmpl *4(%ecx);");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6F11180() // _SystemContainer_Release
{
    __DEBUG_ASM(6F11180);
    // chunk 0x6F11180 _sub_6F11180
    asm("loc_6F11180: mov 4(%esp),%eax;");
    asm("loc_6F11184: mov 0x1C(%eax),%eax;");
    asm("loc_6F11187: mov (%eax),%ecx;");
    asm("loc_6F11189: mov %eax,4(%esp);");
    asm("loc_6F1118D: jmpl *8(%ecx);");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6F11190() // _SystemContainer_Shutdown
{
    __DEBUG_ASM(6F11190);
    // chunk 0x6F11190 _sub_6F11190
    asm("loc_6F11190: push %ebp;");
    asm("loc_6F11191: push %edi;");
    asm("loc_6F11192: mov 0xC(%esp),%edi;");
    asm("loc_6F11196: mov 8(%edi),%eax;");
    asm("loc_6F11199: xor %ebp,%ebp;");
    asm("loc_6F1119B: cmp %ebp,%eax;");
    asm("loc_6F1119D: je loc_6F111CE;");
    asm("loc_6F1119F: push %ebx;");
    asm("loc_6F111A0: push %esi;");
    asm("loc_6F111A1: mov 8(%edi),%eax;");
    asm("loc_6F111A4: mov (%eax),%ebx;");
    asm("loc_6F111A6: mov %eax,%esi;");
    asm("loc_6F111A8: cmp %ebp,%esi;");
    asm("loc_6F111AA: je loc_6F111C5;");
    asm("loc_6F111AC: mov 4(%esi),%eax;");
    asm("loc_6F111AF: cmp %ebp,%eax;");
    asm("loc_6F111B1: je loc_6F111BC;");
    asm("loc_6F111B3: mov (%eax),%ecx;");
    asm("loc_6F111B5: push %eax;");
    asm("loc_6F111B6: calll *8(%ecx);");
    asm("loc_6F111B9: mov %ebp,4(%esi);");
    asm("loc_6F111BC: push %esi;");
    asm("loc_6F111BD: call _sub_6F11A0A;");
    asm("loc_6F111C2: add $4,%esp;");
    asm("loc_6F111C5: cmp %ebp,%ebx;");
    asm("loc_6F111C7: mov %ebx,8(%edi);");
    asm("loc_6F111CA: jne loc_6F111A1;");
    asm("loc_6F111CC: pop %esi;");
    asm("loc_6F111CD: pop %ebx;");
    asm("loc_6F111CE: mov %ebp,0xC(%edi);");
    asm("loc_6F111D1: mov %ebp,0x24(%edi);");
    asm("loc_6F111D4: pop %edi;");
    asm("loc_6F111D5: xor %eax,%eax;");
    asm("loc_6F111D7: pop %ebp;");
    asm("loc_6F111D8: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6F111E0() // _SystemContainer_LoadSystemComponents
{
    __DEBUG_ASM(6F111E0);
    // chunk 0x6F111E0 _sub_6F111E0
    asm("loc_6F111E0: mov $0x2120,%eax;");
    asm("loc_6F111E5: call _sub_6F11A20;");
    asm("loc_6F111EA: push %ebx;");
    asm("loc_6F111EB: push %ebp;");
    asm("loc_6F111EC: mov 0x212C(%esp),%ebp;");
    asm("loc_6F111F3: mov 0x24(%ebp),%eax;");
    asm("loc_6F111F6: xor %ebx,%ebx;");
    asm("loc_6F111F8: cmp %ebx,%eax;");
    asm("loc_6F111FA: push %edi;");
    asm("loc_6F111FB: jne loc_6F11463;");
    asm("loc_6F11201: mov _data_6F13194,%eax;");
    asm("loc_6F11206: lea 0xC(%esp),%edx;");
    asm("loc_6F1120A: push %edx;");
    asm("loc_6F1120B: push $_data_6F1315C;");
    asm("loc_6F11210: mov %ebx,0x14(%esp);");
    asm("loc_6F11214: mov (%eax),%ecx;");
    asm("loc_6F11216: push %eax;");
    asm("loc_6F11217: calll *(%ecx);");
    asm("loc_6F11219: test %eax,%eax;");
    asm("loc_6F1121B: mov 0xC(%esp),%eax;");
    asm("loc_6F1121F: jne loc_6F11459;");
    asm("loc_6F11225: mov (%eax),%edx;");
    asm("loc_6F11227: push $3;");
    asm("loc_6F11229: push $_data_6F13154;");
    asm("loc_6F1122E: push %eax;");
    asm("loc_6F1122F: calll *0x14(%edx);");
    asm("loc_6F11232: mov %eax,%edi;");
    asm("loc_6F11234: cmp %ebx,%edi;");
    asm("loc_6F11236: mov 0xC(%esp),%eax;");
    asm("loc_6F1123A: mov %edi,0x28(%esp);");
    asm("loc_6F1123E: je loc_6F11459;");
    asm("loc_6F11244: mov (%eax),%edx;");
    asm("loc_6F11246: push $0x100;");
    asm("loc_6F1124B: lea 0x30(%esp),%ecx;");
    asm("loc_6F1124F: push %ecx;");
    asm("loc_6F11250: push %ebx;");
    asm("loc_6F11251: push %edi;");
    asm("loc_6F11252: push %eax;");
    asm("loc_6F11253: movl $1,0x24(%esp);");
    asm("loc_6F1125B: calll *0x1C(%edx);");
    asm("loc_6F1125E: test %eax,%eax;");
    asm("loc_6F11260: je loc_6F11442;");
    asm("loc_6F11266: push %esi;");
    asm("loc_6F11267: mov %ebx,0x1C(%esp);");
    asm("loc_6F1126B: mov %ebx,0x20(%esp);");
    asm("loc_6F1126F: mov %ebx,0x24(%esp);");
    asm("loc_6F11273: mov %ebx,0x28(%esp);");
    asm("loc_6F11277: movl $0x14,0x18(%esp);");
    asm("loc_6F1127F: lea 0x30(%esp),%esi;");
    asm("loc_6F11283: mov (%esi),%al;");
    asm("loc_6F11285: cmp $0x20,%al;");
    asm("loc_6F11287: je loc_6F1128D;");
    asm("loc_6F11289: cmp $9,%al;");
    asm("loc_6F1128B: jne loc_6F11290;");
    asm("loc_6F1128D: inc %esi;");
    asm("loc_6F1128E: jmp loc_6F11283;");
    asm("loc_6F11290: mov (%esi),%al;");
    asm("loc_6F11292: cmp $0x3B,%al;");
    asm("loc_6F11294: je loc_6F11418;");
    asm("loc_6F1129A: test %al,%al;");
    asm("loc_6F1129C: je loc_6F11418;");
    asm("loc_6F112A2: mov _import_6F12018,%ebx;");
    asm("loc_6F112A8: push $0x3D;");
    asm("loc_6F112AA: push %esi;");
    asm("loc_6F112AB: call *%ebx;");
    asm("loc_6F112AD: mov %eax,%ebp;");
    asm("loc_6F112AF: xor %edi,%edi;");
    asm("loc_6F112B1: add $8,%esp;");
    asm("loc_6F112B4: cmp %edi,%ebp;");
    asm("loc_6F112B6: je loc_6F112C8;");
    asm("loc_6F112B8: movb $0,(%ebp);");
    asm("loc_6F112BC: mov 1(%ebp),%al;");
    asm("loc_6F112BF: inc %ebp;");
    asm("loc_6F112C0: cmp $0x20,%al;");
    asm("loc_6F112C2: je loc_6F112BC;");
    asm("loc_6F112C4: cmp $9,%al;");
    asm("loc_6F112C6: je loc_6F112BC;");
    asm("loc_6F112C8: push $0x14;");
    asm("loc_6F112CA: call _sub_6F11A10;");
    asm("loc_6F112CF: add $4,%esp;");
    asm("loc_6F112D2: cmp %edi,%eax;");
    asm("loc_6F112D4: je loc_6F112DD;");
    asm("loc_6F112D6: mov %edi,4(%eax);");
    asm("loc_6F112D9: mov %edi,(%eax);");
    asm("loc_6F112DB: mov %eax,%edi;");
    asm("loc_6F112DD: mov 0x2134(%esp),%edx;");
    asm("loc_6F112E4: mov %esi,0x1C(%esp);");
    asm("loc_6F112E8: lea 4(%edi),%esi;");
    asm("loc_6F112EB: mov %edx,0x20(%esp);");
    asm("loc_6F112EF: mov (%esi),%eax;");
    asm("loc_6F112F1: test %eax,%eax;");
    asm("loc_6F112F3: je loc_6F11301;");
    asm("loc_6F112F5: mov (%eax),%ecx;");
    asm("loc_6F112F7: push %eax;");
    asm("loc_6F112F8: calll *8(%ecx);");
    asm("loc_6F112FB: movl $0,(%esi);");
    asm("loc_6F11301: mov 0x1C(%esp),%edx;");
    asm("loc_6F11305: push $0x20;");
    asm("loc_6F11307: push %edx;");
    asm("loc_6F11308: mov %esi,0x2C(%esp);");
    asm("loc_6F1130C: mov %ebp,0x30(%esp);");
    asm("loc_6F11310: call *%ebx;");
    asm("loc_6F11312: add $8,%esp;");
    asm("loc_6F11315: test %eax,%eax;");
    asm("loc_6F11317: je loc_6F1131C;");
    asm("loc_6F11319: movb $0,(%eax);");
    asm("loc_6F1131C: mov 0x1C(%esp),%eax;");
    asm("loc_6F11320: push $9;");
    asm("loc_6F11322: push %eax;");
    asm("loc_6F11323: call *%ebx;");
    asm("loc_6F11325: add $8,%esp;");
    asm("loc_6F11328: test %eax,%eax;");
    asm("loc_6F1132A: je loc_6F1132F;");
    asm("loc_6F1132C: movb $0,(%eax);");
    asm("loc_6F1132F: mov _data_6F13194,%eax;");
    asm("loc_6F11334: mov (%eax),%ecx;");
    asm("loc_6F11336: lea 8(%edi),%edx;");
    asm("loc_6F11339: push %edx;");
    asm("loc_6F1133A: lea 0x1C(%esp),%edx;");
    asm("loc_6F1133E: push %edx;");
    asm("loc_6F1133F: push %eax;");
    asm("loc_6F11340: calll *0xC(%ecx);");
    asm("loc_6F11343: test %eax,%eax;");
    asm("loc_6F11345: je loc_6F1136D;");
    asm("loc_6F11347: test %edi,%edi;");
    asm("loc_6F11349: mov $_data_6F13148,%ebx;");
    asm("loc_6F1134E: je loc_6F113C4;");
    asm("loc_6F11350: mov (%esi),%eax;");
    asm("loc_6F11352: test %eax,%eax;");
    asm("loc_6F11354: je loc_6F11362;");
    asm("loc_6F11356: mov (%eax),%ecx;");
    asm("loc_6F11358: push %eax;");
    asm("loc_6F11359: calll *8(%ecx);");
    asm("loc_6F1135C: movl $0,(%esi);");
    asm("loc_6F11362: push %edi;");
    asm("loc_6F11363: call _sub_6F11A0A;");
    asm("loc_6F11368: add $4,%esp;");
    asm("loc_6F1136B: jmp loc_6F113C4;");
    asm("loc_6F1136D: mov 0x2134(%esp),%ecx;");
    asm("loc_6F11374: mov 0xC(%ecx),%eax;");
    asm("loc_6F11377: test %eax,%eax;");
    asm("loc_6F11379: mov $_data_6F13140,%ebx;");
    asm("loc_6F1137E: je loc_6F11384;");
    asm("loc_6F11380: mov %edi,(%eax);");
    asm("loc_6F11382: jmp loc_6F11387;");
    asm("loc_6F11384: mov %edi,8(%ecx);");
    asm("loc_6F11387: lea 0xC(%edi),%ebp;");
    asm("loc_6F1138A: push %ebp;");
    asm("loc_6F1138B: mov %edi,0xC(%ecx);");
    asm("loc_6F1138E: mov (%esi),%eax;");
    asm("loc_6F11390: mov (%eax),%edx;");
    asm("loc_6F11392: push $_data_6F13034;");
    asm("loc_6F11397: push %eax;");
    asm("loc_6F11398: calll *(%edx);");
    asm("loc_6F1139A: test %eax,%eax;");
    asm("loc_6F1139C: jne loc_6F113A8;");
    asm("loc_6F1139E: mov (%ebp),%ebp;");
    asm("loc_6F113A1: mov (%ebp),%eax;");
    asm("loc_6F113A4: push %ebp;");
    asm("loc_6F113A5: calll *8(%eax);");
    asm("loc_6F113A8: mov (%esi),%esi;");
    asm("loc_6F113AA: mov (%esi),%ecx;");
    asm("loc_6F113AC: add $0x10,%edi;");
    asm("loc_6F113AF: push %edi;");
    asm("loc_6F113B0: push $_data_6F1304C;");
    asm("loc_6F113B5: push %esi;");
    asm("loc_6F113B6: calll *(%ecx);");
    asm("loc_6F113B8: test %eax,%eax;");
    asm("loc_6F113BA: jne loc_6F113C4;");
    asm("loc_6F113BC: mov (%edi),%edi;");
    asm("loc_6F113BE: mov (%edi),%edx;");
    asm("loc_6F113C0: push %edi;");
    asm("loc_6F113C1: calll *8(%edx);");
    asm("loc_6F113C4: mov 0x28(%esp),%eax;");
    asm("loc_6F113C8: test %eax,%eax;");
    asm("loc_6F113CA: jne loc_6F113D1;");
    asm("loc_6F113CC: mov $_data_6F13190,%eax;");
    asm("loc_6F113D1: push %ebx;");
    asm("loc_6F113D2: push %eax;");
    asm("loc_6F113D3: mov 0x24(%esp),%eax;");
    asm("loc_6F113D7: push %eax;");
    asm("loc_6F113D8: lea 0x13C(%esp),%ecx;");
    asm("loc_6F113DF: push $_data_6F130F8;");
    asm("loc_6F113E4: push %ecx;");
    asm("loc_6F113E5: call _sub_6F11480;");
    asm("loc_6F113EA: mov _import_6F12004,%edx;");
    asm("loc_6F113F0: push %eax;");
    asm("loc_6F113F1: push $0x123;");
    asm("loc_6F113F6: push $_data_6F130B0;");
    asm("loc_6F113FB: mov $0x100003,%ecx;");
    asm("loc_6F11400: push $_data_6F13090;");
    asm("loc_6F11405: push %ecx;");
    asm("loc_6F11406: calll *(%edx);");
    asm("loc_6F11408: mov 0x54(%esp),%edi;");
    asm("loc_6F1140C: mov 0x215C(%esp),%ebp;");
    asm("loc_6F11413: add $0x28,%esp;");
    asm("loc_6F11416: xor %ebx,%ebx;");
    asm("loc_6F11418: mov 0x14(%esp),%ecx;");
    asm("loc_6F1141C: push $0x100;");
    asm("loc_6F11421: mov %ecx,%eax;");
    asm("loc_6F11423: lea 0x34(%esp),%esi;");
    asm("loc_6F11427: push %esi;");
    asm("loc_6F11428: inc %ecx;");
    asm("loc_6F11429: push %eax;");
    asm("loc_6F1142A: mov %ecx,0x20(%esp);");
    asm("loc_6F1142E: mov 0x1C(%esp),%ecx;");
    asm("loc_6F11432: mov (%ecx),%edx;");
    asm("loc_6F11434: push %edi;");
    asm("loc_6F11435: push %ecx;");
    asm("loc_6F11436: calll *0x1C(%edx);");
    asm("loc_6F11439: test %eax,%eax;");
    asm("loc_6F1143B: jne loc_6F11267;");
    asm("loc_6F11441: pop %esi;");
    asm("loc_6F11442: cmp %ebx,0x20(%ebp);");
    asm("loc_6F11445: jne loc_6F1144E;");
    asm("loc_6F11447: mov (%ebp),%eax;");
    asm("loc_6F1144A: push %ebp;");
    asm("loc_6F1144B: calll *0xC(%eax);");
    asm("loc_6F1144E: mov 0xC(%esp),%eax;");
    asm("loc_6F11452: movl $1,0x24(%ebp);");
    asm("loc_6F11459: cmp %ebx,%eax;");
    asm("loc_6F1145B: je loc_6F11463;");
    asm("loc_6F1145D: mov (%eax),%ecx;");
    asm("loc_6F1145F: push %eax;");
    asm("loc_6F11460: calll *8(%ecx);");
    asm("loc_6F11463: pop %edi;");
    asm("loc_6F11464: pop %ebp;");
    asm("loc_6F11465: xor %eax,%eax;");
    asm("loc_6F11467: pop %ebx;");
    asm("loc_6F11468: add $0x2120,%esp;");
    asm("loc_6F1146E: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6F11480() // _TempStr_set
{
    __DEBUG_ASM(6F11480);
    // chunk 0x6F11480 _sub_6F11480
    asm("loc_6F11480: mov 8(%esp),%ecx;");
    asm("loc_6F11484: push %esi;");
    asm("loc_6F11485: mov 8(%esp),%esi;");
    asm("loc_6F11489: lea 0x10(%esp),%eax;");
    asm("loc_6F1148D: push %eax;");
    asm("loc_6F1148E: push %ecx;");
    asm("loc_6F1148F: push $0x2000;");
    asm("loc_6F11494: push %esi;");
    asm("loc_6F11495: calll *_import_6F12020;");
    asm("loc_6F1149B: add $0x10,%esp;");
    asm("loc_6F1149E: mov %esi,%eax;");
    asm("loc_6F114A0: pop %esi;");
    asm("loc_6F114A1: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6F114B0() // _SystemContainer_AddComponent
{
    __DEBUG_ASM(6F114B0);
    // chunk 0x6F114B0 _sub_6F114B0
    asm("loc_6F114B0: push %ecx;");
    asm("loc_6F114B1: push %ebx;");
    asm("loc_6F114B2: push %ebp;");
    asm("loc_6F114B3: push %esi;");
    asm("loc_6F114B4: push %edi;");
    asm("loc_6F114B5: mov 0x1C(%esp),%edi;");
    asm("loc_6F114B9: test %edi,%edi;");
    asm("loc_6F114BB: jne loc_6F114CA;");
    asm("loc_6F114BD: pop %edi;");
    asm("loc_6F114BE: pop %esi;");
    asm("loc_6F114BF: pop %ebp;");
    asm("loc_6F114C0: mov $0xFFFFFFFE,%eax;");
    asm("loc_6F114C5: pop %ebx;");
    asm("loc_6F114C6: pop %ecx;");
    asm("loc_6F114C7: ret $8;");
    asm("loc_6F114CA: mov 8(%edi),%eax;");
    asm("loc_6F114CD: mov 0xC(%edi),%ecx;");
    asm("loc_6F114D0: push $0x14;");
    asm("loc_6F114D2: mov %eax,0x20(%esp);");
    asm("loc_6F114D6: mov %ecx,0x14(%esp);");
    asm("loc_6F114DA: call _sub_6F11A10;");
    asm("loc_6F114DF: mov %eax,%esi;");
    asm("loc_6F114E1: add $4,%esp;");
    asm("loc_6F114E4: test %esi,%esi;");
    asm("loc_6F114E6: je loc_6F1153B;");
    asm("loc_6F114E8: mov 0x18(%esp),%ebp;");
    asm("loc_6F114EC: lea 4(%esi),%ebx;");
    asm("loc_6F114EF: movl $0,(%ebx);");
    asm("loc_6F114F5: movl $0,(%esi);");
    asm("loc_6F114FB: mov %ebp,8(%edi);");
    asm("loc_6F114FE: mov (%ebx),%eax;");
    asm("loc_6F11500: test %eax,%eax;");
    asm("loc_6F11502: je loc_6F11510;");
    asm("loc_6F11504: mov (%eax),%edx;");
    asm("loc_6F11506: push %eax;");
    asm("loc_6F11507: calll *8(%edx);");
    asm("loc_6F1150A: movl $0,(%ebx);");
    asm("loc_6F11510: lea 8(%esi),%edx;");
    asm("loc_6F11513: push %edx;");
    asm("loc_6F11514: mov %ebx,0xC(%edi);");
    asm("loc_6F11517: mov _data_6F13194,%eax;");
    asm("loc_6F1151C: mov (%eax),%ecx;");
    asm("loc_6F1151E: push %edi;");
    asm("loc_6F1151F: push %eax;");
    asm("loc_6F11520: calll *0xC(%ecx);");
    asm("loc_6F11523: test %eax,%eax;");
    asm("loc_6F11525: mov %eax,0x18(%esp);");
    asm("loc_6F11529: je loc_6F11548;");
    asm("loc_6F1152B: mov 0x1C(%esp),%eax;");
    asm("loc_6F1152F: mov 0x10(%esp),%ecx;");
    asm("loc_6F11533: mov %eax,8(%edi);");
    asm("loc_6F11536: mov %ecx,0xC(%edi);");
    asm("loc_6F11539: jmp loc_6F115AD;");
    asm("loc_6F1153B: pop %edi;");
    asm("loc_6F1153C: pop %esi;");
    asm("loc_6F1153D: pop %ebp;");
    asm("loc_6F1153E: mov $0xFFFFFFFC,%eax;");
    asm("loc_6F11543: pop %ebx;");
    asm("loc_6F11544: pop %ecx;");
    asm("loc_6F11545: ret $8;");
    asm("loc_6F11548: mov 0xC(%ebp),%eax;");
    asm("loc_6F1154B: test %eax,%eax;");
    asm("loc_6F1154D: je loc_6F11553;");
    asm("loc_6F1154F: mov %esi,(%eax);");
    asm("loc_6F11551: jmp loc_6F11556;");
    asm("loc_6F11553: mov %esi,8(%ebp);");
    asm("loc_6F11556: mov %esi,0xC(%ebp);");
    asm("loc_6F11559: mov (%ebx),%eax;");
    asm("loc_6F1155B: mov (%eax),%edx;");
    asm("loc_6F1155D: lea 0xC(%esi),%ebp;");
    asm("loc_6F11560: push %ebp;");
    asm("loc_6F11561: push $_data_6F13034;");
    asm("loc_6F11566: push %eax;");
    asm("loc_6F11567: calll *(%edx);");
    asm("loc_6F11569: test %eax,%eax;");
    asm("loc_6F1156B: jne loc_6F11577;");
    asm("loc_6F1156D: mov (%ebp),%ebp;");
    asm("loc_6F11570: mov (%ebp),%eax;");
    asm("loc_6F11573: push %ebp;");
    asm("loc_6F11574: calll *8(%eax);");
    asm("loc_6F11577: mov (%ebx),%ebx;");
    asm("loc_6F11579: mov (%ebx),%ecx;");
    asm("loc_6F1157B: add $0x10,%esi;");
    asm("loc_6F1157E: push %esi;");
    asm("loc_6F1157F: push $_data_6F1304C;");
    asm("loc_6F11584: push %ebx;");
    asm("loc_6F11585: calll *(%ecx);");
    asm("loc_6F11587: test %eax,%eax;");
    asm("loc_6F11589: jne loc_6F11593;");
    asm("loc_6F1158B: mov (%esi),%esi;");
    asm("loc_6F1158D: mov (%esi),%edx;");
    asm("loc_6F1158F: push %esi;");
    asm("loc_6F11590: calll *8(%edx);");
    asm("loc_6F11593: mov 0x1C(%esp),%eax;");
    asm("loc_6F11597: mov 0x10(%esp),%ecx;");
    asm("loc_6F1159B: mov %eax,8(%edi);");
    asm("loc_6F1159E: mov 0x18(%esp),%eax;");
    asm("loc_6F115A2: mov %ecx,0xC(%edi);");
    asm("loc_6F115A5: pop %edi;");
    asm("loc_6F115A6: pop %esi;");
    asm("loc_6F115A7: pop %ebp;");
    asm("loc_6F115A8: pop %ebx;");
    asm("loc_6F115A9: pop %ecx;");
    asm("loc_6F115AA: ret $8;");
    asm("loc_6F115AD: mov (%ebx),%eax;");
    asm("loc_6F115AF: test %eax,%eax;");
    asm("loc_6F115B1: je loc_6F115BF;");
    asm("loc_6F115B3: mov (%eax),%edx;");
    asm("loc_6F115B5: push %eax;");
    asm("loc_6F115B6: calll *8(%edx);");
    asm("loc_6F115B9: movl $0,(%ebx);");
    asm("loc_6F115BF: push %esi;");
    asm("loc_6F115C0: call _sub_6F11A0A;");
    asm("loc_6F115C5: mov 0x1C(%esp),%eax;");
    asm("loc_6F115C9: add $4,%esp;");
    asm("loc_6F115CC: pop %edi;");
    asm("loc_6F115CD: pop %esi;");
    asm("loc_6F115CE: pop %ebp;");
    asm("loc_6F115CF: pop %ebx;");
    asm("loc_6F115D0: pop %ecx;");
    asm("loc_6F115D1: ret $8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6F115E0() // _SystemContainer_Update
{
    __DEBUG_ASM(6F115E0);
    // chunk 0x6F115E0 _sub_6F115E0
    asm("loc_6F115E0: mov 4(%esp),%eax;");
    asm("loc_6F115E4: push %esi;");
    asm("loc_6F115E5: mov 8(%eax),%esi;");
    asm("loc_6F115E8: test %esi,%esi;");
    asm("loc_6F115EA: je loc_6F11603;");
    asm("loc_6F115EC: lea (%esp),%esp;");
    asm("loc_6F115F0: mov 0xC(%esi),%eax;");
    asm("loc_6F115F3: test %eax,%eax;");
    asm("loc_6F115F5: je loc_6F115FD;");
    asm("loc_6F115F7: mov (%eax),%ecx;");
    asm("loc_6F115F9: push %eax;");
    asm("loc_6F115FA: calll *0x10(%ecx);");
    asm("loc_6F115FD: mov (%esi),%esi;");
    asm("loc_6F115FF: test %esi,%esi;");
    asm("loc_6F11601: jne loc_6F115F0;");
    asm("loc_6F11603: pop %esi;");
    asm("loc_6F11604: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6F11610() // _SystemContainer_Initialize
{
    __DEBUG_ASM(6F11610);
    // chunk 0x6F11610 _sub_6F11610
    asm("loc_6F11610: push %ecx;");
    asm("loc_6F11611: push %ebx;");
    asm("loc_6F11612: mov 0xC(%esp),%ebx;");
    asm("loc_6F11616: push %esi;");
    asm("loc_6F11617: mov 8(%ebx),%esi;");
    asm("loc_6F1161A: push %edi;");
    asm("loc_6F1161B: xor %eax,%eax;");
    asm("loc_6F1161D: xor %edi,%edi;");
    asm("loc_6F1161F: test %esi,%esi;");
    asm("loc_6F11621: mov %eax,0xC(%esp);");
    asm("loc_6F11625: je loc_6F11682;");
    asm("loc_6F11627: mov 0x10(%esi),%eax;");
    asm("loc_6F1162A: test %eax,%eax;");
    asm("loc_6F1162C: je loc_6F11676;");
    asm("loc_6F1162E: mov (%eax),%ecx;");
    asm("loc_6F11630: push %eax;");
    asm("loc_6F11631: calll *0xC(%ecx);");
    asm("loc_6F11634: test %eax,%eax;");
    asm("loc_6F11636: mov %eax,0xC(%esp);");
    asm("loc_6F1163A: je loc_6F11676;");
    asm("loc_6F1163C: test %edi,%edi;");
    asm("loc_6F1163E: je loc_6F11646;");
    asm("loc_6F11640: mov (%esi),%edx;");
    asm("loc_6F11642: mov %edx,(%edi);");
    asm("loc_6F11644: jmp loc_6F1164B;");
    asm("loc_6F11646: mov (%esi),%eax;");
    asm("loc_6F11648: mov %eax,8(%ebx);");
    asm("loc_6F1164B: mov 4(%esi),%eax;");
    asm("loc_6F1164E: test %eax,%eax;");
    asm("loc_6F11650: je loc_6F1165F;");
    asm("loc_6F11652: mov (%eax),%ecx;");
    asm("loc_6F11654: push %eax;");
    asm("loc_6F11655: calll *8(%ecx);");
    asm("loc_6F11658: movl $0,4(%esi);");
    asm("loc_6F1165F: push %esi;");
    asm("loc_6F11660: call _sub_6F11A0A;");
    asm("loc_6F11665: mov 0x20(%ebx),%eax;");
    asm("loc_6F11668: add $4,%esp;");
    asm("loc_6F1166B: test %eax,%eax;");
    asm("loc_6F1166D: jne loc_6F1167E;");
    asm("loc_6F1166F: mov 8(%ebx),%esi;");
    asm("loc_6F11672: xor %edi,%edi;");
    asm("loc_6F11674: jmp loc_6F1167A;");
    asm("loc_6F11676: mov %esi,%edi;");
    asm("loc_6F11678: mov (%esi),%esi;");
    asm("loc_6F1167A: test %esi,%esi;");
    asm("loc_6F1167C: jne loc_6F11627;");
    asm("loc_6F1167E: mov 0xC(%esp),%eax;");
    asm("loc_6F11682: pop %edi;");
    asm("loc_6F11683: pop %esi;");
    asm("loc_6F11684: pop %ebx;");
    asm("loc_6F11685: pop %ecx;");
    asm("loc_6F11686: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6F11690() // _SystemContainer_FindConnectionPoint
{
    __DEBUG_ASM(6F11690);
    // chunk 0x6F11690 _sub_6F11690
    asm("loc_6F11690: push %ecx;");
    asm("loc_6F11691: mov 8(%esp),%ecx;");
    asm("loc_6F11695: push %esi;");
    asm("loc_6F11696: push %edi;");
    asm("loc_6F11697: mov 4(%ecx),%edi;");
    asm("loc_6F1169A: xor %eax,%eax;");
    asm("loc_6F1169C: or $0xFFFFFFFF,%esi;");
    asm("loc_6F1169F: test %edi,%edi;");
    asm("loc_6F116A1: mov %eax,8(%esp);");
    asm("loc_6F116A5: je loc_6F11707;");
    asm("loc_6F116A7: push %ebx;");
    asm("loc_6F116A8: mov 0x1C(%esp),%ebx;");
    asm("loc_6F116AC: push %ebp;");
    asm("loc_6F116AD: mov 0x1C(%esp),%ebp;");
    asm("loc_6F116B1: jmp loc_6F116B7;");
    asm("loc_6F116B3: mov 0x10(%esp),%eax;");
    asm("loc_6F116B7: test %eax,%eax;");
    asm("loc_6F116B9: je loc_6F116C9;");
    asm("loc_6F116BB: mov (%eax),%edx;");
    asm("loc_6F116BD: push %eax;");
    asm("loc_6F116BE: calll *8(%edx);");
    asm("loc_6F116C1: movl $0,0x10(%esp);");
    asm("loc_6F116C9: mov 4(%edi),%eax;");
    asm("loc_6F116CC: mov (%eax),%ecx;");
    asm("loc_6F116CE: lea 0x10(%esp),%edx;");
    asm("loc_6F116D2: push %edx;");
    asm("loc_6F116D3: push $_data_6F13010;");
    asm("loc_6F116D8: push %eax;");
    asm("loc_6F116D9: calll *(%ecx);");
    asm("loc_6F116DB: test %eax,%eax;");
    asm("loc_6F116DD: jne loc_6F116F1;");
    asm("loc_6F116DF: mov 0x10(%esp),%eax;");
    asm("loc_6F116E3: mov (%eax),%ecx;");
    asm("loc_6F116E5: push %ebx;");
    asm("loc_6F116E6: push %ebp;");
    asm("loc_6F116E7: push %eax;");
    asm("loc_6F116E8: calll *0xC(%ecx);");
    asm("loc_6F116EB: mov %eax,%esi;");
    asm("loc_6F116ED: test %esi,%esi;");
    asm("loc_6F116EF: je loc_6F116F7;");
    asm("loc_6F116F1: mov (%edi),%edi;");
    asm("loc_6F116F3: test %edi,%edi;");
    asm("loc_6F116F5: jne loc_6F116B3;");
    asm("loc_6F116F7: mov 0x10(%esp),%eax;");
    asm("loc_6F116FB: test %eax,%eax;");
    asm("loc_6F116FD: pop %ebp;");
    asm("loc_6F116FE: pop %ebx;");
    asm("loc_6F116FF: je loc_6F11707;");
    asm("loc_6F11701: mov (%eax),%edx;");
    asm("loc_6F11703: push %eax;");
    asm("loc_6F11704: calll *8(%edx);");
    asm("loc_6F11707: pop %edi;");
    asm("loc_6F11708: mov %esi,%eax;");
    asm("loc_6F1170A: pop %esi;");
    asm("loc_6F1170B: pop %ecx;");
    asm("loc_6F1170C: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6F11710() // _SystemContainer_EnumerateConnectionPoints
{
    __DEBUG_ASM(6F11710);
    // chunk 0x6F11710 _sub_6F11710
    asm("loc_6F11710: push %ecx;");
    asm("loc_6F11711: mov 8(%esp),%ecx;");
    asm("loc_6F11715: push %esi;");
    asm("loc_6F11716: push %edi;");
    asm("loc_6F11717: mov 4(%ecx),%edi;");
    asm("loc_6F1171A: xor %eax,%eax;");
    asm("loc_6F1171C: test %edi,%edi;");
    asm("loc_6F1171E: mov $1,%esi;");
    asm("loc_6F11723: mov %eax,8(%esp);");
    asm("loc_6F11727: je loc_6F11790;");
    asm("loc_6F11729: push %ebx;");
    asm("loc_6F1172A: mov 0x1C(%esp),%ebx;");
    asm("loc_6F1172E: push %ebp;");
    asm("loc_6F1172F: mov 0x1C(%esp),%ebp;");
    asm("loc_6F11733: jmp loc_6F11740;");
    asm("loc_6F11735: mov 0x10(%esp),%eax;");
    asm("loc_6F11739: lea (%esp),%esp;");
    asm("loc_6F11740: test %eax,%eax;");
    asm("loc_6F11742: je loc_6F11752;");
    asm("loc_6F11744: mov (%eax),%edx;");
    asm("loc_6F11746: push %eax;");
    asm("loc_6F11747: calll *8(%edx);");
    asm("loc_6F1174A: movl $0,0x10(%esp);");
    asm("loc_6F11752: mov 4(%edi),%eax;");
    asm("loc_6F11755: mov (%eax),%ecx;");
    asm("loc_6F11757: lea 0x10(%esp),%edx;");
    asm("loc_6F1175B: push %edx;");
    asm("loc_6F1175C: push $_data_6F13010;");
    asm("loc_6F11761: push %eax;");
    asm("loc_6F11762: calll *(%ecx);");
    asm("loc_6F11764: test %eax,%eax;");
    asm("loc_6F11766: jne loc_6F1177A;");
    asm("loc_6F11768: mov 0x10(%esp),%eax;");
    asm("loc_6F1176C: mov (%eax),%ecx;");
    asm("loc_6F1176E: push %ebx;");
    asm("loc_6F1176F: push %ebp;");
    asm("loc_6F11770: push %eax;");
    asm("loc_6F11771: calll *0x10(%ecx);");
    asm("loc_6F11774: mov %eax,%esi;");
    asm("loc_6F11776: test %esi,%esi;");
    asm("loc_6F11778: je loc_6F11780;");
    asm("loc_6F1177A: mov (%edi),%edi;");
    asm("loc_6F1177C: test %edi,%edi;");
    asm("loc_6F1177E: jne loc_6F11735;");
    asm("loc_6F11780: mov 0x10(%esp),%eax;");
    asm("loc_6F11784: test %eax,%eax;");
    asm("loc_6F11786: pop %ebp;");
    asm("loc_6F11787: pop %ebx;");
    asm("loc_6F11788: je loc_6F11790;");
    asm("loc_6F1178A: mov (%eax),%edx;");
    asm("loc_6F1178C: push %eax;");
    asm("loc_6F1178D: calll *8(%edx);");
    asm("loc_6F11790: pop %edi;");
    asm("loc_6F11791: mov %esi,%eax;");
    asm("loc_6F11793: pop %esi;");
    asm("loc_6F11794: pop %ecx;");
    asm("loc_6F11795: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6F117A0() // _Register_SystemContainer
{
    __DEBUG_ASM(6F117A0);
    // chunk 0x6F117A0 _sub_6F117A0
    asm("loc_6F117A0: push %esi;");
    asm("loc_6F117A1: push $0xC;");
    asm("loc_6F117A3: call _sub_6F11A10;");
    asm("loc_6F117A8: mov %eax,%esi;");
    asm("loc_6F117AA: add $4,%esp;");
    asm("loc_6F117AD: test %esi,%esi;");
    asm("loc_6F117AF: je loc_6F117E0;");
    asm("loc_6F117B1: mov 8(%esp),%eax;");
    asm("loc_6F117B5: push $0x40000000;");
    asm("loc_6F117BA: push $_data_6F13080;");
    asm("loc_6F117BF: push %esi;");
    asm("loc_6F117C0: movl $1,4(%esi);");
    asm("loc_6F117C7: movl $_data_6F13080,8(%esi);");
    asm("loc_6F117CE: movl $_off_6F120B8,(%esi);");
    asm("loc_6F117D4: mov (%eax),%ecx;");
    asm("loc_6F117D6: push %eax;");
    asm("loc_6F117D7: calll *0x10(%ecx);");
    asm("loc_6F117DA: mov (%esi),%edx;");
    asm("loc_6F117DC: push %esi;");
    asm("loc_6F117DD: calll *8(%edx);");
    asm("loc_6F117E0: pop %esi;");
    asm("loc_6F117E1: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6F117F0() // _DllMain@12
{
    __DEBUG_ASM(6F117F0);
    // chunk 0x6F117F0 _sub_6F117F0
    asm("loc_6F117F0: mov 8(%esp),%eax;");
    asm("loc_6F117F4: dec %eax;");
    asm("loc_6F117F5: jne loc_6F11821;");
    asm("loc_6F117F7: mov 4(%esp),%eax;");
    asm("loc_6F117FB: push %esi;");
    asm("loc_6F117FC: push %eax;");
    asm("loc_6F117FD: mov %eax,_data_6F13198;");
    asm("loc_6F11802: calll *_import_6F1200C;");
    asm("loc_6F11808: mov _import_6F12000,%esi;");
    asm("loc_6F1180E: call *%esi;");
    asm("loc_6F11810: mov %eax,_data_6F13194;");
    asm("loc_6F11815: call *%esi;");
    asm("loc_6F11817: push %eax;");
    asm("loc_6F11818: call _sub_6F117A0;");
    asm("loc_6F1181D: add $4,%esp;");
    asm("loc_6F11820: pop %esi;");
    asm("loc_6F11821: mov $1,%eax;");
    asm("loc_6F11826: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6F11830() // _SystemContainerFactory_QueryInterface
{
    __DEBUG_ASM(6F11830);
    // chunk 0x6F11830 _sub_6F11830
    asm("loc_6F11830: mov 0xC(%esp),%edx;");
    asm("loc_6F11834: push %esi;");
    asm("loc_6F11835: mov 0xC(%esp),%esi;");
    asm("loc_6F11839: push %edi;");
    asm("loc_6F1183A: mov $_data_6F13170,%edi;");
    asm("loc_6F1183F: mov $0x17,%ecx;");
    asm("loc_6F11844: xor %eax,%eax;");
    asm("loc_6F11846: movl $0,(%edx);");
    asm("loc_6F1184C: repe cmpsb (%edi),(%esi);");
    asm("loc_6F1184E: pop %edi;");
    asm("loc_6F1184F: pop %esi;");
    asm("loc_6F11850: je loc_6F1185A;");
    asm("loc_6F11852: mov $0xFFFFFFFD,%eax;");
    asm("loc_6F11857: ret $0xC;");
    asm("loc_6F1185A: mov 4(%esp),%eax;");
    asm("loc_6F1185E: mov %eax,(%edx);");
    asm("loc_6F11860: mov (%eax),%ecx;");
    asm("loc_6F11862: push %eax;");
    asm("loc_6F11863: calll *4(%ecx);");
    asm("loc_6F11866: xor %eax,%eax;");
    asm("loc_6F11868: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6F11870() // _SystemContainerFactory_Release
{
    __DEBUG_ASM(6F11870);
    // chunk 0x6F11870 _sub_6F11870
    asm("loc_6F11870: mov 4(%esp),%ecx;");
    asm("loc_6F11874: mov 4(%ecx),%eax;");
    asm("loc_6F11877: test %eax,%eax;");
    asm("loc_6F11879: jbe loc_6F1187F;");
    asm("loc_6F1187B: dec %eax;");
    asm("loc_6F1187C: mov %eax,4(%ecx);");
    asm("loc_6F1187F: mov 4(%ecx),%eax;");
    asm("loc_6F11882: test %eax,%eax;");
    asm("loc_6F11884: jne loc_6F11898;");
    asm("loc_6F11886: push %ecx;");
    asm("loc_6F11887: movl $1,4(%ecx);");
    asm("loc_6F1188E: call _sub_6F11A0A;");
    asm("loc_6F11893: add $4,%esp;");
    asm("loc_6F11896: xor %eax,%eax;");
    asm("loc_6F11898: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6F118A0() // _SystemContainerFactory_CreateInstance
{
    __DEBUG_ASM(6F118A0);
    // chunk 0x6F118A0 _sub_6F118A0
    asm("loc_6F118A0: push %ebp;");
    asm("loc_6F118A1: push %esi;");
    asm("loc_6F118A2: push %edi;");
    asm("loc_6F118A3: mov 0x14(%esp),%edi;");
    asm("loc_6F118A7: mov (%edi),%eax;");
    asm("loc_6F118A9: xor %ebp,%ebp;");
    asm("loc_6F118AB: cmp $0x14,%eax;");
    asm("loc_6F118AE: jne loc_6F1196A;");
    asm("loc_6F118B4: mov 0x10(%esp),%eax;");
    asm("loc_6F118B8: mov 8(%eax),%esi;");
    asm("loc_6F118BB: mov 4(%edi),%eax;");
    asm("loc_6F118BE: push %ebx;");
    asm("loc_6F118BF: nop;");
    asm("loc_6F118C0: mov (%eax),%dl;");
    asm("loc_6F118C2: mov (%esi),%bl;");
    asm("loc_6F118C4: mov %dl,%cl;");
    asm("loc_6F118C6: cmp %bl,%dl;");
    asm("loc_6F118C8: jne loc_6F118E8;");
    asm("loc_6F118CA: test %cl,%cl;");
    asm("loc_6F118CC: je loc_6F118E4;");
    asm("loc_6F118CE: mov 1(%eax),%dl;");
    asm("loc_6F118D1: mov 1(%esi),%bl;");
    asm("loc_6F118D4: mov %dl,%cl;");
    asm("loc_6F118D6: cmp %bl,%dl;");
    asm("loc_6F118D8: jne loc_6F118E8;");
    asm("loc_6F118DA: add $2,%eax;");
    asm("loc_6F118DD: add $2,%esi;");
    asm("loc_6F118E0: test %cl,%cl;");
    asm("loc_6F118E2: jne loc_6F118C0;");
    asm("loc_6F118E4: xor %eax,%eax;");
    asm("loc_6F118E6: jmp loc_6F118ED;");
    asm("loc_6F118E8: sbb %eax,%eax;");
    asm("loc_6F118EA: sbb $0xFFFFFFFF,%eax;");
    asm("loc_6F118ED: test %eax,%eax;");
    asm("loc_6F118EF: pop %ebx;");
    asm("loc_6F118F0: jne loc_6F1196A;");
    asm("loc_6F118F2: push $1;");
    asm("loc_6F118F4: push $0x28;");
    asm("loc_6F118F6: calll *_import_6F12028;");
    asm("loc_6F118FC: mov %eax,%esi;");
    asm("loc_6F118FE: add $8,%esp;");
    asm("loc_6F11901: test %esi,%esi;");
    asm("loc_6F11903: je loc_6F11957;");
    asm("loc_6F11905: lea 0x10(%esi),%eax;");
    asm("loc_6F11908: movl $1,4(%eax);");
    asm("loc_6F1190F: mov %esi,8(%eax);");
    asm("loc_6F11912: movl $_off_6F120C8,(%eax);");
    asm("loc_6F11918: push %edi;");
    asm("loc_6F11919: mov %esi,%ecx;");
    asm("loc_6F1191B: movl $_off_6F12098,(%esi);");
    asm("loc_6F11921: movl $_off_6F12084,4(%esi);");
    asm("loc_6F11928: mov %eax,0x1C(%esi);");
    asm("loc_6F1192B: call _sub_6F110E0;");
    asm("loc_6F11930: mov %eax,%edi;");
    asm("loc_6F11932: test %edi,%edi;");
    asm("loc_6F11934: je loc_6F1197B;");
    asm("loc_6F11936: mov %esi,%ecx;");
    asm("loc_6F11938: call _sub_6F11130;");
    asm("loc_6F1193D: push %esi;");
    asm("loc_6F1193E: calll *_import_6F12024;");
    asm("loc_6F11944: mov 0x1C(%esp),%ecx;");
    asm("loc_6F11948: add $4,%esp;");
    asm("loc_6F1194B: xor %eax,%eax;");
    asm("loc_6F1194D: mov %eax,(%ecx);");
    asm("loc_6F1194F: mov %edi,%eax;");
    asm("loc_6F11951: pop %edi;");
    asm("loc_6F11952: pop %esi;");
    asm("loc_6F11953: pop %ebp;");
    asm("loc_6F11954: ret $0xC;");
    asm("loc_6F11957: mov 0x18(%esp),%edx;");
    asm("loc_6F1195B: pop %edi;");
    asm("loc_6F1195C: xor %ecx,%ecx;");
    asm("loc_6F1195E: pop %esi;");
    asm("loc_6F1195F: mov $0xFFFFFFFC,%eax;");
    asm("loc_6F11964: mov %ecx,(%edx);");
    asm("loc_6F11966: pop %ebp;");
    asm("loc_6F11967: ret $0xC;");
    asm("loc_6F1196A: mov 0x18(%esp),%edx;");
    asm("loc_6F1196E: pop %edi;");
    asm("loc_6F1196F: pop %esi;");
    asm("loc_6F11970: mov %ebp,(%edx);");
    asm("loc_6F11972: mov $0xFFFFFFFD,%eax;");
    asm("loc_6F11977: pop %ebp;");
    asm("loc_6F11978: ret $0xC;");
    asm("loc_6F1197B: mov 0x18(%esp),%eax;");
    asm("loc_6F1197F: mov %esi,(%eax);");
    asm("loc_6F11981: mov %edi,%eax;");
    asm("loc_6F11983: pop %edi;");
    asm("loc_6F11984: pop %esi;");
    asm("loc_6F11985: pop %ebp;");
    asm("loc_6F11986: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6F11990() // _IDAComponent_AddRef
{
    __DEBUG_ASM(6F11990);
    // chunk 0x6F11990 _sub_6F11990
    asm("loc_6F11990: mov 4(%esp),%eax;");
    asm("loc_6F11994: mov 4(%eax),%ecx;");
    asm("loc_6F11997: inc %ecx;");
    asm("loc_6F11998: mov %ecx,4(%eax);");
    asm("loc_6F1199B: mov %ecx,%eax;");
    asm("loc_6F1199D: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6F119A0() // _SysConInner_Release
{
    __DEBUG_ASM(6F119A0);
    // chunk 0x6F119A0 _sub_6F119A0
    asm("loc_6F119A0: mov 4(%esp),%ecx;");
    asm("loc_6F119A4: mov 4(%ecx),%eax;");
    asm("loc_6F119A7: test %eax,%eax;");
    asm("loc_6F119A9: jbe loc_6F119AF;");
    asm("loc_6F119AB: dec %eax;");
    asm("loc_6F119AC: mov %eax,4(%ecx);");
    asm("loc_6F119AF: mov 4(%ecx),%eax;");
    asm("loc_6F119B2: test %eax,%eax;");
    asm("loc_6F119B4: jne loc_6F119D9;");
    asm("loc_6F119B6: push %esi;");
    asm("loc_6F119B7: mov 8(%ecx),%esi;");
    asm("loc_6F119BA: test %esi,%esi;");
    asm("loc_6F119BC: movl $1,4(%ecx);");
    asm("loc_6F119C3: je loc_6F119D6;");
    asm("loc_6F119C5: mov %esi,%ecx;");
    asm("loc_6F119C7: call _sub_6F11130;");
    asm("loc_6F119CC: push %esi;");
    asm("loc_6F119CD: calll *_import_6F12024;");
    asm("loc_6F119D3: add $4,%esp;");
    asm("loc_6F119D6: xor %eax,%eax;");
    asm("loc_6F119D8: pop %esi;");
    asm("loc_6F119D9: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6F119E0() // _SystemContainer_IDAConnectionPointContainer_QueryInterface
{
    __DEBUG_ASM(6F119E0);
    // chunk 0x6F119E0 _sub_6F119E0
    asm("loc_6F119E0: subl $4,4(%esp);");
    asm("loc_6F119E5: jmp _sub_6F11160;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6F119F0() // _SystemContainer_IDAConnectionPointContainer_AddRef
{
    __DEBUG_ASM(6F119F0);
    // chunk 0x6F119F0 _sub_6F119F0
    asm("loc_6F119F0: subl $4,4(%esp);");
    asm("loc_6F119F5: jmp _sub_6F11170;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6F11A00() // _SystemContainer_IDAConnectionPointContainer_Release
{
    __DEBUG_ASM(6F11A00);
    // chunk 0x6F11A00 _sub_6F11A00
    asm("loc_6F11A00: subl $4,4(%esp);");
    asm("loc_6F11A05: jmp _sub_6F11180;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6F11A0A() // ??3@YAXPAX@Z
{
    __DEBUG_ASM(6F11A0A);
    // chunk 0x6F11A0A _sub_6F11A0A
    asm("loc_6F11A0A: jmpl *_import_6F1201C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6F11A10() // ??2@YAPAXI@Z
{
    __DEBUG_ASM(6F11A10);
    // chunk 0x6F11A10 _sub_6F11A10
    asm("loc_6F11A10: jmpl *_import_6F12014;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6F11A20() // __alloca_probe
{
    __DEBUG_ASM(6F11A20);
    // chunk 0x6F11A20 _sub_6F11A20
    asm("loc_6F11A20: push %ecx;");
    asm("loc_6F11A21: cmp $0x1000,%eax;");
    asm("loc_6F11A26: lea 8(%esp),%ecx;");
    asm("loc_6F11A2A: jb loc_6F11A40;");
    asm("loc_6F11A2C: sub $0x1000,%ecx;");
    asm("loc_6F11A32: sub $0x1000,%eax;");
    asm("loc_6F11A37: test %eax,(%ecx);");
    asm("loc_6F11A39: cmp $0x1000,%eax;");
    asm("loc_6F11A3E: jae loc_6F11A2C;");
    asm("loc_6F11A40: sub %eax,%ecx;");
    asm("loc_6F11A42: mov %esp,%eax;");
    asm("loc_6F11A44: test %eax,(%ecx);");
    asm("loc_6F11A46: mov %ecx,%esp;");
    asm("loc_6F11A48: mov (%eax),%ecx;");
    asm("loc_6F11A4A: mov 4(%eax),%eax;");
    asm("loc_6F11A4D: push %eax;");
    asm("loc_6F11A4E: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6F11A4F() // __CRT_INIT@12
{
    __DEBUG_ASM(6F11A4F);
    // chunk 0x6F11A4F _sub_6F11A4F
    asm("loc_6F11A4F: mov 8(%esp),%eax;");
    asm("loc_6F11A53: test %eax,%eax;");
    asm("loc_6F11A55: jne loc_6F11A65;");
    asm("loc_6F11A57: cmp %eax,_data_6F1319C;");
    asm("loc_6F11A5D: jle loc_6F11A8D;");
    asm("loc_6F11A5F: decl _data_6F1319C;");
    asm("loc_6F11A65: mov _import_6F12034,%ecx;");
    asm("loc_6F11A6B: cmp $1,%eax;");
    asm("loc_6F11A6E: mov (%ecx),%ecx;");
    asm("loc_6F11A70: mov %ecx,_data_6F131A0;");
    asm("loc_6F11A76: jne loc_6F11AB7;");
    asm("loc_6F11A78: push $0x80;");
    asm("loc_6F11A7D: calll *_import_6F12030;");
    asm("loc_6F11A83: test %eax,%eax;");
    asm("loc_6F11A85: pop %ecx;");
    asm("loc_6F11A86: mov %eax,_data_6F131A8;");
    asm("loc_6F11A8B: jne loc_6F11A91;");
    asm("loc_6F11A8D: xor %eax,%eax;");
    asm("loc_6F11A8F: jmp loc_6F11AF7;");
    asm("loc_6F11A91: andl $0,(%eax);");
    asm("loc_6F11A94: mov _data_6F131A8,%eax;");
    asm("loc_6F11A99: push $_data_6F13004;");
    asm("loc_6F11A9E: push $_data_6F13000;");
    asm("loc_6F11AA3: mov %eax,_data_6F131A4;");
    asm("loc_6F11AA8: call _sub_6F11B98;");
    asm("loc_6F11AAD: incl _data_6F1319C;");
    asm("loc_6F11AB3: pop %ecx;");
    asm("loc_6F11AB4: pop %ecx;");
    asm("loc_6F11AB5: jmp loc_6F11AF4;");
    asm("loc_6F11AB7: test %eax,%eax;");
    asm("loc_6F11AB9: jne loc_6F11AF4;");
    asm("loc_6F11ABB: mov _data_6F131A8,%eax;");
    asm("loc_6F11AC0: test %eax,%eax;");
    asm("loc_6F11AC2: je loc_6F11AF4;");
    asm("loc_6F11AC4: mov _data_6F131A4,%ecx;");
    asm("loc_6F11ACA: push %esi;");
    asm("loc_6F11ACB: lea -4(%ecx),%esi;");
    asm("loc_6F11ACE: cmp %eax,%esi;");
    asm("loc_6F11AD0: jb loc_6F11AE4;");
    asm("loc_6F11AD2: mov (%esi),%ecx;");
    asm("loc_6F11AD4: test %ecx,%ecx;");
    asm("loc_6F11AD6: je loc_6F11ADF;");
    asm("loc_6F11AD8: call *%ecx;");
    asm("loc_6F11ADA: mov _data_6F131A8,%eax;");
    asm("loc_6F11ADF: sub $4,%esi;");
    asm("loc_6F11AE2: jmp loc_6F11ACE;");
    asm("loc_6F11AE4: push %eax;");
    asm("loc_6F11AE5: calll *_import_6F12024;");
    asm("loc_6F11AEB: andl $0,_data_6F131A8;");
    asm("loc_6F11AF2: pop %ecx;");
    asm("loc_6F11AF3: pop %esi;");
    asm("loc_6F11AF4: push $1;");
    asm("loc_6F11AF6: pop %eax;");
    asm("loc_6F11AF7: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6F11AFA() // _DllEntryPoint
{
    __DEBUG_ASM(6F11AFA);
    // chunk 0x6F11AFA _sub_6F11AFA
    asm("loc_6F11AFA: push %ebp;");
    asm("loc_6F11AFB: mov %esp,%ebp;");
    asm("loc_6F11AFD: push %ebx;");
    asm("loc_6F11AFE: mov 8(%ebp),%ebx;");
    asm("loc_6F11B01: push %esi;");
    asm("loc_6F11B02: mov 0xC(%ebp),%esi;");
    asm("loc_6F11B05: push %edi;");
    asm("loc_6F11B06: mov 0x10(%ebp),%edi;");
    asm("loc_6F11B09: test %esi,%esi;");
    asm("loc_6F11B0B: jne loc_6F11B16;");
    asm("loc_6F11B0D: cmpl $0,_data_6F1319C;");
    asm("loc_6F11B14: jmp loc_6F11B3C;");
    asm("loc_6F11B16: cmp $1,%esi;");
    asm("loc_6F11B19: je loc_6F11B20;");
    asm("loc_6F11B1B: cmp $2,%esi;");
    asm("loc_6F11B1E: jne loc_6F11B42;");
    asm("loc_6F11B20: mov _data_6F131AC,%eax;");
    asm("loc_6F11B25: test %eax,%eax;");
    asm("loc_6F11B27: je loc_6F11B32;");
    asm("loc_6F11B29: push %edi;");
    asm("loc_6F11B2A: push %esi;");
    asm("loc_6F11B2B: push %ebx;");
    asm("loc_6F11B2C: call *%eax;");
    asm("loc_6F11B2E: test %eax,%eax;");
    asm("loc_6F11B30: je loc_6F11B3E;");
    asm("loc_6F11B32: push %edi;");
    asm("loc_6F11B33: push %esi;");
    asm("loc_6F11B34: push %ebx;");
    asm("loc_6F11B35: call _sub_6F11A4F;");
    asm("loc_6F11B3A: test %eax,%eax;");
    asm("loc_6F11B3C: jne loc_6F11B42;");
    asm("loc_6F11B3E: xor %eax,%eax;");
    asm("loc_6F11B40: jmp loc_6F11B90;");
    asm("loc_6F11B42: push %edi;");
    asm("loc_6F11B43: push %esi;");
    asm("loc_6F11B44: push %ebx;");
    asm("loc_6F11B45: call _sub_6F117F0;");
    asm("loc_6F11B4A: cmp $1,%esi;");
    asm("loc_6F11B4D: mov %eax,0xC(%ebp);");
    asm("loc_6F11B50: jne loc_6F11B5E;");
    asm("loc_6F11B52: test %eax,%eax;");
    asm("loc_6F11B54: jne loc_6F11B8D;");
    asm("loc_6F11B56: push %edi;");
    asm("loc_6F11B57: push %eax;");
    asm("loc_6F11B58: push %ebx;");
    asm("loc_6F11B59: call _sub_6F11A4F;");
    asm("loc_6F11B5E: test %esi,%esi;");
    asm("loc_6F11B60: je loc_6F11B67;");
    asm("loc_6F11B62: cmp $3,%esi;");
    asm("loc_6F11B65: jne loc_6F11B8D;");
    asm("loc_6F11B67: push %edi;");
    asm("loc_6F11B68: push %esi;");
    asm("loc_6F11B69: push %ebx;");
    asm("loc_6F11B6A: call _sub_6F11A4F;");
    asm("loc_6F11B6F: test %eax,%eax;");
    asm("loc_6F11B71: jne loc_6F11B76;");
    asm("loc_6F11B73: and %eax,0xC(%ebp);");
    asm("loc_6F11B76: cmpl $0,0xC(%ebp);");
    asm("loc_6F11B7A: je loc_6F11B8D;");
    asm("loc_6F11B7C: mov _data_6F131AC,%eax;");
    asm("loc_6F11B81: test %eax,%eax;");
    asm("loc_6F11B83: je loc_6F11B8D;");
    asm("loc_6F11B85: push %edi;");
    asm("loc_6F11B86: push %esi;");
    asm("loc_6F11B87: push %ebx;");
    asm("loc_6F11B88: call *%eax;");
    asm("loc_6F11B8A: mov %eax,0xC(%ebp);");
    asm("loc_6F11B8D: mov 0xC(%ebp),%eax;");
    asm("loc_6F11B90: pop %edi;");
    asm("loc_6F11B91: pop %esi;");
    asm("loc_6F11B92: pop %ebx;");
    asm("loc_6F11B93: pop %ebp;");
    asm("loc_6F11B94: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6F11B98() // _initterm
{
    __DEBUG_ASM(6F11B98);
    // chunk 0x6F11B98 _sub_6F11B98
    asm("loc_6F11B98: jmpl *_import_6F1202C;");
    asm("int3;"); // unreachable
}
#ifdef __cplusplus
}
#endif // __cplusplus
#endif // __INTELLISENSE__
