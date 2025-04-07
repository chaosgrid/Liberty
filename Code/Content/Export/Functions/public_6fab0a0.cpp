#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f15350);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fab0ab _public_6fab0ab

PROC_DECLARE(0x6fab0a0, internal_6fab0a0, public_6fab0a0);
/* CHUNK of public_6ed0030 */
extern "C" NAKED register_t __cdecl internal_6fab0a0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 8
        jmp public_6f15350
        public_6fab0ab : nop
        mov eax, offset public_6fbf5cc
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fab0a0)
        ASM_EXPORT_ENTRY_SINGLE(0x6fab0ab, public_6fab0ab)
    }
}

#undef public_6fab0ab

#pragma init_seg(compiler)
extern "C" void const* const public_6fab0ab = __AsmFindLabelExport(&internal_6fab0a0, 0x6fab0ab);
