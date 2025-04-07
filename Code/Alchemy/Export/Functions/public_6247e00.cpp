#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6211030);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_6247e08 _public_6247e08

PROC_DECLARE(0x6247e00, internal_6247e00, public_6247e00);
/* CHUNK of public_6211160 */
extern "C" NAKED register_t __cdecl internal_6247e00()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp+8]
        jmp public_6211030
        public_6247e08 : nop
        mov eax, offset public_6250c48
        jmp public_6246126
        UNREACHABLE_TRAP(0x6247e00)
        ASM_EXPORT_ENTRY_SINGLE(0x6247e08, public_6247e08)
    }
}

#undef public_6247e08

#pragma init_seg(compiler)
extern "C" void const* const public_6247e08 = __AsmFindLabelExport(&internal_6247e00, 0x6247e08);
