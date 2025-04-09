#include "FreeLancer-PCH.h"

PROC_DECLARE(0x4246d0, internal_4246d0, public_4246d0);
extern "C" NAKED register_t __cdecl internal_4246d0()
{
    __asm
    {
        mov dword ptr ds : [public_610860], 1
        ret 4
        UNREACHABLE_TRAP(0x4246d0)
    }
}
