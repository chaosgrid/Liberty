#include "Freelancer-PCH.h"

PROC_DECLARE(0x4f6ab0, internal_4f6ab0, public_4f6ab0);
extern "C" NAKED register_t __cdecl internal_4f6ab0()
{
    __asm
    {
        or eax, 0xFFFFFFFF
        ret 8
        UNREACHABLE_TRAP(0x4f6ab0)
    }
}
