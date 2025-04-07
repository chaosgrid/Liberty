#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620e2d0);

PROC_DECLARE(0x620d880, internal_620d880, public_620d880);
extern "C" NAKED register_t __cdecl internal_620d880()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 0xC
        jmp public_620e2d0
        UNREACHABLE_TRAP(0x620d880)
    }
}
