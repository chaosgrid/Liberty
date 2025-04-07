#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_621c220);

PROC_DECLARE(0x621cb90, internal_621cb90, public_621cb90);
extern "C" NAKED register_t __cdecl internal_621cb90()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_621c220
        UNREACHABLE_TRAP(0x621cb90)
    }
}
