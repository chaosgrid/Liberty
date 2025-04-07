#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_621a820);

PROC_DECLARE(0x621b250, internal_621b250, public_621b250);
extern "C" NAKED register_t __cdecl internal_621b250()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_621a820
        UNREACHABLE_TRAP(0x621b250)
    }
}
