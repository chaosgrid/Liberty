#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b69e1c, internal_6b69e1c, public_6b69e1c);
extern "C" NAKED register_t __cdecl internal_6b69e1c()
{
    __asm
    {
        jmp dword ptr ds : [public_6b6b29c]
        UNREACHABLE_TRAP(0x6b69e1c)
    }
}
