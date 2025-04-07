#include "Content-PCH.h"

PROC_DECLARE(0x6efb470, internal_6efb470, public_6efb470);
extern "C" NAKED register_t __cdecl internal_6efb470()
{
    __asm
    {
/*FIXUP push offset public_6fb3758 @0x6efb470*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb3758
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fcf35c], eax
        ret 
        UNREACHABLE_TRAP(0x6efb470)
    }
}
