#include "Freelancer-PCH.h"

PROC_DECLARE(0x4c7360, internal_4c7360, public_4c7360);
extern "C" NAKED register_t __cdecl internal_4c7360()
{
    __asm
    {
        xor eax, eax
        mov dword ptr ds : [public_673408], eax
        mov byte ptr ds : [public_67340c], al
        ret 
        UNREACHABLE_TRAP(0x4c7360)
    }
}
