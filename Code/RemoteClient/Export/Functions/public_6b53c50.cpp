#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b53c50, internal_6b53c50, public_6b53c50);
extern "C" NAKED register_t __cdecl internal_6b53c50()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e408]
        mov dword ptr ds : [public_6b73fdc], eax
        ret 
        UNREACHABLE_TRAP(0x6b53c50)
    }
}
