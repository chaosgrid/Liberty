#include "Freelancer-PCH.h"

PROC_DECLARE(0x53d430, internal_53d430, public_53d430);
extern "C" NAKED register_t __cdecl internal_53d430()
{
    __asm
    {
        mov eax, 0x1000000
        ret 
        UNREACHABLE_TRAP(0x53d430)
    }
}
