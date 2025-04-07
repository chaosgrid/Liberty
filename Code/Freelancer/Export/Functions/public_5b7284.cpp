#include "Freelancer-PCH.h"

PROC_DECLARE(0x5b7284, internal_5b7284, public_5b7284);
extern "C" NAKED register_t __cdecl internal_5b7284()
{
    __asm
    {
        jmp dword ptr ds : [public_5c67b0]
        UNREACHABLE_TRAP(0x5b7284)
    }
}
