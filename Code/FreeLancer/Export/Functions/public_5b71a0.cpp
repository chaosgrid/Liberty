#include "Freelancer-PCH.h"

PROC_DECLARE(0x5b71a0, internal_5b71a0, public_5b71a0);
extern "C" NAKED register_t __cdecl internal_5b71a0()
{
    __asm
    {
        jmp dword ptr ds : [public_5c6718]
        UNREACHABLE_TRAP(0x5b71a0)
    }
}
