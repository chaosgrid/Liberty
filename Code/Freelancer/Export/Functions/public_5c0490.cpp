#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_52d3f0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c0498 _public_5c0498

PROC_DECLARE(0x5c0490, internal_5c0490, public_5c0490);
/* CHUNK of public_52d280 */
extern "C" NAKED register_t __cdecl internal_5c0490()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x2C]
        jmp public_52d3f0
        public_5c0498 : nop
        mov eax, offset public_5fa534
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c0490)
        ASM_EXPORT_ENTRY_SINGLE(0x5c0498, public_5c0498)
    }
}

#undef public_5c0498

#pragma init_seg(compiler)
extern "C" void const* const public_5c0498 = __AsmFindLabelExport(&internal_5c0490, 0x5c0498);
