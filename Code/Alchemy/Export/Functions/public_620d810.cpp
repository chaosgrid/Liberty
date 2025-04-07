#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620e390);

PROC_DECLARE(0x620d810, internal_620d810, public_620d810);
extern "C" NAKED register_t __cdecl internal_620d810()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 0xC
        jmp public_620e390
        UNREACHABLE_TRAP(0x620d810)
    }
}
