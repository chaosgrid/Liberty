#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f9dcd0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fb1aa8 _public_6fb1aa8

PROC_DECLARE(0x6fb1aa0, internal_6fb1aa0, public_6fb1aa0);
/* CHUNK of public_6f9dad0 */
extern "C" NAKED register_t __cdecl internal_6fb1aa0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x1C]
        jmp public_6f9dcd0
        public_6fb1aa8 : nop
        mov eax, offset public_6fc710c
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fb1aa0)
        ASM_EXPORT_ENTRY_SINGLE(0x6fb1aa8, public_6fb1aa8)
    }
}

#undef public_6fb1aa8

#pragma init_seg(compiler)
extern "C" void const* const public_6fb1aa8 = __AsmFindLabelExport(&internal_6fb1aa0, 0x6fb1aa8);
