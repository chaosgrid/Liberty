#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b6a05c, internal_6b6a05c, public_6b6a05c);
extern "C" NAKED register_t __cdecl internal_6b6a05c()
{
    __asm
    {
        jmp dword ptr ds : [public_6b6b028]
        UNREACHABLE_TRAP(0x6b6a05c)
    }
}
