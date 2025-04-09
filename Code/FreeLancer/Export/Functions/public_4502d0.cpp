#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_450190);

PROC_DECLARE(0x4502d0, internal_4502d0, public_4502d0);
extern "C" NAKED register_t __cdecl internal_4502d0()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 0x18
        jmp public_450190
        UNREACHABLE_TRAP(0x4502d0)
    }
}
