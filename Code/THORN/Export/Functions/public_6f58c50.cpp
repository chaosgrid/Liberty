#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f3b9f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e96);

#define public_6f58c58 _public_6f58c58

PROC_DECLARE(0x6f58c50, internal_6f58c50, public_6f58c50);
/* CHUNK of public_6f38e20 */
extern "C" NAKED register_t __cdecl internal_6f58c50()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x1C]
        jmp public_6f3b9f0
        public_6f58c58 : nop
        mov eax, offset public_6f5bdec
        jmp public_6f57e96
        UNREACHABLE_TRAP(0x6f58c50)
        ASM_EXPORT_ENTRY_SINGLE(0x6f58c58, public_6f58c58)
    }
}

#undef public_6f58c58

#pragma init_seg(compiler)
extern "C" void const* const public_6f58c58 = __AsmFindLabelExport(&internal_6f58c50, 0x6f58c58);
