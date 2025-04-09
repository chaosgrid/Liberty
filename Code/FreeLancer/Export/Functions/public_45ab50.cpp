#include "FreeLancer-PCH.h"

PROC_DECLARE(0x45ab50, internal_45ab50, public_45ab50);
extern "C" NAKED register_t __cdecl internal_45ab50()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5ce834]
        mov dword ptr ds : [public_66d388], eax
        ret 
        UNREACHABLE_TRAP(0x45ab50)
    }
}
