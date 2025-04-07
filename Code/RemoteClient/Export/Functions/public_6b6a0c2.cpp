#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b6a0c2, internal_6b6a0c2, public_6b6a0c2);
extern "C" NAKED register_t __cdecl internal_6b6a0c2()
{
    __asm
    {
        jmp dword ptr ds : [public_6b6b130]
        UNREACHABLE_TRAP(0x6b6a0c2)
    }
}
