#include "Freelancer-PCH.h"

PROC_DECLARE(0x45e1d0, internal_45e1d0, public_45e1d0);
extern "C" NAKED register_t __cdecl internal_45e1d0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_66d96d]
        and eax, 0xFF52EAF5
        or eax, 0x52EAF5
        mov byte ptr ds : [public_66d96c], 8
        mov dword ptr ds : [public_66d96d], eax
        ret 
        UNREACHABLE_TRAP(0x45e1d0)
    }
}
