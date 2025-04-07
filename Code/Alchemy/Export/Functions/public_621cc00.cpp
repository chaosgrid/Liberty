#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_621c460);

PROC_DECLARE(0x621cc00, internal_621cc00, public_621cc00);
extern "C" NAKED register_t __cdecl internal_621cc00()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_621c460
        UNREACHABLE_TRAP(0x621cc00)
    }
}
