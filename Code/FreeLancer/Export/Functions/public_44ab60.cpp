#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_448a00);
CLANG_FORWARD_PROC_SYMBOL(public_44ab60);

PROC_DECLARE(0x44ab60, internal_44ab60, public_44ab60);
extern "C" NAKED register_t __cdecl internal_44ab60()
{
    __asm
    {
        add ecx, 0x1020
        jmp public_448a00
        UNREACHABLE_TRAP(0x44ab60)
    }
}
