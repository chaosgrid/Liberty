#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef38e0);
CLANG_FORWARD_PROC_SYMBOL(public_6ef6640);
CLANG_FORWARD_PROC_SYMBOL(public_6ef94e0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fb21e8 _public_6fb21e8
#define public_6fb21f0 _public_6fb21f0
#define public_6fb21f8 _public_6fb21f8

PROC_DECLARE(0x6fb21e0, internal_6fb21e0, public_6fb21e0);
/* CHUNK of public_6fa8140 */
extern "C" NAKED register_t __cdecl internal_6fb21e0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x5C]
        jmp public_6ef94e0
        public_6fb21e8 : nop
        lea ecx, ss:[ebp-0x44]
        jmp public_6ef38e0
        public_6fb21f0 : nop
        lea ecx, ss:[ebp-0x30]
        jmp public_6ef6640
        public_6fb21f8 : nop
        mov eax, offset public_6fc77fc
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fb21e0)
        ASM_EXPORT_ENTRY_FIRST(0x6fb21e8, public_6fb21e8)
        ASM_EXPORT_ENTRY(0x6fb21f0, public_6fb21f0)
        ASM_EXPORT_ENTRY_LAST(0x6fb21f8, public_6fb21f8)
    }
}

#undef public_6fb21e8
#undef public_6fb21f0
#undef public_6fb21f8

#pragma init_seg(compiler)
extern "C" void const* const public_6fb21e8 = __AsmFindLabelExport(&internal_6fb21e0, 0x6fb21e8);
extern "C" void const* const public_6fb21f0 = __AsmFindLabelExport(&internal_6fb21e0, 0x6fb21f0);
extern "C" void const* const public_6fb21f8 = __AsmFindLabelExport(&internal_6fb21e0, 0x6fb21f8);
