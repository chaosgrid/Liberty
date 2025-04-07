#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b6a0b0, internal_6b6a0b0, public_6b6a0b0);
extern "C" NAKED register_t __cdecl internal_6b6a0b0()
{
    __asm
    {
        jmp dword ptr ds : [public_6b6b178]
        UNREACHABLE_TRAP(0x6b6a0b0)
    }
}
