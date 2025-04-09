#include "Freelancer-PCH.h"

PROC_DECLARE(0x5b0810, internal_5b0810, public_5b0810);
extern "C" NAKED register_t __cdecl internal_5b0810()
{
    __asm
    {
        mov byte ptr ds : [public_67ea78], 0
        ret 
        UNREACHABLE_TRAP(0x5b0810)
    }
}
