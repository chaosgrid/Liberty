#include "Freelancer-PCH.h"

PROC_DECLARE(0x5b72e4, internal_5b72e4, public_5b72e4);
extern "C" NAKED register_t __cdecl internal_5b72e4()
{
    __asm
    {
        jmp dword ptr ds : [public_5c6858]
        UNREACHABLE_TRAP(0x5b72e4)
    }
}
