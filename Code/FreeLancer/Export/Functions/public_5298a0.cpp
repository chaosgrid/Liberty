#include "FreeLancer-PCH.h"

PROC_DECLARE(0x5298a0, internal_5298a0, public_5298a0);
extern "C" NAKED register_t __cdecl internal_5298a0()
{
    __asm
    {
/*FIXUP push offset public_5dd16c @0x5298a0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dd16c
        call dword ptr ds : [public_5c6020]
        add esp, 4
        mov dword ptr ds : [public_6753e8], eax
        ret 
        UNREACHABLE_TRAP(0x5298a0)
    }
}
