#include "Freelancer-PCH.h"

PROC_DECLARE(0x45ab40, internal_45ab40, public_45ab40);
extern "C" NAKED register_t __cdecl internal_45ab40()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5ce830]
        mov dword ptr ds : [public_66d38c], eax
        ret 
        UNREACHABLE_TRAP(0x45ab40)
    }
}
