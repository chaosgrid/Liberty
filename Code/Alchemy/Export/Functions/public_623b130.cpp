#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623b3d0);

PROC_DECLARE(0x623b130, internal_623b130, public_623b130);
extern "C" NAKED register_t __cdecl internal_623b130()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 0xC
        jmp public_623b3d0
        UNREACHABLE_TRAP(0x623b130)
    }
}
