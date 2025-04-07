#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6239ed0);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_624a1a8 _public_624a1a8
#define public_624a1b0 _public_624a1b0

PROC_DECLARE(0x624a1a0, internal_624a1a0, public_624a1a0);
/* CHUNK of public_6239f00 */
extern "C" NAKED register_t __cdecl internal_624a1a0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp+0xC]
        jmp public_6239ed0
        public_624a1a8 : nop
        lea ecx, ss:[ebp+8]
        jmp public_6239ed0
        public_624a1b0 : nop
        mov eax, offset public_625320c
        jmp public_6246126
        UNREACHABLE_TRAP(0x624a1a0)
        ASM_EXPORT_ENTRY_FIRST(0x624a1a8, public_624a1a8)
        ASM_EXPORT_ENTRY_LAST(0x624a1b0, public_624a1b0)
    }
}

#undef public_624a1a8
#undef public_624a1b0

#pragma init_seg(compiler)
extern "C" void const* const public_624a1a8 = __AsmFindLabelExport(&internal_624a1a0, 0x624a1a8);
extern "C" void const* const public_624a1b0 = __AsmFindLabelExport(&internal_624a1a0, 0x624a1b0);
