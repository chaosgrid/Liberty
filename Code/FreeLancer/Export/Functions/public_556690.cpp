#include "FreeLancer-PCH.h"

PROC_DECLARE(0x556690, internal_556690, public_556690);
extern "C" NAKED register_t __cdecl internal_556690()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        fld dword ptr ds : [eax+0x3C]
        fdiv dword ptr ds : [eax+0x1C]
        ret 4
        UNREACHABLE_TRAP(0x556690)
    }
}
