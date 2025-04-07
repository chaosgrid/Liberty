#include "Content-PCH.h"

PROC_DECLARE(0x6efe1e0, internal_6efe1e0, public_6efe1e0);
extern "C" NAKED register_t __cdecl internal_6efe1e0()
{
    __asm
    {
/*FIXUP push offset public_6fb373c @0x6efe1e0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb373c
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fcf3c8], eax
        ret 
        UNREACHABLE_TRAP(0x6efe1e0)
    }
}
