#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623ad10);

PROC_DECLARE(0x623af90, internal_623af90, public_623af90);
extern "C" NAKED register_t __cdecl internal_623af90()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 0xC
        jmp public_623ad10
        UNREACHABLE_TRAP(0x623af90)
    }
}
