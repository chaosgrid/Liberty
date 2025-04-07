#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b6a062, internal_6b6a062, public_6b6a062);
extern "C" NAKED register_t __cdecl internal_6b6a062()
{
    __asm
    {
        jmp dword ptr ds : [public_6b6b008]
        UNREACHABLE_TRAP(0x6b6a062)
    }
}
