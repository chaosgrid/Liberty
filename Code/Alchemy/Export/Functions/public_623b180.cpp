#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623b310);

PROC_DECLARE(0x623b180, internal_623b180, public_623b180);
extern "C" NAKED register_t __cdecl internal_623b180()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 0xC
        jmp public_623b310
        UNREACHABLE_TRAP(0x623b180)
    }
}
