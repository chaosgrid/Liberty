#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b6a472, internal_6b6a472, public_6b6a472);
extern "C" NAKED register_t __cdecl internal_6b6a472()
{
    __asm
    {
        jmp dword ptr ds : [public_6b6b110]
        UNREACHABLE_TRAP(0x6b6a472)
    }
}
