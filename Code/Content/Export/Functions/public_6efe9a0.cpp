#include "Content-PCH.h"

PROC_DECLARE(0x6efe9a0, internal_6efe9a0, public_6efe9a0);
extern "C" NAKED register_t __cdecl internal_6efe9a0()
{
    __asm
    {
/*FIXUP push offset public_6fb3730 @0x6efe9a0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb3730
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fcf410], eax
        ret 
        UNREACHABLE_TRAP(0x6efe9a0)
    }
}
