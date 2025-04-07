#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62026f0);

PROC_DECLARE(0x62030a0, internal_62030a0, public_62030a0);
extern "C" NAKED register_t __cdecl internal_62030a0()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_62026f0
        UNREACHABLE_TRAP(0x62030a0)
    }
}
