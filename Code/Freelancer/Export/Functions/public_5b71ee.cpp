#include "Freelancer-PCH.h"

PROC_DECLARE(0x5b71ee, internal_5b71ee, public_5b71ee);
extern "C" NAKED register_t __cdecl internal_5b71ee()
{
    __asm
    {
        jmp dword ptr ds : [public_5c674c]
        UNREACHABLE_TRAP(0x5b71ee)
    }
}
