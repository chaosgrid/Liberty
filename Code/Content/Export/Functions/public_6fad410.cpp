#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f28e10);
CLANG_FORWARD_PROC_SYMBOL(public_6f95680);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fad41b _public_6fad41b
#define public_6fad426 _public_6fad426
#define public_6fad431 _public_6fad431

PROC_DECLARE(0x6fad410, internal_6fad410, public_6fad410);
/* CHUNK of public_6f0cbc0 */
extern "C" NAKED register_t __cdecl internal_6fad410()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x138]
        jmp public_6eec8d0
        public_6fad41b : nop
        lea ecx, ss:[ebp-0x168]
        jmp public_6f28e10
        public_6fad426 : nop
        lea ecx, ss:[ebp-0xEC]
        jmp public_6f95680
        public_6fad431 : nop
        mov eax, offset public_6fc22d8
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fad410)
        ASM_EXPORT_ENTRY_FIRST(0x6fad41b, public_6fad41b)
        ASM_EXPORT_ENTRY(0x6fad426, public_6fad426)
        ASM_EXPORT_ENTRY_LAST(0x6fad431, public_6fad431)
    }
}

#undef public_6fad41b
#undef public_6fad426
#undef public_6fad431

#pragma init_seg(compiler)
extern "C" void const* const public_6fad41b = __AsmFindLabelExport(&internal_6fad410, 0x6fad41b);
extern "C" void const* const public_6fad426 = __AsmFindLabelExport(&internal_6fad410, 0x6fad426);
extern "C" void const* const public_6fad431 = __AsmFindLabelExport(&internal_6fad410, 0x6fad431);
