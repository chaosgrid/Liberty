#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_621c240);

PROC_DECLARE(0x621cb70, internal_621cb70, public_621cb70);
extern "C" NAKED register_t __cdecl internal_621cb70()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_621c240
        UNREACHABLE_TRAP(0x621cb70)
    }
}
