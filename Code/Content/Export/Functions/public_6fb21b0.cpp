#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb7d10);
CLANG_FORWARD_PROC_SYMBOL(public_6f15350);
CLANG_FORWARD_PROC_SYMBOL(public_6f30830);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fb21b8 _public_6fb21b8
#define public_6fb21c3 _public_6fb21c3
#define public_6fb21d1 _public_6fb21d1

PROC_DECLARE(0x6fb21b0, internal_6fb21b0, public_6fb21b0);
/* CHUNK of public_6fa77c0 */
extern "C" NAKED register_t __cdecl internal_6fb21b0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x68]
        jmp public_6f30830
        public_6fb21b8 : nop
        lea ecx, ss:[ebp-0xA0]
        jmp public_6eb7d10
        public_6fb21c3 : nop
        mov ecx, dword ptr ss : [ebp-0xA4]
        add ecx, 0x10
        jmp public_6f15350
        public_6fb21d1 : nop
        mov eax, offset public_6fc77c8
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fb21b0)
        ASM_EXPORT_ENTRY_FIRST(0x6fb21b8, public_6fb21b8)
        ASM_EXPORT_ENTRY(0x6fb21c3, public_6fb21c3)
        ASM_EXPORT_ENTRY_LAST(0x6fb21d1, public_6fb21d1)
    }
}

#undef public_6fb21b8
#undef public_6fb21c3
#undef public_6fb21d1

#pragma init_seg(compiler)
extern "C" void const* const public_6fb21b8 = __AsmFindLabelExport(&internal_6fb21b0, 0x6fb21b8);
extern "C" void const* const public_6fb21c3 = __AsmFindLabelExport(&internal_6fb21b0, 0x6fb21c3);
extern "C" void const* const public_6fb21d1 = __AsmFindLabelExport(&internal_6fb21b0, 0x6fb21d1);
