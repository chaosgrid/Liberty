#include "Content-PCH.h"

PROC_DECLARE(0x6f00790, internal_6f00790, public_6f00790);
extern "C" NAKED register_t __cdecl internal_6f00790()
{
    __asm
    {
/*FIXUP push offset public_6fb3758 @0x6f00790*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb3758
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fcf450], eax
        ret 
        UNREACHABLE_TRAP(0x6f00790)
    }
}
