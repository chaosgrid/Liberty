#include "FreeLancer-PCH.h"

PROC_DECLARE(0x5374a0, internal_5374a0, public_5374a0);
extern "C" NAKED register_t __cdecl internal_5374a0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5de694]
        mov dword ptr ds : [public_6789b4], eax
        ret 
        UNREACHABLE_TRAP(0x5374a0)
    }
}
