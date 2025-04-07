#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620da30);

PROC_DECLARE(0x620d9f0, internal_620d9f0, public_620d9f0);
extern "C" NAKED register_t __cdecl internal_620d9f0()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_620da30
        UNREACHABLE_TRAP(0x620d9f0)
    }
}
