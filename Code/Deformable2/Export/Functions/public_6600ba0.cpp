#include "Deformable2-PCH.h"

PROC_DECLARE(0x6600ba0, internal_6600ba0, public_6600ba0);
extern "C" NAKED register_t __cdecl internal_6600ba0()
{
    __asm
    {
        xor eax, eax
        ret 4
        UNREACHABLE_TRAP(0x6600ba0)
    }
}
