#include "Freelancer-PCH.h"

PROC_DECLARE(0x5b72fc, internal_5b72fc, public_5b72fc);
extern "C" NAKED register_t __cdecl internal_5b72fc()
{
    __asm
    {
        jmp dword ptr ds : [public_5c6868]
        UNREACHABLE_TRAP(0x5b72fc)
    }
}
