#include "Content-PCH.h"

PROC_DECLARE(0x6ea4980, internal_6ea4980, public_6ea4980);
extern "C" NAKED register_t __cdecl internal_6ea4980()
{
    __asm
    {
/*FIXUP push offset public_6fb3700 @0x6ea4980*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb3700
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fcec4c], eax
        ret 
        UNREACHABLE_TRAP(0x6ea4980)
    }
}
