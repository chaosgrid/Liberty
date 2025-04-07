#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d0b7e0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d605fb _public_6d605fb

PROC_DECLARE(0x6d605f0, internal_6d605f0, public_6d605f0);
/* CHUNK of public_6ce9f70 */
extern "C" NAKED register_t __cdecl internal_6d605f0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0xDC]
        jmp public_6d0b7e0
        public_6d605fb : nop
        mov eax, offset public_6d70e9c
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d605f0)
        ASM_EXPORT_ENTRY_SINGLE(0x6d605fb, public_6d605fb)
    }
}

#undef public_6d605fb

#pragma init_seg(compiler)
extern "C" void const* const public_6d605fb = __AsmFindLabelExport(&internal_6d605f0, 0x6d605fb);
