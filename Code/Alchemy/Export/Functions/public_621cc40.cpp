#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_621bf60);

PROC_DECLARE(0x621cc40, internal_621cc40, public_621cc40);
extern "C" NAKED register_t __cdecl internal_621cc40()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_621bf60
        UNREACHABLE_TRAP(0x621cc40)
    }
}
