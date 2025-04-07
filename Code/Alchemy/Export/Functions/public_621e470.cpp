#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_621d900);

PROC_DECLARE(0x621e470, internal_621e470, public_621e470);
extern "C" NAKED register_t __cdecl internal_621e470()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_621d900
        UNREACHABLE_TRAP(0x621e470)
    }
}
