#include "Freelancer-PCH.h"

PROC_DECLARE(0x477980, internal_477980, public_477980);
extern "C" NAKED register_t __cdecl internal_477980()
{
    __asm
    {
/*FIXUP push offset public_5d0ea8 @0x477980*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0ea8
        call dword ptr ds : [public_5c6020]
        add esp, 4
        mov dword ptr ds : [public_671c60], eax
        ret 
        UNREACHABLE_TRAP(0x477980)
    }
}
