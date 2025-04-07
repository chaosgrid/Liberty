#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b53650, internal_6b53650, public_6b53650);
extern "C" NAKED register_t __cdecl internal_6b53650()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e3f0]
        mov dword ptr ds : [public_6b73fbc], eax
        ret 
        UNREACHABLE_TRAP(0x6b53650)
    }
}
