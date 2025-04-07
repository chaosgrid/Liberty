#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bff1f0, internal_6bff1f0, public_6bff1f0);
extern "C" NAKED register_t __cdecl internal_6bff1f0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e3d0]
        mov dword ptr ds : [public_6c14044], eax
        ret 
        UNREACHABLE_TRAP(0x6bff1f0)
    }
}
