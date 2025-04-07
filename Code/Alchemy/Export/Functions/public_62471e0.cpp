#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6203bc0);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_62471eb _public_62471eb
#define public_62471f6 _public_62471f6

PROC_DECLARE(0x62471e0, internal_62471e0, public_62471e0);
/* CHUNK of public_6203480 */
extern "C" NAKED register_t __cdecl internal_62471e0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x90]
        jmp public_6203bc0
        public_62471eb : nop
        lea ecx, ss:[ebp-0x8C]
        jmp public_6203bc0
        public_62471f6 : nop
        mov eax, offset public_624ff7c
        jmp public_6246126
        UNREACHABLE_TRAP(0x62471e0)
        ASM_EXPORT_ENTRY_FIRST(0x62471eb, public_62471eb)
        ASM_EXPORT_ENTRY_LAST(0x62471f6, public_62471f6)
    }
}

#undef public_62471eb
#undef public_62471f6

#pragma init_seg(compiler)
extern "C" void const* const public_62471eb = __AsmFindLabelExport(&internal_62471e0, 0x62471eb);
extern "C" void const* const public_62471f6 = __AsmFindLabelExport(&internal_62471e0, 0x62471f6);
