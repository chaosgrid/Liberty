#include "Content-PCH.h"

PROC_DECLARE(0x6ed5b50, internal_6ed5b50, public_6ed5b50);
extern "C" NAKED register_t __cdecl internal_6ed5b50()
{
    __asm
    {
/*FIXUP push offset public_6fb373c @0x6ed5b50*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb373c
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fcf18c], eax
        ret 
        UNREACHABLE_TRAP(0x6ed5b50)
    }
}
