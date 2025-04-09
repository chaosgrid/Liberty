#include "FreeLancer-PCH.h"

PROC_DECLARE(0x542a50, internal_542a50, public_542a50);
extern "C" NAKED register_t __cdecl internal_542a50()
{
    __asm
    {
/*FIXUP push offset public_5dfbd0 @0x542a50*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dfbd0
        call dword ptr ds : [public_5c6020]
        add esp, 4
        mov dword ptr ds : [public_678b30], eax
        ret 
        UNREACHABLE_TRAP(0x542a50)
    }
}
