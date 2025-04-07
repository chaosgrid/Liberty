#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce36f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d61fd8 _public_6d61fd8

PROC_DECLARE(0x6d61fd0, internal_6d61fd0, public_6d61fd0);
/* CHUNK of public_6d1a1a0 */
extern "C" NAKED register_t __cdecl internal_6d61fd0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x1C]
        jmp public_6ce36f0
        public_6d61fd8 : nop
        mov eax, offset public_6d72d10
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d61fd0)
        ASM_EXPORT_ENTRY_SINGLE(0x6d61fd8, public_6d61fd8)
    }
}

#undef public_6d61fd8

#pragma init_seg(compiler)
extern "C" void const* const public_6d61fd8 = __AsmFindLabelExport(&internal_6d61fd0, 0x6d61fd8);
