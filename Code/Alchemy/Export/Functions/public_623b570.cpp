#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623aaa0);

PROC_DECLARE(0x623b570, internal_623b570, public_623b570);
extern "C" NAKED register_t __cdecl internal_623b570()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_623aaa0
        UNREACHABLE_TRAP(0x623b570)
    }
}
