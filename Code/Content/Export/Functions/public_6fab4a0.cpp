#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed61d0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fab4ab _public_6fab4ab

PROC_DECLARE(0x6fab4a0, internal_6fab4a0, public_6fab4a0);
/* CHUNK of public_6ed8ac0 */
extern "C" NAKED register_t __cdecl internal_6fab4a0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x120]
        jmp public_6ed61d0
        public_6fab4ab : nop
        mov eax, offset public_6fc0058
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fab4a0)
        ASM_EXPORT_ENTRY_SINGLE(0x6fab4ab, public_6fab4ab)
    }
}

#undef public_6fab4ab

#pragma init_seg(compiler)
extern "C" void const* const public_6fab4ab = __AsmFindLabelExport(&internal_6fab4a0, 0x6fab4ab);
