#include "Freelancer-PCH.h"

PROC_DECLARE(0x5319d0, internal_5319d0, public_5319d0);
extern "C" NAKED register_t __cdecl internal_5319d0()
{
    __asm
    {
/*FIXUP push offset public_5de0ec @0x5319d0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5de0ec
        call dword ptr ds : [public_5c6020]
        add esp, 4
        mov dword ptr ds : [public_675520], eax
        ret 
        UNREACHABLE_TRAP(0x5319d0)
    }
}
