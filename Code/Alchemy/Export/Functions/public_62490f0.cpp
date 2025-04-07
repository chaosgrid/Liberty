#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62084b0);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_62490f8 _public_62490f8

PROC_DECLARE(0x62490f0, internal_62490f0, public_62490f0);
/* CHUNK of public_62280a0 */
extern "C" NAKED register_t __cdecl internal_62490f0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp+8]
        jmp public_62084b0
        public_62490f8 : nop
        mov eax, offset public_6252084
        jmp public_6246126
        UNREACHABLE_TRAP(0x62490f0)
        ASM_EXPORT_ENTRY_SINGLE(0x62490f8, public_62490f8)
    }
}

#undef public_62490f8

#pragma init_seg(compiler)
extern "C" void const* const public_62490f8 = __AsmFindLabelExport(&internal_62490f0, 0x62490f8);
