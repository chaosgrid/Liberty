#include "Freelancer-PCH.h"

PROC_DECLARE(0x564ad0, internal_564ad0, public_564ad0);
extern "C" NAKED register_t __cdecl internal_564ad0()
{
    __asm
    {
        xor eax, eax
        mov dword ptr ds : [public_67bf90], eax
        mov byte ptr ds : [public_67bf94], al
        ret 
        UNREACHABLE_TRAP(0x564ad0)
    }
}
