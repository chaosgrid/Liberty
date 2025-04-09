#include "Freelancer-PCH.h"

PROC_DECLARE(0x53d4f0, internal_53d4f0, public_53d4f0);
extern "C" NAKED register_t __cdecl internal_53d4f0()
{
    __asm
    {
        ret 0x10
        UNREACHABLE_TRAP(0x53d4f0)
    }
}
