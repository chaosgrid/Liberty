#include "Content-PCH.h"

PROC_DECLARE(0x6f24200, internal_6f24200, public_6f24200);
extern "C" NAKED register_t __cdecl internal_6f24200()
{
    __asm
    {
/*FIXUP push offset public_6fb3778 @0x6f24200*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb3778
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fd071c], eax
        ret 
        UNREACHABLE_TRAP(0x6f24200)
    }
}
