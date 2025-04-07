#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fab04b _public_6fab04b

PROC_DECLARE(0x6fab040, internal_6fab040, public_6fab040);
/* CHUNK of public_6ecdea0 */
extern "C" NAKED register_t __cdecl internal_6fab040()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0xBC]
        jmp public_6eec8d0
        public_6fab04b : nop
        mov eax, offset public_6fbf53c
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fab040)
        ASM_EXPORT_ENTRY_SINGLE(0x6fab04b, public_6fab04b)
    }
}

#undef public_6fab04b

#pragma init_seg(compiler)
extern "C" void const* const public_6fab04b = __AsmFindLabelExport(&internal_6fab040, 0x6fab04b);
