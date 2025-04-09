#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_526a20);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5b8b5b _public_5b8b5b

PROC_DECLARE(0x5b8b50, internal_5b8b50, public_5b8b50);
/* CHUNK of public_425170 */
extern "C" NAKED register_t __cdecl internal_5b8b50()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x298]
        jmp public_526a20
        public_5b8b5b : nop
        mov eax, offset public_5f2a08
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5b8b50)
        ASM_EXPORT_ENTRY_SINGLE(0x5b8b5b, public_5b8b5b)
    }
}

#undef public_5b8b5b

#pragma init_seg(compiler)
extern "C" void const* const public_5b8b5b = __AsmFindLabelExport(&internal_5b8b50, 0x5b8b5b);
