#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b6a11c, internal_6b6a11c, public_6b6a11c);
extern "C" NAKED register_t __cdecl internal_6b6a11c()
{
    __asm
    {
        jmp dword ptr ds : [public_6b6b168]
        UNREACHABLE_TRAP(0x6b6a11c)
    }
}
