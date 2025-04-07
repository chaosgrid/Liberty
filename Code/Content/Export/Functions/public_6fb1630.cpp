#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f95680);
CLANG_FORWARD_PROC_SYMBOL(public_6f956a0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fb163b _public_6fb163b
#define public_6fb1643 _public_6fb1643

PROC_DECLARE(0x6fb1630, internal_6fb1630, public_6fb1630);
/* CHUNK of public_6f95040 */
extern "C" NAKED register_t __cdecl internal_6fb1630()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0xB0]
        jmp public_6f95680
        public_6fb163b : nop
        lea ecx, ss:[ebp-0x58]
        jmp public_6f956a0
        public_6fb1643 : nop
        mov eax, offset public_6fc6bc8
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fb1630)
        ASM_EXPORT_ENTRY_FIRST(0x6fb163b, public_6fb163b)
        ASM_EXPORT_ENTRY_LAST(0x6fb1643, public_6fb1643)
    }
}

#undef public_6fb163b
#undef public_6fb1643

#pragma init_seg(compiler)
extern "C" void const* const public_6fb163b = __AsmFindLabelExport(&internal_6fb1630, 0x6fb163b);
extern "C" void const* const public_6fb1643 = __AsmFindLabelExport(&internal_6fb1630, 0x6fb1643);
