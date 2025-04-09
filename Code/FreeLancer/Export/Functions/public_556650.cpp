#include "Freelancer-PCH.h"

PROC_DECLARE(0x556650, internal_556650, public_556650);
extern "C" NAKED register_t __cdecl internal_556650()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        fld dword ptr ds : [eax+0x1C]
        ret 4
        UNREACHABLE_TRAP(0x556650)
    }
}
