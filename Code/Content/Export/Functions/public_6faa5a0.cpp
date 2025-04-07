#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ebf720);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6faa5a8 _public_6faa5a8

PROC_DECLARE(0x6faa5a0, internal_6faa5a0, public_6faa5a0);
/* CHUNK of public_6eb9dc0 */
extern "C" NAKED register_t __cdecl internal_6faa5a0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x20]
        jmp public_6ebf720
        public_6faa5a8 : nop
        mov eax, offset public_6fbe9b0
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6faa5a0)
        ASM_EXPORT_ENTRY_SINGLE(0x6faa5a8, public_6faa5a8)
    }
}

#undef public_6faa5a8

#pragma init_seg(compiler)
extern "C" void const* const public_6faa5a8 = __AsmFindLabelExport(&internal_6faa5a0, 0x6faa5a8);
