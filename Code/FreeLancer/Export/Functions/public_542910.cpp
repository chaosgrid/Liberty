#include "Freelancer-PCH.h"

PROC_DECLARE(0x542910, internal_542910, public_542910);
extern "C" NAKED register_t __cdecl internal_542910()
{
    __asm
    {
/*FIXUP push offset public_5dfb44 @0x542910*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dfb44
        call dword ptr ds : [public_5c6020]
        add esp, 4
        mov dword ptr ds : [public_678b58], eax
        ret 
        UNREACHABLE_TRAP(0x542910)
    }
}
