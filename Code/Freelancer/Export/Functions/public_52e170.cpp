#include "Freelancer-PCH.h"

PROC_DECLARE(0x52e170, internal_52e170, public_52e170);
extern "C" NAKED register_t __cdecl internal_52e170()
{
    __asm
    {
/*FIXUP push offset public_5dda90 @0x52e170*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dda90
        call dword ptr ds : [public_5c6020]
        add esp, 4
        mov dword ptr ds : [public_675434], eax
        ret 
        UNREACHABLE_TRAP(0x52e170)
    }
}
