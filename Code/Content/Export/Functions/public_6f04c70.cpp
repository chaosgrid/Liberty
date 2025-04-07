#include "Content-PCH.h"

PROC_DECLARE(0x6f04c70, internal_6f04c70, public_6f04c70);
extern "C" NAKED register_t __cdecl internal_6f04c70()
{
    __asm
    {
/*FIXUP push offset public_6fb803c @0x6f04c70*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb803c
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fd05e8], eax
        ret 
        UNREACHABLE_TRAP(0x6f04c70)
    }
}
