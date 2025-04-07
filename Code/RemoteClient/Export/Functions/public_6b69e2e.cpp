#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b69e2e, internal_6b69e2e, public_6b69e2e);
extern "C" NAKED register_t __cdecl internal_6b69e2e()
{
    __asm
    {
        jmp dword ptr ds : [public_6b6b290]
        UNREACHABLE_TRAP(0x6b69e2e)
    }
}
