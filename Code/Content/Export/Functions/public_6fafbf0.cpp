#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fafbf8 _public_6fafbf8

PROC_DECLARE(0x6fafbf0, internal_6fafbf0, public_6fafbf0);
/* CHUNK of public_6f65900 */
extern "C" NAKED register_t __cdecl internal_6fafbf0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x50]
        jmp public_6eec8d0
        public_6fafbf8 : nop
        mov eax, offset public_6fc4ca4
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fafbf0)
        ASM_EXPORT_ENTRY_SINGLE(0x6fafbf8, public_6fafbf8)
    }
}

#undef public_6fafbf8

#pragma init_seg(compiler)
extern "C" void const* const public_6fafbf8 = __AsmFindLabelExport(&internal_6fafbf0, 0x6fafbf8);
