#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63322f0);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6397588 _public_6397588

PROC_DECLARE(0x6397580, internal_6397580, public_6397580);
/* CHUNK of public_6332140 */
extern "C" NAKED register_t __cdecl internal_6397580()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x14]
        jmp public_63322f0
        public_6397588 : nop
        mov eax, offset public_63b172c
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6397580)
        ASM_EXPORT_ENTRY_SINGLE(0x6397588, public_6397588)
    }
}

#undef public_6397588

#pragma init_seg(compiler)
extern "C" void const* const public_6397588 = __AsmFindLabelExport(&internal_6397580, 0x6397588);
