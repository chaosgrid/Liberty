#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_621a700);
CLANG_FORWARD_PROC_SYMBOL(public_623f9a0);

PROC_DECLARE(0x621a700, internal_621a700, public_621a700);
extern "C" NAKED register_t __cdecl internal_621a700()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        add edx, 4
        mov dword ptr ss : [esp+4], edx
        jmp public_623f9a0
        UNREACHABLE_TRAP(0x621a700)
    }
}
