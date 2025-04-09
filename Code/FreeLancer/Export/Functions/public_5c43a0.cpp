#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4de730);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c43a8 _public_5c43a8

PROC_DECLARE(0x5c43a0, internal_5c43a0, public_5c43a0);
/* CHUNK of public_585f20 */
extern "C" NAKED register_t __cdecl internal_5c43a0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x1C]
        jmp public_4de730
        public_5c43a8 : nop
        mov eax, offset public_5fdfb0
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c43a0)
        ASM_EXPORT_ENTRY_SINGLE(0x5c43a8, public_5c43a8)
    }
}

#undef public_5c43a8

#pragma init_seg(compiler)
extern "C" void const* const public_5c43a8 = __AsmFindLabelExport(&internal_5c43a0, 0x5c43a8);
