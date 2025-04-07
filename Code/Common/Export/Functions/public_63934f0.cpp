#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63449d0);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_63934fb _public_63934fb

PROC_DECLARE(0x63934f0, internal_63934f0, public_63934f0);
/* CHUNK of public_628d450 */
extern "C" NAKED register_t __cdecl internal_63934f0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x230]
        jmp public_63449d0
        public_63934fb : nop
        mov eax, offset public_63ac624
        jmp public_6391da2
        UNREACHABLE_TRAP(0x63934f0)
        ASM_EXPORT_ENTRY_SINGLE(0x63934fb, public_63934fb)
    }
}

#undef public_63934fb

#pragma init_seg(compiler)
extern "C" void const* const public_63934fb = __AsmFindLabelExport(&internal_63934f0, 0x63934fb);
