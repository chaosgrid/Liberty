#include "FreeLancer-PCH.h"

PROC_DECLARE(0x53e440, internal_53e440, public_53e440);
extern "C" NAKED register_t __cdecl internal_53e440()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5df53c]
        mov dword ptr ds : [public_678a04], eax
        ret 
        UNREACHABLE_TRAP(0x53e440)
    }
}
