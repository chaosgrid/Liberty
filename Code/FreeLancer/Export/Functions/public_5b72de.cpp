#include "Freelancer-PCH.h"

PROC_DECLARE(0x5b72de, internal_5b72de, public_5b72de);
extern "C" NAKED register_t __cdecl internal_5b72de()
{
    __asm
    {
        jmp dword ptr ds : [public_5c6854]
        UNREACHABLE_TRAP(0x5b72de)
    }
}
