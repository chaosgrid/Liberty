#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b6a06e, internal_6b6a06e, public_6b6a06e);
extern "C" NAKED register_t __cdecl internal_6b6a06e()
{
    __asm
    {
        jmp dword ptr ds : [public_6b6b010]
        UNREACHABLE_TRAP(0x6b6a06e)
    }
}
