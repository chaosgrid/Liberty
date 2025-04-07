#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_621c4a0);

PROC_DECLARE(0x621cc20, internal_621cc20, public_621cc20);
extern "C" NAKED register_t __cdecl internal_621cc20()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_621c4a0
        UNREACHABLE_TRAP(0x621cc20)
    }
}
