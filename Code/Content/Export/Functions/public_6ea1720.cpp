#include "Content-PCH.h"

PROC_DECLARE(0x6ea1720, internal_6ea1720, public_6ea1720);
extern "C" NAKED register_t __cdecl internal_6ea1720()
{
    __asm
    {
/*FIXUP push offset public_6fb3730 @0x6ea1720*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb3730
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fce994], eax
        ret 
        UNREACHABLE_TRAP(0x6ea1720)
    }
}
