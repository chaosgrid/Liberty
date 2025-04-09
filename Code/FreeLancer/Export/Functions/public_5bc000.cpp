#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4de730);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bc00b _public_5bc00b
#define public_5bc016 _public_5bc016

PROC_DECLARE(0x5bc000, internal_5bc000, public_5bc000);
/* CHUNK of public_482f10 */
extern "C" NAKED register_t __cdecl internal_5bc000()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0xBC]
        jmp public_4de730
        public_5bc00b : nop
        lea ecx, ss:[ebp-0xA8]
        jmp public_4de730
        public_5bc016 : nop
        mov eax, offset public_5f6420
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bc000)
        ASM_EXPORT_ENTRY_FIRST(0x5bc00b, public_5bc00b)
        ASM_EXPORT_ENTRY_LAST(0x5bc016, public_5bc016)
    }
}

#undef public_5bc00b
#undef public_5bc016

#pragma init_seg(compiler)
extern "C" void const* const public_5bc00b = __AsmFindLabelExport(&internal_5bc000, 0x5bc00b);
extern "C" void const* const public_5bc016 = __AsmFindLabelExport(&internal_5bc000, 0x5bc016);
