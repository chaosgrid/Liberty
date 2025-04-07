#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b6a46c, internal_6b6a46c, public_6b6a46c);
extern "C" NAKED register_t __cdecl internal_6b6a46c()
{
    __asm
    {
        jmp dword ptr ds : [public_6b6b114]
        UNREACHABLE_TRAP(0x6b6a46c)
    }
}
