#include "Freelancer-PCH.h"

PROC_DECLARE(0x4f3aa0, internal_4f3aa0, public_4f3aa0);
extern "C" NAKED register_t __cdecl internal_4f3aa0()
{
    __asm
    {
/*FIXUP push offset public_5d9688 @0x4f3aa0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d9688
        call dword ptr ds : [public_5c6020]
        add esp, 4
        mov dword ptr ds : [public_674bb4], eax
        ret 
        UNREACHABLE_TRAP(0x4f3aa0)
    }
}
