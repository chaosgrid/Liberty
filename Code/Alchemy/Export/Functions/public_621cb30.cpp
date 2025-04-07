#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_621c120);

PROC_DECLARE(0x621cb30, internal_621cb30, public_621cb30);
extern "C" NAKED register_t __cdecl internal_621cb30()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_621c120
        UNREACHABLE_TRAP(0x621cb30)
    }
}
