#include "Content-PCH.h"

PROC_DECLARE(0x6ea7870, internal_6ea7870, public_6ea7870);
extern "C" NAKED register_t __cdecl internal_6ea7870()
{
    __asm
    {
/*FIXUP push offset public_6fb3758 @0x6ea7870*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb3758
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fcee9c], eax
        ret 
        UNREACHABLE_TRAP(0x6ea7870)
    }
}
