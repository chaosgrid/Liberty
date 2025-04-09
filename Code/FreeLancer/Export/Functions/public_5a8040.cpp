#include "Freelancer-PCH.h"

PROC_DECLARE(0x5a8040, internal_5a8040, public_5a8040);
extern "C" NAKED register_t __cdecl internal_5a8040()
{
    __asm
    {
        mov word ptr ds : [public_67ea1c], 3
        mov byte ptr ds : [public_67ea1e], 1
        ret 
        UNREACHABLE_TRAP(0x5a8040)
    }
}
