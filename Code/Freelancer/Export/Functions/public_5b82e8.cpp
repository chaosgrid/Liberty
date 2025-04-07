#include "Freelancer-PCH.h"

PROC_DECLARE(0x5b82e8, internal_5b82e8, public_5b82e8);
extern "C" NAKED register_t __cdecl internal_5b82e8()
{
    __asm
    {
        jmp dword ptr ds : [public_5c6e60]
        UNREACHABLE_TRAP(0x5b82e8)
    }
}
