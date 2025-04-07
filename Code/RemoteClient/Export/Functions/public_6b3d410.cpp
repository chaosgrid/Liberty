#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b3d410, internal_6b3d410, public_6b3d410);
extern "C" NAKED register_t __cdecl internal_6b3d410()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6c0b8]
        mov dword ptr ds : [public_6b73df0], eax
        ret 
        UNREACHABLE_TRAP(0x6b3d410)
    }
}
