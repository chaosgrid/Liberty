#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f2ca00);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e96);

#define public_6f5862b _public_6f5862b

PROC_DECLARE(0x6f58620, internal_6f58620, public_6f58620);
/* CHUNK of public_6f2aa10 */
extern "C" NAKED register_t __cdecl internal_6f58620()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x494]
        jmp public_6f2ca00
        public_6f5862b : nop
        mov eax, offset public_6f5b75c
        jmp public_6f57e96
        UNREACHABLE_TRAP(0x6f58620)
        ASM_EXPORT_ENTRY_SINGLE(0x6f5862b, public_6f5862b)
    }
}

#undef public_6f5862b

#pragma init_seg(compiler)
extern "C" void const* const public_6f5862b = __AsmFindLabelExport(&internal_6f58620, 0x6f5862b);
