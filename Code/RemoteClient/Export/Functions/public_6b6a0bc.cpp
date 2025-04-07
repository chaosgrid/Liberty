#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b6a0bc, internal_6b6a0bc, public_6b6a0bc);
extern "C" NAKED register_t __cdecl internal_6b6a0bc()
{
    __asm
    {
        jmp dword ptr ds : [public_6b6b150]
        UNREACHABLE_TRAP(0x6b6a0bc)
    }
}
