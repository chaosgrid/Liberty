#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_444e20);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c457b _public_5c457b

PROC_DECLARE(0x5c4570, internal_5c4570, public_5c4570);
/* CHUNK of public_58a5f0 */
extern "C" NAKED register_t __cdecl internal_5c4570()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x2020]
        jmp public_444e20
        public_5c457b : nop
        mov eax, offset public_5fe1ec
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c4570)
        ASM_EXPORT_ENTRY_SINGLE(0x5c457b, public_5c457b)
    }
}

#undef public_5c457b

#pragma init_seg(compiler)
extern "C" void const* const public_5c457b = __AsmFindLabelExport(&internal_5c4570, 0x5c457b);
