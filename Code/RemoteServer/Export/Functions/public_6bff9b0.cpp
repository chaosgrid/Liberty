#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bff9b0, internal_6bff9b0, public_6bff9b0);
extern "C" NAKED register_t __cdecl internal_6bff9b0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e3d8]
        mov dword ptr ds : [public_6c14058], eax
        ret 
        UNREACHABLE_TRAP(0x6bff9b0)
    }
}
