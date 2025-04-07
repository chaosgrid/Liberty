#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_621c250);

PROC_DECLARE(0x621cb80, internal_621cb80, public_621cb80);
extern "C" NAKED register_t __cdecl internal_621cb80()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_621c250
        UNREACHABLE_TRAP(0x621cb80)
    }
}
