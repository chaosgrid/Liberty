#include "Freelancer-PCH.h"

PROC_DECLARE(0x431680, internal_431680, public_431680);
extern "C" NAKED register_t __cdecl internal_431680()
{
    __asm
    {
        lea eax, ds:[ecx+0x20]
        ret 
        UNREACHABLE_TRAP(0x431680)
    }
}
