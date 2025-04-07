#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_621d7a0);
CLANG_FORWARD_PROC_SYMBOL(public_623fb50);

PROC_DECLARE(0x621d7a0, internal_621d7a0, public_621d7a0);
extern "C" NAKED register_t __cdecl internal_621d7a0()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        add edx, 4
        mov dword ptr ss : [esp+4], edx
        jmp public_623fb50
        UNREACHABLE_TRAP(0x621d7a0)
    }
}
