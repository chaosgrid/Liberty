#include "Freelancer-PCH.h"

PROC_DECLARE(0x43d8a0, internal_43d8a0, public_43d8a0);
extern "C" NAKED register_t __cdecl internal_43d8a0()
{
    __asm
    {
        xor al, al
        ret 8
        UNREACHABLE_TRAP(0x43d8a0)
    }
}
