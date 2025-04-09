#include "FreeLancer-PCH.h"

PROC_DECLARE(0x559780, internal_559780, public_559780);
extern "C" NAKED register_t __cdecl internal_559780()
{
    __asm
    {
        mov dword ptr ds : [public_679adc], 0
        ret 
        UNREACHABLE_TRAP(0x559780)
    }
}
