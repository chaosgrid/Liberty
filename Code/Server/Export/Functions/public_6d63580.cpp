#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d63589 _public_6d63589

PROC_DECLARE(0x6d63580, internal_6d63580, public_6d63580);
/* CHUNK of public_6d4eeb0 */
extern "C" NAKED register_t __cdecl internal_6d63580()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x1C]
        jmp dword ptr ds : [public_6d64390]
        public_6d63589 : nop
        mov eax, offset public_6d75808
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d63580)
        ASM_EXPORT_ENTRY_SINGLE(0x6d63589, public_6d63589)
    }
}

#undef public_6d63589

#pragma init_seg(compiler)
extern "C" void const* const public_6d63589 = __AsmFindLabelExport(&internal_6d63580, 0x6d63589);
