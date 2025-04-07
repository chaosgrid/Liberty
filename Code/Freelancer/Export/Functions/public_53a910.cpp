#include "Freelancer-PCH.h"

PROC_DECLARE(0x53a910, internal_53a910, public_53a910);
extern "C" NAKED register_t __cdecl internal_53a910()
{
    __asm
    {
        mov eax, 0xFFFFFFFD
        ret 0xC
        UNREACHABLE_TRAP(0x53a910)
    }
}
