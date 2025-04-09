#include "Freelancer-PCH.h"

PROC_DECLARE(0x52f4d0, internal_52f4d0, public_52f4d0);
extern "C" NAKED register_t __cdecl internal_52f4d0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5ddca8]
        mov dword ptr ds : [public_6754a4], eax
        ret 
        UNREACHABLE_TRAP(0x52f4d0)
    }
}
