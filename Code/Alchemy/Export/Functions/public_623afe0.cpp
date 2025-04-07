#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623af70);

PROC_DECLARE(0x623afe0, internal_623afe0, public_623afe0);
extern "C" NAKED register_t __cdecl internal_623afe0()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 0xC
        jmp public_623af70
        UNREACHABLE_TRAP(0x623afe0)
    }
}
