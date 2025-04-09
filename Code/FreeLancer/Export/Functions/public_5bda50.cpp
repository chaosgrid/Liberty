#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_444e20);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bda5b _public_5bda5b

PROC_DECLARE(0x5bda50, internal_5bda50, public_5bda50);
/* CHUNK of public_4cb250 */
extern "C" NAKED register_t __cdecl internal_5bda50()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x278]
        jmp public_444e20
        public_5bda5b : nop
        mov eax, offset public_5f7ef4
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bda50)
        ASM_EXPORT_ENTRY_SINGLE(0x5bda5b, public_5bda5b)
    }
}

#undef public_5bda5b

#pragma init_seg(compiler)
extern "C" void const* const public_5bda5b = __AsmFindLabelExport(&internal_5bda50, 0x5bda5b);
