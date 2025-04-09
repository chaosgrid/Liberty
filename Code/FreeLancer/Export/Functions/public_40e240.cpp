#include "FreeLancer-PCH.h"

PROC_DECLARE(0x40e240, internal_40e240, public_40e240);
extern "C" NAKED register_t __cdecl internal_40e240()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5c8464]
        mov dword ptr ds : [public_6164c4], eax
        ret 
        UNREACHABLE_TRAP(0x40e240)
    }
}
