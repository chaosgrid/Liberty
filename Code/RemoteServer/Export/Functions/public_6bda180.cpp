#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bda180, internal_6bda180, public_6bda180);
extern "C" NAKED register_t __cdecl internal_6bda180()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        lea edx, ds:[eax+1]
        mov dword ptr ds : [ecx+4], edx
        ret 
        UNREACHABLE_TRAP(0x6bda180)
    }
}
