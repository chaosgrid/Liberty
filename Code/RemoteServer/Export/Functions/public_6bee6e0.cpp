#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bee6e0, internal_6bee6e0, public_6bee6e0);
extern "C" NAKED register_t __cdecl internal_6bee6e0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0deb0]
        mov dword ptr ds : [public_6c13be8], eax
        ret 
        UNREACHABLE_TRAP(0x6bee6e0)
    }
}
