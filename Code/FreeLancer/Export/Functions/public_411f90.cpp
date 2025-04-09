#include "FreeLancer-PCH.h"

PROC_DECLARE(0x411f90, internal_411f90, public_411f90);
extern "C" NAKED register_t __cdecl internal_411f90()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5c8b64]
        mov dword ptr ds : [public_61650c], eax
        ret 
        UNREACHABLE_TRAP(0x411f90)
    }
}
