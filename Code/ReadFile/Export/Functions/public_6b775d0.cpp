#include "ReadFile-PCH.h"

PROC_DECLARE(0x6b775d0, internal_6b775d0, public_6b775d0);
extern "C" NAKED register_t __cdecl internal_6b775d0()
{
    __asm
    {
        xor eax, eax
        ret 0xC
        UNREACHABLE_TRAP(0x6b775d0)
    }
}
