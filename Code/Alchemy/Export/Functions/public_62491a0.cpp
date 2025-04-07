#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6229e70);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_62491a8 _public_62491a8

PROC_DECLARE(0x62491a0, internal_62491a0, public_62491a0);
/* CHUNK of public_6228b00 */
extern "C" NAKED register_t __cdecl internal_62491a0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp+4]
        jmp public_6229e70
        public_62491a8 : nop
        mov eax, offset public_6252148
        jmp public_6246126
        UNREACHABLE_TRAP(0x62491a0)
        ASM_EXPORT_ENTRY_SINGLE(0x62491a8, public_62491a8)
    }
}

#undef public_62491a8

#pragma init_seg(compiler)
extern "C" void const* const public_62491a8 = __AsmFindLabelExport(&internal_62491a0, 0x62491a8);
