#include "Freelancer-PCH.h"

PROC_DECLARE(0x40f4c0, internal_40f4c0, public_40f4c0);
extern "C" NAKED register_t __cdecl internal_40f4c0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        fld dword ptr ds : [eax+0xA0]
        ret 4
        UNREACHABLE_TRAP(0x40f4c0)
    }
}
