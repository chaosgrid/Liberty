#include "THORN-PCH.h"

PROC_DECLARE(0x6f3a910, internal_6f3a910, public_6f3a910);
extern "C" NAKED register_t __cdecl internal_6f3a910()
{
    __asm
    {
        xor eax, eax
        ret 0xC
        UNREACHABLE_TRAP(0x6f3a910)
    }
}
