#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb7d10);
CLANG_FORWARD_PROC_SYMBOL(public_6f592d0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6faf7fb _public_6faf7fb
#define public_6faf806 _public_6faf806

PROC_DECLARE(0x6faf7f0, internal_6faf7f0, public_6faf7f0);
/* CHUNK of public_6f58f30 */
extern "C" NAKED register_t __cdecl internal_6faf7f0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0xE8]
        jmp public_6eb7d10
        public_6faf7fb : nop
        lea ecx, ss:[ebp-0xBC]
        jmp public_6f592d0
        public_6faf806 : nop
        mov eax, offset public_6fc47c8
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6faf7f0)
        ASM_EXPORT_ENTRY_FIRST(0x6faf7fb, public_6faf7fb)
        ASM_EXPORT_ENTRY_LAST(0x6faf806, public_6faf806)
    }
}

#undef public_6faf7fb
#undef public_6faf806

#pragma init_seg(compiler)
extern "C" void const* const public_6faf7fb = __AsmFindLabelExport(&internal_6faf7f0, 0x6faf7fb);
extern "C" void const* const public_6faf806 = __AsmFindLabelExport(&internal_6faf7f0, 0x6faf806);
