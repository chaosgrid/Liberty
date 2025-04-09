#include "FreeLancer-PCH.h"

PROC_DECLARE(0x5360d0, internal_5360d0, public_5360d0);
extern "C" NAKED register_t __cdecl internal_5360d0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5de578]
        mov dword ptr ds : [public_67554c], eax
        ret 
        UNREACHABLE_TRAP(0x5360d0)
    }
}
