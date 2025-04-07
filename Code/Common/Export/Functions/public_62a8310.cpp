#include "Common-PCH.h"

PROC_DECLARE(0x62a8310, internal_62a8310, public_62a8310);
extern "C" NAKED register_t __cdecl internal_62a8310()
{
    __asm
    {
        mov eax, dword ptr ds : [public_639e008]
        mov dword ptr ds : [public_63fc2cc], eax
        ret 
        UNREACHABLE_TRAP(0x62a8310)
    }
}
