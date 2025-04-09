#include "FreeLancer-PCH.h"

PROC_DECLARE(0x411fc0, internal_411fc0, public_411fc0);
extern "C" NAKED register_t __cdecl internal_411fc0()
{
    __asm
    {
        mov dword ptr ds : [public_6164fc], 0
        mov dword ptr ds : [public_616500], 0
        mov dword ptr ds : [public_616504], 0
        ret 
        UNREACHABLE_TRAP(0x411fc0)
    }
}
