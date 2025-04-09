#include "Freelancer-PCH.h"

PROC_DECLARE(0x5b7116, internal_5b7116, public_5b7116);
extern "C" NAKED register_t __cdecl internal_5b7116()
{
    __asm
    {
        jmp dword ptr ds : [public_5c66bc]
        UNREACHABLE_TRAP(0x5b7116)
    }
}
