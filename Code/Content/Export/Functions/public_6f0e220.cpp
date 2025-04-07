#include "Content-PCH.h"

PROC_DECLARE(0x6f0e220, internal_6f0e220, public_6f0e220);
extern "C" NAKED register_t __cdecl internal_6f0e220()
{
    __asm
    {
/*FIXUP push offset public_6fb858c @0x6f0e220*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb858c
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fd06c4], eax
        ret 
        UNREACHABLE_TRAP(0x6f0e220)
    }
}
