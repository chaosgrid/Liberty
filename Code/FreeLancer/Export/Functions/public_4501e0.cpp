#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_450190);

PROC_DECLARE(0x4501e0, internal_4501e0, public_4501e0);
extern "C" NAKED register_t __cdecl internal_4501e0()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_450190
        UNREACHABLE_TRAP(0x4501e0)
    }
}
