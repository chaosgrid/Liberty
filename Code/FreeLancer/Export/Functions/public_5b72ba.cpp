#include "Freelancer-PCH.h"

PROC_DECLARE(0x5b72ba, internal_5b72ba, public_5b72ba);
extern "C" NAKED register_t __cdecl internal_5b72ba()
{
    __asm
    {
        jmp dword ptr ds : [public_5c67d4]
        UNREACHABLE_TRAP(0x5b72ba)
    }
}
