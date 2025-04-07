#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cecb50);
CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d60878 _public_6d60878

PROC_DECLARE(0x6d60870, internal_6d60870, public_6d60870);
/* CHUNK of public_6cf1380 */
extern "C" NAKED register_t __cdecl internal_6d60870()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x24]
        jmp public_6cecb50
        public_6d60878 : nop
        mov eax, offset public_6d711b0
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d60870)
        ASM_EXPORT_ENTRY_SINGLE(0x6d60878, public_6d60878)
    }
}

#undef public_6d60878

#pragma init_seg(compiler)
extern "C" void const* const public_6d60878 = __AsmFindLabelExport(&internal_6d60870, 0x6d60878);
