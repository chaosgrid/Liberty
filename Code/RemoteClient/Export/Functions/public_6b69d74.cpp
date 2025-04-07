#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b69d74, internal_6b69d74, public_6b69d74);
extern "C" NAKED register_t __cdecl internal_6b69d74()
{
    __asm
    {
        jmp dword ptr ds : [public_6b6b364]
        UNREACHABLE_TRAP(0x6b69d74)
    }
}
