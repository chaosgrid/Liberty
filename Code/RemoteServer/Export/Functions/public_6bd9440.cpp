#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bd9440, internal_6bd9440, public_6bd9440);
extern "C" NAKED register_t __cdecl internal_6bd9440()
{
    __asm
    {
        ret 4
        UNREACHABLE_TRAP(0x6bd9440)
    }
}
