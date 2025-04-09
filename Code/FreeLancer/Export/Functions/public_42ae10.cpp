#include "Freelancer-PCH.h"

PROC_DECLARE(0x42ae10, internal_42ae10, public_42ae10);
extern "C" NAKED register_t __cdecl internal_42ae10()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x18]
        shr eax, 0x1A
        and eax, 1
        ret 
        UNREACHABLE_TRAP(0x42ae10)
    }
}
