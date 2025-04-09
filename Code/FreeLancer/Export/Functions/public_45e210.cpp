#include "Freelancer-PCH.h"

PROC_DECLARE(0x45e210, internal_45e210, public_45e210);
extern "C" NAKED register_t __cdecl internal_45e210()
{
    __asm
    {
        mov eax, dword ptr ds : [public_66d95d]
        and eax, 0xFFE0C387
        or eax, 0xE0C387
        mov byte ptr ds : [public_66d95c], 0
        mov dword ptr ds : [public_66d95d], eax
        ret 
        UNREACHABLE_TRAP(0x45e210)
    }
}
