#include "Freelancer-PCH.h"

PROC_DECLARE(0x5b71fa, internal_5b71fa, public_5b71fa);
extern "C" NAKED register_t __cdecl internal_5b71fa()
{
    __asm
    {
        jmp dword ptr ds : [public_5c6754]
        UNREACHABLE_TRAP(0x5b71fa)
    }
}
