#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bfa5a0, internal_6bfa5a0, public_6bfa5a0);
extern "C" NAKED register_t __cdecl internal_6bfa5a0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e2bc]
        mov dword ptr ds : [public_6c13f38], eax
        ret 
        UNREACHABLE_TRAP(0x6bfa5a0)
    }
}
