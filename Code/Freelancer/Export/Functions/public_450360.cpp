#include "Freelancer-PCH.h"

PROC_DECLARE(0x450360, internal_450360, public_450360);
extern "C" NAKED register_t __cdecl internal_450360()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5cca74]
        mov dword ptr ds : [public_66d104], eax
        ret 
        UNREACHABLE_TRAP(0x450360)
    }
}
