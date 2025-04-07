#include "Freelancer-PCH.h"

PROC_DECLARE(0x45e110, internal_45e110, public_45e110);
extern "C" NAKED register_t __cdecl internal_45e110()
{
    __asm
    {
        mov eax, dword ptr ds : [public_66d99d]
        and eax, 0xFFE0C387
        or eax, 0xE0C387
        mov byte ptr ds : [public_66d99c], 8
        mov dword ptr ds : [public_66d99d], eax
        ret 
        UNREACHABLE_TRAP(0x45e110)
    }
}
