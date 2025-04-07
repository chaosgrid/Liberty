#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b3c580, internal_6b3c580, public_6b3c580);
extern "C" NAKED register_t __cdecl internal_6b3c580()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6c058]
        mov dword ptr ds : [public_6b73dc4], eax
        ret 
        UNREACHABLE_TRAP(0x6b3c580)
    }
}
