#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_555700);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c1498 _public_5c1498

PROC_DECLARE(0x5c1490, internal_5c1490, public_5c1490);
/* CHUNK of public_554ab0 */
extern "C" NAKED register_t __cdecl internal_5c1490()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x20]
        jmp public_555700
        public_5c1498 : nop
        mov eax, offset public_5fb7ec
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c1490)
        ASM_EXPORT_ENTRY_SINGLE(0x5c1498, public_5c1498)
    }
}

#undef public_5c1498

#pragma init_seg(compiler)
extern "C" void const* const public_5c1498 = __AsmFindLabelExport(&internal_5c1490, 0x5c1498);
