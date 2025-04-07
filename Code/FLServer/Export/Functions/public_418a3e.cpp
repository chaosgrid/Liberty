#include "FLServer-PCH.h"

PROC_DECLARE(0x418a3e, internal_418a3e, public_418a3e);
extern "C" NAKED register_t __cdecl internal_418a3e()
{
    __asm
    {
        jmp dword ptr ds : [public_41b370]
        UNREACHABLE_TRAP(0x418a3e)
    }
}
