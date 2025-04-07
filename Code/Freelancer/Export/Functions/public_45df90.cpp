#include "Freelancer-PCH.h"

PROC_DECLARE(0x45df90, internal_45df90, public_45df90);
extern "C" NAKED register_t __cdecl internal_45df90()
{
    __asm
    {
        mov eax, dword ptr ds : [public_66d9fd]
        and eax, 0xFFE0C387
        or eax, 0xE0C387
        mov byte ptr ds : [public_66d9fc], 0
        mov dword ptr ds : [public_66d9fd], eax
        ret 
        UNREACHABLE_TRAP(0x45df90)
    }
}
