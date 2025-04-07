#include "Freelancer-PCH.h"

PROC_DECLARE(0x450cd0, internal_450cd0, public_450cd0);
extern "C" NAKED register_t __cdecl internal_450cd0()
{
    __asm
    {
        mov dword ptr ds : [ecx+0x6C], 0
        ret 
        UNREACHABLE_TRAP(0x450cd0)
    }
}
