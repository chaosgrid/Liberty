#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_621a720);

PROC_DECLARE(0x621b430, internal_621b430, public_621b430);
extern "C" NAKED register_t __cdecl internal_621b430()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_621a720
        UNREACHABLE_TRAP(0x621b430)
    }
}
