#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4de730);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bc028 _public_5bc028

PROC_DECLARE(0x5bc020, internal_5bc020, public_5bc020);
/* CHUNK of public_47d2f0 */
extern "C" NAKED register_t __cdecl internal_5bc020()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x1C]
        jmp public_4de730
        public_5bc028 : nop
        mov eax, offset public_5f6444
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bc020)
        ASM_EXPORT_ENTRY_SINGLE(0x5bc028, public_5bc028)
    }
}

#undef public_5bc028

#pragma init_seg(compiler)
extern "C" void const* const public_5bc028 = __AsmFindLabelExport(&internal_5bc020, 0x5bc028);
