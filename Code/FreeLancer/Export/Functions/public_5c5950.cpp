#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_444e20);
CLANG_FORWARD_PROC_SYMBOL(public_565010);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c595b _public_5c595b
#define public_5c5966 _public_5c5966

PROC_DECLARE(0x5c5950, internal_5c5950, public_5c5950);
/* CHUNK of public_5b1300 */
extern "C" NAKED register_t __cdecl internal_5c5950()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x2274]
        jmp public_444e20
        public_5c595b : nop
        lea ecx, ss:[ebp-0x226C]
        jmp public_565010
        public_5c5966 : nop
        mov eax, offset public_5ff728
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c5950)
        ASM_EXPORT_ENTRY_FIRST(0x5c595b, public_5c595b)
        ASM_EXPORT_ENTRY_LAST(0x5c5966, public_5c5966)
    }
}

#undef public_5c595b
#undef public_5c5966

#pragma init_seg(compiler)
extern "C" void const* const public_5c595b = __AsmFindLabelExport(&internal_5c5950, 0x5c595b);
extern "C" void const* const public_5c5966 = __AsmFindLabelExport(&internal_5c5950, 0x5c5966);
