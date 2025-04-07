#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b69e4c, internal_6b69e4c, public_6b69e4c);
extern "C" NAKED register_t __cdecl internal_6b69e4c()
{
    __asm
    {
        jmp dword ptr ds : [public_6b6b350]
        UNREACHABLE_TRAP(0x6b69e4c)
    }
}
