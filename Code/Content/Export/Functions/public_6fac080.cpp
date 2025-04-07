#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f98760);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fac08b _public_6fac08b
#define public_6fac096 _public_6fac096

PROC_DECLARE(0x6fac080, internal_6fac080, public_6fac080);
/* CHUNK of public_6ef1810 */
extern "C" NAKED register_t __cdecl internal_6fac080()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x440]
        jmp public_6eec8d0
        public_6fac08b : nop
        lea ecx, ss:[ebp-0x428]
        jmp public_6f98760
        public_6fac096 : nop
        mov eax, offset public_6fc0cbc
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fac080)
        ASM_EXPORT_ENTRY_FIRST(0x6fac08b, public_6fac08b)
        ASM_EXPORT_ENTRY_LAST(0x6fac096, public_6fac096)
    }
}

#undef public_6fac08b
#undef public_6fac096

#pragma init_seg(compiler)
extern "C" void const* const public_6fac08b = __AsmFindLabelExport(&internal_6fac080, 0x6fac08b);
extern "C" void const* const public_6fac096 = __AsmFindLabelExport(&internal_6fac080, 0x6fac096);
