#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bd9b20, internal_6bd9b20, public_6bd9b20);
extern "C" NAKED register_t __cdecl internal_6bd9b20()
{
    __asm
    {
        ret 4
        UNREACHABLE_TRAP(0x6bd9b20)
    }
}
