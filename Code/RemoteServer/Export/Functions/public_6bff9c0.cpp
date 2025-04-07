#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bff9c0, internal_6bff9c0, public_6bff9c0);
extern "C" NAKED register_t __cdecl internal_6bff9c0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e3d8]
        mov dword ptr ds : [public_6c1405c], eax
        ret 
        UNREACHABLE_TRAP(0x6bff9c0)
    }
}
