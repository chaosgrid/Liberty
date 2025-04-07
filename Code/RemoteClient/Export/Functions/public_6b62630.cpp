#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b62630, internal_6b62630, public_6b62630);
extern "C" NAKED register_t __cdecl internal_6b62630()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e8ec]
        mov dword ptr ds : [public_6b7444c], eax
        ret 
        UNREACHABLE_TRAP(0x6b62630)
    }
}
