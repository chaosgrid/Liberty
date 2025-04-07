#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed61d0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fab38b _public_6fab38b

PROC_DECLARE(0x6fab380, internal_6fab380, public_6fab380);
/* CHUNK of public_6ed8810 */
extern "C" NAKED register_t __cdecl internal_6fab380()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x1A8]
        jmp public_6ed61d0
        public_6fab38b : nop
        mov eax, offset public_6fbfd9c
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fab380)
        ASM_EXPORT_ENTRY_SINGLE(0x6fab38b, public_6fab38b)
    }
}

#undef public_6fab38b

#pragma init_seg(compiler)
extern "C" void const* const public_6fab38b = __AsmFindLabelExport(&internal_6fab380, 0x6fab38b);
