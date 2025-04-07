#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b39e20, internal_6b39e20, public_6b39e20);
extern "C" NAKED register_t __cdecl internal_6b39e20()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        lea edx, ds:[eax+1]
        mov dword ptr ds : [ecx+4], edx
        ret 
        UNREACHABLE_TRAP(0x6b39e20)
    }
}
