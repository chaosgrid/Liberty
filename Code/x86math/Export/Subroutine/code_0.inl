#ifndef __INTELLISENSE__
// clang-format off
#include "..\..\PCH.h"
#pragma init_seg(lib)
#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

_naked _weak void _sub_6F71000() // _sub_6F71000
{
    __DEBUG_ASM(6F71000);
    // chunk 0x6F71000 _sub_6F71000
    asm("loc_6F71000: call _sub_6F71010;");
    asm("loc_6F71005: jmp _sub_6F71060;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6F71010() // _sub_6F71010
{
    __DEBUG_ASM(6F71010);
    // chunk 0x6F71010 _sub_6F71010
    asm("loc_6F71010: sub $8,%esp;");
    asm("loc_6F71013: xor %eax,%eax;");
    asm("loc_6F71015: mov %eax,%ecx;");
    asm("loc_6F71017: or $0xFC,%ch;");
    asm("loc_6F7101A: shl $0xE,%ecx;");
    asm("loc_6F7101D: mov %ecx,(%esp);");
    asm("loc_6F71021: flds (%esp);");
    asm("loc_6F71025: fsqrt;");
    asm("loc_6F71027: fdivrl _data_6F73078;");
    asm("loc_6F7102D: fstps 4(%esp);");
    asm("loc_6F71031: mov 4(%esp),%edx;");
    asm("loc_6F71035: add $0x2000,%edx;");
    asm("loc_6F7103B: shr $0xF,%edx;");
    asm("loc_6F7103E: mov %dl,_data_6F74030(%eax);");
    asm("loc_6F71044: inc %eax;");
    asm("loc_6F71045: cmp $0x400,%eax;");
    asm("loc_6F7104A: jl loc_6F71015;");
    asm("loc_6F7104C: movb $0xFF,_data_6F74030+0x200;");
    asm("loc_6F71053: add $8,%esp;");
    asm("loc_6F71056: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6F71060() // _sub_6F71060
{
    __DEBUG_ASM(6F71060);
    // chunk 0x6F71060 _sub_6F71060
    asm("loc_6F71060: push $_sub_6F71070;");
    asm("loc_6F71065: call _sub_6F7298C;");
    asm("loc_6F7106A: pop %ecx;");
    asm("loc_6F7106B: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6F71070() // _sub_6F71070
{
    __DEBUG_ASM(6F71070);
    // chunk 0x6F71070 _sub_6F71070
    asm("loc_6F71070: mov _data_6F74430,%cl;");
    asm("loc_6F71076: mov $1,%al;");
    asm("loc_6F71078: test %cl,%al;");
    asm("loc_6F7107A: jne loc_6F71084;");
    asm("loc_6F7107C: or %al,%cl;");
    asm("loc_6F7107E: mov %cl,_data_6F74430;");
    asm("loc_6F71084: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6F71090() // _DllMain@12
{
    __DEBUG_ASM(6F71090);
    // chunk 0x6F71090 _sub_6F71090
    asm("loc_6F71090: mov 8(%esp),%eax;");
    asm("loc_6F71094: dec %eax;");
    asm("loc_6F71095: jne loc_6F71145;");
    asm("loc_6F7109B: mov 4(%esp),%eax;");
    asm("loc_6F7109F: push %eax;");
    asm("loc_6F710A0: calll *_import_6F7300C;");
    asm("loc_6F710A6: push $8;");
    asm("loc_6F710A8: call _sub_6F7299E;");
    asm("loc_6F710AD: add $4,%esp;");
    asm("loc_6F710B0: test %eax,%eax;");
    asm("loc_6F710B2: je loc_6F71120;");
    asm("loc_6F710B4: movl $_off_6F73090,(%eax);");
    asm("loc_6F710BA: movl $_off_6F73080,4(%eax);");
    asm("loc_6F710C1: xor %ecx,%ecx;");
    asm("loc_6F710C3: mov %ecx,%edx;");
    asm("loc_6F710C5: or $0xFC,%dh;");
    asm("loc_6F710C8: shl $0xE,%edx;");
    asm("loc_6F710CB: mov %edx,8(%esp);");
    asm("loc_6F710CF: flds 8(%esp);");
    asm("loc_6F710D3: fsqrt;");
    asm("loc_6F710D5: fdivrl _data_6F73078;");
    asm("loc_6F710DB: fstps 4(%esp);");
    asm("loc_6F710DF: mov 4(%esp),%edx;");
    asm("loc_6F710E3: add $0x2000,%edx;");
    asm("loc_6F710E9: shr $0xF,%edx;");
    asm("loc_6F710EC: mov %dl,_data_6F74030(%ecx);");
    asm("loc_6F710F2: inc %ecx;");
    asm("loc_6F710F3: cmp $0x400,%ecx;");
    asm("loc_6F710F9: jl loc_6F710C3;");
    asm("loc_6F710FB: movb $0xFF,_data_6F74030+0x200;");
    asm("loc_6F71102: mov %eax,_data_6F74438;");
    asm("loc_6F71107: calll *_import_6F73004;");
    asm("loc_6F7110D: test %eax,%eax;");
    asm("loc_6F7110F: je loc_6F71145;");
    asm("loc_6F71111: mov _data_6F74438,%ecx;");
    asm("loc_6F71117: test %ecx,%ecx;");
    asm("loc_6F71119: je loc_6F71132;");
    asm("loc_6F7111B: add $4,%ecx;");
    asm("loc_6F7111E: jmp loc_6F71134;");
    asm("loc_6F71120: movl $0,_data_6F74438;");
    asm("loc_6F7112A: mov $1,%eax;");
    asm("loc_6F7112F: ret $0xC;");
    asm("loc_6F71132: xor %ecx,%ecx;");
    asm("loc_6F71134: mov (%eax),%edx;");
    asm("loc_6F71136: push $0x40000000;");
    asm("loc_6F7113B: push $_data_6F74020;");
    asm("loc_6F71140: push %ecx;");
    asm("loc_6F71141: push %eax;");
    asm("loc_6F71142: calll *0x10(%edx);");
    asm("loc_6F71145: mov $1,%eax;");
    asm("loc_6F7114A: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6F71150() // _x86MathEngine_QueryInterface
{
    __DEBUG_ASM(6F71150);
    // chunk 0x6F71150 _sub_6F71150
    asm("loc_6F71150: mov 0xC(%esp),%eax;");
    asm("loc_6F71154: movl $0,(%eax);");
    asm("loc_6F7115A: or $0xFFFFFFFF,%eax;");
    asm("loc_6F7115D: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6F71160() // _x86MathEngine_AddRef_Release
{
    __DEBUG_ASM(6F71160);
    // chunk 0x6F71160 _sub_6F71160
    asm("loc_6F71160: mov $1,%eax;");
    asm("loc_6F71165: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6F71170() // _x86MathEngine_IComponentFactory_CreateInstance
{
    __DEBUG_ASM(6F71170);
    // chunk 0x6F71170 _sub_6F71170
    asm("loc_6F71170: mov 8(%esp),%eax;");
    asm("loc_6F71174: push %ebx;");
    asm("loc_6F71175: mov 0x10(%esp),%ebx;");
    asm("loc_6F71179: push %esi;");
    asm("loc_6F7117A: test %eax,%eax;");
    asm("loc_6F7117C: push %edi;");
    asm("loc_6F7117D: movl $0,(%ebx);");
    asm("loc_6F71183: je loc_6F711DE;");
    asm("loc_6F71185: mov 4(%eax),%edi;");
    asm("loc_6F71188: test %edi,%edi;");
    asm("loc_6F7118A: je loc_6F711DE;");
    asm("loc_6F7118C: cmpl $0xC,(%eax);");
    asm("loc_6F7118F: jne loc_6F711D3;");
    asm("loc_6F71191: mov $_data_6F74020,%esi;");
    asm("loc_6F71196: mov $0xD,%ecx;");
    asm("loc_6F7119B: xor %edx,%edx;");
    asm("loc_6F7119D: repe cmpsb (%edi),(%esi);");
    asm("loc_6F7119F: jne loc_6F711D3;");
    asm("loc_6F711A1: mov 8(%eax),%eax;");
    asm("loc_6F711A4: test %eax,%eax;");
    asm("loc_6F711A6: je loc_6F711BB;");
    asm("loc_6F711A8: push %eax;");
    asm("loc_6F711A9: push $_data_6F73060;");
    asm("loc_6F711AE: calll *_import_6F73000;");
    asm("loc_6F711B4: add $8,%esp;");
    asm("loc_6F711B7: test %eax,%eax;");
    asm("loc_6F711B9: jne loc_6F711D3;");
    asm("loc_6F711BB: mov 0x10(%esp),%eax;");
    asm("loc_6F711BF: mov -4(%eax),%ecx;");
    asm("loc_6F711C2: lea -4(%eax),%esi;");
    asm("loc_6F711C5: push %esi;");
    asm("loc_6F711C6: calll *4(%ecx);");
    asm("loc_6F711C9: mov %esi,(%ebx);");
    asm("loc_6F711CB: pop %edi;");
    asm("loc_6F711CC: pop %esi;");
    asm("loc_6F711CD: xor %eax,%eax;");
    asm("loc_6F711CF: pop %ebx;");
    asm("loc_6F711D0: ret $0xC;");
    asm("loc_6F711D3: pop %edi;");
    asm("loc_6F711D4: pop %esi;");
    asm("loc_6F711D5: mov $0xFFFFFFFD,%eax;");
    asm("loc_6F711DA: pop %ebx;");
    asm("loc_6F711DB: ret $0xC;");
    asm("loc_6F711DE: pop %edi;");
    asm("loc_6F711DF: pop %esi;");
    asm("loc_6F711E0: mov $0xFFFFFFFE,%eax;");
    asm("loc_6F711E5: pop %ebx;");
    asm("loc_6F711E6: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6F711F0() // _sub_6F711F0
{
    __DEBUG_ASM(6F711F0);
    // chunk 0x6F711F0 _sub_6F711F0
    asm("loc_6F711F0: mov 4(%esp),%eax;");
    asm("loc_6F711F4: push %esi;");
    asm("loc_6F711F5: mov 0x10(%esp),%esi;");
    asm("loc_6F711F9: mov (%eax),%ecx;");
    asm("loc_6F711FB: push %esi;");
    asm("loc_6F711FC: push %eax;");
    asm("loc_6F711FD: calll *0x14(%ecx);");
    asm("loc_6F71200: fld %st(0);");
    asm("loc_6F71202: fabs;");
    asm("loc_6F71204: flds _data_6F73064;");
    asm("loc_6F7120A: fcompp;");
    asm("loc_6F7120C: fnstsw %ax;");
    asm("loc_6F7120E: test $5,%ah;");
    asm("loc_6F71211: mov 0xC(%esp),%eax;");
    asm("loc_6F71215: jp loc_6F712D7;");
    asm("loc_6F7121B: fdivrs _data_6F730F8;");
    asm("loc_6F71221: flds 0x10(%esi);");
    asm("loc_6F71224: fmuls 0x20(%esi);");
    asm("loc_6F71227: flds 0x14(%esi);");
    asm("loc_6F7122A: fmuls 0x1C(%esi);");
    asm("loc_6F7122D: fsubrp;");
    asm("loc_6F7122F: fmul %st(1),%st;");
    asm("loc_6F71231: fstps (%eax);");
    asm("loc_6F71233: flds 0x20(%esi);");
    asm("loc_6F71236: fmuls 0xC(%esi);");
    asm("loc_6F71239: flds 0x14(%esi);");
    asm("loc_6F7123C: fmuls 0x18(%esi);");
    asm("loc_6F7123F: fsubrp;");
    asm("loc_6F71241: fmul %st(1),%st;");
    asm("loc_6F71243: fchs;");
    asm("loc_6F71245: fstps 0xC(%eax);");
    asm("loc_6F71248: flds 0x1C(%esi);");
    asm("loc_6F7124B: fmuls 0xC(%esi);");
    asm("loc_6F7124E: flds 0x10(%esi);");
    asm("loc_6F71251: fmuls 0x18(%esi);");
    asm("loc_6F71254: fsubrp;");
    asm("loc_6F71256: fmul %st(1),%st;");
    asm("loc_6F71258: fstps 0x18(%eax);");
    asm("loc_6F7125B: flds 0x20(%esi);");
    asm("loc_6F7125E: fmuls 4(%esi);");
    asm("loc_6F71261: flds 0x1C(%esi);");
    asm("loc_6F71264: fmuls 8(%esi);");
    asm("loc_6F71267: fsubrp;");
    asm("loc_6F71269: fmul %st(1),%st;");
    asm("loc_6F7126B: fchs;");
    asm("loc_6F7126D: fstps 4(%eax);");
    asm("loc_6F71270: flds 0x20(%esi);");
    asm("loc_6F71273: fmuls (%esi);");
    asm("loc_6F71275: flds 8(%esi);");
    asm("loc_6F71278: fmuls 0x18(%esi);");
    asm("loc_6F7127B: fsubrp;");
    asm("loc_6F7127D: fmul %st(1),%st;");
    asm("loc_6F7127F: fstps 0x10(%eax);");
    asm("loc_6F71282: flds 0x1C(%esi);");
    asm("loc_6F71285: fmuls (%esi);");
    asm("loc_6F71287: flds 4(%esi);");
    asm("loc_6F7128A: fmuls 0x18(%esi);");
    asm("loc_6F7128D: fsubrp;");
    asm("loc_6F7128F: fmul %st(1),%st;");
    asm("loc_6F71291: fchs;");
    asm("loc_6F71293: fstps 0x1C(%eax);");
    asm("loc_6F71296: flds 0x14(%esi);");
    asm("loc_6F71299: fmuls 4(%esi);");
    asm("loc_6F7129C: flds 0x10(%esi);");
    asm("loc_6F7129F: fmuls 8(%esi);");
    asm("loc_6F712A2: fsubrp;");
    asm("loc_6F712A4: fmul %st(1),%st;");
    asm("loc_6F712A6: fstps 8(%eax);");
    asm("loc_6F712A9: flds 0x14(%esi);");
    asm("loc_6F712AC: fmuls (%esi);");
    asm("loc_6F712AE: flds 8(%esi);");
    asm("loc_6F712B1: fmuls 0xC(%esi);");
    asm("loc_6F712B4: fsubrp;");
    asm("loc_6F712B6: fmul %st(1),%st;");
    asm("loc_6F712B8: fchs;");
    asm("loc_6F712BA: fstps 0x14(%eax);");
    asm("loc_6F712BD: flds 0x10(%esi);");
    asm("loc_6F712C0: fmuls (%esi);");
    asm("loc_6F712C2: flds 4(%esi);");
    asm("loc_6F712C5: fmuls 0xC(%esi);");
    asm("loc_6F712C8: pop %esi;");
    asm("loc_6F712C9: fsubrp;");
    asm("loc_6F712CB: fmul %st(1),%st;");
    asm("loc_6F712CD: fstps 0x20(%eax);");
    asm("loc_6F712D0: xor %eax,%eax;");
    asm("loc_6F712D2: fstp %st(0);");
    asm("loc_6F712D4: ret $0xC;");
    asm("loc_6F712D7: fstp %st(0);");
    asm("loc_6F712D9: flds 0x10(%esi);");
    asm("loc_6F712DC: fmuls 0x20(%esi);");
    asm("loc_6F712DF: flds 0x14(%esi);");
    asm("loc_6F712E2: fmuls 0x1C(%esi);");
    asm("loc_6F712E5: fsubrp;");
    asm("loc_6F712E7: fstps (%eax);");
    asm("loc_6F712E9: flds 0x20(%esi);");
    asm("loc_6F712EC: fmuls 0xC(%esi);");
    asm("loc_6F712EF: flds 0x14(%esi);");
    asm("loc_6F712F2: fmuls 0x18(%esi);");
    asm("loc_6F712F5: fsubrp;");
    asm("loc_6F712F7: fchs;");
    asm("loc_6F712F9: fstps 0xC(%eax);");
    asm("loc_6F712FC: flds 0x1C(%esi);");
    asm("loc_6F712FF: fmuls 0xC(%esi);");
    asm("loc_6F71302: flds 0x10(%esi);");
    asm("loc_6F71305: fmuls 0x18(%esi);");
    asm("loc_6F71308: fsubrp;");
    asm("loc_6F7130A: fstps 0x18(%eax);");
    asm("loc_6F7130D: flds 0x20(%esi);");
    asm("loc_6F71310: fmuls 4(%esi);");
    asm("loc_6F71313: flds 0x1C(%esi);");
    asm("loc_6F71316: fmuls 8(%esi);");
    asm("loc_6F71319: fsubrp;");
    asm("loc_6F7131B: fchs;");
    asm("loc_6F7131D: fstps 4(%eax);");
    asm("loc_6F71320: flds 0x20(%esi);");
    asm("loc_6F71323: fmuls (%esi);");
    asm("loc_6F71325: flds 8(%esi);");
    asm("loc_6F71328: fmuls 0x18(%esi);");
    asm("loc_6F7132B: fsubrp;");
    asm("loc_6F7132D: fstps 0x10(%eax);");
    asm("loc_6F71330: flds 0x1C(%esi);");
    asm("loc_6F71333: fmuls (%esi);");
    asm("loc_6F71335: flds 4(%esi);");
    asm("loc_6F71338: fmuls 0x18(%esi);");
    asm("loc_6F7133B: fsubrp;");
    asm("loc_6F7133D: fchs;");
    asm("loc_6F7133F: fstps 0x1C(%eax);");
    asm("loc_6F71342: flds 0x14(%esi);");
    asm("loc_6F71345: fmuls 4(%esi);");
    asm("loc_6F71348: flds 0x10(%esi);");
    asm("loc_6F7134B: fmuls 8(%esi);");
    asm("loc_6F7134E: fsubrp;");
    asm("loc_6F71350: fstps 8(%eax);");
    asm("loc_6F71353: flds 0x14(%esi);");
    asm("loc_6F71356: fmuls (%esi);");
    asm("loc_6F71358: flds 8(%esi);");
    asm("loc_6F7135B: fmuls 0xC(%esi);");
    asm("loc_6F7135E: fsubrp;");
    asm("loc_6F71360: fchs;");
    asm("loc_6F71362: fstps 0x14(%eax);");
    asm("loc_6F71365: flds 0x10(%esi);");
    asm("loc_6F71368: fmuls (%esi);");
    asm("loc_6F7136A: flds 4(%esi);");
    asm("loc_6F7136D: fmuls 0xC(%esi);");
    asm("loc_6F71370: pop %esi;");
    asm("loc_6F71371: fsubrp;");
    asm("loc_6F71373: fstps 0x20(%eax);");
    asm("loc_6F71376: mov $0xFFFFFFFE,%eax;");
    asm("loc_6F7137B: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6F71380() // _sub_6F71380
{
    __DEBUG_ASM(6F71380);
    // chunk 0x6F71380 _sub_6F71380
    asm("loc_6F71380: mov 0x10(%esp),%ecx;");
    asm("loc_6F71384: flds 0x10(%ecx);");
    asm("loc_6F71387: fmuls 0x20(%ecx);");
    asm("loc_6F7138A: flds 0x1C(%ecx);");
    asm("loc_6F7138D: fmuls 0x14(%ecx);");
    asm("loc_6F71390: fsubrp;");
    asm("loc_6F71392: fld %st(0);");
    asm("loc_6F71394: fmuls (%ecx);");
    asm("loc_6F71396: flds 0xC(%ecx);");
    asm("loc_6F71399: fmuls 0x20(%ecx);");
    asm("loc_6F7139C: flds 0x18(%ecx);");
    asm("loc_6F7139F: fmuls 0x14(%ecx);");
    asm("loc_6F713A2: fsubrp;");
    asm("loc_6F713A4: fmuls 4(%ecx);");
    asm("loc_6F713A7: fsubrp;");
    asm("loc_6F713A9: flds 0x1C(%ecx);");
    asm("loc_6F713AC: fmuls 0xC(%ecx);");
    asm("loc_6F713AF: flds 0x18(%ecx);");
    asm("loc_6F713B2: fmuls 0x10(%ecx);");
    asm("loc_6F713B5: fsubrp;");
    asm("loc_6F713B7: fmuls 8(%ecx);");
    asm("loc_6F713BA: faddp;");
    asm("loc_6F713BC: fld %st(0);");
    asm("loc_6F713BE: fabs;");
    asm("loc_6F713C0: flds _data_6F73064;");
    asm("loc_6F713C6: fcompp;");
    asm("loc_6F713C8: fnstsw %ax;");
    asm("loc_6F713CA: test $5,%ah;");
    asm("loc_6F713CD: jp loc_6F713D9;");
    asm("loc_6F713CF: fdivrs _data_6F730F8;");
    asm("loc_6F713D5: xor %eax,%eax;");
    asm("loc_6F713D7: jmp loc_6F713E6;");
    asm("loc_6F713D9: fstp %st(0);");
    asm("loc_6F713DB: flds _data_6F730F8;");
    asm("loc_6F713E1: mov $0xFFFFFFFE,%eax;");
    asm("loc_6F713E6: mov 8(%esp),%edx;");
    asm("loc_6F713EA: fxch;");
    asm("loc_6F713EC: fmul %st(1),%st;");
    asm("loc_6F713EE: fstps (%edx);");
    asm("loc_6F713F0: flds 4(%ecx);");
    asm("loc_6F713F3: fmuls 0x20(%ecx);");
    asm("loc_6F713F6: flds 0x1C(%ecx);");
    asm("loc_6F713F9: fmuls 8(%ecx);");
    asm("loc_6F713FC: fsubrp;");
    asm("loc_6F713FE: fmul %st(1),%st;");
    asm("loc_6F71400: fchs;");
    asm("loc_6F71402: fstps 4(%edx);");
    asm("loc_6F71405: flds 4(%ecx);");
    asm("loc_6F71408: fmuls 0x14(%ecx);");
    asm("loc_6F7140B: flds 8(%ecx);");
    asm("loc_6F7140E: fmuls 0x10(%ecx);");
    asm("loc_6F71411: fsubrp;");
    asm("loc_6F71413: fmul %st(1),%st;");
    asm("loc_6F71415: fstps 8(%edx);");
    asm("loc_6F71418: flds 0xC(%ecx);");
    asm("loc_6F7141B: fmuls 0x20(%ecx);");
    asm("loc_6F7141E: flds 0x18(%ecx);");
    asm("loc_6F71421: fmuls 0x14(%ecx);");
    asm("loc_6F71424: fsubrp;");
    asm("loc_6F71426: fmul %st(1),%st;");
    asm("loc_6F71428: fchs;");
    asm("loc_6F7142A: fstps 0xC(%edx);");
    asm("loc_6F7142D: flds (%ecx);");
    asm("loc_6F7142F: fmuls 0x20(%ecx);");
    asm("loc_6F71432: flds 0x18(%ecx);");
    asm("loc_6F71435: fmuls 8(%ecx);");
    asm("loc_6F71438: fsubrp;");
    asm("loc_6F7143A: fmul %st(1),%st;");
    asm("loc_6F7143C: fstps 0x10(%edx);");
    asm("loc_6F7143F: flds (%ecx);");
    asm("loc_6F71441: fmuls 0x14(%ecx);");
    asm("loc_6F71444: flds 0xC(%ecx);");
    asm("loc_6F71447: fmuls 8(%ecx);");
    asm("loc_6F7144A: fsubrp;");
    asm("loc_6F7144C: fmul %st(1),%st;");
    asm("loc_6F7144E: fchs;");
    asm("loc_6F71450: fstps 0x14(%edx);");
    asm("loc_6F71453: flds 0x1C(%ecx);");
    asm("loc_6F71456: fmuls 0xC(%ecx);");
    asm("loc_6F71459: flds 0x18(%ecx);");
    asm("loc_6F7145C: fmuls 0x10(%ecx);");
    asm("loc_6F7145F: fsubrp;");
    asm("loc_6F71461: fmul %st(1),%st;");
    asm("loc_6F71463: fstps 0x18(%edx);");
    asm("loc_6F71466: flds 0x1C(%ecx);");
    asm("loc_6F71469: fmuls (%ecx);");
    asm("loc_6F7146B: flds 0x18(%ecx);");
    asm("loc_6F7146E: fmuls 4(%ecx);");
    asm("loc_6F71471: fsubrp;");
    asm("loc_6F71473: fmul %st(1),%st;");
    asm("loc_6F71475: fchs;");
    asm("loc_6F71477: fstps 0x1C(%edx);");
    asm("loc_6F7147A: flds 0x10(%ecx);");
    asm("loc_6F7147D: fmuls (%ecx);");
    asm("loc_6F7147F: flds 0xC(%ecx);");
    asm("loc_6F71482: fmuls 4(%ecx);");
    asm("loc_6F71485: fsubrp;");
    asm("loc_6F71487: fmul %st(1),%st;");
    asm("loc_6F71489: fstps 0x20(%edx);");
    asm("loc_6F7148C: flds 0x2C(%ecx);");
    asm("loc_6F7148F: fmuls 4(%ecx);");
    asm("loc_6F71492: fmuls 0x14(%ecx);");
    asm("loc_6F71495: flds 0x28(%ecx);");
    asm("loc_6F71498: fmuls 0x1C(%ecx);");
    asm("loc_6F7149B: fmuls 8(%ecx);");
    asm("loc_6F7149E: faddp;");
    asm("loc_6F714A0: flds 0x24(%ecx);");
    asm("loc_6F714A3: fmuls 0x10(%ecx);");
    asm("loc_6F714A6: fmuls 0x20(%ecx);");
    asm("loc_6F714A9: faddp;");
    asm("loc_6F714AB: flds 0x28(%ecx);");
    asm("loc_6F714AE: fmuls 4(%ecx);");
    asm("loc_6F714B1: fmuls 0x20(%ecx);");
    asm("loc_6F714B4: fsubrp;");
    asm("loc_6F714B6: flds 8(%ecx);");
    asm("loc_6F714B9: fmuls 0x2C(%ecx);");
    asm("loc_6F714BC: fmuls 0x10(%ecx);");
    asm("loc_6F714BF: fsubrp;");
    asm("loc_6F714C1: flds 0x1C(%ecx);");
    asm("loc_6F714C4: fmuls 0x24(%ecx);");
    asm("loc_6F714C7: fmuls 0x14(%ecx);");
    asm("loc_6F714CA: fsubrp;");
    asm("loc_6F714CC: fmul %st(1),%st;");
    asm("loc_6F714CE: fchs;");
    asm("loc_6F714D0: fstps 0x24(%edx);");
    asm("loc_6F714D3: flds 0xC(%ecx);");
    asm("loc_6F714D6: fmuls 0x24(%ecx);");
    asm("loc_6F714D9: fmuls 0x20(%ecx);");
    asm("loc_6F714DC: flds 0x2C(%ecx);");
    asm("loc_6F714DF: fmuls (%ecx);");
    asm("loc_6F714E1: fmuls 0x14(%ecx);");
    asm("loc_6F714E4: faddp;");
    asm("loc_6F714E6: flds 0x28(%ecx);");
    asm("loc_6F714E9: fmuls 0x18(%ecx);");
    asm("loc_6F714EC: fmuls 8(%ecx);");
    asm("loc_6F714EF: faddp;");
    asm("loc_6F714F1: flds 0x28(%ecx);");
    asm("loc_6F714F4: fmuls (%ecx);");
    asm("loc_6F714F6: fmuls 0x20(%ecx);");
    asm("loc_6F714F9: fsubrp;");
    asm("loc_6F714FB: flds 0xC(%ecx);");
    asm("loc_6F714FE: fmuls 8(%ecx);");
    asm("loc_6F71501: fmuls 0x2C(%ecx);");
    asm("loc_6F71504: fsubrp;");
    asm("loc_6F71506: flds 0x18(%ecx);");
    asm("loc_6F71509: fmuls 0x24(%ecx);");
    asm("loc_6F7150C: fmuls 0x14(%ecx);");
    asm("loc_6F7150F: fsubrp;");
    asm("loc_6F71511: fmul %st(1),%st;");
    asm("loc_6F71513: fstps 0x28(%edx);");
    asm("loc_6F71516: flds 0x2C(%ecx);");
    asm("loc_6F71519: fmuls 0x10(%ecx);");
    asm("loc_6F7151C: fmuls (%ecx);");
    asm("loc_6F7151E: flds 0x1C(%ecx);");
    asm("loc_6F71521: fmuls 0xC(%ecx);");
    asm("loc_6F71524: fmuls 0x24(%ecx);");
    asm("loc_6F71527: faddp;");
    asm("loc_6F71529: flds 0x28(%ecx);");
    asm("loc_6F7152C: fmuls 0x18(%ecx);");
    asm("loc_6F7152F: fmuls 4(%ecx);");
    asm("loc_6F71532: faddp;");
    asm("loc_6F71534: flds 0x28(%ecx);");
    asm("loc_6F71537: fmuls 0x1C(%ecx);");
    asm("loc_6F7153A: fmuls (%ecx);");
    asm("loc_6F7153C: fsubrp;");
    asm("loc_6F7153E: flds 0xC(%ecx);");
    asm("loc_6F71541: fmuls 0x2C(%ecx);");
    asm("loc_6F71544: fmuls 4(%ecx);");
    asm("loc_6F71547: fsubrp;");
    asm("loc_6F71549: flds 0x18(%ecx);");
    asm("loc_6F7154C: fmuls 0x24(%ecx);");
    asm("loc_6F7154F: fmuls 0x10(%ecx);");
    asm("loc_6F71552: fsubrp;");
    asm("loc_6F71554: fmul %st(1),%st;");
    asm("loc_6F71556: fchs;");
    asm("loc_6F71558: fstps 0x2C(%edx);");
    asm("loc_6F7155B: flds 0x10(%ecx);");
    asm("loc_6F7155E: fmuls (%ecx);");
    asm("loc_6F71560: fmuls 0x20(%ecx);");
    asm("loc_6F71563: flds 0x1C(%ecx);");
    asm("loc_6F71566: fmuls 0xC(%ecx);");
    asm("loc_6F71569: fmuls 8(%ecx);");
    asm("loc_6F7156C: faddp;");
    asm("loc_6F7156E: flds 0x18(%ecx);");
    asm("loc_6F71571: fmuls 4(%ecx);");
    asm("loc_6F71574: fmuls 0x14(%ecx);");
    asm("loc_6F71577: faddp;");
    asm("loc_6F71579: flds 0x18(%ecx);");
    asm("loc_6F7157C: fmuls 8(%ecx);");
    asm("loc_6F7157F: fmuls 0x10(%ecx);");
    asm("loc_6F71582: fsubrp;");
    asm("loc_6F71584: flds 0x1C(%ecx);");
    asm("loc_6F71587: fmuls (%ecx);");
    asm("loc_6F71589: fmuls 0x14(%ecx);");
    asm("loc_6F7158C: fsubrp;");
    asm("loc_6F7158E: flds 0xC(%ecx);");
    asm("loc_6F71591: fmuls 4(%ecx);");
    asm("loc_6F71594: fmuls 0x20(%ecx);");
    asm("loc_6F71597: mov 0xC(%esp),%ecx;");
    asm("loc_6F7159B: fsubrp;");
    asm("loc_6F7159D: fmul %st(1),%st;");
    asm("loc_6F7159F: fstps (%ecx);");
    asm("loc_6F715A1: fstp %st(0);");
    asm("loc_6F715A3: ret $0x10;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6F715B0() // _sub_6F715B0
{
    __DEBUG_ASM(6F715B0);
    // chunk 0x6F715B0 _sub_6F715B0
    asm("loc_6F715B0: mov 0xC(%esp),%eax;");
    asm("loc_6F715B4: mov 8(%esp),%ecx;");
    asm("loc_6F715B8: flds 0x10(%esp);");
    asm("loc_6F715BC: fmuls (%eax);");
    asm("loc_6F715BE: fstps (%ecx);");
    asm("loc_6F715C0: flds 0x10(%esp);");
    asm("loc_6F715C4: fmuls 4(%eax);");
    asm("loc_6F715C7: fstps 4(%ecx);");
    asm("loc_6F715CA: flds 0x10(%esp);");
    asm("loc_6F715CE: fmuls 8(%eax);");
    asm("loc_6F715D1: fstps 8(%ecx);");
    asm("loc_6F715D4: flds 0x10(%esp);");
    asm("loc_6F715D8: fmuls 0xC(%eax);");
    asm("loc_6F715DB: fstps 0xC(%ecx);");
    asm("loc_6F715DE: flds 0x10(%esp);");
    asm("loc_6F715E2: fmuls 0x10(%eax);");
    asm("loc_6F715E5: fstps 0x10(%ecx);");
    asm("loc_6F715E8: flds 0x10(%esp);");
    asm("loc_6F715EC: fmuls 0x14(%eax);");
    asm("loc_6F715EF: fstps 0x14(%ecx);");
    asm("loc_6F715F2: flds 0x10(%esp);");
    asm("loc_6F715F6: fmuls 0x18(%eax);");
    asm("loc_6F715F9: fstps 0x18(%ecx);");
    asm("loc_6F715FC: flds 0x10(%esp);");
    asm("loc_6F71600: fmuls 0x1C(%eax);");
    asm("loc_6F71603: fstps 0x1C(%ecx);");
    asm("loc_6F71606: flds 0x10(%esp);");
    asm("loc_6F7160A: fmuls 0x20(%eax);");
    asm("loc_6F7160D: xor %eax,%eax;");
    asm("loc_6F7160F: fstps 0x20(%ecx);");
    asm("loc_6F71612: ret $0x10;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6F71620() // _sub_6F71620
{
    __DEBUG_ASM(6F71620);
    // chunk 0x6F71620 _sub_6F71620
    asm("loc_6F71620: mov 8(%esp),%eax;");
    asm("loc_6F71624: flds 0x18(%eax);");
    asm("loc_6F71627: fmuls 4(%eax);");
    asm("loc_6F7162A: fmuls 0x14(%eax);");
    asm("loc_6F7162D: flds 8(%eax);");
    asm("loc_6F71630: fmuls 0xC(%eax);");
    asm("loc_6F71633: fmuls 0x1C(%eax);");
    asm("loc_6F71636: faddp;");
    asm("loc_6F71638: flds 0x20(%eax);");
    asm("loc_6F7163B: fmuls (%eax);");
    asm("loc_6F7163D: fmuls 0x10(%eax);");
    asm("loc_6F71640: faddp;");
    asm("loc_6F71642: flds (%eax);");
    asm("loc_6F71644: fmuls 0x1C(%eax);");
    asm("loc_6F71647: fmuls 0x14(%eax);");
    asm("loc_6F7164A: fsubrp;");
    asm("loc_6F7164C: flds 0x20(%eax);");
    asm("loc_6F7164F: fmuls 4(%eax);");
    asm("loc_6F71652: fmuls 0xC(%eax);");
    asm("loc_6F71655: fsubrp;");
    asm("loc_6F71657: flds 0x18(%eax);");
    asm("loc_6F7165A: fmuls 8(%eax);");
    asm("loc_6F7165D: fmuls 0x10(%eax);");
    asm("loc_6F71660: fsubrp;");
    asm("loc_6F71662: ret $8;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6F71670() // _sub_6F71670
{
    __DEBUG_ASM(6F71670);
    // chunk 0x6F71670 _sub_6F71670
    asm("loc_6F71670: mov 8(%esp),%edx;");
    asm("loc_6F71674: mov 0x10(%esp),%ecx;");
    asm("loc_6F71678: push %esi;");
    asm("loc_6F71679: push %edi;");
    asm("loc_6F7167A: mov 0x14(%esp),%edi;");
    asm("loc_6F7167E: mov %edx,%esi;");
    asm("loc_6F71680: sub %edi,%esi;");
    asm("loc_6F71682: lea 4(%edi),%eax;");
    asm("loc_6F71685: mov $3,%edi;");
    asm("loc_6F7168A: flds 4(%eax);");
    asm("loc_6F7168D: fmuls 0x18(%ecx);");
    asm("loc_6F71690: flds 0xC(%ecx);");
    asm("loc_6F71693: fmuls (%eax);");
    asm("loc_6F71695: add $0xC,%eax;");
    asm("loc_6F71698: add $0xC,%edx;");
    asm("loc_6F7169B: dec %edi;");
    asm("loc_6F7169C: faddp;");
    asm("loc_6F7169E: flds -0x10(%eax);");
    asm("loc_6F716A1: fmuls (%ecx);");
    asm("loc_6F716A3: faddp;");
    asm("loc_6F716A5: fstps -0xC(%edx);");
    asm("loc_6F716A8: flds 4(%ecx);");
    asm("loc_6F716AB: fmuls -0x10(%eax);");
    asm("loc_6F716AE: flds -8(%eax);");
    asm("loc_6F716B1: fmuls 0x1C(%ecx);");
    asm("loc_6F716B4: faddp;");
    asm("loc_6F716B6: flds 0x10(%ecx);");
    asm("loc_6F716B9: fmuls -0xC(%eax);");
    asm("loc_6F716BC: faddp;");
    asm("loc_6F716BE: fstps -0xC(%esi,%eax);");
    asm("loc_6F716C2: flds 8(%ecx);");
    asm("loc_6F716C5: fmuls -0x10(%eax);");
    asm("loc_6F716C8: flds -8(%eax);");
    asm("loc_6F716CB: fmuls 0x20(%ecx);");
    asm("loc_6F716CE: faddp;");
    asm("loc_6F716D0: flds 0x14(%ecx);");
    asm("loc_6F716D3: fmuls -0xC(%eax);");
    asm("loc_6F716D6: faddp;");
    asm("loc_6F716D8: fstps -4(%edx);");
    asm("loc_6F716DB: jne loc_6F7168A;");
    asm("loc_6F716DD: pop %edi;");
    asm("loc_6F716DE: xor %eax,%eax;");
    asm("loc_6F716E0: pop %esi;");
    asm("loc_6F716E1: ret $0x10;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6F716F0() // _sub_6F716F0
{
    __DEBUG_ASM(6F716F0);
    // chunk 0x6F716F0 _sub_6F716F0
    asm("loc_6F716F0: mov 0xC(%esp),%eax;");
    asm("loc_6F716F4: mov 0x10(%esp),%ecx;");
    asm("loc_6F716F8: mov 8(%esp),%edx;");
    asm("loc_6F716FC: flds (%eax);");
    asm("loc_6F716FE: fmuls (%ecx);");
    asm("loc_6F71700: flds 4(%eax);");
    asm("loc_6F71703: fmuls 0xC(%ecx);");
    asm("loc_6F71706: faddp;");
    asm("loc_6F71708: flds 0x18(%ecx);");
    asm("loc_6F7170B: fmuls 8(%eax);");
    asm("loc_6F7170E: faddp;");
    asm("loc_6F71710: fstps (%edx);");
    asm("loc_6F71712: flds 4(%eax);");
    asm("loc_6F71715: fmuls 0x10(%ecx);");
    asm("loc_6F71718: flds 0x1C(%ecx);");
    asm("loc_6F7171B: fmuls 8(%eax);");
    asm("loc_6F7171E: faddp;");
    asm("loc_6F71720: flds 4(%ecx);");
    asm("loc_6F71723: fmuls (%eax);");
    asm("loc_6F71725: faddp;");
    asm("loc_6F71727: fstps 4(%edx);");
    asm("loc_6F7172A: flds 4(%eax);");
    asm("loc_6F7172D: fmuls 0x14(%ecx);");
    asm("loc_6F71730: flds 0x20(%ecx);");
    asm("loc_6F71733: fmuls 8(%eax);");
    asm("loc_6F71736: faddp;");
    asm("loc_6F71738: flds 8(%ecx);");
    asm("loc_6F7173B: fmuls (%eax);");
    asm("loc_6F7173D: faddp;");
    asm("loc_6F7173F: fstps 8(%edx);");
    asm("loc_6F71742: flds 4(%eax);");
    asm("loc_6F71745: fmuls 0x28(%ecx);");
    asm("loc_6F71748: flds 0x2C(%ecx);");
    asm("loc_6F7174B: fmuls 8(%eax);");
    asm("loc_6F7174E: faddp;");
    asm("loc_6F71750: flds 0x24(%ecx);");
    asm("loc_6F71753: fmuls (%eax);");
    asm("loc_6F71755: faddp;");
    asm("loc_6F71757: fadds 0x24(%eax);");
    asm("loc_6F7175A: fstps 0x24(%edx);");
    asm("loc_6F7175D: flds 0x10(%eax);");
    asm("loc_6F71760: fmuls 0xC(%ecx);");
    asm("loc_6F71763: flds 0xC(%eax);");
    asm("loc_6F71766: fmuls (%ecx);");
    asm("loc_6F71768: faddp;");
    asm("loc_6F7176A: flds 0x14(%eax);");
    asm("loc_6F7176D: fmuls 0x18(%ecx);");
    asm("loc_6F71770: faddp;");
    asm("loc_6F71772: fstps 0xC(%edx);");
    asm("loc_6F71775: flds 0x14(%eax);");
    asm("loc_6F71778: fmuls 0x1C(%ecx);");
    asm("loc_6F7177B: flds 0x10(%eax);");
    asm("loc_6F7177E: fmuls 0x10(%ecx);");
    asm("loc_6F71781: faddp;");
    asm("loc_6F71783: flds 0xC(%eax);");
    asm("loc_6F71786: fmuls 4(%ecx);");
    asm("loc_6F71789: faddp;");
    asm("loc_6F7178B: fstps 0x10(%edx);");
    asm("loc_6F7178E: flds 0x14(%eax);");
    asm("loc_6F71791: fmuls 0x20(%ecx);");
    asm("loc_6F71794: flds 0x10(%eax);");
    asm("loc_6F71797: fmuls 0x14(%ecx);");
    asm("loc_6F7179A: faddp;");
    asm("loc_6F7179C: flds 0xC(%eax);");
    asm("loc_6F7179F: fmuls 8(%ecx);");
    asm("loc_6F717A2: faddp;");
    asm("loc_6F717A4: fstps 0x14(%edx);");
    asm("loc_6F717A7: flds 0x2C(%ecx);");
    asm("loc_6F717AA: fmuls 0x14(%eax);");
    asm("loc_6F717AD: flds 0x28(%ecx);");
    asm("loc_6F717B0: fmuls 0x10(%eax);");
    asm("loc_6F717B3: faddp;");
    asm("loc_6F717B5: flds 0x24(%ecx);");
    asm("loc_6F717B8: fmuls 0xC(%eax);");
    asm("loc_6F717BB: faddp;");
    asm("loc_6F717BD: fadds 0x28(%eax);");
    asm("loc_6F717C0: fstps 0x28(%edx);");
    asm("loc_6F717C3: flds 0x1C(%eax);");
    asm("loc_6F717C6: fmuls 0xC(%ecx);");
    asm("loc_6F717C9: flds 0x20(%eax);");
    asm("loc_6F717CC: fmuls 0x18(%ecx);");
    asm("loc_6F717CF: faddp;");
    asm("loc_6F717D1: flds (%ecx);");
    asm("loc_6F717D3: fmuls 0x18(%eax);");
    asm("loc_6F717D6: faddp;");
    asm("loc_6F717D8: fstps 0x18(%edx);");
    asm("loc_6F717DB: flds 0x20(%eax);");
    asm("loc_6F717DE: fmuls 0x1C(%ecx);");
    asm("loc_6F717E1: flds 0x1C(%eax);");
    asm("loc_6F717E4: fmuls 0x10(%ecx);");
    asm("loc_6F717E7: faddp;");
    asm("loc_6F717E9: flds 4(%ecx);");
    asm("loc_6F717EC: fmuls 0x18(%eax);");
    asm("loc_6F717EF: faddp;");
    asm("loc_6F717F1: fstps 0x1C(%edx);");
    asm("loc_6F717F4: flds 0x20(%eax);");
    asm("loc_6F717F7: fmuls 0x20(%ecx);");
    asm("loc_6F717FA: flds 0x1C(%eax);");
    asm("loc_6F717FD: fmuls 0x14(%ecx);");
    asm("loc_6F71800: faddp;");
    asm("loc_6F71802: flds 8(%ecx);");
    asm("loc_6F71805: fmuls 0x18(%eax);");
    asm("loc_6F71808: faddp;");
    asm("loc_6F7180A: fstps 0x20(%edx);");
    asm("loc_6F7180D: flds 0x20(%eax);");
    asm("loc_6F71810: fmuls 0x2C(%ecx);");
    asm("loc_6F71813: flds 0x1C(%eax);");
    asm("loc_6F71816: fmuls 0x28(%ecx);");
    asm("loc_6F71819: faddp;");
    asm("loc_6F7181B: flds 0x24(%ecx);");
    asm("loc_6F7181E: fmuls 0x18(%eax);");
    asm("loc_6F71821: faddp;");
    asm("loc_6F71823: fadds 0x2C(%eax);");
    asm("loc_6F71826: xor %eax,%eax;");
    asm("loc_6F71828: fstps 0x2C(%edx);");
    asm("loc_6F7182B: ret $0x10;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6F71830() // _sub_6F71830
{
    __DEBUG_ASM(6F71830);
    // chunk 0x6F71830 _sub_6F71830
    asm("loc_6F71830: mov 0xC(%esp),%ecx;");
    asm("loc_6F71834: mov 0x10(%esp),%eax;");
    asm("loc_6F71838: mov 8(%esp),%edx;");
    asm("loc_6F7183C: flds 8(%ecx);");
    asm("loc_6F7183F: fmuls 8(%eax);");
    asm("loc_6F71842: flds 4(%ecx);");
    asm("loc_6F71845: fmuls 4(%eax);");
    asm("loc_6F71848: faddp;");
    asm("loc_6F7184A: flds (%ecx);");
    asm("loc_6F7184C: fmuls (%eax);");
    asm("loc_6F7184E: faddp;");
    asm("loc_6F71850: fstps (%edx);");
    asm("loc_6F71852: flds 0x14(%ecx);");
    asm("loc_6F71855: fmuls 8(%eax);");
    asm("loc_6F71858: flds 0xC(%ecx);");
    asm("loc_6F7185B: fmuls (%eax);");
    asm("loc_6F7185D: faddp;");
    asm("loc_6F7185F: flds 0x10(%ecx);");
    asm("loc_6F71862: fmuls 4(%eax);");
    asm("loc_6F71865: faddp;");
    asm("loc_6F71867: fstps 4(%edx);");
    asm("loc_6F7186A: flds 0x20(%ecx);");
    asm("loc_6F7186D: fmuls 8(%eax);");
    asm("loc_6F71870: flds 0x18(%ecx);");
    asm("loc_6F71873: fmuls (%eax);");
    asm("loc_6F71875: faddp;");
    asm("loc_6F71877: flds 0x1C(%ecx);");
    asm("loc_6F7187A: fmuls 4(%eax);");
    asm("loc_6F7187D: xor %eax,%eax;");
    asm("loc_6F7187F: faddp;");
    asm("loc_6F71881: fstps 8(%edx);");
    asm("loc_6F71884: ret $0x10;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6F71890() // _sub_6F71890
{
    __DEBUG_ASM(6F71890);
    // chunk 0x6F71890 _sub_6F71890
    asm("loc_6F71890: mov 0xC(%esp),%eax;");
    asm("loc_6F71894: mov 0x10(%esp),%ecx;");
    asm("loc_6F71898: mov 8(%esp),%edx;");
    asm("loc_6F7189C: flds 8(%eax);");
    asm("loc_6F7189F: fmuls 8(%ecx);");
    asm("loc_6F718A2: flds 4(%eax);");
    asm("loc_6F718A5: fmuls 4(%ecx);");
    asm("loc_6F718A8: faddp;");
    asm("loc_6F718AA: flds (%eax);");
    asm("loc_6F718AC: fmuls (%ecx);");
    asm("loc_6F718AE: faddp;");
    asm("loc_6F718B0: fadds 0x24(%eax);");
    asm("loc_6F718B3: fstps (%edx);");
    asm("loc_6F718B5: flds 0x14(%eax);");
    asm("loc_6F718B8: fmuls 8(%ecx);");
    asm("loc_6F718BB: flds 0xC(%eax);");
    asm("loc_6F718BE: fmuls (%ecx);");
    asm("loc_6F718C0: faddp;");
    asm("loc_6F718C2: flds 0x10(%eax);");
    asm("loc_6F718C5: fmuls 4(%ecx);");
    asm("loc_6F718C8: faddp;");
    asm("loc_6F718CA: fadds 0x28(%eax);");
    asm("loc_6F718CD: fstps 4(%edx);");
    asm("loc_6F718D0: flds 0x20(%eax);");
    asm("loc_6F718D3: fmuls 8(%ecx);");
    asm("loc_6F718D6: flds 0x18(%eax);");
    asm("loc_6F718D9: fmuls (%ecx);");
    asm("loc_6F718DB: faddp;");
    asm("loc_6F718DD: flds 0x1C(%eax);");
    asm("loc_6F718E0: fmuls 4(%ecx);");
    asm("loc_6F718E3: faddp;");
    asm("loc_6F718E5: fadds 0x2C(%eax);");
    asm("loc_6F718E8: xor %eax,%eax;");
    asm("loc_6F718EA: fstps 8(%edx);");
    asm("loc_6F718ED: ret $0x10;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6F718F0() // _sub_6F718F0
{
    __DEBUG_ASM(6F718F0);
    // chunk 0x6F718F0 _sub_6F718F0
    asm("loc_6F718F0: mov 0xC(%esp),%ecx;");
    asm("loc_6F718F4: mov 0x10(%esp),%eax;");
    asm("loc_6F718F8: mov 8(%esp),%edx;");
    asm("loc_6F718FC: flds 0x18(%ecx);");
    asm("loc_6F718FF: fmuls 8(%eax);");
    asm("loc_6F71902: flds 0xC(%ecx);");
    asm("loc_6F71905: fmuls 4(%eax);");
    asm("loc_6F71908: faddp;");
    asm("loc_6F7190A: flds (%ecx);");
    asm("loc_6F7190C: fmuls (%eax);");
    asm("loc_6F7190E: faddp;");
    asm("loc_6F71910: fstps (%edx);");
    asm("loc_6F71912: flds 0x1C(%ecx);");
    asm("loc_6F71915: fmuls 8(%eax);");
    asm("loc_6F71918: flds 4(%ecx);");
    asm("loc_6F7191B: fmuls (%eax);");
    asm("loc_6F7191D: faddp;");
    asm("loc_6F7191F: flds 0x10(%ecx);");
    asm("loc_6F71922: fmuls 4(%eax);");
    asm("loc_6F71925: faddp;");
    asm("loc_6F71927: fstps 4(%edx);");
    asm("loc_6F7192A: flds 0x20(%ecx);");
    asm("loc_6F7192D: fmuls 8(%eax);");
    asm("loc_6F71930: flds 8(%ecx);");
    asm("loc_6F71933: fmuls (%eax);");
    asm("loc_6F71935: faddp;");
    asm("loc_6F71937: flds 0x14(%ecx);");
    asm("loc_6F7193A: fmuls 4(%eax);");
    asm("loc_6F7193D: xor %eax,%eax;");
    asm("loc_6F7193F: faddp;");
    asm("loc_6F71941: fstps 8(%edx);");
    asm("loc_6F71944: ret $0x10;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6F71950() // _sub_6F71950
{
    __DEBUG_ASM(6F71950);
    // chunk 0x6F71950 _sub_6F71950
    asm("loc_6F71950: mov 0x10(%esp),%ecx;");
    asm("loc_6F71954: mov 0xC(%esp),%eax;");
    asm("loc_6F71958: flds (%ecx);");
    asm("loc_6F7195A: fsubs 0x24(%eax);");
    asm("loc_6F7195D: flds 4(%ecx);");
    asm("loc_6F71960: fsubs 0x28(%eax);");
    asm("loc_6F71963: flds 8(%ecx);");
    asm("loc_6F71966: fsubs 0x2C(%eax);");
    asm("loc_6F71969: mov 8(%esp),%ecx;");
    asm("loc_6F7196D: fld %st(0);");
    asm("loc_6F7196F: fmuls 0x18(%eax);");
    asm("loc_6F71972: fld %st(2);");
    asm("loc_6F71974: fmuls 0xC(%eax);");
    asm("loc_6F71977: faddp;");
    asm("loc_6F71979: fld %st(3);");
    asm("loc_6F7197B: fmuls (%eax);");
    asm("loc_6F7197D: faddp;");
    asm("loc_6F7197F: fstps (%ecx);");
    asm("loc_6F71981: fld %st(0);");
    asm("loc_6F71983: fmuls 0x1C(%eax);");
    asm("loc_6F71986: fld %st(2);");
    asm("loc_6F71988: fmuls 0x10(%eax);");
    asm("loc_6F7198B: faddp;");
    asm("loc_6F7198D: fld %st(3);");
    asm("loc_6F7198F: fmuls 4(%eax);");
    asm("loc_6F71992: faddp;");
    asm("loc_6F71994: fstps 4(%ecx);");
    asm("loc_6F71997: fmuls 0x20(%eax);");
    asm("loc_6F7199A: fxch;");
    asm("loc_6F7199C: fmuls 0x14(%eax);");
    asm("loc_6F7199F: faddp;");
    asm("loc_6F719A1: fxch;");
    asm("loc_6F719A3: fmuls 8(%eax);");
    asm("loc_6F719A6: xor %eax,%eax;");
    asm("loc_6F719A8: faddp;");
    asm("loc_6F719AA: fstps 8(%ecx);");
    asm("loc_6F719AD: ret $0x10;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6F719B0() // _sub_6F719B0
{
    __DEBUG_ASM(6F719B0);
    // chunk 0x6F719B0 _sub_6F719B0
    asm("loc_6F719B0: sub $0x3C,%esp;");
    asm("loc_6F719B3: push %ebx;");
    asm("loc_6F719B4: push %esi;");
    asm("loc_6F719B5: mov 0x50(%esp),%esi;");
    asm("loc_6F719B9: lea 8(%esp),%ecx;");
    asm("loc_6F719BD: flds (%esi);");
    asm("loc_6F719BF: fstps 8(%esp);");
    asm("loc_6F719C3: flds 4(%esi);");
    asm("loc_6F719C6: fstps 0xC(%esp);");
    asm("loc_6F719CA: flds 8(%esi);");
    asm("loc_6F719CD: fstps 0x10(%esp);");
    asm("loc_6F719D1: call _sub_6F71AF0;");
    asm("loc_6F719D6: flds 0xC(%esi);");
    asm("loc_6F719D9: fstps 0x1C(%esp);");
    asm("loc_6F719DD: flds 0x10(%esi);");
    asm("loc_6F719E0: fstps 0x20(%esp);");
    asm("loc_6F719E4: flds 0x14(%esi);");
    asm("loc_6F719E7: fstps 0x24(%esp);");
    asm("loc_6F719EB: lea 0x1C(%esp),%ecx;");
    asm("loc_6F719EF: call _sub_6F71AF0;");
    asm("loc_6F719F4: flds 0x18(%esi);");
    asm("loc_6F719F7: fstps 0x30(%esp);");
    asm("loc_6F719FB: flds 0x1C(%esi);");
    asm("loc_6F719FE: fstps 0x34(%esp);");
    asm("loc_6F71A02: flds 0x20(%esi);");
    asm("loc_6F71A05: fstps 0x38(%esp);");
    asm("loc_6F71A09: lea 0x30(%esp),%ecx;");
    asm("loc_6F71A0D: call _sub_6F71AF0;");
    asm("loc_6F71A12: mov 0x2C(%esp),%eax;");
    asm("loc_6F71A16: mov 0x40(%esp),%ecx;");
    asm("loc_6F71A1A: mov 0x18(%esp),%edx;");
    asm("loc_6F71A1E: add %eax,%ecx;");
    asm("loc_6F71A20: mov 0x58(%esp),%eax;");
    asm("loc_6F71A24: add %edx,%ecx;");
    asm("loc_6F71A26: cmp $4,%ecx;");
    asm("loc_6F71A29: jge loc_6F71A9C;");
    asm("loc_6F71A2B: lea (%eax,%eax,2),%edx;");
    asm("loc_6F71A2E: mov 0x54(%esp),%eax;");
    asm("loc_6F71A32: lea (%eax,%edx,4),%edx;");
    asm("loc_6F71A35: cmp %edx,%eax;");
    asm("loc_6F71A37: jae loc_6F71ADD;");
    asm("loc_6F71A3D: mov 0x4C(%esp),%ecx;");
    asm("loc_6F71A41: flds (%eax);");
    asm("loc_6F71A43: flds 4(%eax);");
    asm("loc_6F71A46: flds 8(%eax);");
    asm("loc_6F71A49: fld %st(0);");
    asm("loc_6F71A4B: fmuls 8(%esi);");
    asm("loc_6F71A4E: fld %st(2);");
    asm("loc_6F71A50: fmuls 4(%esi);");
    asm("loc_6F71A53: add $0xC,%eax;");
    asm("loc_6F71A56: add $0xC,%ecx;");
    asm("loc_6F71A59: cmp %edx,%eax;");
    asm("loc_6F71A5B: faddp;");
    asm("loc_6F71A5D: fld %st(3);");
    asm("loc_6F71A5F: fmuls (%esi);");
    asm("loc_6F71A61: faddp;");
    asm("loc_6F71A63: fstps -0xC(%ecx);");
    asm("loc_6F71A66: fld %st(0);");
    asm("loc_6F71A68: fmuls 0x14(%esi);");
    asm("loc_6F71A6B: fld %st(2);");
    asm("loc_6F71A6D: fmuls 0x10(%esi);");
    asm("loc_6F71A70: faddp;");
    asm("loc_6F71A72: fld %st(3);");
    asm("loc_6F71A74: fmuls 0xC(%esi);");
    asm("loc_6F71A77: faddp;");
    asm("loc_6F71A79: fstps -8(%ecx);");
    asm("loc_6F71A7C: fmuls 0x20(%esi);");
    asm("loc_6F71A7F: fxch;");
    asm("loc_6F71A81: fmuls 0x1C(%esi);");
    asm("loc_6F71A84: faddp;");
    asm("loc_6F71A86: fxch;");
    asm("loc_6F71A88: fmuls 0x18(%esi);");
    asm("loc_6F71A8B: faddp;");
    asm("loc_6F71A8D: fstps -4(%ecx);");
    asm("loc_6F71A90: jb loc_6F71A41;");
    asm("loc_6F71A92: pop %esi;");
    asm("loc_6F71A93: xor %eax,%eax;");
    asm("loc_6F71A95: pop %ebx;");
    asm("loc_6F71A96: add $0x3C,%esp;");
    asm("loc_6F71A99: ret $0x14;");
    asm("loc_6F71A9C: mov 0x54(%esp),%esi;");
    asm("loc_6F71AA0: lea (%eax,%eax,2),%eax;");
    asm("loc_6F71AA3: lea (%esi,%eax,4),%ebx;");
    asm("loc_6F71AA6: cmp %ebx,%esi;");
    asm("loc_6F71AA8: jae loc_6F71ADD;");
    asm("loc_6F71AAA: push %edi;");
    asm("loc_6F71AAB: mov 0x50(%esp),%edi;");
    asm("loc_6F71AAF: push %esi;");
    asm("loc_6F71AB0: lea 0x10(%esp),%ecx;");
    asm("loc_6F71AB4: calll *0x1C(%esp);");
    asm("loc_6F71AB8: fstps (%edi);");
    asm("loc_6F71ABA: push %esi;");
    asm("loc_6F71ABB: lea 0x24(%esp),%ecx;");
    asm("loc_6F71ABF: calll *0x30(%esp);");
    asm("loc_6F71AC3: fstps 4(%edi);");
    asm("loc_6F71AC6: push %esi;");
    asm("loc_6F71AC7: lea 0x38(%esp),%ecx;");
    asm("loc_6F71ACB: calll *0x44(%esp);");
    asm("loc_6F71ACF: fstps 8(%edi);");
    asm("loc_6F71AD2: add $0xC,%esi;");
    asm("loc_6F71AD5: add $0xC,%edi;");
    asm("loc_6F71AD8: cmp %ebx,%esi;");
    asm("loc_6F71ADA: jb loc_6F71AAF;");
    asm("loc_6F71ADC: pop %edi;");
    asm("loc_6F71ADD: pop %esi;");
    asm("loc_6F71ADE: xor %eax,%eax;");
    asm("loc_6F71AE0: pop %ebx;");
    asm("loc_6F71AE1: add $0x3C,%esp;");
    asm("loc_6F71AE4: ret $0x14;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6F71AF0() // _sub_6F71AF0
{
    __DEBUG_ASM(6F71AF0);
    // chunk 0x6F71AF0 _sub_6F71AF0
    asm("loc_6F71AF0: flds (%ecx);");
    asm("loc_6F71AF2: fcomps _data_6F730FC;");
    asm("loc_6F71AF8: flds 4(%ecx);");
    asm("loc_6F71AFB: fnstsw %ax;");
    asm("loc_6F71AFD: fcomps _data_6F730FC;");
    asm("loc_6F71B03: flds 8(%ecx);");
    asm("loc_6F71B06: test $0x44,%ah;");
    asm("loc_6F71B09: jp loc_6F71BD5;");
    asm("loc_6F71B0F: fnstsw %ax;");
    asm("loc_6F71B11: fcomps _data_6F730FC;");
    asm("loc_6F71B17: test $0x44,%ah;");
    asm("loc_6F71B1A: jp loc_6F71B59;");
    asm("loc_6F71B1C: fnstsw %ax;");
    asm("loc_6F71B1E: test $0x44,%ah;");
    asm("loc_6F71B21: jp loc_6F71B32;");
    asm("loc_6F71B23: movl $_sub_6F71D60,0xC(%ecx);");
    asm("loc_6F71B2A: movl $5,0x10(%ecx);");
    asm("loc_6F71B31: ret;");
    asm("loc_6F71B32: cmpl $0x3F800000,8(%ecx);");
    asm("loc_6F71B39: jne loc_6F71B4A;");
    asm("loc_6F71B3B: movl $_sub_6F71D70,0xC(%ecx);");
    asm("loc_6F71B42: movl $5,0x10(%ecx);");
    asm("loc_6F71B49: ret;");
    asm("loc_6F71B4A: movl $_sub_6F71D80,0xC(%ecx);");
    asm("loc_6F71B51: movl $4,0x10(%ecx);");
    asm("loc_6F71B58: ret;");
    asm("loc_6F71B59: mov 4(%ecx),%eax;");
    asm("loc_6F71B5C: mov $0x3F800000,%edx;");
    asm("loc_6F71B61: cmp %edx,%eax;");
    asm("loc_6F71B63: fnstsw %ax;");
    asm("loc_6F71B65: jne loc_6F71B9E;");
    asm("loc_6F71B67: test $0x44,%ah;");
    asm("loc_6F71B6A: jp loc_6F71B7B;");
    asm("loc_6F71B6C: movl $_sub_6F71D90,0xC(%ecx);");
    asm("loc_6F71B73: movl $5,0x10(%ecx);");
    asm("loc_6F71B7A: ret;");
    asm("loc_6F71B7B: cmp %edx,8(%ecx);");
    asm("loc_6F71B7E: jne loc_6F71B8F;");
    asm("loc_6F71B80: movl $_sub_6F71DA0,0xC(%ecx);");
    asm("loc_6F71B87: movl $4,0x10(%ecx);");
    asm("loc_6F71B8E: ret;");
    asm("loc_6F71B8F: movl $_sub_6F71DB0,0xC(%ecx);");
    asm("loc_6F71B96: movl $3,0x10(%ecx);");
    asm("loc_6F71B9D: ret;");
    asm("loc_6F71B9E: test $0x44,%ah;");
    asm("loc_6F71BA1: jp loc_6F71BB2;");
    asm("loc_6F71BA3: movl $_sub_6F71DC0,0xC(%ecx);");
    asm("loc_6F71BAA: movl $4,0x10(%ecx);");
    asm("loc_6F71BB1: ret;");
    asm("loc_6F71BB2: cmp %edx,8(%ecx);");
    asm("loc_6F71BB5: jne loc_6F71BC6;");
    asm("loc_6F71BB7: movl $_sub_6F71DD0,0xC(%ecx);");
    asm("loc_6F71BBE: movl $3,0x10(%ecx);");
    asm("loc_6F71BC5: ret;");
    asm("loc_6F71BC6: movl $_sub_6F71DE0,0xC(%ecx);");
    asm("loc_6F71BCD: movl $2,0x10(%ecx);");
    asm("loc_6F71BD4: ret;");
    asm("loc_6F71BD5: mov (%ecx),%eax;");
    asm("loc_6F71BD7: mov $0x3F800000,%edx;");
    asm("loc_6F71BDC: cmp %edx,%eax;");
    asm("loc_6F71BDE: fnstsw %ax;");
    asm("loc_6F71BE0: fcomps _data_6F730FC;");
    asm("loc_6F71BE6: jne loc_6F71C9F;");
    asm("loc_6F71BEC: test $0x44,%ah;");
    asm("loc_6F71BEF: jp loc_6F71C2A;");
    asm("loc_6F71BF1: fnstsw %ax;");
    asm("loc_6F71BF3: test $0x44,%ah;");
    asm("loc_6F71BF6: jp loc_6F71C07;");
    asm("loc_6F71BF8: movl $_sub_6F71E00,0xC(%ecx);");
    asm("loc_6F71BFF: movl $5,0x10(%ecx);");
    asm("loc_6F71C06: ret;");
    asm("loc_6F71C07: cmp %edx,8(%ecx);");
    asm("loc_6F71C0A: jne loc_6F71C1B;");
    asm("loc_6F71C0C: movl $_sub_6F71E10,0xC(%ecx);");
    asm("loc_6F71C13: movl $4,0x10(%ecx);");
    asm("loc_6F71C1A: ret;");
    asm("loc_6F71C1B: movl $_sub_6F71E20,0xC(%ecx);");
    asm("loc_6F71C22: movl $3,0x10(%ecx);");
    asm("loc_6F71C29: ret;");
    asm("loc_6F71C2A: cmp %edx,4(%ecx);");
    asm("loc_6F71C2D: fnstsw %ax;");
    asm("loc_6F71C2F: jne loc_6F71C68;");
    asm("loc_6F71C31: test $0x44,%ah;");
    asm("loc_6F71C34: jp loc_6F71C45;");
    asm("loc_6F71C36: movl $_sub_6F71E30,0xC(%ecx);");
    asm("loc_6F71C3D: movl $4,0x10(%ecx);");
    asm("loc_6F71C44: ret;");
    asm("loc_6F71C45: cmp %edx,8(%ecx);");
    asm("loc_6F71C48: jne loc_6F71C59;");
    asm("loc_6F71C4A: movl $_sub_6F71E40,0xC(%ecx);");
    asm("loc_6F71C51: movl $3,0x10(%ecx);");
    asm("loc_6F71C58: ret;");
    asm("loc_6F71C59: movl $_sub_6F71E50,0xC(%ecx);");
    asm("loc_6F71C60: movl $2,0x10(%ecx);");
    asm("loc_6F71C67: ret;");
    asm("loc_6F71C68: test $0x44,%ah;");
    asm("loc_6F71C6B: jp loc_6F71C7C;");
    asm("loc_6F71C6D: movl $_sub_6F71E70,0xC(%ecx);");
    asm("loc_6F71C74: movl $3,0x10(%ecx);");
    asm("loc_6F71C7B: ret;");
    asm("loc_6F71C7C: cmp %edx,8(%ecx);");
    asm("loc_6F71C7F: jne loc_6F71C90;");
    asm("loc_6F71C81: movl $_sub_6F71E80,0xC(%ecx);");
    asm("loc_6F71C88: movl $2,0x10(%ecx);");
    asm("loc_6F71C8F: ret;");
    asm("loc_6F71C90: movl $_sub_6F71EA0,0xC(%ecx);");
    asm("loc_6F71C97: movl $1,0x10(%ecx);");
    asm("loc_6F71C9E: ret;");
    asm("loc_6F71C9F: test $0x44,%ah;");
    asm("loc_6F71CA2: jp loc_6F71CDD;");
    asm("loc_6F71CA4: fnstsw %ax;");
    asm("loc_6F71CA6: test $0x44,%ah;");
    asm("loc_6F71CA9: jp loc_6F71CBA;");
    asm("loc_6F71CAB: movl $_sub_6F71EC0,0xC(%ecx);");
    asm("loc_6F71CB2: movl $4,0x10(%ecx);");
    asm("loc_6F71CB9: ret;");
    asm("loc_6F71CBA: cmp %edx,8(%ecx);");
    asm("loc_6F71CBD: jne loc_6F71CCE;");
    asm("loc_6F71CBF: movl $_sub_6F71ED0,0xC(%ecx);");
    asm("loc_6F71CC6: movl $3,0x10(%ecx);");
    asm("loc_6F71CCD: ret;");
    asm("loc_6F71CCE: movl $_sub_6F71EE0,0xC(%ecx);");
    asm("loc_6F71CD5: movl $2,0x10(%ecx);");
    asm("loc_6F71CDC: ret;");
    asm("loc_6F71CDD: cmp %edx,4(%ecx);");
    asm("loc_6F71CE0: fnstsw %ax;");
    asm("loc_6F71CE2: jne loc_6F71D1B;");
    asm("loc_6F71CE4: test $0x44,%ah;");
    asm("loc_6F71CE7: jp loc_6F71CF8;");
    asm("loc_6F71CE9: movl $_sub_6F71F00,0xC(%ecx);");
    asm("loc_6F71CF0: movl $3,0x10(%ecx);");
    asm("loc_6F71CF7: ret;");
    asm("loc_6F71CF8: cmp %edx,8(%ecx);");
    asm("loc_6F71CFB: jne loc_6F71D0C;");
    asm("loc_6F71CFD: movl $_sub_6F71F10,0xC(%ecx);");
    asm("loc_6F71D04: movl $2,0x10(%ecx);");
    asm("loc_6F71D0B: ret;");
    asm("loc_6F71D0C: movl $_sub_6F71F30,0xC(%ecx);");
    asm("loc_6F71D13: movl $1,0x10(%ecx);");
    asm("loc_6F71D1A: ret;");
    asm("loc_6F71D1B: test $0x44,%ah;");
    asm("loc_6F71D1E: jp loc_6F71D2F;");
    asm("loc_6F71D20: movl $_sub_6F71F50,0xC(%ecx);");
    asm("loc_6F71D27: movl $2,0x10(%ecx);");
    asm("loc_6F71D2E: ret;");
    asm("loc_6F71D2F: cmp %edx,8(%ecx);");
    asm("loc_6F71D32: jne loc_6F71D43;");
    asm("loc_6F71D34: movl $_sub_6F71F70,0xC(%ecx);");
    asm("loc_6F71D3B: movl $1,0x10(%ecx);");
    asm("loc_6F71D42: ret;");
    asm("loc_6F71D43: movl $_sub_6F71F90,0xC(%ecx);");
    asm("loc_6F71D4A: movl $0,0x10(%ecx);");
    asm("loc_6F71D51: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6F71D60() // _sub_6F71D60
{
    __DEBUG_ASM(6F71D60);
    // chunk 0x6F71D60 _sub_6F71D60
    asm("loc_6F71D60: flds _data_6F730FC;");
    asm("loc_6F71D66: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6F71D70() // _sub_6F71D70
{
    __DEBUG_ASM(6F71D70);
    // chunk 0x6F71D70 _sub_6F71D70
    asm("loc_6F71D70: mov 4(%esp),%eax;");
    asm("loc_6F71D74: flds 8(%eax);");
    asm("loc_6F71D77: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6F71D80() // _sub_6F71D80
{
    __DEBUG_ASM(6F71D80);
    // chunk 0x6F71D80 _sub_6F71D80
    asm("loc_6F71D80: mov 4(%esp),%eax;");
    asm("loc_6F71D84: flds 8(%eax);");
    asm("loc_6F71D87: fmuls 8(%ecx);");
    asm("loc_6F71D8A: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6F71D90() // _sub_6F71D90
{
    __DEBUG_ASM(6F71D90);
    // chunk 0x6F71D90 _sub_6F71D90
    asm("loc_6F71D90: mov 4(%esp),%eax;");
    asm("loc_6F71D94: flds 4(%eax);");
    asm("loc_6F71D97: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6F71DA0() // _sub_6F71DA0
{
    __DEBUG_ASM(6F71DA0);
    // chunk 0x6F71DA0 _sub_6F71DA0
    asm("loc_6F71DA0: mov 4(%esp),%eax;");
    asm("loc_6F71DA4: flds 8(%eax);");
    asm("loc_6F71DA7: fadds 4(%eax);");
    asm("loc_6F71DAA: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6F71DB0() // _sub_6F71DB0
{
    __DEBUG_ASM(6F71DB0);
    // chunk 0x6F71DB0 _sub_6F71DB0
    asm("loc_6F71DB0: mov 4(%esp),%eax;");
    asm("loc_6F71DB4: flds 8(%eax);");
    asm("loc_6F71DB7: fmuls 8(%ecx);");
    asm("loc_6F71DBA: fadds 4(%eax);");
    asm("loc_6F71DBD: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6F71DC0() // _sub_6F71DC0
{
    __DEBUG_ASM(6F71DC0);
    // chunk 0x6F71DC0 _sub_6F71DC0
    asm("loc_6F71DC0: mov 4(%esp),%eax;");
    asm("loc_6F71DC4: flds 4(%eax);");
    asm("loc_6F71DC7: fmuls 4(%ecx);");
    asm("loc_6F71DCA: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6F71DD0() // _sub_6F71DD0
{
    __DEBUG_ASM(6F71DD0);
    // chunk 0x6F71DD0 _sub_6F71DD0
    asm("loc_6F71DD0: mov 4(%esp),%eax;");
    asm("loc_6F71DD4: flds 4(%eax);");
    asm("loc_6F71DD7: fmuls 4(%ecx);");
    asm("loc_6F71DDA: fadds 8(%eax);");
    asm("loc_6F71DDD: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6F71DE0() // _sub_6F71DE0
{
    __DEBUG_ASM(6F71DE0);
    // chunk 0x6F71DE0 _sub_6F71DE0
    asm("loc_6F71DE0: mov 4(%esp),%eax;");
    asm("loc_6F71DE4: flds 8(%eax);");
    asm("loc_6F71DE7: fmuls 8(%ecx);");
    asm("loc_6F71DEA: flds 4(%eax);");
    asm("loc_6F71DED: fmuls 4(%ecx);");
    asm("loc_6F71DF0: faddp;");
    asm("loc_6F71DF2: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6F71E00() // _sub_6F71E00
{
    __DEBUG_ASM(6F71E00);
    // chunk 0x6F71E00 _sub_6F71E00
    asm("loc_6F71E00: mov 4(%esp),%eax;");
    asm("loc_6F71E04: flds (%eax);");
    asm("loc_6F71E06: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6F71E10() // _sub_6F71E10
{
    __DEBUG_ASM(6F71E10);
    // chunk 0x6F71E10 _sub_6F71E10
    asm("loc_6F71E10: mov 4(%esp),%eax;");
    asm("loc_6F71E14: flds 8(%eax);");
    asm("loc_6F71E17: fadds (%eax);");
    asm("loc_6F71E19: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6F71E20() // _sub_6F71E20
{
    __DEBUG_ASM(6F71E20);
    // chunk 0x6F71E20 _sub_6F71E20
    asm("loc_6F71E20: mov 4(%esp),%eax;");
    asm("loc_6F71E24: flds 8(%eax);");
    asm("loc_6F71E27: fmuls 8(%ecx);");
    asm("loc_6F71E2A: fadds (%eax);");
    asm("loc_6F71E2C: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6F71E30() // _sub_6F71E30
{
    __DEBUG_ASM(6F71E30);
    // chunk 0x6F71E30 _sub_6F71E30
    asm("loc_6F71E30: mov 4(%esp),%eax;");
    asm("loc_6F71E34: flds 4(%eax);");
    asm("loc_6F71E37: fadds (%eax);");
    asm("loc_6F71E39: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6F71E40() // _sub_6F71E40
{
    __DEBUG_ASM(6F71E40);
    // chunk 0x6F71E40 _sub_6F71E40
    asm("loc_6F71E40: mov 4(%esp),%eax;");
    asm("loc_6F71E44: flds 8(%eax);");
    asm("loc_6F71E47: fadds 4(%eax);");
    asm("loc_6F71E4A: fadds (%eax);");
    asm("loc_6F71E4C: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6F71E50() // _sub_6F71E50
{
    __DEBUG_ASM(6F71E50);
    // chunk 0x6F71E50 _sub_6F71E50
    asm("loc_6F71E50: mov 4(%esp),%eax;");
    asm("loc_6F71E54: flds 8(%eax);");
    asm("loc_6F71E57: fmuls 8(%ecx);");
    asm("loc_6F71E5A: fadds 4(%eax);");
    asm("loc_6F71E5D: fadds (%eax);");
    asm("loc_6F71E5F: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6F71E70() // _sub_6F71E70
{
    __DEBUG_ASM(6F71E70);
    // chunk 0x6F71E70 _sub_6F71E70
    asm("loc_6F71E70: mov 4(%esp),%eax;");
    asm("loc_6F71E74: flds 4(%eax);");
    asm("loc_6F71E77: fmuls 4(%ecx);");
    asm("loc_6F71E7A: fadds (%eax);");
    asm("loc_6F71E7C: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6F71E80() // _sub_6F71E80
{
    __DEBUG_ASM(6F71E80);
    // chunk 0x6F71E80 _sub_6F71E80
    asm("loc_6F71E80: mov 4(%esp),%eax;");
    asm("loc_6F71E84: flds 4(%eax);");
    asm("loc_6F71E87: fmuls 4(%ecx);");
    asm("loc_6F71E8A: fadds 8(%eax);");
    asm("loc_6F71E8D: fadds (%eax);");
    asm("loc_6F71E8F: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6F71EA0() // _sub_6F71EA0
{
    __DEBUG_ASM(6F71EA0);
    // chunk 0x6F71EA0 _sub_6F71EA0
    asm("loc_6F71EA0: mov 4(%esp),%eax;");
    asm("loc_6F71EA4: flds 8(%eax);");
    asm("loc_6F71EA7: fmuls 8(%ecx);");
    asm("loc_6F71EAA: flds 4(%eax);");
    asm("loc_6F71EAD: fmuls 4(%ecx);");
    asm("loc_6F71EB0: faddp;");
    asm("loc_6F71EB2: fadds (%eax);");
    asm("loc_6F71EB4: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6F71EC0() // _sub_6F71EC0
{
    __DEBUG_ASM(6F71EC0);
    // chunk 0x6F71EC0 _sub_6F71EC0
    asm("loc_6F71EC0: mov 4(%esp),%eax;");
    asm("loc_6F71EC4: flds (%eax);");
    asm("loc_6F71EC6: fmuls (%ecx);");
    asm("loc_6F71EC8: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6F71ED0() // _sub_6F71ED0
{
    __DEBUG_ASM(6F71ED0);
    // chunk 0x6F71ED0 _sub_6F71ED0
    asm("loc_6F71ED0: mov 4(%esp),%eax;");
    asm("loc_6F71ED4: flds (%eax);");
    asm("loc_6F71ED6: fmuls (%ecx);");
    asm("loc_6F71ED8: fadds 8(%eax);");
    asm("loc_6F71EDB: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6F71EE0() // _sub_6F71EE0
{
    __DEBUG_ASM(6F71EE0);
    // chunk 0x6F71EE0 _sub_6F71EE0
    asm("loc_6F71EE0: mov 4(%esp),%eax;");
    asm("loc_6F71EE4: flds 8(%eax);");
    asm("loc_6F71EE7: fmuls 8(%ecx);");
    asm("loc_6F71EEA: flds (%eax);");
    asm("loc_6F71EEC: fmuls (%ecx);");
    asm("loc_6F71EEE: faddp;");
    asm("loc_6F71EF0: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6F71F00() // _sub_6F71F00
{
    __DEBUG_ASM(6F71F00);
    // chunk 0x6F71F00 _sub_6F71F00
    asm("loc_6F71F00: mov 4(%esp),%eax;");
    asm("loc_6F71F04: flds (%eax);");
    asm("loc_6F71F06: fmuls (%ecx);");
    asm("loc_6F71F08: fadds 4(%eax);");
    asm("loc_6F71F0B: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6F71F10() // _sub_6F71F10
{
    __DEBUG_ASM(6F71F10);
    // chunk 0x6F71F10 _sub_6F71F10
    asm("loc_6F71F10: mov 4(%esp),%eax;");
    asm("loc_6F71F14: flds (%eax);");
    asm("loc_6F71F16: fmuls (%ecx);");
    asm("loc_6F71F18: fadds 8(%eax);");
    asm("loc_6F71F1B: fadds 4(%eax);");
    asm("loc_6F71F1E: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6F71F30() // _sub_6F71F30
{
    __DEBUG_ASM(6F71F30);
    // chunk 0x6F71F30 _sub_6F71F30
    asm("loc_6F71F30: mov 4(%esp),%eax;");
    asm("loc_6F71F34: flds 8(%eax);");
    asm("loc_6F71F37: fmuls 8(%ecx);");
    asm("loc_6F71F3A: flds (%eax);");
    asm("loc_6F71F3C: fmuls (%ecx);");
    asm("loc_6F71F3E: faddp;");
    asm("loc_6F71F40: fadds 4(%eax);");
    asm("loc_6F71F43: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6F71F50() // _sub_6F71F50
{
    __DEBUG_ASM(6F71F50);
    // chunk 0x6F71F50 _sub_6F71F50
    asm("loc_6F71F50: mov 4(%esp),%eax;");
    asm("loc_6F71F54: flds 4(%eax);");
    asm("loc_6F71F57: fmuls 4(%ecx);");
    asm("loc_6F71F5A: flds (%eax);");
    asm("loc_6F71F5C: fmuls (%ecx);");
    asm("loc_6F71F5E: faddp;");
    asm("loc_6F71F60: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6F71F70() // _sub_6F71F70
{
    __DEBUG_ASM(6F71F70);
    // chunk 0x6F71F70 _sub_6F71F70
    asm("loc_6F71F70: mov 4(%esp),%eax;");
    asm("loc_6F71F74: flds 4(%eax);");
    asm("loc_6F71F77: fmuls 4(%ecx);");
    asm("loc_6F71F7A: flds (%eax);");
    asm("loc_6F71F7C: fmuls (%ecx);");
    asm("loc_6F71F7E: faddp;");
    asm("loc_6F71F80: fadds 8(%eax);");
    asm("loc_6F71F83: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6F71F90() // _sub_6F71F90
{
    __DEBUG_ASM(6F71F90);
    // chunk 0x6F71F90 _sub_6F71F90
    asm("loc_6F71F90: mov 4(%esp),%eax;");
    asm("loc_6F71F94: flds 8(%eax);");
    asm("loc_6F71F97: fmuls 8(%ecx);");
    asm("loc_6F71F9A: flds 4(%eax);");
    asm("loc_6F71F9D: fmuls 4(%ecx);");
    asm("loc_6F71FA0: faddp;");
    asm("loc_6F71FA2: flds (%eax);");
    asm("loc_6F71FA4: fmuls (%ecx);");
    asm("loc_6F71FA6: faddp;");
    asm("loc_6F71FA8: ret $4;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6F71FB0() // _sub_6F71FB0
{
    __DEBUG_ASM(6F71FB0);
    // chunk 0x6F71FB0 _sub_6F71FB0
    asm("loc_6F71FB0: sub $0x3C,%esp;");
    asm("loc_6F71FB3: push %esi;");
    asm("loc_6F71FB4: mov 0x4C(%esp),%esi;");
    asm("loc_6F71FB8: flds 0x24(%esi);");
    asm("loc_6F71FBB: fcomps _data_6F730FC;");
    asm("loc_6F71FC1: fnstsw %ax;");
    asm("loc_6F71FC3: test $0x44,%ah;");
    asm("loc_6F71FC6: jp loc_6F72009;");
    asm("loc_6F71FC8: flds 0x28(%esi);");
    asm("loc_6F71FCB: fcomps _data_6F730FC;");
    asm("loc_6F71FD1: fnstsw %ax;");
    asm("loc_6F71FD3: test $0x44,%ah;");
    asm("loc_6F71FD6: jp loc_6F72009;");
    asm("loc_6F71FD8: flds 0x2C(%esi);");
    asm("loc_6F71FDB: fcomps _data_6F730FC;");
    asm("loc_6F71FE1: fnstsw %ax;");
    asm("loc_6F71FE3: test $0x44,%ah;");
    asm("loc_6F71FE6: jp loc_6F72009;");
    asm("loc_6F71FE8: mov 0x54(%esp),%edx;");
    asm("loc_6F71FEC: mov 0x44(%esp),%eax;");
    asm("loc_6F71FF0: push %edx;");
    asm("loc_6F71FF1: mov 0x54(%esp),%edx;");
    asm("loc_6F71FF5: mov (%eax),%ecx;");
    asm("loc_6F71FF7: push %edx;");
    asm("loc_6F71FF8: mov 0x50(%esp),%edx;");
    asm("loc_6F71FFC: push %esi;");
    asm("loc_6F71FFD: push %edx;");
    asm("loc_6F71FFE: push %eax;");
    asm("loc_6F71FFF: calll *0x44(%ecx);");
    asm("loc_6F72002: pop %esi;");
    asm("loc_6F72003: add $0x3C,%esp;");
    asm("loc_6F72006: ret $0x14;");
    asm("loc_6F72009: flds (%esi);");
    asm("loc_6F7200B: fstps 4(%esp);");
    asm("loc_6F7200F: flds 4(%esi);");
    asm("loc_6F72012: fstps 8(%esp);");
    asm("loc_6F72016: flds 8(%esi);");
    asm("loc_6F72019: push %ebp;");
    asm("loc_6F7201A: push %edi;");
    asm("loc_6F7201B: fstps 0x14(%esp);");
    asm("loc_6F7201F: lea 0xC(%esp),%ecx;");
    asm("loc_6F72023: call _sub_6F71AF0;");
    asm("loc_6F72028: flds 0xC(%esi);");
    asm("loc_6F7202B: fstps 0x20(%esp);");
    asm("loc_6F7202F: flds 0x10(%esi);");
    asm("loc_6F72032: fstps 0x24(%esp);");
    asm("loc_6F72036: flds 0x14(%esi);");
    asm("loc_6F72039: fstps 0x28(%esp);");
    asm("loc_6F7203D: lea 0x20(%esp),%ecx;");
    asm("loc_6F72041: call _sub_6F71AF0;");
    asm("loc_6F72046: flds 0x18(%esi);");
    asm("loc_6F72049: fstps 0x34(%esp);");
    asm("loc_6F7204D: flds 0x1C(%esi);");
    asm("loc_6F72050: fstps 0x38(%esp);");
    asm("loc_6F72054: flds 0x20(%esi);");
    asm("loc_6F72057: fstps 0x3C(%esp);");
    asm("loc_6F7205B: lea 0x34(%esp),%ecx;");
    asm("loc_6F7205F: call _sub_6F71AF0;");
    asm("loc_6F72064: mov 0x30(%esp),%eax;");
    asm("loc_6F72068: mov 0x44(%esp),%ecx;");
    asm("loc_6F7206C: mov 0x1C(%esp),%edx;");
    asm("loc_6F72070: add %eax,%ecx;");
    asm("loc_6F72072: mov 0x5C(%esp),%eax;");
    asm("loc_6F72076: add %edx,%ecx;");
    asm("loc_6F72078: cmp $4,%ecx;");
    asm("loc_6F7207B: jge loc_6F720F8;");
    asm("loc_6F7207D: lea (%eax,%eax,2),%edx;");
    asm("loc_6F72080: mov 0x58(%esp),%eax;");
    asm("loc_6F72084: lea (%eax,%edx,4),%edx;");
    asm("loc_6F72087: cmp %edx,%eax;");
    asm("loc_6F72089: jae loc_6F72142;");
    asm("loc_6F7208F: mov 0x50(%esp),%ecx;");
    asm("loc_6F72093: flds (%eax);");
    asm("loc_6F72095: flds 4(%eax);");
    asm("loc_6F72098: flds 8(%eax);");
    asm("loc_6F7209B: fld %st(2);");
    asm("loc_6F7209D: fmuls (%esi);");
    asm("loc_6F7209F: fld %st(1);");
    asm("loc_6F720A1: fmuls 8(%esi);");
    asm("loc_6F720A4: add $0xC,%eax;");
    asm("loc_6F720A7: add $0xC,%ecx;");
    asm("loc_6F720AA: faddp;");
    asm("loc_6F720AC: fld %st(2);");
    asm("loc_6F720AE: fmuls 4(%esi);");
    asm("loc_6F720B1: cmp %edx,%eax;");
    asm("loc_6F720B3: faddp;");
    asm("loc_6F720B5: fadds 0x24(%esi);");
    asm("loc_6F720B8: fstps -0xC(%ecx);");
    asm("loc_6F720BB: fld %st(0);");
    asm("loc_6F720BD: fmuls 0x14(%esi);");
    asm("loc_6F720C0: fld %st(2);");
    asm("loc_6F720C2: fmuls 0x10(%esi);");
    asm("loc_6F720C5: faddp;");
    asm("loc_6F720C7: fld %st(3);");
    asm("loc_6F720C9: fmuls 0xC(%esi);");
    asm("loc_6F720CC: faddp;");
    asm("loc_6F720CE: fadds 0x28(%esi);");
    asm("loc_6F720D1: fstps -8(%ecx);");
    asm("loc_6F720D4: fmuls 0x20(%esi);");
    asm("loc_6F720D7: fxch;");
    asm("loc_6F720D9: fmuls 0x1C(%esi);");
    asm("loc_6F720DC: faddp;");
    asm("loc_6F720DE: fxch;");
    asm("loc_6F720E0: fmuls 0x18(%esi);");
    asm("loc_6F720E3: faddp;");
    asm("loc_6F720E5: fadds 0x2C(%esi);");
    asm("loc_6F720E8: fstps -4(%ecx);");
    asm("loc_6F720EB: jb loc_6F72093;");
    asm("loc_6F720ED: pop %edi;");
    asm("loc_6F720EE: pop %ebp;");
    asm("loc_6F720EF: xor %eax,%eax;");
    asm("loc_6F720F1: pop %esi;");
    asm("loc_6F720F2: add $0x3C,%esp;");
    asm("loc_6F720F5: ret $0x14;");
    asm("loc_6F720F8: mov 0x58(%esp),%edi;");
    asm("loc_6F720FC: lea (%eax,%eax,2),%eax;");
    asm("loc_6F720FF: lea (%edi,%eax,4),%ebp;");
    asm("loc_6F72102: cmp %ebp,%edi;");
    asm("loc_6F72104: jae loc_6F72142;");
    asm("loc_6F72106: push %ebx;");
    asm("loc_6F72107: mov 0x54(%esp),%ebx;");
    asm("loc_6F7210B: push %edi;");
    asm("loc_6F7210C: lea 0x14(%esp),%ecx;");
    asm("loc_6F72110: calll *0x20(%esp);");
    asm("loc_6F72114: fadds 0x24(%esi);");
    asm("loc_6F72117: push %edi;");
    asm("loc_6F72118: lea 0x28(%esp),%ecx;");
    asm("loc_6F7211C: fstps (%ebx);");
    asm("loc_6F7211E: calll *0x34(%esp);");
    asm("loc_6F72122: fadds 0x28(%esi);");
    asm("loc_6F72125: push %edi;");
    asm("loc_6F72126: lea 0x3C(%esp),%ecx;");
    asm("loc_6F7212A: fstps 4(%ebx);");
    asm("loc_6F7212D: calll *0x48(%esp);");
    asm("loc_6F72131: fadds 0x2C(%esi);");
    asm("loc_6F72134: add $0xC,%edi;");
    asm("loc_6F72137: add $0xC,%ebx;");
    asm("loc_6F7213A: cmp %ebp,%edi;");
    asm("loc_6F7213C: fstps -4(%ebx);");
    asm("loc_6F7213F: jb loc_6F7210B;");
    asm("loc_6F72141: pop %ebx;");
    asm("loc_6F72142: pop %edi;");
    asm("loc_6F72143: pop %ebp;");
    asm("loc_6F72144: xor %eax,%eax;");
    asm("loc_6F72146: pop %esi;");
    asm("loc_6F72147: add $0x3C,%esp;");
    asm("loc_6F7214A: ret $0x14;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6F72150() // _sub_6F72150
{
    __DEBUG_ASM(6F72150);
    // chunk 0x6F72150 _sub_6F72150
    asm("loc_6F72150: sub $0x24,%esp;");
    asm("loc_6F72153: mov 0x30(%esp),%eax;");
    asm("loc_6F72157: mov 0x38(%esp),%edx;");
    asm("loc_6F7215B: push %edx;");
    asm("loc_6F7215C: mov 0x38(%esp),%edx;");
    asm("loc_6F72160: flds (%eax);");
    asm("loc_6F72162: fstps 4(%esp);");
    asm("loc_6F72166: flds 0xC(%eax);");
    asm("loc_6F72169: fstps 8(%esp);");
    asm("loc_6F7216D: flds 0x18(%eax);");
    asm("loc_6F72170: fstps 0xC(%esp);");
    asm("loc_6F72174: flds 4(%eax);");
    asm("loc_6F72177: fstps 0x10(%esp);");
    asm("loc_6F7217B: flds 0x10(%eax);");
    asm("loc_6F7217E: fstps 0x14(%esp);");
    asm("loc_6F72182: flds 0x1C(%eax);");
    asm("loc_6F72185: fstps 0x18(%esp);");
    asm("loc_6F72189: flds 8(%eax);");
    asm("loc_6F7218C: fstps 0x1C(%esp);");
    asm("loc_6F72190: flds 0x14(%eax);");
    asm("loc_6F72193: fstps 0x20(%esp);");
    asm("loc_6F72197: flds 0x20(%eax);");
    asm("loc_6F7219A: mov 0x2C(%esp),%eax;");
    asm("loc_6F7219E: push %edx;");
    asm("loc_6F7219F: lea 8(%esp),%edx;");
    asm("loc_6F721A3: mov (%eax),%ecx;");
    asm("loc_6F721A5: push %edx;");
    asm("loc_6F721A6: mov 0x38(%esp),%edx;");
    asm("loc_6F721AA: push %edx;");
    asm("loc_6F721AB: push %eax;");
    asm("loc_6F721AC: fstps 0x34(%esp);");
    asm("loc_6F721B0: calll *0x44(%ecx);");
    asm("loc_6F721B3: add $0x24,%esp;");
    asm("loc_6F721B6: ret $0x14;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6F721C0() // _sub_6F721C0
{
    __DEBUG_ASM(6F721C0);
    // chunk 0x6F721C0 _sub_6F721C0
    asm("loc_6F721C0: sub $0x6C,%esp;");
    asm("loc_6F721C3: push %ebx;");
    asm("loc_6F721C4: push %esi;");
    asm("loc_6F721C5: mov 0x80(%esp),%esi;");
    asm("loc_6F721CC: mov 0x78(%esp),%ebx;");
    asm("loc_6F721D0: lea 8(%esp),%ecx;");
    asm("loc_6F721D4: push %edi;");
    asm("loc_6F721D5: flds 0x24(%esi);");
    asm("loc_6F721D8: fchs;");
    asm("loc_6F721DA: fstps 0xC(%esp);");
    asm("loc_6F721DE: flds 0x28(%esi);");
    asm("loc_6F721E1: fchs;");
    asm("loc_6F721E3: mov (%ebx),%eax;");
    asm("loc_6F721E5: push %ecx;");
    asm("loc_6F721E6: fstps 0x14(%esp);");
    asm("loc_6F721EA: flds 0x2C(%esi);");
    asm("loc_6F721ED: lea 0x1C(%esp),%edx;");
    asm("loc_6F721F1: push %esi;");
    asm("loc_6F721F2: fchs;");
    asm("loc_6F721F4: push %edx;");
    asm("loc_6F721F5: push %ebx;");
    asm("loc_6F721F6: fstps 0x24(%esp);");
    asm("loc_6F721FA: calll *0x38(%eax);");
    asm("loc_6F721FD: flds (%esi);");
    asm("loc_6F721FF: fstps 0x24(%esp);");
    asm("loc_6F72203: flds 0xC(%esi);");
    asm("loc_6F72206: fstps 0x28(%esp);");
    asm("loc_6F7220A: flds 0x18(%esi);");
    asm("loc_6F7220D: fstps 0x2C(%esp);");
    asm("loc_6F72211: flds 4(%esi);");
    asm("loc_6F72214: fstps 0x30(%esp);");
    asm("loc_6F72218: flds 0x10(%esi);");
    asm("loc_6F7221B: fstps 0x34(%esp);");
    asm("loc_6F7221F: flds 0x1C(%esi);");
    asm("loc_6F72222: fstps 0x38(%esp);");
    asm("loc_6F72226: flds 8(%esi);");
    asm("loc_6F72229: fstps 0x3C(%esp);");
    asm("loc_6F7222D: flds 0x14(%esi);");
    asm("loc_6F72230: fstps 0x40(%esp);");
    asm("loc_6F72234: flds 0x20(%esi);");
    asm("loc_6F72237: mov 0x20(%esp),%edx;");
    asm("loc_6F7223B: mov $9,%ecx;");
    asm("loc_6F72240: fstps 0x44(%esp);");
    asm("loc_6F72244: lea 0x24(%esp),%esi;");
    asm("loc_6F72248: lea 0x48(%esp),%edi;");
    asm("loc_6F7224C: rep movsl (%esi),(%edi);");
    asm("loc_6F7224E: mov 0x1C(%esp),%ecx;");
    asm("loc_6F72252: mov 0x18(%esp),%eax;");
    asm("loc_6F72256: mov %ecx,0x70(%esp);");
    asm("loc_6F7225A: mov 0x8C(%esp),%ecx;");
    asm("loc_6F72261: mov %edx,0x74(%esp);");
    asm("loc_6F72265: mov 0x88(%esp),%edx;");
    asm("loc_6F7226C: push %ecx;");
    asm("loc_6F7226D: push %edx;");
    asm("loc_6F7226E: mov 0x88(%esp),%edx;");
    asm("loc_6F72275: lea 0x50(%esp),%ecx;");
    asm("loc_6F72279: mov %eax,0x74(%esp);");
    asm("loc_6F7227D: mov (%ebx),%eax;");
    asm("loc_6F7227F: push %ecx;");
    asm("loc_6F72280: push %edx;");
    asm("loc_6F72281: push %ebx;");
    asm("loc_6F72282: calll *0x40(%eax);");
    asm("loc_6F72285: pop %edi;");
    asm("loc_6F72286: pop %esi;");
    asm("loc_6F72287: pop %ebx;");
    asm("loc_6F72288: add $0x6C,%esp;");
    asm("loc_6F7228B: ret $0x14;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6F72290() // _sub_6F72290
{
    __DEBUG_ASM(6F72290);
    // chunk 0x6F72290 _sub_6F72290
    asm("loc_6F72290: mov 0xC(%esp),%ecx;");
    asm("loc_6F72294: flds 0x10(%ecx);");
    asm("loc_6F72297: fadds (%ecx);");
    asm("loc_6F72299: fadds 0x20(%ecx);");
    asm("loc_6F7229C: fcoms _data_6F730FC;");
    asm("loc_6F722A2: fnstsw %ax;");
    asm("loc_6F722A4: and $0x4100,%eax;");
    asm("loc_6F722A9: jne loc_6F722EF;");
    asm("loc_6F722AB: fadds _data_6F730F8;");
    asm("loc_6F722B1: mov 8(%esp),%eax;");
    asm("loc_6F722B5: fsqrt;");
    asm("loc_6F722B7: flds _data_6F73100;");
    asm("loc_6F722BD: fmul %st(1),%st;");
    asm("loc_6F722BF: fstps (%eax);");
    asm("loc_6F722C1: fdivrs _data_6F73100;");
    asm("loc_6F722C7: flds 0x1C(%ecx);");
    asm("loc_6F722CA: fsubs 0x14(%ecx);");
    asm("loc_6F722CD: fmul %st(1),%st;");
    asm("loc_6F722CF: fstps 4(%eax);");
    asm("loc_6F722D2: flds 8(%ecx);");
    asm("loc_6F722D5: fsubs 0x18(%ecx);");
    asm("loc_6F722D8: fmul %st(1),%st;");
    asm("loc_6F722DA: fstps 8(%eax);");
    asm("loc_6F722DD: flds 0xC(%ecx);");
    asm("loc_6F722E0: fsubs 4(%ecx);");
    asm("loc_6F722E3: fmul %st(1),%st;");
    asm("loc_6F722E5: fstps 0xC(%eax);");
    asm("loc_6F722E8: xor %eax,%eax;");
    asm("loc_6F722EA: fstp %st(0);");
    asm("loc_6F722EC: ret $0xC;");
    asm("loc_6F722EF: fstp %st(0);");
    asm("loc_6F722F1: flds 0x10(%ecx);");
    asm("loc_6F722F4: fcomps (%ecx);");
    asm("loc_6F722F6: xor %edx,%edx;");
    asm("loc_6F722F8: fnstsw %ax;");
    asm("loc_6F722FA: and $0x4100,%eax;");
    asm("loc_6F722FF: jne loc_6F72306;");
    asm("loc_6F72301: mov $1,%edx;");
    asm("loc_6F72306: flds 0x20(%ecx);");
    asm("loc_6F72309: mov %edx,%eax;");
    asm("loc_6F7230B: shl $4,%eax;");
    asm("loc_6F7230E: fcomps (%eax,%ecx);");
    asm("loc_6F72311: fnstsw %ax;");
    asm("loc_6F72313: and $0x4100,%eax;");
    asm("loc_6F72318: jne loc_6F7231F;");
    asm("loc_6F7231A: mov $2,%edx;");
    asm("loc_6F7231F: mov _data_6F73068(,%edx,4),%eax;");
    asm("loc_6F72326: push %ebx;");
    asm("loc_6F72327: push %ebp;");
    asm("loc_6F72328: push %esi;");
    asm("loc_6F72329: mov _data_6F73068(,%eax,4),%esi;");
    asm("loc_6F72330: mov %eax,%ebp;");
    asm("loc_6F72332: mov %esi,%ebx;");
    asm("loc_6F72334: push %edi;");
    asm("loc_6F72335: shl $4,%ebx;");
    asm("loc_6F72338: shl $4,%ebp;");
    asm("loc_6F7233B: flds (%ebx,%ecx);");
    asm("loc_6F7233E: fadds (%ecx,%ebp);");
    asm("loc_6F72341: mov %edx,%edi;");
    asm("loc_6F72343: lea (%esi,%esi,2),%ebx;");
    asm("loc_6F72346: shl $4,%edi;");
    asm("loc_6F72349: fsubrs (%edi,%ecx);");
    asm("loc_6F7234C: mov 0x18(%esp),%edi;");
    asm("loc_6F72350: lea (%eax,%eax,2),%ebp;");
    asm("loc_6F72353: add %eax,%ebx;");
    asm("loc_6F72355: add %esi,%ebp;");
    asm("loc_6F72357: fadds _data_6F730F8;");
    asm("loc_6F7235D: fsqrt;");
    asm("loc_6F7235F: flds _data_6F73100;");
    asm("loc_6F72365: fmul %st(1),%st;");
    asm("loc_6F72367: fstps 4(%edi,%edx,4);");
    asm("loc_6F7236B: fdivrs _data_6F73100;");
    asm("loc_6F72371: flds (%ecx,%ebx,4);");
    asm("loc_6F72374: fsubs (%ecx,%ebp,4);");
    asm("loc_6F72377: lea (%edx,%edx,2),%ebx;");
    asm("loc_6F7237A: fmul %st(1),%st;");
    asm("loc_6F7237C: lea (%ebx,%eax),%ebp;");
    asm("loc_6F7237F: lea (%eax,%eax,2),%ebx;");
    asm("loc_6F72382: add %edx,%ebx;");
    asm("loc_6F72384: fstps (%edi);");
    asm("loc_6F72386: flds (%ecx,%ebp,4);");
    asm("loc_6F72389: fadds (%ecx,%ebx,4);");
    asm("loc_6F7238C: fmul %st(1),%st;");
    asm("loc_6F7238E: fstps 4(%edi,%eax,4);");
    asm("loc_6F72392: lea (%edx,%edx,2),%eax;");
    asm("loc_6F72395: lea (%eax,%esi),%ebx;");
    asm("loc_6F72398: lea (%esi,%esi,2),%eax;");
    asm("loc_6F7239B: add %edx,%eax;");
    asm("loc_6F7239D: flds (%ecx,%ebx,4);");
    asm("loc_6F723A0: fadds (%ecx,%eax,4);");
    asm("loc_6F723A3: xor %eax,%eax;");
    asm("loc_6F723A5: fmul %st(1),%st;");
    asm("loc_6F723A7: fstps 4(%edi,%esi,4);");
    asm("loc_6F723AB: pop %edi;");
    asm("loc_6F723AC: pop %esi;");
    asm("loc_6F723AD: pop %ebp;");
    asm("loc_6F723AE: pop %ebx;");
    asm("loc_6F723AF: fstp %st(0);");
    asm("loc_6F723B1: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6F723C0() // _sub_6F723C0
{
    __DEBUG_ASM(6F723C0);
    // chunk 0x6F723C0 _sub_6F723C0
    asm("loc_6F723C0: sub $0x14,%esp;");
    asm("loc_6F723C3: mov 0x20(%esp),%eax;");
    asm("loc_6F723C7: flds 0xC(%eax);");
    asm("loc_6F723CA: flds 8(%eax);");
    asm("loc_6F723CD: flds 4(%eax);");
    asm("loc_6F723D0: flds (%eax);");
    asm("loc_6F723D2: fld %st(0);");
    asm("loc_6F723D4: fmul %st(1),%st;");
    asm("loc_6F723D6: fld %st(2);");
    asm("loc_6F723D8: fmul %st(3),%st;");
    asm("loc_6F723DA: faddp;");
    asm("loc_6F723DC: fld %st(3);");
    asm("loc_6F723DE: fmul %st(4),%st;");
    asm("loc_6F723E0: faddp;");
    asm("loc_6F723E2: fld %st(4);");
    asm("loc_6F723E4: fmul %st(5),%st;");
    asm("loc_6F723E6: faddp;");
    asm("loc_6F723E8: fdivrs _data_6F73104;");
    asm("loc_6F723EE: fstp %st(4);");
    asm("loc_6F723F0: fstp %st(0);");
    asm("loc_6F723F2: fstp %st(0);");
    asm("loc_6F723F4: fstp %st(0);");
    asm("loc_6F723F6: fld %st(0);");
    asm("loc_6F723F8: fmuls 4(%eax);");
    asm("loc_6F723FB: fld %st(1);");
    asm("loc_6F723FD: fmuls 8(%eax);");
    asm("loc_6F72400: fstps (%esp);");
    asm("loc_6F72404: fxch;");
    asm("loc_6F72406: fmuls 0xC(%eax);");
    asm("loc_6F72409: fstps 0x20(%esp);");
    asm("loc_6F7240D: fld %st(0);");
    asm("loc_6F7240F: fmuls (%eax);");
    asm("loc_6F72411: fstps 0xC(%esp);");
    asm("loc_6F72415: flds (%esp);");
    asm("loc_6F72419: fmuls (%eax);");
    asm("loc_6F7241B: fstps 8(%esp);");
    asm("loc_6F7241F: flds 0x20(%esp);");
    asm("loc_6F72423: fmuls (%eax);");
    asm("loc_6F72425: fstps 4(%esp);");
    asm("loc_6F72429: fmuls 4(%eax);");
    asm("loc_6F7242C: flds (%esp);");
    asm("loc_6F72430: fmuls 4(%eax);");
    asm("loc_6F72433: flds 0x20(%esp);");
    asm("loc_6F72437: fmuls 4(%eax);");
    asm("loc_6F7243A: flds (%esp);");
    asm("loc_6F7243E: fmuls 8(%eax);");
    asm("loc_6F72441: fstps 0x10(%esp);");
    asm("loc_6F72445: flds 0x20(%esp);");
    asm("loc_6F72449: fmuls 8(%eax);");
    asm("loc_6F7244C: fstps (%esp);");
    asm("loc_6F72450: flds 0x20(%esp);");
    asm("loc_6F72454: fmuls 0xC(%eax);");
    asm("loc_6F72457: flds 0x10(%esp);");
    asm("loc_6F7245B: mov 0x1C(%esp),%eax;");
    asm("loc_6F7245F: fadd %st(1),%st;");
    asm("loc_6F72461: fsubrs _data_6F730F8;");
    asm("loc_6F72467: fstps (%eax);");
    asm("loc_6F72469: fld %st(2);");
    asm("loc_6F7246B: fsubs 4(%esp);");
    asm("loc_6F7246F: fstps 4(%eax);");
    asm("loc_6F72472: fld %st(1);");
    asm("loc_6F72474: fadds 8(%esp);");
    asm("loc_6F72478: fstps 8(%eax);");
    asm("loc_6F7247B: fxch %st(2);");
    asm("loc_6F7247D: fadds 4(%esp);");
    asm("loc_6F72481: fstps 0xC(%eax);");
    asm("loc_6F72484: fxch;");
    asm("loc_6F72486: fadd %st(2),%st;");
    asm("loc_6F72488: fsubrs _data_6F730F8;");
    asm("loc_6F7248E: fstps 0x10(%eax);");
    asm("loc_6F72491: flds (%esp);");
    asm("loc_6F72495: fsubs 0xC(%esp);");
    asm("loc_6F72499: fstps 0x14(%eax);");
    asm("loc_6F7249C: fsubs 8(%esp);");
    asm("loc_6F724A0: fstps 0x18(%eax);");
    asm("loc_6F724A3: flds (%esp);");
    asm("loc_6F724A7: fadds 0xC(%esp);");
    asm("loc_6F724AB: fstps 0x1C(%eax);");
    asm("loc_6F724AE: flds 0x10(%esp);");
    asm("loc_6F724B2: fadd %st(1),%st;");
    asm("loc_6F724B4: fsubrs _data_6F730F8;");
    asm("loc_6F724BA: fstps 0x20(%eax);");
    asm("loc_6F724BD: xor %eax,%eax;");
    asm("loc_6F724BF: fstp %st(0);");
    asm("loc_6F724C1: add $0x14,%esp;");
    asm("loc_6F724C4: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6F724D0() // _sub_6F724D0
{
    __DEBUG_ASM(6F724D0);
    // chunk 0x6F724D0 _sub_6F724D0
    asm("loc_6F724D0: mov 0xC(%esp),%ecx;");
    asm("loc_6F724D4: mov 0x10(%esp),%edx;");
    asm("loc_6F724D8: flds 8(%ecx);");
    asm("loc_6F724DB: fmuls 8(%edx);");
    asm("loc_6F724DE: flds 4(%ecx);");
    asm("loc_6F724E1: fmuls 4(%edx);");
    asm("loc_6F724E4: faddp;");
    asm("loc_6F724E6: flds 0xC(%edx);");
    asm("loc_6F724E9: fmuls 0xC(%ecx);");
    asm("loc_6F724EC: faddp;");
    asm("loc_6F724EE: flds (%ecx);");
    asm("loc_6F724F0: fmuls (%edx);");
    asm("loc_6F724F2: faddp;");
    asm("loc_6F724F4: fcomps _data_6F730FC;");
    asm("loc_6F724FA: fnstsw %ax;");
    asm("loc_6F724FC: test $5,%ah;");
    asm("loc_6F724FF: mov 8(%esp),%eax;");
    asm("loc_6F72503: jp loc_6F72540;");
    asm("loc_6F72505: flds (%ecx);");
    asm("loc_6F72507: fadds (%edx);");
    asm("loc_6F72509: fmuls 0x14(%esp);");
    asm("loc_6F7250D: fsubrs (%ecx);");
    asm("loc_6F7250F: fstps (%eax);");
    asm("loc_6F72511: flds 4(%ecx);");
    asm("loc_6F72514: fadds 4(%edx);");
    asm("loc_6F72517: fmuls 0x14(%esp);");
    asm("loc_6F7251B: fsubrs 4(%ecx);");
    asm("loc_6F7251E: fstps 4(%eax);");
    asm("loc_6F72521: flds 8(%ecx);");
    asm("loc_6F72524: fadds 8(%edx);");
    asm("loc_6F72527: fmuls 0x14(%esp);");
    asm("loc_6F7252B: fsubrs 8(%ecx);");
    asm("loc_6F7252E: fstps 8(%eax);");
    asm("loc_6F72531: flds 0xC(%edx);");
    asm("loc_6F72534: fadds 0xC(%ecx);");
    asm("loc_6F72537: fmuls 0x14(%esp);");
    asm("loc_6F7253B: fsubrs 0xC(%ecx);");
    asm("loc_6F7253E: jmp loc_6F72579;");
    asm("loc_6F72540: flds (%edx);");
    asm("loc_6F72542: fsubs (%ecx);");
    asm("loc_6F72544: fmuls 0x14(%esp);");
    asm("loc_6F72548: fadds (%ecx);");
    asm("loc_6F7254A: fstps (%eax);");
    asm("loc_6F7254C: flds 4(%edx);");
    asm("loc_6F7254F: fsubs 4(%ecx);");
    asm("loc_6F72552: fmuls 0x14(%esp);");
    asm("loc_6F72556: fadds 4(%ecx);");
    asm("loc_6F72559: fstps 4(%eax);");
    asm("loc_6F7255C: flds 8(%edx);");
    asm("loc_6F7255F: fsubs 8(%ecx);");
    asm("loc_6F72562: fmuls 0x14(%esp);");
    asm("loc_6F72566: fadds 8(%ecx);");
    asm("loc_6F72569: fstps 8(%eax);");
    asm("loc_6F7256C: flds 0xC(%edx);");
    asm("loc_6F7256F: fsubs 0xC(%ecx);");
    asm("loc_6F72572: fmuls 0x14(%esp);");
    asm("loc_6F72576: fadds 0xC(%ecx);");
    asm("loc_6F72579: fstps 0xC(%eax);");
    asm("loc_6F7257C: flds 0xC(%eax);");
    asm("loc_6F7257F: flds 8(%eax);");
    asm("loc_6F72582: flds 4(%eax);");
    asm("loc_6F72585: flds (%eax);");
    asm("loc_6F72587: fld %st(0);");
    asm("loc_6F72589: fmul %st(1),%st;");
    asm("loc_6F7258B: fld %st(2);");
    asm("loc_6F7258D: fmul %st(3),%st;");
    asm("loc_6F7258F: faddp;");
    asm("loc_6F72591: fld %st(3);");
    asm("loc_6F72593: fmul %st(4),%st;");
    asm("loc_6F72595: faddp;");
    asm("loc_6F72597: fld %st(4);");
    asm("loc_6F72599: fmul %st(5),%st;");
    asm("loc_6F7259B: faddp;");
    asm("loc_6F7259D: fsqrt;");
    asm("loc_6F7259F: fstp %st(4);");
    asm("loc_6F725A1: fstp %st(0);");
    asm("loc_6F725A3: fstp %st(0);");
    asm("loc_6F725A5: fstp %st(0);");
    asm("loc_6F725A7: fdivrs _data_6F730F8;");
    asm("loc_6F725AD: fld %st(0);");
    asm("loc_6F725AF: fmuls (%eax);");
    asm("loc_6F725B1: fstps (%eax);");
    asm("loc_6F725B3: fld %st(0);");
    asm("loc_6F725B5: fmuls 4(%eax);");
    asm("loc_6F725B8: fstps 4(%eax);");
    asm("loc_6F725BB: fld %st(0);");
    asm("loc_6F725BD: fmuls 8(%eax);");
    asm("loc_6F725C0: fstps 8(%eax);");
    asm("loc_6F725C3: fmuls 0xC(%eax);");
    asm("loc_6F725C6: fstps 0xC(%eax);");
    asm("loc_6F725C9: xor %eax,%eax;");
    asm("loc_6F725CB: ret $0x14;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6F725D0() // _sub_6F725D0
{
    __DEBUG_ASM(6F725D0);
    // chunk 0x6F725D0 _sub_6F725D0
    asm("loc_6F725D0: sub $0x18,%esp;");
    asm("loc_6F725D3: push %esi;");
    asm("loc_6F725D4: mov 0x28(%esp),%esi;");
    asm("loc_6F725D8: push %edi;");
    asm("loc_6F725D9: mov 0x30(%esp),%edi;");
    asm("loc_6F725DD: flds (%esi);");
    asm("loc_6F725DF: fld %st(0);");
    asm("loc_6F725E1: fmulp;");
    asm("loc_6F725E3: flds 0xC(%esi);");
    asm("loc_6F725E6: fmuls 0xC(%esi);");
    asm("loc_6F725E9: flds 8(%esi);");
    asm("loc_6F725EC: fmuls 8(%esi);");
    asm("loc_6F725EF: sub $0xC,%esp;");
    asm("loc_6F725F2: lea 0x14(%esp),%ecx;");
    asm("loc_6F725F6: faddp;");
    asm("loc_6F725F8: flds 4(%esi);");
    asm("loc_6F725FB: fmuls 4(%esi);");
    asm("loc_6F725FE: faddp;");
    asm("loc_6F72600: fsubrp;");
    asm("loc_6F72602: fld %st(0);");
    asm("loc_6F72604: fmuls 8(%edi);");
    asm("loc_6F72607: fstps 8(%esp);");
    asm("loc_6F7260B: fld %st(0);");
    asm("loc_6F7260D: fmuls 4(%edi);");
    asm("loc_6F72610: fstps 4(%esp);");
    asm("loc_6F72614: fmuls (%edi);");
    asm("loc_6F72616: fstps (%esp);");
    asm("loc_6F72619: call _sub_6F72720;");
    asm("loc_6F7261E: mov 0x28(%esp),%eax;");
    asm("loc_6F72622: mov 8(%esp),%edx;");
    asm("loc_6F72626: mov %eax,%ecx;");
    asm("loc_6F72628: mov %edx,(%ecx);");
    asm("loc_6F7262A: mov 0xC(%esp),%edx;");
    asm("loc_6F7262E: mov %edx,4(%ecx);");
    asm("loc_6F72631: mov 0x10(%esp),%edx;");
    asm("loc_6F72635: mov %edx,8(%ecx);");
    asm("loc_6F72638: flds 4(%esi);");
    asm("loc_6F7263B: fadd %st,%st(0);");
    asm("loc_6F7263D: flds 8(%esi);");
    asm("loc_6F72640: fadd %st,%st(0);");
    asm("loc_6F72642: flds 0xC(%esi);");
    asm("loc_6F72645: fadd %st,%st(0);");
    asm("loc_6F72647: fstps 0x10(%esp);");
    asm("loc_6F7264B: flds 0xC(%esi);");
    asm("loc_6F7264E: fmuls 8(%edi);");
    asm("loc_6F72651: flds 8(%esi);");
    asm("loc_6F72654: fmuls 4(%edi);");
    asm("loc_6F72657: faddp;");
    asm("loc_6F72659: flds 4(%esi);");
    asm("loc_6F7265C: fmuls (%edi);");
    asm("loc_6F7265E: faddp;");
    asm("loc_6F72660: fstps 0x2C(%esp);");
    asm("loc_6F72664: fxch;");
    asm("loc_6F72666: fmuls 0x2C(%esp);");
    asm("loc_6F7266A: fstps 0x14(%esp);");
    asm("loc_6F7266E: fmuls 0x2C(%esp);");
    asm("loc_6F72672: flds 0x10(%esp);");
    asm("loc_6F72676: fmuls 0x2C(%esp);");
    asm("loc_6F7267A: flds 0x14(%esp);");
    asm("loc_6F7267E: fadds (%eax);");
    asm("loc_6F72680: fsts 0x30(%esp);");
    asm("loc_6F72684: fstps (%eax);");
    asm("loc_6F72686: fxch;");
    asm("loc_6F72688: fadds 4(%eax);");
    asm("loc_6F7268B: fsts 0x28(%esp);");
    asm("loc_6F7268F: fstps 4(%eax);");
    asm("loc_6F72692: fadds 8(%eax);");
    asm("loc_6F72695: fsts 8(%eax);");
    asm("loc_6F72698: flds 8(%edi);");
    asm("loc_6F7269B: fmuls 8(%esi);");
    asm("loc_6F7269E: flds 4(%edi);");
    asm("loc_6F726A1: fmuls 0xC(%esi);");
    asm("loc_6F726A4: fsubrp;");
    asm("loc_6F726A6: flds (%edi);");
    asm("loc_6F726A8: fmuls 0xC(%esi);");
    asm("loc_6F726AB: flds 8(%edi);");
    asm("loc_6F726AE: fmuls 4(%esi);");
    asm("loc_6F726B1: mov (%esi),%ecx;");
    asm("loc_6F726B3: mov %ecx,0x2C(%esp);");
    asm("loc_6F726B7: fsubrp;");
    asm("loc_6F726B9: flds 4(%edi);");
    asm("loc_6F726BC: fmuls 4(%esi);");
    asm("loc_6F726BF: flds (%edi);");
    asm("loc_6F726C1: fmuls 8(%esi);");
    asm("loc_6F726C4: pop %edi;");
    asm("loc_6F726C5: pop %esi;");
    asm("loc_6F726C6: fsubrp;");
    asm("loc_6F726C8: fstps 0x14(%esp);");
    asm("loc_6F726CC: fxch;");
    asm("loc_6F726CE: fmuls 0x24(%esp);");
    asm("loc_6F726D2: fstps (%esp);");
    asm("loc_6F726D6: fmuls 0x24(%esp);");
    asm("loc_6F726DA: flds 0x14(%esp);");
    asm("loc_6F726DE: fmuls 0x24(%esp);");
    asm("loc_6F726E2: flds (%esp);");
    asm("loc_6F726E6: fadd %st,%st(0);");
    asm("loc_6F726E8: fstps (%esp);");
    asm("loc_6F726EC: fxch;");
    asm("loc_6F726EE: fadd %st,%st(0);");
    asm("loc_6F726F0: fstps 4(%esp);");
    asm("loc_6F726F4: fadd %st,%st(0);");
    asm("loc_6F726F6: flds 0x28(%esp);");
    asm("loc_6F726FA: fadds (%esp);");
    asm("loc_6F726FE: fstps (%eax);");
    asm("loc_6F72700: flds 0x20(%esp);");
    asm("loc_6F72704: fadds 4(%esp);");
    asm("loc_6F72708: fstps 4(%eax);");
    asm("loc_6F7270B: fxch;");
    asm("loc_6F7270D: fadd %st(1),%st;");
    asm("loc_6F7270F: fstps 8(%eax);");
    asm("loc_6F72712: xor %eax,%eax;");
    asm("loc_6F72714: fstp %st(0);");
    asm("loc_6F72716: add $0x18,%esp;");
    asm("loc_6F72719: ret $0x10;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6F72720() // _sub_6F72720
{
    __DEBUG_ASM(6F72720);
    // chunk 0x6F72720 _sub_6F72720
    asm("loc_6F72720: mov 8(%esp),%edx;");
    asm("loc_6F72724: mov %ecx,%eax;");
    asm("loc_6F72726: mov 4(%esp),%ecx;");
    asm("loc_6F7272A: mov %ecx,(%eax);");
    asm("loc_6F7272C: mov 0xC(%esp),%ecx;");
    asm("loc_6F72730: mov %edx,4(%eax);");
    asm("loc_6F72733: mov %ecx,8(%eax);");
    asm("loc_6F72736: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6F72740() // _sub_6F72740
{
    __DEBUG_ASM(6F72740);
    // chunk 0x6F72740 _sub_6F72740
    asm("loc_6F72740: sub $0x30,%esp;");
    asm("loc_6F72743: mov 0x3C(%esp),%eax;");
    asm("loc_6F72747: mov 0x40(%esp),%ecx;");
    asm("loc_6F7274B: mov 0x38(%esp),%edx;");
    asm("loc_6F7274F: flds (%eax);");
    asm("loc_6F72751: fmuls (%ecx);");
    asm("loc_6F72753: flds 0xC(%eax);");
    asm("loc_6F72756: fmuls 0xC(%ecx);");
    asm("loc_6F72759: flds 8(%eax);");
    asm("loc_6F7275C: fmuls 8(%ecx);");
    asm("loc_6F7275F: faddp;");
    asm("loc_6F72761: flds 4(%eax);");
    asm("loc_6F72764: fmuls 4(%ecx);");
    asm("loc_6F72767: faddp;");
    asm("loc_6F72769: fsubrp;");
    asm("loc_6F7276B: fstps (%edx);");
    asm("loc_6F7276D: flds 8(%eax);");
    asm("loc_6F72770: fmuls 0xC(%ecx);");
    asm("loc_6F72773: flds 0xC(%eax);");
    asm("loc_6F72776: fmuls 8(%ecx);");
    asm("loc_6F72779: fsubrp;");
    asm("loc_6F7277B: flds 4(%ecx);");
    asm("loc_6F7277E: fmuls 0xC(%eax);");
    asm("loc_6F72781: flds 4(%eax);");
    asm("loc_6F72784: fmuls 0xC(%ecx);");
    asm("loc_6F72787: fsubrp;");
    asm("loc_6F72789: flds 4(%eax);");
    asm("loc_6F7278C: fmuls 8(%ecx);");
    asm("loc_6F7278F: flds 8(%eax);");
    asm("loc_6F72792: fmuls 4(%ecx);");
    asm("loc_6F72795: fsubrp;");
    asm("loc_6F72797: fstps 0x2C(%esp);");
    asm("loc_6F7279B: flds (%eax);");
    asm("loc_6F7279D: fld %st(0);");
    asm("loc_6F7279F: fmuls 4(%ecx);");
    asm("loc_6F727A2: fld %st(1);");
    asm("loc_6F727A4: fmuls 8(%ecx);");
    asm("loc_6F727A7: fstps 0x10(%esp);");
    asm("loc_6F727AB: fxch;");
    asm("loc_6F727AD: fmuls 0xC(%ecx);");
    asm("loc_6F727B0: fstps 0x14(%esp);");
    asm("loc_6F727B4: flds (%ecx);");
    asm("loc_6F727B6: fld %st(0);");
    asm("loc_6F727B8: fmuls 4(%eax);");
    asm("loc_6F727BB: fstps (%esp);");
    asm("loc_6F727BF: fld %st(0);");
    asm("loc_6F727C1: fmuls 8(%eax);");
    asm("loc_6F727C4: fstps 4(%esp);");
    asm("loc_6F727C8: fmuls 0xC(%eax);");
    asm("loc_6F727CB: fstps 8(%esp);");
    asm("loc_6F727CF: flds (%esp);");
    asm("loc_6F727D3: fadd %st(1),%st;");
    asm("loc_6F727D5: fxch;");
    asm("loc_6F727D7: fstp %st(0);");
    asm("loc_6F727D9: flds 4(%esp);");
    asm("loc_6F727DD: fadds 0x10(%esp);");
    asm("loc_6F727E1: fstps 0x1C(%esp);");
    asm("loc_6F727E5: flds 8(%esp);");
    asm("loc_6F727E9: fadds 0x14(%esp);");
    asm("loc_6F727ED: fstps 0x20(%esp);");
    asm("loc_6F727F1: fadd %st(2),%st;");
    asm("loc_6F727F3: fstps (%esp);");
    asm("loc_6F727F7: flds 0x1C(%esp);");
    asm("loc_6F727FB: fadd %st(1),%st;");
    asm("loc_6F727FD: fstps 4(%esp);");
    asm("loc_6F72801: fstp %st(0);");
    asm("loc_6F72803: fstp %st(0);");
    asm("loc_6F72805: flds 0x20(%esp);");
    asm("loc_6F72809: fadds 0x2C(%esp);");
    asm("loc_6F7280D: mov (%esp),%eax;");
    asm("loc_6F72811: mov 4(%esp),%ecx;");
    asm("loc_6F72815: add $4,%edx;");
    asm("loc_6F72818: fstps 8(%esp);");
    asm("loc_6F7281C: mov %eax,(%edx);");
    asm("loc_6F7281E: mov 8(%esp),%eax;");
    asm("loc_6F72822: mov %ecx,4(%edx);");
    asm("loc_6F72825: mov %eax,8(%edx);");
    asm("loc_6F72828: xor %eax,%eax;");
    asm("loc_6F7282A: add $0x30,%esp;");
    asm("loc_6F7282D: ret $0x10;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6F72830() // _sub_6F72830
{
    __DEBUG_ASM(6F72830);
    // chunk 0x6F72830 _sub_6F72830
    asm("loc_6F72830: push %ecx;");
    asm("loc_6F72831: mov 0x10(%esp),%eax;");
    asm("loc_6F72835: mov $0x5F000000,%edx;");
    asm("loc_6F7283A: mov %eax,%ecx;");
    asm("loc_6F7283C: mov %eax,(%esp);");
    asm("loc_6F72840: shr $0x17,%ecx;");
    asm("loc_6F72843: and $0xFF,%ecx;");
    asm("loc_6F72849: shl $0x16,%ecx;");
    asm("loc_6F7284C: shr $0xE,%eax;");
    asm("loc_6F7284F: sub %ecx,%edx;");
    asm("loc_6F72851: and $0x3FF,%eax;");
    asm("loc_6F72856: xor %ecx,%ecx;");
    asm("loc_6F72858: and $0xFF800000,%edx;");
    asm("loc_6F7285E: mov _data_6F74030(%eax),%cl;");
    asm("loc_6F72864: shl $0xF,%ecx;");
    asm("loc_6F72867: or %ecx,%edx;");
    asm("loc_6F72869: xor %eax,%eax;");
    asm("loc_6F7286B: mov %edx,(%esp);");
    asm("loc_6F7286F: mov 0xC(%esp),%edx;");
    asm("loc_6F72873: flds (%esp);");
    asm("loc_6F72877: fmuls (%esp);");
    asm("loc_6F7287B: fmuls 0x10(%esp);");
    asm("loc_6F7287F: fsubrs _data_6F73108;");
    asm("loc_6F72885: fmuls (%esp);");
    asm("loc_6F72889: fmuls _data_6F73100;");
    asm("loc_6F7288F: fld %st(0);");
    asm("loc_6F72891: fmul %st(1),%st;");
    asm("loc_6F72893: fmuls 0x10(%esp);");
    asm("loc_6F72897: fsubrs _data_6F73108;");
    asm("loc_6F7289D: fmul %st(1),%st;");
    asm("loc_6F7289F: fmuls _data_6F73100;");
    asm("loc_6F728A5: fstps (%edx);");
    asm("loc_6F728A7: fstp %st(0);");
    asm("loc_6F728A9: pop %ecx;");
    asm("loc_6F728AA: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6F728B0() // _sub_6F728B0
{
    __DEBUG_ASM(6F728B0);
    // chunk 0x6F728B0 _sub_6F728B0
    asm("loc_6F728B0: push %ecx;");
    asm("loc_6F728B1: mov 0x10(%esp),%eax;");
    asm("loc_6F728B5: mov $0x5F000000,%edx;");
    asm("loc_6F728BA: mov %eax,%ecx;");
    asm("loc_6F728BC: mov %eax,(%esp);");
    asm("loc_6F728C0: shr $0x17,%ecx;");
    asm("loc_6F728C3: and $0xFF,%ecx;");
    asm("loc_6F728C9: shl $0x16,%ecx;");
    asm("loc_6F728CC: shr $0xE,%eax;");
    asm("loc_6F728CF: sub %ecx,%edx;");
    asm("loc_6F728D1: and $0x3FF,%eax;");
    asm("loc_6F728D6: xor %ecx,%ecx;");
    asm("loc_6F728D8: and $0xFF800000,%edx;");
    asm("loc_6F728DE: mov _data_6F74030(%eax),%cl;");
    asm("loc_6F728E4: shl $0xF,%ecx;");
    asm("loc_6F728E7: or %ecx,%edx;");
    asm("loc_6F728E9: xor %eax,%eax;");
    asm("loc_6F728EB: mov %edx,(%esp);");
    asm("loc_6F728EF: mov 0xC(%esp),%edx;");
    asm("loc_6F728F3: flds (%esp);");
    asm("loc_6F728F7: fmuls (%esp);");
    asm("loc_6F728FB: fmuls 0x10(%esp);");
    asm("loc_6F728FF: fsubrs _data_6F73108;");
    asm("loc_6F72905: fmuls (%esp);");
    asm("loc_6F72909: fmuls _data_6F73100;");
    asm("loc_6F7290F: fld %st(0);");
    asm("loc_6F72911: fmul %st(1),%st;");
    asm("loc_6F72913: fmuls 0x10(%esp);");
    asm("loc_6F72917: fsubrs _data_6F73108;");
    asm("loc_6F7291D: fmul %st(1),%st;");
    asm("loc_6F7291F: fmuls _data_6F73100;");
    asm("loc_6F72925: fmuls 0x10(%esp);");
    asm("loc_6F72929: fstps (%edx);");
    asm("loc_6F7292B: fstp %st(0);");
    asm("loc_6F7292D: pop %ecx;");
    asm("loc_6F7292E: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6F72940() // _x86MathEngine_IComponentFactory_QueryInterface
{
    __DEBUG_ASM(6F72940);
    // chunk 0x6F72940 _sub_6F72940
    asm("loc_6F72940: subl $4,4(%esp);");
    asm("loc_6F72945: jmp _sub_6F71150;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6F72950() // _x86MathEngine_IComponentFactory_AddRef_Release
{
    __DEBUG_ASM(6F72950);
    // chunk 0x6F72950 _sub_6F72950
    asm("loc_6F72950: subl $4,4(%esp);");
    asm("loc_6F72955: jmp _sub_6F71160;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6F72960() // __onexit
{
    __DEBUG_ASM(6F72960);
    // chunk 0x6F72960 _sub_6F72960
    asm("loc_6F72960: cmpl $0xFFFFFFFF,_data_6F7444C;");
    asm("loc_6F72967: jne loc_6F72975;");
    asm("loc_6F72969: pushl 4(%esp);");
    asm("loc_6F7296D: calll *_import_6F7301C;");
    asm("loc_6F72973: pop %ecx;");
    asm("loc_6F72974: ret;");
    asm("loc_6F72975: push $_data_6F74448;");
    asm("loc_6F7297A: push $_data_6F7444C;");
    asm("loc_6F7297F: pushl 0xC(%esp);");
    asm("loc_6F72983: call _sub_6F72AEC;");
    asm("loc_6F72988: add $0xC,%esp;");
    asm("loc_6F7298B: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6F7298C() // _atexit
{
    __DEBUG_ASM(6F7298C);
    // chunk 0x6F7298C _sub_6F7298C
    asm("loc_6F7298C: pushl 4(%esp);");
    asm("loc_6F72990: call _sub_6F72960;");
    asm("loc_6F72995: neg %eax;");
    asm("loc_6F72997: sbb %eax,%eax;");
    asm("loc_6F72999: pop %ecx;");
    asm("loc_6F7299A: neg %eax;");
    asm("loc_6F7299C: dec %eax;");
    asm("loc_6F7299D: ret;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6F7299E() // ??2@YAPAXI@Z
{
    __DEBUG_ASM(6F7299E);
    // chunk 0x6F7299E _sub_6F7299E
    asm("loc_6F7299E: jmpl *_import_6F73014;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6F729A4() // __CRT_INIT@12
{
    __DEBUG_ASM(6F729A4);
    // chunk 0x6F729A4 _sub_6F729A4
    asm("loc_6F729A4: mov 8(%esp),%eax;");
    asm("loc_6F729A8: test %eax,%eax;");
    asm("loc_6F729AA: jne loc_6F729BA;");
    asm("loc_6F729AC: cmp %eax,_data_6F7443C;");
    asm("loc_6F729B2: jle loc_6F729E2;");
    asm("loc_6F729B4: decl _data_6F7443C;");
    asm("loc_6F729BA: mov _import_6F7302C,%ecx;");
    asm("loc_6F729C0: cmp $1,%eax;");
    asm("loc_6F729C3: mov (%ecx),%ecx;");
    asm("loc_6F729C5: mov %ecx,_data_6F74440;");
    asm("loc_6F729CB: jne loc_6F72A0C;");
    asm("loc_6F729CD: push $0x80;");
    asm("loc_6F729D2: calll *_import_6F73028;");
    asm("loc_6F729D8: test %eax,%eax;");
    asm("loc_6F729DA: pop %ecx;");
    asm("loc_6F729DB: mov %eax,_data_6F7444C;");
    asm("loc_6F729E0: jne loc_6F729E6;");
    asm("loc_6F729E2: xor %eax,%eax;");
    asm("loc_6F729E4: jmp loc_6F72A4C;");
    asm("loc_6F729E6: andl $0,(%eax);");
    asm("loc_6F729E9: mov _data_6F7444C,%eax;");
    asm("loc_6F729EE: push $_data_6F74008;");
    asm("loc_6F729F3: push $_data_6F74000;");
    asm("loc_6F729F8: mov %eax,_data_6F74448;");
    asm("loc_6F729FD: call _sub_6F72AF2;");
    asm("loc_6F72A02: incl _data_6F7443C;");
    asm("loc_6F72A08: pop %ecx;");
    asm("loc_6F72A09: pop %ecx;");
    asm("loc_6F72A0A: jmp loc_6F72A49;");
    asm("loc_6F72A0C: test %eax,%eax;");
    asm("loc_6F72A0E: jne loc_6F72A49;");
    asm("loc_6F72A10: mov _data_6F7444C,%eax;");
    asm("loc_6F72A15: test %eax,%eax;");
    asm("loc_6F72A17: je loc_6F72A49;");
    asm("loc_6F72A19: mov _data_6F74448,%ecx;");
    asm("loc_6F72A1F: push %esi;");
    asm("loc_6F72A20: lea -4(%ecx),%esi;");
    asm("loc_6F72A23: cmp %eax,%esi;");
    asm("loc_6F72A25: jb loc_6F72A39;");
    asm("loc_6F72A27: mov (%esi),%ecx;");
    asm("loc_6F72A29: test %ecx,%ecx;");
    asm("loc_6F72A2B: je loc_6F72A34;");
    asm("loc_6F72A2D: call *%ecx;");
    asm("loc_6F72A2F: mov _data_6F7444C,%eax;");
    asm("loc_6F72A34: sub $4,%esi;");
    asm("loc_6F72A37: jmp loc_6F72A23;");
    asm("loc_6F72A39: push %eax;");
    asm("loc_6F72A3A: calll *_import_6F73020;");
    asm("loc_6F72A40: andl $0,_data_6F7444C;");
    asm("loc_6F72A47: pop %ecx;");
    asm("loc_6F72A48: pop %esi;");
    asm("loc_6F72A49: push $1;");
    asm("loc_6F72A4B: pop %eax;");
    asm("loc_6F72A4C: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6F72A4F() // _DllEntryPoint
{
    __DEBUG_ASM(6F72A4F);
    // chunk 0x6F72A4F _sub_6F72A4F
    asm("loc_6F72A4F: push %ebp;");
    asm("loc_6F72A50: mov %esp,%ebp;");
    asm("loc_6F72A52: push %ebx;");
    asm("loc_6F72A53: mov 8(%ebp),%ebx;");
    asm("loc_6F72A56: push %esi;");
    asm("loc_6F72A57: mov 0xC(%ebp),%esi;");
    asm("loc_6F72A5A: push %edi;");
    asm("loc_6F72A5B: mov 0x10(%ebp),%edi;");
    asm("loc_6F72A5E: test %esi,%esi;");
    asm("loc_6F72A60: jne loc_6F72A6B;");
    asm("loc_6F72A62: cmpl $0,_data_6F7443C;");
    asm("loc_6F72A69: jmp loc_6F72A91;");
    asm("loc_6F72A6B: cmp $1,%esi;");
    asm("loc_6F72A6E: je loc_6F72A75;");
    asm("loc_6F72A70: cmp $2,%esi;");
    asm("loc_6F72A73: jne loc_6F72A97;");
    asm("loc_6F72A75: mov _data_6F74444,%eax;");
    asm("loc_6F72A7A: test %eax,%eax;");
    asm("loc_6F72A7C: je loc_6F72A87;");
    asm("loc_6F72A7E: push %edi;");
    asm("loc_6F72A7F: push %esi;");
    asm("loc_6F72A80: push %ebx;");
    asm("loc_6F72A81: call *%eax;");
    asm("loc_6F72A83: test %eax,%eax;");
    asm("loc_6F72A85: je loc_6F72A93;");
    asm("loc_6F72A87: push %edi;");
    asm("loc_6F72A88: push %esi;");
    asm("loc_6F72A89: push %ebx;");
    asm("loc_6F72A8A: call _sub_6F729A4;");
    asm("loc_6F72A8F: test %eax,%eax;");
    asm("loc_6F72A91: jne loc_6F72A97;");
    asm("loc_6F72A93: xor %eax,%eax;");
    asm("loc_6F72A95: jmp loc_6F72AE5;");
    asm("loc_6F72A97: push %edi;");
    asm("loc_6F72A98: push %esi;");
    asm("loc_6F72A99: push %ebx;");
    asm("loc_6F72A9A: call _sub_6F71090;");
    asm("loc_6F72A9F: cmp $1,%esi;");
    asm("loc_6F72AA2: mov %eax,0xC(%ebp);");
    asm("loc_6F72AA5: jne loc_6F72AB3;");
    asm("loc_6F72AA7: test %eax,%eax;");
    asm("loc_6F72AA9: jne loc_6F72AE2;");
    asm("loc_6F72AAB: push %edi;");
    asm("loc_6F72AAC: push %eax;");
    asm("loc_6F72AAD: push %ebx;");
    asm("loc_6F72AAE: call _sub_6F729A4;");
    asm("loc_6F72AB3: test %esi,%esi;");
    asm("loc_6F72AB5: je loc_6F72ABC;");
    asm("loc_6F72AB7: cmp $3,%esi;");
    asm("loc_6F72ABA: jne loc_6F72AE2;");
    asm("loc_6F72ABC: push %edi;");
    asm("loc_6F72ABD: push %esi;");
    asm("loc_6F72ABE: push %ebx;");
    asm("loc_6F72ABF: call _sub_6F729A4;");
    asm("loc_6F72AC4: test %eax,%eax;");
    asm("loc_6F72AC6: jne loc_6F72ACB;");
    asm("loc_6F72AC8: and %eax,0xC(%ebp);");
    asm("loc_6F72ACB: cmpl $0,0xC(%ebp);");
    asm("loc_6F72ACF: je loc_6F72AE2;");
    asm("loc_6F72AD1: mov _data_6F74444,%eax;");
    asm("loc_6F72AD6: test %eax,%eax;");
    asm("loc_6F72AD8: je loc_6F72AE2;");
    asm("loc_6F72ADA: push %edi;");
    asm("loc_6F72ADB: push %esi;");
    asm("loc_6F72ADC: push %ebx;");
    asm("loc_6F72ADD: call *%eax;");
    asm("loc_6F72ADF: mov %eax,0xC(%ebp);");
    asm("loc_6F72AE2: mov 0xC(%ebp),%eax;");
    asm("loc_6F72AE5: pop %edi;");
    asm("loc_6F72AE6: pop %esi;");
    asm("loc_6F72AE7: pop %ebx;");
    asm("loc_6F72AE8: pop %ebp;");
    asm("loc_6F72AE9: ret $0xC;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6F72AEC() // __dllonexit
{
    __DEBUG_ASM(6F72AEC);
    // chunk 0x6F72AEC _sub_6F72AEC
    asm("loc_6F72AEC: jmpl *_import_6F73018;");
    asm("int3;"); // unreachable
}
_naked _weak void _sub_6F72AF2() // _initterm
{
    __DEBUG_ASM(6F72AF2);
    // chunk 0x6F72AF2 _sub_6F72AF2
    asm("loc_6F72AF2: jmpl *_import_6F73024;");
    asm("int3;"); // unreachable
}
#ifdef __cplusplus
}
#endif // __cplusplus
#endif // __INTELLISENSE__
