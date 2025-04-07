#include "Freelancer-PCH.h"

PROC_DECLARE(0x4c96b0, internal_4c96b0, public_4c96b0);
extern "C" NAKED register_t __cdecl internal_4c96b0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5d7110]
        mov dword ptr ds : [public_6748e8], eax
        ret 
        UNREACHABLE_TRAP(0x4c96b0)
    }
}
