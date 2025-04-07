#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b49650, internal_6b49650, public_6b49650);
extern "C" NAKED register_t __cdecl internal_6b49650()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6ce44]
        mov dword ptr ds : [public_6b73f04], eax
        ret 
        UNREACHABLE_TRAP(0x6b49650)
    }
}
