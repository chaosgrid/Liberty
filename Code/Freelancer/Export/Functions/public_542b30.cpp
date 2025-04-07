#include "Freelancer-PCH.h"

PROC_DECLARE(0x542b30, internal_542b30, public_542b30);
extern "C" NAKED register_t __cdecl internal_542b30()
{
    __asm
    {
/*FIXUP push offset public_5dfc4c @0x542b30*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dfc4c
        call dword ptr ds : [public_5c6020]
        add esp, 4
        mov dword ptr ds : [public_678b14], eax
        ret 
        UNREACHABLE_TRAP(0x542b30)
    }
}
