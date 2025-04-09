#include "FreeLancer-PCH.h"

PROC_DECLARE(0x52e1f0, internal_52e1f0, public_52e1f0);
extern "C" NAKED register_t __cdecl internal_52e1f0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5ddacc]
        mov dword ptr ds : [public_675470], eax
        ret 
        UNREACHABLE_TRAP(0x52e1f0)
    }
}
