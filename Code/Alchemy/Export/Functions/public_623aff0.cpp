#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623afd0);

PROC_DECLARE(0x623aff0, internal_623aff0, public_623aff0);
extern "C" NAKED register_t __cdecl internal_623aff0()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 0xC
        jmp public_623afd0
        UNREACHABLE_TRAP(0x623aff0)
    }
}
