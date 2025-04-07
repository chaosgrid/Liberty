#include "Content-PCH.h"

PROC_DECLARE(0x6efb390, internal_6efb390, public_6efb390);
extern "C" NAKED register_t __cdecl internal_6efb390()
{
    __asm
    {
/*FIXUP push offset public_6fb3700 @0x6efb390*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb3700
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fcf378], eax
        ret 
        UNREACHABLE_TRAP(0x6efb390)
    }
}
