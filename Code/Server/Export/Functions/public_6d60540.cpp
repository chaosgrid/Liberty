#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce83e0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d60548 _public_6d60548

PROC_DECLARE(0x6d60540, internal_6d60540, public_6d60540);
/* CHUNK of public_6ce8080 */
extern "C" NAKED register_t __cdecl internal_6d60540()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x3C]
        jmp public_6ce83e0
        public_6d60548 : nop
        mov eax, offset public_6d70de4
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d60540)
        ASM_EXPORT_ENTRY_SINGLE(0x6d60548, public_6d60548)
    }
}

#undef public_6d60548

#pragma init_seg(compiler)
extern "C" void const* const public_6d60548 = __AsmFindLabelExport(&internal_6d60540, 0x6d60548);
