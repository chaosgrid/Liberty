#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b6a08c, internal_6b6a08c, public_6b6a08c);
extern "C" NAKED register_t __cdecl internal_6b6a08c()
{
    __asm
    {
        jmp dword ptr ds : [public_6b6b024]
        UNREACHABLE_TRAP(0x6b6a08c)
    }
}
