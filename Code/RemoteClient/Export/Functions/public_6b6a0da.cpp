#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b6a0da, internal_6b6a0da, public_6b6a0da);
extern "C" NAKED register_t __cdecl internal_6b6a0da()
{
    __asm
    {
        jmp dword ptr ds : [public_6b6b13c]
        UNREACHABLE_TRAP(0x6b6a0da)
    }
}
