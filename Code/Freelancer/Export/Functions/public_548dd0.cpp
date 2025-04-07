#include "Freelancer-PCH.h"

PROC_DECLARE(0x548dd0, internal_548dd0, public_548dd0);
extern "C" NAKED register_t __cdecl internal_548dd0()
{
    __asm
    {
        xor eax, eax
        mov word ptr ds : [public_679760], ax
        mov byte ptr ds : [public_679762], al
        ret 
        UNREACHABLE_TRAP(0x548dd0)
    }
}
