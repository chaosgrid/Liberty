#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_425a20);
CLANG_FORWARD_PROC_SYMBOL(public_511010);

PROC_DECLARE(0x511010, internal_511010, public_511010);
extern "C" NAKED register_t __cdecl internal_511010()
{
    __asm
    {
        mov ecx, offset public_6750a0
        jmp public_425a20
        UNREACHABLE_TRAP(0x511010)
    }
}
