#include "Content-PCH.h"

PROC_DECLARE(0x6ed4300, internal_6ed4300, public_6ed4300);
extern "C" NAKED register_t __cdecl internal_6ed4300()
{
    __asm
    {
/*FIXUP push offset public_6fb373c @0x6ed4300*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb373c
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fcf07c], eax
        ret 
        UNREACHABLE_TRAP(0x6ed4300)
    }
}
