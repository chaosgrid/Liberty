#include "Freelancer-PCH.h"

PROC_DECLARE(0x52fba0, internal_52fba0, public_52fba0);
extern "C" NAKED register_t __cdecl internal_52fba0()
{
    __asm
    {
        mov al, 1
        ret 8
        UNREACHABLE_TRAP(0x52fba0)
    }
}
