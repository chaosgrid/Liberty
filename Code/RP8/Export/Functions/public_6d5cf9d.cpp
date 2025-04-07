#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d33247);
CLANG_FORWARD_PROC_SYMBOL(public_6d3fc22);
CLANG_FORWARD_PROC_SYMBOL(public_6d5cd86);

#define public_6d5cfa5 _public_6d5cfa5
#define public_6d5cfad _public_6d5cfad

PROC_DECLARE(0x6d5cf9d, internal_6d5cf9d, public_6d5cf9d);
/* CHUNK of public_6d32d6f */
extern "C" NAKED register_t __cdecl internal_6d5cf9d()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x3C]
        jmp public_6d3fc22
        public_6d5cfa5 : nop
        lea ecx, ss:[ebp-0x2C]
        jmp public_6d33247
        public_6d5cfad : nop
        mov eax, offset public_6d62930
        jmp public_6d5cd86
        UNREACHABLE_TRAP(0x6d5cf9d)
        ASM_EXPORT_ENTRY_FIRST(0x6d5cfa5, public_6d5cfa5)
        ASM_EXPORT_ENTRY_LAST(0x6d5cfad, public_6d5cfad)
    }
}

#undef public_6d5cfa5
#undef public_6d5cfad

#pragma init_seg(compiler)
extern "C" void const* const public_6d5cfa5 = __AsmFindLabelExport(&internal_6d5cf9d, 0x6d5cfa5);
extern "C" void const* const public_6d5cfad = __AsmFindLabelExport(&internal_6d5cf9d, 0x6d5cfad);
