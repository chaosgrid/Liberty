#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bfa5f0, internal_6bfa5f0, public_6bfa5f0);
extern "C" NAKED register_t __cdecl internal_6bfa5f0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e2d0]
        mov dword ptr ds : [public_6c13f44], eax
        ret 
        UNREACHABLE_TRAP(0x6bfa5f0)
    }
}
