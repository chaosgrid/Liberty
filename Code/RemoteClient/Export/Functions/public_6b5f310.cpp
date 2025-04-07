#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b5f310, internal_6b5f310, public_6b5f310);
extern "C" NAKED register_t __cdecl internal_6b5f310()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e774]
        mov dword ptr ds : [public_6b7432c], eax
        ret 
        UNREACHABLE_TRAP(0x6b5f310)
    }
}
