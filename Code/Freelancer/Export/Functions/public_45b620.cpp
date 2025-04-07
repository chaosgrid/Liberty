#include "Freelancer-PCH.h"

PROC_DECLARE(0x45b620, internal_45b620, public_45b620);
extern "C" NAKED register_t __cdecl internal_45b620()
{
    __asm
    {
        xor eax, eax
        mov word ptr ds : [public_66d3dc], ax
        mov byte ptr ds : [public_66d3de], al
        ret 
        UNREACHABLE_TRAP(0x45b620)
    }
}
