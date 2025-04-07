#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f86ac0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fb0bc8 _public_6fb0bc8

PROC_DECLARE(0x6fb0bc0, internal_6fb0bc0, public_6fb0bc0);
/* CHUNK of public_6f86a00 */
extern "C" NAKED register_t __cdecl internal_6fb0bc0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x2C]
        jmp public_6f86ac0
        public_6fb0bc8 : nop
        mov eax, offset public_6fc5fac
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fb0bc0)
        ASM_EXPORT_ENTRY_SINGLE(0x6fb0bc8, public_6fb0bc8)
    }
}

#undef public_6fb0bc8

#pragma init_seg(compiler)
extern "C" void const* const public_6fb0bc8 = __AsmFindLabelExport(&internal_6fb0bc0, 0x6fb0bc8);
