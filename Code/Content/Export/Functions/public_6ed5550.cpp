#include "Content-PCH.h"

PROC_DECLARE(0x6ed5550, internal_6ed5550, public_6ed5550);
extern "C" NAKED register_t __cdecl internal_6ed5550()
{
    __asm
    {
/*FIXUP push offset public_6fb379c @0x6ed5550*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb379c
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fcf0a0], eax
        ret 
        UNREACHABLE_TRAP(0x6ed5550)
    }
}
