#include "FLServer-PCH.h"

PROC_DECLARE(0x418cea, internal_418cea, public_418cea);
extern "C" NAKED register_t __cdecl internal_418cea()
{
    __asm
    {
        jmp dword ptr ds : [public_41b544]
        UNREACHABLE_TRAP(0x418cea)
    }
}
