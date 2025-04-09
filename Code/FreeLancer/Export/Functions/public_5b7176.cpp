#include "Freelancer-PCH.h"

PROC_DECLARE(0x5b7176, internal_5b7176, public_5b7176);
extern "C" NAKED register_t __cdecl internal_5b7176()
{
    __asm
    {
        jmp dword ptr ds : [public_5c66fc]
        UNREACHABLE_TRAP(0x5b7176)
    }
}
