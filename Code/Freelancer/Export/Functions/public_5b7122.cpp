#include "Freelancer-PCH.h"

PROC_DECLARE(0x5b7122, internal_5b7122, public_5b7122);
extern "C" NAKED register_t __cdecl internal_5b7122()
{
    __asm
    {
        jmp dword ptr ds : [public_5c66c4]
        UNREACHABLE_TRAP(0x5b7122)
    }
}
