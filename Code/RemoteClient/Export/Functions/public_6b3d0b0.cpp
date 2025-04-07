#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b3d0b0, internal_6b3d0b0, public_6b3d0b0);
extern "C" NAKED register_t __cdecl internal_6b3d0b0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6c098]
        mov dword ptr ds : [public_6b73de0], eax
        ret 
        UNREACHABLE_TRAP(0x6b3d0b0)
    }
}
