#ifndef __INTELLISENSE__
// clang-format off
#include "..\..\PCH.h"
#pragma init_seg(lib)
#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

_naked _weak void _sub_4136A0() // _sub_4136A0
{
    asm("jmp dgb_4136A0;"); // jumptable skip
    asm(".long _jmp_413A24;"); // jumptable address
    __DEBUG_ASM(4136A0);
    // chunk 0x4136A0 _sub_4136A0
    asm("loc_4136A0: mov %fs:0,%eax;");
    asm("loc_4136A6: push $0xFFFFFFFF;");
    asm("loc_4136A8: push $_sub_41A8AD;");
    asm("loc_4136AD: push %eax;");
    asm("loc_4136AE: mov %esp,%fs:0;");
    asm("loc_4136B5: sub $0x110,%esp;");
    asm("loc_4136BB: push %ebx;");
    asm("loc_4136BC: mov 0x128(%esp),%ebx;");
    asm("loc_4136C3: test %ebx,%ebx;");
    asm("loc_4136C5: push %ebp;");
    asm("loc_4136C6: push %esi;");
    asm("loc_4136C7: push %edi;");
    asm("loc_4136C8: mov %ecx,%ebp;");
    asm("loc_4136CA: mov $0x100052,%edi;");
    asm("loc_4136CF: je loc_4139EF;");
    asm("loc_4136D5: mov _data_427828,%ecx;");
    asm("loc_4136DB: test %ecx,%ecx;");
    asm("loc_4136DD: je loc_4139EF;");
    asm("loc_4136E3: mov 0x130(%esp),%esi;");
    asm("loc_4136EA: movsbl (%esi),%eax;");
    asm("loc_4136ED: add $0xFFFFFFBE,%eax;");
    asm("loc_4136F0: cmp $0x36,%eax;");
    asm("loc_4136F3: ja loc_413996;");
    asm("loc_4136F9: movzbl _data_413A50(%eax),%eax;");
    asm("loc_413700: jmpl *_jmp_413A24(,%eax,4);");
    asm("loc_413707: mov 1(%esi),%dl;");
    asm("loc_41370A: test %dl,%dl;");
    asm("loc_41370C: lea 1(%esi),%eax;");
    asm("loc_41370F: jne loc_41374B;");
    asm("loc_413711: lea 0x18(%esp),%ecx;");
    asm("loc_413715: push %ecx;");
    asm("loc_413716: calll *_import_41B934;");
    asm("loc_41371C: push %eax;");
    asm("loc_41371D: lea 0x24(%esp),%edx;");
    asm("loc_413721: push $_data_4259AC;");
    asm("loc_413726: push %edx;");
    asm("loc_413727: calll *_import_41B964;");
    asm("loc_41372D: mov _data_427828,%ecx;");
    asm("loc_413733: add $0x10,%esp;");
    asm("loc_413736: lea 0x1C(%esp),%eax;");
    asm("loc_41373A: push %eax;");
    asm("loc_41373B: add $0xCC,%ecx;");
    asm("loc_413741: call _sub_402340;");
    asm("loc_413746: jmp loc_413A07;");
    asm("loc_41374B: push %eax;");
    asm("loc_41374C: add $0xCC,%ecx;");
    asm("loc_413752: call _sub_402340;");
    asm("loc_413757: jmp loc_413A07;");
    asm("loc_41375C: inc %esi;");
    asm("loc_41375D: push %esi;");
    asm("loc_41375E: calll *_import_41B980;");
    asm("loc_413764: mov _data_427828,%edx;");
    asm("loc_41376A: add $4,%esp;");
    asm("loc_41376D: mov %eax,%esi;");
    asm("loc_41376F: push %esi;");
    asm("loc_413770: lea 0xCC(%edx),%ecx;");
    asm("loc_413776: call _sub_402330;");
    asm("loc_41377B: test %al,%al;");
    asm("loc_41377D: jne loc_413A07;");
    asm("loc_413783: lea 0x10(%esp),%ecx;");
    asm("loc_413787: call _sub_418AAA;");
    asm("loc_41378C: lea 0x10(%esp),%eax;");
    asm("loc_413790: push $0xF01F;");
    asm("loc_413795: push %eax;");
    asm("loc_413796: movl $0,0x130(%esp);");
    asm("loc_4137A1: call _sub_40AE40;");
    asm("loc_4137A6: mov 0x18(%esp),%ecx;");
    asm("loc_4137AA: push %esi;");
    asm("loc_4137AB: push %ecx;");
    asm("loc_4137AC: push %edi;");
    asm("loc_4137AD: call _sub_40E160;");
    asm("loc_4137B2: add $0x14,%esp;");
    asm("loc_4137B5: lea 0x10(%esp),%ecx;");
    asm("loc_4137B9: movl $0xFFFFFFFF,0x128(%esp);");
    asm("loc_4137C4: call _sub_418AA4;");
    asm("loc_4137C9: jmp loc_413A07;");
    asm("loc_4137CE: inc %esi;");
    asm("loc_4137CF: push %esi;");
    asm("loc_4137D0: add $0xCC,%ecx;");
    asm("loc_4137D6: call _sub_401A90;");
    asm("loc_4137DB: test %al,%al;");
    asm("loc_4137DD: jne loc_413A07;");
    asm("loc_4137E3: lea 0x10(%esp),%ecx;");
    asm("loc_4137E7: call _sub_418AAA;");
    asm("loc_4137EC: movl $1,0x128(%esp);");
    asm("loc_4137F7: push $0xF020;");
    asm("loc_4137FC: jmp loc_4138C8;");
    asm("loc_413801: inc %esi;");
    asm("loc_413802: push %esi;");
    asm("loc_413803: calll *_import_41B980;");
    asm("loc_413809: mov _data_427828,%ecx;");
    asm("loc_41380F: add $4,%esp;");
    asm("loc_413812: mov %eax,%esi;");
    asm("loc_413814: push %esi;");
    asm("loc_413815: add $0xCC,%ecx;");
    asm("loc_41381B: call _sub_401F00;");
    asm("loc_413820: test %al,%al;");
    asm("loc_413822: jne loc_413A07;");
    asm("loc_413828: lea 0x10(%esp),%ecx;");
    asm("loc_41382C: call _sub_418AAA;");
    asm("loc_413831: movl $2,0x128(%esp);");
    asm("loc_41383C: push $0xF021;");
    asm("loc_413841: jmp loc_4138C8;");
    asm("loc_413846: inc %esi;");
    asm("loc_413847: push %esi;");
    asm("loc_413848: calll *_import_41B980;");
    asm("loc_41384E: mov _data_427828,%ecx;");
    asm("loc_413854: add $4,%esp;");
    asm("loc_413857: mov %eax,%esi;");
    asm("loc_413859: push %esi;");
    asm("loc_41385A: add $0xCC,%ecx;");
    asm("loc_413860: call _sub_401F20;");
    asm("loc_413865: test %al,%al;");
    asm("loc_413867: jne loc_413A07;");
    asm("loc_41386D: lea 0x10(%esp),%ecx;");
    asm("loc_413871: call _sub_418AAA;");
    asm("loc_413876: movl $3,0x128(%esp);");
    asm("loc_413881: push $0xF022;");
    asm("loc_413886: jmp loc_4138C8;");
    asm("loc_413888: inc %esi;");
    asm("loc_413889: push %esi;");
    asm("loc_41388A: calll *_import_41B980;");
    asm("loc_413890: mov _data_427828,%ecx;");
    asm("loc_413896: add $4,%esp;");
    asm("loc_413899: mov %eax,%esi;");
    asm("loc_41389B: push %esi;");
    asm("loc_41389C: add $0xCC,%ecx;");
    asm("loc_4138A2: call _sub_401F40;");
    asm("loc_4138A7: test %al,%al;");
    asm("loc_4138A9: jne loc_413A07;");
    asm("loc_4138AF: lea 0x10(%esp),%ecx;");
    asm("loc_4138B3: call _sub_418AAA;");
    asm("loc_4138B8: movl $4,0x128(%esp);");
    asm("loc_4138C3: push $0xF023;");
    asm("loc_4138C8: lea 0x14(%esp),%edx;");
    asm("loc_4138CC: push %edx;");
    asm("loc_4138CD: call _sub_40AE40;");
    asm("loc_4138D2: mov 0x18(%esp),%eax;");
    asm("loc_4138D6: push %esi;");
    asm("loc_4138D7: push %eax;");
    asm("loc_4138D8: jmp loc_4137AC;");
    asm("loc_4138DD: lea 0x18(%esp),%ecx;");
    asm("loc_4138E1: push %ecx;");
    asm("loc_4138E2: push $_data_4259A8;");
    asm("loc_4138E7: inc %esi;");
    asm("loc_4138E8: push %esi;");
    asm("loc_4138E9: calll *_import_41B938;");
    asm("loc_4138EF: mov 0x24(%esp),%edx;");
    asm("loc_4138F3: mov _data_427828,%eax;");
    asm("loc_4138F8: add $0xC,%esp;");
    asm("loc_4138FB: push %edx;");
    asm("loc_4138FC: lea 0xCC(%eax),%ecx;");
    asm("loc_413902: call _sub_401F70;");
    asm("loc_413907: test %al,%al;");
    asm("loc_413909: jne loc_413A07;");
    asm("loc_41390F: lea 0x10(%esp),%ecx;");
    asm("loc_413913: call _sub_418AAA;");
    asm("loc_413918: lea 0x10(%esp),%ecx;");
    asm("loc_41391C: push $0xF024;");
    asm("loc_413921: push %ecx;");
    asm("loc_413922: movl $5,0x130(%esp);");
    asm("loc_41392D: call _sub_40AE40;");
    asm("loc_413932: flds 0x20(%esp);");
    asm("loc_413936: mov 0x18(%esp),%edx;");
    asm("loc_41393A: fstpl (%esp);");
    asm("loc_41393D: push %edx;");
    asm("loc_41393E: push %edi;");
    asm("loc_41393F: call _sub_40E160;");
    asm("loc_413944: add $0x10,%esp;");
    asm("loc_413947: jmp loc_4137B5;");
    asm("loc_41394C: movsbl 1(%esi),%eax;");
    asm("loc_413950: push %eax;");
    asm("loc_413951: add $0xCC,%ecx;");
    asm("loc_413957: call _sub_401D40;");
    asm("loc_41395C: jmp loc_413A07;");
    asm("loc_413961: mov 1(%esi),%al;");
    asm("loc_413964: cmp $0x2B,%al;");
    asm("loc_413966: je loc_413980;");
    asm("loc_413968: test %al,%al;");
    asm("loc_41396A: je loc_413980;");
    asm("loc_41396C: cmp $0x2D,%al;");
    asm("loc_41396E: jne loc_413A07;");
    asm("loc_413974: movb $0,0xA79(%ecx);");
    asm("loc_41397B: jmp loc_413A07;");
    asm("loc_413980: movb $1,0xA79(%ecx);");
    asm("loc_413987: jmp loc_413A07;");
    asm("loc_413989: push $1;");
    asm("loc_41398B: add $0xCC,%ecx;");
    asm("loc_413991: call _sub_4023B0;");
    asm("loc_413996: lea 0x14(%esp),%ecx;");
    asm("loc_41399A: call _sub_418AAA;");
    asm("loc_41399F: lea 0x14(%esp),%ecx;");
    asm("loc_4139A3: push $0xF025;");
    asm("loc_4139A8: push %ecx;");
    asm("loc_4139A9: movl $6,0x130(%esp);");
    asm("loc_4139B4: call _sub_40AE40;");
    asm("loc_4139B9: mov 0x1C(%esp),%edx;");
    asm("loc_4139BD: push %esi;");
    asm("loc_4139BE: push %edx;");
    asm("loc_4139BF: push %edi;");
    asm("loc_4139C0: call _sub_40E160;");
    asm("loc_4139C5: mov 0x14C(%esp),%eax;");
    asm("loc_4139CC: add $0x14,%esp;");
    asm("loc_4139CF: push %eax;");
    asm("loc_4139D0: push %ebx;");
    asm("loc_4139D1: push %esi;");
    asm("loc_4139D2: mov %ebp,%ecx;");
    asm("loc_4139D4: call _sub_4192A8;");
    asm("loc_4139D9: lea 0x14(%esp),%ecx;");
    asm("loc_4139DD: movl $0xFFFFFFFF,0x128(%esp);");
    asm("loc_4139E8: call _sub_418AA4;");
    asm("loc_4139ED: jmp loc_413A07;");
    asm("loc_4139EF: mov 0x138(%esp),%ecx;");
    asm("loc_4139F6: mov 0x130(%esp),%edx;");
    asm("loc_4139FD: push %ecx;");
    asm("loc_4139FE: push %ebx;");
    asm("loc_4139FF: push %edx;");
    asm("loc_413A00: mov %ebp,%ecx;");
    asm("loc_413A02: call _sub_4192A8;");
    asm("loc_413A07: mov 0x120(%esp),%ecx;");
    asm("loc_413A0E: pop %edi;");
    asm("loc_413A0F: pop %esi;");
    asm("loc_413A10: pop %ebp;");
    asm("loc_413A11: pop %ebx;");
    asm("loc_413A12: mov %ecx,%fs:0;");
    asm("loc_413A19: add $0x11C,%esp;");
    asm("loc_413A1F: ret $0xC;");
    asm("int3;"); // unreachable
    asm("_jmp_413A24: .long loc_413707;");
    asm(".long loc_413989;");
    asm(".long loc_41394C;");
    asm(".long loc_4138DD;");
    asm(".long loc_4137CE;");
    asm(".long loc_413846;");
    asm(".long loc_41375C;");
    asm(".long loc_413801;");
    asm(".long loc_413888;");
    asm(".long loc_413961;");
    asm(".long loc_413996;");
    asm(".long 0xCCCCCCCC;");
}
FIXUP_JUMP_TABLE(_sub_4136A0);
_naked _weak void _sub_413A90() // _sub_413A90
{
    __DEBUG_ASM(413A90);
    // chunk 0x413A90 _sub_413A90
    asm("loc_413A90: mov _data_41E180,%eax;");
    asm("loc_413A95: mov %eax,_data_428CA0;");
    asm("loc_413A9A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_413AA0() // _sub_413AA0
{
    __DEBUG_ASM(413AA0);
    // chunk 0x413AA0 _sub_413AA0
    asm("loc_413AA0: mov _data_41E180,%eax;");
    asm("loc_413AA5: mov %eax,_data_428CAC;");
    asm("loc_413AAA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_413AB0() // _sub_413AB0
{
    __DEBUG_ASM(413AB0);
    // chunk 0x413AB0 _sub_413AB0
    asm("loc_413AB0: mov _data_41E184,%eax;");
    asm("loc_413AB5: mov %eax,_data_428C9C;");
    asm("loc_413ABA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_413AC0() // _sub_413AC0
{
    __DEBUG_ASM(413AC0);
    // chunk 0x413AC0 _sub_413AC0
    asm("loc_413AC0: xor %eax,%eax;");
    asm("loc_413AC2: mov %ax,_data_428CA8;");
    asm("loc_413AC8: mov %al,_data_428CAA;");
    asm("loc_413ACD: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_413AD0() // _sub_413AD0
{
    __DEBUG_ASM(413AD0);
    // chunk 0x413AD0 _sub_413AD0
    asm("loc_413AD0: movw $0,_data_428CB8;");
    asm("loc_413AD9: movb $1,_data_428CBA;");
    asm("loc_413AE0: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_413AF0() // _sub_413AF0
{
    __DEBUG_ASM(413AF0);
    // chunk 0x413AF0 _sub_413AF0
    asm("loc_413AF0: mov $1,%eax;");
    asm("loc_413AF5: mov %ax,_data_428CA4;");
    asm("loc_413AFB: mov %al,_data_428CA6;");
    asm("loc_413B00: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_413B10() // _sub_413B10
{
    __DEBUG_ASM(413B10);
    // chunk 0x413B10 _sub_413B10
    asm("loc_413B10: movw $2,_data_428CBC;");
    asm("loc_413B19: movb $1,_data_428CBE;");
    asm("loc_413B20: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_413B30() // _sub_413B30
{
    __DEBUG_ASM(413B30);
    // chunk 0x413B30 _sub_413B30
    asm("loc_413B30: movw $3,_data_428CB0;");
    asm("loc_413B39: movb $1,_data_428CB2;");
    asm("loc_413B40: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_413B50() // _sub_413B50
{
    __DEBUG_ASM(413B50);
    // chunk 0x413B50 _sub_413B50
    asm("loc_413B50: movw $4,_data_428CB4;");
    asm("loc_413B59: movb $1,_data_428CB6;");
    asm("loc_413B60: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_413B70() // _sub_413B70
{
    __DEBUG_ASM(413B70);
    // chunk 0x413B70 _sub_413B70
    asm("loc_413B70: mov 4(%esp),%eax;");
    asm("loc_413B74: push %esi;");
    asm("loc_413B75: push %eax;");
    asm("loc_413B76: push $0x90;");
    asm("loc_413B7B: mov %ecx,%esi;");
    asm("loc_413B7D: call _sub_418A92;");
    asm("loc_413B82: movl $_off_41E1A8,(%esi);");
    asm("loc_413B88: mov %esi,%eax;");
    asm("loc_413B8A: pop %esi;");
    asm("loc_413B8B: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_413B90() // _sub_413B90
{
    __DEBUG_ASM(413B90);
    // chunk 0x413B90 _sub_413B90
    asm("loc_413B90: push %esi;");
    asm("loc_413B91: mov %ecx,%esi;");
    asm("loc_413B93: call _sub_413BB0;");
    asm("loc_413B98: testb $1,8(%esp);");
    asm("loc_413B9D: je loc_413BA8;");
    asm("loc_413B9F: push %esi;");
    asm("loc_413BA0: call _sub_418978;");
    asm("loc_413BA5: add $4,%esp;");
    asm("loc_413BA8: mov %esi,%eax;");
    asm("loc_413BAA: pop %esi;");
    asm("loc_413BAB: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_413BB0() // _j_??1CDialog@@UAE@XZ_3
{
    __DEBUG_ASM(413BB0);
    // chunk 0x413BB0 _sub_413BB0
    asm("loc_413BB0: jmp _sub_418A98;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_413BC0() // _nullsub_12
{
    __DEBUG_ASM(413BC0);
    // chunk 0x413BC0 _sub_413BC0
    asm("loc_413BC0: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_413BD0() // _sub_413BD0
{
    __DEBUG_ASM(413BD0);
    // chunk 0x413BD0 _sub_413BD0
    asm("loc_413BD0: mov _import_41B3B0,%eax;");
    asm("loc_413BD5: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_413BE0() // _sub_413BE0
{
    __DEBUG_ASM(413BE0);
    // chunk 0x413BE0 _sub_413BE0
    asm("loc_413BE0: mov $_off_41E1A0,%eax;");
    asm("loc_413BE5: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_413BF0() // _sub_413BF0
{
    __DEBUG_ASM(413BF0);
    // chunk 0x413BF0 _sub_413BF0
    asm("loc_413BF0: mov _data_41E284,%eax;");
    asm("loc_413BF5: mov %eax,_data_428CD0;");
    asm("loc_413BFA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_413C00() // _sub_413C00
{
    __DEBUG_ASM(413C00);
    // chunk 0x413C00 _sub_413C00
    asm("loc_413C00: mov _data_41E284,%eax;");
    asm("loc_413C05: mov %eax,_data_428CDC;");
    asm("loc_413C0A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_413C10() // _sub_413C10
{
    __DEBUG_ASM(413C10);
    // chunk 0x413C10 _sub_413C10
    asm("loc_413C10: mov _data_41E288,%eax;");
    asm("loc_413C15: mov %eax,_data_428CC8;");
    asm("loc_413C1A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_413C20() // _sub_413C20
{
    __DEBUG_ASM(413C20);
    // chunk 0x413C20 _sub_413C20
    asm("loc_413C20: xor %eax,%eax;");
    asm("loc_413C22: mov %ax,_data_428CD8;");
    asm("loc_413C28: mov %al,_data_428CD8+2;");
    asm("loc_413C2D: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_413C30() // _sub_413C30
{
    __DEBUG_ASM(413C30);
    // chunk 0x413C30 _sub_413C30
    asm("loc_413C30: movw $0,_data_4294E8;");
    asm("loc_413C39: movb $1,_data_4294EA;");
    asm("loc_413C40: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_413C50() // _sub_413C50
{
    __DEBUG_ASM(413C50);
    // chunk 0x413C50 _sub_413C50
    asm("loc_413C50: mov $1,%eax;");
    asm("loc_413C55: mov %ax,_data_428CD4;");
    asm("loc_413C5B: mov %al,_data_428CD6;");
    asm("loc_413C60: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_413C70() // _sub_413C70
{
    __DEBUG_ASM(413C70);
    // chunk 0x413C70 _sub_413C70
    asm("loc_413C70: movw $2,_data_429500;");
    asm("loc_413C79: movb $1,_data_429502;");
    asm("loc_413C80: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_413C90() // _sub_413C90
{
    __DEBUG_ASM(413C90);
    // chunk 0x413C90 _sub_413C90
    asm("loc_413C90: movw $3,_data_4294E0;");
    asm("loc_413C99: movb $1,_data_4294E2;");
    asm("loc_413CA0: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_413CB0() // _sub_413CB0
{
    __DEBUG_ASM(413CB0);
    // chunk 0x413CB0 _sub_413CB0
    asm("loc_413CB0: movw $4,_data_4294E4;");
    asm("loc_413CB9: movb $1,_data_4294E6;");
    asm("loc_413CC0: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_413CD0() // _sub_413CD0
{
    __DEBUG_ASM(413CD0);
    // chunk 0x413CD0 _sub_413CD0
    asm("loc_413CD0: push %ecx;");
    asm("loc_413CD1: lea 2(%esp),%eax;");
    asm("loc_413CD5: push %eax;");
    asm("loc_413CD6: lea 7(%esp),%ecx;");
    asm("loc_413CDA: push %ecx;");
    asm("loc_413CDB: mov $_data_4294EC,%ecx;");
    asm("loc_413CE0: call _sub_4144C0;");
    asm("loc_413CE5: push $_sub_413D00;");
    asm("loc_413CEA: call _sub_419410;");
    asm("loc_413CEF: add $8,%esp;");
    asm("loc_413CF2: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_413D00() // _sub_413D00
{
    __DEBUG_ASM(413D00);
    // chunk 0x413D00 _sub_413D00
    asm("loc_413D00: mov _data_428CCC,%cl;");
    asm("loc_413D06: mov $1,%al;");
    asm("loc_413D08: test %cl,%al;");
    asm("loc_413D0A: jne loc_413D1E;");
    asm("loc_413D0C: or %al,%cl;");
    asm("loc_413D0E: mov %cl,_data_428CCC;");
    asm("loc_413D14: mov $_data_4294EC,%ecx;");
    asm("loc_413D19: jmp loc_413D20;");
    asm("loc_413D1E: ret;");
    asm("loc_413D1F: nop;");
    asm("loc_413D20: sub $0xC,%esp;");
    asm("loc_413D23: push %ebx;");
    asm("loc_413D24: push %ebp;");
    asm("loc_413D25: push %esi;");
    asm("loc_413D26: mov %ecx,%esi;");
    asm("loc_413D28: mov 0x10(%esi),%ecx;");
    asm("loc_413D2B: push %edi;");
    asm("loc_413D2C: mov 4(%esi),%edi;");
    asm("loc_413D2F: mov (%edi),%eax;");
    asm("loc_413D31: xor %ebp,%ebp;");
    asm("loc_413D33: cmp %ebp,%ecx;");
    asm("loc_413D35: mov %eax,0x10(%esp);");
    asm("loc_413D39: je loc_413D9D;");
    asm("loc_413D3B: mov %eax,%ecx;");
    asm("loc_413D3D: cmp %ecx,%eax;");
    asm("loc_413D3F: jne loc_413D9D;");
    asm("loc_413D41: mov 4(%edi),%ebx;");
    asm("loc_413D44: cmp 8(%esi),%ebx;");
    asm("loc_413D47: mov %ebx,%edi;");
    asm("loc_413D49: je loc_413D78;");
    asm("loc_413D4B: nop;");
    asm("loc_413D4C: lea (%esp),%esp;");
    asm("loc_413D50: mov 8(%edi),%eax;");
    asm("loc_413D53: push %eax;");
    asm("loc_413D54: mov %esi,%ecx;");
    asm("loc_413D56: call _sub_414E80;");
    asm("loc_413D5B: mov (%edi),%edi;");
    asm("loc_413D5D: push %ebp;");
    asm("loc_413D5E: lea 0xC(%ebx),%ecx;");
    asm("loc_413D61: call _sub_4155A0;");
    asm("loc_413D66: push %ebx;");
    asm("loc_413D67: call _sub_418978;");
    asm("loc_413D6C: mov 8(%esi),%eax;");
    asm("loc_413D6F: add $4,%esp;");
    asm("loc_413D72: cmp %eax,%edi;");
    asm("loc_413D74: mov %edi,%ebx;");
    asm("loc_413D76: jne loc_413D50;");
    asm("loc_413D78: mov 4(%esi),%ecx;");
    asm("loc_413D7B: mov 8(%esi),%edx;");
    asm("loc_413D7E: mov %edx,4(%ecx);");
    asm("loc_413D81: mov 4(%esi),%eax;");
    asm("loc_413D84: mov %ebp,0x10(%esi);");
    asm("loc_413D87: mov %eax,(%eax);");
    asm("loc_413D89: mov 4(%esi),%eax;");
    asm("loc_413D8C: mov %eax,8(%eax);");
    asm("loc_413D8F: lea 0x14(%esp),%eax;");
    asm("loc_413D93: push %eax;");
    asm("loc_413D94: mov %esi,%ecx;");
    asm("loc_413D96: call _sub_414640;");
    asm("loc_413D9B: jmp loc_413DC1;");
    asm("loc_413D9D: cmp %edi,%eax;");
    asm("loc_413D9F: je loc_413DC1;");
    asm("loc_413DA1: lea 0x10(%esp),%ecx;");
    asm("loc_413DA5: mov %eax,%ebx;");
    asm("loc_413DA7: call _sub_4153B0;");
    asm("loc_413DAC: push %ebx;");
    asm("loc_413DAD: lea 0x1C(%esp),%ecx;");
    asm("loc_413DB1: push %ecx;");
    asm("loc_413DB2: mov %esi,%ecx;");
    asm("loc_413DB4: call _sub_414AA0;");
    asm("loc_413DB9: mov 0x10(%esp),%eax;");
    asm("loc_413DBD: cmp %edi,%eax;");
    asm("loc_413DBF: jne loc_413DA1;");
    asm("loc_413DC1: mov 4(%esi),%edx;");
    asm("loc_413DC4: push %edx;");
    asm("loc_413DC5: call _sub_418978;");
    asm("loc_413DCA: mov 8(%esi),%eax;");
    asm("loc_413DCD: push %eax;");
    asm("loc_413DCE: mov %ebp,4(%esi);");
    asm("loc_413DD1: mov %ebp,0x10(%esi);");
    asm("loc_413DD4: call _sub_418978;");
    asm("loc_413DD9: add $8,%esp;");
    asm("loc_413DDC: pop %edi;");
    asm("loc_413DDD: mov %ebp,8(%esi);");
    asm("loc_413DE0: pop %esi;");
    asm("loc_413DE1: pop %ebp;");
    asm("loc_413DE2: pop %ebx;");
    asm("loc_413DE3: add $0xC,%esp;");
    asm("loc_413DE6: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_413DF0() // _sub_413DF0
{
    __DEBUG_ASM(413DF0);
    // chunk 0x413DF0 _sub_413DF0
    asm("loc_413DF0: push $0xFFFFFFFF;");
    asm("loc_413DF2: push $_sub_41A8EC;");
    asm("loc_413DF7: mov %fs:0,%eax;");
    asm("loc_413DFD: push %eax;");
    asm("loc_413DFE: mov %esp,%fs:0;");
    asm("loc_413E05: push %ecx;");
    asm("loc_413E06: mov 0x14(%esp),%eax;");
    asm("loc_413E0A: push %esi;");
    asm("loc_413E0B: push %edi;");
    asm("loc_413E0C: push %eax;");
    asm("loc_413E0D: mov %ecx,%esi;");
    asm("loc_413E0F: push $0x94;");
    asm("loc_413E14: mov %esi,0x10(%esp);");
    asm("loc_413E18: call _sub_418A92;");
    asm("loc_413E1D: mov 0x1C(%esp),%cl;");
    asm("loc_413E21: xor %eax,%eax;");
    asm("loc_413E23: mov %eax,0x14(%esp);");
    asm("loc_413E27: mov %cl,0x60(%esi);");
    asm("loc_413E2A: mov %eax,0x64(%esi);");
    asm("loc_413E2D: mov %eax,0x68(%esi);");
    asm("loc_413E30: mov %eax,0x6C(%esi);");
    asm("loc_413E33: lea 0x70(%esi),%edi;");
    asm("loc_413E36: mov %edi,%ecx;");
    asm("loc_413E38: movb $1,0x14(%esp);");
    asm("loc_413E3D: call _sub_418C2A;");
    asm("loc_413E42: movl $_off_41C820,(%edi);");
    asm("loc_413E48: lea 0xB0(%esi),%edi;");
    asm("loc_413E4E: mov %edi,%ecx;");
    asm("loc_413E50: movb $2,0x14(%esp);");
    asm("loc_413E55: call _sub_418C2A;");
    asm("loc_413E5A: movl $_off_41C820,(%edi);");
    asm("loc_413E60: lea 0xF0(%esi),%edi;");
    asm("loc_413E66: mov %edi,%ecx;");
    asm("loc_413E68: movb $3,0x14(%esp);");
    asm("loc_413E6D: call _sub_418C2A;");
    asm("loc_413E72: mov 0xC(%esp),%ecx;");
    asm("loc_413E76: movl $_off_41C820,(%edi);");
    asm("loc_413E7C: movl $_off_41E2E0,(%esi);");
    asm("loc_413E82: pop %edi;");
    asm("loc_413E83: mov %esi,%eax;");
    asm("loc_413E85: pop %esi;");
    asm("loc_413E86: mov %ecx,%fs:0;");
    asm("loc_413E8D: add $0x10,%esp;");
    asm("loc_413E90: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_413EA0() // _sub_413EA0
{
    __DEBUG_ASM(413EA0);
    // chunk 0x413EA0 _sub_413EA0
    asm("loc_413EA0: push %esi;");
    asm("loc_413EA1: mov %ecx,%esi;");
    asm("loc_413EA3: call _sub_413EC0;");
    asm("loc_413EA8: testb $1,8(%esp);");
    asm("loc_413EAD: je loc_413EB8;");
    asm("loc_413EAF: push %esi;");
    asm("loc_413EB0: call _sub_418978;");
    asm("loc_413EB5: add $4,%esp;");
    asm("loc_413EB8: mov %esi,%eax;");
    asm("loc_413EBA: pop %esi;");
    asm("loc_413EBB: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_413EC0() // _sub_413EC0
{
    __DEBUG_ASM(413EC0);
    // chunk 0x413EC0 _sub_413EC0
    asm("loc_413EC0: push $0xFFFFFFFF;");
    asm("loc_413EC2: push $_sub_41A93A;");
    asm("loc_413EC7: mov %fs:0,%eax;");
    asm("loc_413ECD: push %eax;");
    asm("loc_413ECE: mov %esp,%fs:0;");
    asm("loc_413ED5: sub $0xC,%esp;");
    asm("loc_413ED8: push %ebx;");
    asm("loc_413ED9: push %ebp;");
    asm("loc_413EDA: push %esi;");
    asm("loc_413EDB: mov %ecx,%esi;");
    asm("loc_413EDD: push %edi;");
    asm("loc_413EDE: mov %esi,0x14(%esp);");
    asm("loc_413EE2: movl $_off_41E2E0,(%esi);");
    asm("loc_413EE8: lea 0x60(%esi),%edi;");
    asm("loc_413EEB: push %edi;");
    asm("loc_413EEC: mov $_data_4294EC,%ecx;");
    asm("loc_413EF1: movl $4,0x28(%esp);");
    asm("loc_413EF9: call _sub_4152D0;");
    asm("loc_413EFE: push %edi;");
    asm("loc_413EFF: mov $_data_4294EC,%ecx;");
    asm("loc_413F04: mov %eax,%ebp;");
    asm("loc_413F06: call _sub_415180;");
    asm("loc_413F0B: mov %eax,%ebx;");
    asm("loc_413F0D: cmp %ebp,%ebx;");
    asm("loc_413F0F: mov %ebx,0x10(%esp);");
    asm("loc_413F13: je loc_413F24;");
    asm("loc_413F15: lea 0x10(%esp),%ecx;");
    asm("loc_413F19: call _sub_4153B0;");
    asm("loc_413F1E: cmp %ebp,0x10(%esp);");
    asm("loc_413F22: jne loc_413F15;");
    asm("loc_413F24: push %ebp;");
    asm("loc_413F25: push %ebx;");
    asm("loc_413F26: lea 0x20(%esp),%eax;");
    asm("loc_413F2A: push %eax;");
    asm("loc_413F2B: mov $_data_4294EC,%ecx;");
    asm("loc_413F30: call _sub_414650;");
    asm("loc_413F35: lea 0xF0(%esi),%ecx;");
    asm("loc_413F3B: movb $3,0x24(%esp);");
    asm("loc_413F40: call _sub_418C24;");
    asm("loc_413F45: lea 0xB0(%esi),%ecx;");
    asm("loc_413F4B: movb $2,0x24(%esp);");
    asm("loc_413F50: call _sub_418C24;");
    asm("loc_413F55: lea 0x70(%esi),%ecx;");
    asm("loc_413F58: movb $1,0x24(%esp);");
    asm("loc_413F5D: call _sub_418C24;");
    asm("loc_413F62: mov 4(%edi),%eax;");
    asm("loc_413F65: xor %ebx,%ebx;");
    asm("loc_413F67: cmp %ebx,%eax;");
    asm("loc_413F69: je loc_413F8A;");
    asm("loc_413F6B: mov -1(%eax),%cl;");
    asm("loc_413F6E: cmp %bl,%cl;");
    asm("loc_413F70: je loc_413F7E;");
    asm("loc_413F72: cmp $0xFF,%cl;");
    asm("loc_413F75: je loc_413F7E;");
    asm("loc_413F77: dec %cl;");
    asm("loc_413F79: mov %cl,-1(%eax);");
    asm("loc_413F7C: jmp loc_413F8A;");
    asm("loc_413F7E: add $0xFFFFFFFE,%eax;");
    asm("loc_413F81: push %eax;");
    asm("loc_413F82: call _sub_418978;");
    asm("loc_413F87: add $4,%esp;");
    asm("loc_413F8A: mov %esi,%ecx;");
    asm("loc_413F8C: mov %ebx,4(%edi);");
    asm("loc_413F8F: mov %ebx,8(%edi);");
    asm("loc_413F92: mov %ebx,0xC(%edi);");
    asm("loc_413F95: movl $0xFFFFFFFF,0x24(%esp);");
    asm("loc_413F9D: call _sub_418A98;");
    asm("loc_413FA2: mov 0x1C(%esp),%ecx;");
    asm("loc_413FA6: pop %edi;");
    asm("loc_413FA7: pop %esi;");
    asm("loc_413FA8: pop %ebp;");
    asm("loc_413FA9: pop %ebx;");
    asm("loc_413FAA: mov %ecx,%fs:0;");
    asm("loc_413FB1: add $0x18,%esp;");
    asm("loc_413FB4: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_413FC0() // _sub_413FC0
{
    __DEBUG_ASM(413FC0);
    // chunk 0x413FC0 _sub_413FC0
    asm("loc_413FC0: push %esi;");
    asm("loc_413FC1: push %edi;");
    asm("loc_413FC2: mov 0xC(%esp),%edi;");
    asm("loc_413FC6: mov %ecx,%esi;");
    asm("loc_413FC8: lea 0x70(%esi),%eax;");
    asm("loc_413FCB: push %eax;");
    asm("loc_413FCC: push $0x417;");
    asm("loc_413FD1: push %edi;");
    asm("loc_413FD2: call _sub_418AB0;");
    asm("loc_413FD7: lea 0xB0(%esi),%ecx;");
    asm("loc_413FDD: push %ecx;");
    asm("loc_413FDE: push $0x418;");
    asm("loc_413FE3: push %edi;");
    asm("loc_413FE4: call _sub_418AB0;");
    asm("loc_413FE9: add $0xF0,%esi;");
    asm("loc_413FEF: push %esi;");
    asm("loc_413FF0: push $0x419;");
    asm("loc_413FF5: push %edi;");
    asm("loc_413FF6: call _sub_418AB0;");
    asm("loc_413FFB: pop %edi;");
    asm("loc_413FFC: pop %esi;");
    asm("loc_413FFD: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_414000() // _sub_414000
{
    __DEBUG_ASM(414000);
    // chunk 0x414000 _sub_414000
    asm("loc_414000: push %ecx;");
    asm("loc_414001: push %esi;");
    asm("loc_414002: mov 0xC(%esp),%esi;");
    asm("loc_414006: push %esi;");
    asm("loc_414007: mov $_data_4294EC,%ecx;");
    asm("loc_41400C: call _sub_415180;");
    asm("loc_414011: cmp _data_4294F0,%eax;");
    asm("loc_414017: mov %eax,0xC(%esp);");
    asm("loc_41401B: je loc_414032;");
    asm("loc_41401D: add $0xC,%eax;");
    asm("loc_414020: push %eax;");
    asm("loc_414021: mov %esi,%ecx;");
    asm("loc_414023: call _sub_4155C0;");
    asm("loc_414028: test %eax,%eax;");
    asm("loc_41402A: jl loc_414032;");
    asm("loc_41402C: lea 0xC(%esp),%eax;");
    asm("loc_414030: jmp loc_41403F;");
    asm("loc_414032: mov _data_4294F0,%eax;");
    asm("loc_414037: mov %eax,4(%esp);");
    asm("loc_41403B: lea 4(%esp),%eax;");
    asm("loc_41403F: mov (%eax),%eax;");
    asm("loc_414041: cmp _data_4294F0,%eax;");
    asm("loc_414047: pop %esi;");
    asm("loc_414048: jne loc_41404E;");
    asm("loc_41404A: xor %eax,%eax;");
    asm("loc_41404C: pop %ecx;");
    asm("loc_41404D: ret;");
    asm("loc_41404E: mov 0x1C(%eax),%eax;");
    asm("loc_414051: pop %ecx;");
    asm("loc_414052: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_414060() // _sub_414060
{
    __DEBUG_ASM(414060);
    // chunk 0x414060 _sub_414060
    asm("loc_414060: mov _import_41B3B0,%eax;");
    asm("loc_414065: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_414070() // _sub_414070
{
    __DEBUG_ASM(414070);
    // chunk 0x414070 _sub_414070
    asm("loc_414070: mov $_off_41E2D8,%eax;");
    asm("loc_414075: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_414080() // _sub_414080
{
    __DEBUG_ASM(414080);
    // chunk 0x414080 _sub_414080
    asm("loc_414080: mov %fs:0,%eax;");
    asm("loc_414086: push $0xFFFFFFFF;");
    asm("loc_414088: push $_sub_41A98A;");
    asm("loc_41408D: push %eax;");
    asm("loc_41408E: mov 0x10(%esp),%eax;");
    asm("loc_414092: mov %esp,%fs:0;");
    asm("loc_414099: sub $0x83C,%esp;");
    asm("loc_41409F: push %ebp;");
    asm("loc_4140A0: mov %ecx,%ebp;");
    asm("loc_4140A2: cmpl $0xD,0x10(%eax);");
    asm("loc_4140A6: jne loc_4142DD;");
    asm("loc_4140AC: mov 0x90(%ebp),%ecx;");
    asm("loc_4140B2: push %ebx;");
    asm("loc_4140B3: xor %ebx,%ebx;");
    asm("loc_4140B5: push %ebx;");
    asm("loc_4140B6: push %ebx;");
    asm("loc_4140B7: push $0xE;");
    asm("loc_4140B9: push %ecx;");
    asm("loc_4140BA: calll *_import_41BBE8;");
    asm("loc_4140C0: test %eax,%eax;");
    asm("loc_4140C2: je loc_4142AE;");
    asm("loc_4140C8: mov 0x90(%ebp),%eax;");
    asm("loc_4140CE: push $0x800;");
    asm("loc_4140D3: lea 0x48(%esp),%edx;");
    asm("loc_4140D7: push %edx;");
    asm("loc_4140D8: push %eax;");
    asm("loc_4140D9: call _sub_409800;");
    asm("loc_4140DE: add $0xC,%esp;");
    asm("loc_4140E1: call _sub_40CDC0;");
    asm("loc_4140E6: mov 0x1B(%esp),%cl;");
    asm("loc_4140EA: push %ebx;");
    asm("loc_4140EB: mov %cl,0x10(%esp);");
    asm("loc_4140EF: push %ebx;");
    asm("loc_4140F0: lea 0x14(%esp),%ecx;");
    asm("loc_4140F4: call _sub_414820;");
    asm("loc_4140F9: mov %eax,0x10(%esp);");
    asm("loc_4140FD: mov %ebx,0x14(%esp);");
    asm("loc_414101: push $0x8283;");
    asm("loc_414106: lea 0x2C(%esp),%ecx;");
    asm("loc_41410A: mov %ebx,0x850(%esp);");
    asm("loc_414111: calll *_import_41B02C;");
    asm("loc_414117: mov (%eax),%edx;");
    asm("loc_414119: mov %eax,%ecx;");
    asm("loc_41411B: movb $1,0x84C(%esp);");
    asm("loc_414123: calll *0x1C(%edx);");
    asm("loc_414126: mov %eax,8(%esp);");
    asm("loc_41412A: mov 0x10(%esp),%ecx;");
    asm("loc_41412E: lea 8(%esp),%eax;");
    asm("loc_414132: push %eax;");
    asm("loc_414133: push %ecx;");
    asm("loc_414134: lea 0x24(%esp),%edx;");
    asm("loc_414138: push %edx;");
    asm("loc_414139: lea 0x18(%esp),%ecx;");
    asm("loc_41413D: movb $2,0x858(%esp);");
    asm("loc_414145: call _sub_4147C0;");
    asm("loc_41414A: mov 8(%esp),%ecx;");
    asm("loc_41414E: cmp %ebx,%ecx;");
    asm("loc_414150: movb $1,0x84C(%esp);");
    asm("loc_414158: je loc_414164;");
    asm("loc_41415A: mov (%ecx),%eax;");
    asm("loc_41415C: push $1;");
    asm("loc_41415E: calll *(%eax);");
    asm("loc_414160: mov %ebx,8(%esp);");
    asm("loc_414164: lea 0x28(%esp),%ecx;");
    asm("loc_414168: mov %bl,0x84C(%esp);");
    asm("loc_41416F: calll *_import_41B030;");
    asm("loc_414175: push $0xFFFFFFFF;");
    asm("loc_414177: lea 0x48(%esp),%ecx;");
    asm("loc_41417B: push %ecx;");
    asm("loc_41417C: lea 0x38(%esp),%ecx;");
    asm("loc_414180: calll *_import_41B034;");
    asm("loc_414186: mov (%eax),%edx;");
    asm("loc_414188: mov %eax,%ecx;");
    asm("loc_41418A: movb $3,0x84C(%esp);");
    asm("loc_414192: calll *0x1C(%edx);");
    asm("loc_414195: mov %eax,8(%esp);");
    asm("loc_414199: mov 0x10(%esp),%ecx;");
    asm("loc_41419D: lea 8(%esp),%eax;");
    asm("loc_4141A1: push %eax;");
    asm("loc_4141A2: push %ecx;");
    asm("loc_4141A3: lea 0x24(%esp),%edx;");
    asm("loc_4141A7: push %edx;");
    asm("loc_4141A8: lea 0x18(%esp),%ecx;");
    asm("loc_4141AC: movb $4,0x858(%esp);");
    asm("loc_4141B4: call _sub_4147C0;");
    asm("loc_4141B9: mov 8(%esp),%ecx;");
    asm("loc_4141BD: cmp %ebx,%ecx;");
    asm("loc_4141BF: movb $3,0x84C(%esp);");
    asm("loc_4141C7: je loc_4141D3;");
    asm("loc_4141C9: mov (%ecx),%eax;");
    asm("loc_4141CB: push $1;");
    asm("loc_4141CD: calll *(%eax);");
    asm("loc_4141CF: mov %ebx,8(%esp);");
    asm("loc_4141D3: lea 0x30(%esp),%ecx;");
    asm("loc_4141D7: mov %bl,0x84C(%esp);");
    asm("loc_4141DE: calll *_import_41B038;");
    asm("loc_4141E4: mov _import_41B03C,%ecx;");
    asm("loc_4141EA: lea 0x20(%esp),%edx;");
    asm("loc_4141EE: push %edx;");
    asm("loc_4141EF: push $0x800;");
    asm("loc_4141F4: push $_data_428CE0;");
    asm("loc_4141F9: lea 0x18(%esp),%eax;");
    asm("loc_4141FD: mov %ecx,0x30(%esp);");
    asm("loc_414201: push %eax;");
    asm("loc_414202: lea 0x34(%esp),%ecx;");
    asm("loc_414206: calll *_import_41B094;");
    asm("loc_41420C: test %al,%al;");
    asm("loc_41420E: je loc_414260;");
    asm("loc_414210: lea 0x60(%ebp),%ecx;");
    asm("loc_414213: push %ecx;");
    asm("loc_414214: mov _import_41BAF8,%ecx;");
    asm("loc_41421A: call _sub_418924;");
    asm("loc_41421F: cmp %ebx,%eax;");
    asm("loc_414221: je loc_41422E;");
    asm("loc_414223: mov 0x34(%eax),%dx;");
    asm("loc_414227: mov %dx,8(%esp);");
    asm("loc_41422C: jmp loc_414233;");
    asm("loc_41422E: mov %bx,8(%esp);");
    asm("loc_414233: mov 0x20(%esp),%ecx;");
    asm("loc_414237: mov _data_428CD8,%edx;");
    asm("loc_41423D: push $0xFFFFFFFF;");
    asm("loc_41423F: mov %bl,0xE(%esp);");
    asm("loc_414243: mov %bl,0xF(%esp);");
    asm("loc_414247: mov 0xC(%esp),%eax;");
    asm("loc_41424B: push %eax;");
    asm("loc_41424C: mov _import_41BB70,%eax;");
    asm("loc_414251: push $_data_428CE0;");
    asm("loc_414256: push %ecx;");
    asm("loc_414257: push %edx;");
    asm("loc_414258: lea 4(%eax),%ecx;");
    asm("loc_41425B: call _sub_4188F4;");
    asm("loc_414260: push %esi;");
    asm("loc_414261: push %edi;");
    asm("loc_414262: call _sub_40CE70;");
    asm("loc_414267: mov 0x18(%esp),%eax;");
    asm("loc_41426B: mov (%eax),%esi;");
    asm("loc_41426D: cmp %eax,%esi;");
    asm("loc_41426F: movl $0xFFFFFFFF,0x854(%esp);");
    asm("loc_41427A: mov %eax,%edi;");
    asm("loc_41427C: je loc_41429B;");
    asm("loc_41427E: mov %edi,%edi;");
    asm("loc_414280: mov %esi,%eax;");
    asm("loc_414282: mov (%esi),%esi;");
    asm("loc_414284: push %eax;");
    asm("loc_414285: lea 0x28(%esp),%ecx;");
    asm("loc_414289: push %ecx;");
    asm("loc_41428A: lea 0x1C(%esp),%ecx;");
    asm("loc_41428E: call _sub_414EC0;");
    asm("loc_414293: cmp %edi,%esi;");
    asm("loc_414295: jne loc_414280;");
    asm("loc_414297: mov 0x18(%esp),%eax;");
    asm("loc_41429B: push %eax;");
    asm("loc_41429C: call _sub_418978;");
    asm("loc_4142A1: add $4,%esp;");
    asm("loc_4142A4: pop %edi;");
    asm("loc_4142A5: mov %ebx,0x14(%esp);");
    asm("loc_4142A9: mov %ebx,0x18(%esp);");
    asm("loc_4142AD: pop %esi;");
    asm("loc_4142AE: push $0xFFFFFFFF;");
    asm("loc_4142B0: push %ebx;");
    asm("loc_4142B1: lea 0x70(%ebp),%ecx;");
    asm("loc_4142B4: call _sub_419050;");
    asm("loc_4142B9: mov 0x90(%ebp),%edx;");
    asm("loc_4142BF: push %ebx;");
    asm("loc_4142C0: push %ebx;");
    asm("loc_4142C1: push $0x303;");
    asm("loc_4142C6: push %edx;");
    asm("loc_4142C7: calll *_import_41BBE8;");
    asm("loc_4142CD: mov 0x858(%esp),%eax;");
    asm("loc_4142D4: movl $1,(%eax);");
    asm("loc_4142DA: pop %ebx;");
    asm("loc_4142DB: jmp loc_4142EA;");
    asm("loc_4142DD: mov 0x854(%esp),%ecx;");
    asm("loc_4142E4: movl $0,(%ecx);");
    asm("loc_4142EA: mov 0x840(%esp),%ecx;");
    asm("loc_4142F1: pop %ebp;");
    asm("loc_4142F2: mov %ecx,%fs:0;");
    asm("loc_4142F9: add $0x848,%esp;");
    asm("loc_4142FF: ret $8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_414310() // _sub_414310
{
    __DEBUG_ASM(414310);
    // chunk 0x414310 _sub_414310
    asm("loc_414310: push %esi;");
    asm("loc_414311: mov %ecx,%esi;");
    asm("loc_414313: mov (%esi),%ecx;");
    asm("loc_414315: test %ecx,%ecx;");
    asm("loc_414317: je loc_414325;");
    asm("loc_414319: mov (%ecx),%eax;");
    asm("loc_41431B: push $1;");
    asm("loc_41431D: calll *(%eax);");
    asm("loc_41431F: movl $0,(%esi);");
    asm("loc_414325: pop %esi;");
    asm("loc_414326: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_414330() // _sub_414330
{
    __DEBUG_ASM(414330);
    // chunk 0x414330 _sub_414330
    asm("loc_414330: push %esi;");
    asm("loc_414331: push %edi;");
    asm("loc_414332: mov %ecx,%esi;");
    asm("loc_414334: call _sub_418996;");
    asm("loc_414339: mov 0x90(%esi),%eax;");
    asm("loc_41433F: mov _import_41BBE8,%edi;");
    asm("loc_414345: push $0x10000;");
    asm("loc_41434A: push $0;");
    asm("loc_41434C: push $0x445;");
    asm("loc_414351: push %eax;");
    asm("loc_414352: call *%edi;");
    asm("loc_414354: mov 0x90(%esi),%ecx;");
    asm("loc_41435A: push $0x200;");
    asm("loc_41435F: push $0;");
    asm("loc_414361: push $0x435;");
    asm("loc_414366: push %ecx;");
    asm("loc_414367: call *%edi;");
    asm("loc_414369: lea 0x60(%esi),%edi;");
    asm("loc_41436C: push %edi;");
    asm("loc_41436D: mov $_data_4294EC,%ecx;");
    asm("loc_414372: call _sub_414530;");
    asm("loc_414377: mov %esi,(%eax);");
    asm("loc_414379: mov 4(%edi),%edi;");
    asm("loc_41437C: test %edi,%edi;");
    asm("loc_41437E: jne loc_414385;");
    asm("loc_414380: mov $_data_41C3F4,%edi;");
    asm("loc_414385: mov 0x110(%esi),%edx;");
    asm("loc_41438B: push %edi;");
    asm("loc_41438C: push %edx;");
    asm("loc_41438D: call _sub_409840;");
    asm("loc_414392: add $8,%esp;");
    asm("loc_414395: call _sub_40CDC0;");
    asm("loc_41439A: mov _import_41BB80,%eax;");
    asm("loc_41439F: movl $_sub_4143C0,(%eax);");
    asm("loc_4143A5: call _sub_40CE70;");
    asm("loc_4143AA: pop %edi;");
    asm("loc_4143AB: mov $1,%eax;");
    asm("loc_4143B0: pop %esi;");
    asm("loc_4143B1: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4143C0() // _sub_4143C0
{
    __DEBUG_ASM(4143C0);
    // chunk 0x4143C0 _sub_4143C0
    asm("loc_4143C0: push %ebx;");
    asm("loc_4143C1: push %esi;");
    asm("loc_4143C2: push %edi;");
    asm("loc_4143C3: call _sub_40CDC0;");
    asm("loc_4143C8: mov 0x14(%esp),%eax;");
    asm("loc_4143CC: mov _import_41BAF8,%ecx;");
    asm("loc_4143D2: push %eax;");
    asm("loc_4143D3: call _sub_41895A;");
    asm("loc_4143D8: test %eax,%eax;");
    asm("loc_4143DA: je loc_414477;");
    asm("loc_4143E0: add $4,%eax;");
    asm("loc_4143E3: push %eax;");
    asm("loc_4143E4: lea 0x18(%esp),%ecx;");
    asm("loc_4143E8: push %ecx;");
    asm("loc_4143E9: mov $_data_4294EC,%ecx;");
    asm("loc_4143EE: call _sub_414710;");
    asm("loc_4143F3: mov 0x14(%esp),%eax;");
    asm("loc_4143F7: cmp _data_4294F0,%eax;");
    asm("loc_4143FD: je loc_414477;");
    asm("loc_4143FF: mov 0x1C(%eax),%esi;");
    asm("loc_414402: test %esi,%esi;");
    asm("loc_414404: je loc_414477;");
    asm("loc_414406: mov 0xD0(%esi),%edx;");
    asm("loc_41440C: mov _import_41BBE8,%edi;");
    asm("loc_414412: push $0;");
    asm("loc_414414: push $0;");
    asm("loc_414416: push $0xBA;");
    asm("loc_41441B: push %edx;");
    asm("loc_41441C: call *%edi;");
    asm("loc_41441E: mov 0xD0(%esi),%ecx;");
    asm("loc_414424: mov %eax,%ebx;");
    asm("loc_414426: mov 0x10(%esp),%eax;");
    asm("loc_41442A: push %eax;");
    asm("loc_41442B: push %ecx;");
    asm("loc_41442C: call _sub_409880;");
    asm("loc_414431: mov 0xD0(%esi),%edx;");
    asm("loc_414437: push $_data_4259C4;");
    asm("loc_41443C: push %edx;");
    asm("loc_41443D: call _sub_409880;");
    asm("loc_414442: mov 0xD0(%esi),%eax;");
    asm("loc_414448: add $0x10,%esp;");
    asm("loc_41444B: push $0;");
    asm("loc_41444D: push $0;");
    asm("loc_41444F: push $0xBA;");
    asm("loc_414454: push %eax;");
    asm("loc_414455: call *%edi;");
    asm("loc_414457: mov %eax,%edi;");
    asm("loc_414459: calll *_import_41BBC0;");
    asm("loc_41445F: cmp 0xD0(%esi),%eax;");
    asm("loc_414465: je loc_414477;");
    asm("loc_414467: push $0;");
    asm("loc_414469: sub %ebx,%edi;");
    asm("loc_41446B: push %edi;");
    asm("loc_41446C: lea 0xB0(%esi),%ecx;");
    asm("loc_414472: call _sub_419056;");
    asm("loc_414477: pop %edi;");
    asm("loc_414478: pop %esi;");
    asm("loc_414479: pop %ebx;");
    asm("loc_41447A: jmp _sub_40CE70;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_414480() // _sub_414480
{
    __DEBUG_ASM(414480);
    // chunk 0x414480 _sub_414480
    asm("loc_414480: push %esi;");
    asm("loc_414481: mov %ecx,%esi;");
    asm("loc_414483: mov (%esi),%eax;");
    asm("loc_414485: calll *0x60(%eax);");
    asm("loc_414488: mov (%esi),%edx;");
    asm("loc_41448A: push $1;");
    asm("loc_41448C: mov %esi,%ecx;");
    asm("loc_41448E: calll *4(%edx);");
    asm("loc_414491: pop %esi;");
    asm("loc_414492: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4144A0() // _nullsub_13
{
    __DEBUG_ASM(4144A0);
    // chunk 0x4144A0 _sub_4144A0
    asm("loc_4144A0: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4144B0() // _sub_4144B0
{
    __DEBUG_ASM(4144B0);
    // chunk 0x4144B0 _sub_4144B0
    asm("loc_4144B0: mov (%ecx),%eax;");
    asm("loc_4144B2: jmpl *0xD0(%eax);");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4144C0() // _sub_4144C0
{
    __DEBUG_ASM(4144C0);
    // chunk 0x4144C0 _sub_4144C0
    asm("loc_4144C0: mov 8(%esp),%eax;");
    asm("loc_4144C4: mov 4(%esp),%edx;");
    asm("loc_4144C8: push %ebx;");
    asm("loc_4144C9: push %esi;");
    asm("loc_4144CA: mov %ecx,%esi;");
    asm("loc_4144CC: mov (%eax),%cl;");
    asm("loc_4144CE: mov %cl,(%esi);");
    asm("loc_4144D0: mov (%edx),%al;");
    asm("loc_4144D2: push %edi;");
    asm("loc_4144D3: xor %ebx,%ebx;");
    asm("loc_4144D5: push $0x24;");
    asm("loc_4144D7: mov %al,1(%esi);");
    asm("loc_4144DA: mov %bl,0xC(%esi);");
    asm("loc_4144DD: call _sub_418A9E;");
    asm("loc_4144E2: mov %ebx,4(%eax);");
    asm("loc_4144E5: mov %bl,0x21(%eax);");
    asm("loc_4144E8: mov $1,%cl;");
    asm("loc_4144EA: mov %cl,0x20(%eax);");
    asm("loc_4144ED: mov %eax,8(%esi);");
    asm("loc_4144F0: mov %cl,0x21(%eax);");
    asm("loc_4144F3: mov 8(%esi),%ecx;");
    asm("loc_4144F6: mov %ebx,(%ecx);");
    asm("loc_4144F8: mov 8(%esi),%edx;");
    asm("loc_4144FB: mov %ebx,8(%edx);");
    asm("loc_4144FE: mov 8(%esi),%edi;");
    asm("loc_414501: push $0x24;");
    asm("loc_414503: call _sub_418A9E;");
    asm("loc_414508: mov %edi,4(%eax);");
    asm("loc_41450B: mov %bl,0x20(%eax);");
    asm("loc_41450E: mov %bl,0x21(%eax);");
    asm("loc_414511: mov %eax,4(%esi);");
    asm("loc_414514: mov %eax,(%eax);");
    asm("loc_414516: mov 4(%esi),%eax;");
    asm("loc_414519: add $8,%esp;");
    asm("loc_41451C: mov %eax,8(%eax);");
    asm("loc_41451F: pop %edi;");
    asm("loc_414520: mov %ebx,0x10(%esi);");
    asm("loc_414523: mov %esi,%eax;");
    asm("loc_414525: pop %esi;");
    asm("loc_414526: pop %ebx;");
    asm("loc_414527: ret $8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_414530() // _sub_414530
{
    __DEBUG_ASM(414530);
    // chunk 0x414530 _sub_414530
    asm("loc_414530: push $0xFFFFFFFF;");
    asm("loc_414532: push $_sub_41A9A8;");
    asm("loc_414537: mov %fs:0,%eax;");
    asm("loc_41453D: push %eax;");
    asm("loc_41453E: mov %esp,%fs:0;");
    asm("loc_414545: sub $0x1C,%esp;");
    asm("loc_414548: mov 0x2C(%esp),%eax;");
    asm("loc_41454C: push %ebx;");
    asm("loc_41454D: push %esi;");
    asm("loc_41454E: xor %ebx,%ebx;");
    asm("loc_414550: mov %ecx,%esi;");
    asm("loc_414552: mov (%eax),%cl;");
    asm("loc_414554: push $0xFFFFFFFF;");
    asm("loc_414556: push %ebx;");
    asm("loc_414557: mov %cl,0x18(%esp);");
    asm("loc_41455B: push %eax;");
    asm("loc_41455C: lea 0x1C(%esp),%ecx;");
    asm("loc_414560: mov %ebx,0x20(%esp);");
    asm("loc_414564: mov %ebx,0x24(%esp);");
    asm("loc_414568: mov %ebx,0x28(%esp);");
    asm("loc_41456C: call _sub_403C10;");
    asm("loc_414571: mov %ebx,0x20(%esp);");
    asm("loc_414575: lea 0x10(%esp),%edx;");
    asm("loc_414579: push %edx;");
    asm("loc_41457A: lea 0xC(%esp),%eax;");
    asm("loc_41457E: push %eax;");
    asm("loc_41457F: mov %esi,%ecx;");
    asm("loc_414581: mov %ebx,0x34(%esp);");
    asm("loc_414585: call _sub_414850;");
    asm("loc_41458A: mov 0x14(%esp),%eax;");
    asm("loc_41458E: cmp %ebx,%eax;");
    asm("loc_414590: je loc_4145E3;");
    asm("loc_414592: mov -1(%eax),%cl;");
    asm("loc_414595: cmp %bl,%cl;");
    asm("loc_414597: je loc_4145BD;");
    asm("loc_414599: cmp $0xFF,%cl;");
    asm("loc_41459C: je loc_4145BD;");
    asm("loc_41459E: dec %cl;");
    asm("loc_4145A0: mov %cl,-1(%eax);");
    asm("loc_4145A3: mov 8(%esp),%ecx;");
    asm("loc_4145A7: pop %esi;");
    asm("loc_4145A8: lea 0x1C(%ecx),%eax;");
    asm("loc_4145AB: pop %ebx;");
    asm("loc_4145AC: mov 0x1C(%esp),%ecx;");
    asm("loc_4145B0: mov %ecx,%fs:0;");
    asm("loc_4145B7: add $0x28,%esp;");
    asm("loc_4145BA: ret $4;");
    asm("loc_4145BD: add $0xFFFFFFFE,%eax;");
    asm("loc_4145C0: push %eax;");
    asm("loc_4145C1: call _sub_418978;");
    asm("loc_4145C6: mov 0xC(%esp),%edx;");
    asm("loc_4145CA: add $4,%esp;");
    asm("loc_4145CD: pop %esi;");
    asm("loc_4145CE: lea 0x1C(%edx),%eax;");
    asm("loc_4145D1: pop %ebx;");
    asm("loc_4145D2: mov 0x1C(%esp),%ecx;");
    asm("loc_4145D6: mov %ecx,%fs:0;");
    asm("loc_4145DD: add $0x28,%esp;");
    asm("loc_4145E0: ret $4;");
    asm("loc_4145E3: mov 8(%esp),%eax;");
    asm("loc_4145E7: mov 0x24(%esp),%ecx;");
    asm("loc_4145EB: pop %esi;");
    asm("loc_4145EC: add $0x1C,%eax;");
    asm("loc_4145EF: pop %ebx;");
    asm("loc_4145F0: mov %ecx,%fs:0;");
    asm("loc_4145F7: add $0x28,%esp;");
    asm("loc_4145FA: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_414600() // _sub_414600
{
    __DEBUG_ASM(414600);
    // chunk 0x414600 _sub_414600
    asm("loc_414600: push %esi;");
    asm("loc_414601: mov %ecx,%esi;");
    asm("loc_414603: mov 4(%esi),%eax;");
    asm("loc_414606: test %eax,%eax;");
    asm("loc_414608: je loc_414629;");
    asm("loc_41460A: mov -1(%eax),%cl;");
    asm("loc_41460D: test %cl,%cl;");
    asm("loc_41460F: je loc_41461D;");
    asm("loc_414611: cmp $0xFF,%cl;");
    asm("loc_414614: je loc_41461D;");
    asm("loc_414616: dec %cl;");
    asm("loc_414618: mov %cl,-1(%eax);");
    asm("loc_41461B: jmp loc_414629;");
    asm("loc_41461D: add $0xFFFFFFFE,%eax;");
    asm("loc_414620: push %eax;");
    asm("loc_414621: call _sub_418978;");
    asm("loc_414626: add $4,%esp;");
    asm("loc_414629: movl $0,4(%esi);");
    asm("loc_414630: movl $0,8(%esi);");
    asm("loc_414637: movl $0,0xC(%esi);");
    asm("loc_41463E: pop %esi;");
    asm("loc_41463F: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_414640() // _sub_414640
{
    __DEBUG_ASM(414640);
    // chunk 0x414640 _sub_414640
    asm("loc_414640: mov 4(%ecx),%eax;");
    asm("loc_414643: mov (%eax),%ecx;");
    asm("loc_414645: mov 4(%esp),%eax;");
    asm("loc_414649: mov %ecx,(%eax);");
    asm("loc_41464B: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_414650() // _sub_414650
{
    __DEBUG_ASM(414650);
    // chunk 0x414650 _sub_414650
    asm("loc_414650: push %ebx;");
    asm("loc_414651: mov 0x10(%esp),%ebx;");
    asm("loc_414655: push %esi;");
    asm("loc_414656: mov %ecx,%esi;");
    asm("loc_414658: mov 0x10(%esi),%eax;");
    asm("loc_41465B: test %eax,%eax;");
    asm("loc_41465D: mov 0x10(%esp),%ecx;");
    asm("loc_414661: push %edi;");
    asm("loc_414662: je loc_4146D3;");
    asm("loc_414664: mov 4(%esi),%eax;");
    asm("loc_414667: cmp (%eax),%ecx;");
    asm("loc_414669: jne loc_4146D3;");
    asm("loc_41466B: cmp %eax,%ebx;");
    asm("loc_41466D: jne loc_4146D3;");
    asm("loc_41466F: mov 4(%eax),%ebx;");
    asm("loc_414672: cmp 8(%esi),%ebx;");
    asm("loc_414675: mov %ebx,%edi;");
    asm("loc_414677: je loc_4146A7;");
    asm("loc_414679: lea (%esp),%esp;");
    asm("loc_414680: mov 8(%edi),%eax;");
    asm("loc_414683: push %eax;");
    asm("loc_414684: mov %esi,%ecx;");
    asm("loc_414686: call _sub_414E80;");
    asm("loc_41468B: mov (%edi),%edi;");
    asm("loc_41468D: lea 0xC(%ebx),%ecx;");
    asm("loc_414690: call _sub_414600;");
    asm("loc_414695: push %ebx;");
    asm("loc_414696: call _sub_418978;");
    asm("loc_41469B: mov 8(%esi),%eax;");
    asm("loc_41469E: add $4,%esp;");
    asm("loc_4146A1: cmp %eax,%edi;");
    asm("loc_4146A3: mov %edi,%ebx;");
    asm("loc_4146A5: jne loc_414680;");
    asm("loc_4146A7: mov 4(%esi),%ecx;");
    asm("loc_4146AA: mov 8(%esi),%edx;");
    asm("loc_4146AD: mov %edx,4(%ecx);");
    asm("loc_4146B0: mov 4(%esi),%eax;");
    asm("loc_4146B3: movl $0,0x10(%esi);");
    asm("loc_4146BA: mov %eax,(%eax);");
    asm("loc_4146BC: mov 4(%esi),%eax;");
    asm("loc_4146BF: mov %eax,8(%eax);");
    asm("loc_4146C2: mov 4(%esi),%eax;");
    asm("loc_4146C5: mov (%eax),%ecx;");
    asm("loc_4146C7: mov 0x10(%esp),%eax;");
    asm("loc_4146CB: pop %edi;");
    asm("loc_4146CC: pop %esi;");
    asm("loc_4146CD: mov %ecx,(%eax);");
    asm("loc_4146CF: pop %ebx;");
    asm("loc_4146D0: ret $0xC;");
    asm("loc_4146D3: cmp %ebx,%ecx;");
    asm("loc_4146D5: je loc_4146F7;");
    asm("loc_4146D7: mov %ecx,%edi;");
    asm("loc_4146D9: lea 0x14(%esp),%ecx;");
    asm("loc_4146DD: call _sub_4153B0;");
    asm("loc_4146E2: push %edi;");
    asm("loc_4146E3: lea 0x1C(%esp),%edx;");
    asm("loc_4146E7: push %edx;");
    asm("loc_4146E8: mov %esi,%ecx;");
    asm("loc_4146EA: call _sub_414AA0;");
    asm("loc_4146EF: mov 0x14(%esp),%ecx;");
    asm("loc_4146F3: cmp %ebx,%ecx;");
    asm("loc_4146F5: jne loc_4146D7;");
    asm("loc_4146F7: mov 0x10(%esp),%eax;");
    asm("loc_4146FB: pop %edi;");
    asm("loc_4146FC: pop %esi;");
    asm("loc_4146FD: mov %ecx,(%eax);");
    asm("loc_4146FF: pop %ebx;");
    asm("loc_414700: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_414710() // _sub_414710
{
    __DEBUG_ASM(414710);
    // chunk 0x414710 _sub_414710
    asm("loc_414710: push %ecx;");
    asm("loc_414711: push %ebx;");
    asm("loc_414712: push %ebp;");
    asm("loc_414713: push %esi;");
    asm("loc_414714: mov %ecx,%ebp;");
    asm("loc_414716: mov 8(%ebp),%eax;");
    asm("loc_414719: push %edi;");
    asm("loc_41471A: mov 4(%ebp),%edi;");
    asm("loc_41471D: mov 4(%edi),%esi;");
    asm("loc_414720: cmp %eax,%esi;");
    asm("loc_414722: je loc_414743;");
    asm("loc_414724: mov 0x1C(%esp),%eax;");
    asm("loc_414728: push %eax;");
    asm("loc_414729: lea 0xC(%esi),%ecx;");
    asm("loc_41472C: call _sub_4155C0;");
    asm("loc_414731: test %eax,%eax;");
    asm("loc_414733: jge loc_41473A;");
    asm("loc_414735: mov 8(%esi),%esi;");
    asm("loc_414738: jmp loc_41473E;");
    asm("loc_41473A: mov %esi,%edi;");
    asm("loc_41473C: mov (%esi),%esi;");
    asm("loc_41473E: cmp 8(%ebp),%esi;");
    asm("loc_414741: jne loc_414724;");
    asm("loc_414743: cmp 4(%ebp),%edi;");
    asm("loc_414746: mov %edi,0x10(%esp);");
    asm("loc_41474A: je loc_41479E;");
    asm("loc_41474C: mov 0x14(%edi),%ebx;");
    asm("loc_41474F: mov 0x10(%edi),%edi;");
    asm("loc_414752: test %edi,%edi;");
    asm("loc_414754: jne loc_41475B;");
    asm("loc_414756: mov $_data_41C3F4,%edi;");
    asm("loc_41475B: mov 0x1C(%esp),%eax;");
    asm("loc_41475F: mov 8(%eax),%esi;");
    asm("loc_414762: cmp %ebx,%esi;");
    asm("loc_414764: mov %esi,%ecx;");
    asm("loc_414766: jb loc_41476A;");
    asm("loc_414768: mov %ebx,%ecx;");
    asm("loc_41476A: mov 4(%eax),%eax;");
    asm("loc_41476D: push %ecx;");
    asm("loc_41476E: push %edi;");
    asm("loc_41476F: push %eax;");
    asm("loc_414770: calll *_import_41B8FC;");
    asm("loc_414776: add $0xC,%esp;");
    asm("loc_414779: test %eax,%eax;");
    asm("loc_41477B: jne loc_414788;");
    asm("loc_41477D: cmp %ebx,%esi;");
    asm("loc_41477F: jb loc_41479E;");
    asm("loc_414781: cmp %ebx,%esi;");
    asm("loc_414783: setne %al;");
    asm("loc_414786: test %eax,%eax;");
    asm("loc_414788: jl loc_41479E;");
    asm("loc_41478A: pop %edi;");
    asm("loc_41478B: lea 0xC(%esp),%eax;");
    asm("loc_41478F: mov (%eax),%edx;");
    asm("loc_414791: mov 0x14(%esp),%eax;");
    asm("loc_414795: pop %esi;");
    asm("loc_414796: pop %ebp;");
    asm("loc_414797: mov %edx,(%eax);");
    asm("loc_414799: pop %ebx;");
    asm("loc_41479A: pop %ecx;");
    asm("loc_41479B: ret $8;");
    asm("loc_41479E: mov 4(%ebp),%ecx;");
    asm("loc_4147A1: pop %edi;");
    asm("loc_4147A2: lea 0x18(%esp),%eax;");
    asm("loc_4147A6: pop %esi;");
    asm("loc_4147A7: mov %ecx,0x14(%esp);");
    asm("loc_4147AB: mov (%eax),%edx;");
    asm("loc_4147AD: mov 0x10(%esp),%eax;");
    asm("loc_4147B1: pop %ebp;");
    asm("loc_4147B2: mov %edx,(%eax);");
    asm("loc_4147B4: pop %ebx;");
    asm("loc_4147B5: pop %ecx;");
    asm("loc_4147B6: ret $8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4147C0() // _sub_4147C0
{
    __DEBUG_ASM(4147C0);
    // chunk 0x4147C0 _sub_4147C0
    asm("loc_4147C0: push %ebx;");
    asm("loc_4147C1: mov 0xC(%esp),%ebx;");
    asm("loc_4147C5: push %ebp;");
    asm("loc_4147C6: mov 4(%ebx),%ebp;");
    asm("loc_4147C9: push %esi;");
    asm("loc_4147CA: push %edi;");
    asm("loc_4147CB: push $0xC;");
    asm("loc_4147CD: mov %ecx,%edi;");
    asm("loc_4147CF: call _sub_418A9E;");
    asm("loc_4147D4: add $4,%esp;");
    asm("loc_4147D7: test %ebp,%ebp;");
    asm("loc_4147D9: mov %eax,%esi;");
    asm("loc_4147DB: mov %ebx,(%esi);");
    asm("loc_4147DD: jne loc_4147E1;");
    asm("loc_4147DF: mov %esi,%ebp;");
    asm("loc_4147E1: mov 0x1C(%esp),%ecx;");
    asm("loc_4147E5: mov %ebp,4(%esi);");
    asm("loc_4147E8: mov %esi,4(%ebx);");
    asm("loc_4147EB: mov 4(%esi),%eax;");
    asm("loc_4147EE: push %ecx;");
    asm("loc_4147EF: lea 8(%esi),%edx;");
    asm("loc_4147F2: push %edx;");
    asm("loc_4147F3: mov %esi,(%eax);");
    asm("loc_4147F5: call _sub_415400;");
    asm("loc_4147FA: mov 8(%edi),%eax;");
    asm("loc_4147FD: add $8,%esp;");
    asm("loc_414800: inc %eax;");
    asm("loc_414801: mov %eax,8(%edi);");
    asm("loc_414804: mov 0x14(%esp),%eax;");
    asm("loc_414808: pop %edi;");
    asm("loc_414809: mov %esi,(%eax);");
    asm("loc_41480B: pop %esi;");
    asm("loc_41480C: pop %ebp;");
    asm("loc_41480D: pop %ebx;");
    asm("loc_41480E: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_414820() // _sub_414820
{
    __DEBUG_ASM(414820);
    // chunk 0x414820 _sub_414820
    asm("loc_414820: push $0xC;");
    asm("loc_414822: call _sub_418A9E;");
    asm("loc_414827: mov 8(%esp),%ecx;");
    asm("loc_41482B: add $4,%esp;");
    asm("loc_41482E: test %ecx,%ecx;");
    asm("loc_414830: jne loc_414834;");
    asm("loc_414832: mov %eax,%ecx;");
    asm("loc_414834: mov %ecx,(%eax);");
    asm("loc_414836: mov 8(%esp),%ecx;");
    asm("loc_41483A: test %ecx,%ecx;");
    asm("loc_41483C: je loc_414844;");
    asm("loc_41483E: mov %ecx,4(%eax);");
    asm("loc_414841: ret $8;");
    asm("loc_414844: mov %eax,4(%eax);");
    asm("loc_414847: ret $8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_414850() // _sub_414850
{
    __DEBUG_ASM(414850);
    // chunk 0x414850 _sub_414850
    asm("loc_414850: push %ecx;");
    asm("loc_414851: push %ebx;");
    asm("loc_414852: mov 0x10(%esp),%ebx;");
    asm("loc_414856: push %ebp;");
    asm("loc_414857: push %esi;");
    asm("loc_414858: push %edi;");
    asm("loc_414859: mov %ecx,%edi;");
    asm("loc_41485B: mov 4(%edi),%ebp;");
    asm("loc_41485E: mov 4(%ebp),%esi;");
    asm("loc_414861: cmp 8(%edi),%esi;");
    asm("loc_414864: mov $1,%al;");
    asm("loc_414866: je loc_41489D;");
    asm("loc_414868: mov 0x10(%esi),%eax;");
    asm("loc_41486B: test %eax,%eax;");
    asm("loc_41486D: mov 0x14(%esi),%ecx;");
    asm("loc_414870: mov %esi,%ebp;");
    asm("loc_414872: jne loc_414879;");
    asm("loc_414874: mov $_data_41C3F4,%eax;");
    asm("loc_414879: push %ecx;");
    asm("loc_41487A: push %eax;");
    asm("loc_41487B: mov 8(%ebx),%eax;");
    asm("loc_41487E: push %eax;");
    asm("loc_41487F: push $0;");
    asm("loc_414881: mov %ebx,%ecx;");
    asm("loc_414883: call _sub_415610;");
    asm("loc_414888: test %eax,%eax;");
    asm("loc_41488A: setl %al;");
    asm("loc_41488D: test %al,%al;");
    asm("loc_41488F: je loc_414895;");
    asm("loc_414891: mov (%esi),%esi;");
    asm("loc_414893: jmp loc_414898;");
    asm("loc_414895: mov 8(%esi),%esi;");
    asm("loc_414898: cmp 8(%edi),%esi;");
    asm("loc_41489B: jne loc_414868;");
    asm("loc_41489D: mov 0xC(%edi),%cl;");
    asm("loc_4148A0: test %cl,%cl;");
    asm("loc_4148A2: je loc_414A21;");
    asm("loc_4148A8: push $0;");
    asm("loc_4148AA: push %ebp;");
    asm("loc_4148AB: mov %edi,%ecx;");
    asm("loc_4148AD: call _sub_4152B0;");
    asm("loc_4148B2: mov 8(%edi),%ecx;");
    asm("loc_4148B5: mov %ecx,(%eax);");
    asm("loc_4148B7: mov 8(%edi),%edx;");
    asm("loc_4148BA: mov %eax,0x1C(%esp);");
    asm("loc_4148BE: mov %edx,8(%eax);");
    asm("loc_4148C1: add $0xC,%eax;");
    asm("loc_4148C4: push %ebx;");
    asm("loc_4148C5: push %eax;");
    asm("loc_4148C6: call _sub_415450;");
    asm("loc_4148CB: mov 0x10(%edi),%ecx;");
    asm("loc_4148CE: mov 4(%edi),%eax;");
    asm("loc_4148D1: add $8,%esp;");
    asm("loc_4148D4: inc %ecx;");
    asm("loc_4148D5: cmp %eax,%ebp;");
    asm("loc_4148D7: mov %ecx,0x10(%edi);");
    asm("loc_4148DA: je loc_414904;");
    asm("loc_4148DC: cmp 8(%edi),%esi;");
    asm("loc_4148DF: jne loc_414904;");
    asm("loc_4148E1: lea 0xC(%ebp),%eax;");
    asm("loc_4148E4: push %eax;");
    asm("loc_4148E5: mov %ebx,%ecx;");
    asm("loc_4148E7: call _sub_4155C0;");
    asm("loc_4148EC: test %eax,%eax;");
    asm("loc_4148EE: jl loc_414904;");
    asm("loc_4148F0: mov 0x1C(%esp),%ebx;");
    asm("loc_4148F4: mov %ebx,8(%ebp);");
    asm("loc_4148F7: mov 4(%edi),%eax;");
    asm("loc_4148FA: cmp 8(%eax),%ebp;");
    asm("loc_4148FD: jne loc_41492B;");
    asm("loc_4148FF: mov %ebx,8(%eax);");
    asm("loc_414902: jmp loc_41492B;");
    asm("loc_414904: mov 0x1C(%esp),%ecx;");
    asm("loc_414908: mov %ecx,(%ebp);");
    asm("loc_41490B: mov 4(%edi),%eax;");
    asm("loc_41490E: cmp %eax,%ebp;");
    asm("loc_414910: jne loc_41491D;");
    asm("loc_414912: mov %ecx,4(%eax);");
    asm("loc_414915: mov 4(%edi),%edx;");
    asm("loc_414918: mov %ecx,8(%edx);");
    asm("loc_41491B: jmp loc_414927;");
    asm("loc_41491D: cmp (%eax),%ebp;");
    asm("loc_41491F: jne loc_414927;");
    asm("loc_414921: mov 0x1C(%esp),%ecx;");
    asm("loc_414925: mov %ecx,(%eax);");
    asm("loc_414927: mov 0x1C(%esp),%ebx;");
    asm("loc_41492B: mov 4(%edi),%edx;");
    asm("loc_41492E: cmp 4(%edx),%ebx;");
    asm("loc_414931: mov %ebx,%esi;");
    asm("loc_414933: je loc_414A05;");
    asm("loc_414939: lea (%esp),%esp;");
    asm("loc_414940: mov 4(%esi),%eax;");
    asm("loc_414943: mov 0x20(%eax),%cl;");
    asm("loc_414946: test %cl,%cl;");
    asm("loc_414948: jne loc_414A05;");
    asm("loc_41494E: mov 4(%eax),%edx;");
    asm("loc_414951: mov (%edx),%ecx;");
    asm("loc_414953: cmp %ecx,%eax;");
    asm("loc_414955: jne loc_4149AB;");
    asm("loc_414957: mov 8(%edx),%ecx;");
    asm("loc_41495A: mov 0x20(%ecx),%dl;");
    asm("loc_41495D: test %dl,%dl;");
    asm("loc_41495F: jne loc_41497B;");
    asm("loc_414961: movb $1,0x20(%eax);");
    asm("loc_414965: movb $1,0x20(%ecx);");
    asm("loc_414969: mov 4(%esi),%eax;");
    asm("loc_41496C: mov 4(%eax),%ecx;");
    asm("loc_41496F: movb $0,0x20(%ecx);");
    asm("loc_414973: mov 4(%esi),%edx;");
    asm("loc_414976: mov 4(%edx),%esi;");
    asm("loc_414979: jmp loc_4149F9;");
    asm("loc_41497B: cmp 8(%eax),%esi;");
    asm("loc_41497E: jne loc_41498A;");
    asm("loc_414980: mov %eax,%esi;");
    asm("loc_414982: push %esi;");
    asm("loc_414983: mov %edi,%ecx;");
    asm("loc_414985: call _sub_415200;");
    asm("loc_41498A: mov 4(%esi),%eax;");
    asm("loc_41498D: movb $1,0x20(%eax);");
    asm("loc_414991: mov 4(%esi),%ecx;");
    asm("loc_414994: mov 4(%ecx),%edx;");
    asm("loc_414997: movb $0,0x20(%edx);");
    asm("loc_41499B: mov 4(%esi),%eax;");
    asm("loc_41499E: mov 4(%eax),%ecx;");
    asm("loc_4149A1: push %ecx;");
    asm("loc_4149A2: mov %edi,%ecx;");
    asm("loc_4149A4: call _sub_415250;");
    asm("loc_4149A9: jmp loc_4149F9;");
    asm("loc_4149AB: mov 0x20(%ecx),%dl;");
    asm("loc_4149AE: test %dl,%dl;");
    asm("loc_4149B0: jne loc_4149CC;");
    asm("loc_4149B2: movb $1,0x20(%eax);");
    asm("loc_4149B6: movb $1,0x20(%ecx);");
    asm("loc_4149BA: mov 4(%esi),%edx;");
    asm("loc_4149BD: mov 4(%edx),%eax;");
    asm("loc_4149C0: movb $0,0x20(%eax);");
    asm("loc_4149C4: mov 4(%esi),%ecx;");
    asm("loc_4149C7: mov 4(%ecx),%esi;");
    asm("loc_4149CA: jmp loc_4149F9;");
    asm("loc_4149CC: cmp (%eax),%esi;");
    asm("loc_4149CE: jne loc_4149DA;");
    asm("loc_4149D0: mov %eax,%esi;");
    asm("loc_4149D2: push %esi;");
    asm("loc_4149D3: mov %edi,%ecx;");
    asm("loc_4149D5: call _sub_415250;");
    asm("loc_4149DA: mov 4(%esi),%edx;");
    asm("loc_4149DD: movb $1,0x20(%edx);");
    asm("loc_4149E1: mov 4(%esi),%eax;");
    asm("loc_4149E4: mov 4(%eax),%ecx;");
    asm("loc_4149E7: movb $0,0x20(%ecx);");
    asm("loc_4149EB: mov 4(%esi),%edx;");
    asm("loc_4149EE: mov 4(%edx),%eax;");
    asm("loc_4149F1: push %eax;");
    asm("loc_4149F2: mov %edi,%ecx;");
    asm("loc_4149F4: call _sub_415200;");
    asm("loc_4149F9: mov 4(%edi),%ecx;");
    asm("loc_4149FC: cmp 4(%ecx),%esi;");
    asm("loc_4149FF: jne loc_414940;");
    asm("loc_414A05: mov 4(%edi),%edx;");
    asm("loc_414A08: mov 4(%edx),%eax;");
    asm("loc_414A0B: pop %edi;");
    asm("loc_414A0C: movb $1,0x20(%eax);");
    asm("loc_414A10: mov 0x14(%esp),%eax;");
    asm("loc_414A14: pop %esi;");
    asm("loc_414A15: pop %ebp;");
    asm("loc_414A16: mov %ebx,(%eax);");
    asm("loc_414A18: movb $1,4(%eax);");
    asm("loc_414A1C: pop %ebx;");
    asm("loc_414A1D: pop %ecx;");
    asm("loc_414A1E: ret $8;");
    asm("loc_414A21: test %al,%al;");
    asm("loc_414A23: mov %ebp,0x10(%esp);");
    asm("loc_414A27: je loc_414A43;");
    asm("loc_414A29: mov 4(%edi),%ecx;");
    asm("loc_414A2C: cmp (%ecx),%ebp;");
    asm("loc_414A2E: jne loc_414A3A;");
    asm("loc_414A30: push %ebx;");
    asm("loc_414A31: push %ebp;");
    asm("loc_414A32: push %esi;");
    asm("loc_414A33: lea 0x28(%esp),%edx;");
    asm("loc_414A37: push %edx;");
    asm("loc_414A38: jmp loc_414A5C;");
    asm("loc_414A3A: lea 0x10(%esp),%ecx;");
    asm("loc_414A3E: call _sub_415350;");
    asm("loc_414A43: mov 0x10(%esp),%edx;");
    asm("loc_414A47: lea 0xC(%edx),%ecx;");
    asm("loc_414A4A: push %ebx;");
    asm("loc_414A4B: call _sub_4155C0;");
    asm("loc_414A50: test %eax,%eax;");
    asm("loc_414A52: jge loc_414A77;");
    asm("loc_414A54: push %ebx;");
    asm("loc_414A55: push %ebp;");
    asm("loc_414A56: push %esi;");
    asm("loc_414A57: lea 0x28(%esp),%eax;");
    asm("loc_414A5B: push %eax;");
    asm("loc_414A5C: mov %edi,%ecx;");
    asm("loc_414A5E: call _sub_414F30;");
    asm("loc_414A63: mov (%eax),%ecx;");
    asm("loc_414A65: mov 0x18(%esp),%eax;");
    asm("loc_414A69: pop %edi;");
    asm("loc_414A6A: pop %esi;");
    asm("loc_414A6B: pop %ebp;");
    asm("loc_414A6C: mov %ecx,(%eax);");
    asm("loc_414A6E: movb $1,4(%eax);");
    asm("loc_414A72: pop %ebx;");
    asm("loc_414A73: pop %ecx;");
    asm("loc_414A74: ret $8;");
    asm("loc_414A77: mov 0x18(%esp),%esi;");
    asm("loc_414A7B: lea 0x1C(%esp),%edx;");
    asm("loc_414A7F: push %edx;");
    asm("loc_414A80: lea 0x14(%esp),%eax;");
    asm("loc_414A84: push %eax;");
    asm("loc_414A85: mov %esi,%ecx;");
    asm("loc_414A87: movb $0,0x24(%esp);");
    asm("loc_414A8C: call _sub_414F10;");
    asm("loc_414A91: pop %edi;");
    asm("loc_414A92: mov %esi,%eax;");
    asm("loc_414A94: pop %esi;");
    asm("loc_414A95: pop %ebp;");
    asm("loc_414A96: pop %ebx;");
    asm("loc_414A97: pop %ecx;");
    asm("loc_414A98: ret $8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_414AA0() // _sub_414AA0
{
    __DEBUG_ASM(414AA0);
    // chunk 0x414AA0 _sub_414AA0
    asm("loc_414AA0: push %ecx;");
    asm("loc_414AA1: push %ebx;");
    asm("loc_414AA2: push %ebp;");
    asm("loc_414AA3: push %esi;");
    asm("loc_414AA4: mov 0x18(%esp),%esi;");
    asm("loc_414AA8: push %edi;");
    asm("loc_414AA9: mov %ecx,%edi;");
    asm("loc_414AAB: lea 0x1C(%esp),%ecx;");
    asm("loc_414AAF: call _sub_4153B0;");
    asm("loc_414AB4: mov (%esi),%edx;");
    asm("loc_414AB6: mov 8(%edi),%eax;");
    asm("loc_414AB9: cmp %eax,%edx;");
    asm("loc_414ABB: mov %esi,0x10(%esp);");
    asm("loc_414ABF: jne loc_414AE2;");
    asm("loc_414AC1: mov 8(%esi),%eax;");
    asm("loc_414AC4: mov 0x10(%esp),%ecx;");
    asm("loc_414AC8: mov 4(%ecx),%edx;");
    asm("loc_414ACB: mov %edx,4(%eax);");
    asm("loc_414ACE: mov 4(%edi),%ecx;");
    asm("loc_414AD1: cmp %esi,4(%ecx);");
    asm("loc_414AD4: jne loc_414B67;");
    asm("loc_414ADA: mov %eax,4(%ecx);");
    asm("loc_414ADD: jmp loc_414B75;");
    asm("loc_414AE2: mov 8(%esi),%ecx;");
    asm("loc_414AE5: cmp %eax,%ecx;");
    asm("loc_414AE7: jne loc_414AED;");
    asm("loc_414AE9: mov %edx,%eax;");
    asm("loc_414AEB: jmp loc_414AC4;");
    asm("loc_414AED: mov (%ecx),%eax;");
    asm("loc_414AEF: mov 0x21(%eax),%bl;");
    asm("loc_414AF2: test %bl,%bl;");
    asm("loc_414AF4: jne loc_414B01;");
    asm("loc_414AF6: mov %eax,%ecx;");
    asm("loc_414AF8: mov (%ecx),%eax;");
    asm("loc_414AFA: mov 0x21(%eax),%bl;");
    asm("loc_414AFD: test %bl,%bl;");
    asm("loc_414AFF: je loc_414AF6;");
    asm("loc_414B01: cmp %esi,%ecx;");
    asm("loc_414B03: mov 8(%ecx),%eax;");
    asm("loc_414B06: mov %ecx,0x10(%esp);");
    asm("loc_414B0A: je loc_414AC4;");
    asm("loc_414B0C: mov %ecx,4(%edx);");
    asm("loc_414B0F: mov (%esi),%edx;");
    asm("loc_414B11: mov %edx,(%ecx);");
    asm("loc_414B13: cmp 8(%esi),%ecx;");
    asm("loc_414B16: jne loc_414B1D;");
    asm("loc_414B18: mov %ecx,4(%eax);");
    asm("loc_414B1B: jmp loc_414B34;");
    asm("loc_414B1D: mov 4(%ecx),%edx;");
    asm("loc_414B20: mov %edx,4(%eax);");
    asm("loc_414B23: mov 4(%ecx),%edx;");
    asm("loc_414B26: mov %eax,(%edx);");
    asm("loc_414B28: mov 8(%esi),%edx;");
    asm("loc_414B2B: mov %edx,8(%ecx);");
    asm("loc_414B2E: mov 8(%esi),%edx;");
    asm("loc_414B31: mov %ecx,4(%edx);");
    asm("loc_414B34: mov 4(%edi),%edx;");
    asm("loc_414B37: cmp %esi,4(%edx);");
    asm("loc_414B3A: jne loc_414B41;");
    asm("loc_414B3C: mov %ecx,4(%edx);");
    asm("loc_414B3F: jmp loc_414B4F;");
    asm("loc_414B41: mov 4(%esi),%edx;");
    asm("loc_414B44: cmp %esi,(%edx);");
    asm("loc_414B46: jne loc_414B4C;");
    asm("loc_414B48: mov %ecx,(%edx);");
    asm("loc_414B4A: jmp loc_414B4F;");
    asm("loc_414B4C: mov %ecx,8(%edx);");
    asm("loc_414B4F: mov 4(%esi),%edx;");
    asm("loc_414B52: mov %edx,4(%ecx);");
    asm("loc_414B55: mov 0x20(%esi),%bl;");
    asm("loc_414B58: mov 0x20(%ecx),%dl;");
    asm("loc_414B5B: mov %bl,0x20(%ecx);");
    asm("loc_414B5E: mov %dl,0x20(%esi);");
    asm("loc_414B61: mov %esi,0x10(%esp);");
    asm("loc_414B65: jmp loc_414BD2;");
    asm("loc_414B67: mov 4(%esi),%ecx;");
    asm("loc_414B6A: cmp %esi,(%ecx);");
    asm("loc_414B6C: jne loc_414B72;");
    asm("loc_414B6E: mov %eax,(%ecx);");
    asm("loc_414B70: jmp loc_414B75;");
    asm("loc_414B72: mov %eax,8(%ecx);");
    asm("loc_414B75: mov 4(%edi),%ebp;");
    asm("loc_414B78: cmp %esi,(%ebp);");
    asm("loc_414B7B: jne loc_414BA3;");
    asm("loc_414B7D: mov 8(%esi),%ecx;");
    asm("loc_414B80: cmp 8(%edi),%ecx;");
    asm("loc_414B83: jne loc_414B8A;");
    asm("loc_414B85: mov 4(%esi),%edx;");
    asm("loc_414B88: jmp loc_414BA0;");
    asm("loc_414B8A: mov (%eax),%ecx;");
    asm("loc_414B8C: mov 0x21(%ecx),%bl;");
    asm("loc_414B8F: test %bl,%bl;");
    asm("loc_414B91: mov %eax,%edx;");
    asm("loc_414B93: jne loc_414BA0;");
    asm("loc_414B95: mov %ecx,%edx;");
    asm("loc_414B97: mov (%edx),%ecx;");
    asm("loc_414B99: mov 0x21(%ecx),%bl;");
    asm("loc_414B9C: test %bl,%bl;");
    asm("loc_414B9E: je loc_414B95;");
    asm("loc_414BA0: mov %edx,(%ebp);");
    asm("loc_414BA3: mov 4(%edi),%ebp;");
    asm("loc_414BA6: cmp %esi,8(%ebp);");
    asm("loc_414BA9: jne loc_414BD2;");
    asm("loc_414BAB: mov (%esi),%ecx;");
    asm("loc_414BAD: cmp 8(%edi),%ecx;");
    asm("loc_414BB0: jne loc_414BB7;");
    asm("loc_414BB2: mov 4(%esi),%edx;");
    asm("loc_414BB5: jmp loc_414BCF;");
    asm("loc_414BB7: mov 8(%eax),%ecx;");
    asm("loc_414BBA: mov 0x21(%ecx),%bl;");
    asm("loc_414BBD: test %bl,%bl;");
    asm("loc_414BBF: mov %eax,%edx;");
    asm("loc_414BC1: jne loc_414BCF;");
    asm("loc_414BC3: mov %ecx,%edx;");
    asm("loc_414BC5: mov 8(%edx),%ecx;");
    asm("loc_414BC8: mov 0x21(%ecx),%bl;");
    asm("loc_414BCB: test %bl,%bl;");
    asm("loc_414BCD: je loc_414BC3;");
    asm("loc_414BCF: mov %edx,8(%ebp);");
    asm("loc_414BD2: mov 0x10(%esp),%esi;");
    asm("loc_414BD6: mov 0x20(%esi),%cl;");
    asm("loc_414BD9: mov $1,%bl;");
    asm("loc_414BDB: cmp %bl,%cl;");
    asm("loc_414BDD: jne loc_414E4E;");
    asm("loc_414BE3: mov 4(%edi),%ecx;");
    asm("loc_414BE6: cmp 4(%ecx),%eax;");
    asm("loc_414BE9: je loc_414E47;");
    asm("loc_414BEF: nop;");
    asm("loc_414BF0: cmp %bl,0x20(%eax);");
    asm("loc_414BF3: jne loc_414E47;");
    asm("loc_414BF9: mov 4(%eax),%edx;");
    asm("loc_414BFC: mov (%edx),%ecx;");
    asm("loc_414BFE: cmp %ecx,%eax;");
    asm("loc_414C00: jne loc_414CAF;");
    asm("loc_414C06: mov 8(%edx),%ecx;");
    asm("loc_414C09: mov 0x20(%ecx),%dl;");
    asm("loc_414C0C: test %dl,%dl;");
    asm("loc_414C0E: jne loc_414C5B;");
    asm("loc_414C10: mov %bl,0x20(%ecx);");
    asm("loc_414C13: mov 4(%eax),%edx;");
    asm("loc_414C16: movb $0,0x20(%edx);");
    asm("loc_414C1A: mov 4(%eax),%ecx;");
    asm("loc_414C1D: mov 8(%ecx),%edx;");
    asm("loc_414C20: mov (%edx),%esi;");
    asm("loc_414C22: mov %esi,8(%ecx);");
    asm("loc_414C25: mov (%edx),%esi;");
    asm("loc_414C27: cmp 8(%edi),%esi;");
    asm("loc_414C2A: je loc_414C2F;");
    asm("loc_414C2C: mov %ecx,4(%esi);");
    asm("loc_414C2F: mov 4(%ecx),%esi;");
    asm("loc_414C32: mov %esi,4(%edx);");
    asm("loc_414C35: mov 4(%edi),%esi;");
    asm("loc_414C38: cmp 4(%esi),%ecx;");
    asm("loc_414C3B: jne loc_414C42;");
    asm("loc_414C3D: mov %edx,4(%esi);");
    asm("loc_414C40: jmp loc_414C50;");
    asm("loc_414C42: mov 4(%ecx),%esi;");
    asm("loc_414C45: cmp (%esi),%ecx;");
    asm("loc_414C47: jne loc_414C4D;");
    asm("loc_414C49: mov %edx,(%esi);");
    asm("loc_414C4B: jmp loc_414C50;");
    asm("loc_414C4D: mov %edx,8(%esi);");
    asm("loc_414C50: mov %ecx,(%edx);");
    asm("loc_414C52: mov %edx,4(%ecx);");
    asm("loc_414C55: mov 4(%eax),%ecx;");
    asm("loc_414C58: mov 8(%ecx),%ecx;");
    asm("loc_414C5B: mov (%ecx),%edx;");
    asm("loc_414C5D: cmp %bl,0x20(%edx);");
    asm("loc_414C60: jne loc_414C6E;");
    asm("loc_414C62: mov 8(%ecx),%edx;");
    asm("loc_414C65: cmp %bl,0x20(%edx);");
    asm("loc_414C68: je loc_414D19;");
    asm("loc_414C6E: mov 8(%ecx),%edx;");
    asm("loc_414C71: cmp %bl,0x20(%edx);");
    asm("loc_414C74: jne loc_414D4C;");
    asm("loc_414C7A: mov (%ecx),%edx;");
    asm("loc_414C7C: mov %bl,0x20(%edx);");
    asm("loc_414C7F: mov (%ecx),%edx;");
    asm("loc_414C81: movb $0,0x20(%ecx);");
    asm("loc_414C85: mov 8(%edx),%esi;");
    asm("loc_414C88: mov %esi,(%ecx);");
    asm("loc_414C8A: mov 8(%edx),%esi;");
    asm("loc_414C8D: cmp 8(%edi),%esi;");
    asm("loc_414C90: je loc_414C95;");
    asm("loc_414C92: mov %ecx,4(%esi);");
    asm("loc_414C95: mov 4(%ecx),%esi;");
    asm("loc_414C98: mov %esi,4(%edx);");
    asm("loc_414C9B: mov 4(%edi),%esi;");
    asm("loc_414C9E: cmp 4(%esi),%ecx;");
    asm("loc_414CA1: jne loc_414D31;");
    asm("loc_414CA7: mov %edx,4(%esi);");
    asm("loc_414CAA: jmp loc_414D40;");
    asm("loc_414CAF: mov 0x20(%ecx),%dl;");
    asm("loc_414CB2: test %dl,%dl;");
    asm("loc_414CB4: jne loc_414D02;");
    asm("loc_414CB6: mov %bl,0x20(%ecx);");
    asm("loc_414CB9: mov 4(%eax),%ecx;");
    asm("loc_414CBC: movb $0,0x20(%ecx);");
    asm("loc_414CC0: mov 4(%eax),%ecx;");
    asm("loc_414CC3: mov (%ecx),%edx;");
    asm("loc_414CC5: mov 8(%edx),%esi;");
    asm("loc_414CC8: mov %esi,(%ecx);");
    asm("loc_414CCA: mov 8(%edx),%esi;");
    asm("loc_414CCD: cmp 8(%edi),%esi;");
    asm("loc_414CD0: je loc_414CD5;");
    asm("loc_414CD2: mov %ecx,4(%esi);");
    asm("loc_414CD5: mov 4(%ecx),%esi;");
    asm("loc_414CD8: mov %esi,4(%edx);");
    asm("loc_414CDB: mov 4(%edi),%esi;");
    asm("loc_414CDE: cmp 4(%esi),%ecx;");
    asm("loc_414CE1: jne loc_414CE8;");
    asm("loc_414CE3: mov %edx,4(%esi);");
    asm("loc_414CE6: jmp loc_414CF7;");
    asm("loc_414CE8: mov 4(%ecx),%esi;");
    asm("loc_414CEB: cmp 8(%esi),%ecx;");
    asm("loc_414CEE: jne loc_414CF5;");
    asm("loc_414CF0: mov %edx,8(%esi);");
    asm("loc_414CF3: jmp loc_414CF7;");
    asm("loc_414CF5: mov %edx,(%esi);");
    asm("loc_414CF7: mov %ecx,8(%edx);");
    asm("loc_414CFA: mov %edx,4(%ecx);");
    asm("loc_414CFD: mov 4(%eax),%edx;");
    asm("loc_414D00: mov (%edx),%ecx;");
    asm("loc_414D02: mov 8(%ecx),%edx;");
    asm("loc_414D05: cmp %bl,0x20(%edx);");
    asm("loc_414D08: jne loc_414DA8;");
    asm("loc_414D0E: mov (%ecx),%edx;");
    asm("loc_414D10: cmp %bl,0x20(%edx);");
    asm("loc_414D13: jne loc_414DA8;");
    asm("loc_414D19: movb $0,0x20(%ecx);");
    asm("loc_414D1D: mov 4(%edi),%ecx;");
    asm("loc_414D20: mov 4(%eax),%eax;");
    asm("loc_414D23: cmp 4(%ecx),%eax;");
    asm("loc_414D26: jne loc_414BF0;");
    asm("loc_414D2C: jmp loc_414E47;");
    asm("loc_414D31: mov 4(%ecx),%esi;");
    asm("loc_414D34: cmp 8(%esi),%ecx;");
    asm("loc_414D37: jne loc_414D3E;");
    asm("loc_414D39: mov %edx,8(%esi);");
    asm("loc_414D3C: jmp loc_414D40;");
    asm("loc_414D3E: mov %edx,(%esi);");
    asm("loc_414D40: mov %ecx,8(%edx);");
    asm("loc_414D43: mov %edx,4(%ecx);");
    asm("loc_414D46: mov 4(%eax),%ecx;");
    asm("loc_414D49: mov 8(%ecx),%ecx;");
    asm("loc_414D4C: mov 4(%eax),%edx;");
    asm("loc_414D4F: mov 0x20(%edx),%dl;");
    asm("loc_414D52: mov %dl,0x20(%ecx);");
    asm("loc_414D55: mov 4(%eax),%edx;");
    asm("loc_414D58: mov %bl,0x20(%edx);");
    asm("loc_414D5B: mov 8(%ecx),%ecx;");
    asm("loc_414D5E: mov %bl,0x20(%ecx);");
    asm("loc_414D61: mov 4(%eax),%ecx;");
    asm("loc_414D64: mov 8(%ecx),%edx;");
    asm("loc_414D67: mov (%edx),%esi;");
    asm("loc_414D69: mov %esi,8(%ecx);");
    asm("loc_414D6C: mov (%edx),%esi;");
    asm("loc_414D6E: cmp 8(%edi),%esi;");
    asm("loc_414D71: je loc_414D76;");
    asm("loc_414D73: mov %ecx,4(%esi);");
    asm("loc_414D76: mov 4(%ecx),%esi;");
    asm("loc_414D79: mov %esi,4(%edx);");
    asm("loc_414D7C: mov 4(%edi),%esi;");
    asm("loc_414D7F: cmp 4(%esi),%ecx;");
    asm("loc_414D82: jne loc_414D8E;");
    asm("loc_414D84: mov %edx,4(%esi);");
    asm("loc_414D87: mov %ecx,(%edx);");
    asm("loc_414D89: jmp loc_414E44;");
    asm("loc_414D8E: mov 4(%ecx),%esi;");
    asm("loc_414D91: cmp (%esi),%ecx;");
    asm("loc_414D93: jne loc_414D9E;");
    asm("loc_414D95: mov %edx,(%esi);");
    asm("loc_414D97: mov %ecx,(%edx);");
    asm("loc_414D99: jmp loc_414E44;");
    asm("loc_414D9E: mov %edx,8(%esi);");
    asm("loc_414DA1: mov %ecx,(%edx);");
    asm("loc_414DA3: jmp loc_414E44;");
    asm("loc_414DA8: mov (%ecx),%edx;");
    asm("loc_414DAA: cmp %bl,0x20(%edx);");
    asm("loc_414DAD: jne loc_414DF6;");
    asm("loc_414DAF: mov 8(%ecx),%edx;");
    asm("loc_414DB2: mov %bl,0x20(%edx);");
    asm("loc_414DB5: mov 8(%ecx),%edx;");
    asm("loc_414DB8: movb $0,0x20(%ecx);");
    asm("loc_414DBC: mov (%edx),%esi;");
    asm("loc_414DBE: mov %esi,8(%ecx);");
    asm("loc_414DC1: mov (%edx),%esi;");
    asm("loc_414DC3: cmp 8(%edi),%esi;");
    asm("loc_414DC6: je loc_414DCB;");
    asm("loc_414DC8: mov %ecx,4(%esi);");
    asm("loc_414DCB: mov 4(%ecx),%esi;");
    asm("loc_414DCE: mov %esi,4(%edx);");
    asm("loc_414DD1: mov 4(%edi),%esi;");
    asm("loc_414DD4: cmp 4(%esi),%ecx;");
    asm("loc_414DD7: jne loc_414DDE;");
    asm("loc_414DD9: mov %edx,4(%esi);");
    asm("loc_414DDC: jmp loc_414DEC;");
    asm("loc_414DDE: mov 4(%ecx),%esi;");
    asm("loc_414DE1: cmp (%esi),%ecx;");
    asm("loc_414DE3: jne loc_414DE9;");
    asm("loc_414DE5: mov %edx,(%esi);");
    asm("loc_414DE7: jmp loc_414DEC;");
    asm("loc_414DE9: mov %edx,8(%esi);");
    asm("loc_414DEC: mov %ecx,(%edx);");
    asm("loc_414DEE: mov %edx,4(%ecx);");
    asm("loc_414DF1: mov 4(%eax),%ecx;");
    asm("loc_414DF4: mov (%ecx),%ecx;");
    asm("loc_414DF6: mov 4(%eax),%edx;");
    asm("loc_414DF9: mov 0x20(%edx),%dl;");
    asm("loc_414DFC: mov %dl,0x20(%ecx);");
    asm("loc_414DFF: mov 4(%eax),%edx;");
    asm("loc_414E02: mov %bl,0x20(%edx);");
    asm("loc_414E05: mov (%ecx),%ecx;");
    asm("loc_414E07: mov %bl,0x20(%ecx);");
    asm("loc_414E0A: mov 4(%eax),%ecx;");
    asm("loc_414E0D: mov (%ecx),%edx;");
    asm("loc_414E0F: mov 8(%edx),%esi;");
    asm("loc_414E12: mov %esi,(%ecx);");
    asm("loc_414E14: mov 8(%edx),%esi;");
    asm("loc_414E17: cmp 8(%edi),%esi;");
    asm("loc_414E1A: je loc_414E1F;");
    asm("loc_414E1C: mov %ecx,4(%esi);");
    asm("loc_414E1F: mov 4(%ecx),%esi;");
    asm("loc_414E22: mov %esi,4(%edx);");
    asm("loc_414E25: mov 4(%edi),%esi;");
    asm("loc_414E28: cmp 4(%esi),%ecx;");
    asm("loc_414E2B: jne loc_414E32;");
    asm("loc_414E2D: mov %edx,4(%esi);");
    asm("loc_414E30: jmp loc_414E41;");
    asm("loc_414E32: mov 4(%ecx),%esi;");
    asm("loc_414E35: cmp 8(%esi),%ecx;");
    asm("loc_414E38: jne loc_414E3F;");
    asm("loc_414E3A: mov %edx,8(%esi);");
    asm("loc_414E3D: jmp loc_414E41;");
    asm("loc_414E3F: mov %edx,(%esi);");
    asm("loc_414E41: mov %ecx,8(%edx);");
    asm("loc_414E44: mov %edx,4(%ecx);");
    asm("loc_414E47: mov 0x10(%esp),%esi;");
    asm("loc_414E4B: mov %bl,0x20(%eax);");
    asm("loc_414E4E: lea 0xC(%esi),%ecx;");
    asm("loc_414E51: call _sub_414600;");
    asm("loc_414E56: push %esi;");
    asm("loc_414E57: call _sub_418978;");
    asm("loc_414E5C: mov 0x10(%edi),%eax;");
    asm("loc_414E5F: mov 0x20(%esp),%edx;");
    asm("loc_414E63: add $4,%esp;");
    asm("loc_414E66: dec %eax;");
    asm("loc_414E67: mov %eax,0x10(%edi);");
    asm("loc_414E6A: mov 0x18(%esp),%eax;");
    asm("loc_414E6E: pop %edi;");
    asm("loc_414E6F: pop %esi;");
    asm("loc_414E70: pop %ebp;");
    asm("loc_414E71: mov %edx,(%eax);");
    asm("loc_414E73: pop %ebx;");
    asm("loc_414E74: pop %ecx;");
    asm("loc_414E75: ret $8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_414E80() // _sub_414E80
{
    __DEBUG_ASM(414E80);
    // chunk 0x414E80 _sub_414E80
    asm("loc_414E80: push %ebx;");
    asm("loc_414E81: push %esi;");
    asm("loc_414E82: mov %ecx,%ebx;");
    asm("loc_414E84: mov 8(%ebx),%eax;");
    asm("loc_414E87: push %edi;");
    asm("loc_414E88: mov 0x10(%esp),%edi;");
    asm("loc_414E8C: cmp %eax,%edi;");
    asm("loc_414E8E: mov %edi,%esi;");
    asm("loc_414E90: je loc_414EB9;");
    asm("loc_414E92: mov 8(%esi),%eax;");
    asm("loc_414E95: push %eax;");
    asm("loc_414E96: mov %ebx,%ecx;");
    asm("loc_414E98: call _sub_414E80;");
    asm("loc_414E9D: mov (%esi),%esi;");
    asm("loc_414E9F: lea 0xC(%edi),%ecx;");
    asm("loc_414EA2: call _sub_414600;");
    asm("loc_414EA7: push %edi;");
    asm("loc_414EA8: call _sub_418978;");
    asm("loc_414EAD: mov 8(%ebx),%eax;");
    asm("loc_414EB0: add $4,%esp;");
    asm("loc_414EB3: cmp %eax,%esi;");
    asm("loc_414EB5: mov %esi,%edi;");
    asm("loc_414EB7: jne loc_414E92;");
    asm("loc_414EB9: pop %edi;");
    asm("loc_414EBA: pop %esi;");
    asm("loc_414EBB: pop %ebx;");
    asm("loc_414EBC: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_414EC0() // _sub_414EC0
{
    __DEBUG_ASM(414EC0);
    // chunk 0x414EC0 _sub_414EC0
    asm("loc_414EC0: push %ebx;");
    asm("loc_414EC1: push %esi;");
    asm("loc_414EC2: mov 0x10(%esp),%esi;");
    asm("loc_414EC6: mov 4(%esi),%eax;");
    asm("loc_414EC9: mov (%esi),%ebx;");
    asm("loc_414ECB: push %edi;");
    asm("loc_414ECC: mov %ecx,%edi;");
    asm("loc_414ECE: mov (%esi),%ecx;");
    asm("loc_414ED0: mov %ecx,(%eax);");
    asm("loc_414ED2: mov (%esi),%edx;");
    asm("loc_414ED4: mov 4(%esi),%eax;");
    asm("loc_414ED7: mov %eax,4(%edx);");
    asm("loc_414EDA: mov 8(%esi),%ecx;");
    asm("loc_414EDD: test %ecx,%ecx;");
    asm("loc_414EDF: je loc_414EEE;");
    asm("loc_414EE1: mov (%ecx),%edx;");
    asm("loc_414EE3: push $1;");
    asm("loc_414EE5: calll *(%edx);");
    asm("loc_414EE7: movl $0,8(%esi);");
    asm("loc_414EEE: push %esi;");
    asm("loc_414EEF: call _sub_418978;");
    asm("loc_414EF4: mov 8(%edi),%eax;");
    asm("loc_414EF7: add $4,%esp;");
    asm("loc_414EFA: dec %eax;");
    asm("loc_414EFB: mov %eax,8(%edi);");
    asm("loc_414EFE: mov 0x10(%esp),%eax;");
    asm("loc_414F02: pop %edi;");
    asm("loc_414F03: pop %esi;");
    asm("loc_414F04: mov %ebx,(%eax);");
    asm("loc_414F06: pop %ebx;");
    asm("loc_414F07: ret $8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_414F10() // _sub_414F10
{
    __DEBUG_ASM(414F10);
    // chunk 0x414F10 _sub_414F10
    asm("loc_414F10: mov %ecx,%eax;");
    asm("loc_414F12: mov 4(%esp),%ecx;");
    asm("loc_414F16: mov (%ecx),%edx;");
    asm("loc_414F18: mov 8(%esp),%ecx;");
    asm("loc_414F1C: mov %edx,(%eax);");
    asm("loc_414F1E: mov (%ecx),%dl;");
    asm("loc_414F20: mov %dl,4(%eax);");
    asm("loc_414F23: ret $8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_414F30() // _sub_414F30
{
    __DEBUG_ASM(414F30);
    // chunk 0x414F30 _sub_414F30
    asm("loc_414F30: push %ebx;");
    asm("loc_414F31: push %ebp;");
    asm("loc_414F32: push %esi;");
    asm("loc_414F33: push %edi;");
    asm("loc_414F34: push $0x24;");
    asm("loc_414F36: mov %ecx,%esi;");
    asm("loc_414F38: call _sub_418A9E;");
    asm("loc_414F3D: mov 0x20(%esp),%edi;");
    asm("loc_414F41: mov 0x24(%esp),%ebp;");
    asm("loc_414F45: mov %eax,%ebx;");
    asm("loc_414F47: mov %edi,4(%ebx);");
    asm("loc_414F4A: movb $0,0x20(%ebx);");
    asm("loc_414F4E: movb $0,0x21(%ebx);");
    asm("loc_414F52: mov 8(%esi),%eax;");
    asm("loc_414F55: mov %eax,(%ebx);");
    asm("loc_414F57: mov 8(%esi),%ecx;");
    asm("loc_414F5A: lea 0xC(%ebx),%edx;");
    asm("loc_414F5D: push %ebp;");
    asm("loc_414F5E: push %edx;");
    asm("loc_414F5F: mov %ecx,8(%ebx);");
    asm("loc_414F62: call _sub_415450;");
    asm("loc_414F67: mov 0x10(%esi),%ecx;");
    asm("loc_414F6A: mov 4(%esi),%eax;");
    asm("loc_414F6D: add $0xC,%esp;");
    asm("loc_414F70: inc %ecx;");
    asm("loc_414F71: cmp %eax,%edi;");
    asm("loc_414F73: mov %ecx,0x10(%esi);");
    asm("loc_414F76: je loc_414FA0;");
    asm("loc_414F78: mov 0x18(%esp),%eax;");
    asm("loc_414F7C: cmp 8(%esi),%eax;");
    asm("loc_414F7F: jne loc_414FA0;");
    asm("loc_414F81: lea 0xC(%edi),%ecx;");
    asm("loc_414F84: push %ecx;");
    asm("loc_414F85: mov %ebp,%ecx;");
    asm("loc_414F87: call _sub_4155C0;");
    asm("loc_414F8C: test %eax,%eax;");
    asm("loc_414F8E: jl loc_414FA0;");
    asm("loc_414F90: mov %ebx,8(%edi);");
    asm("loc_414F93: mov 4(%esi),%eax;");
    asm("loc_414F96: cmp 8(%eax),%edi;");
    asm("loc_414F99: jne loc_414FBA;");
    asm("loc_414F9B: mov %ebx,8(%eax);");
    asm("loc_414F9E: jmp loc_414FBA;");
    asm("loc_414FA0: mov %ebx,(%edi);");
    asm("loc_414FA2: mov 4(%esi),%eax;");
    asm("loc_414FA5: cmp %eax,%edi;");
    asm("loc_414FA7: jne loc_414FB4;");
    asm("loc_414FA9: mov %ebx,4(%eax);");
    asm("loc_414FAC: mov 4(%esi),%edx;");
    asm("loc_414FAF: mov %ebx,8(%edx);");
    asm("loc_414FB2: jmp loc_414FBA;");
    asm("loc_414FB4: cmp (%eax),%edi;");
    asm("loc_414FB6: jne loc_414FBA;");
    asm("loc_414FB8: mov %ebx,(%eax);");
    asm("loc_414FBA: mov 4(%esi),%ecx;");
    asm("loc_414FBD: cmp 4(%ecx),%ebx;");
    asm("loc_414FC0: mov %ebx,%eax;");
    asm("loc_414FC2: je loc_415165;");
    asm("loc_414FC8: mov 4(%eax),%ecx;");
    asm("loc_414FCB: mov 0x20(%ecx),%dl;");
    asm("loc_414FCE: test %dl,%dl;");
    asm("loc_414FD0: jne loc_415165;");
    asm("loc_414FD6: mov 4(%ecx),%edi;");
    asm("loc_414FD9: mov (%edi),%edx;");
    asm("loc_414FDB: cmp %edx,%ecx;");
    asm("loc_414FDD: jne loc_4150A7;");
    asm("loc_414FE3: mov 8(%edi),%edx;");
    asm("loc_414FE6: cmpb $0,0x20(%edx);");
    asm("loc_414FEA: jne loc_415009;");
    asm("loc_414FEC: movb $1,0x20(%ecx);");
    asm("loc_414FF0: movb $1,0x20(%edx);");
    asm("loc_414FF4: mov 4(%eax),%edx;");
    asm("loc_414FF7: mov 4(%edx),%ecx;");
    asm("loc_414FFA: movb $0,0x20(%ecx);");
    asm("loc_414FFE: mov 4(%eax),%edx;");
    asm("loc_415001: mov 4(%edx),%eax;");
    asm("loc_415004: jmp loc_415159;");
    asm("loc_415009: cmp 8(%ecx),%eax;");
    asm("loc_41500C: jne loc_415048;");
    asm("loc_41500E: mov %ecx,%eax;");
    asm("loc_415010: mov 8(%eax),%ecx;");
    asm("loc_415013: mov (%ecx),%edx;");
    asm("loc_415015: mov %edx,8(%eax);");
    asm("loc_415018: mov (%ecx),%edx;");
    asm("loc_41501A: cmp 8(%esi),%edx;");
    asm("loc_41501D: je loc_415022;");
    asm("loc_41501F: mov %eax,4(%edx);");
    asm("loc_415022: mov 4(%eax),%edx;");
    asm("loc_415025: mov %edx,4(%ecx);");
    asm("loc_415028: mov 4(%esi),%edx;");
    asm("loc_41502B: cmp 4(%edx),%eax;");
    asm("loc_41502E: jne loc_415035;");
    asm("loc_415030: mov %ecx,4(%edx);");
    asm("loc_415033: jmp loc_415043;");
    asm("loc_415035: mov 4(%eax),%edx;");
    asm("loc_415038: cmp (%edx),%eax;");
    asm("loc_41503A: jne loc_415040;");
    asm("loc_41503C: mov %ecx,(%edx);");
    asm("loc_41503E: jmp loc_415043;");
    asm("loc_415040: mov %ecx,8(%edx);");
    asm("loc_415043: mov %eax,(%ecx);");
    asm("loc_415045: mov %ecx,4(%eax);");
    asm("loc_415048: mov 4(%eax),%ecx;");
    asm("loc_41504B: movb $1,0x20(%ecx);");
    asm("loc_41504F: mov 4(%eax),%edx;");
    asm("loc_415052: mov 4(%edx),%ecx;");
    asm("loc_415055: movb $0,0x20(%ecx);");
    asm("loc_415059: mov 4(%eax),%edx;");
    asm("loc_41505C: mov 4(%edx),%ecx;");
    asm("loc_41505F: mov (%ecx),%edx;");
    asm("loc_415061: mov 8(%edx),%edi;");
    asm("loc_415064: mov %edi,(%ecx);");
    asm("loc_415066: mov 8(%edx),%edi;");
    asm("loc_415069: cmp 8(%esi),%edi;");
    asm("loc_41506C: je loc_415071;");
    asm("loc_41506E: mov %ecx,4(%edi);");
    asm("loc_415071: mov 4(%ecx),%edi;");
    asm("loc_415074: mov %edi,4(%edx);");
    asm("loc_415077: mov 4(%esi),%edi;");
    asm("loc_41507A: cmp 4(%edi),%ecx;");
    asm("loc_41507D: jne loc_41508A;");
    asm("loc_41507F: mov %edx,4(%edi);");
    asm("loc_415082: mov %ecx,8(%edx);");
    asm("loc_415085: jmp loc_415156;");
    asm("loc_41508A: mov 4(%ecx),%edi;");
    asm("loc_41508D: cmp 8(%edi),%ecx;");
    asm("loc_415090: jne loc_41509D;");
    asm("loc_415092: mov %edx,8(%edi);");
    asm("loc_415095: mov %ecx,8(%edx);");
    asm("loc_415098: jmp loc_415156;");
    asm("loc_41509D: mov %edx,(%edi);");
    asm("loc_41509F: mov %ecx,8(%edx);");
    asm("loc_4150A2: jmp loc_415156;");
    asm("loc_4150A7: cmpb $0,0x20(%edx);");
    asm("loc_4150AB: jne loc_4150CA;");
    asm("loc_4150AD: movb $1,0x20(%ecx);");
    asm("loc_4150B1: movb $1,0x20(%edx);");
    asm("loc_4150B5: mov 4(%eax),%ecx;");
    asm("loc_4150B8: mov 4(%ecx),%edx;");
    asm("loc_4150BB: movb $0,0x20(%edx);");
    asm("loc_4150BF: mov 4(%eax),%eax;");
    asm("loc_4150C2: mov 4(%eax),%eax;");
    asm("loc_4150C5: jmp loc_415159;");
    asm("loc_4150CA: cmp (%ecx),%eax;");
    asm("loc_4150CC: jne loc_41510A;");
    asm("loc_4150CE: mov %ecx,%eax;");
    asm("loc_4150D0: mov (%eax),%ecx;");
    asm("loc_4150D2: mov 8(%ecx),%edx;");
    asm("loc_4150D5: mov %edx,(%eax);");
    asm("loc_4150D7: mov 8(%ecx),%edx;");
    asm("loc_4150DA: cmp 8(%esi),%edx;");
    asm("loc_4150DD: je loc_4150E2;");
    asm("loc_4150DF: mov %eax,4(%edx);");
    asm("loc_4150E2: mov 4(%eax),%edx;");
    asm("loc_4150E5: mov %edx,4(%ecx);");
    asm("loc_4150E8: mov 4(%esi),%edx;");
    asm("loc_4150EB: cmp 4(%edx),%eax;");
    asm("loc_4150EE: jne loc_4150F5;");
    asm("loc_4150F0: mov %ecx,4(%edx);");
    asm("loc_4150F3: jmp loc_415104;");
    asm("loc_4150F5: mov 4(%eax),%edx;");
    asm("loc_4150F8: cmp 8(%edx),%eax;");
    asm("loc_4150FB: jne loc_415102;");
    asm("loc_4150FD: mov %ecx,8(%edx);");
    asm("loc_415100: jmp loc_415104;");
    asm("loc_415102: mov %ecx,(%edx);");
    asm("loc_415104: mov %eax,8(%ecx);");
    asm("loc_415107: mov %ecx,4(%eax);");
    asm("loc_41510A: mov 4(%eax),%ecx;");
    asm("loc_41510D: movb $1,0x20(%ecx);");
    asm("loc_415111: mov 4(%eax),%edx;");
    asm("loc_415114: mov 4(%edx),%ecx;");
    asm("loc_415117: movb $0,0x20(%ecx);");
    asm("loc_41511B: mov 4(%eax),%edx;");
    asm("loc_41511E: mov 4(%edx),%ecx;");
    asm("loc_415121: mov 8(%ecx),%edx;");
    asm("loc_415124: mov (%edx),%edi;");
    asm("loc_415126: mov %edi,8(%ecx);");
    asm("loc_415129: mov (%edx),%edi;");
    asm("loc_41512B: cmp 8(%esi),%edi;");
    asm("loc_41512E: je loc_415133;");
    asm("loc_415130: mov %ecx,4(%edi);");
    asm("loc_415133: mov 4(%ecx),%edi;");
    asm("loc_415136: mov %edi,4(%edx);");
    asm("loc_415139: mov 4(%esi),%edi;");
    asm("loc_41513C: cmp 4(%edi),%ecx;");
    asm("loc_41513F: jne loc_415146;");
    asm("loc_415141: mov %edx,4(%edi);");
    asm("loc_415144: jmp loc_415154;");
    asm("loc_415146: mov 4(%ecx),%edi;");
    asm("loc_415149: cmp (%edi),%ecx;");
    asm("loc_41514B: jne loc_415151;");
    asm("loc_41514D: mov %edx,(%edi);");
    asm("loc_41514F: jmp loc_415154;");
    asm("loc_415151: mov %edx,8(%edi);");
    asm("loc_415154: mov %ecx,(%edx);");
    asm("loc_415156: mov %edx,4(%ecx);");
    asm("loc_415159: mov 4(%esi),%ecx;");
    asm("loc_41515C: cmp 4(%ecx),%eax;");
    asm("loc_41515F: jne loc_414FC8;");
    asm("loc_415165: mov 4(%esi),%edx;");
    asm("loc_415168: mov 4(%edx),%eax;");
    asm("loc_41516B: pop %edi;");
    asm("loc_41516C: movb $1,0x20(%eax);");
    asm("loc_415170: mov 0x10(%esp),%eax;");
    asm("loc_415174: pop %esi;");
    asm("loc_415175: pop %ebp;");
    asm("loc_415176: mov %ebx,(%eax);");
    asm("loc_415178: pop %ebx;");
    asm("loc_415179: ret $0x10;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_415180() // _sub_415180
{
    __DEBUG_ASM(415180);
    // chunk 0x415180 _sub_415180
    asm("loc_415180: sub $8,%esp;");
    asm("loc_415183: mov 4(%ecx),%eax;");
    asm("loc_415186: mov 8(%ecx),%edx;");
    asm("loc_415189: push %esi;");
    asm("loc_41518A: mov 4(%eax),%esi;");
    asm("loc_41518D: cmp %edx,%esi;");
    asm("loc_41518F: mov %ecx,8(%esp);");
    asm("loc_415193: mov %eax,4(%esp);");
    asm("loc_415197: je loc_4151F9;");
    asm("loc_415199: push %ebx;");
    asm("loc_41519A: push %ebp;");
    asm("loc_41519B: mov _import_41B8FC,%ebp;");
    asm("loc_4151A1: push %edi;");
    asm("loc_4151A2: mov 0x1C(%esp),%eax;");
    asm("loc_4151A6: mov 8(%eax),%ebx;");
    asm("loc_4151A9: mov 4(%eax),%eax;");
    asm("loc_4151AC: test %eax,%eax;");
    asm("loc_4151AE: mov $_data_41C3F4,%edx;");
    asm("loc_4151B3: je loc_4151B7;");
    asm("loc_4151B5: mov %eax,%edx;");
    asm("loc_4151B7: mov 0x14(%esi),%edi;");
    asm("loc_4151BA: cmp %ebx,%edi;");
    asm("loc_4151BC: mov %edi,%ecx;");
    asm("loc_4151BE: jb loc_4151C2;");
    asm("loc_4151C0: mov %ebx,%ecx;");
    asm("loc_4151C2: mov 0x10(%esi),%eax;");
    asm("loc_4151C5: push %ecx;");
    asm("loc_4151C6: push %edx;");
    asm("loc_4151C7: push %eax;");
    asm("loc_4151C8: call *%ebp;");
    asm("loc_4151CA: add $0xC,%esp;");
    asm("loc_4151CD: test %eax,%eax;");
    asm("loc_4151CF: jne loc_4151DC;");
    asm("loc_4151D1: cmp %ebx,%edi;");
    asm("loc_4151D3: jb loc_4151DE;");
    asm("loc_4151D5: cmp %ebx,%edi;");
    asm("loc_4151D7: setne %al;");
    asm("loc_4151DA: test %eax,%eax;");
    asm("loc_4151DC: jge loc_4151E3;");
    asm("loc_4151DE: mov 8(%esi),%esi;");
    asm("loc_4151E1: jmp loc_4151E9;");
    asm("loc_4151E3: mov %esi,0x10(%esp);");
    asm("loc_4151E7: mov (%esi),%esi;");
    asm("loc_4151E9: mov 0x14(%esp),%eax;");
    asm("loc_4151ED: cmp 8(%eax),%esi;");
    asm("loc_4151F0: jne loc_4151A2;");
    asm("loc_4151F2: mov 0x10(%esp),%eax;");
    asm("loc_4151F6: pop %edi;");
    asm("loc_4151F7: pop %ebp;");
    asm("loc_4151F8: pop %ebx;");
    asm("loc_4151F9: pop %esi;");
    asm("loc_4151FA: add $8,%esp;");
    asm("loc_4151FD: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_415200() // _sub_415200
{
    __DEBUG_ASM(415200);
    // chunk 0x415200 _sub_415200
    asm("loc_415200: mov 4(%esp),%edx;");
    asm("loc_415204: mov 8(%edx),%eax;");
    asm("loc_415207: push %esi;");
    asm("loc_415208: mov (%eax),%esi;");
    asm("loc_41520A: mov %esi,8(%edx);");
    asm("loc_41520D: mov (%eax),%esi;");
    asm("loc_41520F: cmp 8(%ecx),%esi;");
    asm("loc_415212: je loc_415217;");
    asm("loc_415214: mov %edx,4(%esi);");
    asm("loc_415217: mov 4(%edx),%esi;");
    asm("loc_41521A: mov %esi,4(%eax);");
    asm("loc_41521D: mov 4(%ecx),%ecx;");
    asm("loc_415220: cmp 4(%ecx),%edx;");
    asm("loc_415223: jne loc_415231;");
    asm("loc_415225: mov %eax,4(%ecx);");
    asm("loc_415228: mov %edx,(%eax);");
    asm("loc_41522A: mov %eax,4(%edx);");
    asm("loc_41522D: pop %esi;");
    asm("loc_41522E: ret $4;");
    asm("loc_415231: mov 4(%edx),%ecx;");
    asm("loc_415234: cmp (%ecx),%edx;");
    asm("loc_415236: jne loc_415243;");
    asm("loc_415238: mov %eax,(%ecx);");
    asm("loc_41523A: mov %edx,(%eax);");
    asm("loc_41523C: mov %eax,4(%edx);");
    asm("loc_41523F: pop %esi;");
    asm("loc_415240: ret $4;");
    asm("loc_415243: mov %eax,8(%ecx);");
    asm("loc_415246: mov %edx,(%eax);");
    asm("loc_415248: mov %eax,4(%edx);");
    asm("loc_41524B: pop %esi;");
    asm("loc_41524C: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_415250() // _sub_415250
{
    __DEBUG_ASM(415250);
    // chunk 0x415250 _sub_415250
    asm("loc_415250: mov 4(%esp),%edx;");
    asm("loc_415254: mov (%edx),%eax;");
    asm("loc_415256: push %esi;");
    asm("loc_415257: mov 8(%eax),%esi;");
    asm("loc_41525A: mov %esi,(%edx);");
    asm("loc_41525C: mov 8(%eax),%esi;");
    asm("loc_41525F: cmp 8(%ecx),%esi;");
    asm("loc_415262: je loc_415267;");
    asm("loc_415264: mov %edx,4(%esi);");
    asm("loc_415267: mov 4(%edx),%esi;");
    asm("loc_41526A: mov %esi,4(%eax);");
    asm("loc_41526D: mov 4(%ecx),%ecx;");
    asm("loc_415270: cmp 4(%ecx),%edx;");
    asm("loc_415273: jne loc_415282;");
    asm("loc_415275: mov %eax,4(%ecx);");
    asm("loc_415278: mov %edx,8(%eax);");
    asm("loc_41527B: mov %eax,4(%edx);");
    asm("loc_41527E: pop %esi;");
    asm("loc_41527F: ret $4;");
    asm("loc_415282: mov 4(%edx),%ecx;");
    asm("loc_415285: cmp 8(%ecx),%edx;");
    asm("loc_415288: jne loc_415297;");
    asm("loc_41528A: mov %eax,8(%ecx);");
    asm("loc_41528D: mov %edx,8(%eax);");
    asm("loc_415290: mov %eax,4(%edx);");
    asm("loc_415293: pop %esi;");
    asm("loc_415294: ret $4;");
    asm("loc_415297: mov %eax,(%ecx);");
    asm("loc_415299: mov %edx,8(%eax);");
    asm("loc_41529C: mov %eax,4(%edx);");
    asm("loc_41529F: pop %esi;");
    asm("loc_4152A0: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4152B0() // _sub_4152B0
{
    __DEBUG_ASM(4152B0);
    // chunk 0x4152B0 _sub_4152B0
    asm("loc_4152B0: push $0x24;");
    asm("loc_4152B2: call _sub_418A9E;");
    asm("loc_4152B7: mov 8(%esp),%ecx;");
    asm("loc_4152BB: mov 0xC(%esp),%dl;");
    asm("loc_4152BF: add $4,%esp;");
    asm("loc_4152C2: mov %ecx,4(%eax);");
    asm("loc_4152C5: mov %dl,0x20(%eax);");
    asm("loc_4152C8: movb $0,0x21(%eax);");
    asm("loc_4152CC: ret $8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4152D0() // _sub_4152D0
{
    __DEBUG_ASM(4152D0);
    // chunk 0x4152D0 _sub_4152D0
    asm("loc_4152D0: sub $8,%esp;");
    asm("loc_4152D3: mov 4(%ecx),%eax;");
    asm("loc_4152D6: mov 8(%ecx),%edx;");
    asm("loc_4152D9: push %edi;");
    asm("loc_4152DA: mov 4(%eax),%edi;");
    asm("loc_4152DD: cmp %edx,%edi;");
    asm("loc_4152DF: mov %ecx,8(%esp);");
    asm("loc_4152E3: mov %eax,4(%esp);");
    asm("loc_4152E7: je loc_415347;");
    asm("loc_4152E9: push %ebx;");
    asm("loc_4152EA: push %ebp;");
    asm("loc_4152EB: mov 0x18(%esp),%ebp;");
    asm("loc_4152EF: push %esi;");
    asm("loc_4152F0: mov 0x10(%edi),%eax;");
    asm("loc_4152F3: test %eax,%eax;");
    asm("loc_4152F5: mov 0x14(%edi),%ebx;");
    asm("loc_4152F8: mov $_data_41C3F4,%edx;");
    asm("loc_4152FD: je loc_415301;");
    asm("loc_4152FF: mov %eax,%edx;");
    asm("loc_415301: mov 8(%ebp),%esi;");
    asm("loc_415304: cmp %ebx,%esi;");
    asm("loc_415306: mov %esi,%ecx;");
    asm("loc_415308: jb loc_41530C;");
    asm("loc_41530A: mov %ebx,%ecx;");
    asm("loc_41530C: mov 4(%ebp),%eax;");
    asm("loc_41530F: push %ecx;");
    asm("loc_415310: push %edx;");
    asm("loc_415311: push %eax;");
    asm("loc_415312: calll *_import_41B8FC;");
    asm("loc_415318: add $0xC,%esp;");
    asm("loc_41531B: test %eax,%eax;");
    asm("loc_41531D: jne loc_41532A;");
    asm("loc_41531F: cmp %ebx,%esi;");
    asm("loc_415321: jb loc_41532C;");
    asm("loc_415323: cmp %ebx,%esi;");
    asm("loc_415325: setne %al;");
    asm("loc_415328: test %eax,%eax;");
    asm("loc_41532A: jge loc_415334;");
    asm("loc_41532C: mov %edi,0x10(%esp);");
    asm("loc_415330: mov (%edi),%edi;");
    asm("loc_415332: jmp loc_415337;");
    asm("loc_415334: mov 8(%edi),%edi;");
    asm("loc_415337: mov 0x14(%esp),%eax;");
    asm("loc_41533B: cmp 8(%eax),%edi;");
    asm("loc_41533E: jne loc_4152F0;");
    asm("loc_415340: mov 0x10(%esp),%eax;");
    asm("loc_415344: pop %esi;");
    asm("loc_415345: pop %ebp;");
    asm("loc_415346: pop %ebx;");
    asm("loc_415347: pop %edi;");
    asm("loc_415348: add $8,%esp;");
    asm("loc_41534B: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_415350() // _sub_415350
{
    __DEBUG_ASM(415350);
    // chunk 0x415350 _sub_415350
    asm("loc_415350: mov (%ecx),%eax;");
    asm("loc_415352: mov 0x20(%eax),%dl;");
    asm("loc_415355: test %dl,%dl;");
    asm("loc_415357: push %ebx;");
    asm("loc_415358: jne loc_415369;");
    asm("loc_41535A: mov 4(%eax),%edx;");
    asm("loc_41535D: cmp %eax,4(%edx);");
    asm("loc_415360: jne loc_415369;");
    asm("loc_415362: mov 8(%eax),%eax;");
    asm("loc_415365: mov %eax,(%ecx);");
    asm("loc_415367: pop %ebx;");
    asm("loc_415368: ret;");
    asm("loc_415369: mov (%eax),%edx;");
    asm("loc_41536B: mov 0x21(%edx),%bl;");
    asm("loc_41536E: test %bl,%bl;");
    asm("loc_415370: jne loc_415390;");
    asm("loc_415372: mov 8(%edx),%eax;");
    asm("loc_415375: mov 0x21(%eax),%bl;");
    asm("loc_415378: test %bl,%bl;");
    asm("loc_41537A: jne loc_41538C;");
    asm("loc_41537C: lea (%esp),%esp;");
    asm("loc_415380: mov %eax,%edx;");
    asm("loc_415382: mov 8(%edx),%eax;");
    asm("loc_415385: mov 0x21(%eax),%bl;");
    asm("loc_415388: test %bl,%bl;");
    asm("loc_41538A: je loc_415380;");
    asm("loc_41538C: mov %edx,(%ecx);");
    asm("loc_41538E: pop %ebx;");
    asm("loc_41538F: ret;");
    asm("loc_415390: mov 4(%eax),%eax;");
    asm("loc_415393: mov (%ecx),%edx;");
    asm("loc_415395: cmp (%eax),%edx;");
    asm("loc_415397: jne loc_4153AB;");
    asm("loc_415399: lea (%esp),%esp;");
    asm("loc_4153A0: mov %eax,(%ecx);");
    asm("loc_4153A2: mov 4(%eax),%eax;");
    asm("loc_4153A5: mov (%ecx),%edx;");
    asm("loc_4153A7: cmp (%eax),%edx;");
    asm("loc_4153A9: je loc_4153A0;");
    asm("loc_4153AB: mov %eax,(%ecx);");
    asm("loc_4153AD: pop %ebx;");
    asm("loc_4153AE: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4153B0() // _sub_4153B0
{
    __DEBUG_ASM(4153B0);
    // chunk 0x4153B0 _sub_4153B0
    asm("loc_4153B0: mov (%ecx),%eax;");
    asm("loc_4153B2: mov 8(%eax),%edx;");
    asm("loc_4153B5: push %ebx;");
    asm("loc_4153B6: mov 0x21(%edx),%bl;");
    asm("loc_4153B9: test %bl,%bl;");
    asm("loc_4153BB: jne loc_4153D5;");
    asm("loc_4153BD: mov (%edx),%eax;");
    asm("loc_4153BF: mov 0x21(%eax),%bl;");
    asm("loc_4153C2: test %bl,%bl;");
    asm("loc_4153C4: jne loc_4153D1;");
    asm("loc_4153C6: mov %eax,%edx;");
    asm("loc_4153C8: mov (%edx),%eax;");
    asm("loc_4153CA: mov 0x21(%eax),%bl;");
    asm("loc_4153CD: test %bl,%bl;");
    asm("loc_4153CF: je loc_4153C6;");
    asm("loc_4153D1: mov %edx,(%ecx);");
    asm("loc_4153D3: pop %ebx;");
    asm("loc_4153D4: ret;");
    asm("loc_4153D5: mov 4(%eax),%eax;");
    asm("loc_4153D8: mov (%ecx),%edx;");
    asm("loc_4153DA: cmp 8(%eax),%edx;");
    asm("loc_4153DD: jne loc_4153EC;");
    asm("loc_4153DF: nop;");
    asm("loc_4153E0: mov %eax,(%ecx);");
    asm("loc_4153E2: mov 4(%eax),%eax;");
    asm("loc_4153E5: mov (%ecx),%edx;");
    asm("loc_4153E7: cmp 8(%eax),%edx;");
    asm("loc_4153EA: je loc_4153E0;");
    asm("loc_4153EC: mov (%ecx),%edx;");
    asm("loc_4153EE: cmp %eax,8(%edx);");
    asm("loc_4153F1: je loc_4153F5;");
    asm("loc_4153F3: mov %eax,(%ecx);");
    asm("loc_4153F5: pop %ebx;");
    asm("loc_4153F6: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_415400() // _sub_415400
{
    __DEBUG_ASM(415400);
    // chunk 0x415400 _sub_415400
    asm("loc_415400: push $0xFFFFFFFF;");
    asm("loc_415402: push $_sub_41A9D1;");
    asm("loc_415407: mov %fs:0,%eax;");
    asm("loc_41540D: push %eax;");
    asm("loc_41540E: mov %esp,%fs:0;");
    asm("loc_415415: push %ecx;");
    asm("loc_415416: push %esi;");
    asm("loc_415417: mov 0x18(%esp),%esi;");
    asm("loc_41541B: mov %esi,4(%esp);");
    asm("loc_41541F: test %esi,%esi;");
    asm("loc_415421: movl $0,0x10(%esp);");
    asm("loc_415429: je loc_415438;");
    asm("loc_41542B: mov 0x1C(%esp),%eax;");
    asm("loc_41542F: mov (%eax),%ecx;");
    asm("loc_415431: mov (%ecx),%edx;");
    asm("loc_415433: calll *0x1C(%edx);");
    asm("loc_415436: mov %eax,(%esi);");
    asm("loc_415438: mov 8(%esp),%ecx;");
    asm("loc_41543C: pop %esi;");
    asm("loc_41543D: mov %ecx,%fs:0;");
    asm("loc_415444: add $0x10,%esp;");
    asm("loc_415447: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_415450() // _sub_415450
{
    __DEBUG_ASM(415450);
    // chunk 0x415450 _sub_415450
    asm("loc_415450: push $0xFFFFFFFF;");
    asm("loc_415452: push $_sub_41A9F1;");
    asm("loc_415457: mov %fs:0,%eax;");
    asm("loc_41545D: push %eax;");
    asm("loc_41545E: mov %esp,%fs:0;");
    asm("loc_415465: push %ecx;");
    asm("loc_415466: push %esi;");
    asm("loc_415467: mov 0x18(%esp),%esi;");
    asm("loc_41546B: mov %esi,4(%esp);");
    asm("loc_41546F: xor %ecx,%ecx;");
    asm("loc_415471: cmp %ecx,%esi;");
    asm("loc_415473: mov %ecx,0x10(%esp);");
    asm("loc_415477: je loc_415584;");
    asm("loc_41547D: push %ebp;");
    asm("loc_41547E: mov 0x20(%esp),%ebp;");
    asm("loc_415482: mov (%ebp),%al;");
    asm("loc_415485: mov %al,(%esi);");
    asm("loc_415487: mov %ecx,4(%esi);");
    asm("loc_41548A: mov %ecx,8(%esi);");
    asm("loc_41548D: mov %ecx,0xC(%esi);");
    asm("loc_415490: mov 8(%ebp),%eax;");
    asm("loc_415493: push %edi;");
    asm("loc_415494: mov %eax,%edi;");
    asm("loc_415496: cmp $0xFFFFFFFF,%edi;");
    asm("loc_415499: jbe loc_41549E;");
    asm("loc_41549B: or $0xFFFFFFFF,%edi;");
    asm("loc_41549E: cmp %ebp,%esi;");
    asm("loc_4154A0: jne loc_415505;");
    asm("loc_4154A2: push %ebx;");
    asm("loc_4154A3: or $0xFFFFFFFF,%ebx;");
    asm("loc_4154A6: cmp %ecx,%edi;");
    asm("loc_4154A8: jbe loc_4154B0;");
    asm("loc_4154AA: calll *_import_41B8D0;");
    asm("loc_4154B0: mov %esi,%ecx;");
    asm("loc_4154B2: call _sub_4056D0;");
    asm("loc_4154B7: mov 8(%esi),%eax;");
    asm("loc_4154BA: sub %edi,%eax;");
    asm("loc_4154BC: cmp $0xFFFFFFFF,%eax;");
    asm("loc_4154BF: jae loc_4154C7;");
    asm("loc_4154C1: mov %eax,%ebx;");
    asm("loc_4154C3: test %ebx,%ebx;");
    asm("loc_4154C5: jbe loc_4154FB;");
    asm("loc_4154C7: mov 4(%esi),%ecx;");
    asm("loc_4154CA: sub %ebx,%eax;");
    asm("loc_4154CC: push %eax;");
    asm("loc_4154CD: lea (%ebx,%edi),%edx;");
    asm("loc_4154D0: lea (%ecx,%edx,2),%eax;");
    asm("loc_4154D3: push %eax;");
    asm("loc_4154D4: lea (%ecx,%edi,2),%ecx;");
    asm("loc_4154D7: push %ecx;");
    asm("loc_4154D8: call _sub_403E30;");
    asm("loc_4154DD: mov 8(%esi),%edi;");
    asm("loc_4154E0: add $0xC,%esp;");
    asm("loc_4154E3: push $0;");
    asm("loc_4154E5: sub %ebx,%edi;");
    asm("loc_4154E7: push %edi;");
    asm("loc_4154E8: mov %esi,%ecx;");
    asm("loc_4154EA: call _sub_4044B0;");
    asm("loc_4154EF: test %al,%al;");
    asm("loc_4154F1: je loc_4154FB;");
    asm("loc_4154F3: push %edi;");
    asm("loc_4154F4: mov %esi,%ecx;");
    asm("loc_4154F6: call _sub_404490;");
    asm("loc_4154FB: mov %esi,%ecx;");
    asm("loc_4154FD: call _sub_4056D0;");
    asm("loc_415502: pop %ebx;");
    asm("loc_415503: jmp loc_41557C;");
    asm("loc_415505: cmp %ecx,%edi;");
    asm("loc_415507: jbe loc_415548;");
    asm("loc_415509: cmp %eax,%edi;");
    asm("loc_41550B: jne loc_415548;");
    asm("loc_41550D: mov 4(%ebp),%eax;");
    asm("loc_415510: cmp %ecx,%eax;");
    asm("loc_415512: jne loc_415519;");
    asm("loc_415514: mov $_data_41C3F4,%eax;");
    asm("loc_415519: cmpb $0xFE,-1(%eax);");
    asm("loc_41551D: jae loc_415548;");
    asm("loc_41551F: push $1;");
    asm("loc_415521: mov %esi,%ecx;");
    asm("loc_415523: call _sub_403E90;");
    asm("loc_415528: mov 4(%ebp),%eax;");
    asm("loc_41552B: test %eax,%eax;");
    asm("loc_41552D: jne loc_415534;");
    asm("loc_41552F: mov $_data_41C3F4,%eax;");
    asm("loc_415534: mov %eax,4(%esi);");
    asm("loc_415537: mov 8(%ebp),%edx;");
    asm("loc_41553A: mov %edx,8(%esi);");
    asm("loc_41553D: mov 0xC(%ebp),%ecx;");
    asm("loc_415540: mov %ecx,0xC(%esi);");
    asm("loc_415543: incb -1(%eax);");
    asm("loc_415546: jmp loc_41557C;");
    asm("loc_415548: push $1;");
    asm("loc_41554A: push %edi;");
    asm("loc_41554B: mov %esi,%ecx;");
    asm("loc_41554D: call _sub_4044B0;");
    asm("loc_415552: test %al,%al;");
    asm("loc_415554: je loc_41557C;");
    asm("loc_415556: mov 4(%ebp),%eax;");
    asm("loc_415559: test %eax,%eax;");
    asm("loc_41555B: jne loc_415562;");
    asm("loc_41555D: mov $_data_41C3F4,%eax;");
    asm("loc_415562: mov 4(%esi),%edx;");
    asm("loc_415565: push %edi;");
    asm("loc_415566: push %eax;");
    asm("loc_415567: push %edx;");
    asm("loc_415568: call _sub_4031C0;");
    asm("loc_41556D: mov 4(%esi),%eax;");
    asm("loc_415570: mov %edi,8(%esi);");
    asm("loc_415573: add $0xC,%esp;");
    asm("loc_415576: movw $0,(%eax,%edi,2);");
    asm("loc_41557C: mov 0x10(%ebp),%ecx;");
    asm("loc_41557F: pop %edi;");
    asm("loc_415580: mov %ecx,0x10(%esi);");
    asm("loc_415583: pop %ebp;");
    asm("loc_415584: mov 8(%esp),%ecx;");
    asm("loc_415588: pop %esi;");
    asm("loc_415589: mov %ecx,%fs:0;");
    asm("loc_415590: add $0x10,%esp;");
    asm("loc_415593: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4155A0() // _sub_4155A0
{
    __DEBUG_ASM(4155A0);
    // chunk 0x4155A0 _sub_4155A0
    asm("loc_4155A0: push %esi;");
    asm("loc_4155A1: mov %ecx,%esi;");
    asm("loc_4155A3: call _sub_414600;");
    asm("loc_4155A8: testb $1,8(%esp);");
    asm("loc_4155AD: je loc_4155B8;");
    asm("loc_4155AF: push %esi;");
    asm("loc_4155B0: call _sub_418978;");
    asm("loc_4155B5: add $4,%esp;");
    asm("loc_4155B8: mov %esi,%eax;");
    asm("loc_4155BA: pop %esi;");
    asm("loc_4155BB: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4155C0() // _sub_4155C0
{
    __DEBUG_ASM(4155C0);
    // chunk 0x4155C0 _sub_4155C0
    asm("loc_4155C0: mov 4(%esp),%eax;");
    asm("loc_4155C4: push %ebx;");
    asm("loc_4155C5: push %esi;");
    asm("loc_4155C6: mov 8(%eax),%esi;");
    asm("loc_4155C9: mov 4(%eax),%eax;");
    asm("loc_4155CC: test %eax,%eax;");
    asm("loc_4155CE: push %edi;");
    asm("loc_4155CF: mov $_data_41C3F4,%ebx;");
    asm("loc_4155D4: je loc_4155D8;");
    asm("loc_4155D6: mov %eax,%ebx;");
    asm("loc_4155D8: mov 8(%ecx),%edi;");
    asm("loc_4155DB: cmp %esi,%edi;");
    asm("loc_4155DD: mov %edi,%edx;");
    asm("loc_4155DF: jb loc_4155E3;");
    asm("loc_4155E1: mov %esi,%edx;");
    asm("loc_4155E3: mov 4(%ecx),%eax;");
    asm("loc_4155E6: push %edx;");
    asm("loc_4155E7: push %ebx;");
    asm("loc_4155E8: push %eax;");
    asm("loc_4155E9: calll *_import_41B8FC;");
    asm("loc_4155EF: add $0xC,%esp;");
    asm("loc_4155F2: test %eax,%eax;");
    asm("loc_4155F4: jne loc_41560A;");
    asm("loc_4155F6: cmp %esi,%edi;");
    asm("loc_4155F8: jae loc_415603;");
    asm("loc_4155FA: pop %edi;");
    asm("loc_4155FB: pop %esi;");
    asm("loc_4155FC: or $0xFFFFFFFF,%eax;");
    asm("loc_4155FF: pop %ebx;");
    asm("loc_415600: ret $4;");
    asm("loc_415603: xor %eax,%eax;");
    asm("loc_415605: cmp %esi,%edi;");
    asm("loc_415607: setne %al;");
    asm("loc_41560A: pop %edi;");
    asm("loc_41560B: pop %esi;");
    asm("loc_41560C: pop %ebx;");
    asm("loc_41560D: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_415610() // _sub_415610
{
    __DEBUG_ASM(415610);
    // chunk 0x415610 _sub_415610
    asm("loc_415610: push %ebx;");
    asm("loc_415611: mov 8(%esp),%ebx;");
    asm("loc_415615: push %ebp;");
    asm("loc_415616: push %esi;");
    asm("loc_415617: push %edi;");
    asm("loc_415618: mov %ecx,%edi;");
    asm("loc_41561A: cmp %ebx,8(%edi);");
    asm("loc_41561D: jae loc_415625;");
    asm("loc_41561F: calll *_import_41B8D0;");
    asm("loc_415625: mov 8(%edi),%eax;");
    asm("loc_415628: mov 0x18(%esp),%esi;");
    asm("loc_41562C: sub %ebx,%eax;");
    asm("loc_41562E: cmp %esi,%eax;");
    asm("loc_415630: jae loc_415634;");
    asm("loc_415632: mov %eax,%esi;");
    asm("loc_415634: mov 0x20(%esp),%ebp;");
    asm("loc_415638: cmp %ebp,%esi;");
    asm("loc_41563A: mov %esi,%ecx;");
    asm("loc_41563C: jb loc_415640;");
    asm("loc_41563E: mov %ebp,%ecx;");
    asm("loc_415640: mov 4(%edi),%eax;");
    asm("loc_415643: test %eax,%eax;");
    asm("loc_415645: je loc_41564A;");
    asm("loc_415647: lea (%eax,%ebx,2),%eax;");
    asm("loc_41564A: push %ecx;");
    asm("loc_41564B: mov 0x20(%esp),%ecx;");
    asm("loc_41564F: push %ecx;");
    asm("loc_415650: push %eax;");
    asm("loc_415651: calll *_import_41B8FC;");
    asm("loc_415657: add $0xC,%esp;");
    asm("loc_41565A: test %eax,%eax;");
    asm("loc_41565C: jne loc_415673;");
    asm("loc_41565E: cmp %ebp,%esi;");
    asm("loc_415660: jae loc_41566C;");
    asm("loc_415662: pop %edi;");
    asm("loc_415663: pop %esi;");
    asm("loc_415664: pop %ebp;");
    asm("loc_415665: or $0xFFFFFFFF,%eax;");
    asm("loc_415668: pop %ebx;");
    asm("loc_415669: ret $0x10;");
    asm("loc_41566C: xor %eax,%eax;");
    asm("loc_41566E: cmp %ebp,%esi;");
    asm("loc_415670: setne %al;");
    asm("loc_415673: pop %edi;");
    asm("loc_415674: pop %esi;");
    asm("loc_415675: pop %ebp;");
    asm("loc_415676: pop %ebx;");
    asm("loc_415677: ret $0x10;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_415680() // _sub_415680
{
    __DEBUG_ASM(415680);
    // chunk 0x415680 _sub_415680
    asm("loc_415680: mov _data_41E3BC,%eax;");
    asm("loc_415685: mov %eax,_data_42950C;");
    asm("loc_41568A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_415690() // _sub_415690
{
    __DEBUG_ASM(415690);
    // chunk 0x415690 _sub_415690
    asm("loc_415690: mov _data_41E3BC,%eax;");
    asm("loc_415695: mov %eax,_data_429518;");
    asm("loc_41569A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4156A0() // _sub_4156A0
{
    __DEBUG_ASM(4156A0);
    // chunk 0x4156A0 _sub_4156A0
    asm("loc_4156A0: mov _data_41E3C0,%eax;");
    asm("loc_4156A5: mov %eax,_data_429508;");
    asm("loc_4156AA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4156B0() // _sub_4156B0
{
    __DEBUG_ASM(4156B0);
    // chunk 0x4156B0 _sub_4156B0
    asm("loc_4156B0: xor %eax,%eax;");
    asm("loc_4156B2: mov %ax,_data_429514;");
    asm("loc_4156B8: mov %al,_data_429516;");
    asm("loc_4156BD: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4156C0() // _sub_4156C0
{
    __DEBUG_ASM(4156C0);
    // chunk 0x4156C0 _sub_4156C0
    asm("loc_4156C0: movw $0,_data_429524;");
    asm("loc_4156C9: movb $1,_data_429526;");
    asm("loc_4156D0: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4156E0() // _sub_4156E0
{
    __DEBUG_ASM(4156E0);
    // chunk 0x4156E0 _sub_4156E0
    asm("loc_4156E0: mov $1,%eax;");
    asm("loc_4156E5: mov %ax,_data_429510;");
    asm("loc_4156EB: mov %al,_data_429512;");
    asm("loc_4156F0: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_415700() // _sub_415700
{
    __DEBUG_ASM(415700);
    // chunk 0x415700 _sub_415700
    asm("loc_415700: movw $2,_data_429528;");
    asm("loc_415709: movb $1,_data_42952A;");
    asm("loc_415710: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_415720() // _sub_415720
{
    __DEBUG_ASM(415720);
    // chunk 0x415720 _sub_415720
    asm("loc_415720: movw $3,_data_42951C;");
    asm("loc_415729: movb $1,_data_42951E;");
    asm("loc_415730: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_415740() // _sub_415740
{
    __DEBUG_ASM(415740);
    // chunk 0x415740 _sub_415740
    asm("loc_415740: movw $4,_data_429520;");
    asm("loc_415749: movb $1,_data_429522;");
    asm("loc_415750: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_415760() // _sub_415760
{
    __DEBUG_ASM(415760);
    // chunk 0x415760 _sub_415760
    asm("loc_415760: mov 4(%esp),%eax;");
    asm("loc_415764: push %esi;");
    asm("loc_415765: push %eax;");
    asm("loc_415766: push $0x82;");
    asm("loc_41576B: mov %ecx,%esi;");
    asm("loc_41576D: call _sub_418A92;");
    asm("loc_415772: movl $_off_41E3E8,(%esi);");
    asm("loc_415778: mov %esi,%eax;");
    asm("loc_41577A: pop %esi;");
    asm("loc_41577B: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_415780() // _sub_415780
{
    __DEBUG_ASM(415780);
    // chunk 0x415780 _sub_415780
    asm("loc_415780: push %esi;");
    asm("loc_415781: mov %ecx,%esi;");
    asm("loc_415783: call _sub_4157A0;");
    asm("loc_415788: testb $1,8(%esp);");
    asm("loc_41578D: je loc_415798;");
    asm("loc_41578F: push %esi;");
    asm("loc_415790: call _sub_418978;");
    asm("loc_415795: add $4,%esp;");
    asm("loc_415798: mov %esi,%eax;");
    asm("loc_41579A: pop %esi;");
    asm("loc_41579B: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4157A0() // _j_??1CDialog@@UAE@XZ_4
{
    __DEBUG_ASM(4157A0);
    // chunk 0x4157A0 _sub_4157A0
    asm("loc_4157A0: jmp _sub_418A98;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4157B0() // _nullsub_14
{
    __DEBUG_ASM(4157B0);
    // chunk 0x4157B0 _sub_4157B0
    asm("loc_4157B0: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4157C0() // _sub_4157C0
{
    __DEBUG_ASM(4157C0);
    // chunk 0x4157C0 _sub_4157C0
    asm("loc_4157C0: mov _import_41B3B0,%eax;");
    asm("loc_4157C5: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4157D0() // _sub_4157D0
{
    __DEBUG_ASM(4157D0);
    // chunk 0x4157D0 _sub_4157D0
    asm("loc_4157D0: mov $_off_41E3DC,%eax;");
    asm("loc_4157D5: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4157E0() // _sub_4157E0
{
    __DEBUG_ASM(4157E0);
    // chunk 0x4157E0 _sub_4157E0
    asm("loc_4157E0: mov _data_427828,%eax;");
    asm("loc_4157E5: sub $0x40,%esp;");
    asm("loc_4157E8: push %esi;");
    asm("loc_4157E9: mov %ecx,%esi;");
    asm("loc_4157EB: mov 0x84C(%eax),%ecx;");
    asm("loc_4157F1: push %ecx;");
    asm("loc_4157F2: lea 8(%esp),%edx;");
    asm("loc_4157F6: push $_data_4259C8;");
    asm("loc_4157FB: push %edx;");
    asm("loc_4157FC: calll *_import_41B964;");
    asm("loc_415802: add $0xC,%esp;");
    asm("loc_415805: lea 4(%esp),%eax;");
    asm("loc_415809: push %eax;");
    asm("loc_41580A: push $0x3EB;");
    asm("loc_41580F: mov %esi,%ecx;");
    asm("loc_415811: call _sub_4192AE;");
    asm("loc_415816: pop %esi;");
    asm("loc_415817: add $0x40,%esp;");
    asm("loc_41581A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_415820() // _sub_415820
{
    __DEBUG_ASM(415820);
    // chunk 0x415820 _sub_415820
    asm("loc_415820: call _sub_418996;");
    asm("loc_415825: mov $1,%eax;");
    asm("loc_41582A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_415830() // _sub_415830
{
    __DEBUG_ASM(415830);
    // chunk 0x415830 _sub_415830
    asm("loc_415830: mov _data_41E4C4,%eax;");
    asm("loc_415835: mov %eax,_data_429534;");
    asm("loc_41583A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_415840() // _sub_415840
{
    __DEBUG_ASM(415840);
    // chunk 0x415840 _sub_415840
    asm("loc_415840: mov _data_41E4C4,%eax;");
    asm("loc_415845: mov %eax,_data_429540;");
    asm("loc_41584A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_415850() // _sub_415850
{
    __DEBUG_ASM(415850);
    // chunk 0x415850 _sub_415850
    asm("loc_415850: mov _data_41E4C8,%eax;");
    asm("loc_415855: mov %eax,_data_429530;");
    asm("loc_41585A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_415860() // _sub_415860
{
    __DEBUG_ASM(415860);
    // chunk 0x415860 _sub_415860
    asm("loc_415860: xor %eax,%eax;");
    asm("loc_415862: mov %ax,_data_42953C;");
    asm("loc_415868: mov %al,_data_42953E;");
    asm("loc_41586D: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_415870() // _sub_415870
{
    __DEBUG_ASM(415870);
    // chunk 0x415870 _sub_415870
    asm("loc_415870: movw $0,_data_42954C;");
    asm("loc_415879: movb $1,_data_42954E;");
    asm("loc_415880: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_415890() // _sub_415890
{
    __DEBUG_ASM(415890);
    // chunk 0x415890 _sub_415890
    asm("loc_415890: mov $1,%eax;");
    asm("loc_415895: mov %ax,_data_429538;");
    asm("loc_41589B: mov %al,_data_42953A;");
    asm("loc_4158A0: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4158B0() // _sub_4158B0
{
    __DEBUG_ASM(4158B0);
    // chunk 0x4158B0 _sub_4158B0
    asm("loc_4158B0: movw $2,_data_429550;");
    asm("loc_4158B9: movb $1,_data_429552;");
    asm("loc_4158C0: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4158D0() // _sub_4158D0
{
    __DEBUG_ASM(4158D0);
    // chunk 0x4158D0 _sub_4158D0
    asm("loc_4158D0: movw $3,_data_429544;");
    asm("loc_4158D9: movb $1,_data_429546;");
    asm("loc_4158E0: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4158F0() // _sub_4158F0
{
    __DEBUG_ASM(4158F0);
    // chunk 0x4158F0 _sub_4158F0
    asm("loc_4158F0: movw $4,_data_429548;");
    asm("loc_4158F9: movb $1,_data_42954A;");
    asm("loc_415900: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_415910() // _sub_415910
{
    __DEBUG_ASM(415910);
    // chunk 0x415910 _sub_415910
    asm("loc_415910: push $0xFFFFFFFF;");
    asm("loc_415912: push $_sub_41AA08;");
    asm("loc_415917: mov %fs:0,%eax;");
    asm("loc_41591D: push %eax;");
    asm("loc_41591E: mov %esp,%fs:0;");
    asm("loc_415925: push %ecx;");
    asm("loc_415926: mov 0x14(%esp),%eax;");
    asm("loc_41592A: push %esi;");
    asm("loc_41592B: push %edi;");
    asm("loc_41592C: push %eax;");
    asm("loc_41592D: mov %ecx,%esi;");
    asm("loc_41592F: push $0x8F;");
    asm("loc_415934: mov %esi,0x10(%esp);");
    asm("loc_415938: call _sub_418A92;");
    asm("loc_41593D: lea 0x60(%esi),%edi;");
    asm("loc_415940: mov %edi,%ecx;");
    asm("loc_415942: movl $0,0x14(%esp);");
    asm("loc_41594A: call _sub_418C2A;");
    asm("loc_41594F: mov 0xC(%esp),%ecx;");
    asm("loc_415953: movl $_off_41C820,(%edi);");
    asm("loc_415959: movl $_off_41E4F0,(%esi);");
    asm("loc_41595F: movl $0,0xA0(%esi);");
    asm("loc_415969: pop %edi;");
    asm("loc_41596A: mov %esi,%eax;");
    asm("loc_41596C: pop %esi;");
    asm("loc_41596D: mov %ecx,%fs:0;");
    asm("loc_415974: add $0x10,%esp;");
    asm("loc_415977: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_415980() // _sub_415980
{
    __DEBUG_ASM(415980);
    // chunk 0x415980 _sub_415980
    asm("loc_415980: push %esi;");
    asm("loc_415981: mov %ecx,%esi;");
    asm("loc_415983: call _sub_4159A0;");
    asm("loc_415988: testb $1,8(%esp);");
    asm("loc_41598D: je loc_415998;");
    asm("loc_41598F: push %esi;");
    asm("loc_415990: call _sub_418978;");
    asm("loc_415995: add $4,%esp;");
    asm("loc_415998: mov %esi,%eax;");
    asm("loc_41599A: pop %esi;");
    asm("loc_41599B: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4159A0() // _sub_4159A0
{
    __DEBUG_ASM(4159A0);
    // chunk 0x4159A0 _sub_4159A0
    asm("loc_4159A0: push $0xFFFFFFFF;");
    asm("loc_4159A2: push $_sub_41AA28;");
    asm("loc_4159A7: mov %fs:0,%eax;");
    asm("loc_4159AD: push %eax;");
    asm("loc_4159AE: mov %esp,%fs:0;");
    asm("loc_4159B5: push %ecx;");
    asm("loc_4159B6: push %esi;");
    asm("loc_4159B7: mov %ecx,%esi;");
    asm("loc_4159B9: mov %esi,4(%esp);");
    asm("loc_4159BD: lea 0x60(%esi),%ecx;");
    asm("loc_4159C0: movl $0,0x10(%esp);");
    asm("loc_4159C8: call _sub_418C24;");
    asm("loc_4159CD: mov %esi,%ecx;");
    asm("loc_4159CF: movl $0xFFFFFFFF,0x10(%esp);");
    asm("loc_4159D7: call _sub_418A98;");
    asm("loc_4159DC: mov 8(%esp),%ecx;");
    asm("loc_4159E0: pop %esi;");
    asm("loc_4159E1: mov %ecx,%fs:0;");
    asm("loc_4159E8: add $0x10,%esp;");
    asm("loc_4159EB: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4159F0() // _sub_4159F0
{
    __DEBUG_ASM(4159F0);
    // chunk 0x4159F0 _sub_4159F0
    asm("loc_4159F0: mov 4(%esp),%eax;");
    asm("loc_4159F4: add $0x60,%ecx;");
    asm("loc_4159F7: push %ecx;");
    asm("loc_4159F8: push $0x40E;");
    asm("loc_4159FD: push %eax;");
    asm("loc_4159FE: call _sub_418AB0;");
    asm("loc_415A03: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_415A10() // _sub_415A10
{
    __DEBUG_ASM(415A10);
    // chunk 0x415A10 _sub_415A10
    asm("loc_415A10: mov _import_41B3B0,%eax;");
    asm("loc_415A15: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_415A20() // _sub_415A20
{
    __DEBUG_ASM(415A20);
    // chunk 0x415A20 _sub_415A20
    asm("loc_415A20: mov $_off_41E4E8,%eax;");
    asm("loc_415A25: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_415A30() // _sub_415A30
{
    __DEBUG_ASM(415A30);
    // chunk 0x415A30 _sub_415A30
    asm("loc_415A30: push $0xFFFFFFFF;");
    asm("loc_415A32: push $_sub_41AA56;");
    asm("loc_415A37: mov %fs:0,%eax;");
    asm("loc_415A3D: push %eax;");
    asm("loc_415A3E: mov %esp,%fs:0;");
    asm("loc_415A45: sub $0x874,%esp;");
    asm("loc_415A4B: push %ebx;");
    asm("loc_415A4C: push %esi;");
    asm("loc_415A4D: push %edi;");
    asm("loc_415A4E: mov %ecx,%edi;");
    asm("loc_415A50: mov 0x80(%edi),%ecx;");
    asm("loc_415A56: push $0x800;");
    asm("loc_415A5B: lea 0x84(%esp),%eax;");
    asm("loc_415A62: push %eax;");
    asm("loc_415A63: push %ecx;");
    asm("loc_415A64: call _sub_409800;");
    asm("loc_415A69: call _sub_40CDC0;");
    asm("loc_415A6E: mov 0x1B(%esp),%dl;");
    asm("loc_415A72: xor %ebx,%ebx;");
    asm("loc_415A74: lea 0x8C(%esp),%eax;");
    asm("loc_415A7B: push %eax;");
    asm("loc_415A7C: mov %dl,0x20(%esp);");
    asm("loc_415A80: mov %ebx,0x24(%esp);");
    asm("loc_415A84: mov %ebx,0x28(%esp);");
    asm("loc_415A88: mov %ebx,0x2C(%esp);");
    asm("loc_415A8C: calll *_import_41B8F4;");
    asm("loc_415A92: add $0x10,%esp;");
    asm("loc_415A95: mov %eax,%esi;");
    asm("loc_415A97: push $1;");
    asm("loc_415A99: push %esi;");
    asm("loc_415A9A: lea 0x18(%esp),%ecx;");
    asm("loc_415A9E: call _sub_4044B0;");
    asm("loc_415AA3: test %al,%al;");
    asm("loc_415AA5: je loc_415AC9;");
    asm("loc_415AA7: mov 0x14(%esp),%edx;");
    asm("loc_415AAB: push %esi;");
    asm("loc_415AAC: lea 0x84(%esp),%ecx;");
    asm("loc_415AB3: push %ecx;");
    asm("loc_415AB4: push %edx;");
    asm("loc_415AB5: call _sub_4031C0;");
    asm("loc_415ABA: mov 0x20(%esp),%eax;");
    asm("loc_415ABE: mov %esi,0x24(%esp);");
    asm("loc_415AC2: add $0xC,%esp;");
    asm("loc_415AC5: mov %bx,(%eax,%esi,2);");
    asm("loc_415AC9: mov 0xA0(%edi),%edx;");
    asm("loc_415ACF: lea 0x10(%esp),%ecx;");
    asm("loc_415AD3: push %ecx;");
    asm("loc_415AD4: mov _import_41BAF8,%ecx;");
    asm("loc_415ADA: add $4,%edx;");
    asm("loc_415ADD: push %edx;");
    asm("loc_415ADE: mov %ebx,0x890(%esp);");
    asm("loc_415AE5: call _sub_41891E;");
    asm("loc_415AEA: mov 0x14(%esp),%eax;");
    asm("loc_415AEE: or $0xFFFFFFFF,%esi;");
    asm("loc_415AF1: cmp %ebx,%eax;");
    asm("loc_415AF3: mov %esi,0x888(%esp);");
    asm("loc_415AFA: je loc_415B1B;");
    asm("loc_415AFC: mov -1(%eax),%cl;");
    asm("loc_415AFF: cmp %bl,%cl;");
    asm("loc_415B01: je loc_415B0F;");
    asm("loc_415B03: cmp $0xFF,%cl;");
    asm("loc_415B06: je loc_415B0F;");
    asm("loc_415B08: dec %cl;");
    asm("loc_415B0A: mov %cl,-1(%eax);");
    asm("loc_415B0D: jmp loc_415B1B;");
    asm("loc_415B0F: add $0xFFFFFFFE,%eax;");
    asm("loc_415B12: push %eax;");
    asm("loc_415B13: call _sub_418978;");
    asm("loc_415B18: add $4,%esp;");
    asm("loc_415B1B: mov %ebx,0x14(%esp);");
    asm("loc_415B1F: mov %ebx,0x18(%esp);");
    asm("loc_415B23: mov %ebx,0x1C(%esp);");
    asm("loc_415B27: call _sub_40CE70;");
    asm("loc_415B2C: push %ebx;");
    asm("loc_415B2D: lea 0x24(%esp),%ecx;");
    asm("loc_415B31: call _sub_413B70;");
    asm("loc_415B36: lea 0x20(%esp),%ecx;");
    asm("loc_415B3A: movl $1,0x888(%esp);");
    asm("loc_415B45: call _sub_41899C;");
    asm("loc_415B4A: mov %edi,%ecx;");
    asm("loc_415B4C: call _sub_41898A;");
    asm("loc_415B51: lea 0x20(%esp),%ecx;");
    asm("loc_415B55: mov %esi,0x888(%esp);");
    asm("loc_415B5C: call _sub_418A98;");
    asm("loc_415B61: mov 0x880(%esp),%ecx;");
    asm("loc_415B68: pop %edi;");
    asm("loc_415B69: pop %esi;");
    asm("loc_415B6A: pop %ebx;");
    asm("loc_415B6B: mov %ecx,%fs:0;");
    asm("loc_415B72: add $0x880,%esp;");
    asm("loc_415B78: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_415B80() // _sub_415B80
{
    __DEBUG_ASM(415B80);
    // chunk 0x415B80 _sub_415B80
    asm("loc_415B80: mov _data_41E5CC,%eax;");
    asm("loc_415B85: mov %eax,_data_42955C;");
    asm("loc_415B8A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_415B90() // _sub_415B90
{
    __DEBUG_ASM(415B90);
    // chunk 0x415B90 _sub_415B90
    asm("loc_415B90: mov _data_41E5CC,%eax;");
    asm("loc_415B95: mov %eax,_data_429568;");
    asm("loc_415B9A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_415BA0() // _sub_415BA0
{
    __DEBUG_ASM(415BA0);
    // chunk 0x415BA0 _sub_415BA0
    asm("loc_415BA0: mov _data_41E5D0,%eax;");
    asm("loc_415BA5: mov %eax,_data_429558;");
    asm("loc_415BAA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_415BB0() // _sub_415BB0
{
    __DEBUG_ASM(415BB0);
    // chunk 0x415BB0 _sub_415BB0
    asm("loc_415BB0: xor %eax,%eax;");
    asm("loc_415BB2: mov %ax,_data_429564;");
    asm("loc_415BB8: mov %al,_data_429566;");
    asm("loc_415BBD: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_415BC0() // _sub_415BC0
{
    __DEBUG_ASM(415BC0);
    // chunk 0x415BC0 _sub_415BC0
    asm("loc_415BC0: movw $0,_data_429574;");
    asm("loc_415BC9: movb $1,_data_429576;");
    asm("loc_415BD0: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_415BE0() // _sub_415BE0
{
    __DEBUG_ASM(415BE0);
    // chunk 0x415BE0 _sub_415BE0
    asm("loc_415BE0: mov $1,%eax;");
    asm("loc_415BE5: mov %ax,_data_429560;");
    asm("loc_415BEB: mov %al,_data_429562;");
    asm("loc_415BF0: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_415C00() // _sub_415C00
{
    __DEBUG_ASM(415C00);
    // chunk 0x415C00 _sub_415C00
    asm("loc_415C00: movw $2,_data_429578;");
    asm("loc_415C09: movb $1,_data_42957A;");
    asm("loc_415C10: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_415C20() // _sub_415C20
{
    __DEBUG_ASM(415C20);
    // chunk 0x415C20 _sub_415C20
    asm("loc_415C20: movw $3,_data_42956C;");
    asm("loc_415C29: movb $1,_data_42956E;");
    asm("loc_415C30: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_415C40() // _sub_415C40
{
    __DEBUG_ASM(415C40);
    // chunk 0x415C40 _sub_415C40
    asm("loc_415C40: movw $4,_data_429570;");
    asm("loc_415C49: movb $1,_data_429572;");
    asm("loc_415C50: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_415C60() // _sub_415C60
{
    __DEBUG_ASM(415C60);
    // chunk 0x415C60 _sub_415C60
    asm("loc_415C60: mov 4(%esp),%eax;");
    asm("loc_415C64: push %esi;");
    asm("loc_415C65: push %eax;");
    asm("loc_415C66: push $0xA0;");
    asm("loc_415C6B: mov %ecx,%esi;");
    asm("loc_415C6D: call _sub_418A92;");
    asm("loc_415C72: movl $_off_41E628,(%esi);");
    asm("loc_415C78: movl $0,0x60(%esi);");
    asm("loc_415C7F: mov %esi,%eax;");
    asm("loc_415C81: pop %esi;");
    asm("loc_415C82: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_415C90() // _sub_415C90
{
    __DEBUG_ASM(415C90);
    // chunk 0x415C90 _sub_415C90
    asm("loc_415C90: push %esi;");
    asm("loc_415C91: mov %ecx,%esi;");
    asm("loc_415C93: call _sub_415CB0;");
    asm("loc_415C98: testb $1,8(%esp);");
    asm("loc_415C9D: je loc_415CA8;");
    asm("loc_415C9F: push %esi;");
    asm("loc_415CA0: call _sub_418978;");
    asm("loc_415CA5: add $4,%esp;");
    asm("loc_415CA8: mov %esi,%eax;");
    asm("loc_415CAA: pop %esi;");
    asm("loc_415CAB: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_415CB0() // _j_??1CDialog@@UAE@XZ_5
{
    __DEBUG_ASM(415CB0);
    // chunk 0x415CB0 _sub_415CB0
    asm("loc_415CB0: jmp _sub_418A98;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_415CC0() // _nullsub_15
{
    __DEBUG_ASM(415CC0);
    // chunk 0x415CC0 _sub_415CC0
    asm("loc_415CC0: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_415CD0() // _sub_415CD0
{
    __DEBUG_ASM(415CD0);
    // chunk 0x415CD0 _sub_415CD0
    asm("loc_415CD0: mov _import_41B3B0,%eax;");
    asm("loc_415CD5: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_415CE0() // _sub_415CE0
{
    __DEBUG_ASM(415CE0);
    // chunk 0x415CE0 _sub_415CE0
    asm("loc_415CE0: mov $_off_41E620,%eax;");
    asm("loc_415CE5: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_415CF0() // _sub_415CF0
{
    __DEBUG_ASM(415CF0);
    // chunk 0x415CF0 _sub_415CF0
    asm("loc_415CF0: mov 4(%esp),%eax;");
    asm("loc_415CF4: mov %eax,0x60(%ecx);");
    asm("loc_415CF7: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_415D00() // _sub_415D00
{
    __DEBUG_ASM(415D00);
    // chunk 0x415D00 _sub_415D00
    asm("loc_415D00: sub $0x20,%esp;");
    asm("loc_415D03: push %esi;");
    asm("loc_415D04: push %edi;");
    asm("loc_415D05: mov %ecx,%esi;");
    asm("loc_415D07: call _sub_418996;");
    asm("loc_415D0C: mov 0x20(%esi),%eax;");
    asm("loc_415D0F: push $0;");
    asm("loc_415D11: push $0x3E8;");
    asm("loc_415D16: push $0x3001;");
    asm("loc_415D1B: push %eax;");
    asm("loc_415D1C: calll *_import_41BC18;");
    asm("loc_415D22: mov _data_427828,%edx;");
    asm("loc_415D28: mov 0x20(%edx),%eax;");
    asm("loc_415D2B: mov _import_41BC14,%edi;");
    asm("loc_415D31: lea 0x18(%esp),%ecx;");
    asm("loc_415D35: push %ecx;");
    asm("loc_415D36: mov 0x20(%eax),%ecx;");
    asm("loc_415D39: push %ecx;");
    asm("loc_415D3A: call *%edi;");
    asm("loc_415D3C: mov 0x20(%esi),%eax;");
    asm("loc_415D3F: lea 8(%esp),%edx;");
    asm("loc_415D43: push %edx;");
    asm("loc_415D44: push %eax;");
    asm("loc_415D45: call *%edi;");
    asm("loc_415D47: mov 0x14(%esp),%edi;");
    asm("loc_415D4B: mov 0xC(%esp),%eax;");
    asm("loc_415D4F: mov 0x24(%esp),%edx;");
    asm("loc_415D53: mov 0x1C(%esp),%ecx;");
    asm("loc_415D57: sub %edi,%eax;");
    asm("loc_415D59: mov 0x10(%esp),%edi;");
    asm("loc_415D5D: add %edx,%eax;");
    asm("loc_415D5F: add %ecx,%eax;");
    asm("loc_415D61: mov 0x18(%esp),%ecx;");
    asm("loc_415D65: cltd;");
    asm("loc_415D66: sub %edx,%eax;");
    asm("loc_415D68: mov 8(%esp),%edx;");
    asm("loc_415D6C: push $5;");
    asm("loc_415D6E: sar $1,%eax;");
    asm("loc_415D70: push $0;");
    asm("loc_415D72: push $0;");
    asm("loc_415D74: push %eax;");
    asm("loc_415D75: mov 0x30(%esp),%eax;");
    asm("loc_415D79: sub %edi,%eax;");
    asm("loc_415D7B: add %edx,%eax;");
    asm("loc_415D7D: add %ecx,%eax;");
    asm("loc_415D7F: cltd;");
    asm("loc_415D80: sub %edx,%eax;");
    asm("loc_415D82: sar $1,%eax;");
    asm("loc_415D84: push %eax;");
    asm("loc_415D85: push $0;");
    asm("loc_415D87: mov %esi,%ecx;");
    asm("loc_415D89: call _sub_418C5A;");
    asm("loc_415D8E: pop %edi;");
    asm("loc_415D8F: mov $1,%eax;");
    asm("loc_415D94: pop %esi;");
    asm("loc_415D95: add $0x20,%esp;");
    asm("loc_415D98: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_415DA0() // _nullsub_20
{
    __DEBUG_ASM(415DA0);
    // chunk 0x415DA0 _sub_415DA0
    asm("loc_415DA0: ret $8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_415DB0() // _sub_415DB0
{
    __DEBUG_ASM(415DB0);
    // chunk 0x415DB0 _sub_415DB0
    asm("loc_415DB0: cmpl $0x3001,4(%esp);");
    asm("loc_415DB8: push %esi;");
    asm("loc_415DB9: mov %ecx,%esi;");
    asm("loc_415DBB: jne loc_415DF1;");
    asm("loc_415DBD: mov 0x60(%esi),%eax;");
    asm("loc_415DC0: sub $0,%eax;");
    asm("loc_415DC3: je loc_415DE4;");
    asm("loc_415DC5: dec %eax;");
    asm("loc_415DC6: jne loc_415DF8;");
    asm("loc_415DC8: mov _data_427828,%ecx;");
    asm("loc_415DCE: call _sub_40B5A0;");
    asm("loc_415DD3: test %al,%al;");
    asm("loc_415DD5: je loc_415DF8;");
    asm("loc_415DD7: push $0;");
    asm("loc_415DD9: mov %esi,%ecx;");
    asm("loc_415DDB: call _sub_418C84;");
    asm("loc_415DE0: pop %esi;");
    asm("loc_415DE1: ret $4;");
    asm("loc_415DE4: mov _data_427828,%ecx;");
    asm("loc_415DEA: call _sub_40BEE0;");
    asm("loc_415DEF: jmp loc_415DD3;");
    asm("loc_415DF1: mov %esi,%ecx;");
    asm("loc_415DF3: call _sub_418C54;");
    asm("loc_415DF8: pop %esi;");
    asm("loc_415DF9: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_415E00() // _sub_415E00
{
    __DEBUG_ASM(415E00);
    // chunk 0x415E00 _sub_415E00
    asm("loc_415E00: mov _data_41E704,%eax;");
    asm("loc_415E05: mov %eax,_data_429588;");
    asm("loc_415E0A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_415E10() // _sub_415E10
{
    __DEBUG_ASM(415E10);
    // chunk 0x415E10 _sub_415E10
    asm("loc_415E10: mov _data_41E704,%eax;");
    asm("loc_415E15: mov %eax,_data_429D94;");
    asm("loc_415E1A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_415E20() // _sub_415E20
{
    __DEBUG_ASM(415E20);
    // chunk 0x415E20 _sub_415E20
    asm("loc_415E20: mov _data_41E708,%eax;");
    asm("loc_415E25: mov %eax,_data_429580;");
    asm("loc_415E2A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_415E30() // _sub_415E30
{
    __DEBUG_ASM(415E30);
    // chunk 0x415E30 _sub_415E30
    asm("loc_415E30: xor %eax,%eax;");
    asm("loc_415E32: mov %ax,_data_429D90;");
    asm("loc_415E38: mov %al,_data_429D92;");
    asm("loc_415E3D: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_415E40() // _sub_415E40
{
    __DEBUG_ASM(415E40);
    // chunk 0x415E40 _sub_415E40
    asm("loc_415E40: movw $0,_data_429DA0;");
    asm("loc_415E49: movb $1,_data_429DA2;");
    asm("loc_415E50: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_415E60() // _sub_415E60
{
    __DEBUG_ASM(415E60);
    // chunk 0x415E60 _sub_415E60
    asm("loc_415E60: mov $1,%eax;");
    asm("loc_415E65: mov %ax,_data_42958C;");
    asm("loc_415E6B: mov %al,_data_42958C+2;");
    asm("loc_415E70: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_415E80() // _sub_415E80
{
    __DEBUG_ASM(415E80);
    // chunk 0x415E80 _sub_415E80
    asm("loc_415E80: movw $2,_data_429DB8;");
    asm("loc_415E89: movb $1,_data_429DBA;");
    asm("loc_415E90: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_415EA0() // _sub_415EA0
{
    __DEBUG_ASM(415EA0);
    // chunk 0x415EA0 _sub_415EA0
    asm("loc_415EA0: movw $3,_data_429D98;");
    asm("loc_415EA9: movb $1,_data_429D9A;");
    asm("loc_415EB0: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_415EC0() // _sub_415EC0
{
    __DEBUG_ASM(415EC0);
    // chunk 0x415EC0 _sub_415EC0
    asm("loc_415EC0: movw $4,_data_429D9C;");
    asm("loc_415EC9: movb $1,_data_429D9E;");
    asm("loc_415ED0: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_415EE0() // _sub_415EE0
{
    __DEBUG_ASM(415EE0);
    // chunk 0x415EE0 _sub_415EE0
    asm("loc_415EE0: push %ecx;");
    asm("loc_415EE1: lea 2(%esp),%eax;");
    asm("loc_415EE5: push %eax;");
    asm("loc_415EE6: lea 7(%esp),%ecx;");
    asm("loc_415EEA: push %ecx;");
    asm("loc_415EEB: mov $_data_429DA4,%ecx;");
    asm("loc_415EF0: call _sub_416810;");
    asm("loc_415EF5: push $_sub_415F10;");
    asm("loc_415EFA: call _sub_419410;");
    asm("loc_415EFF: add $8,%esp;");
    asm("loc_415F02: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_415F10() // _sub_415F10
{
    __DEBUG_ASM(415F10);
    // chunk 0x415F10 _sub_415F10
    asm("loc_415F10: mov _data_429584,%cl;");
    asm("loc_415F16: mov $1,%al;");
    asm("loc_415F18: test %cl,%al;");
    asm("loc_415F1A: jne loc_415F2E;");
    asm("loc_415F1C: or %al,%cl;");
    asm("loc_415F1E: mov %cl,_data_429584;");
    asm("loc_415F24: mov $_data_429DA4,%ecx;");
    asm("loc_415F29: jmp loc_415F30;");
    asm("loc_415F2E: ret;");
    asm("loc_415F2F: nop;");
    asm("loc_415F30: sub $0xC,%esp;");
    asm("loc_415F33: push %ebx;");
    asm("loc_415F34: push %ebp;");
    asm("loc_415F35: push %esi;");
    asm("loc_415F36: mov %ecx,%esi;");
    asm("loc_415F38: mov 0x10(%esi),%ecx;");
    asm("loc_415F3B: push %edi;");
    asm("loc_415F3C: mov 4(%esi),%edi;");
    asm("loc_415F3F: mov (%edi),%eax;");
    asm("loc_415F41: xor %ebp,%ebp;");
    asm("loc_415F43: cmp %ebp,%ecx;");
    asm("loc_415F45: mov %eax,0x10(%esp);");
    asm("loc_415F49: je loc_415FA4;");
    asm("loc_415F4B: mov %eax,%ecx;");
    asm("loc_415F4D: cmp %ecx,%eax;");
    asm("loc_415F4F: jne loc_415FA4;");
    asm("loc_415F51: mov 4(%edi),%ebx;");
    asm("loc_415F54: cmp 8(%esi),%ebx;");
    asm("loc_415F57: mov %ebx,%edi;");
    asm("loc_415F59: je loc_415F7F;");
    asm("loc_415F5B: nop;");
    asm("loc_415F5C: lea (%esp),%esp;");
    asm("loc_415F60: mov 8(%edi),%eax;");
    asm("loc_415F63: push %eax;");
    asm("loc_415F64: mov %esi,%ecx;");
    asm("loc_415F66: call _sub_416CD0;");
    asm("loc_415F6B: mov (%edi),%edi;");
    asm("loc_415F6D: push %ebx;");
    asm("loc_415F6E: call _sub_418978;");
    asm("loc_415F73: mov 8(%esi),%eax;");
    asm("loc_415F76: add $4,%esp;");
    asm("loc_415F79: cmp %eax,%edi;");
    asm("loc_415F7B: mov %edi,%ebx;");
    asm("loc_415F7D: jne loc_415F60;");
    asm("loc_415F7F: mov 4(%esi),%ecx;");
    asm("loc_415F82: mov 8(%esi),%edx;");
    asm("loc_415F85: mov %edx,4(%ecx);");
    asm("loc_415F88: mov 4(%esi),%eax;");
    asm("loc_415F8B: mov %ebp,0x10(%esi);");
    asm("loc_415F8E: mov %eax,(%eax);");
    asm("loc_415F90: mov 4(%esi),%eax;");
    asm("loc_415F93: mov %eax,8(%eax);");
    asm("loc_415F96: lea 0x14(%esp),%eax;");
    asm("loc_415F9A: push %eax;");
    asm("loc_415F9B: mov %esi,%ecx;");
    asm("loc_415F9D: call _sub_416880;");
    asm("loc_415FA2: jmp loc_415FC8;");
    asm("loc_415FA4: cmp %edi,%eax;");
    asm("loc_415FA6: je loc_415FC8;");
    asm("loc_415FA8: lea 0x10(%esp),%ecx;");
    asm("loc_415FAC: mov %eax,%ebx;");
    asm("loc_415FAE: call _sub_417070;");
    asm("loc_415FB3: push %ebx;");
    asm("loc_415FB4: lea 0x1C(%esp),%ecx;");
    asm("loc_415FB8: push %ecx;");
    asm("loc_415FB9: mov %esi,%ecx;");
    asm("loc_415FBB: call _sub_416900;");
    asm("loc_415FC0: mov 0x10(%esp),%eax;");
    asm("loc_415FC4: cmp %edi,%eax;");
    asm("loc_415FC6: jne loc_415FA8;");
    asm("loc_415FC8: mov 4(%esi),%edx;");
    asm("loc_415FCB: push %edx;");
    asm("loc_415FCC: call _sub_418978;");
    asm("loc_415FD1: mov 8(%esi),%eax;");
    asm("loc_415FD4: push %eax;");
    asm("loc_415FD5: mov %ebp,4(%esi);");
    asm("loc_415FD8: mov %ebp,0x10(%esi);");
    asm("loc_415FDB: call _sub_418978;");
    asm("loc_415FE0: add $8,%esp;");
    asm("loc_415FE3: pop %edi;");
    asm("loc_415FE4: mov %ebp,8(%esi);");
    asm("loc_415FE7: pop %esi;");
    asm("loc_415FE8: pop %ebp;");
    asm("loc_415FE9: pop %ebx;");
    asm("loc_415FEA: add $0xC,%esp;");
    asm("loc_415FED: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_415FF0() // _sub_415FF0
{
    __DEBUG_ASM(415FF0);
    // chunk 0x415FF0 _sub_415FF0
    asm("loc_415FF0: push $0xFFFFFFFF;");
    asm("loc_415FF2: push $_sub_41AA81;");
    asm("loc_415FF7: mov %fs:0,%eax;");
    asm("loc_415FFD: push %eax;");
    asm("loc_415FFE: mov %esp,%fs:0;");
    asm("loc_416005: push %ecx;");
    asm("loc_416006: mov 0x14(%esp),%eax;");
    asm("loc_41600A: push %esi;");
    asm("loc_41600B: push %edi;");
    asm("loc_41600C: push %eax;");
    asm("loc_41600D: mov %ecx,%esi;");
    asm("loc_41600F: push $0x95;");
    asm("loc_416014: mov %esi,0x10(%esp);");
    asm("loc_416018: call _sub_418A92;");
    asm("loc_41601D: lea 0x64(%esi),%edi;");
    asm("loc_416020: mov %edi,%ecx;");
    asm("loc_416022: movl $0,0x14(%esp);");
    asm("loc_41602A: call _sub_418C2A;");
    asm("loc_41602F: movl $_off_41C820,(%edi);");
    asm("loc_416035: lea 0xA4(%esi),%edi;");
    asm("loc_41603B: mov %edi,%ecx;");
    asm("loc_41603D: movb $1,0x14(%esp);");
    asm("loc_416042: call _sub_418C2A;");
    asm("loc_416047: movl $_off_41C820,(%edi);");
    asm("loc_41604D: lea 0xE4(%esi),%edi;");
    asm("loc_416053: mov %edi,%ecx;");
    asm("loc_416055: movb $2,0x14(%esp);");
    asm("loc_41605A: call _sub_418C2A;");
    asm("loc_41605F: mov 0xC(%esp),%ecx;");
    asm("loc_416063: movl $_off_41C820,(%edi);");
    asm("loc_416069: movl $_off_41E760,(%esi);");
    asm("loc_41606F: movl $0xFFFFFFFF,0x60(%esi);");
    asm("loc_416076: pop %edi;");
    asm("loc_416077: mov %esi,%eax;");
    asm("loc_416079: pop %esi;");
    asm("loc_41607A: mov %ecx,%fs:0;");
    asm("loc_416081: add $0x10,%esp;");
    asm("loc_416084: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_416090() // _sub_416090
{
    __DEBUG_ASM(416090);
    // chunk 0x416090 _sub_416090
    asm("loc_416090: push %esi;");
    asm("loc_416091: mov %ecx,%esi;");
    asm("loc_416093: call _sub_4160B0;");
    asm("loc_416098: testb $1,8(%esp);");
    asm("loc_41609D: je loc_4160A8;");
    asm("loc_41609F: push %esi;");
    asm("loc_4160A0: call _sub_418978;");
    asm("loc_4160A5: add $4,%esp;");
    asm("loc_4160A8: mov %esi,%eax;");
    asm("loc_4160AA: pop %esi;");
    asm("loc_4160AB: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4160B0() // _sub_4160B0
{
    __DEBUG_ASM(4160B0);
    // chunk 0x4160B0 _sub_4160B0
    asm("loc_4160B0: push $0xFFFFFFFF;");
    asm("loc_4160B2: push $_sub_41AABF;");
    asm("loc_4160B7: mov %fs:0,%eax;");
    asm("loc_4160BD: push %eax;");
    asm("loc_4160BE: mov %esp,%fs:0;");
    asm("loc_4160C5: sub $0xC,%esp;");
    asm("loc_4160C8: push %ebp;");
    asm("loc_4160C9: mov %ecx,%ebp;");
    asm("loc_4160CB: push %esi;");
    asm("loc_4160CC: push %edi;");
    asm("loc_4160CD: mov %ebp,0x10(%esp);");
    asm("loc_4160D1: movl $_off_41E760,(%ebp);");
    asm("loc_4160D8: mov 0x60(%ebp),%eax;");
    asm("loc_4160DB: cmp $0xFFFFFFFF,%eax;");
    asm("loc_4160DE: lea 0x60(%ebp),%esi;");
    asm("loc_4160E1: movl $3,0x20(%esp);");
    asm("loc_4160E9: je loc_4161E3;");
    asm("loc_4160EF: push %esi;");
    asm("loc_4160F0: mov $_data_429DA4,%ecx;");
    asm("loc_4160F5: call _sub_416FE0;");
    asm("loc_4160FA: push %esi;");
    asm("loc_4160FB: mov $_data_429DA4,%ecx;");
    asm("loc_416100: mov %eax,%edi;");
    asm("loc_416102: call _sub_416F90;");
    asm("loc_416107: mov %eax,%esi;");
    asm("loc_416109: cmp %edi,%esi;");
    asm("loc_41610B: je loc_416145;");
    asm("loc_41610D: lea (%ecx),%ecx;");
    asm("loc_416110: mov 8(%eax),%ecx;");
    asm("loc_416113: mov 0x15(%ecx),%dl;");
    asm("loc_416116: test %dl,%dl;");
    asm("loc_416118: jne loc_416125;");
    asm("loc_41611A: push %ecx;");
    asm("loc_41611B: call _sub_416FC0;");
    asm("loc_416120: add $4,%esp;");
    asm("loc_416123: jmp loc_416141;");
    asm("loc_416125: mov 4(%eax),%ecx;");
    asm("loc_416128: cmp 8(%ecx),%eax;");
    asm("loc_41612B: jne loc_41613A;");
    asm("loc_41612D: lea (%ecx),%ecx;");
    asm("loc_416130: mov %ecx,%eax;");
    asm("loc_416132: mov 4(%ecx),%ecx;");
    asm("loc_416135: cmp 8(%ecx),%eax;");
    asm("loc_416138: je loc_416130;");
    asm("loc_41613A: cmp %ecx,8(%eax);");
    asm("loc_41613D: je loc_416141;");
    asm("loc_41613F: mov %ecx,%eax;");
    asm("loc_416141: cmp %edi,%eax;");
    asm("loc_416143: jne loc_416110;");
    asm("loc_416145: mov _data_429DB4,%ecx;");
    asm("loc_41614B: test %ecx,%ecx;");
    asm("loc_41614D: mov %esi,%eax;");
    asm("loc_41614F: mov %eax,0xC(%esp);");
    asm("loc_416153: je loc_4161B9;");
    asm("loc_416155: mov _data_429DA8,%ecx;");
    asm("loc_41615B: cmp (%ecx),%esi;");
    asm("loc_41615D: jne loc_4161B9;");
    asm("loc_41615F: cmp %ecx,%edi;");
    asm("loc_416161: jne loc_4161B9;");
    asm("loc_416163: mov 4(%ecx),%edi;");
    asm("loc_416166: mov _data_429DAC,%eax;");
    asm("loc_41616B: cmp %eax,%edi;");
    asm("loc_41616D: mov %edi,%esi;");
    asm("loc_41616F: je loc_41619B;");
    asm("loc_416171: mov 8(%esi),%eax;");
    asm("loc_416174: push %eax;");
    asm("loc_416175: mov $_data_429DA4,%ecx;");
    asm("loc_41617A: call _sub_416CD0;");
    asm("loc_41617F: mov (%esi),%esi;");
    asm("loc_416181: push %edi;");
    asm("loc_416182: call _sub_418978;");
    asm("loc_416187: mov _data_429DAC,%eax;");
    asm("loc_41618C: add $4,%esp;");
    asm("loc_41618F: cmp %eax,%esi;");
    asm("loc_416191: mov %esi,%edi;");
    asm("loc_416193: jne loc_416171;");
    asm("loc_416195: mov _data_429DA8,%ecx;");
    asm("loc_41619B: mov %eax,4(%ecx);");
    asm("loc_41619E: mov _data_429DA8,%eax;");
    asm("loc_4161A3: movl $0,_data_429DB4;");
    asm("loc_4161AD: mov %eax,(%eax);");
    asm("loc_4161AF: mov _data_429DA8,%eax;");
    asm("loc_4161B4: mov %eax,8(%eax);");
    asm("loc_4161B7: jmp loc_4161E3;");
    asm("loc_4161B9: cmp %edi,%esi;");
    asm("loc_4161BB: je loc_4161E3;");
    asm("loc_4161BD: lea (%ecx),%ecx;");
    asm("loc_4161C0: lea 0xC(%esp),%ecx;");
    asm("loc_4161C4: mov %eax,%esi;");
    asm("loc_4161C6: call _sub_417070;");
    asm("loc_4161CB: push %esi;");
    asm("loc_4161CC: lea 0x18(%esp),%ecx;");
    asm("loc_4161D0: push %ecx;");
    asm("loc_4161D1: mov $_data_429DA4,%ecx;");
    asm("loc_4161D6: call _sub_416900;");
    asm("loc_4161DB: mov 0xC(%esp),%eax;");
    asm("loc_4161DF: cmp %edi,%eax;");
    asm("loc_4161E1: jne loc_4161C0;");
    asm("loc_4161E3: lea 0xE4(%ebp),%ecx;");
    asm("loc_4161E9: movb $2,0x20(%esp);");
    asm("loc_4161EE: call _sub_418C24;");
    asm("loc_4161F3: lea 0xA4(%ebp),%ecx;");
    asm("loc_4161F9: movb $1,0x20(%esp);");
    asm("loc_4161FE: call _sub_418C24;");
    asm("loc_416203: lea 0x64(%ebp),%ecx;");
    asm("loc_416206: movb $0,0x20(%esp);");
    asm("loc_41620B: call _sub_418C24;");
    asm("loc_416210: mov %ebp,%ecx;");
    asm("loc_416212: movl $0xFFFFFFFF,0x20(%esp);");
    asm("loc_41621A: call _sub_418A98;");
    asm("loc_41621F: mov 0x18(%esp),%ecx;");
    asm("loc_416223: pop %edi;");
    asm("loc_416224: pop %esi;");
    asm("loc_416225: pop %ebp;");
    asm("loc_416226: mov %ecx,%fs:0;");
    asm("loc_41622D: add $0x18,%esp;");
    asm("loc_416230: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_416240() // _sub_416240
{
    __DEBUG_ASM(416240);
    // chunk 0x416240 _sub_416240
    asm("loc_416240: push %esi;");
    asm("loc_416241: push %edi;");
    asm("loc_416242: mov 0xC(%esp),%edi;");
    asm("loc_416246: mov %ecx,%esi;");
    asm("loc_416248: lea 0x64(%esi),%eax;");
    asm("loc_41624B: push %eax;");
    asm("loc_41624C: push $0x417;");
    asm("loc_416251: push %edi;");
    asm("loc_416252: call _sub_418AB0;");
    asm("loc_416257: lea 0xA4(%esi),%ecx;");
    asm("loc_41625D: push %ecx;");
    asm("loc_41625E: push $0x418;");
    asm("loc_416263: push %edi;");
    asm("loc_416264: call _sub_418AB0;");
    asm("loc_416269: add $0xE4,%esi;");
    asm("loc_41626F: push %esi;");
    asm("loc_416270: push $0x419;");
    asm("loc_416275: push %edi;");
    asm("loc_416276: call _sub_418AB0;");
    asm("loc_41627B: pop %edi;");
    asm("loc_41627C: pop %esi;");
    asm("loc_41627D: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_416280() // _sub_416280
{
    __DEBUG_ASM(416280);
    // chunk 0x416280 _sub_416280
    asm("loc_416280: mov _import_41B3B0,%eax;");
    asm("loc_416285: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_416290() // _sub_416290
{
    __DEBUG_ASM(416290);
    // chunk 0x416290 _sub_416290
    asm("loc_416290: mov $_off_41E758,%eax;");
    asm("loc_416295: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4162A0() // _sub_4162A0
{
    __DEBUG_ASM(4162A0);
    // chunk 0x4162A0 _sub_4162A0
    asm("loc_4162A0: sub $0x828,%esp;");
    asm("loc_4162A6: push %ebp;");
    asm("loc_4162A7: push %esi;");
    asm("loc_4162A8: push %edi;");
    asm("loc_4162A9: mov %ecx,%edi;");
    asm("loc_4162AB: call _sub_418996;");
    asm("loc_4162B0: mov 0x84(%edi),%eax;");
    asm("loc_4162B6: mov _import_41BBE8,%esi;");
    asm("loc_4162BC: push $0x10000;");
    asm("loc_4162C1: push $0;");
    asm("loc_4162C3: push $0x445;");
    asm("loc_4162C8: push %eax;");
    asm("loc_4162C9: call *%esi;");
    asm("loc_4162CB: mov 0x84(%edi),%ecx;");
    asm("loc_4162D1: push $0x200;");
    asm("loc_4162D6: push $0;");
    asm("loc_4162D8: push $0x435;");
    asm("loc_4162DD: push %ecx;");
    asm("loc_4162DE: call *%esi;");
    asm("loc_4162E0: mov 0x60(%edi),%ecx;");
    asm("loc_4162E3: mov _data_429DA8,%ebp;");
    asm("loc_4162E9: mov _data_429DAC,%edx;");
    asm("loc_4162EF: mov %ecx,0x14(%esp);");
    asm("loc_4162F3: movl $0,0x18(%esp);");
    asm("loc_4162FB: mov 4(%ebp),%esi;");
    asm("loc_4162FE: cmp %edx,%esi;");
    asm("loc_416300: mov $1,%al;");
    asm("loc_416302: je loc_41631B;");
    asm("loc_416304: cmp 0xC(%esi),%ecx;");
    asm("loc_416307: setl %al;");
    asm("loc_41630A: test %al,%al;");
    asm("loc_41630C: mov %esi,%ebp;");
    asm("loc_41630E: je loc_416314;");
    asm("loc_416310: mov (%esi),%esi;");
    asm("loc_416312: jmp loc_416317;");
    asm("loc_416314: mov 8(%esi),%esi;");
    asm("loc_416317: cmp %edx,%esi;");
    asm("loc_416319: jne loc_416304;");
    asm("loc_41631B: mov _data_429DB0,%dl;");
    asm("loc_416321: test %dl,%dl;");
    asm("loc_416323: je loc_41634B;");
    asm("loc_416325: lea 0xF(%esp),%edx;");
    asm("loc_416329: push %edx;");
    asm("loc_41632A: lea 0x18(%esp),%eax;");
    asm("loc_41632E: push %eax;");
    asm("loc_41632F: push %ebp;");
    asm("loc_416330: push %esi;");
    asm("loc_416331: lea 0x34(%esp),%ecx;");
    asm("loc_416335: push %ecx;");
    asm("loc_416336: mov $_data_429DA4,%ecx;");
    asm("loc_41633B: movb $1,0x23(%esp);");
    asm("loc_416340: call _sub_416D40;");
    asm("loc_416345: push %eax;");
    asm("loc_416346: jmp loc_4163D5;");
    asm("loc_41634B: test %al,%al;");
    asm("loc_41634D: mov %ebp,0x10(%esp);");
    asm("loc_416351: je loc_41639A;");
    asm("loc_416353: lea 0x28(%esp),%edx;");
    asm("loc_416357: push %edx;");
    asm("loc_416358: mov $_data_429DA4,%ecx;");
    asm("loc_41635D: call _sub_416880;");
    asm("loc_416362: mov 0x10(%esp),%ecx;");
    asm("loc_416366: cmp (%eax),%ecx;");
    asm("loc_416368: jne loc_41638D;");
    asm("loc_41636A: lea 0xD(%esp),%edx;");
    asm("loc_41636E: push %edx;");
    asm("loc_41636F: lea 0x18(%esp),%eax;");
    asm("loc_416373: push %eax;");
    asm("loc_416374: push %ebp;");
    asm("loc_416375: push %esi;");
    asm("loc_416376: lea 0x3C(%esp),%ecx;");
    asm("loc_41637A: push %ecx;");
    asm("loc_41637B: mov $_data_429DA4,%ecx;");
    asm("loc_416380: movb $1,0x21(%esp);");
    asm("loc_416385: call _sub_416D40;");
    asm("loc_41638A: push %eax;");
    asm("loc_41638B: jmp loc_4163D5;");
    asm("loc_41638D: lea 0x10(%esp),%ecx;");
    asm("loc_416391: call _sub_417010;");
    asm("loc_416396: mov 0x14(%esp),%ecx;");
    asm("loc_41639A: mov 0x10(%esp),%edx;");
    asm("loc_41639E: cmp %ecx,0xC(%edx);");
    asm("loc_4163A1: jge loc_4163C6;");
    asm("loc_4163A3: lea 0xE(%esp),%eax;");
    asm("loc_4163A7: push %eax;");
    asm("loc_4163A8: lea 0x18(%esp),%ecx;");
    asm("loc_4163AC: push %ecx;");
    asm("loc_4163AD: push %ebp;");
    asm("loc_4163AE: push %esi;");
    asm("loc_4163AF: lea 0x40(%esp),%edx;");
    asm("loc_4163B3: push %edx;");
    asm("loc_4163B4: mov $_data_429DA4,%ecx;");
    asm("loc_4163B9: movb $1,0x22(%esp);");
    asm("loc_4163BE: call _sub_416D40;");
    asm("loc_4163C3: push %eax;");
    asm("loc_4163C4: jmp loc_4163D5;");
    asm("loc_4163C6: lea 0xC(%esp),%eax;");
    asm("loc_4163CA: push %eax;");
    asm("loc_4163CB: lea 0x14(%esp),%ecx;");
    asm("loc_4163CF: movb $0,0x10(%esp);");
    asm("loc_4163D4: push %ecx;");
    asm("loc_4163D5: lea 0x24(%esp),%ecx;");
    asm("loc_4163D9: call _sub_416D20;");
    asm("loc_4163DE: mov 0x1C(%esp),%edx;");
    asm("loc_4163E2: push $0x400;");
    asm("loc_4163E7: lea 0x38(%esp),%eax;");
    asm("loc_4163EB: mov %edi,0x10(%edx);");
    asm("loc_4163EE: mov 0x60(%edi),%ecx;");
    asm("loc_4163F1: push %eax;");
    asm("loc_4163F2: push %ecx;");
    asm("loc_4163F3: call _sub_417520;");
    asm("loc_4163F8: mov 0x104(%edi),%eax;");
    asm("loc_4163FE: lea 0x40(%esp),%edx;");
    asm("loc_416402: push %edx;");
    asm("loc_416403: push %eax;");
    asm("loc_416404: call _sub_409840;");
    asm("loc_416409: add $0x14,%esp;");
    asm("loc_41640C: call _sub_40CDC0;");
    asm("loc_416411: mov _import_41BB88,%ecx;");
    asm("loc_416417: movl $_sub_416490,(%ecx);");
    asm("loc_41641D: call _sub_40CE70;");
    asm("loc_416422: pop %edi;");
    asm("loc_416423: pop %esi;");
    asm("loc_416424: mov $1,%eax;");
    asm("loc_416429: pop %ebp;");
    asm("loc_41642A: add $0x828,%esp;");
    asm("loc_416430: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_416440() // _sub_416440
{
    __DEBUG_ASM(416440);
    // chunk 0x416440 _sub_416440
    asm("loc_416440: sub $8,%esp;");
    asm("loc_416443: lea 0xC(%esp),%eax;");
    asm("loc_416447: push %eax;");
    asm("loc_416448: mov $_data_429DA4,%ecx;");
    asm("loc_41644D: call _sub_416F90;");
    asm("loc_416452: mov _data_429DA8,%ecx;");
    asm("loc_416458: cmp %ecx,%eax;");
    asm("loc_41645A: mov %eax,(%esp);");
    asm("loc_41645E: je loc_41646F;");
    asm("loc_416460: mov 0xC(%esp),%edx;");
    asm("loc_416464: cmp 0xC(%eax),%edx;");
    asm("loc_416467: jl loc_41646F;");
    asm("loc_416469: lea (%esp),%eax;");
    asm("loc_41646D: jmp loc_416477;");
    asm("loc_41646F: mov %ecx,4(%esp);");
    asm("loc_416473: lea 4(%esp),%eax;");
    asm("loc_416477: mov (%eax),%eax;");
    asm("loc_416479: cmp %ecx,%eax;");
    asm("loc_41647B: jne loc_416483;");
    asm("loc_41647D: xor %eax,%eax;");
    asm("loc_41647F: add $8,%esp;");
    asm("loc_416482: ret;");
    asm("loc_416483: mov 0x10(%eax),%eax;");
    asm("loc_416486: add $8,%esp;");
    asm("loc_416489: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_416490() // _sub_416490
{
    __DEBUG_ASM(416490);
    // chunk 0x416490 _sub_416490
    asm("loc_416490: push %ecx;");
    asm("loc_416491: mov 0xC(%esp),%eax;");
    asm("loc_416495: push %esi;");
    asm("loc_416496: lea 0x10(%esp),%ecx;");
    asm("loc_41649A: push %ecx;");
    asm("loc_41649B: lea 8(%esp),%edx;");
    asm("loc_41649F: push %edx;");
    asm("loc_4164A0: mov $_data_429DA4,%ecx;");
    asm("loc_4164A5: mov %eax,0x18(%esp);");
    asm("loc_4164A9: call _sub_416890;");
    asm("loc_4164AE: mov 4(%esp),%eax;");
    asm("loc_4164B2: cmp _data_429DA8,%eax;");
    asm("loc_4164B8: je loc_41654C;");
    asm("loc_4164BE: mov 0x10(%eax),%esi;");
    asm("loc_4164C1: test %esi,%esi;");
    asm("loc_4164C3: je loc_41654C;");
    asm("loc_4164C9: push %ebx;");
    asm("loc_4164CA: push %edi;");
    asm("loc_4164CB: call _sub_40CDC0;");
    asm("loc_4164D0: mov 0xC4(%esi),%eax;");
    asm("loc_4164D6: mov _import_41BBE8,%edi;");
    asm("loc_4164DC: push $0;");
    asm("loc_4164DE: push $0;");
    asm("loc_4164E0: push $0xBA;");
    asm("loc_4164E5: push %eax;");
    asm("loc_4164E6: call *%edi;");
    asm("loc_4164E8: mov 0x14(%esp),%ecx;");
    asm("loc_4164EC: mov 0xC4(%esi),%edx;");
    asm("loc_4164F2: push %ecx;");
    asm("loc_4164F3: push %edx;");
    asm("loc_4164F4: mov %eax,%ebx;");
    asm("loc_4164F6: call _sub_409880;");
    asm("loc_4164FB: mov 0xC4(%esi),%eax;");
    asm("loc_416501: push $_data_4259C4;");
    asm("loc_416506: push %eax;");
    asm("loc_416507: call _sub_409880;");
    asm("loc_41650C: mov 0xC4(%esi),%ecx;");
    asm("loc_416512: add $0x10,%esp;");
    asm("loc_416515: push $0;");
    asm("loc_416517: push $0;");
    asm("loc_416519: push $0xBA;");
    asm("loc_41651E: push %ecx;");
    asm("loc_41651F: call *%edi;");
    asm("loc_416521: mov %eax,%edi;");
    asm("loc_416523: calll *_import_41BBC0;");
    asm("loc_416529: cmp 0xC4(%esi),%eax;");
    asm("loc_41652F: je loc_416541;");
    asm("loc_416531: push $0;");
    asm("loc_416533: sub %ebx,%edi;");
    asm("loc_416535: push %edi;");
    asm("loc_416536: lea 0xA4(%esi),%ecx;");
    asm("loc_41653C: call _sub_419056;");
    asm("loc_416541: pop %edi;");
    asm("loc_416542: pop %ebx;");
    asm("loc_416543: pop %esi;");
    asm("loc_416544: add $4,%esp;");
    asm("loc_416547: jmp _sub_40CE70;");
    asm("loc_41654C: pop %esi;");
    asm("loc_41654D: pop %ecx;");
    asm("loc_41654E: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_416550() // _sub_416550
{
    __DEBUG_ASM(416550);
    // chunk 0x416550 _sub_416550
    asm("loc_416550: push %esi;");
    asm("loc_416551: mov %ecx,%esi;");
    asm("loc_416553: mov (%esi),%eax;");
    asm("loc_416555: calll *0x60(%eax);");
    asm("loc_416558: mov (%esi),%edx;");
    asm("loc_41655A: push $1;");
    asm("loc_41655C: mov %esi,%ecx;");
    asm("loc_41655E: calll *4(%edx);");
    asm("loc_416561: pop %esi;");
    asm("loc_416562: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_416570() // _nullsub_16
{
    __DEBUG_ASM(416570);
    // chunk 0x416570 _sub_416570
    asm("loc_416570: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_416580() // _sub_416580
{
    __DEBUG_ASM(416580);
    // chunk 0x416580 _sub_416580
    asm("loc_416580: mov %fs:0,%eax;");
    asm("loc_416586: push $0xFFFFFFFF;");
    asm("loc_416588: push $_sub_41AB0A;");
    asm("loc_41658D: push %eax;");
    asm("loc_41658E: mov 0x10(%esp),%eax;");
    asm("loc_416592: mov %esp,%fs:0;");
    asm("loc_416599: sub $0x83C,%esp;");
    asm("loc_41659F: push %esi;");
    asm("loc_4165A0: mov %ecx,%esi;");
    asm("loc_4165A2: cmpl $0xD,0x10(%eax);");
    asm("loc_4165A6: jne loc_4167D8;");
    asm("loc_4165AC: mov 0x84(%esi),%ecx;");
    asm("loc_4165B2: push %ebx;");
    asm("loc_4165B3: push %ebp;");
    asm("loc_4165B4: mov _import_41BBE8,%ebp;");
    asm("loc_4165BA: xor %ebx,%ebx;");
    asm("loc_4165BC: push %ebx;");
    asm("loc_4165BD: push %ebx;");
    asm("loc_4165BE: push $0xE;");
    asm("loc_4165C0: push %ecx;");
    asm("loc_4165C1: call *%ebp;");
    asm("loc_4165C3: test %eax,%eax;");
    asm("loc_4165C5: je loc_4167AC;");
    asm("loc_4165CB: mov 0x84(%esi),%eax;");
    asm("loc_4165D1: push $0x800;");
    asm("loc_4165D6: lea 0x4C(%esp),%edx;");
    asm("loc_4165DA: push %edx;");
    asm("loc_4165DB: push %eax;");
    asm("loc_4165DC: call _sub_409800;");
    asm("loc_4165E1: add $0xC,%esp;");
    asm("loc_4165E4: call _sub_40CDC0;");
    asm("loc_4165E9: mov 0x1F(%esp),%cl;");
    asm("loc_4165ED: push %ebx;");
    asm("loc_4165EE: mov %cl,0x14(%esp);");
    asm("loc_4165F2: push %ebx;");
    asm("loc_4165F3: lea 0x18(%esp),%ecx;");
    asm("loc_4165F7: call _sub_414820;");
    asm("loc_4165FC: mov %eax,0x14(%esp);");
    asm("loc_416600: mov %ebx,0x18(%esp);");
    asm("loc_416604: push $0xD801;");
    asm("loc_416609: lea 0x30(%esp),%ecx;");
    asm("loc_41660D: mov %ebx,0x854(%esp);");
    asm("loc_416614: calll *_import_41B02C;");
    asm("loc_41661A: mov (%eax),%edx;");
    asm("loc_41661C: mov %eax,%ecx;");
    asm("loc_41661E: movb $1,0x850(%esp);");
    asm("loc_416626: calll *0x1C(%edx);");
    asm("loc_416629: mov %eax,0xC(%esp);");
    asm("loc_41662D: mov 0x14(%esp),%ecx;");
    asm("loc_416631: lea 0xC(%esp),%eax;");
    asm("loc_416635: push %eax;");
    asm("loc_416636: push %ecx;");
    asm("loc_416637: lea 0x28(%esp),%edx;");
    asm("loc_41663B: push %edx;");
    asm("loc_41663C: lea 0x1C(%esp),%ecx;");
    asm("loc_416640: movb $2,0x85C(%esp);");
    asm("loc_416648: call _sub_4147C0;");
    asm("loc_41664D: mov 0xC(%esp),%ecx;");
    asm("loc_416651: cmp %ebx,%ecx;");
    asm("loc_416653: movb $1,0x850(%esp);");
    asm("loc_41665B: je loc_416667;");
    asm("loc_41665D: mov (%ecx),%eax;");
    asm("loc_41665F: push $1;");
    asm("loc_416661: calll *(%eax);");
    asm("loc_416663: mov %ebx,0xC(%esp);");
    asm("loc_416667: lea 0x2C(%esp),%ecx;");
    asm("loc_41666B: mov %bl,0x850(%esp);");
    asm("loc_416672: calll *_import_41B030;");
    asm("loc_416678: push $0xFFFFFFFF;");
    asm("loc_41667A: lea 0x4C(%esp),%ecx;");
    asm("loc_41667E: push %ecx;");
    asm("loc_41667F: lea 0x3C(%esp),%ecx;");
    asm("loc_416683: calll *_import_41B034;");
    asm("loc_416689: mov (%eax),%edx;");
    asm("loc_41668B: mov %eax,%ecx;");
    asm("loc_41668D: movb $3,0x850(%esp);");
    asm("loc_416695: calll *0x1C(%edx);");
    asm("loc_416698: mov %eax,0xC(%esp);");
    asm("loc_41669C: mov 0x14(%esp),%ecx;");
    asm("loc_4166A0: lea 0xC(%esp),%eax;");
    asm("loc_4166A4: push %eax;");
    asm("loc_4166A5: push %ecx;");
    asm("loc_4166A6: lea 0x28(%esp),%edx;");
    asm("loc_4166AA: push %edx;");
    asm("loc_4166AB: lea 0x1C(%esp),%ecx;");
    asm("loc_4166AF: movb $4,0x85C(%esp);");
    asm("loc_4166B7: call _sub_4147C0;");
    asm("loc_4166BC: mov 0xC(%esp),%ecx;");
    asm("loc_4166C0: cmp %ebx,%ecx;");
    asm("loc_4166C2: movb $3,0x850(%esp);");
    asm("loc_4166CA: je loc_4166D6;");
    asm("loc_4166CC: mov (%ecx),%eax;");
    asm("loc_4166CE: push $1;");
    asm("loc_4166D0: calll *(%eax);");
    asm("loc_4166D2: mov %ebx,0xC(%esp);");
    asm("loc_4166D6: lea 0x34(%esp),%ecx;");
    asm("loc_4166DA: mov %bl,0x850(%esp);");
    asm("loc_4166E1: calll *_import_41B038;");
    asm("loc_4166E7: mov _import_41B03C,%ecx;");
    asm("loc_4166ED: lea 0x24(%esp),%edx;");
    asm("loc_4166F1: push %edx;");
    asm("loc_4166F2: push $0x800;");
    asm("loc_4166F7: push $_data_429590;");
    asm("loc_4166FC: lea 0x1C(%esp),%eax;");
    asm("loc_416700: mov %ecx,0x34(%esp);");
    asm("loc_416704: push %eax;");
    asm("loc_416705: lea 0x38(%esp),%ecx;");
    asm("loc_416709: calll *_import_41B094;");
    asm("loc_41670F: test %al,%al;");
    asm("loc_416711: je loc_416748;");
    asm("loc_416713: mov 0x60(%esi),%ecx;");
    asm("loc_416716: mov _data_42958C,%edx;");
    asm("loc_41671C: mov 0x24(%esp),%eax;");
    asm("loc_416720: push %ecx;");
    asm("loc_416721: push %edx;");
    asm("loc_416722: mov _import_41BB70,%edx;");
    asm("loc_416728: push $_data_429590;");
    asm("loc_41672D: mov %bx,0x18(%esp);");
    asm("loc_416732: mov %bl,0x1A(%esp);");
    asm("loc_416736: mov %bl,0x1B(%esp);");
    asm("loc_41673A: mov 0x18(%esp),%ecx;");
    asm("loc_41673E: push %eax;");
    asm("loc_41673F: push %ecx;");
    asm("loc_416740: lea 4(%edx),%ecx;");
    asm("loc_416743: call _sub_4188F4;");
    asm("loc_416748: push %edi;");
    asm("loc_416749: call _sub_40CE70;");
    asm("loc_41674E: mov 0x18(%esp),%eax;");
    asm("loc_416752: mov (%eax),%ecx;");
    asm("loc_416754: cmp %eax,%ecx;");
    asm("loc_416756: movl $0xFFFFFFFF,0x854(%esp);");
    asm("loc_416761: mov %eax,%edi;");
    asm("loc_416763: mov %ecx,0x10(%esp);");
    asm("loc_416767: je loc_41679A;");
    asm("loc_416769: lea (%esp),%esp;");
    asm("loc_416770: push %ebx;");
    asm("loc_416771: lea 0x28(%esp),%eax;");
    asm("loc_416775: push %eax;");
    asm("loc_416776: lea 0x18(%esp),%ecx;");
    asm("loc_41677A: call _sub_416D10;");
    asm("loc_41677F: mov (%eax),%ecx;");
    asm("loc_416781: push %ecx;");
    asm("loc_416782: lea 0x34(%esp),%edx;");
    asm("loc_416786: push %edx;");
    asm("loc_416787: lea 0x1C(%esp),%ecx;");
    asm("loc_41678B: call _sub_414EC0;");
    asm("loc_416790: cmp %edi,0x10(%esp);");
    asm("loc_416794: jne loc_416770;");
    asm("loc_416796: mov 0x18(%esp),%eax;");
    asm("loc_41679A: push %eax;");
    asm("loc_41679B: call _sub_418978;");
    asm("loc_4167A0: add $4,%esp;");
    asm("loc_4167A3: mov %ebx,0x18(%esp);");
    asm("loc_4167A7: mov %ebx,0x1C(%esp);");
    asm("loc_4167AB: pop %edi;");
    asm("loc_4167AC: push $0xFFFFFFFF;");
    asm("loc_4167AE: push %ebx;");
    asm("loc_4167AF: lea 0x64(%esi),%ecx;");
    asm("loc_4167B2: call _sub_419050;");
    asm("loc_4167B7: mov 0x84(%esi),%eax;");
    asm("loc_4167BD: push %ebx;");
    asm("loc_4167BE: push %ebx;");
    asm("loc_4167BF: push $0x303;");
    asm("loc_4167C4: push %eax;");
    asm("loc_4167C5: call *%ebp;");
    asm("loc_4167C7: mov 0x85C(%esp),%ecx;");
    asm("loc_4167CE: pop %ebp;");
    asm("loc_4167CF: movl $1,(%ecx);");
    asm("loc_4167D5: pop %ebx;");
    asm("loc_4167D6: jmp loc_4167E5;");
    asm("loc_4167D8: mov 0x854(%esp),%edx;");
    asm("loc_4167DF: movl $0,(%edx);");
    asm("loc_4167E5: mov 0x840(%esp),%ecx;");
    asm("loc_4167EC: pop %esi;");
    asm("loc_4167ED: mov %ecx,%fs:0;");
    asm("loc_4167F4: add $0x848,%esp;");
    asm("loc_4167FA: ret $8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_416800() // _sub_416800
{
    __DEBUG_ASM(416800);
    // chunk 0x416800 _sub_416800
    asm("loc_416800: mov (%ecx),%eax;");
    asm("loc_416802: jmpl *0xD0(%eax);");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_416810() // _sub_416810
{
    __DEBUG_ASM(416810);
    // chunk 0x416810 _sub_416810
    asm("loc_416810: mov 8(%esp),%eax;");
    asm("loc_416814: mov 4(%esp),%edx;");
    asm("loc_416818: push %ebx;");
    asm("loc_416819: push %esi;");
    asm("loc_41681A: mov %ecx,%esi;");
    asm("loc_41681C: mov (%eax),%cl;");
    asm("loc_41681E: mov %cl,(%esi);");
    asm("loc_416820: mov (%edx),%al;");
    asm("loc_416822: push %edi;");
    asm("loc_416823: xor %ebx,%ebx;");
    asm("loc_416825: push $0x18;");
    asm("loc_416827: mov %al,1(%esi);");
    asm("loc_41682A: mov %bl,0xC(%esi);");
    asm("loc_41682D: call _sub_418A9E;");
    asm("loc_416832: mov %ebx,4(%eax);");
    asm("loc_416835: mov %bl,0x15(%eax);");
    asm("loc_416838: mov $1,%cl;");
    asm("loc_41683A: mov %cl,0x14(%eax);");
    asm("loc_41683D: mov %eax,8(%esi);");
    asm("loc_416840: mov %cl,0x15(%eax);");
    asm("loc_416843: mov 8(%esi),%ecx;");
    asm("loc_416846: mov %ebx,(%ecx);");
    asm("loc_416848: mov 8(%esi),%edx;");
    asm("loc_41684B: mov %ebx,8(%edx);");
    asm("loc_41684E: mov 8(%esi),%edi;");
    asm("loc_416851: push $0x18;");
    asm("loc_416853: call _sub_418A9E;");
    asm("loc_416858: mov %edi,4(%eax);");
    asm("loc_41685B: mov %bl,0x14(%eax);");
    asm("loc_41685E: mov %bl,0x15(%eax);");
    asm("loc_416861: mov %eax,4(%esi);");
    asm("loc_416864: mov %eax,(%eax);");
    asm("loc_416866: mov 4(%esi),%eax;");
    asm("loc_416869: add $8,%esp;");
    asm("loc_41686C: mov %eax,8(%eax);");
    asm("loc_41686F: pop %edi;");
    asm("loc_416870: mov %ebx,0x10(%esi);");
    asm("loc_416873: mov %esi,%eax;");
    asm("loc_416875: pop %esi;");
    asm("loc_416876: pop %ebx;");
    asm("loc_416877: ret $8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_416880() // _sub_416880
{
    __DEBUG_ASM(416880);
    // chunk 0x416880 _sub_416880
    asm("loc_416880: mov 4(%ecx),%eax;");
    asm("loc_416883: mov (%eax),%ecx;");
    asm("loc_416885: mov 4(%esp),%eax;");
    asm("loc_416889: mov %ecx,(%eax);");
    asm("loc_41688B: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_416890() // _sub_416890
{
    __DEBUG_ASM(416890);
    // chunk 0x416890 _sub_416890
    asm("loc_416890: push %ecx;");
    asm("loc_416891: mov 4(%ecx),%edx;");
    asm("loc_416894: mov 4(%edx),%eax;");
    asm("loc_416897: mov 8(%ecx),%ecx;");
    asm("loc_41689A: cmp %ecx,%eax;");
    asm("loc_41689C: push %ebx;");
    asm("loc_41689D: mov 0x10(%esp),%ebx;");
    asm("loc_4168A1: push %esi;");
    asm("loc_4168A2: mov %edx,%esi;");
    asm("loc_4168A4: je loc_4168C3;");
    asm("loc_4168A6: push %edi;");
    asm("loc_4168A7: mov (%ebx),%edi;");
    asm("loc_4168A9: lea (%esp),%esp;");
    asm("loc_4168B0: cmp %edi,0xC(%eax);");
    asm("loc_4168B3: jge loc_4168BA;");
    asm("loc_4168B5: mov 8(%eax),%eax;");
    asm("loc_4168B8: jmp loc_4168BE;");
    asm("loc_4168BA: mov %eax,%esi;");
    asm("loc_4168BC: mov (%eax),%eax;");
    asm("loc_4168BE: cmp %ecx,%eax;");
    asm("loc_4168C0: jne loc_4168B0;");
    asm("loc_4168C2: pop %edi;");
    asm("loc_4168C3: cmp %edx,%esi;");
    asm("loc_4168C5: mov %esi,0x14(%esp);");
    asm("loc_4168C9: je loc_4168E4;");
    asm("loc_4168CB: mov (%ebx),%eax;");
    asm("loc_4168CD: cmp 0xC(%esi),%eax;");
    asm("loc_4168D0: jl loc_4168E4;");
    asm("loc_4168D2: lea 0x14(%esp),%eax;");
    asm("loc_4168D6: mov (%eax),%ecx;");
    asm("loc_4168D8: mov 0x10(%esp),%eax;");
    asm("loc_4168DC: pop %esi;");
    asm("loc_4168DD: mov %ecx,(%eax);");
    asm("loc_4168DF: pop %ebx;");
    asm("loc_4168E0: pop %ecx;");
    asm("loc_4168E1: ret $8;");
    asm("loc_4168E4: lea 8(%esp),%eax;");
    asm("loc_4168E8: mov %edx,8(%esp);");
    asm("loc_4168EC: mov (%eax),%ecx;");
    asm("loc_4168EE: mov 0x10(%esp),%eax;");
    asm("loc_4168F2: pop %esi;");
    asm("loc_4168F3: mov %ecx,(%eax);");
    asm("loc_4168F5: pop %ebx;");
    asm("loc_4168F6: pop %ecx;");
    asm("loc_4168F7: ret $8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_416900() // _sub_416900
{
    __DEBUG_ASM(416900);
    // chunk 0x416900 _sub_416900
    asm("loc_416900: push %ecx;");
    asm("loc_416901: push %ebx;");
    asm("loc_416902: push %ebp;");
    asm("loc_416903: push %esi;");
    asm("loc_416904: mov 0x18(%esp),%esi;");
    asm("loc_416908: push %edi;");
    asm("loc_416909: mov %ecx,%edi;");
    asm("loc_41690B: lea 0x1C(%esp),%ecx;");
    asm("loc_41690F: call _sub_417070;");
    asm("loc_416914: mov (%esi),%edx;");
    asm("loc_416916: mov 8(%edi),%eax;");
    asm("loc_416919: cmp %eax,%edx;");
    asm("loc_41691B: mov %esi,0x10(%esp);");
    asm("loc_41691F: jne loc_416942;");
    asm("loc_416921: mov 8(%esi),%eax;");
    asm("loc_416924: mov 0x10(%esp),%ecx;");
    asm("loc_416928: mov 4(%ecx),%edx;");
    asm("loc_41692B: mov %edx,4(%eax);");
    asm("loc_41692E: mov 4(%edi),%ecx;");
    asm("loc_416931: cmp %esi,4(%ecx);");
    asm("loc_416934: jne loc_4169C7;");
    asm("loc_41693A: mov %eax,4(%ecx);");
    asm("loc_41693D: jmp loc_4169D5;");
    asm("loc_416942: mov 8(%esi),%ecx;");
    asm("loc_416945: cmp %eax,%ecx;");
    asm("loc_416947: jne loc_41694D;");
    asm("loc_416949: mov %edx,%eax;");
    asm("loc_41694B: jmp loc_416924;");
    asm("loc_41694D: mov (%ecx),%eax;");
    asm("loc_41694F: mov 0x15(%eax),%bl;");
    asm("loc_416952: test %bl,%bl;");
    asm("loc_416954: jne loc_416961;");
    asm("loc_416956: mov %eax,%ecx;");
    asm("loc_416958: mov (%ecx),%eax;");
    asm("loc_41695A: mov 0x15(%eax),%bl;");
    asm("loc_41695D: test %bl,%bl;");
    asm("loc_41695F: je loc_416956;");
    asm("loc_416961: cmp %esi,%ecx;");
    asm("loc_416963: mov 8(%ecx),%eax;");
    asm("loc_416966: mov %ecx,0x10(%esp);");
    asm("loc_41696A: je loc_416924;");
    asm("loc_41696C: mov %ecx,4(%edx);");
    asm("loc_41696F: mov (%esi),%edx;");
    asm("loc_416971: mov %edx,(%ecx);");
    asm("loc_416973: cmp 8(%esi),%ecx;");
    asm("loc_416976: jne loc_41697D;");
    asm("loc_416978: mov %ecx,4(%eax);");
    asm("loc_41697B: jmp loc_416994;");
    asm("loc_41697D: mov 4(%ecx),%edx;");
    asm("loc_416980: mov %edx,4(%eax);");
    asm("loc_416983: mov 4(%ecx),%edx;");
    asm("loc_416986: mov %eax,(%edx);");
    asm("loc_416988: mov 8(%esi),%edx;");
    asm("loc_41698B: mov %edx,8(%ecx);");
    asm("loc_41698E: mov 8(%esi),%edx;");
    asm("loc_416991: mov %ecx,4(%edx);");
    asm("loc_416994: mov 4(%edi),%edx;");
    asm("loc_416997: cmp %esi,4(%edx);");
    asm("loc_41699A: jne loc_4169A1;");
    asm("loc_41699C: mov %ecx,4(%edx);");
    asm("loc_41699F: jmp loc_4169AF;");
    asm("loc_4169A1: mov 4(%esi),%edx;");
    asm("loc_4169A4: cmp %esi,(%edx);");
    asm("loc_4169A6: jne loc_4169AC;");
    asm("loc_4169A8: mov %ecx,(%edx);");
    asm("loc_4169AA: jmp loc_4169AF;");
    asm("loc_4169AC: mov %ecx,8(%edx);");
    asm("loc_4169AF: mov 4(%esi),%edx;");
    asm("loc_4169B2: mov %edx,4(%ecx);");
    asm("loc_4169B5: mov 0x14(%esi),%bl;");
    asm("loc_4169B8: mov 0x14(%ecx),%dl;");
    asm("loc_4169BB: mov %bl,0x14(%ecx);");
    asm("loc_4169BE: mov %dl,0x14(%esi);");
    asm("loc_4169C1: mov %esi,0x10(%esp);");
    asm("loc_4169C5: jmp loc_416A32;");
    asm("loc_4169C7: mov 4(%esi),%ecx;");
    asm("loc_4169CA: cmp %esi,(%ecx);");
    asm("loc_4169CC: jne loc_4169D2;");
    asm("loc_4169CE: mov %eax,(%ecx);");
    asm("loc_4169D0: jmp loc_4169D5;");
    asm("loc_4169D2: mov %eax,8(%ecx);");
    asm("loc_4169D5: mov 4(%edi),%ebp;");
    asm("loc_4169D8: cmp %esi,(%ebp);");
    asm("loc_4169DB: jne loc_416A03;");
    asm("loc_4169DD: mov 8(%esi),%ecx;");
    asm("loc_4169E0: cmp 8(%edi),%ecx;");
    asm("loc_4169E3: jne loc_4169EA;");
    asm("loc_4169E5: mov 4(%esi),%edx;");
    asm("loc_4169E8: jmp loc_416A00;");
    asm("loc_4169EA: mov (%eax),%ecx;");
    asm("loc_4169EC: mov 0x15(%ecx),%bl;");
    asm("loc_4169EF: test %bl,%bl;");
    asm("loc_4169F1: mov %eax,%edx;");
    asm("loc_4169F3: jne loc_416A00;");
    asm("loc_4169F5: mov %ecx,%edx;");
    asm("loc_4169F7: mov (%edx),%ecx;");
    asm("loc_4169F9: mov 0x15(%ecx),%bl;");
    asm("loc_4169FC: test %bl,%bl;");
    asm("loc_4169FE: je loc_4169F5;");
    asm("loc_416A00: mov %edx,(%ebp);");
    asm("loc_416A03: mov 4(%edi),%ebp;");
    asm("loc_416A06: cmp %esi,8(%ebp);");
    asm("loc_416A09: jne loc_416A32;");
    asm("loc_416A0B: mov (%esi),%ecx;");
    asm("loc_416A0D: cmp 8(%edi),%ecx;");
    asm("loc_416A10: jne loc_416A17;");
    asm("loc_416A12: mov 4(%esi),%edx;");
    asm("loc_416A15: jmp loc_416A2F;");
    asm("loc_416A17: mov 8(%eax),%ecx;");
    asm("loc_416A1A: mov 0x15(%ecx),%bl;");
    asm("loc_416A1D: test %bl,%bl;");
    asm("loc_416A1F: mov %eax,%edx;");
    asm("loc_416A21: jne loc_416A2F;");
    asm("loc_416A23: mov %ecx,%edx;");
    asm("loc_416A25: mov 8(%edx),%ecx;");
    asm("loc_416A28: mov 0x15(%ecx),%bl;");
    asm("loc_416A2B: test %bl,%bl;");
    asm("loc_416A2D: je loc_416A23;");
    asm("loc_416A2F: mov %edx,8(%ebp);");
    asm("loc_416A32: mov 0x10(%esp),%ecx;");
    asm("loc_416A36: mov 0x14(%ecx),%dl;");
    asm("loc_416A39: mov $1,%bl;");
    asm("loc_416A3B: cmp %bl,%dl;");
    asm("loc_416A3D: jne loc_416CAA;");
    asm("loc_416A43: mov 4(%edi),%edx;");
    asm("loc_416A46: cmp 4(%edx),%eax;");
    asm("loc_416A49: je loc_416CA7;");
    asm("loc_416A4F: nop;");
    asm("loc_416A50: cmp %bl,0x14(%eax);");
    asm("loc_416A53: jne loc_416CA7;");
    asm("loc_416A59: mov 4(%eax),%edx;");
    asm("loc_416A5C: mov (%edx),%ecx;");
    asm("loc_416A5E: cmp %ecx,%eax;");
    asm("loc_416A60: jne loc_416B0F;");
    asm("loc_416A66: mov 8(%edx),%ecx;");
    asm("loc_416A69: mov 0x14(%ecx),%dl;");
    asm("loc_416A6C: test %dl,%dl;");
    asm("loc_416A6E: jne loc_416ABB;");
    asm("loc_416A70: mov %bl,0x14(%ecx);");
    asm("loc_416A73: mov 4(%eax),%ecx;");
    asm("loc_416A76: movb $0,0x14(%ecx);");
    asm("loc_416A7A: mov 4(%eax),%ecx;");
    asm("loc_416A7D: mov 8(%ecx),%edx;");
    asm("loc_416A80: mov (%edx),%esi;");
    asm("loc_416A82: mov %esi,8(%ecx);");
    asm("loc_416A85: mov (%edx),%esi;");
    asm("loc_416A87: cmp 8(%edi),%esi;");
    asm("loc_416A8A: je loc_416A8F;");
    asm("loc_416A8C: mov %ecx,4(%esi);");
    asm("loc_416A8F: mov 4(%ecx),%esi;");
    asm("loc_416A92: mov %esi,4(%edx);");
    asm("loc_416A95: mov 4(%edi),%esi;");
    asm("loc_416A98: cmp 4(%esi),%ecx;");
    asm("loc_416A9B: jne loc_416AA2;");
    asm("loc_416A9D: mov %edx,4(%esi);");
    asm("loc_416AA0: jmp loc_416AB0;");
    asm("loc_416AA2: mov 4(%ecx),%esi;");
    asm("loc_416AA5: cmp (%esi),%ecx;");
    asm("loc_416AA7: jne loc_416AAD;");
    asm("loc_416AA9: mov %edx,(%esi);");
    asm("loc_416AAB: jmp loc_416AB0;");
    asm("loc_416AAD: mov %edx,8(%esi);");
    asm("loc_416AB0: mov %ecx,(%edx);");
    asm("loc_416AB2: mov %edx,4(%ecx);");
    asm("loc_416AB5: mov 4(%eax),%edx;");
    asm("loc_416AB8: mov 8(%edx),%ecx;");
    asm("loc_416ABB: mov (%ecx),%edx;");
    asm("loc_416ABD: cmp %bl,0x14(%edx);");
    asm("loc_416AC0: jne loc_416ACE;");
    asm("loc_416AC2: mov 8(%ecx),%edx;");
    asm("loc_416AC5: cmp %bl,0x14(%edx);");
    asm("loc_416AC8: je loc_416B79;");
    asm("loc_416ACE: mov 8(%ecx),%edx;");
    asm("loc_416AD1: cmp %bl,0x14(%edx);");
    asm("loc_416AD4: jne loc_416BAC;");
    asm("loc_416ADA: mov (%ecx),%edx;");
    asm("loc_416ADC: mov %bl,0x14(%edx);");
    asm("loc_416ADF: mov (%ecx),%edx;");
    asm("loc_416AE1: movb $0,0x14(%ecx);");
    asm("loc_416AE5: mov 8(%edx),%esi;");
    asm("loc_416AE8: mov %esi,(%ecx);");
    asm("loc_416AEA: mov 8(%edx),%esi;");
    asm("loc_416AED: cmp 8(%edi),%esi;");
    asm("loc_416AF0: je loc_416AF5;");
    asm("loc_416AF2: mov %ecx,4(%esi);");
    asm("loc_416AF5: mov 4(%ecx),%esi;");
    asm("loc_416AF8: mov %esi,4(%edx);");
    asm("loc_416AFB: mov 4(%edi),%esi;");
    asm("loc_416AFE: cmp 4(%esi),%ecx;");
    asm("loc_416B01: jne loc_416B91;");
    asm("loc_416B07: mov %edx,4(%esi);");
    asm("loc_416B0A: jmp loc_416BA0;");
    asm("loc_416B0F: mov 0x14(%ecx),%dl;");
    asm("loc_416B12: test %dl,%dl;");
    asm("loc_416B14: jne loc_416B62;");
    asm("loc_416B16: mov %bl,0x14(%ecx);");
    asm("loc_416B19: mov 4(%eax),%ecx;");
    asm("loc_416B1C: movb $0,0x14(%ecx);");
    asm("loc_416B20: mov 4(%eax),%ecx;");
    asm("loc_416B23: mov (%ecx),%edx;");
    asm("loc_416B25: mov 8(%edx),%esi;");
    asm("loc_416B28: mov %esi,(%ecx);");
    asm("loc_416B2A: mov 8(%edx),%esi;");
    asm("loc_416B2D: cmp 8(%edi),%esi;");
    asm("loc_416B30: je loc_416B35;");
    asm("loc_416B32: mov %ecx,4(%esi);");
    asm("loc_416B35: mov 4(%ecx),%esi;");
    asm("loc_416B38: mov %esi,4(%edx);");
    asm("loc_416B3B: mov 4(%edi),%esi;");
    asm("loc_416B3E: cmp 4(%esi),%ecx;");
    asm("loc_416B41: jne loc_416B48;");
    asm("loc_416B43: mov %edx,4(%esi);");
    asm("loc_416B46: jmp loc_416B57;");
    asm("loc_416B48: mov 4(%ecx),%esi;");
    asm("loc_416B4B: cmp 8(%esi),%ecx;");
    asm("loc_416B4E: jne loc_416B55;");
    asm("loc_416B50: mov %edx,8(%esi);");
    asm("loc_416B53: jmp loc_416B57;");
    asm("loc_416B55: mov %edx,(%esi);");
    asm("loc_416B57: mov %ecx,8(%edx);");
    asm("loc_416B5A: mov %edx,4(%ecx);");
    asm("loc_416B5D: mov 4(%eax),%edx;");
    asm("loc_416B60: mov (%edx),%ecx;");
    asm("loc_416B62: mov 8(%ecx),%edx;");
    asm("loc_416B65: cmp %bl,0x14(%edx);");
    asm("loc_416B68: jne loc_416C08;");
    asm("loc_416B6E: mov (%ecx),%edx;");
    asm("loc_416B70: cmp %bl,0x14(%edx);");
    asm("loc_416B73: jne loc_416C08;");
    asm("loc_416B79: movb $0,0x14(%ecx);");
    asm("loc_416B7D: mov 4(%edi),%ecx;");
    asm("loc_416B80: mov 4(%eax),%eax;");
    asm("loc_416B83: cmp 4(%ecx),%eax;");
    asm("loc_416B86: jne loc_416A50;");
    asm("loc_416B8C: jmp loc_416CA7;");
    asm("loc_416B91: mov 4(%ecx),%esi;");
    asm("loc_416B94: cmp 8(%esi),%ecx;");
    asm("loc_416B97: jne loc_416B9E;");
    asm("loc_416B99: mov %edx,8(%esi);");
    asm("loc_416B9C: jmp loc_416BA0;");
    asm("loc_416B9E: mov %edx,(%esi);");
    asm("loc_416BA0: mov %ecx,8(%edx);");
    asm("loc_416BA3: mov %edx,4(%ecx);");
    asm("loc_416BA6: mov 4(%eax),%ecx;");
    asm("loc_416BA9: mov 8(%ecx),%ecx;");
    asm("loc_416BAC: mov 4(%eax),%edx;");
    asm("loc_416BAF: mov 0x14(%edx),%dl;");
    asm("loc_416BB2: mov %dl,0x14(%ecx);");
    asm("loc_416BB5: mov 4(%eax),%edx;");
    asm("loc_416BB8: mov %bl,0x14(%edx);");
    asm("loc_416BBB: mov 8(%ecx),%ecx;");
    asm("loc_416BBE: mov %bl,0x14(%ecx);");
    asm("loc_416BC1: mov 4(%eax),%ecx;");
    asm("loc_416BC4: mov 8(%ecx),%edx;");
    asm("loc_416BC7: mov (%edx),%esi;");
    asm("loc_416BC9: mov %esi,8(%ecx);");
    asm("loc_416BCC: mov (%edx),%esi;");
    asm("loc_416BCE: cmp 8(%edi),%esi;");
    asm("loc_416BD1: je loc_416BD6;");
    asm("loc_416BD3: mov %ecx,4(%esi);");
    asm("loc_416BD6: mov 4(%ecx),%esi;");
    asm("loc_416BD9: mov %esi,4(%edx);");
    asm("loc_416BDC: mov 4(%edi),%esi;");
    asm("loc_416BDF: cmp 4(%esi),%ecx;");
    asm("loc_416BE2: jne loc_416BEE;");
    asm("loc_416BE4: mov %edx,4(%esi);");
    asm("loc_416BE7: mov %ecx,(%edx);");
    asm("loc_416BE9: jmp loc_416CA4;");
    asm("loc_416BEE: mov 4(%ecx),%esi;");
    asm("loc_416BF1: cmp (%esi),%ecx;");
    asm("loc_416BF3: jne loc_416BFE;");
    asm("loc_416BF5: mov %edx,(%esi);");
    asm("loc_416BF7: mov %ecx,(%edx);");
    asm("loc_416BF9: jmp loc_416CA4;");
    asm("loc_416BFE: mov %edx,8(%esi);");
    asm("loc_416C01: mov %ecx,(%edx);");
    asm("loc_416C03: jmp loc_416CA4;");
    asm("loc_416C08: mov (%ecx),%edx;");
    asm("loc_416C0A: cmp %bl,0x14(%edx);");
    asm("loc_416C0D: jne loc_416C56;");
    asm("loc_416C0F: mov 8(%ecx),%edx;");
    asm("loc_416C12: mov %bl,0x14(%edx);");
    asm("loc_416C15: mov 8(%ecx),%edx;");
    asm("loc_416C18: movb $0,0x14(%ecx);");
    asm("loc_416C1C: mov (%edx),%esi;");
    asm("loc_416C1E: mov %esi,8(%ecx);");
    asm("loc_416C21: mov (%edx),%esi;");
    asm("loc_416C23: cmp 8(%edi),%esi;");
    asm("loc_416C26: je loc_416C2B;");
    asm("loc_416C28: mov %ecx,4(%esi);");
    asm("loc_416C2B: mov 4(%ecx),%esi;");
    asm("loc_416C2E: mov %esi,4(%edx);");
    asm("loc_416C31: mov 4(%edi),%esi;");
    asm("loc_416C34: cmp 4(%esi),%ecx;");
    asm("loc_416C37: jne loc_416C3E;");
    asm("loc_416C39: mov %edx,4(%esi);");
    asm("loc_416C3C: jmp loc_416C4C;");
    asm("loc_416C3E: mov 4(%ecx),%esi;");
    asm("loc_416C41: cmp (%esi),%ecx;");
    asm("loc_416C43: jne loc_416C49;");
    asm("loc_416C45: mov %edx,(%esi);");
    asm("loc_416C47: jmp loc_416C4C;");
    asm("loc_416C49: mov %edx,8(%esi);");
    asm("loc_416C4C: mov %ecx,(%edx);");
    asm("loc_416C4E: mov %edx,4(%ecx);");
    asm("loc_416C51: mov 4(%eax),%ecx;");
    asm("loc_416C54: mov (%ecx),%ecx;");
    asm("loc_416C56: mov 4(%eax),%edx;");
    asm("loc_416C59: mov 0x14(%edx),%dl;");
    asm("loc_416C5C: mov %dl,0x14(%ecx);");
    asm("loc_416C5F: mov 4(%eax),%edx;");
    asm("loc_416C62: mov %bl,0x14(%edx);");
    asm("loc_416C65: mov (%ecx),%ecx;");
    asm("loc_416C67: mov %bl,0x14(%ecx);");
    asm("loc_416C6A: mov 4(%eax),%ecx;");
    asm("loc_416C6D: mov (%ecx),%edx;");
    asm("loc_416C6F: mov 8(%edx),%esi;");
    asm("loc_416C72: mov %esi,(%ecx);");
    asm("loc_416C74: mov 8(%edx),%esi;");
    asm("loc_416C77: cmp 8(%edi),%esi;");
    asm("loc_416C7A: je loc_416C7F;");
    asm("loc_416C7C: mov %ecx,4(%esi);");
    asm("loc_416C7F: mov 4(%ecx),%esi;");
    asm("loc_416C82: mov %esi,4(%edx);");
    asm("loc_416C85: mov 4(%edi),%esi;");
    asm("loc_416C88: cmp 4(%esi),%ecx;");
    asm("loc_416C8B: jne loc_416C92;");
    asm("loc_416C8D: mov %edx,4(%esi);");
    asm("loc_416C90: jmp loc_416CA1;");
    asm("loc_416C92: mov 4(%ecx),%esi;");
    asm("loc_416C95: cmp 8(%esi),%ecx;");
    asm("loc_416C98: jne loc_416C9F;");
    asm("loc_416C9A: mov %edx,8(%esi);");
    asm("loc_416C9D: jmp loc_416CA1;");
    asm("loc_416C9F: mov %edx,(%esi);");
    asm("loc_416CA1: mov %ecx,8(%edx);");
    asm("loc_416CA4: mov %edx,4(%ecx);");
    asm("loc_416CA7: mov %bl,0x14(%eax);");
    asm("loc_416CAA: mov 0x10(%esp),%edx;");
    asm("loc_416CAE: push %edx;");
    asm("loc_416CAF: call _sub_418978;");
    asm("loc_416CB4: mov 0x10(%edi),%eax;");
    asm("loc_416CB7: mov 0x20(%esp),%ecx;");
    asm("loc_416CBB: add $4,%esp;");
    asm("loc_416CBE: dec %eax;");
    asm("loc_416CBF: mov %eax,0x10(%edi);");
    asm("loc_416CC2: mov 0x18(%esp),%eax;");
    asm("loc_416CC6: pop %edi;");
    asm("loc_416CC7: pop %esi;");
    asm("loc_416CC8: pop %ebp;");
    asm("loc_416CC9: mov %ecx,(%eax);");
    asm("loc_416CCB: pop %ebx;");
    asm("loc_416CCC: pop %ecx;");
    asm("loc_416CCD: ret $8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_416CD0() // _sub_416CD0
{
    __DEBUG_ASM(416CD0);
    // chunk 0x416CD0 _sub_416CD0
    asm("loc_416CD0: push %ebx;");
    asm("loc_416CD1: push %esi;");
    asm("loc_416CD2: mov %ecx,%ebx;");
    asm("loc_416CD4: mov 8(%ebx),%eax;");
    asm("loc_416CD7: push %edi;");
    asm("loc_416CD8: mov 0x10(%esp),%edi;");
    asm("loc_416CDC: cmp %eax,%edi;");
    asm("loc_416CDE: mov %edi,%esi;");
    asm("loc_416CE0: je loc_416D01;");
    asm("loc_416CE2: mov 8(%esi),%eax;");
    asm("loc_416CE5: push %eax;");
    asm("loc_416CE6: mov %ebx,%ecx;");
    asm("loc_416CE8: call _sub_416CD0;");
    asm("loc_416CED: mov (%esi),%esi;");
    asm("loc_416CEF: push %edi;");
    asm("loc_416CF0: call _sub_418978;");
    asm("loc_416CF5: mov 8(%ebx),%eax;");
    asm("loc_416CF8: add $4,%esp;");
    asm("loc_416CFB: cmp %eax,%esi;");
    asm("loc_416CFD: mov %esi,%edi;");
    asm("loc_416CFF: jne loc_416CE2;");
    asm("loc_416D01: pop %edi;");
    asm("loc_416D02: pop %esi;");
    asm("loc_416D03: pop %ebx;");
    asm("loc_416D04: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_416D10() // _sub_416D10
{
    __DEBUG_ASM(416D10);
    // chunk 0x416D10 _sub_416D10
    asm("loc_416D10: mov (%ecx),%edx;");
    asm("loc_416D12: mov (%edx),%eax;");
    asm("loc_416D14: mov %eax,(%ecx);");
    asm("loc_416D16: mov 4(%esp),%eax;");
    asm("loc_416D1A: mov %edx,(%eax);");
    asm("loc_416D1C: ret $8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_416D20() // _sub_416D20
{
    __DEBUG_ASM(416D20);
    // chunk 0x416D20 _sub_416D20
    asm("loc_416D20: mov %ecx,%eax;");
    asm("loc_416D22: mov 4(%esp),%ecx;");
    asm("loc_416D26: mov (%ecx),%edx;");
    asm("loc_416D28: mov 8(%esp),%ecx;");
    asm("loc_416D2C: mov %edx,(%eax);");
    asm("loc_416D2E: mov (%ecx),%dl;");
    asm("loc_416D30: mov %dl,4(%eax);");
    asm("loc_416D33: ret $8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_416D40() // _sub_416D40
{
    __DEBUG_ASM(416D40);
    // chunk 0x416D40 _sub_416D40
    asm("loc_416D40: push %ebx;");
    asm("loc_416D41: push %ebp;");
    asm("loc_416D42: push %esi;");
    asm("loc_416D43: push %edi;");
    asm("loc_416D44: push $0x18;");
    asm("loc_416D46: mov %ecx,%esi;");
    asm("loc_416D48: call _sub_418A9E;");
    asm("loc_416D4D: mov 0x20(%esp),%edi;");
    asm("loc_416D51: mov 0x24(%esp),%ebp;");
    asm("loc_416D55: mov %eax,%ebx;");
    asm("loc_416D57: mov %edi,4(%ebx);");
    asm("loc_416D5A: movb $0,0x14(%ebx);");
    asm("loc_416D5E: movb $0,0x15(%ebx);");
    asm("loc_416D62: mov 8(%esi),%eax;");
    asm("loc_416D65: mov %eax,(%ebx);");
    asm("loc_416D67: mov 8(%esi),%ecx;");
    asm("loc_416D6A: lea 0xC(%ebx),%edx;");
    asm("loc_416D6D: push %ebp;");
    asm("loc_416D6E: push %edx;");
    asm("loc_416D6F: mov %ecx,8(%ebx);");
    asm("loc_416D72: call _sub_4170C0;");
    asm("loc_416D77: mov 0x10(%esi),%ecx;");
    asm("loc_416D7A: mov 4(%esi),%eax;");
    asm("loc_416D7D: add $0xC,%esp;");
    asm("loc_416D80: inc %ecx;");
    asm("loc_416D81: cmp %eax,%edi;");
    asm("loc_416D83: mov %ecx,0x10(%esi);");
    asm("loc_416D86: je loc_416DA9;");
    asm("loc_416D88: mov 0x18(%esp),%eax;");
    asm("loc_416D8C: cmp 8(%esi),%eax;");
    asm("loc_416D8F: jne loc_416DA9;");
    asm("loc_416D91: mov (%ebp),%ecx;");
    asm("loc_416D94: cmp 0xC(%edi),%ecx;");
    asm("loc_416D97: jl loc_416DA9;");
    asm("loc_416D99: mov %ebx,8(%edi);");
    asm("loc_416D9C: mov 4(%esi),%eax;");
    asm("loc_416D9F: cmp 8(%eax),%edi;");
    asm("loc_416DA2: jne loc_416DC3;");
    asm("loc_416DA4: mov %ebx,8(%eax);");
    asm("loc_416DA7: jmp loc_416DC3;");
    asm("loc_416DA9: mov %ebx,(%edi);");
    asm("loc_416DAB: mov 4(%esi),%eax;");
    asm("loc_416DAE: cmp %eax,%edi;");
    asm("loc_416DB0: jne loc_416DBD;");
    asm("loc_416DB2: mov %ebx,4(%eax);");
    asm("loc_416DB5: mov 4(%esi),%edx;");
    asm("loc_416DB8: mov %ebx,8(%edx);");
    asm("loc_416DBB: jmp loc_416DC3;");
    asm("loc_416DBD: cmp (%eax),%edi;");
    asm("loc_416DBF: jne loc_416DC3;");
    asm("loc_416DC1: mov %ebx,(%eax);");
    asm("loc_416DC3: mov 4(%esi),%ecx;");
    asm("loc_416DC6: cmp 4(%ecx),%ebx;");
    asm("loc_416DC9: mov %ebx,%eax;");
    asm("loc_416DCB: je loc_416F6E;");
    asm("loc_416DD1: mov 4(%eax),%ecx;");
    asm("loc_416DD4: mov 0x14(%ecx),%dl;");
    asm("loc_416DD7: test %dl,%dl;");
    asm("loc_416DD9: jne loc_416F6E;");
    asm("loc_416DDF: mov 4(%ecx),%edi;");
    asm("loc_416DE2: mov (%edi),%edx;");
    asm("loc_416DE4: cmp %edx,%ecx;");
    asm("loc_416DE6: jne loc_416EB0;");
    asm("loc_416DEC: mov 8(%edi),%edx;");
    asm("loc_416DEF: cmpb $0,0x14(%edx);");
    asm("loc_416DF3: jne loc_416E12;");
    asm("loc_416DF5: movb $1,0x14(%ecx);");
    asm("loc_416DF9: movb $1,0x14(%edx);");
    asm("loc_416DFD: mov 4(%eax),%edx;");
    asm("loc_416E00: mov 4(%edx),%ecx;");
    asm("loc_416E03: movb $0,0x14(%ecx);");
    asm("loc_416E07: mov 4(%eax),%edx;");
    asm("loc_416E0A: mov 4(%edx),%eax;");
    asm("loc_416E0D: jmp loc_416F62;");
    asm("loc_416E12: cmp 8(%ecx),%eax;");
    asm("loc_416E15: jne loc_416E51;");
    asm("loc_416E17: mov %ecx,%eax;");
    asm("loc_416E19: mov 8(%eax),%ecx;");
    asm("loc_416E1C: mov (%ecx),%edx;");
    asm("loc_416E1E: mov %edx,8(%eax);");
    asm("loc_416E21: mov (%ecx),%edx;");
    asm("loc_416E23: cmp 8(%esi),%edx;");
    asm("loc_416E26: je loc_416E2B;");
    asm("loc_416E28: mov %eax,4(%edx);");
    asm("loc_416E2B: mov 4(%eax),%edx;");
    asm("loc_416E2E: mov %edx,4(%ecx);");
    asm("loc_416E31: mov 4(%esi),%edx;");
    asm("loc_416E34: cmp 4(%edx),%eax;");
    asm("loc_416E37: jne loc_416E3E;");
    asm("loc_416E39: mov %ecx,4(%edx);");
    asm("loc_416E3C: jmp loc_416E4C;");
    asm("loc_416E3E: mov 4(%eax),%edx;");
    asm("loc_416E41: cmp (%edx),%eax;");
    asm("loc_416E43: jne loc_416E49;");
    asm("loc_416E45: mov %ecx,(%edx);");
    asm("loc_416E47: jmp loc_416E4C;");
    asm("loc_416E49: mov %ecx,8(%edx);");
    asm("loc_416E4C: mov %eax,(%ecx);");
    asm("loc_416E4E: mov %ecx,4(%eax);");
    asm("loc_416E51: mov 4(%eax),%ecx;");
    asm("loc_416E54: movb $1,0x14(%ecx);");
    asm("loc_416E58: mov 4(%eax),%edx;");
    asm("loc_416E5B: mov 4(%edx),%ecx;");
    asm("loc_416E5E: movb $0,0x14(%ecx);");
    asm("loc_416E62: mov 4(%eax),%edx;");
    asm("loc_416E65: mov 4(%edx),%ecx;");
    asm("loc_416E68: mov (%ecx),%edx;");
    asm("loc_416E6A: mov 8(%edx),%edi;");
    asm("loc_416E6D: mov %edi,(%ecx);");
    asm("loc_416E6F: mov 8(%edx),%edi;");
    asm("loc_416E72: cmp 8(%esi),%edi;");
    asm("loc_416E75: je loc_416E7A;");
    asm("loc_416E77: mov %ecx,4(%edi);");
    asm("loc_416E7A: mov 4(%ecx),%edi;");
    asm("loc_416E7D: mov %edi,4(%edx);");
    asm("loc_416E80: mov 4(%esi),%edi;");
    asm("loc_416E83: cmp 4(%edi),%ecx;");
    asm("loc_416E86: jne loc_416E93;");
    asm("loc_416E88: mov %edx,4(%edi);");
    asm("loc_416E8B: mov %ecx,8(%edx);");
    asm("loc_416E8E: jmp loc_416F5F;");
    asm("loc_416E93: mov 4(%ecx),%edi;");
    asm("loc_416E96: cmp 8(%edi),%ecx;");
    asm("loc_416E99: jne loc_416EA6;");
    asm("loc_416E9B: mov %edx,8(%edi);");
    asm("loc_416E9E: mov %ecx,8(%edx);");
    asm("loc_416EA1: jmp loc_416F5F;");
    asm("loc_416EA6: mov %edx,(%edi);");
    asm("loc_416EA8: mov %ecx,8(%edx);");
    asm("loc_416EAB: jmp loc_416F5F;");
    asm("loc_416EB0: cmpb $0,0x14(%edx);");
    asm("loc_416EB4: jne loc_416ED3;");
    asm("loc_416EB6: movb $1,0x14(%ecx);");
    asm("loc_416EBA: movb $1,0x14(%edx);");
    asm("loc_416EBE: mov 4(%eax),%ecx;");
    asm("loc_416EC1: mov 4(%ecx),%edx;");
    asm("loc_416EC4: movb $0,0x14(%edx);");
    asm("loc_416EC8: mov 4(%eax),%eax;");
    asm("loc_416ECB: mov 4(%eax),%eax;");
    asm("loc_416ECE: jmp loc_416F62;");
    asm("loc_416ED3: cmp (%ecx),%eax;");
    asm("loc_416ED5: jne loc_416F13;");
    asm("loc_416ED7: mov %ecx,%eax;");
    asm("loc_416ED9: mov (%eax),%ecx;");
    asm("loc_416EDB: mov 8(%ecx),%edx;");
    asm("loc_416EDE: mov %edx,(%eax);");
    asm("loc_416EE0: mov 8(%ecx),%edx;");
    asm("loc_416EE3: cmp 8(%esi),%edx;");
    asm("loc_416EE6: je loc_416EEB;");
    asm("loc_416EE8: mov %eax,4(%edx);");
    asm("loc_416EEB: mov 4(%eax),%edx;");
    asm("loc_416EEE: mov %edx,4(%ecx);");
    asm("loc_416EF1: mov 4(%esi),%edx;");
    asm("loc_416EF4: cmp 4(%edx),%eax;");
    asm("loc_416EF7: jne loc_416EFE;");
    asm("loc_416EF9: mov %ecx,4(%edx);");
    asm("loc_416EFC: jmp loc_416F0D;");
    asm("loc_416EFE: mov 4(%eax),%edx;");
    asm("loc_416F01: cmp 8(%edx),%eax;");
    asm("loc_416F04: jne loc_416F0B;");
    asm("loc_416F06: mov %ecx,8(%edx);");
    asm("loc_416F09: jmp loc_416F0D;");
    asm("loc_416F0B: mov %ecx,(%edx);");
    asm("loc_416F0D: mov %eax,8(%ecx);");
    asm("loc_416F10: mov %ecx,4(%eax);");
    asm("loc_416F13: mov 4(%eax),%ecx;");
    asm("loc_416F16: movb $1,0x14(%ecx);");
    asm("loc_416F1A: mov 4(%eax),%edx;");
    asm("loc_416F1D: mov 4(%edx),%ecx;");
    asm("loc_416F20: movb $0,0x14(%ecx);");
    asm("loc_416F24: mov 4(%eax),%edx;");
    asm("loc_416F27: mov 4(%edx),%ecx;");
    asm("loc_416F2A: mov 8(%ecx),%edx;");
    asm("loc_416F2D: mov (%edx),%edi;");
    asm("loc_416F2F: mov %edi,8(%ecx);");
    asm("loc_416F32: mov (%edx),%edi;");
    asm("loc_416F34: cmp 8(%esi),%edi;");
    asm("loc_416F37: je loc_416F3C;");
    asm("loc_416F39: mov %ecx,4(%edi);");
    asm("loc_416F3C: mov 4(%ecx),%edi;");
    asm("loc_416F3F: mov %edi,4(%edx);");
    asm("loc_416F42: mov 4(%esi),%edi;");
    asm("loc_416F45: cmp 4(%edi),%ecx;");
    asm("loc_416F48: jne loc_416F4F;");
    asm("loc_416F4A: mov %edx,4(%edi);");
    asm("loc_416F4D: jmp loc_416F5D;");
    asm("loc_416F4F: mov 4(%ecx),%edi;");
    asm("loc_416F52: cmp (%edi),%ecx;");
    asm("loc_416F54: jne loc_416F5A;");
    asm("loc_416F56: mov %edx,(%edi);");
    asm("loc_416F58: jmp loc_416F5D;");
    asm("loc_416F5A: mov %edx,8(%edi);");
    asm("loc_416F5D: mov %ecx,(%edx);");
    asm("loc_416F5F: mov %edx,4(%ecx);");
    asm("loc_416F62: mov 4(%esi),%ecx;");
    asm("loc_416F65: cmp 4(%ecx),%eax;");
    asm("loc_416F68: jne loc_416DD1;");
    asm("loc_416F6E: mov 4(%esi),%edx;");
    asm("loc_416F71: mov 4(%edx),%eax;");
    asm("loc_416F74: pop %edi;");
    asm("loc_416F75: movb $1,0x14(%eax);");
    asm("loc_416F79: mov 0x10(%esp),%eax;");
    asm("loc_416F7D: pop %esi;");
    asm("loc_416F7E: pop %ebp;");
    asm("loc_416F7F: mov %ebx,(%eax);");
    asm("loc_416F81: pop %ebx;");
    asm("loc_416F82: ret $0x10;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_416F90() // _sub_416F90
{
    __DEBUG_ASM(416F90);
    // chunk 0x416F90 _sub_416F90
    asm("loc_416F90: mov 4(%ecx),%eax;");
    asm("loc_416F93: mov 4(%eax),%edx;");
    asm("loc_416F96: mov 8(%ecx),%ecx;");
    asm("loc_416F99: cmp %ecx,%edx;");
    asm("loc_416F9B: je loc_416FB7;");
    asm("loc_416F9D: push %esi;");
    asm("loc_416F9E: mov 8(%esp),%esi;");
    asm("loc_416FA2: mov (%esi),%esi;");
    asm("loc_416FA4: cmp %esi,0xC(%edx);");
    asm("loc_416FA7: jge loc_416FAE;");
    asm("loc_416FA9: mov 8(%edx),%edx;");
    asm("loc_416FAC: jmp loc_416FB2;");
    asm("loc_416FAE: mov %edx,%eax;");
    asm("loc_416FB0: mov (%edx),%edx;");
    asm("loc_416FB2: cmp %ecx,%edx;");
    asm("loc_416FB4: jne loc_416FA4;");
    asm("loc_416FB6: pop %esi;");
    asm("loc_416FB7: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_416FC0() // _sub_416FC0
{
    __DEBUG_ASM(416FC0);
    // chunk 0x416FC0 _sub_416FC0
    asm("loc_416FC0: mov 4(%esp),%eax;");
    asm("loc_416FC4: mov (%eax),%ecx;");
    asm("loc_416FC6: mov 0x15(%ecx),%dl;");
    asm("loc_416FC9: test %dl,%dl;");
    asm("loc_416FCB: jne loc_416FDB;");
    asm("loc_416FCD: lea (%ecx),%ecx;");
    asm("loc_416FD0: mov %ecx,%eax;");
    asm("loc_416FD2: mov (%eax),%ecx;");
    asm("loc_416FD4: mov 0x15(%ecx),%dl;");
    asm("loc_416FD7: test %dl,%dl;");
    asm("loc_416FD9: je loc_416FD0;");
    asm("loc_416FDB: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_416FE0() // _sub_416FE0
{
    __DEBUG_ASM(416FE0);
    // chunk 0x416FE0 _sub_416FE0
    asm("loc_416FE0: mov 4(%ecx),%eax;");
    asm("loc_416FE3: mov 4(%eax),%edx;");
    asm("loc_416FE6: mov 8(%ecx),%ecx;");
    asm("loc_416FE9: cmp %ecx,%edx;");
    asm("loc_416FEB: je loc_417007;");
    asm("loc_416FED: push %esi;");
    asm("loc_416FEE: mov 8(%esp),%esi;");
    asm("loc_416FF2: mov (%esi),%esi;");
    asm("loc_416FF4: cmp 0xC(%edx),%esi;");
    asm("loc_416FF7: jge loc_416FFF;");
    asm("loc_416FF9: mov %edx,%eax;");
    asm("loc_416FFB: mov (%edx),%edx;");
    asm("loc_416FFD: jmp loc_417002;");
    asm("loc_416FFF: mov 8(%edx),%edx;");
    asm("loc_417002: cmp %ecx,%edx;");
    asm("loc_417004: jne loc_416FF4;");
    asm("loc_417006: pop %esi;");
    asm("loc_417007: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_417010() // _sub_417010
{
    __DEBUG_ASM(417010);
    // chunk 0x417010 _sub_417010
    asm("loc_417010: mov (%ecx),%eax;");
    asm("loc_417012: mov 0x14(%eax),%dl;");
    asm("loc_417015: test %dl,%dl;");
    asm("loc_417017: push %ebx;");
    asm("loc_417018: jne loc_417029;");
    asm("loc_41701A: mov 4(%eax),%edx;");
    asm("loc_41701D: cmp %eax,4(%edx);");
    asm("loc_417020: jne loc_417029;");
    asm("loc_417022: mov 8(%eax),%eax;");
    asm("loc_417025: mov %eax,(%ecx);");
    asm("loc_417027: pop %ebx;");
    asm("loc_417028: ret;");
    asm("loc_417029: mov (%eax),%edx;");
    asm("loc_41702B: mov 0x15(%edx),%bl;");
    asm("loc_41702E: test %bl,%bl;");
    asm("loc_417030: jne loc_417050;");
    asm("loc_417032: mov 8(%edx),%eax;");
    asm("loc_417035: mov 0x15(%eax),%bl;");
    asm("loc_417038: test %bl,%bl;");
    asm("loc_41703A: jne loc_41704C;");
    asm("loc_41703C: lea (%esp),%esp;");
    asm("loc_417040: mov %eax,%edx;");
    asm("loc_417042: mov 8(%edx),%eax;");
    asm("loc_417045: mov 0x15(%eax),%bl;");
    asm("loc_417048: test %bl,%bl;");
    asm("loc_41704A: je loc_417040;");
    asm("loc_41704C: mov %edx,(%ecx);");
    asm("loc_41704E: pop %ebx;");
    asm("loc_41704F: ret;");
    asm("loc_417050: mov 4(%eax),%eax;");
    asm("loc_417053: mov (%ecx),%edx;");
    asm("loc_417055: cmp (%eax),%edx;");
    asm("loc_417057: jne loc_41706B;");
    asm("loc_417059: lea (%esp),%esp;");
    asm("loc_417060: mov %eax,(%ecx);");
    asm("loc_417062: mov 4(%eax),%eax;");
    asm("loc_417065: mov (%ecx),%edx;");
    asm("loc_417067: cmp (%eax),%edx;");
    asm("loc_417069: je loc_417060;");
    asm("loc_41706B: mov %eax,(%ecx);");
    asm("loc_41706D: pop %ebx;");
    asm("loc_41706E: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_417070() // _sub_417070
{
    __DEBUG_ASM(417070);
    // chunk 0x417070 _sub_417070
    asm("loc_417070: mov (%ecx),%eax;");
    asm("loc_417072: mov 8(%eax),%edx;");
    asm("loc_417075: push %ebx;");
    asm("loc_417076: mov 0x15(%edx),%bl;");
    asm("loc_417079: test %bl,%bl;");
    asm("loc_41707B: jne loc_417095;");
    asm("loc_41707D: mov (%edx),%eax;");
    asm("loc_41707F: mov 0x15(%eax),%bl;");
    asm("loc_417082: test %bl,%bl;");
    asm("loc_417084: jne loc_417091;");
    asm("loc_417086: mov %eax,%edx;");
    asm("loc_417088: mov (%edx),%eax;");
    asm("loc_41708A: mov 0x15(%eax),%bl;");
    asm("loc_41708D: test %bl,%bl;");
    asm("loc_41708F: je loc_417086;");
    asm("loc_417091: mov %edx,(%ecx);");
    asm("loc_417093: pop %ebx;");
    asm("loc_417094: ret;");
    asm("loc_417095: mov 4(%eax),%eax;");
    asm("loc_417098: mov (%ecx),%edx;");
    asm("loc_41709A: cmp 8(%eax),%edx;");
    asm("loc_41709D: jne loc_4170AC;");
    asm("loc_41709F: nop;");
    asm("loc_4170A0: mov %eax,(%ecx);");
    asm("loc_4170A2: mov 4(%eax),%eax;");
    asm("loc_4170A5: mov (%ecx),%edx;");
    asm("loc_4170A7: cmp 8(%eax),%edx;");
    asm("loc_4170AA: je loc_4170A0;");
    asm("loc_4170AC: mov (%ecx),%edx;");
    asm("loc_4170AE: cmp %eax,8(%edx);");
    asm("loc_4170B1: je loc_4170B5;");
    asm("loc_4170B3: mov %eax,(%ecx);");
    asm("loc_4170B5: pop %ebx;");
    asm("loc_4170B6: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4170C0() // _sub_4170C0
{
    __DEBUG_ASM(4170C0);
    // chunk 0x4170C0 _sub_4170C0
    asm("loc_4170C0: mov 4(%esp),%eax;");
    asm("loc_4170C4: test %eax,%eax;");
    asm("loc_4170C6: je loc_4170D6;");
    asm("loc_4170C8: mov 8(%esp),%ecx;");
    asm("loc_4170CC: mov (%ecx),%edx;");
    asm("loc_4170CE: mov %edx,(%eax);");
    asm("loc_4170D0: mov 4(%ecx),%ecx;");
    asm("loc_4170D3: mov %ecx,4(%eax);");
    asm("loc_4170D6: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4170E0() // _sub_4170E0
{
    __DEBUG_ASM(4170E0);
    // chunk 0x4170E0 _sub_4170E0
    asm("loc_4170E0: mov _data_41E83C,%eax;");
    asm("loc_4170E5: mov %eax,_data_429DC4;");
    asm("loc_4170EA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4170F0() // _sub_4170F0
{
    __DEBUG_ASM(4170F0);
    // chunk 0x4170F0 _sub_4170F0
    asm("loc_4170F0: mov _data_41E83C,%eax;");
    asm("loc_4170F5: mov %eax,_data_429DC8;");
    asm("loc_4170FA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_417100() // _sub_417100
{
    __DEBUG_ASM(417100);
    // chunk 0x417100 _sub_417100
    asm("loc_417100: mov _data_41E840,%eax;");
    asm("loc_417105: mov %eax,_data_429DC0;");
    asm("loc_41710A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_417110() // _sub_417110
{
    __DEBUG_ASM(417110);
    // chunk 0x417110 _sub_417110
    asm("loc_417110: mov 0xC(%esp),%eax;");
    asm("loc_417114: dec %eax;");
    asm("loc_417115: js loc_41713D;");
    asm("loc_417117: push %ebx;");
    asm("loc_417118: mov 0x14(%esp),%ebx;");
    asm("loc_41711C: push %ebp;");
    asm("loc_41711D: mov 0x10(%esp),%ebp;");
    asm("loc_417121: push %esi;");
    asm("loc_417122: mov 0x10(%esp),%esi;");
    asm("loc_417126: push %edi;");
    asm("loc_417127: lea 1(%eax),%edi;");
    asm("loc_41712A: lea (%ebx),%ebx;");
    asm("loc_417130: mov %esi,%ecx;");
    asm("loc_417132: call *%ebx;");
    asm("loc_417134: add %ebp,%esi;");
    asm("loc_417136: dec %edi;");
    asm("loc_417137: jne loc_417130;");
    asm("loc_417139: pop %edi;");
    asm("loc_41713A: pop %esi;");
    asm("loc_41713B: pop %ebp;");
    asm("loc_41713C: pop %ebx;");
    asm("loc_41713D: ret $0x10;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_417140() // _sub_417140
{
    __DEBUG_ASM(417140);
    // chunk 0x417140 _sub_417140
    asm("loc_417140: push %ecx;");
    asm("loc_417141: lea 2(%esp),%eax;");
    asm("loc_417145: push %eax;");
    asm("loc_417146: lea 7(%esp),%ecx;");
    asm("loc_41714A: push %ecx;");
    asm("loc_41714B: mov $_data_429DDC,%ecx;");
    asm("loc_417150: call _sub_417760;");
    asm("loc_417155: push $_sub_417170;");
    asm("loc_41715A: call _sub_419410;");
    asm("loc_41715F: add $8,%esp;");
    asm("loc_417162: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_417170() // _sub_417170
{
    __DEBUG_ASM(417170);
    // chunk 0x417170 _sub_417170
    asm("loc_417170: mov $_data_429DDC,%ecx;");
    asm("loc_417175: jmp loc_417180;");
    asm("loc_41717A: nop;");
    asm("loc_41717B: nop;");
    asm("loc_41717C: nop;");
    asm("loc_41717D: nop;");
    asm("loc_41717E: nop;");
    asm("loc_41717F: nop;");
    asm("loc_417180: sub $0xC,%esp;");
    asm("loc_417183: push %ebx;");
    asm("loc_417184: push %ebp;");
    asm("loc_417185: push %esi;");
    asm("loc_417186: mov %ecx,%esi;");
    asm("loc_417188: mov 0x10(%esi),%ecx;");
    asm("loc_41718B: push %edi;");
    asm("loc_41718C: mov 4(%esi),%edi;");
    asm("loc_41718F: mov (%edi),%eax;");
    asm("loc_417191: xor %ebp,%ebp;");
    asm("loc_417193: cmp %ebp,%ecx;");
    asm("loc_417195: mov %eax,0x10(%esp);");
    asm("loc_417199: je loc_4171FD;");
    asm("loc_41719B: mov %eax,%ecx;");
    asm("loc_41719D: cmp %ecx,%eax;");
    asm("loc_41719F: jne loc_4171FD;");
    asm("loc_4171A1: mov 4(%edi),%ebx;");
    asm("loc_4171A4: cmp 8(%esi),%ebx;");
    asm("loc_4171A7: mov %ebx,%edi;");
    asm("loc_4171A9: je loc_4171D8;");
    asm("loc_4171AB: nop;");
    asm("loc_4171AC: lea (%esp),%esp;");
    asm("loc_4171B0: mov 8(%edi),%eax;");
    asm("loc_4171B3: push %eax;");
    asm("loc_4171B4: mov %esi,%ecx;");
    asm("loc_4171B6: call _sub_417C60;");
    asm("loc_4171BB: mov (%edi),%edi;");
    asm("loc_4171BD: push %ebp;");
    asm("loc_4171BE: lea 0xC(%ebx),%ecx;");
    asm("loc_4171C1: call _sub_417DA0;");
    asm("loc_4171C6: push %ebx;");
    asm("loc_4171C7: call _sub_418978;");
    asm("loc_4171CC: mov 8(%esi),%eax;");
    asm("loc_4171CF: add $4,%esp;");
    asm("loc_4171D2: cmp %eax,%edi;");
    asm("loc_4171D4: mov %edi,%ebx;");
    asm("loc_4171D6: jne loc_4171B0;");
    asm("loc_4171D8: mov 4(%esi),%ecx;");
    asm("loc_4171DB: mov 8(%esi),%edx;");
    asm("loc_4171DE: mov %edx,4(%ecx);");
    asm("loc_4171E1: mov 4(%esi),%eax;");
    asm("loc_4171E4: mov %ebp,0x10(%esi);");
    asm("loc_4171E7: mov %eax,(%eax);");
    asm("loc_4171E9: mov 4(%esi),%eax;");
    asm("loc_4171EC: mov %eax,8(%eax);");
    asm("loc_4171EF: lea 0x14(%esp),%eax;");
    asm("loc_4171F3: push %eax;");
    asm("loc_4171F4: mov %esi,%ecx;");
    asm("loc_4171F6: call _sub_4177F0;");
    asm("loc_4171FB: jmp loc_417221;");
    asm("loc_4171FD: cmp %edi,%eax;");
    asm("loc_4171FF: je loc_417221;");
    asm("loc_417201: lea 0x10(%esp),%ecx;");
    asm("loc_417205: mov %eax,%ebx;");
    asm("loc_417207: call _sub_417D30;");
    asm("loc_41720C: push %ebx;");
    asm("loc_41720D: lea 0x1C(%esp),%ecx;");
    asm("loc_417211: push %ecx;");
    asm("loc_417212: mov %esi,%ecx;");
    asm("loc_417214: call _sub_417880;");
    asm("loc_417219: mov 0x10(%esp),%eax;");
    asm("loc_41721D: cmp %edi,%eax;");
    asm("loc_41721F: jne loc_417201;");
    asm("loc_417221: mov 4(%esi),%edx;");
    asm("loc_417224: push %edx;");
    asm("loc_417225: call _sub_418978;");
    asm("loc_41722A: mov 8(%esi),%eax;");
    asm("loc_41722D: push %eax;");
    asm("loc_41722E: mov %ebp,4(%esi);");
    asm("loc_417231: mov %ebp,0x10(%esi);");
    asm("loc_417234: call _sub_418978;");
    asm("loc_417239: add $8,%esp;");
    asm("loc_41723C: pop %edi;");
    asm("loc_41723D: mov %ebp,8(%esi);");
    asm("loc_417240: pop %esi;");
    asm("loc_417241: pop %ebp;");
    asm("loc_417242: pop %ebx;");
    asm("loc_417243: add $0xC,%esp;");
    asm("loc_417246: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_417250() // _sub_417250
{
    __DEBUG_ASM(417250);
    // chunk 0x417250 _sub_417250
    asm("loc_417250: push %ecx;");
    asm("loc_417251: mov 3(%esp),%al;");
    asm("loc_417255: mov %al,_data_429DCC;");
    asm("loc_41725A: xor %eax,%eax;");
    asm("loc_41725C: push $_sub_417280;");
    asm("loc_417261: mov %eax,_data_429DD0;");
    asm("loc_417266: mov %eax,_data_429DD4;");
    asm("loc_41726B: mov %eax,_data_429DD8;");
    asm("loc_417270: call _sub_419410;");
    asm("loc_417275: add $8,%esp;");
    asm("loc_417278: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_417280() // _sub_417280
{
    __DEBUG_ASM(417280);
    // chunk 0x417280 _sub_417280
    asm("loc_417280: mov _data_429DD0,%eax;");
    asm("loc_417285: push %eax;");
    asm("loc_417286: call _sub_418978;");
    asm("loc_41728B: xor %eax,%eax;");
    asm("loc_41728D: add $4,%esp;");
    asm("loc_417290: mov %eax,_data_429DD0;");
    asm("loc_417295: mov %eax,_data_429DD4;");
    asm("loc_41729A: mov %eax,_data_429DD8;");
    asm("loc_41729F: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4172A0() // _sub_4172A0
{
    __DEBUG_ASM(4172A0);
    // chunk 0x4172A0 _sub_4172A0
    asm("loc_4172A0: mov _data_429DD0,%edx;");
    asm("loc_4172A6: mov _data_429DD4,%eax;");
    asm("loc_4172AB: sub $8,%esp;");
    asm("loc_4172AE: test %edx,%edx;");
    asm("loc_4172B0: jne loc_4172B6;");
    asm("loc_4172B2: xor %ecx,%ecx;");
    asm("loc_4172B4: jmp loc_4172BD;");
    asm("loc_4172B6: mov %eax,%ecx;");
    asm("loc_4172B8: sub %edx,%ecx;");
    asm("loc_4172BA: sar $2,%ecx;");
    asm("loc_4172BD: shl $0x10,%ecx;");
    asm("loc_4172C0: push %esi;");
    asm("loc_4172C1: push %edi;");
    asm("loc_4172C2: mov %ecx,%edi;");
    asm("loc_4172C4: mov _data_429DD8,%ecx;");
    asm("loc_4172CA: sub %eax,%ecx;");
    asm("loc_4172CC: sar $2,%ecx;");
    asm("loc_4172CF: cmp $1,%ecx;");
    asm("loc_4172D2: mov %edi,0xC(%esp);");
    asm("loc_4172D6: mov %eax,%esi;");
    asm("loc_4172D8: jae loc_4173C5;");
    asm("loc_4172DE: test %edx,%edx;");
    asm("loc_4172E0: je loc_4172EE;");
    asm("loc_4172E2: mov %eax,%ecx;");
    asm("loc_4172E4: sub %edx,%ecx;");
    asm("loc_4172E6: sar $2,%ecx;");
    asm("loc_4172E9: cmp $1,%ecx;");
    asm("loc_4172EC: ja loc_4172F3;");
    asm("loc_4172EE: mov $1,%ecx;");
    asm("loc_4172F3: test %edx,%edx;");
    asm("loc_4172F5: jne loc_4172FB;");
    asm("loc_4172F7: xor %eax,%eax;");
    asm("loc_4172F9: jmp loc_417300;");
    asm("loc_4172FB: sub %edx,%eax;");
    asm("loc_4172FD: sar $2,%eax;");
    asm("loc_417300: add %ecx,%eax;");
    asm("loc_417302: test %eax,%eax;");
    asm("loc_417304: mov %eax,8(%esp);");
    asm("loc_417308: jge loc_41730C;");
    asm("loc_41730A: xor %eax,%eax;");
    asm("loc_41730C: push %ebx;");
    asm("loc_41730D: lea (,%eax,4),%edx;");
    asm("loc_417314: push %ebp;");
    asm("loc_417315: push %edx;");
    asm("loc_417316: call _sub_418A9E;");
    asm("loc_41731B: mov _data_429DD0,%ebx;");
    asm("loc_417321: add $4,%esp;");
    asm("loc_417324: cmp %esi,%ebx;");
    asm("loc_417326: mov %eax,%ebp;");
    asm("loc_417328: mov %ebp,%edi;");
    asm("loc_41732A: je loc_417344;");
    asm("loc_41732C: lea (%esp),%esp;");
    asm("loc_417330: push %ebx;");
    asm("loc_417331: push %edi;");
    asm("loc_417332: call _sub_417D80;");
    asm("loc_417337: add $4,%ebx;");
    asm("loc_41733A: add $8,%esp;");
    asm("loc_41733D: add $4,%edi;");
    asm("loc_417340: cmp %esi,%ebx;");
    asm("loc_417342: jne loc_417330;");
    asm("loc_417344: lea 0x1C(%esp),%eax;");
    asm("loc_417348: push %eax;");
    asm("loc_417349: push $1;");
    asm("loc_41734B: push %edi;");
    asm("loc_41734C: mov $_data_429DCC,%ecx;");
    asm("loc_417351: call _sub_417D00;");
    asm("loc_417356: mov _data_429DD4,%ecx;");
    asm("loc_41735C: add $4,%edi;");
    asm("loc_41735F: push %edi;");
    asm("loc_417360: push %ecx;");
    asm("loc_417361: push %esi;");
    asm("loc_417362: mov $_data_429DCC,%ecx;");
    asm("loc_417367: call _sub_417CD0;");
    asm("loc_41736C: mov _data_429DD4,%edx;");
    asm("loc_417372: mov _data_429DD0,%eax;");
    asm("loc_417377: push %edx;");
    asm("loc_417378: push %eax;");
    asm("loc_417379: mov $_data_429DCC,%ecx;");
    asm("loc_41737E: call _sub_417870;");
    asm("loc_417383: mov _data_429DD0,%ecx;");
    asm("loc_417389: push %ecx;");
    asm("loc_41738A: call _sub_418978;");
    asm("loc_41738F: mov 0x14(%esp),%edx;");
    asm("loc_417393: lea (%ebp,%edx,4),%eax;");
    asm("loc_417397: add $4,%esp;");
    asm("loc_41739A: mov $_data_429DCC,%ecx;");
    asm("loc_41739F: mov %eax,_data_429DD8;");
    asm("loc_4173A4: call _sub_4177D0;");
    asm("loc_4173A9: lea 4(%ebp,%eax,4),%ecx;");
    asm("loc_4173AD: mov 0x14(%esp),%eax;");
    asm("loc_4173B1: mov %ebp,_data_429DD0;");
    asm("loc_4173B7: pop %ebp;");
    asm("loc_4173B8: pop %ebx;");
    asm("loc_4173B9: pop %edi;");
    asm("loc_4173BA: mov %ecx,_data_429DD4;");
    asm("loc_4173C0: pop %esi;");
    asm("loc_4173C1: add $8,%esp;");
    asm("loc_4173C4: ret;");
    asm("loc_4173C5: lea 4(%eax),%edx;");
    asm("loc_4173C8: push %edx;");
    asm("loc_4173C9: push %eax;");
    asm("loc_4173CA: push %eax;");
    asm("loc_4173CB: mov $_data_429DCC,%ecx;");
    asm("loc_4173D0: call _sub_417CD0;");
    asm("loc_4173D5: lea 0x14(%esp),%eax;");
    asm("loc_4173D9: push %eax;");
    asm("loc_4173DA: mov _data_429DD4,%eax;");
    asm("loc_4173DF: mov %eax,%ecx;");
    asm("loc_4173E1: sub %esi,%ecx;");
    asm("loc_4173E3: sar $2,%ecx;");
    asm("loc_4173E6: mov $1,%edx;");
    asm("loc_4173EB: sub %ecx,%edx;");
    asm("loc_4173ED: push %edx;");
    asm("loc_4173EE: push %eax;");
    asm("loc_4173EF: mov $_data_429DCC,%ecx;");
    asm("loc_4173F4: call _sub_417D00;");
    asm("loc_4173F9: mov _data_429DD4,%eax;");
    asm("loc_4173FE: cmp %eax,%esi;");
    asm("loc_417400: je loc_41740F;");
    asm("loc_417402: mov 0x14(%esp),%ecx;");
    asm("loc_417406: mov %ecx,(%esi);");
    asm("loc_417408: add $4,%esi;");
    asm("loc_41740B: cmp %eax,%esi;");
    asm("loc_41740D: jne loc_417402;");
    asm("loc_41740F: addl $4,_data_429DD4;");
    asm("loc_417416: mov %edi,%eax;");
    asm("loc_417418: pop %edi;");
    asm("loc_417419: pop %esi;");
    asm("loc_41741A: add $8,%esp;");
    asm("loc_41741D: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_417420() // _sub_417420
{
    __DEBUG_ASM(417420);
    // chunk 0x417420 _sub_417420
    asm("loc_417420: push %ebx;");
    asm("loc_417421: mov 0x10(%esp),%ebx;");
    asm("loc_417425: test %ebx,%ebx;");
    asm("loc_417427: push %ebp;");
    asm("loc_417428: mov 0x18(%esp),%ebp;");
    asm("loc_41742C: push %esi;");
    asm("loc_41742D: push %edi;");
    asm("loc_41742E: je loc_41743C;");
    asm("loc_417430: cmp $1,%ebp;");
    asm("loc_417433: jge loc_41743C;");
    asm("loc_417435: pop %edi;");
    asm("loc_417436: pop %esi;");
    asm("loc_417437: pop %ebp;");
    asm("loc_417438: xor %eax,%eax;");
    asm("loc_41743A: pop %ebx;");
    asm("loc_41743B: ret;");
    asm("loc_41743C: mov 0x18(%esp),%eax;");
    asm("loc_417440: mov 0x14(%esp),%edi;");
    asm("loc_417444: mov %eax,%esi;");
    asm("loc_417446: shr $4,%eax;");
    asm("loc_417449: and $0xF,%esi;");
    asm("loc_41744C: inc %eax;");
    asm("loc_41744D: push $0;");
    asm("loc_41744F: movzwl %ax,%eax;");
    asm("loc_417452: push %eax;");
    asm("loc_417453: push $6;");
    asm("loc_417455: push %edi;");
    asm("loc_417456: calll *_import_41B13C;");
    asm("loc_41745C: test %eax,%eax;");
    asm("loc_41745E: je loc_417477;");
    asm("loc_417460: push %eax;");
    asm("loc_417461: push %edi;");
    asm("loc_417462: calll *_import_41B140;");
    asm("loc_417468: test %eax,%eax;");
    asm("loc_41746A: je loc_417477;");
    asm("loc_41746C: push %eax;");
    asm("loc_41746D: calll *_import_41B144;");
    asm("loc_417473: test %eax,%eax;");
    asm("loc_417475: jne loc_417487;");
    asm("loc_417477: test %ebx,%ebx;");
    asm("loc_417479: je loc_417480;");
    asm("loc_41747B: movw $0,(%ebx);");
    asm("loc_417480: pop %edi;");
    asm("loc_417481: pop %esi;");
    asm("loc_417482: pop %ebp;");
    asm("loc_417483: xor %eax,%eax;");
    asm("loc_417485: pop %ebx;");
    asm("loc_417486: ret;");
    asm("loc_417487: test %esi,%esi;");
    asm("loc_417489: jbe loc_41749A;");
    asm("loc_41748B: nop;");
    asm("loc_41748C: lea (%esp),%esp;");
    asm("loc_417490: dec %esi;");
    asm("loc_417491: movzwl (%eax),%ecx;");
    asm("loc_417494: lea 2(%eax,%ecx,2),%eax;");
    asm("loc_417498: jne loc_417490;");
    asm("loc_41749A: test %ebx,%ebx;");
    asm("loc_41749C: movzwl (%eax),%ecx;");
    asm("loc_41749F: jne loc_4174A8;");
    asm("loc_4174A1: pop %edi;");
    asm("loc_4174A2: pop %esi;");
    asm("loc_4174A3: pop %ebp;");
    asm("loc_4174A4: mov %ecx,%eax;");
    asm("loc_4174A6: pop %ebx;");
    asm("loc_4174A7: ret;");
    asm("loc_4174A8: lea -1(%ebp),%esi;");
    asm("loc_4174AB: cmp %ecx,%esi;");
    asm("loc_4174AD: jb loc_4174B1;");
    asm("loc_4174AF: mov %ecx,%esi;");
    asm("loc_4174B1: push %esi;");
    asm("loc_4174B2: add $2,%eax;");
    asm("loc_4174B5: push %eax;");
    asm("loc_4174B6: push %ebx;");
    asm("loc_4174B7: calll *_import_41B990;");
    asm("loc_4174BD: add $0xC,%esp;");
    asm("loc_4174C0: pop %edi;");
    asm("loc_4174C1: movw $0,(%ebx,%esi,2);");
    asm("loc_4174C7: mov %esi,%eax;");
    asm("loc_4174C9: pop %esi;");
    asm("loc_4174CA: pop %ebp;");
    asm("loc_4174CB: pop %ebx;");
    asm("loc_4174CC: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4174D0() // _sub_4174D0
{
    __DEBUG_ASM(4174D0);
    // chunk 0x4174D0 _sub_4174D0
    asm("loc_4174D0: push %esi;");
    asm("loc_4174D1: mov 0xC(%esp),%esi;");
    asm("loc_4174D5: mov %esi,%eax;");
    asm("loc_4174D7: shr $0x10,%eax;");
    asm("loc_4174DA: test %eax,%eax;");
    asm("loc_4174DC: jl loc_417502;");
    asm("loc_4174DE: mov _data_429DD0,%edx;");
    asm("loc_4174E4: test %edx,%edx;");
    asm("loc_4174E6: je loc_417502;");
    asm("loc_4174E8: mov _data_429DD4,%ecx;");
    asm("loc_4174EE: sub %edx,%ecx;");
    asm("loc_4174F0: sar $2,%ecx;");
    asm("loc_4174F3: cmp %ecx,%eax;");
    asm("loc_4174F5: jae loc_417502;");
    asm("loc_4174F7: mov (%edx,%eax,4),%eax;");
    asm("loc_4174FA: and $0xFFFF,%esi;");
    asm("loc_417500: jmp loc_417504;");
    asm("loc_417502: xor %eax,%eax;");
    asm("loc_417504: mov 0x14(%esp),%ecx;");
    asm("loc_417508: mov 0x10(%esp),%edx;");
    asm("loc_41750C: push %ecx;");
    asm("loc_41750D: push %edx;");
    asm("loc_41750E: push %esi;");
    asm("loc_41750F: push %eax;");
    asm("loc_417510: call _sub_417420;");
    asm("loc_417515: add $0x10,%esp;");
    asm("loc_417518: pop %esi;");
    asm("loc_417519: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_417520() // _sub_417520
{
    __DEBUG_ASM(417520);
    // chunk 0x417520 _sub_417520
    asm("loc_417520: push %ecx;");
    asm("loc_417521: push %esi;");
    asm("loc_417522: push %edi;");
    asm("loc_417523: call _sub_40CDC0;");
    asm("loc_417528: mov 0x10(%esp),%esi;");
    asm("loc_41752C: push %esi;");
    asm("loc_41752D: calll *_import_41B028;");
    asm("loc_417533: mov %eax,%edi;");
    asm("loc_417535: mov %esi,0x14(%esp);");
    asm("loc_417539: mov _import_41BB8C,%esi;");
    asm("loc_41753F: add $4,%esp;");
    asm("loc_417542: lea 0x10(%esp),%eax;");
    asm("loc_417546: push %eax;");
    asm("loc_417547: mov %esi,%ecx;");
    asm("loc_417549: call _sub_417CA0;");
    asm("loc_41754E: mov 4(%esi),%esi;");
    asm("loc_417551: cmp %esi,%eax;");
    asm("loc_417553: mov %eax,8(%esp);");
    asm("loc_417557: je loc_417568;");
    asm("loc_417559: mov 0x10(%esp),%ecx;");
    asm("loc_41755D: cmp 0xC(%eax),%ecx;");
    asm("loc_417560: jb loc_417568;");
    asm("loc_417562: lea 8(%esp),%eax;");
    asm("loc_417566: jmp loc_417570;");
    asm("loc_417568: mov %esi,0x10(%esp);");
    asm("loc_41756C: lea 0x10(%esp),%eax;");
    asm("loc_417570: mov _import_41BB8C,%edx;");
    asm("loc_417576: mov (%eax),%eax;");
    asm("loc_417578: cmp 4(%edx),%eax;");
    asm("loc_41757B: je loc_4175D0;");
    asm("loc_41757D: mov (%edi),%eax;");
    asm("loc_41757F: mov %edi,%ecx;");
    asm("loc_417581: calll *0xC(%eax);");
    asm("loc_417584: mov %eax,%ecx;");
    asm("loc_417586: shr $0x10,%ecx;");
    asm("loc_417589: test %ecx,%ecx;");
    asm("loc_41758B: jl loc_4175B0;");
    asm("loc_41758D: mov _data_429DD0,%esi;");
    asm("loc_417593: test %esi,%esi;");
    asm("loc_417595: je loc_4175B0;");
    asm("loc_417597: mov _data_429DD4,%edx;");
    asm("loc_41759D: sub %esi,%edx;");
    asm("loc_41759F: sar $2,%edx;");
    asm("loc_4175A2: cmp %edx,%ecx;");
    asm("loc_4175A4: jae loc_4175B0;");
    asm("loc_4175A6: mov (%esi,%ecx,4),%ecx;");
    asm("loc_4175A9: and $0xFFFF,%eax;");
    asm("loc_4175AE: jmp loc_4175B2;");
    asm("loc_4175B0: xor %ecx,%ecx;");
    asm("loc_4175B2: mov 0x18(%esp),%edx;");
    asm("loc_4175B6: push %edx;");
    asm("loc_4175B7: mov 0x18(%esp),%edx;");
    asm("loc_4175BB: push %edx;");
    asm("loc_4175BC: push %eax;");
    asm("loc_4175BD: push %ecx;");
    asm("loc_4175BE: call _sub_417420;");
    asm("loc_4175C3: add $0x10,%esp;");
    asm("loc_4175C6: pop %edi;");
    asm("loc_4175C7: pop %esi;");
    asm("loc_4175C8: add $4,%esp;");
    asm("loc_4175CB: jmp _sub_40CE70;");
    asm("loc_4175D0: mov 0x14(%esp),%eax;");
    asm("loc_4175D4: push $_data_4259D0;");
    asm("loc_4175D9: push %eax;");
    asm("loc_4175DA: calll *_import_41B988;");
    asm("loc_4175E0: add $8,%esp;");
    asm("loc_4175E3: pop %edi;");
    asm("loc_4175E4: pop %esi;");
    asm("loc_4175E5: add $4,%esp;");
    asm("loc_4175E8: jmp _sub_40CE70;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4175F0() // _sub_4175F0
{
    __DEBUG_ASM(4175F0);
    // chunk 0x4175F0 _sub_4175F0
    asm("loc_4175F0: sub $0x810,%esp;");
    asm("loc_4175F6: call _sub_40CDC0;");
    asm("loc_4175FB: calll *_import_41B020;");
    asm("loc_417601: test %eax,%eax;");
    asm("loc_417603: je loc_417747;");
    asm("loc_417609: push %ebx;");
    asm("loc_41760A: mov _import_41B028,%ebx;");
    asm("loc_417610: push %ebp;");
    asm("loc_417611: mov _import_41B024,%ebp;");
    asm("loc_417617: push %esi;");
    asm("loc_417618: push %edi;");
    asm("loc_417619: lea (%esp),%esp;");
    asm("loc_417620: mov (%eax),%edx;");
    asm("loc_417622: mov %eax,%ecx;");
    asm("loc_417624: calll *(%edx);");
    asm("loc_417626: mov _import_41BB8C,%esi;");
    asm("loc_41762C: mov %eax,0x10(%esp);");
    asm("loc_417630: lea 0x10(%esp),%eax;");
    asm("loc_417634: push %eax;");
    asm("loc_417635: mov %esi,%ecx;");
    asm("loc_417637: call _sub_417CA0;");
    asm("loc_41763C: mov 4(%esi),%esi;");
    asm("loc_41763F: cmp %esi,%eax;");
    asm("loc_417641: mov 0x10(%esp),%ecx;");
    asm("loc_417645: mov %eax,0x14(%esp);");
    asm("loc_417649: je loc_417656;");
    asm("loc_41764B: cmp 0xC(%eax),%ecx;");
    asm("loc_41764E: jb loc_417656;");
    asm("loc_417650: lea 0x14(%esp),%eax;");
    asm("loc_417654: jmp loc_41765E;");
    asm("loc_417656: mov %esi,0x18(%esp);");
    asm("loc_41765A: lea 0x18(%esp),%eax;");
    asm("loc_41765E: mov _import_41BB8C,%edx;");
    asm("loc_417664: mov (%eax),%eax;");
    asm("loc_417666: cmp 4(%edx),%eax;");
    asm("loc_417669: je loc_417739;");
    asm("loc_41766F: push %ecx;");
    asm("loc_417670: mov _import_41BAF8,%ecx;");
    asm("loc_417676: call _sub_418960;");
    asm("loc_41767B: cmp 0x824(%esp),%eax;");
    asm("loc_417682: jb loc_417739;");
    asm("loc_417688: mov 0x10(%esp),%esi;");
    asm("loc_41768C: call _sub_40CDC0;");
    asm("loc_417691: push %esi;");
    asm("loc_417692: call *%ebx;");
    asm("loc_417694: add $4,%esp;");
    asm("loc_417697: mov %eax,%edi;");
    asm("loc_417699: lea 0x14(%esp),%eax;");
    asm("loc_41769D: push %eax;");
    asm("loc_41769E: lea 0x20(%esp),%ecx;");
    asm("loc_4176A2: push %ecx;");
    asm("loc_4176A3: mov _import_41BB8C,%ecx;");
    asm("loc_4176A9: mov %esi,0x1C(%esp);");
    asm("loc_4176AD: call _sub_417800;");
    asm("loc_4176B2: mov _import_41BB8C,%edx;");
    asm("loc_4176B8: mov 4(%edx),%eax;");
    asm("loc_4176BB: cmp %eax,0x1C(%esp);");
    asm("loc_4176BF: je loc_41770C;");
    asm("loc_4176C1: mov (%edi),%eax;");
    asm("loc_4176C3: mov %edi,%ecx;");
    asm("loc_4176C5: calll *0xC(%eax);");
    asm("loc_4176C8: mov %eax,%ecx;");
    asm("loc_4176CA: shr $0x10,%ecx;");
    asm("loc_4176CD: test %ecx,%ecx;");
    asm("loc_4176CF: jl loc_4176F4;");
    asm("loc_4176D1: mov _data_429DD0,%esi;");
    asm("loc_4176D7: test %esi,%esi;");
    asm("loc_4176D9: je loc_4176F4;");
    asm("loc_4176DB: mov _data_429DD4,%edx;");
    asm("loc_4176E1: sub %esi,%edx;");
    asm("loc_4176E3: sar $2,%edx;");
    asm("loc_4176E6: cmp %edx,%ecx;");
    asm("loc_4176E8: jae loc_4176F4;");
    asm("loc_4176EA: mov (%esi,%ecx,4),%ecx;");
    asm("loc_4176ED: and $0xFFFF,%eax;");
    asm("loc_4176F2: jmp loc_4176F6;");
    asm("loc_4176F4: xor %ecx,%ecx;");
    asm("loc_4176F6: push $0x400;");
    asm("loc_4176FB: lea 0x24(%esp),%edx;");
    asm("loc_4176FF: push %edx;");
    asm("loc_417700: push %eax;");
    asm("loc_417701: push %ecx;");
    asm("loc_417702: call _sub_417420;");
    asm("loc_417707: add $0x10,%esp;");
    asm("loc_41770A: jmp loc_41771F;");
    asm("loc_41770C: lea 0x20(%esp),%eax;");
    asm("loc_417710: push $_data_4259D0;");
    asm("loc_417715: push %eax;");
    asm("loc_417716: calll *_import_41B988;");
    asm("loc_41771C: add $8,%esp;");
    asm("loc_41771F: call _sub_40CE70;");
    asm("loc_417724: mov 0x10(%esp),%eax;");
    asm("loc_417728: mov 0x828(%esp),%ecx;");
    asm("loc_41772F: mov (%ecx),%edx;");
    asm("loc_417731: push %eax;");
    asm("loc_417732: lea 0x24(%esp),%eax;");
    asm("loc_417736: push %eax;");
    asm("loc_417737: calll *(%edx);");
    asm("loc_417739: call *%ebp;");
    asm("loc_41773B: test %eax,%eax;");
    asm("loc_41773D: jne loc_417620;");
    asm("loc_417743: pop %edi;");
    asm("loc_417744: pop %esi;");
    asm("loc_417745: pop %ebp;");
    asm("loc_417746: pop %ebx;");
    asm("loc_417747: add $0x810,%esp;");
    asm("loc_41774D: jmp _sub_40CE70;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_417760() // _sub_417760
{
    __DEBUG_ASM(417760);
    // chunk 0x417760 _sub_417760
    asm("loc_417760: mov 8(%esp),%eax;");
    asm("loc_417764: mov 4(%esp),%edx;");
    asm("loc_417768: push %ebx;");
    asm("loc_417769: push %esi;");
    asm("loc_41776A: mov %ecx,%esi;");
    asm("loc_41776C: mov (%eax),%cl;");
    asm("loc_41776E: mov %cl,(%esi);");
    asm("loc_417770: mov (%edx),%al;");
    asm("loc_417772: push %edi;");
    asm("loc_417773: xor %ebx,%ebx;");
    asm("loc_417775: push $0x2C;");
    asm("loc_417777: mov %al,1(%esi);");
    asm("loc_41777A: mov %bl,0xC(%esi);");
    asm("loc_41777D: call _sub_418A9E;");
    asm("loc_417782: mov %ebx,4(%eax);");
    asm("loc_417785: mov %bl,0x29(%eax);");
    asm("loc_417788: mov $1,%cl;");
    asm("loc_41778A: mov %cl,0x28(%eax);");
    asm("loc_41778D: mov %eax,8(%esi);");
    asm("loc_417790: mov %cl,0x29(%eax);");
    asm("loc_417793: mov 8(%esi),%ecx;");
    asm("loc_417796: mov %ebx,(%ecx);");
    asm("loc_417798: mov 8(%esi),%edx;");
    asm("loc_41779B: mov %ebx,8(%edx);");
    asm("loc_41779E: mov 8(%esi),%edi;");
    asm("loc_4177A1: push $0x2C;");
    asm("loc_4177A3: call _sub_418A9E;");
    asm("loc_4177A8: mov %edi,4(%eax);");
    asm("loc_4177AB: mov %bl,0x28(%eax);");
    asm("loc_4177AE: mov %bl,0x29(%eax);");
    asm("loc_4177B1: mov %eax,4(%esi);");
    asm("loc_4177B4: mov %eax,(%eax);");
    asm("loc_4177B6: mov 4(%esi),%eax;");
    asm("loc_4177B9: add $8,%esp;");
    asm("loc_4177BC: mov %eax,8(%eax);");
    asm("loc_4177BF: pop %edi;");
    asm("loc_4177C0: mov %ebx,0x10(%esi);");
    asm("loc_4177C3: mov %esi,%eax;");
    asm("loc_4177C5: pop %esi;");
    asm("loc_4177C6: pop %ebx;");
    asm("loc_4177C7: ret $8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4177D0() // _sub_4177D0
{
    __DEBUG_ASM(4177D0);
    // chunk 0x4177D0 _sub_4177D0
    asm("loc_4177D0: mov 4(%ecx),%edx;");
    asm("loc_4177D3: test %edx,%edx;");
    asm("loc_4177D5: jne loc_4177DA;");
    asm("loc_4177D7: xor %eax,%eax;");
    asm("loc_4177D9: ret;");
    asm("loc_4177DA: mov 8(%ecx),%eax;");
    asm("loc_4177DD: sub %edx,%eax;");
    asm("loc_4177DF: sar $2,%eax;");
    asm("loc_4177E2: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4177F0() // _sub_4177F0
{
    __DEBUG_ASM(4177F0);
    // chunk 0x4177F0 _sub_4177F0
    asm("loc_4177F0: mov 4(%ecx),%eax;");
    asm("loc_4177F3: mov (%eax),%ecx;");
    asm("loc_4177F5: mov 4(%esp),%eax;");
    asm("loc_4177F9: mov %ecx,(%eax);");
    asm("loc_4177FB: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_417800() // _sub_417800
{
    __DEBUG_ASM(417800);
    // chunk 0x417800 _sub_417800
    asm("loc_417800: push %ecx;");
    asm("loc_417801: mov 4(%ecx),%edx;");
    asm("loc_417804: mov 4(%edx),%eax;");
    asm("loc_417807: mov 8(%ecx),%ecx;");
    asm("loc_41780A: cmp %ecx,%eax;");
    asm("loc_41780C: push %ebx;");
    asm("loc_41780D: mov 0x10(%esp),%ebx;");
    asm("loc_417811: push %esi;");
    asm("loc_417812: mov %edx,%esi;");
    asm("loc_417814: je loc_417833;");
    asm("loc_417816: push %edi;");
    asm("loc_417817: mov (%ebx),%edi;");
    asm("loc_417819: lea (%esp),%esp;");
    asm("loc_417820: cmp %edi,0xC(%eax);");
    asm("loc_417823: jae loc_41782A;");
    asm("loc_417825: mov 8(%eax),%eax;");
    asm("loc_417828: jmp loc_41782E;");
    asm("loc_41782A: mov %eax,%esi;");
    asm("loc_41782C: mov (%eax),%eax;");
    asm("loc_41782E: cmp %ecx,%eax;");
    asm("loc_417830: jne loc_417820;");
    asm("loc_417832: pop %edi;");
    asm("loc_417833: cmp %edx,%esi;");
    asm("loc_417835: mov %esi,0x14(%esp);");
    asm("loc_417839: je loc_417854;");
    asm("loc_41783B: mov (%ebx),%eax;");
    asm("loc_41783D: cmp 0xC(%esi),%eax;");
    asm("loc_417840: jb loc_417854;");
    asm("loc_417842: lea 0x14(%esp),%eax;");
    asm("loc_417846: mov (%eax),%ecx;");
    asm("loc_417848: mov 0x10(%esp),%eax;");
    asm("loc_41784C: pop %esi;");
    asm("loc_41784D: mov %ecx,(%eax);");
    asm("loc_41784F: pop %ebx;");
    asm("loc_417850: pop %ecx;");
    asm("loc_417851: ret $8;");
    asm("loc_417854: lea 8(%esp),%eax;");
    asm("loc_417858: mov %edx,8(%esp);");
    asm("loc_41785C: mov (%eax),%ecx;");
    asm("loc_41785E: mov 0x10(%esp),%eax;");
    asm("loc_417862: pop %esi;");
    asm("loc_417863: mov %ecx,(%eax);");
    asm("loc_417865: pop %ebx;");
    asm("loc_417866: pop %ecx;");
    asm("loc_417867: ret $8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_417870() // _nullsub_3
{
    __DEBUG_ASM(417870);
    // chunk 0x417870 _sub_417870
    asm("loc_417870: ret $8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_417880() // _sub_417880
{
    __DEBUG_ASM(417880);
    // chunk 0x417880 _sub_417880
    asm("loc_417880: push %ecx;");
    asm("loc_417881: push %ebx;");
    asm("loc_417882: push %ebp;");
    asm("loc_417883: push %esi;");
    asm("loc_417884: mov 0x18(%esp),%esi;");
    asm("loc_417888: push %edi;");
    asm("loc_417889: mov %ecx,%edi;");
    asm("loc_41788B: lea 0x1C(%esp),%ecx;");
    asm("loc_41788F: call _sub_417D30;");
    asm("loc_417894: mov (%esi),%edx;");
    asm("loc_417896: mov 8(%edi),%eax;");
    asm("loc_417899: cmp %eax,%edx;");
    asm("loc_41789B: mov %esi,0x10(%esp);");
    asm("loc_41789F: jne loc_4178C2;");
    asm("loc_4178A1: mov 8(%esi),%eax;");
    asm("loc_4178A4: mov 0x10(%esp),%ecx;");
    asm("loc_4178A8: mov 4(%ecx),%edx;");
    asm("loc_4178AB: mov %edx,4(%eax);");
    asm("loc_4178AE: mov 4(%edi),%ecx;");
    asm("loc_4178B1: cmp %esi,4(%ecx);");
    asm("loc_4178B4: jne loc_417947;");
    asm("loc_4178BA: mov %eax,4(%ecx);");
    asm("loc_4178BD: jmp loc_417955;");
    asm("loc_4178C2: mov 8(%esi),%ecx;");
    asm("loc_4178C5: cmp %eax,%ecx;");
    asm("loc_4178C7: jne loc_4178CD;");
    asm("loc_4178C9: mov %edx,%eax;");
    asm("loc_4178CB: jmp loc_4178A4;");
    asm("loc_4178CD: mov (%ecx),%eax;");
    asm("loc_4178CF: mov 0x29(%eax),%bl;");
    asm("loc_4178D2: test %bl,%bl;");
    asm("loc_4178D4: jne loc_4178E1;");
    asm("loc_4178D6: mov %eax,%ecx;");
    asm("loc_4178D8: mov (%ecx),%eax;");
    asm("loc_4178DA: mov 0x29(%eax),%bl;");
    asm("loc_4178DD: test %bl,%bl;");
    asm("loc_4178DF: je loc_4178D6;");
    asm("loc_4178E1: cmp %esi,%ecx;");
    asm("loc_4178E3: mov 8(%ecx),%eax;");
    asm("loc_4178E6: mov %ecx,0x10(%esp);");
    asm("loc_4178EA: je loc_4178A4;");
    asm("loc_4178EC: mov %ecx,4(%edx);");
    asm("loc_4178EF: mov (%esi),%edx;");
    asm("loc_4178F1: mov %edx,(%ecx);");
    asm("loc_4178F3: cmp 8(%esi),%ecx;");
    asm("loc_4178F6: jne loc_4178FD;");
    asm("loc_4178F8: mov %ecx,4(%eax);");
    asm("loc_4178FB: jmp loc_417914;");
    asm("loc_4178FD: mov 4(%ecx),%edx;");
    asm("loc_417900: mov %edx,4(%eax);");
    asm("loc_417903: mov 4(%ecx),%edx;");
    asm("loc_417906: mov %eax,(%edx);");
    asm("loc_417908: mov 8(%esi),%edx;");
    asm("loc_41790B: mov %edx,8(%ecx);");
    asm("loc_41790E: mov 8(%esi),%edx;");
    asm("loc_417911: mov %ecx,4(%edx);");
    asm("loc_417914: mov 4(%edi),%edx;");
    asm("loc_417917: cmp %esi,4(%edx);");
    asm("loc_41791A: jne loc_417921;");
    asm("loc_41791C: mov %ecx,4(%edx);");
    asm("loc_41791F: jmp loc_41792F;");
    asm("loc_417921: mov 4(%esi),%edx;");
    asm("loc_417924: cmp %esi,(%edx);");
    asm("loc_417926: jne loc_41792C;");
    asm("loc_417928: mov %ecx,(%edx);");
    asm("loc_41792A: jmp loc_41792F;");
    asm("loc_41792C: mov %ecx,8(%edx);");
    asm("loc_41792F: mov 4(%esi),%edx;");
    asm("loc_417932: mov %edx,4(%ecx);");
    asm("loc_417935: mov 0x28(%esi),%bl;");
    asm("loc_417938: mov 0x28(%ecx),%dl;");
    asm("loc_41793B: mov %bl,0x28(%ecx);");
    asm("loc_41793E: mov %dl,0x28(%esi);");
    asm("loc_417941: mov %esi,0x10(%esp);");
    asm("loc_417945: jmp loc_4179B2;");
    asm("loc_417947: mov 4(%esi),%ecx;");
    asm("loc_41794A: cmp %esi,(%ecx);");
    asm("loc_41794C: jne loc_417952;");
    asm("loc_41794E: mov %eax,(%ecx);");
    asm("loc_417950: jmp loc_417955;");
    asm("loc_417952: mov %eax,8(%ecx);");
    asm("loc_417955: mov 4(%edi),%ebp;");
    asm("loc_417958: cmp %esi,(%ebp);");
    asm("loc_41795B: jne loc_417983;");
    asm("loc_41795D: mov 8(%esi),%ecx;");
    asm("loc_417960: cmp 8(%edi),%ecx;");
    asm("loc_417963: jne loc_41796A;");
    asm("loc_417965: mov 4(%esi),%edx;");
    asm("loc_417968: jmp loc_417980;");
    asm("loc_41796A: mov (%eax),%ecx;");
    asm("loc_41796C: mov 0x29(%ecx),%bl;");
    asm("loc_41796F: test %bl,%bl;");
    asm("loc_417971: mov %eax,%edx;");
    asm("loc_417973: jne loc_417980;");
    asm("loc_417975: mov %ecx,%edx;");
    asm("loc_417977: mov (%edx),%ecx;");
    asm("loc_417979: mov 0x29(%ecx),%bl;");
    asm("loc_41797C: test %bl,%bl;");
    asm("loc_41797E: je loc_417975;");
    asm("loc_417980: mov %edx,(%ebp);");
    asm("loc_417983: mov 4(%edi),%ebp;");
    asm("loc_417986: cmp %esi,8(%ebp);");
    asm("loc_417989: jne loc_4179B2;");
    asm("loc_41798B: mov (%esi),%ecx;");
    asm("loc_41798D: cmp 8(%edi),%ecx;");
    asm("loc_417990: jne loc_417997;");
    asm("loc_417992: mov 4(%esi),%edx;");
    asm("loc_417995: jmp loc_4179AF;");
    asm("loc_417997: mov 8(%eax),%ecx;");
    asm("loc_41799A: mov 0x29(%ecx),%bl;");
    asm("loc_41799D: test %bl,%bl;");
    asm("loc_41799F: mov %eax,%edx;");
    asm("loc_4179A1: jne loc_4179AF;");
    asm("loc_4179A3: mov %ecx,%edx;");
    asm("loc_4179A5: mov 8(%edx),%ecx;");
    asm("loc_4179A8: mov 0x29(%ecx),%bl;");
    asm("loc_4179AB: test %bl,%bl;");
    asm("loc_4179AD: je loc_4179A3;");
    asm("loc_4179AF: mov %edx,8(%ebp);");
    asm("loc_4179B2: mov 0x10(%esp),%esi;");
    asm("loc_4179B6: mov 0x28(%esi),%cl;");
    asm("loc_4179B9: mov $1,%bl;");
    asm("loc_4179BB: cmp %bl,%cl;");
    asm("loc_4179BD: jne loc_417C2E;");
    asm("loc_4179C3: mov 4(%edi),%ecx;");
    asm("loc_4179C6: cmp 4(%ecx),%eax;");
    asm("loc_4179C9: je loc_417C27;");
    asm("loc_4179CF: nop;");
    asm("loc_4179D0: cmp %bl,0x28(%eax);");
    asm("loc_4179D3: jne loc_417C27;");
    asm("loc_4179D9: mov 4(%eax),%edx;");
    asm("loc_4179DC: mov (%edx),%ecx;");
    asm("loc_4179DE: cmp %ecx,%eax;");
    asm("loc_4179E0: jne loc_417A8F;");
    asm("loc_4179E6: mov 8(%edx),%ecx;");
    asm("loc_4179E9: mov 0x28(%ecx),%dl;");
    asm("loc_4179EC: test %dl,%dl;");
    asm("loc_4179EE: jne loc_417A3B;");
    asm("loc_4179F0: mov %bl,0x28(%ecx);");
    asm("loc_4179F3: mov 4(%eax),%edx;");
    asm("loc_4179F6: movb $0,0x28(%edx);");
    asm("loc_4179FA: mov 4(%eax),%ecx;");
    asm("loc_4179FD: mov 8(%ecx),%edx;");
    asm("loc_417A00: mov (%edx),%esi;");
    asm("loc_417A02: mov %esi,8(%ecx);");
    asm("loc_417A05: mov (%edx),%esi;");
    asm("loc_417A07: cmp 8(%edi),%esi;");
    asm("loc_417A0A: je loc_417A0F;");
    asm("loc_417A0C: mov %ecx,4(%esi);");
    asm("loc_417A0F: mov 4(%ecx),%esi;");
    asm("loc_417A12: mov %esi,4(%edx);");
    asm("loc_417A15: mov 4(%edi),%esi;");
    asm("loc_417A18: cmp 4(%esi),%ecx;");
    asm("loc_417A1B: jne loc_417A22;");
    asm("loc_417A1D: mov %edx,4(%esi);");
    asm("loc_417A20: jmp loc_417A30;");
    asm("loc_417A22: mov 4(%ecx),%esi;");
    asm("loc_417A25: cmp (%esi),%ecx;");
    asm("loc_417A27: jne loc_417A2D;");
    asm("loc_417A29: mov %edx,(%esi);");
    asm("loc_417A2B: jmp loc_417A30;");
    asm("loc_417A2D: mov %edx,8(%esi);");
    asm("loc_417A30: mov %ecx,(%edx);");
    asm("loc_417A32: mov %edx,4(%ecx);");
    asm("loc_417A35: mov 4(%eax),%ecx;");
    asm("loc_417A38: mov 8(%ecx),%ecx;");
    asm("loc_417A3B: mov (%ecx),%edx;");
    asm("loc_417A3D: cmp %bl,0x28(%edx);");
    asm("loc_417A40: jne loc_417A4E;");
    asm("loc_417A42: mov 8(%ecx),%edx;");
    asm("loc_417A45: cmp %bl,0x28(%edx);");
    asm("loc_417A48: je loc_417AF9;");
    asm("loc_417A4E: mov 8(%ecx),%edx;");
    asm("loc_417A51: cmp %bl,0x28(%edx);");
    asm("loc_417A54: jne loc_417B2C;");
    asm("loc_417A5A: mov (%ecx),%edx;");
    asm("loc_417A5C: mov %bl,0x28(%edx);");
    asm("loc_417A5F: mov (%ecx),%edx;");
    asm("loc_417A61: movb $0,0x28(%ecx);");
    asm("loc_417A65: mov 8(%edx),%esi;");
    asm("loc_417A68: mov %esi,(%ecx);");
    asm("loc_417A6A: mov 8(%edx),%esi;");
    asm("loc_417A6D: cmp 8(%edi),%esi;");
    asm("loc_417A70: je loc_417A75;");
    asm("loc_417A72: mov %ecx,4(%esi);");
    asm("loc_417A75: mov 4(%ecx),%esi;");
    asm("loc_417A78: mov %esi,4(%edx);");
    asm("loc_417A7B: mov 4(%edi),%esi;");
    asm("loc_417A7E: cmp 4(%esi),%ecx;");
    asm("loc_417A81: jne loc_417B11;");
    asm("loc_417A87: mov %edx,4(%esi);");
    asm("loc_417A8A: jmp loc_417B20;");
    asm("loc_417A8F: mov 0x28(%ecx),%dl;");
    asm("loc_417A92: test %dl,%dl;");
    asm("loc_417A94: jne loc_417AE2;");
    asm("loc_417A96: mov %bl,0x28(%ecx);");
    asm("loc_417A99: mov 4(%eax),%ecx;");
    asm("loc_417A9C: movb $0,0x28(%ecx);");
    asm("loc_417AA0: mov 4(%eax),%ecx;");
    asm("loc_417AA3: mov (%ecx),%edx;");
    asm("loc_417AA5: mov 8(%edx),%esi;");
    asm("loc_417AA8: mov %esi,(%ecx);");
    asm("loc_417AAA: mov 8(%edx),%esi;");
    asm("loc_417AAD: cmp 8(%edi),%esi;");
    asm("loc_417AB0: je loc_417AB5;");
    asm("loc_417AB2: mov %ecx,4(%esi);");
    asm("loc_417AB5: mov 4(%ecx),%esi;");
    asm("loc_417AB8: mov %esi,4(%edx);");
    asm("loc_417ABB: mov 4(%edi),%esi;");
    asm("loc_417ABE: cmp 4(%esi),%ecx;");
    asm("loc_417AC1: jne loc_417AC8;");
    asm("loc_417AC3: mov %edx,4(%esi);");
    asm("loc_417AC6: jmp loc_417AD7;");
    asm("loc_417AC8: mov 4(%ecx),%esi;");
    asm("loc_417ACB: cmp 8(%esi),%ecx;");
    asm("loc_417ACE: jne loc_417AD5;");
    asm("loc_417AD0: mov %edx,8(%esi);");
    asm("loc_417AD3: jmp loc_417AD7;");
    asm("loc_417AD5: mov %edx,(%esi);");
    asm("loc_417AD7: mov %ecx,8(%edx);");
    asm("loc_417ADA: mov %edx,4(%ecx);");
    asm("loc_417ADD: mov 4(%eax),%edx;");
    asm("loc_417AE0: mov (%edx),%ecx;");
    asm("loc_417AE2: mov 8(%ecx),%edx;");
    asm("loc_417AE5: cmp %bl,0x28(%edx);");
    asm("loc_417AE8: jne loc_417B88;");
    asm("loc_417AEE: mov (%ecx),%edx;");
    asm("loc_417AF0: cmp %bl,0x28(%edx);");
    asm("loc_417AF3: jne loc_417B88;");
    asm("loc_417AF9: movb $0,0x28(%ecx);");
    asm("loc_417AFD: mov 4(%edi),%ecx;");
    asm("loc_417B00: mov 4(%eax),%eax;");
    asm("loc_417B03: cmp 4(%ecx),%eax;");
    asm("loc_417B06: jne loc_4179D0;");
    asm("loc_417B0C: jmp loc_417C27;");
    asm("loc_417B11: mov 4(%ecx),%esi;");
    asm("loc_417B14: cmp 8(%esi),%ecx;");
    asm("loc_417B17: jne loc_417B1E;");
    asm("loc_417B19: mov %edx,8(%esi);");
    asm("loc_417B1C: jmp loc_417B20;");
    asm("loc_417B1E: mov %edx,(%esi);");
    asm("loc_417B20: mov %ecx,8(%edx);");
    asm("loc_417B23: mov %edx,4(%ecx);");
    asm("loc_417B26: mov 4(%eax),%ecx;");
    asm("loc_417B29: mov 8(%ecx),%ecx;");
    asm("loc_417B2C: mov 4(%eax),%edx;");
    asm("loc_417B2F: mov 0x28(%edx),%dl;");
    asm("loc_417B32: mov %dl,0x28(%ecx);");
    asm("loc_417B35: mov 4(%eax),%edx;");
    asm("loc_417B38: mov %bl,0x28(%edx);");
    asm("loc_417B3B: mov 8(%ecx),%ecx;");
    asm("loc_417B3E: mov %bl,0x28(%ecx);");
    asm("loc_417B41: mov 4(%eax),%ecx;");
    asm("loc_417B44: mov 8(%ecx),%edx;");
    asm("loc_417B47: mov (%edx),%esi;");
    asm("loc_417B49: mov %esi,8(%ecx);");
    asm("loc_417B4C: mov (%edx),%esi;");
    asm("loc_417B4E: cmp 8(%edi),%esi;");
    asm("loc_417B51: je loc_417B56;");
    asm("loc_417B53: mov %ecx,4(%esi);");
    asm("loc_417B56: mov 4(%ecx),%esi;");
    asm("loc_417B59: mov %esi,4(%edx);");
    asm("loc_417B5C: mov 4(%edi),%esi;");
    asm("loc_417B5F: cmp 4(%esi),%ecx;");
    asm("loc_417B62: jne loc_417B6E;");
    asm("loc_417B64: mov %edx,4(%esi);");
    asm("loc_417B67: mov %ecx,(%edx);");
    asm("loc_417B69: jmp loc_417C24;");
    asm("loc_417B6E: mov 4(%ecx),%esi;");
    asm("loc_417B71: cmp (%esi),%ecx;");
    asm("loc_417B73: jne loc_417B7E;");
    asm("loc_417B75: mov %edx,(%esi);");
    asm("loc_417B77: mov %ecx,(%edx);");
    asm("loc_417B79: jmp loc_417C24;");
    asm("loc_417B7E: mov %edx,8(%esi);");
    asm("loc_417B81: mov %ecx,(%edx);");
    asm("loc_417B83: jmp loc_417C24;");
    asm("loc_417B88: mov (%ecx),%edx;");
    asm("loc_417B8A: cmp %bl,0x28(%edx);");
    asm("loc_417B8D: jne loc_417BD6;");
    asm("loc_417B8F: mov 8(%ecx),%edx;");
    asm("loc_417B92: mov %bl,0x28(%edx);");
    asm("loc_417B95: mov 8(%ecx),%edx;");
    asm("loc_417B98: movb $0,0x28(%ecx);");
    asm("loc_417B9C: mov (%edx),%esi;");
    asm("loc_417B9E: mov %esi,8(%ecx);");
    asm("loc_417BA1: mov (%edx),%esi;");
    asm("loc_417BA3: cmp 8(%edi),%esi;");
    asm("loc_417BA6: je loc_417BAB;");
    asm("loc_417BA8: mov %ecx,4(%esi);");
    asm("loc_417BAB: mov 4(%ecx),%esi;");
    asm("loc_417BAE: mov %esi,4(%edx);");
    asm("loc_417BB1: mov 4(%edi),%esi;");
    asm("loc_417BB4: cmp 4(%esi),%ecx;");
    asm("loc_417BB7: jne loc_417BBE;");
    asm("loc_417BB9: mov %edx,4(%esi);");
    asm("loc_417BBC: jmp loc_417BCC;");
    asm("loc_417BBE: mov 4(%ecx),%esi;");
    asm("loc_417BC1: cmp (%esi),%ecx;");
    asm("loc_417BC3: jne loc_417BC9;");
    asm("loc_417BC5: mov %edx,(%esi);");
    asm("loc_417BC7: jmp loc_417BCC;");
    asm("loc_417BC9: mov %edx,8(%esi);");
    asm("loc_417BCC: mov %ecx,(%edx);");
    asm("loc_417BCE: mov %edx,4(%ecx);");
    asm("loc_417BD1: mov 4(%eax),%ecx;");
    asm("loc_417BD4: mov (%ecx),%ecx;");
    asm("loc_417BD6: mov 4(%eax),%edx;");
    asm("loc_417BD9: mov 0x28(%edx),%dl;");
    asm("loc_417BDC: mov %dl,0x28(%ecx);");
    asm("loc_417BDF: mov 4(%eax),%edx;");
    asm("loc_417BE2: mov %bl,0x28(%edx);");
    asm("loc_417BE5: mov (%ecx),%ecx;");
    asm("loc_417BE7: mov %bl,0x28(%ecx);");
    asm("loc_417BEA: mov 4(%eax),%ecx;");
    asm("loc_417BED: mov (%ecx),%edx;");
    asm("loc_417BEF: mov 8(%edx),%esi;");
    asm("loc_417BF2: mov %esi,(%ecx);");
    asm("loc_417BF4: mov 8(%edx),%esi;");
    asm("loc_417BF7: cmp 8(%edi),%esi;");
    asm("loc_417BFA: je loc_417BFF;");
    asm("loc_417BFC: mov %ecx,4(%esi);");
    asm("loc_417BFF: mov 4(%ecx),%esi;");
    asm("loc_417C02: mov %esi,4(%edx);");
    asm("loc_417C05: mov 4(%edi),%esi;");
    asm("loc_417C08: cmp 4(%esi),%ecx;");
    asm("loc_417C0B: jne loc_417C12;");
    asm("loc_417C0D: mov %edx,4(%esi);");
    asm("loc_417C10: jmp loc_417C21;");
    asm("loc_417C12: mov 4(%ecx),%esi;");
    asm("loc_417C15: cmp 8(%esi),%ecx;");
    asm("loc_417C18: jne loc_417C1F;");
    asm("loc_417C1A: mov %edx,8(%esi);");
    asm("loc_417C1D: jmp loc_417C21;");
    asm("loc_417C1F: mov %edx,(%esi);");
    asm("loc_417C21: mov %ecx,8(%edx);");
    asm("loc_417C24: mov %edx,4(%ecx);");
    asm("loc_417C27: mov 0x10(%esp),%esi;");
    asm("loc_417C2B: mov %bl,0x28(%eax);");
    asm("loc_417C2E: lea 0xC(%esi),%ecx;");
    asm("loc_417C31: call _sub_417DC0;");
    asm("loc_417C36: push %esi;");
    asm("loc_417C37: call _sub_418978;");
    asm("loc_417C3C: mov 0x10(%edi),%eax;");
    asm("loc_417C3F: mov 0x20(%esp),%edx;");
    asm("loc_417C43: add $4,%esp;");
    asm("loc_417C46: dec %eax;");
    asm("loc_417C47: mov %eax,0x10(%edi);");
    asm("loc_417C4A: mov 0x18(%esp),%eax;");
    asm("loc_417C4E: pop %edi;");
    asm("loc_417C4F: pop %esi;");
    asm("loc_417C50: pop %ebp;");
    asm("loc_417C51: mov %edx,(%eax);");
    asm("loc_417C53: pop %ebx;");
    asm("loc_417C54: pop %ecx;");
    asm("loc_417C55: ret $8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_417C60() // _sub_417C60
{
    __DEBUG_ASM(417C60);
    // chunk 0x417C60 _sub_417C60
    asm("loc_417C60: push %ebx;");
    asm("loc_417C61: push %esi;");
    asm("loc_417C62: mov %ecx,%ebx;");
    asm("loc_417C64: mov 8(%ebx),%eax;");
    asm("loc_417C67: push %edi;");
    asm("loc_417C68: mov 0x10(%esp),%edi;");
    asm("loc_417C6C: cmp %eax,%edi;");
    asm("loc_417C6E: mov %edi,%esi;");
    asm("loc_417C70: je loc_417C99;");
    asm("loc_417C72: mov 8(%esi),%eax;");
    asm("loc_417C75: push %eax;");
    asm("loc_417C76: mov %ebx,%ecx;");
    asm("loc_417C78: call _sub_417C60;");
    asm("loc_417C7D: mov (%esi),%esi;");
    asm("loc_417C7F: lea 0xC(%edi),%ecx;");
    asm("loc_417C82: call _sub_417DC0;");
    asm("loc_417C87: push %edi;");
    asm("loc_417C88: call _sub_418978;");
    asm("loc_417C8D: mov 8(%ebx),%eax;");
    asm("loc_417C90: add $4,%esp;");
    asm("loc_417C93: cmp %eax,%esi;");
    asm("loc_417C95: mov %esi,%edi;");
    asm("loc_417C97: jne loc_417C72;");
    asm("loc_417C99: pop %edi;");
    asm("loc_417C9A: pop %esi;");
    asm("loc_417C9B: pop %ebx;");
    asm("loc_417C9C: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_417CA0() // _sub_417CA0
{
    __DEBUG_ASM(417CA0);
    // chunk 0x417CA0 _sub_417CA0
    asm("loc_417CA0: mov 4(%ecx),%eax;");
    asm("loc_417CA3: mov 4(%eax),%edx;");
    asm("loc_417CA6: mov 8(%ecx),%ecx;");
    asm("loc_417CA9: cmp %ecx,%edx;");
    asm("loc_417CAB: je loc_417CC7;");
    asm("loc_417CAD: push %esi;");
    asm("loc_417CAE: mov 8(%esp),%esi;");
    asm("loc_417CB2: mov (%esi),%esi;");
    asm("loc_417CB4: cmp %esi,0xC(%edx);");
    asm("loc_417CB7: jae loc_417CBE;");
    asm("loc_417CB9: mov 8(%edx),%edx;");
    asm("loc_417CBC: jmp loc_417CC2;");
    asm("loc_417CBE: mov %edx,%eax;");
    asm("loc_417CC0: mov (%edx),%edx;");
    asm("loc_417CC2: cmp %ecx,%edx;");
    asm("loc_417CC4: jne loc_417CB4;");
    asm("loc_417CC6: pop %esi;");
    asm("loc_417CC7: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_417CD0() // _sub_417CD0
{
    __DEBUG_ASM(417CD0);
    // chunk 0x417CD0 _sub_417CD0
    asm("loc_417CD0: mov 4(%esp),%ecx;");
    asm("loc_417CD4: mov 8(%esp),%edx;");
    asm("loc_417CD8: cmp %edx,%ecx;");
    asm("loc_417CDA: mov 0xC(%esp),%eax;");
    asm("loc_417CDE: je loc_417CF4;");
    asm("loc_417CE0: push %esi;");
    asm("loc_417CE1: test %eax,%eax;");
    asm("loc_417CE3: je loc_417CE9;");
    asm("loc_417CE5: mov (%ecx),%esi;");
    asm("loc_417CE7: mov %esi,(%eax);");
    asm("loc_417CE9: add $4,%ecx;");
    asm("loc_417CEC: add $4,%eax;");
    asm("loc_417CEF: cmp %edx,%ecx;");
    asm("loc_417CF1: jne loc_417CE1;");
    asm("loc_417CF3: pop %esi;");
    asm("loc_417CF4: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_417D00() // _sub_417D00
{
    __DEBUG_ASM(417D00);
    // chunk 0x417D00 _sub_417D00
    asm("loc_417D00: mov 8(%esp),%eax;");
    asm("loc_417D04: test %eax,%eax;");
    asm("loc_417D06: jbe loc_417D22;");
    asm("loc_417D08: mov 0xC(%esp),%edx;");
    asm("loc_417D0C: mov %eax,%ecx;");
    asm("loc_417D0E: mov 4(%esp),%eax;");
    asm("loc_417D12: push %esi;");
    asm("loc_417D13: test %eax,%eax;");
    asm("loc_417D15: je loc_417D1B;");
    asm("loc_417D17: mov (%edx),%esi;");
    asm("loc_417D19: mov %esi,(%eax);");
    asm("loc_417D1B: add $4,%eax;");
    asm("loc_417D1E: dec %ecx;");
    asm("loc_417D1F: jne loc_417D13;");
    asm("loc_417D21: pop %esi;");
    asm("loc_417D22: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_417D30() // _sub_417D30
{
    __DEBUG_ASM(417D30);
    // chunk 0x417D30 _sub_417D30
    asm("loc_417D30: mov (%ecx),%eax;");
    asm("loc_417D32: mov 8(%eax),%edx;");
    asm("loc_417D35: push %ebx;");
    asm("loc_417D36: mov 0x29(%edx),%bl;");
    asm("loc_417D39: test %bl,%bl;");
    asm("loc_417D3B: jne loc_417D55;");
    asm("loc_417D3D: mov (%edx),%eax;");
    asm("loc_417D3F: mov 0x29(%eax),%bl;");
    asm("loc_417D42: test %bl,%bl;");
    asm("loc_417D44: jne loc_417D51;");
    asm("loc_417D46: mov %eax,%edx;");
    asm("loc_417D48: mov (%edx),%eax;");
    asm("loc_417D4A: mov 0x29(%eax),%bl;");
    asm("loc_417D4D: test %bl,%bl;");
    asm("loc_417D4F: je loc_417D46;");
    asm("loc_417D51: mov %edx,(%ecx);");
    asm("loc_417D53: pop %ebx;");
    asm("loc_417D54: ret;");
    asm("loc_417D55: mov 4(%eax),%eax;");
    asm("loc_417D58: mov (%ecx),%edx;");
    asm("loc_417D5A: cmp 8(%eax),%edx;");
    asm("loc_417D5D: jne loc_417D6C;");
    asm("loc_417D5F: nop;");
    asm("loc_417D60: mov %eax,(%ecx);");
    asm("loc_417D62: mov 4(%eax),%eax;");
    asm("loc_417D65: mov (%ecx),%edx;");
    asm("loc_417D67: cmp 8(%eax),%edx;");
    asm("loc_417D6A: je loc_417D60;");
    asm("loc_417D6C: mov (%ecx),%edx;");
    asm("loc_417D6E: cmp %eax,8(%edx);");
    asm("loc_417D71: je loc_417D75;");
    asm("loc_417D73: mov %eax,(%ecx);");
    asm("loc_417D75: pop %ebx;");
    asm("loc_417D76: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_417D80() // _sub_417D80
{
    __DEBUG_ASM(417D80);
    // chunk 0x417D80 _sub_417D80
    asm("loc_417D80: mov 4(%esp),%eax;");
    asm("loc_417D84: test %eax,%eax;");
    asm("loc_417D86: je loc_417D90;");
    asm("loc_417D88: mov 8(%esp),%ecx;");
    asm("loc_417D8C: mov (%ecx),%edx;");
    asm("loc_417D8E: mov %edx,(%eax);");
    asm("loc_417D90: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_417DA0() // _sub_417DA0
{
    __DEBUG_ASM(417DA0);
    // chunk 0x417DA0 _sub_417DA0
    asm("loc_417DA0: push %esi;");
    asm("loc_417DA1: mov %ecx,%esi;");
    asm("loc_417DA3: call _sub_417DC0;");
    asm("loc_417DA8: testb $1,8(%esp);");
    asm("loc_417DAD: je loc_417DB8;");
    asm("loc_417DAF: push %esi;");
    asm("loc_417DB0: call _sub_418978;");
    asm("loc_417DB5: add $4,%esp;");
    asm("loc_417DB8: mov %esi,%eax;");
    asm("loc_417DBA: pop %esi;");
    asm("loc_417DBB: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_417DC0() // _sub_417DC0
{
    __DEBUG_ASM(417DC0);
    // chunk 0x417DC0 _sub_417DC0
    asm("loc_417DC0: add $4,%ecx;");
    asm("loc_417DC3: jmpl *_import_41BB94;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_417DD0() // _sub_417DD0
{
    __DEBUG_ASM(417DD0);
    // chunk 0x417DD0 _sub_417DD0
    asm("loc_417DD0: mov _data_41E84C,%eax;");
    asm("loc_417DD5: mov %eax,_data_429DFC;");
    asm("loc_417DDA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_417DE0() // _sub_417DE0
{
    __DEBUG_ASM(417DE0);
    // chunk 0x417DE0 _sub_417DE0
    asm("loc_417DE0: mov _data_41E84C,%eax;");
    asm("loc_417DE5: mov %eax,_data_429E08;");
    asm("loc_417DEA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_417DF0() // _sub_417DF0
{
    __DEBUG_ASM(417DF0);
    // chunk 0x417DF0 _sub_417DF0
    asm("loc_417DF0: mov _data_41E850,%eax;");
    asm("loc_417DF5: mov %eax,_data_429DF8;");
    asm("loc_417DFA: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_417E00() // _sub_417E00
{
    __DEBUG_ASM(417E00);
    // chunk 0x417E00 _sub_417E00
    asm("loc_417E00: xor %eax,%eax;");
    asm("loc_417E02: mov %ax,_data_429E04;");
    asm("loc_417E08: mov %al,_data_429E06;");
    asm("loc_417E0D: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_417E10() // _sub_417E10
{
    __DEBUG_ASM(417E10);
    // chunk 0x417E10 _sub_417E10
    asm("loc_417E10: movw $0,_data_429E14;");
    asm("loc_417E19: movb $1,_data_429E14+2;");
    asm("loc_417E20: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_417E30() // _sub_417E30
{
    __DEBUG_ASM(417E30);
    // chunk 0x417E30 _sub_417E30
    asm("loc_417E30: mov $1,%eax;");
    asm("loc_417E35: mov %ax,_data_429E00;");
    asm("loc_417E3B: mov %al,_data_429E02;");
    asm("loc_417E40: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_417E50() // _sub_417E50
{
    __DEBUG_ASM(417E50);
    // chunk 0x417E50 _sub_417E50
    asm("loc_417E50: movw $2,_data_42A6F8;");
    asm("loc_417E59: movb $1,_data_42A6FA;");
    asm("loc_417E60: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_417E70() // _sub_417E70
{
    __DEBUG_ASM(417E70);
    // chunk 0x417E70 _sub_417E70
    asm("loc_417E70: movw $3,_data_429E0C;");
    asm("loc_417E79: movb $1,_data_429E0E;");
    asm("loc_417E80: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_417E90() // _sub_417E90
{
    __DEBUG_ASM(417E90);
    // chunk 0x417E90 _sub_417E90
    asm("loc_417E90: movw $4,_data_429E10;");
    asm("loc_417E99: movb $1,_data_429E12;");
    asm("loc_417EA0: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_417EB0() // ??__E?wndTop@CWnd@@2V1@B@@YAXXZ_1
{
    __DEBUG_ASM(417EB0);
    // chunk 0x417EB0 _sub_417EB0
    asm("loc_417EB0: push $0;");
    asm("loc_417EB2: mov $_data_42A618,%ecx;");
    asm("loc_417EB7: call _sub_417F40;");
    asm("loc_417EBC: push $_sub_417ED0;");
    asm("loc_417EC1: call _sub_419410;");
    asm("loc_417EC6: pop %ecx;");
    asm("loc_417EC7: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_417ED0() // _sub_417ED0
{
    __DEBUG_ASM(417ED0);
    // chunk 0x417ED0 _sub_417ED0
    asm("loc_417ED0: mov $_data_42A618,%ecx;");
    asm("loc_417ED5: jmp _sub_417EE0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_417EE0() // _sub_417EE0
{
    __DEBUG_ASM(417EE0);
    // chunk 0x417EE0 _sub_417EE0
    asm("loc_417EE0: push $0xFFFFFFFF;");
    asm("loc_417EE2: push $_sub_41AB33;");
    asm("loc_417EE7: mov %fs:0,%eax;");
    asm("loc_417EED: push %eax;");
    asm("loc_417EEE: mov %esp,%fs:0;");
    asm("loc_417EF5: push %ecx;");
    asm("loc_417EF6: push %esi;");
    asm("loc_417EF7: mov %ecx,%esi;");
    asm("loc_417EF9: mov %esi,4(%esp);");
    asm("loc_417EFD: lea 0xA0(%esi),%ecx;");
    asm("loc_417F03: movl $1,0x10(%esp);");
    asm("loc_417F0B: call _sub_418C24;");
    asm("loc_417F10: lea 0x60(%esi),%ecx;");
    asm("loc_417F13: movb $0,0x10(%esp);");
    asm("loc_417F18: call _sub_418C24;");
    asm("loc_417F1D: mov %esi,%ecx;");
    asm("loc_417F1F: movl $0xFFFFFFFF,0x10(%esp);");
    asm("loc_417F27: call _sub_418A98;");
    asm("loc_417F2C: mov 8(%esp),%ecx;");
    asm("loc_417F30: pop %esi;");
    asm("loc_417F31: mov %ecx,%fs:0;");
    asm("loc_417F38: add $0x10,%esp;");
    asm("loc_417F3B: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_417F40() // _sub_417F40
{
    __DEBUG_ASM(417F40);
    // chunk 0x417F40 _sub_417F40
    asm("loc_417F40: push $0xFFFFFFFF;");
    asm("loc_417F42: push $_sub_41AB53;");
    asm("loc_417F47: mov %fs:0,%eax;");
    asm("loc_417F4D: push %eax;");
    asm("loc_417F4E: mov %esp,%fs:0;");
    asm("loc_417F55: push %ecx;");
    asm("loc_417F56: mov 0x14(%esp),%eax;");
    asm("loc_417F5A: push %esi;");
    asm("loc_417F5B: push %edi;");
    asm("loc_417F5C: push %eax;");
    asm("loc_417F5D: mov %ecx,%esi;");
    asm("loc_417F5F: push $0x92;");
    asm("loc_417F64: mov %esi,0x10(%esp);");
    asm("loc_417F68: call _sub_418A92;");
    asm("loc_417F6D: lea 0x60(%esi),%edi;");
    asm("loc_417F70: mov %edi,%ecx;");
    asm("loc_417F72: movl $0,0x14(%esp);");
    asm("loc_417F7A: call _sub_418C2A;");
    asm("loc_417F7F: movl $_off_41C820,(%edi);");
    asm("loc_417F85: lea 0xA0(%esi),%edi;");
    asm("loc_417F8B: mov %edi,%ecx;");
    asm("loc_417F8D: movb $1,0x14(%esp);");
    asm("loc_417F92: call _sub_418C2A;");
    asm("loc_417F97: mov 0xC(%esp),%ecx;");
    asm("loc_417F9B: movl $_off_41C820,(%edi);");
    asm("loc_417FA1: movl $_off_41E8D8,(%esi);");
    asm("loc_417FA7: pop %edi;");
    asm("loc_417FA8: mov %esi,%eax;");
    asm("loc_417FAA: pop %esi;");
    asm("loc_417FAB: mov %ecx,%fs:0;");
    asm("loc_417FB2: add $0x10,%esp;");
    asm("loc_417FB5: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_417FC0() // _sub_417FC0
{
    __DEBUG_ASM(417FC0);
    // chunk 0x417FC0 _sub_417FC0
    asm("loc_417FC0: push %esi;");
    asm("loc_417FC1: mov %ecx,%esi;");
    asm("loc_417FC3: call _sub_417EE0;");
    asm("loc_417FC8: testb $1,8(%esp);");
    asm("loc_417FCD: je loc_417FD8;");
    asm("loc_417FCF: push %esi;");
    asm("loc_417FD0: call _sub_418978;");
    asm("loc_417FD5: add $4,%esp;");
    asm("loc_417FD8: mov %esi,%eax;");
    asm("loc_417FDA: pop %esi;");
    asm("loc_417FDB: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_417FE0() // _sub_417FE0
{
    __DEBUG_ASM(417FE0);
    // chunk 0x417FE0 _sub_417FE0
    asm("loc_417FE0: push %esi;");
    asm("loc_417FE1: push %edi;");
    asm("loc_417FE2: mov 0xC(%esp),%edi;");
    asm("loc_417FE6: mov %ecx,%esi;");
    asm("loc_417FE8: lea 0x60(%esi),%eax;");
    asm("loc_417FEB: push %eax;");
    asm("loc_417FEC: push $0x417;");
    asm("loc_417FF1: push %edi;");
    asm("loc_417FF2: call _sub_418AB0;");
    asm("loc_417FF7: add $0xA0,%esi;");
    asm("loc_417FFD: push %esi;");
    asm("loc_417FFE: push $0x418;");
    asm("loc_418003: push %edi;");
    asm("loc_418004: call _sub_418AB0;");
    asm("loc_418009: pop %edi;");
    asm("loc_41800A: pop %esi;");
    asm("loc_41800B: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418010() // _sub_418010
{
    __DEBUG_ASM(418010);
    // chunk 0x418010 _sub_418010
    asm("loc_418010: mov _import_41B3B0,%eax;");
    asm("loc_418015: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418020() // _sub_418020
{
    __DEBUG_ASM(418020);
    // chunk 0x418020 _sub_418020
    asm("loc_418020: mov $_off_41E8D0,%eax;");
    asm("loc_418025: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418030() // _sub_418030
{
    __DEBUG_ASM(418030);
    // chunk 0x418030 _sub_418030
    asm("loc_418030: push %esi;");
    asm("loc_418031: push %edi;");
    asm("loc_418032: mov %ecx,%esi;");
    asm("loc_418034: call _sub_418996;");
    asm("loc_418039: mov 0x80(%esi),%eax;");
    asm("loc_41803F: mov _import_41BBE8,%edi;");
    asm("loc_418045: push $0x10000;");
    asm("loc_41804A: push $0;");
    asm("loc_41804C: push $0x445;");
    asm("loc_418051: push %eax;");
    asm("loc_418052: call *%edi;");
    asm("loc_418054: mov 0x80(%esi),%ecx;");
    asm("loc_41805A: push $0x200;");
    asm("loc_41805F: push $0;");
    asm("loc_418061: push $0x435;");
    asm("loc_418066: push %ecx;");
    asm("loc_418067: call *%edi;");
    asm("loc_418069: call _sub_40CDC0;");
    asm("loc_41806E: mov _import_41BB98,%edx;");
    asm("loc_418074: movl $_sub_418090,(%edx);");
    asm("loc_41807A: call _sub_40CE70;");
    asm("loc_41807F: pop %edi;");
    asm("loc_418080: mov $1,%eax;");
    asm("loc_418085: pop %esi;");
    asm("loc_418086: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418090() // _sub_418090
{
    __DEBUG_ASM(418090);
    // chunk 0x418090 _sub_418090
    asm("loc_418090: push %esi;");
    asm("loc_418091: push %edi;");
    asm("loc_418092: call _sub_40CDC0;");
    asm("loc_418097: mov _data_42A6D8,%eax;");
    asm("loc_41809C: mov _import_41BBE8,%esi;");
    asm("loc_4180A2: push $0;");
    asm("loc_4180A4: push $0;");
    asm("loc_4180A6: push $0xBA;");
    asm("loc_4180AB: push %eax;");
    asm("loc_4180AC: call *%esi;");
    asm("loc_4180AE: mov 0xC(%esp),%ecx;");
    asm("loc_4180B2: mov _data_42A6D8,%edx;");
    asm("loc_4180B8: push %ecx;");
    asm("loc_4180B9: push %edx;");
    asm("loc_4180BA: mov %eax,%edi;");
    asm("loc_4180BC: call _sub_409880;");
    asm("loc_4180C1: mov _data_42A6D8,%eax;");
    asm("loc_4180C6: push $_data_4259C4;");
    asm("loc_4180CB: push %eax;");
    asm("loc_4180CC: call _sub_409880;");
    asm("loc_4180D1: mov _data_42A6D8,%ecx;");
    asm("loc_4180D7: add $0x10,%esp;");
    asm("loc_4180DA: push $0;");
    asm("loc_4180DC: push $0;");
    asm("loc_4180DE: push $0xBA;");
    asm("loc_4180E3: push %ecx;");
    asm("loc_4180E4: call *%esi;");
    asm("loc_4180E6: mov %eax,%esi;");
    asm("loc_4180E8: calll *_import_41BBC0;");
    asm("loc_4180EE: cmp _data_42A6D8,%eax;");
    asm("loc_4180F4: je loc_418105;");
    asm("loc_4180F6: push $0;");
    asm("loc_4180F8: sub %edi,%esi;");
    asm("loc_4180FA: push %esi;");
    asm("loc_4180FB: mov $_data_42A6B8,%ecx;");
    asm("loc_418100: call _sub_419056;");
    asm("loc_418105: pop %edi;");
    asm("loc_418106: pop %esi;");
    asm("loc_418107: jmp _sub_40CE70;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418110() // _sub_418110
{
    __DEBUG_ASM(418110);
    // chunk 0x418110 _sub_418110
    asm("loc_418110: mov %fs:0,%eax;");
    asm("loc_418116: push $0xFFFFFFFF;");
    asm("loc_418118: push $_sub_41AB9A;");
    asm("loc_41811D: push %eax;");
    asm("loc_41811E: mov 0x10(%esp),%eax;");
    asm("loc_418122: mov %esp,%fs:0;");
    asm("loc_418129: sub $0x83C,%esp;");
    asm("loc_41812F: push %edi;");
    asm("loc_418130: mov %ecx,%edi;");
    asm("loc_418132: cmpl $0xD,0x10(%eax);");
    asm("loc_418136: jne loc_41835F;");
    asm("loc_41813C: mov 0x80(%edi),%ecx;");
    asm("loc_418142: push %ebx;");
    asm("loc_418143: push %ebp;");
    asm("loc_418144: mov _import_41BBE8,%ebp;");
    asm("loc_41814A: xor %ebx,%ebx;");
    asm("loc_41814C: push %ebx;");
    asm("loc_41814D: push %ebx;");
    asm("loc_41814E: push $0xE;");
    asm("loc_418150: push %ecx;");
    asm("loc_418151: call *%ebp;");
    asm("loc_418153: test %eax,%eax;");
    asm("loc_418155: je loc_418333;");
    asm("loc_41815B: mov 0x80(%edi),%eax;");
    asm("loc_418161: push $0x800;");
    asm("loc_418166: lea 0x4C(%esp),%edx;");
    asm("loc_41816A: push %edx;");
    asm("loc_41816B: push %eax;");
    asm("loc_41816C: call _sub_409800;");
    asm("loc_418171: add $0xC,%esp;");
    asm("loc_418174: call _sub_40CDC0;");
    asm("loc_418179: mov 0x1F(%esp),%cl;");
    asm("loc_41817D: push %ebx;");
    asm("loc_41817E: mov %cl,0x14(%esp);");
    asm("loc_418182: push %ebx;");
    asm("loc_418183: lea 0x18(%esp),%ecx;");
    asm("loc_418187: call _sub_414820;");
    asm("loc_41818C: mov %eax,0x14(%esp);");
    asm("loc_418190: mov %ebx,0x18(%esp);");
    asm("loc_418194: push $0xD681;");
    asm("loc_418199: lea 0x30(%esp),%ecx;");
    asm("loc_41819D: mov %ebx,0x854(%esp);");
    asm("loc_4181A4: calll *_import_41B02C;");
    asm("loc_4181AA: mov (%eax),%edx;");
    asm("loc_4181AC: mov %eax,%ecx;");
    asm("loc_4181AE: movb $1,0x850(%esp);");
    asm("loc_4181B6: calll *0x1C(%edx);");
    asm("loc_4181B9: mov %eax,0xC(%esp);");
    asm("loc_4181BD: mov 0x14(%esp),%ecx;");
    asm("loc_4181C1: lea 0xC(%esp),%eax;");
    asm("loc_4181C5: push %eax;");
    asm("loc_4181C6: push %ecx;");
    asm("loc_4181C7: lea 0x28(%esp),%edx;");
    asm("loc_4181CB: push %edx;");
    asm("loc_4181CC: lea 0x1C(%esp),%ecx;");
    asm("loc_4181D0: movb $2,0x85C(%esp);");
    asm("loc_4181D8: call _sub_4147C0;");
    asm("loc_4181DD: mov 0xC(%esp),%ecx;");
    asm("loc_4181E1: cmp %ebx,%ecx;");
    asm("loc_4181E3: movb $1,0x850(%esp);");
    asm("loc_4181EB: je loc_4181F7;");
    asm("loc_4181ED: mov (%ecx),%eax;");
    asm("loc_4181EF: push $1;");
    asm("loc_4181F1: calll *(%eax);");
    asm("loc_4181F3: mov %ebx,0xC(%esp);");
    asm("loc_4181F7: lea 0x2C(%esp),%ecx;");
    asm("loc_4181FB: mov %bl,0x850(%esp);");
    asm("loc_418202: calll *_import_41B030;");
    asm("loc_418208: push $0xFFFFFFFF;");
    asm("loc_41820A: lea 0x4C(%esp),%ecx;");
    asm("loc_41820E: push %ecx;");
    asm("loc_41820F: lea 0x3C(%esp),%ecx;");
    asm("loc_418213: calll *_import_41B034;");
    asm("loc_418219: mov (%eax),%edx;");
    asm("loc_41821B: mov %eax,%ecx;");
    asm("loc_41821D: movb $3,0x850(%esp);");
    asm("loc_418225: calll *0x1C(%edx);");
    asm("loc_418228: mov %eax,0xC(%esp);");
    asm("loc_41822C: mov 0x14(%esp),%ecx;");
    asm("loc_418230: lea 0xC(%esp),%eax;");
    asm("loc_418234: push %eax;");
    asm("loc_418235: push %ecx;");
    asm("loc_418236: lea 0x28(%esp),%edx;");
    asm("loc_41823A: push %edx;");
    asm("loc_41823B: lea 0x1C(%esp),%ecx;");
    asm("loc_41823F: movb $4,0x85C(%esp);");
    asm("loc_418247: call _sub_4147C0;");
    asm("loc_41824C: mov 0xC(%esp),%ecx;");
    asm("loc_418250: cmp %ebx,%ecx;");
    asm("loc_418252: movb $3,0x850(%esp);");
    asm("loc_41825A: je loc_418266;");
    asm("loc_41825C: mov (%ecx),%eax;");
    asm("loc_41825E: push $1;");
    asm("loc_418260: calll *(%eax);");
    asm("loc_418262: mov %ebx,0xC(%esp);");
    asm("loc_418266: lea 0x34(%esp),%ecx;");
    asm("loc_41826A: mov %bl,0x850(%esp);");
    asm("loc_418271: calll *_import_41B038;");
    asm("loc_418277: mov _import_41B03C,%ecx;");
    asm("loc_41827D: lea 0x24(%esp),%edx;");
    asm("loc_418281: push %edx;");
    asm("loc_418282: push $0x800;");
    asm("loc_418287: push $_data_429E18;");
    asm("loc_41828C: lea 0x1C(%esp),%eax;");
    asm("loc_418290: mov %ecx,0x34(%esp);");
    asm("loc_418294: push %eax;");
    asm("loc_418295: lea 0x38(%esp),%ecx;");
    asm("loc_418299: calll *_import_41B094;");
    asm("loc_41829F: test %al,%al;");
    asm("loc_4182A1: je loc_4182D6;");
    asm("loc_4182A3: mov _data_429E14,%ecx;");
    asm("loc_4182A9: mov 0x24(%esp),%edx;");
    asm("loc_4182AD: push $0xFFFFFFFF;");
    asm("loc_4182AF: push %ecx;");
    asm("loc_4182B0: mov _import_41BB70,%ecx;");
    asm("loc_4182B6: push $_data_429E18;");
    asm("loc_4182BB: mov %bx,0x18(%esp);");
    asm("loc_4182C0: mov %bl,0x1A(%esp);");
    asm("loc_4182C4: mov %bl,0x1B(%esp);");
    asm("loc_4182C8: mov 0x18(%esp),%eax;");
    asm("loc_4182CC: push %edx;");
    asm("loc_4182CD: push %eax;");
    asm("loc_4182CE: add $4,%ecx;");
    asm("loc_4182D1: call _sub_4188F4;");
    asm("loc_4182D6: push %esi;");
    asm("loc_4182D7: call _sub_40CE70;");
    asm("loc_4182DC: mov 0x18(%esp),%eax;");
    asm("loc_4182E0: mov (%eax),%ecx;");
    asm("loc_4182E2: cmp %eax,%ecx;");
    asm("loc_4182E4: movl $0xFFFFFFFF,0x854(%esp);");
    asm("loc_4182EF: mov %eax,%esi;");
    asm("loc_4182F1: mov %ecx,0x10(%esp);");
    asm("loc_4182F5: je loc_418321;");
    asm("loc_4182F7: push %ebx;");
    asm("loc_4182F8: lea 0x28(%esp),%edx;");
    asm("loc_4182FC: push %edx;");
    asm("loc_4182FD: lea 0x18(%esp),%ecx;");
    asm("loc_418301: call _sub_416D10;");
    asm("loc_418306: mov (%eax),%eax;");
    asm("loc_418308: push %eax;");
    asm("loc_418309: lea 0x34(%esp),%ecx;");
    asm("loc_41830D: push %ecx;");
    asm("loc_41830E: lea 0x1C(%esp),%ecx;");
    asm("loc_418312: call _sub_414EC0;");
    asm("loc_418317: cmp %esi,0x10(%esp);");
    asm("loc_41831B: jne loc_4182F7;");
    asm("loc_41831D: mov 0x18(%esp),%eax;");
    asm("loc_418321: push %eax;");
    asm("loc_418322: call _sub_418978;");
    asm("loc_418327: add $4,%esp;");
    asm("loc_41832A: mov %ebx,0x18(%esp);");
    asm("loc_41832E: mov %ebx,0x1C(%esp);");
    asm("loc_418332: pop %esi;");
    asm("loc_418333: push $0xFFFFFFFF;");
    asm("loc_418335: push %ebx;");
    asm("loc_418336: lea 0x60(%edi),%ecx;");
    asm("loc_418339: call _sub_419050;");
    asm("loc_41833E: mov 0x80(%edi),%edx;");
    asm("loc_418344: push %ebx;");
    asm("loc_418345: push %ebx;");
    asm("loc_418346: push $0x303;");
    asm("loc_41834B: push %edx;");
    asm("loc_41834C: call *%ebp;");
    asm("loc_41834E: mov 0x85C(%esp),%eax;");
    asm("loc_418355: pop %ebp;");
    asm("loc_418356: movl $1,(%eax);");
    asm("loc_41835C: pop %ebx;");
    asm("loc_41835D: jmp loc_41836C;");
    asm("loc_41835F: mov 0x854(%esp),%ecx;");
    asm("loc_418366: movl $0,(%ecx);");
    asm("loc_41836C: mov 0x840(%esp),%ecx;");
    asm("loc_418373: pop %edi;");
    asm("loc_418374: mov %ecx,%fs:0;");
    asm("loc_41837B: add $0x848,%esp;");
    asm("loc_418381: ret $8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418390() // ?OnClose@CDockablePane@@IAEXXZ_1
{
    __DEBUG_ASM(418390);
    // chunk 0x418390 _sub_418390
    asm("loc_418390: mov (%ecx),%eax;");
    asm("loc_418392: jmpl *0x60(%eax);");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4183A0() // _nullsub_17
{
    __DEBUG_ASM(4183A0);
    // chunk 0x4183A0 _sub_4183A0
    asm("loc_4183A0: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4183B0() // ?OnClose@CDockablePane@@IAEXXZ_2
{
    __DEBUG_ASM(4183B0);
    // chunk 0x4183B0 _sub_4183B0
    asm("loc_4183B0: mov (%ecx),%eax;");
    asm("loc_4183B2: jmpl *0x60(%eax);");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4183C0() // _sub_4183C0
{
    __DEBUG_ASM(4183C0);
    // chunk 0x4183C0 _sub_4183C0
    asm("loc_4183C0: push %esi;");
    asm("loc_4183C1: mov %ecx,%esi;");
    asm("loc_4183C3: mov (%esi),%eax;");
    asm("loc_4183C5: calll *0x60(%eax);");
    asm("loc_4183C8: mov %esi,%ecx;");
    asm("loc_4183CA: pop %esi;");
    asm("loc_4183CB: jmp _sub_418C54;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4183D0() // _sub_4183D0
{
    __DEBUG_ASM(4183D0);
    // chunk 0x4183D0 _sub_4183D0
    asm("loc_4183D0: call _sub_4192B4;");
    asm("loc_4183D5: mov _import_41BB98,%eax;");
    asm("loc_4183DA: movl $0,(%eax);");
    asm("loc_4183E0: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4183F0() // _sub_4183F0
{
    __DEBUG_ASM(4183F0);
    // chunk 0x4183F0 _sub_4183F0
    asm("loc_4183F0: mov 4(%esp),%edx;");
    asm("loc_4183F4: push %esi;");
    asm("loc_4183F5: mov 0xC(%esp),%esi;");
    asm("loc_4183F9: push %edi;");
    asm("loc_4183FA: movsbl (%edx),%eax;");
    asm("loc_4183FD: movsbl (%esi),%ecx;");
    asm("loc_418400: mov _data_425DD8(%eax),%al;");
    asm("loc_418406: inc %edx;");
    asm("loc_418407: mov _data_425DD8(%ecx),%cl;");
    asm("loc_41840D: inc %esi;");
    asm("loc_41840E: movsbl %cl,%edi;");
    asm("loc_418411: movsbl %al,%eax;");
    asm("loc_418414: sub %edi,%eax;");
    asm("loc_418416: jne loc_41841C;");
    asm("loc_418418: test %cl,%cl;");
    asm("loc_41841A: jne loc_4183FA;");
    asm("loc_41841C: pop %edi;");
    asm("loc_41841D: pop %esi;");
    asm("loc_41841E: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418420() // _sub_418420
{
    __DEBUG_ASM(418420);
    // chunk 0x418420 _sub_418420
    asm("loc_418420: mov 4(%esp),%ecx;");
    asm("loc_418424: mov 8(%esp),%edx;");
    asm("loc_418428: or $0xFFFFFFFF,%eax;");
    asm("loc_41842B: cmp %edx,%ecx;");
    asm("loc_41842D: push %ebx;");
    asm("loc_41842E: je loc_418454;");
    asm("loc_418430: movsbl (%ecx),%edx;");
    asm("loc_418433: xor %ebx,%ebx;");
    asm("loc_418435: mov _data_425DD8(%edx),%bl;");
    asm("loc_41843B: mov %eax,%edx;");
    asm("loc_41843D: and $0xFF,%edx;");
    asm("loc_418443: xor %edx,%ebx;");
    asm("loc_418445: shr $8,%eax;");
    asm("loc_418448: mov _data_4259D8(,%ebx,4),%edx;");
    asm("loc_41844F: xor %edx,%eax;");
    asm("loc_418451: inc %ecx;");
    asm("loc_418452: jmp loc_418430;");
    asm("loc_418454: xor %eax,%eax;");
    asm("loc_418456: pop %ebx;");
    asm("loc_418457: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418460() // _sub_418460
{
    __DEBUG_ASM(418460);
    // chunk 0x418460 _sub_418460
    asm("loc_418460: mov 4(%esp),%edx;");
    asm("loc_418464: test %edx,%edx;");
    asm("loc_418466: jne loc_41846B;");
    asm("loc_418468: xor %eax,%eax;");
    asm("loc_41846A: ret;");
    asm("loc_41846B: mov (%edx),%cl;");
    asm("loc_41846D: or $0xFFFFFFFF,%eax;");
    asm("loc_418470: test %cl,%cl;");
    asm("loc_418472: je loc_41849F;");
    asm("loc_418474: push %ebx;");
    asm("loc_418475: movsbl %cl,%ecx;");
    asm("loc_418478: xor %ebx,%ebx;");
    asm("loc_41847A: mov _data_425DD8(%ecx),%bl;");
    asm("loc_418480: mov %eax,%ecx;");
    asm("loc_418482: and $0xFF,%ecx;");
    asm("loc_418488: xor %ecx,%ebx;");
    asm("loc_41848A: shr $8,%eax;");
    asm("loc_41848D: mov _data_4259D8(,%ebx,4),%ecx;");
    asm("loc_418494: xor %ecx,%eax;");
    asm("loc_418496: mov 1(%edx),%cl;");
    asm("loc_418499: inc %edx;");
    asm("loc_41849A: test %cl,%cl;");
    asm("loc_41849C: jne loc_418475;");
    asm("loc_41849E: pop %ebx;");
    asm("loc_41849F: not %eax;");
    asm("loc_4184A1: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4184B0() // _sub_4184B0
{
    __DEBUG_ASM(4184B0);
    // chunk 0x4184B0 _sub_4184B0
    asm("loc_4184B0: mov 8(%esp),%edx;");
    asm("loc_4184B4: mov 4(%esp),%eax;");
    asm("loc_4184B8: test %edx,%edx;");
    asm("loc_4184BA: je loc_4184F1;");
    asm("loc_4184BC: mov (%edx),%cl;");
    asm("loc_4184BE: test %cl,%cl;");
    asm("loc_4184C0: not %eax;");
    asm("loc_4184C2: je loc_4184EF;");
    asm("loc_4184C4: push %ebx;");
    asm("loc_4184C5: movsbl %cl,%ecx;");
    asm("loc_4184C8: xor %ebx,%ebx;");
    asm("loc_4184CA: mov _data_425DD8(%ecx),%bl;");
    asm("loc_4184D0: mov %eax,%ecx;");
    asm("loc_4184D2: and $0xFF,%ecx;");
    asm("loc_4184D8: xor %ecx,%ebx;");
    asm("loc_4184DA: shr $8,%eax;");
    asm("loc_4184DD: mov _data_4259D8(,%ebx,4),%ecx;");
    asm("loc_4184E4: xor %ecx,%eax;");
    asm("loc_4184E6: mov 1(%edx),%cl;");
    asm("loc_4184E9: inc %edx;");
    asm("loc_4184EA: test %cl,%cl;");
    asm("loc_4184EC: jne loc_4184C5;");
    asm("loc_4184EE: pop %ebx;");
    asm("loc_4184EF: not %eax;");
    asm("loc_4184F1: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418500() // _sub_418500
{
    __DEBUG_ASM(418500);
    // chunk 0x418500 _sub_418500
    asm("loc_418500: movsbl 8(%esp),%eax;");
    asm("loc_418505: mov 4(%esp),%ecx;");
    asm("loc_418509: xor %edx,%edx;");
    asm("loc_41850B: mov _data_425DD8(%eax),%dl;");
    asm("loc_418511: not %ecx;");
    asm("loc_418513: mov %ecx,%eax;");
    asm("loc_418515: and $0xFF,%eax;");
    asm("loc_41851A: xor %eax,%edx;");
    asm("loc_41851C: shr $8,%ecx;");
    asm("loc_41851F: mov _data_4259D8(,%edx,4),%eax;");
    asm("loc_418526: xor %ecx,%eax;");
    asm("loc_418528: not %eax;");
    asm("loc_41852A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418530() // _sub_418530
{
    __DEBUG_ASM(418530);
    // chunk 0x418530 _sub_418530
    asm("loc_418530: mov 4(%esp),%edx;");
    asm("loc_418534: test %edx,%edx;");
    asm("loc_418536: jne loc_41853B;");
    asm("loc_418538: xor %eax,%eax;");
    asm("loc_41853A: ret;");
    asm("loc_41853B: mov (%edx),%cl;");
    asm("loc_41853D: or $0xFFFFFFFF,%eax;");
    asm("loc_418540: test %cl,%cl;");
    asm("loc_418542: je loc_41856A;");
    asm("loc_418544: push %esi;");
    asm("loc_418545: mov %eax,%esi;");
    asm("loc_418547: and $0xFF,%ecx;");
    asm("loc_41854D: and $0xFF,%esi;");
    asm("loc_418553: xor %esi,%ecx;");
    asm("loc_418555: shr $8,%eax;");
    asm("loc_418558: mov _data_4259D8(,%ecx,4),%ecx;");
    asm("loc_41855F: xor %ecx,%eax;");
    asm("loc_418561: mov 1(%edx),%cl;");
    asm("loc_418564: inc %edx;");
    asm("loc_418565: test %cl,%cl;");
    asm("loc_418567: jne loc_418545;");
    asm("loc_418569: pop %esi;");
    asm("loc_41856A: not %eax;");
    asm("loc_41856C: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418570() // ?Read@CGunWrapper@@UAGJPAUGUNQueueMessage@Gun2@@@Z
{
    __DEBUG_ASM(418570);
    // chunk 0x418570 _sub_418570
    asm("loc_418570: jmpl *_import_41B0B4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418576() // ??1CGunWrapper@@UAE@XZ
{
    __DEBUG_ASM(418576);
    // chunk 0x418576 _sub_418576
    asm("loc_418576: jmpl *_import_41B0E0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41857C() // ??1MD5Hash@@UAE@XZ
{
    __DEBUG_ASM(41857C);
    // chunk 0x41857C _sub_41857C
    asm("loc_41857C: jmpl *_import_41B0E8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418582() // ??1CDPMsgList@@UAE@XZ
{
    __DEBUG_ASM(418582);
    // chunk 0x418582 _sub_418582
    asm("loc_418582: jmpl *_import_41B0E4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418588() // ?CreateClientProxy@CDPServer@@UAEPAVCDPClientProxy@@XZ
{
    __DEBUG_ASM(418588);
    // chunk 0x418588 _sub_418588
    asm("loc_418588: jmpl *_import_41B0DC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41858E() // ??1CDPServer@@UAE@XZ
{
    __DEBUG_ASM(41858E);
    // chunk 0x41858E _sub_41858E
    asm("loc_41858E: jmpl *_import_41B0D8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418594() // ?CrashCleanup@CDPServer@@SAXXZ
{
    __DEBUG_ASM(418594);
    // chunk 0x418594 _sub_418594
    asm("loc_418594: jmpl *_import_41B0B8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41859A() // ?GetStatus@CGunWrapper@@QAE?AW4ConnectStatus@IGunConnection@@XZ
{
    __DEBUG_ASM(41859A);
    // chunk 0x41859A _sub_41859A
    asm("loc_41859A: jmpl *_import_41B0D4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4185A0() // ?Update@CGunWrapper@@QAEXXZ
{
    __DEBUG_ASM(4185A0);
    // chunk 0x4185A0 _sub_4185A0
    asm("loc_4185A0: jmpl *_import_41B0D0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4185A6() // ??0CGunWrapper@@QAE@PBDAAU_GUID@@0KPAG@Z
{
    __DEBUG_ASM(4185A6);
    // chunk 0x4185A6 _sub_4185A6
    asm("loc_4185A6: jmpl *_import_41B0CC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4185AC() // ?Shutdown@DALib@@YAXPAUHWND__@@@Z
{
    __DEBUG_ASM(4185AC);
    // chunk 0x4185AC _sub_4185AC
    asm("loc_4185AC: jmpl *_import_41B0C8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4185B2() // ?CloseData@DALib@@YAXXZ
{
    __DEBUG_ASM(4185B2);
    // chunk 0x4185B2 _sub_4185B2
    asm("loc_4185B2: jmpl *_import_41B0C4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4185B8() // ?Startup@DALib@@YA_NPAUHWND__@@PBD@Z
{
    __DEBUG_ASM(4185B8);
    // chunk 0x4185B8 _sub_4185B8
    asm("loc_4185B8: jmpl *_import_41B0C0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4185BE() // ?OpenData@DALib@@YAXPBD@Z
{
    __DEBUG_ASM(4185BE);
    // chunk 0x4185BE _sub_4185BE
    asm("loc_4185BE: jmpl *_import_41B0BC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4185C4() // _DACOM_GetDllVersion
{
    __DEBUG_ASM(4185C4);
    // chunk 0x4185C4 _sub_4185C4
    asm("loc_4185C4: jmpl *_import_41B0AC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4185CA() // ?GetAccountNameSigChar@CPlayerAccount@@QAEPBDXZ
{
    __DEBUG_ASM(4185CA);
    // chunk 0x4185CA _sub_4185CA
    asm("loc_4185CA: jmpl *_import_41B044;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4185D0() // ??1CPlayerAccount@@UAE@XZ
{
    __DEBUG_ASM(4185D0);
    // chunk 0x4185D0 _sub_4185D0
    asm("loc_4185D0: jmpl *_import_41B048;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4185D6() // ?deactivate@ErrorHandler@@YAXXZ
{
    __DEBUG_ASM(4185D6);
    // chunk 0x4185D6 _sub_4185D6
    asm("loc_4185D6: jmpl *_import_41B050;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4185DC() // ??1CDeadReckonedVector@@UAE@XZ
{
    __DEBUG_ASM(4185DC);
    // chunk 0x4185DC _sub_4185DC
    asm("loc_4185DC: jmpl *_import_41B054;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4185E2() // ?RemoteUpdate@CRemotePhysicsSimulation@@UAEXABVVector@@ABVQuaternion@@N@Z
{
    __DEBUG_ASM(4185E2);
    // chunk 0x4185E2 _sub_4185E2
    asm("loc_4185E2: jmpl *_import_41B058;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4185E8() // ??1CRemotePhysicsSimulation@@UAE@XZ
{
    __DEBUG_ASM(4185E8);
    // chunk 0x4185E8 _sub_4185E8
    asm("loc_4185E8: jmpl *_import_41B05C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4185EE() // ?RegisterLoadingScreen@@YAXPAVILoadingScreen@@@Z
{
    __DEBUG_ASM(4185EE);
    // chunk 0x4185EE _sub_4185EE
    asm("loc_4185EE: jmpl *_import_41B060;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4185F4() // ?SetIsMPServer@@YAX_N@Z
{
    __DEBUG_ASM(4185F4);
    // chunk 0x4185F4 _sub_4185F4
    asm("loc_4185F4: jmpl *_import_41B064;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4185FA() // ??1INI_Reader@@QAE@XZ
{
    __DEBUG_ASM(4185FA);
    // chunk 0x4185FA _sub_4185FA
    asm("loc_4185FA: jmpl *_import_41B068;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418600() // ?get_value_float@INI_Reader@@QAEMI@Z
{
    __DEBUG_ASM(418600);
    // chunk 0x418600 _sub_418600
    asm("loc_418600: jmpl *_import_41B06C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418606() // ?ParseGUID@@YAPAU_GUID@@PBDPAU1@@Z
{
    __DEBUG_ASM(418606);
    // chunk 0x418606 _sub_418606
    asm("loc_418606: jmpl *_import_41B070;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41860C() // ?is_header@INI_Reader@@QAE_NPBD@Z
{
    __DEBUG_ASM(41860C);
    // chunk 0x41860C _sub_41860C
    asm("loc_41860C: jmpl *_import_41B018;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418612() // ?get_value_string@INI_Reader@@QAEPBDXZ
{
    __DEBUG_ASM(418612);
    // chunk 0x418612 _sub_418612
    asm("loc_418612: jmpl *_import_41B01C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418618() // ?is_value@INI_Reader@@QAE_NPBD@Z
{
    __DEBUG_ASM(418618);
    // chunk 0x418618 _sub_418618
    asm("loc_418618: jmpl *_import_41B07C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41861E() // ?read_value@INI_Reader@@QAE_NXZ
{
    __DEBUG_ASM(41861E);
    // chunk 0x41861E _sub_41861E
    asm("loc_41861E: jmpl *_import_41B080;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418624() // ?read_header@INI_Reader@@QAE_NXZ
{
    __DEBUG_ASM(418624);
    // chunk 0x418624 _sub_418624
    asm("loc_418624: jmpl *_import_41B084;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41862A() // ?open@INI_Reader@@QAE_NPBD_N@Z
{
    __DEBUG_ASM(41862A);
    // chunk 0x41862A _sub_41862A
    asm("loc_41862A: jmpl *_import_41B088;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418630() // ??0INI_Reader@@QAE@XZ
{
    __DEBUG_ASM(418630);
    // chunk 0x418630 _sub_418630
    asm("loc_418630: jmpl *_import_41B078;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418636() // ?GiveClientRunPermission@@YAXXZ
{
    __DEBUG_ASM(418636);
    // chunk 0x418636 _sub_418636
    asm("loc_418636: jmpl *_import_41B074;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41863C() // ?UpdateGlobalTime@Timing@@YAXN@Z
{
    __DEBUG_ASM(41863C);
    // chunk 0x41863C _sub_41863C
    asm("loc_41863C: jmpl *_import_41B010;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418642() // ?read@Timing@@YANXZ
{
    __DEBUG_ASM(418642);
    // chunk 0x418642 _sub_418642
    asm("loc_418642: jmpl *_import_41B098;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418648() // ?WaitForServerRunPermission@@YAXXZ
{
    __DEBUG_ASM(418648);
    // chunk 0x418648 _sub_418648
    asm("loc_418648: jmpl *_import_41B014;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41864E() // ?seconds@Timing@@YANAB_J@Z
{
    __DEBUG_ASM(41864E);
    // chunk 0x41864E _sub_41864E
    asm("loc_41864E: jmpl *_import_41B0A0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418654() // ?read_ticks@Timing@@YA_JXZ
{
    __DEBUG_ASM(418654);
    // chunk 0x418654 _sub_418654
    asm("loc_418654: jmpl *_import_41B08C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41865A() // ?WideToHex@@YAXPBGPAD@Z
{
    __DEBUG_ASM(41865A);
    // chunk 0x41865A _sub_41865A
    asm("loc_41865A: jmpl *_import_41B090;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418660() // ?HexToWide@@YAXPBDPAG@Z
{
    __DEBUG_ASM(418660);
    // chunk 0x418660 _sub_418660
    asm("loc_418660: jmpl *_import_41B040;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418666() // ??1RenderDisplayList@@QAE@XZ
{
    __DEBUG_ASM(418666);
    // chunk 0x418666 _sub_418666
    asm("loc_418666: jmpl *_import_41B09C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41866C() // ?write_buffer@BinaryRDLWriter@@UAE_NABVRenderDisplayList@@PADIAAI@Z
{
    __DEBUG_ASM(41866C);
    // chunk 0x41866C _sub_41866C
    asm("loc_41866C: jmpl *_import_41B094;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418672() // ??1TextNode@@UAE@XZ
{
    __DEBUG_ASM(418672);
    // chunk 0x418672 _sub_418672
    asm("loc_418672: jmpl *_import_41B038;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418678() // ??0TextNode@@QAE@PBGH@Z
{
    __DEBUG_ASM(418678);
    // chunk 0x418678 _sub_418678
    asm("loc_418678: jmpl *_import_41B034;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41867E() // ??1StyleNode@@UAE@XZ
{
    __DEBUG_ASM(41867E);
    // chunk 0x41867E _sub_41867E
    asm("loc_41867E: jmpl *_import_41B030;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418684() // ??0StyleNode@@QAE@G@Z
{
    __DEBUG_ASM(418684);
    // chunk 0x418684 _sub_418684
    asm("loc_418684: jmpl *_import_41B02C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41868A() // ?get_system@Universe@@YAPBUISystem@1@I@Z
{
    __DEBUG_ASM(41868A);
    // chunk 0x41868A _sub_41868A
    asm("loc_41868A: jmpl *_import_41B028;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418690() // ?GetNextSystem@Universe@@YAPAUISystem@1@XZ
{
    __DEBUG_ASM(418690);
    // chunk 0x418690 _sub_418690
    asm("loc_418690: jmpl *_import_41B024;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418696() // ?GetFirstSystem@Universe@@YAPAUISystem@1@XZ
{
    __DEBUG_ASM(418696);
    // chunk 0x418696 _sub_418696
    asm("loc_418696: jmpl *_import_41B020;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41869C() // ?SetServerLogFunction@@YAXP6AHUErrorCode@@PBDZZ@Z
{
    __DEBUG_ASM(41869C);
    // chunk 0x41869C _sub_41869C
    asm("loc_41869C: jmpl *_import_41B9C8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4186A2() // ?SetRemoteClientResponseData@@YAX_N0HPBGIPBD@Z
{
    __DEBUG_ASM(4186A2);
    // chunk 0x4186A2 _sub_4186A2
    asm("loc_4186A2: jmpl *_import_41B9B4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4186A8() // ?SetRemoteClientPassword@@YAXPBG@Z
{
    __DEBUG_ASM(4186A8);
    // chunk 0x4186A8 _sub_4186A8
    asm("loc_4186A8: jmpl *_import_41B9C4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4186AE() // ?SetRemoteClientSessionName@@YAXPBG@Z
{
    __DEBUG_ASM(4186AE);
    // chunk 0x4186AE _sub_4186AE
    asm("loc_4186AE: jmpl *_import_41B9C0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4186B4() // ?GetRemoteClientPort@@YAXAAV?$vector@KV?$allocator@K@std@@@std@@@Z
{
    __DEBUG_ASM(4186B4);
    // chunk 0x4186B4 _sub_4186B4
    asm("loc_4186B4: jmpl *_import_41B9B8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4186BA() // ?GetClientStats@@YAHPAUclient_stats_t@@PAH@Z
{
    __DEBUG_ASM(4186BA);
    // chunk 0x4186BA _sub_4186BA
    asm("loc_4186BA: jmpl *_import_41B9BC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4186C0() // ?GetNumClients@@YAHXZ
{
    __DEBUG_ASM(4186C0);
    // chunk 0x4186C0 _sub_4186C0
    asm("loc_4186C0: jmpl *_import_41B9CC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4186C6() // ?PushToServer@IServerImpl@@UAEXPAVCDAPacket@@@Z
{
    __DEBUG_ASM(4186C6);
    // chunk 0x4186C6 _sub_4186C6
    asm("loc_4186C6: jmpl *_import_41BB34;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4186CC() // ?Dock@IServerImpl@@UAEXABI0@Z
{
    __DEBUG_ASM(4186CC);
    // chunk 0x4186CC _sub_4186CC
    asm("loc_4186CC: jmpl *_import_41BB30;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4186D2() // ?DumpPacketStats@IServerImpl@@UAEXPBD@Z
{
    __DEBUG_ASM(4186D2);
    // chunk 0x4186D2 _sub_4186D2
    asm("loc_4186D2: jmpl *_import_41BB2C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4186D8() // ?GetServerSig@IServerImpl@@UAEPBDXZ
{
    __DEBUG_ASM(4186D8);
    // chunk 0x4186D8 _sub_4186D8
    asm("loc_4186D8: jmpl *_import_41BB28;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4186DE() // ?GetServerID@IServerImpl@@UAEIXZ
{
    __DEBUG_ASM(4186DE);
    // chunk 0x4186DE _sub_4186DE
    asm("loc_4186DE: jmpl *_import_41BB24;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4186E4() // ?ReqDifficultyScale@IServerImpl@@UAEXMI@Z
{
    __DEBUG_ASM(4186E4);
    // chunk 0x4186E4 _sub_4186E4
    asm("loc_4186E4: jmpl *_import_41BB20;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4186EA() // ?StopTradeRequest@IServerImpl@@UAEXI@Z
{
    __DEBUG_ASM(4186EA);
    // chunk 0x4186EA _sub_4186EA
    asm("loc_4186EA: jmpl *_import_41BB1C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4186F0() // ?RequestTrade@IServerImpl@@UAEXII@Z
{
    __DEBUG_ASM(4186F0);
    // chunk 0x4186F0 _sub_4186F0
    asm("loc_4186F0: jmpl *_import_41BB18;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4186F6() // ?DelTradeEquip@IServerImpl@@UAEXIABUEquipDesc@@@Z
{
    __DEBUG_ASM(4186F6);
    // chunk 0x4186F6 _sub_4186F6
    asm("loc_4186F6: jmpl *_import_41BB14;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4186FC() // ?AddTradeEquip@IServerImpl@@UAEXIABUEquipDesc@@@Z
{
    __DEBUG_ASM(4186FC);
    // chunk 0x4186FC _sub_4186FC
    asm("loc_4186FC: jmpl *_import_41BB10;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418702() // ?SetTradeMoney@IServerImpl@@UAEXIK@Z
{
    __DEBUG_ASM(418702);
    // chunk 0x418702 _sub_418702
    asm("loc_418702: jmpl *_import_41BB0C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418708() // ?AcceptTrade@IServerImpl@@UAEXI_N@Z
{
    __DEBUG_ASM(418708);
    // chunk 0x418708 _sub_418708
    asm("loc_418708: jmpl *_import_41BA9C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41870E() // ?TerminateTrade@IServerImpl@@UAEXIH@Z
{
    __DEBUG_ASM(41870E);
    // chunk 0x41870E _sub_41870E
    asm("loc_41870E: jmpl *_import_41BA98;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418714() // ?InitiateTrade@IServerImpl@@UAEXII@Z
{
    __DEBUG_ASM(418714);
    // chunk 0x418714 _sub_418714
    asm("loc_418714: jmpl *_import_41BA94;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41871A() // ?RequestRankLevel@IServerImpl@@UAEXIPAEH@Z
{
    __DEBUG_ASM(41871A);
    // chunk 0x41871A _sub_41871A
    asm("loc_41871A: jmpl *_import_41BA90;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418720() // ?SetInterfaceState@IServerImpl@@UAEXIPAEH@Z
{
    __DEBUG_ASM(418720);
    // chunk 0x418720 _sub_418720
    asm("loc_418720: jmpl *_import_41BA8C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418726() // ?SetMissionLog@IServerImpl@@UAEXIPAEH@Z
{
    __DEBUG_ASM(418726);
    // chunk 0x418726 _sub_418726
    asm("loc_418726: jmpl *_import_41BA88;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41872C() // ?RequestGroupPositions@IServerImpl@@UAEXIPAEH@Z
{
    __DEBUG_ASM(41872C);
    // chunk 0x41872C _sub_41872C
    asm("loc_41872C: jmpl *_import_41BA84;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418732() // ?PopUpDialog@IServerImpl@@UAEXII@Z
{
    __DEBUG_ASM(418732);
    // chunk 0x418732 _sub_418732
    asm("loc_418732: jmpl *_import_41BB48;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418738() // ?RequestPlayerStats@IServerImpl@@UAEXIPAEH@Z
{
    __DEBUG_ASM(418738);
    // chunk 0x418738 _sub_418738
    asm("loc_418738: jmpl *_import_41BB40;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41873E() // ?RequestBestPath@IServerImpl@@UAEXIPAEH@Z
{
    __DEBUG_ASM(41873E);
    // chunk 0x41873E _sub_41873E
    asm("loc_41873E: jmpl *_import_41BA78;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418744() // ?SetVisitedState@IServerImpl@@UAEXIPAEH@Z
{
    __DEBUG_ASM(418744);
    // chunk 0x418744 _sub_418744
    asm("loc_418744: jmpl *_import_41BA74;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41874A() // ?SetWeaponGroup@IServerImpl@@UAEXIPAEH@Z
{
    __DEBUG_ASM(41874A);
    // chunk 0x41874A _sub_41874A
    asm("loc_41874A: jmpl *_import_41BA70;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418750() // ?RTCDone@IServerImpl@@UAEXII@Z
{
    __DEBUG_ASM(418750);
    // chunk 0x418750 _sub_418750
    asm("loc_418750: jmpl *_import_41BA6C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418756() // ?AbortMission@IServerImpl@@UAEXII@Z
{
    __DEBUG_ASM(418756);
    // chunk 0x418756 _sub_418756
    asm("loc_418756: jmpl *_import_41BA68;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41875C() // ?InterfaceItemUsed@IServerImpl@@UAEXII@Z
{
    __DEBUG_ASM(41875C);
    // chunk 0x41875C _sub_41875C
    asm("loc_41875C: jmpl *_import_41BA64;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418762() // ?SetManeuver@IServerImpl@@UAEXIABUXSetManeuver@@@Z
{
    __DEBUG_ASM(418762);
    // chunk 0x418762 _sub_418762
    asm("loc_418762: jmpl *_import_41BA60;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418768() // ?SPScanCargo@IServerImpl@@UAEXABI0I@Z
{
    __DEBUG_ASM(418768);
    // chunk 0x418768 _sub_418768
    asm("loc_418768: jmpl *_import_41BA5C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41876E() // ?RequestCreateShip@IServerImpl@@UAEXI@Z
{
    __DEBUG_ASM(41876E);
    // chunk 0x41876E _sub_41876E
    asm("loc_41876E: jmpl *_import_41BA58;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418774() // ?CommComplete@IServerImpl@@UAEXIIIW4CommResult@@@Z
{
    __DEBUG_ASM(418774);
    // chunk 0x418774 _sub_418774
    asm("loc_418774: jmpl *_import_41BA54;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41877A() // ?MineAsteroid@IServerImpl@@UAEXIABVVector@@IIII@Z
{
    __DEBUG_ASM(41877A);
    // chunk 0x41877A _sub_41877A
    asm("loc_41877A: jmpl *_import_41BB54;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418780() // ?RequestCancel@IServerImpl@@UAEXHIIKI@Z
{
    __DEBUG_ASM(418780);
    // chunk 0x418780 _sub_418780
    asm("loc_418780: jmpl *_import_41BA4C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418786() // ?RequestEvent@IServerImpl@@UAEXHIIIKI@Z
{
    __DEBUG_ASM(418786);
    // chunk 0x418786 _sub_418786
    asm("loc_418786: jmpl *_import_41BA48;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41878C() // ?MissionSaveB@IServerImpl@@UAEXIK@Z
{
    __DEBUG_ASM(41878C);
    // chunk 0x41878C _sub_41878C
    asm("loc_41878C: jmpl *_import_41BA44;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418792() // ?SaveGame@IServerImpl@@UAEXABUCHARACTER_ID@@PBGI@Z
{
    __DEBUG_ASM(418792);
    // chunk 0x418792 _sub_418792
    asm("loc_418792: jmpl *_import_41BA40;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418798() // ?SPRequestInvincibility@IServerImpl@@UAEXI_NW4InvincibilityReason@@I@Z
{
    __DEBUG_ASM(418798);
    // chunk 0x418798 _sub_418798
    asm("loc_418798: jmpl *_import_41BA3C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41879E() // ?SPRequestUseItem@IServerImpl@@UAEXABUSSPUseItem@@I@Z
{
    __DEBUG_ASM(41879E);
    // chunk 0x41879E _sub_41879E
    asm("loc_41879E: jmpl *_import_41BA38;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4187A4() // ?SPObjCollision@IServerImpl@@UAEXABUSSPObjCollisionInfo@@I@Z
{
    __DEBUG_ASM(4187A4);
    // chunk 0x4187A4 _sub_4187A4
    asm("loc_4187A4: jmpl *_import_41BA34;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4187AA() // ?SPBadLandsObjCollision@IServerImpl@@UAEXABUSSPBadLandsObjCollisionInfo@@I@Z
{
    __DEBUG_ASM(4187AA);
    // chunk 0x4187AA _sub_4187AA
    asm("loc_4187AA: jmpl *_import_41BA30;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4187B0() // ?SPMunitionCollision@IServerImpl@@UAEXABUSSPMunitionCollisionInfo@@I@Z
{
    __DEBUG_ASM(4187B0);
    // chunk 0x4187B0 _sub_4187B0
    asm("loc_4187B0: jmpl *_import_41BA2C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4187B6() // ?SPObjUpdate@IServerImpl@@UAEXABUSSPObjUpdateInfo@@I@Z
{
    __DEBUG_ASM(4187B6);
    // chunk 0x4187B6 _sub_4187B6
    asm("loc_4187B6: jmpl *_import_41BA28;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4187BC() // ?Hail@IServerImpl@@UAEXIII@Z
{
    __DEBUG_ASM(4187BC);
    // chunk 0x4187BC _sub_4187BC
    asm("loc_4187BC: jmpl *_import_41BB50;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4187C2() // ?JumpInComplete@IServerImpl@@UAEXII@Z
{
    __DEBUG_ASM(4187C2);
    // chunk 0x4187C2 _sub_4187C2
    asm("loc_4187C2: jmpl *_import_41BB4C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4187C8() // ?LaunchComplete@IServerImpl@@UAEXII@Z
{
    __DEBUG_ASM(4187C8);
    // chunk 0x4187C8 _sub_4187C8
    asm("loc_4187C8: jmpl *_import_41BA1C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4187CE() // ?PlayerLaunch@IServerImpl@@UAEXII@Z
{
    __DEBUG_ASM(4187CE);
    // chunk 0x4187CE _sub_4187CE
    asm("loc_4187CE: jmpl *_import_41BA18;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4187D4() // ?SystemSwitchOutComplete@IServerImpl@@UAEXII@Z
{
    __DEBUG_ASM(4187D4);
    // chunk 0x4187D4 _sub_4187D4
    asm("loc_4187D4: jmpl *_import_41BA14;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4187DA() // ?GFGoodSell@IServerImpl@@UAEXABUSGFGoodSellInfo@@I@Z
{
    __DEBUG_ASM(4187DA);
    // chunk 0x4187DA _sub_4187DA
    asm("loc_4187DA: jmpl *_import_41BA10;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4187E0() // ?GFGoodBuy@IServerImpl@@UAEXABUSGFGoodBuyInfo@@I@Z
{
    __DEBUG_ASM(4187E0);
    // chunk 0x4187E0 _sub_4187E0
    asm("loc_4187E0: jmpl *_import_41BA0C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4187E6() // ?TradeResponse@IServerImpl@@UAEXPBEHI@Z
{
    __DEBUG_ASM(4187E6);
    // chunk 0x4187E6 _sub_4187E6
    asm("loc_4187E6: jmpl *_import_41BBA4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4187EC() // ?MissionResponse@IServerImpl@@UAEXIK_NI@Z
{
    __DEBUG_ASM(4187EC);
    // chunk 0x4187EC _sub_4187EC
    asm("loc_4187EC: jmpl *_import_41BBA0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4187F2() // ?GFGoodVaporized@IServerImpl@@UAEXABUSGFGoodVaporizedInfo@@I@Z
{
    __DEBUG_ASM(4187F2);
    // chunk 0x4187F2 _sub_4187F2
    asm("loc_4187F2: jmpl *_import_41BB9C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4187F8() // ?GFObjSelect@IServerImpl@@UAEXII@Z
{
    __DEBUG_ASM(4187F8);
    // chunk 0x4187F8 _sub_4187F8
    asm("loc_4187F8: jmpl *_import_41BBAC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4187FE() // ?LocationInfoRequest@IServerImpl@@UAEXII_N@Z
{
    __DEBUG_ASM(4187FE);
    // chunk 0x4187FE _sub_4187FE
    asm("loc_4187FE: jmpl *_import_41B9EC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418804() // ?BaseInfoRequest@IServerImpl@@UAEXII_N@Z
{
    __DEBUG_ASM(418804);
    // chunk 0x418804 _sub_418804
    asm("loc_418804: jmpl *_import_41BBA8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41880A() // ?LocationExit@IServerImpl@@UAEXII@Z
{
    __DEBUG_ASM(41880A);
    // chunk 0x41880A _sub_41880A
    asm("loc_41880A: jmpl *_import_41BB44;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418810() // ?LocationEnter@IServerImpl@@UAEXII@Z
{
    __DEBUG_ASM(418810);
    // chunk 0x418810 _sub_418810
    asm("loc_418810: jmpl *_import_41BA80;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418816() // ?BaseExit@IServerImpl@@UAEXII@Z
{
    __DEBUG_ASM(418816);
    // chunk 0x418816 _sub_418816
    asm("loc_418816: jmpl *_import_41BB3C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41881C() // ?BaseEnter@IServerImpl@@UAEXII@Z
{
    __DEBUG_ASM(41881C);
    // chunk 0x41881C _sub_41881C
    asm("loc_41881C: jmpl *_import_41BB38;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418822() // ?ReqChangeCash@IServerImpl@@UAEXHI@Z
{
    __DEBUG_ASM(418822);
    // chunk 0x418822 _sub_418822
    asm("loc_418822: jmpl *_import_41BA7C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418828() // ?ReqSetCash@IServerImpl@@UAEXHI@Z
{
    __DEBUG_ASM(418828);
    // chunk 0x418828 _sub_418828
    asm("loc_418828: jmpl *_import_41BA24;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41882E() // ?ReqModifyItem@IServerImpl@@UAEXGPBDHM_NI@Z
{
    __DEBUG_ASM(41882E);
    // chunk 0x41882E _sub_41882E
    asm("loc_41882E: jmpl *_import_41B9DC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418834() // ?ReqRemoveItem@IServerImpl@@UAEXGHI@Z
{
    __DEBUG_ASM(418834);
    // chunk 0x418834 _sub_418834
    asm("loc_418834: jmpl *_import_41B9F0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41883A() // ?ReqAddItem@IServerImpl@@UAEXIPBDHM_NI@Z
{
    __DEBUG_ASM(41883A);
    // chunk 0x41883A _sub_41883A
    asm("loc_41883A: jmpl *_import_41B9D4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418840() // ?ReqCargo@IServerImpl@@UAEXABVEquipDescList@@I@Z
{
    __DEBUG_ASM(418840);
    // chunk 0x418840 _sub_418840
    asm("loc_418840: jmpl *_import_41B9D8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418846() // ?ReqEquipment@IServerImpl@@UAEXABVEquipDescList@@I@Z
{
    __DEBUG_ASM(418846);
    // chunk 0x418846 _sub_418846
    asm("loc_418846: jmpl *_import_41B9F4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41884C() // ?ReqCollisionGroups@IServerImpl@@UAEXABV?$list@UCollisionGroupDesc@@V?$allocator@UCollisionGroupDesc@@@std@@@std@@I@Z
{
    __DEBUG_ASM(41884C);
    // chunk 0x41884C _sub_41884C
    asm("loc_41884C: jmpl *_import_41B9E0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418852() // ?ReqHullStatus@IServerImpl@@UAEXMI@Z
{
    __DEBUG_ASM(418852);
    // chunk 0x418852 _sub_418852
    asm("loc_418852: jmpl *_import_41B9E4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418858() // ?ReqShipArch@IServerImpl@@UAEXII@Z
{
    __DEBUG_ASM(418858);
    // chunk 0x418858 _sub_418858
    asm("loc_418858: jmpl *_import_41B9E8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41885E() // ?CharacterSkipAutosave@IServerImpl@@UAEXI@Z
{
    __DEBUG_ASM(41885E);
    // chunk 0x41885E _sub_41885E
    asm("loc_41885E: jmpl *_import_41B9F8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418864() // ?DestroyCharacter@IServerImpl@@UAEXABUCHARACTER_ID@@I@Z
{
    __DEBUG_ASM(418864);
    // chunk 0x418864 _sub_418864
    asm("loc_418864: jmpl *_import_41BA20;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41886A() // ?CreateNewCharacter@IServerImpl@@UAEXABUSCreateCharacterInfo@@I@Z
{
    __DEBUG_ASM(41886A);
    // chunk 0x41886A _sub_41886A
    asm("loc_41886A: jmpl *_import_41B9FC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418870() // ?NewCharacterInfoReq@IServerImpl@@UAEXI@Z
{
    __DEBUG_ASM(418870);
    // chunk 0x418870 _sub_418870
    asm("loc_418870: jmpl *_import_41BA00;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418876() // ?CharacterSelect@IServerImpl@@UAEXABUCHARACTER_ID@@I@Z
{
    __DEBUG_ASM(418876);
    // chunk 0x418876 _sub_418876
    asm("loc_418876: jmpl *_import_41BA04;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41887C() // ?CharacterInfoReq@IServerImpl@@UAEXI_N@Z
{
    __DEBUG_ASM(41887C);
    // chunk 0x41887C _sub_41887C
    asm("loc_41887C: jmpl *_import_41BA08;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418882() // ?Login@IServerImpl@@UAEXABUSLoginInfo@@I@Z
{
    __DEBUG_ASM(418882);
    // chunk 0x418882 _sub_418882
    asm("loc_418882: jmpl *_import_41BAA0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418888() // ?OnConnect@IServerImpl@@UAEXI@Z
{
    __DEBUG_ASM(418888);
    // chunk 0x418888 _sub_418888
    asm("loc_418888: jmpl *_import_41BAA4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41888E() // ?DisConnect@IServerImpl@@UAEXIW4EFLConnection@@@Z
{
    __DEBUG_ASM(41888E);
    // chunk 0x41888E _sub_41888E
    asm("loc_41888E: jmpl *_import_41BA50;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418894() // ?Connect@IServerImpl@@UAEXPBDPAG@Z
{
    __DEBUG_ASM(418894);
    // chunk 0x418894 _sub_418894
    asm("loc_418894: jmpl *_import_41BAA8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41889A() // ?SwapConnections@IServerImpl@@UAE_NW4EFLConnection@@0@Z
{
    __DEBUG_ASM(41889A);
    // chunk 0x41889A _sub_41889A
    asm("loc_41889A: jmpl *_import_41BAAC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4188A0() // ?SetActiveConnection@IServerImpl@@UAEXW4EFLConnection@@@Z
{
    __DEBUG_ASM(4188A0);
    // chunk 0x4188A0 _sub_4188A0
    asm("loc_4188A0: jmpl *_import_41BAB0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4188A6() // ?ElapseTime@IServerImpl@@UAEXM@Z
{
    __DEBUG_ASM(4188A6);
    // chunk 0x4188A6 _sub_4188A6
    asm("loc_4188A6: jmpl *_import_41BAB4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4188AC() // ?Update@IServerImpl@@UAEHXZ
{
    __DEBUG_ASM(4188AC);
    // chunk 0x4188AC _sub_4188AC
    asm("loc_4188AC: jmpl *_import_41BAB8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4188B2() // ?Shutdown@IServerImpl@@UAEXXZ
{
    __DEBUG_ASM(4188B2);
    // chunk 0x4188B2 _sub_4188B2
    asm("loc_4188B2: jmpl *_import_41BABC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4188B8() // ?Startup@IServerImpl@@UAE_NABUSStartupInfo@@@Z
{
    __DEBUG_ASM(4188B8);
    // chunk 0x4188B8 _sub_4188B8
    asm("loc_4188B8: jmpl *_import_41BAC0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4188BE() // ?JettisonCargo@IServerImpl@@UAEXIABUXJettisonCargo@@@Z
{
    __DEBUG_ASM(4188BE);
    // chunk 0x4188BE _sub_4188BE
    asm("loc_4188BE: jmpl *_import_41BAC4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4188C4() // ?StopTradelane@IServerImpl@@UAEXIIII@Z
{
    __DEBUG_ASM(4188C4);
    // chunk 0x4188C4 _sub_4188C4
    asm("loc_4188C4: jmpl *_import_41BAC8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4188CA() // ?GoTradelane@IServerImpl@@UAEXIABUXGoTradelane@@@Z
{
    __DEBUG_ASM(4188CA);
    // chunk 0x4188CA _sub_4188CA
    asm("loc_4188CA: jmpl *_import_41BACC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4188D0() // ?TractorObjects@IServerImpl@@UAEXIABUXTractorObjects@@@Z
{
    __DEBUG_ASM(4188D0);
    // chunk 0x4188D0 _sub_4188D0
    asm("loc_4188D0: jmpl *_import_41BAD0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4188D6() // ?SetTarget@IServerImpl@@UAEXIABUXSetTarget@@@Z
{
    __DEBUG_ASM(4188D6);
    // chunk 0x4188D6 _sub_4188D6
    asm("loc_4188D6: jmpl *_import_41BAD4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4188DC() // ?ActivateThrusters@IServerImpl@@UAEXIABUXActivateThrusters@@@Z
{
    __DEBUG_ASM(4188DC);
    // chunk 0x4188DC _sub_4188DC
    asm("loc_4188DC: jmpl *_import_41BAD8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4188E2() // ?ActivateCruise@IServerImpl@@UAEXIABUXActivateCruise@@@Z
{
    __DEBUG_ASM(4188E2);
    // chunk 0x4188E2 _sub_4188E2
    asm("loc_4188E2: jmpl *_import_41BADC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4188E8() // ?ActivateEquip@IServerImpl@@UAEXIABUXActivateEquip@@@Z
{
    __DEBUG_ASM(4188E8);
    // chunk 0x4188E8 _sub_4188E8
    asm("loc_4188E8: jmpl *_import_41BAE0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4188EE() // ?FireWeapon@IServerImpl@@UAEXIABUXFireWeaponInfo@@@Z
{
    __DEBUG_ASM(4188EE);
    // chunk 0x4188EE _sub_4188EE
    asm("loc_4188EE: jmpl *_import_41BAE4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4188F4() // ?SubmitChat@IServerImpl@@UAEXUCHAT_ID@@KPBX0H@Z
{
    __DEBUG_ASM(4188F4);
    // chunk 0x4188F4 _sub_4188F4
    asm("loc_4188F4: jmpl *_import_41BAE8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4188FA() // ??1CPlayerGroup@@UAE@XZ
{
    __DEBUG_ASM(4188FA);
    // chunk 0x4188FA _sub_4188FA
    asm("loc_4188FA: jmpl *_import_41BAEC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418900() // ??1CAccount@@UAE@XZ
{
    __DEBUG_ASM(418900);
    // chunk 0x418900 _sub_418900
    asm("loc_418900: jmpl *_import_41BAF0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418906() // ?GetActiveCharacterName@PlayerDB@@QBEPBGI@Z
{
    __DEBUG_ASM(418906);
    // chunk 0x418906 _sub_418906
    asm("loc_418906: jmpl *_import_41BAF4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41890C() // ?FindAccountFromCharacterName@PlayerDB@@QAEPAVCAccount@@AAV?$basic_string@GUci_wchar_traits@@V?$allocator@G@std@@@std@@@Z
{
    __DEBUG_ASM(41890C);
    // chunk 0x41890C _sub_41890C
    asm("loc_41890C: jmpl *_import_41BAFC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418912() // ?MakeLocalUserPath@PlayerDB@@QAE_NPADPBD@Z
{
    __DEBUG_ASM(418912);
    // chunk 0x418912 _sub_418912
    asm("loc_418912: jmpl *_import_41BB00;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418918() // ?BuildLocalUserDir@PlayerDB@@QAEXXZ
{
    __DEBUG_ASM(418918);
    // chunk 0x418918 _sub_418918
    asm("loc_418918: jmpl *_import_41BB04;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41891E() // ?SetAccountPassword@PlayerDB@@QAE_NAAV?$basic_string@GUci_wchar_traits@@V?$allocator@G@std@@@std@@0@Z
{
    __DEBUG_ASM(41891E);
    // chunk 0x41891E _sub_41891E
    asm("loc_41891E: jmpl *_import_41BB08;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418924() // ?FindAccountFromName@PlayerDB@@QAEPAVCAccount@@AAV?$basic_string@GUci_wchar_traits@@V?$allocator@G@std@@@std@@@Z
{
    __DEBUG_ASM(418924);
    // chunk 0x418924 _sub_418924
    asm("loc_418924: jmpl *_import_41BB58;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41892A() // ?CreateAccount@PlayerDB@@QAE_NAAV?$basic_string@GUci_wchar_traits@@V?$allocator@G@std@@@std@@@Z
{
    __DEBUG_ASM(41892A);
    // chunk 0x41892A _sub_41892A
    asm("loc_41892A: jmpl *_import_41BB5C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418930() // ?DeleteCharacterFromName@PlayerDB@@QAE_NAAV?$basic_string@GUci_wchar_traits@@V?$allocator@G@std@@@std@@@Z
{
    __DEBUG_ASM(418930);
    // chunk 0x418930 _sub_418930
    asm("loc_418930: jmpl *_import_41BB60;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418936() // ?UnlockAccountAccess@PlayerDB@@QAEXAAV?$basic_string@GUci_wchar_traits@@V?$allocator@G@std@@@std@@@Z
{
    __DEBUG_ASM(418936);
    // chunk 0x418936 _sub_418936
    asm("loc_418936: jmpl *_import_41BB64;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41893C() // ?BanAccount@PlayerDB@@QAE_NAAV?$basic_string@GUci_wchar_traits@@V?$allocator@G@std@@@std@@_N@Z
{
    __DEBUG_ASM(41893C);
    // chunk 0x41893C _sub_41893C
    asm("loc_41893C: jmpl *_import_41BB68;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418942() // ?LockAccountAccess@PlayerDB@@QAEXAAV?$basic_string@GUci_wchar_traits@@V?$allocator@G@std@@@std@@@Z
{
    __DEBUG_ASM(418942);
    // chunk 0x418942 _sub_418942
    asm("loc_418942: jmpl *_import_41BB6C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418948() // ?GetServerStats@IServerImpl@@QAEXAAUServerStats@@@Z
{
    __DEBUG_ASM(418948);
    // chunk 0x418948 _sub_418948
    asm("loc_418948: jmpl *_import_41BB74;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41894E() // ?DeleteAccount@PlayerDB@@QAEXAAV?$basic_string@GUci_wchar_traits@@V?$allocator@G@std@@@std@@@Z
{
    __DEBUG_ASM(41894E);
    // chunk 0x41894E _sub_41894E
    asm("loc_41894E: jmpl *_import_41BB78;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418954() // ?SetMOTD@PlayerDB@@QAEXAAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z
{
    __DEBUG_ASM(418954);
    // chunk 0x418954 _sub_418954
    asm("loc_418954: jmpl *_import_41BB7C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41895A() // ?FindAccountFromClientID@PlayerDB@@QAEPAVCAccount@@I@Z
{
    __DEBUG_ASM(41895A);
    // chunk 0x41895A _sub_41895A
    asm("loc_41895A: jmpl *_import_41BB84;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418960() // ?CountPlayersInSystem@PlayerDB@@QAEIH@Z
{
    __DEBUG_ASM(418960);
    // chunk 0x418960 _sub_418960
    asm("loc_418960: jmpl *_import_41BB90;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418966() // ??1SrvAsteroidSystem@SrvAsteroid@@QAE@XZ
{
    __DEBUG_ASM(418966);
    // chunk 0x418966 _sub_418966
    asm("loc_418966: jmpl *_import_41BB94;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41896C() // _timeGetTime
{
    __DEBUG_ASM(41896C);
    // chunk 0x41896C _sub_41896C
    asm("loc_41896C: jmpl *_import_41BC20;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418972() // _ImmAssociateContext
{
    __DEBUG_ASM(418972);
    // chunk 0x418972 _sub_418972
    asm("loc_418972: jmpl *_import_41B12C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418978() // ??3@YAXPAX@Z
{
    __DEBUG_ASM(418978);
    // chunk 0x418978 _sub_418978
    asm("loc_418978: jmpl *_import_41B2EC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41897E() // ?PreInitDialog@CDialog@@MAEXXZ
{
    __DEBUG_ASM(41897E);
    // chunk 0x41897E _sub_41897E
    asm("loc_41897E: jmpl *_import_41B2F0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418984() // ?OnCancel@CDialog@@MAEXXZ
{
    __DEBUG_ASM(418984);
    // chunk 0x418984 _sub_418984
    asm("loc_418984: jmpl *_import_41B2F4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41898A() // ?OnOK@CDialog@@MAEXXZ
{
    __DEBUG_ASM(41898A);
    // chunk 0x41898A _sub_41898A
    asm("loc_41898A: jmpl *_import_41B2F8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418990() // ?OnSetFont@CDialog@@UAEXPAVCFont@@@Z
{
    __DEBUG_ASM(418990);
    // chunk 0x418990 _sub_418990
    asm("loc_418990: jmpl *_import_41B2FC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418996() // ?OnInitDialog@CDialog@@UAEHXZ
{
    __DEBUG_ASM(418996);
    // chunk 0x418996 _sub_418996
    asm("loc_418996: jmpl *_import_41B300;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41899C() // ?DoModal@CDialog@@UAEHXZ
{
    __DEBUG_ASM(41899C);
    // chunk 0x41899C _sub_41899C
    asm("loc_41899C: jmpl *_import_41B304;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4189A2() // ?SetOccDialogInfo@CDialog@@MAEHPAU_AFX_OCC_DIALOG_INFO@@@Z
{
    __DEBUG_ASM(4189A2);
    // chunk 0x4189A2 _sub_4189A2
    asm("loc_4189A2: jmpl *_import_41B308;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4189A8() // ?IsFrameWnd@CWnd@@UBEHXZ
{
    __DEBUG_ASM(4189A8);
    // chunk 0x4189A8 _sub_4189A8
    asm("loc_4189A8: jmpl *_import_41B30C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4189AE() // ?CheckAutoCenter@CDialog@@UAEHXZ
{
    __DEBUG_ASM(4189AE);
    // chunk 0x4189AE _sub_4189AE
    asm("loc_4189AE: jmpl *_import_41B310;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4189B4() // ?OnChildNotify@CWnd@@MAEHIIJPAJ@Z
{
    __DEBUG_ASM(4189B4);
    // chunk 0x4189B4 _sub_4189B4
    asm("loc_4189B4: jmpl *_import_41B314;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4189BA() // ?PostNcDestroy@CWnd@@MAEXXZ
{
    __DEBUG_ASM(4189BA);
    // chunk 0x4189BA _sub_4189BA
    asm("loc_4189BA: jmpl *_import_41B318;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4189C0() // ?DefWindowProcA@CWnd@@MAEJIIJ@Z
{
    __DEBUG_ASM(4189C0);
    // chunk 0x4189C0 _sub_4189C0
    asm("loc_4189C0: jmpl *_import_41B31C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4189C6() // ?OnWndMsg@CWnd@@MAEHIIJPAJ@Z
{
    __DEBUG_ASM(4189C6);
    // chunk 0x4189C6 _sub_4189C6
    asm("loc_4189C6: jmpl *_import_41B320;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4189CC() // ?WindowProc@CWnd@@MAEJIIJ@Z
{
    __DEBUG_ASM(4189CC);
    // chunk 0x4189CC _sub_4189CC
    asm("loc_4189CC: jmpl *_import_41B324;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4189D2() // ?OnAmbientProperty@CWnd@@UAEHPAVCOleControlSite@@JPAUtagVARIANT@@@Z
{
    __DEBUG_ASM(4189D2);
    // chunk 0x4189D2 _sub_4189D2
    asm("loc_4189D2: jmpl *_import_41B328;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4189D8() // ?PreTranslateMessage@CDialog@@UAEHPAUtagMSG@@@Z
{
    __DEBUG_ASM(4189D8);
    // chunk 0x4189D8 _sub_4189D8
    asm("loc_4189D8: jmpl *_import_41B32C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4189DE() // ?GetSuperWndProcAddr@CWnd@@MAEPAP6GJPAUHWND__@@IIJ@ZXZ
{
    __DEBUG_ASM(4189DE);
    // chunk 0x4189DE _sub_4189DE
    asm("loc_4189DE: jmpl *_import_41B330;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4189E4() // ?OnNotify@CWnd@@MAEHIJPAJ@Z
{
    __DEBUG_ASM(4189E4);
    // chunk 0x4189E4 _sub_4189E4
    asm("loc_4189E4: jmpl *_import_41B334;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4189EA() // ?OnCommand@CWnd@@MAEHIJ@Z
{
    __DEBUG_ASM(4189EA);
    // chunk 0x4189EA _sub_4189EA
    asm("loc_4189EA: jmpl *_import_41B338;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4189F0() // ?EndModalLoop@CWnd@@UAEXH@Z
{
    __DEBUG_ASM(4189F0);
    // chunk 0x4189F0 _sub_4189F0
    asm("loc_4189F0: jmpl *_import_41B33C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4189F6() // ?ContinueModal@CWnd@@UAEHXZ
{
    __DEBUG_ASM(4189F6);
    // chunk 0x4189F6 _sub_4189F6
    asm("loc_4189F6: jmpl *_import_41B340;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4189FC() // ?WinHelpA@CWnd@@UAEXKI@Z
{
    __DEBUG_ASM(4189FC);
    // chunk 0x4189FC _sub_4189FC
    asm("loc_4189FC: jmpl *_import_41B344;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418A02() // ?GetScrollBarCtrl@CWnd@@UBEPAVCScrollBar@@H@Z
{
    __DEBUG_ASM(418A02);
    // chunk 0x418A02 _sub_418A02
    asm("loc_418A02: jmpl *_import_41B348;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418A08() // ?OnToolHitTest@CWnd@@UBEHVCPoint@@PAUtagTOOLINFOA@@@Z
{
    __DEBUG_ASM(418A08);
    // chunk 0x418A08 _sub_418A08
    asm("loc_418A08: jmpl *_import_41B34C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418A0E() // ?CalcWindowRect@CWnd@@UAEXPAUtagRECT@@I@Z
{
    __DEBUG_ASM(418A0E);
    // chunk 0x418A0E _sub_418A0E
    asm("loc_418A0E: jmpl *_import_41B350;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418A14() // ?PreCreateWindow@CWnd@@UAEHAAUtagCREATESTRUCTA@@@Z
{
    __DEBUG_ASM(418A14);
    // chunk 0x418A14 _sub_418A14
    asm("loc_418A14: jmpl *_import_41B354;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418A1A() // ?DestroyWindow@CWnd@@UAEHXZ
{
    __DEBUG_ASM(418A1A);
    // chunk 0x418A1A _sub_418A1A
    asm("loc_418A1A: jmpl *_import_41B358;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418A20() // ?Create@CWnd@@UAEHPBD0KABUtagRECT@@PAV1@IPAUCCreateContext@@@Z
{
    __DEBUG_ASM(418A20);
    // chunk 0x418A20 _sub_418A20
    asm("loc_418A20: jmpl *_import_41B35C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418A26() // ?PreSubclassWindow@CWnd@@UAEXXZ
{
    __DEBUG_ASM(418A26);
    // chunk 0x418A26 _sub_418A26
    asm("loc_418A26: jmpl *_import_41B360;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418A2C() // ?GetConnectionHook@CCmdTarget@@MAEPAUIConnectionPoint@@ABU_GUID@@@Z
{
    __DEBUG_ASM(418A2C);
    // chunk 0x418A2C _sub_418A2C
    asm("loc_418A2C: jmpl *_import_41B364;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418A32() // ?GetExtraConnectionPoints@CCmdTarget@@MAEHPAVCPtrArray@@@Z
{
    __DEBUG_ASM(418A32);
    // chunk 0x418A32 _sub_418A32
    asm("loc_418A32: jmpl *_import_41B368;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418A38() // ?GetInterfaceHook@CCmdTarget@@UAEPAUIUnknown@@PBX@Z
{
    __DEBUG_ASM(418A38);
    // chunk 0x418A38 _sub_418A38
    asm("loc_418A38: jmpl *_import_41B36C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418A3E() // ?OnCreateAggregates@CCmdTarget@@UAEHXZ
{
    __DEBUG_ASM(418A3E);
    // chunk 0x418A3E _sub_418A3E
    asm("loc_418A3E: jmpl *_import_41B370;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418A44() // ?GetEventSinkMap@CCmdTarget@@MBEPBUAFX_EVENTSINKMAP@@XZ
{
    __DEBUG_ASM(418A44);
    // chunk 0x418A44 _sub_418A44
    asm("loc_418A44: jmpl *_import_41B374;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418A4A() // ?GetInterfaceMap@CCmdTarget@@MBEPBUAFX_INTERFACEMAP@@XZ
{
    __DEBUG_ASM(418A4A);
    // chunk 0x418A4A _sub_418A4A
    asm("loc_418A4A: jmpl *_import_41B378;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418A50() // ?GetConnectionMap@CCmdTarget@@MBEPBUAFX_CONNECTIONMAP@@XZ
{
    __DEBUG_ASM(418A50);
    // chunk 0x418A50 _sub_418A50
    asm("loc_418A50: jmpl *_import_41B37C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418A56() // ?GetDispatchMap@CCmdTarget@@MBEPBUAFX_DISPMAP@@XZ
{
    __DEBUG_ASM(418A56);
    // chunk 0x418A56 _sub_418A56
    asm("loc_418A56: jmpl *_import_41B380;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418A5C() // ?GetCommandMap@CCmdTarget@@MBEPBUAFX_OLECMDMAP@@XZ
{
    __DEBUG_ASM(418A5C);
    // chunk 0x418A5C _sub_418A5C
    asm("loc_418A5C: jmpl *_import_41B384;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418A62() // ?GetTypeLib@CCmdTarget@@UAEJKPAPAUITypeLib@@@Z
{
    __DEBUG_ASM(418A62);
    // chunk 0x418A62 _sub_418A62
    asm("loc_418A62: jmpl *_import_41B388;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418A68() // ?GetTypeLibCache@CCmdTarget@@UAEPAVCTypeLibCache@@XZ
{
    __DEBUG_ASM(418A68);
    // chunk 0x418A68 _sub_418A68
    asm("loc_418A68: jmpl *_import_41B38C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418A6E() // ?GetTypeInfoCount@CCmdTarget@@UAEIXZ
{
    __DEBUG_ASM(418A6E);
    // chunk 0x418A6E _sub_418A6E
    asm("loc_418A6E: jmpl *_import_41B390;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418A74() // ?GetDispatchIID@CCmdTarget@@UAEHPAU_GUID@@@Z
{
    __DEBUG_ASM(418A74);
    // chunk 0x418A74 _sub_418A74
    asm("loc_418A74: jmpl *_import_41B394;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418A7A() // ?IsInvokeAllowed@CCmdTarget@@UAEHJ@Z
{
    __DEBUG_ASM(418A7A);
    // chunk 0x418A7A _sub_418A7A
    asm("loc_418A7A: jmpl *_import_41B398;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418A80() // ?OnFinalRelease@CWnd@@UAEXXZ
{
    __DEBUG_ASM(418A80);
    // chunk 0x418A80 _sub_418A80
    asm("loc_418A80: jmpl *_import_41B39C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418A86() // ?OnCmdMsg@CDialog@@UAEHIHPAXPAUAFX_CMDHANDLERINFO@@@Z
{
    __DEBUG_ASM(418A86);
    // chunk 0x418A86 _sub_418A86
    asm("loc_418A86: jmpl *_import_41B3A0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418A8C() // ?GetRuntimeClass@CDialog@@UBEPAUCRuntimeClass@@XZ
{
    __DEBUG_ASM(418A8C);
    // chunk 0x418A8C _sub_418A8C
    asm("loc_418A8C: jmpl *_import_41B3A4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418A92() // ??0CDialog@@QAE@IPAVCWnd@@@Z
{
    __DEBUG_ASM(418A92);
    // chunk 0x418A92 _sub_418A92
    asm("loc_418A92: jmpl *_import_41B3A8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418A98() // ??1CDialog@@UAE@XZ
{
    __DEBUG_ASM(418A98);
    // chunk 0x418A98 _sub_418A98
    asm("loc_418A98: jmpl *_import_41B3AC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418A9E() // ??2@YAPAXI@Z
{
    __DEBUG_ASM(418A9E);
    // chunk 0x418A9E _sub_418A9E
    asm("loc_418A9E: jmpl *_import_41B3B4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418AA4() // ??1CString@@QAE@XZ
{
    __DEBUG_ASM(418AA4);
    // chunk 0x418AA4 _sub_418AA4
    asm("loc_418AA4: jmpl *_import_41B3B8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418AAA() // ??0CString@@QAE@XZ
{
    __DEBUG_ASM(418AAA);
    // chunk 0x418AAA _sub_418AAA
    asm("loc_418AAA: jmpl *_import_41B3BC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418AB0() // ?DDX_Control@@YGXPAVCDataExchange@@HAAVCWnd@@@Z
{
    __DEBUG_ASM(418AB0);
    // chunk 0x418AB0 _sub_418AB0
    asm("loc_418AB0: jmpl *_import_41B3C0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418AB6() // ?ShowWindow@CWnd@@QAEHH@Z
{
    __DEBUG_ASM(418AB6);
    // chunk 0x418AB6 _sub_418AB6
    asm("loc_418AB6: jmpl *_import_41B3C4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418ABC() // ?Create@CDialog@@QAEHPBDPAVCWnd@@@Z
{
    __DEBUG_ASM(418ABC);
    // chunk 0x418ABC _sub_418ABC
    asm("loc_418ABC: jmpl *_import_41B3C8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418AC2() // ?OnMeasureItem@CWnd@@IAEXHPAUtagMEASUREITEMSTRUCT@@@Z
{
    __DEBUG_ASM(418AC2);
    // chunk 0x418AC2 _sub_418AC2
    asm("loc_418AC2: jmpl *_import_41B3CC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418AC8() // ??1CDC@@UAE@XZ
{
    __DEBUG_ASM(418AC8);
    // chunk 0x418AC8 _sub_418AC8
    asm("loc_418AC8: jmpl *_import_41B3D0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418ACE() // ?SelectObject@CDC@@UAEPAVCFont@@PAV2@@Z
{
    __DEBUG_ASM(418ACE);
    // chunk 0x418ACE _sub_418ACE
    asm("loc_418ACE: jmpl *_import_41B3D4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418AD4() // ?Attach@CDC@@QAEHPAUHDC__@@@Z
{
    __DEBUG_ASM(418AD4);
    // chunk 0x418AD4 _sub_418AD4
    asm("loc_418AD4: jmpl *_import_41B3D8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418ADA() // ??0CDC@@QAE@XZ
{
    __DEBUG_ASM(418ADA);
    // chunk 0x418ADA _sub_418ADA
    asm("loc_418ADA: jmpl *_import_41B3DC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418AE0() // ?CommitItem@COleClientItem@@UAEXH@Z
{
    __DEBUG_ASM(418AE0);
    // chunk 0x418AE0 _sub_418AE0
    asm("loc_418AE0: jmpl *_import_41B3E0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418AE6() // ?WriteItem@COleClientItem@@UAEXAAVCArchive@@@Z
{
    __DEBUG_ASM(418AE6);
    // chunk 0x418AE6 _sub_418AE6
    asm("loc_418AE6: jmpl *_import_41B3E4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418AEC() // ?ReadItem@COleClientItem@@UAEXAAVCArchive@@@Z
{
    __DEBUG_ASM(418AEC);
    // chunk 0x418AEC _sub_418AEC
    asm("loc_418AEC: jmpl *_import_41B3E8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418AF2() // ?GetItemStorage@COleClientItem@@UAEXXZ
{
    __DEBUG_ASM(418AF2);
    // chunk 0x418AF2 _sub_418AF2
    asm("loc_418AF2: jmpl *_import_41B3EC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418AF8() // ?OnDataChange@COleClientItem@@MAEXPAUtagFORMATETC@@PAUtagSTGMEDIUM@@@Z
{
    __DEBUG_ASM(418AF8);
    // chunk 0x418AF8 _sub_418AF8
    asm("loc_418AF8: jmpl *_import_41B3F0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418AFE() // ?CheckGeneral@COleClientItem@@MAEXJ@Z
{
    __DEBUG_ASM(418AFE);
    // chunk 0x418AFE _sub_418AFE
    asm("loc_418AFE: jmpl *_import_41B3F4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418B04() // ?FinishCreate@COleClientItem@@MAEHJ@Z
{
    __DEBUG_ASM(418B04);
    // chunk 0x418B04 _sub_418B04
    asm("loc_418B04: jmpl *_import_41B3F8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418B0A() // ?GetClientSite@CRichEditCntrItem@@UAEPAUIOleClientSite@@XZ
{
    __DEBUG_ASM(418B0A);
    // chunk 0x418B0A _sub_418B0A
    asm("loc_418B0A: jmpl *_import_41B3FC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418B10() // ?FreezeLink@COleClientItem@@UAEHXZ
{
    __DEBUG_ASM(418B10);
    // chunk 0x418B10 _sub_418B10
    asm("loc_418B10: jmpl *_import_41B400;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418B16() // ?ReportError@COleClientItem@@UBEHJ@Z
{
    __DEBUG_ASM(418B16);
    // chunk 0x418B16 _sub_418B16
    asm("loc_418B16: jmpl *_import_41B404;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418B1C() // ?OnShowControlBars@COleClientItem@@UAEHPAVCFrameWnd@@H@Z
{
    __DEBUG_ASM(418B1C);
    // chunk 0x418B1C _sub_418B1C
    asm("loc_418B1C: jmpl *_import_41B408;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418B22() // ?OnUpdateFrameTitle@COleClientItem@@UAEHXZ
{
    __DEBUG_ASM(418B22);
    // chunk 0x418B22 _sub_418B22
    asm("loc_418B22: jmpl *_import_41B40C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418B28() // ?OnRemoveMenus@COleClientItem@@UAEXPAVCMenu@@@Z
{
    __DEBUG_ASM(418B28);
    // chunk 0x418B28 _sub_418B28
    asm("loc_418B28: jmpl *_import_41B410;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418B2E() // ?OnSetMenu@COleClientItem@@UAEXPAVCMenu@@PAXPAUHWND__@@@Z
{
    __DEBUG_ASM(418B2E);
    // chunk 0x418B2E _sub_418B2E
    asm("loc_418B2E: jmpl *_import_41B414;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418B34() // ?OnInsertMenus@COleClientItem@@UAEXPAVCMenu@@PAUtagOleMenuGroupWidths@@@Z
{
    __DEBUG_ASM(418B34);
    // chunk 0x418B34 _sub_418B34
    asm("loc_418B34: jmpl *_import_41B418;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418B3A() // ?OnChangeItemPosition@CRichEditCntrItem@@MAEHABVCRect@@@Z
{
    __DEBUG_ASM(418B3A);
    // chunk 0x418B3A _sub_418B3A
    asm("loc_418B3A: jmpl *_import_41B41C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418B40() // ?OnGetWindowContext@COleClientItem@@MAEHPAPAVCFrameWnd@@0PAUtagOIFI@@@Z
{
    __DEBUG_ASM(418B40);
    // chunk 0x418B40 _sub_418B40
    asm("loc_418B40: jmpl *_import_41B420;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418B46() // ?OnDeactivate@COleClientItem@@UAEXXZ
{
    __DEBUG_ASM(418B46);
    // chunk 0x418B46 _sub_418B46
    asm("loc_418B46: jmpl *_import_41B424;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418B4C() // ?OnActivateUI@COleClientItem@@UAEXXZ
{
    __DEBUG_ASM(418B4C);
    // chunk 0x418B4C _sub_418B4C
    asm("loc_418B4C: jmpl *_import_41B428;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418B52() // ?OnActivate@COleClientItem@@UAEXXZ
{
    __DEBUG_ASM(418B52);
    // chunk 0x418B52 _sub_418B52
    asm("loc_418B52: jmpl *_import_41B42C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418B58() // ?CanActivate@CRichEditCntrItem@@UAEHXZ
{
    __DEBUG_ASM(418B58);
    // chunk 0x418B58 _sub_418B58
    asm("loc_418B58: jmpl *_import_41B430;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418B5E() // ?OnGetClipRect@COleClientItem@@MAEXAAVCRect@@@Z
{
    __DEBUG_ASM(418B5E);
    // chunk 0x418B5E _sub_418B5E
    asm("loc_418B5E: jmpl *_import_41B434;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418B64() // ?OnShowItem@COleClientItem@@MAEXXZ
{
    __DEBUG_ASM(418B64);
    // chunk 0x418B64 _sub_418B64
    asm("loc_418B64: jmpl *_import_41B438;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418B6A() // ?OnDeactivateUI@CRichEditCntrItem@@UAEXH@Z
{
    __DEBUG_ASM(418B6A);
    // chunk 0x418B6A _sub_418B6A
    asm("loc_418B6A: jmpl *_import_41B43C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418B70() // ?OnDeactivateAndUndo@COleClientItem@@MAEXXZ
{
    __DEBUG_ASM(418B70);
    // chunk 0x418B70 _sub_418B70
    asm("loc_418B70: jmpl *_import_41B440;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418B76() // ?OnDiscardUndoState@COleClientItem@@MAEXXZ
{
    __DEBUG_ASM(418B76);
    // chunk 0x418B76 _sub_418B76
    asm("loc_418B76: jmpl *_import_41B444;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418B7C() // ?OnScrollBy@COleClientItem@@MAEHVCSize@@@Z
{
    __DEBUG_ASM(418B7C);
    // chunk 0x418B7C _sub_418B7C
    asm("loc_418B7C: jmpl *_import_41B448;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418B82() // ?OnGetItemPosition@COleClientItem@@MAEXAAVCRect@@@Z
{
    __DEBUG_ASM(418B82);
    // chunk 0x418B82 _sub_418B82
    asm("loc_418B82: jmpl *_import_41B44C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418B88() // ?OnChange@COleClientItem@@UAEXW4OLE_NOTIFICATION@@K@Z
{
    __DEBUG_ASM(418B88);
    // chunk 0x418B88 _sub_418B88
    asm("loc_418B88: jmpl *_import_41B450;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418B8E() // ?ActivateAs@CRichEditCntrItem@@UAEHPBDABU_GUID@@1@Z
{
    __DEBUG_ASM(418B8E);
    // chunk 0x418B8E _sub_418B8E
    asm("loc_418B8E: jmpl *_import_41B454;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418B94() // ?ConvertTo@CRichEditCntrItem@@UAEHABU_GUID@@@Z
{
    __DEBUG_ASM(418B94);
    // chunk 0x418B94 _sub_418B94
    asm("loc_418B94: jmpl *_import_41B458;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418B9A() // ?OnGetClipboardData@COleClientItem@@UAEPAVCOleDataSource@@HPAUtagPOINT@@PAUtagSIZE@@@Z
{
    __DEBUG_ASM(418B9A);
    // chunk 0x418B9A _sub_418B9A
    asm("loc_418B9A: jmpl *_import_41B45C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418BA0() // ?DoVerb@COleClientItem@@UAEHJPAVCView@@PAUtagMSG@@@Z
{
    __DEBUG_ASM(418BA0);
    // chunk 0x418BA0 _sub_418BA0
    asm("loc_418BA0: jmpl *_import_41B460;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418BA6() // ?Release@COleClientItem@@UAEXW4tagOLECLOSE@@@Z
{
    __DEBUG_ASM(418BA6);
    // chunk 0x418BA6 _sub_418BA6
    asm("loc_418BA6: jmpl *_import_41B464;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418BAC() // ?SetDrawAspect@CRichEditCntrItem@@UAEXW4tagDVASPECT@@@Z
{
    __DEBUG_ASM(418BAC);
    // chunk 0x418BAC _sub_418BAC
    asm("loc_418BAC: jmpl *_import_41B468;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418BB2() // ?IsBlank@CDocItem@@UBEHXZ
{
    __DEBUG_ASM(418BB2);
    // chunk 0x418BB2 _sub_418BB2
    asm("loc_418BB2: jmpl *_import_41B46C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418BB8() // ?GetInterfaceMap@COleClientItem@@MBEPBUAFX_INTERFACEMAP@@XZ
{
    __DEBUG_ASM(418BB8);
    // chunk 0x418BB8 _sub_418BB8
    asm("loc_418BB8: jmpl *_import_41B470;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418BBE() // ?GetMessageMap@CCmdTarget@@MBEPBUAFX_MSGMAP@@XZ
{
    __DEBUG_ASM(418BBE);
    // chunk 0x418BBE _sub_418BBE
    asm("loc_418BBE: jmpl *_import_41B474;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418BC4() // ?OnFinalRelease@CCmdTarget@@UAEXXZ
{
    __DEBUG_ASM(418BC4);
    // chunk 0x418BC4 _sub_418BC4
    asm("loc_418BC4: jmpl *_import_41B478;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418BCA() // ?OnCmdMsg@CCmdTarget@@UAEHIHPAXPAUAFX_CMDHANDLERINFO@@@Z
{
    __DEBUG_ASM(418BCA);
    // chunk 0x418BCA _sub_418BCA
    asm("loc_418BCA: jmpl *_import_41B47C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418BD0() // ?Serialize@COleClientItem@@UAEXAAVCArchive@@@Z
{
    __DEBUG_ASM(418BD0);
    // chunk 0x418BD0 _sub_418BD0
    asm("loc_418BD0: jmpl *_import_41B480;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418BD6() // ??0CRichEditCntrItem@@QAE@PAU_reobject@@PAVCRichEditDoc@@@Z
{
    __DEBUG_ASM(418BD6);
    // chunk 0x418BD6 _sub_418BD6
    asm("loc_418BD6: jmpl *_import_41B484;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418BDC() // ?AfxClassInit@@YGXPAUCRuntimeClass@@@Z
{
    __DEBUG_ASM(418BDC);
    // chunk 0x418BDC _sub_418BDC
    asm("loc_418BDC: jmpl *_import_41B48C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418BE2() // ?ReadObject@CArchive@@QAEPAVCObject@@PBUCRuntimeClass@@@Z
{
    __DEBUG_ASM(418BE2);
    // chunk 0x418BE2 _sub_418BE2
    asm("loc_418BE2: jmpl *_import_41B490;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418BE8() // ??1CRichEditCntrItem@@UAE@XZ
{
    __DEBUG_ASM(418BE8);
    // chunk 0x418BE8 _sub_418BE8
    asm("loc_418BE8: jmpl *_import_41B494;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418BEE() // ?SetWindowTextA@CWnd@@QAEXPBD@Z
{
    __DEBUG_ASM(418BEE);
    // chunk 0x418BEE _sub_418BEE
    asm("loc_418BEE: jmpl *_import_41B498;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418BF4() // ?GetDlgItem@CWnd@@QBEPAV1@H@Z
{
    __DEBUG_ASM(418BF4);
    // chunk 0x418BF4 _sub_418BF4
    asm("loc_418BF4: jmpl *_import_41B49C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418BFA() // ?AfxMessageBox@@YGHIII@Z
{
    __DEBUG_ASM(418BFA);
    // chunk 0x418BFA _sub_418BFA
    asm("loc_418BFA: jmpl *_import_41B4A0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418C00() // ?GetWindowTextA@CWnd@@QBEHPADH@Z
{
    __DEBUG_ASM(418C00);
    // chunk 0x418C00 _sub_418C00
    asm("loc_418C00: jmpl *_import_41B4A4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418C06() // ?SetOccDialogInfo@CWnd@@MAEHPAU_AFX_OCC_DIALOG_INFO@@@Z
{
    __DEBUG_ASM(418C06);
    // chunk 0x418C06 _sub_418C06
    asm("loc_418C06: jmpl *_import_41B4A8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418C0C() // ?CheckAutoCenter@CWnd@@UAEHXZ
{
    __DEBUG_ASM(418C0C);
    // chunk 0x418C0C _sub_418C0C
    asm("loc_418C0C: jmpl *_import_41B4AC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418C12() // ?PreTranslateMessage@CWnd@@UAEHPAUtagMSG@@@Z
{
    __DEBUG_ASM(418C12);
    // chunk 0x418C12 _sub_418C12
    asm("loc_418C12: jmpl *_import_41B4B0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418C18() // ?GetMessageMap@CWnd@@MBEPBUAFX_MSGMAP@@XZ
{
    __DEBUG_ASM(418C18);
    // chunk 0x418C18 _sub_418C18
    asm("loc_418C18: jmpl *_import_41B4B4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418C1E() // ?GetRuntimeClass@CRichEditCtrl@@UBEPAUCRuntimeClass@@XZ
{
    __DEBUG_ASM(418C1E);
    // chunk 0x418C1E _sub_418C1E
    asm("loc_418C1E: jmpl *_import_41B4B8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418C24() // ??1CRichEditCtrl@@UAE@XZ
{
    __DEBUG_ASM(418C24);
    // chunk 0x418C24 _sub_418C24
    asm("loc_418C24: jmpl *_import_41B4BC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418C2A() // ??0CWnd@@QAE@XZ
{
    __DEBUG_ASM(418C2A);
    // chunk 0x418C2A _sub_418C2A
    asm("loc_418C2A: jmpl *_import_41B4C0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418C30() // ?GetMessageMap@CTreeCtrl@@MBEPBUAFX_MSGMAP@@XZ
{
    __DEBUG_ASM(418C30);
    // chunk 0x418C30 _sub_418C30
    asm("loc_418C30: jmpl *_import_41B4C4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418C36() // ?GetRuntimeClass@CTreeCtrl@@UBEPAUCRuntimeClass@@XZ
{
    __DEBUG_ASM(418C36);
    // chunk 0x418C36 _sub_418C36
    asm("loc_418C36: jmpl *_import_41B4C8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418C3C() // ??1CTreeCtrl@@UAE@XZ
{
    __DEBUG_ASM(418C3C);
    // chunk 0x418C3C _sub_418C3C
    asm("loc_418C3C: jmpl *_import_41B4CC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418C42() // ?InsertItem@CTreeCtrl@@QAEPAU_TREEITEM@@IPBDHHIIJPAU2@1@Z
{
    __DEBUG_ASM(418C42);
    // chunk 0x418C42 _sub_418C42
    asm("loc_418C42: jmpl *_import_41B4D0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418C48() // ?GetItemData@CTreeCtrl@@QBEKPAU_TREEITEM@@@Z
{
    __DEBUG_ASM(418C48);
    // chunk 0x418C48 _sub_418C48
    asm("loc_418C48: jmpl *_import_41B4D4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418C4E() // ?SetItem@CTreeCtrl@@QAEHPAU_TREEITEM@@IPBDHHIIJ@Z
{
    __DEBUG_ASM(418C4E);
    // chunk 0x418C4E _sub_418C4E
    asm("loc_418C4E: jmpl *_import_41B4D8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418C54() // ?Default@CWnd@@IAEJXZ
{
    __DEBUG_ASM(418C54);
    // chunk 0x418C54 _sub_418C54
    asm("loc_418C54: jmpl *_import_41B4DC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418C5A() // ?SetWindowPos@CWnd@@QAEHPBV1@HHHHI@Z
{
    __DEBUG_ASM(418C5A);
    // chunk 0x418C5A _sub_418C5A
    asm("loc_418C5A: jmpl *_import_41B4E0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418C60() // ?ScreenToClient@CWnd@@QBEXPAUtagRECT@@@Z
{
    __DEBUG_ASM(418C60);
    // chunk 0x418C60 _sub_418C60
    asm("loc_418C60: jmpl *_import_41B4E4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418C66() // ?DrawItem@CButton@@UAEXPAUtagDRAWITEMSTRUCT@@@Z
{
    __DEBUG_ASM(418C66);
    // chunk 0x418C66 _sub_418C66
    asm("loc_418C66: jmpl *_import_41B4E8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418C6C() // ?OnChildNotify@CButton@@MAEHIIJPAJ@Z
{
    __DEBUG_ASM(418C6C);
    // chunk 0x418C6C _sub_418C6C
    asm("loc_418C6C: jmpl *_import_41B4EC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418C72() // ?GetRuntimeClass@CButton@@UBEPAUCRuntimeClass@@XZ
{
    __DEBUG_ASM(418C72);
    // chunk 0x418C72 _sub_418C72
    asm("loc_418C72: jmpl *_import_41B4F0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418C78() // ??1CButton@@UAE@XZ
{
    __DEBUG_ASM(418C78);
    // chunk 0x418C78 _sub_418C78
    asm("loc_418C78: jmpl *_import_41B4F4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418C7E() // ?EnableWindow@CWnd@@QAEHH@Z
{
    __DEBUG_ASM(418C7E);
    // chunk 0x418C7E _sub_418C7E
    asm("loc_418C7E: jmpl *_import_41B4F8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418C84() // ?EndDialog@CDialog@@QAEXH@Z
{
    __DEBUG_ASM(418C84);
    // chunk 0x418C84 _sub_418C84
    asm("loc_418C84: jmpl *_import_41B1D4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418C8A() // ?OnFilePrintSetup@CWinApp@@IAEXXZ
{
    __DEBUG_ASM(418C8A);
    // chunk 0x418C8A _sub_418C8A
    asm("loc_418C8A: jmpl *_import_41B500;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418C90() // ?OnFileOpen@CWinApp@@IAEXXZ
{
    __DEBUG_ASM(418C90);
    // chunk 0x418C90 _sub_418C90
    asm("loc_418C90: jmpl *_import_41B504;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418C96() // ?OnFileNew@CWinApp@@IAEXXZ
{
    __DEBUG_ASM(418C96);
    // chunk 0x418C96 _sub_418C96
    asm("loc_418C96: jmpl *_import_41B508;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418C9C() // ??4CString@@QAEABV0@PBD@Z
{
    __DEBUG_ASM(418C9C);
    // chunk 0x418C9C _sub_418C9C
    asm("loc_418C9C: jmpl *_import_41B50C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418CA2() // ?LoadStringA@CString@@QAEHI@Z
{
    __DEBUG_ASM(418CA2);
    // chunk 0x418CA2 _sub_418CA2
    asm("loc_418CA2: jmpl *_import_41B510;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418CA8() // ?WinHelpA@CWinApp@@UAEXKI@Z
{
    __DEBUG_ASM(418CA8);
    // chunk 0x418CA8 _sub_418CA8
    asm("loc_418CA8: jmpl *_import_41B518;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418CAE() // ?OnDDECommand@CWinApp@@UAEHPAD@Z
{
    __DEBUG_ASM(418CAE);
    // chunk 0x418CAE _sub_418CAE
    asm("loc_418CAE: jmpl *_import_41B51C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418CB4() // ?DoWaitCursor@CWinApp@@UAEXH@Z
{
    __DEBUG_ASM(418CB4);
    // chunk 0x418CB4 _sub_418CB4
    asm("loc_418CB4: jmpl *_import_41B520;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418CBA() // ?DoMessageBox@CWinApp@@UAEHPBDII@Z
{
    __DEBUG_ASM(418CBA);
    // chunk 0x418CBA _sub_418CBA
    asm("loc_418CBA: jmpl *_import_41B524;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418CC0() // ?SaveAllModified@CWinApp@@UAEHXZ
{
    __DEBUG_ASM(418CC0);
    // chunk 0x418CC0 _sub_418CC0
    asm("loc_418CC0: jmpl *_import_41B528;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418CC6() // ?InitApplication@CWinApp@@UAEHXZ
{
    __DEBUG_ASM(418CC6);
    // chunk 0x418CC6 _sub_418CC6
    asm("loc_418CC6: jmpl *_import_41B52C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418CCC() // ?AddToRecentFileList@CWinApp@@UAEXPBD@Z
{
    __DEBUG_ASM(418CCC);
    // chunk 0x418CCC _sub_418CCC
    asm("loc_418CCC: jmpl *_import_41B530;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418CD2() // ?OpenDocumentFile@CWinApp@@UAEPAVCDocument@@PBD@Z
{
    __DEBUG_ASM(418CD2);
    // chunk 0x418CD2 _sub_418CD2
    asm("loc_418CD2: jmpl *_import_41B534;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418CD8() // ?Delete@CWinThread@@UAEXXZ
{
    __DEBUG_ASM(418CD8);
    // chunk 0x418CD8 _sub_418CD8
    asm("loc_418CD8: jmpl *_import_41B538;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418CDE() // ?GetMainWnd@CWinThread@@UAEPAVCWnd@@XZ
{
    __DEBUG_ASM(418CDE);
    // chunk 0x418CDE _sub_418CDE
    asm("loc_418CDE: jmpl *_import_41B53C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418CE4() // ?ProcessMessageFilter@CWinThread@@UAEHHPAUtagMSG@@@Z
{
    __DEBUG_ASM(418CE4);
    // chunk 0x418CE4 _sub_418CE4
    asm("loc_418CE4: jmpl *_import_41B540;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418CEA() // ?ProcessWndProcException@CWinApp@@UAEJPAVCException@@PBUtagMSG@@@Z
{
    __DEBUG_ASM(418CEA);
    // chunk 0x418CEA _sub_418CEA
    asm("loc_418CEA: jmpl *_import_41B544;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418CF0() // ?IsIdleMessage@CWinThread@@UAEHPAUtagMSG@@@Z
{
    __DEBUG_ASM(418CF0);
    // chunk 0x418CF0 _sub_418CF0
    asm("loc_418CF0: jmpl *_import_41B548;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418CF6() // ?PumpMessage@CWinThread@@UAEHXZ
{
    __DEBUG_ASM(418CF6);
    // chunk 0x418CF6 _sub_418CF6
    asm("loc_418CF6: jmpl *_import_41B54C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418CFC() // ?PreTranslateMessage@CWinThread@@UAEHPAUtagMSG@@@Z
{
    __DEBUG_ASM(418CFC);
    // chunk 0x418CFC _sub_418CFC
    asm("loc_418CFC: jmpl *_import_41B550;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418D02() // ?Run@CWinApp@@UAEHXZ
{
    __DEBUG_ASM(418D02);
    // chunk 0x418D02 _sub_418D02
    asm("loc_418D02: jmpl *_import_41B554;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418D08() // ?GetRuntimeClass@CWinApp@@UBEPAUCRuntimeClass@@XZ
{
    __DEBUG_ASM(418D08);
    // chunk 0x418D08 _sub_418D08
    asm("loc_418D08: jmpl *_import_41B558;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418D0E() // ??1CWinApp@@UAE@XZ
{
    __DEBUG_ASM(418D0E);
    // chunk 0x418D0E _sub_418D0E
    asm("loc_418D0E: jmpl *_import_41B55C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418D14() // ??0CWinApp@@QAE@PBD@Z
{
    __DEBUG_ASM(418D14);
    // chunk 0x418D14 _sub_418D14
    asm("loc_418D14: jmpl *_import_41B560;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418D1A() // ?AfxBeginThread@@YGPAVCWinThread@@P6AIPAX@Z0HIKPAU_SECURITY_ATTRIBUTES@@@Z
{
    __DEBUG_ASM(418D1A);
    // chunk 0x418D1A _sub_418D1A
    asm("loc_418D1A: jmpl *_import_41B564;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418D20() // ?GetRuntimeClass@CObject@@UBEPAUCRuntimeClass@@XZ
{
    __DEBUG_ASM(418D20);
    // chunk 0x418D20 _sub_418D20
    asm("loc_418D20: jmpl *_import_41B568;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418D26() // ?GetMessageMap@CDialog@@MBEPBUAFX_MSGMAP@@XZ
{
    __DEBUG_ASM(418D26);
    // chunk 0x418D26 _sub_418D26
    asm("loc_418D26: jmpl *_import_41B56C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418D2C() // ??1CCommandLineInfo@@UAE@XZ
{
    __DEBUG_ASM(418D2C);
    // chunk 0x418D2C _sub_418D2C
    asm("loc_418D2C: jmpl *_import_41B570;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418D32() // ?ResizeParentToFit@CScrollView@@QAEXH@Z
{
    __DEBUG_ASM(418D32);
    // chunk 0x418D32 _sub_418D32
    asm("loc_418D32: jmpl *_import_41B574;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418D38() // ?GetActiveView@CFrameWnd@@QBEPAVCView@@XZ
{
    __DEBUG_ASM(418D38);
    // chunk 0x418D38 _sub_418D38
    asm("loc_418D38: jmpl *_import_41B578;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418D3E() // ?ProcessShellCommand@CWinApp@@QAEHAAVCCommandLineInfo@@@Z
{
    __DEBUG_ASM(418D3E);
    // chunk 0x418D3E _sub_418D3E
    asm("loc_418D3E: jmpl *_import_41B57C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418D44() // ?ParseCommandLine@CWinApp@@QAEXAAVCCommandLineInfo@@@Z
{
    __DEBUG_ASM(418D44);
    // chunk 0x418D44 _sub_418D44
    asm("loc_418D44: jmpl *_import_41B580;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418D4A() // ??0CCommandLineInfo@@QAE@XZ
{
    __DEBUG_ASM(418D4A);
    // chunk 0x418D4A _sub_418D4A
    asm("loc_418D4A: jmpl *_import_41B584;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418D50() // ?AddDocTemplate@CWinApp@@QAEXPAVCDocTemplate@@@Z
{
    __DEBUG_ASM(418D50);
    // chunk 0x418D50 _sub_418D50
    asm("loc_418D50: jmpl *_import_41B588;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418D56() // ?SetContainerInfo@CDocTemplate@@QAEXI@Z
{
    __DEBUG_ASM(418D56);
    // chunk 0x418D56 _sub_418D56
    asm("loc_418D56: jmpl *_import_41B58C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418D5C() // ??0CSingleDocTemplate@@QAE@IPAUCRuntimeClass@@00@Z
{
    __DEBUG_ASM(418D5C);
    // chunk 0x418D5C _sub_418D5C
    asm("loc_418D5C: jmpl *_import_41B590;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418D62() // ?LoadStdProfileSettings@CWinApp@@IAEXI@Z
{
    __DEBUG_ASM(418D62);
    // chunk 0x418D62 _sub_418D62
    asm("loc_418D62: jmpl *_import_41B594;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418D68() // ?SetRegistryKey@CWinApp@@IAEXPBD@Z
{
    __DEBUG_ASM(418D68);
    // chunk 0x418D68 _sub_418D68
    asm("loc_418D68: jmpl *_import_41B598;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418D6E() // ?AfxMessageBox@@YGHPBDII@Z
{
    __DEBUG_ASM(418D6E);
    // chunk 0x418D6E _sub_418D6E
    asm("loc_418D6E: jmpl *_import_41B59C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418D74() // ?Enable3dControls@CWinApp@@IAEHXZ
{
    __DEBUG_ASM(418D74);
    // chunk 0x418D74 _sub_418D74
    asm("loc_418D74: jmpl *_import_41B5A0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418D7A() // ?AfxOleInit@@YGHXZ
{
    __DEBUG_ASM(418D7A);
    // chunk 0x418D7A _sub_418D7A
    asm("loc_418D7A: jmpl *_import_41B5A4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418D80() // ?AfxGetModuleState@@YGPAVAFX_MODULE_STATE@@XZ
{
    __DEBUG_ASM(418D80);
    // chunk 0x418D80 _sub_418D80
    asm("loc_418D80: jmpl *_import_41B5A8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418D86() // ??1CStatic@@UAE@XZ
{
    __DEBUG_ASM(418D86);
    // chunk 0x418D86 _sub_418D86
    asm("loc_418D86: jmpl *_import_41B5AC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418D8C() // ?SetActiveView@CFrameWnd@@QAEXPAVCView@@H@Z
{
    __DEBUG_ASM(418D8C);
    // chunk 0x418D8C _sub_418D8C
    asm("loc_418D8C: jmpl *_import_41B5B0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418D92() // ?OnIdle@CWinApp@@UAEHJ@Z
{
    __DEBUG_ASM(418D92);
    // chunk 0x418D92 _sub_418D92
    asm("loc_418D92: jmpl *_import_41B5B4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418D98() // ?OnUpdateObjectVerbMenu@COleDocument@@IAEXPAVCCmdUI@@@Z
{
    __DEBUG_ASM(418D98);
    // chunk 0x418D98 _sub_418D98
    asm("loc_418D98: jmpl *_import_41B5B8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418D9E() // ?OnEditLinks@COleDocument@@IAEXXZ
{
    __DEBUG_ASM(418D9E);
    // chunk 0x418D9E _sub_418D9E
    asm("loc_418D9E: jmpl *_import_41B5BC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418DA4() // ?OnUpdateEditLinksMenu@COleDocument@@IAEXPAVCCmdUI@@@Z
{
    __DEBUG_ASM(418DA4);
    // chunk 0x418DA4 _sub_418DA4
    asm("loc_418DA4: jmpl *_import_41B5C0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418DAA() // ?GetView@CRichEditDoc@@UBEPAVCRichEditView@@XZ
{
    __DEBUG_ASM(418DAA);
    // chunk 0x418DAA _sub_418DAA
    asm("loc_418DAA: jmpl *_import_41B5C4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418DB0() // ?OnSaveEmbedding@COleServerDoc@@MAEXPAUIStorage@@@Z
{
    __DEBUG_ASM(418DB0);
    // chunk 0x418DB0 _sub_418DB0
    asm("loc_418DB0: jmpl *_import_41B5C8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418DB6() // ?OnOpenEmbedding@COleServerDoc@@MAEXPAUIStorage@@@Z
{
    __DEBUG_ASM(418DB6);
    // chunk 0x418DB6 _sub_418DB6
    asm("loc_418DB6: jmpl *_import_41B5CC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418DBC() // ?OnNewEmbedding@COleServerDoc@@MAEXPAUIStorage@@@Z
{
    __DEBUG_ASM(418DBC);
    // chunk 0x418DBC _sub_418DBC
    asm("loc_418DBC: jmpl *_import_41B5D0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418DC2() // ?GetFileTypeString@COleServerDoc@@MAEHAAVCString@@@Z
{
    __DEBUG_ASM(418DC2);
    // chunk 0x418DC2 _sub_418DC2
    asm("loc_418DC2: jmpl *_import_41B5D4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418DC8() // ?OnResizeBorder@COleServerDoc@@UAEXPBUtagRECT@@PAUIOleInPlaceUIWindow@@H@Z
{
    __DEBUG_ASM(418DC8);
    // chunk 0x418DC8 _sub_418DC8
    asm("loc_418DC8: jmpl *_import_41B5D8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418DCE() // ?DestroyInPlaceFrame@COleServerDoc@@MAEXPAVCOleIPFrameWnd@@@Z
{
    __DEBUG_ASM(418DCE);
    // chunk 0x418DCE _sub_418DCE
    asm("loc_418DCE: jmpl *_import_41B5DC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418DD4() // ?CreateInPlaceFrame@COleServerDoc@@MAEPAVCOleIPFrameWnd@@PAVCWnd@@@Z
{
    __DEBUG_ASM(418DD4);
    // chunk 0x418DD4 _sub_418DD4
    asm("loc_418DD4: jmpl *_import_41B5E0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418DDA() // ?OnShowControlBars@COleServerDoc@@MAEXPAVCFrameWnd@@H@Z
{
    __DEBUG_ASM(418DDA);
    // chunk 0x418DDA _sub_418DDA
    asm("loc_418DDA: jmpl *_import_41B5E4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418DE0() // ?OnDocWindowActivate@COleServerDoc@@MAEXH@Z
{
    __DEBUG_ASM(418DE0);
    // chunk 0x418DE0 _sub_418DE0
    asm("loc_418DE0: jmpl *_import_41B5E8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418DE6() // ?OnFrameWindowActivate@COleServerDoc@@MAEXH@Z
{
    __DEBUG_ASM(418DE6);
    // chunk 0x418DE6 _sub_418DE6
    asm("loc_418DE6: jmpl *_import_41B5EC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418DEC() // ?OnReactivateAndUndo@COleServerDoc@@MAEHXZ
{
    __DEBUG_ASM(418DEC);
    // chunk 0x418DEC _sub_418DEC
    asm("loc_418DEC: jmpl *_import_41B5F0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418DF2() // ?OnSetItemRects@COleServerDoc@@MAEXPBUtagRECT@@0@Z
{
    __DEBUG_ASM(418DF2);
    // chunk 0x418DF2 _sub_418DF2
    asm("loc_418DF2: jmpl *_import_41B5F4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418DF8() // ?OnDeactivateUI@COleServerDoc@@UAEXH@Z
{
    __DEBUG_ASM(418DF8);
    // chunk 0x418DF8 _sub_418DF8
    asm("loc_418DF8: jmpl *_import_41B5F8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418DFE() // ?OnDeactivate@COleServerDoc@@UAEXXZ
{
    __DEBUG_ASM(418DFE);
    // chunk 0x418DFE _sub_418DFE
    asm("loc_418DFE: jmpl *_import_41B5FC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418E04() // ?OnShowDocument@COleServerDoc@@MAEXH@Z
{
    __DEBUG_ASM(418E04);
    // chunk 0x418E04 _sub_418E04
    asm("loc_418E04: jmpl *_import_41B600;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418E0A() // ?GetDocObjectServer@COleServerDoc@@MAEPAVCDocObjectServer@@PAUIOleDocumentSite@@@Z
{
    __DEBUG_ASM(418E0A);
    // chunk 0x418E0A _sub_418E0A
    asm("loc_418E0A: jmpl *_import_41B604;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418E10() // ?OnExecOleCmd@COleServerDoc@@MAEJPBU_GUID@@KKPAUtagVARIANT@@1@Z
{
    __DEBUG_ASM(418E10);
    // chunk 0x418E10 _sub_418E10
    asm("loc_418E10: jmpl *_import_41B608;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418E16() // ?OnSetHostNames@COleServerDoc@@MAEXPBD0@Z
{
    __DEBUG_ASM(418E16);
    // chunk 0x418E16 _sub_418E16
    asm("loc_418E16: jmpl *_import_41B60C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418E1C() // ?OnClose@COleServerDoc@@MAEXW4tagOLECLOSE@@@Z
{
    __DEBUG_ASM(418E1C);
    // chunk 0x418E1C _sub_418E1C
    asm("loc_418E1C: jmpl *_import_41B610;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418E22() // ?OnGetEmbeddedItem@CRichEditDoc@@MAEPAVCOleServerItem@@XZ
{
    __DEBUG_ASM(418E22);
    // chunk 0x418E22 _sub_418E22
    asm("loc_418E22: jmpl *_import_41B1C8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418E28() // ?OnUpdateDocument@COleServerDoc@@UAEHXZ
{
    __DEBUG_ASM(418E28);
    // chunk 0x418E28 _sub_418E28
    asm("loc_418E28: jmpl *_import_41B618;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418E2E() // ?RegisterIfServerAttached@COleLinkingDoc@@MAEHPBDH@Z
{
    __DEBUG_ASM(418E2E);
    // chunk 0x418E2E _sub_418E2E
    asm("loc_418E2E: jmpl *_import_41B61C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418E34() // ?OnFindEmbeddedItem@COleLinkingDoc@@MAEPAVCOleClientItem@@PBD@Z
{
    __DEBUG_ASM(418E34);
    // chunk 0x418E34 _sub_418E34
    asm("loc_418E34: jmpl *_import_41B620;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418E3A() // ?OnGetLinkedItem@COleServerDoc@@UAEPAVCOleServerItem@@PBD@Z
{
    __DEBUG_ASM(418E3A);
    // chunk 0x418E3A _sub_418E3A
    asm("loc_418E3A: jmpl *_import_41B624;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418E40() // ?SaveToStorage@COleLinkingDoc@@MAEXPAVCObject@@@Z
{
    __DEBUG_ASM(418E40);
    // chunk 0x418E40 _sub_418E40
    asm("loc_418E40: jmpl *_import_41B628;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418E46() // ?LoadFromStorage@COleDocument@@MAEXXZ
{
    __DEBUG_ASM(418E46);
    // chunk 0x418E46 _sub_418E46
    asm("loc_418E46: jmpl *_import_41B62C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418E4C() // ?GetContainer@COleLinkingDoc@@UAEPAUIOleItemContainer@@XZ
{
    __DEBUG_ASM(418E4C);
    // chunk 0x418E4C _sub_418E4C
    asm("loc_418E4C: jmpl *_import_41B630;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418E52() // ?GetMoniker@COleServerDoc@@UAEPAUIMoniker@@W4tagOLEGETMONIKER@@@Z
{
    __DEBUG_ASM(418E52);
    // chunk 0x418E52 _sub_418E52
    asm("loc_418E52: jmpl *_import_41B634;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418E58() // ?OnShowViews@COleLinkingDoc@@MAEXH@Z
{
    __DEBUG_ASM(418E58);
    // chunk 0x418E58 _sub_418E58
    asm("loc_418E58: jmpl *_import_41B638;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418E5E() // ?UpdateModifiedFlag@CRichEditDoc@@UAEXXZ
{
    __DEBUG_ASM(418E5E);
    // chunk 0x418E5E _sub_418E5E
    asm("loc_418E5E: jmpl *_import_41B63C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418E64() // ?RemoveItem@COleDocument@@UAEXPAVCDocItem@@@Z
{
    __DEBUG_ASM(418E64);
    // chunk 0x418E64 _sub_418E64
    asm("loc_418E64: jmpl *_import_41B640;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418E6A() // ?AddItem@COleDocument@@UAEXPAVCDocItem@@@Z
{
    __DEBUG_ASM(418E6A);
    // chunk 0x418E6A _sub_418E6A
    asm("loc_418E6A: jmpl *_import_41B644;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418E70() // ?GetNextItem@COleDocument@@UBEPAVCDocItem@@AAPAU__POSITION@@@Z
{
    __DEBUG_ASM(418E70);
    // chunk 0x418E70 _sub_418E70
    asm("loc_418E70: jmpl *_import_41B648;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418E76() // ?GetStartPosition@CRichEditDoc@@UBEPAU__POSITION@@XZ
{
    __DEBUG_ASM(418E76);
    // chunk 0x418E76 _sub_418E76
    asm("loc_418E76: jmpl *_import_41B64C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418E7C() // ?GetInPlaceActiveItem@CRichEditDoc@@UAEPAVCOleClientItem@@PAVCWnd@@@Z
{
    __DEBUG_ASM(418E7C);
    // chunk 0x418E7C _sub_418E7C
    asm("loc_418E7C: jmpl *_import_41B650;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418E82() // ?OnIdle@COleDocument@@UAEXXZ
{
    __DEBUG_ASM(418E82);
    // chunk 0x418E82 _sub_418E82
    asm("loc_418E82: jmpl *_import_41B654;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418E88() // ?GetDefaultAccelerator@COleServerDoc@@MAEPAUHACCEL__@@XZ
{
    __DEBUG_ASM(418E88);
    // chunk 0x418E88 _sub_418E88
    asm("loc_418E88: jmpl *_import_41B658;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418E8E() // ?GetDefaultMenu@COleServerDoc@@MAEPAUHMENU__@@XZ
{
    __DEBUG_ASM(418E8E);
    // chunk 0x418E8E _sub_418E8E
    asm("loc_418E8E: jmpl *_import_41B65C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418E94() // ?UpdateFrameCounts@CDocument@@UAEXXZ
{
    __DEBUG_ASM(418E94);
    // chunk 0x418E94 _sub_418E94
    asm("loc_418E94: jmpl *_import_41B660;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418E9A() // ?DoFileSave@CDocument@@UAEHXZ
{
    __DEBUG_ASM(418E9A);
    // chunk 0x418E9A _sub_418E9A
    asm("loc_418E9A: jmpl *_import_41B664;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418EA0() // ?DoSave@CDocument@@UAEHPBDH@Z
{
    __DEBUG_ASM(418EA0);
    // chunk 0x418EA0 _sub_418EA0
    asm("loc_418EA0: jmpl *_import_41B668;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418EA6() // ?PreCloseFrame@CRichEditDoc@@UAEXPAVCFrameWnd@@@Z
{
    __DEBUG_ASM(418EA6);
    // chunk 0x418EA6 _sub_418EA6
    asm("loc_418EA6: jmpl *_import_41B66C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418EAC() // ?CanCloseFrame@COleServerDoc@@UAEHPAVCFrameWnd@@@Z
{
    __DEBUG_ASM(418EAC);
    // chunk 0x418EAC _sub_418EAC
    asm("loc_418EAC: jmpl *_import_41B670;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418EB2() // ?ReleaseFile@CDocument@@UAEXPAVCFile@@H@Z
{
    __DEBUG_ASM(418EB2);
    // chunk 0x418EB2 _sub_418EB2
    asm("loc_418EB2: jmpl *_import_41B674;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418EB8() // ?GetFile@CDocument@@UAEPAVCFile@@PBDIPAVCFileException@@@Z
{
    __DEBUG_ASM(418EB8);
    // chunk 0x418EB8 _sub_418EB8
    asm("loc_418EB8: jmpl *_import_41B678;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418EBE() // ?ReportSaveLoadException@COleLinkingDoc@@UAEXPBDPAVCException@@HI@Z
{
    __DEBUG_ASM(418EBE);
    // chunk 0x418EBE _sub_418EBE
    asm("loc_418EBE: jmpl *_import_41B67C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418EC4() // ?OnCloseDocument@COleServerDoc@@UAEXXZ
{
    __DEBUG_ASM(418EC4);
    // chunk 0x418EC4 _sub_418EC4
    asm("loc_418EC4: jmpl *_import_41B680;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418ECA() // ?OnSaveDocument@COleServerDoc@@UAEHPBD@Z
{
    __DEBUG_ASM(418ECA);
    // chunk 0x418ECA _sub_418ECA
    asm("loc_418ECA: jmpl *_import_41B684;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418ED0() // ?OnOpenDocument@COleLinkingDoc@@UAEHPBD@Z
{
    __DEBUG_ASM(418ED0);
    // chunk 0x418ED0 _sub_418ED0
    asm("loc_418ED0: jmpl *_import_41B688;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418ED6() // ?DeleteContents@CRichEditDoc@@UAEXXZ
{
    __DEBUG_ASM(418ED6);
    // chunk 0x418ED6 _sub_418ED6
    asm("loc_418ED6: jmpl *_import_41B68C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418EDC() // ?OnChangedViewList@CDocument@@UAEXXZ
{
    __DEBUG_ASM(418EDC);
    // chunk 0x418EDC _sub_418EDC
    asm("loc_418EDC: jmpl *_import_41B690;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418EE2() // ?GetNextView@CDocument@@UBEPAVCView@@AAPAU__POSITION@@@Z
{
    __DEBUG_ASM(418EE2);
    // chunk 0x418EE2 _sub_418EE2
    asm("loc_418EE2: jmpl *_import_41B694;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418EE8() // ?GetFirstViewPosition@CDocument@@UBEPAU__POSITION@@XZ
{
    __DEBUG_ASM(418EE8);
    // chunk 0x418EE8 _sub_418EE8
    asm("loc_418EE8: jmpl *_import_41B698;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418EEE() // ?SetModifiedFlag@CRichEditDoc@@UAEXH@Z
{
    __DEBUG_ASM(418EEE);
    // chunk 0x418EEE _sub_418EEE
    asm("loc_418EEE: jmpl *_import_41B69C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418EF4() // ?IsModified@CRichEditDoc@@UAEHXZ
{
    __DEBUG_ASM(418EF4);
    // chunk 0x418EF4 _sub_418EF4
    asm("loc_418EF4: jmpl *_import_41B6A0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418EFA() // ?SetPathName@CRichEditDoc@@UAEXPBDH@Z
{
    __DEBUG_ASM(418EFA);
    // chunk 0x418EFA _sub_418EFA
    asm("loc_418EFA: jmpl *_import_41B6A4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418F00() // ?GetInterfaceHook@COleServerDoc@@MAEPAUIUnknown@@PBX@Z
{
    __DEBUG_ASM(418F00);
    // chunk 0x418F00 _sub_418F00
    asm("loc_418F00: jmpl *_import_41B6A8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418F06() // ?GetInterfaceMap@COleServerDoc@@MBEPBUAFX_INTERFACEMAP@@XZ
{
    __DEBUG_ASM(418F06);
    // chunk 0x418F06 _sub_418F06
    asm("loc_418F06: jmpl *_import_41B6AC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418F0C() // ?OnFinalRelease@CDocument@@UAEXXZ
{
    __DEBUG_ASM(418F0C);
    // chunk 0x418F0C _sub_418F0C
    asm("loc_418F0C: jmpl *_import_41B6B0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418F12() // ?OnCmdMsg@COleDocument@@UAEHIHPAXPAUAFX_CMDHANDLERINFO@@@Z
{
    __DEBUG_ASM(418F12);
    // chunk 0x418F12 _sub_418F12
    asm("loc_418F12: jmpl *_import_41B6B4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418F18() // ??0CRichEditDoc@@IAE@XZ
{
    __DEBUG_ASM(418F18);
    // chunk 0x418F18 _sub_418F18
    asm("loc_418F18: jmpl *_import_41B6B8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418F1E() // ??1COleServerDoc@@UAE@XZ
{
    __DEBUG_ASM(418F1E);
    // chunk 0x418F1E _sub_418F1E
    asm("loc_418F1E: jmpl *_import_41B6C4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418F24() // ?OnNewDocument@COleLinkingDoc@@UAEHXZ
{
    __DEBUG_ASM(418F24);
    // chunk 0x418F24 _sub_418F24
    asm("loc_418F24: jmpl *_import_41B6C8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418F2A() // ?Serialize@CRichEditDoc@@UAEXAAVCArchive@@@Z
{
    __DEBUG_ASM(418F2A);
    // chunk 0x418F2A _sub_418F2A
    asm("loc_418F2A: jmpl *_import_41B6CC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418F30() // ?SetTitle@CRichEditDoc@@UAEXPBD@Z
{
    __DEBUG_ASM(418F30);
    // chunk 0x418F30 _sub_418F30
    asm("loc_418F30: jmpl *_import_41B6D0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418F36() // ?GetPrimarySelectedItem@CRichEditDoc@@UAEPAVCOleClientItem@@PAVCView@@@Z
{
    __DEBUG_ASM(418F36);
    // chunk 0x418F36 _sub_418F36
    asm("loc_418F36: jmpl *_import_41B6D4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418F3C() // ?OnFilePrintPreview@CView@@IAEXXZ
{
    __DEBUG_ASM(418F3C);
    // chunk 0x418F3C _sub_418F3C
    asm("loc_418F3C: jmpl *_import_41B6D8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418F42() // ?OnFilePrint@CView@@IAEXXZ
{
    __DEBUG_ASM(418F42);
    // chunk 0x418F42 _sub_418F42
    asm("loc_418F42: jmpl *_import_41B6DC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418F48() // ?DeleteContents@CRichEditView@@UAEXXZ
{
    __DEBUG_ASM(418F48);
    // chunk 0x418F48 _sub_418F48
    asm("loc_418F48: jmpl *_import_41B6E0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418F4E() // ?QueryAcceptData@CRichEditView@@MAEJPAUIDataObject@@PAGKHPAX@Z
{
    __DEBUG_ASM(418F4E);
    // chunk 0x418F4E _sub_418F4E
    asm("loc_418F4E: jmpl *_import_41B6E4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418F54() // ?GetClipboardData@CRichEditView@@MAEJPAU_charrange@@KPAUIDataObject@@PAPAU3@@Z
{
    __DEBUG_ASM(418F54);
    // chunk 0x418F54 _sub_418F54
    asm("loc_418F54: jmpl *_import_41B6E8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418F5A() // ?GetContextMenu@CRichEditView@@MAEPAUHMENU__@@GPAUIOleObject@@PAU_charrange@@@Z
{
    __DEBUG_ASM(418F5A);
    // chunk 0x418F5A _sub_418F5A
    asm("loc_418F5A: jmpl *_import_41B6EC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418F60() // ?OnPasteNativeObject@CRichEditView@@MAEHPAUIStorage@@@Z
{
    __DEBUG_ASM(418F60);
    // chunk 0x418F60 _sub_418F60
    asm("loc_418F60: jmpl *_import_41B6F0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418F66() // ?WrapChanged@CRichEditView@@MAEXXZ
{
    __DEBUG_ASM(418F66);
    // chunk 0x418F66 _sub_418F66
    asm("loc_418F66: jmpl *_import_41B6F4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418F6C() // ?OnPrinterChanged@CRichEditView@@MAEXABVCDC@@@Z
{
    __DEBUG_ASM(418F6C);
    // chunk 0x418F6C _sub_418F6C
    asm("loc_418F6C: jmpl *_import_41B6F8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418F72() // ?OnTextNotFound@CRichEditView@@MAEXPBD@Z
{
    __DEBUG_ASM(418F72);
    // chunk 0x418F72 _sub_418F72
    asm("loc_418F72: jmpl *_import_41B1CC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418F78() // ?OnReplaceAll@CRichEditView@@MAEXPBD0HH@Z
{
    __DEBUG_ASM(418F78);
    // chunk 0x418F78 _sub_418F78
    asm("loc_418F78: jmpl *_import_41B700;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418F7E() // ?OnReplaceSel@CRichEditView@@MAEXPBDHHH0@Z
{
    __DEBUG_ASM(418F7E);
    // chunk 0x418F7E _sub_418F7E
    asm("loc_418F7E: jmpl *_import_41B704;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418F84() // ?OnFindNext@CRichEditView@@MAEXPBDHHH@Z
{
    __DEBUG_ASM(418F84);
    // chunk 0x418F84 _sub_418F84
    asm("loc_418F84: jmpl *_import_41B708;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418F8A() // ?OnEndPrintPreview@CView@@MAEXPAVCDC@@PAUCPrintInfo@@UtagPOINT@@PAVCPreviewView@@@Z
{
    __DEBUG_ASM(418F8A);
    // chunk 0x418F8A _sub_418F8A
    asm("loc_418F8A: jmpl *_import_41B70C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418F90() // ?OnEndPrinting@CRichEditView@@MAEXPAVCDC@@PAUCPrintInfo@@@Z
{
    __DEBUG_ASM(418F90);
    // chunk 0x418F90 _sub_418F90
    asm("loc_418F90: jmpl *_import_41B710;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418F96() // ?OnPrint@CRichEditView@@MAEXPAVCDC@@PAUCPrintInfo@@@Z
{
    __DEBUG_ASM(418F96);
    // chunk 0x418F96 _sub_418F96
    asm("loc_418F96: jmpl *_import_41B714;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418F9C() // ?OnBeginPrinting@CRichEditView@@MAEXPAVCDC@@PAUCPrintInfo@@@Z
{
    __DEBUG_ASM(418F9C);
    // chunk 0x418F9C _sub_418F9C
    asm("loc_418F9C: jmpl *_import_41B718;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418FA2() // ?OnDraw@CCtrlView@@MAEXPAVCDC@@@Z
{
    __DEBUG_ASM(418FA2);
    // chunk 0x418FA2 _sub_418FA2
    asm("loc_418FA2: jmpl *_import_41B71C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418FA8() // ?OnUpdate@CView@@MAEXPAV1@JPAVCObject@@@Z
{
    __DEBUG_ASM(418FA8);
    // chunk 0x418FA8 _sub_418FA8
    asm("loc_418FA8: jmpl *_import_41B720;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418FAE() // ?OnActivateFrame@CView@@MAEXIPAVCFrameWnd@@@Z
{
    __DEBUG_ASM(418FAE);
    // chunk 0x418FAE _sub_418FAE
    asm("loc_418FAE: jmpl *_import_41B724;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418FB4() // ?OnActivateView@CView@@MAEXHPAV1@0@Z
{
    __DEBUG_ASM(418FB4);
    // chunk 0x418FB4 _sub_418FB4
    asm("loc_418FB4: jmpl *_import_41B728;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418FBA() // ?OnPrepareDC@CRichEditView@@UAEXPAVCDC@@PAUCPrintInfo@@@Z
{
    __DEBUG_ASM(418FBA);
    // chunk 0x418FBA _sub_418FBA
    asm("loc_418FBA: jmpl *_import_41B72C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418FC0() // ?OnDragScroll@CView@@UAEKKVCPoint@@@Z
{
    __DEBUG_ASM(418FC0);
    // chunk 0x418FC0 _sub_418FC0
    asm("loc_418FC0: jmpl *_import_41B730;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418FC6() // ?OnDropEx@CView@@UAEKPAVCOleDataObject@@KKVCPoint@@@Z
{
    __DEBUG_ASM(418FC6);
    // chunk 0x418FC6 _sub_418FC6
    asm("loc_418FC6: jmpl *_import_41B734;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418FCC() // ?OnDrop@CView@@UAEHPAVCOleDataObject@@KVCPoint@@@Z
{
    __DEBUG_ASM(418FCC);
    // chunk 0x418FCC _sub_418FCC
    asm("loc_418FCC: jmpl *_import_41B738;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418FD2() // ?OnDragLeave@CView@@UAEXXZ
{
    __DEBUG_ASM(418FD2);
    // chunk 0x418FD2 _sub_418FD2
    asm("loc_418FD2: jmpl *_import_41B73C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418FD8() // ?OnDragOver@CView@@UAEKPAVCOleDataObject@@KVCPoint@@@Z
{
    __DEBUG_ASM(418FD8);
    // chunk 0x418FD8 _sub_418FD8
    asm("loc_418FD8: jmpl *_import_41B740;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418FDE() // ?OnDragEnter@CView@@UAEKPAVCOleDataObject@@KVCPoint@@@Z
{
    __DEBUG_ASM(418FDE);
    // chunk 0x418FDE _sub_418FDE
    asm("loc_418FDE: jmpl *_import_41B744;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418FE4() // ?OnScrollBy@CView@@UAEHVCSize@@H@Z
{
    __DEBUG_ASM(418FE4);
    // chunk 0x418FE4 _sub_418FE4
    asm("loc_418FE4: jmpl *_import_41B748;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418FEA() // ?OnScroll@CView@@UAEHIIH@Z
{
    __DEBUG_ASM(418FEA);
    // chunk 0x418FEA _sub_418FEA
    asm("loc_418FEA: jmpl *_import_41B74C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418FF0() // ?IsSelected@CRichEditView@@MBEHPBVCObject@@@Z
{
    __DEBUG_ASM(418FF0);
    // chunk 0x418FF0 _sub_418FF0
    asm("loc_418FF0: jmpl *_import_41B750;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418FF6() // ?PostNcDestroy@CView@@MAEXXZ
{
    __DEBUG_ASM(418FF6);
    // chunk 0x418FF6 _sub_418FF6
    asm("loc_418FF6: jmpl *_import_41B754;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_418FFC() // ?GetScrollBarCtrl@CView@@UBEPAVCScrollBar@@H@Z
{
    __DEBUG_ASM(418FFC);
    // chunk 0x418FFC _sub_418FFC
    asm("loc_418FFC: jmpl *_import_41B758;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419002() // ?CalcWindowRect@CView@@UAEXPAUtagRECT@@I@Z
{
    __DEBUG_ASM(419002);
    // chunk 0x419002 _sub_419002
    asm("loc_419002: jmpl *_import_41B75C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419008() // ?GetInterfaceMap@CRichEditView@@MBEPBUAFX_INTERFACEMAP@@XZ
{
    __DEBUG_ASM(419008);
    // chunk 0x419008 _sub_419008
    asm("loc_419008: jmpl *_import_41B760;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41900E() // ?OnCmdMsg@CView@@UAEHIHPAXPAUAFX_CMDHANDLERINFO@@@Z
{
    __DEBUG_ASM(41900E);
    // chunk 0x41900E _sub_41900E
    asm("loc_41900E: jmpl *_import_41B764;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419014() // ?Serialize@CRichEditView@@UAEXAAVCArchive@@@Z
{
    __DEBUG_ASM(419014);
    // chunk 0x419014 _sub_419014
    asm("loc_419014: jmpl *_import_41B768;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41901A() // ??0CRichEditView@@QAE@XZ
{
    __DEBUG_ASM(41901A);
    // chunk 0x41901A _sub_41901A
    asm("loc_41901A: jmpl *_import_41B76C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419020() // ??1CView@@UAE@XZ
{
    __DEBUG_ASM(419020);
    // chunk 0x419020 _sub_419020
    asm("loc_419020: jmpl *_import_41B778;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419026() // ??1CDWordArray@@UAE@XZ
{
    __DEBUG_ASM(419026);
    // chunk 0x419026 _sub_419026
    asm("loc_419026: jmpl *_import_41B77C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41902C() // ?PreCreateWindow@CRichEditView@@MAEHAAUtagCREATESTRUCTA@@@Z
{
    __DEBUG_ASM(41902C);
    // chunk 0x41902C _sub_41902C
    asm("loc_41902C: jmpl *_import_41B780;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419032() // ?SetCharFormat@CRichEditView@@QAEXU_charformat@@@Z
{
    __DEBUG_ASM(419032);
    // chunk 0x419032 _sub_419032
    asm("loc_419032: jmpl *_import_41B784;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419038() // ?OnInitialUpdate@CRichEditView@@MAEXXZ
{
    __DEBUG_ASM(419038);
    // chunk 0x419038 _sub_419038
    asm("loc_419038: jmpl *_import_41B788;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41903E() // ?DoPreparePrinting@CView@@QAEHPAUCPrintInfo@@@Z
{
    __DEBUG_ASM(41903E);
    // chunk 0x41903E _sub_41903E
    asm("loc_41903E: jmpl *_import_41B78C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419044() // ?Deactivate@COleClientItem@@QAEXXZ
{
    __DEBUG_ASM(419044);
    // chunk 0x419044 _sub_419044
    asm("loc_419044: jmpl *_import_41B790;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41904A() // ?OnDestroy@CRichEditView@@IAEXXZ
{
    __DEBUG_ASM(41904A);
    // chunk 0x41904A _sub_41904A
    asm("loc_41904A: jmpl *_import_41B794;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419050() // ?SetSel@CRichEditCtrl@@QAEXJJ@Z
{
    __DEBUG_ASM(419050);
    // chunk 0x419050 _sub_419050
    asm("loc_419050: jmpl *_import_41B798;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419056() // ?LineScroll@CRichEditCtrl@@QAEXHH@Z
{
    __DEBUG_ASM(419056);
    // chunk 0x419056 _sub_419056
    asm("loc_419056: jmpl *_import_41B79C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41905C() // ?LineLength@CRichEditCtrl@@QBEHH@Z
{
    __DEBUG_ASM(41905C);
    // chunk 0x41905C _sub_41905C
    asm("loc_41905C: jmpl *_import_41B7A0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419062() // ?OnKeyDown@CRichEditView@@IAEXIII@Z
{
    __DEBUG_ASM(419062);
    // chunk 0x419062 _sub_419062
    asm("loc_419062: jmpl *_import_41B7A4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419068() // ?GetRuntimeClass@CStatic@@UBEPAUCRuntimeClass@@XZ
{
    __DEBUG_ASM(419068);
    // chunk 0x419068 _sub_419068
    asm("loc_419068: jmpl *_import_41B7AC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41906E() // ?DrawItem@CListCtrl@@UAEXPAUtagDRAWITEMSTRUCT@@@Z
{
    __DEBUG_ASM(41906E);
    // chunk 0x41906E _sub_41906E
    asm("loc_41906E: jmpl *_import_41B7B0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419074() // ?OnChildNotify@CListCtrl@@MAEHIIJPAJ@Z
{
    __DEBUG_ASM(419074);
    // chunk 0x419074 _sub_419074
    asm("loc_419074: jmpl *_import_41B7B4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41907A() // ?GetMessageMap@CListCtrl@@MBEPBUAFX_MSGMAP@@XZ
{
    __DEBUG_ASM(41907A);
    // chunk 0x41907A _sub_41907A
    asm("loc_41907A: jmpl *_import_41B7B8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419080() // ?GetRuntimeClass@CListCtrl@@UBEPAUCRuntimeClass@@XZ
{
    __DEBUG_ASM(419080);
    // chunk 0x419080 _sub_419080
    asm("loc_419080: jmpl *_import_41B7BC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419086() // ?GetRuntimeClass@CProgressCtrl@@UBEPAUCRuntimeClass@@XZ
{
    __DEBUG_ASM(419086);
    // chunk 0x419086 _sub_419086
    asm("loc_419086: jmpl *_import_41B7C0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41908C() // ?GetRuntimeClass@CBrush@@UBEPAUCRuntimeClass@@XZ
{
    __DEBUG_ASM(41908C);
    // chunk 0x41908C _sub_41908C
    asm("loc_41908C: jmpl *_import_41B7C4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419092() // ?GetRuntimeClass@CFont@@UBEPAUCRuntimeClass@@XZ
{
    __DEBUG_ASM(419092);
    // chunk 0x419092 _sub_419092
    asm("loc_419092: jmpl *_import_41B7C8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419098() // ?OnEndPrinting@CView@@MAEXPAVCDC@@PAUCPrintInfo@@@Z
{
    __DEBUG_ASM(419098);
    // chunk 0x419098 _sub_419098
    asm("loc_419098: jmpl *_import_41B7CC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41909E() // ?OnPrint@CView@@MAEXPAVCDC@@PAUCPrintInfo@@@Z
{
    __DEBUG_ASM(41909E);
    // chunk 0x41909E _sub_41909E
    asm("loc_41909E: jmpl *_import_41B7D0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4190A4() // ?OnBeginPrinting@CView@@MAEXPAVCDC@@PAUCPrintInfo@@@Z
{
    __DEBUG_ASM(4190A4);
    // chunk 0x4190A4 _sub_4190A4
    asm("loc_4190A4: jmpl *_import_41B7D4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4190AA() // ?OnPreparePrinting@CView@@MAEHPAUCPrintInfo@@@Z
{
    __DEBUG_ASM(4190AA);
    // chunk 0x4190AA _sub_4190AA
    asm("loc_4190AA: jmpl *_import_41B7D8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4190B0() // ?OnDraw@CFormView@@MAEXPAVCDC@@@Z
{
    __DEBUG_ASM(4190B0);
    // chunk 0x4190B0 _sub_4190B0
    asm("loc_4190B0: jmpl *_import_41B7DC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4190B6() // ?OnActivateFrame@CFormView@@MAEXIPAVCFrameWnd@@@Z
{
    __DEBUG_ASM(4190B6);
    // chunk 0x4190B6 _sub_4190B6
    asm("loc_4190B6: jmpl *_import_41B7E0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4190BC() // ?OnActivateView@CFormView@@MAEXHPAVCView@@0@Z
{
    __DEBUG_ASM(4190BC);
    // chunk 0x4190BC _sub_4190BC
    asm("loc_4190BC: jmpl *_import_41B7E4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4190C2() // ?OnPrepareDC@CScrollView@@UAEXPAVCDC@@PAUCPrintInfo@@@Z
{
    __DEBUG_ASM(4190C2);
    // chunk 0x4190C2 _sub_4190C2
    asm("loc_4190C2: jmpl *_import_41B7E8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4190C8() // ?OnScrollBy@CScrollView@@UAEHVCSize@@H@Z
{
    __DEBUG_ASM(4190C8);
    // chunk 0x4190C8 _sub_4190C8
    asm("loc_4190C8: jmpl *_import_41B7EC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4190CE() // ?OnScroll@CScrollView@@UAEHIIH@Z
{
    __DEBUG_ASM(4190CE);
    // chunk 0x4190CE _sub_4190CE
    asm("loc_4190CE: jmpl *_import_41B7F0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4190D4() // ?IsSelected@CView@@UBEHPBVCObject@@@Z
{
    __DEBUG_ASM(4190D4);
    // chunk 0x4190D4 _sub_4190D4
    asm("loc_4190D4: jmpl *_import_41B7F4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4190DA() // ?SetOccDialogInfo@CFormView@@MAEHPAU_AFX_OCC_DIALOG_INFO@@@Z
{
    __DEBUG_ASM(4190DA);
    // chunk 0x4190DA _sub_4190DA
    asm("loc_4190DA: jmpl *_import_41B7F8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4190E0() // ?PreTranslateMessage@CFormView@@MAEHPAUtagMSG@@@Z
{
    __DEBUG_ASM(4190E0);
    // chunk 0x4190E0 _sub_4190E0
    asm("loc_4190E0: jmpl *_import_41B7FC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4190E6() // ?CalcWindowRect@CScrollView@@UAEXPAUtagRECT@@I@Z
{
    __DEBUG_ASM(4190E6);
    // chunk 0x4190E6 _sub_4190E6
    asm("loc_4190E6: jmpl *_import_41B800;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4190EC() // ?PreCreateWindow@CView@@MAEHAAUtagCREATESTRUCTA@@@Z
{
    __DEBUG_ASM(4190EC);
    // chunk 0x4190EC _sub_4190EC
    asm("loc_4190EC: jmpl *_import_41B804;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4190F2() // ?Create@CFormView@@MAEHPBD0KABUtagRECT@@PAVCWnd@@IPAUCCreateContext@@@Z
{
    __DEBUG_ASM(4190F2);
    // chunk 0x4190F2 _sub_4190F2
    asm("loc_4190F2: jmpl *_import_41B808;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4190F8() // ??1CListCtrl@@UAE@XZ
{
    __DEBUG_ASM(4190F8);
    // chunk 0x4190F8 _sub_4190F8
    asm("loc_4190F8: jmpl *_import_41B80C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4190FE() // ??0CFormView@@IAE@I@Z
{
    __DEBUG_ASM(4190FE);
    // chunk 0x4190FE _sub_4190FE
    asm("loc_4190FE: jmpl *_import_41B810;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419104() // ?GetRuntimeClass@CGdiObject@@UBEPAUCRuntimeClass@@XZ
{
    __DEBUG_ASM(419104);
    // chunk 0x419104 _sub_419104
    asm("loc_419104: jmpl *_import_41B814;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41910A() // ?DeleteObject@CGdiObject@@QAEHXZ
{
    __DEBUG_ASM(41910A);
    // chunk 0x41910A _sub_41910A
    asm("loc_41910A: jmpl *_import_41B818;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419110() // ??1CProgressCtrl@@UAE@XZ
{
    __DEBUG_ASM(419110);
    // chunk 0x419110 _sub_419110
    asm("loc_419110: jmpl *_import_41B81C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419116() // ??1CScrollView@@UAE@XZ
{
    __DEBUG_ASM(419116);
    // chunk 0x419116 _sub_419116
    asm("loc_419116: jmpl *_import_41B820;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41911C() // ?SetItem@CListCtrl@@QAEHHHIPBDHIIJ@Z
{
    __DEBUG_ASM(41911C);
    // chunk 0x41911C _sub_41911C
    asm("loc_41911C: jmpl *_import_41B4FC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419122() // ?SetDefaultCharFormat@CRichEditCtrl@@QAEHAAU_charformat@@@Z
{
    __DEBUG_ASM(419122);
    // chunk 0x419122 _sub_419122
    asm("loc_419122: jmpl *_import_41B6FC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419128() // ?InsertItem@CListCtrl@@QAEHIHPBDIIHJ@Z
{
    __DEBUG_ASM(419128);
    // chunk 0x419128 _sub_419128
    asm("loc_419128: jmpl *_import_41B6BC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41912E() // ?InsertColumn@CListCtrl@@QAEHHPBDHHH@Z
{
    __DEBUG_ASM(41912E);
    // chunk 0x41912E _sub_41912E
    asm("loc_41912E: jmpl *_import_41B614;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419134() // ??1CClientDC@@UAE@XZ
{
    __DEBUG_ASM(419134);
    // chunk 0x419134 _sub_419134
    asm("loc_419134: jmpl *_import_41B2E8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41913A() // ?CreatePointFont@CFont@@QAEHHPBDPAVCDC@@@Z
{
    __DEBUG_ASM(41913A);
    // chunk 0x41913A _sub_41913A
    asm("loc_41913A: jmpl *_import_41B2E4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419140() // ??0CClientDC@@QAE@PAVCWnd@@@Z
{
    __DEBUG_ASM(419140);
    // chunk 0x419140 _sub_419140
    asm("loc_419140: jmpl *_import_41B2E0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419146() // ?Attach@CGdiObject@@QAEHPAX@Z
{
    __DEBUG_ASM(419146);
    // chunk 0x419146 _sub_419146
    asm("loc_419146: jmpl *_import_41B2D8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41914C() // ?OnInitialUpdate@CFormView@@UAEXXZ
{
    __DEBUG_ASM(41914C);
    // chunk 0x41914C _sub_41914C
    asm("loc_41914C: jmpl *_import_41B2D4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419152() // ?SetBkMode@CDC@@QAEHH@Z
{
    __DEBUG_ASM(419152);
    // chunk 0x419152 _sub_419152
    asm("loc_419152: jmpl *_import_41B2D0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419158() // ?OnCtlColor@CWnd@@IAEPAUHBRUSH__@@PAVCDC@@PAV1@I@Z
{
    __DEBUG_ASM(419158);
    // chunk 0x419158 _sub_419158
    asm("loc_419158: jmpl *_import_41B2CC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41915E() // ?DeleteItem@CListBox@@UAEXPAUtagDELETEITEMSTRUCT@@@Z
{
    __DEBUG_ASM(41915E);
    // chunk 0x41915E _sub_41915E
    asm("loc_41915E: jmpl *_import_41B2C8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419164() // ?DrawItem@CListBox@@UAEXPAUtagDRAWITEMSTRUCT@@@Z
{
    __DEBUG_ASM(419164);
    // chunk 0x419164 _sub_419164
    asm("loc_419164: jmpl *_import_41B2C4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41916A() // ?CharToItem@CListBox@@UAEHII@Z
{
    __DEBUG_ASM(41916A);
    // chunk 0x41916A _sub_41916A
    asm("loc_41916A: jmpl *_import_41B2C0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419170() // ?VKeyToItem@CListBox@@UAEHII@Z
{
    __DEBUG_ASM(419170);
    // chunk 0x419170 _sub_419170
    asm("loc_419170: jmpl *_import_41B2BC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419176() // ?CompareItem@CListBox@@UAEHPAUtagCOMPAREITEMSTRUCT@@@Z
{
    __DEBUG_ASM(419176);
    // chunk 0x419176 _sub_419176
    asm("loc_419176: jmpl *_import_41B2B8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41917C() // ?MeasureItem@CListBox@@UAEXPAUtagMEASUREITEMSTRUCT@@@Z
{
    __DEBUG_ASM(41917C);
    // chunk 0x41917C _sub_41917C
    asm("loc_41917C: jmpl *_import_41B2B4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419182() // ?OnChildNotify@CListBox@@MAEHIIJPAJ@Z
{
    __DEBUG_ASM(419182);
    // chunk 0x419182 _sub_419182
    asm("loc_419182: jmpl *_import_41B2B0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419188() // ?GetRuntimeClass@CListBox@@UBEPAUCRuntimeClass@@XZ
{
    __DEBUG_ASM(419188);
    // chunk 0x419188 _sub_419188
    asm("loc_419188: jmpl *_import_41B2AC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41918E() // ??1CListBox@@UAE@XZ
{
    __DEBUG_ASM(41918E);
    // chunk 0x41918E _sub_41918E
    asm("loc_41918E: jmpl *_import_41B2A8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419194() // ?GetText@CListBox@@QBEXHAAVCString@@@Z
{
    __DEBUG_ASM(419194);
    // chunk 0x419194 _sub_419194
    asm("loc_419194: jmpl *_import_41B2A4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41919A() // ??0CBrush@@QAE@K@Z
{
    __DEBUG_ASM(41919A);
    // chunk 0x41919A _sub_41919A
    asm("loc_41919A: jmpl *_import_41B29C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4191A0() // ?FromHandle@CDC@@SGPAV1@PAUHDC__@@@Z
{
    __DEBUG_ASM(4191A0);
    // chunk 0x4191A0 _sub_4191A0
    asm("loc_4191A0: jmpl *_import_41B298;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4191A6() // ?ExitHelpMode@CFrameWnd@@UAEXXZ
{
    __DEBUG_ASM(4191A6);
    // chunk 0x4191A6 _sub_4191A6
    asm("loc_4191A6: jmpl *_import_41B28C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4191AC() // ?DelayUpdateFrameMenu@CFrameWnd@@UAEXPAUHMENU__@@@Z
{
    __DEBUG_ASM(4191AC);
    // chunk 0x4191AC _sub_4191AC
    asm("loc_4191AC: jmpl *_import_41B288;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4191B2() // ?GetDefaultAccelerator@CFrameWnd@@UAEPAUHACCEL__@@XZ
{
    __DEBUG_ASM(4191B2);
    // chunk 0x4191B2 _sub_4191B2
    asm("loc_4191B2: jmpl *_import_41B284;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4191B8() // ?OnUpdateFrameMenu@CFrameWnd@@UAEXPAUHMENU__@@@Z
{
    __DEBUG_ASM(4191B8);
    // chunk 0x4191B8 _sub_4191B8
    asm("loc_4191B8: jmpl *_import_41B280;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4191BE() // ?OnUpdateFrameTitle@CFrameWnd@@UAEXH@Z
{
    __DEBUG_ASM(4191BE);
    // chunk 0x4191BE _sub_4191BE
    asm("loc_4191BE: jmpl *_import_41B27C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4191C4() // ?OnCreateClient@CFrameWnd@@MAEHPAUtagCREATESTRUCTA@@PAUCCreateContext@@@Z
{
    __DEBUG_ASM(4191C4);
    // chunk 0x4191C4 _sub_4191C4
    asm("loc_4191C4: jmpl *_import_41B278;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4191CA() // ?NegotiateBorderSpace@CFrameWnd@@UAEHIPAUtagRECT@@@Z
{
    __DEBUG_ASM(4191CA);
    // chunk 0x4191CA _sub_4191CA
    asm("loc_4191CA: jmpl *_import_41B274;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4191D0() // ?GetMessageBar@CFrameWnd@@UAEPAVCWnd@@XZ
{
    __DEBUG_ASM(4191D0);
    // chunk 0x4191D0 _sub_4191D0
    asm("loc_4191D0: jmpl *_import_41B270;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4191D6() // ?OnSetPreviewMode@CFrameWnd@@UAEXHPAUCPrintPreviewState@@@Z
{
    __DEBUG_ASM(4191D6);
    // chunk 0x4191D6 _sub_4191D6
    asm("loc_4191D6: jmpl *_import_41B26C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4191DC() // ?ActivateFrame@CFrameWnd@@UAEXH@Z
{
    __DEBUG_ASM(4191DC);
    // chunk 0x4191DC _sub_4191DC
    asm("loc_4191DC: jmpl *_import_41B268;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4191E2() // ?RecalcLayout@CFrameWnd@@UAEXH@Z
{
    __DEBUG_ASM(4191E2);
    // chunk 0x4191E2 _sub_4191E2
    asm("loc_4191E2: jmpl *_import_41B264;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4191E8() // ?GetMessageString@CFrameWnd@@UBEXIAAVCString@@@Z
{
    __DEBUG_ASM(4191E8);
    // chunk 0x4191E8 _sub_4191E8
    asm("loc_4191E8: jmpl *_import_41B260;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4191EE() // ?GetActiveFrame@CFrameWnd@@UAEPAV1@XZ
{
    __DEBUG_ASM(4191EE);
    // chunk 0x4191EE _sub_4191EE
    asm("loc_4191EE: jmpl *_import_41B25C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4191F4() // ?GetActiveDocument@CFrameWnd@@UAEPAVCDocument@@XZ
{
    __DEBUG_ASM(4191F4);
    // chunk 0x4191F4 _sub_4191F4
    asm("loc_4191F4: jmpl *_import_41B258;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4191FA() // ?IsFrameWnd@CFrameWnd@@UBEHXZ
{
    __DEBUG_ASM(4191FA);
    // chunk 0x4191FA _sub_4191FA
    asm("loc_4191FA: jmpl *_import_41B254;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419200() // ?PostNcDestroy@CFrameWnd@@MAEXXZ
{
    __DEBUG_ASM(419200);
    // chunk 0x419200 _sub_419200
    asm("loc_419200: jmpl *_import_41B250;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419206() // ?PreTranslateMessage@CFrameWnd@@UAEHPAUtagMSG@@@Z
{
    __DEBUG_ASM(419206);
    // chunk 0x419206 _sub_419206
    asm("loc_419206: jmpl *_import_41B24C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41920C() // ?EndModalState@CFrameWnd@@UAEXXZ
{
    __DEBUG_ASM(41920C);
    // chunk 0x41920C _sub_41920C
    asm("loc_41920C: jmpl *_import_41B248;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419212() // ?BeginModalState@CFrameWnd@@UAEXXZ
{
    __DEBUG_ASM(419212);
    // chunk 0x419212 _sub_419212
    asm("loc_419212: jmpl *_import_41B244;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419218() // ?OnCommand@CFrameWnd@@MAEHIJ@Z
{
    __DEBUG_ASM(419218);
    // chunk 0x419218 _sub_419218
    asm("loc_419218: jmpl *_import_41B240;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41921E() // ?OnCmdMsg@CFrameWnd@@UAEHIHPAXPAUAFX_CMDHANDLERINFO@@@Z
{
    __DEBUG_ASM(41921E);
    // chunk 0x41921E _sub_41921E
    asm("loc_41921E: jmpl *_import_41B23C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419224() // ??1CToolBar@@UAE@XZ
{
    __DEBUG_ASM(419224);
    // chunk 0x419224 _sub_419224
    asm("loc_419224: jmpl *_import_41B238;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41922A() // ??1CStatusBar@@UAE@XZ
{
    __DEBUG_ASM(41922A);
    // chunk 0x41922A _sub_41922A
    asm("loc_41922A: jmpl *_import_41B234;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419230() // ??1CFrameWnd@@UAE@XZ
{
    __DEBUG_ASM(419230);
    // chunk 0x419230 _sub_419230
    asm("loc_419230: jmpl *_import_41B230;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419236() // ?GetTickCount@CTime@@SG?AV1@XZ
{
    __DEBUG_ASM(419236);
    // chunk 0x419236 _sub_419236
    asm("loc_419236: jmpl *_import_41B22C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41923C() // ??0CToolBar@@QAE@XZ
{
    __DEBUG_ASM(41923C);
    // chunk 0x41923C _sub_41923C
    asm("loc_41923C: jmpl *_import_41B228;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419242() // ??0CStatusBar@@QAE@XZ
{
    __DEBUG_ASM(419242);
    // chunk 0x419242 _sub_419242
    asm("loc_419242: jmpl *_import_41B224;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419248() // ??0CFrameWnd@@QAE@XZ
{
    __DEBUG_ASM(419248);
    // chunk 0x419248 _sub_419248
    asm("loc_419248: jmpl *_import_41B220;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41924E() // ?LoadFrame@CFrameWnd@@UAEHIKPAVCWnd@@PAUCCreateContext@@@Z
{
    __DEBUG_ASM(41924E);
    // chunk 0x41924E _sub_41924E
    asm("loc_41924E: jmpl *_import_41B21C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419254() // ?FromHandle@CMenu@@SGPAV1@PAUHMENU__@@@Z
{
    __DEBUG_ASM(419254);
    // chunk 0x419254 _sub_419254
    asm("loc_419254: jmpl *_import_41B218;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41925A() // ?SetIndicators@CStatusBar@@QAEHPBIH@Z
{
    __DEBUG_ASM(41925A);
    // chunk 0x41925A _sub_41925A
    asm("loc_41925A: jmpl *_import_41B214;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419260() // ?Create@CStatusBar@@QAEHPAVCWnd@@KI@Z
{
    __DEBUG_ASM(419260);
    // chunk 0x419260 _sub_419260
    asm("loc_419260: jmpl *_import_41B210;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419266() // ?OnCreate@CFrameWnd@@IAEHPAUtagCREATESTRUCTA@@@Z
{
    __DEBUG_ASM(419266);
    // chunk 0x419266 _sub_419266
    asm("loc_419266: jmpl *_import_41B20C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41926C() // ?PreCreateWindow@CFrameWnd@@MAEHAAUtagCREATESTRUCTA@@@Z
{
    __DEBUG_ASM(41926C);
    // chunk 0x41926C _sub_41926C
    asm("loc_41926C: jmpl *_import_41B208;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419272() // ?SetPaneInfo@CStatusBar@@QAEXHIIH@Z
{
    __DEBUG_ASM(419272);
    // chunk 0x419272 _sub_419272
    asm("loc_419272: jmpl *_import_41B204;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419278() // ?GetPaneInfo@CStatusBar@@QBEXHAAI0AAH@Z
{
    __DEBUG_ASM(419278);
    // chunk 0x419278 _sub_419278
    asm("loc_419278: jmpl *_import_41B200;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41927E() // ??H@YG?AVCString@@ABV0@0@Z
{
    __DEBUG_ASM(41927E);
    // chunk 0x41927E _sub_41927E
    asm("loc_41927E: jmpl *_import_41B1FC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419284() // ??4CString@@QAEABV0@ABV0@@Z
{
    __DEBUG_ASM(419284);
    // chunk 0x419284 _sub_419284
    asm("loc_419284: jmpl *_import_41B1F8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41928A() // ?Format@CTimeSpan@@QBE?AVCString@@PBD@Z
{
    __DEBUG_ASM(41928A);
    // chunk 0x41928A _sub_41928A
    asm("loc_41928A: jmpl *_import_41B1F4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419290() // ??0CString@@QAE@PBD@Z
{
    __DEBUG_ASM(419290);
    // chunk 0x419290 _sub_419290
    asm("loc_419290: jmpl *_import_41B1F0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419296() // ?OnClose@CFrameWnd@@IAEXXZ
{
    __DEBUG_ASM(419296);
    // chunk 0x419296 _sub_419296
    asm("loc_419296: jmpl *_import_41B1EC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41929C() // ?SetFocus@CWnd@@QAEPAV1@XZ
{
    __DEBUG_ASM(41929C);
    // chunk 0x41929C _sub_41929C
    asm("loc_41929C: jmpl *_import_41B1E8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4192A2() // ?OnCtlColor@CDialog@@IAEPAUHBRUSH__@@PAVCDC@@PAVCWnd@@I@Z
{
    __DEBUG_ASM(4192A2);
    // chunk 0x4192A2 _sub_4192A2
    asm("loc_4192A2: jmpl *_import_41B1E4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4192A8() // ?ParseParam@CCommandLineInfo@@UAEXPBDHH@Z
{
    __DEBUG_ASM(4192A8);
    // chunk 0x4192A8 _sub_4192A8
    asm("loc_4192A8: jmpl *_import_41B1E0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4192AE() // ?SetDlgItemTextA@CWnd@@QAEXHPBD@Z
{
    __DEBUG_ASM(4192AE);
    // chunk 0x4192AE _sub_4192AE
    asm("loc_4192AE: jmpl *_import_41B1DC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4192B4() // ?OnDestroy@CWnd@@IAEXXZ
{
    __DEBUG_ASM(4192B4);
    // chunk 0x4192B4 _sub_4192B4
    asm("loc_4192B4: jmpl *_import_41B1D8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4192C0() // _purecall
{
    __DEBUG_ASM(4192C0);
    // chunk 0x4192C0 _sub_4192C0
    asm("loc_4192C0: jmpl *_import_41B94C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4192C6() // ??_M@YGXPAXIHP6EX0@Z@Z
{
    __DEBUG_ASM(4192C6);
    // chunk 0x4192C6 _sub_4192C6
    asm("loc_4192C6: push %ebp;");
    asm("loc_4192C7: mov %esp,%ebp;");
    asm("loc_4192C9: push $0xFFFFFFFF;");
    asm("loc_4192CB: push $_data_41EA20;");
    asm("loc_4192D0: push $_sub_419452;");
    asm("loc_4192D5: mov %fs:0,%eax;");
    asm("loc_4192DB: push %eax;");
    asm("loc_4192DC: mov %esp,%fs:0;");
    asm("loc_4192E3: sub $0xC,%esp;");
    asm("loc_4192E6: push %ebx;");
    asm("loc_4192E7: push %esi;");
    asm("loc_4192E8: push %edi;");
    asm("loc_4192E9: andl $0,-0x1C(%ebp);");
    asm("loc_4192ED: mov 0xC(%ebp),%esi;");
    asm("loc_4192F0: mov %esi,%eax;");
    asm("loc_4192F2: imul 0x10(%ebp),%eax;");
    asm("loc_4192F6: add %eax,8(%ebp);");
    asm("loc_4192F9: andl $0,-4(%ebp);");
    asm("loc_4192FD: decl 0x10(%ebp);");
    asm("loc_419300: js loc_41930D;");
    asm("loc_419302: sub %esi,8(%ebp);");
    asm("loc_419305: mov 8(%ebp),%ecx;");
    asm("loc_419308: calll *0x14(%ebp);");
    asm("loc_41930B: jmp loc_4192FD;");
    asm("loc_41930D: movl $1,-0x1C(%ebp);");
    asm("loc_419314: orl $0xFFFFFFFF,-4(%ebp);");
    asm("loc_419318: call loc_41932E;");
    asm("loc_41931D: mov -0x10(%ebp),%ecx;");
    asm("loc_419320: mov %ecx,%fs:0;");
    asm("loc_419327: pop %edi;");
    asm("loc_419328: pop %esi;");
    asm("loc_419329: pop %ebx;");
    asm("loc_41932A: leave;");
    asm("loc_41932B: ret $0x10;");
    asm("loc_41932E: cmpl $0,-0x1C(%ebp);");
    asm("loc_419332: jne loc_419345;");
    asm("loc_419334: pushl 0x14(%ebp);");
    asm("loc_419337: pushl 0x10(%ebp);");
    asm("loc_41933A: pushl 0xC(%ebp);");
    asm("loc_41933D: pushl 8(%ebp);");
    asm("loc_419340: call _sub_419346;");
    asm("loc_419345: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419346() // ?__ArrayUnwind@@YGXPAXIHP6EX0@Z@Z
{
    __DEBUG_ASM(419346);
    // chunk 0x419346 _sub_419346
    asm("loc_419346: push %ebp;");
    asm("loc_419347: mov %esp,%ebp;");
    asm("loc_419349: push $0xFFFFFFFF;");
    asm("loc_41934B: push $_data_41EA30;");
    asm("loc_419350: push $_sub_419452;");
    asm("loc_419355: mov %fs:0,%eax;");
    asm("loc_41935B: push %eax;");
    asm("loc_41935C: mov %esp,%fs:0;");
    asm("loc_419363: push %ecx;");
    asm("loc_419364: push %ecx;");
    asm("loc_419365: push %ebx;");
    asm("loc_419366: push %esi;");
    asm("loc_419367: push %edi;");
    asm("loc_419368: mov %esp,-0x18(%ebp);");
    asm("loc_41936B: andl $0,-4(%ebp);");
    asm("loc_41936F: decl 0x10(%ebp);");
    asm("loc_419372: js loc_41938F;");
    asm("loc_419374: mov 8(%ebp),%ecx;");
    asm("loc_419377: sub 0xC(%ebp),%ecx;");
    asm("loc_41937A: mov %ecx,8(%ebp);");
    asm("loc_41937D: calll *0x14(%ebp);");
    asm("loc_419380: jmp loc_41936F;");
    asm("loc_419382: pushl -0x14(%ebp);");
    asm("loc_419385: call _sub_4193A4;");
    asm("loc_41938A: pop %ecx;");
    asm("loc_41938B: ret;");
    asm("loc_41938C: mov -0x18(%ebp),%esp;");
    asm("loc_41938F: orl $0xFFFFFFFF,-4(%ebp);");
    asm("loc_419393: mov -0x10(%ebp),%ecx;");
    asm("loc_419396: mov %ecx,%fs:0;");
    asm("loc_41939D: pop %edi;");
    asm("loc_41939E: pop %esi;");
    asm("loc_41939F: pop %ebx;");
    asm("loc_4193A0: leave;");
    asm("loc_4193A1: ret $0x10;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4193A4() // _unknown_libname_2
{
    __DEBUG_ASM(4193A4);
    // chunk 0x4193A4 _sub_4193A4
    asm("loc_4193A4: mov 4(%esp),%eax;");
    asm("loc_4193A8: mov (%eax),%eax;");
    asm("loc_4193AA: cmpl $0xE06D7363,(%eax);");
    asm("loc_4193B0: je loc_4193B5;");
    asm("loc_4193B2: xor %eax,%eax;");
    asm("loc_4193B4: ret;");
    asm("loc_4193B5: jmp _sub_419642;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4193BA() // _wcslen
{
    __DEBUG_ASM(4193BA);
    // chunk 0x4193BA _sub_4193BA
    asm("loc_4193BA: jmpl *_import_41B8F4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4193C0() // __CxxFrameHandler
{
    __DEBUG_ASM(4193C0);
    // chunk 0x4193C0 _sub_4193C0
    asm("loc_4193C0: jmpl *_import_41B954;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4193C6() // _makepath
{
    __DEBUG_ASM(4193C6);
    // chunk 0x4193C6 _sub_4193C6
    asm("loc_4193C6: jmpl *_import_41B958;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4193CC() // _splitpath
{
    __DEBUG_ASM(4193CC);
    // chunk 0x4193CC _sub_4193CC
    asm("loc_4193CC: jmpl *_import_41B95C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4193D2() // _mbsnbcpy
{
    __DEBUG_ASM(4193D2);
    // chunk 0x4193D2 _sub_4193D2
    asm("loc_4193D2: jmpl *_import_41B960;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4193D8() // _sprintf
{
    __DEBUG_ASM(4193D8);
    // chunk 0x4193D8 _sub_4193D8
    asm("loc_4193D8: jmpl *_import_41B964;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4193DE() // _strncpy
{
    __DEBUG_ASM(4193DE);
    // chunk 0x4193DE _sub_4193DE
    asm("loc_4193DE: jmpl *_import_41B968;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4193E4() // __onexit
{
    __DEBUG_ASM(4193E4);
    // chunk 0x4193E4 _sub_4193E4
    asm("loc_4193E4: cmpl $0xFFFFFFFF,_data_42A73C;");
    asm("loc_4193EB: jne loc_4193F9;");
    asm("loc_4193ED: pushl 4(%esp);");
    asm("loc_4193F1: calll *_import_41B928;");
    asm("loc_4193F7: pop %ecx;");
    asm("loc_4193F8: ret;");
    asm("loc_4193F9: push $_data_42A738;");
    asm("loc_4193FE: push $_data_42A73C;");
    asm("loc_419403: pushl 0xC(%esp);");
    asm("loc_419407: call _sub_419648;");
    asm("loc_41940C: add $0xC,%esp;");
    asm("loc_41940F: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419410() // _atexit
{
    __DEBUG_ASM(419410);
    // chunk 0x419410 _sub_419410
    asm("loc_419410: pushl 4(%esp);");
    asm("loc_419414: call _sub_4193E4;");
    asm("loc_419419: neg %eax;");
    asm("loc_41941B: sbb %eax,%eax;");
    asm("loc_41941D: pop %ecx;");
    asm("loc_41941E: neg %eax;");
    asm("loc_419420: dec %eax;");
    asm("loc_419421: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419422() // _memmove
{
    __DEBUG_ASM(419422);
    // chunk 0x419422 _sub_419422
    asm("loc_419422: jmpl *_import_41B96C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419428() // _fclose
{
    __DEBUG_ASM(419428);
    // chunk 0x419428 _sub_419428
    asm("loc_419428: jmpl *_import_41B970;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41942E() // _fread
{
    __DEBUG_ASM(41942E);
    // chunk 0x41942E _sub_41942E
    asm("loc_41942E: jmpl *_import_41B974;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419434() // _fopen
{
    __DEBUG_ASM(419434);
    // chunk 0x419434 _sub_419434
    asm("loc_419434: jmpl *_import_41B978;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41943A() // _fwrite
{
    __DEBUG_ASM(41943A);
    // chunk 0x41943A _sub_41943A
    asm("loc_41943A: jmpl *_import_41B97C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419440() // _atoi
{
    __DEBUG_ASM(419440);
    // chunk 0x419440 _sub_419440
    asm("loc_419440: jmpl *_import_41B980;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419446() // _wcscat
{
    __DEBUG_ASM(419446);
    // chunk 0x419446 _sub_419446
    asm("loc_419446: jmpl *_import_41B984;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41944C() // _wcscpy
{
    __DEBUG_ASM(41944C);
    // chunk 0x41944C _sub_41944C
    asm("loc_41944C: jmpl *_import_41B988;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419452() // _except_handler3
{
    __DEBUG_ASM(419452);
    // chunk 0x419452 _sub_419452
    asm("loc_419452: jmpl *_import_41B98C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419458() // _wcsncpy
{
    __DEBUG_ASM(419458);
    // chunk 0x419458 _sub_419458
    asm("loc_419458: jmpl *_import_41B990;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419460() // __alloca_probe
{
    __DEBUG_ASM(419460);
    // chunk 0x419460 _sub_419460
    asm("loc_419460: push %ecx;");
    asm("loc_419461: cmp $0x1000,%eax;");
    asm("loc_419466: lea 8(%esp),%ecx;");
    asm("loc_41946A: jb loc_419480;");
    asm("loc_41946C: sub $0x1000,%ecx;");
    asm("loc_419472: sub $0x1000,%eax;");
    asm("loc_419477: test %eax,(%ecx);");
    asm("loc_419479: cmp $0x1000,%eax;");
    asm("loc_41947E: jae loc_41946C;");
    asm("loc_419480: sub %eax,%ecx;");
    asm("loc_419482: mov %esp,%eax;");
    asm("loc_419484: test %eax,(%ecx);");
    asm("loc_419486: mov %ecx,%esp;");
    asm("loc_419488: mov (%eax),%ecx;");
    asm("loc_41948A: mov 4(%eax),%eax;");
    asm("loc_41948D: push %eax;");
    asm("loc_41948E: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419490() // _swprintf
{
    __DEBUG_ASM(419490);
    // chunk 0x419490 _sub_419490
    asm("loc_419490: jmpl *_import_41B994;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419496() // _control87
{
    __DEBUG_ASM(419496);
    // chunk 0x419496 _sub_419496
    asm("loc_419496: jmpl *_import_41B998;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41949C() // _controlfp
{
    __DEBUG_ASM(41949C);
    // chunk 0x41949C _sub_41949C
    asm("loc_41949C: jmpl *_import_41B99C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4194A2() // _clearfp
{
    __DEBUG_ASM(4194A2);
    // chunk 0x4194A2 _sub_4194A2
    asm("loc_4194A2: jmpl *_import_41B9A0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4194A8() // _free
{
    __DEBUG_ASM(4194A8);
    // chunk 0x4194A8 _sub_4194A8
    asm("loc_4194A8: jmpl *_import_41B9A4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4194AE() // _ftol
{
    __DEBUG_ASM(4194AE);
    // chunk 0x4194AE _sub_4194AE
    asm("loc_4194AE: jmpl *_import_41B9A8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4194B4() // _srand
{
    __DEBUG_ASM(4194B4);
    // chunk 0x4194B4 _sub_4194B4
    asm("loc_4194B4: jmpl *_import_41B9AC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4194BA() // _fprintf
{
    __DEBUG_ASM(4194BA);
    // chunk 0x4194BA _sub_4194BA
    asm("loc_4194BA: jmpl *_import_41B950;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4194C0() // _vsnprintf
{
    __DEBUG_ASM(4194C0);
    // chunk 0x4194C0 _sub_4194C0
    asm("loc_4194C0: jmpl *_import_41B948;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4194C6() // _malloc
{
    __DEBUG_ASM(4194C6);
    // chunk 0x4194C6 _sub_4194C6
    asm("loc_4194C6: jmpl *_import_41B944;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4194CC() // _fflush
{
    __DEBUG_ASM(4194CC);
    // chunk 0x4194CC _sub_4194CC
    asm("loc_4194CC: jmpl *_import_41B940;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4194D2() // _ftime
{
    __DEBUG_ASM(4194D2);
    // chunk 0x4194D2 _sub_4194D2
    asm("loc_4194D2: jmpl *_import_41B93C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4194D8() // _sscanf
{
    __DEBUG_ASM(4194D8);
    // chunk 0x4194D8 _sub_4194D8
    asm("loc_4194D8: jmpl *_import_41B938;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4194DE() // _time
{
    __DEBUG_ASM(4194DE);
    // chunk 0x4194DE _sub_4194DE
    asm("loc_4194DE: jmpl *_import_41B934;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4194E4() // _start
{
    __DEBUG_ASM(4194E4);
    // chunk 0x4194E4 _sub_4194E4
    asm("loc_4194E4: push %ebp;");
    asm("loc_4194E5: mov %esp,%ebp;");
    asm("loc_4194E7: push $0xFFFFFFFF;");
    asm("loc_4194E9: push $_data_41EA40;");
    asm("loc_4194EE: push $_sub_419452;");
    asm("loc_4194F3: mov %fs:0,%eax;");
    asm("loc_4194F9: push %eax;");
    asm("loc_4194FA: mov %esp,%fs:0;");
    asm("loc_419501: sub $0x68,%esp;");
    asm("loc_419504: push %ebx;");
    asm("loc_419505: push %esi;");
    asm("loc_419506: push %edi;");
    asm("loc_419507: mov %esp,-0x18(%ebp);");
    asm("loc_41950A: xor %ebx,%ebx;");
    asm("loc_41950C: mov %ebx,-4(%ebp);");
    asm("loc_41950F: push $2;");
    asm("loc_419511: calll *_import_41B900;");
    asm("loc_419517: pop %ecx;");
    asm("loc_419518: orl $0xFFFFFFFF,_data_42A738;");
    asm("loc_41951F: orl $0xFFFFFFFF,_data_42A73C;");
    asm("loc_419526: calll *_import_41B904;");
    asm("loc_41952C: mov _data_42A72C,%ecx;");
    asm("loc_419532: mov %ecx,(%eax);");
    asm("loc_419534: calll *_import_41B908;");
    asm("loc_41953A: mov _data_42A728,%ecx;");
    asm("loc_419540: mov %ecx,(%eax);");
    asm("loc_419542: mov _import_41B90C,%eax;");
    asm("loc_419547: mov (%eax),%eax;");
    asm("loc_419549: mov %eax,_data_42A734;");
    asm("loc_41954E: call _sub_419687;");
    asm("loc_419553: cmp %ebx,_data_425EF0;");
    asm("loc_419559: jne loc_419567;");
    asm("loc_41955B: push $_sub_419684;");
    asm("loc_419560: calll *_import_41B910;");
    asm("loc_419566: pop %ecx;");
    asm("loc_419567: call _sub_41966C;");
    asm("loc_41956C: push $_data_425400;");
    asm("loc_419571: push $_data_4253FC;");
    asm("loc_419576: call _sub_419666;");
    asm("loc_41957B: mov _data_42A724,%eax;");
    asm("loc_419580: mov %eax,-0x6C(%ebp);");
    asm("loc_419583: lea -0x6C(%ebp),%eax;");
    asm("loc_419586: push %eax;");
    asm("loc_419587: pushl _data_42A720;");
    asm("loc_41958D: lea -0x64(%ebp),%eax;");
    asm("loc_419590: push %eax;");
    asm("loc_419591: lea -0x70(%ebp),%eax;");
    asm("loc_419594: push %eax;");
    asm("loc_419595: lea -0x60(%ebp),%eax;");
    asm("loc_419598: push %eax;");
    asm("loc_419599: calll *_import_41B914;");
    asm("loc_41959F: push $_data_4253F8;");
    asm("loc_4195A4: push $_data_425000;");
    asm("loc_4195A9: call _sub_419666;");
    asm("loc_4195AE: add $0x24,%esp;");
    asm("loc_4195B1: mov _import_41B918,%eax;");
    asm("loc_4195B6: mov (%eax),%esi;");
    asm("loc_4195B8: mov %esi,-0x74(%ebp);");
    asm("loc_4195BB: cmpb $0x22,(%esi);");
    asm("loc_4195BE: jne loc_4195FA;");
    asm("loc_4195C0: inc %esi;");
    asm("loc_4195C1: mov %esi,-0x74(%ebp);");
    asm("loc_4195C4: mov (%esi),%al;");
    asm("loc_4195C6: cmp %bl,%al;");
    asm("loc_4195C8: je loc_4195CE;");
    asm("loc_4195CA: cmp $0x22,%al;");
    asm("loc_4195CC: jne loc_4195C0;");
    asm("loc_4195CE: cmpb $0x22,(%esi);");
    asm("loc_4195D1: jne loc_4195D7;");
    asm("loc_4195D3: inc %esi;");
    asm("loc_4195D4: mov %esi,-0x74(%ebp);");
    asm("loc_4195D7: mov (%esi),%al;");
    asm("loc_4195D9: cmp %bl,%al;");
    asm("loc_4195DB: je loc_4195E1;");
    asm("loc_4195DD: cmp $0x20,%al;");
    asm("loc_4195DF: jbe loc_4195D3;");
    asm("loc_4195E1: mov %ebx,-0x30(%ebp);");
    asm("loc_4195E4: lea -0x5C(%ebp),%eax;");
    asm("loc_4195E7: push %eax;");
    asm("loc_4195E8: calll *_import_41B17C;");
    asm("loc_4195EE: testb $1,-0x30(%ebp);");
    asm("loc_4195F2: je loc_419605;");
    asm("loc_4195F4: movzwl -0x2C(%ebp),%eax;");
    asm("loc_4195F8: jmp loc_419608;");
    asm("loc_4195FA: cmpb $0x20,(%esi);");
    asm("loc_4195FD: jbe loc_4195D7;");
    asm("loc_4195FF: inc %esi;");
    asm("loc_419600: mov %esi,-0x74(%ebp);");
    asm("loc_419603: jmp loc_4195FA;");
    asm("loc_419605: push $0xA;");
    asm("loc_419607: pop %eax;");
    asm("loc_419608: push %eax;");
    asm("loc_419609: push %esi;");
    asm("loc_41960A: push %ebx;");
    asm("loc_41960B: push %ebx;");
    asm("loc_41960C: calll *_import_41B164;");
    asm("loc_419612: push %eax;");
    asm("loc_419613: call _sub_419960;");
    asm("loc_419618: mov %eax,-0x68(%ebp);");
    asm("loc_41961B: push %eax;");
    asm("loc_41961C: calll *_import_41B91C;");
    asm("loc_419622: mov -0x14(%ebp),%eax;");
    asm("loc_419625: mov (%eax),%ecx;");
    asm("loc_419627: mov (%ecx),%ecx;");
    asm("loc_419629: mov %ecx,-0x78(%ebp);");
    asm("loc_41962C: push %eax;");
    asm("loc_41962D: push %ecx;");
    asm("loc_41962E: call _sub_419654;");
    asm("loc_419633: pop %ecx;");
    asm("loc_419634: pop %ecx;");
    asm("loc_419635: ret;");
    asm("loc_419636: mov -0x18(%ebp),%esp;");
    asm("loc_419639: pushl -0x78(%ebp);");
    asm("loc_41963C: calll *_import_41B924;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419642() // ?terminate@@YAXXZ
{
    __DEBUG_ASM(419642);
    // chunk 0x419642 _sub_419642
    asm("loc_419642: jmpl *_import_41B930;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419648() // __dllonexit
{
    __DEBUG_ASM(419648);
    // chunk 0x419648 _sub_419648
    asm("loc_419648: jmpl *_import_41B92C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41964E() // _exit
{
    __DEBUG_ASM(41964E);
    // chunk 0x41964E _sub_41964E
    asm("loc_41964E: jmpl *_import_41B924;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419654() // _XcptFilter
{
    __DEBUG_ASM(419654);
    // chunk 0x419654 _sub_419654
    asm("loc_419654: jmpl *_import_41B920;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41965A() // __exit
{
    __DEBUG_ASM(41965A);
    // chunk 0x41965A _sub_41965A
    asm("loc_41965A: jmpl *_import_41B91C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419660() // __getmainargs
{
    __DEBUG_ASM(419660);
    // chunk 0x419660 _sub_419660
    asm("loc_419660: jmpl *_import_41B914;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419666() // _initterm
{
    __DEBUG_ASM(419666);
    // chunk 0x419666 _sub_419666
    asm("loc_419666: jmpl *_import_41B8F0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41966C() // __setdefaultprecision
{
    __DEBUG_ASM(41966C);
    // chunk 0x41966C _sub_41966C
    asm("loc_41966C: push $0x30000;");
    asm("loc_419671: push $0x10000;");
    asm("loc_419676: call _sub_41949C;");
    asm("loc_41967B: pop %ecx;");
    asm("loc_41967C: pop %ecx;");
    asm("loc_41967D: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41967E() // __setusermatherr
{
    __DEBUG_ASM(41967E);
    // chunk 0x41967E _sub_41967E
    asm("loc_41967E: jmpl *_import_41B910;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419684() // _UserMathErrorFunction
{
    __DEBUG_ASM(419684);
    // chunk 0x419684 _sub_419684
    asm("loc_419684: xor %eax,%eax;");
    asm("loc_419686: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419687() // _nullsub_1
{
    __DEBUG_ASM(419687);
    // chunk 0x419687 _sub_419687
    asm("loc_419687: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419688() // __p__commode
{
    __DEBUG_ASM(419688);
    // chunk 0x419688 _sub_419688
    asm("loc_419688: jmpl *_import_41B908;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41968E() // __p__fmode
{
    __DEBUG_ASM(41968E);
    // chunk 0x41968E _sub_41968E
    asm("loc_41968E: jmpl *_import_41B904;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419694() // __set_app_type
{
    __DEBUG_ASM(419694);
    // chunk 0x419694 _sub_419694
    asm("loc_419694: jmpl *_import_41B900;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41969A() // _CloseHandle
{
    __DEBUG_ASM(41969A);
    // chunk 0x41969A _sub_41969A
    asm("loc_41969A: jmpl *_import_41B1BC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4196A0() // _MultiByteToWideChar
{
    __DEBUG_ASM(4196A0);
    // chunk 0x4196A0 _sub_4196A0
    asm("loc_4196A0: jmpl *_import_41B1B8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4196A6() // _WaitForSingleObject
{
    __DEBUG_ASM(4196A6);
    // chunk 0x4196A6 _sub_4196A6
    asm("loc_4196A6: jmpl *_import_41B1B4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4196AC() // _CreateProcessA
{
    __DEBUG_ASM(4196AC);
    // chunk 0x4196AC _sub_4196AC
    asm("loc_4196AC: jmpl *_import_41B1B0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4196B2() // _GetTempPathA
{
    __DEBUG_ASM(4196B2);
    // chunk 0x4196B2 _sub_4196B2
    asm("loc_4196B2: jmpl *_import_41B1AC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4196B8() // _UnmapViewOfFile
{
    __DEBUG_ASM(4196B8);
    // chunk 0x4196B8 _sub_4196B8
    asm("loc_4196B8: jmpl *_import_41B1A8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4196BE() // _ReleaseMutex
{
    __DEBUG_ASM(4196BE);
    // chunk 0x4196BE _sub_4196BE
    asm("loc_4196BE: jmpl *_import_41B1A4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4196C4() // _SetEvent
{
    __DEBUG_ASM(4196C4);
    // chunk 0x4196C4 _sub_4196C4
    asm("loc_4196C4: jmpl *_import_41B1A0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4196CA() // _GetModuleFileNameA
{
    __DEBUG_ASM(4196CA);
    // chunk 0x4196CA _sub_4196CA
    asm("loc_4196CA: jmpl *_import_41B19C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4196D0() // _GetCurrentThreadId
{
    __DEBUG_ASM(4196D0);
    // chunk 0x4196D0 _sub_4196D0
    asm("loc_4196D0: jmpl *_import_41B198;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4196D6() // _GetCurrentProcessId
{
    __DEBUG_ASM(4196D6);
    // chunk 0x4196D6 _sub_4196D6
    asm("loc_4196D6: jmpl *_import_41B194;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4196DC() // _DuplicateHandle
{
    __DEBUG_ASM(4196DC);
    // chunk 0x4196DC _sub_4196DC
    asm("loc_4196DC: jmpl *_import_41B190;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4196E2() // _GetCurrentProcess
{
    __DEBUG_ASM(4196E2);
    // chunk 0x4196E2 _sub_4196E2
    asm("loc_4196E2: jmpl *_import_41B18C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4196E8() // _CreateMutexA
{
    __DEBUG_ASM(4196E8);
    // chunk 0x4196E8 _sub_4196E8
    asm("loc_4196E8: jmpl *_import_41B188;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4196EE() // _CreateEventA
{
    __DEBUG_ASM(4196EE);
    // chunk 0x4196EE _sub_4196EE
    asm("loc_4196EE: jmpl *_import_41B184;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4196F4() // _MapViewOfFile
{
    __DEBUG_ASM(4196F4);
    // chunk 0x4196F4 _sub_4196F4
    asm("loc_4196F4: jmpl *_import_41B180;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4196FA() // _CreateFileMappingA
{
    __DEBUG_ASM(4196FA);
    // chunk 0x4196FA _sub_4196FA
    asm("loc_4196FA: jmpl *_import_41B1C0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419700() // _SetUnhandledExceptionFilter
{
    __DEBUG_ASM(419700);
    // chunk 0x419700 _sub_419700
    asm("loc_419700: jmpl *_import_41B178;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419706() // _Sleep
{
    __DEBUG_ASM(419706);
    // chunk 0x419706 _sub_419706
    asm("loc_419706: jmpl *_import_41B174;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41970C() // _FreeLibrary
{
    __DEBUG_ASM(41970C);
    // chunk 0x41970C _sub_41970C
    asm("loc_41970C: jmpl *_import_41B170;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419712() // _ResumeThread
{
    __DEBUG_ASM(419712);
    // chunk 0x419712 _sub_419712
    asm("loc_419712: jmpl *_import_41B16C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419718() // _TerminateThread
{
    __DEBUG_ASM(419718);
    // chunk 0x419718 _sub_419718
    asm("loc_419718: jmpl *_import_41B168;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41971E() // _GetModuleHandleA
{
    __DEBUG_ASM(41971E);
    // chunk 0x41971E _sub_41971E
    asm("loc_41971E: jmpl *_import_41B164;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419724() // _GetFileAttributesA
{
    __DEBUG_ASM(419724);
    // chunk 0x419724 _sub_419724
    asm("loc_419724: jmpl *_import_41B160;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41972A() // _GetProcAddress
{
    __DEBUG_ASM(41972A);
    // chunk 0x41972A _sub_41972A
    asm("loc_41972A: jmpl *_import_41B15C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419730() // _LoadLibraryA
{
    __DEBUG_ASM(419730);
    // chunk 0x419730 _sub_419730
    asm("loc_419730: jmpl *_import_41B158;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419736() // _CreateThread
{
    __DEBUG_ASM(419736);
    // chunk 0x419736 _sub_419736
    asm("loc_419736: jmpl *_import_41B154;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41973C() // _GetExitCodeThread
{
    __DEBUG_ASM(41973C);
    // chunk 0x41973C _sub_41973C
    asm("loc_41973C: jmpl *_import_41B150;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419742() // _SleepEx
{
    __DEBUG_ASM(419742);
    // chunk 0x419742 _sub_419742
    asm("loc_419742: jmpl *_import_41B14C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419748() // _OutputDebugStringA
{
    __DEBUG_ASM(419748);
    // chunk 0x419748 _sub_419748
    asm("loc_419748: jmpl *_import_41B148;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41974E() // _LockResource
{
    __DEBUG_ASM(41974E);
    // chunk 0x41974E _sub_41974E
    asm("loc_41974E: jmpl *_import_41B144;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419754() // _LoadResource
{
    __DEBUG_ASM(419754);
    // chunk 0x419754 _sub_419754
    asm("loc_419754: jmpl *_import_41B140;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41975A() // _FindResourceA
{
    __DEBUG_ASM(41975A);
    // chunk 0x41975A _sub_41975A
    asm("loc_41975A: jmpl *_import_41B138;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419760() // _MulDiv
{
    __DEBUG_ASM(419760);
    // chunk 0x419760 _sub_419760
    asm("loc_419760: jmpl *_import_41B134;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419766() // _FindResourceExA
{
    __DEBUG_ASM(419766);
    // chunk 0x419766 _sub_419766
    asm("loc_419766: jmpl *_import_41B13C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41976C() // _GetStartupInfoA
{
    __DEBUG_ASM(41976C);
    // chunk 0x41976C _sub_41976C
    asm("loc_41976C: jmpl *_import_41B17C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419772() // _EnableWindow
{
    __DEBUG_ASM(419772);
    // chunk 0x419772 _sub_419772
    asm("loc_419772: jmpl *_import_41BBF0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419778() // _BringWindowToTop
{
    __DEBUG_ASM(419778);
    // chunk 0x419778 _sub_419778
    asm("loc_419778: jmpl *_import_41BBEC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41977E() // _SendMessageA
{
    __DEBUG_ASM(41977E);
    // chunk 0x41977E _sub_41977E
    asm("loc_41977E: jmpl *_import_41BBE8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419784() // _SetTimer
{
    __DEBUG_ASM(419784);
    // chunk 0x419784 _sub_419784
    asm("loc_419784: jmpl *_import_41BC18;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41978A() // _GetWindowRect
{
    __DEBUG_ASM(41978A);
    // chunk 0x41978A _sub_41978A
    asm("loc_41978A: jmpl *_import_41BC14;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419790() // _GetClientRect
{
    __DEBUG_ASM(419790);
    // chunk 0x419790 _sub_419790
    asm("loc_419790: jmpl *_import_41BC10;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419796() // _IsWindow
{
    __DEBUG_ASM(419796);
    // chunk 0x419796 _sub_419796
    asm("loc_419796: jmpl *_import_41BC0C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41979C() // _wsprintfA
{
    __DEBUG_ASM(41979C);
    // chunk 0x41979C _sub_41979C
    asm("loc_41979C: jmpl *_import_41BC08;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4197A2() // _PeekMessageA
{
    __DEBUG_ASM(4197A2);
    // chunk 0x4197A2 _sub_4197A2
    asm("loc_4197A2: jmpl *_import_41BC04;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4197A8() // _RedrawWindow
{
    __DEBUG_ASM(4197A8);
    // chunk 0x4197A8 _sub_4197A8
    asm("loc_4197A8: jmpl *_import_41BC00;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4197AE() // _UpdateWindow
{
    __DEBUG_ASM(4197AE);
    // chunk 0x4197AE _sub_4197AE
    asm("loc_4197AE: jmpl *_import_41BBFC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4197B4() // _MessageBoxA
{
    __DEBUG_ASM(4197B4);
    // chunk 0x4197B4 _sub_4197B4
    asm("loc_4197B4: jmpl *_import_41BBF8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4197BA() // _MsgWaitForMultipleObjects
{
    __DEBUG_ASM(4197BA);
    // chunk 0x4197BA _sub_4197BA
    asm("loc_4197BA: jmpl *_import_41BBF4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4197C0() // _InvalidateRect
{
    __DEBUG_ASM(4197C0);
    // chunk 0x4197C0 _sub_4197C0
    asm("loc_4197C0: jmpl *_import_41BBB4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4197C6() // _SetWindowLongA
{
    __DEBUG_ASM(4197C6);
    // chunk 0x4197C6 _sub_4197C6
    asm("loc_4197C6: jmpl *_import_41BBB8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4197CC() // _GetWindowLongA
{
    __DEBUG_ASM(4197CC);
    // chunk 0x4197CC _sub_4197CC
    asm("loc_4197CC: jmpl *_import_41BBBC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4197D2() // _ReleaseDC
{
    __DEBUG_ASM(4197D2);
    // chunk 0x4197D2 _sub_4197D2
    asm("loc_4197D2: jmpl *_import_41BBE4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4197D8() // _GetDC
{
    __DEBUG_ASM(4197D8);
    // chunk 0x4197D8 _sub_4197D8
    asm("loc_4197D8: jmpl *_import_41BBE0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4197DE() // _LoadImageA
{
    __DEBUG_ASM(4197DE);
    // chunk 0x4197DE _sub_4197DE
    asm("loc_4197DE: jmpl *_import_41BBDC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4197E4() // _KillTimer
{
    __DEBUG_ASM(4197E4);
    // chunk 0x4197E4 _sub_4197E4
    asm("loc_4197E4: jmpl *_import_41BBD8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4197EA() // _GetSysColor
{
    __DEBUG_ASM(4197EA);
    // chunk 0x4197EA _sub_4197EA
    asm("loc_4197EA: jmpl *_import_41BBD4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4197F0() // _FillRect
{
    __DEBUG_ASM(4197F0);
    // chunk 0x4197F0 _sub_4197F0
    asm("loc_4197F0: jmpl *_import_41BBD0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4197F6() // _CopyRect
{
    __DEBUG_ASM(4197F6);
    // chunk 0x4197F6 _sub_4197F6
    asm("loc_4197F6: jmpl *_import_41BBCC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4197FC() // _DeleteMenu
{
    __DEBUG_ASM(4197FC);
    // chunk 0x4197FC _sub_4197FC
    asm("loc_4197FC: jmpl *_import_41BBC8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419802() // _GetMenu
{
    __DEBUG_ASM(419802);
    // chunk 0x419802 _sub_419802
    asm("loc_419802: jmpl *_import_41BBC4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419808() // _GetFocus
{
    __DEBUG_ASM(419808);
    // chunk 0x419808 _sub_419808
    asm("loc_419808: jmpl *_import_41BBC0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41980E() // _GetTextMetricsA
{
    __DEBUG_ASM(41980E);
    // chunk 0x41980E _sub_41980E
    asm("loc_41980E: jmpl *_import_41B124;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419814() // _CreateCompatibleDC
{
    __DEBUG_ASM(419814);
    // chunk 0x419814 _sub_419814
    asm("loc_419814: jmpl *_import_41B120;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41981A() // _CreateHalftonePalette
{
    __DEBUG_ASM(41981A);
    // chunk 0x41981A _sub_41981A
    asm("loc_41981A: jmpl *_import_41B11C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419820() // _DeleteDC
{
    __DEBUG_ASM(419820);
    // chunk 0x419820 _sub_419820
    asm("loc_419820: jmpl *_import_41B118;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419826() // _CreatePalette
{
    __DEBUG_ASM(419826);
    // chunk 0x419826 _sub_419826
    asm("loc_419826: jmpl *_import_41B114;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41982C() // _GetDIBColorTable
{
    __DEBUG_ASM(41982C);
    // chunk 0x41982C _sub_41982C
    asm("loc_41982C: jmpl *_import_41B110;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419832() // _SelectObject
{
    __DEBUG_ASM(419832);
    // chunk 0x419832 _sub_419832
    asm("loc_419832: jmpl *_import_41B10C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419838() // _GetObjectA
{
    __DEBUG_ASM(419838);
    // chunk 0x419838 _sub_419838
    asm("loc_419838: jmpl *_import_41B0F0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41983E() // _CreateSolidBrush
{
    __DEBUG_ASM(41983E);
    // chunk 0x41983E _sub_41983E
    asm("loc_41983E: jmpl *_import_41B108;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419844() // _CreateDIBPatternBrushPt
{
    __DEBUG_ASM(419844);
    // chunk 0x419844 _sub_419844
    asm("loc_419844: jmpl *_import_41B104;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41984A() // _CreateFontIndirectA
{
    __DEBUG_ASM(41984A);
    // chunk 0x41984A _sub_41984A
    asm("loc_41984A: jmpl *_import_41B100;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419850() // _GetDeviceCaps
{
    __DEBUG_ASM(419850);
    // chunk 0x419850 _sub_419850
    asm("loc_419850: jmpl *_import_41B0FC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419856() // _TextOutW
{
    __DEBUG_ASM(419856);
    // chunk 0x419856 _sub_419856
    asm("loc_419856: jmpl *_import_41B0F8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41985C() // _GetTextExtentPoint32A
{
    __DEBUG_ASM(41985C);
    // chunk 0x41985C _sub_41985C
    asm("loc_41985C: jmpl *_import_41B0F4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419862() // _RegCloseKey
{
    __DEBUG_ASM(419862);
    // chunk 0x419862 _sub_419862
    asm("loc_419862: jmpl *_import_41B004;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419868() // _RegQueryValueExA
{
    __DEBUG_ASM(419868);
    // chunk 0x419868 _sub_419868
    asm("loc_419868: jmpl *_import_41B008;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41986E() // _RegOpenKeyExA
{
    __DEBUG_ASM(41986E);
    // chunk 0x41986E _sub_41986E
    asm("loc_41986E: jmpl *_import_41B000;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419874() // _CoUninitialize
{
    __DEBUG_ASM(419874);
    // chunk 0x419874 _sub_419874
    asm("loc_419874: jmpl *_import_41BC28;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41987A() // _CoInitialize
{
    __DEBUG_ASM(41987A);
    // chunk 0x41987A _sub_41987A
    asm("loc_41987A: jmpl *_import_41BC2C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419880() // ??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@XZ
{
    __DEBUG_ASM(419880);
    // chunk 0x419880 _sub_419880
    asm("loc_419880: jmpl *_import_41B880;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419886() // ??1?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QAE@XZ
{
    __DEBUG_ASM(419886);
    // chunk 0x419886 _sub_419886
    asm("loc_419886: jmpl *_import_41B87C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41988C() // ?_Grow@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AAE_NI_N@Z
{
    __DEBUG_ASM(41988C);
    // chunk 0x41988C _sub_41988C
    asm("loc_41988C: jmpl *_import_41B878;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419892() // ?_Grow@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AAE_NI_N@Z
{
    __DEBUG_ASM(419892);
    // chunk 0x419892 _sub_419892
    asm("loc_419892: jmpl *_import_41B874;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419898() // ?_Tidy@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AAEX_N@Z
{
    __DEBUG_ASM(419898);
    // chunk 0x419898 _sub_419898
    asm("loc_419898: jmpl *_import_41B870;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41989E() // ?_Tidy@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AAEX_N@Z
{
    __DEBUG_ASM(41989E);
    // chunk 0x41989E _sub_41989E
    asm("loc_41989E: jmpl *_import_41B86C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4198A4() // ??1?$basic_filebuf@DU?$char_traits@D@std@@@std@@UAE@XZ
{
    __DEBUG_ASM(4198A4);
    // chunk 0x4198A4 _sub_4198A4
    asm("loc_4198A4: jmpl *_import_41B868;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4198AA() // ??1?$basic_streambuf@DU?$char_traits@D@std@@@std@@UAE@XZ
{
    __DEBUG_ASM(4198AA);
    // chunk 0x4198AA _sub_4198AA
    asm("loc_4198AA: jmpl *_import_41B864;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4198B0() // ??1locale@std@@QAE@XZ
{
    __DEBUG_ASM(4198B0);
    // chunk 0x4198B0 _sub_4198B0
    asm("loc_4198B0: jmpl *_import_41B860;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4198B6() // ??1?$basic_ostream@DU?$char_traits@D@std@@@std@@UAE@XZ
{
    __DEBUG_ASM(4198B6);
    // chunk 0x4198B6 _sub_4198B6
    asm("loc_4198B6: jmpl *_import_41B85C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4198BC() // ??1?$basic_ios@DU?$char_traits@D@std@@@std@@UAE@XZ
{
    __DEBUG_ASM(4198BC);
    // chunk 0x4198BC _sub_4198BC
    asm("loc_4198BC: jmpl *_import_41B858;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4198C2() // ?clear@ios_base@std@@QAEXH_N@Z
{
    __DEBUG_ASM(4198C2);
    // chunk 0x4198C2 _sub_4198C2
    asm("loc_4198C2: jmpl *_import_41B854;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4198C8() // ?_Initcvt@?$basic_filebuf@DU?$char_traits@D@std@@@std@@IAEXXZ
{
    __DEBUG_ASM(4198C8);
    // chunk 0x4198C8 _sub_4198C8
    asm("loc_4198C8: jmpl *_import_41B850;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4198CE() // ?__Fiopen@std@@YAPAU_iobuf@@PBDH@Z
{
    __DEBUG_ASM(4198CE);
    // chunk 0x4198CE _sub_4198CE
    asm("loc_4198CE: jmpl *_import_41B84C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4198D4() // ?_Init@?$basic_filebuf@DU?$char_traits@D@std@@@std@@IAEXPAU_iobuf@@W4_Initfl@12@@Z
{
    __DEBUG_ASM(4198D4);
    // chunk 0x4198D4 _sub_4198D4
    asm("loc_4198D4: jmpl *_import_41B840;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4198DA() // ?_Init@?$basic_streambuf@DU?$char_traits@D@std@@@std@@IAEXXZ
{
    __DEBUG_ASM(4198DA);
    // chunk 0x4198DA _sub_4198DA
    asm("loc_4198DA: jmpl *_import_41B838;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4198E0() // ??0locale@std@@QAE@XZ
{
    __DEBUG_ASM(4198E0);
    // chunk 0x4198E0 _sub_4198E0
    asm("loc_4198E0: jmpl *_import_41B82C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4198E6() // ?init@?$basic_ios@DU?$char_traits@D@std@@@std@@IAEXPAV?$basic_streambuf@DU?$char_traits@D@std@@@2@_N@Z
{
    __DEBUG_ASM(4198E6);
    // chunk 0x4198E6 _sub_4198E6
    asm("loc_4198E6: jmpl *_import_41B884;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4198EC() // ??1?$basic_ofstream@DU?$char_traits@D@std@@@std@@UAE@XZ
{
    __DEBUG_ASM(4198EC);
    // chunk 0x4198EC _sub_4198EC
    asm("loc_4198EC: jmpl *_import_41B844;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4198F2() // ?write@?$basic_ostream@DU?$char_traits@D@std@@@std@@QAEAAV12@PBDH@Z
{
    __DEBUG_ASM(4198F2);
    // chunk 0x4198F2 _sub_4198F2
    asm("loc_4198F2: jmpl *_import_41B898;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4198F8() // ?_Copy@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AAEXI@Z
{
    __DEBUG_ASM(4198F8);
    // chunk 0x4198F8 _sub_4198F8
    asm("loc_4198F8: jmpl *_import_41B89C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4198FE() // ?_Xlen@std@@YAXXZ
{
    __DEBUG_ASM(4198FE);
    // chunk 0x4198FE _sub_4198FE
    asm("loc_4198FE: jmpl *_import_41B8A0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419904() // ?_Copy@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AAEXI@Z
{
    __DEBUG_ASM(419904);
    // chunk 0x419904 _sub_419904
    asm("loc_419904: jmpl *_import_41B8A4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41990A() // ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAEAAV12@ABV12@II@Z
{
    __DEBUG_ASM(41990A);
    // chunk 0x41990A _sub_41990A
    asm("loc_41990A: jmpl *_import_41B8A8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419910() // ?_Eos@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AAEXI@Z
{
    __DEBUG_ASM(419910);
    // chunk 0x419910 _sub_419910
    asm("loc_419910: jmpl *_import_41B8B0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419916() // ?erase@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAEAAV12@II@Z
{
    __DEBUG_ASM(419916);
    // chunk 0x419916 _sub_419916
    asm("loc_419916: jmpl *_import_41B8B8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41991C() // ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QAEAAV12@ABV12@II@Z
{
    __DEBUG_ASM(41991C);
    // chunk 0x41991C _sub_41991C
    asm("loc_41991C: jmpl *_import_41B8BC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419922() // ?_Eos@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AAEXI@Z
{
    __DEBUG_ASM(419922);
    // chunk 0x419922 _sub_419922
    asm("loc_419922: jmpl *_import_41B8C4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419928() // ?erase@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QAEAAV12@II@Z
{
    __DEBUG_ASM(419928);
    // chunk 0x419928 _sub_419928
    asm("loc_419928: jmpl *_import_41B8CC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41992E() // ?_Xran@std@@YAXXZ
{
    __DEBUG_ASM(41992E);
    // chunk 0x41992E _sub_41992E
    asm("loc_41992E: jmpl *_import_41B8D0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419934() // ?_Split@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AAEXXZ
{
    __DEBUG_ASM(419934);
    // chunk 0x419934 _sub_419934
    asm("loc_419934: jmpl *_import_41B8C0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41993A() // ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAEAAV12@PBDI@Z
{
    __DEBUG_ASM(41993A);
    // chunk 0x41993A _sub_41993A
    asm("loc_41993A: jmpl *_import_41B8D4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419940() // ??8std@@YA_NABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@PBD@Z
{
    __DEBUG_ASM(419940);
    // chunk 0x419940 _sub_419940
    asm("loc_419940: jmpl *_import_41B8D8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419946() // ?_Split@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AAEXXZ
{
    __DEBUG_ASM(419946);
    // chunk 0x419946 _sub_419946
    asm("loc_419946: jmpl *_import_41B8DC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41994C() // ?_Freeze@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AAEXXZ
{
    __DEBUG_ASM(41994C);
    // chunk 0x41994C _sub_41994C
    asm("loc_41994C: jmpl *_import_41B8E0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419952() // ?compare@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QBEHIIPBGI@Z
{
    __DEBUG_ASM(419952);
    // chunk 0x419952 _sub_419952
    asm("loc_419952: jmpl *_import_41B8E4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419960() // _WinMain@16
{
    __DEBUG_ASM(419960);
    // chunk 0x419960 _sub_419960
    asm("loc_419960: pushl 0x10(%esp);");
    asm("loc_419964: pushl 0x10(%esp);");
    asm("loc_419968: pushl 0x10(%esp);");
    asm("loc_41996C: pushl 0x10(%esp);");
    asm("loc_419970: call _sub_4199CA;");
    asm("loc_419975: ret $0x10;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419978() // ?AfxInitialize@@YGHHK@Z
{
    __DEBUG_ASM(419978);
    // chunk 0x419978 _sub_419978
    asm("loc_419978: call _sub_418D80;");
    asm("loc_41997D: mov 4(%esp),%ecx;");
    asm("loc_419981: mov 8(%esp),%edx;");
    asm("loc_419985: test %ecx,%ecx;");
    asm("loc_419987: mov %cl,0x14(%eax);");
    asm("loc_41998A: mov %edx,0x1040(%eax);");
    asm("loc_419990: jne loc_41999B;");
    asm("loc_419992: push $0xFFFFFFFD;");
    asm("loc_419994: calll *_import_41B8EC;");
    asm("loc_41999A: pop %ecx;");
    asm("loc_41999B: push $1;");
    asm("loc_41999D: pop %eax;");
    asm("loc_41999E: ret $8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4199A1() // _sub_4199A1
{
    __DEBUG_ASM(4199A1);
    // chunk 0x4199A1 _sub_4199A1
    asm("loc_4199A1: jmp _sub_4199A6;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4199A6() // _sub_4199A6
{
    __DEBUG_ASM(4199A6);
    // chunk 0x4199A6 _sub_4199A6
    asm("loc_4199A6: push $0x600;");
    asm("loc_4199AB: push $0;");
    asm("loc_4199AD: call _sub_419978;");
    asm("loc_4199B2: mov %al,_data_42A730;");
    asm("loc_4199B7: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4199B8() // _wcslwr
{
    __DEBUG_ASM(4199B8);
    // chunk 0x4199B8 _sub_4199B8
    asm("loc_4199B8: jmpl *_import_41B8F8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4199BE() // _wcsnicmp
{
    __DEBUG_ASM(4199BE);
    // chunk 0x4199BE _sub_4199BE
    asm("loc_4199BE: jmpl *_import_41B8FC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4199C4() // _setmbcp
{
    __DEBUG_ASM(4199C4);
    // chunk 0x4199C4 _sub_4199C4
    asm("loc_4199C4: jmpl *_import_41B8EC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4199CA() // ?AfxWinMain@@YGHPAUHINSTANCE__@@0PADH@Z
{
    __DEBUG_ASM(4199CA);
    // chunk 0x4199CA _sub_4199CA
    asm("loc_4199CA: jmpl *_import_41B2DC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4199D0() // _sub_4199D0
{
    __DEBUG_ASM(4199D0);
    // chunk 0x4199D0 _sub_4199D0
    asm("loc_4199D0: mov -0x10(%ebp),%ecx;");
    asm("loc_4199D3: add $0x618,%ecx;");
    asm("loc_4199D9: jmpl *_import_41B87C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4199DF() // _sub_4199DF
{
    __DEBUG_ASM(4199DF);
    // chunk 0x4199DF _sub_4199DF
    asm("loc_4199DF: mov -0x10(%ebp),%ecx;");
    asm("loc_4199E2: add $0x738,%ecx;");
    asm("loc_4199E8: jmpl *_import_41B880;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4199EE() // _sub_4199EE
{
    __DEBUG_ASM(4199EE);
    // chunk 0x4199EE _sub_4199EE
    asm("loc_4199EE: mov -0x10(%ebp),%ecx;");
    asm("loc_4199F1: add $0x74C,%ecx;");
    asm("loc_4199F7: jmpl *_import_41B87C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_4199FD() // _sub_4199FD
{
    __DEBUG_ASM(4199FD);
    // chunk 0x4199FD _sub_4199FD
    asm("loc_4199FD: mov -0x10(%ebp),%ecx;");
    asm("loc_419A00: add $0x75C,%ecx;");
    asm("loc_419A06: jmpl *_import_41B87C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419A0C() // _sub_419A0C
{
    __DEBUG_ASM(419A0C);
    // chunk 0x419A0C _sub_419A0C
    asm("loc_419A0C: mov -0x10(%ebp),%ecx;");
    asm("loc_419A0F: add $0x770,%ecx;");
    asm("loc_419A15: jmp _sub_4023C0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419A1A() // _SEH_401440
{
    __DEBUG_ASM(419A1A);
    // chunk 0x419A1A _sub_419A1A
    asm("loc_419A1A: mov $_data_41EAA4,%eax;");
    asm("loc_419A1F: jmp _sub_4193C0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419A30() // _sub_419A30
{
    __DEBUG_ASM(419A30);
    // chunk 0x419A30 _sub_419A30
    asm("loc_419A30: mov -0x10(%ebp),%ecx;");
    asm("loc_419A33: add $0x618,%ecx;");
    asm("loc_419A39: jmpl *_import_41B87C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419A3F() // _sub_419A3F
{
    __DEBUG_ASM(419A3F);
    // chunk 0x419A3F _sub_419A3F
    asm("loc_419A3F: mov -0x10(%ebp),%ecx;");
    asm("loc_419A42: add $0x738,%ecx;");
    asm("loc_419A48: jmpl *_import_41B880;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419A4E() // _sub_419A4E
{
    __DEBUG_ASM(419A4E);
    // chunk 0x419A4E _sub_419A4E
    asm("loc_419A4E: mov -0x10(%ebp),%ecx;");
    asm("loc_419A51: add $0x74C,%ecx;");
    asm("loc_419A57: jmpl *_import_41B87C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419A5D() // _sub_419A5D
{
    __DEBUG_ASM(419A5D);
    // chunk 0x419A5D _sub_419A5D
    asm("loc_419A5D: mov -0x10(%ebp),%ecx;");
    asm("loc_419A60: add $0x75C,%ecx;");
    asm("loc_419A66: jmpl *_import_41B87C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419A6C() // _sub_419A6C
{
    __DEBUG_ASM(419A6C);
    // chunk 0x419A6C _sub_419A6C
    asm("loc_419A6C: mov -0x10(%ebp),%ecx;");
    asm("loc_419A6F: add $0x770,%ecx;");
    asm("loc_419A75: jmp _sub_4023C0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419A7A() // _SEH_401730
{
    __DEBUG_ASM(419A7A);
    // chunk 0x419A7A _sub_419A7A
    asm("loc_419A7A: mov $_data_41EAE8,%eax;");
    asm("loc_419A7F: jmp _sub_4193C0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419A90() // _sub_419A90
{
    __DEBUG_ASM(419A90);
    // chunk 0x419A90 _sub_419A90
    asm("loc_419A90: mov -0x14(%ebp),%eax;");
    asm("loc_419A93: push %eax;");
    asm("loc_419A94: call _sub_418978;");
    asm("loc_419A99: pop %ecx;");
    asm("loc_419A9A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419A9B() // _sub_419A9B
{
    __DEBUG_ASM(419A9B);
    // chunk 0x419A9B _sub_419A9B
    asm("loc_419A9B: mov -0x18(%ebp),%eax;");
    asm("loc_419A9E: and $1,%eax;");
    asm("loc_419AA1: test %eax,%eax;");
    asm("loc_419AA3: je loc_419AB5;");
    asm("loc_419AA9: mov -0x14(%ebp),%ecx;");
    asm("loc_419AAC: add $0x58,%ecx;");
    asm("loc_419AAF: jmpl *_import_41B858;");
    asm("loc_419AB5: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419AB6() // _sub_419AB6
{
    __DEBUG_ASM(419AB6);
    // chunk 0x419AB6 _sub_419AB6
    asm("loc_419AB6: mov -0x14(%ebp),%ecx;");
    asm("loc_419AB9: add $4,%ecx;");
    asm("loc_419ABC: jmpl *_import_41B85C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419AC2() // _sub_419AC2
{
    __DEBUG_ASM(419AC2);
    // chunk 0x419AC2 _sub_419AC2
    asm("loc_419AC2: mov -0x10(%ebp),%ecx;");
    asm("loc_419AC5: add $0x34,%ecx;");
    asm("loc_419AC8: jmpl *_import_41B860;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419ACE() // _sub_419ACE
{
    __DEBUG_ASM(419ACE);
    // chunk 0x419ACE _sub_419ACE
    asm("loc_419ACE: mov -0x10(%ebp),%ecx;");
    asm("loc_419AD1: jmpl *_import_41B864;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419AD7() // _sub_419AD7
{
    __DEBUG_ASM(419AD7);
    // chunk 0x419AD7 _sub_419AD7
    asm("loc_419AD7: mov -0x10(%ebp),%ecx;");
    asm("loc_419ADA: add $0x4C,%ecx;");
    asm("loc_419ADD: jmpl *_import_41B860;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419AE3() // _sub_419AE3
{
    __DEBUG_ASM(419AE3);
    // chunk 0x419AE3 _sub_419AE3
    asm("loc_419AE3: mov -0x14(%ebp),%ecx;");
    asm("loc_419AE6: add $4,%ecx;");
    asm("loc_419AE9: jmpl *_import_41B868;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419AEF() // _SEH_401A90
{
    __DEBUG_ASM(419AEF);
    // chunk 0x419AEF _sub_419AEF
    asm("loc_419AEF: mov $_data_41EB44,%eax;");
    asm("loc_419AF4: jmp _sub_4193C0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419B00() // _sub_419B00
{
    __DEBUG_ASM(419B00);
    // chunk 0x419B00 _sub_419B00
    asm("loc_419B00: lea -0x110(%ebp),%ecx;");
    asm("loc_419B06: jmp _sub_418AA4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419B0B() // _SEH_401FC0
{
    __DEBUG_ASM(419B0B);
    // chunk 0x419B0B _sub_419B0B
    asm("loc_419B0B: mov $_data_41EB68,%eax;");
    asm("loc_419B10: jmp _sub_4193C0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419B20() // _sub_419B20
{
    __DEBUG_ASM(419B20);
    // chunk 0x419B20 _sub_419B20
    asm("loc_419B20: mov -0x10(%ebp),%ecx;");
    asm("loc_419B23: add $8,%ecx;");
    asm("loc_419B26: jmp _sub_402C60;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419B2B() // ??0CPlayerGroup@@QAE@ABV0@@Z_SEH
{
    __DEBUG_ASM(419B2B);
    // chunk 0x419B2B _sub_419B2B
    asm("loc_419B2B: mov $_data_41EB8C,%eax;");
    asm("loc_419B30: jmp _sub_4193C0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419B40() // _sub_419B40
{
    __DEBUG_ASM(419B40);
    // chunk 0x419B40 _sub_419B40
    asm("loc_419B40: mov -0x10(%ebp),%ecx;");
    asm("loc_419B43: add $4,%ecx;");
    asm("loc_419B46: jmp _sub_403BD0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419B4B() // _sub_419B4B
{
    __DEBUG_ASM(419B4B);
    // chunk 0x419B4B _sub_419B4B
    asm("loc_419B4B: mov -0x10(%ebp),%ecx;");
    asm("loc_419B4E: add $0x14,%ecx;");
    asm("loc_419B51: jmpl *_import_41B880;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419B57() // ??0CAccount@@QAE@ABV0@@Z_SEH
{
    __DEBUG_ASM(419B57);
    // chunk 0x419B57 _sub_419B57
    asm("loc_419B57: mov $_data_41EBB8,%eax;");
    asm("loc_419B5C: jmp _sub_4193C0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419B70() // _sub_419B70
{
    __DEBUG_ASM(419B70);
    // chunk 0x419B70 _sub_419B70
    asm("loc_419B70: mov -0x10(%ebp),%ecx;");
    asm("loc_419B73: add $0x10,%ecx;");
    asm("loc_419B76: jmpl *_import_41B048;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419B7C() // _sub_419B7C
{
    __DEBUG_ASM(419B7C);
    // chunk 0x419B7C _sub_419B7C
    asm("loc_419B7C: mov -0x10(%ebp),%ecx;");
    asm("loc_419B7F: add $0x20,%ecx;");
    asm("loc_419B82: jmpl *_import_41B87C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419B88() // _sub_419B88
{
    __DEBUG_ASM(419B88);
    // chunk 0x419B88 _sub_419B88
    asm("loc_419B88: mov -0x10(%ebp),%ecx;");
    asm("loc_419B8B: add $0x30,%ecx;");
    asm("loc_419B8E: jmp _sub_403700;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419B93() // ??0PlayerDB@@QAE@ABV0@@Z_SEH
{
    __DEBUG_ASM(419B93);
    // chunk 0x419B93 _sub_419B93
    asm("loc_419B93: mov $_data_41EBEC,%eax;");
    asm("loc_419B98: jmp _sub_4193C0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419BA0() // _sub_419BA0
{
    __DEBUG_ASM(419BA0);
    // chunk 0x419BA0 _sub_419BA0
    asm("loc_419BA0: mov -0x10(%ebp),%ecx;");
    asm("loc_419BA3: jmp _sub_418A98;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419BA8() // _SEH_403800
{
    __DEBUG_ASM(419BA8);
    // chunk 0x419BA8 _sub_419BA8
    asm("loc_419BA8: mov $_data_41EC10,%eax;");
    asm("loc_419BAD: jmp _sub_4193C0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419BC0() // _sub_419BC0
{
    __DEBUG_ASM(419BC0);
    // chunk 0x419BC0 _sub_419BC0
    asm("loc_419BC0: mov -0x10(%ebp),%ecx;");
    asm("loc_419BC3: jmp _sub_418A98;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419BC8() // _SEH_403850
{
    __DEBUG_ASM(419BC8);
    // chunk 0x419BC8 _sub_419BC8
    asm("loc_419BC8: mov $_data_41EC34,%eax;");
    asm("loc_419BCD: jmp _sub_4193C0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419BE0() // _sub_419BE0
{
    __DEBUG_ASM(419BE0);
    // chunk 0x419BE0 _sub_419BE0
    asm("loc_419BE0: lea -0x1C(%ebp),%ecx;");
    asm("loc_419BE3: jmp _sub_403BD0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419BE8() // _sub_419BE8
{
    __DEBUG_ASM(419BE8);
    // chunk 0x419BE8 _sub_419BE8
    asm("loc_419BE8: mov -0x20(%ebp),%eax;");
    asm("loc_419BEB: push %eax;");
    asm("loc_419BEC: call _sub_403AF0;");
    asm("loc_419BF1: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419BF2() // _SEH_4039A0
{
    __DEBUG_ASM(419BF2);
    // chunk 0x419BF2 _sub_419BF2
    asm("loc_419BF2: mov $_data_41EC60,%eax;");
    asm("loc_419BF7: jmp _sub_4193C0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419C00() // _sub_419C00
{
    __DEBUG_ASM(419C00);
    // chunk 0x419C00 _sub_419C00
    asm("loc_419C00: lea -0x54(%ebp),%ecx;");
    asm("loc_419C03: jmp _sub_418AC8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419C08() // _SEH_403B00
{
    __DEBUG_ASM(419C08);
    // chunk 0x419C08 _sub_419C08
    asm("loc_419C08: mov $_data_41EC84,%eax;");
    asm("loc_419C0D: jmp _sub_4193C0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419C20() // _SEH_4055B0
{
    __DEBUG_ASM(419C20);
    // chunk 0x419C20 _sub_419C20
    asm("loc_419C20: mov $_data_41ECD4,%eax;");
    asm("loc_419C25: jmp _sub_4193C0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419C30() // _sub_419C30
{
    __DEBUG_ASM(419C30);
    // chunk 0x419C30 _sub_419C30
    asm("loc_419C30: mov 4(%ebp),%eax;");
    asm("loc_419C33: push %eax;");
    asm("loc_419C34: mov -0x10(%ebp),%ecx;");
    asm("loc_419C37: push %ecx;");
    asm("loc_419C38: call _sub_405A30;");
    asm("loc_419C3D: add $8,%esp;");
    asm("loc_419C40: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419C41() // _SEH_4058C0
{
    __DEBUG_ASM(419C41);
    // chunk 0x419C41 _sub_419C41
    asm("loc_419C41: mov $_data_41ECF8,%eax;");
    asm("loc_419C46: jmp _sub_4193C0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419C50() // _sub_419C50
{
    __DEBUG_ASM(419C50);
    // chunk 0x419C50 _sub_419C50
    asm("loc_419C50: mov 4(%ebp),%eax;");
    asm("loc_419C53: push %eax;");
    asm("loc_419C54: mov -0x10(%ebp),%ecx;");
    asm("loc_419C57: push %ecx;");
    asm("loc_419C58: call _sub_405A30;");
    asm("loc_419C5D: add $8,%esp;");
    asm("loc_419C60: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419C61() // _SEH_405A40
{
    __DEBUG_ASM(419C61);
    // chunk 0x419C61 _sub_419C61
    asm("loc_419C61: mov $_data_41ED1C,%eax;");
    asm("loc_419C66: jmp _sub_4193C0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419C70() // _sub_419C70
{
    __DEBUG_ASM(419C70);
    // chunk 0x419C70 _sub_419C70
    asm("loc_419C70: mov 4(%ebp),%eax;");
    asm("loc_419C73: push %eax;");
    asm("loc_419C74: mov -0x10(%ebp),%ecx;");
    asm("loc_419C77: push %ecx;");
    asm("loc_419C78: call _sub_405A30;");
    asm("loc_419C7D: add $8,%esp;");
    asm("loc_419C80: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419C81() // _SEH_405B90
{
    __DEBUG_ASM(419C81);
    // chunk 0x419C81 _sub_419C81
    asm("loc_419C81: mov $_data_41ED40,%eax;");
    asm("loc_419C86: jmp _sub_4193C0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419C90() // _SEH_405F10
{
    __DEBUG_ASM(419C90);
    // chunk 0x419C90 _sub_419C90
    asm("loc_419C90: mov $_data_41ED90,%eax;");
    asm("loc_419C95: jmp _sub_4193C0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419CA0() // _sub_419CA0
{
    __DEBUG_ASM(419CA0);
    // chunk 0x419CA0 _sub_419CA0
    asm("loc_419CA0: mov -0x10(%ebp),%ecx;");
    asm("loc_419CA3: jmp _sub_418A98;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419CA8() // _SEH_406210
{
    __DEBUG_ASM(419CA8);
    // chunk 0x419CA8 _sub_419CA8
    asm("loc_419CA8: mov $_data_41EDB4,%eax;");
    asm("loc_419CAD: jmp _sub_4193C0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419CC0() // _sub_419CC0
{
    __DEBUG_ASM(419CC0);
    // chunk 0x419CC0 _sub_419CC0
    asm("loc_419CC0: mov -0x10(%ebp),%ecx;");
    asm("loc_419CC3: jmp _sub_418A98;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419CC8() // _SEH_406260
{
    __DEBUG_ASM(419CC8);
    // chunk 0x419CC8 _sub_419CC8
    asm("loc_419CC8: mov $_data_41EDD8,%eax;");
    asm("loc_419CCD: jmp _sub_4193C0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419CE0() // _sub_419CE0
{
    __DEBUG_ASM(419CE0);
    // chunk 0x419CE0 _sub_419CE0
    asm("loc_419CE0: mov -0x10(%ebp),%eax;");
    asm("loc_419CE3: push %eax;");
    asm("loc_419CE4: call _sub_403AF0;");
    asm("loc_419CE9: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419CEA() // _SEH_406370
{
    __DEBUG_ASM(419CEA);
    // chunk 0x419CEA _sub_419CEA
    asm("loc_419CEA: mov $_data_41EDFC,%eax;");
    asm("loc_419CEF: jmp _sub_4193C0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419D00() // _sub_419D00
{
    __DEBUG_ASM(419D00);
    // chunk 0x419D00 _sub_419D00
    asm("loc_419D00: lea -0x54(%ebp),%ecx;");
    asm("loc_419D03: jmp _sub_418AC8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419D08() // _SEH_406460
{
    __DEBUG_ASM(419D08);
    // chunk 0x419D08 _sub_419D08
    asm("loc_419D08: mov $_data_41EE20,%eax;");
    asm("loc_419D0D: jmp _sub_4193C0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419D20() // _sub_419D20
{
    __DEBUG_ASM(419D20);
    // chunk 0x419D20 _sub_419D20
    asm("loc_419D20: mov -0x10(%ebp),%eax;");
    asm("loc_419D23: push %eax;");
    asm("loc_419D24: call _sub_403AF0;");
    asm("loc_419D29: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419D2A() // _SEH_406610
{
    __DEBUG_ASM(419D2A);
    // chunk 0x419D2A _sub_419D2A
    asm("loc_419D2A: mov $_data_41EE44,%eax;");
    asm("loc_419D2F: jmp _sub_4193C0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419D40() // _sub_419D40
{
    __DEBUG_ASM(419D40);
    // chunk 0x419D40 _sub_419D40
    asm("loc_419D40: lea -0x584(%ebp),%ecx;");
    asm("loc_419D46: jmp _sub_418AA4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419D4B() // _SEH_4067F0
{
    __DEBUG_ASM(419D4B);
    // chunk 0x419D4B _sub_419D4B
    asm("loc_419D4B: mov $_data_41EE68,%eax;");
    asm("loc_419D50: jmp _sub_4193C0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419D60() // _unknown_libname_5
{
    __DEBUG_ASM(419D60);
    // chunk 0x419D60 _sub_419D60
    asm("loc_419D60: mov -0x10(%ebp),%ecx;");
    asm("loc_419D63: jmp _sub_418A98;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419D68() // _sub_419D68
{
    __DEBUG_ASM(419D68);
    // chunk 0x419D68 _sub_419D68
    asm("loc_419D68: mov -0x10(%ebp),%ecx;");
    asm("loc_419D6B: add $0x60,%ecx;");
    asm("loc_419D6E: jmp _sub_418C24;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419D73() // _SEH_406FB0
{
    __DEBUG_ASM(419D73);
    // chunk 0x419D73 _sub_419D73
    asm("loc_419D73: mov $_data_41EE94,%eax;");
    asm("loc_419D78: jmp _sub_4193C0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419D80() // _unknown_libname_6
{
    __DEBUG_ASM(419D80);
    // chunk 0x419D80 _sub_419D80
    asm("loc_419D80: mov -0x10(%ebp),%ecx;");
    asm("loc_419D83: jmp _sub_418A98;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419D88() // _sub_419D88
{
    __DEBUG_ASM(419D88);
    // chunk 0x419D88 _sub_419D88
    asm("loc_419D88: mov -0x10(%ebp),%ecx;");
    asm("loc_419D8B: add $0x60,%ecx;");
    asm("loc_419D8E: jmp _sub_418C24;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419D93() // _SEH_407090
{
    __DEBUG_ASM(419D93);
    // chunk 0x419D93 _sub_419D93
    asm("loc_419D93: mov $_data_41EEC0,%eax;");
    asm("loc_419D98: jmp _sub_4193C0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419DA0() // _sub_419DA0
{
    __DEBUG_ASM(419DA0);
    // chunk 0x419DA0 _sub_419DA0
    asm("loc_419DA0: lea -0x17C(%ebp),%ecx;");
    asm("loc_419DA6: jmp _sub_403BD0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419DAB() // _sub_419DAB
{
    __DEBUG_ASM(419DAB);
    // chunk 0x419DAB _sub_419DAB
    asm("loc_419DAB: lea -0x18C(%ebp),%ecx;");
    asm("loc_419DB1: jmp _sub_403BD0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419DB6() // _sub_419DB6
{
    __DEBUG_ASM(419DB6);
    // chunk 0x419DB6 _sub_419DB6
    asm("loc_419DB6: lea -0xEC(%ebp),%ecx;");
    asm("loc_419DBC: jmp _sub_401320;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419DC1() // _SEH_407140
{
    __DEBUG_ASM(419DC1);
    // chunk 0x419DC1 _sub_419DC1
    asm("loc_419DC1: mov $_data_41EEF4,%eax;");
    asm("loc_419DC6: jmp _sub_4193C0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419DD0() // _sub_419DD0
{
    __DEBUG_ASM(419DD0);
    // chunk 0x419DD0 _sub_419DD0
    asm("loc_419DD0: mov -0x10(%ebp),%ecx;");
    asm("loc_419DD3: jmp _sub_418A98;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419DD8() // _SEH_4074C0
{
    __DEBUG_ASM(419DD8);
    // chunk 0x419DD8 _sub_419DD8
    asm("loc_419DD8: mov $_data_41EF18,%eax;");
    asm("loc_419DDD: jmp _sub_4193C0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419DF0() // _sub_419DF0
{
    __DEBUG_ASM(419DF0);
    // chunk 0x419DF0 _sub_419DF0
    asm("loc_419DF0: mov -0x10(%ebp),%ecx;");
    asm("loc_419DF3: jmp _sub_418A98;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419DF8() // _SEH_407560
{
    __DEBUG_ASM(419DF8);
    // chunk 0x419DF8 _sub_419DF8
    asm("loc_419DF8: mov $_data_41EF3C,%eax;");
    asm("loc_419DFD: jmp _sub_4193C0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419E10() // _sub_419E10
{
    __DEBUG_ASM(419E10);
    // chunk 0x419E10 _sub_419E10
    asm("loc_419E10: lea -0x20(%ebp),%ecx;");
    asm("loc_419E13: jmp _sub_407900;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419E18() // _SEH_407600
{
    __DEBUG_ASM(419E18);
    // chunk 0x419E18 _sub_419E18
    asm("loc_419E18: mov $_data_41EF60,%eax;");
    asm("loc_419E1D: jmp _sub_4193C0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419E30() // _sub_419E30
{
    __DEBUG_ASM(419E30);
    // chunk 0x419E30 _sub_419E30
    asm("loc_419E30: mov -0x10(%ebp),%ecx;");
    asm("loc_419E33: jmp _sub_418A98;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419E38() // _sub_419E38
{
    __DEBUG_ASM(419E38);
    // chunk 0x419E38 _sub_419E38
    asm("loc_419E38: mov -0x10(%ebp),%ecx;");
    asm("loc_419E3B: add $0x60,%ecx;");
    asm("loc_419E3E: jmp _sub_418C78;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419E43() // _sub_419E43
{
    __DEBUG_ASM(419E43);
    // chunk 0x419E43 _sub_419E43
    asm("loc_419E43: mov -0x10(%ebp),%ecx;");
    asm("loc_419E46: add $0xA4,%ecx;");
    asm("loc_419E4C: jmp _sub_40FC80;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419E51() // _sub_419E51
{
    __DEBUG_ASM(419E51);
    // chunk 0x419E51 _sub_419E51
    asm("loc_419E51: mov -0x10(%ebp),%ecx;");
    asm("loc_419E54: add $0x140,%ecx;");
    asm("loc_419E5A: jmp _sub_418C78;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419E5F() // _sub_419E5F
{
    __DEBUG_ASM(419E5F);
    // chunk 0x419E5F _sub_419E5F
    asm("loc_419E5F: mov -0x10(%ebp),%ecx;");
    asm("loc_419E62: add $0x180,%ecx;");
    asm("loc_419E68: jmp _sub_418C78;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419E6D() // _SEH_409200
{
    __DEBUG_ASM(419E6D);
    // chunk 0x419E6D _sub_419E6D
    asm("loc_419E6D: mov $_data_41EFA4,%eax;");
    asm("loc_419E72: jmp _sub_4193C0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419E80() // _sub_419E80
{
    __DEBUG_ASM(419E80);
    // chunk 0x419E80 _sub_419E80
    asm("loc_419E80: mov -0x10(%ebp),%ecx;");
    asm("loc_419E83: jmp _sub_418A98;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419E88() // _sub_419E88
{
    __DEBUG_ASM(419E88);
    // chunk 0x419E88 _sub_419E88
    asm("loc_419E88: mov -0x10(%ebp),%ecx;");
    asm("loc_419E8B: add $0x60,%ecx;");
    asm("loc_419E8E: jmp _sub_418C78;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419E93() // _sub_419E93
{
    __DEBUG_ASM(419E93);
    // chunk 0x419E93 _sub_419E93
    asm("loc_419E93: mov -0x10(%ebp),%ecx;");
    asm("loc_419E96: add $0xA4,%ecx;");
    asm("loc_419E9C: jmp _sub_40FC80;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419EA1() // _sub_419EA1
{
    __DEBUG_ASM(419EA1);
    // chunk 0x419EA1 _sub_419EA1
    asm("loc_419EA1: mov -0x10(%ebp),%ecx;");
    asm("loc_419EA4: add $0x140,%ecx;");
    asm("loc_419EAA: jmp _sub_418C78;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419EAF() // _sub_419EAF
{
    __DEBUG_ASM(419EAF);
    // chunk 0x419EAF _sub_419EAF
    asm("loc_419EAF: mov -0x10(%ebp),%ecx;");
    asm("loc_419EB2: add $0x180,%ecx;");
    asm("loc_419EB8: jmp _sub_418C78;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419EBD() // _SEH_409300
{
    __DEBUG_ASM(419EBD);
    // chunk 0x419EBD _sub_419EBD
    asm("loc_419EBD: mov $_data_41EFE8,%eax;");
    asm("loc_419EC2: jmp _sub_4193C0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419ED0() // _sub_419ED0
{
    __DEBUG_ASM(419ED0);
    // chunk 0x419ED0 _sub_419ED0
    asm("loc_419ED0: lea -0x6C(%ebp),%ecx;");
    asm("loc_419ED3: jmp _sub_4027B0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419ED8() // _sub_419ED8
{
    __DEBUG_ASM(419ED8);
    // chunk 0x419ED8 _sub_419ED8
    asm("loc_419ED8: lea -0x7C(%ebp),%ecx;");
    asm("loc_419EDB: jmp _sub_403BD0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419EE0() // _SEH_4094E0
{
    __DEBUG_ASM(419EE0);
    // chunk 0x419EE0 _sub_419EE0
    asm("loc_419EE0: mov $_data_41F014,%eax;");
    asm("loc_419EE5: jmp _sub_4193C0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419EF0() // _sub_419EF0
{
    __DEBUG_ASM(419EF0);
    // chunk 0x419EF0 _sub_419EF0
    asm("loc_419EF0: lea -0x54(%ebp),%ecx;");
    asm("loc_419EF3: jmp _sub_418AC8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419EF8() // _SEH_409610
{
    __DEBUG_ASM(419EF8);
    // chunk 0x419EF8 _sub_419EF8
    asm("loc_419EF8: mov $_data_41F038,%eax;");
    asm("loc_419EFD: jmp _sub_4193C0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419F10() // _sub_419F10
{
    __DEBUG_ASM(419F10);
    // chunk 0x419F10 _sub_419F10
    asm("loc_419F10: mov -0x810(%ebp),%eax;");
    asm("loc_419F16: push %eax;");
    asm("loc_419F17: call _sub_418978;");
    asm("loc_419F1C: pop %ecx;");
    asm("loc_419F1D: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419F1E() // _sub_419F1E
{
    __DEBUG_ASM(419F1E);
    // chunk 0x419F1E _sub_419F1E
    asm("loc_419F1E: lea -0x818(%ebp),%ecx;");
    asm("loc_419F24: jmp _sub_418AA4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419F29() // _SEH_40AF20
{
    __DEBUG_ASM(419F29);
    // chunk 0x419F29 _sub_419F29
    asm("loc_419F29: mov $_data_41F064,%eax;");
    asm("loc_419F2E: jmp _sub_4193C0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419F40() // _sub_419F40
{
    __DEBUG_ASM(419F40);
    // chunk 0x419F40 _sub_419F40
    asm("loc_419F40: mov -0x10(%ebp),%ecx;");
    asm("loc_419F43: jmp _sub_418D0E;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419F48() // _sub_419F48
{
    __DEBUG_ASM(419F48);
    // chunk 0x419F48 _sub_419F48
    asm("loc_419F48: mov -0x10(%ebp),%ecx;");
    asm("loc_419F4B: add $0xCC,%ecx;");
    asm("loc_419F51: jmp _sub_401730;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419F56() // _SEH_40B270
{
    __DEBUG_ASM(419F56);
    // chunk 0x419F56 _sub_419F56
    asm("loc_419F56: mov $_data_41F090,%eax;");
    asm("loc_419F5B: jmp _sub_4193C0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419F60() // _sub_419F60
{
    __DEBUG_ASM(419F60);
    // chunk 0x419F60 _sub_419F60
    asm("loc_419F60: mov -0x10(%ebp),%ecx;");
    asm("loc_419F63: jmp _sub_418D0E;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419F68() // _sub_419F68
{
    __DEBUG_ASM(419F68);
    // chunk 0x419F68 _sub_419F68
    asm("loc_419F68: mov -0x10(%ebp),%ecx;");
    asm("loc_419F6B: add $0xCC,%ecx;");
    asm("loc_419F71: jmp _sub_401730;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419F76() // _SEH_40B320
{
    __DEBUG_ASM(419F76);
    // chunk 0x419F76 _sub_419F76
    asm("loc_419F76: mov $_data_41F0BC,%eax;");
    asm("loc_419F7B: jmp _sub_4193C0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419F80() // _sub_419F80
{
    __DEBUG_ASM(419F80);
    // chunk 0x419F80 _sub_419F80
    asm("loc_419F80: mov -0x1E4(%ebp),%eax;");
    asm("loc_419F86: push %eax;");
    asm("loc_419F87: call _sub_403AF0;");
    asm("loc_419F8C: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419F8D() // _sub_419F8D
{
    __DEBUG_ASM(419F8D);
    // chunk 0x419F8D _sub_419F8D
    asm("loc_419F8D: lea -0x1B8(%ebp),%ecx;");
    asm("loc_419F93: jmp _sub_40BCC0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419F98() // _sub_419F98
{
    __DEBUG_ASM(419F98);
    // chunk 0x419F98 _sub_419F98
    asm("loc_419F98: mov -0x1E4(%ebp),%eax;");
    asm("loc_419F9E: push %eax;");
    asm("loc_419F9F: call _sub_403AF0;");
    asm("loc_419FA4: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419FA5() // _sub_419FA5
{
    __DEBUG_ASM(419FA5);
    // chunk 0x419FA5 _sub_419FA5
    asm("loc_419FA5: lea -0x1E8(%ebp),%ecx;");
    asm("loc_419FAB: jmp _sub_418AA4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419FB0() // _sub_419FB0
{
    __DEBUG_ASM(419FB0);
    // chunk 0x419FB0 _sub_419FB0
    asm("loc_419FB0: lea -0x1E8(%ebp),%ecx;");
    asm("loc_419FB6: jmp _sub_418AA4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419FBB() // _sub_419FBB
{
    __DEBUG_ASM(419FBB);
    // chunk 0x419FBB _sub_419FBB
    asm("loc_419FBB: lea -0x194(%ebp),%ecx;");
    asm("loc_419FC1: jmp _sub_40BC70;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419FC6() // _SEH_40B640
{
    __DEBUG_ASM(419FC6);
    // chunk 0x419FC6 _sub_419FC6
    asm("loc_419FC6: mov $_data_41F108,%eax;");
    asm("loc_419FCB: jmp _sub_4193C0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419FD0() // _sub_419FD0
{
    __DEBUG_ASM(419FD0);
    // chunk 0x419FD0 _sub_419FD0
    asm("loc_419FD0: lea 4(%ebp),%ecx;");
    asm("loc_419FD3: jmp _sub_418AA4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419FD8() // _SEH_40BD40
{
    __DEBUG_ASM(419FD8);
    // chunk 0x419FD8 _sub_419FD8
    asm("loc_419FD8: mov $_data_41F12C,%eax;");
    asm("loc_419FDD: jmp _sub_4193C0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419FF0() // _sub_419FF0
{
    __DEBUG_ASM(419FF0);
    // chunk 0x419FF0 _sub_419FF0
    asm("loc_419FF0: lea -0x1574(%ebp),%ecx;");
    asm("loc_419FF6: jmpl *_import_41B068;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_419FFC() // _sub_419FFC
{
    __DEBUG_ASM(419FFC);
    // chunk 0x419FFC _sub_419FFC
    asm("loc_419FFC: lea -0x1574(%ebp),%ecx;");
    asm("loc_41A002: jmp _sub_40C380;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A007() // _sub_41A007
{
    __DEBUG_ASM(41A007);
    // chunk 0x41A007 _sub_41A007
    asm("loc_41A007: mov -0x1588(%ebp),%ecx;");
    asm("loc_41A00D: jmpl *_import_41B880;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A013() // _sub_41A013
{
    __DEBUG_ASM(41A013);
    // chunk 0x41A013 _sub_41A013
    asm("loc_41A013: lea -0x1574(%ebp),%ecx;");
    asm("loc_41A019: jmpl *_import_41B880;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A01F() // _sub_41A01F
{
    __DEBUG_ASM(41A01F);
    // chunk 0x41A01F _sub_41A01F
    asm("loc_41A01F: mov $_data_41F168,%eax;");
    asm("loc_41A024: jmp _sub_4193C0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A030() // _sub_41A030
{
    __DEBUG_ASM(41A030);
    // chunk 0x41A030 _sub_41A030
    asm("loc_41A030: mov -0x10(%ebp),%ecx;");
    asm("loc_41A033: jmpl *_import_41B880;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A039() // _SEH_40C380
{
    __DEBUG_ASM(41A039);
    // chunk 0x41A039 _sub_41A039
    asm("loc_41A039: mov $_data_41F18C,%eax;");
    asm("loc_41A03E: jmp _sub_4193C0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A050() // _sub_41A050
{
    __DEBUG_ASM(41A050);
    // chunk 0x41A050 _sub_41A050
    asm("loc_41A050: lea -0x820(%ebp),%ecx;");
    asm("loc_41A056: jmp _sub_40D530;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A05B() // _SEH_40C4D0
{
    __DEBUG_ASM(41A05B);
    // chunk 0x41A05B _sub_41A05B
    asm("loc_41A05B: mov $_data_41F1B0,%eax;");
    asm("loc_41A060: jmp _sub_4193C0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A070() // _unknown_libname_3
{
    __DEBUG_ASM(41A070);
    // chunk 0x41A070 _sub_41A070
    asm("loc_41A070: mov -0x10(%ebp),%eax;");
    asm("loc_41A073: push %eax;");
    asm("loc_41A074: call _sub_418978;");
    asm("loc_41A079: pop %ecx;");
    asm("loc_41A07A: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A07B() // _SEH_40C6C0
{
    __DEBUG_ASM(41A07B);
    // chunk 0x41A07B _sub_41A07B
    asm("loc_41A07B: mov $_data_41F1D4,%eax;");
    asm("loc_41A080: jmp _sub_4193C0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A090() // _sub_41A090
{
    __DEBUG_ASM(41A090);
    // chunk 0x41A090 _sub_41A090
    asm("loc_41A090: lea -0x6C(%ebp),%ecx;");
    asm("loc_41A093: jmp _sub_40C880;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A098() // _SEH_40C8C0
{
    __DEBUG_ASM(41A098);
    // chunk 0x41A098 _sub_41A098
    asm("loc_41A098: mov $_data_41F1F8,%eax;");
    asm("loc_41A09D: jmp _sub_4193C0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A0B0() // _sub_41A0B0
{
    __DEBUG_ASM(41A0B0);
    // chunk 0x41A0B0 _sub_41A0B0
    asm("loc_41A0B0: lea -0x2C80(%ebp),%ecx;");
    asm("loc_41A0B6: jmp _sub_418AA4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A0BB() // _SEH_40C920
{
    __DEBUG_ASM(41A0BB);
    // chunk 0x41A0BB _sub_41A0BB
    asm("loc_41A0BB: mov $_data_41F21C,%eax;");
    asm("loc_41A0C0: jmp _sub_4193C0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A0D0() // _sub_41A0D0
{
    __DEBUG_ASM(41A0D0);
    // chunk 0x41A0D0 _sub_41A0D0
    asm("loc_41A0D0: lea -0x24C(%ebp),%ecx;");
    asm("loc_41A0D6: jmp _sub_40CF80;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A0DB() // _sub_41A0DB
{
    __DEBUG_ASM(41A0DB);
    // chunk 0x41A0DB _sub_41A0DB
    asm("loc_41A0DB: lea -0x24C(%ebp),%ecx;");
    asm("loc_41A0E1: jmp _sub_418A98;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A0E6() // _sub_41A0E6
{
    __DEBUG_ASM(41A0E6);
    // chunk 0x41A0E6 _sub_41A0E6
    asm("loc_41A0E6: lea -0x1EC(%ebp),%ecx;");
    asm("loc_41A0EC: jmp _sub_418C78;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A0F1() // _sub_41A0F1
{
    __DEBUG_ASM(41A0F1);
    // chunk 0x41A0F1 _sub_41A0F1
    asm("loc_41A0F1: lea -0x1AC(%ebp),%ecx;");
    asm("loc_41A0F7: jmp _sub_418C78;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A0FC() // _sub_41A0FC
{
    __DEBUG_ASM(41A0FC);
    // chunk 0x41A0FC _sub_41A0FC
    asm("loc_41A0FC: lea -0x16C(%ebp),%ecx;");
    asm("loc_41A102: jmp _sub_418C78;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A107() // _sub_41A107
{
    __DEBUG_ASM(41A107);
    // chunk 0x41A107 _sub_41A107
    asm("loc_41A107: lea -0x12C(%ebp),%ecx;");
    asm("loc_41A10D: jmp _sub_418D86;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A112() // _sub_41A112
{
    __DEBUG_ASM(41A112);
    // chunk 0x41A112 _sub_41A112
    asm("loc_41A112: lea -0xEC(%ebp),%ecx;");
    asm("loc_41A118: jmp _sub_418C78;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A11D() // _SEH_40CEA0
{
    __DEBUG_ASM(41A11D);
    // chunk 0x41A11D _sub_41A11D
    asm("loc_41A11D: mov $_data_41F270,%eax;");
    asm("loc_41A122: jmp _sub_4193C0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A130() // _sub_41A130
{
    __DEBUG_ASM(41A130);
    // chunk 0x41A130 _sub_41A130
    asm("loc_41A130: mov -0x10(%ebp),%ecx;");
    asm("loc_41A133: jmp _sub_418A98;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A138() // _sub_41A138
{
    __DEBUG_ASM(41A138);
    // chunk 0x41A138 _sub_41A138
    asm("loc_41A138: mov -0x10(%ebp),%ecx;");
    asm("loc_41A13B: add $0x60,%ecx;");
    asm("loc_41A13E: jmp _sub_418C78;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A143() // _sub_41A143
{
    __DEBUG_ASM(41A143);
    // chunk 0x41A143 _sub_41A143
    asm("loc_41A143: mov -0x10(%ebp),%ecx;");
    asm("loc_41A146: add $0xA0,%ecx;");
    asm("loc_41A14C: jmp _sub_418C78;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A151() // _sub_41A151
{
    __DEBUG_ASM(41A151);
    // chunk 0x41A151 _sub_41A151
    asm("loc_41A151: mov -0x10(%ebp),%ecx;");
    asm("loc_41A154: add $0xE0,%ecx;");
    asm("loc_41A15A: jmp _sub_418C78;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A15F() // _sub_41A15F
{
    __DEBUG_ASM(41A15F);
    // chunk 0x41A15F _sub_41A15F
    asm("loc_41A15F: mov -0x10(%ebp),%ecx;");
    asm("loc_41A162: add $0x120,%ecx;");
    asm("loc_41A168: jmp _sub_418D86;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A16D() // _sub_41A16D
{
    __DEBUG_ASM(41A16D);
    // chunk 0x41A16D _sub_41A16D
    asm("loc_41A16D: mov -0x10(%ebp),%ecx;");
    asm("loc_41A170: add $0x160,%ecx;");
    asm("loc_41A176: jmp _sub_418C78;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A17B() // _SEH_40CF80
{
    __DEBUG_ASM(41A17B);
    // chunk 0x41A17B _sub_41A17B
    asm("loc_41A17B: mov $_data_41F2BC,%eax;");
    asm("loc_41A180: jmp _sub_4193C0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A190() // _sub_41A190
{
    __DEBUG_ASM(41A190);
    // chunk 0x41A190 _sub_41A190
    asm("loc_41A190: lea -0xAC(%ebp),%ecx;");
    asm("loc_41A196: jmp _sub_40D1C0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A19B() // _unknown_libname_7
{
    __DEBUG_ASM(41A19B);
    // chunk 0x41A19B _sub_41A19B
    asm("loc_41A19B: lea -0xAC(%ebp),%ecx;");
    asm("loc_41A1A1: jmp _sub_418A98;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A1A6() // _SEH_40D140
{
    __DEBUG_ASM(41A1A6);
    // chunk 0x41A1A6 _sub_41A1A6
    asm("loc_41A1A6: mov $_data_41F2E8,%eax;");
    asm("loc_41A1AB: jmp _sub_4193C0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A1B0() // _sub_41A1B0
{
    __DEBUG_ASM(41A1B0);
    // chunk 0x41A1B0 _sub_41A1B0
    asm("loc_41A1B0: mov -0x10(%ebp),%ecx;");
    asm("loc_41A1B3: jmp _sub_418A98;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A1B8() // _SEH_40D1C0
{
    __DEBUG_ASM(41A1B8);
    // chunk 0x41A1B8 _sub_41A1B8
    asm("loc_41A1B8: mov $_data_41F30C,%eax;");
    asm("loc_41A1BD: jmp _sub_4193C0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A1D0() // _sub_41A1D0
{
    __DEBUG_ASM(41A1D0);
    // chunk 0x41A1D0 _sub_41A1D0
    asm("loc_41A1D0: mov -0x10(%ebp),%eax;");
    asm("loc_41A1D3: push %eax;");
    asm("loc_41A1D4: call _sub_403AF0;");
    asm("loc_41A1D9: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A1DA() // _SEH_40D630
{
    __DEBUG_ASM(41A1DA);
    // chunk 0x41A1DA _sub_41A1DA
    asm("loc_41A1DA: mov $_data_41F330,%eax;");
    asm("loc_41A1DF: jmp _sub_4193C0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A1F0() // _sub_41A1F0
{
    __DEBUG_ASM(41A1F0);
    // chunk 0x41A1F0 _sub_41A1F0
    asm("loc_41A1F0: mov -0x10(%ebp),%eax;");
    asm("loc_41A1F3: push %eax;");
    asm("loc_41A1F4: call _sub_403AF0;");
    asm("loc_41A1F9: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A1FA() // _SEH_40D800
{
    __DEBUG_ASM(41A1FA);
    // chunk 0x41A1FA _sub_41A1FA
    asm("loc_41A1FA: mov $_data_41F354,%eax;");
    asm("loc_41A1FF: jmp _sub_4193C0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A210() // _sub_41A210
{
    __DEBUG_ASM(41A210);
    // chunk 0x41A210 _sub_41A210
    asm("loc_41A210: mov -0x10(%ebp),%eax;");
    asm("loc_41A213: push %eax;");
    asm("loc_41A214: call _sub_403AF0;");
    asm("loc_41A219: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A21A() // _SEH_40DC10
{
    __DEBUG_ASM(41A21A);
    // chunk 0x41A21A _sub_41A21A
    asm("loc_41A21A: mov $_data_41F378,%eax;");
    asm("loc_41A21F: jmp _sub_4193C0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A230() // _sub_41A230
{
    __DEBUG_ASM(41A230);
    // chunk 0x41A230 _sub_41A230
    asm("loc_41A230: mov -0x10(%ebp),%ecx;");
    asm("loc_41A233: jmp _sub_40DE20;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A238() // _sub_41A238
{
    __DEBUG_ASM(41A238);
    // chunk 0x41A238 _sub_41A238
    asm("loc_41A238: mov -0x10(%ebp),%ecx;");
    asm("loc_41A23B: add $0x58,%ecx;");
    asm("loc_41A23E: jmp _sub_418AC8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A243() // _sub_41A243
{
    __DEBUG_ASM(41A243);
    // chunk 0x41A243 _sub_41A243
    asm("loc_41A243: mov -0x10(%ebp),%ecx;");
    asm("loc_41A246: jmp _sub_419020;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A24B() // _SEH_40DD70
{
    __DEBUG_ASM(41A24B);
    // chunk 0x41A24B _sub_41A24B
    asm("loc_41A24B: mov $_data_41F3AC,%eax;");
    asm("loc_41A250: jmp _sub_4193C0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A260() // _sub_41A260
{
    __DEBUG_ASM(41A260);
    // chunk 0x41A260 _sub_41A260
    asm("loc_41A260: mov -0x10(%ebp),%ecx;");
    asm("loc_41A263: jmp _sub_419020;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A268() // _SEH_40DE20
{
    __DEBUG_ASM(41A268);
    // chunk 0x41A268 _sub_41A268
    asm("loc_41A268: mov $_data_41F3D0,%eax;");
    asm("loc_41A26D: jmp _sub_4193C0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A280() // _sub_41A280
{
    __DEBUG_ASM(41A280);
    // chunk 0x41A280 _sub_41A280
    asm("loc_41A280: lea -0x4C(%ebp),%ecx;");
    asm("loc_41A283: jmp _sub_418AA4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A288() // _SEH_40DE80
{
    __DEBUG_ASM(41A288);
    // chunk 0x41A288 _sub_41A288
    asm("loc_41A288: mov $_data_41F3F4,%eax;");
    asm("loc_41A28D: jmp _sub_4193C0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A2A0() // _sub_41A2A0
{
    __DEBUG_ASM(41A2A0);
    // chunk 0x41A2A0 _sub_41A2A0
    asm("loc_41A2A0: mov -0x10(%ebp),%eax;");
    asm("loc_41A2A3: push %eax;");
    asm("loc_41A2A4: call _sub_403AF0;");
    asm("loc_41A2A9: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A2AA() // _SEH_40E6E0
{
    __DEBUG_ASM(41A2AA);
    // chunk 0x41A2AA _sub_41A2AA
    asm("loc_41A2AA: mov $_data_41F418,%eax;");
    asm("loc_41A2AF: jmp _sub_4193C0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A2C0() // _sub_41A2C0
{
    __DEBUG_ASM(41A2C0);
    // chunk 0x41A2C0 _sub_41A2C0
    asm("loc_41A2C0: mov -0x10(%ebp),%ecx;");
    asm("loc_41A2C3: jmp _sub_40EA80;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A2C8() // _sub_41A2C8
{
    __DEBUG_ASM(41A2C8);
    // chunk 0x41A2C8 _sub_41A2C8
    asm("loc_41A2C8: mov -0x10(%ebp),%ecx;");
    asm("loc_41A2CB: add $0x80,%ecx;");
    asm("loc_41A2D1: jmp _sub_418C24;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A2D6() // _sub_41A2D6
{
    __DEBUG_ASM(41A2D6);
    // chunk 0x41A2D6 _sub_41A2D6
    asm("loc_41A2D6: mov -0x10(%ebp),%ecx;");
    asm("loc_41A2D9: add $0xC0,%ecx;");
    asm("loc_41A2DF: jmp _sub_418D86;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A2E4() // _sub_41A2E4
{
    __DEBUG_ASM(41A2E4);
    // chunk 0x41A2E4 _sub_41A2E4
    asm("loc_41A2E4: mov -0x10(%ebp),%ecx;");
    asm("loc_41A2E7: add $0x100,%ecx;");
    asm("loc_41A2ED: jmp _sub_4190F8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A2F2() // _sub_41A2F2
{
    __DEBUG_ASM(41A2F2);
    // chunk 0x41A2F2 _sub_41A2F2
    asm("loc_41A2F2: mov -0x10(%ebp),%ecx;");
    asm("loc_41A2F5: add $0x140,%ecx;");
    asm("loc_41A2FB: jmp _sub_418D86;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A300() // _SEH_40E760
{
    __DEBUG_ASM(41A300);
    // chunk 0x41A300 _sub_41A300
    asm("loc_41A300: mov $_data_41F45C,%eax;");
    asm("loc_41A305: jmp _sub_4193C0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A310() // _sub_41A310
{
    __DEBUG_ASM(41A310);
    // chunk 0x41A310 _sub_41A310
    asm("loc_41A310: mov -0x10(%ebp),%ecx;");
    asm("loc_41A313: jmp _sub_40E910;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A318() // _SEH_40E8A0
{
    __DEBUG_ASM(41A318);
    // chunk 0x41A318 _sub_41A318
    asm("loc_41A318: mov $_data_41F480,%eax;");
    asm("loc_41A31D: jmp _sub_4193C0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A330() // _sub_41A330
{
    __DEBUG_ASM(41A330);
    // chunk 0x41A330 _sub_41A330
    asm("loc_41A330: mov -0x10(%ebp),%ecx;");
    asm("loc_41A333: jmp _sub_40E910;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A338() // _SEH_40E940
{
    __DEBUG_ASM(41A338);
    // chunk 0x41A338 _sub_41A338
    asm("loc_41A338: mov $_data_41F4A4,%eax;");
    asm("loc_41A33D: jmp _sub_4193C0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A350() // _sub_41A350
{
    __DEBUG_ASM(41A350);
    // chunk 0x41A350 _sub_41A350
    asm("loc_41A350: mov -0x10(%ebp),%ecx;");
    asm("loc_41A353: jmp _sub_40E910;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A358() // _SEH_40E9B0
{
    __DEBUG_ASM(41A358);
    // chunk 0x41A358 _sub_41A358
    asm("loc_41A358: mov $_data_41F4C8,%eax;");
    asm("loc_41A35D: jmp _sub_4193C0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A370() // _sub_41A370
{
    __DEBUG_ASM(41A370);
    // chunk 0x41A370 _sub_41A370
    asm("loc_41A370: mov -0x14(%ebp),%ecx;");
    asm("loc_41A373: jmp _sub_40EA80;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A378() // _sub_41A378
{
    __DEBUG_ASM(41A378);
    // chunk 0x41A378 _sub_41A378
    asm("loc_41A378: mov -0x14(%ebp),%ecx;");
    asm("loc_41A37B: add $0x80,%ecx;");
    asm("loc_41A381: jmp _sub_418C24;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A386() // _sub_41A386
{
    __DEBUG_ASM(41A386);
    // chunk 0x41A386 _sub_41A386
    asm("loc_41A386: mov -0x14(%ebp),%ecx;");
    asm("loc_41A389: add $0xC0,%ecx;");
    asm("loc_41A38F: jmp _sub_418D86;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A394() // _sub_41A394
{
    __DEBUG_ASM(41A394);
    // chunk 0x41A394 _sub_41A394
    asm("loc_41A394: mov -0x14(%ebp),%ecx;");
    asm("loc_41A397: add $0x100,%ecx;");
    asm("loc_41A39D: jmp _sub_4190F8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A3A2() // _sub_41A3A2
{
    __DEBUG_ASM(41A3A2);
    // chunk 0x41A3A2 _sub_41A3A2
    asm("loc_41A3A2: mov -0x14(%ebp),%ecx;");
    asm("loc_41A3A5: add $0x140,%ecx;");
    asm("loc_41A3AB: jmp _sub_418D86;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A3B0() // _sub_41A3B0
{
    __DEBUG_ASM(41A3B0);
    // chunk 0x41A3B0 _sub_41A3B0
    asm("loc_41A3B0: mov -0x14(%ebp),%ecx;");
    asm("loc_41A3B3: add $0x180,%ecx;");
    asm("loc_41A3B9: jmp _sub_419110;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A3BE() // _sub_41A3BE
{
    __DEBUG_ASM(41A3BE);
    // chunk 0x41A3BE _sub_41A3BE
    asm("loc_41A3BE: mov -0x14(%ebp),%ecx;");
    asm("loc_41A3C1: add $0x1F0,%ecx;");
    asm("loc_41A3C7: jmp _sub_40E8A0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A3CC() // _sub_41A3CC
{
    __DEBUG_ASM(41A3CC);
    // chunk 0x41A3CC _sub_41A3CC
    asm("loc_41A3CC: mov -0x10(%ebp),%ecx;");
    asm("loc_41A3CF: jmp _sub_40E910;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A3D4() // _sub_41A3D4
{
    __DEBUG_ASM(41A3D4);
    // chunk 0x41A3D4 _sub_41A3D4
    asm("loc_41A3D4: mov -0x10(%ebp),%ecx;");
    asm("loc_41A3D7: jmp _sub_40E910;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A3DC() // _SEH_40EA90
{
    __DEBUG_ASM(41A3DC);
    // chunk 0x41A3DC _sub_41A3DC
    asm("loc_41A3DC: mov $_data_41F52C,%eax;");
    asm("loc_41A3E1: jmp _sub_4193C0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A3F0() // _sub_41A3F0
{
    __DEBUG_ASM(41A3F0);
    // chunk 0x41A3F0 _sub_41A3F0
    asm("loc_41A3F0: lea -0xA0(%ebp),%ecx;");
    asm("loc_41A3F6: jmp _sub_418AA4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A3FB() // _SEH_40EE60
{
    __DEBUG_ASM(41A3FB);
    // chunk 0x41A3FB _sub_41A3FB
    asm("loc_41A3FB: mov $_data_41F550,%eax;");
    asm("loc_41A400: jmp _sub_4193C0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A410() // _sub_41A410
{
    __DEBUG_ASM(41A410);
    // chunk 0x41A410 _sub_41A410
    asm("loc_41A410: lea -0x174(%ebp),%ecx;");
    asm("loc_41A416: jmp _sub_419134;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A41B() // _sub_41A41B
{
    __DEBUG_ASM(41A41B);
    // chunk 0x41A41B _sub_41A41B
    asm("loc_41A41B: lea -0x188(%ebp),%ecx;");
    asm("loc_41A421: jmp _sub_418AA4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A426() // _sub_41A426
{
    __DEBUG_ASM(41A426);
    // chunk 0x41A426 _sub_41A426
    asm("loc_41A426: lea -0x188(%ebp),%ecx;");
    asm("loc_41A42C: jmp _sub_418AA4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A431() // _sub_41A431
{
    __DEBUG_ASM(41A431);
    // chunk 0x41A431 _sub_41A431
    asm("loc_41A431: lea -0x188(%ebp),%ecx;");
    asm("loc_41A437: jmp _sub_418AA4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A43C() // _sub_41A43C
{
    __DEBUG_ASM(41A43C);
    // chunk 0x41A43C _sub_41A43C
    asm("loc_41A43C: lea -0x188(%ebp),%ecx;");
    asm("loc_41A442: jmp _sub_418AA4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A447() // _sub_41A447
{
    __DEBUG_ASM(41A447);
    // chunk 0x41A447 _sub_41A447
    asm("loc_41A447: lea -0x188(%ebp),%ecx;");
    asm("loc_41A44D: jmp _sub_418AA4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A452() // _sub_41A452
{
    __DEBUG_ASM(41A452);
    // chunk 0x41A452 _sub_41A452
    asm("loc_41A452: lea -0x188(%ebp),%ecx;");
    asm("loc_41A458: jmp _sub_418AA4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A45D() // _sub_41A45D
{
    __DEBUG_ASM(41A45D);
    // chunk 0x41A45D _sub_41A45D
    asm("loc_41A45D: lea -0x188(%ebp),%ecx;");
    asm("loc_41A463: jmp _sub_418AA4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A468() // _sub_41A468
{
    __DEBUG_ASM(41A468);
    // chunk 0x41A468 _sub_41A468
    asm("loc_41A468: lea -0x188(%ebp),%ecx;");
    asm("loc_41A46E: jmp _sub_418AA4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A473() // _SEH_40F200
{
    __DEBUG_ASM(41A473);
    // chunk 0x41A473 _sub_41A473
    asm("loc_41A473: mov $_data_41F5B4,%eax;");
    asm("loc_41A478: jmp _sub_4193C0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A480() // _sub_41A480
{
    __DEBUG_ASM(41A480);
    // chunk 0x41A480 _sub_41A480
    asm("loc_41A480: mov -0x4C(%ebp),%ecx;");
    asm("loc_41A483: add $4,%ecx;");
    asm("loc_41A486: jmp _sub_41918E;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A48B() // _sub_41A48B
{
    __DEBUG_ASM(41A48B);
    // chunk 0x41A48B _sub_41A48B
    asm("loc_41A48B: mov -0x4C(%ebp),%ecx;");
    asm("loc_41A48E: add $0x44,%ecx;");
    asm("loc_41A491: jmp _sub_40E9B0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A496() // _sub_41A496
{
    __DEBUG_ASM(41A496);
    // chunk 0x41A496 _sub_41A496
    asm("loc_41A496: mov -0x4C(%ebp),%ecx;");
    asm("loc_41A499: add $0x4C,%ecx;");
    asm("loc_41A49C: jmp _sub_40E9B0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A4A1() // _sub_41A4A1
{
    __DEBUG_ASM(41A4A1);
    // chunk 0x41A4A1 _sub_41A4A1
    asm("loc_41A4A1: mov -0x4C(%ebp),%ecx;");
    asm("loc_41A4A4: add $0x54,%ecx;");
    asm("loc_41A4A7: jmp _sub_40E9B0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A4AC() // _sub_41A4AC
{
    __DEBUG_ASM(41A4AC);
    // chunk 0x41A4AC _sub_41A4AC
    asm("loc_41A4AC: mov -0x4C(%ebp),%ecx;");
    asm("loc_41A4AF: add $0x5C,%ecx;");
    asm("loc_41A4B2: jmp _sub_40E9B0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A4B7() // _sub_41A4B7
{
    __DEBUG_ASM(41A4B7);
    // chunk 0x41A4B7 _sub_41A4B7
    asm("loc_41A4B7: mov -0x4C(%ebp),%ecx;");
    asm("loc_41A4BA: add $0x64,%ecx;");
    asm("loc_41A4BD: jmp _sub_40FB00;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A4C2() // _sub_41A4C2
{
    __DEBUG_ASM(41A4C2);
    // chunk 0x41A4C2 _sub_41A4C2
    asm("loc_41A4C2: mov -0x4C(%ebp),%ecx;");
    asm("loc_41A4C5: add $0x78,%ecx;");
    asm("loc_41A4C8: jmp _sub_40FBC0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A4CD() // _sub_41A4CD
{
    __DEBUG_ASM(41A4CD);
    // chunk 0x41A4CD _sub_41A4CD
    asm("loc_41A4CD: mov -0x4C(%ebp),%ecx;");
    asm("loc_41A4D0: add $0x8C,%ecx;");
    asm("loc_41A4D6: jmp _sub_40FBC0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A4DB() // _SEH_40F900
{
    __DEBUG_ASM(41A4DB);
    // chunk 0x41A4DB _sub_41A4DB
    asm("loc_41A4DB: mov $_data_41F610,%eax;");
    asm("loc_41A4E0: jmp _sub_4193C0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A4F0() // _sub_41A4F0
{
    __DEBUG_ASM(41A4F0);
    // chunk 0x41A4F0 _sub_41A4F0
    asm("loc_41A4F0: mov -0x18(%ebp),%eax;");
    asm("loc_41A4F3: sub $4,%eax;");
    asm("loc_41A4F6: test %eax,%eax;");
    asm("loc_41A4F8: je loc_41A509;");
    asm("loc_41A4FE: mov -0x18(%ebp),%ecx;");
    asm("loc_41A501: mov %ecx,-0x20(%ebp);");
    asm("loc_41A504: jmp loc_41A510;");
    asm("loc_41A509: movl $0,-0x20(%ebp);");
    asm("loc_41A510: mov -0x20(%ebp),%ecx;");
    asm("loc_41A513: jmp _sub_41918E;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A518() // _sub_41A518
{
    __DEBUG_ASM(41A518);
    // chunk 0x41A518 _sub_41A518
    asm("loc_41A518: mov -0x18(%ebp),%ecx;");
    asm("loc_41A51B: add $0x40,%ecx;");
    asm("loc_41A51E: jmp _sub_40E9B0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A523() // _sub_41A523
{
    __DEBUG_ASM(41A523);
    // chunk 0x41A523 _sub_41A523
    asm("loc_41A523: mov -0x18(%ebp),%ecx;");
    asm("loc_41A526: add $0x48,%ecx;");
    asm("loc_41A529: jmp _sub_40E9B0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A52E() // _sub_41A52E
{
    __DEBUG_ASM(41A52E);
    // chunk 0x41A52E _sub_41A52E
    asm("loc_41A52E: mov -0x18(%ebp),%ecx;");
    asm("loc_41A531: add $0x50,%ecx;");
    asm("loc_41A534: jmp _sub_40E9B0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A539() // _sub_41A539
{
    __DEBUG_ASM(41A539);
    // chunk 0x41A539 _sub_41A539
    asm("loc_41A539: mov -0x18(%ebp),%ecx;");
    asm("loc_41A53C: add $0x58,%ecx;");
    asm("loc_41A53F: jmp _sub_40E9B0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A544() // _sub_41A544
{
    __DEBUG_ASM(41A544);
    // chunk 0x41A544 _sub_41A544
    asm("loc_41A544: mov -0x18(%ebp),%ecx;");
    asm("loc_41A547: add $0x60,%ecx;");
    asm("loc_41A54A: jmp _sub_40FB00;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A54F() // _sub_41A54F
{
    __DEBUG_ASM(41A54F);
    // chunk 0x41A54F _sub_41A54F
    asm("loc_41A54F: mov -0x18(%ebp),%ecx;");
    asm("loc_41A552: add $0x74,%ecx;");
    asm("loc_41A555: jmp _sub_40FBC0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A55A() // _sub_41A55A
{
    __DEBUG_ASM(41A55A);
    // chunk 0x41A55A _sub_41A55A
    asm("loc_41A55A: mov -0x18(%ebp),%ecx;");
    asm("loc_41A55D: add $0x88,%ecx;");
    asm("loc_41A563: jmp _sub_40FBC0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A568() // _sub_41A568
{
    __DEBUG_ASM(41A568);
    // chunk 0x41A568 _sub_41A568
    asm("loc_41A568: mov -0x1C(%ebp),%ecx;");
    asm("loc_41A56B: jmp _sub_40E910;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A570() // _sub_41A570
{
    __DEBUG_ASM(41A570);
    // chunk 0x41A570 _sub_41A570
    asm("loc_41A570: mov -0x1C(%ebp),%ecx;");
    asm("loc_41A573: jmp _sub_40E910;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A578() // _sub_41A578
{
    __DEBUG_ASM(41A578);
    // chunk 0x41A578 _sub_41A578
    asm("loc_41A578: mov -0x1C(%ebp),%ecx;");
    asm("loc_41A57B: jmp _sub_40E910;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A580() // _sub_41A580
{
    __DEBUG_ASM(41A580);
    // chunk 0x41A580 _sub_41A580
    asm("loc_41A580: mov -0x1C(%ebp),%ecx;");
    asm("loc_41A583: jmp _sub_40E910;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A588() // _SEH_40FC80
{
    __DEBUG_ASM(41A588);
    // chunk 0x41A588 _sub_41A588
    asm("loc_41A588: mov $_data_41F68C,%eax;");
    asm("loc_41A58D: jmp _sub_4193C0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A5A0() // _sub_41A5A0
{
    __DEBUG_ASM(41A5A0);
    // chunk 0x41A5A0 _sub_41A5A0
    asm("loc_41A5A0: lea -0x810(%ebp),%ecx;");
    asm("loc_41A5A6: jmp _sub_418AA4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A5AB() // _SEH_410350
{
    __DEBUG_ASM(41A5AB);
    // chunk 0x41A5AB _sub_41A5AB
    asm("loc_41A5AB: mov $_data_41F6B0,%eax;");
    asm("loc_41A5B0: jmp _sub_4193C0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A5C0() // _sub_41A5C0
{
    __DEBUG_ASM(41A5C0);
    // chunk 0x41A5C0 _sub_41A5C0
    asm("loc_41A5C0: lea -0x828(%ebp),%ecx;");
    asm("loc_41A5C6: jmp _sub_40E910;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A5CB() // _sub_41A5CB
{
    __DEBUG_ASM(41A5CB);
    // chunk 0x41A5CB _sub_41A5CB
    asm("loc_41A5CB: lea -0x828(%ebp),%ecx;");
    asm("loc_41A5D1: jmp _sub_40E910;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A5D6() // _sub_41A5D6
{
    __DEBUG_ASM(41A5D6);
    // chunk 0x41A5D6 _sub_41A5D6
    asm("loc_41A5D6: lea -0x82C(%ebp),%ecx;");
    asm("loc_41A5DC: jmp _sub_418AA4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A5E1() // _SEH_4104E0
{
    __DEBUG_ASM(41A5E1);
    // chunk 0x41A5E1 _sub_41A5E1
    asm("loc_41A5E1: mov $_data_41F6E4,%eax;");
    asm("loc_41A5E6: jmp _sub_4193C0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A5F0() // _sub_41A5F0
{
    __DEBUG_ASM(41A5F0);
    // chunk 0x41A5F0 _sub_41A5F0
    asm("loc_41A5F0: mov -0x10(%ebp),%eax;");
    asm("loc_41A5F3: push %eax;");
    asm("loc_41A5F4: call _sub_403AF0;");
    asm("loc_41A5F9: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A5FA() // _SEH_411CD0
{
    __DEBUG_ASM(41A5FA);
    // chunk 0x41A5FA _sub_41A5FA
    asm("loc_41A5FA: mov $_data_41F708,%eax;");
    asm("loc_41A5FF: jmp _sub_4193C0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A610() // _sub_41A610
{
    __DEBUG_ASM(41A610);
    // chunk 0x41A610 _sub_41A610
    asm("loc_41A610: mov -0x14(%ebp),%ecx;");
    asm("loc_41A613: jmp _sub_419230;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A618() // _sub_41A618
{
    __DEBUG_ASM(41A618);
    // chunk 0x41A618 _sub_41A618
    asm("loc_41A618: mov -0x14(%ebp),%ecx;");
    asm("loc_41A61B: add $0xC4,%ecx;");
    asm("loc_41A621: jmp _sub_41922A;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A626() // _sub_41A626
{
    __DEBUG_ASM(41A626);
    // chunk 0x41A626 _sub_41A626
    asm("loc_41A626: mov -0x14(%ebp),%ecx;");
    asm("loc_41A629: add $0x144,%ecx;");
    asm("loc_41A62F: jmp _sub_419224;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A634() // _SEH_411D70
{
    __DEBUG_ASM(41A634);
    // chunk 0x41A634 _sub_41A634
    asm("loc_41A634: mov $_data_41F73C,%eax;");
    asm("loc_41A639: jmp _sub_4193C0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A640() // _sub_41A640
{
    __DEBUG_ASM(41A640);
    // chunk 0x41A640 _sub_41A640
    asm("loc_41A640: mov -0x10(%ebp),%ecx;");
    asm("loc_41A643: jmp _sub_419230;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A648() // _sub_41A648
{
    __DEBUG_ASM(41A648);
    // chunk 0x41A648 _sub_41A648
    asm("loc_41A648: mov -0x10(%ebp),%ecx;");
    asm("loc_41A64B: add $0xC4,%ecx;");
    asm("loc_41A651: jmp _sub_41922A;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A656() // _SEH_411E50
{
    __DEBUG_ASM(41A656);
    // chunk 0x41A656 _sub_41A656
    asm("loc_41A656: mov $_data_41F768,%eax;");
    asm("loc_41A65B: jmp _sub_4193C0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A660() // _sub_41A660
{
    __DEBUG_ASM(41A660);
    // chunk 0x41A660 _sub_41A660
    asm("loc_41A660: lea -0x58(%ebp),%ecx;");
    asm("loc_41A663: jmp _sub_418AA4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A668() // _SEH_411FD0
{
    __DEBUG_ASM(41A668);
    // chunk 0x41A668 _sub_41A668
    asm("loc_41A668: mov $_data_41F78C,%eax;");
    asm("loc_41A66D: jmp _sub_4193C0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A680() // _sub_41A680
{
    __DEBUG_ASM(41A680);
    // chunk 0x41A680 _sub_41A680
    asm("loc_41A680: lea -0x50(%ebp),%ecx;");
    asm("loc_41A683: jmp _sub_418AA4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A688() // _SEH_4120A0
{
    __DEBUG_ASM(41A688);
    // chunk 0x41A688 _sub_41A688
    asm("loc_41A688: mov $_data_41F7B0,%eax;");
    asm("loc_41A68D: jmp _sub_4193C0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A6A0() // _sub_41A6A0
{
    __DEBUG_ASM(41A6A0);
    // chunk 0x41A6A0 _sub_41A6A0
    asm("loc_41A6A0: lea -0x58(%ebp),%ecx;");
    asm("loc_41A6A3: jmp _sub_418AA4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A6A8() // _SEH_412130
{
    __DEBUG_ASM(41A6A8);
    // chunk 0x41A6A8 _sub_41A6A8
    asm("loc_41A6A8: mov $_data_41F7D4,%eax;");
    asm("loc_41A6AD: jmp _sub_4193C0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A6C0() // _sub_41A6C0
{
    __DEBUG_ASM(41A6C0);
    // chunk 0x41A6C0 _sub_41A6C0
    asm("loc_41A6C0: lea -0x50(%ebp),%ecx;");
    asm("loc_41A6C3: jmp _sub_418AA4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A6C8() // _SEH_4121D0
{
    __DEBUG_ASM(41A6C8);
    // chunk 0x41A6C8 _sub_41A6C8
    asm("loc_41A6C8: mov $_data_41F7F8,%eax;");
    asm("loc_41A6CD: jmp _sub_4193C0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A6E0() // _sub_41A6E0
{
    __DEBUG_ASM(41A6E0);
    // chunk 0x41A6E0 _sub_41A6E0
    asm("loc_41A6E0: lea -0x50(%ebp),%ecx;");
    asm("loc_41A6E3: jmp _sub_418AA4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A6E8() // _SEH_412260
{
    __DEBUG_ASM(41A6E8);
    // chunk 0x41A6E8 _sub_41A6E8
    asm("loc_41A6E8: mov $_data_41F81C,%eax;");
    asm("loc_41A6ED: jmp _sub_4193C0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A700() // _sub_41A700
{
    __DEBUG_ASM(41A700);
    // chunk 0x41A700 _sub_41A700
    asm("loc_41A700: lea -0x3C(%ebp),%ecx;");
    asm("loc_41A703: jmp _sub_418AA4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A708() // _sub_41A708
{
    __DEBUG_ASM(41A708);
    // chunk 0x41A708 _sub_41A708
    asm("loc_41A708: lea -0x40(%ebp),%ecx;");
    asm("loc_41A70B: jmp _sub_418AA4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A710() // _sub_41A710
{
    __DEBUG_ASM(41A710);
    // chunk 0x41A710 _sub_41A710
    asm("loc_41A710: lea -0x34(%ebp),%ecx;");
    asm("loc_41A713: jmp _sub_418AA4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A718() // _sub_41A718
{
    __DEBUG_ASM(41A718);
    // chunk 0x41A718 _sub_41A718
    asm("loc_41A718: lea -0x34(%ebp),%ecx;");
    asm("loc_41A71B: jmp _sub_418AA4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A720() // _SEH_4122F0
{
    __DEBUG_ASM(41A720);
    // chunk 0x41A720 _sub_41A720
    asm("loc_41A720: mov $_data_41F858,%eax;");
    asm("loc_41A725: jmp _sub_4193C0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A730() // _sub_41A730
{
    __DEBUG_ASM(41A730);
    // chunk 0x41A730 _sub_41A730
    asm("loc_41A730: mov -0x10(%ebp),%ecx;");
    asm("loc_41A733: jmp _sub_418A98;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A738() // _sub_41A738
{
    __DEBUG_ASM(41A738);
    // chunk 0x41A738 _sub_41A738
    asm("loc_41A738: mov -0x10(%ebp),%ecx;");
    asm("loc_41A73B: add $0x60,%ecx;");
    asm("loc_41A73E: jmp _sub_418C78;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A743() // _sub_41A743
{
    __DEBUG_ASM(41A743);
    // chunk 0x41A743 _sub_41A743
    asm("loc_41A743: mov -0x10(%ebp),%ecx;");
    asm("loc_41A746: add $0xA0,%ecx;");
    asm("loc_41A74C: jmp _sub_418C78;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A751() // _sub_41A751
{
    __DEBUG_ASM(41A751);
    // chunk 0x41A751 _sub_41A751
    asm("loc_41A751: mov -0x10(%ebp),%ecx;");
    asm("loc_41A754: add $0xE0,%ecx;");
    asm("loc_41A75A: jmp _sub_418C78;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A75F() // _sub_41A75F
{
    __DEBUG_ASM(41A75F);
    // chunk 0x41A75F _sub_41A75F
    asm("loc_41A75F: mov -0x10(%ebp),%ecx;");
    asm("loc_41A762: add $0x120,%ecx;");
    asm("loc_41A768: jmp _sub_418D86;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A76D() // _sub_41A76D
{
    __DEBUG_ASM(41A76D);
    // chunk 0x41A76D _sub_41A76D
    asm("loc_41A76D: mov -0x10(%ebp),%ecx;");
    asm("loc_41A770: add $0x160,%ecx;");
    asm("loc_41A776: jmp _sub_418C78;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A77B() // _SEH_4128C0
{
    __DEBUG_ASM(41A77B);
    // chunk 0x41A77B _sub_41A77B
    asm("loc_41A77B: mov $_data_41F8A4,%eax;");
    asm("loc_41A780: jmp _sub_4193C0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A790() // _sub_41A790
{
    __DEBUG_ASM(41A790);
    // chunk 0x41A790 _sub_41A790
    asm("loc_41A790: lea -0x54(%ebp),%ecx;");
    asm("loc_41A793: jmp _sub_418AC8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A798() // _SEH_412A70
{
    __DEBUG_ASM(41A798);
    // chunk 0x41A798 _sub_41A798
    asm("loc_41A798: mov $_data_41F8C8,%eax;");
    asm("loc_41A79D: jmp _sub_4193C0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A7B0() // _sub_41A7B0
{
    __DEBUG_ASM(41A7B0);
    // chunk 0x41A7B0 _sub_41A7B0
    asm("loc_41A7B0: lea -0x210(%ebp),%ecx;");
    asm("loc_41A7B6: jmp _sub_409300;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A7BB() // _sub_41A7BB
{
    __DEBUG_ASM(41A7BB);
    // chunk 0x41A7BB _sub_41A7BB
    asm("loc_41A7BB: lea -0x210(%ebp),%ecx;");
    asm("loc_41A7C1: jmp _sub_418A98;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A7C6() // _sub_41A7C6
{
    __DEBUG_ASM(41A7C6);
    // chunk 0x41A7C6 _sub_41A7C6
    asm("loc_41A7C6: lea -0x1B0(%ebp),%ecx;");
    asm("loc_41A7CC: jmp _sub_418C78;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A7D1() // _sub_41A7D1
{
    __DEBUG_ASM(41A7D1);
    // chunk 0x41A7D1 _sub_41A7D1
    asm("loc_41A7D1: lea -0x16C(%ebp),%ecx;");
    asm("loc_41A7D7: jmp _sub_40FC80;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A7DC() // _sub_41A7DC
{
    __DEBUG_ASM(41A7DC);
    // chunk 0x41A7DC _sub_41A7DC
    asm("loc_41A7DC: lea -0xD0(%ebp),%ecx;");
    asm("loc_41A7E2: jmp _sub_418C78;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A7E7() // _sub_41A7E7
{
    __DEBUG_ASM(41A7E7);
    // chunk 0x41A7E7 _sub_41A7E7
    asm("loc_41A7E7: lea -0x90(%ebp),%ecx;");
    asm("loc_41A7ED: jmp _sub_418C78;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A7F2() // _SEH_412E50
{
    __DEBUG_ASM(41A7F2);
    // chunk 0x41A7F2 _sub_41A7F2
    asm("loc_41A7F2: mov $_data_41F914,%eax;");
    asm("loc_41A7F7: jmp _sub_4193C0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A800() // _sub_41A800
{
    __DEBUG_ASM(41A800);
    // chunk 0x41A800 _sub_41A800
    asm("loc_41A800: lea -0x86C(%ebp),%ecx;");
    asm("loc_41A806: jmp _sub_4027B0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A80B() // _sub_41A80B
{
    __DEBUG_ASM(41A80B);
    // chunk 0x41A80B _sub_41A80B
    asm("loc_41A80B: lea -0x884(%ebp),%ecx;");
    asm("loc_41A811: jmp _sub_403BD0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A816() // _SEH_412FB0
{
    __DEBUG_ASM(41A816);
    // chunk 0x41A816 _sub_41A816
    asm("loc_41A816: mov $_data_41F940,%eax;");
    asm("loc_41A81B: jmp _sub_4193C0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A820() // _sub_41A820
{
    __DEBUG_ASM(41A820);
    // chunk 0x41A820 _sub_41A820
    asm("loc_41A820: lea -0x6C(%ebp),%ecx;");
    asm("loc_41A823: jmp _sub_4027B0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A828() // _SEH_4131A0
{
    __DEBUG_ASM(41A828);
    // chunk 0x41A828 _sub_41A828
    asm("loc_41A828: mov $_data_41F964,%eax;");
    asm("loc_41A82D: jmp _sub_4193C0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A840() // _sub_41A840
{
    __DEBUG_ASM(41A840);
    // chunk 0x41A840 _sub_41A840
    asm("loc_41A840: mov -0x10(%ebp),%ecx;");
    asm("loc_41A843: jmp _sub_418A98;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A848() // _SEH_413380
{
    __DEBUG_ASM(41A848);
    // chunk 0x41A848 _sub_41A848
    asm("loc_41A848: mov $_data_41F988,%eax;");
    asm("loc_41A84D: jmp _sub_4193C0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A860() // _sub_41A860
{
    __DEBUG_ASM(41A860);
    // chunk 0x41A860 _sub_41A860
    asm("loc_41A860: lea -0x11C(%ebp),%ecx;");
    asm("loc_41A866: jmp _sub_418AA4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A86B() // _sub_41A86B
{
    __DEBUG_ASM(41A86B);
    // chunk 0x41A86B _sub_41A86B
    asm("loc_41A86B: lea -0x11C(%ebp),%ecx;");
    asm("loc_41A871: jmp _sub_418AA4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A876() // _sub_41A876
{
    __DEBUG_ASM(41A876);
    // chunk 0x41A876 _sub_41A876
    asm("loc_41A876: lea -0x11C(%ebp),%ecx;");
    asm("loc_41A87C: jmp _sub_418AA4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A881() // _sub_41A881
{
    __DEBUG_ASM(41A881);
    // chunk 0x41A881 _sub_41A881
    asm("loc_41A881: lea -0x11C(%ebp),%ecx;");
    asm("loc_41A887: jmp _sub_418AA4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A88C() // _sub_41A88C
{
    __DEBUG_ASM(41A88C);
    // chunk 0x41A88C _sub_41A88C
    asm("loc_41A88C: lea -0x11C(%ebp),%ecx;");
    asm("loc_41A892: jmp _sub_418AA4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A897() // _sub_41A897
{
    __DEBUG_ASM(41A897);
    // chunk 0x41A897 _sub_41A897
    asm("loc_41A897: lea -0x11C(%ebp),%ecx;");
    asm("loc_41A89D: jmp _sub_418AA4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A8A2() // _sub_41A8A2
{
    __DEBUG_ASM(41A8A2);
    // chunk 0x41A8A2 _sub_41A8A2
    asm("loc_41A8A2: lea -0x118(%ebp),%ecx;");
    asm("loc_41A8A8: jmp _sub_418AA4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A8AD() // _SEH_4136A0
{
    __DEBUG_ASM(41A8AD);
    // chunk 0x41A8AD _sub_41A8AD
    asm("loc_41A8AD: mov $_data_41F9DC,%eax;");
    asm("loc_41A8B2: jmp _sub_4193C0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A8C0() // _sub_41A8C0
{
    __DEBUG_ASM(41A8C0);
    // chunk 0x41A8C0 _sub_41A8C0
    asm("loc_41A8C0: mov -0x10(%ebp),%ecx;");
    asm("loc_41A8C3: jmp _sub_418A98;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A8C8() // _sub_41A8C8
{
    __DEBUG_ASM(41A8C8);
    // chunk 0x41A8C8 _sub_41A8C8
    asm("loc_41A8C8: mov -0x10(%ebp),%ecx;");
    asm("loc_41A8CB: add $0x60,%ecx;");
    asm("loc_41A8CE: jmp _sub_403BD0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A8D3() // _sub_41A8D3
{
    __DEBUG_ASM(41A8D3);
    // chunk 0x41A8D3 _sub_41A8D3
    asm("loc_41A8D3: mov -0x10(%ebp),%ecx;");
    asm("loc_41A8D6: add $0x70,%ecx;");
    asm("loc_41A8D9: jmp _sub_418C24;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A8DE() // _sub_41A8DE
{
    __DEBUG_ASM(41A8DE);
    // chunk 0x41A8DE _sub_41A8DE
    asm("loc_41A8DE: mov -0x10(%ebp),%ecx;");
    asm("loc_41A8E1: add $0xB0,%ecx;");
    asm("loc_41A8E7: jmp _sub_418C24;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A8EC() // _SEH_413DF0
{
    __DEBUG_ASM(41A8EC);
    // chunk 0x41A8EC _sub_41A8EC
    asm("loc_41A8EC: mov $_data_41FA18,%eax;");
    asm("loc_41A8F1: jmp _sub_4193C0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A900() // _sub_41A900
{
    __DEBUG_ASM(41A900);
    // chunk 0x41A900 _sub_41A900
    asm("loc_41A900: mov -0x14(%ebp),%ecx;");
    asm("loc_41A903: jmp _sub_418A98;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A908() // _sub_41A908
{
    __DEBUG_ASM(41A908);
    // chunk 0x41A908 _sub_41A908
    asm("loc_41A908: mov -0x14(%ebp),%ecx;");
    asm("loc_41A90B: add $0x60,%ecx;");
    asm("loc_41A90E: jmp _sub_403BD0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A913() // _sub_41A913
{
    __DEBUG_ASM(41A913);
    // chunk 0x41A913 _sub_41A913
    asm("loc_41A913: mov -0x14(%ebp),%ecx;");
    asm("loc_41A916: add $0x70,%ecx;");
    asm("loc_41A919: jmp _sub_418C24;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A91E() // _sub_41A91E
{
    __DEBUG_ASM(41A91E);
    // chunk 0x41A91E _sub_41A91E
    asm("loc_41A91E: mov -0x14(%ebp),%ecx;");
    asm("loc_41A921: add $0xB0,%ecx;");
    asm("loc_41A927: jmp _sub_418C24;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A92C() // _sub_41A92C
{
    __DEBUG_ASM(41A92C);
    // chunk 0x41A92C _sub_41A92C
    asm("loc_41A92C: mov -0x14(%ebp),%ecx;");
    asm("loc_41A92F: add $0xF0,%ecx;");
    asm("loc_41A935: jmp _sub_418C24;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A93A() // _SEH_413EC0
{
    __DEBUG_ASM(41A93A);
    // chunk 0x41A93A _sub_41A93A
    asm("loc_41A93A: mov $_data_41FA5C,%eax;");
    asm("loc_41A93F: jmp _sub_4193C0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A950() // _sub_41A950
{
    __DEBUG_ASM(41A950);
    // chunk 0x41A950 _sub_41A950
    asm("loc_41A950: lea -0x844(%ebp),%ecx;");
    asm("loc_41A956: jmpl *_import_41B09C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A95C() // _sub_41A95C
{
    __DEBUG_ASM(41A95C);
    // chunk 0x41A95C _sub_41A95C
    asm("loc_41A95C: lea -0x828(%ebp),%ecx;");
    asm("loc_41A962: jmpl *_import_41B030;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A968() // _sub_41A968
{
    __DEBUG_ASM(41A968);
    // chunk 0x41A968 _sub_41A968
    asm("loc_41A968: lea -0x848(%ebp),%ecx;");
    asm("loc_41A96E: jmp _sub_414310;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A973() // _sub_41A973
{
    __DEBUG_ASM(41A973);
    // chunk 0x41A973 _sub_41A973
    asm("loc_41A973: lea -0x820(%ebp),%ecx;");
    asm("loc_41A979: jmpl *_import_41B038;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A97F() // _sub_41A97F
{
    __DEBUG_ASM(41A97F);
    // chunk 0x41A97F _sub_41A97F
    asm("loc_41A97F: lea -0x848(%ebp),%ecx;");
    asm("loc_41A985: jmp _sub_414310;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A98A() // _SEH_414080
{
    __DEBUG_ASM(41A98A);
    // chunk 0x41A98A _sub_41A98A
    asm("loc_41A98A: mov $_data_41FAA0,%eax;");
    asm("loc_41A98F: jmp _sub_4193C0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A9A0() // _sub_41A9A0
{
    __DEBUG_ASM(41A9A0);
    // chunk 0x41A9A0 _sub_41A9A0
    asm("loc_41A9A0: lea -0x20(%ebp),%ecx;");
    asm("loc_41A9A3: jmp _sub_414600;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A9A8() // _SEH_414530
{
    __DEBUG_ASM(41A9A8);
    // chunk 0x41A9A8 _sub_41A9A8
    asm("loc_41A9A8: mov $_data_41FAC4,%eax;");
    asm("loc_41A9AD: jmp _sub_4193C0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A9C0() // _sub_41A9C0
{
    __DEBUG_ASM(41A9C0);
    // chunk 0x41A9C0 _sub_41A9C0
    asm("loc_41A9C0: mov 4(%ebp),%eax;");
    asm("loc_41A9C3: push %eax;");
    asm("loc_41A9C4: mov -0x10(%ebp),%ecx;");
    asm("loc_41A9C7: push %ecx;");
    asm("loc_41A9C8: call _sub_405A30;");
    asm("loc_41A9CD: add $8,%esp;");
    asm("loc_41A9D0: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A9D1() // _SEH_415400
{
    __DEBUG_ASM(41A9D1);
    // chunk 0x41A9D1 _sub_41A9D1
    asm("loc_41A9D1: mov $_data_41FAE8,%eax;");
    asm("loc_41A9D6: jmp _sub_4193C0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A9E0() // _sub_41A9E0
{
    __DEBUG_ASM(41A9E0);
    // chunk 0x41A9E0 _sub_41A9E0
    asm("loc_41A9E0: mov 4(%ebp),%eax;");
    asm("loc_41A9E3: push %eax;");
    asm("loc_41A9E4: mov -0x10(%ebp),%ecx;");
    asm("loc_41A9E7: push %ecx;");
    asm("loc_41A9E8: call _sub_405A30;");
    asm("loc_41A9ED: add $8,%esp;");
    asm("loc_41A9F0: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41A9F1() // _SEH_415450
{
    __DEBUG_ASM(41A9F1);
    // chunk 0x41A9F1 _sub_41A9F1
    asm("loc_41A9F1: mov $_data_41FB0C,%eax;");
    asm("loc_41A9F6: jmp _sub_4193C0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41AA00() // _sub_41AA00
{
    __DEBUG_ASM(41AA00);
    // chunk 0x41AA00 _sub_41AA00
    asm("loc_41AA00: mov -0x10(%ebp),%ecx;");
    asm("loc_41AA03: jmp _sub_418A98;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41AA08() // _SEH_415910
{
    __DEBUG_ASM(41AA08);
    // chunk 0x41AA08 _sub_41AA08
    asm("loc_41AA08: mov $_data_41FB30,%eax;");
    asm("loc_41AA0D: jmp _sub_4193C0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41AA20() // _sub_41AA20
{
    __DEBUG_ASM(41AA20);
    // chunk 0x41AA20 _sub_41AA20
    asm("loc_41AA20: mov -0x10(%ebp),%ecx;");
    asm("loc_41AA23: jmp _sub_418A98;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41AA28() // _SEH_4159A0
{
    __DEBUG_ASM(41AA28);
    // chunk 0x41AA28 _sub_41AA28
    asm("loc_41AA28: mov $_data_41FB54,%eax;");
    asm("loc_41AA2D: jmp _sub_4193C0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41AA40() // _sub_41AA40
{
    __DEBUG_ASM(41AA40);
    // chunk 0x41AA40 _sub_41AA40
    asm("loc_41AA40: lea -0x87C(%ebp),%ecx;");
    asm("loc_41AA46: jmp _sub_403BD0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41AA4B() // _sub_41AA4B
{
    __DEBUG_ASM(41AA4B);
    // chunk 0x41AA4B _sub_41AA4B
    asm("loc_41AA4B: lea -0x86C(%ebp),%ecx;");
    asm("loc_41AA51: jmp _sub_413BB0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41AA56() // _SEH_415A30
{
    __DEBUG_ASM(41AA56);
    // chunk 0x41AA56 _sub_41AA56
    asm("loc_41AA56: mov $_data_41FB80,%eax;");
    asm("loc_41AA5B: jmp _sub_4193C0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41AA60() // _sub_41AA60
{
    __DEBUG_ASM(41AA60);
    // chunk 0x41AA60 _sub_41AA60
    asm("loc_41AA60: mov -0x10(%ebp),%ecx;");
    asm("loc_41AA63: jmp _sub_418A98;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41AA68() // _sub_41AA68
{
    __DEBUG_ASM(41AA68);
    // chunk 0x41AA68 _sub_41AA68
    asm("loc_41AA68: mov -0x10(%ebp),%ecx;");
    asm("loc_41AA6B: add $0x64,%ecx;");
    asm("loc_41AA6E: jmp _sub_418C24;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41AA73() // _sub_41AA73
{
    __DEBUG_ASM(41AA73);
    // chunk 0x41AA73 _sub_41AA73
    asm("loc_41AA73: mov -0x10(%ebp),%ecx;");
    asm("loc_41AA76: add $0xA4,%ecx;");
    asm("loc_41AA7C: jmp _sub_418C24;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41AA81() // _SEH_415FF0
{
    __DEBUG_ASM(41AA81);
    // chunk 0x41AA81 _sub_41AA81
    asm("loc_41AA81: mov $_data_41FBB4,%eax;");
    asm("loc_41AA86: jmp _sub_4193C0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41AA90() // _sub_41AA90
{
    __DEBUG_ASM(41AA90);
    // chunk 0x41AA90 _sub_41AA90
    asm("loc_41AA90: mov -0x14(%ebp),%ecx;");
    asm("loc_41AA93: jmp _sub_418A98;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41AA98() // _sub_41AA98
{
    __DEBUG_ASM(41AA98);
    // chunk 0x41AA98 _sub_41AA98
    asm("loc_41AA98: mov -0x14(%ebp),%ecx;");
    asm("loc_41AA9B: add $0x64,%ecx;");
    asm("loc_41AA9E: jmp _sub_418C24;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41AAA3() // _sub_41AAA3
{
    __DEBUG_ASM(41AAA3);
    // chunk 0x41AAA3 _sub_41AAA3
    asm("loc_41AAA3: mov -0x14(%ebp),%ecx;");
    asm("loc_41AAA6: add $0xA4,%ecx;");
    asm("loc_41AAAC: jmp _sub_418C24;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41AAB1() // _sub_41AAB1
{
    __DEBUG_ASM(41AAB1);
    // chunk 0x41AAB1 _sub_41AAB1
    asm("loc_41AAB1: mov -0x14(%ebp),%ecx;");
    asm("loc_41AAB4: add $0xE4,%ecx;");
    asm("loc_41AABA: jmp _sub_418C24;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41AABF() // _SEH_4160B0
{
    __DEBUG_ASM(41AABF);
    // chunk 0x41AABF _sub_41AABF
    asm("loc_41AABF: mov $_data_41FBF0,%eax;");
    asm("loc_41AAC4: jmp _sub_4193C0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41AAD0() // _sub_41AAD0
{
    __DEBUG_ASM(41AAD0);
    // chunk 0x41AAD0 _sub_41AAD0
    asm("loc_41AAD0: lea -0x844(%ebp),%ecx;");
    asm("loc_41AAD6: jmpl *_import_41B09C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41AADC() // _sub_41AADC
{
    __DEBUG_ASM(41AADC);
    // chunk 0x41AADC _sub_41AADC
    asm("loc_41AADC: lea -0x828(%ebp),%ecx;");
    asm("loc_41AAE2: jmpl *_import_41B030;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41AAE8() // _sub_41AAE8
{
    __DEBUG_ASM(41AAE8);
    // chunk 0x41AAE8 _sub_41AAE8
    asm("loc_41AAE8: lea -0x848(%ebp),%ecx;");
    asm("loc_41AAEE: jmp _sub_414310;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41AAF3() // _sub_41AAF3
{
    __DEBUG_ASM(41AAF3);
    // chunk 0x41AAF3 _sub_41AAF3
    asm("loc_41AAF3: lea -0x820(%ebp),%ecx;");
    asm("loc_41AAF9: jmpl *_import_41B038;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41AAFF() // _sub_41AAFF
{
    __DEBUG_ASM(41AAFF);
    // chunk 0x41AAFF _sub_41AAFF
    asm("loc_41AAFF: lea -0x848(%ebp),%ecx;");
    asm("loc_41AB05: jmp _sub_414310;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41AB0A() // _SEH_416580
{
    __DEBUG_ASM(41AB0A);
    // chunk 0x41AB0A _sub_41AB0A
    asm("loc_41AB0A: mov $_data_41FC34,%eax;");
    asm("loc_41AB0F: jmp _sub_4193C0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41AB20() // _unknown_libname_8
{
    __DEBUG_ASM(41AB20);
    // chunk 0x41AB20 _sub_41AB20
    asm("loc_41AB20: mov -0x10(%ebp),%ecx;");
    asm("loc_41AB23: jmp _sub_418A98;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41AB28() // _sub_41AB28
{
    __DEBUG_ASM(41AB28);
    // chunk 0x41AB28 _sub_41AB28
    asm("loc_41AB28: mov -0x10(%ebp),%ecx;");
    asm("loc_41AB2B: add $0x60,%ecx;");
    asm("loc_41AB2E: jmp _sub_418C24;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41AB33() // _SEH_417EE0
{
    __DEBUG_ASM(41AB33);
    // chunk 0x41AB33 _sub_41AB33
    asm("loc_41AB33: mov $_data_41FC60,%eax;");
    asm("loc_41AB38: jmp _sub_4193C0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41AB40() // _unknown_libname_9
{
    __DEBUG_ASM(41AB40);
    // chunk 0x41AB40 _sub_41AB40
    asm("loc_41AB40: mov -0x10(%ebp),%ecx;");
    asm("loc_41AB43: jmp _sub_418A98;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41AB48() // _sub_41AB48
{
    __DEBUG_ASM(41AB48);
    // chunk 0x41AB48 _sub_41AB48
    asm("loc_41AB48: mov -0x10(%ebp),%ecx;");
    asm("loc_41AB4B: add $0x60,%ecx;");
    asm("loc_41AB4E: jmp _sub_418C24;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41AB53() // _SEH_417F40
{
    __DEBUG_ASM(41AB53);
    // chunk 0x41AB53 _sub_41AB53
    asm("loc_41AB53: mov $_data_41FC8C,%eax;");
    asm("loc_41AB58: jmp _sub_4193C0;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41AB60() // _sub_41AB60
{
    __DEBUG_ASM(41AB60);
    // chunk 0x41AB60 _sub_41AB60
    asm("loc_41AB60: lea -0x844(%ebp),%ecx;");
    asm("loc_41AB66: jmpl *_import_41B09C;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41AB6C() // _sub_41AB6C
{
    __DEBUG_ASM(41AB6C);
    // chunk 0x41AB6C _sub_41AB6C
    asm("loc_41AB6C: lea -0x828(%ebp),%ecx;");
    asm("loc_41AB72: jmpl *_import_41B030;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41AB78() // _sub_41AB78
{
    __DEBUG_ASM(41AB78);
    // chunk 0x41AB78 _sub_41AB78
    asm("loc_41AB78: lea -0x848(%ebp),%ecx;");
    asm("loc_41AB7E: jmp _sub_414310;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41AB83() // _sub_41AB83
{
    __DEBUG_ASM(41AB83);
    // chunk 0x41AB83 _sub_41AB83
    asm("loc_41AB83: lea -0x820(%ebp),%ecx;");
    asm("loc_41AB89: jmpl *_import_41B038;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41AB8F() // _sub_41AB8F
{
    __DEBUG_ASM(41AB8F);
    // chunk 0x41AB8F _sub_41AB8F
    asm("loc_41AB8F: lea -0x848(%ebp),%ecx;");
    asm("loc_41AB95: jmp _sub_414310;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_41AB9A() // _SEH_418110
{
    __DEBUG_ASM(41AB9A);
    // chunk 0x41AB9A _sub_41AB9A
    asm("loc_41AB9A: mov $_data_41FCD0,%eax;");
    asm("loc_41AB9F: jmp _sub_4193C0;");
    asm("int3;"); // unreachable
}
#ifdef __cplusplus
}
#endif // __cplusplus
#endif // __INTELLISENSE__
