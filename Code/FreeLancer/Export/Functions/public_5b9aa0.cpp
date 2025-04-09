#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4486d0);
CLANG_FORWARD_PROC_SYMBOL(public_4a2d30);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5b9aa8 _public_5b9aa8
#define public_5b9ab0 _public_5b9ab0

PROC_DECLARE(0x5b9aa0, internal_5b9aa0, public_5b9aa0);
/* CHUNK of public_448a60 */
extern "C" NAKED register_t __cdecl internal_5b9aa0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x1C]
        jmp public_4486d0
        public_5b9aa8 : nop
        lea ecx, ss:[ebp-0x28]
        jmp public_4a2d30
        public_5b9ab0 : nop
        mov eax, offset public_5f3b4c
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5b9aa0)
        ASM_EXPORT_ENTRY_FIRST(0x5b9aa8, public_5b9aa8)
        ASM_EXPORT_ENTRY_LAST(0x5b9ab0, public_5b9ab0)
    }
}

#undef public_5b9aa8
#undef public_5b9ab0

#pragma init_seg(compiler)
extern "C" void const* const public_5b9aa8 = __AsmFindLabelExport(&internal_5b9aa0, 0x5b9aa8);
extern "C" void const* const public_5b9ab0 = __AsmFindLabelExport(&internal_5b9aa0, 0x5b9ab0);
