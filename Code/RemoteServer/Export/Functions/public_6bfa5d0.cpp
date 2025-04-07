#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bfa5d0, internal_6bfa5d0, public_6bfa5d0);
extern "C" NAKED register_t __cdecl internal_6bfa5d0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e2cc]
        mov dword ptr ds : [public_6c13f48], eax
        ret 
        UNREACHABLE_TRAP(0x6bfa5d0)
    }
}
