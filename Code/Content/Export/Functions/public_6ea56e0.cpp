#include "Content-PCH.h"

PROC_DECLARE(0x6ea56e0, internal_6ea56e0, public_6ea56e0);
extern "C" NAKED register_t __cdecl internal_6ea56e0()
{
    __asm
    {
/*FIXUP push offset public_6fb36f0 @0x6ea56e0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb36f0
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fced1c], eax
        ret 
        UNREACHABLE_TRAP(0x6ea56e0)
    }
}
