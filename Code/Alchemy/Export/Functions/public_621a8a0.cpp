#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_621a8a0);
CLANG_FORWARD_PROC_SYMBOL(public_62400b0);

PROC_DECLARE(0x621a8a0, internal_621a8a0, public_621a8a0);
extern "C" NAKED register_t __cdecl internal_621a8a0()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        add edx, 4
        mov dword ptr ss : [esp+4], edx
        jmp public_62400b0
        UNREACHABLE_TRAP(0x621a8a0)
    }
}
