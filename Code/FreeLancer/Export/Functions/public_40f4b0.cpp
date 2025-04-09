#include "FreeLancer-PCH.h"

PROC_DECLARE(0x40f4b0, internal_40f4b0, public_40f4b0);
extern "C" NAKED register_t __cdecl internal_40f4b0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        fld dword ptr ds : [eax+0xA8]
        ret 4
        UNREACHABLE_TRAP(0x40f4b0)
    }
}
