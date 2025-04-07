#include "Freelancer-PCH.h"

PROC_DECLARE(0x443870, internal_443870, public_443870);
extern "C" NAKED register_t __cdecl internal_443870()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x30]
        ret 
        UNREACHABLE_TRAP(0x443870)
    }
}
