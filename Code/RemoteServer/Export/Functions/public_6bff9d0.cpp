#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bff9d0, internal_6bff9d0, public_6bff9d0);
extern "C" NAKED register_t __cdecl internal_6bff9d0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e3dc]
        mov dword ptr ds : [public_6c14054], eax
        ret 
        UNREACHABLE_TRAP(0x6bff9d0)
    }
}
