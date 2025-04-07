#include "Content-PCH.h"

PROC_DECLARE(0x6ec4280, internal_6ec4280, public_6ec4280);
extern "C" NAKED register_t __cdecl internal_6ec4280()
{
    __asm
    {
/*FIXUP push offset public_6fb5a3c @0x6ec4280*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb5a3c
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fcefb4], eax
        ret 
        UNREACHABLE_TRAP(0x6ec4280)
    }
}
