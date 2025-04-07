#include "Freelancer-PCH.h"

PROC_DECLARE(0x42ae30, internal_42ae30, public_42ae30);
extern "C" NAKED register_t __cdecl internal_42ae30()
{
    __asm
    {
        xor eax, eax
        mov al, byte ptr ds : [ecx+0x1B]
        and eax, 1
        ret 
        UNREACHABLE_TRAP(0x42ae30)
    }
}
