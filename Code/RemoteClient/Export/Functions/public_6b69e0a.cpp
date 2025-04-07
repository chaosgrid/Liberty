#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b69e0a, internal_6b69e0a, public_6b69e0a);
extern "C" NAKED register_t __cdecl internal_6b69e0a()
{
    __asm
    {
        jmp dword ptr ds : [public_6b6b2a8]
        UNREACHABLE_TRAP(0x6b69e0a)
    }
}
