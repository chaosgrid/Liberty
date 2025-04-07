#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d1ed40);

PROC_DECLARE(0x6d1efe0, internal_6d1efe0, public_6d1efe0);
extern "C" NAKED register_t __cdecl internal_6d1efe0()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 0x18
        jmp public_6d1ed40
        UNREACHABLE_TRAP(0x6d1efe0)
    }
}
