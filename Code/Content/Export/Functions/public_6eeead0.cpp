#include "Content-PCH.h"

PROC_DECLARE(0x6eeead0, internal_6eeead0, public_6eeead0);
extern "C" NAKED register_t __cdecl internal_6eeead0()
{
    __asm
    {
/*FIXUP push offset public_6fb3724 @0x6eeead0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb3724
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fcf1e0], eax
        ret 
        UNREACHABLE_TRAP(0x6eeead0)
    }
}
