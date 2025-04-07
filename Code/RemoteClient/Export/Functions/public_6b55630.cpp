#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b55630, internal_6b55630, public_6b55630);
extern "C" NAKED register_t __cdecl internal_6b55630()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e488]
        mov dword ptr ds : [public_6b74090], eax
        ret 
        UNREACHABLE_TRAP(0x6b55630)
    }
}
