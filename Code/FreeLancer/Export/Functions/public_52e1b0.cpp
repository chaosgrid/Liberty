#include "Freelancer-PCH.h"

PROC_DECLARE(0x52e1b0, internal_52e1b0, public_52e1b0);
extern "C" NAKED register_t __cdecl internal_52e1b0()
{
    __asm
    {
/*FIXUP push offset public_5ddab4 @0x52e1b0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ddab4
        call dword ptr ds : [public_5c6020]
        add esp, 4
        mov dword ptr ds : [public_67543c], eax
        ret 
        UNREACHABLE_TRAP(0x52e1b0)
    }
}
