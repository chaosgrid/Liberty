#include "Freelancer-PCH.h"

PROC_DECLARE(0x543100, internal_543100, public_543100);
extern "C" NAKED register_t __cdecl internal_543100()
{
    __asm
    {
        mov eax, offset public_5dfb38
        ret 
        UNREACHABLE_TRAP(0x543100)
    }
}
