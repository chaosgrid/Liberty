#include "SoundManager-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ee1750);
CLANG_FORWARD_PROC_SYMBOL(public_6ee17e0);

PROC_DECLARE(0x6ee1740, internal_6ee1740, public_6ee1740);
extern "C" NAKED register_t __cdecl internal_6ee1740()
{
    __asm
    {
        call public_6ee1750
        jmp public_6ee17e0
        UNREACHABLE_TRAP(0x6ee1740)
    }
}
