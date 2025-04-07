#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_621ab10);

PROC_DECLARE(0x621b2e0, internal_621b2e0, public_621b2e0);
extern "C" NAKED register_t __cdecl internal_621b2e0()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_621ab10
        UNREACHABLE_TRAP(0x621b2e0)
    }
}
