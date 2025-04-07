#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_621ac80);

PROC_DECLARE(0x621b2d0, internal_621b2d0, public_621b2d0);
extern "C" NAKED register_t __cdecl internal_621b2d0()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_621ac80
        UNREACHABLE_TRAP(0x621b2d0)
    }
}
