#include "Content-PCH.h"

PROC_DECLARE(0x6ec4260, internal_6ec4260, public_6ec4260);
extern "C" NAKED register_t __cdecl internal_6ec4260()
{
    __asm
    {
/*FIXUP push offset public_6fb5a38 @0x6ec4260*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb5a38
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fcefb8], eax
        ret 
        UNREACHABLE_TRAP(0x6ec4260)
    }
}
