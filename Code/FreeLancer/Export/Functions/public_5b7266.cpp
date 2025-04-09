#include "Freelancer-PCH.h"

PROC_DECLARE(0x5b7266, internal_5b7266, public_5b7266);
extern "C" NAKED register_t __cdecl internal_5b7266()
{
    __asm
    {
        jmp dword ptr ds : [public_5c679c]
        UNREACHABLE_TRAP(0x5b7266)
    }
}
