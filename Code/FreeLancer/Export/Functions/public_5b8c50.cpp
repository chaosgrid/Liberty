#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_526a20);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5b8c58 _public_5b8c58

PROC_DECLARE(0x5b8c50, internal_5b8c50, public_5b8c50);
/* CHUNK of public_429730 */
extern "C" NAKED register_t __cdecl internal_5b8c50()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x14]
        jmp public_526a20
        public_5b8c58 : nop
        mov eax, offset public_5f2b0c
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5b8c50)
        ASM_EXPORT_ENTRY_SINGLE(0x5b8c58, public_5b8c58)
    }
}

#undef public_5b8c58

#pragma init_seg(compiler)
extern "C" void const* const public_5b8c58 = __AsmFindLabelExport(&internal_5b8c50, 0x5b8c58);
