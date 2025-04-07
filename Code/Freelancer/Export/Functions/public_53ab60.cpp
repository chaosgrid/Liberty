#include "Freelancer-PCH.h"

PROC_DECLARE(0x53ab60, internal_53ab60, public_53ab60);
extern "C" NAKED register_t __cdecl internal_53ab60()
{
    __asm
    {
        xor eax, eax
        mov word ptr ds : [public_6789e8], ax
        mov byte ptr ds : [public_6789ea], al
        ret 
        UNREACHABLE_TRAP(0x53ab60)
    }
}
