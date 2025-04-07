#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bec3a0, internal_6bec3a0, public_6bec3a0);
extern "C" NAKED register_t __cdecl internal_6bec3a0()
{
    __asm
    {
        ret 4
        UNREACHABLE_TRAP(0x6bec3a0)
    }
}
