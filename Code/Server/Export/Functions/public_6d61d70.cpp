#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d168e0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d61d7b _public_6d61d7b

PROC_DECLARE(0x6d61d70, internal_6d61d70, public_6d61d70);
/* CHUNK of public_6d16940 */
extern "C" NAKED register_t __cdecl internal_6d61d70()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 4
        jmp public_6d168e0
        public_6d61d7b : nop
        mov eax, offset public_6d72a90
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d61d70)
        ASM_EXPORT_ENTRY_SINGLE(0x6d61d7b, public_6d61d7b)
    }
}

#undef public_6d61d7b

#pragma init_seg(compiler)
extern "C" void const* const public_6d61d7b = __AsmFindLabelExport(&internal_6d61d70, 0x6d61d7b);
