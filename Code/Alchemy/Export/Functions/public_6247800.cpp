#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620b6f0);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_6247808 _public_6247808
#define public_6247810 _public_6247810

PROC_DECLARE(0x6247800, internal_6247800, public_6247800);
/* CHUNK of public_620b7d0 */
extern "C" NAKED register_t __cdecl internal_6247800()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp+8]
        jmp public_620b6f0
        public_6247808 : nop
        lea ecx, ss:[ebp-0x10]
        jmp public_620b6f0
        public_6247810 : nop
        mov eax, offset public_62505fc
        jmp public_6246126
        UNREACHABLE_TRAP(0x6247800)
        ASM_EXPORT_ENTRY_FIRST(0x6247808, public_6247808)
        ASM_EXPORT_ENTRY_LAST(0x6247810, public_6247810)
    }
}

#undef public_6247808
#undef public_6247810

#pragma init_seg(compiler)
extern "C" void const* const public_6247808 = __AsmFindLabelExport(&internal_6247800, 0x6247808);
extern "C" void const* const public_6247810 = __AsmFindLabelExport(&internal_6247800, 0x6247810);
