#include "FreeLancer-PCH.h"

PROC_DECLARE(0x42ae00, internal_42ae00, public_42ae00);
extern "C" NAKED register_t __cdecl internal_42ae00()
{
    __asm
    {
        fld dword ptr ds : [ecx+0x14]
        ret 
        UNREACHABLE_TRAP(0x42ae00)
    }
}
