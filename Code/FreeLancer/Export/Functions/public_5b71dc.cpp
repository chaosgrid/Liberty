#include "Freelancer-PCH.h"

PROC_DECLARE(0x5b71dc, internal_5b71dc, public_5b71dc);
extern "C" NAKED register_t __cdecl internal_5b71dc()
{
    __asm
    {
        jmp dword ptr ds : [public_5c6740]
        UNREACHABLE_TRAP(0x5b71dc)
    }
}
