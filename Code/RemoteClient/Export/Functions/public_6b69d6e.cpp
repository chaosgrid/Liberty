#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b69d6e, internal_6b69d6e, public_6b69d6e);
extern "C" NAKED register_t __cdecl internal_6b69d6e()
{
    __asm
    {
        jmp dword ptr ds : [public_6b6b368]
        UNREACHABLE_TRAP(0x6b69d6e)
    }
}
