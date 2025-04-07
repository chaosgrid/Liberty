#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b69d86, internal_6b69d86, public_6b69d86);
extern "C" NAKED register_t __cdecl internal_6b69d86()
{
    __asm
    {
        jmp dword ptr ds : [public_6b6b358]
        UNREACHABLE_TRAP(0x6b69d86)
    }
}
