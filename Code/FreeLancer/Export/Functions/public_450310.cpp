#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4500d0);

PROC_DECLARE(0x450310, internal_450310, public_450310);
extern "C" NAKED register_t __cdecl internal_450310()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 0x20
        jmp public_4500d0
        UNREACHABLE_TRAP(0x450310)
    }
}
