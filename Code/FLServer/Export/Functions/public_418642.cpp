#include "FLServer-PCH.h"

PROC_DECLARE(0x418642, internal_418642, public_418642);
extern "C" NAKED register_t __cdecl internal_418642()
{
    __asm
    {
        jmp dword ptr ds : [public_41b098]
        UNREACHABLE_TRAP(0x418642)
    }
}
