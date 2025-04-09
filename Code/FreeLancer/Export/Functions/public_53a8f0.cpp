#include "Freelancer-PCH.h"

PROC_DECLARE(0x53a8f0, internal_53a8f0, public_53a8f0);
extern "C" NAKED register_t __cdecl internal_53a8f0()
{
    __asm
    {
        mov eax, 0xFFFFFFFD
        ret 0x14
        UNREACHABLE_TRAP(0x53a8f0)
    }
}
