#include "Content-PCH.h"

PROC_DECLARE(0x6ed5bd0, internal_6ed5bd0, public_6ed5bd0);
extern "C" NAKED register_t __cdecl internal_6ed5bd0()
{
    __asm
    {
/*FIXUP push offset public_6fb376c @0x6ed5bd0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb376c
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fcf17c], eax
        ret 
        UNREACHABLE_TRAP(0x6ed5bd0)
    }
}
