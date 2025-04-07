#include "Content-PCH.h"

PROC_DECLARE(0x6f84220, internal_6f84220, public_6f84220);
extern "C" NAKED register_t __cdecl internal_6f84220()
{
    __asm
    {
/*FIXUP push offset public_6fb379c @0x6f84220*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb379c
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fd3bcc], eax
        ret 
        UNREACHABLE_TRAP(0x6f84220)
    }
}
