#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b3d0c0, internal_6b3d0c0, public_6b3d0c0);
extern "C" NAKED register_t __cdecl internal_6b3d0c0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6c098]
        mov dword ptr ds : [public_6b73de4], eax
        ret 
        UNREACHABLE_TRAP(0x6b3d0c0)
    }
}
