#include "ReadFile-PCH.h"

PROC_DECLARE(0x6b775b0, internal_6b775b0, public_6b775b0);
extern "C" NAKED register_t __cdecl internal_6b775b0()
{
    __asm
    {
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x6b775b0)
    }
}
