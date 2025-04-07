#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b6a47e, internal_6b6a47e, public_6b6a47e);
extern "C" NAKED register_t __cdecl internal_6b6a47e()
{
    __asm
    {
        jmp dword ptr ds : [public_6b6b108]
        UNREACHABLE_TRAP(0x6b6a47e)
    }
}
