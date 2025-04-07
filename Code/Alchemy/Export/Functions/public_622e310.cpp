#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_622edf0);

PROC_DECLARE(0x622e310, internal_622e310, public_622e310);
extern "C" NAKED register_t __cdecl internal_622e310()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 0xC
        jmp public_622edf0
        UNREACHABLE_TRAP(0x622e310)
    }
}
