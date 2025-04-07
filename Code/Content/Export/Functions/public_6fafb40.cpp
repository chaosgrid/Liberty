#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fafb4b _public_6fafb4b

PROC_DECLARE(0x6fafb40, internal_6fafb40, public_6fafb40);
/* CHUNK of public_6f63a80 */
extern "C" NAKED register_t __cdecl internal_6fafb40()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x4C
        jmp public_6eec8d0
        public_6fafb4b : nop
        mov eax, offset public_6fc4bdc
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fafb40)
        ASM_EXPORT_ENTRY_SINGLE(0x6fafb4b, public_6fafb4b)
    }
}

#undef public_6fafb4b

#pragma init_seg(compiler)
extern "C" void const* const public_6fafb4b = __AsmFindLabelExport(&internal_6fafb40, 0x6fafb4b);
