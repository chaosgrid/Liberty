#include "FreeLancer-PCH.h"

PROC_DECLARE(0x52ef90, internal_52ef90, public_52ef90);
extern "C" NAKED register_t __cdecl internal_52ef90()
{
    __asm
    {
/*FIXUP push offset public_5ddbe4 @0x52ef90*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ddbe4
        call dword ptr ds : [public_5c6020]
        add esp, 4
        mov dword ptr ds : [public_675480], eax
        ret 
        UNREACHABLE_TRAP(0x52ef90)
    }
}
