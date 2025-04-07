#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b3d0d0, internal_6b3d0d0, public_6b3d0d0);
extern "C" NAKED register_t __cdecl internal_6b3d0d0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6c09c]
        mov dword ptr ds : [public_6b73ddc], eax
        ret 
        UNREACHABLE_TRAP(0x6b3d0d0)
    }
}
