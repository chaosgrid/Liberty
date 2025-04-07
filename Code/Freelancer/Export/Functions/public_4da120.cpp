#include "Freelancer-PCH.h"

PROC_DECLARE(0x4da120, internal_4da120, public_4da120);
extern "C" NAKED register_t __cdecl internal_4da120()
{
    __asm
    {
/*FIXUP push offset public_5d84a0 @0x4da120*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d84a0
        call dword ptr ds : [public_5c6020]
        add esp, 4
        mov dword ptr ds : [public_674a88], eax
        ret 
        UNREACHABLE_TRAP(0x4da120)
    }
}
