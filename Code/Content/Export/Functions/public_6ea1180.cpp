#include "Content-PCH.h"

PROC_DECLARE(0x6ea1180, internal_6ea1180, public_6ea1180);
extern "C" NAKED register_t __cdecl internal_6ea1180()
{
    __asm
    {
/*FIXUP push offset public_6fb3778 @0x6ea1180*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb3778
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fce930], eax
        ret 
        UNREACHABLE_TRAP(0x6ea1180)
    }
}
