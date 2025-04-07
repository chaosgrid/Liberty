#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_621c160);

PROC_DECLARE(0x621cb50, internal_621cb50, public_621cb50);
extern "C" NAKED register_t __cdecl internal_621cb50()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_621c160
        UNREACHABLE_TRAP(0x621cb50)
    }
}
