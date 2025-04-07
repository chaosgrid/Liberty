#include "Freelancer-PCH.h"

PROC_DECLARE(0x40f360, internal_40f360, public_40f360);
extern "C" NAKED register_t __cdecl internal_40f360()
{
    __asm
    {
        mov eax, 1
        ret 4
        UNREACHABLE_TRAP(0x40f360)
    }
}
