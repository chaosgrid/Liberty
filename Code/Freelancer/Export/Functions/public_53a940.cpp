#include "Freelancer-PCH.h"

PROC_DECLARE(0x53a940, internal_53a940, public_53a940);
extern "C" NAKED register_t __cdecl internal_53a940()
{
    __asm
    {
        mov eax, 0xFFFFFFFD
        ret 8
        UNREACHABLE_TRAP(0x53a940)
    }
}
