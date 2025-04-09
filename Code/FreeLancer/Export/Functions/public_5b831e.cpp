#include "Freelancer-PCH.h"

PROC_DECLARE(0x5b831e, internal_5b831e, public_5b831e);
extern "C" NAKED register_t __cdecl internal_5b831e()
{
    __asm
    {
        jmp dword ptr ds : [public_5c6e90]
        UNREACHABLE_TRAP(0x5b831e)
    }
}
