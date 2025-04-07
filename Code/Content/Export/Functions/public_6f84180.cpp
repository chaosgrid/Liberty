#include "Content-PCH.h"

PROC_DECLARE(0x6f84180, internal_6f84180, public_6f84180);
extern "C" NAKED register_t __cdecl internal_6f84180()
{
    __asm
    {
/*FIXUP push offset public_6fb3758 @0x6f84180*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb3758
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fd3be0], eax
        ret 
        UNREACHABLE_TRAP(0x6f84180)
    }
}
