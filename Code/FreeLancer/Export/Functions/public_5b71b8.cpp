#include "Freelancer-PCH.h"

PROC_DECLARE(0x5b71b8, internal_5b71b8, public_5b71b8);
extern "C" NAKED register_t __cdecl internal_5b71b8()
{
    __asm
    {
        jmp dword ptr ds : [public_5c6728]
        UNREACHABLE_TRAP(0x5b71b8)
    }
}
