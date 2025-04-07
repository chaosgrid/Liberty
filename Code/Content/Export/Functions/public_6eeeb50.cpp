#include "Content-PCH.h"

PROC_DECLARE(0x6eeeb50, internal_6eeeb50, public_6eeeb50);
extern "C" NAKED register_t __cdecl internal_6eeeb50()
{
    __asm
    {
/*FIXUP push offset public_6fb3758 @0x6eeeb50*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb3758
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fcf1d0], eax
        ret 
        UNREACHABLE_TRAP(0x6eeeb50)
    }
}
