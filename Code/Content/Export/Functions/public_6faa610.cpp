#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ebf720);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6faa61b _public_6faa61b

PROC_DECLARE(0x6faa610, internal_6faa610, public_6faa610);
/* CHUNK of public_6ebae10 */
extern "C" NAKED register_t __cdecl internal_6faa610()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x180]
        jmp public_6ebf720
        public_6faa61b : nop
        mov eax, offset public_6fbea7c
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6faa610)
        ASM_EXPORT_ENTRY_SINGLE(0x6faa61b, public_6faa61b)
    }
}

#undef public_6faa61b

#pragma init_seg(compiler)
extern "C" void const* const public_6faa61b = __AsmFindLabelExport(&internal_6faa610, 0x6faa61b);
