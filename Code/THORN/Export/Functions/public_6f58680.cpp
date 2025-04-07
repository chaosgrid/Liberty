#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f2d490);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e96);

#define public_6f58688 _public_6f58688

PROC_DECLARE(0x6f58680, internal_6f58680, public_6f58680);
/* CHUNK of public_6f2d350 */
extern "C" NAKED register_t __cdecl internal_6f58680()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x20]
        jmp public_6f2d490
        public_6f58688 : nop
        mov eax, offset public_6f5b7c8
        jmp public_6f57e96
        UNREACHABLE_TRAP(0x6f58680)
        ASM_EXPORT_ENTRY_SINGLE(0x6f58688, public_6f58688)
    }
}

#undef public_6f58688

#pragma init_seg(compiler)
extern "C" void const* const public_6f58688 = __AsmFindLabelExport(&internal_6f58680, 0x6f58688);
