#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623e4b0);

PROC_DECLARE(0x623e810, internal_623e810, public_623e810);
extern "C" NAKED register_t __cdecl internal_623e810()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_623e4b0
        UNREACHABLE_TRAP(0x623e810)
    }
}
