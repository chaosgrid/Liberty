#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6208a20);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_6247468 _public_6247468

PROC_DECLARE(0x6247460, internal_6247460, public_6247460);
/* CHUNK of public_6206850 */
extern "C" NAKED register_t __cdecl internal_6247460()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x78]
        jmp public_6208a20
        public_6247468 : nop
        mov eax, offset public_62501f0
        jmp public_6246126
        UNREACHABLE_TRAP(0x6247460)
        ASM_EXPORT_ENTRY_SINGLE(0x6247468, public_6247468)
    }
}

#undef public_6247468

#pragma init_seg(compiler)
extern "C" void const* const public_6247468 = __AsmFindLabelExport(&internal_6247460, 0x6247468);
