#include "Content-PCH.h"

PROC_DECLARE(0x6f803d0, internal_6f803d0, public_6f803d0);
extern "C" NAKED register_t __cdecl internal_6f803d0()
{
    __asm
    {
/*FIXUP push offset public_6fb3758 @0x6f803d0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb3758
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fd3acc], eax
        ret 
        UNREACHABLE_TRAP(0x6f803d0)
    }
}
