#include "Content-PCH.h"

PROC_DECLARE(0x6ea1200, internal_6ea1200, public_6ea1200);
extern "C" NAKED register_t __cdecl internal_6ea1200()
{
    __asm
    {
/*FIXUP push offset public_6fb37c8 @0x6ea1200*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb37c8
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fce920], eax
        ret 
        UNREACHABLE_TRAP(0x6ea1200)
    }
}
