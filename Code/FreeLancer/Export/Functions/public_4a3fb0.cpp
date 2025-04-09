#include "Freelancer-PCH.h"

PROC_DECLARE(0x4a3fb0, internal_4a3fb0, public_4a3fb0);
extern "C" NAKED register_t __cdecl internal_4a3fb0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5d3fa8]
        mov dword ptr ds : [public_6720f8], eax
        ret 
        UNREACHABLE_TRAP(0x4a3fb0)
    }
}
