#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620db90);

PROC_DECLARE(0x620d8e0, internal_620d8e0, public_620d8e0);
extern "C" NAKED register_t __cdecl internal_620d8e0()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_620db90
        UNREACHABLE_TRAP(0x620d8e0)
    }
}
