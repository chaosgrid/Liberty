#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bda7a0, internal_6bda7a0, public_6bda7a0);
extern "C" NAKED register_t __cdecl internal_6bda7a0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0bad0]
        mov dword ptr ds : [public_6c13a68], eax
        ret 
        UNREACHABLE_TRAP(0x6bda7a0)
    }
}
