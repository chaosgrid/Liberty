#include "Freelancer-PCH.h"

PROC_DECLARE(0x542930, internal_542930, public_542930);
extern "C" NAKED register_t __cdecl internal_542930()
{
    __asm
    {
/*FIXUP push offset public_5dfb54 @0x542930*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dfb54
        call dword ptr ds : [public_5c6020]
        add esp, 4
        mov dword ptr ds : [public_678b54], eax
        ret 
        UNREACHABLE_TRAP(0x542930)
    }
}
