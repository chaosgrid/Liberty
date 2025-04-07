#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bd9d60, internal_6bd9d60, public_6bd9d60);
extern "C" NAKED register_t __cdecl internal_6bd9d60()
{
    __asm
    {
        ret 8
        UNREACHABLE_TRAP(0x6bd9d60)
    }
}
