#include "Freelancer-PCH.h"

PROC_DECLARE(0x4f4e90, internal_4f4e90, public_4f4e90);
extern "C" NAKED register_t __cdecl internal_4f4e90()
{
    __asm
    {
/*FIXUP push offset public_5d9818 @0x4f4e90*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d9818
        call dword ptr ds : [public_5c6020]
        add esp, 4
        mov dword ptr ds : [public_674bec], eax
        ret 
        UNREACHABLE_TRAP(0x4f4e90)
    }
}
