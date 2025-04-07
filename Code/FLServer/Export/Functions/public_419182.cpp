#include "FLServer-PCH.h"

PROC_DECLARE(0x419182, internal_419182, public_419182);
extern "C" NAKED register_t __cdecl internal_419182()
{
    __asm
    {
        jmp dword ptr ds : [public_41b2b0]
        UNREACHABLE_TRAP(0x419182)
    }
}
