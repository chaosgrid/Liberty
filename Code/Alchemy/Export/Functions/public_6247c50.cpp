#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6210850);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_6247c5b _public_6247c5b
#define public_6247c66 _public_6247c66

PROC_DECLARE(0x6247c50, internal_6247c50, public_6247c50);
/* CHUNK of public_620fcb0 */
extern "C" NAKED register_t __cdecl internal_6247c50()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0xE4]
        jmp public_6210850
        public_6247c5b : nop
        lea ecx, ss:[ebp-0xC0]
        jmp public_6210850
        public_6247c66 : nop
        mov eax, offset public_6250a7c
        jmp public_6246126
        UNREACHABLE_TRAP(0x6247c50)
        ASM_EXPORT_ENTRY_FIRST(0x6247c5b, public_6247c5b)
        ASM_EXPORT_ENTRY_LAST(0x6247c66, public_6247c66)
    }
}

#undef public_6247c5b
#undef public_6247c66

#pragma init_seg(compiler)
extern "C" void const* const public_6247c5b = __AsmFindLabelExport(&internal_6247c50, 0x6247c5b);
extern "C" void const* const public_6247c66 = __AsmFindLabelExport(&internal_6247c50, 0x6247c66);
