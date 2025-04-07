#include "ReadFile-PCH.h"

PROC_DECLARE(0x6b776b0, internal_6b776b0, public_6b776b0);
extern "C" NAKED register_t __cdecl internal_6b776b0()
{
    __asm
    {
        or eax, 0xFFFFFFFF
        ret 0x18
        UNREACHABLE_TRAP(0x6b776b0)
    }
}
