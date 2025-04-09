#include "FreeLancer-PCH.h"

PROC_DECLARE(0x548db0, internal_548db0, public_548db0);
extern "C" NAKED register_t __cdecl internal_548db0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5e0534]
        mov dword ptr ds : [public_679768], eax
        ret 
        UNREACHABLE_TRAP(0x548db0)
    }
}
