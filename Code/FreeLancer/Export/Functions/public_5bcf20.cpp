#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4de730);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bcf2b _public_5bcf2b

PROC_DECLARE(0x5bcf20, internal_5bcf20, public_5bcf20);
/* CHUNK of public_4afb80 */
extern "C" NAKED register_t __cdecl internal_5bcf20()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x9C]
        jmp public_4de730
        public_5bcf2b : nop
        mov eax, offset public_5f71b8
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bcf20)
        ASM_EXPORT_ENTRY_SINGLE(0x5bcf2b, public_5bcf2b)
    }
}

#undef public_5bcf2b

#pragma init_seg(compiler)
extern "C" void const* const public_5bcf2b = __AsmFindLabelExport(&internal_5bcf20, 0x5bcf2b);
