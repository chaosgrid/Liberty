#include "Content-PCH.h"

PROC_DECLARE(0x6ea1160, internal_6ea1160, public_6ea1160);
extern "C" NAKED register_t __cdecl internal_6ea1160()
{
    __asm
    {
/*FIXUP push offset public_6fb376c @0x6ea1160*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb376c
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fce934], eax
        ret 
        UNREACHABLE_TRAP(0x6ea1160)
    }
}
