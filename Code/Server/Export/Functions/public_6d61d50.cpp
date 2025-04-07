#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d165e0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d61d5b _public_6d61d5b

PROC_DECLARE(0x6d61d50, internal_6d61d50, public_6d61d50);
/* CHUNK of public_6d16640 */
extern "C" NAKED register_t __cdecl internal_6d61d50()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 4
        jmp public_6d165e0
        public_6d61d5b : nop
        mov eax, offset public_6d72a6c
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d61d50)
        ASM_EXPORT_ENTRY_SINGLE(0x6d61d5b, public_6d61d5b)
    }
}

#undef public_6d61d5b

#pragma init_seg(compiler)
extern "C" void const* const public_6d61d5b = __AsmFindLabelExport(&internal_6d61d50, 0x6d61d5b);
