#include "Freelancer-PCH.h"

PROC_DECLARE(0x52ead0, internal_52ead0, public_52ead0);
extern "C" NAKED register_t __cdecl internal_52ead0()
{
    __asm
    {
/*FIXUP push offset public_5ddb18 @0x52ead0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ddb18
        call dword ptr ds : [public_5c6020]
        add esp, 4
        mov dword ptr ds : [public_675464], eax
        ret 
        UNREACHABLE_TRAP(0x52ead0)
    }
}
