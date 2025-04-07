#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_621c030);

PROC_DECLARE(0x621cd20, internal_621cd20, public_621cd20);
extern "C" NAKED register_t __cdecl internal_621cd20()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_621c030
        UNREACHABLE_TRAP(0x621cd20)
    }
}
