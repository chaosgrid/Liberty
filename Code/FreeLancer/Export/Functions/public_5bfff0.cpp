#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41dc50);
CLANG_FORWARD_PROC_SYMBOL(public_4de730);
CLANG_FORWARD_PROC_SYMBOL(public_5204e0);
CLANG_FORWARD_PROC_SYMBOL(public_520500);
CLANG_FORWARD_PROC_SYMBOL(public_54c600);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bfffb _public_5bfffb
#define public_5c0009 _public_5c0009
#define public_5c0017 _public_5c0017
#define public_5c0025 _public_5c0025
#define public_5c0033 _public_5c0033
#define public_5c0041 _public_5c0041

PROC_DECLARE(0x5bfff0, internal_5bfff0, public_5bfff0);
/* CHUNK of public_5205d0 */
extern "C" NAKED register_t __cdecl internal_5bfff0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 8
        jmp public_520500
        public_5bfffb : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0xE0
        jmp public_41dc50
        public_5c0009 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0xFC
        jmp public_54c600
        public_5c0017 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x184
        jmp public_4de730
        public_5c0025 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x19C
        jmp public_5204e0
        public_5c0033 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x220
        jmp public_4de730
        public_5c0041 : nop
        mov eax, offset public_5f9fe8
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bfff0)
        ASM_EXPORT_ENTRY_FIRST(0x5bfffb, public_5bfffb)
        ASM_EXPORT_ENTRY(0x5c0009, public_5c0009)
        ASM_EXPORT_ENTRY(0x5c0017, public_5c0017)
        ASM_EXPORT_ENTRY(0x5c0025, public_5c0025)
        ASM_EXPORT_ENTRY(0x5c0033, public_5c0033)
        ASM_EXPORT_ENTRY_LAST(0x5c0041, public_5c0041)
    }
}

#undef public_5bfffb
#undef public_5c0009
#undef public_5c0017
#undef public_5c0025
#undef public_5c0033
#undef public_5c0041

#pragma init_seg(compiler)
extern "C" void const* const public_5bfffb = __AsmFindLabelExport(&internal_5bfff0, 0x5bfffb);
extern "C" void const* const public_5c0009 = __AsmFindLabelExport(&internal_5bfff0, 0x5c0009);
extern "C" void const* const public_5c0017 = __AsmFindLabelExport(&internal_5bfff0, 0x5c0017);
extern "C" void const* const public_5c0025 = __AsmFindLabelExport(&internal_5bfff0, 0x5c0025);
extern "C" void const* const public_5c0033 = __AsmFindLabelExport(&internal_5bfff0, 0x5c0033);
extern "C" void const* const public_5c0041 = __AsmFindLabelExport(&internal_5bfff0, 0x5c0041);
