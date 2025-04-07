#include "Freelancer-PCH.h"

PROC_DECLARE(0x5429f0, internal_5429f0, public_5429f0);
extern "C" NAKED register_t __cdecl internal_5429f0()
{
    __asm
    {
/*FIXUP push offset public_5dfbb4 @0x5429f0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dfbb4
        call dword ptr ds : [public_5c6020]
        add esp, 4
        mov dword ptr ds : [public_678b3c], eax
        ret 
        UNREACHABLE_TRAP(0x5429f0)
    }
}
