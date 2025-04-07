#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d60ae9 _public_6d60ae9

PROC_DECLARE(0x6d60ae0, internal_6d60ae0, public_6d60ae0);
/* CHUNK of public_6cf6730 */
extern "C" NAKED register_t __cdecl internal_6d60ae0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x1C]
        jmp dword ptr ds : [public_6d64390]
        public_6d60ae9 : nop
        mov eax, offset public_6d7142c
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d60ae0)
        ASM_EXPORT_ENTRY_SINGLE(0x6d60ae9, public_6d60ae9)
    }
}

#undef public_6d60ae9

#pragma init_seg(compiler)
extern "C" void const* const public_6d60ae9 = __AsmFindLabelExport(&internal_6d60ae0, 0x6d60ae9);
