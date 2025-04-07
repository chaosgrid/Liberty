#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_621c250);
CLANG_FORWARD_PROC_SYMBOL(public_623ffb0);

PROC_DECLARE(0x621c250, internal_621c250, public_621c250);
extern "C" NAKED register_t __cdecl internal_621c250()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        add edx, 4
        mov dword ptr ss : [esp+4], edx
        jmp public_623ffb0
        UNREACHABLE_TRAP(0x621c250)
    }
}
