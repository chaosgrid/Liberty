#include "Freelancer-PCH.h"

PROC_DECLARE(0x4125d0, internal_4125d0, public_4125d0);
extern "C" NAKED register_t __cdecl internal_4125d0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5c8bb0]
        mov dword ptr ds : [public_616690], eax
        ret 
        UNREACHABLE_TRAP(0x4125d0)
    }
}
