#include "Content-PCH.h"

PROC_DECLARE(0x6eb7500, internal_6eb7500, public_6eb7500);
extern "C" NAKED register_t __cdecl internal_6eb7500()
{
    __asm
    {
/*FIXUP push offset public_6fb3788 @0x6eb7500*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb3788
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fcefdc], eax
        ret 
        UNREACHABLE_TRAP(0x6eb7500)
    }
}
