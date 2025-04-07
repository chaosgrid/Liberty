#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d03ef0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d6107b _public_6d6107b

PROC_DECLARE(0x6d61070, internal_6d61070, public_6d61070);
/* CHUNK of public_6d03fc0 */
extern "C" NAKED register_t __cdecl internal_6d61070()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 4
        jmp public_6d03ef0
        public_6d6107b : nop
        mov eax, offset public_6d71be4
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d61070)
        ASM_EXPORT_ENTRY_SINGLE(0x6d6107b, public_6d6107b)
    }
}

#undef public_6d6107b

#pragma init_seg(compiler)
extern "C" void const* const public_6d6107b = __AsmFindLabelExport(&internal_6d61070, 0x6d6107b);
