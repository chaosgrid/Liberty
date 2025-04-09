#include "Freelancer-PCH.h"

PROC_DECLARE(0x5b7296, internal_5b7296, public_5b7296);
extern "C" NAKED register_t __cdecl internal_5b7296()
{
    __asm
    {
        jmp dword ptr ds : [public_5c67bc]
        UNREACHABLE_TRAP(0x5b7296)
    }
}
