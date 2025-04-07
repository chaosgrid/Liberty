#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fafb0b _public_6fafb0b

PROC_DECLARE(0x6fafb00, internal_6fafb00, public_6fafb00);
/* CHUNK of public_6f61cb0 */
extern "C" NAKED register_t __cdecl internal_6fafb00()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0xCCC]
        jmp public_6eec8d0
        public_6fafb0b : nop
        mov eax, offset public_6fc4b4c
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fafb00)
        ASM_EXPORT_ENTRY_SINGLE(0x6fafb0b, public_6fafb0b)
    }
}

#undef public_6fafb0b

#pragma init_seg(compiler)
extern "C" void const* const public_6fafb0b = __AsmFindLabelExport(&internal_6fafb00, 0x6fafb0b);
