#include "Freelancer-PCH.h"

PROC_DECLARE(0x5b72f6, internal_5b72f6, public_5b72f6);
extern "C" NAKED register_t __cdecl internal_5b72f6()
{
    __asm
    {
        jmp dword ptr ds : [public_5c6864]
        UNREACHABLE_TRAP(0x5b72f6)
    }
}
