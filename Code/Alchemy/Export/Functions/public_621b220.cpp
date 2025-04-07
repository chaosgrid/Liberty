#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_621a8b0);

PROC_DECLARE(0x621b220, internal_621b220, public_621b220);
extern "C" NAKED register_t __cdecl internal_621b220()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_621a8b0
        UNREACHABLE_TRAP(0x621b220)
    }
}
