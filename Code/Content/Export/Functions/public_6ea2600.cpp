#include "Content-PCH.h"

PROC_DECLARE(0x6ea2600, internal_6ea2600, public_6ea2600);
extern "C" NAKED register_t __cdecl internal_6ea2600()
{
    __asm
    {
/*FIXUP push offset public_6fb3730 @0x6ea2600*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb3730
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fcea1c], eax
        ret 
        UNREACHABLE_TRAP(0x6ea2600)
    }
}
