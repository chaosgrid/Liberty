#include "Freelancer-PCH.h"

PROC_DECLARE(0x52d550, internal_52d550, public_52d550);
extern "C" NAKED register_t __cdecl internal_52d550()
{
    __asm
    {
/*FIXUP push offset public_5dd4d4 @0x52d550*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dd4d4
        call dword ptr ds : [public_5c6020]
        add esp, 4
        mov dword ptr ds : [public_675448], eax
        ret 
        UNREACHABLE_TRAP(0x52d550)
    }
}
