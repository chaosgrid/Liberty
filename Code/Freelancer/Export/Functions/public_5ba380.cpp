#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_46e9c0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5ba388 _public_5ba388

PROC_DECLARE(0x5ba380, internal_5ba380, public_5ba380);
/* CHUNK of public_45e470 */
extern "C" NAKED register_t __cdecl internal_5ba380()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x48]
        jmp public_46e9c0
        public_5ba388 : nop
        mov eax, offset public_5f4778
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5ba380)
        ASM_EXPORT_ENTRY_SINGLE(0x5ba388, public_5ba388)
    }
}

#undef public_5ba388

#pragma init_seg(compiler)
extern "C" void const* const public_5ba388 = __AsmFindLabelExport(&internal_5ba380, 0x5ba388);
