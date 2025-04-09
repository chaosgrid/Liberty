#include "Freelancer-PCH.h"

PROC_DECLARE(0x5598e0, internal_5598e0, public_5598e0);
extern "C" NAKED register_t __cdecl internal_5598e0()
{
    __asm
    {
/*FIXUP push offset public_5e150c @0x5598e0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e150c
        call dword ptr ds : [public_5c6d14]
        add esp, 4
        mov dword ptr ds : [public_679a28], eax
        ret 
        UNREACHABLE_TRAP(0x5598e0)
    }
}
