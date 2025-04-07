#include "Freelancer-PCH.h"

PROC_DECLARE(0x53abb0, internal_53abb0, public_53abb0);
extern "C" NAKED register_t __cdecl internal_53abb0()
{
    __asm
    {
        mov word ptr ds : [public_6789dc], 2
        mov byte ptr ds : [public_6789de], 1
        ret 
        UNREACHABLE_TRAP(0x53abb0)
    }
}
