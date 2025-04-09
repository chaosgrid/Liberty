#include "Freelancer-PCH.h"

PROC_DECLARE(0x50bcd0, internal_50bcd0, public_50bcd0);
extern "C" NAKED register_t __cdecl internal_50bcd0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x3C]
        ret 
        UNREACHABLE_TRAP(0x50bcd0)
    }
}
