#include "Freelancer-PCH.h"

PROC_DECLARE(0x5b7350, internal_5b7350, public_5b7350);
extern "C" NAKED register_t __cdecl internal_5b7350()
{
    __asm
    {
        jmp dword ptr ds : [public_5c6d30]
        UNREACHABLE_TRAP(0x5b7350)
    }
}
