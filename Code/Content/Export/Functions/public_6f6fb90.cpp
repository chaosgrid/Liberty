#include "Content-PCH.h"

PROC_DECLARE(0x6f6fb90, internal_6f6fb90, public_6f6fb90);
extern "C" NAKED register_t __cdecl internal_6f6fb90()
{
    __asm
    {
/*FIXUP push offset public_6fb3748 @0x6f6fb90*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb3748
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fd1d2c], eax
        ret 
        UNREACHABLE_TRAP(0x6f6fb90)
    }
}
