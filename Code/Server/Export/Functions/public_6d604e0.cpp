#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce6d60);
CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d604e8 _public_6d604e8

PROC_DECLARE(0x6d604e0, internal_6d604e0, public_6d604e0);
/* CHUNK of public_6ce6ba0 */
extern "C" NAKED register_t __cdecl internal_6d604e0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x24]
        jmp public_6ce6d60
        public_6d604e8 : nop
        mov eax, offset public_6d70d28
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d604e0)
        ASM_EXPORT_ENTRY_SINGLE(0x6d604e8, public_6d604e8)
    }
}

#undef public_6d604e8

#pragma init_seg(compiler)
extern "C" void const* const public_6d604e8 = __AsmFindLabelExport(&internal_6d604e0, 0x6d604e8);
