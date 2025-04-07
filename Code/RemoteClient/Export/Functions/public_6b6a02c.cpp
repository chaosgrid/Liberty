#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b6a02c, internal_6b6a02c, public_6b6a02c);
extern "C" NAKED register_t __cdecl internal_6b6a02c()
{
    __asm
    {
        jmp dword ptr ds : [public_6b6b048]
        UNREACHABLE_TRAP(0x6b6a02c)
    }
}
