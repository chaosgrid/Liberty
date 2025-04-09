#include "FreeLancer-PCH.h"

PROC_DECLARE(0x542ad0, internal_542ad0, public_542ad0);
extern "C" NAKED register_t __cdecl internal_542ad0()
{
    __asm
    {
/*FIXUP push offset public_5dfc14 @0x542ad0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dfc14
        call dword ptr ds : [public_5c6020]
        add esp, 4
        mov dword ptr ds : [public_678b20], eax
        ret 
        UNREACHABLE_TRAP(0x542ad0)
    }
}
