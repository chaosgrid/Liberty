#include "FreeLancer-PCH.h"

PROC_DECLARE(0x52d860, internal_52d860, public_52d860);
extern "C" NAKED register_t __cdecl internal_52d860()
{
    __asm
    {
/*FIXUP push offset public_5dd5b0 @0x52d860*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dd5b0
        call dword ptr ds : [public_5c6020]
        add esp, 4
        mov dword ptr ds : [public_675440], eax
        ret 
        UNREACHABLE_TRAP(0x52d860)
    }
}
