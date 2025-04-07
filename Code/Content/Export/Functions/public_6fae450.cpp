#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f15350);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fae458 _public_6fae458

PROC_DECLARE(0x6fae450, internal_6fae450, public_6fae450);
/* CHUNK of public_6f28840 */
extern "C" NAKED register_t __cdecl internal_6fae450()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x60]
        jmp public_6f15350
        public_6fae458 : nop
        mov eax, offset public_6fc33ac
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fae450)
        ASM_EXPORT_ENTRY_SINGLE(0x6fae458, public_6fae458)
    }
}

#undef public_6fae458

#pragma init_seg(compiler)
extern "C" void const* const public_6fae458 = __AsmFindLabelExport(&internal_6fae450, 0x6fae458);
