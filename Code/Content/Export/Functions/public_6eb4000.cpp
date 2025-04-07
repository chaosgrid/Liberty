#include "Content-PCH.h"

PROC_DECLARE(0x6eb4000, internal_6eb4000, public_6eb4000);
extern "C" NAKED register_t __cdecl internal_6eb4000()
{
    __asm
    {
/*FIXUP push offset public_6fb3764 @0x6eb4000*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb3764
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fcef48], eax
        ret 
        UNREACHABLE_TRAP(0x6eb4000)
    }
}
