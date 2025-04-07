#include "Freelancer-PCH.h"

PROC_DECLARE(0x5b7158, internal_5b7158, public_5b7158);
extern "C" NAKED register_t __cdecl internal_5b7158()
{
    __asm
    {
        jmp dword ptr ds : [public_5c66e8]
        UNREACHABLE_TRAP(0x5b7158)
    }
}
