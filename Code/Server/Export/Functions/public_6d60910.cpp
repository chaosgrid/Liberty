#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d0b7e0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d6091b _public_6d6091b

PROC_DECLARE(0x6d60910, internal_6d60910, public_6d60910);
/* CHUNK of public_6cf2c10 */
extern "C" NAKED register_t __cdecl internal_6d60910()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0xEC]
        jmp public_6d0b7e0
        public_6d6091b : nop
        mov eax, offset public_6d71274
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d60910)
        ASM_EXPORT_ENTRY_SINGLE(0x6d6091b, public_6d6091b)
    }
}

#undef public_6d6091b

#pragma init_seg(compiler)
extern "C" void const* const public_6d6091b = __AsmFindLabelExport(&internal_6d60910, 0x6d6091b);
