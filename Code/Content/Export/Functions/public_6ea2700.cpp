#include "Content-PCH.h"

PROC_DECLARE(0x6ea2700, internal_6ea2700, public_6ea2700);
extern "C" NAKED register_t __cdecl internal_6ea2700()
{
    __asm
    {
/*FIXUP push offset public_6fb379c @0x6ea2700*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb379c
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fce9fc], eax
        ret 
        UNREACHABLE_TRAP(0x6ea2700)
    }
}
