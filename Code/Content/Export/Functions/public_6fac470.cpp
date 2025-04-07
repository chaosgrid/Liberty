#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fac478 _public_6fac478

PROC_DECLARE(0x6fac470, internal_6fac470, public_6fac470);
/* CHUNK of public_6ef7430 */
extern "C" NAKED register_t __cdecl internal_6fac470()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x1C]
        jmp public_6eec8d0
        public_6fac478 : nop
        mov eax, offset public_6fc10ec
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fac470)
        ASM_EXPORT_ENTRY_SINGLE(0x6fac478, public_6fac478)
    }
}

#undef public_6fac478

#pragma init_seg(compiler)
extern "C" void const* const public_6fac478 = __AsmFindLabelExport(&internal_6fac470, 0x6fac478);
