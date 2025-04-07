#include "Freelancer-PCH.h"

PROC_DECLARE(0x5b7308, internal_5b7308, public_5b7308);
extern "C" NAKED register_t __cdecl internal_5b7308()
{
    __asm
    {
        jmp dword ptr ds : [public_5c6870]
        UNREACHABLE_TRAP(0x5b7308)
    }
}
