#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b69d9e, internal_6b69d9e, public_6b69d9e);
extern "C" NAKED register_t __cdecl internal_6b69d9e()
{
    __asm
    {
        jmp dword ptr ds : [public_6b6b2f0]
        UNREACHABLE_TRAP(0x6b69d9e)
    }
}
