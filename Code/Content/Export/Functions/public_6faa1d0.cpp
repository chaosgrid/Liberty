#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea7c30);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6faa1d8 _public_6faa1d8

PROC_DECLARE(0x6faa1d0, internal_6faa1d0, public_6faa1d0);
/* CHUNK of public_6eb4a00 */
extern "C" NAKED register_t __cdecl internal_6faa1d0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x14]
        jmp public_6ea7c30
        public_6faa1d8 : nop
        mov eax, offset public_6fbe590
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6faa1d0)
        ASM_EXPORT_ENTRY_SINGLE(0x6faa1d8, public_6faa1d8)
    }
}

#undef public_6faa1d8

#pragma init_seg(compiler)
extern "C" void const* const public_6faa1d8 = __AsmFindLabelExport(&internal_6faa1d0, 0x6faa1d8);
