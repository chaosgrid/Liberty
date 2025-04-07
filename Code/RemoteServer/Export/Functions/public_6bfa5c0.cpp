#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bfa5c0, internal_6bfa5c0, public_6bfa5c0);
extern "C" NAKED register_t __cdecl internal_6bfa5c0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e2c0]
        mov dword ptr ds : [public_6c13f34], eax
        ret 
        UNREACHABLE_TRAP(0x6bfa5c0)
    }
}
