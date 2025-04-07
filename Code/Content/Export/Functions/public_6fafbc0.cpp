#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f28e10);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fafbc8 _public_6fafbc8
#define public_6fafbd0 _public_6fafbd0
#define public_6fafbdb _public_6fafbdb

PROC_DECLARE(0x6fafbc0, internal_6fafbc0, public_6fafbc0);
/* CHUNK of public_6f64fc0 */
extern "C" NAKED register_t __cdecl internal_6fafbc0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x5C]
        jmp public_6eec8d0
        public_6fafbc8 : nop
        lea ecx, ss:[ebp-0x80]
        jmp public_6eec8d0
        public_6fafbd0 : nop
        lea ecx, ss:[ebp-0xB4]
        jmp public_6f28e10
        public_6fafbdb : nop
        mov eax, offset public_6fc4c80
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fafbc0)
        ASM_EXPORT_ENTRY_FIRST(0x6fafbc8, public_6fafbc8)
        ASM_EXPORT_ENTRY(0x6fafbd0, public_6fafbd0)
        ASM_EXPORT_ENTRY_LAST(0x6fafbdb, public_6fafbdb)
    }
}

#undef public_6fafbc8
#undef public_6fafbd0
#undef public_6fafbdb

#pragma init_seg(compiler)
extern "C" void const* const public_6fafbc8 = __AsmFindLabelExport(&internal_6fafbc0, 0x6fafbc8);
extern "C" void const* const public_6fafbd0 = __AsmFindLabelExport(&internal_6fafbc0, 0x6fafbd0);
extern "C" void const* const public_6fafbdb = __AsmFindLabelExport(&internal_6fafbc0, 0x6fafbdb);
