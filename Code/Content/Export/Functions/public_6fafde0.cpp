#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ecfa90);
CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f15350);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fafde8 _public_6fafde8
#define public_6fafdf3 _public_6fafdf3
#define public_6fafdfe _public_6fafdfe
#define public_6fafe09 _public_6fafe09
#define public_6fafe14 _public_6fafe14

PROC_DECLARE(0x6fafde0, internal_6fafde0, public_6fafde0);
/* CHUNK of public_6f6d920 */
extern "C" NAKED register_t __cdecl internal_6fafde0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x7C]
        jmp public_6eec8d0
        public_6fafde8 : nop
        lea ecx, ss:[ebp-0x8C]
        jmp public_6eec8d0
        public_6fafdf3 : nop
        lea ecx, ss:[ebp-0xAC]
        jmp public_6eec8d0
        public_6fafdfe : nop
        lea ecx, ss:[ebp-0x98]
        jmp public_6ecfa90
        public_6fafe09 : nop
        lea ecx, ss:[ebp-0x98]
        jmp public_6f15350
        public_6fafe14 : nop
        mov eax, offset public_6fc4f80
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fafde0)
        ASM_EXPORT_ENTRY_FIRST(0x6fafde8, public_6fafde8)
        ASM_EXPORT_ENTRY(0x6fafdf3, public_6fafdf3)
        ASM_EXPORT_ENTRY(0x6fafdfe, public_6fafdfe)
        ASM_EXPORT_ENTRY(0x6fafe09, public_6fafe09)
        ASM_EXPORT_ENTRY_LAST(0x6fafe14, public_6fafe14)
    }
}

#undef public_6fafde8
#undef public_6fafdf3
#undef public_6fafdfe
#undef public_6fafe09
#undef public_6fafe14

#pragma init_seg(compiler)
extern "C" void const* const public_6fafde8 = __AsmFindLabelExport(&internal_6fafde0, 0x6fafde8);
extern "C" void const* const public_6fafdf3 = __AsmFindLabelExport(&internal_6fafde0, 0x6fafdf3);
extern "C" void const* const public_6fafdfe = __AsmFindLabelExport(&internal_6fafde0, 0x6fafdfe);
extern "C" void const* const public_6fafe09 = __AsmFindLabelExport(&internal_6fafde0, 0x6fafe09);
extern "C" void const* const public_6fafe14 = __AsmFindLabelExport(&internal_6fafde0, 0x6fafe14);
