#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6203bc0);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_6247208 _public_6247208

PROC_DECLARE(0x6247200, internal_6247200, public_6247200);
/* CHUNK of public_6203c20 */
extern "C" NAKED register_t __cdecl internal_6247200()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp+0x18]
        jmp public_6203bc0
        public_6247208 : nop
        mov eax, offset public_624ffa0
        jmp public_6246126
        UNREACHABLE_TRAP(0x6247200)
        ASM_EXPORT_ENTRY_SINGLE(0x6247208, public_6247208)
    }
}

#undef public_6247208

#pragma init_seg(compiler)
extern "C" void const* const public_6247208 = __AsmFindLabelExport(&internal_6247200, 0x6247208);
