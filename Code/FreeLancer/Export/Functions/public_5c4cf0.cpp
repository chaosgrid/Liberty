#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4ca610);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c4cfb _public_5c4cfb

PROC_DECLARE(0x5c4cf0, internal_5c4cf0, public_5c4cf0);
/* CHUNK of public_59b220 */
extern "C" NAKED register_t __cdecl internal_5c4cf0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x710]
        jmp public_4ca610
        public_5c4cfb : nop
        mov eax, offset public_5fea00
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c4cf0)
        ASM_EXPORT_ENTRY_SINGLE(0x5c4cfb, public_5c4cfb)
    }
}

#undef public_5c4cfb

#pragma init_seg(compiler)
extern "C" void const* const public_5c4cfb = __AsmFindLabelExport(&internal_5c4cf0, 0x5c4cfb);
