#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b6a14c, internal_6b6a14c, public_6b6a14c);
extern "C" NAKED register_t __cdecl internal_6b6a14c()
{
    __asm
    {
        jmp dword ptr ds : [public_6b6b1e8]
        UNREACHABLE_TRAP(0x6b6a14c)
    }
}
