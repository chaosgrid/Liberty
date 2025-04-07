#include "Freelancer-PCH.h"

PROC_DECLARE(0x556630, internal_556630, public_556630);
extern "C" NAKED register_t __cdecl internal_556630()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        fld dword ptr ds : [eax+0x14]
        ret 4
        UNREACHABLE_TRAP(0x556630)
    }
}
