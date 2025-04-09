#include "FreeLancer-PCH.h"

PROC_DECLARE(0x563ab0, internal_563ab0, public_563ab0);
extern "C" NAKED register_t __cdecl internal_563ab0()
{
    __asm
    {
/*FIXUP push offset public_5e21e4 @0x563ab0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e21e4
        call dword ptr ds : [public_5c6d14]
        add esp, 4
        mov dword ptr ds : [public_67a484], eax
        ret 
        UNREACHABLE_TRAP(0x563ab0)
    }
}
