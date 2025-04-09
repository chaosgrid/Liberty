#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4500d0);

PROC_DECLARE(0x4501f0, internal_4501f0, public_4501f0);
extern "C" NAKED register_t __cdecl internal_4501f0()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 8
        jmp public_4500d0
        UNREACHABLE_TRAP(0x4501f0)
    }
}
