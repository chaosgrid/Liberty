#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6208610);
CLANG_FORWARD_PROC_SYMBOL(public_620b6f0);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_6247848 _public_6247848
#define public_6247850 _public_6247850

PROC_DECLARE(0x6247840, internal_6247840, public_6247840);
/* CHUNK of public_620bc30 */
extern "C" NAKED register_t __cdecl internal_6247840()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x10]
        jmp public_6208610
        public_6247848 : nop
        lea ecx, ss:[ebp-0x1C]
        jmp public_620b6f0
        public_6247850 : nop
        mov eax, offset public_625064c
        jmp public_6246126
        UNREACHABLE_TRAP(0x6247840)
        ASM_EXPORT_ENTRY_FIRST(0x6247848, public_6247848)
        ASM_EXPORT_ENTRY_LAST(0x6247850, public_6247850)
    }
}

#undef public_6247848
#undef public_6247850

#pragma init_seg(compiler)
extern "C" void const* const public_6247848 = __AsmFindLabelExport(&internal_6247840, 0x6247848);
extern "C" void const* const public_6247850 = __AsmFindLabelExport(&internal_6247840, 0x6247850);
