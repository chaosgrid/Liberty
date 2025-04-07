#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620de30);

PROC_DECLARE(0x620d6e0, internal_620d6e0, public_620d6e0);
extern "C" NAKED register_t __cdecl internal_620d6e0()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 0xC
        jmp public_620de30
        UNREACHABLE_TRAP(0x620d6e0)
    }
}
