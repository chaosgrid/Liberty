#include "RendComp-PCH.h"

PROC_DECLARE(0x6c2c2d0, internal_6c2c2d0, public_6c2c2d0);
extern "C" NAKED register_t __cdecl internal_6c2c2d0()
{
    __asm
    {
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x6c2c2d0)
    }
}
