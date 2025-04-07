#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62084b0);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_624a928 _public_624a928

PROC_DECLARE(0x624a920, internal_624a920, public_624a920);
/* CHUNK of public_6243770 */
extern "C" NAKED register_t __cdecl internal_624a920()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp+8]
        jmp public_62084b0
        public_624a928 : nop
        mov eax, offset public_62539bc
        jmp public_6246126
        UNREACHABLE_TRAP(0x624a920)
        ASM_EXPORT_ENTRY_SINGLE(0x624a928, public_624a928)
    }
}

#undef public_624a928

#pragma init_seg(compiler)
extern "C" void const* const public_624a928 = __AsmFindLabelExport(&internal_624a920, 0x624a928);
