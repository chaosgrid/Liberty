#include "Content-PCH.h"

PROC_DECLARE(0x6f80390, internal_6f80390, public_6f80390);
extern "C" NAKED register_t __cdecl internal_6f80390()
{
    __asm
    {
/*FIXUP push offset public_6fb373c @0x6f80390*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb373c
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fd3ad4], eax
        ret 
        UNREACHABLE_TRAP(0x6f80390)
    }
}
