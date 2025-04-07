#include "Content-PCH.h"

PROC_DECLARE(0x6eb3fe0, internal_6eb3fe0, public_6eb3fe0);
extern "C" NAKED register_t __cdecl internal_6eb3fe0()
{
    __asm
    {
/*FIXUP push offset public_6fb3758 @0x6eb3fe0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb3758
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fcef4c], eax
        ret 
        UNREACHABLE_TRAP(0x6eb3fe0)
    }
}
