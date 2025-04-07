#include "Content-PCH.h"

PROC_DECLARE(0x6ea2720, internal_6ea2720, public_6ea2720);
extern "C" NAKED register_t __cdecl internal_6ea2720()
{
    __asm
    {
/*FIXUP push offset public_6fb37b4 @0x6ea2720*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb37b4
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fce9f8], eax
        ret 
        UNREACHABLE_TRAP(0x6ea2720)
    }
}
