#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4de730);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bcf0b _public_5bcf0b

PROC_DECLARE(0x5bcf00, internal_5bcf00, public_5bcf00);
/* CHUNK of public_4af900 */
extern "C" NAKED register_t __cdecl internal_5bcf00()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x29C]
        jmp public_4de730
        public_5bcf0b : nop
        mov eax, offset public_5f7194
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bcf00)
        ASM_EXPORT_ENTRY_SINGLE(0x5bcf0b, public_5bcf0b)
    }
}

#undef public_5bcf0b

#pragma init_seg(compiler)
extern "C" void const* const public_5bcf0b = __AsmFindLabelExport(&internal_5bcf00, 0x5bcf0b);
