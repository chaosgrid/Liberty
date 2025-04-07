#include "Content-PCH.h"

PROC_DECLARE(0x6f56f90, internal_6f56f90, public_6f56f90);
extern "C" NAKED register_t __cdecl internal_6f56f90()
{
    __asm
    {
/*FIXUP push offset public_6fb3700 @0x6f56f90*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb3700
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fd0dbc], eax
        ret 
        UNREACHABLE_TRAP(0x6f56f90)
    }
}
