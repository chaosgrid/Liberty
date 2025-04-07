#include "ReadFile-PCH.h"

PROC_DECLARE(0x6b776a0, internal_6b776a0, public_6b776a0);
extern "C" NAKED register_t __cdecl internal_6b776a0()
{
    __asm
    {
        or eax, 0xFFFFFFFF
        ret 0xC
        UNREACHABLE_TRAP(0x6b776a0)
    }
}
