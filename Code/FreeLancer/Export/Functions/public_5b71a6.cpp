#include "Freelancer-PCH.h"

PROC_DECLARE(0x5b71a6, internal_5b71a6, public_5b71a6);
extern "C" NAKED register_t __cdecl internal_5b71a6()
{
    __asm
    {
        jmp dword ptr ds : [public_5c671c]
        UNREACHABLE_TRAP(0x5b71a6)
    }
}
