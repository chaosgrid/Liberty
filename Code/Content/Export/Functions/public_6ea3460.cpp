#include "Content-PCH.h"

PROC_DECLARE(0x6ea3460, internal_6ea3460, public_6ea3460);
extern "C" NAKED register_t __cdecl internal_6ea3460()
{
    __asm
    {
/*FIXUP push offset public_6fb3788 @0x6ea3460*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb3788
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fceacc], eax
        ret 
        UNREACHABLE_TRAP(0x6ea3460)
    }
}
