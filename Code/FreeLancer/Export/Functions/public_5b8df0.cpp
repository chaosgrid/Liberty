#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_401e90);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5b8dfb _public_5b8dfb

PROC_DECLARE(0x5b8df0, internal_5b8df0, public_5b8df0);
/* CHUNK of public_42ed30 */
extern "C" NAKED register_t __cdecl internal_5b8df0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x110]
        jmp public_401e90
        public_5b8dfb : nop
        mov eax, offset public_5f2cd8
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5b8df0)
        ASM_EXPORT_ENTRY_SINGLE(0x5b8dfb, public_5b8dfb)
    }
}

#undef public_5b8dfb

#pragma init_seg(compiler)
extern "C" void const* const public_5b8dfb = __AsmFindLabelExport(&internal_5b8df0, 0x5b8dfb);
