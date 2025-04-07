#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4a2d30);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bc048 _public_5bc048

PROC_DECLARE(0x5bc040, internal_5bc040, public_5bc040);
/* CHUNK of public_477bf0 */
extern "C" NAKED register_t __cdecl internal_5bc040()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x18]
        jmp public_4a2d30
        public_5bc048 : nop
        mov eax, offset public_5f6468
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bc040)
        ASM_EXPORT_ENTRY_SINGLE(0x5bc048, public_5bc048)
    }
}

#undef public_5bc048

#pragma init_seg(compiler)
extern "C" void const* const public_5bc048 = __AsmFindLabelExport(&internal_5bc040, 0x5bc048);
