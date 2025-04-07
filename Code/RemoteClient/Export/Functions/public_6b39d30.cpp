#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b39d30, internal_6b39d30, public_6b39d30);
extern "C" NAKED register_t __cdecl internal_6b39d30()
{
    __asm
    {
        ret 4
        UNREACHABLE_TRAP(0x6b39d30)
    }
}
