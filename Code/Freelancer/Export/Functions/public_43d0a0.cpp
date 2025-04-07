#include "Freelancer-PCH.h"

PROC_DECLARE(0x43d0a0, internal_43d0a0, public_43d0a0);
extern "C" NAKED register_t __cdecl internal_43d0a0()
{
    __asm
    {
        mov eax, 1
        mov word ptr ds : [public_668798], ax
        mov byte ptr ds : [public_66879a], al
        ret 
        UNREACHABLE_TRAP(0x43d0a0)
    }
}
