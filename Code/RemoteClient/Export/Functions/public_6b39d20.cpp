#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b39d20, internal_6b39d20, public_6b39d20);
extern "C" NAKED register_t __cdecl internal_6b39d20()
{
    __asm
    {
        ret 8
        UNREACHABLE_TRAP(0x6b39d20)
    }
}
