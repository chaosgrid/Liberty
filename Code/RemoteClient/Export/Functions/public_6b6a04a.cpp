#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b6a04a, internal_6b6a04a, public_6b6a04a);
extern "C" NAKED register_t __cdecl internal_6b6a04a()
{
    __asm
    {
        jmp dword ptr ds : [public_6b6b038]
        UNREACHABLE_TRAP(0x6b6a04a)
    }
}
