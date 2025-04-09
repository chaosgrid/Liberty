#include "FreeLancer-PCH.h"

PROC_DECLARE(0x5557f0, internal_5557f0, public_5557f0);
extern "C" NAKED register_t __cdecl internal_5557f0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5e11fc]
        mov dword ptr ds : [public_679984], eax
        ret 
        UNREACHABLE_TRAP(0x5557f0)
    }
}
