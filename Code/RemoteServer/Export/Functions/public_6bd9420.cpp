#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bd9420, internal_6bd9420, public_6bd9420);
extern "C" NAKED register_t __cdecl internal_6bd9420()
{
    __asm
    {
        ret 4
        UNREACHABLE_TRAP(0x6bd9420)
    }
}
