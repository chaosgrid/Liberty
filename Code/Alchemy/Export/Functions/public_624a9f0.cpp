#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620d670);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_624a9f8 _public_624a9f8

PROC_DECLARE(0x624a9f0, internal_624a9f0, public_624a9f0);
/* CHUNK of public_62443b0 */
extern "C" NAKED register_t __cdecl internal_624a9f0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp+8]
        jmp public_620d670
        public_624a9f8 : nop
        mov eax, offset public_6253a8c
        jmp public_6246126
        UNREACHABLE_TRAP(0x624a9f0)
        ASM_EXPORT_ENTRY_SINGLE(0x624a9f8, public_624a9f8)
    }
}

#undef public_624a9f8

#pragma init_seg(compiler)
extern "C" void const* const public_624a9f8 = __AsmFindLabelExport(&internal_624a9f0, 0x624a9f8);
