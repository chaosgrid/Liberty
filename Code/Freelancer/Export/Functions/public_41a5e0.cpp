#include "Freelancer-PCH.h"

PROC_DECLARE(0x41a5e0, internal_41a5e0, public_41a5e0);
extern "C" NAKED register_t __cdecl internal_41a5e0()
{
    __asm
    {
        xor al, al
        ret 0x18
        UNREACHABLE_TRAP(0x41a5e0)
    }
}
