#include "Freelancer-PCH.h"

PROC_DECLARE(0x41dc10, internal_41dc10, public_41dc10);
extern "C" NAKED register_t __cdecl internal_41dc10()
{
    __asm
    {
        mov dword ptr ds : [public_616740], 0
        ret 
        UNREACHABLE_TRAP(0x41dc10)
    }
}
