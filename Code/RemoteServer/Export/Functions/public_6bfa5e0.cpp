#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bfa5e0, internal_6bfa5e0, public_6bfa5e0);
extern "C" NAKED register_t __cdecl internal_6bfa5e0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e2cc]
        mov dword ptr ds : [public_6c13f4c], eax
        ret 
        UNREACHABLE_TRAP(0x6bfa5e0)
    }
}
