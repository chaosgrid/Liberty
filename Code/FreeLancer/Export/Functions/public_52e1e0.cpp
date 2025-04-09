#include "FreeLancer-PCH.h"

PROC_DECLARE(0x52e1e0, internal_52e1e0, public_52e1e0);
extern "C" NAKED register_t __cdecl internal_52e1e0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5ddac8]
        mov dword ptr ds : [public_675474], eax
        ret 
        UNREACHABLE_TRAP(0x52e1e0)
    }
}
