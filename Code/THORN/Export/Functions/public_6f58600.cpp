#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f2d450);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e96);

#define public_6f5860b _public_6f5860b

PROC_DECLARE(0x6f58600, internal_6f58600, public_6f58600);
/* CHUNK of public_6f2a1e0 */
extern "C" NAKED register_t __cdecl internal_6f58600()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x2048]
        jmp public_6f2d450
        public_6f5860b : nop
        mov eax, offset public_6f5b738
        jmp public_6f57e96
        UNREACHABLE_TRAP(0x6f58600)
        ASM_EXPORT_ENTRY_SINGLE(0x6f5860b, public_6f5860b)
    }
}

#undef public_6f5860b

#pragma init_seg(compiler)
extern "C" void const* const public_6f5860b = __AsmFindLabelExport(&internal_6f58600, 0x6f5860b);
