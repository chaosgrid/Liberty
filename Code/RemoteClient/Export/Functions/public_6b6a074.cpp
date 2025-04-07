#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b6a074, internal_6b6a074, public_6b6a074);
extern "C" NAKED register_t __cdecl internal_6b6a074()
{
    __asm
    {
        jmp dword ptr ds : [public_6b6b014]
        UNREACHABLE_TRAP(0x6b6a074)
    }
}
