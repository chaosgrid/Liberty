#include "Freelancer-PCH.h"

PROC_DECLARE(0x42add0, internal_42add0, public_42add0);
extern "C" NAKED register_t __cdecl internal_42add0()
{
    __asm
    {
        xor eax, eax
        mov al, byte ptr ds : [ecx+0x1A]
        and eax, 0xF
        ret 
        UNREACHABLE_TRAP(0x42add0)
    }
}
