#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_621a930);

PROC_DECLARE(0x621b270, internal_621b270, public_621b270);
extern "C" NAKED register_t __cdecl internal_621b270()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_621a930
        UNREACHABLE_TRAP(0x621b270)
    }
}
