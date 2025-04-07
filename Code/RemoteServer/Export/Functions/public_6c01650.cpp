#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c01650, internal_6c01650, public_6c01650);
extern "C" NAKED register_t __cdecl internal_6c01650()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e448]
        mov dword ptr ds : [public_6c140e4], eax
        ret 
        UNREACHABLE_TRAP(0x6c01650)
    }
}
