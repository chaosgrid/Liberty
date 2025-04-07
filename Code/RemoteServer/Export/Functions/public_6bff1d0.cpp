#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bff1d0, internal_6bff1d0, public_6bff1d0);
extern "C" NAKED register_t __cdecl internal_6bff1d0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e3cc]
        mov dword ptr ds : [public_6c14048], eax
        ret 
        UNREACHABLE_TRAP(0x6bff1d0)
    }
}
