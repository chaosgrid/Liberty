#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d604c9 _public_6d604c9

PROC_DECLARE(0x6d604c0, internal_6d604c0, public_6d604c0);
/* CHUNK of public_6ce68a0 */
extern "C" NAKED register_t __cdecl internal_6d604c0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x4C]
        jmp dword ptr ds : [public_6d641a8]
        public_6d604c9 : nop
        mov eax, offset public_6d70d04
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d604c0)
        ASM_EXPORT_ENTRY_SINGLE(0x6d604c9, public_6d604c9)
    }
}

#undef public_6d604c9

#pragma init_seg(compiler)
extern "C" void const* const public_6d604c9 = __AsmFindLabelExport(&internal_6d604c0, 0x6d604c9);
