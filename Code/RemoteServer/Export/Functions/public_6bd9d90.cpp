#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bd9d90, internal_6bd9d90, public_6bd9d90);
extern "C" NAKED register_t __cdecl internal_6bd9d90()
{
    __asm
    {
        ret 4
        UNREACHABLE_TRAP(0x6bd9d90)
    }
}
