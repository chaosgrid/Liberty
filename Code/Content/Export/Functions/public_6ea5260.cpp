#include "Content-PCH.h"

PROC_DECLARE(0x6ea5260, internal_6ea5260, public_6ea5260);
extern "C" NAKED register_t __cdecl internal_6ea5260()
{
    __asm
    {
/*FIXUP push offset public_6fb36f0 @0x6ea5260*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb36f0
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fcecd8], eax
        ret 
        UNREACHABLE_TRAP(0x6ea5260)
    }
}
