#include "FreeLancer-PCH.h"

PROC_DECLARE(0x41a630, internal_41a630, public_41a630);
extern "C" NAKED register_t __cdecl internal_41a630()
{
    __asm
    {
        xor eax, eax
        ret 0x10
        UNREACHABLE_TRAP(0x41a630)
    }
}
