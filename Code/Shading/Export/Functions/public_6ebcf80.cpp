#include "Shading-PCH.h"

PROC_DECLARE(0x6ebcf80, internal_6ebcf80, public_6ebcf80);
extern "C" NAKED register_t __cdecl internal_6ebcf80()
{
    __asm
    {
        xor eax, eax
        ret 0x20
        UNREACHABLE_TRAP(0x6ebcf80)
    }
}
