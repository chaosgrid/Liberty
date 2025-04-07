#include "Content-PCH.h"

PROC_DECLARE(0x6f31330, internal_6f31330, public_6f31330);
extern "C" NAKED register_t __cdecl internal_6f31330()
{
    __asm
    {
/*FIXUP push offset public_6fb3788 @0x6f31330*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb3788
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fd084c], eax
        ret 
        UNREACHABLE_TRAP(0x6f31330)
    }
}
