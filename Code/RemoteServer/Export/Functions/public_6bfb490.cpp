#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bfb490, internal_6bfb490, public_6bfb490);
extern "C" NAKED register_t __cdecl internal_6bfb490()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e2dc]
        mov dword ptr ds : [public_6c13f5c], eax
        ret 
        UNREACHABLE_TRAP(0x6bfb490)
    }
}
