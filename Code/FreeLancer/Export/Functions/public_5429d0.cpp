#include "FreeLancer-PCH.h"

PROC_DECLARE(0x5429d0, internal_5429d0, public_5429d0);
extern "C" NAKED register_t __cdecl internal_5429d0()
{
    __asm
    {
/*FIXUP push offset public_5dfba0 @0x5429d0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dfba0
        call dword ptr ds : [public_5c6020]
        add esp, 4
        mov dword ptr ds : [public_678b40], eax
        ret 
        UNREACHABLE_TRAP(0x5429d0)
    }
}
