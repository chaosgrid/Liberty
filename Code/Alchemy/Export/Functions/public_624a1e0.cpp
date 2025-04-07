#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6239ed0);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_624a1e8 _public_624a1e8

PROC_DECLARE(0x624a1e0, internal_624a1e0, public_624a1e0);
/* CHUNK of public_623a000 */
extern "C" NAKED register_t __cdecl internal_624a1e0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp+8]
        jmp public_6239ed0
        public_624a1e8 : nop
        mov eax, offset public_625325c
        jmp public_6246126
        UNREACHABLE_TRAP(0x624a1e0)
        ASM_EXPORT_ENTRY_SINGLE(0x624a1e8, public_624a1e8)
    }
}

#undef public_624a1e8

#pragma init_seg(compiler)
extern "C" void const* const public_624a1e8 = __AsmFindLabelExport(&internal_624a1e0, 0x624a1e8);
