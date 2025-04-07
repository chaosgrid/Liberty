#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_622d2c0);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_6249568 _public_6249568

PROC_DECLARE(0x6249560, internal_6249560, public_6249560);
/* CHUNK of public_622d3d0 */
extern "C" NAKED register_t __cdecl internal_6249560()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp+8]
        jmp public_622d2c0
        public_6249568 : nop
        mov eax, offset public_6252508
        jmp public_6246126
        UNREACHABLE_TRAP(0x6249560)
        ASM_EXPORT_ENTRY_SINGLE(0x6249568, public_6249568)
    }
}

#undef public_6249568

#pragma init_seg(compiler)
extern "C" void const* const public_6249568 = __AsmFindLabelExport(&internal_6249560, 0x6249568);
