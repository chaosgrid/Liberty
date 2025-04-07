#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_621a8b0);
CLANG_FORWARD_PROC_SYMBOL(public_62400f0);

PROC_DECLARE(0x621a8b0, internal_621a8b0, public_621a8b0);
extern "C" NAKED register_t __cdecl internal_621a8b0()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        add edx, 4
        mov dword ptr ss : [esp+4], edx
        jmp public_62400f0
        UNREACHABLE_TRAP(0x621a8b0)
    }
}
