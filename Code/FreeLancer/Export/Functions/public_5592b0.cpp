#include "FreeLancer-PCH.h"

PROC_DECLARE(0x5592b0, internal_5592b0, public_5592b0);
extern "C" NAKED register_t __cdecl internal_5592b0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5e1498]
        mov dword ptr ds : [public_679a24], eax
        ret 
        UNREACHABLE_TRAP(0x5592b0)
    }
}
