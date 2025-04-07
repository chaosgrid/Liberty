#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d0b7e0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d606d8 _public_6d606d8

PROC_DECLARE(0x6d606d0, internal_6d606d0, public_6d606d0);
/* CHUNK of public_6cee040 */
extern "C" NAKED register_t __cdecl internal_6d606d0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x70]
        jmp public_6d0b7e0
        public_6d606d8 : nop
        mov eax, offset public_6d70fbc
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d606d0)
        ASM_EXPORT_ENTRY_SINGLE(0x6d606d8, public_6d606d8)
    }
}

#undef public_6d606d8

#pragma init_seg(compiler)
extern "C" void const* const public_6d606d8 = __AsmFindLabelExport(&internal_6d606d0, 0x6d606d8);
