#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623aa60);

PROC_DECLARE(0x623b550, internal_623b550, public_623b550);
extern "C" NAKED register_t __cdecl internal_623b550()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_623aa60
        UNREACHABLE_TRAP(0x623b550)
    }
}
