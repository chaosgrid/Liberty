#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_621c480);

PROC_DECLARE(0x621cc10, internal_621cc10, public_621cc10);
extern "C" NAKED register_t __cdecl internal_621cc10()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_621c480
        UNREACHABLE_TRAP(0x621cc10)
    }
}
