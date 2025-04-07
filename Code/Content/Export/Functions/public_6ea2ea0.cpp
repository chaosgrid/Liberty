#include "Content-PCH.h"

PROC_DECLARE(0x6ea2ea0, internal_6ea2ea0, public_6ea2ea0);
extern "C" NAKED register_t __cdecl internal_6ea2ea0()
{
    __asm
    {
/*FIXUP push offset public_6fb370c @0x6ea2ea0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb370c
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fceab0], eax
        ret 
        UNREACHABLE_TRAP(0x6ea2ea0)
    }
}
