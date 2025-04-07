#include "Freelancer-PCH.h"

PROC_DECLARE(0x556660, internal_556660, public_556660);
extern "C" NAKED register_t __cdecl internal_556660()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        fld dword ptr ds : [eax+0x20]
        ret 4
        UNREACHABLE_TRAP(0x556660)
    }
}
