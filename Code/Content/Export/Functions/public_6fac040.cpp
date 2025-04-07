#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f15350);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fac04b _public_6fac04b

PROC_DECLARE(0x6fac040, internal_6fac040, public_6fac040);
/* CHUNK of public_6ef1240 */
extern "C" NAKED register_t __cdecl internal_6fac040()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x430]
        jmp public_6f15350
        public_6fac04b : nop
        mov eax, offset public_6fc0c6c
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fac040)
        ASM_EXPORT_ENTRY_SINGLE(0x6fac04b, public_6fac04b)
    }
}

#undef public_6fac04b

#pragma init_seg(compiler)
extern "C" void const* const public_6fac04b = __AsmFindLabelExport(&internal_6fac040, 0x6fac04b);
