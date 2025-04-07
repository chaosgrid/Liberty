#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f15350);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fae438 _public_6fae438

PROC_DECLARE(0x6fae430, internal_6fae430, public_6fae430);
/* CHUNK of public_6f283b0 */
extern "C" NAKED register_t __cdecl internal_6fae430()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x18]
        jmp public_6f15350
        public_6fae438 : nop
        mov eax, offset public_6fc3388
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fae430)
        ASM_EXPORT_ENTRY_SINGLE(0x6fae438, public_6fae438)
    }
}

#undef public_6fae438

#pragma init_seg(compiler)
extern "C" void const* const public_6fae438 = __AsmFindLabelExport(&internal_6fae430, 0x6fae438);
