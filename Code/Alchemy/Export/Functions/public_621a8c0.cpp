#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_621a8c0);
CLANG_FORWARD_PROC_SYMBOL(public_623ffb0);

PROC_DECLARE(0x621a8c0, internal_621a8c0, public_621a8c0);
extern "C" NAKED register_t __cdecl internal_621a8c0()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        add edx, 4
        mov dword ptr ss : [esp+4], edx
        jmp public_623ffb0
        UNREACHABLE_TRAP(0x621a8c0)
    }
}
