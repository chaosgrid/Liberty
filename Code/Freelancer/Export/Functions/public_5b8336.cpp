#include "Freelancer-PCH.h"

PROC_DECLARE(0x5b8336, internal_5b8336, public_5b8336);
extern "C" NAKED register_t __cdecl internal_5b8336()
{
    __asm
    {
        jmp dword ptr ds : [public_5c6ea0]
        UNREACHABLE_TRAP(0x5b8336)
    }
}
