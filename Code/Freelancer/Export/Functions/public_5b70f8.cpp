#include "Freelancer-PCH.h"

PROC_DECLARE(0x5b70f8, internal_5b70f8, public_5b70f8);
extern "C" NAKED register_t __cdecl internal_5b70f8()
{
    __asm
    {
        jmp dword ptr ds : [public_5c66a8]
        UNREACHABLE_TRAP(0x5b70f8)
    }
}
