#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d0e4e0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d616d8 _public_6d616d8

PROC_DECLARE(0x6d616d0, internal_6d616d0, public_6d616d0);
/* CHUNK of public_6d0e2e0 */
extern "C" NAKED register_t __cdecl internal_6d616d0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x2C]
        jmp public_6d0e4e0
        public_6d616d8 : nop
        mov eax, offset public_6d72334
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d616d0)
        ASM_EXPORT_ENTRY_SINGLE(0x6d616d8, public_6d616d8)
    }
}

#undef public_6d616d8

#pragma init_seg(compiler)
extern "C" void const* const public_6d616d8 = __AsmFindLabelExport(&internal_6d616d0, 0x6d616d8);
