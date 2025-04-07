#include "Freelancer-PCH.h"

PROC_DECLARE(0x5a7fe0, internal_5a7fe0, public_5a7fe0);
extern "C" NAKED register_t __cdecl internal_5a7fe0()
{
    __asm
    {
        mov word ptr ds : [public_67ea28], 0
        mov byte ptr ds : [public_67ea2a], 1
        ret 
        UNREACHABLE_TRAP(0x5a7fe0)
    }
}
