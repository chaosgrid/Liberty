#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_621a6b0);

PROC_DECLARE(0x621b380, internal_621b380, public_621b380);
extern "C" NAKED register_t __cdecl internal_621b380()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_621a6b0
        UNREACHABLE_TRAP(0x621b380)
    }
}
