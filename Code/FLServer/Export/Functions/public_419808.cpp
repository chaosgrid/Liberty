#include "FLServer-PCH.h"

PROC_DECLARE(0x419808, internal_419808, public_419808);
extern "C" NAKED register_t __cdecl internal_419808()
{
    __asm
    {
        jmp dword ptr ds : [public_41bbc0]
        UNREACHABLE_TRAP(0x419808)
    }
}
