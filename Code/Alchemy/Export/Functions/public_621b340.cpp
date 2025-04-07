#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_621a660);

PROC_DECLARE(0x621b340, internal_621b340, public_621b340);
extern "C" NAKED register_t __cdecl internal_621b340()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_621a660
        UNREACHABLE_TRAP(0x621b340)
    }
}
