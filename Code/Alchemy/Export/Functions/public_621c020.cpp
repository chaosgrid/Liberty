#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_621c020);
CLANG_FORWARD_PROC_SYMBOL(public_6245aa0);

PROC_DECLARE(0x621c020, internal_621c020, public_621c020);
extern "C" NAKED register_t __cdecl internal_621c020()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        add edx, 4
        mov dword ptr ss : [esp+4], edx
        jmp public_6245aa0
        UNREACHABLE_TRAP(0x621c020)
    }
}
