#include "Freelancer-PCH.h"

PROC_DECLARE(0x561d60, internal_561d60, public_561d60);
extern "C" NAKED register_t __cdecl internal_561d60()
{
    __asm
    {
        mov al, 0xFF
        mov byte ptr ds : [public_679b84], al
        mov byte ptr ds : [public_679b85], al
        mov byte ptr ds : [public_679b86], al
        mov byte ptr ds : [public_679b87], al
        ret 
        UNREACHABLE_TRAP(0x561d60)
    }
}
