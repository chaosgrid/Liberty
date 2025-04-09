#include "Freelancer-PCH.h"

PROC_DECLARE(0x5b70e0, internal_5b70e0, public_5b70e0);
extern "C" NAKED register_t __cdecl internal_5b70e0()
{
    __asm
    {
        jmp dword ptr ds : [public_5c6d08]
        UNREACHABLE_TRAP(0x5b70e0)
    }
}
