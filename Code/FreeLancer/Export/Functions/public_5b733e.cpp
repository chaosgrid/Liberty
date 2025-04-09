#include "Freelancer-PCH.h"

PROC_DECLARE(0x5b733e, internal_5b733e, public_5b733e);
extern "C" NAKED register_t __cdecl internal_5b733e()
{
    __asm
    {
        jmp dword ptr ds : [public_5c6a9c]
        UNREACHABLE_TRAP(0x5b733e)
    }
}
