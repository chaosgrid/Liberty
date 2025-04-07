#include "Content-PCH.h"

PROC_DECLARE(0x6efe140, internal_6efe140, public_6efe140);
extern "C" NAKED register_t __cdecl internal_6efe140()
{
    __asm
    {
/*FIXUP push offset public_6fb3700 @0x6efe140*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb3700
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fcf3dc], eax
        ret 
        UNREACHABLE_TRAP(0x6efe140)
    }
}
