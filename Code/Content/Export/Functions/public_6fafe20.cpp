#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fafe28 _public_6fafe28

PROC_DECLARE(0x6fafe20, internal_6fafe20, public_6fafe20);
/* CHUNK of public_6f6dd80 */
extern "C" NAKED register_t __cdecl internal_6fafe20()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x44]
        jmp public_6eec8d0
        public_6fafe28 : nop
        mov eax, offset public_6fc4fa4
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fafe20)
        ASM_EXPORT_ENTRY_SINGLE(0x6fafe28, public_6fafe28)
    }
}

#undef public_6fafe28

#pragma init_seg(compiler)
extern "C" void const* const public_6fafe28 = __AsmFindLabelExport(&internal_6fafe20, 0x6fafe28);
