#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bd9d70, internal_6bd9d70, public_6bd9d70);
extern "C" NAKED register_t __cdecl internal_6bd9d70()
{
    __asm
    {
        ret 8
        UNREACHABLE_TRAP(0x6bd9d70)
    }
}
