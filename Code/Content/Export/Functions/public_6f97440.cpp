#include "Content-PCH.h"

PROC_DECLARE(0x6f97440, internal_6f97440, public_6f97440);
extern "C" NAKED register_t __cdecl internal_6f97440()
{
    __asm
    {
/*FIXUP push offset public_6fb373c @0x6f97440*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb373c
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fd3d64], eax
        ret 
        UNREACHABLE_TRAP(0x6f97440)
    }
}
