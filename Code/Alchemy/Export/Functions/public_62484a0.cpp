#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6217c00);
CLANG_FORWARD_PROC_SYMBOL(public_6217c10);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_62484a8 _public_62484a8
#define public_62484b0 _public_62484b0

PROC_DECLARE(0x62484a0, internal_62484a0, public_62484a0);
/* CHUNK of public_6218780 */
extern "C" NAKED register_t __cdecl internal_62484a0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x10]
        jmp public_6217c10
        public_62484a8 : nop
        lea ecx, ss:[ebp-0x1C]
        jmp public_6217c00
        public_62484b0 : nop
        mov eax, offset public_6251374
        jmp public_6246126
        UNREACHABLE_TRAP(0x62484a0)
        ASM_EXPORT_ENTRY_FIRST(0x62484a8, public_62484a8)
        ASM_EXPORT_ENTRY_LAST(0x62484b0, public_62484b0)
    }
}

#undef public_62484a8
#undef public_62484b0

#pragma init_seg(compiler)
extern "C" void const* const public_62484a8 = __AsmFindLabelExport(&internal_62484a0, 0x62484a8);
extern "C" void const* const public_62484b0 = __AsmFindLabelExport(&internal_62484a0, 0x62484b0);
