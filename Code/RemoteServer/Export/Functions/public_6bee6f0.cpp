#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bee6f0, internal_6bee6f0, public_6bee6f0);
extern "C" NAKED register_t __cdecl internal_6bee6f0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0deb0]
        mov dword ptr ds : [public_6c13bec], eax
        ret 
        UNREACHABLE_TRAP(0x6bee6f0)
    }
}
