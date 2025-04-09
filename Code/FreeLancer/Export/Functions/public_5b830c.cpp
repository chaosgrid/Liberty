#include "Freelancer-PCH.h"

PROC_DECLARE(0x5b830c, internal_5b830c, public_5b830c);
extern "C" NAKED register_t __cdecl internal_5b830c()
{
    __asm
    {
        jmp dword ptr ds : [public_5c6e84]
        UNREACHABLE_TRAP(0x5b830c)
    }
}
