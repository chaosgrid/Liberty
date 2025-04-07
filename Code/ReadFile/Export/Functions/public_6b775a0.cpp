#include "ReadFile-PCH.h"

PROC_DECLARE(0x6b775a0, internal_6b775a0, public_6b775a0);
extern "C" NAKED register_t __cdecl internal_6b775a0()
{
    __asm
    {
        xor eax, eax
        ret 0x18
        UNREACHABLE_TRAP(0x6b775a0)
    }
}
