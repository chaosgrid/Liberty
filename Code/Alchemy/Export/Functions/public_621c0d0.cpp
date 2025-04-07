#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_621c0d0);
CLANG_FORWARD_PROC_SYMBOL(public_623f9e0);

PROC_DECLARE(0x621c0d0, internal_621c0d0, public_621c0d0);
extern "C" NAKED register_t __cdecl internal_621c0d0()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        add edx, 4
        mov dword ptr ss : [esp+4], edx
        jmp public_623f9e0
        UNREACHABLE_TRAP(0x621c0d0)
    }
}
