#include "Freelancer-PCH.h"

PROC_DECLARE(0x5a8060, internal_5a8060, public_5a8060);
extern "C" NAKED register_t __cdecl internal_5a8060()
{
    __asm
    {
        mov word ptr ds : [public_67ea18], 4
        mov byte ptr ds : [public_67ea1a], 1
        ret 
        UNREACHABLE_TRAP(0x5a8060)
    }
}
