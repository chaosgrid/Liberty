#include "Freelancer-PCH.h"

PROC_DECLARE(0x53a930, internal_53a930, public_53a930);
extern "C" NAKED register_t __cdecl internal_53a930()
{
    __asm
    {
        mov eax, 0xFFFFFFFD
        ret 
        UNREACHABLE_TRAP(0x53a930)
    }
}
