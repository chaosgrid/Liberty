#include "Freelancer-PCH.h"

PROC_DECLARE(0x45e0d0, internal_45e0d0, public_45e0d0);
extern "C" NAKED register_t __cdecl internal_45e0d0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_66d9ad]
        and eax, 0xFFE0C387
        or eax, 0xE0C387
        mov byte ptr ds : [public_66d9ac], 0x18
        mov dword ptr ds : [public_66d9ad], eax
        ret 
        UNREACHABLE_TRAP(0x45e0d0)
    }
}
