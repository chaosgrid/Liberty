#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b6a080, internal_6b6a080, public_6b6a080);
extern "C" NAKED register_t __cdecl internal_6b6a080()
{
    __asm
    {
        jmp dword ptr ds : [public_6b6b01c]
        UNREACHABLE_TRAP(0x6b6a080)
    }
}
