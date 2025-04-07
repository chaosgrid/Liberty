#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f23610);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e96);

#define public_6f58428 _public_6f58428

PROC_DECLARE(0x6f58420, internal_6f58420, public_6f58420);
/* CHUNK of public_6f222d0 */
extern "C" NAKED register_t __cdecl internal_6f58420()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x1C]
        jmp public_6f23610
        public_6f58428 : nop
        mov eax, offset public_6f5b5bc
        jmp public_6f57e96
        UNREACHABLE_TRAP(0x6f58420)
        ASM_EXPORT_ENTRY_SINGLE(0x6f58428, public_6f58428)
    }
}

#undef public_6f58428

#pragma init_seg(compiler)
extern "C" void const* const public_6f58428 = __AsmFindLabelExport(&internal_6f58420, 0x6f58428);
