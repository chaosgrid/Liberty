#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b39d10, internal_6b39d10, public_6b39d10);
extern "C" NAKED register_t __cdecl internal_6b39d10()
{
    __asm
    {
        xor al, al
        ret 8
        UNREACHABLE_TRAP(0x6b39d10)
    }
}
