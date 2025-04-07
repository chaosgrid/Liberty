#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d0b7e0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d60568 _public_6d60568

PROC_DECLARE(0x6d60560, internal_6d60560, public_6d60560);
/* CHUNK of public_6ce8760 */
extern "C" NAKED register_t __cdecl internal_6d60560()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x1C]
        jmp public_6d0b7e0
        public_6d60568 : nop
        mov eax, offset public_6d70e08
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d60560)
        ASM_EXPORT_ENTRY_SINGLE(0x6d60568, public_6d60568)
    }
}

#undef public_6d60568

#pragma init_seg(compiler)
extern "C" void const* const public_6d60568 = __AsmFindLabelExport(&internal_6d60560, 0x6d60568);
