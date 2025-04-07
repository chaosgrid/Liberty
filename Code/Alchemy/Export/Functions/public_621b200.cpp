#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_621a7d0);

PROC_DECLARE(0x621b200, internal_621b200, public_621b200);
extern "C" NAKED register_t __cdecl internal_621b200()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_621a7d0
        UNREACHABLE_TRAP(0x621b200)
    }
}
