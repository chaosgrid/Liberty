#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f15350);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fad5b8 _public_6fad5b8

PROC_DECLARE(0x6fad5b0, internal_6fad5b0, public_6fad5b0);
/* CHUNK of public_6f0ff90 */
extern "C" NAKED register_t __cdecl internal_6fad5b0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x74]
        jmp public_6f15350
        public_6fad5b8 : nop
        mov eax, offset public_6fc24d8
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fad5b0)
        ASM_EXPORT_ENTRY_SINGLE(0x6fad5b8, public_6fad5b8)
    }
}

#undef public_6fad5b8

#pragma init_seg(compiler)
extern "C" void const* const public_6fad5b8 = __AsmFindLabelExport(&internal_6fad5b0, 0x6fad5b8);
