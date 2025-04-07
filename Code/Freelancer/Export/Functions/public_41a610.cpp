#include "Freelancer-PCH.h"

PROC_DECLARE(0x41a610, internal_41a610, public_41a610);
extern "C" NAKED register_t __cdecl internal_41a610()
{
    __asm
    {
        mov dword ptr ds : [public_6166bc], offset public_5c9230
        mov dword ptr ds : [public_6166c0], 1
        ret 
        UNREACHABLE_TRAP(0x41a610)
    }
}
