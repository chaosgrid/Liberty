#include "FreeLancer-PCH.h"

PROC_DECLARE(0x51d050, internal_51d050, public_51d050);
extern "C" NAKED register_t __cdecl internal_51d050()
{
    __asm
    {
        mov dword ptr ds : [public_67526c], 0
        mov dword ptr ds : [public_675270], 0
        mov dword ptr ds : [public_675274], 0
        ret 
        UNREACHABLE_TRAP(0x51d050)
    }
}
