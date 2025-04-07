#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623aa30);

PROC_DECLARE(0x623b500, internal_623b500, public_623b500);
extern "C" NAKED register_t __cdecl internal_623b500()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_623aa30
        UNREACHABLE_TRAP(0x623b500)
    }
}
