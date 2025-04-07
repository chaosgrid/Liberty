#include "Freelancer-PCH.h"

PROC_DECLARE(0x43d160, internal_43d160, public_43d160);
extern "C" NAKED register_t __cdecl internal_43d160()
{
    __asm
    {
        mov al, 1
        ret 0xC
        UNREACHABLE_TRAP(0x43d160)
    }
}
