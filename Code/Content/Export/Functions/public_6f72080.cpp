#include "Content-PCH.h"

PROC_DECLARE(0x6f72080, internal_6f72080, public_6f72080);
extern "C" NAKED register_t __cdecl internal_6f72080()
{
    __asm
    {
/*FIXUP push offset public_6fb3730 @0x6f72080*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb3730
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fd3a94], eax
        ret 
        UNREACHABLE_TRAP(0x6f72080)
    }
}
