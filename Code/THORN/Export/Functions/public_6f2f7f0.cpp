#include "THORN-PCH.h"

PROC_DECLARE(0x6f2f7f0, internal_6f2f7f0, public_6f2f7f0);
extern "C" NAKED register_t __cdecl internal_6f2f7f0()
{
    __asm
    {
        xor eax, eax
        ret 4
        UNREACHABLE_TRAP(0x6f2f7f0)
    }
}
