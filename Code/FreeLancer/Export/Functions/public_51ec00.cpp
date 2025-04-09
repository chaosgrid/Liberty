#include "Freelancer-PCH.h"

PROC_DECLARE(0x51ec00, internal_51ec00, public_51ec00);
extern "C" NAKED register_t __cdecl internal_51ec00()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5dc354]
        mov dword ptr ds : [public_675370], eax
        ret 
        UNREACHABLE_TRAP(0x51ec00)
    }
}
