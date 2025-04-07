#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b59310, internal_6b59310, public_6b59310);
extern "C" NAKED register_t __cdecl internal_6b59310()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e584]
        mov dword ptr ds : [public_6b74150], eax
        ret 
        UNREACHABLE_TRAP(0x6b59310)
    }
}
