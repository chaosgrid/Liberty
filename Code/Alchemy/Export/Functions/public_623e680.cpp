#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623df30);

PROC_DECLARE(0x623e680, internal_623e680, public_623e680);
extern "C" NAKED register_t __cdecl internal_623e680()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_623df30
        UNREACHABLE_TRAP(0x623e680)
    }
}
