#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623e0f0);

PROC_DECLARE(0x623e780, internal_623e780, public_623e780);
extern "C" NAKED register_t __cdecl internal_623e780()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_623e0f0
        UNREACHABLE_TRAP(0x623e780)
    }
}
