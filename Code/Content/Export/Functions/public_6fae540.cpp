#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f15350);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fae54b _public_6fae54b

PROC_DECLARE(0x6fae540, internal_6fae540, public_6fae540);
/* CHUNK of public_6f29c10 */
extern "C" NAKED register_t __cdecl internal_6fae540()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x114]
        jmp public_6f15350
        public_6fae54b : nop
        mov eax, offset public_6fc3488
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fae540)
        ASM_EXPORT_ENTRY_SINGLE(0x6fae54b, public_6fae54b)
    }
}

#undef public_6fae54b

#pragma init_seg(compiler)
extern "C" void const* const public_6fae54b = __AsmFindLabelExport(&internal_6fae540, 0x6fae54b);
