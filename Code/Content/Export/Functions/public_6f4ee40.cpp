#include "Content-PCH.h"

PROC_DECLARE(0x6f4ee40, internal_6f4ee40, public_6f4ee40);
extern "C" NAKED register_t __cdecl internal_6f4ee40()
{
    __asm
    {
/*FIXUP push offset public_6fb3730 @0x6f4ee40*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb3730
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fd0d10], eax
        ret 
        UNREACHABLE_TRAP(0x6f4ee40)
    }
}
