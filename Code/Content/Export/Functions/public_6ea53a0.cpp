#include "Content-PCH.h"

PROC_DECLARE(0x6ea53a0, internal_6ea53a0, public_6ea53a0);
extern "C" NAKED register_t __cdecl internal_6ea53a0()
{
    __asm
    {
/*FIXUP push offset public_6fb376c @0x6ea53a0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb376c
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fcecb0], eax
        ret 
        UNREACHABLE_TRAP(0x6ea53a0)
    }
}
