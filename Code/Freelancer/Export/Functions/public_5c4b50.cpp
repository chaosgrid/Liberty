#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5987a0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c4b58 _public_5c4b58

PROC_DECLARE(0x5c4b50, internal_5c4b50, public_5c4b50);
/* CHUNK of public_598490 */
extern "C" NAKED register_t __cdecl internal_5c4b50()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x14]
        jmp public_5987a0
        public_5c4b58 : nop
        mov eax, offset public_5fe868
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c4b50)
        ASM_EXPORT_ENTRY_SINGLE(0x5c4b58, public_5c4b58)
    }
}

#undef public_5c4b58

#pragma init_seg(compiler)
extern "C" void const* const public_5c4b58 = __AsmFindLabelExport(&internal_5c4b50, 0x5c4b58);
