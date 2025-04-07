#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_621c140);

PROC_DECLARE(0x621cb40, internal_621cb40, public_621cb40);
extern "C" NAKED register_t __cdecl internal_621cb40()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_621c140
        UNREACHABLE_TRAP(0x621cb40)
    }
}
