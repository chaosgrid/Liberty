#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_621bfa0);

PROC_DECLARE(0x621cc80, internal_621cc80, public_621cc80);
extern "C" NAKED register_t __cdecl internal_621cc80()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_621bfa0
        UNREACHABLE_TRAP(0x621cc80)
    }
}
