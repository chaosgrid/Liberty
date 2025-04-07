#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b6a044, internal_6b6a044, public_6b6a044);
extern "C" NAKED register_t __cdecl internal_6b6a044()
{
    __asm
    {
        jmp dword ptr ds : [public_6b6b080]
        UNREACHABLE_TRAP(0x6b6a044)
    }
}
