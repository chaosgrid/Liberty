#include "Freelancer-PCH.h"

PROC_DECLARE(0x5b72a2, internal_5b72a2, public_5b72a2);
extern "C" NAKED register_t __cdecl internal_5b72a2()
{
    __asm
    {
        jmp dword ptr ds : [public_5c67c4]
        UNREACHABLE_TRAP(0x5b72a2)
    }
}
