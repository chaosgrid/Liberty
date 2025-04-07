#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce83e0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d60e68 _public_6d60e68

PROC_DECLARE(0x6d60e60, internal_6d60e60, public_6d60e60);
/* CHUNK of public_6d00410 */
extern "C" NAKED register_t __cdecl internal_6d60e60()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x3C]
        jmp public_6ce83e0
        public_6d60e68 : nop
        mov eax, offset public_6d719b0
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d60e60)
        ASM_EXPORT_ENTRY_SINGLE(0x6d60e68, public_6d60e68)
    }
}

#undef public_6d60e68

#pragma init_seg(compiler)
extern "C" void const* const public_6d60e68 = __AsmFindLabelExport(&internal_6d60e60, 0x6d60e68);
