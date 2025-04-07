#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bd9d80, internal_6bd9d80, public_6bd9d80);
extern "C" NAKED register_t __cdecl internal_6bd9d80()
{
    __asm
    {
        ret 4
        UNREACHABLE_TRAP(0x6bd9d80)
    }
}
