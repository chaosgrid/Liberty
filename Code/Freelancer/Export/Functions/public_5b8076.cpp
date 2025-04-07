#include "Freelancer-PCH.h"

PROC_DECLARE(0x5b8076, internal_5b8076, public_5b8076);
extern "C" NAKED register_t __cdecl internal_5b8076()
{
    __asm
    {
        jmp dword ptr ds : [public_5c711c]
        UNREACHABLE_TRAP(0x5b8076)
    }
}
