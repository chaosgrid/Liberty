#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_621a640);

PROC_DECLARE(0x621b320, internal_621b320, public_621b320);
extern "C" NAKED register_t __cdecl internal_621b320()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_621a640
        UNREACHABLE_TRAP(0x621b320)
    }
}
