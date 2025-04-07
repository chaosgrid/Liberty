#include "Content-PCH.h"

PROC_DECLARE(0x6f72160, internal_6f72160, public_6f72160);
extern "C" NAKED register_t __cdecl internal_6f72160()
{
    __asm
    {
/*FIXUP push offset public_6fb3788 @0x6f72160*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb3788
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fd3a78], eax
        ret 
        UNREACHABLE_TRAP(0x6f72160)
    }
}
