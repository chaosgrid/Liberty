#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4de730);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bce8b _public_5bce8b
#define public_5bce96 _public_5bce96

PROC_DECLARE(0x5bce80, internal_5bce80, public_5bce80);
/* CHUNK of public_4ac0a0 */
extern "C" NAKED register_t __cdecl internal_5bce80()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x134]
        jmp public_4de730
        public_5bce8b : nop
        lea ecx, ss:[ebp-0x11C]
        jmp public_4de730
        public_5bce96 : nop
        mov eax, offset public_5f7110
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bce80)
        ASM_EXPORT_ENTRY_FIRST(0x5bce8b, public_5bce8b)
        ASM_EXPORT_ENTRY_LAST(0x5bce96, public_5bce96)
    }
}

#undef public_5bce8b
#undef public_5bce96

#pragma init_seg(compiler)
extern "C" void const* const public_5bce8b = __AsmFindLabelExport(&internal_5bce80, 0x5bce8b);
extern "C" void const* const public_5bce96 = __AsmFindLabelExport(&internal_5bce80, 0x5bce96);
