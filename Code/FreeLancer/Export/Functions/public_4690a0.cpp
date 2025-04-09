#include "Freelancer-PCH.h"

PROC_DECLARE(0x4690a0, internal_4690a0, public_4690a0);
extern "C" NAKED register_t __cdecl internal_4690a0()
{
    __asm
    {
        xor eax, eax
        mov word ptr ds : [public_66d3fc], ax
        mov byte ptr ds : [public_66d3fe], al
        mov byte ptr ds : [public_66d3ff], al
        ret 
        UNREACHABLE_TRAP(0x4690a0)
    }
}
