#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_526a20);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c3d2b _public_5c3d2b

PROC_DECLARE(0x5c3d20, internal_5c3d20, public_5c3d20);
/* CHUNK of public_579e90 */
extern "C" NAKED register_t __cdecl internal_5c3d20()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0xE8]
        jmp public_526a20
        public_5c3d2b : nop
        mov eax, offset public_5fd9cc
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c3d20)
        ASM_EXPORT_ENTRY_SINGLE(0x5c3d2b, public_5c3d2b)
    }
}

#undef public_5c3d2b

#pragma init_seg(compiler)
extern "C" void const* const public_5c3d2b = __AsmFindLabelExport(&internal_5c3d20, 0x5c3d2b);
