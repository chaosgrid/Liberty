#include "Content-PCH.h"

PROC_DECLARE(0x6eb2790, internal_6eb2790, public_6eb2790);
extern "C" NAKED register_t __cdecl internal_6eb2790()
{
    __asm
    {
/*FIXUP push offset public_6fb3758 @0x6eb2790*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb3758
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fceee0], eax
        ret 
        UNREACHABLE_TRAP(0x6eb2790)
    }
}
