#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620e3f0);

PROC_DECLARE(0x620d860, internal_620d860, public_620d860);
extern "C" NAKED register_t __cdecl internal_620d860()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 0xC
        jmp public_620e3f0
        UNREACHABLE_TRAP(0x620d860)
    }
}
