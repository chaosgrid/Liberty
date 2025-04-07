#include "Freelancer-PCH.h"

PROC_DECLARE(0x52b4f0, internal_52b4f0, public_52b4f0);
extern "C" NAKED register_t __cdecl internal_52b4f0()
{
    __asm
    {
        push 0
/*FIXUP push offset public_5dd364 @0x52b4f2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dd364
        call dword ptr ds : [public_5c6028]
        add esp, 8
        mov dword ptr ds : [public_675420], eax
        ret 
        UNREACHABLE_TRAP(0x52b4f0)
    }
}
