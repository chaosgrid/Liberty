#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f5bb20);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6faf8bb _public_6faf8bb
#define public_6faf8c6 _public_6faf8c6
#define public_6faf8ce _public_6faf8ce

PROC_DECLARE(0x6faf8b0, internal_6faf8b0, public_6faf8b0);
/* CHUNK of public_6f5b690 */
extern "C" NAKED register_t __cdecl internal_6faf8b0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0xDC]
        jmp public_6f5bb20
        public_6faf8bb : nop
        lea ecx, ss:[ebp-0xDC]
        jmp public_6f5bb20
        public_6faf8c6 : nop
        lea ecx, ss:[ebp-0x68]
        jmp public_6f5bb20
        public_6faf8ce : nop
        mov eax, offset public_6fc48b4
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6faf8b0)
        ASM_EXPORT_ENTRY_FIRST(0x6faf8bb, public_6faf8bb)
        ASM_EXPORT_ENTRY(0x6faf8c6, public_6faf8c6)
        ASM_EXPORT_ENTRY_LAST(0x6faf8ce, public_6faf8ce)
    }
}

#undef public_6faf8bb
#undef public_6faf8c6
#undef public_6faf8ce

#pragma init_seg(compiler)
extern "C" void const* const public_6faf8bb = __AsmFindLabelExport(&internal_6faf8b0, 0x6faf8bb);
extern "C" void const* const public_6faf8c6 = __AsmFindLabelExport(&internal_6faf8b0, 0x6faf8c6);
extern "C" void const* const public_6faf8ce = __AsmFindLabelExport(&internal_6faf8b0, 0x6faf8ce);
