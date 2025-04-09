#include "Freelancer-PCH.h"

PROC_DECLARE(0x5b72d2, internal_5b72d2, public_5b72d2);
extern "C" NAKED register_t __cdecl internal_5b72d2()
{
    __asm
    {
        jmp dword ptr ds : [public_5c67e4]
        UNREACHABLE_TRAP(0x5b72d2)
    }
}
