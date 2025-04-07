#include "FLServer-PCH.h"

PROC_DECLARE(0x419212, internal_419212, public_419212);
extern "C" NAKED register_t __cdecl internal_419212()
{
    __asm
    {
        jmp dword ptr ds : [public_41b244]
        UNREACHABLE_TRAP(0x419212)
    }
}
