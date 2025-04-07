#include "Content-PCH.h"

PROC_DECLARE(0x6f6fe90, internal_6f6fe90, public_6f6fe90);
extern "C" NAKED register_t __cdecl internal_6f6fe90()
{
    __asm
    {
/*FIXUP push offset public_6fb3748 @0x6f6fe90*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb3748
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fd39f4], eax
        ret 
        UNREACHABLE_TRAP(0x6f6fe90)
    }
}
