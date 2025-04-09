#include "Freelancer-PCH.h"

PROC_DECLARE(0x542a30, internal_542a30, public_542a30);
extern "C" NAKED register_t __cdecl internal_542a30()
{
    __asm
    {
/*FIXUP push offset public_5d82b4 @0x542a30*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d82b4
        call dword ptr ds : [public_5c6020]
        add esp, 4
        mov dword ptr ds : [public_678b34], eax
        ret 
        UNREACHABLE_TRAP(0x542a30)
    }
}
