#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bffc50, internal_6bffc50, public_6bffc50);
extern "C" NAKED register_t __cdecl internal_6bffc50()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e3f0]
        mov dword ptr ds : [public_6c1407c], eax
        ret 
        UNREACHABLE_TRAP(0x6bffc50)
    }
}
