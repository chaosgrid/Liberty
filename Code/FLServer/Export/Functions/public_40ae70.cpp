#include "FLServer-PCH.h"

PROC_DECLARE(0x40ae70, internal_40ae70, public_40ae70);
extern "C" NAKED register_t __cdecl internal_40ae70()
{
    __asm
    {
/*FIXUP push offset public_425594 @0x40ae70*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_425594
        push 0
        push 0
        call dword ptr ds : [public_41b188]
        mov dword ptr ds : [public_4277fc], eax
        ret 
        UNREACHABLE_TRAP(0x40ae70)
    }
}
