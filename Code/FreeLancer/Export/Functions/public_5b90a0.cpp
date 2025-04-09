#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42cfd0);
CLANG_FORWARD_PROC_SYMBOL(public_526a20);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5b90a8 _public_5b90a8
#define public_5b90b0 _public_5b90b0

PROC_DECLARE(0x5b90a0, internal_5b90a0, public_5b90a0);
/* CHUNK of public_434310 */
extern "C" NAKED register_t __cdecl internal_5b90a0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp+0x18]
        jmp public_526a20
        public_5b90a8 : nop
        lea ecx, ss:[ebp-0x50]
        jmp public_42cfd0
        public_5b90b0 : nop
        mov eax, offset public_5f2fb8
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5b90a0)
        ASM_EXPORT_ENTRY_FIRST(0x5b90a8, public_5b90a8)
        ASM_EXPORT_ENTRY_LAST(0x5b90b0, public_5b90b0)
    }
}

#undef public_5b90a8
#undef public_5b90b0

#pragma init_seg(compiler)
extern "C" void const* const public_5b90a8 = __AsmFindLabelExport(&internal_5b90a0, 0x5b90a8);
extern "C" void const* const public_5b90b0 = __AsmFindLabelExport(&internal_5b90a0, 0x5b90b0);
