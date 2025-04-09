#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_405840);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c503b _public_5c503b

PROC_DECLARE(0x5c5030, internal_5c5030, public_5c5030);
/* CHUNK of public_5a2ee0 */
extern "C" NAKED register_t __cdecl internal_5c5030()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x88]
        jmp public_405840
        public_5c503b : nop
        mov eax, offset public_5fee1c
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c5030)
        ASM_EXPORT_ENTRY_SINGLE(0x5c503b, public_5c503b)
    }
}

#undef public_5c503b

#pragma init_seg(compiler)
extern "C" void const* const public_5c503b = __AsmFindLabelExport(&internal_5c5030, 0x5c503b);
