#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b6a008, internal_6b6a008, public_6b6a008);
extern "C" NAKED register_t __cdecl internal_6b6a008()
{
    __asm
    {
        jmp dword ptr ds : [public_6b6b098]
        UNREACHABLE_TRAP(0x6b6a008)
    }
}
