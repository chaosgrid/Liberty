#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d16180);
CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d61d1b _public_6d61d1b

PROC_DECLARE(0x6d61d10, internal_6d61d10, public_6d61d10);
/* CHUNK of public_6d161e0 */
extern "C" NAKED register_t __cdecl internal_6d61d10()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 4
        jmp public_6d16180
        public_6d61d1b : nop
        mov eax, offset public_6d72a24
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d61d10)
        ASM_EXPORT_ENTRY_SINGLE(0x6d61d1b, public_6d61d1b)
    }
}

#undef public_6d61d1b

#pragma init_seg(compiler)
extern "C" void const* const public_6d61d1b = __AsmFindLabelExport(&internal_6d61d10, 0x6d61d1b);
