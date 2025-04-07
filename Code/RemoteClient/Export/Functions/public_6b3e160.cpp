#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b3e160, internal_6b3e160, public_6b3e160);
extern "C" NAKED register_t __cdecl internal_6b3e160()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6c0f8]
        mov dword ptr ds : [public_6b73e10], eax
        ret 
        UNREACHABLE_TRAP(0x6b3e160)
    }
}
