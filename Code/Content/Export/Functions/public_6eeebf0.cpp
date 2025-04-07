#include "Content-PCH.h"

PROC_DECLARE(0x6eeebf0, internal_6eeebf0, public_6eeebf0);
extern "C" NAKED register_t __cdecl internal_6eeebf0()
{
    __asm
    {
/*FIXUP push offset public_6fb379c @0x6eeebf0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb379c
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fcf1bc], eax
        ret 
        UNREACHABLE_TRAP(0x6eeebf0)
    }
}
