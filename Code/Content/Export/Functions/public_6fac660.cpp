#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fac668 _public_6fac668

PROC_DECLARE(0x6fac660, internal_6fac660, public_6fac660);
/* CHUNK of public_6ef95d0 */
extern "C" NAKED register_t __cdecl internal_6fac660()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x1C]
        jmp public_6eec8d0
        public_6fac668 : nop
        mov eax, offset public_6fc1320
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fac660)
        ASM_EXPORT_ENTRY_SINGLE(0x6fac668, public_6fac668)
    }
}

#undef public_6fac668

#pragma init_seg(compiler)
extern "C" void const* const public_6fac668 = __AsmFindLabelExport(&internal_6fac660, 0x6fac668);
