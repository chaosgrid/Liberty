#include "Freelancer-PCH.h"

PROC_DECLARE(0x5b71d0, internal_5b71d0, public_5b71d0);
extern "C" NAKED register_t __cdecl internal_5b71d0()
{
    __asm
    {
        jmp dword ptr ds : [public_5c6738]
        UNREACHABLE_TRAP(0x5b71d0)
    }
}
