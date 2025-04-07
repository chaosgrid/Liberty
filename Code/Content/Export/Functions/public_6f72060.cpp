#include "Content-PCH.h"

PROC_DECLARE(0x6f72060, internal_6f72060, public_6f72060);
extern "C" NAKED register_t __cdecl internal_6f72060()
{
    __asm
    {
/*FIXUP push offset public_6fb3724 @0x6f72060*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb3724
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fd3a98], eax
        ret 
        UNREACHABLE_TRAP(0x6f72060)
    }
}
