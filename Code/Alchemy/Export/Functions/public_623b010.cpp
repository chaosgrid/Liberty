#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623b080);

PROC_DECLARE(0x623b010, internal_623b010, public_623b010);
extern "C" NAKED register_t __cdecl internal_623b010()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 0xC
        jmp public_623b080
        UNREACHABLE_TRAP(0x623b010)
    }
}
