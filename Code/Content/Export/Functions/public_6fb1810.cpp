#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb7d10);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fb1818 _public_6fb1818

PROC_DECLARE(0x6fb1810, internal_6fb1810, public_6fb1810);
/* CHUNK of public_6f99010 */
extern "C" NAKED register_t __cdecl internal_6fb1810()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x24]
        jmp public_6eb7d10
        public_6fb1818 : nop
        mov eax, offset public_6fc6df8
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fb1810)
        ASM_EXPORT_ENTRY_SINGLE(0x6fb1818, public_6fb1818)
    }
}

#undef public_6fb1818

#pragma init_seg(compiler)
extern "C" void const* const public_6fb1818 = __AsmFindLabelExport(&internal_6fb1810, 0x6fb1818);
