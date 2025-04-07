#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d0b7e0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d606f8 _public_6d606f8

PROC_DECLARE(0x6d606f0, internal_6d606f0, public_6d606f0);
/* CHUNK of public_6cee1f0 */
extern "C" NAKED register_t __cdecl internal_6d606f0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x64]
        jmp public_6d0b7e0
        public_6d606f8 : nop
        mov eax, offset public_6d70fe0
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d606f0)
        ASM_EXPORT_ENTRY_SINGLE(0x6d606f8, public_6d606f8)
    }
}

#undef public_6d606f8

#pragma init_seg(compiler)
extern "C" void const* const public_6d606f8 = __AsmFindLabelExport(&internal_6d606f0, 0x6d606f8);
