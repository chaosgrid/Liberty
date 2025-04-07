#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6209f60);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_624abb8 _public_624abb8

PROC_DECLARE(0x624abb0, internal_624abb0, public_624abb0);
/* CHUNK of public_6245bf0 */
extern "C" NAKED register_t __cdecl internal_624abb0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x58]
        jmp public_6209f60
        public_624abb8 : nop
        mov eax, offset public_6253c44
        jmp public_6246126
        UNREACHABLE_TRAP(0x624abb0)
        ASM_EXPORT_ENTRY_SINGLE(0x624abb8, public_624abb8)
    }
}

#undef public_624abb8

#pragma init_seg(compiler)
extern "C" void const* const public_624abb8 = __AsmFindLabelExport(&internal_624abb0, 0x624abb8);
