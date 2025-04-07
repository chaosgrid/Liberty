#include "Content-PCH.h"

PROC_DECLARE(0x6f84200, internal_6f84200, public_6f84200);
extern "C" NAKED register_t __cdecl internal_6f84200()
{
    __asm
    {
/*FIXUP push offset public_6fb3788 @0x6f84200*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb3788
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fd3bd0], eax
        ret 
        UNREACHABLE_TRAP(0x6f84200)
    }
}
