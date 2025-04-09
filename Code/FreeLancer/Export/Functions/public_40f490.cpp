#include "Freelancer-PCH.h"

PROC_DECLARE(0x40f490, internal_40f490, public_40f490);
extern "C" NAKED register_t __cdecl internal_40f490()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        fld dword ptr ds : [eax+0x9C]
        ret 4
        UNREACHABLE_TRAP(0x40f490)
    }
}
