#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d09ba0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d6099b _public_6d6099b

PROC_DECLARE(0x6d60990, internal_6d60990, public_6d60990);
/* CHUNK of public_6cf3ce0 */
extern "C" NAKED register_t __cdecl internal_6d60990()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0xC
        jmp public_6d09ba0
        public_6d6099b : nop
        mov eax, offset public_6d712e8
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d60990)
        ASM_EXPORT_ENTRY_SINGLE(0x6d6099b, public_6d6099b)
    }
}

#undef public_6d6099b

#pragma init_seg(compiler)
extern "C" void const* const public_6d6099b = __AsmFindLabelExport(&internal_6d60990, 0x6d6099b);
