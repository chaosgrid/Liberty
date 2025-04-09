#include "Freelancer-PCH.h"

PROC_DECLARE(0x43d5d0, internal_43d5d0, public_43d5d0);
extern "C" NAKED register_t __cdecl internal_43d5d0()
{
    __asm
    {
/*FIXUP push offset public_5cb4d8 @0x43d5d0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cb4d8
        call dword ptr ds : [public_5c6020]
        add esp, 4
        mov dword ptr ds : [public_668818], eax
        ret 
        UNREACHABLE_TRAP(0x43d5d0)
    }
}
