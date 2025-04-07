#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623adb0);

PROC_DECLARE(0x623afc0, internal_623afc0, public_623afc0);
extern "C" NAKED register_t __cdecl internal_623afc0()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 0xC
        jmp public_623adb0
        UNREACHABLE_TRAP(0x623afc0)
    }
}
