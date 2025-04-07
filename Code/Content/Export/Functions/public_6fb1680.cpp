#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fb1688 _public_6fb1688

PROC_DECLARE(0x6fb1680, internal_6fb1680, public_6fb1680);
/* CHUNK of public_6f956c0 */
extern "C" NAKED register_t __cdecl internal_6fb1680()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x1C]
        jmp public_6eec8d0
        public_6fb1688 : nop
        mov eax, offset public_6fc6c44
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fb1680)
        ASM_EXPORT_ENTRY_SINGLE(0x6fb1688, public_6fb1688)
    }
}

#undef public_6fb1688

#pragma init_seg(compiler)
extern "C" void const* const public_6fb1688 = __AsmFindLabelExport(&internal_6fb1680, 0x6fb1688);
