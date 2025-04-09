#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4de730);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bcea8 _public_5bcea8

PROC_DECLARE(0x5bcea0, internal_5bcea0, public_5bcea0);
/* CHUNK of public_4ae260 */
extern "C" NAKED register_t __cdecl internal_5bcea0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x2C]
        jmp public_4de730
        public_5bcea8 : nop
        mov eax, offset public_5f7134
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bcea0)
        ASM_EXPORT_ENTRY_SINGLE(0x5bcea8, public_5bcea8)
    }
}

#undef public_5bcea8

#pragma init_seg(compiler)
extern "C" void const* const public_5bcea8 = __AsmFindLabelExport(&internal_5bcea0, 0x5bcea8);
