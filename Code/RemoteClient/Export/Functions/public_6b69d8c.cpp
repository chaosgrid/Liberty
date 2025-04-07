#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b69d8c, internal_6b69d8c, public_6b69d8c);
extern "C" NAKED register_t __cdecl internal_6b69d8c()
{
    __asm
    {
        jmp dword ptr ds : [public_6b6b2fc]
        UNREACHABLE_TRAP(0x6b69d8c)
    }
}
