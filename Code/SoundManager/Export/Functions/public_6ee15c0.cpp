#include "SoundManager-PCH.h"

PROC_DECLARE(0x6ee15c0, internal_6ee15c0, public_6ee15c0);
extern "C" NAKED register_t __cdecl internal_6ee15c0()
{
    __asm
    {
        mov al, 1
        ret 4
        UNREACHABLE_TRAP(0x6ee15c0)
    }
}
