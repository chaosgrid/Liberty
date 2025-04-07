#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620e1b0);

PROC_DECLARE(0x620d780, internal_620d780, public_620d780);
extern "C" NAKED register_t __cdecl internal_620d780()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 0xC
        jmp public_620e1b0
        UNREACHABLE_TRAP(0x620d780)
    }
}
