#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b6a140, internal_6b6a140, public_6b6a140);
extern "C" NAKED register_t __cdecl internal_6b6a140()
{
    __asm
    {
        jmp dword ptr ds : [public_6b6b1f0]
        UNREACHABLE_TRAP(0x6b6a140)
    }
}
