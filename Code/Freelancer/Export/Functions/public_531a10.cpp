#include "Freelancer-PCH.h"

PROC_DECLARE(0x531a10, internal_531a10, public_531a10);
extern "C" NAKED register_t __cdecl internal_531a10()
{
    __asm
    {
/*FIXUP push offset public_5de120 @0x531a10*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5de120
        call dword ptr ds : [public_5c6020]
        add esp, 4
        mov dword ptr ds : [public_675518], eax
        ret 
        UNREACHABLE_TRAP(0x531a10)
    }
}
