#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b6a026, internal_6b6a026, public_6b6a026);
extern "C" NAKED register_t __cdecl internal_6b6a026()
{
    __asm
    {
        jmp dword ptr ds : [public_6b6b074]
        UNREACHABLE_TRAP(0x6b6a026)
    }
}
