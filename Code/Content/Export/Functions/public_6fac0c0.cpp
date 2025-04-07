#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6efd030);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fac0cb _public_6fac0cb
#define public_6fac0d3 _public_6fac0d3

PROC_DECLARE(0x6fac0c0, internal_6fac0c0, public_6fac0c0);
/* CHUNK of public_6ef2380 */
extern "C" NAKED register_t __cdecl internal_6fac0c0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x120]
        jmp public_6eec8d0
        public_6fac0cb : nop
        lea ecx, ss:[ebp-0x50]
        jmp public_6efd030
        public_6fac0d3 : nop
        mov eax, offset public_6fc0d0c
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fac0c0)
        ASM_EXPORT_ENTRY_FIRST(0x6fac0cb, public_6fac0cb)
        ASM_EXPORT_ENTRY_LAST(0x6fac0d3, public_6fac0d3)
    }
}

#undef public_6fac0cb
#undef public_6fac0d3

#pragma init_seg(compiler)
extern "C" void const* const public_6fac0cb = __AsmFindLabelExport(&internal_6fac0c0, 0x6fac0cb);
extern "C" void const* const public_6fac0d3 = __AsmFindLabelExport(&internal_6fac0c0, 0x6fac0d3);
