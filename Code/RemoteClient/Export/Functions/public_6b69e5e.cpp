#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b69e5e, internal_6b69e5e, public_6b69e5e);
extern "C" NAKED register_t __cdecl internal_6b69e5e()
{
    __asm
    {
        jmp dword ptr ds : [public_6b6b270]
        UNREACHABLE_TRAP(0x6b69e5e)
    }
}
