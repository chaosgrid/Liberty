#include "Content-PCH.h"

PROC_DECLARE(0x6eeec10, internal_6eeec10, public_6eeec10);
extern "C" NAKED register_t __cdecl internal_6eeec10()
{
    __asm
    {
/*FIXUP push offset public_6fb37b4 @0x6eeec10*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb37b4
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fcf1b8], eax
        ret 
        UNREACHABLE_TRAP(0x6eeec10)
    }
}
