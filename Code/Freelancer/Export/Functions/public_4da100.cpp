#include "Freelancer-PCH.h"

PROC_DECLARE(0x4da100, internal_4da100, public_4da100);
extern "C" NAKED register_t __cdecl internal_4da100()
{
    __asm
    {
/*FIXUP push offset public_5d8490 @0x4da100*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d8490
        call dword ptr ds : [public_5c6020]
        add esp, 4
        mov dword ptr ds : [public_674a8c], eax
        ret 
        UNREACHABLE_TRAP(0x4da100)
    }
}
