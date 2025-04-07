#include "Freelancer-PCH.h"

PROC_DECLARE(0x5b7134, internal_5b7134, public_5b7134);
extern "C" NAKED register_t __cdecl internal_5b7134()
{
    __asm
    {
        jmp dword ptr ds : [public_5c66d0]
        UNREACHABLE_TRAP(0x5b7134)
    }
}
