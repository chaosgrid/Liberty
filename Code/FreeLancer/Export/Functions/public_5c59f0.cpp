#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b3620);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c59f8 _public_5c59f8

PROC_DECLARE(0x5c59f0, internal_5c59f0, public_5c59f0);
/* CHUNK of public_5b4d30 */
extern "C" NAKED register_t __cdecl internal_5c59f0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x18]
        jmp public_5b3620
        public_5c59f8 : nop
        mov eax, offset public_5ffb30
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c59f0)
        ASM_EXPORT_ENTRY_SINGLE(0x5c59f8, public_5c59f8)
    }
}

#undef public_5c59f8

#pragma init_seg(compiler)
extern "C" void const* const public_5c59f8 = __AsmFindLabelExport(&internal_5c59f0, 0x5c59f8);
