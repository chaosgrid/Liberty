#include "FLServer-PCH.h"

PROC_DECLARE(0x418db0, internal_418db0, public_418db0);
extern "C" NAKED register_t __cdecl internal_418db0()
{
    __asm
    {
        jmp dword ptr ds : [public_41b5c8]
        UNREACHABLE_TRAP(0x418db0)
    }
}
