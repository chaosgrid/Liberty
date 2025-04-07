#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b6a0aa, internal_6b6a0aa, public_6b6a0aa);
extern "C" NAKED register_t __cdecl internal_6b6a0aa()
{
    __asm
    {
        jmp dword ptr ds : [public_6b6b17c]
        UNREACHABLE_TRAP(0x6b6a0aa)
    }
}
