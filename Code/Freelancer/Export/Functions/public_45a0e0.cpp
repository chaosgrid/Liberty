#include "Freelancer-PCH.h"

PROC_DECLARE(0x45a0e0, internal_45a0e0, public_45a0e0);
extern "C" NAKED register_t __cdecl internal_45a0e0()
{
    __asm
    {
/*FIXUP push offset public_5ce800 @0x45a0e0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ce800
        call dword ptr ds : [public_5c6020]
        add esp, 4
        mov dword ptr ds : [public_66d344], eax
        ret 
        UNREACHABLE_TRAP(0x45a0e0)
    }
}
