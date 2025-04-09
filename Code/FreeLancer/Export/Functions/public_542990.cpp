#include "Freelancer-PCH.h"

PROC_DECLARE(0x542990, internal_542990, public_542990);
extern "C" NAKED register_t __cdecl internal_542990()
{
    __asm
    {
/*FIXUP push offset public_5d9810 @0x542990*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d9810
        call dword ptr ds : [public_5c6020]
        add esp, 4
        mov dword ptr ds : [public_678b48], eax
        ret 
        UNREACHABLE_TRAP(0x542990)
    }
}
