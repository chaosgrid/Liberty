#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d1ed40);

PROC_DECLARE(0x6d1ef50, internal_6d1ef50, public_6d1ef50);
extern "C" NAKED register_t __cdecl internal_6d1ef50()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 0xC
        jmp public_6d1ed40
        UNREACHABLE_TRAP(0x6d1ef50)
    }
}
