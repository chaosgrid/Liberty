#include "Content-PCH.h"

PROC_DECLARE(0x6eb6da0, internal_6eb6da0, public_6eb6da0);
extern "C" NAKED register_t __cdecl internal_6eb6da0()
{
    __asm
    {
/*FIXUP push offset public_6fb3788 @0x6eb6da0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb3788
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fcef7c], eax
        ret 
        UNREACHABLE_TRAP(0x6eb6da0)
    }
}
