#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b6a3e0, internal_6b6a3e0, public_6b6a3e0);
extern "C" NAKED register_t __cdecl internal_6b6a3e0()
{
    __asm
    {
        jmp dword ptr ds : [public_6b6b1d0]
        UNREACHABLE_TRAP(0x6b6a3e0)
    }
}
