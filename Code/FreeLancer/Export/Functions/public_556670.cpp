#include "FreeLancer-PCH.h"

PROC_DECLARE(0x556670, internal_556670, public_556670);
extern "C" NAKED register_t __cdecl internal_556670()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        fld dword ptr ds : [eax+0x2C]
        ret 4
        UNREACHABLE_TRAP(0x556670)
    }
}
