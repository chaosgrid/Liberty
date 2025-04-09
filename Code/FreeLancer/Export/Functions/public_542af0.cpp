#include "FreeLancer-PCH.h"

PROC_DECLARE(0x542af0, internal_542af0, public_542af0);
extern "C" NAKED register_t __cdecl internal_542af0()
{
    __asm
    {
/*FIXUP push offset public_5dfc24 @0x542af0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dfc24
        call dword ptr ds : [public_5c6020]
        add esp, 4
        mov dword ptr ds : [public_678b1c], eax
        ret 
        UNREACHABLE_TRAP(0x542af0)
    }
}
