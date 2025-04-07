#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b6a0b6, internal_6b6a0b6, public_6b6a0b6);
extern "C" NAKED register_t __cdecl internal_6b6a0b6()
{
    __asm
    {
        jmp dword ptr ds : [public_6b6b194]
        UNREACHABLE_TRAP(0x6b6a0b6)
    }
}
