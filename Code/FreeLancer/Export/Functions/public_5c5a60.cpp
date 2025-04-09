#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5687e0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c5a6b _public_5c5a6b

PROC_DECLARE(0x5c5a60, internal_5c5a60, public_5c5a60);
/* CHUNK of public_5b67e0 */
extern "C" NAKED register_t __cdecl internal_5c5a60()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x2894]
        jmp public_5687e0
        public_5c5a6b : nop
        mov eax, offset public_5ffb98
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c5a60)
        ASM_EXPORT_ENTRY_SINGLE(0x5c5a6b, public_5c5a6b)
    }
}

#undef public_5c5a6b

#pragma init_seg(compiler)
extern "C" void const* const public_5c5a6b = __AsmFindLabelExport(&internal_5c5a60, 0x5c5a6b);
