#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_621d830);

PROC_DECLARE(0x621e380, internal_621e380, public_621e380);
extern "C" NAKED register_t __cdecl internal_621e380()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_621d830
        UNREACHABLE_TRAP(0x621e380)
    }
}
