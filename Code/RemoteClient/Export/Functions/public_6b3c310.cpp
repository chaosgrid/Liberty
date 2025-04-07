#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b3c310, internal_6b3c310, public_6b3c310);
extern "C" NAKED register_t __cdecl internal_6b3c310()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6c038]
        mov dword ptr ds : [public_6b73db0], eax
        ret 
        UNREACHABLE_TRAP(0x6b3c310)
    }
}
