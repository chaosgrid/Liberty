#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed61d0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fab2ab _public_6fab2ab

PROC_DECLARE(0x6fab2a0, internal_6fab2a0, public_6fab2a0);
/* CHUNK of public_6ed7dc0 */
extern "C" NAKED register_t __cdecl internal_6fab2a0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x274]
        jmp public_6ed61d0
        public_6fab2ab : nop
        mov eax, offset public_6fbf830
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fab2a0)
        ASM_EXPORT_ENTRY_SINGLE(0x6fab2ab, public_6fab2ab)
    }
}

#undef public_6fab2ab

#pragma init_seg(compiler)
extern "C" void const* const public_6fab2ab = __AsmFindLabelExport(&internal_6fab2a0, 0x6fab2ab);
