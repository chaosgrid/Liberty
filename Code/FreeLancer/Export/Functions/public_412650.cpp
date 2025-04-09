#include "FreeLancer-PCH.h"

PROC_DECLARE(0x412650, internal_412650, public_412650);
extern "C" NAKED register_t __cdecl internal_412650()
{
    __asm
    {
/*FIXUP push offset public_5c8bcc @0x412650*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8bcc
        call dword ptr ds : [public_5c6d14]
        add esp, 4
        mov dword ptr ds : [public_616670], eax
        ret 
        UNREACHABLE_TRAP(0x412650)
    }
}
