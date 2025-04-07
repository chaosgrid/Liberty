#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b6a03e, internal_6b6a03e, public_6b6a03e);
extern "C" NAKED register_t __cdecl internal_6b6a03e()
{
    __asm
    {
        jmp dword ptr ds : [public_6b6b04c]
        UNREACHABLE_TRAP(0x6b6a03e)
    }
}
