#include "Content-PCH.h"

PROC_DECLARE(0x6f04120, internal_6f04120, public_6f04120);
extern "C" NAKED register_t __cdecl internal_6f04120()
{
    __asm
    {
/*FIXUP push offset public_6fb3778 @0x6f04120*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb3778
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fd05a0], eax
        ret 
        UNREACHABLE_TRAP(0x6f04120)
    }
}
