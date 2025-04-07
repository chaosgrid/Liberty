#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bf7310, internal_6bf7310, public_6bf7310);
extern "C" NAKED register_t __cdecl internal_6bf7310()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e16c]
        mov dword ptr ds : [public_6c13e34], eax
        ret 
        UNREACHABLE_TRAP(0x6bf7310)
    }
}
