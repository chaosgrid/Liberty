#include "Content-PCH.h"

PROC_DECLARE(0x6eeebb0, internal_6eeebb0, public_6eeebb0);
extern "C" NAKED register_t __cdecl internal_6eeebb0()
{
    __asm
    {
/*FIXUP push offset public_6fb3778 @0x6eeebb0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb3778
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fcf1c4], eax
        ret 
        UNREACHABLE_TRAP(0x6eeebb0)
    }
}
