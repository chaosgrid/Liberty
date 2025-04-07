#include "Freelancer-PCH.h"

PROC_DECLARE(0x4e0860, internal_4e0860, public_4e0860);
extern "C" NAKED register_t __cdecl internal_4e0860()
{
    __asm
    {
/*FIXUP push offset public_5d8868 @0x4e0860*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d8868
        call dword ptr ds : [public_5c6020]
        add esp, 4
        mov dword ptr ds : [public_674ad4], eax
        ret 
        UNREACHABLE_TRAP(0x4e0860)
    }
}
