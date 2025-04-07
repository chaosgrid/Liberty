#include "Content-PCH.h"

PROC_DECLARE(0x6ec4200, internal_6ec4200, public_6ec4200);
extern "C" NAKED register_t __cdecl internal_6ec4200()
{
    __asm
    {
/*FIXUP push offset public_6fb4ae4 @0x6ec4200*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb4ae4
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fcefc4], eax
        ret 
        UNREACHABLE_TRAP(0x6ec4200)
    }
}
