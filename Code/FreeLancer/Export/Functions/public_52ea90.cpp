#include "Freelancer-PCH.h"

PROC_DECLARE(0x52ea90, internal_52ea90, public_52ea90);
extern "C" NAKED register_t __cdecl internal_52ea90()
{
    __asm
    {
/*FIXUP push offset public_5ddaf0 @0x52ea90*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ddaf0
        call dword ptr ds : [public_5c6020]
        add esp, 4
        mov dword ptr ds : [public_675468], eax
        ret 
        UNREACHABLE_TRAP(0x52ea90)
    }
}
