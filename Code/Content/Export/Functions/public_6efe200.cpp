#include "Content-PCH.h"

PROC_DECLARE(0x6efe200, internal_6efe200, public_6efe200);
extern "C" NAKED register_t __cdecl internal_6efe200()
{
    __asm
    {
/*FIXUP push offset public_6fb3748 @0x6efe200*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb3748
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fcf3c4], eax
        ret 
        UNREACHABLE_TRAP(0x6efe200)
    }
}
