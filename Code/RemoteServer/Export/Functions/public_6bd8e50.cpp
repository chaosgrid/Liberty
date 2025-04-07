#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bd8e50, internal_6bd8e50, public_6bd8e50);
extern "C" NAKED register_t __cdecl internal_6bd8e50()
{
    __asm
    {
        ret 4
        UNREACHABLE_TRAP(0x6bd8e50)
    }
}
