#include "Freelancer-PCH.h"

PROC_DECLARE(0x5b71e8, internal_5b71e8, public_5b71e8);
extern "C" NAKED register_t __cdecl internal_5b71e8()
{
    __asm
    {
        jmp dword ptr ds : [public_5c6748]
        UNREACHABLE_TRAP(0x5b71e8)
    }
}
