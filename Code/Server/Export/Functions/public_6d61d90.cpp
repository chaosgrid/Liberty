#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d16b10);
CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d61d9b _public_6d61d9b

PROC_DECLARE(0x6d61d90, internal_6d61d90, public_6d61d90);
/* CHUNK of public_6d16b70 */
extern "C" NAKED register_t __cdecl internal_6d61d90()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 4
        jmp public_6d16b10
        public_6d61d9b : nop
        mov eax, offset public_6d72ab4
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d61d90)
        ASM_EXPORT_ENTRY_SINGLE(0x6d61d9b, public_6d61d9b)
    }
}

#undef public_6d61d9b

#pragma init_seg(compiler)
extern "C" void const* const public_6d61d9b = __AsmFindLabelExport(&internal_6d61d90, 0x6d61d9b);
