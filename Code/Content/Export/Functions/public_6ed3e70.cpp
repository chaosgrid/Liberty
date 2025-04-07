#include "Content-PCH.h"

PROC_DECLARE(0x6ed3e70, internal_6ed3e70, public_6ed3e70);
extern "C" NAKED register_t __cdecl internal_6ed3e70()
{
    __asm
    {
/*FIXUP push offset public_6fb373c @0x6ed3e70*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb373c
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fcf03c], eax
        ret 
        UNREACHABLE_TRAP(0x6ed3e70)
    }
}
