#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c05630, internal_6c05630, public_6c05630);
extern "C" NAKED register_t __cdecl internal_6c05630()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e594]
        mov dword ptr ds : [public_6c14218], eax
        ret 
        UNREACHABLE_TRAP(0x6c05630)
    }
}
