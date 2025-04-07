#include "FLServer-PCH.h"

PROC_DECLARE(0x419700, internal_419700, public_419700);
extern "C" NAKED register_t __cdecl internal_419700()
{
    __asm
    {
        jmp dword ptr ds : [public_41b178]
        UNREACHABLE_TRAP(0x419700)
    }
}
