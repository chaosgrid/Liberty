#include "FreeLancer-PCH.h"

PROC_DECLARE(0x542a90, internal_542a90, public_542a90);
extern "C" NAKED register_t __cdecl internal_542a90()
{
    __asm
    {
/*FIXUP push offset public_5dfbf4 @0x542a90*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dfbf4
        call dword ptr ds : [public_5c6020]
        add esp, 4
        mov dword ptr ds : [public_678b28], eax
        ret 
        UNREACHABLE_TRAP(0x542a90)
    }
}
