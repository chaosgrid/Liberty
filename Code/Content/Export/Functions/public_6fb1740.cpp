#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fb174b _public_6fb174b
#define public_6fb1756 _public_6fb1756

PROC_DECLARE(0x6fb1740, internal_6fb1740, public_6fb1740);
/* CHUNK of public_6f97d90 */
extern "C" NAKED register_t __cdecl internal_6fb1740()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x130]
        jmp public_6eec8d0
        public_6fb174b : nop
        lea ecx, ss:[ebp-0x144]
        jmp public_6eec8d0
        public_6fb1756 : nop
        mov eax, offset public_6fc6d20
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fb1740)
        ASM_EXPORT_ENTRY_FIRST(0x6fb174b, public_6fb174b)
        ASM_EXPORT_ENTRY_LAST(0x6fb1756, public_6fb1756)
    }
}

#undef public_6fb174b
#undef public_6fb1756

#pragma init_seg(compiler)
extern "C" void const* const public_6fb174b = __AsmFindLabelExport(&internal_6fb1740, 0x6fb174b);
extern "C" void const* const public_6fb1756 = __AsmFindLabelExport(&internal_6fb1740, 0x6fb1756);
