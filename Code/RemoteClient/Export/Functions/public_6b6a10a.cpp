#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b6a10a, internal_6b6a10a, public_6b6a10a);
extern "C" NAKED register_t __cdecl internal_6b6a10a()
{
    __asm
    {
        jmp dword ptr ds : [public_6b6b15c]
        UNREACHABLE_TRAP(0x6b6a10a)
    }
}
