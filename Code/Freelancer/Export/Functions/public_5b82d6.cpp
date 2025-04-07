#include "Freelancer-PCH.h"

PROC_DECLARE(0x5b82d6, internal_5b82d6, public_5b82d6);
extern "C" NAKED register_t __cdecl internal_5b82d6()
{
    __asm
    {
        jmp dword ptr ds : [public_5c6e6c]
        UNREACHABLE_TRAP(0x5b82d6)
    }
}
