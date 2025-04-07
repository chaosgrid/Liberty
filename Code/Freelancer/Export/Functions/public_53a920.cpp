#include "Freelancer-PCH.h"

PROC_DECLARE(0x53a920, internal_53a920, public_53a920);
extern "C" NAKED register_t __cdecl internal_53a920()
{
    __asm
    {
        mov eax, 0xFFFFFFFD
        ret 0x10
        UNREACHABLE_TRAP(0x53a920)
    }
}
