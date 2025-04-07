#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b6a00e, internal_6b6a00e, public_6b6a00e);
extern "C" NAKED register_t __cdecl internal_6b6a00e()
{
    __asm
    {
        jmp dword ptr ds : [public_6b6b09c]
        UNREACHABLE_TRAP(0x6b6a00e)
    }
}
