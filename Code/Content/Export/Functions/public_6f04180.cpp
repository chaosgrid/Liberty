#include "Content-PCH.h"

PROC_DECLARE(0x6f04180, internal_6f04180, public_6f04180);
extern "C" NAKED register_t __cdecl internal_6f04180()
{
    __asm
    {
/*FIXUP push offset public_6fb37b4 @0x6f04180*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb37b4
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fd0594], eax
        ret 
        UNREACHABLE_TRAP(0x6f04180)
    }
}
