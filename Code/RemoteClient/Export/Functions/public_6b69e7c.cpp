#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b69e7c, internal_6b69e7c, public_6b69e7c);
extern "C" NAKED register_t __cdecl internal_6b69e7c()
{
    __asm
    {
        jmp dword ptr ds : [public_6b6b25c]
        UNREACHABLE_TRAP(0x6b69e7c)
    }
}
