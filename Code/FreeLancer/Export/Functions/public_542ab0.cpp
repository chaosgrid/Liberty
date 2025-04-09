#include "FreeLancer-PCH.h"

PROC_DECLARE(0x542ab0, internal_542ab0, public_542ab0);
extern "C" NAKED register_t __cdecl internal_542ab0()
{
    __asm
    {
/*FIXUP push offset public_5dfc08 @0x542ab0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dfc08
        call dword ptr ds : [public_5c6020]
        add esp, 4
        mov dword ptr ds : [public_678b24], eax
        ret 
        UNREACHABLE_TRAP(0x542ab0)
    }
}
