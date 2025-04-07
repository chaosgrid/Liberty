#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_621c010);

PROC_DECLARE(0x621cd00, internal_621cd00, public_621cd00);
extern "C" NAKED register_t __cdecl internal_621cd00()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_621c010
        UNREACHABLE_TRAP(0x621cd00)
    }
}
